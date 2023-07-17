// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/trace_packet_defaults.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrace_5fpacket_5fdefaults_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrace_5fpacket_5fdefaults_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4023000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4023003 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
#include "protos/perfetto/trace/profiling/profile_packet.pb.h"
#include "protos/perfetto/trace/track_event/track_event.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2ftrace_5fpacket_5fdefaults_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2ftrace_5fpacket_5fdefaults_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_protos_2fperfetto_2ftrace_2ftrace_5fpacket_5fdefaults_2eproto;
namespace perfetto {
namespace protos {
class TracePacketDefaults;
struct TracePacketDefaultsDefaultTypeInternal;
extern TracePacketDefaultsDefaultTypeInternal _TracePacketDefaults_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template <>
::perfetto::protos::TracePacketDefaults* Arena::CreateMaybeMessage<::perfetto::protos::TracePacketDefaults>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace perfetto {
namespace protos {

// ===================================================================


// -------------------------------------------------------------------

class TracePacketDefaults final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.TracePacketDefaults) */ {
 public:
  inline TracePacketDefaults() : TracePacketDefaults(nullptr) {}
  ~TracePacketDefaults() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR TracePacketDefaults(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TracePacketDefaults(const TracePacketDefaults& from);
  TracePacketDefaults(TracePacketDefaults&& from) noexcept
    : TracePacketDefaults() {
    *this = ::std::move(from);
  }

  inline TracePacketDefaults& operator=(const TracePacketDefaults& from) {
    CopyFrom(from);
    return *this;
  }
  inline TracePacketDefaults& operator=(TracePacketDefaults&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const TracePacketDefaults& default_instance() {
    return *internal_default_instance();
  }
  static inline const TracePacketDefaults* internal_default_instance() {
    return reinterpret_cast<const TracePacketDefaults*>(
               &_TracePacketDefaults_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TracePacketDefaults& a, TracePacketDefaults& b) {
    a.Swap(&b);
  }
  inline void Swap(TracePacketDefaults* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(TracePacketDefaults* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TracePacketDefaults* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TracePacketDefaults>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const TracePacketDefaults& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const TracePacketDefaults& from) {
    TracePacketDefaults::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TracePacketDefaults* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.TracePacketDefaults";
  }
  protected:
  explicit TracePacketDefaults(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTrackEventDefaultsFieldNumber = 11,
    kPerfSampleDefaultsFieldNumber = 12,
    kTimestampClockIdFieldNumber = 58,
  };
  // optional .perfetto.protos.TrackEventDefaults track_event_defaults = 11;
  bool has_track_event_defaults() const;
  void clear_track_event_defaults() ;
  const ::perfetto::protos::TrackEventDefaults& track_event_defaults() const;
  PROTOBUF_NODISCARD ::perfetto::protos::TrackEventDefaults* release_track_event_defaults();
  ::perfetto::protos::TrackEventDefaults* mutable_track_event_defaults();
  void set_allocated_track_event_defaults(::perfetto::protos::TrackEventDefaults* track_event_defaults);
  private:
  const ::perfetto::protos::TrackEventDefaults& _internal_track_event_defaults() const;
  ::perfetto::protos::TrackEventDefaults* _internal_mutable_track_event_defaults();
  public:
  void unsafe_arena_set_allocated_track_event_defaults(
      ::perfetto::protos::TrackEventDefaults* track_event_defaults);
  ::perfetto::protos::TrackEventDefaults* unsafe_arena_release_track_event_defaults();
  // optional .perfetto.protos.PerfSampleDefaults perf_sample_defaults = 12;
  bool has_perf_sample_defaults() const;
  void clear_perf_sample_defaults() ;
  const ::perfetto::protos::PerfSampleDefaults& perf_sample_defaults() const;
  PROTOBUF_NODISCARD ::perfetto::protos::PerfSampleDefaults* release_perf_sample_defaults();
  ::perfetto::protos::PerfSampleDefaults* mutable_perf_sample_defaults();
  void set_allocated_perf_sample_defaults(::perfetto::protos::PerfSampleDefaults* perf_sample_defaults);
  private:
  const ::perfetto::protos::PerfSampleDefaults& _internal_perf_sample_defaults() const;
  ::perfetto::protos::PerfSampleDefaults* _internal_mutable_perf_sample_defaults();
  public:
  void unsafe_arena_set_allocated_perf_sample_defaults(
      ::perfetto::protos::PerfSampleDefaults* perf_sample_defaults);
  ::perfetto::protos::PerfSampleDefaults* unsafe_arena_release_perf_sample_defaults();
  // optional uint32 timestamp_clock_id = 58;
  bool has_timestamp_clock_id() const;
  void clear_timestamp_clock_id() ;
  ::uint32_t timestamp_clock_id() const;
  void set_timestamp_clock_id(::uint32_t value);

  private:
  ::uint32_t _internal_timestamp_clock_id() const;
  void _internal_set_timestamp_clock_id(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.TracePacketDefaults)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::perfetto::protos::TrackEventDefaults* track_event_defaults_;
    ::perfetto::protos::PerfSampleDefaults* perf_sample_defaults_;
    ::uint32_t timestamp_clock_id_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftrace_5fpacket_5fdefaults_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// TracePacketDefaults

// optional uint32 timestamp_clock_id = 58;
inline bool TracePacketDefaults::has_timestamp_clock_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void TracePacketDefaults::clear_timestamp_clock_id() {
  _impl_.timestamp_clock_id_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::uint32_t TracePacketDefaults::timestamp_clock_id() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TracePacketDefaults.timestamp_clock_id)
  return _internal_timestamp_clock_id();
}
inline void TracePacketDefaults::set_timestamp_clock_id(::uint32_t value) {
  _internal_set_timestamp_clock_id(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.TracePacketDefaults.timestamp_clock_id)
}
inline ::uint32_t TracePacketDefaults::_internal_timestamp_clock_id() const {
  return _impl_.timestamp_clock_id_;
}
inline void TracePacketDefaults::_internal_set_timestamp_clock_id(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.timestamp_clock_id_ = value;
}

// optional .perfetto.protos.TrackEventDefaults track_event_defaults = 11;
inline bool TracePacketDefaults::has_track_event_defaults() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.track_event_defaults_ != nullptr);
  return value;
}
inline const ::perfetto::protos::TrackEventDefaults& TracePacketDefaults::_internal_track_event_defaults() const {
  const ::perfetto::protos::TrackEventDefaults* p = _impl_.track_event_defaults_;
  return p != nullptr ? *p : reinterpret_cast<const ::perfetto::protos::TrackEventDefaults&>(
      ::perfetto::protos::_TrackEventDefaults_default_instance_);
}
inline const ::perfetto::protos::TrackEventDefaults& TracePacketDefaults::track_event_defaults() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TracePacketDefaults.track_event_defaults)
  return _internal_track_event_defaults();
}
inline void TracePacketDefaults::unsafe_arena_set_allocated_track_event_defaults(
    ::perfetto::protos::TrackEventDefaults* track_event_defaults) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.track_event_defaults_);
  }
  _impl_.track_event_defaults_ = track_event_defaults;
  if (track_event_defaults) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:perfetto.protos.TracePacketDefaults.track_event_defaults)
}
inline ::perfetto::protos::TrackEventDefaults* TracePacketDefaults::release_track_event_defaults() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::perfetto::protos::TrackEventDefaults* temp = _impl_.track_event_defaults_;
  _impl_.track_event_defaults_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::perfetto::protos::TrackEventDefaults* TracePacketDefaults::unsafe_arena_release_track_event_defaults() {
  // @@protoc_insertion_point(field_release:perfetto.protos.TracePacketDefaults.track_event_defaults)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::perfetto::protos::TrackEventDefaults* temp = _impl_.track_event_defaults_;
  _impl_.track_event_defaults_ = nullptr;
  return temp;
}
inline ::perfetto::protos::TrackEventDefaults* TracePacketDefaults::_internal_mutable_track_event_defaults() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.track_event_defaults_ == nullptr) {
    auto* p = CreateMaybeMessage<::perfetto::protos::TrackEventDefaults>(GetArenaForAllocation());
    _impl_.track_event_defaults_ = p;
  }
  return _impl_.track_event_defaults_;
}
inline ::perfetto::protos::TrackEventDefaults* TracePacketDefaults::mutable_track_event_defaults() {
  ::perfetto::protos::TrackEventDefaults* _msg = _internal_mutable_track_event_defaults();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TracePacketDefaults.track_event_defaults)
  return _msg;
}
inline void TracePacketDefaults::set_allocated_track_event_defaults(::perfetto::protos::TrackEventDefaults* track_event_defaults) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.track_event_defaults_);
  }
  if (track_event_defaults) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(track_event_defaults));
    if (message_arena != submessage_arena) {
      track_event_defaults = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, track_event_defaults, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.track_event_defaults_ = track_event_defaults;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.TracePacketDefaults.track_event_defaults)
}

// optional .perfetto.protos.PerfSampleDefaults perf_sample_defaults = 12;
inline bool TracePacketDefaults::has_perf_sample_defaults() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.perf_sample_defaults_ != nullptr);
  return value;
}
inline const ::perfetto::protos::PerfSampleDefaults& TracePacketDefaults::_internal_perf_sample_defaults() const {
  const ::perfetto::protos::PerfSampleDefaults* p = _impl_.perf_sample_defaults_;
  return p != nullptr ? *p : reinterpret_cast<const ::perfetto::protos::PerfSampleDefaults&>(
      ::perfetto::protos::_PerfSampleDefaults_default_instance_);
}
inline const ::perfetto::protos::PerfSampleDefaults& TracePacketDefaults::perf_sample_defaults() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TracePacketDefaults.perf_sample_defaults)
  return _internal_perf_sample_defaults();
}
inline void TracePacketDefaults::unsafe_arena_set_allocated_perf_sample_defaults(
    ::perfetto::protos::PerfSampleDefaults* perf_sample_defaults) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.perf_sample_defaults_);
  }
  _impl_.perf_sample_defaults_ = perf_sample_defaults;
  if (perf_sample_defaults) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:perfetto.protos.TracePacketDefaults.perf_sample_defaults)
}
inline ::perfetto::protos::PerfSampleDefaults* TracePacketDefaults::release_perf_sample_defaults() {
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::perfetto::protos::PerfSampleDefaults* temp = _impl_.perf_sample_defaults_;
  _impl_.perf_sample_defaults_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::perfetto::protos::PerfSampleDefaults* TracePacketDefaults::unsafe_arena_release_perf_sample_defaults() {
  // @@protoc_insertion_point(field_release:perfetto.protos.TracePacketDefaults.perf_sample_defaults)
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::perfetto::protos::PerfSampleDefaults* temp = _impl_.perf_sample_defaults_;
  _impl_.perf_sample_defaults_ = nullptr;
  return temp;
}
inline ::perfetto::protos::PerfSampleDefaults* TracePacketDefaults::_internal_mutable_perf_sample_defaults() {
  _impl_._has_bits_[0] |= 0x00000002u;
  if (_impl_.perf_sample_defaults_ == nullptr) {
    auto* p = CreateMaybeMessage<::perfetto::protos::PerfSampleDefaults>(GetArenaForAllocation());
    _impl_.perf_sample_defaults_ = p;
  }
  return _impl_.perf_sample_defaults_;
}
inline ::perfetto::protos::PerfSampleDefaults* TracePacketDefaults::mutable_perf_sample_defaults() {
  ::perfetto::protos::PerfSampleDefaults* _msg = _internal_mutable_perf_sample_defaults();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TracePacketDefaults.perf_sample_defaults)
  return _msg;
}
inline void TracePacketDefaults::set_allocated_perf_sample_defaults(::perfetto::protos::PerfSampleDefaults* perf_sample_defaults) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.perf_sample_defaults_);
  }
  if (perf_sample_defaults) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(perf_sample_defaults));
    if (message_arena != submessage_arena) {
      perf_sample_defaults = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, perf_sample_defaults, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.perf_sample_defaults_ = perf_sample_defaults;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.TracePacketDefaults.perf_sample_defaults)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrace_5fpacket_5fdefaults_2eproto_2epb_2eh