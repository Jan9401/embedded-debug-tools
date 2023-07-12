# Copyright (c) 2023, Auterion AG
# SPDX-License-Identifier: BSD-3-Clause

"""
.. include:: skynode.md
"""

import time
from pathlib import Path
from .fmu import debug as fmu_debug, Fmu

import emdbg

class Skynode(Fmu):
    """
    Skynode Debug Bench with Logic Analyzer and Power relay
    """
    def __init__(self, elf: Path,
                 gdb: "emdbg.debug.remote.gdb.Interface",
                 nsh: "emdbg.serial.protocol.Nsh" = None,
                 power: "emdbg.power.base.Base" = None,
                 io: "emdbg.io.digilent.Digilent" = None):
        super().__init__(elf, gdb, nsh, power, io)

        if self.io is not None:
            self.sdio_cmd = self.io.gpio(0)
            self.sdio_clk = self.io.gpio(1)

    def disturb_sdcard_cmd_line(self, count: int = 15, delay: float = 0.1):
        """
        Toggle the CMD line of the SDIO interface via the Digilent scope to
        trigger an SDCard access failure.
        """
        self.sdio_cmd.set_output(self.sdio_cmd.Config.OpenDrain, self.sdio_cmd.Level.Low)
        time.sleep(1)
        for _ in range(count):
            self.sdio_cmd.high()
            time.sleep(delay)
            self.sdio_cmd.low()
            time.sleep(delay)
        self.sdio_cmd.set_input()

    def disturb_sdcard_clk_line(self, count: int = 5, delay: float = 0.1):
        """
        Toggle the CLK line of the SDIO interface via the Digilent scope to
        trigger an SDCard access failure.
        """
        self.sdio_clk.set_output(self.sdio_clk.Config.PushPull)
        for _ in range(count):
            self.sdio_clk.low()
            time.sleep(delay)
            self.sdio_clk.high()
            time.sleep(delay)
        self.sdio_clk.set_input()


# -----------------------------------------------------------------------------
def debug(px4_directory: Path, target: Path, serial: str = None,
          digilent: str = None, ui: str = None, commands: list[str] = None,
          with_rpyc: bool = False, keep_power_on: bool = True,
          upload: bool = True, backend: str = None) -> Skynode:
    """
    Configures `px4_debug.bench.fmu.bench()` with a YRelay as power connection.
    """
    power = emdbg.power.yocto_relay(channel=1, inverted=True)
    return fmu_debug(px4_directory, target, serial, digilent, power, ui,
                     commands, with_rpyc, keep_power_on, upload, backend,
                     _FmuClass=Skynode)


# -----------------------------------------------------------------------------
if __name__ == "__main__":
    import argparse, emdbg

    parser = argparse.ArgumentParser(description="Debug Skynode FMU")
    parser.add_argument(
        "--px4-dir",
        default=".",
        type=Path,
        help="The PX4 root directory you are working on.")
    parser.add_argument(
        "--target",
        default="px4_fmu-v5x",
        help="The target you want to debug.")
    group = parser.add_mutually_exclusive_group(required=True)
    group.add_argument(
        "--jlink",
        default=False,
        action="store_true",
        help="Use a J-Link debug probe")
    group.add_argument(
        "--openocd",
        default=False,
        action="store_true",
        help="Use an OpenOCD debug probe")
    group.add_argument(
        "--remote",
        help="Connect to a remote GDB server: 'IP:PORT'")
    parser.add_argument(
        "--turn-off",
        default=False,
        action="store_true",
        help="Turn Skynode off via relay after debugging.")
    parser.add_argument(
        "--ui",
        default="cmd",
        choices=["tui", "gdbgui", "cmd", "batch"],
        help="The user interface you want to use.")
    parser.add_argument(
        "-v",
        dest="verbosity",
        action="count",
        default=0,
        help="Verbosity level.")
    parser.add_argument(
        "-ex",
        dest="commands",
        action="append",
        help="Extra GDB commands.")
    args = parser.parse_args()
    emdbg.logger.configure(args.verbosity)
    backend = args.remote
    if args.openocd: backend = "openocd"
    if args.jlink: backend = "jlink"

    with debug(args.px4_dir, args.target, ui=args.ui, commands=args.commands,
               backend=backend, keep_power_on=not args.turn_off) as gdb_call:
        exit(gdb_call)
