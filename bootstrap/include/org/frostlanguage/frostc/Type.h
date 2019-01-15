#pragma once
#include "frost_c.h"
#include "Type_types.h"
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;
typedef struct frost$core$String frost$core$String;
#include "org/frostlanguage/frostc/Type/Kind_types.h"
#include "org/frostlanguage/frostc/Position_types.h"
#include "frost/core/Bit_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct org$frostlanguage$frostc$ClassDecl$GenericParameter org$frostlanguage$frostc$ClassDecl$GenericParameter;
typedef struct org$frostlanguage$frostc$MethodDecl$GenericParameter org$frostlanguage$frostc$MethodDecl$GenericParameter;
typedef struct org$frostlanguage$frostc$MethodRef org$frostlanguage$frostc$MethodRef;
#include "frost/core/UInt64_types.h"
#include "frost/core/Real64_types.h"
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
typedef struct frost$collections$HashMap frost$collections$HashMap;

void org$frostlanguage$frostc$Type$init$frost$core$String$org$frostlanguage$frostc$Type$Kind$org$frostlanguage$frostc$Position(org$frostlanguage$frostc$Type* self, frost$core$String* p_name, org$frostlanguage$frostc$Type$Kind p_typeKind, org$frostlanguage$frostc$Position p_position);
void org$frostlanguage$frostc$Type$init$frost$core$String$org$frostlanguage$frostc$Type$Kind$org$frostlanguage$frostc$Position$frost$core$Bit(org$frostlanguage$frostc$Type* self, frost$core$String* p_name, org$frostlanguage$frostc$Type$Kind p_typeKind, org$frostlanguage$frostc$Position p_position, frost$core$Bit p_resolved);
void org$frostlanguage$frostc$Type$init$frost$core$String$org$frostlanguage$frostc$Type$Kind$frost$core$Int64(org$frostlanguage$frostc$Type* self, frost$core$String* p_name, org$frostlanguage$frostc$Type$Kind p_typeKind, frost$core$Int64 p_size);
void org$frostlanguage$frostc$Type$init$frost$core$String$org$frostlanguage$frostc$Type$Kind$org$frostlanguage$frostc$Position$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT$frost$core$Bit(org$frostlanguage$frostc$Type* self, frost$core$String* p_name, org$frostlanguage$frostc$Type$Kind p_typeKind, org$frostlanguage$frostc$Position p_position, frost$collections$ListView* p_subtypes, frost$core$Bit p_resolved);
void org$frostlanguage$frostc$Type$init$frost$core$String$org$frostlanguage$frostc$Type$Kind$org$frostlanguage$frostc$Position$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT$frost$core$Bit$frost$core$Int64(org$frostlanguage$frostc$Type* self, frost$core$String* p_name, org$frostlanguage$frostc$Type$Kind p_typeKind, org$frostlanguage$frostc$Position p_position, frost$collections$ListView* p_subtypes, frost$core$Bit p_resolved, frost$core$Int64 p_priority);
void org$frostlanguage$frostc$Type$init$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT(org$frostlanguage$frostc$Type* self, frost$collections$ListView* p_subtypes);
void org$frostlanguage$frostc$Type$init$org$frostlanguage$frostc$ClassDecl$GenericParameter(org$frostlanguage$frostc$Type* self, org$frostlanguage$frostc$ClassDecl$GenericParameter* p_param);
void org$frostlanguage$frostc$Type$init$org$frostlanguage$frostc$MethodDecl$GenericParameter(org$frostlanguage$frostc$Type* self, org$frostlanguage$frostc$MethodDecl$GenericParameter* p_param);
void org$frostlanguage$frostc$Type$init$org$frostlanguage$frostc$MethodRef(org$frostlanguage$frostc$Type* self, org$frostlanguage$frostc$MethodRef* p_ref);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$generic$org$frostlanguage$frostc$Type$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Type* p_base, frost$collections$ListView* p_arguments);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$methodType$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT$org$frostlanguage$frostc$Type$frost$core$Int64$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$Type$Kind p_kind, frost$collections$ListView* p_parameterTypes, org$frostlanguage$frostc$Type* p_returnType, frost$core$Int64 p_priority);
frost$core$Int64 org$frostlanguage$frostc$Type$get_size$R$frost$core$Int64(org$frostlanguage$frostc$Type* self);
frost$core$Bit org$frostlanguage$frostc$Type$$EQ$org$frostlanguage$frostc$Type$R$frost$core$Bit(org$frostlanguage$frostc$Type* self, org$frostlanguage$frostc$Type* p_other);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$Void$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$Null$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$Object$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$Any$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$Class$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$Immutable$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$Value$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$StringType$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$RegularExpression$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$BuiltinInt8$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$BuiltinInt16$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$BuiltinInt32$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$BuiltinInt64$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$BuiltinUInt8$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$BuiltinUInt16$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$BuiltinUInt32$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$BuiltinUInt64$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$BuiltinFloat32$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$BuiltinFloat64$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$Int8$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$Int16$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$Int32$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$Int64$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$UInt8$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$UInt16$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$UInt32$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$UInt64$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$Real32$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$Real64$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$Char8$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$Char16$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$Char32$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$Bit$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$IntLiteral$frost$core$UInt64$R$org$frostlanguage$frostc$Type(frost$core$UInt64 p_value);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$NegatedIntLiteral$frost$core$UInt64$R$org$frostlanguage$frostc$Type(frost$core$UInt64 p_value);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$RealLiteral$frost$core$Real64$R$org$frostlanguage$frostc$Type(frost$core$Real64 p_value);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$BitLiteral$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$ClassLiteral$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Type* p_t);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$BuiltinBit$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$Iterator$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$Iterable$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$Frost$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$Method$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$MutableMethod$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$WeakOf$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Type* p_t);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$pointerTo$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Type* p_t);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$ArrayOf$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Type* p_t);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$ImmutableArrayOf$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Type* p_t);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$RangeOf$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Type* p_t);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$SteppedRangeOf$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Type* p_t);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$SteppedRangeOf$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Type* p_endpoint, org$frostlanguage$frostc$Type* p_step);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$ChoiceData$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$Invalid$R$org$frostlanguage$frostc$Type();
frost$core$Bit org$frostlanguage$frostc$Type$get_isNumber$R$frost$core$Bit(org$frostlanguage$frostc$Type* self);
frost$core$Bit org$frostlanguage$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(org$frostlanguage$frostc$Type* self);
frost$core$Bit org$frostlanguage$frostc$Type$get_isSigned$R$frost$core$Bit(org$frostlanguage$frostc$Type* self);
frost$core$Bit org$frostlanguage$frostc$Type$get_isReal$R$frost$core$Bit(org$frostlanguage$frostc$Type* self);
frost$core$Bit org$frostlanguage$frostc$Type$get_isChar$R$frost$core$Bit(org$frostlanguage$frostc$Type* self);
frost$core$Bit org$frostlanguage$frostc$Type$get_isNumeric$R$frost$core$Bit(org$frostlanguage$frostc$Type* self);
frost$core$Bit org$frostlanguage$frostc$Type$get_isClass$R$frost$core$Bit(org$frostlanguage$frostc$Type* self);
frost$core$Bit org$frostlanguage$frostc$Type$get_isClassLiteral$R$frost$core$Bit(org$frostlanguage$frostc$Type* self);
frost$core$Bit org$frostlanguage$frostc$Type$get_isMethod$R$frost$core$Bit(org$frostlanguage$frostc$Type* self);
frost$core$Bit org$frostlanguage$frostc$Type$get_isPointer$R$frost$core$Bit(org$frostlanguage$frostc$Type* self);
frost$core$Bit org$frostlanguage$frostc$Type$get_isRange$R$frost$core$Bit(org$frostlanguage$frostc$Type* self);
frost$core$Bit org$frostlanguage$frostc$Type$get_isSteppedRange$R$frost$core$Bit(org$frostlanguage$frostc$Type* self);
frost$core$Bit org$frostlanguage$frostc$Type$get_isNullable$R$frost$core$Bit(org$frostlanguage$frostc$Type* self);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$nullable$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Type* self);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$nonnullable$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Type* self);
frost$core$Int64 org$frostlanguage$frostc$Type$get_parameterCount$R$frost$core$Int64(org$frostlanguage$frostc$Type* self);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$parameterType$frost$core$Int64$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Type* self, frost$core$Int64 p_i);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$get_returnType$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Type* self);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$union$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Type* self, org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Type* p_other);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$intersection$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Type* self, org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Type* p_other);
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlanguage$frostc$Type$GT$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Type* self, frost$collections$HashMap* p_types);
frost$core$Int64 org$frostlanguage$frostc$Type$get_hash$R$frost$core$Int64(org$frostlanguage$frostc$Type* self);
frost$core$String* org$frostlanguage$frostc$Type$convert$R$frost$core$String(org$frostlanguage$frostc$Type* self);
void org$frostlanguage$frostc$Type$cleanup(org$frostlanguage$frostc$Type* self);

