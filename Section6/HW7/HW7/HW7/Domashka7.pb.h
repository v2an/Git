// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Domashka7.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Domashka7_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Domashka7_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/service.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Domashka7_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Domashka7_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Domashka7_2eproto;
class FullName;
struct FullNameDefaultTypeInternal;
extern FullNameDefaultTypeInternal _FullName_default_instance_;
class Student;
struct StudentDefaultTypeInternal;
extern StudentDefaultTypeInternal _Student_default_instance_;
class StudentGroup;
struct StudentGroupDefaultTypeInternal;
extern StudentGroupDefaultTypeInternal _StudentGroup_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::FullName* Arena::CreateMaybeMessage<::FullName>(Arena*);
template<> ::Student* Arena::CreateMaybeMessage<::Student>(Arena*);
template<> ::StudentGroup* Arena::CreateMaybeMessage<::StudentGroup>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class FullName final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:FullName) */ {
 public:
  inline FullName() : FullName(nullptr) {}
  ~FullName() override;
  explicit constexpr FullName(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FullName(const FullName& from);
  FullName(FullName&& from) noexcept
    : FullName() {
    *this = ::std::move(from);
  }

  inline FullName& operator=(const FullName& from) {
    CopyFrom(from);
    return *this;
  }
  inline FullName& operator=(FullName&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const FullName& default_instance() {
    return *internal_default_instance();
  }
  static inline const FullName* internal_default_instance() {
    return reinterpret_cast<const FullName*>(
               &_FullName_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(FullName& a, FullName& b) {
    a.Swap(&b);
  }
  inline void Swap(FullName* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FullName* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FullName* New() const final {
    return new FullName();
  }

  FullName* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FullName>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const FullName& from);
  void MergeFrom(const FullName& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FullName* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "FullName";
  }
  protected:
  explicit FullName(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kSurenameFieldNumber = 2,
    kFathernameFieldNumber = 3,
  };
  // string Name = 1;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string Surename = 2;
  void clear_surename();
  const std::string& surename() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_surename(ArgT0&& arg0, ArgT... args);
  std::string* mutable_surename();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_surename();
  void set_allocated_surename(std::string* surename);
  private:
  const std::string& _internal_surename() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_surename(const std::string& value);
  std::string* _internal_mutable_surename();
  public:

  // string Fathername = 3;
  void clear_fathername();
  const std::string& fathername() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_fathername(ArgT0&& arg0, ArgT... args);
  std::string* mutable_fathername();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_fathername();
  void set_allocated_fathername(std::string* fathername);
  private:
  const std::string& _internal_fathername() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_fathername(const std::string& value);
  std::string* _internal_mutable_fathername();
  public:

  // @@protoc_insertion_point(class_scope:FullName)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr surename_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr fathername_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Domashka7_2eproto;
};
// -------------------------------------------------------------------

class Student final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Student) */ {
 public:
  inline Student() : Student(nullptr) {}
  ~Student() override;
  explicit constexpr Student(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Student(const Student& from);
  Student(Student&& from) noexcept
    : Student() {
    *this = ::std::move(from);
  }

  inline Student& operator=(const Student& from) {
    CopyFrom(from);
    return *this;
  }
  inline Student& operator=(Student&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const Student& default_instance() {
    return *internal_default_instance();
  }
  static inline const Student* internal_default_instance() {
    return reinterpret_cast<const Student*>(
               &_Student_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Student& a, Student& b) {
    a.Swap(&b);
  }
  inline void Swap(Student* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Student* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Student* New() const final {
    return new Student();
  }

  Student* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Student>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Student& from);
  void MergeFrom(const Student& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Student* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Student";
  }
  protected:
  explicit Student(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGradesFieldNumber = 2,
    kNameOfStudentFieldNumber = 1,
    kAvrgGradesFieldNumber = 3,
  };
  // repeated int32 Grades = 2;
  int grades_size() const;
  private:
  int _internal_grades_size() const;
  public:
  void clear_grades();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_grades(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_grades() const;
  void _internal_add_grades(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_grades();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 grades(int index) const;
  void set_grades(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_grades(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      grades() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_grades();

  // .FullName NameOfStudent = 1;
  bool has_nameofstudent() const;
  private:
  bool _internal_has_nameofstudent() const;
  public:
  void clear_nameofstudent();
  const ::FullName& nameofstudent() const;
  PROTOBUF_FUTURE_MUST_USE_RESULT ::FullName* release_nameofstudent();
  ::FullName* mutable_nameofstudent();
  void set_allocated_nameofstudent(::FullName* nameofstudent);
  private:
  const ::FullName& _internal_nameofstudent() const;
  ::FullName* _internal_mutable_nameofstudent();
  public:
  void unsafe_arena_set_allocated_nameofstudent(
      ::FullName* nameofstudent);
  ::FullName* unsafe_arena_release_nameofstudent();

  // double AvrgGrades = 3;
  void clear_avrggrades();
  double avrggrades() const;
  void set_avrggrades(double value);
  private:
  double _internal_avrggrades() const;
  void _internal_set_avrggrades(double value);
  public:

  // @@protoc_insertion_point(class_scope:Student)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > grades_;
  mutable std::atomic<int> _grades_cached_byte_size_;
  ::FullName* nameofstudent_;
  double avrggrades_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Domashka7_2eproto;
};
// -------------------------------------------------------------------

class StudentGroup final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:StudentGroup) */ {
 public:
  inline StudentGroup() : StudentGroup(nullptr) {}
  ~StudentGroup() override;
  explicit constexpr StudentGroup(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StudentGroup(const StudentGroup& from);
  StudentGroup(StudentGroup&& from) noexcept
    : StudentGroup() {
    *this = ::std::move(from);
  }

  inline StudentGroup& operator=(const StudentGroup& from) {
    CopyFrom(from);
    return *this;
  }
  inline StudentGroup& operator=(StudentGroup&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const StudentGroup& default_instance() {
    return *internal_default_instance();
  }
  static inline const StudentGroup* internal_default_instance() {
    return reinterpret_cast<const StudentGroup*>(
               &_StudentGroup_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(StudentGroup& a, StudentGroup& b) {
    a.Swap(&b);
  }
  inline void Swap(StudentGroup* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StudentGroup* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StudentGroup* New() const final {
    return new StudentGroup();
  }

  StudentGroup* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StudentGroup>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StudentGroup& from);
  void MergeFrom(const StudentGroup& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StudentGroup* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "StudentGroup";
  }
  protected:
  explicit StudentGroup(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStudentGrpFieldNumber = 1,
  };
  // repeated .Student StudentGrp = 1;
  int studentgrp_size() const;
  private:
  int _internal_studentgrp_size() const;
  public:
  void clear_studentgrp();
  ::Student* mutable_studentgrp(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Student >*
      mutable_studentgrp();
  private:
  const ::Student& _internal_studentgrp(int index) const;
  ::Student* _internal_add_studentgrp();
  public:
  const ::Student& studentgrp(int index) const;
  ::Student* add_studentgrp();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Student >&
      studentgrp() const;

  // @@protoc_insertion_point(class_scope:StudentGroup)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Student > studentgrp_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Domashka7_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FullName

// string Name = 1;
inline void FullName::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& FullName::name() const {
  // @@protoc_insertion_point(field_get:FullName.Name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FullName::set_name(ArgT0&& arg0, ArgT... args) {
 
 name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:FullName.Name)
}
inline std::string* FullName::mutable_name() {
  // @@protoc_insertion_point(field_mutable:FullName.Name)
  return _internal_mutable_name();
}
inline const std::string& FullName::_internal_name() const {
  return name_.Get();
}
inline void FullName::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* FullName::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* FullName::release_name() {
  // @@protoc_insertion_point(field_release:FullName.Name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void FullName::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:FullName.Name)
}

// string Surename = 2;
inline void FullName::clear_surename() {
  surename_.ClearToEmpty();
}
inline const std::string& FullName::surename() const {
  // @@protoc_insertion_point(field_get:FullName.Surename)
  return _internal_surename();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FullName::set_surename(ArgT0&& arg0, ArgT... args) {
 
 surename_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:FullName.Surename)
}
inline std::string* FullName::mutable_surename() {
  // @@protoc_insertion_point(field_mutable:FullName.Surename)
  return _internal_mutable_surename();
}
inline const std::string& FullName::_internal_surename() const {
  return surename_.Get();
}
inline void FullName::_internal_set_surename(const std::string& value) {
  
  surename_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* FullName::_internal_mutable_surename() {
  
  return surename_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* FullName::release_surename() {
  // @@protoc_insertion_point(field_release:FullName.Surename)
  return surename_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void FullName::set_allocated_surename(std::string* surename) {
  if (surename != nullptr) {
    
  } else {
    
  }
  surename_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), surename,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:FullName.Surename)
}

// string Fathername = 3;
inline void FullName::clear_fathername() {
  fathername_.ClearToEmpty();
}
inline const std::string& FullName::fathername() const {
  // @@protoc_insertion_point(field_get:FullName.Fathername)
  return _internal_fathername();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FullName::set_fathername(ArgT0&& arg0, ArgT... args) {
 
 fathername_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:FullName.Fathername)
}
inline std::string* FullName::mutable_fathername() {
  // @@protoc_insertion_point(field_mutable:FullName.Fathername)
  return _internal_mutable_fathername();
}
inline const std::string& FullName::_internal_fathername() const {
  return fathername_.Get();
}
inline void FullName::_internal_set_fathername(const std::string& value) {
  
  fathername_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* FullName::_internal_mutable_fathername() {
  
  return fathername_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* FullName::release_fathername() {
  // @@protoc_insertion_point(field_release:FullName.Fathername)
  return fathername_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void FullName::set_allocated_fathername(std::string* fathername) {
  if (fathername != nullptr) {
    
  } else {
    
  }
  fathername_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), fathername,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:FullName.Fathername)
}

// -------------------------------------------------------------------

// Student

// .FullName NameOfStudent = 1;
inline bool Student::_internal_has_nameofstudent() const {
  return this != internal_default_instance() && nameofstudent_ != nullptr;
}
inline bool Student::has_nameofstudent() const {
  return _internal_has_nameofstudent();
}
inline void Student::clear_nameofstudent() {
  if (GetArenaForAllocation() == nullptr && nameofstudent_ != nullptr) {
    delete nameofstudent_;
  }
  nameofstudent_ = nullptr;
}
inline const ::FullName& Student::_internal_nameofstudent() const {
  const ::FullName* p = nameofstudent_;
  return p != nullptr ? *p : reinterpret_cast<const ::FullName&>(
      ::_FullName_default_instance_);
}
inline const ::FullName& Student::nameofstudent() const {
  // @@protoc_insertion_point(field_get:Student.NameOfStudent)
  return _internal_nameofstudent();
}
inline void Student::unsafe_arena_set_allocated_nameofstudent(
    ::FullName* nameofstudent) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(nameofstudent_);
  }
  nameofstudent_ = nameofstudent;
  if (nameofstudent) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Student.NameOfStudent)
}
inline ::FullName* Student::release_nameofstudent() {
  
  ::FullName* temp = nameofstudent_;
  nameofstudent_ = nullptr;
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::FullName* Student::unsafe_arena_release_nameofstudent() {
  // @@protoc_insertion_point(field_release:Student.NameOfStudent)
  
  ::FullName* temp = nameofstudent_;
  nameofstudent_ = nullptr;
  return temp;
}
inline ::FullName* Student::_internal_mutable_nameofstudent() {
  
  if (nameofstudent_ == nullptr) {
    auto* p = CreateMaybeMessage<::FullName>(GetArenaForAllocation());
    nameofstudent_ = p;
  }
  return nameofstudent_;
}
inline ::FullName* Student::mutable_nameofstudent() {
  // @@protoc_insertion_point(field_mutable:Student.NameOfStudent)
  return _internal_mutable_nameofstudent();
}
inline void Student::set_allocated_nameofstudent(::FullName* nameofstudent) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete nameofstudent_;
  }
  if (nameofstudent) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<::FullName>::GetOwningArena(nameofstudent);
    if (message_arena != submessage_arena) {
      nameofstudent = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, nameofstudent, submessage_arena);
    }
    
  } else {
    
  }
  nameofstudent_ = nameofstudent;
  // @@protoc_insertion_point(field_set_allocated:Student.NameOfStudent)
}

// repeated int32 Grades = 2;
inline int Student::_internal_grades_size() const {
  return grades_.size();
}
inline int Student::grades_size() const {
  return _internal_grades_size();
}
inline void Student::clear_grades() {
  grades_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::_internal_grades(int index) const {
  return grades_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::grades(int index) const {
  // @@protoc_insertion_point(field_get:Student.Grades)
  return _internal_grades(index);
}
inline void Student::set_grades(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  grades_.Set(index, value);
  // @@protoc_insertion_point(field_set:Student.Grades)
}
inline void Student::_internal_add_grades(::PROTOBUF_NAMESPACE_ID::int32 value) {
  grades_.Add(value);
}
inline void Student::add_grades(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_grades(value);
  // @@protoc_insertion_point(field_add:Student.Grades)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Student::_internal_grades() const {
  return grades_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Student::grades() const {
  // @@protoc_insertion_point(field_list:Student.Grades)
  return _internal_grades();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Student::_internal_mutable_grades() {
  return &grades_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Student::mutable_grades() {
  // @@protoc_insertion_point(field_mutable_list:Student.Grades)
  return _internal_mutable_grades();
}

// double AvrgGrades = 3;
inline void Student::clear_avrggrades() {
  avrggrades_ = 0;
}
inline double Student::_internal_avrggrades() const {
  return avrggrades_;
}
inline double Student::avrggrades() const {
  // @@protoc_insertion_point(field_get:Student.AvrgGrades)
  return _internal_avrggrades();
}
inline void Student::_internal_set_avrggrades(double value) {
  
  avrggrades_ = value;
}
inline void Student::set_avrggrades(double value) {
  _internal_set_avrggrades(value);
  // @@protoc_insertion_point(field_set:Student.AvrgGrades)
}

// -------------------------------------------------------------------

// StudentGroup

// repeated .Student StudentGrp = 1;
inline int StudentGroup::_internal_studentgrp_size() const {
  return studentgrp_.size();
}
inline int StudentGroup::studentgrp_size() const {
  return _internal_studentgrp_size();
}
inline void StudentGroup::clear_studentgrp() {
  studentgrp_.Clear();
}
inline ::Student* StudentGroup::mutable_studentgrp(int index) {
  // @@protoc_insertion_point(field_mutable:StudentGroup.StudentGrp)
  return studentgrp_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Student >*
StudentGroup::mutable_studentgrp() {
  // @@protoc_insertion_point(field_mutable_list:StudentGroup.StudentGrp)
  return &studentgrp_;
}
inline const ::Student& StudentGroup::_internal_studentgrp(int index) const {
  return studentgrp_.Get(index);
}
inline const ::Student& StudentGroup::studentgrp(int index) const {
  // @@protoc_insertion_point(field_get:StudentGroup.StudentGrp)
  return _internal_studentgrp(index);
}
inline ::Student* StudentGroup::_internal_add_studentgrp() {
  return studentgrp_.Add();
}
inline ::Student* StudentGroup::add_studentgrp() {
  // @@protoc_insertion_point(field_add:StudentGroup.StudentGrp)
  return _internal_add_studentgrp();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Student >&
StudentGroup::studentgrp() const {
  // @@protoc_insertion_point(field_list:StudentGroup.StudentGrp)
  return studentgrp_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Domashka7_2eproto
