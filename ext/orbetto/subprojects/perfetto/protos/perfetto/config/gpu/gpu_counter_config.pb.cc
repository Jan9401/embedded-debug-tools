// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/gpu/gpu_counter_config.proto

#include "protos/perfetto/config/gpu/gpu_counter_config.pb.h"

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
PROTOBUF_CONSTEXPR GpuCounterConfig::GpuCounterConfig(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.counter_ids_)*/ {}

  , /*decltype(_impl_.counter_period_ns_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.instrumented_sampling_)*/ false

  , /*decltype(_impl_.fix_gpu_clock_)*/ false
} {}
struct GpuCounterConfigDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GpuCounterConfigDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~GpuCounterConfigDefaultTypeInternal() {}
  union {
    GpuCounterConfig _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GpuCounterConfigDefaultTypeInternal _GpuCounterConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::GpuCounterConfig, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::GpuCounterConfig, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::GpuCounterConfig, _impl_.counter_period_ns_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::GpuCounterConfig, _impl_.counter_ids_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::GpuCounterConfig, _impl_.instrumented_sampling_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::GpuCounterConfig, _impl_.fix_gpu_clock_),
    0,
    ~0u,
    1,
    2,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 12, -1, sizeof(::perfetto::protos::GpuCounterConfig)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_GpuCounterConfig_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n3protos/perfetto/config/gpu/gpu_counter"
    "_config.proto\022\017perfetto.protos\"x\n\020GpuCou"
    "nterConfig\022\031\n\021counter_period_ns\030\001 \001(\004\022\023\n"
    "\013counter_ids\030\002 \003(\r\022\035\n\025instrumented_sampl"
    "ing\030\003 \001(\010\022\025\n\rfix_gpu_clock\030\004 \001(\010"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto = {
    false,
    false,
    192,
    descriptor_table_protodef_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto,
    "protos/perfetto/config/gpu/gpu_counter_config.proto",
    &descriptor_table_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto(&descriptor_table_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto);
namespace perfetto {
namespace protos {
// ===================================================================

class GpuCounterConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<GpuCounterConfig>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(GpuCounterConfig, _impl_._has_bits_);
  static void set_has_counter_period_ns(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_instrumented_sampling(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_fix_gpu_clock(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

GpuCounterConfig::GpuCounterConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.GpuCounterConfig)
}
GpuCounterConfig::GpuCounterConfig(const GpuCounterConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GpuCounterConfig* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.counter_ids_) { from._impl_.counter_ids_ }

    , decltype(_impl_.counter_period_ns_) {}

    , decltype(_impl_.instrumented_sampling_) {}

    , decltype(_impl_.fix_gpu_clock_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.counter_period_ns_, &from._impl_.counter_period_ns_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.fix_gpu_clock_) -
    reinterpret_cast<char*>(&_impl_.counter_period_ns_)) + sizeof(_impl_.fix_gpu_clock_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.GpuCounterConfig)
}

inline void GpuCounterConfig::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.counter_ids_) { arena }

    , decltype(_impl_.counter_period_ns_) { ::uint64_t{0u} }

    , decltype(_impl_.instrumented_sampling_) { false }

    , decltype(_impl_.fix_gpu_clock_) { false }

  };
}

GpuCounterConfig::~GpuCounterConfig() {
  // @@protoc_insertion_point(destructor:perfetto.protos.GpuCounterConfig)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GpuCounterConfig::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.counter_ids_.~RepeatedField();
}

void GpuCounterConfig::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GpuCounterConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.GpuCounterConfig)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_counter_ids()->Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&_impl_.counter_period_ns_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.fix_gpu_clock_) -
        reinterpret_cast<char*>(&_impl_.counter_period_ns_)) + sizeof(_impl_.fix_gpu_clock_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GpuCounterConfig::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint64 counter_period_ns = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _Internal::set_has_counter_period_ns(&has_bits);
          _impl_.counter_period_ns_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated uint32 counter_ids = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          ptr -= 1;
          do {
            ptr += 1;
            _internal_add_counter_ids(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<16>(ptr));
        } else if (static_cast<::uint8_t>(tag) == 18) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedUInt32Parser(_internal_mutable_counter_ids(), ptr, ctx);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional bool instrumented_sampling = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 24)) {
          _Internal::set_has_instrumented_sampling(&has_bits);
          _impl_.instrumented_sampling_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional bool fix_gpu_clock = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 32)) {
          _Internal::set_has_fix_gpu_clock(&has_bits);
          _impl_.fix_gpu_clock_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::uint8_t* GpuCounterConfig::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.GpuCounterConfig)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint64 counter_period_ns = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        1, this->_internal_counter_period_ns(), target);
  }

  // repeated uint32 counter_ids = 2;
  for (int i = 0, n = this->_internal_counter_ids_size(); i < n; ++i) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        2, this->_internal_counter_ids(i), target);
  }

  // optional bool instrumented_sampling = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        3, this->_internal_instrumented_sampling(), target);
  }

  // optional bool fix_gpu_clock = 4;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        4, this->_internal_fix_gpu_clock(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.GpuCounterConfig)
  return target;
}

::size_t GpuCounterConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.GpuCounterConfig)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated uint32 counter_ids = 2;
  {
    std::size_t data_size = ::_pbi::WireFormatLite::UInt32Size(
        this->_internal_counter_ids())
    ;
    std::size_t tag_size = std::size_t{1} *
        ::_pbi::FromIntSize(this->_internal_counter_ids_size());
    ;
    total_size += tag_size + data_size;
  }

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional uint64 counter_period_ns = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_counter_period_ns());
    }

    // optional bool instrumented_sampling = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 2;
    }

    // optional bool fix_gpu_clock = 4;
    if (cached_has_bits & 0x00000004u) {
      total_size += 2;
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GpuCounterConfig::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GpuCounterConfig::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GpuCounterConfig::GetClassData() const { return &_class_data_; }


void GpuCounterConfig::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GpuCounterConfig*>(&to_msg);
  auto& from = static_cast<const GpuCounterConfig&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.GpuCounterConfig)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.counter_ids_.MergeFrom(from._impl_.counter_ids_);
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.counter_period_ns_ = from._impl_.counter_period_ns_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.instrumented_sampling_ = from._impl_.instrumented_sampling_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.fix_gpu_clock_ = from._impl_.fix_gpu_clock_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GpuCounterConfig::CopyFrom(const GpuCounterConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.GpuCounterConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GpuCounterConfig::IsInitialized() const {
  return true;
}

void GpuCounterConfig::InternalSwap(GpuCounterConfig* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.counter_ids_.InternalSwap(&other->_impl_.counter_ids_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GpuCounterConfig, _impl_.fix_gpu_clock_)
      + sizeof(GpuCounterConfig::_impl_.fix_gpu_clock_)
      - PROTOBUF_FIELD_OFFSET(GpuCounterConfig, _impl_.counter_period_ns_)>(
          reinterpret_cast<char*>(&_impl_.counter_period_ns_),
          reinterpret_cast<char*>(&other->_impl_.counter_period_ns_));
}

::PROTOBUF_NAMESPACE_ID::Metadata GpuCounterConfig::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto_getter, &descriptor_table_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto_once,
      file_level_metadata_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::GpuCounterConfig*
Arena::CreateMaybeMessage< ::perfetto::protos::GpuCounterConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::GpuCounterConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"