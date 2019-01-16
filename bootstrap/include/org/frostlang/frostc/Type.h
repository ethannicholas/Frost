#pragma once
#include "frost_c.h"
#include "Type_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct frost$core$String frost$core$String;
#include "org/frostlang/frostc/Type/Kind_types.h"
#include "org/frostlang/frostc/Position_types.h"
#include "frost/core/Bit_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct org$frostlang$frostc$ClassDecl$GenericParameter org$frostlang$frostc$ClassDecl$GenericParameter;
typedef struct org$frostlang$frostc$MethodDecl$GenericParameter org$frostlang$frostc$MethodDecl$GenericParameter;
typedef struct org$frostlang$frostc$MethodRef org$frostlang$frostc$MethodRef;
#include "frost/core/UInt64_types.h"
#include "frost/core/Real64_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct frost$collections$HashMap frost$collections$HashMap;

void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position(org$frostlang$frostc$Type* self, frost$core$String* p_name, org$frostlang$frostc$Type$Kind p_typeKind, org$frostlang$frostc$Position p_position);
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit(org$frostlang$frostc$Type* self, frost$core$String* p_name, org$frostlang$frostc$Type$Kind p_typeKind, org$frostlang$frostc$Position p_position, frost$core$Bit p_resolved);
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64(org$frostlang$frostc$Type* self, frost$core$String* p_name, org$frostlang$frostc$Type$Kind p_typeKind, frost$core$Int64 p_size);
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit(org$frostlang$frostc$Type* self, frost$core$String* p_name, org$frostlang$frostc$Type$Kind p_typeKind, org$frostlang$frostc$Position p_position, frost$collections$ListView* p_subtypes, frost$core$Bit p_resolved);
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int64(org$frostlang$frostc$Type* self, frost$core$String* p_name, org$frostlang$frostc$Type$Kind p_typeKind, org$frostlang$frostc$Position p_position, frost$collections$ListView* p_subtypes, frost$core$Bit p_resolved, frost$core$Int64 p_priority);
void org$frostlang$frostc$Type$init$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$Type* self, frost$collections$ListView* p_subtypes);
void org$frostlang$frostc$Type$init$org$frostlang$frostc$ClassDecl$GenericParameter(org$frostlang$frostc$Type* self, org$frostlang$frostc$ClassDecl$GenericParameter* p_param);
void org$frostlang$frostc$Type$init$org$frostlang$frostc$MethodDecl$GenericParameter(org$frostlang$frostc$Type* self, org$frostlang$frostc$MethodDecl$GenericParameter* p_param);
void org$frostlang$frostc$Type$init$org$frostlang$frostc$MethodRef(org$frostlang$frostc$Type* self, org$frostlang$frostc$MethodRef* p_ref);
org$frostlang$frostc$Type* org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* p_base, frost$collections$ListView* p_arguments);
org$frostlang$frostc$Type* org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$Position p_position, org$frostlang$frostc$Type$Kind p_kind, frost$collections$ListView* p_parameterTypes, org$frostlang$frostc$Type* p_returnType, frost$core$Int64 p_priority);
frost$core$Int64 org$frostlang$frostc$Type$get_size$R$frost$core$Int64(org$frostlang$frostc$Type* self);
frost$core$Bit org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Type* self, org$frostlang$frostc$Type* p_other);
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Null$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Immutable$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RegularExpression$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt16$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt32$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinInt64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt16$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt32$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinUInt64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinFloat32$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinFloat64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt16$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt32$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Real32$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Real64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char16$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Char32$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$IntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 p_value);
org$frostlang$frostc$Type* org$frostlang$frostc$Type$NegatedIntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 p_value);
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RealLiteral$frost$core$Real64$R$org$frostlang$frostc$Type(frost$core$Real64 p_value);
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BitLiteral$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ClassLiteral$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* p_t);
org$frostlang$frostc$Type* org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Iterator$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Iterable$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Frost$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* p_t);
org$frostlang$frostc$Type* org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* p_t);
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ArrayOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* p_t);
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ImmutableArrayOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* p_t);
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* p_t);
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* p_t);
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* p_endpoint, org$frostlang$frostc$Type* p_step);
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type();
frost$core$Bit org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(org$frostlang$frostc$Type* self);
frost$core$Bit org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(org$frostlang$frostc$Type* self);
frost$core$Bit org$frostlang$frostc$Type$get_isSigned$R$frost$core$Bit(org$frostlang$frostc$Type* self);
frost$core$Bit org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(org$frostlang$frostc$Type* self);
frost$core$Bit org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit(org$frostlang$frostc$Type* self);
frost$core$Bit org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit(org$frostlang$frostc$Type* self);
frost$core$Bit org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(org$frostlang$frostc$Type* self);
frost$core$Bit org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit(org$frostlang$frostc$Type* self);
frost$core$Bit org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(org$frostlang$frostc$Type* self);
frost$core$Bit org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit(org$frostlang$frostc$Type* self);
frost$core$Bit org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit(org$frostlang$frostc$Type* self);
frost$core$Bit org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit(org$frostlang$frostc$Type* self);
frost$core$Bit org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit(org$frostlang$frostc$Type* self);
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* self);
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* self);
frost$core$Int64 org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64(org$frostlang$frostc$Type* self);
org$frostlang$frostc$Type* org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* self, frost$core$Int64 p_i);
org$frostlang$frostc$Type* org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* self);
org$frostlang$frostc$Type* org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* self, org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Type* p_other);
org$frostlang$frostc$Type* org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* self, org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Type* p_other);
org$frostlang$frostc$Type* org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* self, frost$collections$HashMap* p_types);
frost$core$Int64 org$frostlang$frostc$Type$get_hash$R$frost$core$Int64(org$frostlang$frostc$Type* self);
frost$core$String* org$frostlang$frostc$Type$convert$R$frost$core$String(org$frostlang$frostc$Type* self);
void org$frostlang$frostc$Type$cleanup(org$frostlang$frostc$Type* self);

