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
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/collections/HashSet.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/collections/HashMap.h"
#include "org/frostlang/frostc/Pair.h"
#include "frost/collections/MapView.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit$shim(org$frostlang$frostc$Type* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(p0, ((org$frostlang$frostc$Type*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Type$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$Type$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &org$frostlang$frostc$Type$_frost$core$Equatable, { org$frostlang$frostc$Type$get_hash$R$frost$core$Int} };

static frost$core$String $s1;
org$frostlang$frostc$Type$class_type org$frostlang$frostc$Type$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, (ITable*) &org$frostlang$frostc$Type$_frost$collections$HashKey, { org$frostlang$frostc$Type$get_asString$R$frost$core$String, org$frostlang$frostc$Type$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit, org$frostlang$frostc$Type$get_size$R$frost$core$Int, org$frostlang$frostc$Type$get_hasSubtypes$R$frost$core$Bit, org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT, org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit$shim, org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit, org$frostlang$frostc$Type$get_isBuiltinInt$R$frost$core$Bit, org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit, org$frostlang$frostc$Type$get_isSigned$R$frost$core$Bit, org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit, org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit, org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit, org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit, org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit, org$frostlang$frostc$Type$get_isTuple$R$frost$core$Bit, org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit, org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit, org$frostlang$frostc$Type$get_isNewPointer$R$frost$core$Bit, org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit, org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit, org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit, org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int, org$frostlang$frostc$Type$get_parameterTypes$R$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT, org$frostlang$frostc$Type$parameterType$frost$core$Int$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q, org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type, org$frostlang$frostc$Type$get_hash$R$frost$core$Int} };

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
typedef frost$core$Bit (*$fn257)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn258)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn259)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn260)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn274)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn281)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn288)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn296)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn300)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn305)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn311)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn312)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn313)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn314)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn315)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn333)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn334)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$GT);
typedef frost$core$Bit (*$fn341)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn342)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn343)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn344)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn345)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn365)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn366)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn367)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn368)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn369)(frost$collections$ListView*);
typedef frost$core$Bit (*$fn387)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn388)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn389)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn390)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn391)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn392)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn393)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn394)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn395)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn396)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn397)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn398)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn399)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn400)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn401)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn402)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn403)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn475)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn476)(frost$collections$MapView*);
typedef frost$core$Int (*$fn477)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn478)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn479)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn480)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn481)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn482)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn483)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn484)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn526)(frost$collections$HashKey*);

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
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 6698344523302557533, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 8922589686803027616, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 3838718962482138768, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 3838718962482138768, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s286 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x4e\x65\x77\x50\x6f\x69\x6e\x74\x65\x72", 23, -8918889413604455028, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c", 17, -2500227668252979985, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c", 24, -7689706274330328756, NULL };
static frost$core$String $s304 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s309 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s328 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 95, -6421234203817919051, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s338 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s358 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s359 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x54\x79\x70\x65\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 117, 1927758743463322527, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s364 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -8354441105231428072, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 8922589686803027616, NULL };
static frost$core$String $s441 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x36\x34", 2, 573522890330722151, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 8922589686803027616, NULL };
static frost$core$String $s452 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x36\x34", 2, 573522890330722151, NULL };
static frost$core$String $s456 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s457 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s461 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s462 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s463 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s464 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s465 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s467 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s468 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s469 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s470 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s472 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s474 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 208, 5208730858812988615, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s492 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s493 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s494 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s496 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s499 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s500 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s501 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s502 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s503 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s506 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s507 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s509 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s510 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s511 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s512 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s513 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s516 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s517 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s524 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s525 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x6d\x61\x70\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x74\x79\x70\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 209, 9129659544783396720, NULL };

void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position(void* rawSelf, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

frost$core$Bit _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:91
_1 = (frost$core$Bit) {false};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit(param0, param1, param2, param3, _1);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit(void* rawSelf, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$core$Bit param4) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

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
frost$core$Object* _2;
frost$core$Object* _4;
frost$core$Weak** _6;
frost$core$Weak* _7;
frost$core$Object* _8;
frost$core$Weak** _10;
frost$core$Object* _12;
frost$core$Weak* _15;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Weak** _20;
frost$core$Weak* _21;
frost$core$Object* _22;
frost$core$Weak** _24;
frost$core$Object* _26;
frost$core$Equatable* _28;
frost$core$Int _29;
frost$core$Int* _32;
org$frostlang$frostc$Type$Kind _34;
org$frostlang$frostc$Type$Kind _37;
frost$core$Equatable* _38;
$fn2 _39;
frost$core$Bit _40;
bool _41;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$Equatable* _47;
frost$core$Int _48;
frost$core$Int* _51;
org$frostlang$frostc$Type$Kind _53;
org$frostlang$frostc$Type$Kind _56;
frost$core$Equatable* _57;
$fn3 _58;
frost$core$Bit _59;
bool _60;
frost$core$Object* _61;
frost$core$Object* _63;
frost$core$Equatable* _66;
frost$core$Int _67;
frost$core$Int* _70;
org$frostlang$frostc$Type$Kind _72;
org$frostlang$frostc$Type$Kind _75;
frost$core$Equatable* _76;
$fn4 _77;
frost$core$Bit _78;
bool _79;
frost$core$Object* _80;
frost$core$Object* _82;
frost$core$Equatable* _85;
frost$core$Int _86;
frost$core$Int* _89;
org$frostlang$frostc$Type$Kind _91;
org$frostlang$frostc$Type$Kind _94;
frost$core$Equatable* _95;
$fn5 _96;
frost$core$Bit _97;
bool _98;
frost$core$Object* _99;
frost$core$Object* _101;
frost$core$Equatable* _104;
frost$core$Int _105;
frost$core$Int* _108;
org$frostlang$frostc$Type$Kind _110;
org$frostlang$frostc$Type$Kind _113;
frost$core$Equatable* _114;
$fn6 _115;
frost$core$Bit _116;
bool _117;
frost$core$Object* _118;
frost$core$Object* _120;
frost$core$Equatable* _123;
frost$core$Int _124;
frost$core$Int* _127;
org$frostlang$frostc$Type$Kind _129;
org$frostlang$frostc$Type$Kind _132;
frost$core$Equatable* _133;
$fn7 _134;
frost$core$Bit _135;
bool _136;
frost$core$Object* _137;
frost$core$Object* _139;
frost$core$Int _142;
org$frostlang$frostc$Type$Kind* _146;
org$frostlang$frostc$Symbol* _149;
org$frostlang$frostc$Position* _150;
frost$core$Bit* _153;
frost$core$Object* _156;
org$frostlang$frostc$FixedArray** _158;
org$frostlang$frostc$FixedArray* _159;
frost$core$Object* _160;
org$frostlang$frostc$FixedArray** _162;
org$frostlang$frostc$Symbol* _165;
frost$core$Int _166;
frost$core$Int* _169;
org$frostlang$frostc$Symbol$Kind _171;
org$frostlang$frostc$Symbol$Kind _174;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:43
_1 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_2 = ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_1, _2);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->genericClassParameter;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_10 = &param0->genericClassParameter;
*_10 = _1;
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:46
_15 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_16 = ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_15, _16);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = &param0->genericMethodParameter;
_21 = *_20;
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = &param0->genericMethodParameter;
*_24 = _15;
_26 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_26);
org$frostlang$frostc$Type$Kind$wrapper* $tmp8;
$tmp8 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp8->value = param2;
_28 = ((frost$core$Equatable*) $tmp8);
_29 = (frost$core$Int) {12u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:94:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_32 = &(&local1)->$rawValue;
*_32 = _29;
_34 = *(&local1);
*(&local0) = _34;
_37 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp9;
$tmp9 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp9->value = _37;
_38 = ((frost$core$Equatable*) $tmp9);
ITable* $tmp10 = _28->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp10 = $tmp10->next;
}
_39 = $tmp10->methods[1];
_40 = _39(_28, _38);
_41 = _40.value;
_42 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_44);
if (_41) goto block7; else goto block2;
block7:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp11;
$tmp11 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp11->value = param2;
_47 = ((frost$core$Equatable*) $tmp11);
_48 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:94:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_51 = &(&local3)->$rawValue;
*_51 = _48;
_53 = *(&local3);
*(&local2) = _53;
_56 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp12;
$tmp12 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp12->value = _56;
_57 = ((frost$core$Equatable*) $tmp12);
ITable* $tmp13 = _47->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp13 = $tmp13->next;
}
_58 = $tmp13->methods[1];
_59 = _58(_47, _57);
_60 = _59.value;
_61 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_61);
_63 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_63);
if (_60) goto block6; else goto block2;
block6:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp14;
$tmp14 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp14->value = param2;
_66 = ((frost$core$Equatable*) $tmp14);
_67 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:95:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_70 = &(&local5)->$rawValue;
*_70 = _67;
_72 = *(&local5);
*(&local4) = _72;
_75 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp15;
$tmp15 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp15->value = _75;
_76 = ((frost$core$Equatable*) $tmp15);
ITable* $tmp16 = _66->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp16 = $tmp16->next;
}
_77 = $tmp16->methods[1];
_78 = _77(_66, _76);
_79 = _78.value;
_80 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_80);
_82 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_82);
if (_79) goto block5; else goto block2;
block5:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp17;
$tmp17 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp17->value = param2;
_85 = ((frost$core$Equatable*) $tmp17);
_86 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:95:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_89 = &(&local7)->$rawValue;
*_89 = _86;
_91 = *(&local7);
*(&local6) = _91;
_94 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp18;
$tmp18 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp18->value = _94;
_95 = ((frost$core$Equatable*) $tmp18);
ITable* $tmp19 = _85->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp19 = $tmp19->next;
}
_96 = $tmp19->methods[1];
_97 = _96(_85, _95);
_98 = _97.value;
_99 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_99);
_101 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_101);
if (_98) goto block4; else goto block2;
block4:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp20;
$tmp20 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp20->value = param2;
_104 = ((frost$core$Equatable*) $tmp20);
_105 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:96:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_108 = &(&local9)->$rawValue;
*_108 = _105;
_110 = *(&local9);
*(&local8) = _110;
_113 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp21;
$tmp21 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp21->value = _113;
_114 = ((frost$core$Equatable*) $tmp21);
ITable* $tmp22 = _104->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp22 = $tmp22->next;
}
_115 = $tmp22->methods[1];
_116 = _115(_104, _114);
_117 = _116.value;
_118 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_118);
_120 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_120);
if (_117) goto block3; else goto block2;
block3:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp23;
$tmp23 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp23->value = param2;
_123 = ((frost$core$Equatable*) $tmp23);
_124 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:96:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_127 = &(&local11)->$rawValue;
*_127 = _124;
_129 = *(&local11);
*(&local10) = _129;
_132 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp24;
$tmp24 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp24->value = _132;
_133 = ((frost$core$Equatable*) $tmp24);
ITable* $tmp25 = _123->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp25 = $tmp25->next;
}
_134 = $tmp25->methods[1];
_135 = _134(_123, _133);
_136 = _135.value;
_137 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_137);
_139 = ((frost$core$Object*) _123);
frost$core$Frost$unref$frost$core$Object$Q(_139);
if (_136) goto block1; else goto block2;
block2:;
_142 = (frost$core$Int) {97u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s26, _142, &$s27);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:98
_146 = &param0->typeKind;
*_146 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:99
_149 = ((org$frostlang$frostc$Symbol*) param0);
_150 = &_149->position;
*_150 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:100
_153 = &param0->resolved;
*_153 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:101
_156 = ((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_156);
_158 = &param0->_subtypes;
_159 = *_158;
_160 = ((frost$core$Object*) _159);
frost$core$Frost$unref$frost$core$Object$Q(_160);
_162 = &param0->_subtypes;
*_162 = ((org$frostlang$frostc$FixedArray*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:102
_165 = ((org$frostlang$frostc$Symbol*) param0);
_166 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Type.frost:102:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_169 = &(&local13)->$rawValue;
*_169 = _166;
_171 = *(&local13);
*(&local12) = _171;
_174 = *(&local12);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(_165, _174, param3, param1);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int(void* rawSelf, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, frost$core$Int param3) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

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
frost$core$Object* _2;
frost$core$Object* _4;
frost$core$Weak** _6;
frost$core$Weak* _7;
frost$core$Object* _8;
frost$core$Weak** _10;
frost$core$Object* _12;
frost$core$Weak* _15;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Weak** _20;
frost$core$Weak* _21;
frost$core$Object* _22;
frost$core$Weak** _24;
frost$core$Object* _26;
frost$core$Equatable* _28;
frost$core$Int _29;
frost$core$Int* _32;
org$frostlang$frostc$Type$Kind _34;
org$frostlang$frostc$Type$Kind _37;
frost$core$Equatable* _38;
$fn28 _39;
frost$core$Bit _40;
bool _41;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$Equatable* _47;
frost$core$Int _48;
frost$core$Int* _51;
org$frostlang$frostc$Type$Kind _53;
org$frostlang$frostc$Type$Kind _56;
frost$core$Equatable* _57;
$fn29 _58;
frost$core$Bit _59;
bool _60;
frost$core$Object* _61;
frost$core$Object* _63;
frost$core$Equatable* _66;
frost$core$Int _67;
frost$core$Int* _70;
org$frostlang$frostc$Type$Kind _72;
org$frostlang$frostc$Type$Kind _75;
frost$core$Equatable* _76;
$fn30 _77;
frost$core$Bit _78;
bool _79;
frost$core$Object* _80;
frost$core$Object* _82;
frost$core$Equatable* _85;
frost$core$Int _86;
frost$core$Int* _89;
org$frostlang$frostc$Type$Kind _91;
org$frostlang$frostc$Type$Kind _94;
frost$core$Equatable* _95;
$fn31 _96;
frost$core$Bit _97;
bool _98;
frost$core$Object* _99;
frost$core$Object* _101;
frost$core$Equatable* _104;
frost$core$Int _105;
frost$core$Int* _108;
org$frostlang$frostc$Type$Kind _110;
org$frostlang$frostc$Type$Kind _113;
frost$core$Equatable* _114;
$fn32 _115;
frost$core$Bit _116;
bool _117;
frost$core$Object* _118;
frost$core$Object* _120;
frost$core$Equatable* _123;
frost$core$Int _124;
frost$core$Int* _127;
org$frostlang$frostc$Type$Kind _129;
org$frostlang$frostc$Type$Kind _132;
frost$core$Equatable* _133;
$fn33 _134;
frost$core$Bit _135;
bool _136;
frost$core$Object* _137;
frost$core$Object* _139;
frost$core$Int _142;
frost$core$Bit _146;
bool _149;
bool _150;
frost$core$Bit _151;
bool _153;
frost$core$Int _155;
org$frostlang$frostc$Type$Kind* _159;
org$frostlang$frostc$Symbol* _162;
frost$core$Int _163;
org$frostlang$frostc$Position _164;
org$frostlang$frostc$Position* _165;
frost$core$Bit _168;
frost$core$Bit* _169;
frost$core$Object* _172;
org$frostlang$frostc$FixedArray** _174;
org$frostlang$frostc$FixedArray* _175;
frost$core$Object* _176;
org$frostlang$frostc$FixedArray** _178;
org$frostlang$frostc$Symbol* _181;
frost$core$Int _182;
frost$core$Int* _185;
org$frostlang$frostc$Symbol$Kind _187;
org$frostlang$frostc$Symbol$Kind _190;
org$frostlang$frostc$Symbol* _191;
org$frostlang$frostc$Position* _192;
org$frostlang$frostc$Position _193;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:43
_1 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_2 = ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_1, _2);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->genericClassParameter;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_10 = &param0->genericClassParameter;
*_10 = _1;
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:46
_15 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_16 = ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_15, _16);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = &param0->genericMethodParameter;
_21 = *_20;
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = &param0->genericMethodParameter;
*_24 = _15;
_26 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_26);
org$frostlang$frostc$Type$Kind$wrapper* $tmp34;
$tmp34 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp34->value = param2;
_28 = ((frost$core$Equatable*) $tmp34);
_29 = (frost$core$Int) {12u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:105:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_32 = &(&local1)->$rawValue;
*_32 = _29;
_34 = *(&local1);
*(&local0) = _34;
_37 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp35;
$tmp35 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp35->value = _37;
_38 = ((frost$core$Equatable*) $tmp35);
ITable* $tmp36 = _28->$class->itable;
while ($tmp36->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp36 = $tmp36->next;
}
_39 = $tmp36->methods[1];
_40 = _39(_28, _38);
_41 = _40.value;
_42 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_44);
if (_41) goto block7; else goto block2;
block7:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp37;
$tmp37 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp37->value = param2;
_47 = ((frost$core$Equatable*) $tmp37);
_48 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:105:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_51 = &(&local3)->$rawValue;
*_51 = _48;
_53 = *(&local3);
*(&local2) = _53;
_56 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp38;
$tmp38 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp38->value = _56;
_57 = ((frost$core$Equatable*) $tmp38);
ITable* $tmp39 = _47->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp39 = $tmp39->next;
}
_58 = $tmp39->methods[1];
_59 = _58(_47, _57);
_60 = _59.value;
_61 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_61);
_63 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_63);
if (_60) goto block6; else goto block2;
block6:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp40;
$tmp40 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp40->value = param2;
_66 = ((frost$core$Equatable*) $tmp40);
_67 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:106:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_70 = &(&local5)->$rawValue;
*_70 = _67;
_72 = *(&local5);
*(&local4) = _72;
_75 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp41;
$tmp41 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp41->value = _75;
_76 = ((frost$core$Equatable*) $tmp41);
ITable* $tmp42 = _66->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp42 = $tmp42->next;
}
_77 = $tmp42->methods[1];
_78 = _77(_66, _76);
_79 = _78.value;
_80 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_80);
_82 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_82);
if (_79) goto block5; else goto block2;
block5:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp43;
$tmp43 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp43->value = param2;
_85 = ((frost$core$Equatable*) $tmp43);
_86 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:106:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_89 = &(&local7)->$rawValue;
*_89 = _86;
_91 = *(&local7);
*(&local6) = _91;
_94 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp44;
$tmp44 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp44->value = _94;
_95 = ((frost$core$Equatable*) $tmp44);
ITable* $tmp45 = _85->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp45 = $tmp45->next;
}
_96 = $tmp45->methods[1];
_97 = _96(_85, _95);
_98 = _97.value;
_99 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_99);
_101 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_101);
if (_98) goto block4; else goto block2;
block4:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp46;
$tmp46 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp46->value = param2;
_104 = ((frost$core$Equatable*) $tmp46);
_105 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:107:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_108 = &(&local9)->$rawValue;
*_108 = _105;
_110 = *(&local9);
*(&local8) = _110;
_113 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp47;
$tmp47 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp47->value = _113;
_114 = ((frost$core$Equatable*) $tmp47);
ITable* $tmp48 = _104->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp48 = $tmp48->next;
}
_115 = $tmp48->methods[1];
_116 = _115(_104, _114);
_117 = _116.value;
_118 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_118);
_120 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_120);
if (_117) goto block3; else goto block2;
block3:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp49;
$tmp49 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp49->value = param2;
_123 = ((frost$core$Equatable*) $tmp49);
_124 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:107:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_127 = &(&local11)->$rawValue;
*_127 = _124;
_129 = *(&local11);
*(&local10) = _129;
_132 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp50;
$tmp50 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp50->value = _132;
_133 = ((frost$core$Equatable*) $tmp50);
ITable* $tmp51 = _123->$class->itable;
while ($tmp51->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp51 = $tmp51->next;
}
_134 = $tmp51->methods[1];
_135 = _134(_123, _133);
_136 = _135.value;
_137 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_137);
_139 = ((frost$core$Object*) _123);
frost$core$Frost$unref$frost$core$Object$Q(_139);
if (_136) goto block1; else goto block2;
block2:;
_142 = (frost$core$Int) {108u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s52, _142, &$s53);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:109
_146 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(param1, &$s54);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Type.frost:109:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_149 = _146.value;
_150 = !_149;
_151 = (frost$core$Bit) {_150};
_153 = _151.value;
if (_153) goto block15; else goto block16;
block16:;
_155 = (frost$core$Int) {109u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s55, _155);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:110
_159 = &param0->typeKind;
*_159 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:111
_162 = ((org$frostlang$frostc$Symbol*) param0);
_163 = (frost$core$Int) {18446744073709551615u};
_164 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_163, param3, param3);
_165 = &_162->position;
*_165 = _164;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:112
_168 = (frost$core$Bit) {true};
_169 = &param0->resolved;
*_169 = _168;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:113
_172 = ((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_172);
_174 = &param0->_subtypes;
_175 = *_174;
_176 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_176);
_178 = &param0->_subtypes;
*_178 = ((org$frostlang$frostc$FixedArray*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:114
_181 = ((org$frostlang$frostc$Symbol*) param0);
_182 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Type.frost:114:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_185 = &(&local13)->$rawValue;
*_185 = _182;
_187 = *(&local13);
*(&local12) = _187;
_190 = *(&local12);
_191 = ((org$frostlang$frostc$Symbol*) param0);
_192 = &_191->position;
_193 = *_192;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(_181, _190, _193, param1);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit(void* rawSelf, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$collections$ListView* param4, frost$core$Bit param5) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:118
_1 = (frost$core$Int) {0u};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int(param0, param1, param2, param3, param4, param5, _1);
return;

}
void org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int(void* rawSelf, frost$core$String* param1, org$frostlang$frostc$Type$Kind param2, org$frostlang$frostc$Position param3, frost$collections$ListView* param4, frost$core$Bit param5, frost$core$Int param6) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

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
frost$core$Object* _2;
frost$core$Object* _4;
frost$core$Weak** _6;
frost$core$Weak* _7;
frost$core$Object* _8;
frost$core$Weak** _10;
frost$core$Object* _12;
frost$core$Weak* _15;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Weak** _20;
frost$core$Weak* _21;
frost$core$Object* _22;
frost$core$Weak** _24;
frost$core$Object* _26;
frost$core$Equatable* _28;
frost$core$Int _29;
frost$core$Int* _32;
org$frostlang$frostc$Type$Kind _34;
org$frostlang$frostc$Type$Kind _37;
frost$core$Equatable* _38;
$fn56 _39;
frost$core$Bit _40;
bool _41;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$Equatable* _47;
frost$core$Int _48;
frost$core$Int* _51;
org$frostlang$frostc$Type$Kind _53;
org$frostlang$frostc$Type$Kind _56;
frost$core$Equatable* _57;
$fn57 _58;
frost$core$Bit _59;
bool _60;
frost$core$Object* _61;
frost$core$Object* _63;
frost$core$Int _66;
frost$core$Equatable* _70;
frost$core$Int _71;
frost$core$Int* _74;
org$frostlang$frostc$Type$Kind _76;
org$frostlang$frostc$Type$Kind _79;
frost$core$Equatable* _80;
$fn58 _81;
frost$core$Bit _82;
frost$core$Bit _83;
bool _86;
bool _87;
bool _88;
frost$core$Bit _89;
bool _91;
frost$core$Int _93;
frost$core$String* _94;
frost$core$String* _95;
frost$core$Equatable* _96;
frost$core$Int _97;
frost$core$Int* _100;
org$frostlang$frostc$Type$Kind _102;
org$frostlang$frostc$Type$Kind _105;
frost$core$Equatable* _106;
$fn59 _107;
frost$core$Bit _108;
frost$core$Object* _109;
$fn60 _112;
frost$core$String* _113;
frost$core$String* _114;
frost$core$Object* _115;
frost$core$Object* _117;
frost$core$Object* _119;
frost$core$String* _122;
frost$core$Object* _124;
frost$core$Object* _126;
frost$core$Object* _128;
frost$core$Object* _130;
frost$core$Object* _132;
frost$core$Object* _134;
frost$core$Object* _136;
frost$core$Object* _139;
frost$core$Object* _141;
frost$core$Equatable* _144;
frost$core$Int _145;
frost$core$Int* _148;
org$frostlang$frostc$Type$Kind _150;
org$frostlang$frostc$Type$Kind _153;
frost$core$Equatable* _154;
$fn61 _155;
frost$core$Bit _156;
frost$core$Bit _157;
bool _160;
bool _161;
bool _162;
frost$core$Bit _163;
bool _165;
frost$core$Int _167;
frost$core$String* _168;
frost$core$String* _169;
frost$core$Equatable* _170;
frost$core$Int _171;
frost$core$Int* _174;
org$frostlang$frostc$Type$Kind _176;
org$frostlang$frostc$Type$Kind _179;
frost$core$Equatable* _180;
$fn62 _181;
frost$core$Bit _182;
frost$core$Object* _183;
$fn63 _186;
frost$core$String* _187;
frost$core$String* _188;
frost$core$Object* _189;
frost$core$Object* _191;
frost$core$Object* _193;
frost$core$String* _196;
frost$core$Object* _198;
frost$core$Object* _200;
frost$core$Object* _202;
frost$core$Object* _204;
frost$core$Object* _206;
frost$core$Object* _208;
frost$core$Object* _210;
frost$core$Object* _213;
frost$core$Object* _215;
org$frostlang$frostc$Type$Kind* _218;
org$frostlang$frostc$Symbol* _221;
org$frostlang$frostc$Position* _222;
frost$core$Bit* _225;
frost$core$Int* _228;
org$frostlang$frostc$FixedArray* _231;
org$frostlang$frostc$FixedArray* _233;
frost$core$Object* _234;
org$frostlang$frostc$FixedArray** _236;
org$frostlang$frostc$FixedArray* _237;
frost$core$Object* _238;
org$frostlang$frostc$FixedArray** _240;
frost$core$Object* _242;
org$frostlang$frostc$Symbol* _245;
frost$core$Int _246;
frost$core$Int* _249;
org$frostlang$frostc$Symbol$Kind _251;
org$frostlang$frostc$Symbol$Kind _254;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:43
_1 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_2 = ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_1, _2);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->genericClassParameter;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_10 = &param0->genericClassParameter;
*_10 = _1;
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:46
_15 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_16 = ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_15, _16);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = &param0->genericMethodParameter;
_21 = *_20;
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = &param0->genericMethodParameter;
*_24 = _15;
_26 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_26);
org$frostlang$frostc$Type$Kind$wrapper* $tmp64;
$tmp64 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp64->value = param2;
_28 = ((frost$core$Equatable*) $tmp64);
_29 = (frost$core$Int) {12u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:121:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_32 = &(&local1)->$rawValue;
*_32 = _29;
_34 = *(&local1);
*(&local0) = _34;
_37 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp65;
$tmp65 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp65->value = _37;
_38 = ((frost$core$Equatable*) $tmp65);
ITable* $tmp66 = _28->$class->itable;
while ($tmp66->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp66 = $tmp66->next;
}
_39 = $tmp66->methods[1];
_40 = _39(_28, _38);
_41 = _40.value;
_42 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_44);
if (_41) goto block3; else goto block2;
block3:;
org$frostlang$frostc$Type$Kind$wrapper* $tmp67;
$tmp67 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp67->value = param2;
_47 = ((frost$core$Equatable*) $tmp67);
_48 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:121:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_51 = &(&local3)->$rawValue;
*_51 = _48;
_53 = *(&local3);
*(&local2) = _53;
_56 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp68;
$tmp68 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp68->value = _56;
_57 = ((frost$core$Equatable*) $tmp68);
ITable* $tmp69 = _47->$class->itable;
while ($tmp69->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp69 = $tmp69->next;
}
_58 = $tmp69->methods[1];
_59 = _58(_47, _57);
_60 = _59.value;
_61 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_61);
_63 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_63);
if (_60) goto block1; else goto block2;
block2:;
_66 = (frost$core$Int) {122u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s70, _66, &$s71);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:124
org$frostlang$frostc$Type$Kind$wrapper* $tmp72;
$tmp72 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp72->value = param2;
_70 = ((frost$core$Equatable*) $tmp72);
_71 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:124:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_74 = &(&local5)->$rawValue;
*_74 = _71;
_76 = *(&local5);
*(&local4) = _76;
_79 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp73;
$tmp73 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp73->value = _79;
_80 = ((frost$core$Equatable*) $tmp73);
ITable* $tmp74 = _70->$class->itable;
while ($tmp74->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp74 = $tmp74->next;
}
_81 = $tmp74->methods[0];
_82 = _81(_70, _80);
_83 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(param1, &$s75);
// begin inline call to function frost.core.Bit.=(other:frost.core.Bit):frost.core.Bit from Type.frost:124:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:25
_86 = _82.value;
_87 = _83.value;
_88 = _86 == _87;
_89 = (frost$core$Bit) {_88};
_91 = _89.value;
if (_91) goto block8; else goto block9;
block9:;
_93 = (frost$core$Int) {124u};
_94 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s76, param1);
_95 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_94, &$s77);
org$frostlang$frostc$Type$Kind$wrapper* $tmp78;
$tmp78 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp78->value = param2;
_96 = ((frost$core$Equatable*) $tmp78);
_97 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:125:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_100 = &(&local7)->$rawValue;
*_100 = _97;
_102 = *(&local7);
*(&local6) = _102;
_105 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp79;
$tmp79 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp79->value = _105;
_106 = ((frost$core$Equatable*) $tmp79);
ITable* $tmp80 = _96->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp80 = $tmp80->next;
}
_107 = $tmp80->methods[0];
_108 = _107(_96, _106);
frost$core$Bit$wrapper* $tmp81;
$tmp81 = (frost$core$Bit$wrapper*) frostObjectAlloc(sizeof(frost$core$Bit$wrapper), (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp81->value = _108;
_109 = ((frost$core$Object*) $tmp81);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:125:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_112 = ($fn82) _109->$class->vtable[0];
_113 = _112(_109);
_114 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_95, _113);
_115 = ((frost$core$Object*) _114);
frost$core$Frost$ref$frost$core$Object$Q(_115);
_117 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_117);
_119 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_119);
_122 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_114, &$s83);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s84, _93, _122);
_124 = ((frost$core$Object*) _122);
frost$core$Frost$unref$frost$core$Object$Q(_124);
_126 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_126);
_128 = _109;
frost$core$Frost$unref$frost$core$Object$Q(_128);
_130 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_130);
_132 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_132);
_134 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_134);
_136 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_136);
abort(); // unreachable
block8:;
_139 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_139);
_141 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_141);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:126
org$frostlang$frostc$Type$Kind$wrapper* $tmp85;
$tmp85 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp85->value = param2;
_144 = ((frost$core$Equatable*) $tmp85);
_145 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:126:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_148 = &(&local9)->$rawValue;
*_148 = _145;
_150 = *(&local9);
*(&local8) = _150;
_153 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp86;
$tmp86 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp86->value = _153;
_154 = ((frost$core$Equatable*) $tmp86);
ITable* $tmp87 = _144->$class->itable;
while ($tmp87->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp87 = $tmp87->next;
}
_155 = $tmp87->methods[0];
_156 = _155(_144, _154);
_157 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(param1, &$s88);
// begin inline call to function frost.core.Bit.=(other:frost.core.Bit):frost.core.Bit from Type.frost:126:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:25
_160 = _156.value;
_161 = _157.value;
_162 = _160 == _161;
_163 = (frost$core$Bit) {_162};
_165 = _163.value;
if (_165) goto block14; else goto block15;
block15:;
_167 = (frost$core$Int) {126u};
_168 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s89, param1);
_169 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_168, &$s90);
org$frostlang$frostc$Type$Kind$wrapper* $tmp91;
$tmp91 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp91->value = param2;
_170 = ((frost$core$Equatable*) $tmp91);
_171 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:127:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_174 = &(&local11)->$rawValue;
*_174 = _171;
_176 = *(&local11);
*(&local10) = _176;
_179 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp92;
$tmp92 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp92->value = _179;
_180 = ((frost$core$Equatable*) $tmp92);
ITable* $tmp93 = _170->$class->itable;
while ($tmp93->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp93 = $tmp93->next;
}
_181 = $tmp93->methods[0];
_182 = _181(_170, _180);
frost$core$Bit$wrapper* $tmp94;
$tmp94 = (frost$core$Bit$wrapper*) frostObjectAlloc(sizeof(frost$core$Bit$wrapper), (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp94->value = _182;
_183 = ((frost$core$Object*) $tmp94);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:127:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_186 = ($fn95) _183->$class->vtable[0];
_187 = _186(_183);
_188 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_169, _187);
_189 = ((frost$core$Object*) _188);
frost$core$Frost$ref$frost$core$Object$Q(_189);
_191 = ((frost$core$Object*) _188);
frost$core$Frost$unref$frost$core$Object$Q(_191);
_193 = ((frost$core$Object*) _187);
frost$core$Frost$unref$frost$core$Object$Q(_193);
_196 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_188, &$s96);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s97, _167, _196);
_198 = ((frost$core$Object*) _196);
frost$core$Frost$unref$frost$core$Object$Q(_198);
_200 = ((frost$core$Object*) _188);
frost$core$Frost$unref$frost$core$Object$Q(_200);
_202 = _183;
frost$core$Frost$unref$frost$core$Object$Q(_202);
_204 = ((frost$core$Object*) _180);
frost$core$Frost$unref$frost$core$Object$Q(_204);
_206 = ((frost$core$Object*) _170);
frost$core$Frost$unref$frost$core$Object$Q(_206);
_208 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_208);
_210 = ((frost$core$Object*) _168);
frost$core$Frost$unref$frost$core$Object$Q(_210);
abort(); // unreachable
block14:;
_213 = ((frost$core$Object*) _154);
frost$core$Frost$unref$frost$core$Object$Q(_213);
_215 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_215);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:128
_218 = &param0->typeKind;
*_218 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:129
_221 = ((org$frostlang$frostc$Symbol*) param0);
_222 = &_221->position;
*_222 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:130
_225 = &param0->resolved;
*_225 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:131
_228 = &param0->priority;
*_228 = param6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:132
_231 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(sizeof(org$frostlang$frostc$FixedArray), (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT(_231, param4);
_233 = _231;
_234 = ((frost$core$Object*) _233);
frost$core$Frost$ref$frost$core$Object$Q(_234);
_236 = &param0->_subtypes;
_237 = *_236;
_238 = ((frost$core$Object*) _237);
frost$core$Frost$unref$frost$core$Object$Q(_238);
_240 = &param0->_subtypes;
*_240 = _233;
_242 = ((frost$core$Object*) _231);
frost$core$Frost$unref$frost$core$Object$Q(_242);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:133
_245 = ((org$frostlang$frostc$Symbol*) param0);
_246 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Type.frost:133:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_249 = &(&local13)->$rawValue;
*_249 = _246;
_251 = *(&local13);
*(&local12) = _251;
_254 = *(&local12);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(_245, _254, param3, param1);
return;

}
void org$frostlang$frostc$Type$init$org$frostlang$frostc$ClassDecl$GenericParameter(void* rawSelf, org$frostlang$frostc$ClassDecl$GenericParameter* param1) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Symbol$Kind local2;
org$frostlang$frostc$Symbol$Kind local3;
frost$core$Weak* _1;
frost$core$Object* _2;
frost$core$Object* _4;
frost$core$Weak** _6;
frost$core$Weak* _7;
frost$core$Object* _8;
frost$core$Weak** _10;
frost$core$Object* _12;
frost$core$Weak* _15;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Weak** _20;
frost$core$Weak* _21;
frost$core$Object* _22;
frost$core$Weak** _24;
frost$core$Object* _26;
frost$core$Int _29;
frost$core$Int* _32;
org$frostlang$frostc$Type$Kind _34;
org$frostlang$frostc$Type$Kind _37;
org$frostlang$frostc$Type$Kind* _38;
org$frostlang$frostc$ClassDecl$GenericParameter* _41;
frost$core$Weak* _42;
frost$core$Object* _43;
frost$core$Object* _45;
frost$core$Weak** _47;
frost$core$Weak* _48;
frost$core$Object* _49;
frost$core$Weak** _51;
frost$core$Object* _53;
frost$core$Bit _56;
frost$core$Bit* _57;
frost$core$Object* _60;
org$frostlang$frostc$FixedArray** _62;
org$frostlang$frostc$FixedArray* _63;
frost$core$Object* _64;
org$frostlang$frostc$FixedArray** _66;
org$frostlang$frostc$Symbol* _69;
frost$core$Int _70;
frost$core$Int* _73;
org$frostlang$frostc$Symbol$Kind _75;
org$frostlang$frostc$Symbol$Kind _78;
org$frostlang$frostc$Symbol* _79;
org$frostlang$frostc$Position* _80;
org$frostlang$frostc$Position _81;
frost$core$String** _82;
frost$core$String* _83;
frost$core$Object* _86;
frost$core$String* _89;
org$frostlang$frostc$Symbol* _90;
frost$core$String** _91;
frost$core$String* _92;
frost$core$String* _93;
frost$core$String* _94;
frost$core$Object* _96;
frost$core$Object* _98;
frost$core$Object* _100;
frost$core$Object* _102;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:43
_1 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_2 = ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_1, _2);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->genericClassParameter;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_10 = &param0->genericClassParameter;
*_10 = _1;
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:46
_15 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_16 = ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_15, _16);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = &param0->genericMethodParameter;
_21 = *_20;
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = &param0->genericMethodParameter;
*_24 = _15;
_26 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_26);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:137
_29 = (frost$core$Int) {12u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:137:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_32 = &(&local1)->$rawValue;
*_32 = _29;
_34 = *(&local1);
*(&local0) = _34;
_37 = *(&local0);
_38 = &param0->typeKind;
*_38 = _37;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:138
_41 = param1;
_42 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_43 = ((frost$core$Object*) _41);
frost$core$Weak$init$frost$core$Weak$T$Q(_42, _43);
_45 = ((frost$core$Object*) _42);
frost$core$Frost$ref$frost$core$Object$Q(_45);
_47 = &param0->genericClassParameter;
_48 = *_47;
_49 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_49);
_51 = &param0->genericClassParameter;
*_51 = _42;
_53 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_53);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:139
_56 = (frost$core$Bit) {true};
_57 = &param0->resolved;
*_57 = _56;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:140
_60 = ((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_60);
_62 = &param0->_subtypes;
_63 = *_62;
_64 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_64);
_66 = &param0->_subtypes;
*_66 = ((org$frostlang$frostc$FixedArray*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:141
_69 = ((org$frostlang$frostc$Symbol*) param0);
_70 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Type.frost:141:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_73 = &(&local3)->$rawValue;
*_73 = _70;
_75 = *(&local3);
*(&local2) = _75;
_78 = *(&local2);
_79 = ((org$frostlang$frostc$Symbol*) param0);
_80 = &_79->position;
_81 = *_80;
_82 = &param1->owner;
_83 = *_82;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Type.frost:141:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_86 = ((frost$core$Object*) _83);
frost$core$Frost$ref$frost$core$Object$Q(_86);
_89 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_83, &$s98);
_90 = ((org$frostlang$frostc$Symbol*) param1);
_91 = &_90->name;
_92 = *_91;
_93 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_89, _92);
_94 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_93, &$s99);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(_69, _78, _81, _94);
_96 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_96);
_98 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_98);
_100 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_100);
_102 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_102);
return;

}
void org$frostlang$frostc$Type$init$org$frostlang$frostc$MethodDecl$GenericParameter(void* rawSelf, org$frostlang$frostc$MethodDecl$GenericParameter* param1) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Symbol$Kind local2;
org$frostlang$frostc$Symbol$Kind local3;
frost$core$Weak* _1;
frost$core$Object* _2;
frost$core$Object* _4;
frost$core$Weak** _6;
frost$core$Weak* _7;
frost$core$Object* _8;
frost$core$Weak** _10;
frost$core$Object* _12;
frost$core$Weak* _15;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Weak** _20;
frost$core$Weak* _21;
frost$core$Object* _22;
frost$core$Weak** _24;
frost$core$Object* _26;
frost$core$Int _29;
frost$core$Int* _32;
org$frostlang$frostc$Type$Kind _34;
org$frostlang$frostc$Type$Kind _37;
org$frostlang$frostc$Type$Kind* _38;
org$frostlang$frostc$MethodDecl$GenericParameter* _41;
frost$core$Weak* _42;
frost$core$Object* _43;
frost$core$Object* _45;
frost$core$Weak** _47;
frost$core$Weak* _48;
frost$core$Object* _49;
frost$core$Weak** _51;
frost$core$Object* _53;
frost$core$Bit _56;
frost$core$Bit* _57;
frost$core$Object* _60;
org$frostlang$frostc$FixedArray** _62;
org$frostlang$frostc$FixedArray* _63;
frost$core$Object* _64;
org$frostlang$frostc$FixedArray** _66;
org$frostlang$frostc$Symbol* _69;
frost$core$Int _70;
frost$core$Int* _73;
org$frostlang$frostc$Symbol$Kind _75;
org$frostlang$frostc$Symbol$Kind _78;
org$frostlang$frostc$Symbol* _79;
org$frostlang$frostc$Position* _80;
org$frostlang$frostc$Position _81;
frost$core$String** _82;
frost$core$String* _83;
frost$core$Object* _86;
frost$core$String* _89;
org$frostlang$frostc$Symbol* _90;
frost$core$String** _91;
frost$core$String* _92;
frost$core$String* _93;
frost$core$String* _94;
frost$core$Object* _96;
frost$core$Object* _98;
frost$core$Object* _100;
frost$core$Object* _102;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:43
_1 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_2 = ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_1, _2);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->genericClassParameter;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_10 = &param0->genericClassParameter;
*_10 = _1;
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:46
_15 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_16 = ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_15, _16);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = &param0->genericMethodParameter;
_21 = *_20;
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = &param0->genericMethodParameter;
*_24 = _15;
_26 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_26);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:145
_29 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:145:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_32 = &(&local1)->$rawValue;
*_32 = _29;
_34 = *(&local1);
*(&local0) = _34;
_37 = *(&local0);
_38 = &param0->typeKind;
*_38 = _37;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:146
_41 = param1;
_42 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_43 = ((frost$core$Object*) _41);
frost$core$Weak$init$frost$core$Weak$T$Q(_42, _43);
_45 = ((frost$core$Object*) _42);
frost$core$Frost$ref$frost$core$Object$Q(_45);
_47 = &param0->genericMethodParameter;
_48 = *_47;
_49 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_49);
_51 = &param0->genericMethodParameter;
*_51 = _42;
_53 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_53);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:147
_56 = (frost$core$Bit) {true};
_57 = &param0->resolved;
*_57 = _56;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:148
_60 = ((frost$core$Object*) ((org$frostlang$frostc$FixedArray*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_60);
_62 = &param0->_subtypes;
_63 = *_62;
_64 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_64);
_66 = &param0->_subtypes;
*_66 = ((org$frostlang$frostc$FixedArray*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:149
_69 = ((org$frostlang$frostc$Symbol*) param0);
_70 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Type.frost:149:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_73 = &(&local3)->$rawValue;
*_73 = _70;
_75 = *(&local3);
*(&local2) = _75;
_78 = *(&local2);
_79 = ((org$frostlang$frostc$Symbol*) param0);
_80 = &_79->position;
_81 = *_80;
_82 = &param1->owner;
_83 = *_82;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Type.frost:149:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_86 = ((frost$core$Object*) _83);
frost$core$Frost$ref$frost$core$Object$Q(_86);
_89 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_83, &$s100);
_90 = ((org$frostlang$frostc$Symbol*) param1);
_91 = &_90->name;
_92 = *_91;
_93 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_89, _92);
_94 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_93, &$s101);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(_69, _78, _81, _94);
_96 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_96);
_98 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_98);
_100 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_100);
_102 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_102);
return;

}
void org$frostlang$frostc$Type$init$org$frostlang$frostc$MethodRef(void* rawSelf, org$frostlang$frostc$MethodRef* param1) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

org$frostlang$frostc$Symbol$Kind local0;
org$frostlang$frostc$Symbol$Kind local1;
frost$core$Weak* _1;
frost$core$Object* _2;
frost$core$Object* _4;
frost$core$Weak** _6;
frost$core$Weak* _7;
frost$core$Object* _8;
frost$core$Weak** _10;
frost$core$Object* _12;
frost$core$Weak* _15;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Weak** _20;
frost$core$Weak* _21;
frost$core$Object* _22;
frost$core$Weak** _24;
frost$core$Object* _26;
org$frostlang$frostc$Type** _29;
org$frostlang$frostc$Type* _30;
org$frostlang$frostc$Type$Kind* _31;
org$frostlang$frostc$Type$Kind _32;
org$frostlang$frostc$Type$Kind* _33;
org$frostlang$frostc$Type** _36;
org$frostlang$frostc$Type* _37;
org$frostlang$frostc$FixedArray** _40;
org$frostlang$frostc$FixedArray* _41;
bool _42;
frost$core$Bit _43;
bool _44;
frost$core$Int _46;
org$frostlang$frostc$FixedArray* _49;
frost$core$Object* _50;
org$frostlang$frostc$FixedArray* _53;
frost$core$Object* _54;
org$frostlang$frostc$FixedArray** _56;
org$frostlang$frostc$FixedArray* _57;
frost$core$Object* _58;
org$frostlang$frostc$FixedArray** _60;
frost$core$Object* _62;
org$frostlang$frostc$Type** _65;
org$frostlang$frostc$Type* _66;
frost$core$Bit* _67;
frost$core$Bit _68;
frost$core$Bit* _69;
org$frostlang$frostc$MethodRef* _72;
frost$core$Object* _73;
org$frostlang$frostc$MethodRef** _75;
org$frostlang$frostc$MethodRef* _76;
frost$core$Object* _77;
org$frostlang$frostc$MethodRef** _79;
org$frostlang$frostc$Symbol* _82;
frost$core$Int _83;
frost$core$Int* _86;
org$frostlang$frostc$Symbol$Kind _88;
org$frostlang$frostc$Symbol$Kind _91;
org$frostlang$frostc$Type** _92;
org$frostlang$frostc$Type* _93;
org$frostlang$frostc$Symbol* _94;
org$frostlang$frostc$Position* _95;
org$frostlang$frostc$Position _96;
org$frostlang$frostc$Type** _97;
org$frostlang$frostc$Type* _98;
org$frostlang$frostc$Symbol* _99;
frost$core$String** _100;
frost$core$String* _101;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:43
_1 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_2 = ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_1, _2);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->genericClassParameter;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_10 = &param0->genericClassParameter;
*_10 = _1;
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:46
_15 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_16 = ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_15, _16);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = &param0->genericMethodParameter;
_21 = *_20;
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = &param0->genericMethodParameter;
*_24 = _15;
_26 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_26);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:153
_29 = &param1->effectiveType;
_30 = *_29;
_31 = &_30->typeKind;
_32 = *_31;
_33 = &param0->typeKind;
*_33 = _32;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:154
_36 = &param1->effectiveType;
_37 = *_36;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:154:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_40 = &_37->_subtypes;
_41 = *_40;
_42 = _41 != NULL;
_43 = (frost$core$Bit) {_42};
_44 = _43.value;
if (_44) goto block2; else goto block3;
block3:;
_46 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s102, _46, &$s103);
abort(); // unreachable
block2:;
_49 = _41;
_50 = ((frost$core$Object*) _49);
frost$core$Frost$ref$frost$core$Object$Q(_50);
_53 = _49;
_54 = ((frost$core$Object*) _53);
frost$core$Frost$ref$frost$core$Object$Q(_54);
_56 = &param0->_subtypes;
_57 = *_56;
_58 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_58);
_60 = &param0->_subtypes;
*_60 = _53;
_62 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_62);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:155
_65 = &param1->effectiveType;
_66 = *_65;
_67 = &_66->resolved;
_68 = *_67;
_69 = &param0->resolved;
*_69 = _68;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:156
_72 = param1;
_73 = ((frost$core$Object*) _72);
frost$core$Frost$ref$frost$core$Object$Q(_73);
_75 = &param0->methodRef;
_76 = *_75;
_77 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_77);
_79 = &param0->methodRef;
*_79 = _72;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:157
_82 = ((org$frostlang$frostc$Symbol*) param0);
_83 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Type.frost:157:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_86 = &(&local1)->$rawValue;
*_86 = _83;
_88 = *(&local1);
*(&local0) = _88;
_91 = *(&local0);
_92 = &param1->effectiveType;
_93 = *_92;
_94 = ((org$frostlang$frostc$Symbol*) _93);
_95 = &_94->position;
_96 = *_95;
_97 = &param1->effectiveType;
_98 = *_97;
_99 = ((org$frostlang$frostc$Symbol*) _98);
_100 = &_99->name;
_101 = *_100;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(_82, _91, _96, _101);
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
$fn105 _41;
frost$collections$Iterator* _42;
$fn106 _44;
frost$core$Bit _45;
bool _46;
$fn107 _49;
frost$core$Object* _50;
org$frostlang$frostc$Type* _51;
frost$core$Object* _52;
org$frostlang$frostc$Type* _54;
frost$core$Object* _55;
frost$core$Bit _59;
bool _60;
org$frostlang$frostc$Type* _62;
frost$core$Bit* _63;
frost$core$Bit _64;
frost$core$Bit _69;
frost$core$MutableString* _72;
frost$core$String* _73;
frost$core$MutableString* _76;
org$frostlang$frostc$Type* _77;
org$frostlang$frostc$Symbol* _78;
frost$core$String** _79;
frost$core$String* _80;
frost$core$Object* _83;
frost$core$String* _85;
frost$core$Object* _86;
frost$core$Object* _89;
org$frostlang$frostc$Type* _91;
frost$core$Object* _92;
frost$core$Object* _96;
frost$core$MutableString* _99;
org$frostlang$frostc$Type* _102;
frost$core$MutableString* _103;
frost$core$String* _104;
frost$core$Int _105;
frost$core$Int* _108;
org$frostlang$frostc$Type$Kind _110;
org$frostlang$frostc$Type$Kind _113;
frost$core$Int _114;
$fn108 _115;
frost$core$Object* _116;
org$frostlang$frostc$Type* _117;
org$frostlang$frostc$Symbol* _118;
org$frostlang$frostc$Position* _119;
org$frostlang$frostc$Position _120;
frost$core$Bit _121;
frost$core$Object* _123;
frost$core$Object* _125;
frost$core$Object* _127;
frost$core$Object* _129;
frost$core$String* _131;
frost$core$Object* _132;
frost$core$MutableString* _135;
frost$core$Object* _136;
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
_10 = (frost$core$Int) {162u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s110, _10, &$s111);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:163
_14 = (frost$core$Bit) {true};
*(&local0) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:164
_17 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:165
_29 = *(&local1);
frost$core$MutableString$append$frost$core$String(_29, &$s112);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:166
*(&local2) = ((frost$core$String*) NULL);
_33 = ((frost$core$Object*) &$s113);
frost$core$Frost$ref$frost$core$Object$Q(_33);
_35 = *(&local2);
_36 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_36);
*(&local2) = &$s114;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:167
_40 = ((frost$collections$Iterable*) param0);
ITable* $tmp115 = _40->$class->itable;
while ($tmp115->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp115 = $tmp115->next;
}
_41 = $tmp115->methods[0];
_42 = _41(_40);
goto block3;
block3:;
ITable* $tmp116 = _42->$class->itable;
while ($tmp116->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp116 = $tmp116->next;
}
_44 = $tmp116->methods[0];
_45 = _44(_42);
_46 = _45.value;
if (_46) goto block5; else goto block4;
block4:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp117 = _42->$class->itable;
while ($tmp117->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp117 = $tmp117->next;
}
_49 = $tmp117->methods[1];
_50 = _49(_42);
_51 = ((org$frostlang$frostc$Type*) _50);
_52 = ((frost$core$Object*) _51);
frost$core$Frost$ref$frost$core$Object$Q(_52);
_54 = *(&local3);
_55 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_55);
*(&local3) = _51;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:168
_59 = *(&local0);
_60 = _59.value;
if (_60) goto block6; else goto block7;
block6:;
_62 = *(&local3);
_63 = &_62->resolved;
_64 = *_63;
*(&local4) = _64;
goto block8;
block7:;
*(&local4) = _59;
goto block8;
block8:;
_69 = *(&local4);
*(&local0) = _69;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:169
_72 = *(&local1);
_73 = *(&local2);
frost$core$MutableString$append$frost$core$String(_72, _73);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:170
_76 = *(&local1);
_77 = *(&local3);
_78 = ((org$frostlang$frostc$Symbol*) _77);
_79 = &_78->name;
_80 = *_79;
frost$core$MutableString$append$frost$core$String(_76, _80);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:171
_83 = ((frost$core$Object*) &$s118);
frost$core$Frost$ref$frost$core$Object$Q(_83);
_85 = *(&local2);
_86 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_86);
*(&local2) = &$s119;
_89 = _50;
frost$core$Frost$unref$frost$core$Object$Q(_89);
_91 = *(&local3);
_92 = ((frost$core$Object*) _91);
frost$core$Frost$unref$frost$core$Object$Q(_92);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block3;
block5:;
_96 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_96);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:173
_99 = *(&local1);
frost$core$MutableString$append$frost$core$String(_99, &$s120);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:174
_102 = (org$frostlang$frostc$Type*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type), (frost$core$Class*) &org$frostlang$frostc$Type$class);
_103 = *(&local1);
_104 = frost$core$MutableString$finish$R$frost$core$String(_103);
_105 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:174:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_108 = &(&local6)->$rawValue;
*_108 = _105;
_110 = *(&local6);
*(&local5) = _110;
_113 = *(&local5);
_114 = (frost$core$Int) {0u};
ITable* $tmp121 = param0->$class->itable;
while ($tmp121->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp121 = $tmp121->next;
}
_115 = $tmp121->methods[0];
_116 = _115(param0, _114);
_117 = ((org$frostlang$frostc$Type*) _116);
_118 = ((org$frostlang$frostc$Symbol*) _117);
_119 = &_118->position;
_120 = *_119;
_121 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit(_102, _104, _113, _120, param0, _121);
_123 = ((frost$core$Object*) _102);
frost$core$Frost$ref$frost$core$Object$Q(_123);
_125 = _116;
frost$core$Frost$unref$frost$core$Object$Q(_125);
_127 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_127);
_129 = ((frost$core$Object*) _102);
frost$core$Frost$unref$frost$core$Object$Q(_129);
_131 = *(&local2);
_132 = ((frost$core$Object*) _131);
frost$core$Frost$unref$frost$core$Object$Q(_132);
*(&local2) = ((frost$core$String*) NULL);
_135 = *(&local1);
_136 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_136);
*(&local1) = ((frost$core$MutableString*) NULL);
return _102;

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
$fn122 _35;
frost$collections$Iterator* _36;
$fn123 _38;
frost$core$Bit _39;
bool _40;
$fn124 _43;
frost$core$Object* _44;
org$frostlang$frostc$Type* _45;
frost$core$Object* _46;
org$frostlang$frostc$Type* _48;
frost$core$Object* _49;
frost$core$Bit _53;
bool _54;
org$frostlang$frostc$Type* _56;
frost$core$Bit* _57;
frost$core$Bit _58;
frost$core$Bit _63;
frost$core$MutableString* _66;
frost$core$String* _67;
frost$core$MutableString* _70;
org$frostlang$frostc$Type* _71;
org$frostlang$frostc$Symbol* _72;
frost$core$String** _73;
frost$core$String* _74;
frost$core$Object* _77;
frost$core$String* _79;
frost$core$Object* _80;
frost$core$Object* _83;
org$frostlang$frostc$Type* _85;
frost$core$Object* _86;
frost$core$Object* _90;
frost$core$MutableString* _93;
frost$collections$Array* _96;
frost$core$Object* _99;
frost$collections$Array* _101;
frost$core$Object* _102;
frost$core$Object* _105;
frost$collections$Array* _108;
frost$core$Object* _109;
frost$collections$Array* _112;
frost$collections$CollectionView* _113;
org$frostlang$frostc$Type* _116;
frost$core$MutableString* _117;
frost$core$String* _118;
frost$core$Int _119;
frost$core$Int* _122;
org$frostlang$frostc$Type$Kind _124;
org$frostlang$frostc$Type$Kind _127;
org$frostlang$frostc$Symbol* _128;
org$frostlang$frostc$Position* _129;
org$frostlang$frostc$Position _130;
frost$collections$Array* _131;
frost$collections$ListView* _132;
frost$core$Bit _133;
frost$core$Object* _135;
frost$core$Object* _137;
frost$core$Object* _139;
frost$collections$Array* _141;
frost$core$Object* _142;
frost$core$String* _145;
frost$core$Object* _146;
frost$core$MutableString* _149;
frost$core$Object* _150;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:179
_1 = &param0->resolved;
_2 = *_1;
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:180
_5 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:181
_17 = *(&local1);
_18 = ((org$frostlang$frostc$Symbol*) param0);
_19 = &_18->name;
_20 = *_19;
frost$core$MutableString$append$frost$core$String(_17, _20);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:182
_23 = *(&local1);
frost$core$MutableString$append$frost$core$String(_23, &$s125);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:183
*(&local2) = ((frost$core$String*) NULL);
_27 = ((frost$core$Object*) &$s126);
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = *(&local2);
_30 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_30);
*(&local2) = &$s127;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:184
_34 = ((frost$collections$Iterable*) param1);
ITable* $tmp128 = _34->$class->itable;
while ($tmp128->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp128 = $tmp128->next;
}
_35 = $tmp128->methods[0];
_36 = _35(_34);
goto block1;
block1:;
ITable* $tmp129 = _36->$class->itable;
while ($tmp129->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp129 = $tmp129->next;
}
_38 = $tmp129->methods[0];
_39 = _38(_36);
_40 = _39.value;
if (_40) goto block3; else goto block2;
block2:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp130 = _36->$class->itable;
while ($tmp130->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp130 = $tmp130->next;
}
_43 = $tmp130->methods[1];
_44 = _43(_36);
_45 = ((org$frostlang$frostc$Type*) _44);
_46 = ((frost$core$Object*) _45);
frost$core$Frost$ref$frost$core$Object$Q(_46);
_48 = *(&local3);
_49 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_49);
*(&local3) = _45;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:185
_53 = *(&local0);
_54 = _53.value;
if (_54) goto block4; else goto block5;
block4:;
_56 = *(&local3);
_57 = &_56->resolved;
_58 = *_57;
*(&local4) = _58;
goto block6;
block5:;
*(&local4) = _53;
goto block6;
block6:;
_63 = *(&local4);
*(&local0) = _63;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:186
_66 = *(&local1);
_67 = *(&local2);
frost$core$MutableString$append$frost$core$String(_66, _67);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:187
_70 = *(&local1);
_71 = *(&local3);
_72 = ((org$frostlang$frostc$Symbol*) _71);
_73 = &_72->name;
_74 = *_73;
frost$core$MutableString$append$frost$core$String(_70, _74);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:188
_77 = ((frost$core$Object*) &$s131);
frost$core$Frost$ref$frost$core$Object$Q(_77);
_79 = *(&local2);
_80 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_80);
*(&local2) = &$s132;
_83 = _44;
frost$core$Frost$unref$frost$core$Object$Q(_83);
_85 = *(&local3);
_86 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_86);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
_90 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_90);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:190
_93 = *(&local1);
frost$core$MutableString$append$frost$core$String(_93, &$s133);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:191
_96 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_96);
*(&local5) = ((frost$collections$Array*) NULL);
_99 = ((frost$core$Object*) _96);
frost$core$Frost$ref$frost$core$Object$Q(_99);
_101 = *(&local5);
_102 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_102);
*(&local5) = _96;
_105 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_105);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:192
_108 = *(&local5);
_109 = ((frost$core$Object*) param0);
frost$collections$Array$add$frost$collections$Array$T(_108, _109);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:193
_112 = *(&local5);
_113 = ((frost$collections$CollectionView*) param1);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_112, _113);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:194
_116 = (org$frostlang$frostc$Type*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type), (frost$core$Class*) &org$frostlang$frostc$Type$class);
_117 = *(&local1);
_118 = frost$core$MutableString$finish$R$frost$core$String(_117);
_119 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:194:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_122 = &(&local7)->$rawValue;
*_122 = _119;
_124 = *(&local7);
*(&local6) = _124;
_127 = *(&local6);
_128 = ((org$frostlang$frostc$Symbol*) param0);
_129 = &_128->position;
_130 = *_129;
_131 = *(&local5);
_132 = ((frost$collections$ListView*) _131);
_133 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit(_116, _118, _127, _130, _132, _133);
_135 = ((frost$core$Object*) _116);
frost$core$Frost$ref$frost$core$Object$Q(_135);
_137 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_137);
_139 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_139);
_141 = *(&local5);
_142 = ((frost$core$Object*) _141);
frost$core$Frost$unref$frost$core$Object$Q(_142);
*(&local5) = ((frost$collections$Array*) NULL);
_145 = *(&local2);
_146 = ((frost$core$Object*) _145);
frost$core$Frost$unref$frost$core$Object$Q(_146);
*(&local2) = ((frost$core$String*) NULL);
_149 = *(&local1);
_150 = ((frost$core$Object*) _149);
frost$core$Frost$unref$frost$core$Object$Q(_150);
*(&local1) = ((frost$core$MutableString*) NULL);
return _116;

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
frost$core$Object* _20;
frost$collections$Array* _22;
frost$core$Object* _23;
frost$core$Object* _26;
frost$core$Object* _30;
frost$core$String* _32;
frost$core$Object* _33;
frost$collections$Iterable* _37;
$fn134 _38;
frost$collections$Iterator* _39;
$fn135 _41;
frost$core$Bit _42;
bool _43;
$fn136 _46;
frost$core$Object* _47;
org$frostlang$frostc$Type* _48;
frost$core$Object* _49;
org$frostlang$frostc$Type* _51;
frost$core$Object* _52;
frost$collections$Array* _56;
org$frostlang$frostc$Type* _57;
frost$core$Object* _58;
frost$core$Bit _61;
bool _62;
org$frostlang$frostc$Type* _64;
frost$core$Bit* _65;
frost$core$Bit _66;
frost$core$Bit _71;
frost$core$MutableString* _74;
frost$core$String* _75;
frost$core$MutableString* _78;
org$frostlang$frostc$Type* _79;
org$frostlang$frostc$Symbol* _80;
frost$core$String** _81;
frost$core$String* _82;
frost$core$Object* _85;
frost$core$String* _87;
frost$core$Object* _88;
frost$core$Object* _91;
org$frostlang$frostc$Type* _93;
frost$core$Object* _94;
frost$core$Object* _98;
frost$core$Int _101;
frost$core$Int _102;
int64_t _105;
int64_t _106;
bool _107;
frost$core$Bit _108;
bool _110;
frost$core$MutableString* _113;
frost$core$Int _116;
int64_t _119;
int64_t _120;
bool _121;
frost$core$Bit _122;
bool _124;
frost$core$MutableString* _127;
frost$core$Int _130;
int64_t _133;
int64_t _134;
bool _135;
frost$core$Bit _136;
bool _138;
frost$core$MutableString* _141;
frost$core$Int _144;
int64_t _147;
int64_t _148;
bool _149;
frost$core$Bit _150;
bool _152;
frost$core$MutableString* _155;
frost$core$Int _159;
frost$collections$Array* _163;
frost$core$Object* _164;
frost$core$Equatable* _167;
org$frostlang$frostc$Type** _168;
org$frostlang$frostc$Type* _169;
frost$core$Equatable* _170;
$fn137 _171;
frost$core$Bit _172;
bool _173;
frost$core$MutableString* _176;
org$frostlang$frostc$Symbol* _177;
frost$core$String** _178;
frost$core$String* _179;
frost$core$MutableString* _183;
org$frostlang$frostc$Type* _186;
frost$core$MutableString* _187;
frost$core$String* _188;
frost$collections$Array* _189;
org$frostlang$frostc$FixedArray* _190;
frost$collections$ListView* _191;
frost$core$Bit _192;
frost$core$Object* _194;
frost$core$Object* _196;
frost$core$Object* _198;
frost$core$Object* _200;
frost$core$String* _202;
frost$core$Object* _203;
frost$collections$Array* _206;
frost$core$Object* _207;
frost$core$MutableString* _210;
frost$core$Object* _211;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:200
_1 = &param4->resolved;
_2 = *_1;
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:201
_5 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:202
_17 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_17);
*(&local2) = ((frost$collections$Array*) NULL);
_20 = ((frost$core$Object*) _17);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = *(&local2);
_23 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_23);
*(&local2) = _17;
_26 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_26);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:203
*(&local3) = ((frost$core$String*) NULL);
_30 = ((frost$core$Object*) &$s139);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = *(&local3);
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
*(&local3) = &$s140;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:204
_37 = ((frost$collections$Iterable*) param3);
ITable* $tmp141 = _37->$class->itable;
while ($tmp141->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp141 = $tmp141->next;
}
_38 = $tmp141->methods[0];
_39 = _38(_37);
goto block1;
block1:;
ITable* $tmp142 = _39->$class->itable;
while ($tmp142->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp142 = $tmp142->next;
}
_41 = $tmp142->methods[0];
_42 = _41(_39);
_43 = _42.value;
if (_43) goto block3; else goto block2;
block2:;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp143 = _39->$class->itable;
while ($tmp143->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp143 = $tmp143->next;
}
_46 = $tmp143->methods[1];
_47 = _46(_39);
_48 = ((org$frostlang$frostc$Type*) _47);
_49 = ((frost$core$Object*) _48);
frost$core$Frost$ref$frost$core$Object$Q(_49);
_51 = *(&local4);
_52 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_52);
*(&local4) = _48;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:205
_56 = *(&local2);
_57 = *(&local4);
_58 = ((frost$core$Object*) _57);
frost$collections$Array$add$frost$collections$Array$T(_56, _58);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:206
_61 = *(&local0);
_62 = _61.value;
if (_62) goto block4; else goto block5;
block4:;
_64 = *(&local4);
_65 = &_64->resolved;
_66 = *_65;
*(&local5) = _66;
goto block6;
block5:;
*(&local5) = _61;
goto block6;
block6:;
_71 = *(&local5);
*(&local0) = _71;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:207
_74 = *(&local1);
_75 = *(&local3);
frost$core$MutableString$append$frost$core$String(_74, _75);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:208
_78 = *(&local1);
_79 = *(&local4);
_80 = ((org$frostlang$frostc$Symbol*) _79);
_81 = &_80->name;
_82 = *_81;
frost$core$MutableString$append$frost$core$String(_78, _82);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:209
_85 = ((frost$core$Object*) &$s144);
frost$core$Frost$ref$frost$core$Object$Q(_85);
_87 = *(&local3);
_88 = ((frost$core$Object*) _87);
frost$core$Frost$unref$frost$core$Object$Q(_88);
*(&local3) = &$s145;
_91 = _47;
frost$core$Frost$unref$frost$core$Object$Q(_91);
_93 = *(&local4);
_94 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_94);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
_98 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_98);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:211
_101 = param2.$rawValue;
_102 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:212:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_105 = _101.value;
_106 = _102.value;
_107 = _105 == _106;
_108 = (frost$core$Bit) {_107};
_110 = _108.value;
if (_110) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:213
_113 = *(&local1);
frost$core$MutableString$append$frost$core$String(_113, &$s146);
goto block7;
block9:;
_116 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:215:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_119 = _101.value;
_120 = _116.value;
_121 = _119 == _120;
_122 = (frost$core$Bit) {_121};
_124 = _122.value;
if (_124) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:216
_127 = *(&local1);
frost$core$MutableString$append$frost$core$String(_127, &$s147);
goto block7;
block12:;
_130 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:218:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_133 = _101.value;
_134 = _130.value;
_135 = _133 == _134;
_136 = (frost$core$Bit) {_135};
_138 = _136.value;
if (_138) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:219
_141 = *(&local1);
frost$core$MutableString$append$frost$core$String(_141, &$s148);
goto block7;
block15:;
_144 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:221:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_147 = _101.value;
_148 = _144.value;
_149 = _147 == _148;
_150 = (frost$core$Bit) {_149};
_152 = _150.value;
if (_152) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:222
_155 = *(&local1);
frost$core$MutableString$append$frost$core$String(_155, &$s149);
goto block7;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:225
_159 = (frost$core$Int) {225u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s150, _159);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:228
_163 = *(&local2);
_164 = ((frost$core$Object*) param4);
frost$collections$Array$add$frost$collections$Array$T(_163, _164);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:229
_167 = ((frost$core$Equatable*) param4);
_168 = &param0->VOID_TYPE;
_169 = *_168;
_170 = ((frost$core$Equatable*) _169);
ITable* $tmp151 = _167->$class->itable;
while ($tmp151->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp151 = $tmp151->next;
}
_171 = $tmp151->methods[1];
_172 = _171(_167, _170);
_173 = _172.value;
if (_173) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:230
_176 = *(&local1);
_177 = ((org$frostlang$frostc$Symbol*) param4);
_178 = &_177->name;
_179 = *_178;
frost$core$MutableString$append$frost$core$String(_176, _179);
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:232
_183 = *(&local1);
frost$core$MutableString$append$frost$core$String(_183, &$s152);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:233
_186 = (org$frostlang$frostc$Type*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type), (frost$core$Class*) &org$frostlang$frostc$Type$class);
_187 = *(&local1);
_188 = frost$core$MutableString$finish$R$frost$core$String(_187);
_189 = *(&local2);
_190 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT(_189);
_191 = ((frost$collections$ListView*) _190);
_192 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit$frost$core$Int(_186, _188, param2, param1, _191, _192, param5);
_194 = ((frost$core$Object*) _186);
frost$core$Frost$ref$frost$core$Object$Q(_194);
_196 = ((frost$core$Object*) _190);
frost$core$Frost$unref$frost$core$Object$Q(_196);
_198 = ((frost$core$Object*) _188);
frost$core$Frost$unref$frost$core$Object$Q(_198);
_200 = ((frost$core$Object*) _186);
frost$core$Frost$unref$frost$core$Object$Q(_200);
_202 = *(&local3);
_203 = ((frost$core$Object*) _202);
frost$core$Frost$unref$frost$core$Object$Q(_203);
*(&local3) = ((frost$core$String*) NULL);
_206 = *(&local2);
_207 = ((frost$core$Object*) _206);
frost$core$Frost$unref$frost$core$Object$Q(_207);
*(&local2) = ((frost$collections$Array*) NULL);
_210 = *(&local1);
_211 = ((frost$core$Object*) _210);
frost$core$Frost$unref$frost$core$Object$Q(_211);
*(&local1) = ((frost$core$MutableString*) NULL);
return _186;

}
frost$core$Int org$frostlang$frostc$Type$get_size$R$frost$core$Int(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

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
frost$core$Int _4;
frost$core$Int* _7;
org$frostlang$frostc$Type$Kind _9;
org$frostlang$frostc$Type$Kind _12;
frost$core$Equatable* _13;
$fn153 _14;
frost$core$Bit _15;
bool _16;
org$frostlang$frostc$Type$Kind* _20;
org$frostlang$frostc$Type$Kind _21;
frost$core$Equatable* _22;
frost$core$Int _23;
frost$core$Int* _26;
org$frostlang$frostc$Type$Kind _28;
org$frostlang$frostc$Type$Kind _31;
frost$core$Equatable* _32;
$fn154 _33;
frost$core$Bit _34;
frost$core$Object* _35;
frost$core$Object* _37;
frost$core$Bit _41;
bool _42;
org$frostlang$frostc$Type$Kind* _46;
org$frostlang$frostc$Type$Kind _47;
frost$core$Equatable* _48;
frost$core$Int _49;
frost$core$Int* _52;
org$frostlang$frostc$Type$Kind _54;
org$frostlang$frostc$Type$Kind _57;
frost$core$Equatable* _58;
$fn155 _59;
frost$core$Bit _60;
frost$core$Object* _61;
frost$core$Object* _63;
frost$core$Bit _67;
bool _68;
frost$core$Int _70;
frost$core$Object* _71;
$fn156 _74;
frost$core$String* _75;
frost$core$String* _76;
frost$core$Object* _77;
frost$core$Object* _79;
frost$core$Object* _81;
frost$core$String* _84;
frost$core$Object* _86;
frost$core$Object* _88;
frost$core$Object* _91;
frost$core$Object* _93;
org$frostlang$frostc$Symbol* _96;
org$frostlang$frostc$Position* _97;
org$frostlang$frostc$Position _98;
frost$core$Int _99;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:238
_1 = &param0->typeKind;
_2 = *_1;
org$frostlang$frostc$Type$Kind$wrapper* $tmp157;
$tmp157 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp157->value = _2;
_3 = ((frost$core$Equatable*) $tmp157);
_4 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:238:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_7 = &(&local3)->$rawValue;
*_7 = _4;
_9 = *(&local3);
*(&local2) = _9;
_12 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp158;
$tmp158 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp158->value = _12;
_13 = ((frost$core$Equatable*) $tmp158);
ITable* $tmp159 = _3->$class->itable;
while ($tmp159->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp159 = $tmp159->next;
}
_14 = $tmp159->methods[0];
_15 = _14(_3, _13);
_16 = _15.value;
if (_16) goto block2; else goto block3;
block2:;
*(&local1) = _15;
goto block4;
block3:;
_20 = &param0->typeKind;
_21 = *_20;
org$frostlang$frostc$Type$Kind$wrapper* $tmp160;
$tmp160 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp160->value = _21;
_22 = ((frost$core$Equatable*) $tmp160);
_23 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:238:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_26 = &(&local5)->$rawValue;
*_26 = _23;
_28 = *(&local5);
*(&local4) = _28;
_31 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp161;
$tmp161 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp161->value = _31;
_32 = ((frost$core$Equatable*) $tmp161);
ITable* $tmp162 = _22->$class->itable;
while ($tmp162->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp162 = $tmp162->next;
}
_33 = $tmp162->methods[0];
_34 = _33(_22, _32);
_35 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_35);
_37 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_37);
*(&local1) = _34;
goto block4;
block4:;
_41 = *(&local1);
_42 = _41.value;
if (_42) goto block6; else goto block7;
block6:;
*(&local0) = _41;
goto block8;
block7:;
_46 = &param0->typeKind;
_47 = *_46;
org$frostlang$frostc$Type$Kind$wrapper* $tmp163;
$tmp163 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp163->value = _47;
_48 = ((frost$core$Equatable*) $tmp163);
_49 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:239:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_52 = &(&local7)->$rawValue;
*_52 = _49;
_54 = *(&local7);
*(&local6) = _54;
_57 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp164;
$tmp164 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp164->value = _57;
_58 = ((frost$core$Equatable*) $tmp164);
ITable* $tmp165 = _48->$class->itable;
while ($tmp165->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp165 = $tmp165->next;
}
_59 = $tmp165->methods[0];
_60 = _59(_48, _58);
_61 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_61);
_63 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_63);
*(&local0) = _60;
goto block8;
block8:;
_67 = *(&local0);
_68 = _67.value;
if (_68) goto block10; else goto block11;
block11:;
_70 = (frost$core$Int) {238u};
_71 = ((frost$core$Object*) param0);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:239:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_74 = ($fn166) _71->$class->vtable[0];
_75 = _74(_71);
_76 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s167, _75);
_77 = ((frost$core$Object*) _76);
frost$core$Frost$ref$frost$core$Object$Q(_77);
_79 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_79);
_81 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_81);
_84 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_76, &$s168);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s169, _70, _84);
_86 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_86);
_88 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_88);
abort(); // unreachable
block10:;
_91 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_91);
_93 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_93);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:240
_96 = ((org$frostlang$frostc$Symbol*) param0);
_97 = &_96->position;
_98 = *_97;
_99 = _98.line;
return _99;

}
frost$core$Bit org$frostlang$frostc$Type$get_hasSubtypes$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

org$frostlang$frostc$FixedArray** _1;
org$frostlang$frostc$FixedArray* _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:244
_1 = &param0->_subtypes;
_2 = *_1;
_3 = _2 != NULL;
_4 = (frost$core$Bit) {_3};
return _4;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

org$frostlang$frostc$FixedArray** _1;
org$frostlang$frostc$FixedArray* _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Int _7;
org$frostlang$frostc$FixedArray* _10;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_1 = &param0->_subtypes;
_2 = *_1;
_3 = _2 != NULL;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block2:;
_7 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s170, _7, &$s171);
abort(); // unreachable
block1:;
_10 = _2;
_11 = ((frost$core$Object*) _10);
frost$core$Frost$ref$frost$core$Object$Q(_11);
return _10;

}
frost$core$Bit org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$Type* param1) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

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
org$frostlang$frostc$Type$Kind* _13;
org$frostlang$frostc$Type$Kind _14;
frost$core$Equatable* _15;
$fn172 _16;
frost$core$Bit _17;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$Bit _26;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
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
$tmp173 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp173->value = _11;
_12 = ((frost$core$Equatable*) $tmp173);
_13 = &param1->typeKind;
_14 = *_13;
org$frostlang$frostc$Type$Kind$wrapper* $tmp174;
$tmp174 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp174->value = _14;
_15 = ((frost$core$Equatable*) $tmp174);
ITable* $tmp175 = _12->$class->itable;
while ($tmp175->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp175 = $tmp175->next;
}
_16 = $tmp175->methods[0];
_17 = _16(_12, _15);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_20 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local0) = _17;
goto block3;
block2:;
*(&local0) = _7;
goto block3;
block3:;
_26 = *(&local0);
return _26;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:263
_1 = (org$frostlang$frostc$Type*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type), (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp177;
$tmp177 = (frost$core$UInt64$wrapper*) frostObjectAlloc(sizeof(frost$core$UInt64$wrapper), (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp177->value = param0;
_2 = ((frost$core$Object*) $tmp177);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:263:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
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
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:263:53
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:268
_1 = (org$frostlang$frostc$Type*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type), (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$UInt64$wrapper* $tmp182;
$tmp182 = (frost$core$UInt64$wrapper*) frostObjectAlloc(sizeof(frost$core$UInt64$wrapper), (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp182->value = param0;
_2 = ((frost$core$Object*) $tmp182);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:268:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
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
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:268:54
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:273
_1 = (org$frostlang$frostc$Type*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type), (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Real64$wrapper* $tmp187;
$tmp187 = (frost$core$Real64$wrapper*) frostObjectAlloc(sizeof(frost$core$Real64$wrapper), (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp187->value = param0;
_2 = ((frost$core$Object*) $tmp187);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:273:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
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
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:273:50
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
frost$core$Int _4;
frost$core$Object* _6;
frost$collections$ListView* _8;
org$frostlang$frostc$Type* _9;
frost$core$Object* _10;
frost$core$Object* _12;
frost$core$Object* _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:278
_1 = &param0->CLASS_TYPE;
_2 = *_1;
_3 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_4 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_3, _4);
_6 = ((frost$core$Object*) param1);
frost$collections$Array$add$frost$collections$Array$T(_3, _6);
_8 = ((frost$collections$ListView*) _3);
_9 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_2, _8);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_14);
return _9;

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
frost$core$Int _35;
org$frostlang$frostc$Type** _37;
org$frostlang$frostc$Type* _38;
frost$core$Object* _39;
frost$core$Object* _41;
frost$collections$ListView* _43;
frost$core$Bit* _44;
frost$core$Bit _45;
frost$core$Object* _47;
frost$core$Object* _49;
frost$core$Object* _51;
frost$core$Object* _53;
frost$core$Object* _55;
frost$core$Object* _57;
frost$core$Object* _59;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:283
_1 = (org$frostlang$frostc$Type*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type), (frost$core$Class*) &org$frostlang$frostc$Type$class);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Type.frost:283:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_4 = ((frost$core$Object*) &$s192);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_7 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s193, &$s194);
_8 = ((frost$core$Object*) param1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Type.frost:283:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
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
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:283:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_25 = &(&local1)->$rawValue;
*_25 = _22;
_27 = *(&local1);
*(&local0) = _27;
_30 = *(&local0);
_31 = ((org$frostlang$frostc$Symbol*) param1);
_32 = &_31->position;
_33 = *_32;
_34 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_35 = (frost$core$Int) {2u};
frost$collections$Array$init$frost$core$Int(_34, _35);
_37 = &param0->WEAK_TYPE;
_38 = *_37;
_39 = ((frost$core$Object*) _38);
frost$collections$Array$add$frost$collections$Array$T(_34, _39);
_41 = ((frost$core$Object*) param1);
frost$collections$Array$add$frost$collections$Array$T(_34, _41);
_43 = ((frost$collections$ListView*) _34);
_44 = &param1->resolved;
_45 = *_44;
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit(_1, _21, _30, _33, _43, _45);
_47 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_47);
_49 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_49);
_51 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_51);
_53 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_53);
_55 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_55);
_57 = ((frost$core$Object*) &$s197);
frost$core$Frost$unref$frost$core$Object$Q(_57);
_59 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_59);
return _1;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$Type** _1;
org$frostlang$frostc$Type* _2;
frost$collections$Array* _3;
frost$core$Int _4;
frost$core$Object* _6;
frost$collections$ListView* _8;
org$frostlang$frostc$Type* _9;
frost$core$Object* _10;
frost$core$Object* _12;
frost$core$Object* _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:289
_1 = &param0->POINTER_TYPE;
_2 = *_1;
_3 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_4 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_3, _4);
_6 = ((frost$core$Object*) param1);
frost$collections$Array$add$frost$collections$Array$T(_3, _6);
_8 = ((frost$collections$ListView*) _3);
_9 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_2, _8);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_14);
return _9;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ArrayOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$Type** _1;
org$frostlang$frostc$Type* _2;
frost$collections$Array* _3;
frost$core$Int _4;
frost$core$Object* _6;
frost$collections$ListView* _8;
org$frostlang$frostc$Type* _9;
frost$core$Object* _10;
frost$core$Object* _12;
frost$core$Object* _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:294
_1 = &param0->ARRAY_TYPE;
_2 = *_1;
_3 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_4 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_3, _4);
_6 = ((frost$core$Object*) param1);
frost$collections$Array$add$frost$collections$Array$T(_3, _6);
_8 = ((frost$collections$ListView*) _3);
_9 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_2, _8);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_14);
return _9;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$ImmutableArrayOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$Type** _1;
org$frostlang$frostc$Type* _2;
frost$collections$Array* _3;
frost$core$Int _4;
frost$core$Object* _6;
frost$collections$ListView* _8;
org$frostlang$frostc$Type* _9;
frost$core$Object* _10;
frost$core$Object* _12;
frost$core$Object* _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:299
_1 = &param0->IMMUTABLE_ARRAY_TYPE;
_2 = *_1;
_3 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_4 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_3, _4);
_6 = ((frost$core$Object*) param1);
frost$collections$Array$add$frost$collections$Array$T(_3, _6);
_8 = ((frost$collections$ListView*) _3);
_9 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_2, _8);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_14);
return _9;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$Type** _1;
org$frostlang$frostc$Type* _2;
frost$collections$Array* _3;
frost$core$Int _4;
frost$core$Object* _6;
frost$collections$ListView* _8;
org$frostlang$frostc$Type* _9;
frost$core$Object* _10;
frost$core$Object* _12;
frost$core$Object* _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:304
_1 = &param0->RANGE_TYPE;
_2 = *_1;
_3 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_4 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_3, _4);
_6 = ((frost$core$Object*) param1);
frost$collections$Array$add$frost$collections$Array$T(_3, _6);
_8 = ((frost$collections$ListView*) _3);
_9 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_2, _8);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_14);
return _9;

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
frost$core$Object* _4;
frost$collections$Array* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$collections$Array* _13;
frost$core$Object* _14;
org$frostlang$frostc$Type$Kind* _19;
org$frostlang$frostc$Type$Kind _20;
frost$core$Equatable* _21;
frost$core$Int _22;
frost$core$Int* _25;
org$frostlang$frostc$Type$Kind _27;
org$frostlang$frostc$Type$Kind _30;
frost$core$Equatable* _31;
$fn198 _32;
frost$core$Bit _33;
bool _34;
frost$core$Object* _35;
frost$core$Object* _37;
frost$core$Object* _41;
frost$core$Object* _44;
org$frostlang$frostc$FixedArray** _50;
org$frostlang$frostc$FixedArray* _51;
bool _52;
frost$core$Bit _53;
bool _54;
frost$core$Int _56;
org$frostlang$frostc$FixedArray* _59;
frost$core$Object* _60;
frost$core$Int _63;
frost$core$Object* _64;
org$frostlang$frostc$Type* _65;
frost$core$Object* _66;
frost$core$Object* _68;
frost$core$Object* _70;
frost$core$Object* _73;
org$frostlang$frostc$Type* _76;
org$frostlang$frostc$Type** _77;
org$frostlang$frostc$Type* _78;
org$frostlang$frostc$Symbol* _81;
frost$core$String** _82;
frost$core$String* _83;
org$frostlang$frostc$Symbol* _84;
frost$core$String** _85;
frost$core$String* _86;
frost$core$Bit _87;
bool _88;
org$frostlang$frostc$Type$Kind* _90;
org$frostlang$frostc$Type$Kind _91;
frost$core$Equatable* _92;
org$frostlang$frostc$Type$Kind* _93;
org$frostlang$frostc$Type$Kind _94;
frost$core$Equatable* _95;
$fn199 _96;
frost$core$Bit _97;
frost$core$Object* _98;
frost$core$Object* _100;
frost$core$Bit _106;
bool _108;
frost$core$Object* _109;
frost$collections$Array* _113;
org$frostlang$frostc$Type** _114;
org$frostlang$frostc$Type* _115;
frost$core$Object* _116;
org$frostlang$frostc$Type$Kind* _122;
org$frostlang$frostc$Type$Kind _123;
frost$core$Equatable* _124;
frost$core$Int _125;
frost$core$Int* _128;
org$frostlang$frostc$Type$Kind _130;
org$frostlang$frostc$Type$Kind _133;
frost$core$Equatable* _134;
$fn200 _135;
frost$core$Bit _136;
bool _137;
frost$core$Object* _138;
frost$core$Object* _140;
frost$core$Object* _144;
frost$core$Object* _147;
org$frostlang$frostc$FixedArray** _153;
org$frostlang$frostc$FixedArray* _154;
bool _155;
frost$core$Bit _156;
bool _157;
frost$core$Int _159;
org$frostlang$frostc$FixedArray* _162;
frost$core$Object* _163;
frost$core$Int _166;
frost$core$Object* _167;
org$frostlang$frostc$Type* _168;
frost$core$Object* _169;
frost$core$Object* _171;
frost$core$Object* _173;
frost$core$Object* _176;
org$frostlang$frostc$Type* _179;
org$frostlang$frostc$Type** _180;
org$frostlang$frostc$Type* _181;
org$frostlang$frostc$Symbol* _184;
frost$core$String** _185;
frost$core$String* _186;
org$frostlang$frostc$Symbol* _187;
frost$core$String** _188;
frost$core$String* _189;
frost$core$Bit _190;
bool _191;
org$frostlang$frostc$Type$Kind* _193;
org$frostlang$frostc$Type$Kind _194;
frost$core$Equatable* _195;
org$frostlang$frostc$Type$Kind* _196;
org$frostlang$frostc$Type$Kind _197;
frost$core$Equatable* _198;
$fn201 _199;
frost$core$Bit _200;
frost$core$Object* _201;
frost$core$Object* _203;
frost$core$Bit _209;
bool _211;
frost$core$Object* _212;
frost$collections$Array* _216;
org$frostlang$frostc$Type** _217;
org$frostlang$frostc$Type* _218;
frost$core$Object* _219;
org$frostlang$frostc$Type$Kind* _225;
org$frostlang$frostc$Type$Kind _226;
frost$core$Equatable* _227;
frost$core$Int _228;
frost$core$Int* _231;
org$frostlang$frostc$Type$Kind _233;
org$frostlang$frostc$Type$Kind _236;
frost$core$Equatable* _237;
$fn202 _238;
frost$core$Bit _239;
bool _240;
frost$core$Object* _241;
frost$core$Object* _243;
frost$core$Object* _247;
frost$core$Object* _250;
org$frostlang$frostc$FixedArray** _256;
org$frostlang$frostc$FixedArray* _257;
bool _258;
frost$core$Bit _259;
bool _260;
frost$core$Int _262;
org$frostlang$frostc$FixedArray* _265;
frost$core$Object* _266;
frost$core$Int _269;
frost$core$Object* _270;
org$frostlang$frostc$Type* _271;
frost$core$Object* _272;
frost$core$Object* _274;
frost$core$Object* _276;
frost$core$Object* _279;
org$frostlang$frostc$Type* _282;
org$frostlang$frostc$Type** _283;
org$frostlang$frostc$Type* _284;
org$frostlang$frostc$Symbol* _287;
frost$core$String** _288;
frost$core$String* _289;
org$frostlang$frostc$Symbol* _290;
frost$core$String** _291;
frost$core$String* _292;
frost$core$Bit _293;
bool _294;
org$frostlang$frostc$Type$Kind* _296;
org$frostlang$frostc$Type$Kind _297;
frost$core$Equatable* _298;
org$frostlang$frostc$Type$Kind* _299;
org$frostlang$frostc$Type$Kind _300;
frost$core$Equatable* _301;
$fn203 _302;
frost$core$Bit _303;
frost$core$Object* _304;
frost$core$Object* _306;
frost$core$Bit _312;
bool _314;
frost$core$Object* _315;
frost$collections$Array* _319;
org$frostlang$frostc$Type** _320;
org$frostlang$frostc$Type* _321;
frost$core$Object* _322;
frost$collections$Array* _327;
org$frostlang$frostc$Type$Kind* _330;
org$frostlang$frostc$Type$Kind _331;
frost$core$Equatable* _332;
frost$core$Int _333;
frost$core$Int* _336;
org$frostlang$frostc$Type$Kind _338;
org$frostlang$frostc$Type$Kind _341;
frost$core$Equatable* _342;
$fn204 _343;
frost$core$Bit _344;
bool _345;
frost$core$Object* _346;
frost$core$Object* _348;
frost$core$Object* _352;
frost$core$Object* _355;
org$frostlang$frostc$FixedArray** _361;
org$frostlang$frostc$FixedArray* _362;
bool _363;
frost$core$Bit _364;
bool _365;
frost$core$Int _367;
org$frostlang$frostc$FixedArray* _370;
frost$core$Object* _371;
frost$core$Int _374;
frost$core$Object* _375;
org$frostlang$frostc$Type* _376;
frost$core$Object* _377;
frost$core$Object* _379;
frost$core$Object* _381;
frost$core$Object* _384;
org$frostlang$frostc$Type* _387;
frost$core$Object* _388;
frost$core$Object* _390;
org$frostlang$frostc$Type* _392;
frost$core$Object* _393;
org$frostlang$frostc$Type** _400;
org$frostlang$frostc$Type* _401;
frost$collections$Array* _402;
frost$collections$ListView* _403;
org$frostlang$frostc$Type* _404;
frost$core$Object* _405;
frost$core$Object* _407;
org$frostlang$frostc$Type* _409;
frost$core$Object* _410;
org$frostlang$frostc$Type* _413;
frost$core$Object* _414;
org$frostlang$frostc$Type* _417;
frost$core$Object* _418;
frost$collections$Array* _421;
frost$core$Object* _422;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:309
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_1);
*(&local0) = ((frost$collections$Array*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:310
_13 = *(&local0);
_14 = ((frost$core$Object*) param1);
frost$collections$Array$add$frost$collections$Array$T(_13, _14);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:311
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:311:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:429
_19 = &param1->typeKind;
_20 = *_19;
org$frostlang$frostc$Type$Kind$wrapper* $tmp205;
$tmp205 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp205->value = _20;
_21 = ((frost$core$Equatable*) $tmp205);
_22 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:429:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_25 = &(&local3)->$rawValue;
*_25 = _22;
_27 = *(&local3);
*(&local2) = _27;
_30 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp206;
$tmp206 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp206->value = _30;
_31 = ((frost$core$Equatable*) $tmp206);
ITable* $tmp207 = _21->$class->itable;
while ($tmp207->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp207 = $tmp207->next;
}
_32 = $tmp207->methods[1];
_33 = _32(_21, _31);
_34 = _33.value;
_35 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_35);
_37 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_37);
if (_34) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:430
_41 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_41);
*(&local1) = param1;
_44 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_44);
goto block4;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:432
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:432:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_50 = &param1->_subtypes;
_51 = *_50;
_52 = _51 != NULL;
_53 = (frost$core$Bit) {_52};
_54 = _53.value;
if (_54) goto block9; else goto block10;
block10:;
_56 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s208, _56, &$s209);
abort(); // unreachable
block9:;
_59 = _51;
_60 = ((frost$core$Object*) _59);
frost$core$Frost$ref$frost$core$Object$Q(_60);
_63 = (frost$core$Int) {0u};
_64 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_59, _63);
_65 = ((org$frostlang$frostc$Type*) _64);
_66 = ((frost$core$Object*) _65);
frost$core$Frost$ref$frost$core$Object$Q(_66);
_68 = _64;
frost$core$Frost$unref$frost$core$Object$Q(_68);
_70 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_70);
*(&local1) = _65;
_73 = ((frost$core$Object*) _65);
frost$core$Frost$ref$frost$core$Object$Q(_73);
goto block4;
block4:;
_76 = *(&local1);
_77 = &param0->CHAR8_TYPE;
_78 = *_77;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:311:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
_81 = ((org$frostlang$frostc$Symbol*) _76);
_82 = &_81->name;
_83 = *_82;
_84 = ((org$frostlang$frostc$Symbol*) _78);
_85 = &_84->name;
_86 = *_85;
_87 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_83, _86);
_88 = _87.value;
if (_88) goto block12; else goto block13;
block12:;
_90 = &_76->typeKind;
_91 = *_90;
org$frostlang$frostc$Type$Kind$wrapper* $tmp210;
$tmp210 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp210->value = _91;
_92 = ((frost$core$Equatable*) $tmp210);
_93 = &_78->typeKind;
_94 = *_93;
org$frostlang$frostc$Type$Kind$wrapper* $tmp211;
$tmp211 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp211->value = _94;
_95 = ((frost$core$Equatable*) $tmp211);
ITable* $tmp212 = _92->$class->itable;
while ($tmp212->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp212 = $tmp212->next;
}
_96 = $tmp212->methods[0];
_97 = _96(_92, _95);
_98 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_98);
_100 = ((frost$core$Object*) _92);
frost$core$Frost$unref$frost$core$Object$Q(_100);
*(&local4) = _97;
goto block14;
block13:;
*(&local4) = _87;
goto block14;
block14:;
_106 = *(&local4);
_108 = _106.value;
_109 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_109);
if (_108) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:312
_113 = *(&local0);
_114 = &param0->INT8_TYPE;
_115 = *_114;
_116 = ((frost$core$Object*) _115);
frost$collections$Array$add$frost$collections$Array$T(_113, _116);
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:314
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:314:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:429
_122 = &param1->typeKind;
_123 = *_122;
org$frostlang$frostc$Type$Kind$wrapper* $tmp213;
$tmp213 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp213->value = _123;
_124 = ((frost$core$Equatable*) $tmp213);
_125 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:429:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_128 = &(&local7)->$rawValue;
*_128 = _125;
_130 = *(&local7);
*(&local6) = _130;
_133 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp214;
$tmp214 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp214->value = _133;
_134 = ((frost$core$Equatable*) $tmp214);
ITable* $tmp215 = _124->$class->itable;
while ($tmp215->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp215 = $tmp215->next;
}
_135 = $tmp215->methods[1];
_136 = _135(_124, _134);
_137 = _136.value;
_138 = ((frost$core$Object*) _134);
frost$core$Frost$unref$frost$core$Object$Q(_138);
_140 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_140);
if (_137) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:430
_144 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_144);
*(&local5) = param1;
_147 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_147);
goto block18;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:432
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:432:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_153 = &param1->_subtypes;
_154 = *_153;
_155 = _154 != NULL;
_156 = (frost$core$Bit) {_155};
_157 = _156.value;
if (_157) goto block23; else goto block24;
block24:;
_159 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s216, _159, &$s217);
abort(); // unreachable
block23:;
_162 = _154;
_163 = ((frost$core$Object*) _162);
frost$core$Frost$ref$frost$core$Object$Q(_163);
_166 = (frost$core$Int) {0u};
_167 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_162, _166);
_168 = ((org$frostlang$frostc$Type*) _167);
_169 = ((frost$core$Object*) _168);
frost$core$Frost$ref$frost$core$Object$Q(_169);
_171 = _167;
frost$core$Frost$unref$frost$core$Object$Q(_171);
_173 = ((frost$core$Object*) _162);
frost$core$Frost$unref$frost$core$Object$Q(_173);
*(&local5) = _168;
_176 = ((frost$core$Object*) _168);
frost$core$Frost$ref$frost$core$Object$Q(_176);
goto block18;
block18:;
_179 = *(&local5);
_180 = &param0->CHAR16_TYPE;
_181 = *_180;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:314:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
_184 = ((org$frostlang$frostc$Symbol*) _179);
_185 = &_184->name;
_186 = *_185;
_187 = ((org$frostlang$frostc$Symbol*) _181);
_188 = &_187->name;
_189 = *_188;
_190 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_186, _189);
_191 = _190.value;
if (_191) goto block26; else goto block27;
block26:;
_193 = &_179->typeKind;
_194 = *_193;
org$frostlang$frostc$Type$Kind$wrapper* $tmp218;
$tmp218 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp218->value = _194;
_195 = ((frost$core$Equatable*) $tmp218);
_196 = &_181->typeKind;
_197 = *_196;
org$frostlang$frostc$Type$Kind$wrapper* $tmp219;
$tmp219 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp219->value = _197;
_198 = ((frost$core$Equatable*) $tmp219);
ITable* $tmp220 = _195->$class->itable;
while ($tmp220->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp220 = $tmp220->next;
}
_199 = $tmp220->methods[0];
_200 = _199(_195, _198);
_201 = ((frost$core$Object*) _198);
frost$core$Frost$unref$frost$core$Object$Q(_201);
_203 = ((frost$core$Object*) _195);
frost$core$Frost$unref$frost$core$Object$Q(_203);
*(&local8) = _200;
goto block28;
block27:;
*(&local8) = _190;
goto block28;
block28:;
_209 = *(&local8);
_211 = _209.value;
_212 = ((frost$core$Object*) _179);
frost$core$Frost$unref$frost$core$Object$Q(_212);
if (_211) goto block15; else goto block17;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:315
_216 = *(&local0);
_217 = &param0->INT16_TYPE;
_218 = *_217;
_219 = ((frost$core$Object*) _218);
frost$collections$Array$add$frost$collections$Array$T(_216, _219);
goto block16;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:317
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:317:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:429
_225 = &param1->typeKind;
_226 = *_225;
org$frostlang$frostc$Type$Kind$wrapper* $tmp221;
$tmp221 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp221->value = _226;
_227 = ((frost$core$Equatable*) $tmp221);
_228 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:429:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_231 = &(&local11)->$rawValue;
*_231 = _228;
_233 = *(&local11);
*(&local10) = _233;
_236 = *(&local10);
org$frostlang$frostc$Type$Kind$wrapper* $tmp222;
$tmp222 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp222->value = _236;
_237 = ((frost$core$Equatable*) $tmp222);
ITable* $tmp223 = _227->$class->itable;
while ($tmp223->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp223 = $tmp223->next;
}
_238 = $tmp223->methods[1];
_239 = _238(_227, _237);
_240 = _239.value;
_241 = ((frost$core$Object*) _237);
frost$core$Frost$unref$frost$core$Object$Q(_241);
_243 = ((frost$core$Object*) _227);
frost$core$Frost$unref$frost$core$Object$Q(_243);
if (_240) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:430
_247 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_247);
*(&local9) = param1;
_250 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_250);
goto block32;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:432
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:432:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_256 = &param1->_subtypes;
_257 = *_256;
_258 = _257 != NULL;
_259 = (frost$core$Bit) {_258};
_260 = _259.value;
if (_260) goto block37; else goto block38;
block38:;
_262 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s224, _262, &$s225);
abort(); // unreachable
block37:;
_265 = _257;
_266 = ((frost$core$Object*) _265);
frost$core$Frost$ref$frost$core$Object$Q(_266);
_269 = (frost$core$Int) {0u};
_270 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_265, _269);
_271 = ((org$frostlang$frostc$Type*) _270);
_272 = ((frost$core$Object*) _271);
frost$core$Frost$ref$frost$core$Object$Q(_272);
_274 = _270;
frost$core$Frost$unref$frost$core$Object$Q(_274);
_276 = ((frost$core$Object*) _265);
frost$core$Frost$unref$frost$core$Object$Q(_276);
*(&local9) = _271;
_279 = ((frost$core$Object*) _271);
frost$core$Frost$ref$frost$core$Object$Q(_279);
goto block32;
block32:;
_282 = *(&local9);
_283 = &param0->CHAR32_TYPE;
_284 = *_283;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:317:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
_287 = ((org$frostlang$frostc$Symbol*) _282);
_288 = &_287->name;
_289 = *_288;
_290 = ((org$frostlang$frostc$Symbol*) _284);
_291 = &_290->name;
_292 = *_291;
_293 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_289, _292);
_294 = _293.value;
if (_294) goto block40; else goto block41;
block40:;
_296 = &_282->typeKind;
_297 = *_296;
org$frostlang$frostc$Type$Kind$wrapper* $tmp226;
$tmp226 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp226->value = _297;
_298 = ((frost$core$Equatable*) $tmp226);
_299 = &_284->typeKind;
_300 = *_299;
org$frostlang$frostc$Type$Kind$wrapper* $tmp227;
$tmp227 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp227->value = _300;
_301 = ((frost$core$Equatable*) $tmp227);
ITable* $tmp228 = _298->$class->itable;
while ($tmp228->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp228 = $tmp228->next;
}
_302 = $tmp228->methods[0];
_303 = _302(_298, _301);
_304 = ((frost$core$Object*) _301);
frost$core$Frost$unref$frost$core$Object$Q(_304);
_306 = ((frost$core$Object*) _298);
frost$core$Frost$unref$frost$core$Object$Q(_306);
*(&local12) = _303;
goto block42;
block41:;
*(&local12) = _293;
goto block42;
block42:;
_312 = *(&local12);
_314 = _312.value;
_315 = ((frost$core$Object*) _282);
frost$core$Frost$unref$frost$core$Object$Q(_315);
if (_314) goto block29; else goto block31;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:318
_319 = *(&local0);
_320 = &param0->INT32_TYPE;
_321 = *_320;
_322 = ((frost$core$Object*) _321);
frost$collections$Array$add$frost$collections$Array$T(_319, _322);
goto block30;
block31:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:321
_327 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.nonnullable():org.frostlang.frostc.Type from Type.frost:321:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:429
_330 = &param1->typeKind;
_331 = *_330;
org$frostlang$frostc$Type$Kind$wrapper* $tmp229;
$tmp229 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp229->value = _331;
_332 = ((frost$core$Equatable*) $tmp229);
_333 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:429:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_336 = &(&local15)->$rawValue;
*_336 = _333;
_338 = *(&local15);
*(&local14) = _338;
_341 = *(&local14);
org$frostlang$frostc$Type$Kind$wrapper* $tmp230;
$tmp230 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp230->value = _341;
_342 = ((frost$core$Equatable*) $tmp230);
ITable* $tmp231 = _332->$class->itable;
while ($tmp231->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp231 = $tmp231->next;
}
_343 = $tmp231->methods[1];
_344 = _343(_332, _342);
_345 = _344.value;
_346 = ((frost$core$Object*) _342);
frost$core$Frost$unref$frost$core$Object$Q(_346);
_348 = ((frost$core$Object*) _332);
frost$core$Frost$unref$frost$core$Object$Q(_348);
if (_345) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:430
_352 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_352);
*(&local13) = param1;
_355 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_355);
goto block43;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:432
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:432:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_361 = &param1->_subtypes;
_362 = *_361;
_363 = _362 != NULL;
_364 = (frost$core$Bit) {_363};
_365 = _364.value;
if (_365) goto block48; else goto block49;
block49:;
_367 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s232, _367, &$s233);
abort(); // unreachable
block48:;
_370 = _362;
_371 = ((frost$core$Object*) _370);
frost$core$Frost$ref$frost$core$Object$Q(_371);
_374 = (frost$core$Int) {0u};
_375 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_370, _374);
_376 = ((org$frostlang$frostc$Type*) _375);
_377 = ((frost$core$Object*) _376);
frost$core$Frost$ref$frost$core$Object$Q(_377);
_379 = _375;
frost$core$Frost$unref$frost$core$Object$Q(_379);
_381 = ((frost$core$Object*) _370);
frost$core$Frost$unref$frost$core$Object$Q(_381);
*(&local13) = _376;
_384 = ((frost$core$Object*) _376);
frost$core$Frost$ref$frost$core$Object$Q(_384);
goto block43;
block43:;
_387 = *(&local13);
_388 = ((frost$core$Object*) _387);
frost$collections$Array$add$frost$collections$Array$T(_327, _388);
_390 = ((frost$core$Object*) _387);
frost$core$Frost$unref$frost$core$Object$Q(_390);
_392 = *(&local13);
_393 = ((frost$core$Object*) _392);
frost$core$Frost$unref$frost$core$Object$Q(_393);
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
goto block30;
block30:;
goto block16;
block16:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:323
_400 = &param0->STEPPED_RANGE_TYPE;
_401 = *_400;
_402 = *(&local0);
_403 = ((frost$collections$ListView*) _402);
_404 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_401, _403);
_405 = ((frost$core$Object*) _404);
frost$core$Frost$ref$frost$core$Object$Q(_405);
_407 = ((frost$core$Object*) _404);
frost$core$Frost$unref$frost$core$Object$Q(_407);
_409 = *(&local9);
_410 = ((frost$core$Object*) _409);
frost$core$Frost$unref$frost$core$Object$Q(_410);
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
_413 = *(&local5);
_414 = ((frost$core$Object*) _413);
frost$core$Frost$unref$frost$core$Object$Q(_414);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
_417 = *(&local1);
_418 = ((frost$core$Object*) _417);
frost$core$Frost$unref$frost$core$Object$Q(_418);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
_421 = *(&local0);
_422 = ((frost$core$Object*) _421);
frost$core$Frost$unref$frost$core$Object$Q(_422);
*(&local0) = ((frost$collections$Array*) NULL);
return _404;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$Type* param2) {

frost$collections$Array* local0 = NULL;
frost$collections$Array* _1;
frost$core$Object* _4;
frost$collections$Array* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$collections$Array* _13;
frost$core$Object* _14;
frost$collections$Array* _17;
frost$core$Object* _18;
org$frostlang$frostc$Type** _21;
org$frostlang$frostc$Type* _22;
frost$collections$Array* _23;
frost$collections$ListView* _24;
org$frostlang$frostc$Type* _25;
frost$core$Object* _26;
frost$core$Object* _28;
frost$collections$Array* _30;
frost$core$Object* _31;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:328
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_1);
*(&local0) = ((frost$collections$Array*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:329
_13 = *(&local0);
_14 = ((frost$core$Object*) param1);
frost$collections$Array$add$frost$collections$Array$T(_13, _14);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:330
_17 = *(&local0);
_18 = ((frost$core$Object*) param2);
frost$collections$Array$add$frost$collections$Array$T(_17, _18);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:331
_21 = &param0->STEPPED_RANGE_TYPE;
_22 = *_21;
_23 = *(&local0);
_24 = ((frost$collections$ListView*) _23);
_25 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_22, _24);
_26 = ((frost$core$Object*) _25);
frost$core$Frost$ref$frost$core$Object$Q(_26);
_28 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_28);
_30 = *(&local0);
_31 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_31);
*(&local0) = ((frost$collections$Array*) NULL);
return _25;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

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
frost$core$Int _34;
frost$core$Int* _37;
org$frostlang$frostc$Type$Kind _39;
org$frostlang$frostc$Type$Kind _42;
frost$core$Equatable* _43;
$fn234 _44;
frost$core$Bit _45;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Bit _52;
bool _53;
org$frostlang$frostc$Type$Kind* _57;
org$frostlang$frostc$Type$Kind _58;
frost$core$Equatable* _59;
frost$core$Int _60;
frost$core$Int* _63;
org$frostlang$frostc$Type$Kind _65;
org$frostlang$frostc$Type$Kind _68;
frost$core$Equatable* _69;
$fn235 _70;
frost$core$Bit _71;
frost$core$Object* _72;
frost$core$Object* _74;
frost$core$Bit _78;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:335
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
$tmp239 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp239->value = _32;
_33 = ((frost$core$Equatable*) $tmp239);
_34 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:336:69
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_37 = &(&local5)->$rawValue;
*_37 = _34;
_39 = *(&local5);
*(&local4) = _39;
_42 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp240;
$tmp240 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp240->value = _42;
_43 = ((frost$core$Equatable*) $tmp240);
ITable* $tmp241 = _33->$class->itable;
while ($tmp241->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp241 = $tmp241->next;
}
_44 = $tmp241->methods[0];
_45 = _44(_33, _43);
_46 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_46);
_48 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_48);
*(&local1) = _45;
goto block9;
block9:;
_52 = *(&local1);
_53 = _52.value;
if (_53) goto block11; else goto block12;
block11:;
*(&local0) = _52;
goto block13;
block12:;
_57 = &param0->typeKind;
_58 = *_57;
org$frostlang$frostc$Type$Kind$wrapper* $tmp242;
$tmp242 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp242->value = _58;
_59 = ((frost$core$Equatable*) $tmp242);
_60 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:337:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_63 = &(&local7)->$rawValue;
*_63 = _60;
_65 = *(&local7);
*(&local6) = _65;
_68 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp243;
$tmp243 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp243->value = _68;
_69 = ((frost$core$Equatable*) $tmp243);
ITable* $tmp244 = _59->$class->itable;
while ($tmp244->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp244 = $tmp244->next;
}
_70 = $tmp244->methods[0];
_71 = _70(_59, _69);
_72 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_72);
_74 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_74);
*(&local0) = _71;
goto block13;
block13:;
_78 = *(&local0);
return _78;

}
frost$core$Bit org$frostlang$frostc$Type$get_isBuiltinInt$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

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
frost$core$Int _4;
frost$core$Int* _7;
org$frostlang$frostc$Type$Kind _9;
org$frostlang$frostc$Type$Kind _12;
frost$core$Equatable* _13;
$fn245 _14;
frost$core$Bit _15;
bool _16;
org$frostlang$frostc$Type$Kind* _20;
org$frostlang$frostc$Type$Kind _21;
frost$core$Equatable* _22;
frost$core$Int _23;
frost$core$Int* _26;
org$frostlang$frostc$Type$Kind _28;
org$frostlang$frostc$Type$Kind _31;
frost$core$Equatable* _32;
$fn246 _33;
frost$core$Bit _34;
frost$core$Object* _35;
frost$core$Object* _37;
frost$core$Bit _41;
bool _42;
org$frostlang$frostc$Type$Kind* _46;
org$frostlang$frostc$Type$Kind _47;
frost$core$Equatable* _48;
frost$core$Int _49;
frost$core$Int* _52;
org$frostlang$frostc$Type$Kind _54;
org$frostlang$frostc$Type$Kind _57;
frost$core$Equatable* _58;
$fn247 _59;
frost$core$Bit _60;
frost$core$Object* _61;
frost$core$Object* _63;
frost$core$Bit _67;
frost$core$Object* _68;
frost$core$Object* _70;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:341
_1 = &param0->typeKind;
_2 = *_1;
org$frostlang$frostc$Type$Kind$wrapper* $tmp248;
$tmp248 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp248->value = _2;
_3 = ((frost$core$Equatable*) $tmp248);
_4 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:341:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_7 = &(&local3)->$rawValue;
*_7 = _4;
_9 = *(&local3);
*(&local2) = _9;
_12 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp249;
$tmp249 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp249->value = _12;
_13 = ((frost$core$Equatable*) $tmp249);
ITable* $tmp250 = _3->$class->itable;
while ($tmp250->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp250 = $tmp250->next;
}
_14 = $tmp250->methods[0];
_15 = _14(_3, _13);
_16 = _15.value;
if (_16) goto block2; else goto block3;
block2:;
*(&local1) = _15;
goto block4;
block3:;
_20 = &param0->typeKind;
_21 = *_20;
org$frostlang$frostc$Type$Kind$wrapper* $tmp251;
$tmp251 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp251->value = _21;
_22 = ((frost$core$Equatable*) $tmp251);
_23 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:341:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_26 = &(&local5)->$rawValue;
*_26 = _23;
_28 = *(&local5);
*(&local4) = _28;
_31 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp252;
$tmp252 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp252->value = _31;
_32 = ((frost$core$Equatable*) $tmp252);
ITable* $tmp253 = _22->$class->itable;
while ($tmp253->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp253 = $tmp253->next;
}
_33 = $tmp253->methods[0];
_34 = _33(_22, _32);
_35 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_35);
_37 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_37);
*(&local1) = _34;
goto block4;
block4:;
_41 = *(&local1);
_42 = _41.value;
if (_42) goto block6; else goto block7;
block6:;
*(&local0) = _41;
goto block8;
block7:;
_46 = &param0->typeKind;
_47 = *_46;
org$frostlang$frostc$Type$Kind$wrapper* $tmp254;
$tmp254 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp254->value = _47;
_48 = ((frost$core$Equatable*) $tmp254);
_49 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:342:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_52 = &(&local7)->$rawValue;
*_52 = _49;
_54 = *(&local7);
*(&local6) = _54;
_57 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp255;
$tmp255 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp255->value = _57;
_58 = ((frost$core$Equatable*) $tmp255);
ITable* $tmp256 = _48->$class->itable;
while ($tmp256->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp256 = $tmp256->next;
}
_59 = $tmp256->methods[0];
_60 = _59(_48, _58);
_61 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_61);
_63 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_63);
*(&local0) = _60;
goto block8;
block8:;
_67 = *(&local0);
_68 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_68);
_70 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_70);
return _67;

}
frost$core$Bit org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

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
frost$core$Int _4;
frost$core$Int* _7;
org$frostlang$frostc$Type$Kind _9;
org$frostlang$frostc$Type$Kind _12;
frost$core$Equatable* _13;
$fn257 _14;
frost$core$Bit _15;
bool _16;
org$frostlang$frostc$Type$Kind* _20;
org$frostlang$frostc$Type$Kind _21;
frost$core$Equatable* _22;
frost$core$Int _23;
frost$core$Int* _26;
org$frostlang$frostc$Type$Kind _28;
org$frostlang$frostc$Type$Kind _31;
frost$core$Equatable* _32;
$fn258 _33;
frost$core$Bit _34;
frost$core$Object* _35;
frost$core$Object* _37;
frost$core$Bit _41;
bool _42;
org$frostlang$frostc$Type$Kind* _46;
org$frostlang$frostc$Type$Kind _47;
frost$core$Equatable* _48;
frost$core$Int _49;
frost$core$Int* _52;
org$frostlang$frostc$Type$Kind _54;
org$frostlang$frostc$Type$Kind _57;
frost$core$Equatable* _58;
$fn259 _59;
frost$core$Bit _60;
frost$core$Object* _61;
frost$core$Object* _63;
frost$core$Bit _67;
bool _68;
org$frostlang$frostc$Type$Kind* _72;
org$frostlang$frostc$Type$Kind _73;
frost$core$Equatable* _74;
frost$core$Int _75;
frost$core$Int* _78;
org$frostlang$frostc$Type$Kind _80;
org$frostlang$frostc$Type$Kind _83;
frost$core$Equatable* _84;
$fn260 _85;
frost$core$Bit _86;
frost$core$Object* _87;
frost$core$Object* _89;
frost$core$Bit _93;
frost$core$Object* _94;
frost$core$Object* _96;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:347
_1 = &param0->typeKind;
_2 = *_1;
org$frostlang$frostc$Type$Kind$wrapper* $tmp261;
$tmp261 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp261->value = _2;
_3 = ((frost$core$Equatable*) $tmp261);
_4 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:347:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_7 = &(&local4)->$rawValue;
*_7 = _4;
_9 = *(&local4);
*(&local3) = _9;
_12 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp262;
$tmp262 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp262->value = _12;
_13 = ((frost$core$Equatable*) $tmp262);
ITable* $tmp263 = _3->$class->itable;
while ($tmp263->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp263 = $tmp263->next;
}
_14 = $tmp263->methods[0];
_15 = _14(_3, _13);
_16 = _15.value;
if (_16) goto block2; else goto block3;
block2:;
*(&local2) = _15;
goto block4;
block3:;
_20 = &param0->typeKind;
_21 = *_20;
org$frostlang$frostc$Type$Kind$wrapper* $tmp264;
$tmp264 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp264->value = _21;
_22 = ((frost$core$Equatable*) $tmp264);
_23 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:347:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_26 = &(&local6)->$rawValue;
*_26 = _23;
_28 = *(&local6);
*(&local5) = _28;
_31 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp265;
$tmp265 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp265->value = _31;
_32 = ((frost$core$Equatable*) $tmp265);
ITable* $tmp266 = _22->$class->itable;
while ($tmp266->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp266 = $tmp266->next;
}
_33 = $tmp266->methods[0];
_34 = _33(_22, _32);
_35 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_35);
_37 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_37);
*(&local2) = _34;
goto block4;
block4:;
_41 = *(&local2);
_42 = _41.value;
if (_42) goto block6; else goto block7;
block6:;
*(&local1) = _41;
goto block8;
block7:;
_46 = &param0->typeKind;
_47 = *_46;
org$frostlang$frostc$Type$Kind$wrapper* $tmp267;
$tmp267 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp267->value = _47;
_48 = ((frost$core$Equatable*) $tmp267);
_49 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:348:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_52 = &(&local8)->$rawValue;
*_52 = _49;
_54 = *(&local8);
*(&local7) = _54;
_57 = *(&local7);
org$frostlang$frostc$Type$Kind$wrapper* $tmp268;
$tmp268 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp268->value = _57;
_58 = ((frost$core$Equatable*) $tmp268);
ITable* $tmp269 = _48->$class->itable;
while ($tmp269->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp269 = $tmp269->next;
}
_59 = $tmp269->methods[0];
_60 = _59(_48, _58);
_61 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_61);
_63 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_63);
*(&local1) = _60;
goto block8;
block8:;
_67 = *(&local1);
_68 = _67.value;
if (_68) goto block10; else goto block11;
block10:;
*(&local0) = _67;
goto block12;
block11:;
_72 = &param0->typeKind;
_73 = *_72;
org$frostlang$frostc$Type$Kind$wrapper* $tmp270;
$tmp270 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp270->value = _73;
_74 = ((frost$core$Equatable*) $tmp270);
_75 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:348:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_78 = &(&local10)->$rawValue;
*_78 = _75;
_80 = *(&local10);
*(&local9) = _80;
_83 = *(&local9);
org$frostlang$frostc$Type$Kind$wrapper* $tmp271;
$tmp271 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp271->value = _83;
_84 = ((frost$core$Equatable*) $tmp271);
ITable* $tmp272 = _74->$class->itable;
while ($tmp272->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp272 = $tmp272->next;
}
_85 = $tmp272->methods[0];
_86 = _85(_74, _84);
_87 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_87);
_89 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_89);
*(&local0) = _86;
goto block12;
block12:;
_93 = *(&local0);
_94 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_94);
_96 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_96);
return _93;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSigned$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

org$frostlang$frostc$Symbol* _1;
frost$core$String** _2;
frost$core$String* _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:352
_1 = ((org$frostlang$frostc$Symbol*) param0);
_2 = &_1->name;
_3 = *_2;
_4 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_3, &$s273);
return _4;

}
frost$core$Bit org$frostlang$frostc$Type$get_isReal$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

frost$core$Bit local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind* _1;
org$frostlang$frostc$Type$Kind _2;
frost$core$Equatable* _3;
frost$core$Int _4;
frost$core$Int* _7;
org$frostlang$frostc$Type$Kind _9;
org$frostlang$frostc$Type$Kind _12;
frost$core$Equatable* _13;
$fn274 _14;
frost$core$Bit _15;
bool _16;
org$frostlang$frostc$Symbol* _20;
frost$core$String** _21;
frost$core$String* _22;
frost$core$Bit _23;
frost$core$Bit _26;
frost$core$Object* _27;
frost$core$Object* _29;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:356
_1 = &param0->typeKind;
_2 = *_1;
org$frostlang$frostc$Type$Kind$wrapper* $tmp275;
$tmp275 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp275->value = _2;
_3 = ((frost$core$Equatable*) $tmp275);
_4 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:356:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_7 = &(&local2)->$rawValue;
*_7 = _4;
_9 = *(&local2);
*(&local1) = _9;
_12 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp276;
$tmp276 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp276->value = _12;
_13 = ((frost$core$Equatable*) $tmp276);
ITable* $tmp277 = _3->$class->itable;
while ($tmp277->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp277 = $tmp277->next;
}
_14 = $tmp277->methods[0];
_15 = _14(_3, _13);
_16 = _15.value;
if (_16) goto block2; else goto block3;
block2:;
*(&local0) = _15;
goto block4;
block3:;
_20 = ((org$frostlang$frostc$Symbol*) param0);
_21 = &_20->name;
_22 = *_21;
_23 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_22, &$s278);
*(&local0) = _23;
goto block4;
block4:;
_26 = *(&local0);
_27 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_27);
_29 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_29);
return _26;

}
frost$core$Bit org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

org$frostlang$frostc$Symbol* _1;
frost$core$String** _2;
frost$core$String* _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:360
_1 = ((org$frostlang$frostc$Symbol*) param0);
_2 = &_1->name;
_3 = *_2;
_4 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_3, &$s279);
return _4;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

frost$core$Bit local0;
frost$core$Bit _1;
bool _2;
org$frostlang$frostc$Symbol* _8;
frost$core$String** _9;
frost$core$String* _10;
frost$core$Bit _11;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:364
_1 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
_2 = _1.value;
if (_2) goto block1; else goto block2;
block1:;
*(&local0) = _1;
goto block3;
block2:;
// begin inline call to function org.frostlang.frostc.Type.get_isChar():frost.core.Bit from Type.frost:364:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:360
_8 = ((org$frostlang$frostc$Symbol*) param0);
_9 = &_8->name;
_10 = *_9;
_11 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_10, &$s280);
*(&local0) = _11;
goto block3;
block3:;
_15 = *(&local0);
return _15;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:368
_1 = &param0->typeKind;
_2 = *_1;
_3 = _2.$rawValue;
_4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:369:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_7 = _3.value;
_8 = _4.value;
_9 = _7 == _8;
_10 = (frost$core$Bit) {_9};
_12 = _10.value;
if (_12) goto block2; else goto block3;
block3:;
_14 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:369:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_17 = _3.value;
_18 = _14.value;
_19 = _17 == _18;
_20 = (frost$core$Bit) {_19};
_22 = _20.value;
if (_22) goto block2; else goto block5;
block5:;
_24 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:369:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_27 = _3.value;
_28 = _24.value;
_29 = _27 == _28;
_30 = (frost$core$Bit) {_29};
_32 = _30.value;
if (_32) goto block2; else goto block7;
block7:;
_34 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:369:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_37 = _3.value;
_38 = _34.value;
_39 = _37 == _38;
_40 = (frost$core$Bit) {_39};
_42 = _40.value;
if (_42) goto block2; else goto block9;
block9:;
_44 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:370:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_47 = _3.value;
_48 = _44.value;
_49 = _47 == _48;
_50 = (frost$core$Bit) {_49};
_52 = _50.value;
if (_52) goto block2; else goto block11;
block11:;
_54 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:370:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_57 = _3.value;
_58 = _54.value;
_59 = _57 == _58;
_60 = (frost$core$Bit) {_59};
_62 = _60.value;
if (_62) goto block2; else goto block13;
block13:;
_64 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:370:69
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_67 = _3.value;
_68 = _64.value;
_69 = _67 == _68;
_70 = (frost$core$Bit) {_69};
_72 = _70.value;
if (_72) goto block2; else goto block15;
block15:;
_74 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:371:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_77 = _3.value;
_78 = _74.value;
_79 = _77 == _78;
_80 = (frost$core$Bit) {_79};
_82 = _80.value;
if (_82) goto block2; else goto block17;
block17:;
_84 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:371:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_87 = _3.value;
_88 = _84.value;
_89 = _87 == _88;
_90 = (frost$core$Bit) {_89};
_92 = _90.value;
if (_92) goto block2; else goto block19;
block19:;
_94 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:371:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_97 = _3.value;
_98 = _94.value;
_99 = _97 == _98;
_100 = (frost$core$Bit) {_99};
_102 = _100.value;
if (_102) goto block2; else goto block21;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:372
_105 = (frost$core$Bit) {true};
return _105;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:375
_108 = (frost$core$Bit) {false};
return _108;
block1:;
goto block23;
block23:;

}
frost$core$Bit org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

frost$core$Bit local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind* _1;
org$frostlang$frostc$Type$Kind _2;
frost$core$Equatable* _3;
frost$core$Int _4;
frost$core$Int* _7;
org$frostlang$frostc$Type$Kind _9;
org$frostlang$frostc$Type$Kind _12;
frost$core$Equatable* _13;
$fn281 _14;
frost$core$Bit _15;
bool _16;
org$frostlang$frostc$FixedArray** _20;
org$frostlang$frostc$FixedArray* _21;
bool _22;
frost$core$Bit _23;
bool _24;
frost$core$Int _26;
org$frostlang$frostc$FixedArray* _29;
frost$core$Object* _30;
frost$core$Int _33;
frost$core$Object* _34;
org$frostlang$frostc$Type* _35;
org$frostlang$frostc$Symbol* _36;
frost$core$String** _37;
frost$core$String* _38;
frost$core$Bit _39;
frost$core$Object* _40;
frost$core$Object* _42;
frost$core$Bit _48;
frost$core$Object* _49;
frost$core$Object* _51;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:381
_1 = &param0->typeKind;
_2 = *_1;
org$frostlang$frostc$Type$Kind$wrapper* $tmp282;
$tmp282 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp282->value = _2;
_3 = ((frost$core$Equatable*) $tmp282);
_4 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:381:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_7 = &(&local2)->$rawValue;
*_7 = _4;
_9 = *(&local2);
*(&local1) = _9;
_12 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp283;
$tmp283 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp283->value = _12;
_13 = ((frost$core$Equatable*) $tmp283);
ITable* $tmp284 = _3->$class->itable;
while ($tmp284->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp284 = $tmp284->next;
}
_14 = $tmp284->methods[0];
_15 = _14(_3, _13);
_16 = _15.value;
if (_16) goto block2; else goto block3;
block2:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:381:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_20 = &param0->_subtypes;
_21 = *_20;
_22 = _21 != NULL;
_23 = (frost$core$Bit) {_22};
_24 = _23.value;
if (_24) goto block6; else goto block7;
block7:;
_26 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s285, _26, &$s286);
abort(); // unreachable
block6:;
_29 = _21;
_30 = ((frost$core$Object*) _29);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_33 = (frost$core$Int) {0u};
_34 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_29, _33);
_35 = ((org$frostlang$frostc$Type*) _34);
_36 = ((org$frostlang$frostc$Symbol*) _35);
_37 = &_36->name;
_38 = *_37;
_39 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_38, &$s287);
_40 = _34;
frost$core$Frost$unref$frost$core$Object$Q(_40);
_42 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_42);
*(&local0) = _39;
goto block4;
block3:;
*(&local0) = _15;
goto block4;
block4:;
_48 = *(&local0);
_49 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_49);
_51 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_51);
return _48;

}
frost$core$Bit org$frostlang$frostc$Type$get_isTuple$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind* _1;
org$frostlang$frostc$Type$Kind _2;
frost$core$Equatable* _3;
frost$core$Int _4;
frost$core$Int* _7;
org$frostlang$frostc$Type$Kind _9;
org$frostlang$frostc$Type$Kind _12;
frost$core$Equatable* _13;
$fn288 _14;
frost$core$Bit _15;
frost$core$Object* _16;
frost$core$Object* _18;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:385
_1 = &param0->typeKind;
_2 = *_1;
org$frostlang$frostc$Type$Kind$wrapper* $tmp289;
$tmp289 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp289->value = _2;
_3 = ((frost$core$Equatable*) $tmp289);
_4 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:385:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_7 = &(&local1)->$rawValue;
*_7 = _4;
_9 = *(&local1);
*(&local0) = _9;
_12 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp290;
$tmp290 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp290->value = _12;
_13 = ((frost$core$Equatable*) $tmp290);
ITable* $tmp291 = _3->$class->itable;
while ($tmp291->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp291 = $tmp291->next;
}
_14 = $tmp291->methods[0];
_15 = _14(_3, _13);
_16 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_18);
return _15;

}
frost$core$Bit org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:389
_1 = &param0->typeKind;
_2 = *_1;
_3 = _2.$rawValue;
_4 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:390:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_7 = _3.value;
_8 = _4.value;
_9 = _7 == _8;
_10 = (frost$core$Bit) {_9};
_12 = _10.value;
if (_12) goto block2; else goto block3;
block3:;
_14 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:390:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_17 = _3.value;
_18 = _14.value;
_19 = _17 == _18;
_20 = (frost$core$Bit) {_19};
_22 = _20.value;
if (_22) goto block2; else goto block5;
block5:;
_24 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:390:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_27 = _3.value;
_28 = _24.value;
_29 = _27 == _28;
_30 = (frost$core$Bit) {_29};
_32 = _30.value;
if (_32) goto block2; else goto block7;
block7:;
_34 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:390:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_37 = _3.value;
_38 = _34.value;
_39 = _37 == _38;
_40 = (frost$core$Bit) {_39};
_42 = _40.value;
if (_42) goto block2; else goto block9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:391
_45 = (frost$core$Bit) {true};
return _45;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:394
_48 = (frost$core$Bit) {false};
return _48;
block1:;
goto block11;
block11:;

}
frost$core$Bit org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

org$frostlang$frostc$Symbol* _1;
frost$core$String** _2;
frost$core$String* _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:400
_1 = ((org$frostlang$frostc$Symbol*) param0);
_2 = &_1->name;
_3 = *_2;
_4 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_3, &$s292);
return _4;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNewPointer$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

org$frostlang$frostc$Symbol* _1;
frost$core$String** _2;
frost$core$String* _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:404
_1 = ((org$frostlang$frostc$Symbol*) param0);
_2 = &_1->name;
_3 = *_2;
_4 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_3, &$s293);
return _4;

}
frost$core$Bit org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

org$frostlang$frostc$Symbol* _1;
frost$core$String** _2;
frost$core$String* _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:408
_1 = ((org$frostlang$frostc$Symbol*) param0);
_2 = &_1->name;
_3 = *_2;
_4 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_3, &$s294);
return _4;

}
frost$core$Bit org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

org$frostlang$frostc$Symbol* _1;
frost$core$String** _2;
frost$core$String* _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:412
_1 = ((org$frostlang$frostc$Symbol*) param0);
_2 = &_1->name;
_3 = *_2;
_4 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_3, &$s295);
return _4;

}
frost$core$Bit org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind* _1;
org$frostlang$frostc$Type$Kind _2;
frost$core$Equatable* _3;
frost$core$Int _4;
frost$core$Int* _7;
org$frostlang$frostc$Type$Kind _9;
org$frostlang$frostc$Type$Kind _12;
frost$core$Equatable* _13;
$fn296 _14;
frost$core$Bit _15;
frost$core$Object* _16;
frost$core$Object* _18;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:416
_1 = &param0->typeKind;
_2 = *_1;
org$frostlang$frostc$Type$Kind$wrapper* $tmp297;
$tmp297 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp297->value = _2;
_3 = ((frost$core$Equatable*) $tmp297);
_4 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:416:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_7 = &(&local1)->$rawValue;
*_7 = _4;
_9 = *(&local1);
*(&local0) = _9;
_12 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp298;
$tmp298 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp298->value = _12;
_13 = ((frost$core$Equatable*) $tmp298);
ITable* $tmp299 = _3->$class->itable;
while ($tmp299->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp299 = $tmp299->next;
}
_14 = $tmp299->methods[0];
_15 = _14(_3, _13);
_16 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_18);
return _15;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
frost$collections$Array* local2 = NULL;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind* _1;
org$frostlang$frostc$Type$Kind _2;
frost$core$Equatable* _3;
frost$core$Int _4;
frost$core$Int* _7;
org$frostlang$frostc$Type$Kind _9;
org$frostlang$frostc$Type$Kind _12;
frost$core$Equatable* _13;
$fn300 _14;
frost$core$Bit _15;
bool _16;
frost$core$Object* _17;
frost$core$Object* _19;
frost$core$Object* _23;
frost$collections$Array* _27;
frost$core$Object* _30;
frost$collections$Array* _32;
frost$core$Object* _33;
frost$core$Object* _36;
frost$collections$Array* _39;
frost$core$Object* _40;
org$frostlang$frostc$Type* _43;
org$frostlang$frostc$Symbol* _44;
frost$core$String** _45;
frost$core$String* _46;
frost$core$Object* _49;
frost$core$String* _52;
frost$core$Int _53;
frost$core$Int* _56;
org$frostlang$frostc$Type$Kind _58;
org$frostlang$frostc$Type$Kind _61;
org$frostlang$frostc$Position _62;
frost$collections$Array* _63;
frost$collections$ListView* _64;
frost$core$Bit _65;
frost$core$Object* _67;
frost$core$Object* _69;
frost$core$Object* _71;
frost$core$Object* _73;
frost$collections$Array* _75;
frost$core$Object* _76;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:420
_1 = &param0->typeKind;
_2 = *_1;
org$frostlang$frostc$Type$Kind$wrapper* $tmp301;
$tmp301 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp301->value = _2;
_3 = ((frost$core$Equatable*) $tmp301);
_4 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:420:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_7 = &(&local1)->$rawValue;
*_7 = _4;
_9 = *(&local1);
*(&local0) = _9;
_12 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp302;
$tmp302 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp302->value = _12;
_13 = ((frost$core$Equatable*) $tmp302);
ITable* $tmp303 = _3->$class->itable;
while ($tmp303->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp303 = $tmp303->next;
}
_14 = $tmp303->methods[0];
_15 = _14(_3, _13);
_16 = _15.value;
_17 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_19);
if (_16) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:421
_23 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_23);
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:423
_27 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_27);
*(&local2) = ((frost$collections$Array*) NULL);
_30 = ((frost$core$Object*) _27);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = *(&local2);
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
*(&local2) = _27;
_36 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_36);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:424
_39 = *(&local2);
_40 = ((frost$core$Object*) param0);
frost$collections$Array$add$frost$collections$Array$T(_39, _40);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
_43 = (org$frostlang$frostc$Type*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type), (frost$core$Class*) &org$frostlang$frostc$Type$class);
_44 = ((org$frostlang$frostc$Symbol*) param0);
_45 = &_44->name;
_46 = *_45;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Type.frost:425:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_49 = ((frost$core$Object*) _46);
frost$core$Frost$ref$frost$core$Object$Q(_49);
_52 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_46, &$s304);
_53 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:425:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_56 = &(&local4)->$rawValue;
*_56 = _53;
_58 = *(&local4);
*(&local3) = _58;
_61 = *(&local3);
_62 = org$frostlang$frostc$Position$init();
_63 = *(&local2);
_64 = ((frost$collections$ListView*) _63);
_65 = (frost$core$Bit) {true};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit(_43, _52, _61, _62, _64, _65);
_67 = ((frost$core$Object*) _43);
frost$core$Frost$ref$frost$core$Object$Q(_67);
_69 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_69);
_71 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_71);
_73 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_73);
_75 = *(&local2);
_76 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_76);
*(&local2) = ((frost$collections$Array*) NULL);
return _43;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind* _1;
org$frostlang$frostc$Type$Kind _2;
frost$core$Equatable* _3;
frost$core$Int _4;
frost$core$Int* _7;
org$frostlang$frostc$Type$Kind _9;
org$frostlang$frostc$Type$Kind _12;
frost$core$Equatable* _13;
$fn305 _14;
frost$core$Bit _15;
bool _16;
frost$core$Object* _17;
frost$core$Object* _19;
frost$core$Object* _23;
org$frostlang$frostc$FixedArray** _29;
org$frostlang$frostc$FixedArray* _30;
bool _31;
frost$core$Bit _32;
bool _33;
frost$core$Int _35;
org$frostlang$frostc$FixedArray* _38;
frost$core$Object* _39;
frost$core$Int _42;
frost$core$Object* _43;
org$frostlang$frostc$Type* _44;
frost$core$Object* _45;
frost$core$Object* _47;
frost$core$Object* _49;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:429
_1 = &param0->typeKind;
_2 = *_1;
org$frostlang$frostc$Type$Kind$wrapper* $tmp306;
$tmp306 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp306->value = _2;
_3 = ((frost$core$Equatable*) $tmp306);
_4 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:429:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_7 = &(&local1)->$rawValue;
*_7 = _4;
_9 = *(&local1);
*(&local0) = _9;
_12 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp307;
$tmp307 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp307->value = _12;
_13 = ((frost$core$Equatable*) $tmp307);
ITable* $tmp308 = _3->$class->itable;
while ($tmp308->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp308 = $tmp308->next;
}
_14 = $tmp308->methods[1];
_15 = _14(_3, _13);
_16 = _15.value;
_17 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_19);
if (_16) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:430
_23 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_23);
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:432
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:432:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_29 = &param0->_subtypes;
_30 = *_29;
_31 = _30 != NULL;
_32 = (frost$core$Bit) {_31};
_33 = _32.value;
if (_33) goto block5; else goto block6;
block6:;
_35 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s309, _35, &$s310);
abort(); // unreachable
block5:;
_38 = _30;
_39 = ((frost$core$Object*) _38);
frost$core$Frost$ref$frost$core$Object$Q(_39);
_42 = (frost$core$Int) {0u};
_43 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_38, _42);
_44 = ((org$frostlang$frostc$Type*) _43);
_45 = ((frost$core$Object*) _44);
frost$core$Frost$ref$frost$core$Object$Q(_45);
_47 = _43;
frost$core$Frost$unref$frost$core$Object$Q(_47);
_49 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_49);
return _44;

}
frost$core$Int org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

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
frost$core$Int _3;
frost$core$Int* _6;
org$frostlang$frostc$Type$Kind _8;
org$frostlang$frostc$Type$Kind _11;
frost$core$Equatable* _12;
$fn311 _13;
frost$core$Bit _14;
bool _15;
frost$core$Object* _16;
frost$core$Object* _18;
org$frostlang$frostc$Type$Kind* _21;
org$frostlang$frostc$Type$Kind _22;
frost$core$Equatable* _23;
frost$core$Int _24;
frost$core$Int* _27;
org$frostlang$frostc$Type$Kind _29;
org$frostlang$frostc$Type$Kind _32;
frost$core$Equatable* _33;
$fn312 _34;
frost$core$Bit _35;
bool _36;
frost$core$Object* _37;
frost$core$Object* _39;
org$frostlang$frostc$Type$Kind* _42;
org$frostlang$frostc$Type$Kind _43;
frost$core$Equatable* _44;
frost$core$Int _45;
frost$core$Int* _48;
org$frostlang$frostc$Type$Kind _50;
org$frostlang$frostc$Type$Kind _53;
frost$core$Equatable* _54;
$fn313 _55;
frost$core$Bit _56;
bool _57;
frost$core$Object* _58;
frost$core$Object* _60;
org$frostlang$frostc$Type$Kind* _63;
org$frostlang$frostc$Type$Kind _64;
frost$core$Equatable* _65;
frost$core$Int _66;
frost$core$Int* _69;
org$frostlang$frostc$Type$Kind _71;
org$frostlang$frostc$Type$Kind _74;
frost$core$Equatable* _75;
$fn314 _76;
frost$core$Bit _77;
bool _78;
frost$core$Object* _79;
frost$core$Object* _81;
frost$core$Int _84;
org$frostlang$frostc$FixedArray** _90;
org$frostlang$frostc$FixedArray* _91;
bool _92;
frost$core$Bit _93;
bool _94;
frost$core$Int _96;
org$frostlang$frostc$FixedArray* _99;
frost$core$Object* _100;
frost$collections$CollectionView* _103;
$fn315 _104;
frost$core$Int _105;
frost$core$Int _106;
int64_t _107;
int64_t _108;
int64_t _109;
frost$core$Int _110;
frost$core$Object* _111;
_0 = &param0->typeKind;
_1 = *_0;
org$frostlang$frostc$Type$Kind$wrapper* $tmp316;
$tmp316 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp316->value = _1;
_2 = ((frost$core$Equatable*) $tmp316);
_3 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_6 = &(&local1)->$rawValue;
*_6 = _3;
_8 = *(&local1);
*(&local0) = _8;
_11 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp317;
$tmp317 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp317->value = _11;
_12 = ((frost$core$Equatable*) $tmp317);
ITable* $tmp318 = _2->$class->itable;
while ($tmp318->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp318 = $tmp318->next;
}
_13 = $tmp318->methods[0];
_14 = _13(_2, _12);
_15 = _14.value;
_16 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_18);
if (_15) goto block1; else goto block5;
block5:;
_21 = &param0->typeKind;
_22 = *_21;
org$frostlang$frostc$Type$Kind$wrapper* $tmp319;
$tmp319 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp319->value = _22;
_23 = ((frost$core$Equatable*) $tmp319);
_24 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:435:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_27 = &(&local3)->$rawValue;
*_27 = _24;
_29 = *(&local3);
*(&local2) = _29;
_32 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp320;
$tmp320 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp320->value = _32;
_33 = ((frost$core$Equatable*) $tmp320);
ITable* $tmp321 = _23->$class->itable;
while ($tmp321->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp321 = $tmp321->next;
}
_34 = $tmp321->methods[0];
_35 = _34(_23, _33);
_36 = _35.value;
_37 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_37);
_39 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_39);
if (_36) goto block1; else goto block4;
block4:;
_42 = &param0->typeKind;
_43 = *_42;
org$frostlang$frostc$Type$Kind$wrapper* $tmp322;
$tmp322 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp322->value = _43;
_44 = ((frost$core$Equatable*) $tmp322);
_45 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:435:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_48 = &(&local5)->$rawValue;
*_48 = _45;
_50 = *(&local5);
*(&local4) = _50;
_53 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp323;
$tmp323 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp323->value = _53;
_54 = ((frost$core$Equatable*) $tmp323);
ITable* $tmp324 = _44->$class->itable;
while ($tmp324->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp324 = $tmp324->next;
}
_55 = $tmp324->methods[0];
_56 = _55(_44, _54);
_57 = _56.value;
_58 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_58);
_60 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_60);
if (_57) goto block1; else goto block3;
block3:;
_63 = &param0->typeKind;
_64 = *_63;
org$frostlang$frostc$Type$Kind$wrapper* $tmp325;
$tmp325 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp325->value = _64;
_65 = ((frost$core$Equatable*) $tmp325);
_66 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:436:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_69 = &(&local7)->$rawValue;
*_69 = _66;
_71 = *(&local7);
*(&local6) = _71;
_74 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp326;
$tmp326 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp326->value = _74;
_75 = ((frost$core$Equatable*) $tmp326);
ITable* $tmp327 = _65->$class->itable;
while ($tmp327->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp327 = $tmp327->next;
}
_76 = $tmp327->methods[0];
_77 = _76(_65, _75);
_78 = _77.value;
_79 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_79);
_81 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_81);
if (_78) goto block1; else goto block2;
block2:;
_84 = (frost$core$Int) {437u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s328, _84, &$s329);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:438
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:438:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_90 = &param0->_subtypes;
_91 = *_90;
_92 = _91 != NULL;
_93 = (frost$core$Bit) {_92};
_94 = _93.value;
if (_94) goto block11; else goto block12;
block12:;
_96 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s330, _96, &$s331);
abort(); // unreachable
block11:;
_99 = _91;
_100 = ((frost$core$Object*) _99);
frost$core$Frost$ref$frost$core$Object$Q(_100);
_103 = ((frost$collections$CollectionView*) _99);
ITable* $tmp332 = _103->$class->itable;
while ($tmp332->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp332 = $tmp332->next;
}
_104 = $tmp332->methods[0];
_105 = _104(_103);
_106 = (frost$core$Int) {1u};
_107 = _105.value;
_108 = _106.value;
_109 = _107 - _108;
_110 = (frost$core$Int) {_109};
_111 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_111);
return _110;

}
frost$collections$ListView* org$frostlang$frostc$Type$get_parameterTypes$R$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

org$frostlang$frostc$FixedArray** _3;
org$frostlang$frostc$FixedArray* _4;
bool _5;
frost$core$Bit _6;
bool _7;
frost$core$Int _9;
org$frostlang$frostc$FixedArray* _12;
frost$core$Object* _13;
frost$collections$ListView* _16;
frost$core$Int _17;
org$frostlang$frostc$FixedArray** _20;
org$frostlang$frostc$FixedArray* _21;
bool _22;
frost$core$Bit _23;
bool _24;
frost$core$Int _26;
org$frostlang$frostc$FixedArray* _29;
frost$core$Object* _30;
frost$collections$CollectionView* _33;
$fn333 _34;
frost$core$Int _35;
frost$core$Int _36;
int64_t _37;
int64_t _38;
int64_t _39;
frost$core$Int _40;
frost$core$Bit _41;
frost$core$Range$LTfrost$core$Int$GT _42;
$fn334 _43;
frost$collections$ListView* _44;
frost$core$Object* _45;
frost$core$Object* _47;
frost$core$Object* _49;
frost$core$Object* _51;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:442
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:442:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_3 = &param0->_subtypes;
_4 = *_3;
_5 = _4 != NULL;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block2; else goto block3;
block3:;
_9 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s335, _9, &$s336);
abort(); // unreachable
block2:;
_12 = _4;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$ref$frost$core$Object$Q(_13);
_16 = ((frost$collections$ListView*) _12);
_17 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:442:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_20 = &param0->_subtypes;
_21 = *_20;
_22 = _21 != NULL;
_23 = (frost$core$Bit) {_22};
_24 = _23.value;
if (_24) goto block5; else goto block6;
block6:;
_26 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s337, _26, &$s338);
abort(); // unreachable
block5:;
_29 = _21;
_30 = ((frost$core$Object*) _29);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_33 = ((frost$collections$CollectionView*) _29);
ITable* $tmp339 = _33->$class->itable;
while ($tmp339->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp339 = $tmp339->next;
}
_34 = $tmp339->methods[0];
_35 = _34(_33);
_36 = (frost$core$Int) {1u};
_37 = _35.value;
_38 = _36.value;
_39 = _37 - _38;
_40 = (frost$core$Int) {_39};
_41 = (frost$core$Bit) {false};
_42 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_17, _40, _41);
ITable* $tmp340 = _16->$class->itable;
while ($tmp340->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp340 = $tmp340->next;
}
_43 = $tmp340->methods[1];
_44 = _43(_16, _42);
_45 = ((frost$core$Object*) _44);
frost$core$Frost$ref$frost$core$Object$Q(_45);
_47 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_47);
_49 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_49);
_51 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_51);
return _44;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$parameterType$frost$core$Int$R$org$frostlang$frostc$Type(void* rawSelf, frost$core$Int param1) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

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
frost$core$Int _3;
frost$core$Int* _6;
org$frostlang$frostc$Type$Kind _8;
org$frostlang$frostc$Type$Kind _11;
frost$core$Equatable* _12;
$fn341 _13;
frost$core$Bit _14;
bool _15;
frost$core$Object* _16;
frost$core$Object* _18;
org$frostlang$frostc$Type$Kind* _21;
org$frostlang$frostc$Type$Kind _22;
frost$core$Equatable* _23;
frost$core$Int _24;
frost$core$Int* _27;
org$frostlang$frostc$Type$Kind _29;
org$frostlang$frostc$Type$Kind _32;
frost$core$Equatable* _33;
$fn342 _34;
frost$core$Bit _35;
bool _36;
frost$core$Object* _37;
frost$core$Object* _39;
org$frostlang$frostc$Type$Kind* _42;
org$frostlang$frostc$Type$Kind _43;
frost$core$Equatable* _44;
frost$core$Int _45;
frost$core$Int* _48;
org$frostlang$frostc$Type$Kind _50;
org$frostlang$frostc$Type$Kind _53;
frost$core$Equatable* _54;
$fn343 _55;
frost$core$Bit _56;
bool _57;
frost$core$Object* _58;
frost$core$Object* _60;
org$frostlang$frostc$Type$Kind* _63;
org$frostlang$frostc$Type$Kind _64;
frost$core$Equatable* _65;
frost$core$Int _66;
frost$core$Int* _69;
org$frostlang$frostc$Type$Kind _71;
org$frostlang$frostc$Type$Kind _74;
frost$core$Equatable* _75;
$fn344 _76;
frost$core$Bit _77;
bool _78;
frost$core$Object* _79;
frost$core$Object* _81;
frost$core$Int _84;
int64_t _85;
int64_t _86;
bool _87;
frost$core$Bit _88;
bool _89;
org$frostlang$frostc$FixedArray** _93;
org$frostlang$frostc$FixedArray* _94;
bool _95;
frost$core$Bit _96;
bool _97;
frost$core$Int _99;
org$frostlang$frostc$FixedArray* _102;
frost$core$Object* _103;
frost$collections$CollectionView* _106;
$fn345 _107;
frost$core$Int _108;
frost$core$Int _109;
int64_t _110;
int64_t _111;
int64_t _112;
frost$core$Int _113;
int64_t _114;
int64_t _115;
bool _116;
frost$core$Bit _117;
bool _118;
frost$core$Object* _119;
frost$core$Int _122;
org$frostlang$frostc$FixedArray** _128;
org$frostlang$frostc$FixedArray* _129;
bool _130;
frost$core$Bit _131;
bool _132;
frost$core$Int _134;
org$frostlang$frostc$FixedArray* _137;
frost$core$Object* _138;
frost$core$Object* _141;
org$frostlang$frostc$Type* _142;
frost$core$Object* _143;
frost$core$Object* _145;
frost$core$Object* _147;
_0 = &param0->typeKind;
_1 = *_0;
org$frostlang$frostc$Type$Kind$wrapper* $tmp346;
$tmp346 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp346->value = _1;
_2 = ((frost$core$Equatable*) $tmp346);
_3 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:445:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_6 = &(&local1)->$rawValue;
*_6 = _3;
_8 = *(&local1);
*(&local0) = _8;
_11 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp347;
$tmp347 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp347->value = _11;
_12 = ((frost$core$Equatable*) $tmp347);
ITable* $tmp348 = _2->$class->itable;
while ($tmp348->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp348 = $tmp348->next;
}
_13 = $tmp348->methods[0];
_14 = _13(_2, _12);
_15 = _14.value;
_16 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_18);
if (_15) goto block4; else goto block7;
block7:;
_21 = &param0->typeKind;
_22 = *_21;
org$frostlang$frostc$Type$Kind$wrapper* $tmp349;
$tmp349 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp349->value = _22;
_23 = ((frost$core$Equatable*) $tmp349);
_24 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:445:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_27 = &(&local3)->$rawValue;
*_27 = _24;
_29 = *(&local3);
*(&local2) = _29;
_32 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp350;
$tmp350 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp350->value = _32;
_33 = ((frost$core$Equatable*) $tmp350);
ITable* $tmp351 = _23->$class->itable;
while ($tmp351->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp351 = $tmp351->next;
}
_34 = $tmp351->methods[0];
_35 = _34(_23, _33);
_36 = _35.value;
_37 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_37);
_39 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_39);
if (_36) goto block4; else goto block6;
block6:;
_42 = &param0->typeKind;
_43 = *_42;
org$frostlang$frostc$Type$Kind$wrapper* $tmp352;
$tmp352 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp352->value = _43;
_44 = ((frost$core$Equatable*) $tmp352);
_45 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:445:78
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_48 = &(&local5)->$rawValue;
*_48 = _45;
_50 = *(&local5);
*(&local4) = _50;
_53 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp353;
$tmp353 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp353->value = _53;
_54 = ((frost$core$Equatable*) $tmp353);
ITable* $tmp354 = _44->$class->itable;
while ($tmp354->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp354 = $tmp354->next;
}
_55 = $tmp354->methods[0];
_56 = _55(_44, _54);
_57 = _56.value;
_58 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_58);
_60 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_60);
if (_57) goto block4; else goto block5;
block5:;
_63 = &param0->typeKind;
_64 = *_63;
org$frostlang$frostc$Type$Kind$wrapper* $tmp355;
$tmp355 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp355->value = _64;
_65 = ((frost$core$Equatable*) $tmp355);
_66 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:446:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_69 = &(&local7)->$rawValue;
*_69 = _66;
_71 = *(&local7);
*(&local6) = _71;
_74 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp356;
$tmp356 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp356->value = _74;
_75 = ((frost$core$Equatable*) $tmp356);
ITable* $tmp357 = _65->$class->itable;
while ($tmp357->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp357 = $tmp357->next;
}
_76 = $tmp357->methods[0];
_77 = _76(_65, _75);
_78 = _77.value;
_79 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_79);
_81 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_81);
if (_78) goto block4; else goto block2;
block4:;
_84 = (frost$core$Int) {0u};
_85 = param1.value;
_86 = _84.value;
_87 = _85 >= _86;
_88 = (frost$core$Bit) {_87};
_89 = _88.value;
if (_89) goto block3; else goto block2;
block3:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:446:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_93 = &param0->_subtypes;
_94 = *_93;
_95 = _94 != NULL;
_96 = (frost$core$Bit) {_95};
_97 = _96.value;
if (_97) goto block13; else goto block14;
block14:;
_99 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s358, _99, &$s359);
abort(); // unreachable
block13:;
_102 = _94;
_103 = ((frost$core$Object*) _102);
frost$core$Frost$ref$frost$core$Object$Q(_103);
_106 = ((frost$collections$CollectionView*) _102);
ITable* $tmp360 = _106->$class->itable;
while ($tmp360->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp360 = $tmp360->next;
}
_107 = $tmp360->methods[0];
_108 = _107(_106);
_109 = (frost$core$Int) {1u};
_110 = _108.value;
_111 = _109.value;
_112 = _110 - _111;
_113 = (frost$core$Int) {_112};
_114 = param1.value;
_115 = _113.value;
_116 = _114 < _115;
_117 = (frost$core$Bit) {_116};
_118 = _117.value;
_119 = ((frost$core$Object*) _102);
frost$core$Frost$unref$frost$core$Object$Q(_119);
if (_118) goto block1; else goto block2;
block2:;
_122 = (frost$core$Int) {447u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s361, _122, &$s362);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:448
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:448:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_128 = &param0->_subtypes;
_129 = *_128;
_130 = _129 != NULL;
_131 = (frost$core$Bit) {_130};
_132 = _131.value;
if (_132) goto block16; else goto block17;
block17:;
_134 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s363, _134, &$s364);
abort(); // unreachable
block16:;
_137 = _129;
_138 = ((frost$core$Object*) _137);
frost$core$Frost$ref$frost$core$Object$Q(_138);
_141 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_137, param1);
_142 = ((org$frostlang$frostc$Type*) _141);
_143 = ((frost$core$Object*) _142);
frost$core$Frost$ref$frost$core$Object$Q(_143);
_145 = _141;
frost$core$Frost$unref$frost$core$Object$Q(_145);
_147 = ((frost$core$Object*) _137);
frost$core$Frost$unref$frost$core$Object$Q(_147);
return _142;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

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
frost$core$Int _3;
frost$core$Int* _6;
org$frostlang$frostc$Type$Kind _8;
org$frostlang$frostc$Type$Kind _11;
frost$core$Equatable* _12;
$fn365 _13;
frost$core$Bit _14;
bool _15;
frost$core$Object* _16;
frost$core$Object* _18;
org$frostlang$frostc$Type$Kind* _21;
org$frostlang$frostc$Type$Kind _22;
frost$core$Equatable* _23;
frost$core$Int _24;
frost$core$Int* _27;
org$frostlang$frostc$Type$Kind _29;
org$frostlang$frostc$Type$Kind _32;
frost$core$Equatable* _33;
$fn366 _34;
frost$core$Bit _35;
bool _36;
frost$core$Object* _37;
frost$core$Object* _39;
org$frostlang$frostc$Type$Kind* _42;
org$frostlang$frostc$Type$Kind _43;
frost$core$Equatable* _44;
frost$core$Int _45;
frost$core$Int* _48;
org$frostlang$frostc$Type$Kind _50;
org$frostlang$frostc$Type$Kind _53;
frost$core$Equatable* _54;
$fn367 _55;
frost$core$Bit _56;
bool _57;
frost$core$Object* _58;
frost$core$Object* _60;
org$frostlang$frostc$Type$Kind* _63;
org$frostlang$frostc$Type$Kind _64;
frost$core$Equatable* _65;
frost$core$Int _66;
frost$core$Int* _69;
org$frostlang$frostc$Type$Kind _71;
org$frostlang$frostc$Type$Kind _74;
frost$core$Equatable* _75;
$fn368 _76;
frost$core$Bit _77;
bool _78;
frost$core$Object* _79;
frost$core$Object* _81;
frost$core$Int _84;
org$frostlang$frostc$FixedArray** _90;
org$frostlang$frostc$FixedArray* _91;
bool _92;
frost$core$Bit _93;
bool _94;
frost$core$Int _96;
org$frostlang$frostc$FixedArray* _99;
frost$core$Object* _100;
frost$collections$ListView* _103;
$fn369 _104;
frost$core$Object* _105;
org$frostlang$frostc$Type* _106;
frost$core$Object* _107;
frost$core$Object* _109;
frost$core$Object* _111;
_0 = &param0->typeKind;
_1 = *_0;
org$frostlang$frostc$Type$Kind$wrapper* $tmp370;
$tmp370 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp370->value = _1;
_2 = ((frost$core$Equatable*) $tmp370);
_3 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:451:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_6 = &(&local1)->$rawValue;
*_6 = _3;
_8 = *(&local1);
*(&local0) = _8;
_11 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp371;
$tmp371 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp371->value = _11;
_12 = ((frost$core$Equatable*) $tmp371);
ITable* $tmp372 = _2->$class->itable;
while ($tmp372->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp372 = $tmp372->next;
}
_13 = $tmp372->methods[0];
_14 = _13(_2, _12);
_15 = _14.value;
_16 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_18);
if (_15) goto block1; else goto block5;
block5:;
_21 = &param0->typeKind;
_22 = *_21;
org$frostlang$frostc$Type$Kind$wrapper* $tmp373;
$tmp373 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp373->value = _22;
_23 = ((frost$core$Equatable*) $tmp373);
_24 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:451:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_27 = &(&local3)->$rawValue;
*_27 = _24;
_29 = *(&local3);
*(&local2) = _29;
_32 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp374;
$tmp374 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp374->value = _32;
_33 = ((frost$core$Equatable*) $tmp374);
ITable* $tmp375 = _23->$class->itable;
while ($tmp375->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp375 = $tmp375->next;
}
_34 = $tmp375->methods[0];
_35 = _34(_23, _33);
_36 = _35.value;
_37 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_37);
_39 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_39);
if (_36) goto block1; else goto block4;
block4:;
_42 = &param0->typeKind;
_43 = *_42;
org$frostlang$frostc$Type$Kind$wrapper* $tmp376;
$tmp376 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp376->value = _43;
_44 = ((frost$core$Equatable*) $tmp376);
_45 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:451:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_48 = &(&local5)->$rawValue;
*_48 = _45;
_50 = *(&local5);
*(&local4) = _50;
_53 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp377;
$tmp377 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp377->value = _53;
_54 = ((frost$core$Equatable*) $tmp377);
ITable* $tmp378 = _44->$class->itable;
while ($tmp378->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp378 = $tmp378->next;
}
_55 = $tmp378->methods[0];
_56 = _55(_44, _54);
_57 = _56.value;
_58 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_58);
_60 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_60);
if (_57) goto block1; else goto block3;
block3:;
_63 = &param0->typeKind;
_64 = *_63;
org$frostlang$frostc$Type$Kind$wrapper* $tmp379;
$tmp379 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp379->value = _64;
_65 = ((frost$core$Equatable*) $tmp379);
_66 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:452:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_69 = &(&local7)->$rawValue;
*_69 = _66;
_71 = *(&local7);
*(&local6) = _71;
_74 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp380;
$tmp380 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp380->value = _74;
_75 = ((frost$core$Equatable*) $tmp380);
ITable* $tmp381 = _65->$class->itable;
while ($tmp381->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp381 = $tmp381->next;
}
_76 = $tmp381->methods[0];
_77 = _76(_65, _75);
_78 = _77.value;
_79 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_79);
_81 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_81);
if (_78) goto block1; else goto block2;
block2:;
_84 = (frost$core$Int) {453u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s382, _84, &$s383);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:454
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:454:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_90 = &param0->_subtypes;
_91 = *_90;
_92 = _91 != NULL;
_93 = (frost$core$Bit) {_92};
_94 = _93.value;
if (_94) goto block11; else goto block12;
block12:;
_96 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s384, _96, &$s385);
abort(); // unreachable
block11:;
_99 = _91;
_100 = ((frost$core$Object*) _99);
frost$core$Frost$ref$frost$core$Object$Q(_100);
_103 = ((frost$collections$ListView*) _99);
ITable* $tmp386 = _103->$class->itable;
while ($tmp386->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp386 = $tmp386->next;
}
_104 = $tmp386->methods[5];
_105 = _104(_103);
_106 = ((org$frostlang$frostc$Type*) _105);
_107 = ((frost$core$Object*) _106);
frost$core$Frost$ref$frost$core$Object$Q(_107);
_109 = _105;
frost$core$Frost$unref$frost$core$Object$Q(_109);
_111 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_111);
return _106;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(void* rawSelf, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

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
org$frostlang$frostc$Type$Kind* _15;
org$frostlang$frostc$Type$Kind _16;
frost$core$Equatable* _17;
$fn387 _18;
frost$core$Bit _19;
frost$core$Object* _20;
frost$core$Object* _22;
frost$core$Bit _28;
bool _30;
frost$core$Object* _33;
org$frostlang$frostc$Type** _37;
org$frostlang$frostc$Type* _38;
org$frostlang$frostc$Symbol* _41;
frost$core$String** _42;
frost$core$String* _43;
org$frostlang$frostc$Symbol* _44;
frost$core$String** _45;
frost$core$String* _46;
frost$core$Bit _47;
bool _48;
org$frostlang$frostc$Type$Kind* _50;
org$frostlang$frostc$Type$Kind _51;
frost$core$Equatable* _52;
org$frostlang$frostc$Type$Kind* _53;
org$frostlang$frostc$Type$Kind _54;
frost$core$Equatable* _55;
$fn388 _56;
frost$core$Bit _57;
frost$core$Object* _58;
frost$core$Object* _60;
frost$core$Bit _66;
bool _68;
org$frostlang$frostc$Type$Kind* _71;
org$frostlang$frostc$Type$Kind _72;
frost$core$Equatable* _73;
frost$core$Int _74;
frost$core$Int* _77;
org$frostlang$frostc$Type$Kind _79;
org$frostlang$frostc$Type$Kind _82;
frost$core$Equatable* _83;
$fn389 _84;
frost$core$Bit _85;
bool _86;
frost$core$Object* _87;
frost$core$Object* _89;
frost$core$Object* _93;
org$frostlang$frostc$Type* _97;
frost$core$Object* _98;
frost$core$Object* _100;
org$frostlang$frostc$Type** _104;
org$frostlang$frostc$Type* _105;
org$frostlang$frostc$Symbol* _108;
frost$core$String** _109;
frost$core$String* _110;
org$frostlang$frostc$Symbol* _111;
frost$core$String** _112;
frost$core$String* _113;
frost$core$Bit _114;
bool _115;
org$frostlang$frostc$Type$Kind* _117;
org$frostlang$frostc$Type$Kind _118;
frost$core$Equatable* _119;
org$frostlang$frostc$Type$Kind* _120;
org$frostlang$frostc$Type$Kind _121;
frost$core$Equatable* _122;
$fn390 _123;
frost$core$Bit _124;
frost$core$Object* _125;
frost$core$Object* _127;
frost$core$Bit _133;
bool _135;
org$frostlang$frostc$Type$Kind* _138;
org$frostlang$frostc$Type$Kind _139;
frost$core$Equatable* _140;
frost$core$Int _141;
frost$core$Int* _144;
org$frostlang$frostc$Type$Kind _146;
org$frostlang$frostc$Type$Kind _149;
frost$core$Equatable* _150;
$fn391 _151;
frost$core$Bit _152;
bool _153;
frost$core$Object* _154;
frost$core$Object* _156;
frost$core$Object* _160;
org$frostlang$frostc$Type* _164;
frost$core$Object* _165;
frost$core$Object* _167;
org$frostlang$frostc$Type** _171;
org$frostlang$frostc$Type* _172;
org$frostlang$frostc$Symbol* _175;
frost$core$String** _176;
frost$core$String* _177;
org$frostlang$frostc$Symbol* _178;
frost$core$String** _179;
frost$core$String* _180;
frost$core$Bit _181;
bool _182;
org$frostlang$frostc$Type$Kind* _184;
org$frostlang$frostc$Type$Kind _185;
frost$core$Equatable* _186;
org$frostlang$frostc$Type$Kind* _187;
org$frostlang$frostc$Type$Kind _188;
frost$core$Equatable* _189;
$fn392 _190;
frost$core$Bit _191;
frost$core$Object* _192;
frost$core$Object* _194;
frost$core$Bit _200;
bool _202;
frost$core$Object* _205;
org$frostlang$frostc$Type** _209;
org$frostlang$frostc$Type* _210;
org$frostlang$frostc$Symbol* _213;
frost$core$String** _214;
frost$core$String* _215;
org$frostlang$frostc$Symbol* _216;
frost$core$String** _217;
frost$core$String* _218;
frost$core$Bit _219;
bool _220;
org$frostlang$frostc$Type$Kind* _222;
org$frostlang$frostc$Type$Kind _223;
frost$core$Equatable* _224;
org$frostlang$frostc$Type$Kind* _225;
org$frostlang$frostc$Type$Kind _226;
frost$core$Equatable* _227;
$fn393 _228;
frost$core$Bit _229;
frost$core$Object* _230;
frost$core$Object* _232;
frost$core$Bit _238;
bool _240;
frost$core$Object* _243;
org$frostlang$frostc$Type$Kind* _247;
org$frostlang$frostc$Type$Kind _248;
frost$core$Equatable* _249;
frost$core$Int _250;
frost$core$Int* _253;
org$frostlang$frostc$Type$Kind _255;
org$frostlang$frostc$Type$Kind _258;
frost$core$Equatable* _259;
$fn394 _260;
frost$core$Bit _261;
bool _262;
frost$core$Object* _263;
frost$core$Object* _265;
frost$core$Bit _268;
bool _269;
frost$core$Object* _272;
frost$core$Bit _276;
bool _277;
org$frostlang$frostc$Type$Kind* _279;
org$frostlang$frostc$Type$Kind _280;
frost$core$Equatable* _281;
frost$core$Int _282;
frost$core$Int* _285;
org$frostlang$frostc$Type$Kind _287;
org$frostlang$frostc$Type$Kind _290;
frost$core$Equatable* _291;
$fn395 _292;
frost$core$Bit _293;
bool _294;
frost$core$Object* _295;
frost$core$Object* _297;
frost$core$Object* _301;
org$frostlang$frostc$Type$Kind* _307;
org$frostlang$frostc$Type$Kind _308;
frost$core$Equatable* _309;
frost$core$Int _310;
frost$core$Int* _313;
org$frostlang$frostc$Type$Kind _315;
org$frostlang$frostc$Type$Kind _318;
frost$core$Equatable* _319;
$fn396 _320;
frost$core$Bit _321;
bool _322;
org$frostlang$frostc$Symbol* _326;
frost$core$String** _327;
frost$core$String* _328;
frost$core$Bit _329;
frost$core$Bit _332;
frost$core$Object* _333;
frost$core$Object* _335;
bool _338;
org$frostlang$frostc$Type$Kind* _341;
org$frostlang$frostc$Type$Kind _342;
frost$core$Equatable* _343;
frost$core$Int _344;
frost$core$Int* _347;
org$frostlang$frostc$Type$Kind _349;
org$frostlang$frostc$Type$Kind _352;
frost$core$Equatable* _353;
$fn397 _354;
frost$core$Bit _355;
bool _356;
frost$core$Object* _357;
frost$core$Object* _359;
org$frostlang$frostc$Type$Kind* _362;
org$frostlang$frostc$Type$Kind _363;
frost$core$Equatable* _364;
frost$core$Int _365;
frost$core$Int* _368;
org$frostlang$frostc$Type$Kind _370;
org$frostlang$frostc$Type$Kind _373;
frost$core$Equatable* _374;
$fn398 _375;
frost$core$Bit _376;
bool _377;
frost$core$Object* _378;
frost$core$Object* _380;
frost$core$Object* _384;
frost$core$Bit _388;
bool _389;
org$frostlang$frostc$Symbol* _392;
frost$core$String** _393;
frost$core$String* _394;
frost$core$Bit _395;
bool _396;
org$frostlang$frostc$Type** _399;
org$frostlang$frostc$Type* _400;
frost$core$Object* _401;
org$frostlang$frostc$Type** _405;
org$frostlang$frostc$Type* _406;
frost$core$Object* _407;
org$frostlang$frostc$Type$Kind* _414;
org$frostlang$frostc$Type$Kind _415;
frost$core$Equatable* _416;
frost$core$Int _417;
frost$core$Int* _420;
org$frostlang$frostc$Type$Kind _422;
org$frostlang$frostc$Type$Kind _425;
frost$core$Equatable* _426;
$fn399 _427;
frost$core$Bit _428;
bool _429;
org$frostlang$frostc$Symbol* _433;
frost$core$String** _434;
frost$core$String* _435;
frost$core$Bit _436;
frost$core$Bit _439;
frost$core$Object* _440;
frost$core$Object* _442;
bool _445;
org$frostlang$frostc$Type$Kind* _448;
org$frostlang$frostc$Type$Kind _449;
frost$core$Equatable* _450;
frost$core$Int _451;
frost$core$Int* _454;
org$frostlang$frostc$Type$Kind _456;
org$frostlang$frostc$Type$Kind _459;
frost$core$Equatable* _460;
$fn400 _461;
frost$core$Bit _462;
bool _463;
frost$core$Object* _464;
frost$core$Object* _466;
org$frostlang$frostc$Type$Kind* _469;
org$frostlang$frostc$Type$Kind _470;
frost$core$Equatable* _471;
frost$core$Int _472;
frost$core$Int* _475;
org$frostlang$frostc$Type$Kind _477;
org$frostlang$frostc$Type$Kind _480;
frost$core$Equatable* _481;
$fn401 _482;
frost$core$Bit _483;
bool _484;
frost$core$Object* _485;
frost$core$Object* _487;
frost$core$Object* _491;
frost$core$Bit _495;
bool _496;
org$frostlang$frostc$Symbol* _499;
frost$core$String** _500;
frost$core$String* _501;
frost$core$Bit _502;
bool _503;
org$frostlang$frostc$Type** _506;
org$frostlang$frostc$Type* _507;
frost$core$Object* _508;
org$frostlang$frostc$Type** _512;
org$frostlang$frostc$Type* _513;
frost$core$Object* _514;
org$frostlang$frostc$Type$Kind* _519;
org$frostlang$frostc$Type$Kind _520;
frost$core$Equatable* _521;
frost$core$Int _522;
frost$core$Int* _525;
org$frostlang$frostc$Type$Kind _527;
org$frostlang$frostc$Type$Kind _530;
frost$core$Equatable* _531;
$fn402 _532;
frost$core$Bit _533;
bool _534;
frost$core$Object* _535;
frost$core$Object* _537;
org$frostlang$frostc$FixedArray** _543;
org$frostlang$frostc$FixedArray* _544;
bool _545;
frost$core$Bit _546;
bool _547;
frost$core$Int _549;
org$frostlang$frostc$FixedArray* _552;
frost$core$Object* _553;
frost$core$Int _556;
frost$core$Object* _557;
org$frostlang$frostc$Type* _558;
org$frostlang$frostc$Type* _559;
org$frostlang$frostc$Type* _560;
frost$core$Object* _561;
frost$core$Object* _563;
frost$core$Object* _565;
frost$core$Object* _567;
frost$core$Object* _569;
org$frostlang$frostc$Type$Kind* _573;
org$frostlang$frostc$Type$Kind _574;
frost$core$Equatable* _575;
frost$core$Int _576;
frost$core$Int* _579;
org$frostlang$frostc$Type$Kind _581;
org$frostlang$frostc$Type$Kind _584;
frost$core$Equatable* _585;
$fn403 _586;
frost$core$Bit _587;
bool _588;
frost$core$Object* _589;
frost$core$Object* _591;
org$frostlang$frostc$FixedArray** _597;
org$frostlang$frostc$FixedArray* _598;
bool _599;
frost$core$Bit _600;
bool _601;
frost$core$Int _603;
org$frostlang$frostc$FixedArray* _606;
frost$core$Object* _607;
frost$core$Int _610;
frost$core$Object* _611;
org$frostlang$frostc$Type* _612;
org$frostlang$frostc$Type* _613;
org$frostlang$frostc$Type* _614;
frost$core$Object* _615;
frost$core$Object* _617;
frost$core$Object* _619;
frost$core$Object* _621;
frost$core$Object* _623;
org$frostlang$frostc$Type* _627;
frost$core$Object* _629;
org$frostlang$frostc$Type* _631;
frost$core$Object* _632;
frost$core$Object* _635;
org$frostlang$frostc$Type* _638;
frost$core$Object* _640;
org$frostlang$frostc$Type* _642;
frost$core$Object* _643;
frost$core$Object* _646;
org$frostlang$frostc$Type* _649;
frost$core$Bit _650;
bool _651;
org$frostlang$frostc$Type* _653;
frost$core$Bit _654;
bool _655;
frost$collections$HashSet* _658;
frost$core$Object* _661;
frost$collections$HashSet* _663;
frost$core$Object* _664;
frost$core$Object* _667;
frost$core$Object* _671;
org$frostlang$frostc$Type* _673;
frost$core$Object* _674;
org$frostlang$frostc$Type* _678;
org$frostlang$frostc$ClassDecl* _679;
frost$core$Object* _681;
org$frostlang$frostc$ClassDecl* _683;
frost$core$Object* _684;
frost$core$Object* _687;
org$frostlang$frostc$ClassDecl* _691;
bool _692;
frost$core$Bit _693;
bool _694;
frost$collections$HashSet* _697;
org$frostlang$frostc$Type* _698;
frost$collections$HashKey* _699;
frost$collections$HashMap** _702;
frost$collections$HashMap* _703;
frost$collections$HashKey* _704;
frost$core$Object* _705;
org$frostlang$frostc$ClassDecl* _709;
bool _710;
frost$core$Bit _711;
bool _712;
frost$core$Int _714;
org$frostlang$frostc$ClassDecl* _717;
org$frostlang$frostc$Type** _718;
org$frostlang$frostc$Type* _719;
bool _720;
frost$core$Bit _721;
bool _722;
org$frostlang$frostc$Type* _725;
org$frostlang$frostc$ClassDecl* _726;
bool _727;
frost$core$Bit _728;
bool _729;
frost$core$Int _731;
org$frostlang$frostc$ClassDecl* _734;
org$frostlang$frostc$Type** _735;
org$frostlang$frostc$Type* _736;
bool _737;
frost$core$Bit _738;
bool _739;
frost$core$Int _741;
org$frostlang$frostc$Type* _744;
org$frostlang$frostc$Type* _745;
frost$core$Object* _746;
org$frostlang$frostc$Type* _748;
frost$core$Object* _749;
frost$core$Object* _752;
org$frostlang$frostc$Type* _755;
org$frostlang$frostc$ClassDecl* _756;
frost$core$Object* _757;
org$frostlang$frostc$ClassDecl* _759;
frost$core$Object* _760;
frost$core$Object* _763;
frost$core$Object* _768;
org$frostlang$frostc$ClassDecl* _770;
frost$core$Object* _771;
frost$core$Object* _777;
org$frostlang$frostc$Type* _779;
frost$core$Object* _780;
org$frostlang$frostc$Type* _784;
org$frostlang$frostc$ClassDecl* _785;
frost$core$Object* _786;
org$frostlang$frostc$ClassDecl* _788;
frost$core$Object* _789;
frost$core$Object* _792;
org$frostlang$frostc$ClassDecl* _796;
bool _797;
frost$core$Bit _798;
bool _799;
frost$collections$HashSet* _802;
org$frostlang$frostc$Type* _803;
frost$collections$HashKey* _804;
frost$collections$HashMap** _807;
frost$collections$HashMap* _808;
frost$collections$HashKey* _809;
frost$core$Bit _810;
bool _812;
org$frostlang$frostc$Type* _815;
frost$core$Object* _816;
org$frostlang$frostc$ClassDecl* _818;
frost$core$Object* _819;
org$frostlang$frostc$Type* _822;
frost$core$Object* _823;
frost$collections$HashSet* _826;
frost$core$Object* _827;
org$frostlang$frostc$Type* _830;
frost$core$Object* _831;
org$frostlang$frostc$Type* _834;
frost$core$Object* _835;
org$frostlang$frostc$ClassDecl* _840;
bool _841;
frost$core$Bit _842;
bool _843;
frost$core$Int _845;
org$frostlang$frostc$ClassDecl* _848;
org$frostlang$frostc$Type** _849;
org$frostlang$frostc$Type* _850;
bool _851;
frost$core$Bit _852;
bool _853;
org$frostlang$frostc$Type* _856;
org$frostlang$frostc$ClassDecl* _857;
bool _858;
frost$core$Bit _859;
bool _860;
frost$core$Int _862;
org$frostlang$frostc$ClassDecl* _865;
org$frostlang$frostc$Type** _866;
org$frostlang$frostc$Type* _867;
bool _868;
frost$core$Bit _869;
bool _870;
frost$core$Int _872;
org$frostlang$frostc$Type* _875;
org$frostlang$frostc$Type* _876;
frost$core$Object* _877;
org$frostlang$frostc$Type* _879;
frost$core$Object* _880;
frost$core$Object* _883;
org$frostlang$frostc$Type* _886;
org$frostlang$frostc$ClassDecl* _887;
frost$core$Object* _888;
org$frostlang$frostc$ClassDecl* _890;
frost$core$Object* _891;
frost$core$Object* _894;
frost$core$Object* _899;
org$frostlang$frostc$ClassDecl* _901;
frost$core$Object* _902;
org$frostlang$frostc$ClassDecl* _907;
frost$core$Object* _908;
org$frostlang$frostc$Type* _911;
frost$core$Object* _912;
frost$collections$HashSet* _915;
frost$core$Object* _916;
org$frostlang$frostc$Type** _921;
org$frostlang$frostc$Type* _922;
frost$core$Object* _923;
org$frostlang$frostc$Type* _925;
frost$core$Object* _926;
org$frostlang$frostc$Type* _929;
frost$core$Object* _930;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:461
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:461:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
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
org$frostlang$frostc$Type$Kind$wrapper* $tmp404;
$tmp404 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp404->value = _13;
_14 = ((frost$core$Equatable*) $tmp404);
_15 = &param2->typeKind;
_16 = *_15;
org$frostlang$frostc$Type$Kind$wrapper* $tmp405;
$tmp405 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp405->value = _16;
_17 = ((frost$core$Equatable*) $tmp405);
ITable* $tmp406 = _14->$class->itable;
while ($tmp406->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp406 = $tmp406->next;
}
_18 = $tmp406->methods[0];
_19 = _18(_14, _17);
_20 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_22 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_22);
*(&local0) = _19;
goto block6;
block5:;
*(&local0) = _9;
goto block6;
block6:;
_28 = *(&local0);
_30 = _28.value;
if (_30) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:462
_33 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_33);
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:464
_37 = &param1->NULL_TYPE;
_38 = *_37;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:464:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
_41 = ((org$frostlang$frostc$Symbol*) param0);
_42 = &_41->name;
_43 = *_42;
_44 = ((org$frostlang$frostc$Symbol*) _38);
_45 = &_44->name;
_46 = *_45;
_47 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_43, _46);
_48 = _47.value;
if (_48) goto block10; else goto block11;
block10:;
_50 = &param0->typeKind;
_51 = *_50;
org$frostlang$frostc$Type$Kind$wrapper* $tmp407;
$tmp407 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp407->value = _51;
_52 = ((frost$core$Equatable*) $tmp407);
_53 = &_38->typeKind;
_54 = *_53;
org$frostlang$frostc$Type$Kind$wrapper* $tmp408;
$tmp408 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp408->value = _54;
_55 = ((frost$core$Equatable*) $tmp408);
ITable* $tmp409 = _52->$class->itable;
while ($tmp409->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp409 = $tmp409->next;
}
_56 = $tmp409->methods[0];
_57 = _56(_52, _55);
_58 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_58);
_60 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_60);
*(&local1) = _57;
goto block12;
block11:;
*(&local1) = _47;
goto block12;
block12:;
_66 = *(&local1);
_68 = _66.value;
if (_68) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:465
_71 = &param2->typeKind;
_72 = *_71;
org$frostlang$frostc$Type$Kind$wrapper* $tmp410;
$tmp410 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp410->value = _72;
_73 = ((frost$core$Equatable*) $tmp410);
_74 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:465:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_77 = &(&local3)->$rawValue;
*_77 = _74;
_79 = *(&local3);
*(&local2) = _79;
_82 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp411;
$tmp411 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp411->value = _82;
_83 = ((frost$core$Equatable*) $tmp411);
ITable* $tmp412 = _73->$class->itable;
while ($tmp412->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp412 = $tmp412->next;
}
_84 = $tmp412->methods[0];
_85 = _84(_73, _83);
_86 = _85.value;
_87 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_87);
_89 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_89);
if (_86) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:466
_93 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_93);
return param2;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:468
_97 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param2);
_98 = ((frost$core$Object*) _97);
frost$core$Frost$ref$frost$core$Object$Q(_98);
_100 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_100);
return _97;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:470
_104 = &param1->NULL_TYPE;
_105 = *_104;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:470:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
_108 = ((org$frostlang$frostc$Symbol*) param2);
_109 = &_108->name;
_110 = *_109;
_111 = ((org$frostlang$frostc$Symbol*) _105);
_112 = &_111->name;
_113 = *_112;
_114 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_110, _113);
_115 = _114.value;
if (_115) goto block19; else goto block20;
block19:;
_117 = &param2->typeKind;
_118 = *_117;
org$frostlang$frostc$Type$Kind$wrapper* $tmp413;
$tmp413 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp413->value = _118;
_119 = ((frost$core$Equatable*) $tmp413);
_120 = &_105->typeKind;
_121 = *_120;
org$frostlang$frostc$Type$Kind$wrapper* $tmp414;
$tmp414 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp414->value = _121;
_122 = ((frost$core$Equatable*) $tmp414);
ITable* $tmp415 = _119->$class->itable;
while ($tmp415->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp415 = $tmp415->next;
}
_123 = $tmp415->methods[0];
_124 = _123(_119, _122);
_125 = ((frost$core$Object*) _122);
frost$core$Frost$unref$frost$core$Object$Q(_125);
_127 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_127);
*(&local4) = _124;
goto block21;
block20:;
*(&local4) = _114;
goto block21;
block21:;
_133 = *(&local4);
_135 = _133.value;
if (_135) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:471
_138 = &param0->typeKind;
_139 = *_138;
org$frostlang$frostc$Type$Kind$wrapper* $tmp416;
$tmp416 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp416->value = _139;
_140 = ((frost$core$Equatable*) $tmp416);
_141 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:471:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_144 = &(&local6)->$rawValue;
*_144 = _141;
_146 = *(&local6);
*(&local5) = _146;
_149 = *(&local5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp417;
$tmp417 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp417->value = _149;
_150 = ((frost$core$Equatable*) $tmp417);
ITable* $tmp418 = _140->$class->itable;
while ($tmp418->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp418 = $tmp418->next;
}
_151 = $tmp418->methods[0];
_152 = _151(_140, _150);
_153 = _152.value;
_154 = ((frost$core$Object*) _150);
frost$core$Frost$unref$frost$core$Object$Q(_154);
_156 = ((frost$core$Object*) _140);
frost$core$Frost$unref$frost$core$Object$Q(_156);
if (_153) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:472
_160 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_160);
return param0;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:474
_164 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(param0);
_165 = ((frost$core$Object*) _164);
frost$core$Frost$ref$frost$core$Object$Q(_165);
_167 = ((frost$core$Object*) _164);
frost$core$Frost$unref$frost$core$Object$Q(_167);
return _164;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:476
_171 = &param1->INVALID_TYPE;
_172 = *_171;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:476:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
_175 = ((org$frostlang$frostc$Symbol*) param0);
_176 = &_175->name;
_177 = *_176;
_178 = ((org$frostlang$frostc$Symbol*) _172);
_179 = &_178->name;
_180 = *_179;
_181 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_177, _180);
_182 = _181.value;
if (_182) goto block28; else goto block29;
block28:;
_184 = &param0->typeKind;
_185 = *_184;
org$frostlang$frostc$Type$Kind$wrapper* $tmp419;
$tmp419 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp419->value = _185;
_186 = ((frost$core$Equatable*) $tmp419);
_187 = &_172->typeKind;
_188 = *_187;
org$frostlang$frostc$Type$Kind$wrapper* $tmp420;
$tmp420 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp420->value = _188;
_189 = ((frost$core$Equatable*) $tmp420);
ITable* $tmp421 = _186->$class->itable;
while ($tmp421->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp421 = $tmp421->next;
}
_190 = $tmp421->methods[0];
_191 = _190(_186, _189);
_192 = ((frost$core$Object*) _189);
frost$core$Frost$unref$frost$core$Object$Q(_192);
_194 = ((frost$core$Object*) _186);
frost$core$Frost$unref$frost$core$Object$Q(_194);
*(&local7) = _191;
goto block30;
block29:;
*(&local7) = _181;
goto block30;
block30:;
_200 = *(&local7);
_202 = _200.value;
if (_202) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:477
_205 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_205);
return param0;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:479
_209 = &param1->INVALID_TYPE;
_210 = *_209;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:479:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
_213 = ((org$frostlang$frostc$Symbol*) param2);
_214 = &_213->name;
_215 = *_214;
_216 = ((org$frostlang$frostc$Symbol*) _210);
_217 = &_216->name;
_218 = *_217;
_219 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_215, _218);
_220 = _219.value;
if (_220) goto block34; else goto block35;
block34:;
_222 = &param2->typeKind;
_223 = *_222;
org$frostlang$frostc$Type$Kind$wrapper* $tmp422;
$tmp422 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp422->value = _223;
_224 = ((frost$core$Equatable*) $tmp422);
_225 = &_210->typeKind;
_226 = *_225;
org$frostlang$frostc$Type$Kind$wrapper* $tmp423;
$tmp423 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp423->value = _226;
_227 = ((frost$core$Equatable*) $tmp423);
ITable* $tmp424 = _224->$class->itable;
while ($tmp424->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp424 = $tmp424->next;
}
_228 = $tmp424->methods[0];
_229 = _228(_224, _227);
_230 = ((frost$core$Object*) _227);
frost$core$Frost$unref$frost$core$Object$Q(_230);
_232 = ((frost$core$Object*) _224);
frost$core$Frost$unref$frost$core$Object$Q(_232);
*(&local8) = _229;
goto block36;
block35:;
*(&local8) = _219;
goto block36;
block36:;
_238 = *(&local8);
_240 = _238.value;
if (_240) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:480
_243 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_243);
return param0;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:482
_247 = &param0->typeKind;
_248 = *_247;
org$frostlang$frostc$Type$Kind$wrapper* $tmp425;
$tmp425 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp425->value = _248;
_249 = ((frost$core$Equatable*) $tmp425);
_250 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:482:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_253 = &(&local10)->$rawValue;
*_253 = _250;
_255 = *(&local10);
*(&local9) = _255;
_258 = *(&local9);
org$frostlang$frostc$Type$Kind$wrapper* $tmp426;
$tmp426 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp426->value = _258;
_259 = ((frost$core$Equatable*) $tmp426);
ITable* $tmp427 = _249->$class->itable;
while ($tmp427->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp427 = $tmp427->next;
}
_260 = $tmp427->methods[0];
_261 = _260(_249, _259);
_262 = _261.value;
_263 = ((frost$core$Object*) _259);
frost$core$Frost$unref$frost$core$Object$Q(_263);
_265 = ((frost$core$Object*) _249);
frost$core$Frost$unref$frost$core$Object$Q(_265);
if (_262) goto block39; else goto block38;
block39:;
_268 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
_269 = _268.value;
if (_269) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:483
_272 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_272);
return param2;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:485
_276 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
_277 = _276.value;
if (_277) goto block43; else goto block42;
block43:;
_279 = &param2->typeKind;
_280 = *_279;
org$frostlang$frostc$Type$Kind$wrapper* $tmp428;
$tmp428 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp428->value = _280;
_281 = ((frost$core$Equatable*) $tmp428);
_282 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:485:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_285 = &(&local12)->$rawValue;
*_285 = _282;
_287 = *(&local12);
*(&local11) = _287;
_290 = *(&local11);
org$frostlang$frostc$Type$Kind$wrapper* $tmp429;
$tmp429 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp429->value = _290;
_291 = ((frost$core$Equatable*) $tmp429);
ITable* $tmp430 = _281->$class->itable;
while ($tmp430->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp430 = $tmp430->next;
}
_292 = $tmp430->methods[0];
_293 = _292(_281, _291);
_294 = _293.value;
_295 = ((frost$core$Object*) _291);
frost$core$Frost$unref$frost$core$Object$Q(_295);
_297 = ((frost$core$Object*) _281);
frost$core$Frost$unref$frost$core$Object$Q(_297);
if (_294) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:486
_301 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_301);
return param0;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:488
// begin inline call to function org.frostlang.frostc.Type.get_isReal():frost.core.Bit from Type.frost:488:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:356
_307 = &param0->typeKind;
_308 = *_307;
org$frostlang$frostc$Type$Kind$wrapper* $tmp431;
$tmp431 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp431->value = _308;
_309 = ((frost$core$Equatable*) $tmp431);
_310 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:356:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_313 = &(&local15)->$rawValue;
*_313 = _310;
_315 = *(&local15);
*(&local14) = _315;
_318 = *(&local14);
org$frostlang$frostc$Type$Kind$wrapper* $tmp432;
$tmp432 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp432->value = _318;
_319 = ((frost$core$Equatable*) $tmp432);
ITable* $tmp433 = _309->$class->itable;
while ($tmp433->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp433 = $tmp433->next;
}
_320 = $tmp433->methods[0];
_321 = _320(_309, _319);
_322 = _321.value;
if (_322) goto block49; else goto block50;
block49:;
*(&local13) = _321;
goto block51;
block50:;
_326 = ((org$frostlang$frostc$Symbol*) param0);
_327 = &_326->name;
_328 = *_327;
_329 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_328, &$s434);
*(&local13) = _329;
goto block51;
block51:;
_332 = *(&local13);
_333 = ((frost$core$Object*) _319);
frost$core$Frost$unref$frost$core$Object$Q(_333);
_335 = ((frost$core$Object*) _309);
frost$core$Frost$unref$frost$core$Object$Q(_335);
_338 = _332.value;
if (_338) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:489
_341 = &param2->typeKind;
_342 = *_341;
org$frostlang$frostc$Type$Kind$wrapper* $tmp435;
$tmp435 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp435->value = _342;
_343 = ((frost$core$Equatable*) $tmp435);
_344 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:489:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_347 = &(&local17)->$rawValue;
*_347 = _344;
_349 = *(&local17);
*(&local16) = _349;
_352 = *(&local16);
org$frostlang$frostc$Type$Kind$wrapper* $tmp436;
$tmp436 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp436->value = _352;
_353 = ((frost$core$Equatable*) $tmp436);
ITable* $tmp437 = _343->$class->itable;
while ($tmp437->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp437 = $tmp437->next;
}
_354 = $tmp437->methods[0];
_355 = _354(_343, _353);
_356 = _355.value;
_357 = ((frost$core$Object*) _353);
frost$core$Frost$unref$frost$core$Object$Q(_357);
_359 = ((frost$core$Object*) _343);
frost$core$Frost$unref$frost$core$Object$Q(_359);
if (_356) goto block52; else goto block54;
block54:;
_362 = &param2->typeKind;
_363 = *_362;
org$frostlang$frostc$Type$Kind$wrapper* $tmp438;
$tmp438 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp438->value = _363;
_364 = ((frost$core$Equatable*) $tmp438);
_365 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:489:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_368 = &(&local19)->$rawValue;
*_368 = _365;
_370 = *(&local19);
*(&local18) = _370;
_373 = *(&local18);
org$frostlang$frostc$Type$Kind$wrapper* $tmp439;
$tmp439 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp439->value = _373;
_374 = ((frost$core$Equatable*) $tmp439);
ITable* $tmp440 = _364->$class->itable;
while ($tmp440->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp440 = $tmp440->next;
}
_375 = $tmp440->methods[0];
_376 = _375(_364, _374);
_377 = _376.value;
_378 = ((frost$core$Object*) _374);
frost$core$Frost$unref$frost$core$Object$Q(_378);
_380 = ((frost$core$Object*) _364);
frost$core$Frost$unref$frost$core$Object$Q(_380);
if (_377) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:490
_384 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_384);
return param0;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:492
_388 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param2);
_389 = _388.value;
if (_389) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:493
_392 = ((org$frostlang$frostc$Symbol*) param2);
_393 = &_392->name;
_394 = *_393;
_395 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(_394, &$s441);
_396 = _395.value;
if (_396) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:494
_399 = &param1->REAL64_TYPE;
_400 = *_399;
_401 = ((frost$core$Object*) _400);
frost$core$Frost$ref$frost$core$Object$Q(_401);
return _400;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:496
_405 = &param1->REAL32_TYPE;
_406 = *_405;
_407 = ((frost$core$Object*) _406);
frost$core$Frost$ref$frost$core$Object$Q(_407);
return _406;
block58:;
goto block46;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:499
// begin inline call to function org.frostlang.frostc.Type.get_isReal():frost.core.Bit from Type.frost:499:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:356
_414 = &param2->typeKind;
_415 = *_414;
org$frostlang$frostc$Type$Kind$wrapper* $tmp442;
$tmp442 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp442->value = _415;
_416 = ((frost$core$Equatable*) $tmp442);
_417 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:356:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_420 = &(&local22)->$rawValue;
*_420 = _417;
_422 = *(&local22);
*(&local21) = _422;
_425 = *(&local21);
org$frostlang$frostc$Type$Kind$wrapper* $tmp443;
$tmp443 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp443->value = _425;
_426 = ((frost$core$Equatable*) $tmp443);
ITable* $tmp444 = _416->$class->itable;
while ($tmp444->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp444 = $tmp444->next;
}
_427 = $tmp444->methods[0];
_428 = _427(_416, _426);
_429 = _428.value;
if (_429) goto block65; else goto block66;
block65:;
*(&local20) = _428;
goto block67;
block66:;
_433 = ((org$frostlang$frostc$Symbol*) param2);
_434 = &_433->name;
_435 = *_434;
_436 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(_435, &$s445);
*(&local20) = _436;
goto block67;
block67:;
_439 = *(&local20);
_440 = ((frost$core$Object*) _426);
frost$core$Frost$unref$frost$core$Object$Q(_440);
_442 = ((frost$core$Object*) _416);
frost$core$Frost$unref$frost$core$Object$Q(_442);
_445 = _439.value;
if (_445) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:500
_448 = &param0->typeKind;
_449 = *_448;
org$frostlang$frostc$Type$Kind$wrapper* $tmp446;
$tmp446 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp446->value = _449;
_450 = ((frost$core$Equatable*) $tmp446);
_451 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:500:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_454 = &(&local24)->$rawValue;
*_454 = _451;
_456 = *(&local24);
*(&local23) = _456;
_459 = *(&local23);
org$frostlang$frostc$Type$Kind$wrapper* $tmp447;
$tmp447 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp447->value = _459;
_460 = ((frost$core$Equatable*) $tmp447);
ITable* $tmp448 = _450->$class->itable;
while ($tmp448->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp448 = $tmp448->next;
}
_461 = $tmp448->methods[0];
_462 = _461(_450, _460);
_463 = _462.value;
_464 = ((frost$core$Object*) _460);
frost$core$Frost$unref$frost$core$Object$Q(_464);
_466 = ((frost$core$Object*) _450);
frost$core$Frost$unref$frost$core$Object$Q(_466);
if (_463) goto block68; else goto block70;
block70:;
_469 = &param0->typeKind;
_470 = *_469;
org$frostlang$frostc$Type$Kind$wrapper* $tmp449;
$tmp449 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp449->value = _470;
_471 = ((frost$core$Equatable*) $tmp449);
_472 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:500:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_475 = &(&local26)->$rawValue;
*_475 = _472;
_477 = *(&local26);
*(&local25) = _477;
_480 = *(&local25);
org$frostlang$frostc$Type$Kind$wrapper* $tmp450;
$tmp450 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp450->value = _480;
_481 = ((frost$core$Equatable*) $tmp450);
ITable* $tmp451 = _471->$class->itable;
while ($tmp451->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp451 = $tmp451->next;
}
_482 = $tmp451->methods[0];
_483 = _482(_471, _481);
_484 = _483.value;
_485 = ((frost$core$Object*) _481);
frost$core$Frost$unref$frost$core$Object$Q(_485);
_487 = ((frost$core$Object*) _471);
frost$core$Frost$unref$frost$core$Object$Q(_487);
if (_484) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:501
_491 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_491);
return param2;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:503
_495 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit(param0);
_496 = _495.value;
if (_496) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:504
_499 = ((org$frostlang$frostc$Symbol*) param0);
_500 = &_499->name;
_501 = *_500;
_502 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(_501, &$s452);
_503 = _502.value;
if (_503) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:505
_506 = &param1->REAL64_TYPE;
_507 = *_506;
_508 = ((frost$core$Object*) _507);
frost$core$Frost$ref$frost$core$Object$Q(_508);
return _507;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:507
_512 = &param1->REAL32_TYPE;
_513 = *_512;
_514 = ((frost$core$Object*) _513);
frost$core$Frost$ref$frost$core$Object$Q(_514);
return _513;
block74:;
goto block62;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:510
_519 = &param0->typeKind;
_520 = *_519;
org$frostlang$frostc$Type$Kind$wrapper* $tmp453;
$tmp453 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp453->value = _520;
_521 = ((frost$core$Equatable*) $tmp453);
_522 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:510:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_525 = &(&local28)->$rawValue;
*_525 = _522;
_527 = *(&local28);
*(&local27) = _527;
_530 = *(&local27);
org$frostlang$frostc$Type$Kind$wrapper* $tmp454;
$tmp454 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp454->value = _530;
_531 = ((frost$core$Equatable*) $tmp454);
ITable* $tmp455 = _521->$class->itable;
while ($tmp455->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp455 = $tmp455->next;
}
_532 = $tmp455->methods[0];
_533 = _532(_521, _531);
_534 = _533.value;
_535 = ((frost$core$Object*) _531);
frost$core$Frost$unref$frost$core$Object$Q(_535);
_537 = ((frost$core$Object*) _521);
frost$core$Frost$unref$frost$core$Object$Q(_537);
if (_534) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:511
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:511:20
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_543 = &param0->_subtypes;
_544 = *_543;
_545 = _544 != NULL;
_546 = (frost$core$Bit) {_545};
_547 = _546.value;
if (_547) goto block81; else goto block82;
block82:;
_549 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s456, _549, &$s457);
abort(); // unreachable
block81:;
_552 = _544;
_553 = ((frost$core$Object*) _552);
frost$core$Frost$ref$frost$core$Object$Q(_553);
_556 = (frost$core$Int) {0u};
_557 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_552, _556);
_558 = ((org$frostlang$frostc$Type*) _557);
_559 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(_558, param1, param2);
_560 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(_559);
_561 = ((frost$core$Object*) _560);
frost$core$Frost$ref$frost$core$Object$Q(_561);
_563 = ((frost$core$Object*) _560);
frost$core$Frost$unref$frost$core$Object$Q(_563);
_565 = ((frost$core$Object*) _559);
frost$core$Frost$unref$frost$core$Object$Q(_565);
_567 = _557;
frost$core$Frost$unref$frost$core$Object$Q(_567);
_569 = ((frost$core$Object*) _552);
frost$core$Frost$unref$frost$core$Object$Q(_569);
return _560;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:513
_573 = &param2->typeKind;
_574 = *_573;
org$frostlang$frostc$Type$Kind$wrapper* $tmp458;
$tmp458 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp458->value = _574;
_575 = ((frost$core$Equatable*) $tmp458);
_576 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:513:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_579 = &(&local30)->$rawValue;
*_579 = _576;
_581 = *(&local30);
*(&local29) = _581;
_584 = *(&local29);
org$frostlang$frostc$Type$Kind$wrapper* $tmp459;
$tmp459 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp459->value = _584;
_585 = ((frost$core$Equatable*) $tmp459);
ITable* $tmp460 = _575->$class->itable;
while ($tmp460->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp460 = $tmp460->next;
}
_586 = $tmp460->methods[0];
_587 = _586(_575, _585);
_588 = _587.value;
_589 = ((frost$core$Object*) _585);
frost$core$Frost$unref$frost$core$Object$Q(_589);
_591 = ((frost$core$Object*) _575);
frost$core$Frost$unref$frost$core$Object$Q(_591);
if (_588) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:514
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:514:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_597 = &param2->_subtypes;
_598 = *_597;
_599 = _598 != NULL;
_600 = (frost$core$Bit) {_599};
_601 = _600.value;
if (_601) goto block87; else goto block88;
block88:;
_603 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s461, _603, &$s462);
abort(); // unreachable
block87:;
_606 = _598;
_607 = ((frost$core$Object*) _606);
frost$core$Frost$ref$frost$core$Object$Q(_607);
_610 = (frost$core$Int) {0u};
_611 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_606, _610);
_612 = ((org$frostlang$frostc$Type*) _611);
_613 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, param1, _612);
_614 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(_613);
_615 = ((frost$core$Object*) _614);
frost$core$Frost$ref$frost$core$Object$Q(_615);
_617 = ((frost$core$Object*) _614);
frost$core$Frost$unref$frost$core$Object$Q(_617);
_619 = ((frost$core$Object*) _613);
frost$core$Frost$unref$frost$core$Object$Q(_619);
_621 = _611;
frost$core$Frost$unref$frost$core$Object$Q(_621);
_623 = ((frost$core$Object*) _606);
frost$core$Frost$unref$frost$core$Object$Q(_623);
return _614;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:516
_627 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param0);
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
_629 = ((frost$core$Object*) _627);
frost$core$Frost$ref$frost$core$Object$Q(_629);
_631 = *(&local31);
_632 = ((frost$core$Object*) _631);
frost$core$Frost$unref$frost$core$Object$Q(_632);
*(&local31) = _627;
_635 = ((frost$core$Object*) _627);
frost$core$Frost$unref$frost$core$Object$Q(_635);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:517
_638 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, param2);
*(&local32) = ((org$frostlang$frostc$Type*) NULL);
_640 = ((frost$core$Object*) _638);
frost$core$Frost$ref$frost$core$Object$Q(_640);
_642 = *(&local32);
_643 = ((frost$core$Object*) _642);
frost$core$Frost$unref$frost$core$Object$Q(_643);
*(&local32) = _638;
_646 = ((frost$core$Object*) _638);
frost$core$Frost$unref$frost$core$Object$Q(_646);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:518
_649 = *(&local31);
_650 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(_649);
_651 = _650.value;
if (_651) goto block91; else goto block90;
block91:;
_653 = *(&local32);
_654 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(_653);
_655 = _654.value;
if (_655) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:519
_658 = (frost$collections$HashSet*) frostObjectAlloc(sizeof(frost$collections$HashSet), (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init(_658);
*(&local33) = ((frost$collections$HashSet*) NULL);
_661 = ((frost$core$Object*) _658);
frost$core$Frost$ref$frost$core$Object$Q(_661);
_663 = *(&local33);
_664 = ((frost$core$Object*) _663);
frost$core$Frost$unref$frost$core$Object$Q(_664);
*(&local33) = _658;
_667 = ((frost$core$Object*) _658);
frost$core$Frost$unref$frost$core$Object$Q(_667);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:520
*(&local34) = ((org$frostlang$frostc$Type*) NULL);
_671 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_671);
_673 = *(&local34);
_674 = ((frost$core$Object*) _673);
frost$core$Frost$unref$frost$core$Object$Q(_674);
*(&local34) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:521
_678 = *(&local31);
_679 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, _678);
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
_681 = ((frost$core$Object*) _679);
frost$core$Frost$ref$frost$core$Object$Q(_681);
_683 = *(&local35);
_684 = ((frost$core$Object*) _683);
frost$core$Frost$unref$frost$core$Object$Q(_684);
*(&local35) = _679;
_687 = ((frost$core$Object*) _679);
frost$core$Frost$unref$frost$core$Object$Q(_687);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:522
goto block92;
block92:;
_691 = *(&local35);
_692 = _691 != NULL;
_693 = (frost$core$Bit) {_692};
_694 = _693.value;
if (_694) goto block93; else goto block94;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:523
_697 = *(&local33);
_698 = *(&local34);
_699 = ((frost$collections$HashKey*) _698);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Type.frost:523:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
_702 = &_697->contents;
_703 = *_702;
_704 = _699;
_705 = ((frost$core$Object*) _699);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_703, _704, _705);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:524
_709 = *(&local35);
_710 = _709 != NULL;
_711 = (frost$core$Bit) {_710};
_712 = _711.value;
if (_712) goto block99; else goto block100;
block100:;
_714 = (frost$core$Int) {524u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s463, _714, &$s464);
abort(); // unreachable
block99:;
_717 = _709;
_718 = &_717->rawSuper;
_719 = *_718;
_720 = _719 != NULL;
_721 = (frost$core$Bit) {_720};
_722 = _721.value;
if (_722) goto block96; else goto block98;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:525
_725 = *(&local34);
_726 = *(&local35);
_727 = _726 != NULL;
_728 = (frost$core$Bit) {_727};
_729 = _728.value;
if (_729) goto block101; else goto block102;
block102:;
_731 = (frost$core$Int) {525u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s465, _731, &$s466);
abort(); // unreachable
block101:;
_734 = _726;
_735 = &_734->rawSuper;
_736 = *_735;
_737 = _736 != NULL;
_738 = (frost$core$Bit) {_737};
_739 = _738.value;
if (_739) goto block103; else goto block104;
block104:;
_741 = (frost$core$Int) {525u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s467, _741, &$s468);
abort(); // unreachable
block103:;
_744 = _736;
_745 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, _725, _744);
_746 = ((frost$core$Object*) _745);
frost$core$Frost$ref$frost$core$Object$Q(_746);
_748 = *(&local34);
_749 = ((frost$core$Object*) _748);
frost$core$Frost$unref$frost$core$Object$Q(_749);
*(&local34) = _745;
_752 = ((frost$core$Object*) _745);
frost$core$Frost$unref$frost$core$Object$Q(_752);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:526
_755 = *(&local34);
_756 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, _755);
_757 = ((frost$core$Object*) _756);
frost$core$Frost$ref$frost$core$Object$Q(_757);
_759 = *(&local35);
_760 = ((frost$core$Object*) _759);
frost$core$Frost$unref$frost$core$Object$Q(_760);
*(&local35) = _756;
_763 = ((frost$core$Object*) _756);
frost$core$Frost$unref$frost$core$Object$Q(_763);
goto block97;
block98:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:529
_768 = ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_768);
_770 = *(&local35);
_771 = ((frost$core$Object*) _770);
frost$core$Frost$unref$frost$core$Object$Q(_771);
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block97;
block97:;
goto block92;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:532
_777 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_777);
_779 = *(&local34);
_780 = ((frost$core$Object*) _779);
frost$core$Frost$unref$frost$core$Object$Q(_780);
*(&local34) = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:533
_784 = *(&local32);
_785 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, _784);
_786 = ((frost$core$Object*) _785);
frost$core$Frost$ref$frost$core$Object$Q(_786);
_788 = *(&local35);
_789 = ((frost$core$Object*) _788);
frost$core$Frost$unref$frost$core$Object$Q(_789);
*(&local35) = _785;
_792 = ((frost$core$Object*) _785);
frost$core$Frost$unref$frost$core$Object$Q(_792);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:534
goto block105;
block105:;
_796 = *(&local35);
_797 = _796 != NULL;
_798 = (frost$core$Bit) {_797};
_799 = _798.value;
if (_799) goto block106; else goto block107;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:535
_802 = *(&local33);
_803 = *(&local34);
_804 = ((frost$collections$HashKey*) _803);
// begin inline call to function frost.collections.HashSet.contains(value:frost.collections.HashSet.T):frost.core.Bit from Type.frost:535:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:49
_807 = &_802->contents;
_808 = *_807;
_809 = _804;
_810 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit(_808, _809);
_812 = _810.value;
if (_812) goto block108; else goto block109;
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:536
_815 = *(&local34);
_816 = ((frost$core$Object*) _815);
frost$core$Frost$ref$frost$core$Object$Q(_816);
_818 = *(&local35);
_819 = ((frost$core$Object*) _818);
frost$core$Frost$unref$frost$core$Object$Q(_819);
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
_822 = *(&local34);
_823 = ((frost$core$Object*) _822);
frost$core$Frost$unref$frost$core$Object$Q(_823);
*(&local34) = ((org$frostlang$frostc$Type*) NULL);
_826 = *(&local33);
_827 = ((frost$core$Object*) _826);
frost$core$Frost$unref$frost$core$Object$Q(_827);
*(&local33) = ((frost$collections$HashSet*) NULL);
_830 = *(&local32);
_831 = ((frost$core$Object*) _830);
frost$core$Frost$unref$frost$core$Object$Q(_831);
*(&local32) = ((org$frostlang$frostc$Type*) NULL);
_834 = *(&local31);
_835 = ((frost$core$Object*) _834);
frost$core$Frost$unref$frost$core$Object$Q(_835);
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
return _815;
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:538
_840 = *(&local35);
_841 = _840 != NULL;
_842 = (frost$core$Bit) {_841};
_843 = _842.value;
if (_843) goto block114; else goto block115;
block115:;
_845 = (frost$core$Int) {538u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s469, _845, &$s470);
abort(); // unreachable
block114:;
_848 = _840;
_849 = &_848->rawSuper;
_850 = *_849;
_851 = _850 != NULL;
_852 = (frost$core$Bit) {_851};
_853 = _852.value;
if (_853) goto block111; else goto block113;
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:539
_856 = *(&local34);
_857 = *(&local35);
_858 = _857 != NULL;
_859 = (frost$core$Bit) {_858};
_860 = _859.value;
if (_860) goto block116; else goto block117;
block117:;
_862 = (frost$core$Int) {539u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s471, _862, &$s472);
abort(); // unreachable
block116:;
_865 = _857;
_866 = &_865->rawSuper;
_867 = *_866;
_868 = _867 != NULL;
_869 = (frost$core$Bit) {_868};
_870 = _869.value;
if (_870) goto block118; else goto block119;
block119:;
_872 = (frost$core$Int) {539u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s473, _872, &$s474);
abort(); // unreachable
block118:;
_875 = _867;
_876 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, _856, _875);
_877 = ((frost$core$Object*) _876);
frost$core$Frost$ref$frost$core$Object$Q(_877);
_879 = *(&local34);
_880 = ((frost$core$Object*) _879);
frost$core$Frost$unref$frost$core$Object$Q(_880);
*(&local34) = _876;
_883 = ((frost$core$Object*) _876);
frost$core$Frost$unref$frost$core$Object$Q(_883);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:540
_886 = *(&local34);
_887 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param1, _886);
_888 = ((frost$core$Object*) _887);
frost$core$Frost$ref$frost$core$Object$Q(_888);
_890 = *(&local35);
_891 = ((frost$core$Object*) _890);
frost$core$Frost$unref$frost$core$Object$Q(_891);
*(&local35) = _887;
_894 = ((frost$core$Object*) _887);
frost$core$Frost$unref$frost$core$Object$Q(_894);
goto block112;
block113:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:543
_899 = ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_899);
_901 = *(&local35);
_902 = ((frost$core$Object*) _901);
frost$core$Frost$unref$frost$core$Object$Q(_902);
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block112;
block112:;
goto block105;
block107:;
_907 = *(&local35);
_908 = ((frost$core$Object*) _907);
frost$core$Frost$unref$frost$core$Object$Q(_908);
*(&local35) = ((org$frostlang$frostc$ClassDecl*) NULL);
_911 = *(&local34);
_912 = ((frost$core$Object*) _911);
frost$core$Frost$unref$frost$core$Object$Q(_912);
*(&local34) = ((org$frostlang$frostc$Type*) NULL);
_915 = *(&local33);
_916 = ((frost$core$Object*) _915);
frost$core$Frost$unref$frost$core$Object$Q(_916);
*(&local33) = ((frost$collections$HashSet*) NULL);
goto block90;
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:547
_921 = &param1->OBJECT_TYPE;
_922 = *_921;
_923 = ((frost$core$Object*) _922);
frost$core$Frost$ref$frost$core$Object$Q(_923);
_925 = *(&local32);
_926 = ((frost$core$Object*) _925);
frost$core$Frost$unref$frost$core$Object$Q(_926);
*(&local32) = ((org$frostlang$frostc$Type*) NULL);
_929 = *(&local31);
_930 = ((frost$core$Object*) _929);
frost$core$Frost$unref$frost$core$Object$Q(_930);
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
return _922;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(void* rawSelf, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

frost$core$Bit _3;
org$frostlang$frostc$Pair* _4;
frost$core$Object* _5;
frost$core$Object* _7;
bool _10;
frost$core$Bit _11;
bool _12;
frost$core$Object* _13;
org$frostlang$frostc$Type* _17;
frost$core$Object* _18;
frost$core$Bit _24;
org$frostlang$frostc$Pair* _25;
frost$core$Object* _26;
frost$core$Object* _28;
bool _31;
frost$core$Bit _32;
bool _33;
frost$core$Object* _34;
org$frostlang$frostc$Type* _38;
frost$core$Object* _39;
frost$core$Object* _43;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:554
// begin inline call to method org.frostlang.frostc.Compiler.coercionCost(type:org.frostlang.frostc.Type, target:org.frostlang.frostc.Type):org.frostlang.frostc.Pair<org.frostlang.frostc.Type, frost.core.Int>? from Type.frost:554:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:2119
_3 = (frost$core$Bit) {true};
_4 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param1, param0, param2, _3);
_5 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_7);
_10 = _4 != NULL;
_11 = (frost$core$Bit) {_10};
_12 = _11.value;
_13 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_13);
if (_12) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:555
_17 = param0;
_18 = ((frost$core$Object*) _17);
frost$core$Frost$ref$frost$core$Object$Q(_18);
return _17;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:557
// begin inline call to method org.frostlang.frostc.Compiler.coercionCost(type:org.frostlang.frostc.Type, target:org.frostlang.frostc.Type):org.frostlang.frostc.Pair<org.frostlang.frostc.Type, frost.core.Int>? from Type.frost:557:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:2119
_24 = (frost$core$Bit) {true};
_25 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param1, param2, param0, _24);
_26 = ((frost$core$Object*) _25);
frost$core$Frost$ref$frost$core$Object$Q(_26);
_28 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_28);
_31 = _25 != NULL;
_32 = (frost$core$Bit) {_31};
_33 = _32.value;
_34 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_34);
if (_33) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:558
_38 = param2;
_39 = ((frost$core$Object*) _38);
frost$core$Frost$ref$frost$core$Object$Q(_39);
return _38;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:560
_43 = ((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_43);
return ((org$frostlang$frostc$Type*) NULL);

}
org$frostlang$frostc$Type* org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(void* rawSelf, org$frostlang$frostc$Compiler* param1, frost$collections$HashMap* param2) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

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
frost$core$Int _3;
frost$core$Int* _6;
org$frostlang$frostc$Type$Kind _8;
org$frostlang$frostc$Type$Kind _11;
frost$core$Equatable* _12;
$fn475 _13;
frost$core$Bit _14;
bool _15;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Int _21;
frost$collections$MapView* _52;
$fn476 _53;
frost$core$Int _54;
frost$core$Int _55;
int64_t _58;
int64_t _59;
bool _60;
frost$core$Bit _61;
bool _63;
frost$core$Object* _66;
org$frostlang$frostc$Type$Kind* _71;
org$frostlang$frostc$Type$Kind _72;
frost$core$Int _73;
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
org$frostlang$frostc$Symbol* _95;
frost$core$String** _96;
frost$core$String* _97;
frost$collections$HashKey* _98;
frost$core$Object* _99;
org$frostlang$frostc$Type* _100;
frost$core$Object* _102;
org$frostlang$frostc$Type* _104;
frost$core$Object* _105;
frost$core$Object* _108;
org$frostlang$frostc$Type* _111;
bool _112;
frost$core$Bit _113;
bool _114;
org$frostlang$frostc$Type* _117;
bool _118;
frost$core$Bit _119;
bool _120;
frost$core$Int _122;
org$frostlang$frostc$Type* _125;
frost$core$Object* _126;
org$frostlang$frostc$Type* _128;
frost$core$Object* _129;
frost$core$Object* _135;
org$frostlang$frostc$Type* _137;
frost$core$Object* _138;
frost$core$Int _143;
int64_t _146;
int64_t _147;
bool _148;
frost$core$Bit _149;
bool _151;
org$frostlang$frostc$FixedArray** _156;
org$frostlang$frostc$FixedArray* _157;
bool _158;
frost$core$Bit _159;
bool _160;
frost$core$Int _162;
org$frostlang$frostc$FixedArray* _165;
frost$core$Object* _166;
frost$core$Int _169;
frost$core$Object* _170;
org$frostlang$frostc$Type* _171;
org$frostlang$frostc$Type* _172;
frost$core$Object* _174;
org$frostlang$frostc$Type* _176;
frost$core$Object* _177;
frost$core$Object* _180;
frost$core$Object* _182;
frost$core$Object* _184;
frost$collections$Array* _187;
frost$core$Object* _190;
frost$collections$Array* _192;
frost$core$Object* _193;
frost$core$Object* _196;
frost$core$Int _199;
org$frostlang$frostc$FixedArray** _202;
org$frostlang$frostc$FixedArray* _203;
bool _204;
frost$core$Bit _205;
bool _206;
frost$core$Int _208;
org$frostlang$frostc$FixedArray* _211;
frost$core$Object* _212;
frost$collections$CollectionView* _215;
$fn477 _216;
frost$core$Int _217;
frost$core$Bit _218;
frost$core$Range$LTfrost$core$Int$GT _219;
frost$core$Int _220;
frost$core$Int _222;
frost$core$Bit _223;
bool _224;
frost$core$Int _225;
int64_t _227;
int64_t _228;
bool _229;
frost$core$Bit _230;
bool _231;
int64_t _233;
int64_t _234;
bool _235;
frost$core$Bit _236;
bool _237;
frost$collections$Array* _240;
org$frostlang$frostc$FixedArray** _243;
org$frostlang$frostc$FixedArray* _244;
bool _245;
frost$core$Bit _246;
bool _247;
frost$core$Int _249;
org$frostlang$frostc$FixedArray* _252;
frost$core$Object* _253;
frost$core$Int _256;
frost$core$Object* _257;
org$frostlang$frostc$Type* _258;
org$frostlang$frostc$Type* _259;
frost$core$Object* _260;
frost$core$Object* _262;
frost$core$Object* _264;
frost$core$Object* _266;
frost$core$Int _269;
int64_t _270;
int64_t _271;
int64_t _272;
frost$core$Int _273;
int64_t _275;
int64_t _276;
bool _277;
frost$core$Bit _278;
bool _279;
int64_t _281;
int64_t _282;
bool _283;
frost$core$Bit _284;
bool _285;
int64_t _287;
int64_t _288;
int64_t _289;
frost$core$Int _290;
frost$core$Object* _293;
org$frostlang$frostc$Type* _296;
frost$collections$Array* _297;
frost$collections$ListView* _298;
org$frostlang$frostc$Type* _299;
frost$core$Object* _300;
frost$core$Object* _302;
frost$collections$Array* _304;
frost$core$Object* _305;
org$frostlang$frostc$Type* _308;
frost$core$Object* _309;
frost$core$Int _314;
int64_t _317;
int64_t _318;
bool _319;
frost$core$Bit _320;
bool _322;
org$frostlang$frostc$FixedArray** _327;
org$frostlang$frostc$FixedArray* _328;
bool _329;
frost$core$Bit _330;
bool _331;
frost$core$Int _333;
org$frostlang$frostc$FixedArray* _336;
frost$core$Object* _337;
frost$core$Int _340;
frost$core$Object* _341;
org$frostlang$frostc$Type* _342;
org$frostlang$frostc$Type* _343;
org$frostlang$frostc$Type* _344;
frost$core$Object* _345;
frost$core$Object* _347;
frost$core$Object* _349;
frost$core$Object* _351;
frost$core$Object* _353;
frost$core$Int _357;
int64_t _360;
int64_t _361;
bool _362;
frost$core$Bit _363;
bool _365;
frost$core$Int _367;
int64_t _370;
int64_t _371;
bool _372;
frost$core$Bit _373;
bool _375;
frost$core$Int _377;
int64_t _380;
int64_t _381;
bool _382;
frost$core$Bit _383;
bool _385;
frost$core$Int _387;
int64_t _390;
int64_t _391;
bool _392;
frost$core$Bit _393;
bool _395;
frost$collections$Array* _398;
frost$core$Object* _401;
frost$collections$Array* _403;
frost$core$Object* _404;
frost$core$Object* _407;
org$frostlang$frostc$FixedArray** _412;
org$frostlang$frostc$FixedArray* _413;
bool _414;
frost$core$Bit _415;
bool _416;
frost$core$Int _418;
org$frostlang$frostc$FixedArray* _421;
frost$core$Object* _422;
frost$collections$CollectionView* _425;
$fn478 _426;
frost$core$Int _427;
frost$core$Int _428;
int64_t _429;
int64_t _430;
bool _431;
frost$core$Bit _432;
bool _433;
frost$core$Int _435;
frost$core$Object* _438;
frost$core$Int _441;
org$frostlang$frostc$FixedArray** _444;
org$frostlang$frostc$FixedArray* _445;
bool _446;
frost$core$Bit _447;
bool _448;
frost$core$Int _450;
org$frostlang$frostc$FixedArray* _453;
frost$core$Object* _454;
frost$collections$CollectionView* _457;
$fn479 _458;
frost$core$Int _459;
frost$core$Int _460;
int64_t _461;
int64_t _462;
int64_t _463;
frost$core$Int _464;
frost$core$Bit _465;
frost$core$Range$LTfrost$core$Int$GT _466;
frost$core$Int _467;
frost$core$Int _469;
frost$core$Bit _470;
bool _471;
frost$core$Int _472;
int64_t _474;
int64_t _475;
bool _476;
frost$core$Bit _477;
bool _478;
int64_t _480;
int64_t _481;
bool _482;
frost$core$Bit _483;
bool _484;
frost$collections$Array* _487;
org$frostlang$frostc$FixedArray** _490;
org$frostlang$frostc$FixedArray* _491;
bool _492;
frost$core$Bit _493;
bool _494;
frost$core$Int _496;
org$frostlang$frostc$FixedArray* _499;
frost$core$Object* _500;
frost$core$Int _503;
frost$core$Object* _504;
org$frostlang$frostc$Type* _505;
org$frostlang$frostc$Type* _506;
frost$core$Object* _507;
frost$core$Object* _509;
frost$core$Object* _511;
frost$core$Object* _513;
frost$core$Int _516;
int64_t _517;
int64_t _518;
int64_t _519;
frost$core$Int _520;
int64_t _522;
int64_t _523;
bool _524;
frost$core$Bit _525;
bool _526;
int64_t _528;
int64_t _529;
bool _530;
frost$core$Bit _531;
bool _532;
int64_t _534;
int64_t _535;
int64_t _536;
frost$core$Int _537;
frost$core$Object* _540;
org$frostlang$frostc$Symbol* _543;
org$frostlang$frostc$Position* _544;
org$frostlang$frostc$Position _545;
org$frostlang$frostc$Type$Kind* _546;
org$frostlang$frostc$Type$Kind _547;
frost$collections$Array* _548;
frost$collections$ListView* _549;
org$frostlang$frostc$FixedArray** _552;
org$frostlang$frostc$FixedArray* _553;
bool _554;
frost$core$Bit _555;
bool _556;
frost$core$Int _558;
org$frostlang$frostc$FixedArray* _561;
frost$core$Object* _562;
org$frostlang$frostc$FixedArray** _567;
org$frostlang$frostc$FixedArray* _568;
bool _569;
frost$core$Bit _570;
bool _571;
frost$core$Int _573;
org$frostlang$frostc$FixedArray* _576;
frost$core$Object* _577;
frost$collections$CollectionView* _580;
$fn480 _581;
frost$core$Int _582;
frost$core$Int _583;
int64_t _584;
int64_t _585;
int64_t _586;
frost$core$Int _587;
frost$core$Object* _588;
org$frostlang$frostc$Type* _589;
org$frostlang$frostc$Type* _590;
frost$core$Int* _591;
frost$core$Int _592;
org$frostlang$frostc$Type* _593;
frost$core$Object* _594;
frost$core$Object* _596;
frost$core$Object* _598;
frost$core$Object* _600;
frost$core$Object* _602;
frost$core$Object* _604;
frost$collections$Array* _606;
frost$core$Object* _607;
frost$core$Int _612;
int64_t _615;
int64_t _616;
bool _617;
frost$core$Bit _618;
bool _620;
frost$collections$Array* _623;
frost$core$Object* _626;
frost$collections$Array* _628;
frost$core$Object* _629;
frost$core$Object* _632;
org$frostlang$frostc$FixedArray** _637;
org$frostlang$frostc$FixedArray* _638;
bool _639;
frost$core$Bit _640;
bool _641;
frost$core$Int _643;
org$frostlang$frostc$FixedArray* _646;
frost$core$Object* _647;
frost$collections$Iterable* _650;
$fn481 _651;
frost$collections$Iterator* _652;
$fn482 _654;
frost$core$Bit _655;
bool _656;
$fn483 _659;
frost$core$Object* _660;
org$frostlang$frostc$Type* _661;
frost$core$Object* _662;
org$frostlang$frostc$Type* _664;
frost$core$Object* _665;
frost$collections$Array* _669;
org$frostlang$frostc$Type* _670;
org$frostlang$frostc$Type* _671;
frost$core$Object* _672;
frost$core$Object* _674;
frost$core$Object* _676;
org$frostlang$frostc$Type* _678;
frost$core$Object* _679;
frost$core$Object* _683;
frost$core$Object* _685;
frost$collections$Array* _688;
frost$collections$ListView* _689;
org$frostlang$frostc$Type* _690;
frost$core$Object* _691;
frost$core$Object* _693;
frost$collections$Array* _695;
frost$core$Object* _696;
frost$core$Object* _702;
org$frostlang$frostc$Type* _24;
org$frostlang$frostc$Type$Kind* _25;
org$frostlang$frostc$Type$Kind _26;
frost$core$Equatable* _27;
frost$core$Int _28;
frost$core$Int* _31;
org$frostlang$frostc$Type$Kind _33;
org$frostlang$frostc$Type$Kind _36;
frost$core$Equatable* _37;
$fn484 _38;
frost$core$Bit _39;
frost$core$Object* _40;
frost$core$Object* _42;
bool _47;
org$frostlang$frostc$Type* _49;
frost$core$Int _44;
_0 = &param0->typeKind;
_1 = *_0;
org$frostlang$frostc$Type$Kind$wrapper* $tmp485;
$tmp485 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp485->value = _1;
_2 = ((frost$core$Equatable*) $tmp485);
_3 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:563:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_6 = &(&local1)->$rawValue;
*_6 = _3;
_8 = *(&local1);
*(&local0) = _8;
_11 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp486;
$tmp486 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp486->value = _11;
_12 = ((frost$core$Equatable*) $tmp486);
ITable* $tmp487 = _2->$class->itable;
while ($tmp487->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp487 = $tmp487->next;
}
_13 = $tmp487->methods[1];
_14 = _13(_2, _12);
_15 = _14.value;
_16 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_18);
if (_15) goto block1; else goto block2;
block2:;
_21 = (frost$core$Int) {565u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s488, _21, &$s489);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:566
_52 = ((frost$collections$MapView*) param2);
ITable* $tmp490 = _52->$class->itable;
while ($tmp490->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp490 = $tmp490->next;
}
_53 = $tmp490->methods[0];
_54 = _53(_52);
_55 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:566:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_58 = _54.value;
_59 = _55.value;
_60 = _58 == _59;
_61 = (frost$core$Bit) {_60};
_63 = _61.value;
if (_63) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:567
_66 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_66);
*(&local2) = param0;
goto block4;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:569
_71 = &param0->typeKind;
_72 = *_71;
_73 = _72.$rawValue;
_74 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:570:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_77 = _73.value;
_78 = _74.value;
_79 = _77 == _78;
_80 = (frost$core$Bit) {_79};
_82 = _80.value;
if (_82) goto block12; else goto block13;
block13:;
_84 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:570:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_87 = _73.value;
_88 = _84.value;
_89 = _87 == _88;
_90 = (frost$core$Bit) {_89};
_92 = _90.value;
if (_92) goto block12; else goto block15;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:571
_95 = ((org$frostlang$frostc$Symbol*) param0);
_96 = &_95->name;
_97 = *_96;
_98 = ((frost$collections$HashKey*) _97);
_99 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(param2, _98);
_100 = ((org$frostlang$frostc$Type*) _99);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
_102 = ((frost$core$Object*) _100);
frost$core$Frost$ref$frost$core$Object$Q(_102);
_104 = *(&local5);
_105 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_105);
*(&local5) = _100;
_108 = _99;
frost$core$Frost$unref$frost$core$Object$Q(_108);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:572
_111 = *(&local5);
_112 = _111 != NULL;
_113 = (frost$core$Bit) {_112};
_114 = _113.value;
if (_114) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:573
_117 = *(&local5);
_118 = _117 != NULL;
_119 = (frost$core$Bit) {_118};
_120 = _119.value;
if (_120) goto block19; else goto block20;
block20:;
_122 = (frost$core$Int) {573u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s491, _122, &$s492);
abort(); // unreachable
block19:;
_125 = _117;
_126 = ((frost$core$Object*) _125);
frost$core$Frost$ref$frost$core$Object$Q(_126);
_128 = *(&local5);
_129 = ((frost$core$Object*) _128);
frost$core$Frost$unref$frost$core$Object$Q(_129);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
*(&local2) = _125;
goto block4;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:575
_135 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_135);
_137 = *(&local5);
_138 = ((frost$core$Object*) _137);
frost$core$Frost$unref$frost$core$Object$Q(_138);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
*(&local2) = param0;
goto block4;
block15:;
_143 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:577:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_146 = _73.value;
_147 = _143.value;
_148 = _146 == _147;
_149 = (frost$core$Bit) {_148};
_151 = _149.value;
if (_151) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:578
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:578:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_156 = &param0->_subtypes;
_157 = *_156;
_158 = _157 != NULL;
_159 = (frost$core$Bit) {_158};
_160 = _159.value;
if (_160) goto block25; else goto block26;
block26:;
_162 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s493, _162, &$s494);
abort(); // unreachable
block25:;
_165 = _157;
_166 = ((frost$core$Object*) _165);
frost$core$Frost$ref$frost$core$Object$Q(_166);
_169 = (frost$core$Int) {0u};
_170 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_165, _169);
_171 = ((org$frostlang$frostc$Type*) _170);
_172 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_171, param1, param2);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
_174 = ((frost$core$Object*) _172);
frost$core$Frost$ref$frost$core$Object$Q(_174);
_176 = *(&local6);
_177 = ((frost$core$Object*) _176);
frost$core$Frost$unref$frost$core$Object$Q(_177);
*(&local6) = _172;
_180 = ((frost$core$Object*) _172);
frost$core$Frost$unref$frost$core$Object$Q(_180);
_182 = _170;
frost$core$Frost$unref$frost$core$Object$Q(_182);
_184 = ((frost$core$Object*) _165);
frost$core$Frost$unref$frost$core$Object$Q(_184);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:579
_187 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_187);
*(&local7) = ((frost$collections$Array*) NULL);
_190 = ((frost$core$Object*) _187);
frost$core$Frost$ref$frost$core$Object$Q(_190);
_192 = *(&local7);
_193 = ((frost$core$Object*) _192);
frost$core$Frost$unref$frost$core$Object$Q(_193);
*(&local7) = _187;
_196 = ((frost$core$Object*) _187);
frost$core$Frost$unref$frost$core$Object$Q(_196);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:580
_199 = (frost$core$Int) {1u};
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:580:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_202 = &param0->_subtypes;
_203 = *_202;
_204 = _203 != NULL;
_205 = (frost$core$Bit) {_204};
_206 = _205.value;
if (_206) goto block28; else goto block29;
block29:;
_208 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s495, _208, &$s496);
abort(); // unreachable
block28:;
_211 = _203;
_212 = ((frost$core$Object*) _211);
frost$core$Frost$ref$frost$core$Object$Q(_212);
_215 = ((frost$collections$CollectionView*) _211);
ITable* $tmp497 = _215->$class->itable;
while ($tmp497->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp497 = $tmp497->next;
}
_216 = $tmp497->methods[0];
_217 = _216(_215);
_218 = (frost$core$Bit) {false};
_219 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_199, _217, _218);
_220 = _219.min;
*(&local8) = _220;
_222 = _219.max;
_223 = _219.inclusive;
_224 = _223.value;
_225 = (frost$core$Int) {1u};
if (_224) goto block33; else goto block34;
block33:;
_227 = _220.value;
_228 = _222.value;
_229 = _227 <= _228;
_230 = (frost$core$Bit) {_229};
_231 = _230.value;
if (_231) goto block30; else goto block31;
block34:;
_233 = _220.value;
_234 = _222.value;
_235 = _233 < _234;
_236 = (frost$core$Bit) {_235};
_237 = _236.value;
if (_237) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:581
_240 = *(&local7);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:581:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_243 = &param0->_subtypes;
_244 = *_243;
_245 = _244 != NULL;
_246 = (frost$core$Bit) {_245};
_247 = _246.value;
if (_247) goto block36; else goto block37;
block37:;
_249 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s498, _249, &$s499);
abort(); // unreachable
block36:;
_252 = _244;
_253 = ((frost$core$Object*) _252);
frost$core$Frost$ref$frost$core$Object$Q(_253);
_256 = *(&local8);
_257 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_252, _256);
_258 = ((org$frostlang$frostc$Type*) _257);
_259 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_258, param1, param2);
_260 = ((frost$core$Object*) _259);
frost$collections$Array$add$frost$collections$Array$T(_240, _260);
_262 = ((frost$core$Object*) _259);
frost$core$Frost$unref$frost$core$Object$Q(_262);
_264 = _257;
frost$core$Frost$unref$frost$core$Object$Q(_264);
_266 = ((frost$core$Object*) _252);
frost$core$Frost$unref$frost$core$Object$Q(_266);
_269 = *(&local8);
_270 = _222.value;
_271 = _269.value;
_272 = _270 - _271;
_273 = (frost$core$Int) {_272};
if (_224) goto block39; else goto block40;
block39:;
_275 = _273.value;
_276 = _225.value;
_277 = _275 >= _276;
_278 = (frost$core$Bit) {_277};
_279 = _278.value;
if (_279) goto block38; else goto block31;
block40:;
_281 = _273.value;
_282 = _225.value;
_283 = _281 > _282;
_284 = (frost$core$Bit) {_283};
_285 = _284.value;
if (_285) goto block38; else goto block31;
block38:;
_287 = _269.value;
_288 = _225.value;
_289 = _287 + _288;
_290 = (frost$core$Int) {_289};
*(&local8) = _290;
goto block30;
block31:;
_293 = ((frost$core$Object*) _211);
frost$core$Frost$unref$frost$core$Object$Q(_293);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:583
_296 = *(&local6);
_297 = *(&local7);
_298 = ((frost$collections$ListView*) _297);
_299 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_296, _298);
_300 = ((frost$core$Object*) _299);
frost$core$Frost$ref$frost$core$Object$Q(_300);
_302 = ((frost$core$Object*) _299);
frost$core$Frost$unref$frost$core$Object$Q(_302);
_304 = *(&local7);
_305 = ((frost$core$Object*) _304);
frost$core$Frost$unref$frost$core$Object$Q(_305);
*(&local7) = ((frost$collections$Array*) NULL);
_308 = *(&local6);
_309 = ((frost$core$Object*) _308);
frost$core$Frost$unref$frost$core$Object$Q(_309);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
*(&local2) = _299;
goto block4;
block22:;
_314 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:585:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_317 = _73.value;
_318 = _314.value;
_319 = _317 == _318;
_320 = (frost$core$Bit) {_319};
_322 = _320.value;
if (_322) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:586
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:586:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_327 = &param0->_subtypes;
_328 = *_327;
_329 = _328 != NULL;
_330 = (frost$core$Bit) {_329};
_331 = _330.value;
if (_331) goto block45; else goto block46;
block46:;
_333 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s500, _333, &$s501);
abort(); // unreachable
block45:;
_336 = _328;
_337 = ((frost$core$Object*) _336);
frost$core$Frost$ref$frost$core$Object$Q(_337);
_340 = (frost$core$Int) {0u};
_341 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_336, _340);
_342 = ((org$frostlang$frostc$Type*) _341);
_343 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_342, param1, param2);
_344 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(_343);
_345 = ((frost$core$Object*) _344);
frost$core$Frost$ref$frost$core$Object$Q(_345);
_347 = ((frost$core$Object*) _344);
frost$core$Frost$unref$frost$core$Object$Q(_347);
_349 = ((frost$core$Object*) _343);
frost$core$Frost$unref$frost$core$Object$Q(_349);
_351 = _341;
frost$core$Frost$unref$frost$core$Object$Q(_351);
_353 = ((frost$core$Object*) _336);
frost$core$Frost$unref$frost$core$Object$Q(_353);
*(&local2) = _344;
goto block4;
block42:;
_357 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:588:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_360 = _73.value;
_361 = _357.value;
_362 = _360 == _361;
_363 = (frost$core$Bit) {_362};
_365 = _363.value;
if (_365) goto block47; else goto block48;
block48:;
_367 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:588:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_370 = _73.value;
_371 = _367.value;
_372 = _370 == _371;
_373 = (frost$core$Bit) {_372};
_375 = _373.value;
if (_375) goto block47; else goto block50;
block50:;
_377 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:588:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_380 = _73.value;
_381 = _377.value;
_382 = _380 == _381;
_383 = (frost$core$Bit) {_382};
_385 = _383.value;
if (_385) goto block47; else goto block52;
block52:;
_387 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:588:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_390 = _73.value;
_391 = _387.value;
_392 = _390 == _391;
_393 = (frost$core$Bit) {_392};
_395 = _393.value;
if (_395) goto block47; else goto block54;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:589
_398 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_398);
*(&local9) = ((frost$collections$Array*) NULL);
_401 = ((frost$core$Object*) _398);
frost$core$Frost$ref$frost$core$Object$Q(_401);
_403 = *(&local9);
_404 = ((frost$core$Object*) _403);
frost$core$Frost$unref$frost$core$Object$Q(_404);
*(&local9) = _398;
_407 = ((frost$core$Object*) _398);
frost$core$Frost$unref$frost$core$Object$Q(_407);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:590
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:590:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_412 = &param0->_subtypes;
_413 = *_412;
_414 = _413 != NULL;
_415 = (frost$core$Bit) {_414};
_416 = _415.value;
if (_416) goto block57; else goto block58;
block58:;
_418 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s502, _418, &$s503);
abort(); // unreachable
block57:;
_421 = _413;
_422 = ((frost$core$Object*) _421);
frost$core$Frost$ref$frost$core$Object$Q(_422);
_425 = ((frost$collections$CollectionView*) _421);
ITable* $tmp504 = _425->$class->itable;
while ($tmp504->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp504 = $tmp504->next;
}
_426 = $tmp504->methods[0];
_427 = _426(_425);
_428 = (frost$core$Int) {1u};
_429 = _427.value;
_430 = _428.value;
_431 = _429 >= _430;
_432 = (frost$core$Bit) {_431};
_433 = _432.value;
if (_433) goto block59; else goto block60;
block60:;
_435 = (frost$core$Int) {590u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s505, _435);
abort(); // unreachable
block59:;
_438 = ((frost$core$Object*) _421);
frost$core$Frost$unref$frost$core$Object$Q(_438);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:591
_441 = (frost$core$Int) {0u};
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:591:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_444 = &param0->_subtypes;
_445 = *_444;
_446 = _445 != NULL;
_447 = (frost$core$Bit) {_446};
_448 = _447.value;
if (_448) goto block62; else goto block63;
block63:;
_450 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s506, _450, &$s507);
abort(); // unreachable
block62:;
_453 = _445;
_454 = ((frost$core$Object*) _453);
frost$core$Frost$ref$frost$core$Object$Q(_454);
_457 = ((frost$collections$CollectionView*) _453);
ITable* $tmp508 = _457->$class->itable;
while ($tmp508->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp508 = $tmp508->next;
}
_458 = $tmp508->methods[0];
_459 = _458(_457);
_460 = (frost$core$Int) {1u};
_461 = _459.value;
_462 = _460.value;
_463 = _461 - _462;
_464 = (frost$core$Int) {_463};
_465 = (frost$core$Bit) {false};
_466 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_441, _464, _465);
_467 = _466.min;
*(&local10) = _467;
_469 = _466.max;
_470 = _466.inclusive;
_471 = _470.value;
_472 = (frost$core$Int) {1u};
if (_471) goto block67; else goto block68;
block67:;
_474 = _467.value;
_475 = _469.value;
_476 = _474 <= _475;
_477 = (frost$core$Bit) {_476};
_478 = _477.value;
if (_478) goto block64; else goto block65;
block68:;
_480 = _467.value;
_481 = _469.value;
_482 = _480 < _481;
_483 = (frost$core$Bit) {_482};
_484 = _483.value;
if (_484) goto block64; else goto block65;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:592
_487 = *(&local9);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:592:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_490 = &param0->_subtypes;
_491 = *_490;
_492 = _491 != NULL;
_493 = (frost$core$Bit) {_492};
_494 = _493.value;
if (_494) goto block70; else goto block71;
block71:;
_496 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s509, _496, &$s510);
abort(); // unreachable
block70:;
_499 = _491;
_500 = ((frost$core$Object*) _499);
frost$core$Frost$ref$frost$core$Object$Q(_500);
_503 = *(&local10);
_504 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_499, _503);
_505 = ((org$frostlang$frostc$Type*) _504);
_506 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_505, param1, param2);
_507 = ((frost$core$Object*) _506);
frost$collections$Array$add$frost$collections$Array$T(_487, _507);
_509 = ((frost$core$Object*) _506);
frost$core$Frost$unref$frost$core$Object$Q(_509);
_511 = _504;
frost$core$Frost$unref$frost$core$Object$Q(_511);
_513 = ((frost$core$Object*) _499);
frost$core$Frost$unref$frost$core$Object$Q(_513);
_516 = *(&local10);
_517 = _469.value;
_518 = _516.value;
_519 = _517 - _518;
_520 = (frost$core$Int) {_519};
if (_471) goto block73; else goto block74;
block73:;
_522 = _520.value;
_523 = _472.value;
_524 = _522 >= _523;
_525 = (frost$core$Bit) {_524};
_526 = _525.value;
if (_526) goto block72; else goto block65;
block74:;
_528 = _520.value;
_529 = _472.value;
_530 = _528 > _529;
_531 = (frost$core$Bit) {_530};
_532 = _531.value;
if (_532) goto block72; else goto block65;
block72:;
_534 = _516.value;
_535 = _472.value;
_536 = _534 + _535;
_537 = (frost$core$Int) {_536};
*(&local10) = _537;
goto block64;
block65:;
_540 = ((frost$core$Object*) _453);
frost$core$Frost$unref$frost$core$Object$Q(_540);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:594
_543 = ((org$frostlang$frostc$Symbol*) param0);
_544 = &_543->position;
_545 = *_544;
_546 = &param0->typeKind;
_547 = *_546;
_548 = *(&local9);
_549 = ((frost$collections$ListView*) _548);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:595:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_552 = &param0->_subtypes;
_553 = *_552;
_554 = _553 != NULL;
_555 = (frost$core$Bit) {_554};
_556 = _555.value;
if (_556) goto block76; else goto block77;
block77:;
_558 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s511, _558, &$s512);
abort(); // unreachable
block76:;
_561 = _553;
_562 = ((frost$core$Object*) _561);
frost$core$Frost$ref$frost$core$Object$Q(_562);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:595:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_567 = &param0->_subtypes;
_568 = *_567;
_569 = _568 != NULL;
_570 = (frost$core$Bit) {_569};
_571 = _570.value;
if (_571) goto block79; else goto block80;
block80:;
_573 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s513, _573, &$s514);
abort(); // unreachable
block79:;
_576 = _568;
_577 = ((frost$core$Object*) _576);
frost$core$Frost$ref$frost$core$Object$Q(_577);
_580 = ((frost$collections$CollectionView*) _576);
ITable* $tmp515 = _580->$class->itable;
while ($tmp515->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp515 = $tmp515->next;
}
_581 = $tmp515->methods[0];
_582 = _581(_580);
_583 = (frost$core$Int) {1u};
_584 = _582.value;
_585 = _583.value;
_586 = _584 - _585;
_587 = (frost$core$Int) {_586};
_588 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_561, _587);
_589 = ((org$frostlang$frostc$Type*) _588);
_590 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_589, param1, param2);
_591 = &param0->priority;
_592 = *_591;
_593 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, _545, _547, _549, _590, _592);
_594 = ((frost$core$Object*) _593);
frost$core$Frost$ref$frost$core$Object$Q(_594);
_596 = ((frost$core$Object*) _593);
frost$core$Frost$unref$frost$core$Object$Q(_596);
_598 = ((frost$core$Object*) _590);
frost$core$Frost$unref$frost$core$Object$Q(_598);
_600 = _588;
frost$core$Frost$unref$frost$core$Object$Q(_600);
_602 = ((frost$core$Object*) _576);
frost$core$Frost$unref$frost$core$Object$Q(_602);
_604 = ((frost$core$Object*) _561);
frost$core$Frost$unref$frost$core$Object$Q(_604);
_606 = *(&local9);
_607 = ((frost$core$Object*) _606);
frost$core$Frost$unref$frost$core$Object$Q(_607);
*(&local9) = ((frost$collections$Array*) NULL);
*(&local2) = _593;
goto block4;
block54:;
_612 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:597:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_615 = _73.value;
_616 = _612.value;
_617 = _615 == _616;
_618 = (frost$core$Bit) {_617};
_620 = _618.value;
if (_620) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:598
_623 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_623);
*(&local11) = ((frost$collections$Array*) NULL);
_626 = ((frost$core$Object*) _623);
frost$core$Frost$ref$frost$core$Object$Q(_626);
_628 = *(&local11);
_629 = ((frost$core$Object*) _628);
frost$core$Frost$unref$frost$core$Object$Q(_629);
*(&local11) = _623;
_632 = ((frost$core$Object*) _623);
frost$core$Frost$unref$frost$core$Object$Q(_632);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:599
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:599:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_637 = &param0->_subtypes;
_638 = *_637;
_639 = _638 != NULL;
_640 = (frost$core$Bit) {_639};
_641 = _640.value;
if (_641) goto block85; else goto block86;
block86:;
_643 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s516, _643, &$s517);
abort(); // unreachable
block85:;
_646 = _638;
_647 = ((frost$core$Object*) _646);
frost$core$Frost$ref$frost$core$Object$Q(_647);
_650 = ((frost$collections$Iterable*) _646);
ITable* $tmp518 = _650->$class->itable;
while ($tmp518->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp518 = $tmp518->next;
}
_651 = $tmp518->methods[0];
_652 = _651(_650);
goto block87;
block87:;
ITable* $tmp519 = _652->$class->itable;
while ($tmp519->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp519 = $tmp519->next;
}
_654 = $tmp519->methods[0];
_655 = _654(_652);
_656 = _655.value;
if (_656) goto block89; else goto block88;
block88:;
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp520 = _652->$class->itable;
while ($tmp520->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp520 = $tmp520->next;
}
_659 = $tmp520->methods[1];
_660 = _659(_652);
_661 = ((org$frostlang$frostc$Type*) _660);
_662 = ((frost$core$Object*) _661);
frost$core$Frost$ref$frost$core$Object$Q(_662);
_664 = *(&local12);
_665 = ((frost$core$Object*) _664);
frost$core$Frost$unref$frost$core$Object$Q(_665);
*(&local12) = _661;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:600
_669 = *(&local11);
_670 = *(&local12);
_671 = org$frostlang$frostc$Type$remap$org$frostlang$frostc$Compiler$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_670, param1, param2);
_672 = ((frost$core$Object*) _671);
frost$collections$Array$add$frost$collections$Array$T(_669, _672);
_674 = ((frost$core$Object*) _671);
frost$core$Frost$unref$frost$core$Object$Q(_674);
_676 = _660;
frost$core$Frost$unref$frost$core$Object$Q(_676);
_678 = *(&local12);
_679 = ((frost$core$Object*) _678);
frost$core$Frost$unref$frost$core$Object$Q(_679);
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
goto block87;
block89:;
_683 = ((frost$core$Object*) _652);
frost$core$Frost$unref$frost$core$Object$Q(_683);
_685 = ((frost$core$Object*) _646);
frost$core$Frost$unref$frost$core$Object$Q(_685);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:602
_688 = *(&local11);
_689 = ((frost$collections$ListView*) _688);
_690 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_689);
_691 = ((frost$core$Object*) _690);
frost$core$Frost$ref$frost$core$Object$Q(_691);
_693 = ((frost$core$Object*) _690);
frost$core$Frost$unref$frost$core$Object$Q(_693);
_695 = *(&local11);
_696 = ((frost$core$Object*) _695);
frost$core$Frost$unref$frost$core$Object$Q(_696);
*(&local11) = ((frost$collections$Array*) NULL);
*(&local2) = _690;
goto block4;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:605
_702 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_702);
*(&local2) = param0;
goto block4;
block11:;
goto block90;
block90:;
block4:;
_24 = *(&local2);
_25 = &_24->typeKind;
_26 = *_25;
org$frostlang$frostc$Type$Kind$wrapper* $tmp521;
$tmp521 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp521->value = _26;
_27 = ((frost$core$Equatable*) $tmp521);
_28 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:564:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_31 = &(&local4)->$rawValue;
*_31 = _28;
_33 = *(&local4);
*(&local3) = _33;
_36 = *(&local3);
org$frostlang$frostc$Type$Kind$wrapper* $tmp522;
$tmp522 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp522->value = _36;
_37 = ((frost$core$Equatable*) $tmp522);
ITable* $tmp523 = _27->$class->itable;
while ($tmp523->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp523 = $tmp523->next;
}
_38 = $tmp523->methods[1];
_39 = _38(_27, _37);
_40 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_40);
_42 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_47 = _39.value;
if (_47) goto block6; else goto block7;
block6:;
_49 = *(&local2);
return _49;
block7:;
_44 = (frost$core$Int) {565u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s524, _44, &$s525);
abort(); // unreachable

}
frost$core$Int org$frostlang$frostc$Type$get_hash$R$frost$core$Int(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

org$frostlang$frostc$Symbol* _1;
frost$core$String** _2;
frost$core$String* _3;
frost$collections$HashKey* _4;
$fn526 _5;
frost$core$Int _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:612
_1 = ((org$frostlang$frostc$Symbol*) param0);
_2 = &_1->name;
_3 = *_2;
_4 = ((frost$collections$HashKey*) _3);
ITable* $tmp527 = _4->$class->itable;
while ($tmp527->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp527 = $tmp527->next;
}
_5 = $tmp527->methods[0];
_6 = _5(_4);
return _6;

}
frost$core$String* org$frostlang$frostc$Type$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

org$frostlang$frostc$Symbol* _1;
frost$core$String** _2;
frost$core$String* _3;
frost$core$Object* _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:617
_1 = ((org$frostlang$frostc$Symbol*) param0);
_2 = &_1->name;
_3 = *_2;
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
return _3;

}
void org$frostlang$frostc$Type$cleanup(void* rawSelf) {
org$frostlang$frostc$Type* param0 = (org$frostlang$frostc$Type*) rawSelf;

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

