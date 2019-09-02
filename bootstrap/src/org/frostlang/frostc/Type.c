#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/HashKey.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/core/Weak.h"
#include "frost/core/Object.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/ClassDecl/GenericParameter.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/MethodRef.h"
#include "frost/core/MutableString.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/UInt64.h"
#include "frost/core/Real64.h"
#include "frost/collections/HashSet.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/collections/HashMap.h"
#include "org/frostlang/frostc/Pair.h"
#include "frost/collections/MapView.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit$shim(org$frostlang$frostc$Type* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(p0, ((org$frostlang$frostc$Type*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Type$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$Type$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &org$frostlang$frostc$Type$_frost$core$Equatable, { org$frostlang$frostc$Type$get_hash$R$frost$core$Int} };

static frost$core$String $s1;
org$frostlang$frostc$Type$class_type org$frostlang$frostc$Type$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, (ITable*) &org$frostlang$frostc$Type$_frost$collections$HashKey, { org$frostlang$frostc$Type$get_asString$R$frost$core$String, org$frostlang$frostc$Type$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit, org$frostlang$frostc$Type$get_size$R$frost$core$Int, org$frostlang$frostc$Type$get_hasSubtypes$R$frost$core$Bit, org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT, org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit$shim, org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit, org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit, org$frostlang$frostc$Type$get_isSigned$R$frost$core$Bit, org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit, org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit, org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit, org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit, org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit, org$frostlang$frostc$Type$get_isTuple$R$frost$core$Bit, org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit, org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit, org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit, org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit, org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit, org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int, org$frostlang$frostc$Type$parameterType$frost$core$Int$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_hash$R$frost$core$Int} };

typedef frost$core$Bit (*$fn2)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn6)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn7)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn28)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn29)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn30)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn31)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn32)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn33)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn56)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn57)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn58)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn59)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn60)(frost$core$Object*);
typedef frost$core$Bit (*$fn61)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn62)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn63)(frost$core$Object*);
typedef frost$core$String* (*$fn82)(frost$core$Object*);
typedef frost$core$String* (*$fn95)(frost$core$Object*);
typedef frost$core$Int (*$fn104)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn105)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn106)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn107)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn108)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$Iterator* (*$fn122)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn123)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn124)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn134)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn135)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn136)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn137)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn153)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn154)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn155)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn156)(frost$core$Object*);
typedef frost$core$String* (*$fn166)(frost$core$Object*);
typedef frost$core$Bit (*$fn172)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn176)(frost$core$Object*);
typedef frost$core$String* (*$fn178)(frost$core$Object*);
typedef frost$core$String* (*$fn181)(frost$core$Object*);
typedef frost$core$String* (*$fn183)(frost$core$Object*);
typedef frost$core$String* (*$fn186)(frost$core$Object*);
typedef frost$core$String* (*$fn188)(frost$core$Object*);
typedef frost$core$String* (*$fn191)(frost$core$Object*);
typedef frost$core$String* (*$fn195)(frost$core$Object*);
typedef frost$core$Bit (*$fn198)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn199)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn200)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn201)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn202)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn203)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn204)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn234)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn235)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn245)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn246)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn247)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn248)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn262)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn269)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn276)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn283)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn287)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn292)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn298)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn299)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn300)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn301)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn302)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn320)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn321)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn322)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn323)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn324)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn344)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn345)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn346)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn347)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn348)(frost$collections$ListView*);
typedef frost$core$Bit (*$fn366)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn367)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn368)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn369)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn370)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn371)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn372)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn373)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn374)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn375)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn376)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn377)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn378)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn379)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn380)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn381)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn382)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn454)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn455)(frost$collections$MapView*);
typedef frost$core$Int (*$fn456)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn457)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn458)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn459)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn460)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn461)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn462)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn463)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn505)(frost$collections$HashKey*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 25, -4810824236343314128, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x72\x65\x73\x6f\x6c\x76\x65\x64\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29", 185, -4094487666733104239, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x73\x69\x7a\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29", 141, -2724121925548774985, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x69\x6e\x69\x74\x28\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x73\x75\x62\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x2c\x20\x72\x65\x73\x6f\x6c\x76\x65\x64\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x70\x72\x69\x6f\x72\x69\x74\x79\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29", 274, -8894722506806083159, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, 5702812244853852844, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3d", 11, -6332101992058322673, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, 5702812244853852844, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x3d", 10, 6100168015718721257, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x74\x75\x70\x6c\x65\x28\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 156, 5221116226980720398, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x3e\x28", 4, 5596484150606072277, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, -4273821116298159575, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, -895118643158701403, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, -5497142298437553839, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x3a\x20", 14, -3775131800234382932, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28", 15, 3926445080533411332, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28\x2d", 16, -2488816111207655509, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x65\x61\x6c\x4c\x69\x74\x65\x72\x61\x6c\x28", 12, -3618193066842889572, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -5345919044195032932, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -5345919044195032932, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -5345919044195032932, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 6698344523302557533, NULL };
static frost$core$String $s237 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -8998979431191354836, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 8922589686803027616, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 6698344523302557533, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 8922589686803027616, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 3838718962482138768, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 3838718962482138768, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s274 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s275 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s281 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -2500227668252979985, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -7689706274330328756, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 95, -6421234203817919051, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s338 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 117, 1927758743463322527, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s364 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s413 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 8922589686803027616, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x36\x34", 2, 573522890330722151, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 8922589686803027616, NULL };
static frost$core$String $s431 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x36\x34", 2, 573522890330722151, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s436 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s441 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s444 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s446 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s450 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s451 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s452 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s467 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s468 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 208, 5208730858812988615, NULL };
static frost$core$String $s470 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s472 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s474 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s478 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s480 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s486 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s490 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s492 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s493 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s496 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s503 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s504 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 209, 9129659544783396720, NULL };

void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3) {

frost$core$Bit _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:85
_1 = (frost$core$Bit) {false};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit(param0, param1, param2, param3, _1);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$core$Bit param4) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Symbol$Kind local12;
org$frostlang$frostc$Symbol$Kind local13;
frost$core$Weak* _1;
frost$core$Weak* _2;
frost$core$Object* _3;
frost$core$Object* _5;
frost$core$Weak** _7;
frost$core$Weak* _8;
frost$core$Object* _9;
frost$core$Weak** _11;
frost$core$Object* _13;
frost$core$Weak* _16;
frost$core$Weak* _17;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$Weak** _22;
frost$core$Weak* _23;
frost$core$Object* _24;
frost$core$Weak** _26;
frost$core$Object* _28;
frost$core$Equatable* _30;
frost$core$Equatable* _31;
frost$core$Int _32;
frost$core$Int* _35;
org$frostlang$frostc$Type$Kind _37;
org$frostlang$frostc$Type$Kind _40;
frost$core$Equatable* _41;
$fn2 _42;
frost$core$Bit _43;
bool _44;
frost$core$Object* _45;
frost$core$Object* _47;
frost$core$Equatable* _50;
frost$core$Equatable* _51;
frost$core$Int _52;
frost$core$Int* _55;
org$frostlang$frostc$Type$Kind _57;
org$frostlang$frostc$Type$Kind _60;
frost$core$Equatable* _61;
$fn3 _62;
frost$core$Bit _63;
bool _64;
frost$core$Object* _65;
frost$core$Object* _67;
frost$core$Equatable* _70;
frost$core$Equatable* _71;
frost$core$Int _72;
frost$core$Int* _75;
org$frostlang$frostc$Type$Kind _77;
org$frostlang$frostc$Type$Kind _80;
frost$core$Equatable* _81;
$fn4 _82;
frost$core$Bit _83;
bool _84;
frost$core$Object* _85;
frost$core$Object* _87;
frost$core$Equatable* _90;
frost$core$Equatable* _91;
frost$core$Int _92;
frost$core$Int* _95;
org$frostlang$frostc$Type$Kind _97;
org$frostlang$frostc$Type$Kind _100;
frost$core$Equatable* _101;
$fn5 _102;
frost$core$Bit _103;
bool _104;
frost$core$Object* _105;
frost$core$Object* _107;
frost$core$Equatable* _110;
frost$core$Equatable* _111;
frost$core$Int _112;
frost$core$Int* _115;
org$frostlang$frostc$Type$Kind _117;
org$frostlang$frostc$Type$Kind _120;
frost$core$Equatable* _121;
$fn6 _122;
frost$core$Bit _123;
bool _124;
frost$core$Object* _125;
frost$core$Object* _127;
frost$core$Equatable* _130;
frost$core$Equatable* _131;
frost$core$Int _132;
frost$core$Int* _135;
org$frostlang$frostc$Type$Kind _137;
org$frostlang$frostc$Type$Kind _140;
frost$core$Equatable* _141;
$fn7 _142;
frost$core$Bit _143;
bool _144;
frost$core$Object* _145;
frost$core$Object* _147;
frost$core$Int _150;
org$frostlang$frostc$Type$Kind* _154;
org$frostlang$frostc$Symbol* _157;
org$frostlang$frostc$Position* _158;
frost$core$Bit* _161;
frost$core$Object* _164;
org$frostlang$frostc$FixedArray** _166;
org$frostlang$frostc$FixedArray* _167;
frost$core$Object* _168;
org$frostlang$frostc$FixedArray** _170;
org$frostlang$frostc$Symbol* _173;
frost$core$Int _174;
frost$core$Int* _177;
org$frostlang$frostc$Symbol$Kind _179;
org$frostlang$frostc$Symbol$Kind _182;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:43
FROST_ASSERT(32 == sizeof(frost$core$Weak));
_1 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
_2 = _1;
_3 = ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_2, _3);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &param0->genericClassParameter;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->genericClassParameter;
*_11 = _1;
_13 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:46
FROST_ASSERT(32 == sizeof(frost$core$Weak));
_16 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
_17 = _16;
_18 = ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_17, _18);
_20 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = &param0->genericMethodParameter;
_23 = *_22;
_24 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = &param0->genericMethodParameter;
*_26 = _16;
_28 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_28);
org$frostlang$frostc$Type$Kind$wrapper* $tmp8;
$tmp8 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp8->value = param2;
_30 = ((frost$core$Equatable*) $tmp8);
_31 = _30;
_32 = (frost$core$Int) {12u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:88:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_35 = &(&local1)->$rawValue;
*_35 = _32;
_37 = *(&local1);
*(&local0) = _37;
_40 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp9;
$tmp9 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp9->value = _40;
_41 = ((frost$core$Equatable*) $tmp9);
ITable* $tmp10 = _31->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp10 = $tmp10->next;
}
_42 = $tmp10->methods[1];
_43 = _42(_31, _41);
_44 = _43.value;
_45 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_47);
if (_44) goto block7; else goto block2;
block7:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp11;
$tmp11 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp11->value = param2;
_50 = ((frost$core$Equatable*) $tmp11);
_51 = _50;
_52 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:88:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_55 = &(&local3)->$rawValue;
*_55 = _52;
_57 = *(&local3);
*(&local2) = _57;
_60 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp12;
$tmp12 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp12->value = _60;
_61 = ((frost$core$Equatable*) $tmp12);
ITable* $tmp13 = _51->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp13 = $tmp13->next;
}
_62 = $tmp13->methods[1];
_63 = _62(_51, _61);
_64 = _63.value;
_65 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_65);
_67 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_67);
if (_64) goto block6; else goto block2;
block6:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp14;
$tmp14 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp14->value = param2;
_70 = ((frost$core$Equatable*) $tmp14);
_71 = _70;
_72 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:89:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_75 = &(&local5)->$rawValue;
*_75 = _72;
_77 = *(&local5);
*(&local4) = _77;
_80 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp15;
$tmp15 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp15->value = _80;
_81 = ((frost$core$Equatable*) $tmp15);
ITable* $tmp16 = _71->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp16 = $tmp16->next;
}
_82 = $tmp16->methods[1];
_83 = _82(_71, _81);
_84 = _83.value;
_85 = ((frost$core$Object*) _81);
frost$core$Frost$unref$frost$core$Object$Q(_85);
_87 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_87);
if (_84) goto block5; else goto block2;
block5:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp17;
$tmp17 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp17->value = param2;
_90 = ((frost$core$Equatable*) $tmp17);
_91 = _90;
_92 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:89:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_95 = &(&local7)->$rawValue;
*_95 = _92;
_97 = *(&local7);
*(&local6) = _97;
_100 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp18;
$tmp18 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp18->value = _100;
_101 = ((frost$core$Equatable*) $tmp18);
ITable* $tmp19 = _91->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp19 = $tmp19->next;
}
_102 = $tmp19->methods[1];
_103 = _102(_91, _101);
_104 = _103.value;
_105 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_105);
_107 = ((frost$core$Object*) _90);
frost$core$Frost$unref$frost$core$Object$Q(_107);
if (_104) goto block4; else goto block2;
block4:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp20;
$tmp20 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp20->value = param2;
_110 = ((frost$core$Equatable*) $tmp20);
_111 = _110;
_112 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:90:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_115 = &(&local9)->$rawValue;
*_115 = _112;
_117 = *(&local9);
*(&local8) = _117;
_120 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp21;
$tmp21 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp21->value = _120;
_121 = ((frost$core$Equatable*) $tmp21);
ITable* $tmp22 = _111->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp22 = $tmp22->next;
}
_122 = $tmp22->methods[1];
_123 = _122(_111, _121);
_124 = _123.value;
_125 = ((frost$core$Object*) _121);
frost$core$Frost$unref$frost$core$Object$Q(_125);
_127 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_127);
if (_124) goto block3; else goto block2;
block3:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp23;
$tmp23 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp23->value = param2;
_130 = ((frost$core$Equatable*) $tmp23);
_131 = _130;
_132 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:90:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_135 = &(&local11)->$rawValue;
*_135 = _132;
_137 = *(&local11);
*(&local10) = _137;
_140 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp24;
$tmp24 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp24->value = _140;
_141 = ((frost$core$Equatable*) $tmp24);
ITable* $tmp25 = _131->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp25 = $tmp25->next;
}
_142 = $tmp25->methods[1];
_143 = _142(_131, _141);
_144 = _143.value;
_145 = ((frost$core$Object*) _141);
frost$core$Frost$unref$frost$core$Object$Q(_145);
_147 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_147);
if (_144) goto block1; else goto block2;
block2:;
_150 = (frost$core$Int) {91u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s26, _150, &$s27);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:92
_154 = &param0->typeKind;
*_154 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:93
_157 = ((org$frostlang$frostc$Symbol*) param0);
_158 = &_157->position;
*_158 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:94
_161 = &param0->resolved;
*_161 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:95
_164 = ((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_164);
_166 = &param0->_subtypes;
_167 = *_166;
_168 = ((frost$core$Object*) _167);
frost$core$Frost$unref$frost$core$Object$Q(_168);
_170 = &param0->_subtypes;
*_170 = ((org$frostlang$frostc$FixedArray*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:96
_173 = ((org$frostlang$frostc$Symbol*) param0);
_174 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Type.frost:96:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_177 = &(&local13)->$rawValue;
*_177 = _174;
_179 = *(&local13);
*(&local12) = _179;
_182 = *(&local12);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(_173, _182, param3, param1);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, frost$core$Int param3) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Symbol$Kind local12;
org$frostlang$frostc$Symbol$Kind local13;
frost$core$Weak* _1;
frost$core$Weak* _2;
frost$core$Object* _3;
frost$core$Object* _5;
frost$core$Weak** _7;
frost$core$Weak* _8;
frost$core$Object* _9;
frost$core$Weak** _11;
frost$core$Object* _13;
frost$core$Weak* _16;
frost$core$Weak* _17;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$Weak** _22;
frost$core$Weak* _23;
frost$core$Object* _24;
frost$core$Weak** _26;
frost$core$Object* _28;
frost$core$Equatable* _30;
frost$core$Equatable* _31;
frost$core$Int _32;
frost$core$Int* _35;
org$frostlang$frostc$Type$Kind _37;
org$frostlang$frostc$Type$Kind _40;
frost$core$Equatable* _41;
$fn28 _42;
frost$core$Bit _43;
bool _44;
frost$core$Object* _45;
frost$core$Object* _47;
frost$core$Equatable* _50;
frost$core$Equatable* _51;
frost$core$Int _52;
frost$core$Int* _55;
org$frostlang$frostc$Type$Kind _57;
org$frostlang$frostc$Type$Kind _60;
frost$core$Equatable* _61;
$fn29 _62;
frost$core$Bit _63;
bool _64;
frost$core$Object* _65;
frost$core$Object* _67;
frost$core$Equatable* _70;
frost$core$Equatable* _71;
frost$core$Int _72;
frost$core$Int* _75;
org$frostlang$frostc$Type$Kind _77;
org$frostlang$frostc$Type$Kind _80;
frost$core$Equatable* _81;
$fn30 _82;
frost$core$Bit _83;
bool _84;
frost$core$Object* _85;
frost$core$Object* _87;
frost$core$Equatable* _90;
frost$core$Equatable* _91;
frost$core$Int _92;
frost$core$Int* _95;
org$frostlang$frostc$Type$Kind _97;
org$frostlang$frostc$Type$Kind _100;
frost$core$Equatable* _101;
$fn31 _102;
frost$core$Bit _103;
bool _104;
frost$core$Object* _105;
frost$core$Object* _107;
frost$core$Equatable* _110;
frost$core$Equatable* _111;
frost$core$Int _112;
frost$core$Int* _115;
org$frostlang$frostc$Type$Kind _117;
org$frostlang$frostc$Type$Kind _120;
frost$core$Equatable* _121;
$fn32 _122;
frost$core$Bit _123;
bool _124;
frost$core$Object* _125;
frost$core$Object* _127;
frost$core$Equatable* _130;
frost$core$Equatable* _131;
frost$core$Int _132;
frost$core$Int* _135;
org$frostlang$frostc$Type$Kind _137;
org$frostlang$frostc$Type$Kind _140;
frost$core$Equatable* _141;
$fn33 _142;
frost$core$Bit _143;
bool _144;
frost$core$Object* _145;
frost$core$Object* _147;
frost$core$Int _150;
frost$core$Bit _154;
bool _157;
bool _158;
frost$core$Bit _159;
bool _161;
frost$core$Int _163;
org$frostlang$frostc$Type$Kind* _167;
org$frostlang$frostc$Symbol* _170;
frost$core$Int _171;
org$frostlang$frostc$Position _172;
org$frostlang$frostc$Position* _173;
frost$core$Bit _176;
frost$core$Bit* _177;
frost$core$Object* _180;
org$frostlang$frostc$FixedArray** _182;
org$frostlang$frostc$FixedArray* _183;
frost$core$Object* _184;
org$frostlang$frostc$FixedArray** _186;
org$frostlang$frostc$Symbol* _189;
frost$core$Int _190;
frost$core$Int* _193;
org$frostlang$frostc$Symbol$Kind _195;
org$frostlang$frostc$Symbol$Kind _198;
org$frostlang$frostc$Symbol* _199;
org$frostlang$frostc$Position* _200;
org$frostlang$frostc$Position _201;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:43
FROST_ASSERT(32 == sizeof(frost$core$Weak));
_1 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
_2 = _1;
_3 = ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_2, _3);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &param0->genericClassParameter;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->genericClassParameter;
*_11 = _1;
_13 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:46
FROST_ASSERT(32 == sizeof(frost$core$Weak));
_16 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
_17 = _16;
_18 = ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_17, _18);
_20 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = &param0->genericMethodParameter;
_23 = *_22;
_24 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = &param0->genericMethodParameter;
*_26 = _16;
_28 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_28);
org$frostlang$frostc$Type$Kind$wrapper* $tmp34;
$tmp34 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp34->value = param2;
_30 = ((frost$core$Equatable*) $tmp34);
_31 = _30;
_32 = (frost$core$Int) {12u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:99:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_35 = &(&local1)->$rawValue;
*_35 = _32;
_37 = *(&local1);
*(&local0) = _37;
_40 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp35;
$tmp35 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp35->value = _40;
_41 = ((frost$core$Equatable*) $tmp35);
ITable* $tmp36 = _31->$class->itable;
while ($tmp36->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp36 = $tmp36->next;
}
_42 = $tmp36->methods[1];
_43 = _42(_31, _41);
_44 = _43.value;
_45 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_47);
if (_44) goto block7; else goto block2;
block7:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp37;
$tmp37 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp37->value = param2;
_50 = ((frost$core$Equatable*) $tmp37);
_51 = _50;
_52 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:99:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_55 = &(&local3)->$rawValue;
*_55 = _52;
_57 = *(&local3);
*(&local2) = _57;
_60 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp38;
$tmp38 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp38->value = _60;
_61 = ((frost$core$Equatable*) $tmp38);
ITable* $tmp39 = _51->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp39 = $tmp39->next;
}
_62 = $tmp39->methods[1];
_63 = _62(_51, _61);
_64 = _63.value;
_65 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_65);
_67 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_67);
if (_64) goto block6; else goto block2;
block6:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp40;
$tmp40 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp40->value = param2;
_70 = ((frost$core$Equatable*) $tmp40);
_71 = _70;
_72 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:100:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_75 = &(&local5)->$rawValue;
*_75 = _72;
_77 = *(&local5);
*(&local4) = _77;
_80 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp41;
$tmp41 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp41->value = _80;
_81 = ((frost$core$Equatable*) $tmp41);
ITable* $tmp42 = _71->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp42 = $tmp42->next;
}
_82 = $tmp42->methods[1];
_83 = _82(_71, _81);
_84 = _83.value;
_85 = ((frost$core$Object*) _81);
frost$core$Frost$unref$frost$core$Object$Q(_85);
_87 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_87);
if (_84) goto block5; else goto block2;
block5:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp43;
$tmp43 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp43->value = param2;
_90 = ((frost$core$Equatable*) $tmp43);
_91 = _90;
_92 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:100:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_95 = &(&local7)->$rawValue;
*_95 = _92;
_97 = *(&local7);
*(&local6) = _97;
_100 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp44;
$tmp44 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp44->value = _100;
_101 = ((frost$core$Equatable*) $tmp44);
ITable* $tmp45 = _91->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp45 = $tmp45->next;
}
_102 = $tmp45->methods[1];
_103 = _102(_91, _101);
_104 = _103.value;
_105 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_105);
_107 = ((frost$core$Object*) _90);
frost$core$Frost$unref$frost$core$Object$Q(_107);
if (_104) goto block4; else goto block2;
block4:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp46;
$tmp46 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp46->value = param2;
_110 = ((frost$core$Equatable*) $tmp46);
_111 = _110;
_112 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:101:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_115 = &(&local9)->$rawValue;
*_115 = _112;
_117 = *(&local9);
*(&local8) = _117;
_120 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp47;
$tmp47 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp47->value = _120;
_121 = ((frost$core$Equatable*) $tmp47);
ITable* $tmp48 = _111->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp48 = $tmp48->next;
}
_122 = $tmp48->methods[1];
_123 = _122(_111, _121);
_124 = _123.value;
_125 = ((frost$core$Object*) _121);
frost$core$Frost$unref$frost$core$Object$Q(_125);
_127 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_127);
if (_124) goto block3; else goto block2;
block3:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp49;
$tmp49 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp49->value = param2;
_130 = ((frost$core$Equatable*) $tmp49);
_131 = _130;
_132 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:101:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_135 = &(&local11)->$rawValue;
*_135 = _132;
_137 = *(&local11);
*(&local10) = _137;
_140 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp50;
$tmp50 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp50->value = _140;
_141 = ((frost$core$Equatable*) $tmp50);
ITable* $tmp51 = _131->$class->itable;
while ($tmp51->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp51 = $tmp51->next;
}
_142 = $tmp51->methods[1];
_143 = _142(_131, _141);
_144 = _143.value;
_145 = ((frost$core$Object*) _141);
frost$core$Frost$unref$frost$core$Object$Q(_145);
_147 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_147);
if (_144) goto block1; else goto block2;
block2:;
_150 = (frost$core$Int) {102u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s52, _150, &$s53);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:103
_154 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(param1, &$s54);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Type.frost:103:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_157 = _154.value;
_158 = !_157;
_159 = (frost$core$Bit) {_158};
_161 = _159.value;
if (_161) goto block15; else goto block16;
block16:;
_163 = (frost$core$Int) {103u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s55, _163);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:104
_167 = &param0->typeKind;
*_167 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:105
_170 = ((org$frostlang$frostc$Symbol*) param0);
_171 = (frost$core$Int) {18446744073709551615u};
_172 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_171, param3, param3);
_173 = &_170->position;
*_173 = _172;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:106
_176 = (frost$core$Bit) {true};
_177 = &param0->resolved;
*_177 = _176;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:107
_180 = ((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_180);
_182 = &param0->_subtypes;
_183 = *_182;
_184 = ((frost$core$Object*) _183);
frost$core$Frost$unref$frost$core$Object$Q(_184);
_186 = &param0->_subtypes;
*_186 = ((org$frostlang$frostc$FixedArray*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:108
_189 = ((org$frostlang$frostc$Symbol*) param0);
_190 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Type.frost:108:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_193 = &(&local13)->$rawValue;
*_193 = _190;
_195 = *(&local13);
*(&local12) = _195;
_198 = *(&local12);
_199 = ((org$frostlang$frostc$Symbol*) param0);
_200 = &_199->position;
_201 = *_200;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(_189, _198, _201, param1);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$collections$ListView* param4, frost$core$Bit param5) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:112
_1 = (frost$core$Int) {0u};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int(param0, param1, param2, param3, param4, param5, _1);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int(org$frostlang$frostc$Type* param0, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$collections$ListView* param4, frost$core$Bit param5, frost$core$Int param6) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Symbol$Kind local12;
org$frostlang$frostc$Symbol$Kind local13;
frost$core$Weak* _1;
frost$core$Weak* _2;
frost$core$Object* _3;
frost$core$Object* _5;
frost$core$Weak** _7;
frost$core$Weak* _8;
frost$core$Object* _9;
frost$core$Weak** _11;
frost$core$Object* _13;
frost$core$Weak* _16;
frost$core$Weak* _17;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$Weak** _22;
frost$core$Weak* _23;
frost$core$Object* _24;
frost$core$Weak** _26;
frost$core$Object* _28;
frost$core$Equatable* _30;
frost$core$Equatable* _31;
frost$core$Int _32;
frost$core$Int* _35;
org$frostlang$frostc$Type$Kind _37;
org$frostlang$frostc$Type$Kind _40;
frost$core$Equatable* _41;
$fn56 _42;
frost$core$Bit _43;
bool _44;
frost$core$Object* _45;
frost$core$Object* _47;
frost$core$Equatable* _50;
frost$core$Equatable* _51;
frost$core$Int _52;
frost$core$Int* _55;
org$frostlang$frostc$Type$Kind _57;
org$frostlang$frostc$Type$Kind _60;
frost$core$Equatable* _61;
$fn57 _62;
frost$core$Bit _63;
bool _64;
frost$core$Object* _65;
frost$core$Object* _67;
frost$core$Int _70;
frost$core$Equatable* _74;
frost$core$Equatable* _75;
frost$core$Int _76;
frost$core$Int* _79;
org$frostlang$frostc$Type$Kind _81;
org$frostlang$frostc$Type$Kind _84;
frost$core$Equatable* _85;
$fn58 _86;
frost$core$Bit _87;
frost$core$Bit _88;
bool _91;
bool _92;
bool _93;
frost$core$Bit _94;
bool _96;
frost$core$Int _98;
frost$core$String* _99;
frost$core$String* _100;
frost$core$Equatable* _101;
frost$core$Equatable* _102;
frost$core$Int _103;
frost$core$Int* _106;
org$frostlang$frostc$Type$Kind _108;
org$frostlang$frostc$Type$Kind _111;
frost$core$Equatable* _112;
$fn59 _113;
frost$core$Bit _114;
frost$core$Object* _115;
$fn60 _118;
frost$core$String* _119;
frost$core$String* _120;
frost$core$Object* _121;
frost$core$Object* _123;
frost$core$Object* _125;
frost$core$String* _128;
frost$core$Object* _130;
frost$core$Object* _132;
frost$core$Object* _134;
frost$core$Object* _136;
frost$core$Object* _138;
frost$core$Object* _140;
frost$core$Object* _142;
frost$core$Object* _145;
frost$core$Object* _147;
frost$core$Equatable* _150;
frost$core$Equatable* _151;
frost$core$Int _152;
frost$core$Int* _155;
org$frostlang$frostc$Type$Kind _157;
org$frostlang$frostc$Type$Kind _160;
frost$core$Equatable* _161;
$fn61 _162;
frost$core$Bit _163;
frost$core$Bit _164;
bool _167;
bool _168;
bool _169;
frost$core$Bit _170;
bool _172;
frost$core$Int _174;
frost$core$String* _175;
frost$core$String* _176;
frost$core$Equatable* _177;
frost$core$Equatable* _178;
frost$core$Int _179;
frost$core$Int* _182;
org$frostlang$frostc$Type$Kind _184;
org$frostlang$frostc$Type$Kind _187;
frost$core$Equatable* _188;
$fn62 _189;
frost$core$Bit _190;
frost$core$Object* _191;
$fn63 _194;
frost$core$String* _195;
frost$core$String* _196;
frost$core$Object* _197;
frost$core$Object* _199;
frost$core$Object* _201;
frost$core$String* _204;
frost$core$Object* _206;
frost$core$Object* _208;
frost$core$Object* _210;
frost$core$Object* _212;
frost$core$Object* _214;
frost$core$Object* _216;
frost$core$Object* _218;
frost$core$Object* _221;
frost$core$Object* _223;
org$frostlang$frostc$Type$Kind* _226;
org$frostlang$frostc$Symbol* _229;
org$frostlang$frostc$Position* _230;
frost$core$Bit* _233;
frost$core$Int* _236;
org$frostlang$frostc$FixedArray* _239;
org$frostlang$frostc$FixedArray* _240;
frost$collections$ListView* _241;
org$frostlang$frostc$FixedArray* _243;
frost$core$Object* _244;
org$frostlang$frostc$FixedArray** _246;
org$frostlang$frostc$FixedArray* _247;
frost$core$Object* _248;
org$frostlang$frostc$FixedArray** _250;
frost$core$Object* _252;
org$frostlang$frostc$Symbol* _255;
frost$core$Int _256;
frost$core$Int* _259;
org$frostlang$frostc$Symbol$Kind _261;
org$frostlang$frostc$Symbol$Kind _264;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:43
FROST_ASSERT(32 == sizeof(frost$core$Weak));
_1 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
_2 = _1;
_3 = ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_2, _3);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &param0->genericClassParameter;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->genericClassParameter;
*_11 = _1;
_13 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:46
FROST_ASSERT(32 == sizeof(frost$core$Weak));
_16 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
_17 = _16;
_18 = ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_17, _18);
_20 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = &param0->genericMethodParameter;
_23 = *_22;
_24 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = &param0->genericMethodParameter;
*_26 = _16;
_28 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_28);
org$frostlang$frostc$Type$Kind$wrapper* $tmp64;
$tmp64 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp64->value = param2;
_30 = ((frost$core$Equatable*) $tmp64);
_31 = _30;
_32 = (frost$core$Int) {12u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:115:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_35 = &(&local1)->$rawValue;
*_35 = _32;
_37 = *(&local1);
*(&local0) = _37;
_40 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp65;
$tmp65 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp65->value = _40;
_41 = ((frost$core$Equatable*) $tmp65);
ITable* $tmp66 = _31->$class->itable;
while ($tmp66->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp66 = $tmp66->next;
}
_42 = $tmp66->methods[1];
_43 = _42(_31, _41);
_44 = _43.value;
_45 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_47);
if (_44) goto block3; else goto block2;
block3:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp67;
$tmp67 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp67->value = param2;
_50 = ((frost$core$Equatable*) $tmp67);
_51 = _50;
_52 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:115:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_55 = &(&local3)->$rawValue;
*_55 = _52;
_57 = *(&local3);
*(&local2) = _57;
_60 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp68;
$tmp68 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp68->value = _60;
_61 = ((frost$core$Equatable*) $tmp68);
ITable* $tmp69 = _51->$class->itable;
while ($tmp69->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp69 = $tmp69->next;
}
_62 = $tmp69->methods[1];
_63 = _62(_51, _61);
_64 = _63.value;
_65 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_65);
_67 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_67);
if (_64) goto block1; else goto block2;
block2:;
_70 = (frost$core$Int) {116u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s70, _70, &$s71);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:118
org$frostlang$frostc$Type$Kind$wrapper* $tmp72;
$tmp72 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp72->value = param2;
_74 = ((frost$core$Equatable*) $tmp72);
_75 = _74;
_76 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:118:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_79 = &(&local5)->$rawValue;
*_79 = _76;
_81 = *(&local5);
*(&local4) = _81;
_84 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp73;
$tmp73 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp73->value = _84;
_85 = ((frost$core$Equatable*) $tmp73);
ITable* $tmp74 = _75->$class->itable;
while ($tmp74->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp74 = $tmp74->next;
}
_86 = $tmp74->methods[0];
_87 = _86(_75, _85);
_88 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(param1, &$s75);
// begin inline call to function frost.core.Bit.=(other:frost.core.Bit):frost.core.Bit from Type.frost:118:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:25
_91 = _87.value;
_92 = _88.value;
_93 = _91 == _92;
_94 = (frost$core$Bit) {_93};
_96 = _94.value;
if (_96) goto block8; else goto block9;
block9:;
_98 = (frost$core$Int) {118u};
_99 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s76, param1);
_100 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_99, &$s77);
org$frostlang$frostc$Type$Kind$wrapper* $tmp78;
$tmp78 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp78->value = param2;
_101 = ((frost$core$Equatable*) $tmp78);
_102 = _101;
_103 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:119:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_106 = &(&local7)->$rawValue;
*_106 = _103;
_108 = *(&local7);
*(&local6) = _108;
_111 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp79;
$tmp79 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp79->value = _111;
_112 = ((frost$core$Equatable*) $tmp79);
ITable* $tmp80 = _102->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp80 = $tmp80->next;
}
_113 = $tmp80->methods[0];
_114 = _113(_102, _112);
frost$core$Bit$wrapper* $tmp81;
$tmp81 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp81->value = _114;
_115 = ((frost$core$Object*) $tmp81);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:119:17
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_118 = ($fn82) _115->$class->vtable[0];
_119 = _118(_115);
_120 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_100, _119);
_121 = ((frost$core$Object*) _120);
frost$core$Frost$ref$frost$core$Object$Q(_121);
_123 = ((frost$core$Object*) _120);
frost$core$Frost$unref$frost$core$Object$Q(_123);
_125 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_125);
_128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_120, &$s83);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s84, _98, _128);
_130 = ((frost$core$Object*) _128);
frost$core$Frost$unref$frost$core$Object$Q(_130);
_132 = ((frost$core$Object*) _120);
frost$core$Frost$unref$frost$core$Object$Q(_132);
_134 = _115;
frost$core$Frost$unref$frost$core$Object$Q(_134);
_136 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_136);
_138 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_138);
_140 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_140);
_142 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_142);
abort(); // unreachable
block8:;
_145 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_145);
_147 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_147);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:120
org$frostlang$frostc$Type$Kind$wrapper* $tmp85;
$tmp85 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp85->value = param2;
_150 = ((frost$core$Equatable*) $tmp85);
_151 = _150;
_152 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:120:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_155 = &(&local9)->$rawValue;
*_155 = _152;
_157 = *(&local9);
*(&local8) = _157;
_160 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp86;
$tmp86 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp86->value = _160;
_161 = ((frost$core$Equatable*) $tmp86);
ITable* $tmp87 = _151->$class->itable;
while ($tmp87->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp87 = $tmp87->next;
}
_162 = $tmp87->methods[0];
_163 = _162(_151, _161);
_164 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(param1, &$s88);
// begin inline call to function frost.core.Bit.=(other:frost.core.Bit):frost.core.Bit from Type.frost:120:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:25
_167 = _163.value;
_168 = _164.value;
_169 = _167 == _168;
_170 = (frost$core$Bit) {_169};
_172 = _170.value;
if (_172) goto block14; else goto block15;
block15:;
_174 = (frost$core$Int) {120u};
_175 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s89, param1);
_176 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_175, &$s90);
org$frostlang$frostc$Type$Kind$wrapper* $tmp91;
$tmp91 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp91->value = param2;
_177 = ((frost$core$Equatable*) $tmp91);
_178 = _177;
_179 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:121:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_182 = &(&local11)->$rawValue;
*_182 = _179;
_184 = *(&local11);
*(&local10) = _184;
_187 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp92;
$tmp92 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp92->value = _187;
_188 = ((frost$core$Equatable*) $tmp92);
ITable* $tmp93 = _178->$class->itable;
while ($tmp93->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp93 = $tmp93->next;
}
_189 = $tmp93->methods[0];
_190 = _189(_178, _188);
frost$core$Bit$wrapper* $tmp94;
$tmp94 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp94->value = _190;
_191 = ((frost$core$Object*) $tmp94);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:121:17
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_194 = ($fn95) _191->$class->vtable[0];
_195 = _194(_191);
_196 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_176, _195);
_197 = ((frost$core$Object*) _196);
frost$core$Frost$ref$frost$core$Object$Q(_197);
_199 = ((frost$core$Object*) _196);
frost$core$Frost$unref$frost$core$Object$Q(_199);
_201 = ((frost$core$Object*) _195);
frost$core$Frost$unref$frost$core$Object$Q(_201);
_204 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_196, &$s96);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s97, _174, _204);
_206 = ((frost$core$Object*) _204);
frost$core$Frost$unref$frost$core$Object$Q(_206);
_208 = ((frost$core$Object*) _196);
frost$core$Frost$unref$frost$core$Object$Q(_208);
_210 = _191;
frost$core$Frost$unref$frost$core$Object$Q(_210);
_212 = ((frost$core$Object*) _188);
frost$core$Frost$unref$frost$core$Object$Q(_212);
_214 = ((frost$core$Object*) _177);
frost$core$Frost$unref$frost$core$Object$Q(_214);
_216 = ((frost$core$Object*) _176);
frost$core$Frost$unref$frost$core$Object$Q(_216);
_218 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_218);
abort(); // unreachable
block14:;
_221 = ((frost$core$Object*) _161);
frost$core$Frost$unref$frost$core$Object$Q(_221);
_223 = ((frost$core$Object*) _150);
frost$core$Frost$unref$frost$core$Object$Q(_223);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:122
_226 = &param0->typeKind;
*_226 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:123
_229 = ((org$frostlang$frostc$Symbol*) param0);
_230 = &_229->position;
*_230 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:124
_233 = &param0->resolved;
*_233 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:125
_236 = &param0->priority;
*_236 = param6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:126
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
_239 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
_240 = _239;
_241 = param4;
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT(_240, _241);
_243 = _239;
_244 = ((frost$core$Object*) _243);
frost$core$Frost$ref$frost$core$Object$Q(_244);
_246 = &param0->_subtypes;
_247 = *_246;
_248 = ((frost$core$Object*) _247);
frost$core$Frost$unref$frost$core$Object$Q(_248);
_250 = &param0->_subtypes;
*_250 = _243;
_252 = ((frost$core$Object*) _239);
frost$core$Frost$unref$frost$core$Object$Q(_252);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:127
_255 = ((org$frostlang$frostc$Symbol*) param0);
_256 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Type.frost:127:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_259 = &(&local13)->$rawValue;
*_259 = _256;
_261 = *(&local13);
*(&local12) = _261;
_264 = *(&local12);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(_255, _264, param3, param1);
return;

}
void org$frostlang$frostc$Type$init$org$frostlang$frostc$ClassDecl$GenericParameter(org$frostlang$frostc$Type* param0, org$frostlang$frostc$ClassDecl$GenericParameter* param1) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Symbol$Kind local2;
org$frostlang$frostc$Symbol$Kind local3;
frost$core$Weak* _1;
frost$core$Weak* _2;
frost$core$Object* _3;
frost$core$Object* _5;
frost$core$Weak** _7;
frost$core$Weak* _8;
frost$core$Object* _9;
frost$core$Weak** _11;
frost$core$Object* _13;
frost$core$Weak* _16;
frost$core$Weak* _17;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$Weak** _22;
frost$core$Weak* _23;
frost$core$Object* _24;
frost$core$Weak** _26;
frost$core$Object* _28;
frost$core$Int _31;
frost$core$Int* _34;
org$frostlang$frostc$Type$Kind _36;
org$frostlang$frostc$Type$Kind _39;
org$frostlang$frostc$Type$Kind* _40;
org$frostlang$frostc$ClassDecl$GenericParameter* _43;
frost$core$Weak* _44;
frost$core$Weak* _45;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Weak** _50;
frost$core$Weak* _51;
frost$core$Object* _52;
frost$core$Weak** _54;
frost$core$Object* _56;
frost$core$Bit _59;
frost$core$Bit* _60;
frost$core$Object* _63;
org$frostlang$frostc$FixedArray** _65;
org$frostlang$frostc$FixedArray* _66;
frost$core$Object* _67;
org$frostlang$frostc$FixedArray** _69;
org$frostlang$frostc$Symbol* _72;
frost$core$Int _73;
frost$core$Int* _76;
org$frostlang$frostc$Symbol$Kind _78;
org$frostlang$frostc$Symbol$Kind _81;
org$frostlang$frostc$Symbol* _82;
org$frostlang$frostc$Position* _83;
org$frostlang$frostc$Position _84;
frost$core$String** _85;
frost$core$String* _86;
frost$core$Object* _89;
frost$core$String* _92;
org$frostlang$frostc$Symbol* _93;
frost$core$String** _94;
frost$core$String* _95;
frost$core$String* _96;
frost$core$String* _97;
frost$core$Object* _99;
frost$core$Object* _101;
frost$core$Object* _103;
frost$core$Object* _105;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:43
FROST_ASSERT(32 == sizeof(frost$core$Weak));
_1 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
_2 = _1;
_3 = ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_2, _3);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &param0->genericClassParameter;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->genericClassParameter;
*_11 = _1;
_13 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:46
FROST_ASSERT(32 == sizeof(frost$core$Weak));
_16 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
_17 = _16;
_18 = ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_17, _18);
_20 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = &param0->genericMethodParameter;
_23 = *_22;
_24 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = &param0->genericMethodParameter;
*_26 = _16;
_28 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_28);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:131
_31 = (frost$core$Int) {12u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:131:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_34 = &(&local1)->$rawValue;
*_34 = _31;
_36 = *(&local1);
*(&local0) = _36;
_39 = *(&local0);
_40 = &param0->typeKind;
*_40 = _39;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:132
_43 = param1;
FROST_ASSERT(32 == sizeof(frost$core$Weak));
_44 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
_45 = _44;
_46 = ((frost$core$Object*) _43);
frost$core$Weak$init$frost$core$Weak$T$Q(_45, _46);
_48 = ((frost$core$Object*) _44);
frost$core$Frost$ref$frost$core$Object$Q(_48);
_50 = &param0->genericClassParameter;
_51 = *_50;
_52 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_52);
_54 = &param0->genericClassParameter;
*_54 = _44;
_56 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_56);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:133
_59 = (frost$core$Bit) {true};
_60 = &param0->resolved;
*_60 = _59;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:134
_63 = ((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_63);
_65 = &param0->_subtypes;
_66 = *_65;
_67 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_67);
_69 = &param0->_subtypes;
*_69 = ((org$frostlang$frostc$FixedArray*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:135
_72 = ((org$frostlang$frostc$Symbol*) param0);
_73 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Type.frost:135:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_76 = &(&local3)->$rawValue;
*_76 = _73;
_78 = *(&local3);
*(&local2) = _78;
_81 = *(&local2);
_82 = ((org$frostlang$frostc$Symbol*) param0);
_83 = &_82->position;
_84 = *_83;
_85 = &param1->owner;
_86 = *_85;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Type.frost:135:56
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:112
_89 = ((frost$core$Object*) _86);
frost$core$Frost$ref$frost$core$Object$Q(_89);
_92 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_86, &$s98);
_93 = ((org$frostlang$frostc$Symbol*) param1);
_94 = &_93->name;
_95 = *_94;
_96 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_92, _95);
_97 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_96, &$s99);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(_72, _81, _84, _97);
_99 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_99);
_101 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_101);
_103 = ((frost$core$Object*) _92);
frost$core$Frost$unref$frost$core$Object$Q(_103);
_105 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_105);
return;

}
void org$frostlang$frostc$Type$init$org$frostlang$frostc$MethodDecl$GenericParameter(org$frostlang$frostc$Type* param0, org$frostlang$frostc$MethodDecl$GenericParameter* param1) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Symbol$Kind local2;
org$frostlang$frostc$Symbol$Kind local3;
frost$core$Weak* _1;
frost$core$Weak* _2;
frost$core$Object* _3;
frost$core$Object* _5;
frost$core$Weak** _7;
frost$core$Weak* _8;
frost$core$Object* _9;
frost$core$Weak** _11;
frost$core$Object* _13;
frost$core$Weak* _16;
frost$core$Weak* _17;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$Weak** _22;
frost$core$Weak* _23;
frost$core$Object* _24;
frost$core$Weak** _26;
frost$core$Object* _28;
frost$core$Int _31;
frost$core$Int* _34;
org$frostlang$frostc$Type$Kind _36;
org$frostlang$frostc$Type$Kind _39;
org$frostlang$frostc$Type$Kind* _40;
org$frostlang$frostc$MethodDecl$GenericParameter* _43;
frost$core$Weak* _44;
frost$core$Weak* _45;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Weak** _50;
frost$core$Weak* _51;
frost$core$Object* _52;
frost$core$Weak** _54;
frost$core$Object* _56;
frost$core$Bit _59;
frost$core$Bit* _60;
frost$core$Object* _63;
org$frostlang$frostc$FixedArray** _65;
org$frostlang$frostc$FixedArray* _66;
frost$core$Object* _67;
org$frostlang$frostc$FixedArray** _69;
org$frostlang$frostc$Symbol* _72;
frost$core$Int _73;
frost$core$Int* _76;
org$frostlang$frostc$Symbol$Kind _78;
org$frostlang$frostc$Symbol$Kind _81;
org$frostlang$frostc$Symbol* _82;
org$frostlang$frostc$Position* _83;
org$frostlang$frostc$Position _84;
frost$core$String** _85;
frost$core$String* _86;
frost$core$Object* _89;
frost$core$String* _92;
org$frostlang$frostc$Symbol* _93;
frost$core$String** _94;
frost$core$String* _95;
frost$core$String* _96;
frost$core$String* _97;
frost$core$Object* _99;
frost$core$Object* _101;
frost$core$Object* _103;
frost$core$Object* _105;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:43
FROST_ASSERT(32 == sizeof(frost$core$Weak));
_1 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
_2 = _1;
_3 = ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_2, _3);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &param0->genericClassParameter;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->genericClassParameter;
*_11 = _1;
_13 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:46
FROST_ASSERT(32 == sizeof(frost$core$Weak));
_16 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
_17 = _16;
_18 = ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_17, _18);
_20 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = &param0->genericMethodParameter;
_23 = *_22;
_24 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = &param0->genericMethodParameter;
*_26 = _16;
_28 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_28);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:139
_31 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:139:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_34 = &(&local1)->$rawValue;
*_34 = _31;
_36 = *(&local1);
*(&local0) = _36;
_39 = *(&local0);
_40 = &param0->typeKind;
*_40 = _39;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:140
_43 = param1;
FROST_ASSERT(32 == sizeof(frost$core$Weak));
_44 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
_45 = _44;
_46 = ((frost$core$Object*) _43);
frost$core$Weak$init$frost$core$Weak$T$Q(_45, _46);
_48 = ((frost$core$Object*) _44);
frost$core$Frost$ref$frost$core$Object$Q(_48);
_50 = &param0->genericMethodParameter;
_51 = *_50;
_52 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_52);
_54 = &param0->genericMethodParameter;
*_54 = _44;
_56 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_56);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:141
_59 = (frost$core$Bit) {true};
_60 = &param0->resolved;
*_60 = _59;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:142
_63 = ((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_63);
_65 = &param0->_subtypes;
_66 = *_65;
_67 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_67);
_69 = &param0->_subtypes;
*_69 = ((org$frostlang$frostc$FixedArray*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:143
_72 = ((org$frostlang$frostc$Symbol*) param0);
_73 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Type.frost:143:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_76 = &(&local3)->$rawValue;
*_76 = _73;
_78 = *(&local3);
*(&local2) = _78;
_81 = *(&local2);
_82 = ((org$frostlang$frostc$Symbol*) param0);
_83 = &_82->position;
_84 = *_83;
_85 = &param1->owner;
_86 = *_85;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Type.frost:143:56
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:112
_89 = ((frost$core$Object*) _86);
frost$core$Frost$ref$frost$core$Object$Q(_89);
_92 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_86, &$s100);
_93 = ((org$frostlang$frostc$Symbol*) param1);
_94 = &_93->name;
_95 = *_94;
_96 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_92, _95);
_97 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_96, &$s101);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(_72, _81, _84, _97);
_99 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_99);
_101 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_101);
_103 = ((frost$core$Object*) _92);
frost$core$Frost$unref$frost$core$Object$Q(_103);
_105 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_105);
return;

}
void org$frostlang$frostc$Type$init$org$frostlang$frostc$MethodRef(org$frostlang$frostc$Type* param0, org$frostlang$frostc$MethodRef* param1) {

org$frostlang$frostc$Symbol$Kind local0;
org$frostlang$frostc$Symbol$Kind local1;
frost$core$Weak* _1;
frost$core$Weak* _2;
frost$core$Object* _3;
frost$core$Object* _5;
frost$core$Weak** _7;
frost$core$Weak* _8;
frost$core$Object* _9;
frost$core$Weak** _11;
frost$core$Object* _13;
frost$core$Weak* _16;
frost$core$Weak* _17;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$Weak** _22;
frost$core$Weak* _23;
frost$core$Object* _24;
frost$core$Weak** _26;
frost$core$Object* _28;
org$frostlang$frostc$Type** _31;
org$frostlang$frostc$Type* _32;
org$frostlang$frostc$Type$Kind* _33;
org$frostlang$frostc$Type$Kind _34;
org$frostlang$frostc$Type$Kind* _35;
org$frostlang$frostc$Type** _38;
org$frostlang$frostc$Type* _39;
org$frostlang$frostc$FixedArray** _42;
org$frostlang$frostc$FixedArray* _43;
bool _44;
frost$core$Bit _45;
bool _46;
frost$core$Int _48;
org$frostlang$frostc$FixedArray* _51;
frost$core$Object* _52;
org$frostlang$frostc$FixedArray* _55;
frost$core$Object* _56;
org$frostlang$frostc$FixedArray** _58;
org$frostlang$frostc$FixedArray* _59;
frost$core$Object* _60;
org$frostlang$frostc$FixedArray** _62;
frost$core$Object* _64;
org$frostlang$frostc$Type** _67;
org$frostlang$frostc$Type* _68;
frost$core$Bit* _69;
frost$core$Bit _70;
frost$core$Bit* _71;
org$frostlang$frostc$MethodRef* _74;
frost$core$Object* _75;
org$frostlang$frostc$MethodRef** _77;
org$frostlang$frostc$MethodRef* _78;
frost$core$Object* _79;
org$frostlang$frostc$MethodRef** _81;
org$frostlang$frostc$Symbol* _84;
frost$core$Int _85;
frost$core$Int* _88;
org$frostlang$frostc$Symbol$Kind _90;
org$frostlang$frostc$Symbol$Kind _93;
org$frostlang$frostc$Type** _94;
org$frostlang$frostc$Type* _95;
org$frostlang$frostc$Symbol* _96;
org$frostlang$frostc$Position* _97;
org$frostlang$frostc$Position _98;
org$frostlang$frostc$Type** _99;
org$frostlang$frostc$Type* _100;
org$frostlang$frostc$Symbol* _101;
frost$core$String** _102;
frost$core$String* _103;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:43
FROST_ASSERT(32 == sizeof(frost$core$Weak));
_1 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
_2 = _1;
_3 = ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_2, _3);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &param0->genericClassParameter;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->genericClassParameter;
*_11 = _1;
_13 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:46
FROST_ASSERT(32 == sizeof(frost$core$Weak));
_16 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
_17 = _16;
_18 = ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_17, _18);
_20 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = &param0->genericMethodParameter;
_23 = *_22;
_24 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = &param0->genericMethodParameter;
*_26 = _16;
_28 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_28);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:147
_31 = &param1->effectiveType;
_32 = *_31;
_33 = &_32->typeKind;
_34 = *_33;
_35 = &param0->typeKind;
*_35 = _34;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:148
_38 = &param1->effectiveType;
_39 = *_38;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:148:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_42 = &_39->_subtypes;
_43 = *_42;
_44 = _43 != NULL;
_45 = (frost$core$Bit) {_44};
_46 = _45.value;
if (_46) goto block2; else goto block3;
block3:;
_48 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s102, _48, &$s103);
abort(); // unreachable
block2:;
_51 = _43;
_52 = ((frost$core$Object*) _51);
frost$core$Frost$ref$frost$core$Object$Q(_52);
_55 = _51;
_56 = ((frost$core$Object*) _55);
frost$core$Frost$ref$frost$core$Object$Q(_56);
_58 = &param0->_subtypes;
_59 = *_58;
_60 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_60);
_62 = &param0->_subtypes;
*_62 = _55;
_64 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_64);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:149
_67 = &param1->effectiveType;
_68 = *_67;
_69 = &_68->resolved;
_70 = *_69;
_71 = &param0->resolved;
*_71 = _70;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:150
_74 = param1;
_75 = ((frost$core$Object*) _74);
frost$core$Frost$ref$frost$core$Object$Q(_75);
_77 = &param0->methodRef;
_78 = *_77;
_79 = ((frost$core$Object*) _78);
frost$core$Frost$unref$frost$core$Object$Q(_79);
_81 = &param0->methodRef;
*_81 = _74;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:151
_84 = ((org$frostlang$frostc$Symbol*) param0);
_85 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Type.frost:151:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_88 = &(&local1)->$rawValue;
*_88 = _85;
_90 = *(&local1);
*(&local0) = _90;
_93 = *(&local0);
_94 = &param1->effectiveType;
_95 = *_94;
_96 = ((org$frostlang$frostc$Symbol*) _95);
_97 = &_96->position;
_98 = *_97;
_99 = &param1->effectiveType;
_100 = *_99;
_101 = ((org$frostlang$frostc$Symbol*) _100);
_102 = &_101->name;
_103 = *_102;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(_84, _93, _98, _103);
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(frost$collections$ListView* param0) {

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$core$String* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
frost$core$Bit local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
frost$collections$CollectionView* _0;
$fn104 _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _4;
int64_t _5;
bool _6;
frost$core$Bit _7;
bool _8;
frost$core$Int _10;
frost$core$Bit _14;
frost$core$MutableString* _17;
frost$core$Object* _20;
frost$core$MutableString* _22;
frost$core$Object* _23;
frost$core$Object* _26;
frost$core$MutableString* _29;
frost$core$Object* _33;
frost$core$String* _35;
frost$core$Object* _36;
frost$collections$Iterable* _40;
frost$collections$Iterable* _41;
$fn105 _42;
frost$collections$Iterator* _43;
frost$collections$Iterator* _44;
frost$collections$Iterator* _46;
$fn106 _47;
frost$core$Bit _48;
bool _49;
frost$collections$Iterator* _52;
$fn107 _53;
frost$core$Object* _54;
org$frostlang$frostc$Type* _55;
frost$core$Object* _56;
org$frostlang$frostc$Type* _58;
frost$core$Object* _59;
frost$core$Bit _63;
bool _64;
org$frostlang$frostc$Type* _66;
frost$core$Bit* _67;
frost$core$Bit _68;
frost$core$Bit _73;
frost$core$MutableString* _76;
frost$core$String* _77;
frost$core$MutableString* _80;
org$frostlang$frostc$Type* _81;
org$frostlang$frostc$Symbol* _82;
frost$core$String** _83;
frost$core$String* _84;
frost$core$Object* _87;
frost$core$String* _89;
frost$core$Object* _90;
frost$core$Object* _93;
org$frostlang$frostc$Type* _95;
frost$core$Object* _96;
frost$core$Object* _100;
frost$core$MutableString* _103;
org$frostlang$frostc$Type* _106;
frost$core$MutableString* _107;
frost$core$String* _108;
frost$core$Int _109;
frost$core$Int* _112;
org$frostlang$frostc$Type$Kind _114;
org$frostlang$frostc$Type$Kind _117;
frost$collections$ListView* _118;
frost$core$Int _119;
$fn108 _120;
frost$core$Object* _121;
org$frostlang$frostc$Type* _122;
org$frostlang$frostc$Symbol* _123;
org$frostlang$frostc$Position* _124;
org$frostlang$frostc$Position _125;
frost$core$Bit _126;
frost$core$Object* _128;
frost$core$Object* _130;
frost$core$Object* _132;
frost$core$Object* _134;
frost$core$String* _136;
frost$core$Object* _137;
frost$core$MutableString* _140;
frost$core$Object* _141;
_0 = ((frost$collections$CollectionView*) param0);
ITable* $tmp109 = _0->$class->itable;
while ($tmp109->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp109 = $tmp109->next;
}
_1 = $tmp109->methods[0];
_2 = _1(_0);
_3 = (frost$core$Int) {2u};
_4 = _2.value;
_5 = _3.value;
_6 = _4 >= _5;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block1; else goto block2;
block2:;
_10 = (frost$core$Int) {156u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s110, _10, &$s111);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:157
_14 = (frost$core$Bit) {true};
*(&local0) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:158
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_17 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_17);
*(&local1) = ((frost$core$MutableString*) NULL);
_20 = ((frost$core$Object*) _17);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = *(&local1);
_23 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_23);
*(&local1) = _17;
_26 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_26);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:159
_29 = *(&local1);
frost$core$MutableString$append$frost$core$String(_29, &$s112);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:160
*(&local2) = ((frost$core$String*) NULL);
_33 = ((frost$core$Object*) &$s113);
frost$core$Frost$ref$frost$core$Object$Q(_33);
_35 = *(&local2);
_36 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_36);
*(&local2) = &$s114;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:161
_40 = ((frost$collections$Iterable*) param0);
_41 = _40;
ITable* $tmp115 = _41->$class->itable;
while ($tmp115->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp115 = $tmp115->next;
}
_42 = $tmp115->methods[0];
_43 = _42(_41);
_44 = _43;
goto block3;
block3:;
_46 = _44;
ITable* $tmp116 = _46->$class->itable;
while ($tmp116->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp116 = $tmp116->next;
}
_47 = $tmp116->methods[0];
_48 = _47(_46);
_49 = _48.value;
if (_49) goto block5; else goto block4;
block4:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
_52 = _44;
ITable* $tmp117 = _52->$class->itable;
while ($tmp117->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp117 = $tmp117->next;
}
_53 = $tmp117->methods[1];
_54 = _53(_52);
_55 = ((org$frostlang$frostc$Type*) _54);
_56 = ((frost$core$Object*) _55);
frost$core$Frost$ref$frost$core$Object$Q(_56);
_58 = *(&local3);
_59 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_59);
*(&local3) = _55;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:162
_63 = *(&local0);
_64 = _63.value;
if (_64) goto block6; else goto block7;
block6:;
_66 = *(&local3);
_67 = &_66->resolved;
_68 = *_67;
*(&local4) = _68;
goto block8;
block7:;
*(&local4) = _63;
goto block8;
block8:;
_73 = *(&local4);
*(&local0) = _73;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:163
_76 = *(&local1);
_77 = *(&local2);
frost$core$MutableString$append$frost$core$String(_76, _77);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:164
_80 = *(&local1);
_81 = *(&local3);
_82 = ((org$frostlang$frostc$Symbol*) _81);
_83 = &_82->name;
_84 = *_83;
frost$core$MutableString$append$frost$core$String(_80, _84);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:165
_87 = ((frost$core$Object*) &$s118);
frost$core$Frost$ref$frost$core$Object$Q(_87);
_89 = *(&local2);
_90 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_90);
*(&local2) = &$s119;
_93 = _54;
frost$core$Frost$unref$frost$core$Object$Q(_93);
_95 = *(&local3);
_96 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_96);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block3;
block5:;
_100 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_100);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:167
_103 = *(&local1);
frost$core$MutableString$append$frost$core$String(_103, &$s120);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:168
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
_106 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
_107 = *(&local1);
_108 = frost$core$MutableString$finish$R$frost$core$String(_107);
_109 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:168:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_112 = &(&local6)->$rawValue;
*_112 = _109;
_114 = *(&local6);
*(&local5) = _114;
_117 = *(&local5);
_118 = param0;
_119 = (frost$core$Int) {0u};
ITable* $tmp121 = _118->$class->itable;
while ($tmp121->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp121 = $tmp121->next;
}
_120 = $tmp121->methods[0];
_121 = _120(_118, _119);
_122 = ((org$frostlang$frostc$Type*) _121);
_123 = ((org$frostlang$frostc$Symbol*) _122);
_124 = &_123->position;
_125 = *_124;
_126 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit(_106, _108, _117, _125, param0, _126);
_128 = ((frost$core$Object*) _106);
frost$core$Frost$ref$frost$core$Object$Q(_128);
_130 = _121;
frost$core$Frost$unref$frost$core$Object$Q(_130);
_132 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_132);
_134 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_134);
_136 = *(&local2);
_137 = ((frost$core$Object*) _136);
frost$core$Frost$unref$frost$core$Object$Q(_137);
*(&local2) = ((frost$core$String*) NULL);
_140 = *(&local1);
_141 = ((frost$core$Object*) _140);
frost$core$Frost$unref$frost$core$Object$Q(_141);
*(&local1) = ((frost$core$MutableString*) NULL);
return _106;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$collections$ListView* param1) {

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$core$String* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
frost$core$Bit local4;
frost$collections$Array* local5 = NULL;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
frost$core$Bit* _1;
frost$core$Bit _2;
frost$core$MutableString* _5;
frost$core$Object* _8;
frost$core$MutableString* _10;
frost$core$Object* _11;
frost$core$Object* _14;
frost$core$MutableString* _17;
org$frostlang$frostc$Symbol* _18;
frost$core$String** _19;
frost$core$String* _20;
frost$core$MutableString* _23;
frost$core$Object* _27;
frost$core$String* _29;
frost$core$Object* _30;
frost$collections$Iterable* _34;
frost$collections$Iterable* _35;
$fn122 _36;
frost$collections$Iterator* _37;
frost$collections$Iterator* _38;
frost$collections$Iterator* _40;
$fn123 _41;
frost$core$Bit _42;
bool _43;
frost$collections$Iterator* _46;
$fn124 _47;
frost$core$Object* _48;
org$frostlang$frostc$Type* _49;
frost$core$Object* _50;
org$frostlang$frostc$Type* _52;
frost$core$Object* _53;
frost$core$Bit _57;
bool _58;
org$frostlang$frostc$Type* _60;
frost$core$Bit* _61;
frost$core$Bit _62;
frost$core$Bit _67;
frost$core$MutableString* _70;
frost$core$String* _71;
frost$core$MutableString* _74;
org$frostlang$frostc$Type* _75;
org$frostlang$frostc$Symbol* _76;
frost$core$String** _77;
frost$core$String* _78;
frost$core$Object* _81;
frost$core$String* _83;
frost$core$Object* _84;
frost$core$Object* _87;
org$frostlang$frostc$Type* _89;
frost$core$Object* _90;
frost$core$Object* _94;
frost$core$MutableString* _97;
frost$collections$Array* _100;
frost$collections$Array* _101;
frost$core$Object* _104;
frost$collections$Array* _106;
frost$core$Object* _107;
frost$core$Object* _110;
frost$collections$Array* _113;
frost$collections$Array* _114;
frost$core$Object* _115;
frost$collections$Array* _118;
frost$collections$Array* _119;
frost$collections$CollectionView* _120;
frost$collections$CollectionView* _121;
org$frostlang$frostc$Type* _124;
frost$core$MutableString* _125;
frost$core$String* _126;
frost$core$Int _127;
frost$core$Int* _130;
org$frostlang$frostc$Type$Kind _132;
org$frostlang$frostc$Type$Kind _135;
org$frostlang$frostc$Symbol* _136;
org$frostlang$frostc$Position* _137;
org$frostlang$frostc$Position _138;
frost$collections$Array* _139;
frost$collections$ListView* _140;
frost$core$Bit _141;
frost$core$Object* _143;
frost$core$Object* _145;
frost$core$Object* _147;
frost$collections$Array* _149;
frost$core$Object* _150;
frost$core$String* _153;
frost$core$Object* _154;
frost$core$MutableString* _157;
frost$core$Object* _158;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:173
_1 = &param0->resolved;
_2 = *_1;
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:174
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_5 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_5);
*(&local1) = ((frost$core$MutableString*) NULL);
_8 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = *(&local1);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
*(&local1) = _5;
_14 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_14);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:175
_17 = *(&local1);
_18 = ((org$frostlang$frostc$Symbol*) param0);
_19 = &_18->name;
_20 = *_19;
frost$core$MutableString$append$frost$core$String(_17, _20);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:176
_23 = *(&local1);
frost$core$MutableString$append$frost$core$String(_23, &$s125);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:177
*(&local2) = ((frost$core$String*) NULL);
_27 = ((frost$core$Object*) &$s126);
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = *(&local2);
_30 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_30);
*(&local2) = &$s127;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:178
_34 = ((frost$collections$Iterable*) param1);
_35 = _34;
ITable* $tmp128 = _35->$class->itable;
while ($tmp128->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp128 = $tmp128->next;
}
_36 = $tmp128->methods[0];
_37 = _36(_35);
_38 = _37;
goto block1;
block1:;
_40 = _38;
ITable* $tmp129 = _40->$class->itable;
while ($tmp129->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp129 = $tmp129->next;
}
_41 = $tmp129->methods[0];
_42 = _41(_40);
_43 = _42.value;
if (_43) goto block3; else goto block2;
block2:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
_46 = _38;
ITable* $tmp130 = _46->$class->itable;
while ($tmp130->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp130 = $tmp130->next;
}
_47 = $tmp130->methods[1];
_48 = _47(_46);
_49 = ((org$frostlang$frostc$Type*) _48);
_50 = ((frost$core$Object*) _49);
frost$core$Frost$ref$frost$core$Object$Q(_50);
_52 = *(&local3);
_53 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_53);
*(&local3) = _49;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:179
_57 = *(&local0);
_58 = _57.value;
if (_58) goto block4; else goto block5;
block4:;
_60 = *(&local3);
_61 = &_60->resolved;
_62 = *_61;
*(&local4) = _62;
goto block6;
block5:;
*(&local4) = _57;
goto block6;
block6:;
_67 = *(&local4);
*(&local0) = _67;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:180
_70 = *(&local1);
_71 = *(&local2);
frost$core$MutableString$append$frost$core$String(_70, _71);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:181
_74 = *(&local1);
_75 = *(&local3);
_76 = ((org$frostlang$frostc$Symbol*) _75);
_77 = &_76->name;
_78 = *_77;
frost$core$MutableString$append$frost$core$String(_74, _78);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:182
_81 = ((frost$core$Object*) &$s131);
frost$core$Frost$ref$frost$core$Object$Q(_81);
_83 = *(&local2);
_84 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_84);
*(&local2) = &$s132;
_87 = _48;
frost$core$Frost$unref$frost$core$Object$Q(_87);
_89 = *(&local3);
_90 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_90);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
_94 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_94);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:184
_97 = *(&local1);
frost$core$MutableString$append$frost$core$String(_97, &$s133);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:185
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_100 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_101 = _100;
frost$collections$Array$init(_101);
*(&local5) = ((frost$collections$Array*) NULL);
_104 = ((frost$core$Object*) _100);
frost$core$Frost$ref$frost$core$Object$Q(_104);
_106 = *(&local5);
_107 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_107);
*(&local5) = _100;
_110 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_110);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:186
_113 = *(&local5);
_114 = _113;
_115 = ((frost$core$Object*) param0);
frost$collections$Array$add$frost$collections$Array$T(_114, _115);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:187
_118 = *(&local5);
_119 = _118;
_120 = ((frost$collections$CollectionView*) param1);
_121 = _120;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_119, _121);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:188
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
_124 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
_125 = *(&local1);
_126 = frost$core$MutableString$finish$R$frost$core$String(_125);
_127 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:188:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_130 = &(&local7)->$rawValue;
*_130 = _127;
_132 = *(&local7);
*(&local6) = _132;
_135 = *(&local6);
_136 = ((org$frostlang$frostc$Symbol*) param0);
_137 = &_136->position;
_138 = *_137;
_139 = *(&local5);
_140 = ((frost$collections$ListView*) _139);
_141 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit(_124, _126, _135, _138, _140, _141);
_143 = ((frost$core$Object*) _124);
frost$core$Frost$ref$frost$core$Object$Q(_143);
_145 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_145);
_147 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_147);
_149 = *(&local5);
_150 = ((frost$core$Object*) _149);
frost$core$Frost$unref$frost$core$Object$Q(_150);
*(&local5) = ((frost$collections$Array*) NULL);
_153 = *(&local2);
_154 = ((frost$core$Object*) _153);
frost$core$Frost$unref$frost$core$Object$Q(_154);
*(&local2) = ((frost$core$String*) NULL);
_157 = *(&local1);
_158 = ((frost$core$Object*) _157);
frost$core$Frost$unref$frost$core$Object$Q(_158);
*(&local1) = ((frost$core$MutableString*) NULL);
return _124;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$Type$Kind param2, frost$collections$ListView* param3, org$frostlang$frostc$Type* param4, frost$core$Int param5) {

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
frost$core$Bit local5;
frost$core$Bit* _1;
frost$core$Bit _2;
frost$core$MutableString* _5;
frost$core$Object* _8;
frost$core$MutableString* _10;
frost$core$Object* _11;
frost$core$Object* _14;
frost$collections$Array* _17;
frost$collections$Array* _18;
frost$core$Object* _21;
frost$collections$Array* _23;
frost$core$Object* _24;
frost$core$Object* _27;
frost$core$Object* _31;
frost$core$String* _33;
frost$core$Object* _34;
frost$collections$Iterable* _38;
frost$collections$Iterable* _39;
$fn134 _40;
frost$collections$Iterator* _41;
frost$collections$Iterator* _42;
frost$collections$Iterator* _44;
$fn135 _45;
frost$core$Bit _46;
bool _47;
frost$collections$Iterator* _50;
$fn136 _51;
frost$core$Object* _52;
org$frostlang$frostc$Type* _53;
frost$core$Object* _54;
org$frostlang$frostc$Type* _56;
frost$core$Object* _57;
frost$collections$Array* _61;
frost$collections$Array* _62;
org$frostlang$frostc$Type* _63;
frost$core$Object* _64;
frost$core$Bit _67;
bool _68;
org$frostlang$frostc$Type* _70;
frost$core$Bit* _71;
frost$core$Bit _72;
frost$core$Bit _77;
frost$core$MutableString* _80;
frost$core$String* _81;
frost$core$MutableString* _84;
org$frostlang$frostc$Type* _85;
org$frostlang$frostc$Symbol* _86;
frost$core$String** _87;
frost$core$String* _88;
frost$core$Object* _91;
frost$core$String* _93;
frost$core$Object* _94;
frost$core$Object* _97;
org$frostlang$frostc$Type* _99;
frost$core$Object* _100;
frost$core$Object* _104;
frost$core$Int _107;
frost$core$Int _108;
int64_t _111;
int64_t _112;
bool _113;
frost$core$Bit _114;
bool _116;
frost$core$MutableString* _119;
frost$core$Int _122;
int64_t _125;
int64_t _126;
bool _127;
frost$core$Bit _128;
bool _130;
frost$core$MutableString* _133;
frost$core$Int _136;
int64_t _139;
int64_t _140;
bool _141;
frost$core$Bit _142;
bool _144;
frost$core$MutableString* _147;
frost$core$Int _150;
int64_t _153;
int64_t _154;
bool _155;
frost$core$Bit _156;
bool _158;
frost$core$MutableString* _161;
frost$core$Int _165;
frost$collections$Array* _169;
frost$collections$Array* _170;
frost$core$Object* _171;
frost$core$Equatable* _174;
frost$core$Equatable* _175;
org$frostlang$frostc$Type** _176;
org$frostlang$frostc$Type* _177;
frost$core$Equatable* _178;
$fn137 _179;
frost$core$Bit _180;
bool _181;
frost$core$MutableString* _184;
org$frostlang$frostc$Symbol* _185;
frost$core$String** _186;
frost$core$String* _187;
frost$core$MutableString* _191;
org$frostlang$frostc$Type* _194;
frost$core$MutableString* _195;
frost$core$String* _196;
frost$collections$Array* _197;
frost$collections$Array* _198;
org$frostlang$frostc$FixedArray* _199;
org$frostlang$frostc$FixedArray* _200;
frost$collections$ListView* _201;
frost$core$Bit _202;
frost$core$Object* _204;
frost$core$Object* _206;
frost$core$Object* _208;
frost$core$Object* _210;
frost$core$String* _212;
frost$core$Object* _213;
frost$collections$Array* _216;
frost$core$Object* _217;
frost$core$MutableString* _220;
frost$core$Object* _221;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:194
_1 = &param4->resolved;
_2 = *_1;
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:195
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_5 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String(_5, &$s138);
*(&local1) = ((frost$core$MutableString*) NULL);
_8 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = *(&local1);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
*(&local1) = _5;
_14 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_14);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:196
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_17 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_18 = _17;
frost$collections$Array$init(_18);
*(&local2) = ((frost$collections$Array*) NULL);
_21 = ((frost$core$Object*) _17);
frost$core$Frost$ref$frost$core$Object$Q(_21);
_23 = *(&local2);
_24 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_24);
*(&local2) = _17;
_27 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_27);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:197
*(&local3) = ((frost$core$String*) NULL);
_31 = ((frost$core$Object*) &$s139);
frost$core$Frost$ref$frost$core$Object$Q(_31);
_33 = *(&local3);
_34 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_34);
*(&local3) = &$s140;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:198
_38 = ((frost$collections$Iterable*) param3);
_39 = _38;
ITable* $tmp141 = _39->$class->itable;
while ($tmp141->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp141 = $tmp141->next;
}
_40 = $tmp141->methods[0];
_41 = _40(_39);
_42 = _41;
goto block1;
block1:;
_44 = _42;
ITable* $tmp142 = _44->$class->itable;
while ($tmp142->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp142 = $tmp142->next;
}
_45 = $tmp142->methods[0];
_46 = _45(_44);
_47 = _46.value;
if (_47) goto block3; else goto block2;
block2:;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
_50 = _42;
ITable* $tmp143 = _50->$class->itable;
while ($tmp143->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp143 = $tmp143->next;
}
_51 = $tmp143->methods[1];
_52 = _51(_50);
_53 = ((org$frostlang$frostc$Type*) _52);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$ref$frost$core$Object$Q(_54);
_56 = *(&local4);
_57 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_57);
*(&local4) = _53;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:199
_61 = *(&local2);
_62 = _61;
_63 = *(&local4);
_64 = ((frost$core$Object*) _63);
frost$collections$Array$add$frost$collections$Array$T(_62, _64);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:200
_67 = *(&local0);
_68 = _67.value;
if (_68) goto block4; else goto block5;
block4:;
_70 = *(&local4);
_71 = &_70->resolved;
_72 = *_71;
*(&local5) = _72;
goto block6;
block5:;
*(&local5) = _67;
goto block6;
block6:;
_77 = *(&local5);
*(&local0) = _77;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:201
_80 = *(&local1);
_81 = *(&local3);
frost$core$MutableString$append$frost$core$String(_80, _81);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:202
_84 = *(&local1);
_85 = *(&local4);
_86 = ((org$frostlang$frostc$Symbol*) _85);
_87 = &_86->name;
_88 = *_87;
frost$core$MutableString$append$frost$core$String(_84, _88);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:203
_91 = ((frost$core$Object*) &$s144);
frost$core$Frost$ref$frost$core$Object$Q(_91);
_93 = *(&local3);
_94 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_94);
*(&local3) = &$s145;
_97 = _52;
frost$core$Frost$unref$frost$core$Object$Q(_97);
_99 = *(&local4);
_100 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_100);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
_104 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_104);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:205
_107 = param2.$rawValue;
_108 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:206:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_111 = _107.value;
_112 = _108.value;
_113 = _111 == _112;
_114 = (frost$core$Bit) {_113};
_116 = _114.value;
if (_116) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:207
_119 = *(&local1);
frost$core$MutableString$append$frost$core$String(_119, &$s146);
goto block7;
block9:;
_122 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:209:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_125 = _107.value;
_126 = _122.value;
_127 = _125 == _126;
_128 = (frost$core$Bit) {_127};
_130 = _128.value;
if (_130) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:210
_133 = *(&local1);
frost$core$MutableString$append$frost$core$String(_133, &$s147);
goto block7;
block12:;
_136 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:212:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_139 = _107.value;
_140 = _136.value;
_141 = _139 == _140;
_142 = (frost$core$Bit) {_141};
_144 = _142.value;
if (_144) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:213
_147 = *(&local1);
frost$core$MutableString$append$frost$core$String(_147, &$s148);
goto block7;
block15:;
_150 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:215:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_153 = _107.value;
_154 = _150.value;
_155 = _153 == _154;
_156 = (frost$core$Bit) {_155};
_158 = _156.value;
if (_158) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:216
_161 = *(&local1);
frost$core$MutableString$append$frost$core$String(_161, &$s149);
goto block7;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:219
_165 = (frost$core$Int) {219u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s150, _165);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:222
_169 = *(&local2);
_170 = _169;
_171 = ((frost$core$Object*) param4);
frost$collections$Array$add$frost$collections$Array$T(_170, _171);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:223
_174 = ((frost$core$Equatable*) param4);
_175 = _174;
_176 = &param0->VOID_TYPE;
_177 = *_176;
_178 = ((frost$core$Equatable*) _177);
ITable* $tmp151 = _175->$class->itable;
while ($tmp151->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp151 = $tmp151->next;
}
_179 = $tmp151->methods[1];
_180 = _179(_175, _178);
_181 = _180.value;
if (_181) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:224
_184 = *(&local1);
_185 = ((org$frostlang$frostc$Symbol*) param4);
_186 = &_185->name;
_187 = *_186;
frost$core$MutableString$append$frost$core$String(_184, _187);
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:226
_191 = *(&local1);
frost$core$MutableString$append$frost$core$String(_191, &$s152);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:227
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
_194 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
_195 = *(&local1);
_196 = frost$core$MutableString$finish$R$frost$core$String(_195);
_197 = *(&local2);
_198 = _197;
_199 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT(_198);
_200 = _199;
_201 = ((frost$collections$ListView*) _200);
_202 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int(_194, _196, param2, param1, _201, _202, param5);
_204 = ((frost$core$Object*) _194);
frost$core$Frost$ref$frost$core$Object$Q(_204);
_206 = ((frost$core$Object*) _199);
frost$core$Frost$unref$frost$core$Object$Q(_206);
_208 = ((frost$core$Object*) _196);
frost$core$Frost$unref$frost$core$Object$Q(_208);
_210 = ((frost$core$Object*) _194);
frost$core$Frost$unref$frost$core$Object$Q(_210);
_212 = *(&local3);
_213 = ((frost$core$Object*) _212);
frost$core$Frost$unref$frost$core$Object$Q(_213);
*(&local3) = ((frost$core$String*) NULL);
_216 = *(&local2);
_217 = ((frost$core$Object*) _216);
frost$core$Frost$unref$frost$core$Object$Q(_217);
*(&local2) = ((frost$collections$Array*) NULL);
_220 = *(&local1);
_221 = ((frost$core$Object*) _220);
frost$core$Frost$unref$frost$core$Object$Q(_221);
*(&local1) = ((frost$core$MutableString*) NULL);
return _194;

}
frost$core$Int org$frostlang$frostc$Type$get_size$R$frost$core$Int(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind* _1;
org$frostlang$frostc$Type$Kind _2;
frost$core$Equatable* _3;
frost$core$Equatable* _4;
frost$core$Int _5;
frost$core$Int* _8;
org$frostlang$frostc$Type$Kind _10;
org$frostlang$frostc$Type$Kind _13;
frost$core$Equatable* _14;
$fn153 _15;
frost$core$Bit _16;
bool _17;
org$frostlang$frostc$Type$Kind* _21;
org$frostlang$frostc$Type$Kind _22;
frost$core$Equatable* _23;
frost$core$Equatable* _24;
frost$core$Int _25;
frost$core$Int* _28;
org$frostlang$frostc$Type$Kind _30;
org$frostlang$frostc$Type$Kind _33;
frost$core$Equatable* _34;
$fn154 _35;
frost$core$Bit _36;
frost$core$Object* _37;
frost$core$Object* _39;
frost$core$Bit _43;
bool _44;
org$frostlang$frostc$Type$Kind* _48;
org$frostlang$frostc$Type$Kind _49;
frost$core$Equatable* _50;
frost$core$Equatable* _51;
frost$core$Int _52;
frost$core$Int* _55;
org$frostlang$frostc$Type$Kind _57;
org$frostlang$frostc$Type$Kind _60;
frost$core$Equatable* _61;
$fn155 _62;
frost$core$Bit _63;
frost$core$Object* _64;
frost$core$Object* _66;
frost$core$Bit _70;
bool _71;
frost$core$Int _73;
frost$core$Object* _74;
$fn156 _77;
frost$core$String* _78;
frost$core$String* _79;
frost$core$Object* _80;
frost$core$Object* _82;
frost$core$Object* _84;
frost$core$String* _87;
frost$core$Object* _89;
frost$core$Object* _91;
frost$core$Object* _94;
frost$core$Object* _96;
org$frostlang$frostc$Symbol* _99;
org$frostlang$frostc$Position* _100;
org$frostlang$frostc$Position _101;
frost$core$Int _102;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:232
_1 = &param0->typeKind;
_2 = *_1;
org$frostlang$frostc$Type$Kind$wrapper* $tmp157;
$tmp157 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp157->value = _2;
_3 = ((frost$core$Equatable*) $tmp157);
_4 = _3;
_5 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:232:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_8 = &(&local3)->$rawValue;
*_8 = _5;
_10 = *(&local3);
*(&local2) = _10;
_13 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp158;
$tmp158 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp158->value = _13;
_14 = ((frost$core$Equatable*) $tmp158);
ITable* $tmp159 = _4->$class->itable;
while ($tmp159->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp159 = $tmp159->next;
}
_15 = $tmp159->methods[0];
_16 = _15(_4, _14);
_17 = _16.value;
if (_17) goto block2; else goto block3;
block2:;
*(&local1) = _16;
goto block4;
block3:;
_21 = &param0->typeKind;
_22 = *_21;
org$frostlang$frostc$Type$Kind$wrapper* $tmp160;
$tmp160 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp160->value = _22;
_23 = ((frost$core$Equatable*) $tmp160);
_24 = _23;
_25 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:232:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_28 = &(&local5)->$rawValue;
*_28 = _25;
_30 = *(&local5);
*(&local4) = _30;
_33 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp161;
$tmp161 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp161->value = _33;
_34 = ((frost$core$Equatable*) $tmp161);
ITable* $tmp162 = _24->$class->itable;
while ($tmp162->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp162 = $tmp162->next;
}
_35 = $tmp162->methods[0];
_36 = _35(_24, _34);
_37 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_37);
_39 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_39);
*(&local1) = _36;
goto block4;
block4:;
_43 = *(&local1);
_44 = _43.value;
if (_44) goto block6; else goto block7;
block6:;
*(&local0) = _43;
goto block8;
block7:;
_48 = &param0->typeKind;
_49 = *_48;
org$frostlang$frostc$Type$Kind$wrapper* $tmp163;
$tmp163 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp163->value = _49;
_50 = ((frost$core$Equatable*) $tmp163);
_51 = _50;
_52 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:233:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_55 = &(&local7)->$rawValue;
*_55 = _52;
_57 = *(&local7);
*(&local6) = _57;
_60 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp164;
$tmp164 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp164->value = _60;
_61 = ((frost$core$Equatable*) $tmp164);
ITable* $tmp165 = _51->$class->itable;
while ($tmp165->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp165 = $tmp165->next;
}
_62 = $tmp165->methods[0];
_63 = _62(_51, _61);
_64 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_64);
_66 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_66);
*(&local0) = _63;
goto block8;
block8:;
_70 = *(&local0);
_71 = _70.value;
if (_71) goto block10; else goto block11;
block11:;
_73 = (frost$core$Int) {232u};
_74 = ((frost$core$Object*) param0);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:233:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_77 = ($fn166) _74->$class->vtable[0];
_78 = _77(_74);
_79 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s167, _78);
_80 = ((frost$core$Object*) _79);
frost$core$Frost$ref$frost$core$Object$Q(_80);
_82 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_82);
_84 = ((frost$core$Object*) _78);
frost$core$Frost$unref$frost$core$Object$Q(_84);
_87 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_79, &$s168);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s169, _73, _87);
_89 = ((frost$core$Object*) _87);
frost$core$Frost$unref$frost$core$Object$Q(_89);
_91 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_91);
abort(); // unreachable
block10:;
_94 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_94);
_96 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_96);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:234
_99 = ((org$frostlang$frostc$Symbol*) param0);
_100 = &_99->position;
_101 = *_100;
_102 = _101.line;
return _102;

}
frost$core$Bit org$frostlang$frostc$Type$get_hasSubtypes$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$FixedArray** _1;
org$frostlang$frostc$FixedArray* _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:238
_1 = &param0->_subtypes;
_2 = *_1;
_3 = _2 != NULL;
_4 = (frost$core$Bit) {_3};
return _4;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$FixedArray** _1;
org$frostlang$frostc$FixedArray* _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Int _7;
org$frostlang$frostc$FixedArray* _10;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_1 = &param0->_subtypes;
_2 = *_1;
_3 = _2 != NULL;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block2:;
_7 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s170, _7, &$s171);
abort(); // unreachable
block1:;
_10 = _2;
_11 = ((frost$core$Object*) _10);
frost$core$Frost$ref$frost$core$Object$Q(_11);
return _10;

}
frost$core$Bit org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Type* param1) {

frost$core$Bit local0;
org$frostlang$frostc$Symbol* _1;
frost$core$String** _2;
frost$core$String* _3;
org$frostlang$frostc$Symbol* _4;
frost$core$String** _5;
frost$core$String* _6;
frost$core$Bit _7;
bool _8;
org$frostlang$frostc$Type$Kind* _10;
org$frostlang$frostc$Type$Kind _11;
frost$core$Equatable* _12;
frost$core$Equatable* _13;
org$frostlang$frostc$Type$Kind* _14;
org$frostlang$frostc$Type$Kind _15;
frost$core$Equatable* _16;
$fn172 _17;
frost$core$Bit _18;
frost$core$Object* _19;
frost$core$Object* _21;
frost$core$Bit _27;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
_1 = ((org$frostlang$frostc$Symbol*) param0);
_2 = &_1->name;
_3 = *_2;
_4 = ((org$frostlang$frostc$Symbol*) param1);
_5 = &_4->name;
_6 = *_5;
_7 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_3, _6);
_8 = _7.value;
if (_8) goto block1; else goto block2;
block1:;
_10 = &param0->typeKind;
_11 = *_10;
org$frostlang$frostc$Type$Kind$wrapper* $tmp173;
$tmp173 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp173->value = _11;
_12 = ((frost$core$Equatable*) $tmp173);
_13 = _12;
_14 = &param1->typeKind;
_15 = *_14;
org$frostlang$frostc$Type$Kind$wrapper* $tmp174;
$tmp174 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp174->value = _15;
_16 = ((frost$core$Equatable*) $tmp174);
ITable* $tmp175 = _13->$class->itable;
while ($tmp175->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp175 = $tmp175->next;
}
_17 = $tmp175->methods[0];
_18 = _17(_13, _16);
_19 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_21);
*(&local0) = _18;
goto block3;
block2:;
*(&local0) = _7;
goto block3;
block3:;
_27 = *(&local0);
return _27;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$IntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type* _1;
frost$core$Object* _2;
$fn176 _5;
frost$core$String* _6;
frost$core$String* _7;
frost$core$Object* _8;
frost$core$Object* _10;
frost$core$Object* _12;
frost$core$String* _15;
frost$core$Int _16;
frost$core$Int* _19;
org$frostlang$frostc$Type$Kind _21;
org$frostlang$frostc$Type$Kind _24;
org$frostlang$frostc$Position _25;
frost$core$Bit _26;
frost$core$Object* _28;
frost$core$Object* _30;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$Object* _36;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:257
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
_1 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp177;
$tmp177 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp177->value = param0;
_2 = ((frost$core$Object*) $tmp177);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:257:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_5 = ($fn178) _2->$class->vtable[0];
_6 = _5(_2);
_7 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s179, _6);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_10);
_12 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_7, &$s180);
_16 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:257:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_19 = &(&local1)->$rawValue;
*_19 = _16;
_21 = *(&local1);
*(&local0) = _21;
_24 = *(&local0);
_25 = org$frostlang$frostc$Position$init();
_26 = (frost$core$Bit) {true};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit(_1, _15, _24, _25, _26);
_28 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_30);
_32 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = _2;
frost$core$Frost$unref$frost$core$Object$Q(_34);
_36 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_36);
return _1;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$NegatedIntLiteral$frost$core$UInt64$R$org$frostlang$frostc$Type(frost$core$UInt64 param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type* _1;
frost$core$Object* _2;
$fn181 _5;
frost$core$String* _6;
frost$core$String* _7;
frost$core$Object* _8;
frost$core$Object* _10;
frost$core$Object* _12;
frost$core$String* _15;
frost$core$Int _16;
frost$core$Int* _19;
org$frostlang$frostc$Type$Kind _21;
org$frostlang$frostc$Type$Kind _24;
org$frostlang$frostc$Position _25;
frost$core$Bit _26;
frost$core$Object* _28;
frost$core$Object* _30;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$Object* _36;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:262
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
_1 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp182;
$tmp182 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp182->value = param0;
_2 = ((frost$core$Object*) $tmp182);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:262:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_5 = ($fn183) _2->$class->vtable[0];
_6 = _5(_2);
_7 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s184, _6);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_10);
_12 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_7, &$s185);
_16 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:262:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_19 = &(&local1)->$rawValue;
*_19 = _16;
_21 = *(&local1);
*(&local0) = _21;
_24 = *(&local0);
_25 = org$frostlang$frostc$Position$init();
_26 = (frost$core$Bit) {true};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit(_1, _15, _24, _25, _26);
_28 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_30);
_32 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = _2;
frost$core$Frost$unref$frost$core$Object$Q(_34);
_36 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_36);
return _1;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RealLiteral$frost$core$Real64$R$org$frostlang$frostc$Type(frost$core$Real64 param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type* _1;
frost$core$Object* _2;
$fn186 _5;
frost$core$String* _6;
frost$core$String* _7;
frost$core$Object* _8;
frost$core$Object* _10;
frost$core$Object* _12;
frost$core$String* _15;
frost$core$Int _16;
frost$core$Int* _19;
org$frostlang$frostc$Type$Kind _21;
org$frostlang$frostc$Type$Kind _24;
org$frostlang$frostc$Position _25;
frost$core$Bit _26;
frost$core$Object* _28;
frost$core$Object* _30;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$Object* _36;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:267
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
_1 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Real64$wrapper* $tmp187;
$tmp187 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp187->value = param0;
_2 = ((frost$core$Object*) $tmp187);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:267:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_5 = ($fn188) _2->$class->vtable[0];
_6 = _5(_2);
_7 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s189, _6);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_10);
_12 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_7, &$s190);
_16 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:267:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_19 = &(&local1)->$rawValue;
*_19 = _16;
_21 = *(&local1);
*(&local0) = _21;
_24 = *(&local0);
_25 = org$frostlang$frostc$Position$init();
_26 = (frost$core$Bit) {true};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit(_1, _15, _24, _25, _26);
_28 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_30);
_32 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = _2;
frost$core$Frost$unref$frost$core$Object$Q(_34);
_36 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_36);
return _1;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ClassLiteral$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$Type** _1;
org$frostlang$frostc$Type* _2;
frost$collections$Array* _3;
frost$collections$Array* _4;
frost$core$Int _5;
frost$collections$Array* _7;
frost$core$Object* _8;
frost$collections$ListView* _10;
org$frostlang$frostc$Type* _11;
frost$core$Object* _12;
frost$core$Object* _14;
frost$core$Object* _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
_1 = &param0->CLASS_TYPE;
_2 = *_1;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_3 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_4 = _3;
_5 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_4, _5);
_7 = _3;
_8 = ((frost$core$Object*) param1);
frost$collections$Array$add$frost$collections$Array$T(_7, _8);
_10 = ((frost$collections$ListView*) _3);
_11 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_2, _10);
_12 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_16);
return _11;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type* _1;
frost$core$Object* _4;
frost$core$String* _7;
frost$core$Object* _8;
$fn191 _11;
frost$core$String* _12;
frost$core$String* _13;
frost$core$Object* _14;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$String* _21;
frost$core$Int _22;
frost$core$Int* _25;
org$frostlang$frostc$Type$Kind _27;
org$frostlang$frostc$Type$Kind _30;
org$frostlang$frostc$Symbol* _31;
org$frostlang$frostc$Position* _32;
org$frostlang$frostc$Position _33;
frost$collections$Array* _34;
frost$collections$Array* _35;
frost$core$Int _36;
frost$collections$Array* _38;
org$frostlang$frostc$Type** _39;
org$frostlang$frostc$Type* _40;
frost$core$Object* _41;
frost$collections$Array* _43;
frost$core$Object* _44;
frost$collections$ListView* _46;
frost$core$Bit* _47;
frost$core$Bit _48;
frost$core$Object* _50;
frost$core$Object* _52;
frost$core$Object* _54;
frost$core$Object* _56;
frost$core$Object* _58;
frost$core$Object* _60;
frost$core$Object* _62;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:277
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
_1 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Type.frost:277:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:112
_4 = ((frost$core$Object*) &$s192);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_7 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s193, &$s194);
_8 = ((frost$core$Object*) param1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:277:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_11 = ($fn195) _8->$class->vtable[0];
_12 = _11(_8);
_13 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_7, _12);
_14 = ((frost$core$Object*) _13);
frost$core$Frost$ref$frost$core$Object$Q(_14);
_16 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_21 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_13, &$s196);
_22 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:277:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_25 = &(&local1)->$rawValue;
*_25 = _22;
_27 = *(&local1);
*(&local0) = _27;
_30 = *(&local0);
_31 = ((org$frostlang$frostc$Symbol*) param1);
_32 = &_31->position;
_33 = *_32;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_34 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_35 = _34;
_36 = (frost$core$Int) {2u};
frost$collections$Array$init$frost$core$Int(_35, _36);
_38 = _34;
_39 = &param0->WEAK_TYPE;
_40 = *_39;
_41 = ((frost$core$Object*) _40);
frost$collections$Array$add$frost$collections$Array$T(_38, _41);
_43 = _34;
_44 = ((frost$core$Object*) param1);
frost$collections$Array$add$frost$collections$Array$T(_43, _44);
_46 = ((frost$collections$ListView*) _34);
_47 = &param1->resolved;
_48 = *_47;
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit(_1, _21, _30, _33, _46, _48);
_50 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_50);
_52 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_52);
_54 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_54);
_56 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_56);
_58 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_58);
_60 = ((frost$core$Object*) &$s197);
frost$core$Frost$unref$frost$core$Object$Q(_60);
_62 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_62);
return _1;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$Type** _1;
org$frostlang$frostc$Type* _2;
frost$collections$Array* _3;
frost$collections$Array* _4;
frost$core$Int _5;
frost$collections$Array* _7;
frost$core$Object* _8;
frost$collections$ListView* _10;
org$frostlang$frostc$Type* _11;
frost$core$Object* _12;
frost$core$Object* _14;
frost$core$Object* _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:283
_1 = &param0->POINTER_TYPE;
_2 = *_1;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_3 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_4 = _3;
_5 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_4, _5);
_7 = _3;
_8 = ((frost$core$Object*) param1);
frost$collections$Array$add$frost$collections$Array$T(_7, _8);
_10 = ((frost$collections$ListView*) _3);
_11 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_2, _10);
_12 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_16);
return _11;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ArrayOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$Type** _1;
org$frostlang$frostc$Type* _2;
frost$collections$Array* _3;
frost$collections$Array* _4;
frost$core$Int _5;
frost$collections$Array* _7;
frost$core$Object* _8;
frost$collections$ListView* _10;
org$frostlang$frostc$Type* _11;
frost$core$Object* _12;
frost$core$Object* _14;
frost$core$Object* _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:288
_1 = &param0->ARRAY_TYPE;
_2 = *_1;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_3 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_4 = _3;
_5 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_4, _5);
_7 = _3;
_8 = ((frost$core$Object*) param1);
frost$collections$Array$add$frost$collections$Array$T(_7, _8);
_10 = ((frost$collections$ListView*) _3);
_11 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_2, _10);
_12 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_16);
return _11;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ImmutableArrayOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$Type** _1;
org$frostlang$frostc$Type* _2;
frost$collections$Array* _3;
frost$collections$Array* _4;
frost$core$Int _5;
frost$collections$Array* _7;
frost$core$Object* _8;
frost$collections$ListView* _10;
org$frostlang$frostc$Type* _11;
frost$core$Object* _12;
frost$core$Object* _14;
frost$core$Object* _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:293
_1 = &param0->IMMUTABLE_ARRAY_TYPE;
_2 = *_1;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_3 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_4 = _3;
_5 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_4, _5);
_7 = _3;
_8 = ((frost$core$Object*) param1);
frost$collections$Array$add$frost$collections$Array$T(_7, _8);
_10 = ((frost$collections$ListView*) _3);
_11 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_2, _10);
_12 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_16);
return _11;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$Type** _1;
org$frostlang$frostc$Type* _2;
frost$collections$Array* _3;
frost$collections$Array* _4;
frost$core$Int _5;
frost$collections$Array* _7;
frost$core$Object* _8;
frost$collections$ListView* _10;
org$frostlang$frostc$Type* _11;
frost$core$Object* _12;
frost$core$Object* _14;
frost$core$Object* _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:298
_1 = &param0->RANGE_TYPE;
_2 = *_1;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_3 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_4 = _3;
_5 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_4, _5);
_7 = _3;
_8 = ((frost$core$Object*) param1);
frost$collections$Array$add$frost$collections$Array$T(_7, _8);
_10 = ((frost$collections$ListView*) _3);
_11 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_2, _10);
_12 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_16);
return _11;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
frost$core$Bit local4;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
frost$core$Bit local8;
org$frostlang$frostc$Type* local9 = NULL;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$Type$Kind local11;
frost$core$Bit local12;
org$frostlang$frostc$Type* local13 = NULL;
org$frostlang$frostc$Type$Kind local14;
org$frostlang$frostc$Type$Kind local15;
frost$collections$Array* _1;
frost$collections$Array* _2;
frost$core$Object* _5;
frost$collections$Array* _7;
frost$core$Object* _8;
frost$core$Object* _11;
frost$collections$Array* _14;
frost$collections$Array* _15;
frost$core$Object* _16;
org$frostlang$frostc$Type$Kind* _21;
org$frostlang$frostc$Type$Kind _22;
frost$core$Equatable* _23;
frost$core$Equatable* _24;
frost$core$Int _25;
frost$core$Int* _28;
org$frostlang$frostc$Type$Kind _30;
org$frostlang$frostc$Type$Kind _33;
frost$core$Equatable* _34;
$fn198 _35;
frost$core$Bit _36;
bool _37;
frost$core$Object* _38;
frost$core$Object* _40;
frost$core$Object* _44;
frost$core$Object* _47;
org$frostlang$frostc$FixedArray** _53;
org$frostlang$frostc$FixedArray* _54;
bool _55;
frost$core$Bit _56;
bool _57;
frost$core$Int _59;
org$frostlang$frostc$FixedArray* _62;
frost$core$Object* _63;
org$frostlang$frostc$FixedArray* _66;
frost$core$Int _67;
frost$core$Object* _68;
org$frostlang$frostc$Type* _69;
frost$core$Object* _70;
frost$core$Object* _72;
frost$core$Object* _74;
frost$core$Object* _77;
org$frostlang$frostc$Type* _80;
org$frostlang$frostc$Type** _81;
org$frostlang$frostc$Type* _82;
org$frostlang$frostc$Symbol* _85;
frost$core$String** _86;
frost$core$String* _87;
org$frostlang$frostc$Symbol* _88;
frost$core$String** _89;
frost$core$String* _90;
frost$core$Bit _91;
bool _92;
org$frostlang$frostc$Type$Kind* _94;
org$frostlang$frostc$Type$Kind _95;
frost$core$Equatable* _96;
frost$core$Equatable* _97;
org$frostlang$frostc$Type$Kind* _98;
org$frostlang$frostc$Type$Kind _99;
frost$core$Equatable* _100;
$fn199 _101;
frost$core$Bit _102;
frost$core$Object* _103;
frost$core$Object* _105;
frost$core$Bit _111;
bool _113;
frost$core$Object* _114;
frost$collections$Array* _118;
frost$collections$Array* _119;
org$frostlang$frostc$Type** _120;
org$frostlang$frostc$Type* _121;
frost$core$Object* _122;
org$frostlang$frostc$Type$Kind* _128;
org$frostlang$frostc$Type$Kind _129;
frost$core$Equatable* _130;
frost$core$Equatable* _131;
frost$core$Int _132;
frost$core$Int* _135;
org$frostlang$frostc$Type$Kind _137;
org$frostlang$frostc$Type$Kind _140;
frost$core$Equatable* _141;
$fn200 _142;
frost$core$Bit _143;
bool _144;
frost$core$Object* _145;
frost$core$Object* _147;
frost$core$Object* _151;
frost$core$Object* _154;
org$frostlang$frostc$FixedArray** _160;
org$frostlang$frostc$FixedArray* _161;
bool _162;
frost$core$Bit _163;
bool _164;
frost$core$Int _166;
org$frostlang$frostc$FixedArray* _169;
frost$core$Object* _170;
org$frostlang$frostc$FixedArray* _173;
frost$core$Int _174;
frost$core$Object* _175;
org$frostlang$frostc$Type* _176;
frost$core$Object* _177;
frost$core$Object* _179;
frost$core$Object* _181;
frost$core$Object* _184;
org$frostlang$frostc$Type* _187;
org$frostlang$frostc$Type** _188;
org$frostlang$frostc$Type* _189;
org$frostlang$frostc$Symbol* _192;
frost$core$String** _193;
frost$core$String* _194;
org$frostlang$frostc$Symbol* _195;
frost$core$String** _196;
frost$core$String* _197;
frost$core$Bit _198;
bool _199;
org$frostlang$frostc$Type$Kind* _201;
org$frostlang$frostc$Type$Kind _202;
frost$core$Equatable* _203;
frost$core$Equatable* _204;
org$frostlang$frostc$Type$Kind* _205;
org$frostlang$frostc$Type$Kind _206;
frost$core$Equatable* _207;
$fn201 _208;
frost$core$Bit _209;
frost$core$Object* _210;
frost$core$Object* _212;
frost$core$Bit _218;
bool _220;
frost$core$Object* _221;
frost$collections$Array* _225;
frost$collections$Array* _226;
org$frostlang$frostc$Type** _227;
org$frostlang$frostc$Type* _228;
frost$core$Object* _229;
org$frostlang$frostc$Type$Kind* _235;
org$frostlang$frostc$Type$Kind _236;
frost$core$Equatable* _237;
frost$core$Equatable* _238;
frost$core$Int _239;
frost$core$Int* _242;
org$frostlang$frostc$Type$Kind _244;
org$frostlang$frostc$Type$Kind _247;
frost$core$Equatable* _248;
$fn202 _249;
frost$core$Bit _250;
bool _251;
frost$core$Object* _252;
frost$core$Object* _254;
frost$core$Object* _258;
frost$core$Object* _261;
org$frostlang$frostc$FixedArray** _267;
org$frostlang$frostc$FixedArray* _268;
bool _269;
frost$core$Bit _270;
bool _271;
frost$core$Int _273;
org$frostlang$frostc$FixedArray* _276;
frost$core$Object* _277;
org$frostlang$frostc$FixedArray* _280;
frost$core$Int _281;
frost$core$Object* _282;
org$frostlang$frostc$Type* _283;
frost$core$Object* _284;
frost$core$Object* _286;
frost$core$Object* _288;
frost$core$Object* _291;
org$frostlang$frostc$Type* _294;
org$frostlang$frostc$Type** _295;
org$frostlang$frostc$Type* _296;
org$frostlang$frostc$Symbol* _299;
frost$core$String** _300;
frost$core$String* _301;
org$frostlang$frostc$Symbol* _302;
frost$core$String** _303;
frost$core$String* _304;
frost$core$Bit _305;
bool _306;
org$frostlang$frostc$Type$Kind* _308;
org$frostlang$frostc$Type$Kind _309;
frost$core$Equatable* _310;
frost$core$Equatable* _311;
org$frostlang$frostc$Type$Kind* _312;
org$frostlang$frostc$Type$Kind _313;
frost$core$Equatable* _314;
$fn203 _315;
frost$core$Bit _316;
frost$core$Object* _317;
frost$core$Object* _319;
frost$core$Bit _325;
bool _327;
frost$core$Object* _328;
frost$collections$Array* _332;
frost$collections$Array* _333;
org$frostlang$frostc$Type** _334;
org$frostlang$frostc$Type* _335;
frost$core$Object* _336;
frost$collections$Array* _341;
frost$collections$Array* _342;
org$frostlang$frostc$Type$Kind* _345;
org$frostlang$frostc$Type$Kind _346;
frost$core$Equatable* _347;
frost$core$Equatable* _348;
frost$core$Int _349;
frost$core$Int* _352;
org$frostlang$frostc$Type$Kind _354;
org$frostlang$frostc$Type$Kind _357;
frost$core$Equatable* _358;
$fn204 _359;
frost$core$Bit _360;
bool _361;
frost$core$Object* _362;
frost$core$Object* _364;
frost$core$Object* _368;
frost$core$Object* _371;
org$frostlang$frostc$FixedArray** _377;
org$frostlang$frostc$FixedArray* _378;
bool _379;
frost$core$Bit _380;
bool _381;
frost$core$Int _383;
org$frostlang$frostc$FixedArray* _386;
frost$core$Object* _387;
org$frostlang$frostc$FixedArray* _390;
frost$core$Int _391;
frost$core$Object* _392;
org$frostlang$frostc$Type* _393;
frost$core$Object* _394;
frost$core$Object* _396;
frost$core$Object* _398;
frost$core$Object* _401;
org$frostlang$frostc$Type* _404;
frost$core$Object* _405;
frost$core$Object* _407;
org$frostlang$frostc$Type* _409;
frost$core$Object* _410;
org$frostlang$frostc$Type** _417;
org$frostlang$frostc$Type* _418;
frost$collections$Array* _419;
frost$collections$ListView* _420;
org$frostlang$frostc$Type* _421;
frost$core$Object* _422;
frost$core$Object* _424;
org$frostlang$frostc$Type* _426;
frost$core$Object* _427;
org$frostlang$frostc$Type* _430;
frost$core$Object* _431;
org$frostlang$frostc$Type* _434;
frost$core$Object* _435;
frost$collections$Array* _438;
frost$core$Object* _439;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:303
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_1 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_2 = _1;
frost$collections$Array$init(_2);
*(&local0) = ((frost$collections$Array*) NULL);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = *(&local0);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
*(&local0) = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:304
_14 = *(&local0);
_15 = _14;
_16 = ((frost$core$Object*) param1);
frost$collections$Array$add$frost$collections$Array$T(_15, _16);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:305
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:305:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
_21 = &param1->typeKind;
_22 = *_21;
org$frostlang$frostc$Type$Kind$wrapper* $tmp205;
$tmp205 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp205->value = _22;
_23 = ((frost$core$Equatable*) $tmp205);
_24 = _23;
_25 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_28 = &(&local3)->$rawValue;
*_28 = _25;
_30 = *(&local3);
*(&local2) = _30;
_33 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp206;
$tmp206 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp206->value = _33;
_34 = ((frost$core$Equatable*) $tmp206);
ITable* $tmp207 = _24->$class->itable;
while ($tmp207->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp207 = $tmp207->next;
}
_35 = $tmp207->methods[1];
_36 = _35(_24, _34);
_37 = _36.value;
_38 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_38);
_40 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_40);
if (_37) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
_44 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_44);
*(&local1) = param1;
_47 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_47);
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_53 = &param1->_subtypes;
_54 = *_53;
_55 = _54 != NULL;
_56 = (frost$core$Bit) {_55};
_57 = _56.value;
if (_57) goto block9; else goto block10;
block10:;
_59 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s208, _59, &$s209);
abort(); // unreachable
block9:;
_62 = _54;
_63 = ((frost$core$Object*) _62);
frost$core$Frost$ref$frost$core$Object$Q(_63);
_66 = _62;
_67 = (frost$core$Int) {0u};
_68 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_66, _67);
_69 = ((org$frostlang$frostc$Type*) _68);
_70 = ((frost$core$Object*) _69);
frost$core$Frost$ref$frost$core$Object$Q(_70);
_72 = _68;
frost$core$Frost$unref$frost$core$Object$Q(_72);
_74 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_74);
*(&local1) = _69;
_77 = ((frost$core$Object*) _69);
frost$core$Frost$ref$frost$core$Object$Q(_77);
goto block4;
block4:;
_80 = *(&local1);
_81 = &param0->CHAR8_TYPE;
_82 = *_81;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:305:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
_85 = ((org$frostlang$frostc$Symbol*) _80);
_86 = &_85->name;
_87 = *_86;
_88 = ((org$frostlang$frostc$Symbol*) _82);
_89 = &_88->name;
_90 = *_89;
_91 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_87, _90);
_92 = _91.value;
if (_92) goto block12; else goto block13;
block12:;
_94 = &_80->typeKind;
_95 = *_94;
org$frostlang$frostc$Type$Kind$wrapper* $tmp210;
$tmp210 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp210->value = _95;
_96 = ((frost$core$Equatable*) $tmp210);
_97 = _96;
_98 = &_82->typeKind;
_99 = *_98;
org$frostlang$frostc$Type$Kind$wrapper* $tmp211;
$tmp211 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp211->value = _99;
_100 = ((frost$core$Equatable*) $tmp211);
ITable* $tmp212 = _97->$class->itable;
while ($tmp212->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp212 = $tmp212->next;
}
_101 = $tmp212->methods[0];
_102 = _101(_97, _100);
_103 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_103);
_105 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_105);
*(&local4) = _102;
goto block14;
block13:;
*(&local4) = _91;
goto block14;
block14:;
_111 = *(&local4);
_113 = _111.value;
_114 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_114);
if (_113) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:306
_118 = *(&local0);
_119 = _118;
_120 = &param0->INT8_TYPE;
_121 = *_120;
_122 = ((frost$core$Object*) _121);
frost$collections$Array$add$frost$collections$Array$T(_119, _122);
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:308
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:308:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
_128 = &param1->typeKind;
_129 = *_128;
org$frostlang$frostc$Type$Kind$wrapper* $tmp213;
$tmp213 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp213->value = _129;
_130 = ((frost$core$Equatable*) $tmp213);
_131 = _130;
_132 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_135 = &(&local7)->$rawValue;
*_135 = _132;
_137 = *(&local7);
*(&local6) = _137;
_140 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp214;
$tmp214 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp214->value = _140;
_141 = ((frost$core$Equatable*) $tmp214);
ITable* $tmp215 = _131->$class->itable;
while ($tmp215->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp215 = $tmp215->next;
}
_142 = $tmp215->methods[1];
_143 = _142(_131, _141);
_144 = _143.value;
_145 = ((frost$core$Object*) _141);
frost$core$Frost$unref$frost$core$Object$Q(_145);
_147 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_147);
if (_144) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
_151 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_151);
*(&local5) = param1;
_154 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_154);
goto block18;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_160 = &param1->_subtypes;
_161 = *_160;
_162 = _161 != NULL;
_163 = (frost$core$Bit) {_162};
_164 = _163.value;
if (_164) goto block23; else goto block24;
block24:;
_166 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s216, _166, &$s217);
abort(); // unreachable
block23:;
_169 = _161;
_170 = ((frost$core$Object*) _169);
frost$core$Frost$ref$frost$core$Object$Q(_170);
_173 = _169;
_174 = (frost$core$Int) {0u};
_175 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_173, _174);
_176 = ((org$frostlang$frostc$Type*) _175);
_177 = ((frost$core$Object*) _176);
frost$core$Frost$ref$frost$core$Object$Q(_177);
_179 = _175;
frost$core$Frost$unref$frost$core$Object$Q(_179);
_181 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_181);
*(&local5) = _176;
_184 = ((frost$core$Object*) _176);
frost$core$Frost$ref$frost$core$Object$Q(_184);
goto block18;
block18:;
_187 = *(&local5);
_188 = &param0->CHAR16_TYPE;
_189 = *_188;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:308:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
_192 = ((org$frostlang$frostc$Symbol*) _187);
_193 = &_192->name;
_194 = *_193;
_195 = ((org$frostlang$frostc$Symbol*) _189);
_196 = &_195->name;
_197 = *_196;
_198 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_194, _197);
_199 = _198.value;
if (_199) goto block26; else goto block27;
block26:;
_201 = &_187->typeKind;
_202 = *_201;
org$frostlang$frostc$Type$Kind$wrapper* $tmp218;
$tmp218 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp218->value = _202;
_203 = ((frost$core$Equatable*) $tmp218);
_204 = _203;
_205 = &_189->typeKind;
_206 = *_205;
org$frostlang$frostc$Type$Kind$wrapper* $tmp219;
$tmp219 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp219->value = _206;
_207 = ((frost$core$Equatable*) $tmp219);
ITable* $tmp220 = _204->$class->itable;
while ($tmp220->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp220 = $tmp220->next;
}
_208 = $tmp220->methods[0];
_209 = _208(_204, _207);
_210 = ((frost$core$Object*) _207);
frost$core$Frost$unref$frost$core$Object$Q(_210);
_212 = ((frost$core$Object*) _203);
frost$core$Frost$unref$frost$core$Object$Q(_212);
*(&local8) = _209;
goto block28;
block27:;
*(&local8) = _198;
goto block28;
block28:;
_218 = *(&local8);
_220 = _218.value;
_221 = ((frost$core$Object*) _187);
frost$core$Frost$unref$frost$core$Object$Q(_221);
if (_220) goto block15; else goto block17;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:309
_225 = *(&local0);
_226 = _225;
_227 = &param0->INT16_TYPE;
_228 = *_227;
_229 = ((frost$core$Object*) _228);
frost$collections$Array$add$frost$collections$Array$T(_226, _229);
goto block16;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:311
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:311:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
_235 = &param1->typeKind;
_236 = *_235;
org$frostlang$frostc$Type$Kind$wrapper* $tmp221;
$tmp221 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp221->value = _236;
_237 = ((frost$core$Equatable*) $tmp221);
_238 = _237;
_239 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_242 = &(&local11)->$rawValue;
*_242 = _239;
_244 = *(&local11);
*(&local10) = _244;
_247 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp222;
$tmp222 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp222->value = _247;
_248 = ((frost$core$Equatable*) $tmp222);
ITable* $tmp223 = _238->$class->itable;
while ($tmp223->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp223 = $tmp223->next;
}
_249 = $tmp223->methods[1];
_250 = _249(_238, _248);
_251 = _250.value;
_252 = ((frost$core$Object*) _248);
frost$core$Frost$unref$frost$core$Object$Q(_252);
_254 = ((frost$core$Object*) _237);
frost$core$Frost$unref$frost$core$Object$Q(_254);
if (_251) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
_258 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_258);
*(&local9) = param1;
_261 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_261);
goto block32;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_267 = &param1->_subtypes;
_268 = *_267;
_269 = _268 != NULL;
_270 = (frost$core$Bit) {_269};
_271 = _270.value;
if (_271) goto block37; else goto block38;
block38:;
_273 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s224, _273, &$s225);
abort(); // unreachable
block37:;
_276 = _268;
_277 = ((frost$core$Object*) _276);
frost$core$Frost$ref$frost$core$Object$Q(_277);
_280 = _276;
_281 = (frost$core$Int) {0u};
_282 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_280, _281);
_283 = ((org$frostlang$frostc$Type*) _282);
_284 = ((frost$core$Object*) _283);
frost$core$Frost$ref$frost$core$Object$Q(_284);
_286 = _282;
frost$core$Frost$unref$frost$core$Object$Q(_286);
_288 = ((frost$core$Object*) _276);
frost$core$Frost$unref$frost$core$Object$Q(_288);
*(&local9) = _283;
_291 = ((frost$core$Object*) _283);
frost$core$Frost$ref$frost$core$Object$Q(_291);
goto block32;
block32:;
_294 = *(&local9);
_295 = &param0->CHAR32_TYPE;
_296 = *_295;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:311:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
_299 = ((org$frostlang$frostc$Symbol*) _294);
_300 = &_299->name;
_301 = *_300;
_302 = ((org$frostlang$frostc$Symbol*) _296);
_303 = &_302->name;
_304 = *_303;
_305 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_301, _304);
_306 = _305.value;
if (_306) goto block40; else goto block41;
block40:;
_308 = &_294->typeKind;
_309 = *_308;
org$frostlang$frostc$Type$Kind$wrapper* $tmp226;
$tmp226 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp226->value = _309;
_310 = ((frost$core$Equatable*) $tmp226);
_311 = _310;
_312 = &_296->typeKind;
_313 = *_312;
org$frostlang$frostc$Type$Kind$wrapper* $tmp227;
$tmp227 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp227->value = _313;
_314 = ((frost$core$Equatable*) $tmp227);
ITable* $tmp228 = _311->$class->itable;
while ($tmp228->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp228 = $tmp228->next;
}
_315 = $tmp228->methods[0];
_316 = _315(_311, _314);
_317 = ((frost$core$Object*) _314);
frost$core$Frost$unref$frost$core$Object$Q(_317);
_319 = ((frost$core$Object*) _310);
frost$core$Frost$unref$frost$core$Object$Q(_319);
*(&local12) = _316;
goto block42;
block41:;
*(&local12) = _305;
goto block42;
block42:;
_325 = *(&local12);
_327 = _325.value;
_328 = ((frost$core$Object*) _294);
frost$core$Frost$unref$frost$core$Object$Q(_328);
if (_327) goto block29; else goto block31;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:312
_332 = *(&local0);
_333 = _332;
_334 = &param0->INT32_TYPE;
_335 = *_334;
_336 = ((frost$core$Object*) _335);
frost$collections$Array$add$frost$collections$Array$T(_333, _336);
goto block30;
block31:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:315
_341 = *(&local0);
_342 = _341;
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:315:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
_345 = &param1->typeKind;
_346 = *_345;
org$frostlang$frostc$Type$Kind$wrapper* $tmp229;
$tmp229 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp229->value = _346;
_347 = ((frost$core$Equatable*) $tmp229);
_348 = _347;
_349 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_352 = &(&local15)->$rawValue;
*_352 = _349;
_354 = *(&local15);
*(&local14) = _354;
_357 = *(&local14);
org$frostlang$frostc$Type$Kind$wrapper* $tmp230;
$tmp230 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp230->value = _357;
_358 = ((frost$core$Equatable*) $tmp230);
ITable* $tmp231 = _348->$class->itable;
while ($tmp231->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp231 = $tmp231->next;
}
_359 = $tmp231->methods[1];
_360 = _359(_348, _358);
_361 = _360.value;
_362 = ((frost$core$Object*) _358);
frost$core$Frost$unref$frost$core$Object$Q(_362);
_364 = ((frost$core$Object*) _347);
frost$core$Frost$unref$frost$core$Object$Q(_364);
if (_361) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
_368 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_368);
*(&local13) = param1;
_371 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_371);
goto block43;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_377 = &param1->_subtypes;
_378 = *_377;
_379 = _378 != NULL;
_380 = (frost$core$Bit) {_379};
_381 = _380.value;
if (_381) goto block48; else goto block49;
block49:;
_383 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s232, _383, &$s233);
abort(); // unreachable
block48:;
_386 = _378;
_387 = ((frost$core$Object*) _386);
frost$core$Frost$ref$frost$core$Object$Q(_387);
_390 = _386;
_391 = (frost$core$Int) {0u};
_392 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_390, _391);
_393 = ((org$frostlang$frostc$Type*) _392);
_394 = ((frost$core$Object*) _393);
frost$core$Frost$ref$frost$core$Object$Q(_394);
_396 = _392;
frost$core$Frost$unref$frost$core$Object$Q(_396);
_398 = ((frost$core$Object*) _386);
frost$core$Frost$unref$frost$core$Object$Q(_398);
*(&local13) = _393;
_401 = ((frost$core$Object*) _393);
frost$core$Frost$ref$frost$core$Object$Q(_401);
goto block43;
block43:;
_404 = *(&local13);
_405 = ((frost$core$Object*) _404);
frost$collections$Array$add$frost$collections$Array$T(_342, _405);
_407 = ((frost$core$Object*) _404);
frost$core$Frost$unref$frost$core$Object$Q(_407);
_409 = *(&local13);
_410 = ((frost$core$Object*) _409);
frost$core$Frost$unref$frost$core$Object$Q(_410);
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
goto block30;
block30:;
goto block16;
block16:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:317
_417 = &param0->STEPPED_RANGE_TYPE;
_418 = *_417;
_419 = *(&local0);
_420 = ((frost$collections$ListView*) _419);
_421 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_418, _420);
_422 = ((frost$core$Object*) _421);
frost$core$Frost$ref$frost$core$Object$Q(_422);
_424 = ((frost$core$Object*) _421);
frost$core$Frost$unref$frost$core$Object$Q(_424);
_426 = *(&local9);
_427 = ((frost$core$Object*) _426);
frost$core$Frost$unref$frost$core$Object$Q(_427);
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
_430 = *(&local5);
_431 = ((frost$core$Object*) _430);
frost$core$Frost$unref$frost$core$Object$Q(_431);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
_434 = *(&local1);
_435 = ((frost$core$Object*) _434);
frost$core$Frost$unref$frost$core$Object$Q(_435);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
_438 = *(&local0);
_439 = ((frost$core$Object*) _438);
frost$core$Frost$unref$frost$core$Object$Q(_439);
*(&local0) = ((frost$collections$Array*) NULL);
return _421;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$Type* param2) {

frost$collections$Array* local0 = NULL;
frost$collections$Array* _1;
frost$collections$Array* _2;
frost$core$Object* _5;
frost$collections$Array* _7;
frost$core$Object* _8;
frost$core$Object* _11;
frost$collections$Array* _14;
frost$collections$Array* _15;
frost$core$Object* _16;
frost$collections$Array* _19;
frost$collections$Array* _20;
frost$core$Object* _21;
org$frostlang$frostc$Type** _24;
org$frostlang$frostc$Type* _25;
frost$collections$Array* _26;
frost$collections$ListView* _27;
org$frostlang$frostc$Type* _28;
frost$core$Object* _29;
frost$core$Object* _31;
frost$collections$Array* _33;
frost$core$Object* _34;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:322
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_1 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_2 = _1;
frost$collections$Array$init(_2);
*(&local0) = ((frost$collections$Array*) NULL);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = *(&local0);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
*(&local0) = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:323
_14 = *(&local0);
_15 = _14;
_16 = ((frost$core$Object*) param1);
frost$collections$Array$add$frost$collections$Array$T(_15, _16);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:324
_19 = *(&local0);
_20 = _19;
_21 = ((frost$core$Object*) param2);
frost$collections$Array$add$frost$collections$Array$T(_20, _21);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:325
_24 = &param0->STEPPED_RANGE_TYPE;
_25 = *_24;
_26 = *(&local0);
_27 = ((frost$collections$ListView*) _26);
_28 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_25, _27);
_29 = ((frost$core$Object*) _28);
frost$core$Frost$ref$frost$core$Object$Q(_29);
_31 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_31);
_33 = *(&local0);
_34 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_34);
*(&local0) = ((frost$collections$Array*) NULL);
return _28;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Symbol* _1;
frost$core$String** _2;
frost$core$String* _3;
frost$core$Bit _4;
bool _5;
org$frostlang$frostc$Symbol* _9;
frost$core$String** _10;
frost$core$String* _11;
frost$core$Bit _12;
frost$core$Bit _15;
bool _16;
org$frostlang$frostc$Symbol* _20;
frost$core$String** _21;
frost$core$String* _22;
frost$core$Bit _23;
frost$core$Bit _26;
bool _27;
org$frostlang$frostc$Type$Kind* _31;
org$frostlang$frostc$Type$Kind _32;
frost$core$Equatable* _33;
frost$core$Equatable* _34;
frost$core$Int _35;
frost$core$Int* _38;
org$frostlang$frostc$Type$Kind _40;
org$frostlang$frostc$Type$Kind _43;
frost$core$Equatable* _44;
$fn234 _45;
frost$core$Bit _46;
frost$core$Object* _47;
frost$core$Object* _49;
frost$core$Bit _53;
bool _54;
org$frostlang$frostc$Type$Kind* _58;
org$frostlang$frostc$Type$Kind _59;
frost$core$Equatable* _60;
frost$core$Equatable* _61;
frost$core$Int _62;
frost$core$Int* _65;
org$frostlang$frostc$Type$Kind _67;
org$frostlang$frostc$Type$Kind _70;
frost$core$Equatable* _71;
$fn235 _72;
frost$core$Bit _73;
frost$core$Object* _74;
frost$core$Object* _76;
frost$core$Bit _80;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:329
_1 = ((org$frostlang$frostc$Symbol*) param0);
_2 = &_1->name;
_3 = *_2;
_4 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_3, &$s236);
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
*(&local3) = _4;
goto block3;
block2:;
_9 = ((org$frostlang$frostc$Symbol*) param0);
_10 = &_9->name;
_11 = *_10;
_12 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_11, &$s237);
*(&local3) = _12;
goto block3;
block3:;
_15 = *(&local3);
_16 = _15.value;
if (_16) goto block4; else goto block5;
block4:;
*(&local2) = _15;
goto block6;
block5:;
_20 = ((org$frostlang$frostc$Symbol*) param0);
_21 = &_20->name;
_22 = *_21;
_23 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_22, &$s238);
*(&local2) = _23;
goto block6;
block6:;
_26 = *(&local2);
_27 = _26.value;
if (_27) goto block7; else goto block8;
block7:;
*(&local1) = _26;
goto block9;
block8:;
_31 = &param0->typeKind;
_32 = *_31;
org$frostlang$frostc$Type$Kind$wrapper* $tmp239;
$tmp239 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp239->value = _32;
_33 = ((frost$core$Equatable*) $tmp239);
_34 = _33;
_35 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:330:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_38 = &(&local5)->$rawValue;
*_38 = _35;
_40 = *(&local5);
*(&local4) = _40;
_43 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp240;
$tmp240 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp240->value = _43;
_44 = ((frost$core$Equatable*) $tmp240);
ITable* $tmp241 = _34->$class->itable;
while ($tmp241->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp241 = $tmp241->next;
}
_45 = $tmp241->methods[0];
_46 = _45(_34, _44);
_47 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_47);
_49 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_49);
*(&local1) = _46;
goto block9;
block9:;
_53 = *(&local1);
_54 = _53.value;
if (_54) goto block11; else goto block12;
block11:;
*(&local0) = _53;
goto block13;
block12:;
_58 = &param0->typeKind;
_59 = *_58;
org$frostlang$frostc$Type$Kind$wrapper* $tmp242;
$tmp242 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp242->value = _59;
_60 = ((frost$core$Equatable*) $tmp242);
_61 = _60;
_62 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:331:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_65 = &(&local7)->$rawValue;
*_65 = _62;
_67 = *(&local7);
*(&local6) = _67;
_70 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp243;
$tmp243 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp243->value = _70;
_71 = ((frost$core$Equatable*) $tmp243);
ITable* $tmp244 = _61->$class->itable;
while ($tmp244->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp244 = $tmp244->next;
}
_72 = $tmp244->methods[0];
_73 = _72(_61, _71);
_74 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_74);
_76 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_76);
*(&local0) = _73;
goto block13;
block13:;
_80 = *(&local0);
return _80;

}
frost$core$Bit org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$Type$Kind* _1;
org$frostlang$frostc$Type$Kind _2;
frost$core$Equatable* _3;
frost$core$Equatable* _4;
frost$core$Int _5;
frost$core$Int* _8;
org$frostlang$frostc$Type$Kind _10;
org$frostlang$frostc$Type$Kind _13;
frost$core$Equatable* _14;
$fn245 _15;
frost$core$Bit _16;
bool _17;
org$frostlang$frostc$Type$Kind* _21;
org$frostlang$frostc$Type$Kind _22;
frost$core$Equatable* _23;
frost$core$Equatable* _24;
frost$core$Int _25;
frost$core$Int* _28;
org$frostlang$frostc$Type$Kind _30;
org$frostlang$frostc$Type$Kind _33;
frost$core$Equatable* _34;
$fn246 _35;
frost$core$Bit _36;
frost$core$Object* _37;
frost$core$Object* _39;
frost$core$Bit _43;
bool _44;
org$frostlang$frostc$Type$Kind* _48;
org$frostlang$frostc$Type$Kind _49;
frost$core$Equatable* _50;
frost$core$Equatable* _51;
frost$core$Int _52;
frost$core$Int* _55;
org$frostlang$frostc$Type$Kind _57;
org$frostlang$frostc$Type$Kind _60;
frost$core$Equatable* _61;
$fn247 _62;
frost$core$Bit _63;
frost$core$Object* _64;
frost$core$Object* _66;
frost$core$Bit _70;
bool _71;
org$frostlang$frostc$Type$Kind* _75;
org$frostlang$frostc$Type$Kind _76;
frost$core$Equatable* _77;
frost$core$Equatable* _78;
frost$core$Int _79;
frost$core$Int* _82;
org$frostlang$frostc$Type$Kind _84;
org$frostlang$frostc$Type$Kind _87;
frost$core$Equatable* _88;
$fn248 _89;
frost$core$Bit _90;
frost$core$Object* _91;
frost$core$Object* _93;
frost$core$Bit _97;
frost$core$Object* _98;
frost$core$Object* _100;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:335
_1 = &param0->typeKind;
_2 = *_1;
org$frostlang$frostc$Type$Kind$wrapper* $tmp249;
$tmp249 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp249->value = _2;
_3 = ((frost$core$Equatable*) $tmp249);
_4 = _3;
_5 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:335:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_8 = &(&local4)->$rawValue;
*_8 = _5;
_10 = *(&local4);
*(&local3) = _10;
_13 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp250;
$tmp250 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp250->value = _13;
_14 = ((frost$core$Equatable*) $tmp250);
ITable* $tmp251 = _4->$class->itable;
while ($tmp251->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp251 = $tmp251->next;
}
_15 = $tmp251->methods[0];
_16 = _15(_4, _14);
_17 = _16.value;
if (_17) goto block2; else goto block3;
block2:;
*(&local2) = _16;
goto block4;
block3:;
_21 = &param0->typeKind;
_22 = *_21;
org$frostlang$frostc$Type$Kind$wrapper* $tmp252;
$tmp252 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp252->value = _22;
_23 = ((frost$core$Equatable*) $tmp252);
_24 = _23;
_25 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:335:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_28 = &(&local6)->$rawValue;
*_28 = _25;
_30 = *(&local6);
*(&local5) = _30;
_33 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp253;
$tmp253 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp253->value = _33;
_34 = ((frost$core$Equatable*) $tmp253);
ITable* $tmp254 = _24->$class->itable;
while ($tmp254->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp254 = $tmp254->next;
}
_35 = $tmp254->methods[0];
_36 = _35(_24, _34);
_37 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_37);
_39 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_39);
*(&local2) = _36;
goto block4;
block4:;
_43 = *(&local2);
_44 = _43.value;
if (_44) goto block6; else goto block7;
block6:;
*(&local1) = _43;
goto block8;
block7:;
_48 = &param0->typeKind;
_49 = *_48;
org$frostlang$frostc$Type$Kind$wrapper* $tmp255;
$tmp255 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp255->value = _49;
_50 = ((frost$core$Equatable*) $tmp255);
_51 = _50;
_52 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:336:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_55 = &(&local8)->$rawValue;
*_55 = _52;
_57 = *(&local8);
*(&local7) = _57;
_60 = *(&local7);
org$frostlang$frostc$Type$Kind$wrapper* $tmp256;
$tmp256 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp256->value = _60;
_61 = ((frost$core$Equatable*) $tmp256);
ITable* $tmp257 = _51->$class->itable;
while ($tmp257->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp257 = $tmp257->next;
}
_62 = $tmp257->methods[0];
_63 = _62(_51, _61);
_64 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_64);
_66 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_66);
*(&local1) = _63;
goto block8;
block8:;
_70 = *(&local1);
_71 = _70.value;
if (_71) goto block10; else goto block11;
block10:;
*(&local0) = _70;
goto block12;
block11:;
_75 = &param0->typeKind;
_76 = *_75;
org$frostlang$frostc$Type$Kind$wrapper* $tmp258;
$tmp258 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp258->value = _76;
_77 = ((frost$core$Equatable*) $tmp258);
_78 = _77;
_79 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:336:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_82 = &(&local10)->$rawValue;
*_82 = _79;
_84 = *(&local10);
*(&local9) = _84;
_87 = *(&local9);
org$frostlang$frostc$Type$Kind$wrapper* $tmp259;
$tmp259 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp259->value = _87;
_88 = ((frost$core$Equatable*) $tmp259);
ITable* $tmp260 = _78->$class->itable;
while ($tmp260->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp260 = $tmp260->next;
}
_89 = $tmp260->methods[0];
_90 = _89(_78, _88);
_91 = ((frost$core$Object*) _88);
frost$core$Frost$unref$frost$core$Object$Q(_91);
_93 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_93);
*(&local0) = _90;
goto block12;
block12:;
_97 = *(&local0);
_98 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_98);
_100 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_100);
return _97;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSigned$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Symbol* _1;
frost$core$String** _2;
frost$core$String* _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:340
_1 = ((org$frostlang$frostc$Symbol*) param0);
_2 = &_1->name;
_3 = *_2;
_4 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_3, &$s261);
return _4;

}
frost$core$Bit org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind* _1;
org$frostlang$frostc$Type$Kind _2;
frost$core$Equatable* _3;
frost$core$Equatable* _4;
frost$core$Int _5;
frost$core$Int* _8;
org$frostlang$frostc$Type$Kind _10;
org$frostlang$frostc$Type$Kind _13;
frost$core$Equatable* _14;
$fn262 _15;
frost$core$Bit _16;
bool _17;
org$frostlang$frostc$Symbol* _21;
frost$core$String** _22;
frost$core$String* _23;
frost$core$Bit _24;
frost$core$Bit _27;
frost$core$Object* _28;
frost$core$Object* _30;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:344
_1 = &param0->typeKind;
_2 = *_1;
org$frostlang$frostc$Type$Kind$wrapper* $tmp263;
$tmp263 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp263->value = _2;
_3 = ((frost$core$Equatable*) $tmp263);
_4 = _3;
_5 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:344:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_8 = &(&local2)->$rawValue;
*_8 = _5;
_10 = *(&local2);
*(&local1) = _10;
_13 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp264;
$tmp264 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp264->value = _13;
_14 = ((frost$core$Equatable*) $tmp264);
ITable* $tmp265 = _4->$class->itable;
while ($tmp265->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp265 = $tmp265->next;
}
_15 = $tmp265->methods[0];
_16 = _15(_4, _14);
_17 = _16.value;
if (_17) goto block2; else goto block3;
block2:;
*(&local0) = _16;
goto block4;
block3:;
_21 = ((org$frostlang$frostc$Symbol*) param0);
_22 = &_21->name;
_23 = *_22;
_24 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_23, &$s266);
*(&local0) = _24;
goto block4;
block4:;
_27 = *(&local0);
_28 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_28);
_30 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_30);
return _27;

}
frost$core$Bit org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Symbol* _1;
frost$core$String** _2;
frost$core$String* _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:348
_1 = ((org$frostlang$frostc$Symbol*) param0);
_2 = &_1->name;
_3 = *_2;
_4 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_3, &$s267);
return _4;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
frost$core$Bit _1;
bool _2;
org$frostlang$frostc$Symbol* _8;
frost$core$String** _9;
frost$core$String* _10;
frost$core$Bit _11;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:352
_1 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
_2 = _1.value;
if (_2) goto block1; else goto block2;
block1:;
*(&local0) = _1;
goto block3;
block2:;
// begin inline call to function org.frostlang.frostc.Type.get_isChar():frost.core.Bit from Type.frost:352:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:348
_8 = ((org$frostlang$frostc$Symbol*) param0);
_9 = &_8->name;
_10 = *_9;
_11 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_10, &$s268);
*(&local0) = _11;
goto block3;
block3:;
_15 = *(&local0);
return _15;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind* _1;
org$frostlang$frostc$Type$Kind _2;
frost$core$Int _3;
frost$core$Int _4;
int64_t _7;
int64_t _8;
bool _9;
frost$core$Bit _10;
bool _12;
frost$core$Int _14;
int64_t _17;
int64_t _18;
bool _19;
frost$core$Bit _20;
bool _22;
frost$core$Int _24;
int64_t _27;
int64_t _28;
bool _29;
frost$core$Bit _30;
bool _32;
frost$core$Int _34;
int64_t _37;
int64_t _38;
bool _39;
frost$core$Bit _40;
bool _42;
frost$core$Int _44;
int64_t _47;
int64_t _48;
bool _49;
frost$core$Bit _50;
bool _52;
frost$core$Int _54;
int64_t _57;
int64_t _58;
bool _59;
frost$core$Bit _60;
bool _62;
frost$core$Int _64;
int64_t _67;
int64_t _68;
bool _69;
frost$core$Bit _70;
bool _72;
frost$core$Int _74;
int64_t _77;
int64_t _78;
bool _79;
frost$core$Bit _80;
bool _82;
frost$core$Int _84;
int64_t _87;
int64_t _88;
bool _89;
frost$core$Bit _90;
bool _92;
frost$core$Int _94;
int64_t _97;
int64_t _98;
bool _99;
frost$core$Bit _100;
bool _102;
frost$core$Bit _105;
frost$core$Bit _108;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:356
_1 = &param0->typeKind;
_2 = *_1;
_3 = _2.$rawValue;
_4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:357:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_7 = _3.value;
_8 = _4.value;
_9 = _7 == _8;
_10 = (frost$core$Bit) {_9};
_12 = _10.value;
if (_12) goto block2; else goto block3;
block3:;
_14 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:357:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_17 = _3.value;
_18 = _14.value;
_19 = _17 == _18;
_20 = (frost$core$Bit) {_19};
_22 = _20.value;
if (_22) goto block2; else goto block5;
block5:;
_24 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:357:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_27 = _3.value;
_28 = _24.value;
_29 = _27 == _28;
_30 = (frost$core$Bit) {_29};
_32 = _30.value;
if (_32) goto block2; else goto block7;
block7:;
_34 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:357:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_37 = _3.value;
_38 = _34.value;
_39 = _37 == _38;
_40 = (frost$core$Bit) {_39};
_42 = _40.value;
if (_42) goto block2; else goto block9;
block9:;
_44 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:358:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_47 = _3.value;
_48 = _44.value;
_49 = _47 == _48;
_50 = (frost$core$Bit) {_49};
_52 = _50.value;
if (_52) goto block2; else goto block11;
block11:;
_54 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:358:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_57 = _3.value;
_58 = _54.value;
_59 = _57 == _58;
_60 = (frost$core$Bit) {_59};
_62 = _60.value;
if (_62) goto block2; else goto block13;
block13:;
_64 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:358:69
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_67 = _3.value;
_68 = _64.value;
_69 = _67 == _68;
_70 = (frost$core$Bit) {_69};
_72 = _70.value;
if (_72) goto block2; else goto block15;
block15:;
_74 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:359:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_77 = _3.value;
_78 = _74.value;
_79 = _77 == _78;
_80 = (frost$core$Bit) {_79};
_82 = _80.value;
if (_82) goto block2; else goto block17;
block17:;
_84 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:359:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_87 = _3.value;
_88 = _84.value;
_89 = _87 == _88;
_90 = (frost$core$Bit) {_89};
_92 = _90.value;
if (_92) goto block2; else goto block19;
block19:;
_94 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:359:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_97 = _3.value;
_98 = _94.value;
_99 = _97 == _98;
_100 = (frost$core$Bit) {_99};
_102 = _100.value;
if (_102) goto block2; else goto block21;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:360
_105 = (frost$core$Bit) {true};
return _105;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:363
_108 = (frost$core$Bit) {false};
return _108;
block1:;
goto block23;
block23:;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

frost$core$Bit local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind* _1;
org$frostlang$frostc$Type$Kind _2;
frost$core$Equatable* _3;
frost$core$Equatable* _4;
frost$core$Int _5;
frost$core$Int* _8;
org$frostlang$frostc$Type$Kind _10;
org$frostlang$frostc$Type$Kind _13;
frost$core$Equatable* _14;
$fn269 _15;
frost$core$Bit _16;
bool _17;
org$frostlang$frostc$FixedArray** _21;
org$frostlang$frostc$FixedArray* _22;
bool _23;
frost$core$Bit _24;
bool _25;
frost$core$Int _27;
org$frostlang$frostc$FixedArray* _30;
frost$core$Object* _31;
org$frostlang$frostc$FixedArray* _34;
frost$core$Int _35;
frost$core$Object* _36;
org$frostlang$frostc$Type* _37;
org$frostlang$frostc$Symbol* _38;
frost$core$String** _39;
frost$core$String* _40;
frost$core$Bit _41;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$Bit _50;
frost$core$Object* _51;
frost$core$Object* _53;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:369
_1 = &param0->typeKind;
_2 = *_1;
org$frostlang$frostc$Type$Kind$wrapper* $tmp270;
$tmp270 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp270->value = _2;
_3 = ((frost$core$Equatable*) $tmp270);
_4 = _3;
_5 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:369:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_8 = &(&local2)->$rawValue;
*_8 = _5;
_10 = *(&local2);
*(&local1) = _10;
_13 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp271;
$tmp271 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp271->value = _13;
_14 = ((frost$core$Equatable*) $tmp271);
ITable* $tmp272 = _4->$class->itable;
while ($tmp272->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp272 = $tmp272->next;
}
_15 = $tmp272->methods[0];
_16 = _15(_4, _14);
_17 = _16.value;
if (_17) goto block2; else goto block3;
block2:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:369:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_21 = &param0->_subtypes;
_22 = *_21;
_23 = _22 != NULL;
_24 = (frost$core$Bit) {_23};
_25 = _24.value;
if (_25) goto block6; else goto block7;
block7:;
_27 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s273, _27, &$s274);
abort(); // unreachable
block6:;
_30 = _22;
_31 = ((frost$core$Object*) _30);
frost$core$Frost$ref$frost$core$Object$Q(_31);
_34 = _30;
_35 = (frost$core$Int) {0u};
_36 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_34, _35);
_37 = ((org$frostlang$frostc$Type*) _36);
_38 = ((org$frostlang$frostc$Symbol*) _37);
_39 = &_38->name;
_40 = *_39;
_41 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_40, &$s275);
_42 = _36;
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_44);
*(&local0) = _41;
goto block4;
block3:;
*(&local0) = _16;
goto block4;
block4:;
_50 = *(&local0);
_51 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_51);
_53 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_53);
return _50;

}
frost$core$Bit org$frostlang$frostc$Type$get_isTuple$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind* _1;
org$frostlang$frostc$Type$Kind _2;
frost$core$Equatable* _3;
frost$core$Equatable* _4;
frost$core$Int _5;
frost$core$Int* _8;
org$frostlang$frostc$Type$Kind _10;
org$frostlang$frostc$Type$Kind _13;
frost$core$Equatable* _14;
$fn276 _15;
frost$core$Bit _16;
frost$core$Object* _17;
frost$core$Object* _19;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:373
_1 = &param0->typeKind;
_2 = *_1;
org$frostlang$frostc$Type$Kind$wrapper* $tmp277;
$tmp277 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp277->value = _2;
_3 = ((frost$core$Equatable*) $tmp277);
_4 = _3;
_5 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:373:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_8 = &(&local1)->$rawValue;
*_8 = _5;
_10 = *(&local1);
*(&local0) = _10;
_13 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp278;
$tmp278 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp278->value = _13;
_14 = ((frost$core$Equatable*) $tmp278);
ITable* $tmp279 = _4->$class->itable;
while ($tmp279->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp279 = $tmp279->next;
}
_15 = $tmp279->methods[0];
_16 = _15(_4, _14);
_17 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_19);
return _16;

}
frost$core$Bit org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind* _1;
org$frostlang$frostc$Type$Kind _2;
frost$core$Int _3;
frost$core$Int _4;
int64_t _7;
int64_t _8;
bool _9;
frost$core$Bit _10;
bool _12;
frost$core$Int _14;
int64_t _17;
int64_t _18;
bool _19;
frost$core$Bit _20;
bool _22;
frost$core$Int _24;
int64_t _27;
int64_t _28;
bool _29;
frost$core$Bit _30;
bool _32;
frost$core$Int _34;
int64_t _37;
int64_t _38;
bool _39;
frost$core$Bit _40;
bool _42;
frost$core$Bit _45;
frost$core$Bit _48;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:377
_1 = &param0->typeKind;
_2 = *_1;
_3 = _2.$rawValue;
_4 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_7 = _3.value;
_8 = _4.value;
_9 = _7 == _8;
_10 = (frost$core$Bit) {_9};
_12 = _10.value;
if (_12) goto block2; else goto block3;
block3:;
_14 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_17 = _3.value;
_18 = _14.value;
_19 = _17 == _18;
_20 = (frost$core$Bit) {_19};
_22 = _20.value;
if (_22) goto block2; else goto block5;
block5:;
_24 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_27 = _3.value;
_28 = _24.value;
_29 = _27 == _28;
_30 = (frost$core$Bit) {_29};
_32 = _30.value;
if (_32) goto block2; else goto block7;
block7:;
_34 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:378:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_37 = _3.value;
_38 = _34.value;
_39 = _37 == _38;
_40 = (frost$core$Bit) {_39};
_42 = _40.value;
if (_42) goto block2; else goto block9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:379
_45 = (frost$core$Bit) {true};
return _45;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:382
_48 = (frost$core$Bit) {false};
return _48;
block1:;
goto block11;
block11:;

}
frost$core$Bit org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Symbol* _1;
frost$core$String** _2;
frost$core$String* _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:388
_1 = ((org$frostlang$frostc$Symbol*) param0);
_2 = &_1->name;
_3 = *_2;
_4 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_3, &$s280);
return _4;

}
frost$core$Bit org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Symbol* _1;
frost$core$String** _2;
frost$core$String* _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:392
_1 = ((org$frostlang$frostc$Symbol*) param0);
_2 = &_1->name;
_3 = *_2;
_4 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_3, &$s281);
return _4;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Symbol* _1;
frost$core$String** _2;
frost$core$String* _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:396
_1 = ((org$frostlang$frostc$Symbol*) param0);
_2 = &_1->name;
_3 = *_2;
_4 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_3, &$s282);
return _4;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind* _1;
org$frostlang$frostc$Type$Kind _2;
frost$core$Equatable* _3;
frost$core$Equatable* _4;
frost$core$Int _5;
frost$core$Int* _8;
org$frostlang$frostc$Type$Kind _10;
org$frostlang$frostc$Type$Kind _13;
frost$core$Equatable* _14;
$fn283 _15;
frost$core$Bit _16;
frost$core$Object* _17;
frost$core$Object* _19;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:400
_1 = &param0->typeKind;
_2 = *_1;
org$frostlang$frostc$Type$Kind$wrapper* $tmp284;
$tmp284 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp284->value = _2;
_3 = ((frost$core$Equatable*) $tmp284);
_4 = _3;
_5 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:400:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_8 = &(&local1)->$rawValue;
*_8 = _5;
_10 = *(&local1);
*(&local0) = _10;
_13 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp285;
$tmp285 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp285->value = _13;
_14 = ((frost$core$Equatable*) $tmp285);
ITable* $tmp286 = _4->$class->itable;
while ($tmp286->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp286 = $tmp286->next;
}
_15 = $tmp286->methods[0];
_16 = _15(_4, _14);
_17 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_19);
return _16;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind* _1;
org$frostlang$frostc$Type$Kind _2;
frost$core$Equatable* _3;
frost$core$Equatable* _4;
frost$core$Int _5;
frost$core$Int* _8;
org$frostlang$frostc$Type$Kind _10;
org$frostlang$frostc$Type$Kind _13;
frost$core$Equatable* _14;
$fn287 _15;
frost$core$Bit _16;
bool _17;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$Object* _24;
frost$collections$Array* _28;
frost$collections$Array* _29;
frost$core$Object* _32;
frost$collections$Array* _34;
frost$core$Object* _35;
frost$core$Object* _38;
frost$collections$Array* _41;
frost$collections$Array* _42;
frost$core$Object* _43;
org$frostlang$frostc$Type* _46;
org$frostlang$frostc$Symbol* _47;
frost$core$String** _48;
frost$core$String* _49;
frost$core$Object* _52;
frost$core$String* _55;
frost$core$Int _56;
frost$core$Int* _59;
org$frostlang$frostc$Type$Kind _61;
org$frostlang$frostc$Type$Kind _64;
org$frostlang$frostc$Position _65;
frost$collections$Array* _66;
frost$collections$ListView* _67;
frost$core$Bit _68;
frost$core$Object* _70;
frost$core$Object* _72;
frost$core$Object* _74;
frost$core$Object* _76;
frost$collections$Array* _78;
frost$core$Object* _79;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:404
_1 = &param0->typeKind;
_2 = *_1;
org$frostlang$frostc$Type$Kind$wrapper* $tmp288;
$tmp288 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp288->value = _2;
_3 = ((frost$core$Equatable*) $tmp288);
_4 = _3;
_5 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:404:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_8 = &(&local1)->$rawValue;
*_8 = _5;
_10 = *(&local1);
*(&local0) = _10;
_13 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp289;
$tmp289 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp289->value = _13;
_14 = ((frost$core$Equatable*) $tmp289);
ITable* $tmp290 = _4->$class->itable;
while ($tmp290->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp290 = $tmp290->next;
}
_15 = $tmp290->methods[0];
_16 = _15(_4, _14);
_17 = _16.value;
_18 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_20 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_20);
if (_17) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:405
_24 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_24);
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:407
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_28 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_29 = _28;
frost$collections$Array$init(_29);
*(&local2) = ((frost$collections$Array*) NULL);
_32 = ((frost$core$Object*) _28);
frost$core$Frost$ref$frost$core$Object$Q(_32);
_34 = *(&local2);
_35 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_35);
*(&local2) = _28;
_38 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_38);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:408
_41 = *(&local2);
_42 = _41;
_43 = ((frost$core$Object*) param0);
frost$collections$Array$add$frost$collections$Array$T(_42, _43);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:409
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
_46 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
_47 = ((org$frostlang$frostc$Symbol*) param0);
_48 = &_47->name;
_49 = *_48;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Type.frost:409:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:112
_52 = ((frost$core$Object*) _49);
frost$core$Frost$ref$frost$core$Object$Q(_52);
_55 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_49, &$s291);
_56 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:409:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_59 = &(&local4)->$rawValue;
*_59 = _56;
_61 = *(&local4);
*(&local3) = _61;
_64 = *(&local3);
_65 = org$frostlang$frostc$Position$init();
_66 = *(&local2);
_67 = ((frost$collections$ListView*) _66);
_68 = (frost$core$Bit) {true};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit(_46, _55, _64, _65, _67, _68);
_70 = ((frost$core$Object*) _46);
frost$core$Frost$ref$frost$core$Object$Q(_70);
_72 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_72);
_74 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_74);
_76 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_76);
_78 = *(&local2);
_79 = ((frost$core$Object*) _78);
frost$core$Frost$unref$frost$core$Object$Q(_79);
*(&local2) = ((frost$collections$Array*) NULL);
return _46;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind* _1;
org$frostlang$frostc$Type$Kind _2;
frost$core$Equatable* _3;
frost$core$Equatable* _4;
frost$core$Int _5;
frost$core$Int* _8;
org$frostlang$frostc$Type$Kind _10;
org$frostlang$frostc$Type$Kind _13;
frost$core$Equatable* _14;
$fn292 _15;
frost$core$Bit _16;
bool _17;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$Object* _24;
org$frostlang$frostc$FixedArray** _30;
org$frostlang$frostc$FixedArray* _31;
bool _32;
frost$core$Bit _33;
bool _34;
frost$core$Int _36;
org$frostlang$frostc$FixedArray* _39;
frost$core$Object* _40;
org$frostlang$frostc$FixedArray* _43;
frost$core$Int _44;
frost$core$Object* _45;
org$frostlang$frostc$Type* _46;
frost$core$Object* _47;
frost$core$Object* _49;
frost$core$Object* _51;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:413
_1 = &param0->typeKind;
_2 = *_1;
org$frostlang$frostc$Type$Kind$wrapper* $tmp293;
$tmp293 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp293->value = _2;
_3 = ((frost$core$Equatable*) $tmp293);
_4 = _3;
_5 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:413:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_8 = &(&local1)->$rawValue;
*_8 = _5;
_10 = *(&local1);
*(&local0) = _10;
_13 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp294;
$tmp294 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp294->value = _13;
_14 = ((frost$core$Equatable*) $tmp294);
ITable* $tmp295 = _4->$class->itable;
while ($tmp295->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp295 = $tmp295->next;
}
_15 = $tmp295->methods[1];
_16 = _15(_4, _14);
_17 = _16.value;
_18 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_20 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_20);
if (_17) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:414
_24 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_24);
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:416:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_30 = &param0->_subtypes;
_31 = *_30;
_32 = _31 != NULL;
_33 = (frost$core$Bit) {_32};
_34 = _33.value;
if (_34) goto block5; else goto block6;
block6:;
_36 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s296, _36, &$s297);
abort(); // unreachable
block5:;
_39 = _31;
_40 = ((frost$core$Object*) _39);
frost$core$Frost$ref$frost$core$Object$Q(_40);
_43 = _39;
_44 = (frost$core$Int) {0u};
_45 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_43, _44);
_46 = ((org$frostlang$frostc$Type*) _45);
_47 = ((frost$core$Object*) _46);
frost$core$Frost$ref$frost$core$Object$Q(_47);
_49 = _45;
frost$core$Frost$unref$frost$core$Object$Q(_49);
_51 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_51);
return _46;

}
frost$core$Int org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind* _0;
org$frostlang$frostc$Type$Kind _1;
frost$core$Equatable* _2;
frost$core$Equatable* _3;
frost$core$Int _4;
frost$core$Int* _7;
org$frostlang$frostc$Type$Kind _9;
org$frostlang$frostc$Type$Kind _12;
frost$core$Equatable* _13;
$fn298 _14;
frost$core$Bit _15;
bool _16;
frost$core$Object* _17;
frost$core$Object* _19;
org$frostlang$frostc$Type$Kind* _22;
org$frostlang$frostc$Type$Kind _23;
frost$core$Equatable* _24;
frost$core$Equatable* _25;
frost$core$Int _26;
frost$core$Int* _29;
org$frostlang$frostc$Type$Kind _31;
org$frostlang$frostc$Type$Kind _34;
frost$core$Equatable* _35;
$fn299 _36;
frost$core$Bit _37;
bool _38;
frost$core$Object* _39;
frost$core$Object* _41;
org$frostlang$frostc$Type$Kind* _44;
org$frostlang$frostc$Type$Kind _45;
frost$core$Equatable* _46;
frost$core$Equatable* _47;
frost$core$Int _48;
frost$core$Int* _51;
org$frostlang$frostc$Type$Kind _53;
org$frostlang$frostc$Type$Kind _56;
frost$core$Equatable* _57;
$fn300 _58;
frost$core$Bit _59;
bool _60;
frost$core$Object* _61;
frost$core$Object* _63;
org$frostlang$frostc$Type$Kind* _66;
org$frostlang$frostc$Type$Kind _67;
frost$core$Equatable* _68;
frost$core$Equatable* _69;
frost$core$Int _70;
frost$core$Int* _73;
org$frostlang$frostc$Type$Kind _75;
org$frostlang$frostc$Type$Kind _78;
frost$core$Equatable* _79;
$fn301 _80;
frost$core$Bit _81;
bool _82;
frost$core$Object* _83;
frost$core$Object* _85;
frost$core$Int _88;
org$frostlang$frostc$FixedArray** _94;
org$frostlang$frostc$FixedArray* _95;
bool _96;
frost$core$Bit _97;
bool _98;
frost$core$Int _100;
org$frostlang$frostc$FixedArray* _103;
frost$core$Object* _104;
frost$collections$CollectionView* _107;
$fn302 _108;
frost$core$Int _109;
frost$core$Int _110;
int64_t _111;
int64_t _112;
int64_t _113;
frost$core$Int _114;
frost$core$Object* _115;
_0 = &param0->typeKind;
_1 = *_0;
org$frostlang$frostc$Type$Kind$wrapper* $tmp303;
$tmp303 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp303->value = _1;
_2 = ((frost$core$Equatable*) $tmp303);
_3 = _2;
_4 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_7 = &(&local1)->$rawValue;
*_7 = _4;
_9 = *(&local1);
*(&local0) = _9;
_12 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp304;
$tmp304 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp304->value = _12;
_13 = ((frost$core$Equatable*) $tmp304);
ITable* $tmp305 = _3->$class->itable;
while ($tmp305->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp305 = $tmp305->next;
}
_14 = $tmp305->methods[0];
_15 = _14(_3, _13);
_16 = _15.value;
_17 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_19);
if (_16) goto block1; else goto block5;
block5:;
_22 = &param0->typeKind;
_23 = *_22;
org$frostlang$frostc$Type$Kind$wrapper* $tmp306;
$tmp306 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp306->value = _23;
_24 = ((frost$core$Equatable*) $tmp306);
_25 = _24;
_26 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_29 = &(&local3)->$rawValue;
*_29 = _26;
_31 = *(&local3);
*(&local2) = _31;
_34 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp307;
$tmp307 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp307->value = _34;
_35 = ((frost$core$Equatable*) $tmp307);
ITable* $tmp308 = _25->$class->itable;
while ($tmp308->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp308 = $tmp308->next;
}
_36 = $tmp308->methods[0];
_37 = _36(_25, _35);
_38 = _37.value;
_39 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_39);
_41 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_41);
if (_38) goto block1; else goto block4;
block4:;
_44 = &param0->typeKind;
_45 = *_44;
org$frostlang$frostc$Type$Kind$wrapper* $tmp309;
$tmp309 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp309->value = _45;
_46 = ((frost$core$Equatable*) $tmp309);
_47 = _46;
_48 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:419:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_51 = &(&local5)->$rawValue;
*_51 = _48;
_53 = *(&local5);
*(&local4) = _53;
_56 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp310;
$tmp310 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp310->value = _56;
_57 = ((frost$core$Equatable*) $tmp310);
ITable* $tmp311 = _47->$class->itable;
while ($tmp311->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp311 = $tmp311->next;
}
_58 = $tmp311->methods[0];
_59 = _58(_47, _57);
_60 = _59.value;
_61 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_61);
_63 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_63);
if (_60) goto block1; else goto block3;
block3:;
_66 = &param0->typeKind;
_67 = *_66;
org$frostlang$frostc$Type$Kind$wrapper* $tmp312;
$tmp312 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp312->value = _67;
_68 = ((frost$core$Equatable*) $tmp312);
_69 = _68;
_70 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:420:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_73 = &(&local7)->$rawValue;
*_73 = _70;
_75 = *(&local7);
*(&local6) = _75;
_78 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp313;
$tmp313 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp313->value = _78;
_79 = ((frost$core$Equatable*) $tmp313);
ITable* $tmp314 = _69->$class->itable;
while ($tmp314->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp314 = $tmp314->next;
}
_80 = $tmp314->methods[0];
_81 = _80(_69, _79);
_82 = _81.value;
_83 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_83);
_85 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_85);
if (_82) goto block1; else goto block2;
block2:;
_88 = (frost$core$Int) {421u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s315, _88, &$s316);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:422
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:422:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_94 = &param0->_subtypes;
_95 = *_94;
_96 = _95 != NULL;
_97 = (frost$core$Bit) {_96};
_98 = _97.value;
if (_98) goto block11; else goto block12;
block12:;
_100 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s317, _100, &$s318);
abort(); // unreachable
block11:;
_103 = _95;
_104 = ((frost$core$Object*) _103);
frost$core$Frost$ref$frost$core$Object$Q(_104);
_107 = ((frost$collections$CollectionView*) _103);
ITable* $tmp319 = _107->$class->itable;
while ($tmp319->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp319 = $tmp319->next;
}
_108 = $tmp319->methods[0];
_109 = _108(_107);
_110 = (frost$core$Int) {1u};
_111 = _109.value;
_112 = _110.value;
_113 = _111 - _112;
_114 = (frost$core$Int) {_113};
_115 = ((frost$core$Object*) _103);
frost$core$Frost$unref$frost$core$Object$Q(_115);
return _114;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$parameterType$frost$core$Int$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$core$Int param1) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind* _0;
org$frostlang$frostc$Type$Kind _1;
frost$core$Equatable* _2;
frost$core$Equatable* _3;
frost$core$Int _4;
frost$core$Int* _7;
org$frostlang$frostc$Type$Kind _9;
org$frostlang$frostc$Type$Kind _12;
frost$core$Equatable* _13;
$fn320 _14;
frost$core$Bit _15;
bool _16;
frost$core$Object* _17;
frost$core$Object* _19;
org$frostlang$frostc$Type$Kind* _22;
org$frostlang$frostc$Type$Kind _23;
frost$core$Equatable* _24;
frost$core$Equatable* _25;
frost$core$Int _26;
frost$core$Int* _29;
org$frostlang$frostc$Type$Kind _31;
org$frostlang$frostc$Type$Kind _34;
frost$core$Equatable* _35;
$fn321 _36;
frost$core$Bit _37;
bool _38;
frost$core$Object* _39;
frost$core$Object* _41;
org$frostlang$frostc$Type$Kind* _44;
org$frostlang$frostc$Type$Kind _45;
frost$core$Equatable* _46;
frost$core$Equatable* _47;
frost$core$Int _48;
frost$core$Int* _51;
org$frostlang$frostc$Type$Kind _53;
org$frostlang$frostc$Type$Kind _56;
frost$core$Equatable* _57;
$fn322 _58;
frost$core$Bit _59;
bool _60;
frost$core$Object* _61;
frost$core$Object* _63;
org$frostlang$frostc$Type$Kind* _66;
org$frostlang$frostc$Type$Kind _67;
frost$core$Equatable* _68;
frost$core$Equatable* _69;
frost$core$Int _70;
frost$core$Int* _73;
org$frostlang$frostc$Type$Kind _75;
org$frostlang$frostc$Type$Kind _78;
frost$core$Equatable* _79;
$fn323 _80;
frost$core$Bit _81;
bool _82;
frost$core$Object* _83;
frost$core$Object* _85;
frost$core$Int _88;
int64_t _89;
int64_t _90;
bool _91;
frost$core$Bit _92;
bool _93;
org$frostlang$frostc$FixedArray** _97;
org$frostlang$frostc$FixedArray* _98;
bool _99;
frost$core$Bit _100;
bool _101;
frost$core$Int _103;
org$frostlang$frostc$FixedArray* _106;
frost$core$Object* _107;
frost$collections$CollectionView* _110;
$fn324 _111;
frost$core$Int _112;
frost$core$Int _113;
int64_t _114;
int64_t _115;
int64_t _116;
frost$core$Int _117;
int64_t _118;
int64_t _119;
bool _120;
frost$core$Bit _121;
bool _122;
frost$core$Object* _123;
frost$core$Int _126;
org$frostlang$frostc$FixedArray** _132;
org$frostlang$frostc$FixedArray* _133;
bool _134;
frost$core$Bit _135;
bool _136;
frost$core$Int _138;
org$frostlang$frostc$FixedArray* _141;
frost$core$Object* _142;
org$frostlang$frostc$FixedArray* _145;
frost$core$Object* _146;
org$frostlang$frostc$Type* _147;
frost$core$Object* _148;
frost$core$Object* _150;
frost$core$Object* _152;
_0 = &param0->typeKind;
_1 = *_0;
org$frostlang$frostc$Type$Kind$wrapper* $tmp325;
$tmp325 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp325->value = _1;
_2 = ((frost$core$Equatable*) $tmp325);
_3 = _2;
_4 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_7 = &(&local1)->$rawValue;
*_7 = _4;
_9 = *(&local1);
*(&local0) = _9;
_12 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp326;
$tmp326 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp326->value = _12;
_13 = ((frost$core$Equatable*) $tmp326);
ITable* $tmp327 = _3->$class->itable;
while ($tmp327->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp327 = $tmp327->next;
}
_14 = $tmp327->methods[0];
_15 = _14(_3, _13);
_16 = _15.value;
_17 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_19);
if (_16) goto block4; else goto block7;
block7:;
_22 = &param0->typeKind;
_23 = *_22;
org$frostlang$frostc$Type$Kind$wrapper* $tmp328;
$tmp328 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp328->value = _23;
_24 = ((frost$core$Equatable*) $tmp328);
_25 = _24;
_26 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_29 = &(&local3)->$rawValue;
*_29 = _26;
_31 = *(&local3);
*(&local2) = _31;
_34 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp329;
$tmp329 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp329->value = _34;
_35 = ((frost$core$Equatable*) $tmp329);
ITable* $tmp330 = _25->$class->itable;
while ($tmp330->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp330 = $tmp330->next;
}
_36 = $tmp330->methods[0];
_37 = _36(_25, _35);
_38 = _37.value;
_39 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_39);
_41 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_41);
if (_38) goto block4; else goto block6;
block6:;
_44 = &param0->typeKind;
_45 = *_44;
org$frostlang$frostc$Type$Kind$wrapper* $tmp331;
$tmp331 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp331->value = _45;
_46 = ((frost$core$Equatable*) $tmp331);
_47 = _46;
_48 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_51 = &(&local5)->$rawValue;
*_51 = _48;
_53 = *(&local5);
*(&local4) = _53;
_56 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp332;
$tmp332 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp332->value = _56;
_57 = ((frost$core$Equatable*) $tmp332);
ITable* $tmp333 = _47->$class->itable;
while ($tmp333->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp333 = $tmp333->next;
}
_58 = $tmp333->methods[0];
_59 = _58(_47, _57);
_60 = _59.value;
_61 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_61);
_63 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_63);
if (_60) goto block4; else goto block5;
block5:;
_66 = &param0->typeKind;
_67 = *_66;
org$frostlang$frostc$Type$Kind$wrapper* $tmp334;
$tmp334 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp334->value = _67;
_68 = ((frost$core$Equatable*) $tmp334);
_69 = _68;
_70 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:426:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_73 = &(&local7)->$rawValue;
*_73 = _70;
_75 = *(&local7);
*(&local6) = _75;
_78 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp335;
$tmp335 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp335->value = _78;
_79 = ((frost$core$Equatable*) $tmp335);
ITable* $tmp336 = _69->$class->itable;
while ($tmp336->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp336 = $tmp336->next;
}
_80 = $tmp336->methods[0];
_81 = _80(_69, _79);
_82 = _81.value;
_83 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_83);
_85 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_85);
if (_82) goto block4; else goto block2;
block4:;
_88 = (frost$core$Int) {0u};
_89 = param1.value;
_90 = _88.value;
_91 = _89 >= _90;
_92 = (frost$core$Bit) {_91};
_93 = _92.value;
if (_93) goto block3; else goto block2;
block3:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:426:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_97 = &param0->_subtypes;
_98 = *_97;
_99 = _98 != NULL;
_100 = (frost$core$Bit) {_99};
_101 = _100.value;
if (_101) goto block13; else goto block14;
block14:;
_103 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s337, _103, &$s338);
abort(); // unreachable
block13:;
_106 = _98;
_107 = ((frost$core$Object*) _106);
frost$core$Frost$ref$frost$core$Object$Q(_107);
_110 = ((frost$collections$CollectionView*) _106);
ITable* $tmp339 = _110->$class->itable;
while ($tmp339->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp339 = $tmp339->next;
}
_111 = $tmp339->methods[0];
_112 = _111(_110);
_113 = (frost$core$Int) {1u};
_114 = _112.value;
_115 = _113.value;
_116 = _114 - _115;
_117 = (frost$core$Int) {_116};
_118 = param1.value;
_119 = _117.value;
_120 = _118 < _119;
_121 = (frost$core$Bit) {_120};
_122 = _121.value;
_123 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_123);
if (_122) goto block1; else goto block2;
block2:;
_126 = (frost$core$Int) {427u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s340, _126, &$s341);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:428
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:428:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_132 = &param0->_subtypes;
_133 = *_132;
_134 = _133 != NULL;
_135 = (frost$core$Bit) {_134};
_136 = _135.value;
if (_136) goto block16; else goto block17;
block17:;
_138 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s342, _138, &$s343);
abort(); // unreachable
block16:;
_141 = _133;
_142 = ((frost$core$Object*) _141);
frost$core$Frost$ref$frost$core$Object$Q(_142);
_145 = _141;
_146 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_145, param1);
_147 = ((org$frostlang$frostc$Type*) _146);
_148 = ((frost$core$Object*) _147);
frost$core$Frost$ref$frost$core$Object$Q(_148);
_150 = _146;
frost$core$Frost$unref$frost$core$Object$Q(_150);
_152 = ((frost$core$Object*) _141);
frost$core$Frost$unref$frost$core$Object$Q(_152);
return _147;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind* _0;
org$frostlang$frostc$Type$Kind _1;
frost$core$Equatable* _2;
frost$core$Equatable* _3;
frost$core$Int _4;
frost$core$Int* _7;
org$frostlang$frostc$Type$Kind _9;
org$frostlang$frostc$Type$Kind _12;
frost$core$Equatable* _13;
$fn344 _14;
frost$core$Bit _15;
bool _16;
frost$core$Object* _17;
frost$core$Object* _19;
org$frostlang$frostc$Type$Kind* _22;
org$frostlang$frostc$Type$Kind _23;
frost$core$Equatable* _24;
frost$core$Equatable* _25;
frost$core$Int _26;
frost$core$Int* _29;
org$frostlang$frostc$Type$Kind _31;
org$frostlang$frostc$Type$Kind _34;
frost$core$Equatable* _35;
$fn345 _36;
frost$core$Bit _37;
bool _38;
frost$core$Object* _39;
frost$core$Object* _41;
org$frostlang$frostc$Type$Kind* _44;
org$frostlang$frostc$Type$Kind _45;
frost$core$Equatable* _46;
frost$core$Equatable* _47;
frost$core$Int _48;
frost$core$Int* _51;
org$frostlang$frostc$Type$Kind _53;
org$frostlang$frostc$Type$Kind _56;
frost$core$Equatable* _57;
$fn346 _58;
frost$core$Bit _59;
bool _60;
frost$core$Object* _61;
frost$core$Object* _63;
org$frostlang$frostc$Type$Kind* _66;
org$frostlang$frostc$Type$Kind _67;
frost$core$Equatable* _68;
frost$core$Equatable* _69;
frost$core$Int _70;
frost$core$Int* _73;
org$frostlang$frostc$Type$Kind _75;
org$frostlang$frostc$Type$Kind _78;
frost$core$Equatable* _79;
$fn347 _80;
frost$core$Bit _81;
bool _82;
frost$core$Object* _83;
frost$core$Object* _85;
frost$core$Int _88;
org$frostlang$frostc$FixedArray** _94;
org$frostlang$frostc$FixedArray* _95;
bool _96;
frost$core$Bit _97;
bool _98;
frost$core$Int _100;
org$frostlang$frostc$FixedArray* _103;
frost$core$Object* _104;
frost$collections$ListView* _107;
$fn348 _108;
frost$core$Object* _109;
org$frostlang$frostc$Type* _110;
frost$core$Object* _111;
frost$core$Object* _113;
frost$core$Object* _115;
_0 = &param0->typeKind;
_1 = *_0;
org$frostlang$frostc$Type$Kind$wrapper* $tmp349;
$tmp349 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp349->value = _1;
_2 = ((frost$core$Equatable*) $tmp349);
_3 = _2;
_4 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_7 = &(&local1)->$rawValue;
*_7 = _4;
_9 = *(&local1);
*(&local0) = _9;
_12 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp350;
$tmp350 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp350->value = _12;
_13 = ((frost$core$Equatable*) $tmp350);
ITable* $tmp351 = _3->$class->itable;
while ($tmp351->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp351 = $tmp351->next;
}
_14 = $tmp351->methods[0];
_15 = _14(_3, _13);
_16 = _15.value;
_17 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_19);
if (_16) goto block1; else goto block5;
block5:;
_22 = &param0->typeKind;
_23 = *_22;
org$frostlang$frostc$Type$Kind$wrapper* $tmp352;
$tmp352 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp352->value = _23;
_24 = ((frost$core$Equatable*) $tmp352);
_25 = _24;
_26 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_29 = &(&local3)->$rawValue;
*_29 = _26;
_31 = *(&local3);
*(&local2) = _31;
_34 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp353;
$tmp353 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp353->value = _34;
_35 = ((frost$core$Equatable*) $tmp353);
ITable* $tmp354 = _25->$class->itable;
while ($tmp354->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp354 = $tmp354->next;
}
_36 = $tmp354->methods[0];
_37 = _36(_25, _35);
_38 = _37.value;
_39 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_39);
_41 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_41);
if (_38) goto block1; else goto block4;
block4:;
_44 = &param0->typeKind;
_45 = *_44;
org$frostlang$frostc$Type$Kind$wrapper* $tmp355;
$tmp355 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp355->value = _45;
_46 = ((frost$core$Equatable*) $tmp355);
_47 = _46;
_48 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:431:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_51 = &(&local5)->$rawValue;
*_51 = _48;
_53 = *(&local5);
*(&local4) = _53;
_56 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp356;
$tmp356 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp356->value = _56;
_57 = ((frost$core$Equatable*) $tmp356);
ITable* $tmp357 = _47->$class->itable;
while ($tmp357->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp357 = $tmp357->next;
}
_58 = $tmp357->methods[0];
_59 = _58(_47, _57);
_60 = _59.value;
_61 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_61);
_63 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_63);
if (_60) goto block1; else goto block3;
block3:;
_66 = &param0->typeKind;
_67 = *_66;
org$frostlang$frostc$Type$Kind$wrapper* $tmp358;
$tmp358 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp358->value = _67;
_68 = ((frost$core$Equatable*) $tmp358);
_69 = _68;
_70 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:432:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_73 = &(&local7)->$rawValue;
*_73 = _70;
_75 = *(&local7);
*(&local6) = _75;
_78 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp359;
$tmp359 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp359->value = _78;
_79 = ((frost$core$Equatable*) $tmp359);
ITable* $tmp360 = _69->$class->itable;
while ($tmp360->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp360 = $tmp360->next;
}
_80 = $tmp360->methods[0];
_81 = _80(_69, _79);
_82 = _81.value;
_83 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_83);
_85 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_85);
if (_82) goto block1; else goto block2;
block2:;
_88 = (frost$core$Int) {433u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s361, _88, &$s362);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:434
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:434:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_94 = &param0->_subtypes;
_95 = *_94;
_96 = _95 != NULL;
_97 = (frost$core$Bit) {_96};
_98 = _97.value;
if (_98) goto block11; else goto block12;
block12:;
_100 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s363, _100, &$s364);
abort(); // unreachable
block11:;
_103 = _95;
_104 = ((frost$core$Object*) _103);
frost$core$Frost$ref$frost$core$Object$Q(_104);
_107 = ((frost$collections$ListView*) _103);
ITable* $tmp365 = _107->$class->itable;
while ($tmp365->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp365 = $tmp365->next;
}
_108 = $tmp365->methods[5];
_109 = _108(_107);
_110 = ((org$frostlang$frostc$Type*) _109);
_111 = ((frost$core$Object*) _110);
frost$core$Frost$ref$frost$core$Object$Q(_111);
_113 = _109;
frost$core$Frost$unref$frost$core$Object$Q(_113);
_115 = ((frost$core$Object*) _103);
frost$core$Frost$unref$frost$core$Object$Q(_115);
return _110;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2) {

frost$core$Bit local0;
frost$core$Bit local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
frost$core$Bit local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
frost$core$Bit local7;
frost$core$Bit local8;
org$frostlang$frostc$Type$Kind local9;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Type$Kind local12;
frost$core$Bit local13;
org$frostlang$frostc$Type$Kind local14;
org$frostlang$frostc$Type$Kind local15;
org$frostlang$frostc$Type$Kind local16;
org$frostlang$frostc$Type$Kind local17;
org$frostlang$frostc$Type$Kind local18;
org$frostlang$frostc$Type$Kind local19;
frost$core$Bit local20;
org$frostlang$frostc$Type$Kind local21;
org$frostlang$frostc$Type$Kind local22;
org$frostlang$frostc$Type$Kind local23;
org$frostlang$frostc$Type$Kind local24;
org$frostlang$frostc$Type$Kind local25;
org$frostlang$frostc$Type$Kind local26;
org$frostlang$frostc$Type$Kind local27;
org$frostlang$frostc$Type$Kind local28;
org$frostlang$frostc$Type$Kind local29;
org$frostlang$frostc$Type$Kind local30;
org$frostlang$frostc$Type* local31 = NULL;
org$frostlang$frostc$Type* local32 = NULL;
frost$collections$HashSet* local33 = NULL;
org$frostlang$frostc$Type* local34 = NULL;
org$frostlang$frostc$ClassDecl* local35 = NULL;
org$frostlang$frostc$Symbol* _3;
frost$core$String** _4;
frost$core$String* _5;
org$frostlang$frostc$Symbol* _6;
frost$core$String** _7;
frost$core$String* _8;
frost$core$Bit _9;
bool _10;
org$frostlang$frostc$Type$Kind* _12;
org$frostlang$frostc$Type$Kind _13;
frost$core$Equatable* _14;
frost$core$Equatable* _15;
org$frostlang$frostc$Type$Kind* _16;
org$frostlang$frostc$Type$Kind _17;
frost$core$Equatable* _18;
$fn366 _19;
frost$core$Bit _20;
frost$core$Object* _21;
frost$core$Object* _23;
frost$core$Bit _29;
bool _31;
frost$core$Object* _34;
org$frostlang$frostc$Type** _38;
org$frostlang$frostc$Type* _39;
org$frostlang$frostc$Symbol* _42;
frost$core$String** _43;
frost$core$String* _44;
org$frostlang$frostc$Symbol* _45;
frost$core$String** _46;
frost$core$String* _47;
frost$core$Bit _48;
bool _49;
org$frostlang$frostc$Type$Kind* _51;
org$frostlang$frostc$Type$Kind _52;
frost$core$Equatable* _53;
frost$core$Equatable* _54;
org$frostlang$frostc$Type$Kind* _55;
org$frostlang$frostc$Type$Kind _56;
frost$core$Equatable* _57;
$fn367 _58;
frost$core$Bit _59;
frost$core$Object* _60;
frost$core$Object* _62;
frost$core$Bit _68;
bool _70;
org$frostlang$frostc$Type$Kind* _73;
org$frostlang$frostc$Type$Kind _74;
frost$core$Equatable* _75;
frost$core$Equatable* _76;
frost$core$Int _77;
frost$core$Int* _80;
org$frostlang$frostc$Type$Kind _82;
org$frostlang$frostc$Type$Kind _85;
frost$core$Equatable* _86;
$fn368 _87;
frost$core$Bit _88;
bool _89;
frost$core$Object* _90;
frost$core$Object* _92;
frost$core$Object* _96;
org$frostlang$frostc$Type* _100;
frost$core$Object* _101;
frost$core$Object* _103;
org$frostlang$frostc$Type** _107;
org$frostlang$frostc$Type* _108;
org$frostlang$frostc$Symbol* _111;
frost$core$String** _112;
frost$core$String* _113;
org$frostlang$frostc$Symbol* _114;
frost$core$String** _115;
frost$core$String* _116;
frost$core$Bit _117;
bool _118;
org$frostlang$frostc$Type$Kind* _120;
org$frostlang$frostc$Type$Kind _121;
frost$core$Equatable* _122;
frost$core$Equatable* _123;
org$frostlang$frostc$Type$Kind* _124;
org$frostlang$frostc$Type$Kind _125;
frost$core$Equatable* _126;
$fn369 _127;
frost$core$Bit _128;
frost$core$Object* _129;
frost$core$Object* _131;
frost$core$Bit _137;
bool _139;
org$frostlang$frostc$Type$Kind* _142;
org$frostlang$frostc$Type$Kind _143;
frost$core$Equatable* _144;
frost$core$Equatable* _145;
frost$core$Int _146;
frost$core$Int* _149;
org$frostlang$frostc$Type$Kind _151;
org$frostlang$frostc$Type$Kind _154;
frost$core$Equatable* _155;
$fn370 _156;
frost$core$Bit _157;
bool _158;
frost$core$Object* _159;
frost$core$Object* _161;
frost$core$Object* _165;
org$frostlang$frostc$Type* _169;
frost$core$Object* _170;
frost$core$Object* _172;
org$frostlang$frostc$Type** _176;
org$frostlang$frostc$Type* _177;
org$frostlang$frostc$Symbol* _180;
frost$core$String** _181;
frost$core$String* _182;
org$frostlang$frostc$Symbol* _183;
frost$core$String** _184;
frost$core$String* _185;
frost$core$Bit _186;
bool _187;
org$frostlang$frostc$Type$Kind* _189;
org$frostlang$frostc$Type$Kind _190;
frost$core$Equatable* _191;
frost$core$Equatable* _192;
org$frostlang$frostc$Type$Kind* _193;
org$frostlang$frostc$Type$Kind _194;
frost$core$Equatable* _195;
$fn371 _196;
frost$core$Bit _197;
frost$core$Object* _198;
frost$core$Object* _200;
frost$core$Bit _206;
bool _208;
frost$core$Object* _211;
org$frostlang$frostc$Type** _215;
org$frostlang$frostc$Type* _216;
org$frostlang$frostc$Symbol* _219;
frost$core$String** _220;
frost$core$String* _221;
org$frostlang$frostc$Symbol* _222;
frost$core$String** _223;
frost$core$String* _224;
frost$core$Bit _225;
bool _226;
org$frostlang$frostc$Type$Kind* _228;
org$frostlang$frostc$Type$Kind _229;
frost$core$Equatable* _230;
frost$core$Equatable* _231;
org$frostlang$frostc$Type$Kind* _232;
org$frostlang$frostc$Type$Kind _233;
frost$core$Equatable* _234;
$fn372 _235;
frost$core$Bit _236;
frost$core$Object* _237;
frost$core$Object* _239;
frost$core$Bit _245;
bool _247;
frost$core$Object* _250;
org$frostlang$frostc$Type$Kind* _254;
org$frostlang$frostc$Type$Kind _255;
frost$core$Equatable* _256;
frost$core$Equatable* _257;
frost$core$Int _258;
frost$core$Int* _261;
org$frostlang$frostc$Type$Kind _263;
org$frostlang$frostc$Type$Kind _266;
frost$core$Equatable* _267;
$fn373 _268;
frost$core$Bit _269;
bool _270;
frost$core$Object* _271;
frost$core$Object* _273;
frost$core$Bit _276;
bool _277;
frost$core$Object* _280;
frost$core$Bit _284;
bool _285;
org$frostlang$frostc$Type$Kind* _287;
org$frostlang$frostc$Type$Kind _288;
frost$core$Equatable* _289;
frost$core$Equatable* _290;
frost$core$Int _291;
frost$core$Int* _294;
org$frostlang$frostc$Type$Kind _296;
org$frostlang$frostc$Type$Kind _299;
frost$core$Equatable* _300;
$fn374 _301;
frost$core$Bit _302;
bool _303;
frost$core$Object* _304;
frost$core$Object* _306;
frost$core$Object* _310;
org$frostlang$frostc$Type$Kind* _316;
org$frostlang$frostc$Type$Kind _317;
frost$core$Equatable* _318;
frost$core$Equatable* _319;
frost$core$Int _320;
frost$core$Int* _323;
org$frostlang$frostc$Type$Kind _325;
org$frostlang$frostc$Type$Kind _328;
frost$core$Equatable* _329;
$fn375 _330;
frost$core$Bit _331;
bool _332;
org$frostlang$frostc$Symbol* _336;
frost$core$String** _337;
frost$core$String* _338;
frost$core$Bit _339;
frost$core$Bit _342;
frost$core$Object* _343;
frost$core$Object* _345;
bool _348;
org$frostlang$frostc$Type$Kind* _351;
org$frostlang$frostc$Type$Kind _352;
frost$core$Equatable* _353;
frost$core$Equatable* _354;
frost$core$Int _355;
frost$core$Int* _358;
org$frostlang$frostc$Type$Kind _360;
org$frostlang$frostc$Type$Kind _363;
frost$core$Equatable* _364;
$fn376 _365;
frost$core$Bit _366;
bool _367;
frost$core$Object* _368;
frost$core$Object* _370;
org$frostlang$frostc$Type$Kind* _373;
org$frostlang$frostc$Type$Kind _374;
frost$core$Equatable* _375;
frost$core$Equatable* _376;
frost$core$Int _377;
frost$core$Int* _380;
org$frostlang$frostc$Type$Kind _382;
org$frostlang$frostc$Type$Kind _385;
frost$core$Equatable* _386;
$fn377 _387;
frost$core$Bit _388;
bool _389;
frost$core$Object* _390;
frost$core$Object* _392;
frost$core$Object* _396;
frost$core$Bit _400;
bool _401;
org$frostlang$frostc$Symbol* _404;
frost$core$String** _405;
frost$core$String* _406;
frost$core$Bit _407;
bool _408;
org$frostlang$frostc$Type** _411;
org$frostlang$frostc$Type* _412;
frost$core$Object* _413;
org$frostlang$frostc$Type** _417;
org$frostlang$frostc$Type* _418;
frost$core$Object* _419;
org$frostlang$frostc$Type$Kind* _426;
org$frostlang$frostc$Type$Kind _427;
frost$core$Equatable* _428;
frost$core$Equatable* _429;
frost$core$Int _430;
frost$core$Int* _433;
org$frostlang$frostc$Type$Kind _435;
org$frostlang$frostc$Type$Kind _438;
frost$core$Equatable* _439;
$fn378 _440;
frost$core$Bit _441;
bool _442;
org$frostlang$frostc$Symbol* _446;
frost$core$String** _447;
frost$core$String* _448;
frost$core$Bit _449;
frost$core$Bit _452;
frost$core$Object* _453;
frost$core$Object* _455;
bool _458;
org$frostlang$frostc$Type$Kind* _461;
org$frostlang$frostc$Type$Kind _462;
frost$core$Equatable* _463;
frost$core$Equatable* _464;
frost$core$Int _465;
frost$core$Int* _468;
org$frostlang$frostc$Type$Kind _470;
org$frostlang$frostc$Type$Kind _473;
frost$core$Equatable* _474;
$fn379 _475;
frost$core$Bit _476;
bool _477;
frost$core$Object* _478;
frost$core$Object* _480;
org$frostlang$frostc$Type$Kind* _483;
org$frostlang$frostc$Type$Kind _484;
frost$core$Equatable* _485;
frost$core$Equatable* _486;
frost$core$Int _487;
frost$core$Int* _490;
org$frostlang$frostc$Type$Kind _492;
org$frostlang$frostc$Type$Kind _495;
frost$core$Equatable* _496;
$fn380 _497;
frost$core$Bit _498;
bool _499;
frost$core$Object* _500;
frost$core$Object* _502;
frost$core$Object* _506;
frost$core$Bit _510;
bool _511;
org$frostlang$frostc$Symbol* _514;
frost$core$String** _515;
frost$core$String* _516;
frost$core$Bit _517;
bool _518;
org$frostlang$frostc$Type** _521;
org$frostlang$frostc$Type* _522;
frost$core$Object* _523;
org$frostlang$frostc$Type** _527;
org$frostlang$frostc$Type* _528;
frost$core$Object* _529;
org$frostlang$frostc$Type$Kind* _534;
org$frostlang$frostc$Type$Kind _535;
frost$core$Equatable* _536;
frost$core$Equatable* _537;
frost$core$Int _538;
frost$core$Int* _541;
org$frostlang$frostc$Type$Kind _543;
org$frostlang$frostc$Type$Kind _546;
frost$core$Equatable* _547;
$fn381 _548;
frost$core$Bit _549;
bool _550;
frost$core$Object* _551;
frost$core$Object* _553;
org$frostlang$frostc$FixedArray** _559;
org$frostlang$frostc$FixedArray* _560;
bool _561;
frost$core$Bit _562;
bool _563;
frost$core$Int _565;
org$frostlang$frostc$FixedArray* _568;
frost$core$Object* _569;
org$frostlang$frostc$FixedArray* _572;
frost$core$Int _573;
frost$core$Object* _574;
org$frostlang$frostc$Type* _575;
org$frostlang$frostc$Type* _576;
org$frostlang$frostc$Type* _577;
frost$core$Object* _578;
frost$core$Object* _580;
frost$core$Object* _582;
frost$core$Object* _584;
frost$core$Object* _586;
org$frostlang$frostc$Type$Kind* _590;
org$frostlang$frostc$Type$Kind _591;
frost$core$Equatable* _592;
frost$core$Equatable* _593;
frost$core$Int _594;
frost$core$Int* _597;
org$frostlang$frostc$Type$Kind _599;
org$frostlang$frostc$Type$Kind _602;
frost$core$Equatable* _603;
$fn382 _604;
frost$core$Bit _605;
bool _606;
frost$core$Object* _607;
frost$core$Object* _609;
org$frostlang$frostc$FixedArray** _615;
org$frostlang$frostc$FixedArray* _616;
bool _617;
frost$core$Bit _618;
bool _619;
frost$core$Int _621;
org$frostlang$frostc$FixedArray* _624;
frost$core$Object* _625;
org$frostlang$frostc$FixedArray* _628;
frost$core$Int _629;
frost$core$Object* _630;
org$frostlang$frostc$Type* _631;
org$frostlang$frostc$Type* _632;
org$frostlang$frostc$Type* _633;
frost$core$Object* _634;
frost$core$Object* _636;
frost$core$Object* _638;
frost$core$Object* _640;
frost$core$Object* _642;
org$frostlang$frostc$Type* _646;
frost$core$Object* _648;
org$frostlang$frostc$Type* _650;
frost$core$Object* _651;
frost$core$Object* _654;
org$frostlang$frostc$Type* _657;
frost$core$Object* _659;
org$frostlang$frostc$Type* _661;
frost$core$Object* _662;
frost$core$Object* _665;
org$frostlang$frostc$Type* _668;
frost$core$Bit _669;
bool _670;
org$frostlang$frostc$Type* _672;
frost$core$Bit _673;
bool _674;
frost$collections$HashSet* _677;
frost$collections$HashSet* _678;
frost$core$Object* _681;
frost$collections$HashSet* _683;
frost$core$Object* _684;
frost$core$Object* _687;
frost$core$Object* _691;
org$frostlang$frostc$Type* _693;
frost$core$Object* _694;
org$frostlang$frostc$Type* _698;
org$frostlang$frostc$ClassDecl* _699;
frost$core$Object* _701;
org$frostlang$frostc$ClassDecl* _703;
frost$core$Object* _704;
frost$core$Object* _707;
org$frostlang$frostc$ClassDecl* _711;
bool _712;
frost$core$Bit _713;
bool _714;
frost$collections$HashSet* _717;
frost$collections$HashSet* _718;
org$frostlang$frostc$Type* _719;
frost$collections$HashKey* _720;
frost$collections$HashMap** _723;
frost$collections$HashMap* _724;
frost$collections$HashMap* _725;
frost$collections$HashKey* _726;
frost$core$Object* _727;
org$frostlang$frostc$ClassDecl* _731;
bool _732;
frost$core$Bit _733;
bool _734;
frost$core$Int _736;
org$frostlang$frostc$ClassDecl* _739;
org$frostlang$frostc$Type** _740;
org$frostlang$frostc$Type* _741;
bool _742;
frost$core$Bit _743;
bool _744;
org$frostlang$frostc$Type* _747;
org$frostlang$frostc$ClassDecl* _748;
bool _749;
frost$core$Bit _750;
bool _751;
frost$core$Int _753;
org$frostlang$frostc$ClassDecl* _756;
org$frostlang$frostc$Type** _757;
org$frostlang$frostc$Type* _758;
bool _759;
frost$core$Bit _760;
bool _761;
frost$core$Int _763;
org$frostlang$frostc$Type* _766;
org$frostlang$frostc$Type* _767;
frost$core$Object* _768;
org$frostlang$frostc$Type* _770;
frost$core$Object* _771;
frost$core$Object* _774;
org$frostlang$frostc$Type* _777;
org$frostlang$frostc$ClassDecl* _778;
frost$core$Object* _779;
org$frostlang$frostc$ClassDecl* _781;
frost$core$Object* _782;
frost$core$Object* _785;
frost$core$Object* _790;
org$frostlang$frostc$ClassDecl* _792;
frost$core$Object* _793;
frost$core$Object* _799;
org$frostlang$frostc$Type* _801;
frost$core$Object* _802;
org$frostlang$frostc$Type* _806;
org$frostlang$frostc$ClassDecl* _807;
frost$core$Object* _808;
org$frostlang$frostc$ClassDecl* _810;
frost$core$Object* _811;
frost$core$Object* _814;
org$frostlang$frostc$ClassDecl* _818;
bool _819;
frost$core$Bit _820;
bool _821;
frost$collections$HashSet* _824;
frost$collections$HashSet* _825;
org$frostlang$frostc$Type* _826;
frost$collections$HashKey* _827;
frost$collections$HashMap** _830;
frost$collections$HashMap* _831;
frost$collections$HashMap* _832;
frost$collections$HashKey* _833;
frost$core$Bit _834;
bool _836;
org$frostlang$frostc$Type* _839;
frost$core$Object* _840;
org$frostlang$frostc$ClassDecl* _842;
frost$core$Object* _843;
org$frostlang$frostc$Type* _846;
frost$core$Object* _847;
frost$collections$HashSet* _850;
frost$core$Object* _851;
org$frostlang$frostc$Type* _854;
frost$core$Object* _855;
org$frostlang$frostc$Type* _858;
frost$core$Object* _859;
org$frostlang$frostc$ClassDecl* _864;
bool _865;
frost$core$Bit _866;
bool _867;
frost$core$Int _869;
org$frostlang$frostc$ClassDecl* _872;
org$frostlang$frostc$Type** _873;
org$frostlang$frostc$Type* _874;
bool _875;
frost$core$Bit _876;
bool _877;
org$frostlang$frostc$Type* _880;
org$frostlang$frostc$ClassDecl* _881;
bool _882;
frost$core$Bit _883;
bool _884;
frost$core$Int _886;
org$frostlang$frostc$ClassDecl* _889;
org$frostlang$frostc$Type** _890;
org$frostlang$frostc$Type* _891;
bool _892;
frost$core$Bit _893;
bool _894;
frost$core$Int _896;
org$frostlang$frostc$Type* _899;
org$frostlang$frostc$Type* _900;
frost$core$Object* _901;
org$frostlang$frostc$Type* _903;
frost$core$Object* _904;
frost$core$Object* _907;
org$frostlang$frostc$Type* _910;
org$frostlang$frostc$ClassDecl* _911;
frost$core$Object* _912;
org$frostlang$frostc$ClassDecl* _914;
frost$core$Object* _915;
frost$core$Object* _918;
frost$core$Object* _923;
org$frostlang$frostc$ClassDecl* _925;
frost$core$Object* _926;
org$frostlang$frostc$ClassDecl* _931;
frost$core$Object* _932;
org$frostlang$frostc$Type* _935;
frost$core$Object* _936;
frost$collections$HashSet* _939;
frost$core$Object* _940;
org$frostlang$frostc$Type** _945;
org$frostlang$frostc$Type* _946;
frost$core$Object* _947;
org$frostlang$frostc$Type* _949;
frost$core$Object* _950;
org$frostlang$frostc$Type* _953;
frost$core$Object* _954;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:441
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:441:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
_3 = ((org$frostlang$frostc$Symbol*) param0);
_4 = &_3->name;
_5 = *_4;
_6 = ((org$frostlang$frostc$Symbol*) param2);
_7 = &_6->name;
_8 = *_7;
_9 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_5, _8);
_10 = _9.value;
if (_10) goto block4; else goto block5;
block4:;
_12 = &param0->typeKind;
_13 = *_12;
org$frostlang$frostc$Type$Kind$wrapper* $tmp383;
$tmp383 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp383->value = _13;
_14 = ((frost$core$Equatable*) $tmp383);
_15 = _14;
_16 = &param2->typeKind;
_17 = *_16;
org$frostlang$frostc$Type$Kind$wrapper* $tmp384;
$tmp384 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp384->value = _17;
_18 = ((frost$core$Equatable*) $tmp384);
ITable* $tmp385 = _15->$class->itable;
while ($tmp385->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp385 = $tmp385->next;
}
_19 = $tmp385->methods[0];
_20 = _19(_15, _18);
_21 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_23 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_23);
*(&local0) = _20;
goto block6;
block5:;
*(&local0) = _9;
goto block6;
block6:;
_29 = *(&local0);
_31 = _29.value;
if (_31) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:442
_34 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_34);
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:444
_38 = &param1->NULL_TYPE;
_39 = *_38;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:444:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
_42 = ((org$frostlang$frostc$Symbol*) param0);
_43 = &_42->name;
_44 = *_43;
_45 = ((org$frostlang$frostc$Symbol*) _39);
_46 = &_45->name;
_47 = *_46;
_48 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_44, _47);
_49 = _48.value;
if (_49) goto block10; else goto block11;
block10:;
_51 = &param0->typeKind;
_52 = *_51;
org$frostlang$frostc$Type$Kind$wrapper* $tmp386;
$tmp386 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp386->value = _52;
_53 = ((frost$core$Equatable*) $tmp386);
_54 = _53;
_55 = &_39->typeKind;
_56 = *_55;
org$frostlang$frostc$Type$Kind$wrapper* $tmp387;
$tmp387 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp387->value = _56;
_57 = ((frost$core$Equatable*) $tmp387);
ITable* $tmp388 = _54->$class->itable;
while ($tmp388->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp388 = $tmp388->next;
}
_58 = $tmp388->methods[0];
_59 = _58(_54, _57);
_60 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_60);
_62 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_62);
*(&local1) = _59;
goto block12;
block11:;
*(&local1) = _48;
goto block12;
block12:;
_68 = *(&local1);
_70 = _68.value;
if (_70) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:445
_73 = &param2->typeKind;
_74 = *_73;
org$frostlang$frostc$Type$Kind$wrapper* $tmp389;
$tmp389 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp389->value = _74;
_75 = ((frost$core$Equatable*) $tmp389);
_76 = _75;
_77 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:445:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_80 = &(&local3)->$rawValue;
*_80 = _77;
_82 = *(&local3);
*(&local2) = _82;
_85 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp390;
$tmp390 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp390->value = _85;
_86 = ((frost$core$Equatable*) $tmp390);
ITable* $tmp391 = _76->$class->itable;
while ($tmp391->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp391 = $tmp391->next;
}
_87 = $tmp391->methods[0];
_88 = _87(_76, _86);
_89 = _88.value;
_90 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_90);
_92 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_92);
if (_89) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:446
_96 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_96);
return param2;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:448
_100 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param2);
_101 = ((frost$core$Object*) _100);
frost$core$Frost$ref$frost$core$Object$Q(_101);
_103 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_103);
return _100;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:450
_107 = &param1->NULL_TYPE;
_108 = *_107;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:450:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
_111 = ((org$frostlang$frostc$Symbol*) param2);
_112 = &_111->name;
_113 = *_112;
_114 = ((org$frostlang$frostc$Symbol*) _108);
_115 = &_114->name;
_116 = *_115;
_117 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_113, _116);
_118 = _117.value;
if (_118) goto block19; else goto block20;
block19:;
_120 = &param2->typeKind;
_121 = *_120;
org$frostlang$frostc$Type$Kind$wrapper* $tmp392;
$tmp392 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp392->value = _121;
_122 = ((frost$core$Equatable*) $tmp392);
_123 = _122;
_124 = &_108->typeKind;
_125 = *_124;
org$frostlang$frostc$Type$Kind$wrapper* $tmp393;
$tmp393 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp393->value = _125;
_126 = ((frost$core$Equatable*) $tmp393);
ITable* $tmp394 = _123->$class->itable;
while ($tmp394->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp394 = $tmp394->next;
}
_127 = $tmp394->methods[0];
_128 = _127(_123, _126);
_129 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_129);
_131 = ((frost$core$Object*) _122);
frost$core$Frost$unref$frost$core$Object$Q(_131);
*(&local4) = _128;
goto block21;
block20:;
*(&local4) = _117;
goto block21;
block21:;
_137 = *(&local4);
_139 = _137.value;
if (_139) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:451
_142 = &param0->typeKind;
_143 = *_142;
org$frostlang$frostc$Type$Kind$wrapper* $tmp395;
$tmp395 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp395->value = _143;
_144 = ((frost$core$Equatable*) $tmp395);
_145 = _144;
_146 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:451:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_149 = &(&local6)->$rawValue;
*_149 = _146;
_151 = *(&local6);
*(&local5) = _151;
_154 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp396;
$tmp396 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp396->value = _154;
_155 = ((frost$core$Equatable*) $tmp396);
ITable* $tmp397 = _145->$class->itable;
while ($tmp397->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp397 = $tmp397->next;
}
_156 = $tmp397->methods[0];
_157 = _156(_145, _155);
_158 = _157.value;
_159 = ((frost$core$Object*) _155);
frost$core$Frost$unref$frost$core$Object$Q(_159);
_161 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_161);
if (_158) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:452
_165 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_165);
return param0;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:454
_169 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param0);
_170 = ((frost$core$Object*) _169);
frost$core$Frost$ref$frost$core$Object$Q(_170);
_172 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_172);
return _169;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:456
_176 = &param1->INVALID_TYPE;
_177 = *_176;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:456:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
_180 = ((org$frostlang$frostc$Symbol*) param0);
_181 = &_180->name;
_182 = *_181;
_183 = ((org$frostlang$frostc$Symbol*) _177);
_184 = &_183->name;
_185 = *_184;
_186 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_182, _185);
_187 = _186.value;
if (_187) goto block28; else goto block29;
block28:;
_189 = &param0->typeKind;
_190 = *_189;
org$frostlang$frostc$Type$Kind$wrapper* $tmp398;
$tmp398 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp398->value = _190;
_191 = ((frost$core$Equatable*) $tmp398);
_192 = _191;
_193 = &_177->typeKind;
_194 = *_193;
org$frostlang$frostc$Type$Kind$wrapper* $tmp399;
$tmp399 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp399->value = _194;
_195 = ((frost$core$Equatable*) $tmp399);
ITable* $tmp400 = _192->$class->itable;
while ($tmp400->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp400 = $tmp400->next;
}
_196 = $tmp400->methods[0];
_197 = _196(_192, _195);
_198 = ((frost$core$Object*) _195);
frost$core$Frost$unref$frost$core$Object$Q(_198);
_200 = ((frost$core$Object*) _191);
frost$core$Frost$unref$frost$core$Object$Q(_200);
*(&local7) = _197;
goto block30;
block29:;
*(&local7) = _186;
goto block30;
block30:;
_206 = *(&local7);
_208 = _206.value;
if (_208) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:457
_211 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_211);
return param0;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:459
_215 = &param1->INVALID_TYPE;
_216 = *_215;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:459:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
_219 = ((org$frostlang$frostc$Symbol*) param2);
_220 = &_219->name;
_221 = *_220;
_222 = ((org$frostlang$frostc$Symbol*) _216);
_223 = &_222->name;
_224 = *_223;
_225 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_221, _224);
_226 = _225.value;
if (_226) goto block34; else goto block35;
block34:;
_228 = &param2->typeKind;
_229 = *_228;
org$frostlang$frostc$Type$Kind$wrapper* $tmp401;
$tmp401 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp401->value = _229;
_230 = ((frost$core$Equatable*) $tmp401);
_231 = _230;
_232 = &_216->typeKind;
_233 = *_232;
org$frostlang$frostc$Type$Kind$wrapper* $tmp402;
$tmp402 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp402->value = _233;
_234 = ((frost$core$Equatable*) $tmp402);
ITable* $tmp403 = _231->$class->itable;
while ($tmp403->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp403 = $tmp403->next;
}
_235 = $tmp403->methods[0];
_236 = _235(_231, _234);
_237 = ((frost$core$Object*) _234);
frost$core$Frost$unref$frost$core$Object$Q(_237);
_239 = ((frost$core$Object*) _230);
frost$core$Frost$unref$frost$core$Object$Q(_239);
*(&local8) = _236;
goto block36;
block35:;
*(&local8) = _225;
goto block36;
block36:;
_245 = *(&local8);
_247 = _245.value;
if (_247) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:460
_250 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_250);
return param0;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:462
_254 = &param0->typeKind;
_255 = *_254;
org$frostlang$frostc$Type$Kind$wrapper* $tmp404;
$tmp404 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp404->value = _255;
_256 = ((frost$core$Equatable*) $tmp404);
_257 = _256;
_258 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:462:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_261 = &(&local10)->$rawValue;
*_261 = _258;
_263 = *(&local10);
*(&local9) = _263;
_266 = *(&local9);
org$frostlang$frostc$Type$Kind$wrapper* $tmp405;
$tmp405 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp405->value = _266;
_267 = ((frost$core$Equatable*) $tmp405);
ITable* $tmp406 = _257->$class->itable;
while ($tmp406->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp406 = $tmp406->next;
}
_268 = $tmp406->methods[0];
_269 = _268(_257, _267);
_270 = _269.value;
_271 = ((frost$core$Object*) _267);
frost$core$Frost$unref$frost$core$Object$Q(_271);
_273 = ((frost$core$Object*) _256);
frost$core$Frost$unref$frost$core$Object$Q(_273);
if (_270) goto block39; else goto block38;
block39:;
_276 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
_277 = _276.value;
if (_277) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:463
_280 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_280);
return param2;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:465
_284 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
_285 = _284.value;
if (_285) goto block43; else goto block42;
block43:;
_287 = &param2->typeKind;
_288 = *_287;
org$frostlang$frostc$Type$Kind$wrapper* $tmp407;
$tmp407 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp407->value = _288;
_289 = ((frost$core$Equatable*) $tmp407);
_290 = _289;
_291 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:465:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_294 = &(&local12)->$rawValue;
*_294 = _291;
_296 = *(&local12);
*(&local11) = _296;
_299 = *(&local11);
org$frostlang$frostc$Type$Kind$wrapper* $tmp408;
$tmp408 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp408->value = _299;
_300 = ((frost$core$Equatable*) $tmp408);
ITable* $tmp409 = _290->$class->itable;
while ($tmp409->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp409 = $tmp409->next;
}
_301 = $tmp409->methods[0];
_302 = _301(_290, _300);
_303 = _302.value;
_304 = ((frost$core$Object*) _300);
frost$core$Frost$unref$frost$core$Object$Q(_304);
_306 = ((frost$core$Object*) _289);
frost$core$Frost$unref$frost$core$Object$Q(_306);
if (_303) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:466
_310 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_310);
return param0;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:468
// begin inline call to function org.frostlang.frostc.Type.get_isReal():frost.core.Bit from Type.frost:468:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:344
_316 = &param0->typeKind;
_317 = *_316;
org$frostlang$frostc$Type$Kind$wrapper* $tmp410;
$tmp410 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp410->value = _317;
_318 = ((frost$core$Equatable*) $tmp410);
_319 = _318;
_320 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:344:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_323 = &(&local15)->$rawValue;
*_323 = _320;
_325 = *(&local15);
*(&local14) = _325;
_328 = *(&local14);
org$frostlang$frostc$Type$Kind$wrapper* $tmp411;
$tmp411 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp411->value = _328;
_329 = ((frost$core$Equatable*) $tmp411);
ITable* $tmp412 = _319->$class->itable;
while ($tmp412->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp412 = $tmp412->next;
}
_330 = $tmp412->methods[0];
_331 = _330(_319, _329);
_332 = _331.value;
if (_332) goto block49; else goto block50;
block49:;
*(&local13) = _331;
goto block51;
block50:;
_336 = ((org$frostlang$frostc$Symbol*) param0);
_337 = &_336->name;
_338 = *_337;
_339 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_338, &$s413);
*(&local13) = _339;
goto block51;
block51:;
_342 = *(&local13);
_343 = ((frost$core$Object*) _329);
frost$core$Frost$unref$frost$core$Object$Q(_343);
_345 = ((frost$core$Object*) _318);
frost$core$Frost$unref$frost$core$Object$Q(_345);
_348 = _342.value;
if (_348) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:469
_351 = &param2->typeKind;
_352 = *_351;
org$frostlang$frostc$Type$Kind$wrapper* $tmp414;
$tmp414 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp414->value = _352;
_353 = ((frost$core$Equatable*) $tmp414);
_354 = _353;
_355 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:469:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_358 = &(&local17)->$rawValue;
*_358 = _355;
_360 = *(&local17);
*(&local16) = _360;
_363 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp415;
$tmp415 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp415->value = _363;
_364 = ((frost$core$Equatable*) $tmp415);
ITable* $tmp416 = _354->$class->itable;
while ($tmp416->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp416 = $tmp416->next;
}
_365 = $tmp416->methods[0];
_366 = _365(_354, _364);
_367 = _366.value;
_368 = ((frost$core$Object*) _364);
frost$core$Frost$unref$frost$core$Object$Q(_368);
_370 = ((frost$core$Object*) _353);
frost$core$Frost$unref$frost$core$Object$Q(_370);
if (_367) goto block52; else goto block54;
block54:;
_373 = &param2->typeKind;
_374 = *_373;
org$frostlang$frostc$Type$Kind$wrapper* $tmp417;
$tmp417 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp417->value = _374;
_375 = ((frost$core$Equatable*) $tmp417);
_376 = _375;
_377 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:469:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_380 = &(&local19)->$rawValue;
*_380 = _377;
_382 = *(&local19);
*(&local18) = _382;
_385 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp418;
$tmp418 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp418->value = _385;
_386 = ((frost$core$Equatable*) $tmp418);
ITable* $tmp419 = _376->$class->itable;
while ($tmp419->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp419 = $tmp419->next;
}
_387 = $tmp419->methods[0];
_388 = _387(_376, _386);
_389 = _388.value;
_390 = ((frost$core$Object*) _386);
frost$core$Frost$unref$frost$core$Object$Q(_390);
_392 = ((frost$core$Object*) _375);
frost$core$Frost$unref$frost$core$Object$Q(_392);
if (_389) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:470
_396 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_396);
return param0;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:472
_400 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
_401 = _400.value;
if (_401) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:473
_404 = ((org$frostlang$frostc$Symbol*) param2);
_405 = &_404->name;
_406 = *_405;
_407 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(_406, &$s420);
_408 = _407.value;
if (_408) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:474
_411 = &param1->REAL64_TYPE;
_412 = *_411;
_413 = ((frost$core$Object*) _412);
frost$core$Frost$ref$frost$core$Object$Q(_413);
return _412;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:476
_417 = &param1->REAL32_TYPE;
_418 = *_417;
_419 = ((frost$core$Object*) _418);
frost$core$Frost$ref$frost$core$Object$Q(_419);
return _418;
block58:;
goto block46;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:479
// begin inline call to function org.frostlang.frostc.Type.get_isReal():frost.core.Bit from Type.frost:479:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:344
_426 = &param2->typeKind;
_427 = *_426;
org$frostlang$frostc$Type$Kind$wrapper* $tmp421;
$tmp421 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp421->value = _427;
_428 = ((frost$core$Equatable*) $tmp421);
_429 = _428;
_430 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:344:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_433 = &(&local22)->$rawValue;
*_433 = _430;
_435 = *(&local22);
*(&local21) = _435;
_438 = *(&local21);
org$frostlang$frostc$Type$Kind$wrapper* $tmp422;
$tmp422 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp422->value = _438;
_439 = ((frost$core$Equatable*) $tmp422);
ITable* $tmp423 = _429->$class->itable;
while ($tmp423->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp423 = $tmp423->next;
}
_440 = $tmp423->methods[0];
_441 = _440(_429, _439);
_442 = _441.value;
if (_442) goto block65; else goto block66;
block65:;
*(&local20) = _441;
goto block67;
block66:;
_446 = ((org$frostlang$frostc$Symbol*) param2);
_447 = &_446->name;
_448 = *_447;
_449 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_448, &$s424);
*(&local20) = _449;
goto block67;
block67:;
_452 = *(&local20);
_453 = ((frost$core$Object*) _439);
frost$core$Frost$unref$frost$core$Object$Q(_453);
_455 = ((frost$core$Object*) _428);
frost$core$Frost$unref$frost$core$Object$Q(_455);
_458 = _452.value;
if (_458) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:480
_461 = &param0->typeKind;
_462 = *_461;
org$frostlang$frostc$Type$Kind$wrapper* $tmp425;
$tmp425 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp425->value = _462;
_463 = ((frost$core$Equatable*) $tmp425);
_464 = _463;
_465 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:480:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_468 = &(&local24)->$rawValue;
*_468 = _465;
_470 = *(&local24);
*(&local23) = _470;
_473 = *(&local23);
org$frostlang$frostc$Type$Kind$wrapper* $tmp426;
$tmp426 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp426->value = _473;
_474 = ((frost$core$Equatable*) $tmp426);
ITable* $tmp427 = _464->$class->itable;
while ($tmp427->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp427 = $tmp427->next;
}
_475 = $tmp427->methods[0];
_476 = _475(_464, _474);
_477 = _476.value;
_478 = ((frost$core$Object*) _474);
frost$core$Frost$unref$frost$core$Object$Q(_478);
_480 = ((frost$core$Object*) _463);
frost$core$Frost$unref$frost$core$Object$Q(_480);
if (_477) goto block68; else goto block70;
block70:;
_483 = &param0->typeKind;
_484 = *_483;
org$frostlang$frostc$Type$Kind$wrapper* $tmp428;
$tmp428 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp428->value = _484;
_485 = ((frost$core$Equatable*) $tmp428);
_486 = _485;
_487 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:480:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_490 = &(&local26)->$rawValue;
*_490 = _487;
_492 = *(&local26);
*(&local25) = _492;
_495 = *(&local25);
org$frostlang$frostc$Type$Kind$wrapper* $tmp429;
$tmp429 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp429->value = _495;
_496 = ((frost$core$Equatable*) $tmp429);
ITable* $tmp430 = _486->$class->itable;
while ($tmp430->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp430 = $tmp430->next;
}
_497 = $tmp430->methods[0];
_498 = _497(_486, _496);
_499 = _498.value;
_500 = ((frost$core$Object*) _496);
frost$core$Frost$unref$frost$core$Object$Q(_500);
_502 = ((frost$core$Object*) _485);
frost$core$Frost$unref$frost$core$Object$Q(_502);
if (_499) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:481
_506 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_506);
return param2;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:483
_510 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
_511 = _510.value;
if (_511) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:484
_514 = ((org$frostlang$frostc$Symbol*) param0);
_515 = &_514->name;
_516 = *_515;
_517 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(_516, &$s431);
_518 = _517.value;
if (_518) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:485
_521 = &param1->REAL64_TYPE;
_522 = *_521;
_523 = ((frost$core$Object*) _522);
frost$core$Frost$ref$frost$core$Object$Q(_523);
return _522;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:487
_527 = &param1->REAL32_TYPE;
_528 = *_527;
_529 = ((frost$core$Object*) _528);
frost$core$Frost$ref$frost$core$Object$Q(_529);
return _528;
block74:;
goto block62;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:490
_534 = &param0->typeKind;
_535 = *_534;
org$frostlang$frostc$Type$Kind$wrapper* $tmp432;
$tmp432 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp432->value = _535;
_536 = ((frost$core$Equatable*) $tmp432);
_537 = _536;
_538 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:490:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_541 = &(&local28)->$rawValue;
*_541 = _538;
_543 = *(&local28);
*(&local27) = _543;
_546 = *(&local27);
org$frostlang$frostc$Type$Kind$wrapper* $tmp433;
$tmp433 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp433->value = _546;
_547 = ((frost$core$Equatable*) $tmp433);
ITable* $tmp434 = _537->$class->itable;
while ($tmp434->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp434 = $tmp434->next;
}
_548 = $tmp434->methods[0];
_549 = _548(_537, _547);
_550 = _549.value;
_551 = ((frost$core$Object*) _547);
frost$core$Frost$unref$frost$core$Object$Q(_551);
_553 = ((frost$core$Object*) _536);
frost$core$Frost$unref$frost$core$Object$Q(_553);
if (_550) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:491
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:491:20
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_559 = &param0->_subtypes;
_560 = *_559;
_561 = _560 != NULL;
_562 = (frost$core$Bit) {_561};
_563 = _562.value;
if (_563) goto block81; else goto block82;
block82:;
_565 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s435, _565, &$s436);
abort(); // unreachable
block81:;
_568 = _560;
_569 = ((frost$core$Object*) _568);
frost$core$Frost$ref$frost$core$Object$Q(_569);
_572 = _568;
_573 = (frost$core$Int) {0u};
_574 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_572, _573);
_575 = ((org$frostlang$frostc$Type*) _574);
_576 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(_575, param1, param2);
_577 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(_576);
_578 = ((frost$core$Object*) _577);
frost$core$Frost$ref$frost$core$Object$Q(_578);
_580 = ((frost$core$Object*) _577);
frost$core$Frost$unref$frost$core$Object$Q(_580);
_582 = ((frost$core$Object*) _576);
frost$core$Frost$unref$frost$core$Object$Q(_582);
_584 = _574;
frost$core$Frost$unref$frost$core$Object$Q(_584);
_586 = ((frost$core$Object*) _568);
frost$core$Frost$unref$frost$core$Object$Q(_586);
return _577;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:493
_590 = &param2->typeKind;
_591 = *_590;
org$frostlang$frostc$Type$Kind$wrapper* $tmp437;
$tmp437 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp437->value = _591;
_592 = ((frost$core$Equatable*) $tmp437);
_593 = _592;
_594 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:493:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_597 = &(&local30)->$rawValue;
*_597 = _594;
_599 = *(&local30);
*(&local29) = _599;
_602 = *(&local29);
org$frostlang$frostc$Type$Kind$wrapper* $tmp438;
$tmp438 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp438->value = _602;
_603 = ((frost$core$Equatable*) $tmp438);
ITable* $tmp439 = _593->$class->itable;
while ($tmp439->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp439 = $tmp439->next;
}
_604 = $tmp439->methods[0];
_605 = _604(_593, _603);
_606 = _605.value;
_607 = ((frost$core$Object*) _603);
frost$core$Frost$unref$frost$core$Object$Q(_607);
_609 = ((frost$core$Object*) _592);
frost$core$Frost$unref$frost$core$Object$Q(_609);
if (_606) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:494
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:494:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_615 = &param2->_subtypes;
_616 = *_615;
_617 = _616 != NULL;
_618 = (frost$core$Bit) {_617};
_619 = _618.value;
if (_619) goto block87; else goto block88;
block88:;
_621 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s440, _621, &$s441);
abort(); // unreachable
block87:;
_624 = _616;
_625 = ((frost$core$Object*) _624);
frost$core$Frost$ref$frost$core$Object$Q(_625);
_628 = _624;
_629 = (frost$core$Int) {0u};
_630 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_628, _629);
_631 = ((org$frostlang$frostc$Type*) _630);
_632 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, param1, _631);
_633 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(_632);
_634 = ((frost$core$Object*) _633);
frost$core$Frost$ref$frost$core$Object$Q(_634);
_636 = ((frost$core$Object*) _633);
frost$core$Frost$unref$frost$core$Object$Q(_636);
_638 = ((frost$core$Object*) _632);
frost$core$Frost$unref$frost$core$Object$Q(_638);
_640 = _630;
frost$core$Frost$unref$frost$core$Object$Q(_640);
_642 = ((frost$core$Object*) _624);
frost$core$Frost$unref$frost$core$Object$Q(_642);
return _633;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:496
_646 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param0);
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
_648 = ((frost$core$Object*) _646);
frost$core$Frost$ref$frost$core$Object$Q(_648);
_650 = *(&local31);
_651 = ((frost$core$Object*) _650);
frost$core$Frost$unref$frost$core$Object$Q(_651);
*(&local31) = _646;
_654 = ((frost$core$Object*) _646);
frost$core$Frost$unref$frost$core$Object$Q(_654);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:497
_657 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param2);
*(&local32) = ((org$frostlang$frostc$Type*) NULL);
_659 = ((frost$core$Object*) _657);
frost$core$Frost$ref$frost$core$Object$Q(_659);
_661 = *(&local32);
_662 = ((frost$core$Object*) _661);
frost$core$Frost$unref$frost$core$Object$Q(_662);
*(&local32) = _657;
_665 = ((frost$core$Object*) _657);
frost$core$Frost$unref$frost$core$Object$Q(_665);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:498
_668 = *(&local31);
_669 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(_668);
_670 = _669.value;
if (_670) goto block91; else goto block90;
block91:;
_672 = *(&local32);
_673 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(_672);
_674 = _673.value;
if (_674) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:499
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
_677 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
_678 = _677;
frost$collections$HashSet$init(_678);
*(&local33) = ((frost$collections$HashSet*) NULL);
_681 = ((frost$core$Object*) _677);
frost$core$Frost$ref$frost$core$Object$Q(_681);
_683 = *(&local33);
_684 = ((frost$core$Object*) _683);
frost$core$Frost$unref$frost$core$Object$Q(_684);
*(&local33) = _677;
_687 = ((frost$core$Object*) _677);
frost$core$Frost$unref$frost$core$Object$Q(_687);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:500
*(&local34) = ((org$frostlang$frostc$Type*) NULL);
_691 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_691);
_693 = *(&local34);
_694 = ((frost$core$Object*) _693);
frost$core$Frost$unref$frost$core$Object$Q(_694);
*(&local34) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:501
_698 = *(&local31);
_699 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, _698);
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
_701 = ((frost$core$Object*) _699);
frost$core$Frost$ref$frost$core$Object$Q(_701);
_703 = *(&local35);
_704 = ((frost$core$Object*) _703);
frost$core$Frost$unref$frost$core$Object$Q(_704);
*(&local35) = _699;
_707 = ((frost$core$Object*) _699);
frost$core$Frost$unref$frost$core$Object$Q(_707);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:502
goto block92;
block92:;
_711 = *(&local35);
_712 = _711 != NULL;
_713 = (frost$core$Bit) {_712};
_714 = _713.value;
if (_714) goto block93; else goto block94;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:503
_717 = *(&local33);
_718 = _717;
_719 = *(&local34);
_720 = ((frost$collections$HashKey*) _719);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Type.frost:503:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:8
_723 = &_718->contents;
_724 = *_723;
_725 = _724;
_726 = _720;
_727 = ((frost$core$Object*) _720);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_725, _726, _727);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:504
_731 = *(&local35);
_732 = _731 != NULL;
_733 = (frost$core$Bit) {_732};
_734 = _733.value;
if (_734) goto block99; else goto block100;
block100:;
_736 = (frost$core$Int) {504u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s442, _736, &$s443);
abort(); // unreachable
block99:;
_739 = _731;
_740 = &_739->rawSuper;
_741 = *_740;
_742 = _741 != NULL;
_743 = (frost$core$Bit) {_742};
_744 = _743.value;
if (_744) goto block96; else goto block98;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:505
_747 = *(&local34);
_748 = *(&local35);
_749 = _748 != NULL;
_750 = (frost$core$Bit) {_749};
_751 = _750.value;
if (_751) goto block101; else goto block102;
block102:;
_753 = (frost$core$Int) {505u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s444, _753, &$s445);
abort(); // unreachable
block101:;
_756 = _748;
_757 = &_756->rawSuper;
_758 = *_757;
_759 = _758 != NULL;
_760 = (frost$core$Bit) {_759};
_761 = _760.value;
if (_761) goto block103; else goto block104;
block104:;
_763 = (frost$core$Int) {505u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s446, _763, &$s447);
abort(); // unreachable
block103:;
_766 = _758;
_767 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, _747, _766);
_768 = ((frost$core$Object*) _767);
frost$core$Frost$ref$frost$core$Object$Q(_768);
_770 = *(&local34);
_771 = ((frost$core$Object*) _770);
frost$core$Frost$unref$frost$core$Object$Q(_771);
*(&local34) = _767;
_774 = ((frost$core$Object*) _767);
frost$core$Frost$unref$frost$core$Object$Q(_774);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:506
_777 = *(&local34);
_778 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, _777);
_779 = ((frost$core$Object*) _778);
frost$core$Frost$ref$frost$core$Object$Q(_779);
_781 = *(&local35);
_782 = ((frost$core$Object*) _781);
frost$core$Frost$unref$frost$core$Object$Q(_782);
*(&local35) = _778;
_785 = ((frost$core$Object*) _778);
frost$core$Frost$unref$frost$core$Object$Q(_785);
goto block97;
block98:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:509
_790 = ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_790);
_792 = *(&local35);
_793 = ((frost$core$Object*) _792);
frost$core$Frost$unref$frost$core$Object$Q(_793);
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block97;
block97:;
goto block92;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:512
_799 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_799);
_801 = *(&local34);
_802 = ((frost$core$Object*) _801);
frost$core$Frost$unref$frost$core$Object$Q(_802);
*(&local34) = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:513
_806 = *(&local32);
_807 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, _806);
_808 = ((frost$core$Object*) _807);
frost$core$Frost$ref$frost$core$Object$Q(_808);
_810 = *(&local35);
_811 = ((frost$core$Object*) _810);
frost$core$Frost$unref$frost$core$Object$Q(_811);
*(&local35) = _807;
_814 = ((frost$core$Object*) _807);
frost$core$Frost$unref$frost$core$Object$Q(_814);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:514
goto block105;
block105:;
_818 = *(&local35);
_819 = _818 != NULL;
_820 = (frost$core$Bit) {_819};
_821 = _820.value;
if (_821) goto block106; else goto block107;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:515
_824 = *(&local33);
_825 = _824;
_826 = *(&local34);
_827 = ((frost$collections$HashKey*) _826);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from Type.frost:515:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/HashSet.stub:35
_830 = &_825->contents;
_831 = *_830;
_832 = _831;
_833 = _827;
_834 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit(_832, _833);
_836 = _834.value;
if (_836) goto block108; else goto block109;
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:516
_839 = *(&local34);
_840 = ((frost$core$Object*) _839);
frost$core$Frost$ref$frost$core$Object$Q(_840);
_842 = *(&local35);
_843 = ((frost$core$Object*) _842);
frost$core$Frost$unref$frost$core$Object$Q(_843);
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
_846 = *(&local34);
_847 = ((frost$core$Object*) _846);
frost$core$Frost$unref$frost$core$Object$Q(_847);
*(&local34) = ((org$frostlang$frostc$Type*) NULL);
_850 = *(&local33);
_851 = ((frost$core$Object*) _850);
frost$core$Frost$unref$frost$core$Object$Q(_851);
*(&local33) = ((frost$collections$HashSet*) NULL);
_854 = *(&local32);
_855 = ((frost$core$Object*) _854);
frost$core$Frost$unref$frost$core$Object$Q(_855);
*(&local32) = ((org$frostlang$frostc$Type*) NULL);
_858 = *(&local31);
_859 = ((frost$core$Object*) _858);
frost$core$Frost$unref$frost$core$Object$Q(_859);
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
return _839;
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:518
_864 = *(&local35);
_865 = _864 != NULL;
_866 = (frost$core$Bit) {_865};
_867 = _866.value;
if (_867) goto block114; else goto block115;
block115:;
_869 = (frost$core$Int) {518u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s448, _869, &$s449);
abort(); // unreachable
block114:;
_872 = _864;
_873 = &_872->rawSuper;
_874 = *_873;
_875 = _874 != NULL;
_876 = (frost$core$Bit) {_875};
_877 = _876.value;
if (_877) goto block111; else goto block113;
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:519
_880 = *(&local34);
_881 = *(&local35);
_882 = _881 != NULL;
_883 = (frost$core$Bit) {_882};
_884 = _883.value;
if (_884) goto block116; else goto block117;
block117:;
_886 = (frost$core$Int) {519u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s450, _886, &$s451);
abort(); // unreachable
block116:;
_889 = _881;
_890 = &_889->rawSuper;
_891 = *_890;
_892 = _891 != NULL;
_893 = (frost$core$Bit) {_892};
_894 = _893.value;
if (_894) goto block118; else goto block119;
block119:;
_896 = (frost$core$Int) {519u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s452, _896, &$s453);
abort(); // unreachable
block118:;
_899 = _891;
_900 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, _880, _899);
_901 = ((frost$core$Object*) _900);
frost$core$Frost$ref$frost$core$Object$Q(_901);
_903 = *(&local34);
_904 = ((frost$core$Object*) _903);
frost$core$Frost$unref$frost$core$Object$Q(_904);
*(&local34) = _900;
_907 = ((frost$core$Object*) _900);
frost$core$Frost$unref$frost$core$Object$Q(_907);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:520
_910 = *(&local34);
_911 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, _910);
_912 = ((frost$core$Object*) _911);
frost$core$Frost$ref$frost$core$Object$Q(_912);
_914 = *(&local35);
_915 = ((frost$core$Object*) _914);
frost$core$Frost$unref$frost$core$Object$Q(_915);
*(&local35) = _911;
_918 = ((frost$core$Object*) _911);
frost$core$Frost$unref$frost$core$Object$Q(_918);
goto block112;
block113:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:523
_923 = ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_923);
_925 = *(&local35);
_926 = ((frost$core$Object*) _925);
frost$core$Frost$unref$frost$core$Object$Q(_926);
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block112;
block112:;
goto block105;
block107:;
_931 = *(&local35);
_932 = ((frost$core$Object*) _931);
frost$core$Frost$unref$frost$core$Object$Q(_932);
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
_935 = *(&local34);
_936 = ((frost$core$Object*) _935);
frost$core$Frost$unref$frost$core$Object$Q(_936);
*(&local34) = ((org$frostlang$frostc$Type*) NULL);
_939 = *(&local33);
_940 = ((frost$core$Object*) _939);
frost$core$Frost$unref$frost$core$Object$Q(_940);
*(&local33) = ((frost$collections$HashSet*) NULL);
goto block90;
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:527
_945 = &param1->OBJECT_TYPE;
_946 = *_945;
_947 = ((frost$core$Object*) _946);
frost$core$Frost$ref$frost$core$Object$Q(_947);
_949 = *(&local32);
_950 = ((frost$core$Object*) _949);
frost$core$Frost$unref$frost$core$Object$Q(_950);
*(&local32) = ((org$frostlang$frostc$Type*) NULL);
_953 = *(&local31);
_954 = ((frost$core$Object*) _953);
frost$core$Frost$unref$frost$core$Object$Q(_954);
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
return _946;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2) {

org$frostlang$frostc$Pair* _1;
bool _2;
frost$core$Bit _3;
bool _4;
frost$core$Object* _5;
frost$core$Object* _9;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:534
_1 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param1, param0, param2);
_2 = _1 != NULL;
_3 = (frost$core$Bit) {_2};
_4 = _3.value;
_5 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_5);
if (_4) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:535
_9 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_9);
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:537
_13 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_13);
return param2;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, org$frostlang$frostc$Compiler* param1, frost$collections$HashMap* param2) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$Type* local6 = NULL;
frost$collections$Array* local7 = NULL;
frost$core$Int local8;
frost$collections$Array* local9 = NULL;
frost$core$Int local10;
frost$collections$Array* local11 = NULL;
org$frostlang$frostc$Type* local12 = NULL;
org$frostlang$frostc$Type$Kind* _0;
org$frostlang$frostc$Type$Kind _1;
frost$core$Equatable* _2;
frost$core$Equatable* _3;
frost$core$Int _4;
frost$core$Int* _7;
org$frostlang$frostc$Type$Kind _9;
org$frostlang$frostc$Type$Kind _12;
frost$core$Equatable* _13;
$fn454 _14;
frost$core$Bit _15;
bool _16;
frost$core$Object* _17;
frost$core$Object* _19;
frost$core$Int _22;
frost$collections$MapView* _54;
$fn455 _55;
frost$core$Int _56;
frost$core$Int _57;
int64_t _60;
int64_t _61;
bool _62;
frost$core$Bit _63;
bool _65;
frost$core$Object* _68;
org$frostlang$frostc$Type$Kind* _73;
org$frostlang$frostc$Type$Kind _74;
frost$core$Int _75;
frost$core$Int _76;
int64_t _79;
int64_t _80;
bool _81;
frost$core$Bit _82;
bool _84;
frost$core$Int _86;
int64_t _89;
int64_t _90;
bool _91;
frost$core$Bit _92;
bool _94;
frost$collections$HashMap* _97;
org$frostlang$frostc$Symbol* _98;
frost$core$String** _99;
frost$core$String* _100;
frost$collections$HashKey* _101;
frost$core$Object* _102;
org$frostlang$frostc$Type* _103;
frost$core$Object* _105;
org$frostlang$frostc$Type* _107;
frost$core$Object* _108;
frost$core$Object* _111;
org$frostlang$frostc$Type* _114;
bool _115;
frost$core$Bit _116;
bool _117;
org$frostlang$frostc$Type* _120;
bool _121;
frost$core$Bit _122;
bool _123;
frost$core$Int _125;
org$frostlang$frostc$Type* _128;
frost$core$Object* _129;
org$frostlang$frostc$Type* _131;
frost$core$Object* _132;
frost$core$Object* _138;
org$frostlang$frostc$Type* _140;
frost$core$Object* _141;
frost$core$Int _146;
int64_t _149;
int64_t _150;
bool _151;
frost$core$Bit _152;
bool _154;
org$frostlang$frostc$FixedArray** _159;
org$frostlang$frostc$FixedArray* _160;
bool _161;
frost$core$Bit _162;
bool _163;
frost$core$Int _165;
org$frostlang$frostc$FixedArray* _168;
frost$core$Object* _169;
org$frostlang$frostc$FixedArray* _172;
frost$core$Int _173;
frost$core$Object* _174;
org$frostlang$frostc$Type* _175;
org$frostlang$frostc$Type* _176;
frost$core$Object* _178;
org$frostlang$frostc$Type* _180;
frost$core$Object* _181;
frost$core$Object* _184;
frost$core$Object* _186;
frost$core$Object* _188;
frost$collections$Array* _191;
frost$collections$Array* _192;
frost$core$Object* _195;
frost$collections$Array* _197;
frost$core$Object* _198;
frost$core$Object* _201;
frost$core$Int _204;
org$frostlang$frostc$FixedArray** _207;
org$frostlang$frostc$FixedArray* _208;
bool _209;
frost$core$Bit _210;
bool _211;
frost$core$Int _213;
org$frostlang$frostc$FixedArray* _216;
frost$core$Object* _217;
frost$collections$CollectionView* _220;
$fn456 _221;
frost$core$Int _222;
frost$core$Bit _223;
frost$core$Range$LTfrost$core$Int$GT _224;
frost$core$Int _225;
frost$core$Int _227;
frost$core$Bit _228;
bool _229;
frost$core$Int _230;
int64_t _232;
int64_t _233;
bool _234;
frost$core$Bit _235;
bool _236;
int64_t _238;
int64_t _239;
bool _240;
frost$core$Bit _241;
bool _242;
frost$collections$Array* _245;
frost$collections$Array* _246;
org$frostlang$frostc$FixedArray** _249;
org$frostlang$frostc$FixedArray* _250;
bool _251;
frost$core$Bit _252;
bool _253;
frost$core$Int _255;
org$frostlang$frostc$FixedArray* _258;
frost$core$Object* _259;
org$frostlang$frostc$FixedArray* _262;
frost$core$Int _263;
frost$core$Object* _264;
org$frostlang$frostc$Type* _265;
org$frostlang$frostc$Type* _266;
frost$core$Object* _267;
frost$core$Object* _269;
frost$core$Object* _271;
frost$core$Object* _273;
frost$core$Int _276;
int64_t _277;
int64_t _278;
int64_t _279;
frost$core$Int _280;
int64_t _282;
int64_t _283;
bool _284;
frost$core$Bit _285;
bool _286;
int64_t _288;
int64_t _289;
bool _290;
frost$core$Bit _291;
bool _292;
int64_t _294;
int64_t _295;
int64_t _296;
frost$core$Int _297;
frost$core$Object* _300;
org$frostlang$frostc$Type* _303;
frost$collections$Array* _304;
frost$collections$ListView* _305;
org$frostlang$frostc$Type* _306;
frost$core$Object* _307;
frost$core$Object* _309;
frost$collections$Array* _311;
frost$core$Object* _312;
org$frostlang$frostc$Type* _315;
frost$core$Object* _316;
frost$core$Int _321;
int64_t _324;
int64_t _325;
bool _326;
frost$core$Bit _327;
bool _329;
org$frostlang$frostc$FixedArray** _334;
org$frostlang$frostc$FixedArray* _335;
bool _336;
frost$core$Bit _337;
bool _338;
frost$core$Int _340;
org$frostlang$frostc$FixedArray* _343;
frost$core$Object* _344;
org$frostlang$frostc$FixedArray* _347;
frost$core$Int _348;
frost$core$Object* _349;
org$frostlang$frostc$Type* _350;
org$frostlang$frostc$Type* _351;
org$frostlang$frostc$Type* _352;
frost$core$Object* _353;
frost$core$Object* _355;
frost$core$Object* _357;
frost$core$Object* _359;
frost$core$Object* _361;
frost$core$Int _365;
int64_t _368;
int64_t _369;
bool _370;
frost$core$Bit _371;
bool _373;
frost$core$Int _375;
int64_t _378;
int64_t _379;
bool _380;
frost$core$Bit _381;
bool _383;
frost$core$Int _385;
int64_t _388;
int64_t _389;
bool _390;
frost$core$Bit _391;
bool _393;
frost$core$Int _395;
int64_t _398;
int64_t _399;
bool _400;
frost$core$Bit _401;
bool _403;
frost$collections$Array* _406;
frost$collections$Array* _407;
frost$core$Object* _410;
frost$collections$Array* _412;
frost$core$Object* _413;
frost$core$Object* _416;
org$frostlang$frostc$FixedArray** _421;
org$frostlang$frostc$FixedArray* _422;
bool _423;
frost$core$Bit _424;
bool _425;
frost$core$Int _427;
org$frostlang$frostc$FixedArray* _430;
frost$core$Object* _431;
frost$collections$CollectionView* _434;
$fn457 _435;
frost$core$Int _436;
frost$core$Int _437;
int64_t _438;
int64_t _439;
bool _440;
frost$core$Bit _441;
bool _442;
frost$core$Int _444;
frost$core$Object* _447;
frost$core$Int _450;
org$frostlang$frostc$FixedArray** _453;
org$frostlang$frostc$FixedArray* _454;
bool _455;
frost$core$Bit _456;
bool _457;
frost$core$Int _459;
org$frostlang$frostc$FixedArray* _462;
frost$core$Object* _463;
frost$collections$CollectionView* _466;
$fn458 _467;
frost$core$Int _468;
frost$core$Int _469;
int64_t _470;
int64_t _471;
int64_t _472;
frost$core$Int _473;
frost$core$Bit _474;
frost$core$Range$LTfrost$core$Int$GT _475;
frost$core$Int _476;
frost$core$Int _478;
frost$core$Bit _479;
bool _480;
frost$core$Int _481;
int64_t _483;
int64_t _484;
bool _485;
frost$core$Bit _486;
bool _487;
int64_t _489;
int64_t _490;
bool _491;
frost$core$Bit _492;
bool _493;
frost$collections$Array* _496;
frost$collections$Array* _497;
org$frostlang$frostc$FixedArray** _500;
org$frostlang$frostc$FixedArray* _501;
bool _502;
frost$core$Bit _503;
bool _504;
frost$core$Int _506;
org$frostlang$frostc$FixedArray* _509;
frost$core$Object* _510;
org$frostlang$frostc$FixedArray* _513;
frost$core$Int _514;
frost$core$Object* _515;
org$frostlang$frostc$Type* _516;
org$frostlang$frostc$Type* _517;
frost$core$Object* _518;
frost$core$Object* _520;
frost$core$Object* _522;
frost$core$Object* _524;
frost$core$Int _527;
int64_t _528;
int64_t _529;
int64_t _530;
frost$core$Int _531;
int64_t _533;
int64_t _534;
bool _535;
frost$core$Bit _536;
bool _537;
int64_t _539;
int64_t _540;
bool _541;
frost$core$Bit _542;
bool _543;
int64_t _545;
int64_t _546;
int64_t _547;
frost$core$Int _548;
frost$core$Object* _551;
org$frostlang$frostc$Symbol* _554;
org$frostlang$frostc$Position* _555;
org$frostlang$frostc$Position _556;
org$frostlang$frostc$Type$Kind* _557;
org$frostlang$frostc$Type$Kind _558;
frost$collections$Array* _559;
frost$collections$ListView* _560;
org$frostlang$frostc$FixedArray** _563;
org$frostlang$frostc$FixedArray* _564;
bool _565;
frost$core$Bit _566;
bool _567;
frost$core$Int _569;
org$frostlang$frostc$FixedArray* _572;
frost$core$Object* _573;
org$frostlang$frostc$FixedArray* _576;
org$frostlang$frostc$FixedArray** _579;
org$frostlang$frostc$FixedArray* _580;
bool _581;
frost$core$Bit _582;
bool _583;
frost$core$Int _585;
org$frostlang$frostc$FixedArray* _588;
frost$core$Object* _589;
frost$collections$CollectionView* _592;
$fn459 _593;
frost$core$Int _594;
frost$core$Int _595;
int64_t _596;
int64_t _597;
int64_t _598;
frost$core$Int _599;
frost$core$Object* _600;
org$frostlang$frostc$Type* _601;
org$frostlang$frostc$Type* _602;
frost$core$Int* _603;
frost$core$Int _604;
org$frostlang$frostc$Type* _605;
frost$core$Object* _606;
frost$core$Object* _608;
frost$core$Object* _610;
frost$core$Object* _612;
frost$core$Object* _614;
frost$core$Object* _616;
frost$collections$Array* _618;
frost$core$Object* _619;
frost$core$Int _624;
int64_t _627;
int64_t _628;
bool _629;
frost$core$Bit _630;
bool _632;
frost$collections$Array* _635;
frost$collections$Array* _636;
frost$core$Object* _639;
frost$collections$Array* _641;
frost$core$Object* _642;
frost$core$Object* _645;
org$frostlang$frostc$FixedArray** _650;
org$frostlang$frostc$FixedArray* _651;
bool _652;
frost$core$Bit _653;
bool _654;
frost$core$Int _656;
org$frostlang$frostc$FixedArray* _659;
frost$core$Object* _660;
frost$collections$Iterable* _663;
frost$collections$Iterable* _664;
$fn460 _665;
frost$collections$Iterator* _666;
frost$collections$Iterator* _667;
frost$collections$Iterator* _669;
$fn461 _670;
frost$core$Bit _671;
bool _672;
frost$collections$Iterator* _675;
$fn462 _676;
frost$core$Object* _677;
org$frostlang$frostc$Type* _678;
frost$core$Object* _679;
org$frostlang$frostc$Type* _681;
frost$core$Object* _682;
frost$collections$Array* _686;
frost$collections$Array* _687;
org$frostlang$frostc$Type* _688;
org$frostlang$frostc$Type* _689;
frost$core$Object* _690;
frost$core$Object* _692;
frost$core$Object* _694;
org$frostlang$frostc$Type* _696;
frost$core$Object* _697;
frost$core$Object* _701;
frost$core$Object* _703;
frost$collections$Array* _706;
frost$collections$ListView* _707;
org$frostlang$frostc$Type* _708;
frost$core$Object* _709;
frost$core$Object* _711;
frost$collections$Array* _713;
frost$core$Object* _714;
frost$core$Object* _720;
org$frostlang$frostc$Type* _25;
org$frostlang$frostc$Type$Kind* _26;
org$frostlang$frostc$Type$Kind _27;
frost$core$Equatable* _28;
frost$core$Equatable* _29;
frost$core$Int _30;
frost$core$Int* _33;
org$frostlang$frostc$Type$Kind _35;
org$frostlang$frostc$Type$Kind _38;
frost$core$Equatable* _39;
$fn463 _40;
frost$core$Bit _41;
frost$core$Object* _42;
frost$core$Object* _44;
bool _49;
org$frostlang$frostc$Type* _51;
frost$core$Int _46;
_0 = &param0->typeKind;
_1 = *_0;
org$frostlang$frostc$Type$Kind$wrapper* $tmp464;
$tmp464 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp464->value = _1;
_2 = ((frost$core$Equatable*) $tmp464);
_3 = _2;
_4 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:540:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_7 = &(&local1)->$rawValue;
*_7 = _4;
_9 = *(&local1);
*(&local0) = _9;
_12 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp465;
$tmp465 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp465->value = _12;
_13 = ((frost$core$Equatable*) $tmp465);
ITable* $tmp466 = _3->$class->itable;
while ($tmp466->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp466 = $tmp466->next;
}
_14 = $tmp466->methods[1];
_15 = _14(_3, _13);
_16 = _15.value;
_17 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_19);
if (_16) goto block1; else goto block2;
block2:;
_22 = (frost$core$Int) {542u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s467, _22, &$s468);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:543
_54 = ((frost$collections$MapView*) param2);
ITable* $tmp469 = _54->$class->itable;
while ($tmp469->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp469 = $tmp469->next;
}
_55 = $tmp469->methods[0];
_56 = _55(_54);
_57 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:543:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_60 = _56.value;
_61 = _57.value;
_62 = _60 == _61;
_63 = (frost$core$Bit) {_62};
_65 = _63.value;
if (_65) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:544
_68 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_68);
*(&local2) = param0;
goto block4;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:546
_73 = &param0->typeKind;
_74 = *_73;
_75 = _74.$rawValue;
_76 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:547:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_79 = _75.value;
_80 = _76.value;
_81 = _79 == _80;
_82 = (frost$core$Bit) {_81};
_84 = _82.value;
if (_84) goto block12; else goto block13;
block13:;
_86 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:547:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_89 = _75.value;
_90 = _86.value;
_91 = _89 == _90;
_92 = (frost$core$Bit) {_91};
_94 = _92.value;
if (_94) goto block12; else goto block15;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:548
_97 = param2;
_98 = ((org$frostlang$frostc$Symbol*) param0);
_99 = &_98->name;
_100 = *_99;
_101 = ((frost$collections$HashKey*) _100);
_102 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(_97, _101);
_103 = ((org$frostlang$frostc$Type*) _102);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
_105 = ((frost$core$Object*) _103);
frost$core$Frost$ref$frost$core$Object$Q(_105);
_107 = *(&local5);
_108 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_108);
*(&local5) = _103;
_111 = _102;
frost$core$Frost$unref$frost$core$Object$Q(_111);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:549
_114 = *(&local5);
_115 = _114 != NULL;
_116 = (frost$core$Bit) {_115};
_117 = _116.value;
if (_117) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:550
_120 = *(&local5);
_121 = _120 != NULL;
_122 = (frost$core$Bit) {_121};
_123 = _122.value;
if (_123) goto block19; else goto block20;
block20:;
_125 = (frost$core$Int) {550u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s470, _125, &$s471);
abort(); // unreachable
block19:;
_128 = _120;
_129 = ((frost$core$Object*) _128);
frost$core$Frost$ref$frost$core$Object$Q(_129);
_131 = *(&local5);
_132 = ((frost$core$Object*) _131);
frost$core$Frost$unref$frost$core$Object$Q(_132);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
*(&local2) = _128;
goto block4;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:552
_138 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_138);
_140 = *(&local5);
_141 = ((frost$core$Object*) _140);
frost$core$Frost$unref$frost$core$Object$Q(_141);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
*(&local2) = param0;
goto block4;
block15:;
_146 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:554:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_149 = _75.value;
_150 = _146.value;
_151 = _149 == _150;
_152 = (frost$core$Bit) {_151};
_154 = _152.value;
if (_154) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:555
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:555:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_159 = &param0->_subtypes;
_160 = *_159;
_161 = _160 != NULL;
_162 = (frost$core$Bit) {_161};
_163 = _162.value;
if (_163) goto block25; else goto block26;
block26:;
_165 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s472, _165, &$s473);
abort(); // unreachable
block25:;
_168 = _160;
_169 = ((frost$core$Object*) _168);
frost$core$Frost$ref$frost$core$Object$Q(_169);
_172 = _168;
_173 = (frost$core$Int) {0u};
_174 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_172, _173);
_175 = ((org$frostlang$frostc$Type*) _174);
_176 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_175, param1, param2);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
_178 = ((frost$core$Object*) _176);
frost$core$Frost$ref$frost$core$Object$Q(_178);
_180 = *(&local6);
_181 = ((frost$core$Object*) _180);
frost$core$Frost$unref$frost$core$Object$Q(_181);
*(&local6) = _176;
_184 = ((frost$core$Object*) _176);
frost$core$Frost$unref$frost$core$Object$Q(_184);
_186 = _174;
frost$core$Frost$unref$frost$core$Object$Q(_186);
_188 = ((frost$core$Object*) _168);
frost$core$Frost$unref$frost$core$Object$Q(_188);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:556
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_191 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_192 = _191;
frost$collections$Array$init(_192);
*(&local7) = ((frost$collections$Array*) NULL);
_195 = ((frost$core$Object*) _191);
frost$core$Frost$ref$frost$core$Object$Q(_195);
_197 = *(&local7);
_198 = ((frost$core$Object*) _197);
frost$core$Frost$unref$frost$core$Object$Q(_198);
*(&local7) = _191;
_201 = ((frost$core$Object*) _191);
frost$core$Frost$unref$frost$core$Object$Q(_201);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:557
_204 = (frost$core$Int) {1u};
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:557:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_207 = &param0->_subtypes;
_208 = *_207;
_209 = _208 != NULL;
_210 = (frost$core$Bit) {_209};
_211 = _210.value;
if (_211) goto block28; else goto block29;
block29:;
_213 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s474, _213, &$s475);
abort(); // unreachable
block28:;
_216 = _208;
_217 = ((frost$core$Object*) _216);
frost$core$Frost$ref$frost$core$Object$Q(_217);
_220 = ((frost$collections$CollectionView*) _216);
ITable* $tmp476 = _220->$class->itable;
while ($tmp476->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp476 = $tmp476->next;
}
_221 = $tmp476->methods[0];
_222 = _221(_220);
_223 = (frost$core$Bit) {false};
_224 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_204, _222, _223);
_225 = _224.min;
*(&local8) = _225;
_227 = _224.max;
_228 = _224.inclusive;
_229 = _228.value;
_230 = (frost$core$Int) {1u};
if (_229) goto block33; else goto block34;
block33:;
_232 = _225.value;
_233 = _227.value;
_234 = _232 <= _233;
_235 = (frost$core$Bit) {_234};
_236 = _235.value;
if (_236) goto block30; else goto block31;
block34:;
_238 = _225.value;
_239 = _227.value;
_240 = _238 < _239;
_241 = (frost$core$Bit) {_240};
_242 = _241.value;
if (_242) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:558
_245 = *(&local7);
_246 = _245;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:558:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_249 = &param0->_subtypes;
_250 = *_249;
_251 = _250 != NULL;
_252 = (frost$core$Bit) {_251};
_253 = _252.value;
if (_253) goto block36; else goto block37;
block37:;
_255 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s477, _255, &$s478);
abort(); // unreachable
block36:;
_258 = _250;
_259 = ((frost$core$Object*) _258);
frost$core$Frost$ref$frost$core$Object$Q(_259);
_262 = _258;
_263 = *(&local8);
_264 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_262, _263);
_265 = ((org$frostlang$frostc$Type*) _264);
_266 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_265, param1, param2);
_267 = ((frost$core$Object*) _266);
frost$collections$Array$add$frost$collections$Array$T(_246, _267);
_269 = ((frost$core$Object*) _266);
frost$core$Frost$unref$frost$core$Object$Q(_269);
_271 = _264;
frost$core$Frost$unref$frost$core$Object$Q(_271);
_273 = ((frost$core$Object*) _258);
frost$core$Frost$unref$frost$core$Object$Q(_273);
_276 = *(&local8);
_277 = _227.value;
_278 = _276.value;
_279 = _277 - _278;
_280 = (frost$core$Int) {_279};
if (_229) goto block39; else goto block40;
block39:;
_282 = _280.value;
_283 = _230.value;
_284 = _282 >= _283;
_285 = (frost$core$Bit) {_284};
_286 = _285.value;
if (_286) goto block38; else goto block31;
block40:;
_288 = _280.value;
_289 = _230.value;
_290 = _288 > _289;
_291 = (frost$core$Bit) {_290};
_292 = _291.value;
if (_292) goto block38; else goto block31;
block38:;
_294 = _276.value;
_295 = _230.value;
_296 = _294 + _295;
_297 = (frost$core$Int) {_296};
*(&local8) = _297;
goto block30;
block31:;
_300 = ((frost$core$Object*) _216);
frost$core$Frost$unref$frost$core$Object$Q(_300);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:560
_303 = *(&local6);
_304 = *(&local7);
_305 = ((frost$collections$ListView*) _304);
_306 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_303, _305);
_307 = ((frost$core$Object*) _306);
frost$core$Frost$ref$frost$core$Object$Q(_307);
_309 = ((frost$core$Object*) _306);
frost$core$Frost$unref$frost$core$Object$Q(_309);
_311 = *(&local7);
_312 = ((frost$core$Object*) _311);
frost$core$Frost$unref$frost$core$Object$Q(_312);
*(&local7) = ((frost$collections$Array*) NULL);
_315 = *(&local6);
_316 = ((frost$core$Object*) _315);
frost$core$Frost$unref$frost$core$Object$Q(_316);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
*(&local2) = _306;
goto block4;
block22:;
_321 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:562:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_324 = _75.value;
_325 = _321.value;
_326 = _324 == _325;
_327 = (frost$core$Bit) {_326};
_329 = _327.value;
if (_329) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:563
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:563:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_334 = &param0->_subtypes;
_335 = *_334;
_336 = _335 != NULL;
_337 = (frost$core$Bit) {_336};
_338 = _337.value;
if (_338) goto block45; else goto block46;
block46:;
_340 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s479, _340, &$s480);
abort(); // unreachable
block45:;
_343 = _335;
_344 = ((frost$core$Object*) _343);
frost$core$Frost$ref$frost$core$Object$Q(_344);
_347 = _343;
_348 = (frost$core$Int) {0u};
_349 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_347, _348);
_350 = ((org$frostlang$frostc$Type*) _349);
_351 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_350, param1, param2);
_352 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(_351);
_353 = ((frost$core$Object*) _352);
frost$core$Frost$ref$frost$core$Object$Q(_353);
_355 = ((frost$core$Object*) _352);
frost$core$Frost$unref$frost$core$Object$Q(_355);
_357 = ((frost$core$Object*) _351);
frost$core$Frost$unref$frost$core$Object$Q(_357);
_359 = _349;
frost$core$Frost$unref$frost$core$Object$Q(_359);
_361 = ((frost$core$Object*) _343);
frost$core$Frost$unref$frost$core$Object$Q(_361);
*(&local2) = _352;
goto block4;
block42:;
_365 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:565:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_368 = _75.value;
_369 = _365.value;
_370 = _368 == _369;
_371 = (frost$core$Bit) {_370};
_373 = _371.value;
if (_373) goto block47; else goto block48;
block48:;
_375 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:565:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_378 = _75.value;
_379 = _375.value;
_380 = _378 == _379;
_381 = (frost$core$Bit) {_380};
_383 = _381.value;
if (_383) goto block47; else goto block50;
block50:;
_385 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:565:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_388 = _75.value;
_389 = _385.value;
_390 = _388 == _389;
_391 = (frost$core$Bit) {_390};
_393 = _391.value;
if (_393) goto block47; else goto block52;
block52:;
_395 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:565:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_398 = _75.value;
_399 = _395.value;
_400 = _398 == _399;
_401 = (frost$core$Bit) {_400};
_403 = _401.value;
if (_403) goto block47; else goto block54;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:566
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_406 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_407 = _406;
frost$collections$Array$init(_407);
*(&local9) = ((frost$collections$Array*) NULL);
_410 = ((frost$core$Object*) _406);
frost$core$Frost$ref$frost$core$Object$Q(_410);
_412 = *(&local9);
_413 = ((frost$core$Object*) _412);
frost$core$Frost$unref$frost$core$Object$Q(_413);
*(&local9) = _406;
_416 = ((frost$core$Object*) _406);
frost$core$Frost$unref$frost$core$Object$Q(_416);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:567
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:567:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_421 = &param0->_subtypes;
_422 = *_421;
_423 = _422 != NULL;
_424 = (frost$core$Bit) {_423};
_425 = _424.value;
if (_425) goto block57; else goto block58;
block58:;
_427 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s481, _427, &$s482);
abort(); // unreachable
block57:;
_430 = _422;
_431 = ((frost$core$Object*) _430);
frost$core$Frost$ref$frost$core$Object$Q(_431);
_434 = ((frost$collections$CollectionView*) _430);
ITable* $tmp483 = _434->$class->itable;
while ($tmp483->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp483 = $tmp483->next;
}
_435 = $tmp483->methods[0];
_436 = _435(_434);
_437 = (frost$core$Int) {1u};
_438 = _436.value;
_439 = _437.value;
_440 = _438 >= _439;
_441 = (frost$core$Bit) {_440};
_442 = _441.value;
if (_442) goto block59; else goto block60;
block60:;
_444 = (frost$core$Int) {567u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s484, _444);
abort(); // unreachable
block59:;
_447 = ((frost$core$Object*) _430);
frost$core$Frost$unref$frost$core$Object$Q(_447);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:568
_450 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:568:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_453 = &param0->_subtypes;
_454 = *_453;
_455 = _454 != NULL;
_456 = (frost$core$Bit) {_455};
_457 = _456.value;
if (_457) goto block62; else goto block63;
block63:;
_459 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s485, _459, &$s486);
abort(); // unreachable
block62:;
_462 = _454;
_463 = ((frost$core$Object*) _462);
frost$core$Frost$ref$frost$core$Object$Q(_463);
_466 = ((frost$collections$CollectionView*) _462);
ITable* $tmp487 = _466->$class->itable;
while ($tmp487->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp487 = $tmp487->next;
}
_467 = $tmp487->methods[0];
_468 = _467(_466);
_469 = (frost$core$Int) {1u};
_470 = _468.value;
_471 = _469.value;
_472 = _470 - _471;
_473 = (frost$core$Int) {_472};
_474 = (frost$core$Bit) {false};
_475 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_450, _473, _474);
_476 = _475.min;
*(&local10) = _476;
_478 = _475.max;
_479 = _475.inclusive;
_480 = _479.value;
_481 = (frost$core$Int) {1u};
if (_480) goto block67; else goto block68;
block67:;
_483 = _476.value;
_484 = _478.value;
_485 = _483 <= _484;
_486 = (frost$core$Bit) {_485};
_487 = _486.value;
if (_487) goto block64; else goto block65;
block68:;
_489 = _476.value;
_490 = _478.value;
_491 = _489 < _490;
_492 = (frost$core$Bit) {_491};
_493 = _492.value;
if (_493) goto block64; else goto block65;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:569
_496 = *(&local9);
_497 = _496;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:569:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_500 = &param0->_subtypes;
_501 = *_500;
_502 = _501 != NULL;
_503 = (frost$core$Bit) {_502};
_504 = _503.value;
if (_504) goto block70; else goto block71;
block71:;
_506 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s488, _506, &$s489);
abort(); // unreachable
block70:;
_509 = _501;
_510 = ((frost$core$Object*) _509);
frost$core$Frost$ref$frost$core$Object$Q(_510);
_513 = _509;
_514 = *(&local10);
_515 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_513, _514);
_516 = ((org$frostlang$frostc$Type*) _515);
_517 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_516, param1, param2);
_518 = ((frost$core$Object*) _517);
frost$collections$Array$add$frost$collections$Array$T(_497, _518);
_520 = ((frost$core$Object*) _517);
frost$core$Frost$unref$frost$core$Object$Q(_520);
_522 = _515;
frost$core$Frost$unref$frost$core$Object$Q(_522);
_524 = ((frost$core$Object*) _509);
frost$core$Frost$unref$frost$core$Object$Q(_524);
_527 = *(&local10);
_528 = _478.value;
_529 = _527.value;
_530 = _528 - _529;
_531 = (frost$core$Int) {_530};
if (_480) goto block73; else goto block74;
block73:;
_533 = _531.value;
_534 = _481.value;
_535 = _533 >= _534;
_536 = (frost$core$Bit) {_535};
_537 = _536.value;
if (_537) goto block72; else goto block65;
block74:;
_539 = _531.value;
_540 = _481.value;
_541 = _539 > _540;
_542 = (frost$core$Bit) {_541};
_543 = _542.value;
if (_543) goto block72; else goto block65;
block72:;
_545 = _527.value;
_546 = _481.value;
_547 = _545 + _546;
_548 = (frost$core$Int) {_547};
*(&local10) = _548;
goto block64;
block65:;
_551 = ((frost$core$Object*) _462);
frost$core$Frost$unref$frost$core$Object$Q(_551);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:571
_554 = ((org$frostlang$frostc$Symbol*) param0);
_555 = &_554->position;
_556 = *_555;
_557 = &param0->typeKind;
_558 = *_557;
_559 = *(&local9);
_560 = ((frost$collections$ListView*) _559);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:572:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_563 = &param0->_subtypes;
_564 = *_563;
_565 = _564 != NULL;
_566 = (frost$core$Bit) {_565};
_567 = _566.value;
if (_567) goto block76; else goto block77;
block77:;
_569 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s490, _569, &$s491);
abort(); // unreachable
block76:;
_572 = _564;
_573 = ((frost$core$Object*) _572);
frost$core$Frost$ref$frost$core$Object$Q(_573);
_576 = _572;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:572:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_579 = &param0->_subtypes;
_580 = *_579;
_581 = _580 != NULL;
_582 = (frost$core$Bit) {_581};
_583 = _582.value;
if (_583) goto block79; else goto block80;
block80:;
_585 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s492, _585, &$s493);
abort(); // unreachable
block79:;
_588 = _580;
_589 = ((frost$core$Object*) _588);
frost$core$Frost$ref$frost$core$Object$Q(_589);
_592 = ((frost$collections$CollectionView*) _588);
ITable* $tmp494 = _592->$class->itable;
while ($tmp494->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp494 = $tmp494->next;
}
_593 = $tmp494->methods[0];
_594 = _593(_592);
_595 = (frost$core$Int) {1u};
_596 = _594.value;
_597 = _595.value;
_598 = _596 - _597;
_599 = (frost$core$Int) {_598};
_600 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_576, _599);
_601 = ((org$frostlang$frostc$Type*) _600);
_602 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_601, param1, param2);
_603 = &param0->priority;
_604 = *_603;
_605 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, _556, _558, _560, _602, _604);
_606 = ((frost$core$Object*) _605);
frost$core$Frost$ref$frost$core$Object$Q(_606);
_608 = ((frost$core$Object*) _605);
frost$core$Frost$unref$frost$core$Object$Q(_608);
_610 = ((frost$core$Object*) _602);
frost$core$Frost$unref$frost$core$Object$Q(_610);
_612 = _600;
frost$core$Frost$unref$frost$core$Object$Q(_612);
_614 = ((frost$core$Object*) _588);
frost$core$Frost$unref$frost$core$Object$Q(_614);
_616 = ((frost$core$Object*) _572);
frost$core$Frost$unref$frost$core$Object$Q(_616);
_618 = *(&local9);
_619 = ((frost$core$Object*) _618);
frost$core$Frost$unref$frost$core$Object$Q(_619);
*(&local9) = ((frost$collections$Array*) NULL);
*(&local2) = _605;
goto block4;
block54:;
_624 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:574:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_627 = _75.value;
_628 = _624.value;
_629 = _627 == _628;
_630 = (frost$core$Bit) {_629};
_632 = _630.value;
if (_632) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:575
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_635 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_636 = _635;
frost$collections$Array$init(_636);
*(&local11) = ((frost$collections$Array*) NULL);
_639 = ((frost$core$Object*) _635);
frost$core$Frost$ref$frost$core$Object$Q(_639);
_641 = *(&local11);
_642 = ((frost$core$Object*) _641);
frost$core$Frost$unref$frost$core$Object$Q(_642);
*(&local11) = _635;
_645 = ((frost$core$Object*) _635);
frost$core$Frost$unref$frost$core$Object$Q(_645);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:576
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:576:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
_650 = &param0->_subtypes;
_651 = *_650;
_652 = _651 != NULL;
_653 = (frost$core$Bit) {_652};
_654 = _653.value;
if (_654) goto block85; else goto block86;
block86:;
_656 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s495, _656, &$s496);
abort(); // unreachable
block85:;
_659 = _651;
_660 = ((frost$core$Object*) _659);
frost$core$Frost$ref$frost$core$Object$Q(_660);
_663 = ((frost$collections$Iterable*) _659);
_664 = _663;
ITable* $tmp497 = _664->$class->itable;
while ($tmp497->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp497 = $tmp497->next;
}
_665 = $tmp497->methods[0];
_666 = _665(_664);
_667 = _666;
goto block87;
block87:;
_669 = _667;
ITable* $tmp498 = _669->$class->itable;
while ($tmp498->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp498 = $tmp498->next;
}
_670 = $tmp498->methods[0];
_671 = _670(_669);
_672 = _671.value;
if (_672) goto block89; else goto block88;
block88:;
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
_675 = _667;
ITable* $tmp499 = _675->$class->itable;
while ($tmp499->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp499 = $tmp499->next;
}
_676 = $tmp499->methods[1];
_677 = _676(_675);
_678 = ((org$frostlang$frostc$Type*) _677);
_679 = ((frost$core$Object*) _678);
frost$core$Frost$ref$frost$core$Object$Q(_679);
_681 = *(&local12);
_682 = ((frost$core$Object*) _681);
frost$core$Frost$unref$frost$core$Object$Q(_682);
*(&local12) = _678;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:577
_686 = *(&local11);
_687 = _686;
_688 = *(&local12);
_689 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_688, param1, param2);
_690 = ((frost$core$Object*) _689);
frost$collections$Array$add$frost$collections$Array$T(_687, _690);
_692 = ((frost$core$Object*) _689);
frost$core$Frost$unref$frost$core$Object$Q(_692);
_694 = _677;
frost$core$Frost$unref$frost$core$Object$Q(_694);
_696 = *(&local12);
_697 = ((frost$core$Object*) _696);
frost$core$Frost$unref$frost$core$Object$Q(_697);
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
goto block87;
block89:;
_701 = ((frost$core$Object*) _666);
frost$core$Frost$unref$frost$core$Object$Q(_701);
_703 = ((frost$core$Object*) _659);
frost$core$Frost$unref$frost$core$Object$Q(_703);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:579
_706 = *(&local11);
_707 = ((frost$collections$ListView*) _706);
_708 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_707);
_709 = ((frost$core$Object*) _708);
frost$core$Frost$ref$frost$core$Object$Q(_709);
_711 = ((frost$core$Object*) _708);
frost$core$Frost$unref$frost$core$Object$Q(_711);
_713 = *(&local11);
_714 = ((frost$core$Object*) _713);
frost$core$Frost$unref$frost$core$Object$Q(_714);
*(&local11) = ((frost$collections$Array*) NULL);
*(&local2) = _708;
goto block4;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:582
_720 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_720);
*(&local2) = param0;
goto block4;
block11:;
goto block90;
block90:;
block4:;
_25 = *(&local2);
_26 = &_25->typeKind;
_27 = *_26;
org$frostlang$frostc$Type$Kind$wrapper* $tmp500;
$tmp500 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp500->value = _27;
_28 = ((frost$core$Equatable*) $tmp500);
_29 = _28;
_30 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:541:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_33 = &(&local4)->$rawValue;
*_33 = _30;
_35 = *(&local4);
*(&local3) = _35;
_38 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp501;
$tmp501 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp501->value = _38;
_39 = ((frost$core$Equatable*) $tmp501);
ITable* $tmp502 = _29->$class->itable;
while ($tmp502->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp502 = $tmp502->next;
}
_40 = $tmp502->methods[1];
_41 = _40(_29, _39);
_42 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_44);
_49 = _41.value;
if (_49) goto block6; else goto block7;
block6:;
_51 = *(&local2);
return _51;
block7:;
_46 = (frost$core$Int) {542u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s503, _46, &$s504);
abort(); // unreachable

}
frost$core$Int org$frostlang$frostc$Type$get_hash$R$frost$core$Int(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Symbol* _1;
frost$core$String** _2;
frost$core$String* _3;
frost$collections$HashKey* _4;
$fn505 _5;
frost$core$Int _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:589
_1 = ((org$frostlang$frostc$Symbol*) param0);
_2 = &_1->name;
_3 = *_2;
_4 = ((frost$collections$HashKey*) _3);
ITable* $tmp506 = _4->$class->itable;
while ($tmp506->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp506 = $tmp506->next;
}
_5 = $tmp506->methods[0];
_6 = _5(_4);
return _6;

}
frost$core$String* org$frostlang$frostc$Type$get_asString$R$frost$core$String(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Symbol* _1;
frost$core$String** _2;
frost$core$String* _3;
frost$core$Object* _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:594
_1 = ((org$frostlang$frostc$Symbol*) param0);
_2 = &_1->name;
_3 = *_2;
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
return _3;

}
void org$frostlang$frostc$Type$cleanup(org$frostlang$frostc$Type* param0) {

org$frostlang$frostc$Symbol* _1;
org$frostlang$frostc$FixedArray** _3;
org$frostlang$frostc$FixedArray* _4;
frost$core$Object* _5;
frost$core$Weak** _7;
frost$core$Weak* _8;
frost$core$Object* _9;
frost$core$Weak** _11;
frost$core$Weak* _12;
frost$core$Object* _13;
org$frostlang$frostc$MethodRef** _15;
org$frostlang$frostc$MethodRef* _16;
frost$core$Object* _17;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:4
_1 = ((org$frostlang$frostc$Symbol*) param0);
org$frostlang$frostc$Symbol$cleanup(_1);
_3 = &param0->_subtypes;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->genericClassParameter;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->genericMethodParameter;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = &param0->methodRef;
_16 = *_15;
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
return;

}

