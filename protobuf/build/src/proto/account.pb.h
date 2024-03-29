// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: account.proto
// Protobuf C++ Version: 5.27.0-dev

#ifndef GOOGLE_PROTOBUF_INCLUDED_account_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_account_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5027000
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_account_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_account_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_account_2eproto;
class Account;
struct AccountDefaultTypeInternal;
extern AccountDefaultTypeInternal _Account_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google


// ===================================================================


// -------------------------------------------------------------------

class Account final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:Account) */ {
 public:
  inline Account() : Account(nullptr) {}
  ~Account() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR Account(
      ::google::protobuf::internal::ConstantInitialized);

  inline Account(const Account& from) : Account(nullptr, from) {}
  inline Account(Account&& from) noexcept
      : Account(nullptr, std::move(from)) {}
  inline Account& operator=(const Account& from) {
    CopyFrom(from);
    return *this;
  }
  inline Account& operator=(Account&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Account& default_instance() {
    return *internal_default_instance();
  }
  static inline const Account* internal_default_instance() {
    return reinterpret_cast<const Account*>(
        &_Account_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(Account& a, Account& b) { a.Swap(&b); }
  inline void Swap(Account* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Account* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Account* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<Account>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Account& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const Account& from) { Account::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Account* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "Account"; }

 protected:
  explicit Account(::google::protobuf::Arena* arena);
  Account(::google::protobuf::Arena* arena, const Account& from);
  Account(::google::protobuf::Arena* arena, Account&& from) noexcept
      : Account(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kUsernameFieldNumber = 1,
    kPasswordFieldNumber = 2,
    kEmailFieldNumber = 3,
  };
  // string username = 1;
  void clear_username() ;
  const std::string& username() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_username(Arg_&& arg, Args_... args);
  std::string* mutable_username();
  PROTOBUF_NODISCARD std::string* release_username();
  void set_allocated_username(std::string* value);

  private:
  const std::string& _internal_username() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_username(
      const std::string& value);
  std::string* _internal_mutable_username();

  public:
  // string password = 2;
  void clear_password() ;
  const std::string& password() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_password(Arg_&& arg, Args_... args);
  std::string* mutable_password();
  PROTOBUF_NODISCARD std::string* release_password();
  void set_allocated_password(std::string* value);

  private:
  const std::string& _internal_password() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_password(
      const std::string& value);
  std::string* _internal_mutable_password();

  public:
  // string email = 3;
  void clear_email() ;
  const std::string& email() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_email(Arg_&& arg, Args_... args);
  std::string* mutable_email();
  PROTOBUF_NODISCARD std::string* release_email();
  void set_allocated_email(std::string* value);

  private:
  const std::string& _internal_email() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_email(
      const std::string& value);
  std::string* _internal_mutable_email();

  public:
  // @@protoc_insertion_point(class_scope:Account)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 3, 0,
      37, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_Account_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::ArenaStringPtr username_;
    ::google::protobuf::internal::ArenaStringPtr password_;
    ::google::protobuf::internal::ArenaStringPtr email_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_account_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Account

// string username = 1;
inline void Account::clear_username() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.username_.ClearToEmpty();
}
inline const std::string& Account::username() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Account.username)
  return _internal_username();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Account::set_username(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.username_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:Account.username)
}
inline std::string* Account::mutable_username() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_username();
  // @@protoc_insertion_point(field_mutable:Account.username)
  return _s;
}
inline const std::string& Account::_internal_username() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.username_.Get();
}
inline void Account::_internal_set_username(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.username_.Set(value, GetArena());
}
inline std::string* Account::_internal_mutable_username() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.username_.Mutable( GetArena());
}
inline std::string* Account::release_username() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:Account.username)
  return _impl_.username_.Release();
}
inline void Account::set_allocated_username(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.username_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.username_.IsDefault()) {
          _impl_.username_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Account.username)
}

// string password = 2;
inline void Account::clear_password() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.password_.ClearToEmpty();
}
inline const std::string& Account::password() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Account.password)
  return _internal_password();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Account::set_password(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.password_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:Account.password)
}
inline std::string* Account::mutable_password() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_password();
  // @@protoc_insertion_point(field_mutable:Account.password)
  return _s;
}
inline const std::string& Account::_internal_password() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.password_.Get();
}
inline void Account::_internal_set_password(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.password_.Set(value, GetArena());
}
inline std::string* Account::_internal_mutable_password() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.password_.Mutable( GetArena());
}
inline std::string* Account::release_password() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:Account.password)
  return _impl_.password_.Release();
}
inline void Account::set_allocated_password(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.password_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.password_.IsDefault()) {
          _impl_.password_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Account.password)
}

// string email = 3;
inline void Account::clear_email() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.email_.ClearToEmpty();
}
inline const std::string& Account::email() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Account.email)
  return _internal_email();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Account::set_email(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.email_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:Account.email)
}
inline std::string* Account::mutable_email() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_email();
  // @@protoc_insertion_point(field_mutable:Account.email)
  return _s;
}
inline const std::string& Account::_internal_email() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.email_.Get();
}
inline void Account::_internal_set_email(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.email_.Set(value, GetArena());
}
inline std::string* Account::_internal_mutable_email() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.email_.Mutable( GetArena());
}
inline std::string* Account::release_email() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:Account.email)
  return _impl_.email_.Release();
}
inline void Account::set_allocated_email(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.email_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.email_.IsDefault()) {
          _impl_.email_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Account.email)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_account_2eproto_2epb_2eh
