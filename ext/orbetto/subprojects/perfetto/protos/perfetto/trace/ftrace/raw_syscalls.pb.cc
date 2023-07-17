// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/raw_syscalls.proto

#include "protos/perfetto/trace/ftrace/raw_syscalls.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = ::PROTOBUF_NAMESPACE_ID::internal;
namespace perfetto {
namespace protos {
template <typename>
PROTOBUF_CONSTEXPR SysEnterFtraceEvent::SysEnterFtraceEvent(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.args_)*/ {}

  , /*decltype(_impl_.id_)*/ ::int64_t{0}
} {}
struct SysEnterFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SysEnterFtraceEventDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~SysEnterFtraceEventDefaultTypeInternal() {}
  union {
    SysEnterFtraceEvent _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SysEnterFtraceEventDefaultTypeInternal _SysEnterFtraceEvent_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR SysExitFtraceEvent::SysExitFtraceEvent(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.id_)*/ ::int64_t{0}

  , /*decltype(_impl_.ret_)*/ ::int64_t{0}
} {}
struct SysExitFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SysExitFtraceEventDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~SysExitFtraceEventDefaultTypeInternal() {}
  union {
    SysExitFtraceEvent _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SysExitFtraceEventDefaultTypeInternal _SysExitFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2fraw_5fsyscalls_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fftrace_2fraw_5fsyscalls_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fftrace_2fraw_5fsyscalls_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fraw_5fsyscalls_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SysEnterFtraceEvent, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SysEnterFtraceEvent, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SysEnterFtraceEvent, _impl_.id_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SysEnterFtraceEvent, _impl_.args_),
    0,
    ~0u,
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SysExitFtraceEvent, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SysExitFtraceEvent, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SysExitFtraceEvent, _impl_.id_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SysExitFtraceEvent, _impl_.ret_),
    0,
    1,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 10, -1, sizeof(::perfetto::protos::SysEnterFtraceEvent)},
        { 12, 22, -1, sizeof(::perfetto::protos::SysExitFtraceEvent)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_SysEnterFtraceEvent_default_instance_._instance,
    &::perfetto::protos::_SysExitFtraceEvent_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2ftrace_2fftrace_2fraw_5fsyscalls_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n/protos/perfetto/trace/ftrace/raw_sysca"
    "lls.proto\022\017perfetto.protos\"/\n\023SysEnterFt"
    "raceEvent\022\n\n\002id\030\001 \001(\003\022\014\n\004args\030\002 \003(\004\"-\n\022S"
    "ysExitFtraceEvent\022\n\n\002id\030\001 \001(\003\022\013\n\003ret\030\002 \001"
    "(\003"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fraw_5fsyscalls_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fraw_5fsyscalls_2eproto = {
    false,
    false,
    162,
    descriptor_table_protodef_protos_2fperfetto_2ftrace_2fftrace_2fraw_5fsyscalls_2eproto,
    "protos/perfetto/trace/ftrace/raw_syscalls.proto",
    &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fraw_5fsyscalls_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fraw_5fsyscalls_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2fraw_5fsyscalls_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fftrace_2fraw_5fsyscalls_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fftrace_2fraw_5fsyscalls_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fraw_5fsyscalls_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fraw_5fsyscalls_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2ftrace_2fftrace_2fraw_5fsyscalls_2eproto(&descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fraw_5fsyscalls_2eproto);
namespace perfetto {
namespace protos {
// ===================================================================

class SysEnterFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<SysEnterFtraceEvent>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(SysEnterFtraceEvent, _impl_._has_bits_);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

SysEnterFtraceEvent::SysEnterFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.SysEnterFtraceEvent)
}
SysEnterFtraceEvent::SysEnterFtraceEvent(const SysEnterFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SysEnterFtraceEvent* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.args_) { from._impl_.args_ }

    , decltype(_impl_.id_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.id_ = from._impl_.id_;
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.SysEnterFtraceEvent)
}

inline void SysEnterFtraceEvent::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.args_) { arena }

    , decltype(_impl_.id_) { ::int64_t{0} }

  };
}

SysEnterFtraceEvent::~SysEnterFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.SysEnterFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SysEnterFtraceEvent::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.args_.~RepeatedField();
}

void SysEnterFtraceEvent::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SysEnterFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.SysEnterFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_args()->Clear();
  _impl_.id_ = ::int64_t{0};
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SysEnterFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int64 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _Internal::set_has_id(&has_bits);
          _impl_.id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated uint64 args = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          ptr -= 1;
          do {
            ptr += 1;
            _internal_add_args(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<16>(ptr));
        } else if (static_cast<::uint8_t>(tag) == 18) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedUInt64Parser(_internal_mutable_args(), ptr, ctx);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* SysEnterFtraceEvent::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.SysEnterFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional int64 id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(
        1, this->_internal_id(), target);
  }

  // repeated uint64 args = 2;
  for (int i = 0, n = this->_internal_args_size(); i < n; ++i) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        2, this->_internal_args(i), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.SysEnterFtraceEvent)
  return target;
}

::size_t SysEnterFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.SysEnterFtraceEvent)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated uint64 args = 2;
  {
    std::size_t data_size = ::_pbi::WireFormatLite::UInt64Size(
        this->_internal_args())
    ;
    std::size_t tag_size = std::size_t{1} *
        ::_pbi::FromIntSize(this->_internal_args_size());
    ;
    total_size += tag_size + data_size;
  }

  // optional int64 id = 1;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
        this->_internal_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SysEnterFtraceEvent::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SysEnterFtraceEvent::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SysEnterFtraceEvent::GetClassData() const { return &_class_data_; }


void SysEnterFtraceEvent::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SysEnterFtraceEvent*>(&to_msg);
  auto& from = static_cast<const SysEnterFtraceEvent&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.SysEnterFtraceEvent)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.args_.MergeFrom(from._impl_.args_);
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_set_id(from._internal_id());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SysEnterFtraceEvent::CopyFrom(const SysEnterFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.SysEnterFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SysEnterFtraceEvent::IsInitialized() const {
  return true;
}

void SysEnterFtraceEvent::InternalSwap(SysEnterFtraceEvent* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.args_.InternalSwap(&other->_impl_.args_);

  swap(_impl_.id_, other->_impl_.id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SysEnterFtraceEvent::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fraw_5fsyscalls_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fraw_5fsyscalls_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2fraw_5fsyscalls_2eproto[0]);
}
// ===================================================================

class SysExitFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<SysExitFtraceEvent>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(SysExitFtraceEvent, _impl_._has_bits_);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_ret(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

SysExitFtraceEvent::SysExitFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.SysExitFtraceEvent)
}
SysExitFtraceEvent::SysExitFtraceEvent(const SysExitFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.SysExitFtraceEvent)
}

inline void SysExitFtraceEvent::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.id_) { ::int64_t{0} }

    , decltype(_impl_.ret_) { ::int64_t{0} }

  };
}

SysExitFtraceEvent::~SysExitFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.SysExitFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SysExitFtraceEvent::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}

void SysExitFtraceEvent::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SysExitFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.SysExitFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&_impl_.id_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.ret_) -
        reinterpret_cast<char*>(&_impl_.id_)) + sizeof(_impl_.ret_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SysExitFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int64 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _Internal::set_has_id(&has_bits);
          _impl_.id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional int64 ret = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          _Internal::set_has_ret(&has_bits);
          _impl_.ret_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* SysExitFtraceEvent::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.SysExitFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional int64 id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(
        1, this->_internal_id(), target);
  }

  // optional int64 ret = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(
        2, this->_internal_ret(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.SysExitFtraceEvent)
  return target;
}

::size_t SysExitFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.SysExitFtraceEvent)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional int64 id = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
          this->_internal_id());
    }

    // optional int64 ret = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
          this->_internal_ret());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SysExitFtraceEvent::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SysExitFtraceEvent::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SysExitFtraceEvent::GetClassData() const { return &_class_data_; }


void SysExitFtraceEvent::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SysExitFtraceEvent*>(&to_msg);
  auto& from = static_cast<const SysExitFtraceEvent&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.SysExitFtraceEvent)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.id_ = from._impl_.id_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.ret_ = from._impl_.ret_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SysExitFtraceEvent::CopyFrom(const SysExitFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.SysExitFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SysExitFtraceEvent::IsInitialized() const {
  return true;
}

void SysExitFtraceEvent::InternalSwap(SysExitFtraceEvent* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SysExitFtraceEvent, _impl_.ret_)
      + sizeof(SysExitFtraceEvent::_impl_.ret_)
      - PROTOBUF_FIELD_OFFSET(SysExitFtraceEvent, _impl_.id_)>(
          reinterpret_cast<char*>(&_impl_.id_),
          reinterpret_cast<char*>(&other->_impl_.id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SysExitFtraceEvent::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fraw_5fsyscalls_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fraw_5fsyscalls_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2fraw_5fsyscalls_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::SysEnterFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::SysEnterFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::SysEnterFtraceEvent >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::SysExitFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::SysExitFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::SysExitFtraceEvent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"