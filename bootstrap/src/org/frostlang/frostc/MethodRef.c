#include "org/frostlang/frostc/MethodRef.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Variable.h"
#include "frost/collections/HashMap.h"
#include "frost/core/Int64.h"
#include "frost/core/Equatable.h"
#include "frost/core/Frost.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/collections/Stack.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "frost/collections/Key.h"


static frost$core$String $s1;
org$frostlang$frostc$MethodRef$class_type org$frostlang$frostc$MethodRef$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$MethodRef$get_asString$R$frost$core$String, org$frostlang$frostc$MethodRef$cleanup, org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64, org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type, org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type} };

typedef frost$core$Bit (*$fn12)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn51)(frost$core$Object*);
typedef frost$core$Bit (*$fn102)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn115)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn148)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn188)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn199)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Bit (*$fn242)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn255)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn268)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn281)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn305)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn334)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn387)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn398)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Bit (*$fn411)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn424)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn437)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn450)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn474)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn491)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn495)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn500)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn546)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn559)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn572)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn585)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn609)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn642)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn673)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn684)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Bit (*$fn710)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn756)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn767)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$GT);
typedef frost$core$Int64 (*$fn816)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn850)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn870)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn921)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn934)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn947)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn960)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn976)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1006)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1019)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1032)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1045)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1069)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1087)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 30, 3424382132411029242, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x6d\x65\x74\x68\x6f\x64\x20", 18, -7848168754699295719, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x69\x6e\x64\x54\x79\x70\x65\x28", 9, 2209574360715635276, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x66\x61\x69\x6c\x65\x64", 8, 15259372878142387, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s286 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -3339589474713187568, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static frost$core$String $s372 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s455 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -3339589474713187568, NULL };
static frost$core$String $s461 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s469 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s589 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s590 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -3339589474713187568, NULL };
static frost$core$String $s596 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s604 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 16, -3824106976449029430, NULL };
static frost$core$String $s658 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s668 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s693 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s719 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s727 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -3824106975633991258, NULL };
static frost$core$String $s741 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s751 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s775 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s798 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s804 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s809 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s858 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s859 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s964 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s965 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x43\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 97, -2976789655376824909, NULL };
static frost$core$String $s971 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s990 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1049 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1050 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x67\x65\x74\x5f\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 102, -3339589474713187568, NULL };
static frost$core$String $s1056 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1064 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s1081 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -7131972655011641641, NULL };
static frost$core$String $s1083 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1091 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };

void org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$MethodRef* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$MethodDecl* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:28
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q(param0, param1, param2, param3, ((frost$collections$ListView*) NULL));
return;

}
void org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q(org$frostlang$frostc$MethodRef* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$MethodDecl* param3, frost$collections$ListView* param4) {

org$frostlang$frostc$Compiler$Resolution local0;
org$frostlang$frostc$Compiler$Resolution local1;
frost$core$Bit local2;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$MethodDecl$Kind local5;
org$frostlang$frostc$MethodDecl$Kind local6;
frost$core$Bit local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
frost$core$Bit local10;
frost$collections$Array* local11 = NULL;
org$frostlang$frostc$Type$Kind local12;
org$frostlang$frostc$Type$Kind local13;
org$frostlang$frostc$Type$Kind local14;
org$frostlang$frostc$Type$Kind local15;
org$frostlang$frostc$Type$Kind local16;
org$frostlang$frostc$Type$Kind local17;
org$frostlang$frostc$Type$Kind local18;
org$frostlang$frostc$Type$Kind local19;
org$frostlang$frostc$Type$Kind local20;
org$frostlang$frostc$Type$Kind local21;
org$frostlang$frostc$Type$Kind local22;
org$frostlang$frostc$Type$Kind local23;
org$frostlang$frostc$Type$Kind local24;
org$frostlang$frostc$MethodDecl$Kind local25;
org$frostlang$frostc$MethodDecl$Kind local26;
org$frostlang$frostc$Type$Kind local27;
org$frostlang$frostc$Type$Kind local28;
org$frostlang$frostc$Type$Kind local29;
org$frostlang$frostc$Type$Kind local30;
org$frostlang$frostc$Type$Kind local31;
org$frostlang$frostc$Type$Kind local32;
org$frostlang$frostc$Type$Kind local33;
org$frostlang$frostc$Type$Kind local34;
org$frostlang$frostc$Type$Kind local35;
org$frostlang$frostc$Type$Kind local36;
org$frostlang$frostc$Type$Kind local37;
org$frostlang$frostc$Type$Kind local38;
org$frostlang$frostc$Type$Kind local39;
org$frostlang$frostc$Pair* local40 = NULL;
org$frostlang$frostc$Compiler$EnclosingContext* local41 = NULL;
org$frostlang$frostc$IR$Block$ID$nullable local42;
org$frostlang$frostc$Variable* local43 = NULL;
org$frostlang$frostc$Type$Kind local44;
org$frostlang$frostc$Type$Kind local45;
org$frostlang$frostc$Type$Kind local46;
org$frostlang$frostc$Type$Kind local47;
org$frostlang$frostc$Type$Kind local48;
org$frostlang$frostc$Type$Kind local49;
org$frostlang$frostc$Type$Kind local50;
org$frostlang$frostc$Type$Kind local51;
org$frostlang$frostc$Type* local52 = NULL;
org$frostlang$frostc$Type$Kind local53;
org$frostlang$frostc$Type$Kind local54;
frost$core$Bit local55;
org$frostlang$frostc$Type$Kind local56;
org$frostlang$frostc$Type$Kind local57;
org$frostlang$frostc$Type$Kind local58;
org$frostlang$frostc$Type$Kind local59;
org$frostlang$frostc$Type* local60 = NULL;
frost$core$String* local61 = NULL;
frost$collections$HashMap* local62 = NULL;
frost$core$Int64 local63;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:35
org$frostlang$frostc$Compiler$Resolution* $tmp2 = &param3->resolved;
org$frostlang$frostc$Compiler$Resolution $tmp3 = *$tmp2;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp4;
$tmp4 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp4->value = $tmp3;
frost$core$Int64 $tmp5 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int64):org.frostlang.frostc.Compiler.Resolution from MethodRef.frost:35:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
frost$core$Int64* $tmp6 = &(&local1)->$rawValue;
*$tmp6 = $tmp5;
org$frostlang$frostc$Compiler$Resolution $tmp7 = *(&local1);
*(&local0) = $tmp7;
org$frostlang$frostc$Compiler$Resolution $tmp8 = *(&local0);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp9;
$tmp9 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp9->value = $tmp8;
ITable* $tmp10 = ((frost$core$Equatable*) $tmp4)->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[1];
frost$core$Bit $tmp13 = $tmp11(((frost$core$Equatable*) $tmp4), ((frost$core$Equatable*) $tmp9));
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp15 = (frost$core$Int64) {35};
frost$core$String* $tmp16 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param3);
frost$core$String* $tmp17 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s18, $tmp16);
frost$core$String* $tmp19 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp17, &$s20);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s21, $tmp15, $tmp19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
abort(); // unreachable
block2:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp9)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:37
frost$core$Bit $tmp22 = frost$core$Bit$init$builtin_bit(param4 == NULL);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block4; else goto block5;
block4:;
frost$collections$Array** $tmp24 = &param3->genericParameters;
frost$collections$Array* $tmp25 = *$tmp24;
frost$core$Bit $tmp26 = frost$core$Bit$init$builtin_bit($tmp25 != NULL);
*(&local2) = $tmp26;
goto block6;
block5:;
*(&local2) = $tmp22;
goto block6;
block6:;
frost$core$Bit $tmp27 = *(&local2);
frost$core$Bit* $tmp28 = &param0->requiresTypeInference;
*$tmp28 = $tmp27;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodDecl** $tmp29 = &param0->value;
org$frostlang$frostc$MethodDecl* $tmp30 = *$tmp29;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
org$frostlang$frostc$MethodDecl** $tmp31 = &param0->value;
*$tmp31 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:39
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type** $tmp32 = &param0->target;
org$frostlang$frostc$Type* $tmp33 = *$tmp32;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
org$frostlang$frostc$Type** $tmp34 = &param0->target;
*$tmp34 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:40
frost$core$Weak** $tmp35 = &param3->owner;
frost$core$Weak* $tmp36 = *$tmp35;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodRef.frost:40:53
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp37 = &$tmp36->_valid;
frost$core$Bit $tmp38 = *$tmp37;
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp40 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s41, $tmp40);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp42 = &$tmp36->value;
frost$core$Object* $tmp43 = *$tmp42;
frost$core$Frost$ref$frost$core$Object$Q($tmp43);
org$frostlang$frostc$Type* $tmp44 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param1, param2, ((org$frostlang$frostc$ClassDecl*) $tmp43));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
org$frostlang$frostc$Type* $tmp45 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
*(&local3) = $tmp44;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$core$Frost$unref$frost$core$Object$Q($tmp43);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:41
org$frostlang$frostc$Type* $tmp46 = *(&local3);
frost$core$Bit $tmp47 = frost$core$Bit$init$builtin_bit($tmp46 != NULL);
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp49 = (frost$core$Int64) {41};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodRef.frost:41:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn51 $tmp50 = ($fn51) ((frost$core$Object*) param2)->$class->vtable[0];
frost$core$String* $tmp52 = $tmp50(((frost$core$Object*) param2));
frost$core$String* $tmp53 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s54, $tmp52);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$String* $tmp55 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp53, &$s56);
frost$core$Weak** $tmp57 = &param3->owner;
frost$core$Weak* $tmp58 = *$tmp57;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodRef.frost:41:60
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp59 = &$tmp58->_valid;
frost$core$Bit $tmp60 = *$tmp59;
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp62 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s63, $tmp62);
abort(); // unreachable
block16:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp64 = &$tmp58->value;
frost$core$Object* $tmp65 = *$tmp64;
frost$core$Frost$ref$frost$core$Object$Q($tmp65);
frost$core$String** $tmp66 = &((org$frostlang$frostc$ClassDecl*) $tmp65)->name;
frost$core$String* $tmp67 = *$tmp66;
frost$core$String* $tmp68 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp55, $tmp67);
frost$core$String* $tmp69 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp68, &$s70);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s71, $tmp49, $tmp69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$core$Frost$unref$frost$core$Object$Q($tmp65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:42
org$frostlang$frostc$Type* $tmp72 = org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type(param3);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
org$frostlang$frostc$Type* $tmp73 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local4) = $tmp72;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:43
org$frostlang$frostc$Annotations** $tmp74 = &param3->annotations;
org$frostlang$frostc$Annotations* $tmp75 = *$tmp74;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from MethodRef.frost:43:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp76 = &$tmp75->flags;
frost$core$Int64 $tmp77 = *$tmp76;
frost$core$Int64 $tmp78 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp79 = $tmp77.value;
int64_t $tmp80 = $tmp78.value;
int64_t $tmp81 = $tmp79 & $tmp80;
frost$core$Int64 $tmp82 = frost$core$Int64$init$builtin_int64($tmp81);
frost$core$Int64 $tmp83 = (frost$core$Int64) {0};
int64_t $tmp84 = $tmp82.value;
int64_t $tmp85 = $tmp83.value;
bool $tmp86 = $tmp84 != $tmp85;
frost$core$Bit $tmp87 = (frost$core$Bit) {$tmp86};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodRef.frost:43:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp88 = $tmp87.value;
bool $tmp89 = !$tmp88;
frost$core$Bit $tmp90 = (frost$core$Bit) {$tmp89};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block22; else goto block20;
block22:;
org$frostlang$frostc$MethodDecl$Kind* $tmp92 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp93 = *$tmp92;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp94;
$tmp94 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp94->value = $tmp93;
frost$core$Int64 $tmp95 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from MethodRef.frost:43:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp96 = &(&local6)->$rawValue;
*$tmp96 = $tmp95;
org$frostlang$frostc$MethodDecl$Kind $tmp97 = *(&local6);
*(&local5) = $tmp97;
org$frostlang$frostc$MethodDecl$Kind $tmp98 = *(&local5);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp99;
$tmp99 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp99->value = $tmp98;
ITable* $tmp100 = ((frost$core$Equatable*) $tmp94)->$class->itable;
while ($tmp100->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp100 = $tmp100->next;
}
$fn102 $tmp101 = $tmp100->methods[1];
frost$core$Bit $tmp103 = $tmp101(((frost$core$Equatable*) $tmp94), ((frost$core$Equatable*) $tmp99));
bool $tmp104 = $tmp103.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp99)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp94)));
if ($tmp104) goto block21; else goto block20;
block21:;
// begin inline call to function org.frostlang.frostc.Type.get_isClassLiteral():frost.core.Bit from MethodRef.frost:44:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:599
org$frostlang$frostc$Type$Kind* $tmp105 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp106 = *$tmp105;
org$frostlang$frostc$Type$Kind$wrapper* $tmp107;
$tmp107 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp107->value = $tmp106;
frost$core$Int64 $tmp108 = (frost$core$Int64) {11};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:599:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp109 = &(&local9)->$rawValue;
*$tmp109 = $tmp108;
org$frostlang$frostc$Type$Kind $tmp110 = *(&local9);
*(&local8) = $tmp110;
org$frostlang$frostc$Type$Kind $tmp111 = *(&local8);
org$frostlang$frostc$Type$Kind$wrapper* $tmp112;
$tmp112 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp112->value = $tmp111;
ITable* $tmp113 = ((frost$core$Equatable*) $tmp107)->$class->itable;
while ($tmp113->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp113 = $tmp113->next;
}
$fn115 $tmp114 = $tmp113->methods[0];
frost$core$Bit $tmp116 = $tmp114(((frost$core$Equatable*) $tmp107), ((frost$core$Equatable*) $tmp112));
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block29; else goto block30;
block29:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:599:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp118 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp119 = *$tmp118;
frost$core$Bit $tmp120 = frost$core$Bit$init$builtin_bit($tmp119 != NULL);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp122 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s123, $tmp122);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp124 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp125 = *$tmp124;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$core$Int64 $tmp126 = (frost$core$Int64) {0};
frost$core$Object* $tmp127 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp125, $tmp126);
// begin inline call to method org.frostlang.frostc.Type.Class():org.frostlang.frostc.Type from Type.frost:599:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:280
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp128 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp129 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp130 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp129);
org$frostlang$frostc$Position $tmp131 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp132 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp128, &$s133, $tmp130, $tmp131, $tmp132);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:599:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp134 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp127))->name;
frost$core$String* $tmp135 = *$tmp134;
frost$core$String** $tmp136 = &((org$frostlang$frostc$Symbol*) $tmp128)->name;
frost$core$String* $tmp137 = *$tmp136;
frost$core$Bit $tmp138 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp135, $tmp137);
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block37; else goto block38;
block37:;
org$frostlang$frostc$Type$Kind* $tmp140 = &((org$frostlang$frostc$Type*) $tmp127)->typeKind;
org$frostlang$frostc$Type$Kind $tmp141 = *$tmp140;
org$frostlang$frostc$Type$Kind$wrapper* $tmp142;
$tmp142 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp142->value = $tmp141;
org$frostlang$frostc$Type$Kind* $tmp143 = &$tmp128->typeKind;
org$frostlang$frostc$Type$Kind $tmp144 = *$tmp143;
org$frostlang$frostc$Type$Kind$wrapper* $tmp145;
$tmp145 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp145->value = $tmp144;
ITable* $tmp146 = ((frost$core$Equatable*) $tmp142)->$class->itable;
while ($tmp146->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp146 = $tmp146->next;
}
$fn148 $tmp147 = $tmp146->methods[0];
frost$core$Bit $tmp149 = $tmp147(((frost$core$Equatable*) $tmp142), ((frost$core$Equatable*) $tmp145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp145)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp142)));
*(&local10) = $tmp149;
goto block39;
block38:;
*(&local10) = $tmp138;
goto block39;
block39:;
frost$core$Bit $tmp150 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$Frost$unref$frost$core$Object$Q($tmp127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
*(&local7) = $tmp150;
goto block31;
block30:;
*(&local7) = $tmp116;
goto block31;
block31:;
frost$core$Bit $tmp151 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp112)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp107)));
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:45
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp153 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp153);
*(&local11) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$collections$Array* $tmp154 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local11) = $tmp153;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:46
frost$collections$Array* $tmp155 = *(&local11);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:46:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp156 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp157 = *$tmp156;
frost$core$Bit $tmp158 = frost$core$Bit$init$builtin_bit($tmp157 != NULL);
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp160 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s161, $tmp160);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp162 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp163 = *$tmp162;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
frost$core$Int64 $tmp164 = (frost$core$Int64) {1};
frost$core$Object* $tmp165 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp163, $tmp164);
frost$collections$Array$add$frost$collections$Array$T($tmp155, ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp165)));
frost$core$Frost$unref$frost$core$Object$Q($tmp165);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:47
frost$collections$Array* $tmp166 = *(&local11);
org$frostlang$frostc$Type* $tmp167 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:47:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp168 = &$tmp167->_subtypes;
org$frostlang$frostc$FixedArray* $tmp169 = *$tmp168;
frost$core$Bit $tmp170 = frost$core$Bit$init$builtin_bit($tmp169 != NULL);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block44; else goto block45;
block45:;
frost$core$Int64 $tmp172 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s173, $tmp172);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp174 = &$tmp167->_subtypes;
org$frostlang$frostc$FixedArray* $tmp175 = *$tmp174;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
frost$core$Int64 $tmp176 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp177 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:47:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp178 = &$tmp177->_subtypes;
org$frostlang$frostc$FixedArray* $tmp179 = *$tmp178;
frost$core$Bit $tmp180 = frost$core$Bit$init$builtin_bit($tmp179 != NULL);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp182 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s183, $tmp182);
abort(); // unreachable
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp184 = &$tmp177->_subtypes;
org$frostlang$frostc$FixedArray* $tmp185 = *$tmp184;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
ITable* $tmp186 = ((frost$collections$CollectionView*) $tmp185)->$class->itable;
while ($tmp186->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp186 = $tmp186->next;
}
$fn188 $tmp187 = $tmp186->methods[0];
frost$core$Int64 $tmp189 = $tmp187(((frost$collections$CollectionView*) $tmp185));
frost$core$Int64 $tmp190 = (frost$core$Int64) {1};
int64_t $tmp191 = $tmp189.value;
int64_t $tmp192 = $tmp190.value;
int64_t $tmp193 = $tmp191 - $tmp192;
frost$core$Int64 $tmp194 = (frost$core$Int64) {$tmp193};
frost$core$Bit $tmp195 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp196 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp176, $tmp194, $tmp195);
ITable* $tmp197 = ((frost$collections$ListView*) $tmp175)->$class->itable;
while ($tmp197->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp197 = $tmp197->next;
}
$fn199 $tmp198 = $tmp197->methods[1];
frost$collections$ListView* $tmp200 = $tmp198(((frost$collections$ListView*) $tmp175), $tmp196);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp166, ((frost$collections$CollectionView*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:49
org$frostlang$frostc$MethodDecl$Kind* $tmp201 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp202 = *$tmp201;
frost$core$Int64 $tmp203 = $tmp202.$rawValue;
frost$core$Int64 $tmp204 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from MethodRef.frost:50:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp205 = $tmp203.value;
int64_t $tmp206 = $tmp204.value;
bool $tmp207 = $tmp205 == $tmp206;
frost$core$Bit $tmp208 = frost$core$Bit$init$builtin_bit($tmp207);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:51
frost$core$Int64 $tmp210 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from MethodRef.frost:51:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp211 = &(&local14)->$rawValue;
*$tmp211 = $tmp210;
org$frostlang$frostc$Type$Kind $tmp212 = *(&local14);
*(&local13) = $tmp212;
org$frostlang$frostc$Type$Kind $tmp213 = *(&local13);
*(&local12) = $tmp213;
goto block49;
block51:;
frost$core$Int64 $tmp214 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from MethodRef.frost:53:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp215 = $tmp203.value;
int64_t $tmp216 = $tmp214.value;
bool $tmp217 = $tmp215 == $tmp216;
frost$core$Bit $tmp218 = frost$core$Bit$init$builtin_bit($tmp217);
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:54
frost$core$Int64 $tmp220 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from MethodRef.frost:54:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp221 = &(&local16)->$rawValue;
*$tmp221 = $tmp220;
org$frostlang$frostc$Type$Kind $tmp222 = *(&local16);
*(&local15) = $tmp222;
org$frostlang$frostc$Type$Kind $tmp223 = *(&local15);
*(&local12) = $tmp223;
goto block49;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:57
frost$core$Int64 $tmp224 = (frost$core$Int64) {57};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s225, $tmp224);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:60
org$frostlang$frostc$Type* $tmp226 = *(&local4);
org$frostlang$frostc$Position* $tmp227 = &((org$frostlang$frostc$Symbol*) $tmp226)->position;
org$frostlang$frostc$Position $tmp228 = *$tmp227;
org$frostlang$frostc$Type$Kind $tmp229 = *(&local12);
frost$collections$Array* $tmp230 = *(&local11);
org$frostlang$frostc$Type* $tmp231 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:61:31
org$frostlang$frostc$Type$Kind* $tmp232 = &$tmp231->typeKind;
org$frostlang$frostc$Type$Kind $tmp233 = *$tmp232;
org$frostlang$frostc$Type$Kind$wrapper* $tmp234;
$tmp234 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp234->value = $tmp233;
frost$core$Int64 $tmp235 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp236 = &(&local18)->$rawValue;
*$tmp236 = $tmp235;
org$frostlang$frostc$Type$Kind $tmp237 = *(&local18);
*(&local17) = $tmp237;
org$frostlang$frostc$Type$Kind $tmp238 = *(&local17);
org$frostlang$frostc$Type$Kind$wrapper* $tmp239;
$tmp239 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp239->value = $tmp238;
ITable* $tmp240 = ((frost$core$Equatable*) $tmp234)->$class->itable;
while ($tmp240->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp240 = $tmp240->next;
}
$fn242 $tmp241 = $tmp240->methods[0];
frost$core$Bit $tmp243 = $tmp241(((frost$core$Equatable*) $tmp234), ((frost$core$Equatable*) $tmp239));
bool $tmp244 = $tmp243.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp239)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp234)));
if ($tmp244) goto block59; else goto block63;
block63:;
org$frostlang$frostc$Type$Kind* $tmp245 = &$tmp231->typeKind;
org$frostlang$frostc$Type$Kind $tmp246 = *$tmp245;
org$frostlang$frostc$Type$Kind$wrapper* $tmp247;
$tmp247 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp247->value = $tmp246;
frost$core$Int64 $tmp248 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp249 = &(&local20)->$rawValue;
*$tmp249 = $tmp248;
org$frostlang$frostc$Type$Kind $tmp250 = *(&local20);
*(&local19) = $tmp250;
org$frostlang$frostc$Type$Kind $tmp251 = *(&local19);
org$frostlang$frostc$Type$Kind$wrapper* $tmp252;
$tmp252 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp252->value = $tmp251;
ITable* $tmp253 = ((frost$core$Equatable*) $tmp247)->$class->itable;
while ($tmp253->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp253 = $tmp253->next;
}
$fn255 $tmp254 = $tmp253->methods[0];
frost$core$Bit $tmp256 = $tmp254(((frost$core$Equatable*) $tmp247), ((frost$core$Equatable*) $tmp252));
bool $tmp257 = $tmp256.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp252)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp247)));
if ($tmp257) goto block59; else goto block62;
block62:;
org$frostlang$frostc$Type$Kind* $tmp258 = &$tmp231->typeKind;
org$frostlang$frostc$Type$Kind $tmp259 = *$tmp258;
org$frostlang$frostc$Type$Kind$wrapper* $tmp260;
$tmp260 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp260->value = $tmp259;
frost$core$Int64 $tmp261 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp262 = &(&local22)->$rawValue;
*$tmp262 = $tmp261;
org$frostlang$frostc$Type$Kind $tmp263 = *(&local22);
*(&local21) = $tmp263;
org$frostlang$frostc$Type$Kind $tmp264 = *(&local21);
org$frostlang$frostc$Type$Kind$wrapper* $tmp265;
$tmp265 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp265->value = $tmp264;
ITable* $tmp266 = ((frost$core$Equatable*) $tmp260)->$class->itable;
while ($tmp266->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp266 = $tmp266->next;
}
$fn268 $tmp267 = $tmp266->methods[0];
frost$core$Bit $tmp269 = $tmp267(((frost$core$Equatable*) $tmp260), ((frost$core$Equatable*) $tmp265));
bool $tmp270 = $tmp269.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp265)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp260)));
if ($tmp270) goto block59; else goto block61;
block61:;
org$frostlang$frostc$Type$Kind* $tmp271 = &$tmp231->typeKind;
org$frostlang$frostc$Type$Kind $tmp272 = *$tmp271;
org$frostlang$frostc$Type$Kind$wrapper* $tmp273;
$tmp273 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp273->value = $tmp272;
frost$core$Int64 $tmp274 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:662:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp275 = &(&local24)->$rawValue;
*$tmp275 = $tmp274;
org$frostlang$frostc$Type$Kind $tmp276 = *(&local24);
*(&local23) = $tmp276;
org$frostlang$frostc$Type$Kind $tmp277 = *(&local23);
org$frostlang$frostc$Type$Kind$wrapper* $tmp278;
$tmp278 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp278->value = $tmp277;
ITable* $tmp279 = ((frost$core$Equatable*) $tmp273)->$class->itable;
while ($tmp279->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp279 = $tmp279->next;
}
$fn281 $tmp280 = $tmp279->methods[0];
frost$core$Bit $tmp282 = $tmp280(((frost$core$Equatable*) $tmp273), ((frost$core$Equatable*) $tmp278));
bool $tmp283 = $tmp282.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp278)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp273)));
if ($tmp283) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp284 = (frost$core$Int64) {663};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s285, $tmp284, &$s286);
abort(); // unreachable
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:664
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp287 = &$tmp231->_subtypes;
org$frostlang$frostc$FixedArray* $tmp288 = *$tmp287;
frost$core$Bit $tmp289 = frost$core$Bit$init$builtin_bit($tmp288 != NULL);
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block69; else goto block70;
block70:;
frost$core$Int64 $tmp291 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s292, $tmp291);
abort(); // unreachable
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp293 = &$tmp231->_subtypes;
org$frostlang$frostc$FixedArray* $tmp294 = *$tmp293;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp295 = &$tmp231->_subtypes;
org$frostlang$frostc$FixedArray* $tmp296 = *$tmp295;
frost$core$Bit $tmp297 = frost$core$Bit$init$builtin_bit($tmp296 != NULL);
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block72; else goto block73;
block73:;
frost$core$Int64 $tmp299 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s300, $tmp299);
abort(); // unreachable
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp301 = &$tmp231->_subtypes;
org$frostlang$frostc$FixedArray* $tmp302 = *$tmp301;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
ITable* $tmp303 = ((frost$collections$CollectionView*) $tmp302)->$class->itable;
while ($tmp303->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp303 = $tmp303->next;
}
$fn305 $tmp304 = $tmp303->methods[0];
frost$core$Int64 $tmp306 = $tmp304(((frost$collections$CollectionView*) $tmp302));
frost$core$Int64 $tmp307 = (frost$core$Int64) {1};
int64_t $tmp308 = $tmp306.value;
int64_t $tmp309 = $tmp307.value;
int64_t $tmp310 = $tmp308 - $tmp309;
frost$core$Int64 $tmp311 = (frost$core$Int64) {$tmp310};
frost$core$Object* $tmp312 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp294, $tmp311);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp312)));
frost$core$Frost$unref$frost$core$Object$Q($tmp312);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
org$frostlang$frostc$Type* $tmp313 = *(&local4);
frost$core$Int64* $tmp314 = &$tmp313->priority;
frost$core$Int64 $tmp315 = *$tmp314;
org$frostlang$frostc$Type* $tmp316 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp228, $tmp229, ((frost$collections$ListView*) $tmp230), ((org$frostlang$frostc$Type*) $tmp312), $tmp315);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
org$frostlang$frostc$Type* $tmp317 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
*(&local4) = $tmp316;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp312)));
frost$collections$Array* $tmp318 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local11) = ((frost$collections$Array*) NULL);
goto block19;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:63
frost$core$Bit $tmp319 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param1, param2);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodRef.frost:63:17
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp320 = $tmp319.value;
bool $tmp321 = !$tmp320;
frost$core$Bit $tmp322 = (frost$core$Bit) {$tmp321};
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block76; else goto block75;
block76:;
org$frostlang$frostc$MethodDecl$Kind* $tmp324 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp325 = *$tmp324;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp326;
$tmp326 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp326->value = $tmp325;
frost$core$Int64 $tmp327 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from MethodRef.frost:63:84
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp328 = &(&local26)->$rawValue;
*$tmp328 = $tmp327;
org$frostlang$frostc$MethodDecl$Kind $tmp329 = *(&local26);
*(&local25) = $tmp329;
org$frostlang$frostc$MethodDecl$Kind $tmp330 = *(&local25);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp331;
$tmp331 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp331->value = $tmp330;
ITable* $tmp332 = ((frost$core$Equatable*) $tmp326)->$class->itable;
while ($tmp332->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp332 = $tmp332->next;
}
$fn334 $tmp333 = $tmp332->methods[1];
frost$core$Bit $tmp335 = $tmp333(((frost$core$Equatable*) $tmp326), ((frost$core$Equatable*) $tmp331));
bool $tmp336 = $tmp335.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp331)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp326)));
if ($tmp336) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:65
org$frostlang$frostc$MethodDecl$Kind* $tmp337 = &param3->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp338 = *$tmp337;
frost$core$Int64 $tmp339 = $tmp338.$rawValue;
frost$core$Int64 $tmp340 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from MethodRef.frost:66:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp341 = $tmp339.value;
int64_t $tmp342 = $tmp340.value;
bool $tmp343 = $tmp341 == $tmp342;
frost$core$Bit $tmp344 = frost$core$Bit$init$builtin_bit($tmp343);
bool $tmp345 = $tmp344.value;
if ($tmp345) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:67
frost$core$Int64 $tmp346 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from MethodRef.frost:67:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp347 = &(&local29)->$rawValue;
*$tmp347 = $tmp346;
org$frostlang$frostc$Type$Kind $tmp348 = *(&local29);
*(&local28) = $tmp348;
org$frostlang$frostc$Type$Kind $tmp349 = *(&local28);
*(&local27) = $tmp349;
goto block79;
block81:;
frost$core$Int64 $tmp350 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from MethodRef.frost:69:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp351 = $tmp339.value;
int64_t $tmp352 = $tmp350.value;
bool $tmp353 = $tmp351 == $tmp352;
frost$core$Bit $tmp354 = frost$core$Bit$init$builtin_bit($tmp353);
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block84; else goto block85;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:70
frost$core$Int64 $tmp356 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from MethodRef.frost:70:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp357 = &(&local31)->$rawValue;
*$tmp357 = $tmp356;
org$frostlang$frostc$Type$Kind $tmp358 = *(&local31);
*(&local30) = $tmp358;
org$frostlang$frostc$Type$Kind $tmp359 = *(&local30);
*(&local27) = $tmp359;
goto block79;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:73
frost$core$Int64 $tmp360 = (frost$core$Int64) {73};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s361, $tmp360);
abort(); // unreachable
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:76
org$frostlang$frostc$Type* $tmp362 = *(&local4);
org$frostlang$frostc$Position* $tmp363 = &((org$frostlang$frostc$Symbol*) $tmp362)->position;
org$frostlang$frostc$Position $tmp364 = *$tmp363;
org$frostlang$frostc$Type$Kind $tmp365 = *(&local27);
org$frostlang$frostc$Type* $tmp366 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:77:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp367 = &$tmp366->_subtypes;
org$frostlang$frostc$FixedArray* $tmp368 = *$tmp367;
frost$core$Bit $tmp369 = frost$core$Bit$init$builtin_bit($tmp368 != NULL);
bool $tmp370 = $tmp369.value;
if ($tmp370) goto block89; else goto block90;
block90:;
frost$core$Int64 $tmp371 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s372, $tmp371);
abort(); // unreachable
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp373 = &$tmp366->_subtypes;
org$frostlang$frostc$FixedArray* $tmp374 = *$tmp373;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
frost$core$Int64 $tmp375 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp376 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:77:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp377 = &$tmp376->_subtypes;
org$frostlang$frostc$FixedArray* $tmp378 = *$tmp377;
frost$core$Bit $tmp379 = frost$core$Bit$init$builtin_bit($tmp378 != NULL);
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block92; else goto block93;
block93:;
frost$core$Int64 $tmp381 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s382, $tmp381);
abort(); // unreachable
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp383 = &$tmp376->_subtypes;
org$frostlang$frostc$FixedArray* $tmp384 = *$tmp383;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
ITable* $tmp385 = ((frost$collections$CollectionView*) $tmp384)->$class->itable;
while ($tmp385->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp385 = $tmp385->next;
}
$fn387 $tmp386 = $tmp385->methods[0];
frost$core$Int64 $tmp388 = $tmp386(((frost$collections$CollectionView*) $tmp384));
frost$core$Int64 $tmp389 = (frost$core$Int64) {1};
int64_t $tmp390 = $tmp388.value;
int64_t $tmp391 = $tmp389.value;
int64_t $tmp392 = $tmp390 - $tmp391;
frost$core$Int64 $tmp393 = (frost$core$Int64) {$tmp392};
frost$core$Bit $tmp394 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp395 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp375, $tmp393, $tmp394);
ITable* $tmp396 = ((frost$collections$ListView*) $tmp374)->$class->itable;
while ($tmp396->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp396 = $tmp396->next;
}
$fn398 $tmp397 = $tmp396->methods[1];
frost$collections$ListView* $tmp399 = $tmp397(((frost$collections$ListView*) $tmp374), $tmp395);
org$frostlang$frostc$Type* $tmp400 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:78:31
org$frostlang$frostc$Type$Kind* $tmp401 = &$tmp400->typeKind;
org$frostlang$frostc$Type$Kind $tmp402 = *$tmp401;
org$frostlang$frostc$Type$Kind$wrapper* $tmp403;
$tmp403 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp403->value = $tmp402;
frost$core$Int64 $tmp404 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp405 = &(&local33)->$rawValue;
*$tmp405 = $tmp404;
org$frostlang$frostc$Type$Kind $tmp406 = *(&local33);
*(&local32) = $tmp406;
org$frostlang$frostc$Type$Kind $tmp407 = *(&local32);
org$frostlang$frostc$Type$Kind$wrapper* $tmp408;
$tmp408 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp408->value = $tmp407;
ITable* $tmp409 = ((frost$core$Equatable*) $tmp403)->$class->itable;
while ($tmp409->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp409 = $tmp409->next;
}
$fn411 $tmp410 = $tmp409->methods[0];
frost$core$Bit $tmp412 = $tmp410(((frost$core$Equatable*) $tmp403), ((frost$core$Equatable*) $tmp408));
bool $tmp413 = $tmp412.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp408)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp403)));
if ($tmp413) goto block95; else goto block99;
block99:;
org$frostlang$frostc$Type$Kind* $tmp414 = &$tmp400->typeKind;
org$frostlang$frostc$Type$Kind $tmp415 = *$tmp414;
org$frostlang$frostc$Type$Kind$wrapper* $tmp416;
$tmp416 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp416->value = $tmp415;
frost$core$Int64 $tmp417 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp418 = &(&local35)->$rawValue;
*$tmp418 = $tmp417;
org$frostlang$frostc$Type$Kind $tmp419 = *(&local35);
*(&local34) = $tmp419;
org$frostlang$frostc$Type$Kind $tmp420 = *(&local34);
org$frostlang$frostc$Type$Kind$wrapper* $tmp421;
$tmp421 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp421->value = $tmp420;
ITable* $tmp422 = ((frost$core$Equatable*) $tmp416)->$class->itable;
while ($tmp422->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp422 = $tmp422->next;
}
$fn424 $tmp423 = $tmp422->methods[0];
frost$core$Bit $tmp425 = $tmp423(((frost$core$Equatable*) $tmp416), ((frost$core$Equatable*) $tmp421));
bool $tmp426 = $tmp425.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp421)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp416)));
if ($tmp426) goto block95; else goto block98;
block98:;
org$frostlang$frostc$Type$Kind* $tmp427 = &$tmp400->typeKind;
org$frostlang$frostc$Type$Kind $tmp428 = *$tmp427;
org$frostlang$frostc$Type$Kind$wrapper* $tmp429;
$tmp429 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp429->value = $tmp428;
frost$core$Int64 $tmp430 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp431 = &(&local37)->$rawValue;
*$tmp431 = $tmp430;
org$frostlang$frostc$Type$Kind $tmp432 = *(&local37);
*(&local36) = $tmp432;
org$frostlang$frostc$Type$Kind $tmp433 = *(&local36);
org$frostlang$frostc$Type$Kind$wrapper* $tmp434;
$tmp434 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp434->value = $tmp433;
ITable* $tmp435 = ((frost$core$Equatable*) $tmp429)->$class->itable;
while ($tmp435->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp435 = $tmp435->next;
}
$fn437 $tmp436 = $tmp435->methods[0];
frost$core$Bit $tmp438 = $tmp436(((frost$core$Equatable*) $tmp429), ((frost$core$Equatable*) $tmp434));
bool $tmp439 = $tmp438.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp434)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp429)));
if ($tmp439) goto block95; else goto block97;
block97:;
org$frostlang$frostc$Type$Kind* $tmp440 = &$tmp400->typeKind;
org$frostlang$frostc$Type$Kind $tmp441 = *$tmp440;
org$frostlang$frostc$Type$Kind$wrapper* $tmp442;
$tmp442 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp442->value = $tmp441;
frost$core$Int64 $tmp443 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:662:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp444 = &(&local39)->$rawValue;
*$tmp444 = $tmp443;
org$frostlang$frostc$Type$Kind $tmp445 = *(&local39);
*(&local38) = $tmp445;
org$frostlang$frostc$Type$Kind $tmp446 = *(&local38);
org$frostlang$frostc$Type$Kind$wrapper* $tmp447;
$tmp447 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp447->value = $tmp446;
ITable* $tmp448 = ((frost$core$Equatable*) $tmp442)->$class->itable;
while ($tmp448->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp448 = $tmp448->next;
}
$fn450 $tmp449 = $tmp448->methods[0];
frost$core$Bit $tmp451 = $tmp449(((frost$core$Equatable*) $tmp442), ((frost$core$Equatable*) $tmp447));
bool $tmp452 = $tmp451.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp447)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp442)));
if ($tmp452) goto block95; else goto block96;
block96:;
frost$core$Int64 $tmp453 = (frost$core$Int64) {663};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s454, $tmp453, &$s455);
abort(); // unreachable
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:664
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp456 = &$tmp400->_subtypes;
org$frostlang$frostc$FixedArray* $tmp457 = *$tmp456;
frost$core$Bit $tmp458 = frost$core$Bit$init$builtin_bit($tmp457 != NULL);
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block105; else goto block106;
block106:;
frost$core$Int64 $tmp460 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s461, $tmp460);
abort(); // unreachable
block105:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp462 = &$tmp400->_subtypes;
org$frostlang$frostc$FixedArray* $tmp463 = *$tmp462;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp464 = &$tmp400->_subtypes;
org$frostlang$frostc$FixedArray* $tmp465 = *$tmp464;
frost$core$Bit $tmp466 = frost$core$Bit$init$builtin_bit($tmp465 != NULL);
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block108; else goto block109;
block109:;
frost$core$Int64 $tmp468 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s469, $tmp468);
abort(); // unreachable
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp470 = &$tmp400->_subtypes;
org$frostlang$frostc$FixedArray* $tmp471 = *$tmp470;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
ITable* $tmp472 = ((frost$collections$CollectionView*) $tmp471)->$class->itable;
while ($tmp472->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp472 = $tmp472->next;
}
$fn474 $tmp473 = $tmp472->methods[0];
frost$core$Int64 $tmp475 = $tmp473(((frost$collections$CollectionView*) $tmp471));
frost$core$Int64 $tmp476 = (frost$core$Int64) {1};
int64_t $tmp477 = $tmp475.value;
int64_t $tmp478 = $tmp476.value;
int64_t $tmp479 = $tmp477 - $tmp478;
frost$core$Int64 $tmp480 = (frost$core$Int64) {$tmp479};
frost$core$Object* $tmp481 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp463, $tmp480);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp481)));
frost$core$Frost$unref$frost$core$Object$Q($tmp481);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
org$frostlang$frostc$Type* $tmp482 = *(&local4);
frost$core$Int64* $tmp483 = &$tmp482->priority;
frost$core$Int64 $tmp484 = *$tmp483;
org$frostlang$frostc$Type* $tmp485 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp364, $tmp365, $tmp399, ((org$frostlang$frostc$Type*) $tmp481), $tmp484);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
org$frostlang$frostc$Type* $tmp486 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
*(&local4) = $tmp485;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp481)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
goto block75;
block75:;
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:80
// begin inline call to function org.frostlang.frostc.Compiler.getTryScope():org.frostlang.frostc.Pair<org.frostlang.frostc.IR.Block.ID?, org.frostlang.frostc.Variable?>? from MethodRef.frost:80:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5046
frost$collections$Stack** $tmp487 = &param1->enclosingContexts;
frost$collections$Stack* $tmp488 = *$tmp487;
ITable* $tmp489 = ((frost$collections$Iterable*) $tmp488)->$class->itable;
while ($tmp489->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp489 = $tmp489->next;
}
$fn491 $tmp490 = $tmp489->methods[0];
frost$collections$Iterator* $tmp492 = $tmp490(((frost$collections$Iterable*) $tmp488));
goto block113;
block113:;
ITable* $tmp493 = $tmp492->$class->itable;
while ($tmp493->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp493 = $tmp493->next;
}
$fn495 $tmp494 = $tmp493->methods[0];
frost$core$Bit $tmp496 = $tmp494($tmp492);
bool $tmp497 = $tmp496.value;
if ($tmp497) goto block115; else goto block114;
block114:;
*(&local41) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
ITable* $tmp498 = $tmp492->$class->itable;
while ($tmp498->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp498 = $tmp498->next;
}
$fn500 $tmp499 = $tmp498->methods[1];
frost$core$Object* $tmp501 = $tmp499($tmp492);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp501)));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp502 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
*(&local41) = ((org$frostlang$frostc$Compiler$EnclosingContext*) $tmp501);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5047
org$frostlang$frostc$Compiler$EnclosingContext* $tmp503 = *(&local41);
frost$core$Int64* $tmp504 = &$tmp503->$rawValue;
frost$core$Int64 $tmp505 = *$tmp504;
frost$core$Int64 $tmp506 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:5048:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp507 = $tmp505.value;
int64_t $tmp508 = $tmp506.value;
bool $tmp509 = $tmp507 == $tmp508;
frost$core$Bit $tmp510 = frost$core$Bit$init$builtin_bit($tmp509);
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block117; else goto block118;
block117:;
org$frostlang$frostc$IR$Block$ID$nullable* $tmp512 = (org$frostlang$frostc$IR$Block$ID$nullable*) ($tmp503->$data + 0);
org$frostlang$frostc$IR$Block$ID$nullable $tmp513 = *$tmp512;
*(&local42) = $tmp513;
org$frostlang$frostc$Variable** $tmp514 = (org$frostlang$frostc$Variable**) ($tmp503->$data + 9);
org$frostlang$frostc$Variable* $tmp515 = *$tmp514;
*(&local43) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
org$frostlang$frostc$Variable* $tmp516 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
*(&local43) = $tmp515;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5049
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp517 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
org$frostlang$frostc$IR$Block$ID$nullable $tmp518 = *(&local42);
frost$core$Object* $tmp519;
if ($tmp518.nonnull) {
    org$frostlang$frostc$IR$Block$ID$wrapper* $tmp520;
    $tmp520 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
    $tmp520->value = ((org$frostlang$frostc$IR$Block$ID) $tmp518.value);
    $tmp519 = ((frost$core$Object*) $tmp520);
}
else {
    $tmp519 = NULL;
}
org$frostlang$frostc$Variable* $tmp521 = *(&local43);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp517, $tmp519, ((frost$core$Object*) $tmp521));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
frost$core$Frost$unref$frost$core$Object$Q($tmp519);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
org$frostlang$frostc$Variable* $tmp522 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
*(&local43) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp501);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp523 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
*(&local41) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
*(&local40) = $tmp517;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
goto block112;
block118:;
frost$core$Int64 $tmp524 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Compiler.frost:5051:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp525 = $tmp505.value;
int64_t $tmp526 = $tmp524.value;
bool $tmp527 = $tmp525 == $tmp526;
frost$core$Bit $tmp528 = frost$core$Bit$init$builtin_bit($tmp527);
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block120; else goto block116;
block120:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5052
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$core$Frost$unref$frost$core$Object$Q($tmp501);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp530 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
*(&local41) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
*(&local40) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
goto block112;
block116:;
frost$core$Frost$unref$frost$core$Object$Q($tmp501);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp531 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
*(&local41) = ((org$frostlang$frostc$Compiler$EnclosingContext*) NULL);
goto block113;
block115:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5056
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
*(&local40) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
goto block112;
block112:;
org$frostlang$frostc$Pair* $tmp532 = *(&local40);
frost$core$Bit $tmp533 = frost$core$Bit$init$builtin_bit($tmp532 != NULL);
bool $tmp534 = $tmp533.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
if ($tmp534) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:81
org$frostlang$frostc$Type* $tmp535 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:81:41
org$frostlang$frostc$Type$Kind* $tmp536 = &$tmp535->typeKind;
org$frostlang$frostc$Type$Kind $tmp537 = *$tmp536;
org$frostlang$frostc$Type$Kind$wrapper* $tmp538;
$tmp538 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp538->value = $tmp537;
frost$core$Int64 $tmp539 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp540 = &(&local45)->$rawValue;
*$tmp540 = $tmp539;
org$frostlang$frostc$Type$Kind $tmp541 = *(&local45);
*(&local44) = $tmp541;
org$frostlang$frostc$Type$Kind $tmp542 = *(&local44);
org$frostlang$frostc$Type$Kind$wrapper* $tmp543;
$tmp543 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp543->value = $tmp542;
ITable* $tmp544 = ((frost$core$Equatable*) $tmp538)->$class->itable;
while ($tmp544->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp544 = $tmp544->next;
}
$fn546 $tmp545 = $tmp544->methods[0];
frost$core$Bit $tmp547 = $tmp545(((frost$core$Equatable*) $tmp538), ((frost$core$Equatable*) $tmp543));
bool $tmp548 = $tmp547.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp543)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp538)));
if ($tmp548) goto block123; else goto block127;
block127:;
org$frostlang$frostc$Type$Kind* $tmp549 = &$tmp535->typeKind;
org$frostlang$frostc$Type$Kind $tmp550 = *$tmp549;
org$frostlang$frostc$Type$Kind$wrapper* $tmp551;
$tmp551 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp551->value = $tmp550;
frost$core$Int64 $tmp552 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp553 = &(&local47)->$rawValue;
*$tmp553 = $tmp552;
org$frostlang$frostc$Type$Kind $tmp554 = *(&local47);
*(&local46) = $tmp554;
org$frostlang$frostc$Type$Kind $tmp555 = *(&local46);
org$frostlang$frostc$Type$Kind$wrapper* $tmp556;
$tmp556 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp556->value = $tmp555;
ITable* $tmp557 = ((frost$core$Equatable*) $tmp551)->$class->itable;
while ($tmp557->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp557 = $tmp557->next;
}
$fn559 $tmp558 = $tmp557->methods[0];
frost$core$Bit $tmp560 = $tmp558(((frost$core$Equatable*) $tmp551), ((frost$core$Equatable*) $tmp556));
bool $tmp561 = $tmp560.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp556)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp551)));
if ($tmp561) goto block123; else goto block126;
block126:;
org$frostlang$frostc$Type$Kind* $tmp562 = &$tmp535->typeKind;
org$frostlang$frostc$Type$Kind $tmp563 = *$tmp562;
org$frostlang$frostc$Type$Kind$wrapper* $tmp564;
$tmp564 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp564->value = $tmp563;
frost$core$Int64 $tmp565 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp566 = &(&local49)->$rawValue;
*$tmp566 = $tmp565;
org$frostlang$frostc$Type$Kind $tmp567 = *(&local49);
*(&local48) = $tmp567;
org$frostlang$frostc$Type$Kind $tmp568 = *(&local48);
org$frostlang$frostc$Type$Kind$wrapper* $tmp569;
$tmp569 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp569->value = $tmp568;
ITable* $tmp570 = ((frost$core$Equatable*) $tmp564)->$class->itable;
while ($tmp570->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp570 = $tmp570->next;
}
$fn572 $tmp571 = $tmp570->methods[0];
frost$core$Bit $tmp573 = $tmp571(((frost$core$Equatable*) $tmp564), ((frost$core$Equatable*) $tmp569));
bool $tmp574 = $tmp573.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp569)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp564)));
if ($tmp574) goto block123; else goto block125;
block125:;
org$frostlang$frostc$Type$Kind* $tmp575 = &$tmp535->typeKind;
org$frostlang$frostc$Type$Kind $tmp576 = *$tmp575;
org$frostlang$frostc$Type$Kind$wrapper* $tmp577;
$tmp577 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp577->value = $tmp576;
frost$core$Int64 $tmp578 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:662:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp579 = &(&local51)->$rawValue;
*$tmp579 = $tmp578;
org$frostlang$frostc$Type$Kind $tmp580 = *(&local51);
*(&local50) = $tmp580;
org$frostlang$frostc$Type$Kind $tmp581 = *(&local50);
org$frostlang$frostc$Type$Kind$wrapper* $tmp582;
$tmp582 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp582->value = $tmp581;
ITable* $tmp583 = ((frost$core$Equatable*) $tmp577)->$class->itable;
while ($tmp583->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp583 = $tmp583->next;
}
$fn585 $tmp584 = $tmp583->methods[0];
frost$core$Bit $tmp586 = $tmp584(((frost$core$Equatable*) $tmp577), ((frost$core$Equatable*) $tmp582));
bool $tmp587 = $tmp586.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp582)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp577)));
if ($tmp587) goto block123; else goto block124;
block124:;
frost$core$Int64 $tmp588 = (frost$core$Int64) {663};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s589, $tmp588, &$s590);
abort(); // unreachable
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:664
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp591 = &$tmp535->_subtypes;
org$frostlang$frostc$FixedArray* $tmp592 = *$tmp591;
frost$core$Bit $tmp593 = frost$core$Bit$init$builtin_bit($tmp592 != NULL);
bool $tmp594 = $tmp593.value;
if ($tmp594) goto block133; else goto block134;
block134:;
frost$core$Int64 $tmp595 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s596, $tmp595);
abort(); // unreachable
block133:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp597 = &$tmp535->_subtypes;
org$frostlang$frostc$FixedArray* $tmp598 = *$tmp597;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp599 = &$tmp535->_subtypes;
org$frostlang$frostc$FixedArray* $tmp600 = *$tmp599;
frost$core$Bit $tmp601 = frost$core$Bit$init$builtin_bit($tmp600 != NULL);
bool $tmp602 = $tmp601.value;
if ($tmp602) goto block136; else goto block137;
block137:;
frost$core$Int64 $tmp603 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s604, $tmp603);
abort(); // unreachable
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp605 = &$tmp535->_subtypes;
org$frostlang$frostc$FixedArray* $tmp606 = *$tmp605;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
ITable* $tmp607 = ((frost$collections$CollectionView*) $tmp606)->$class->itable;
while ($tmp607->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp607 = $tmp607->next;
}
$fn609 $tmp608 = $tmp607->methods[0];
frost$core$Int64 $tmp610 = $tmp608(((frost$collections$CollectionView*) $tmp606));
frost$core$Int64 $tmp611 = (frost$core$Int64) {1};
int64_t $tmp612 = $tmp610.value;
int64_t $tmp613 = $tmp611.value;
int64_t $tmp614 = $tmp612 - $tmp613;
frost$core$Int64 $tmp615 = (frost$core$Int64) {$tmp614};
frost$core$Object* $tmp616 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp598, $tmp615);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp616)));
frost$core$Frost$unref$frost$core$Object$Q($tmp616);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local52) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp616)));
org$frostlang$frostc$Type* $tmp617 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
*(&local52) = ((org$frostlang$frostc$Type*) $tmp616);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp616)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:82
org$frostlang$frostc$Type* $tmp618 = *(&local52);
// begin inline call to method org.frostlang.frostc.Type.Error():org.frostlang.frostc.Type from MethodRef.frost:82:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:300
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp619 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp620 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:300:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp621 = &(&local54)->$rawValue;
*$tmp621 = $tmp620;
org$frostlang$frostc$Type$Kind $tmp622 = *(&local54);
*(&local53) = $tmp622;
org$frostlang$frostc$Type$Kind $tmp623 = *(&local53);
org$frostlang$frostc$Position $tmp624 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp625 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp619, &$s626, $tmp623, $tmp624, $tmp625);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
org$frostlang$frostc$Type* $tmp627 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp619);
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from MethodRef.frost:82:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp628 = &((org$frostlang$frostc$Symbol*) $tmp618)->name;
frost$core$String* $tmp629 = *$tmp628;
frost$core$String** $tmp630 = &((org$frostlang$frostc$Symbol*) $tmp627)->name;
frost$core$String* $tmp631 = *$tmp630;
frost$core$Bit $tmp632 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp629, $tmp631);
bool $tmp633 = $tmp632.value;
if ($tmp633) goto block144; else goto block145;
block144:;
org$frostlang$frostc$Type$Kind* $tmp634 = &$tmp618->typeKind;
org$frostlang$frostc$Type$Kind $tmp635 = *$tmp634;
org$frostlang$frostc$Type$Kind$wrapper* $tmp636;
$tmp636 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp636->value = $tmp635;
org$frostlang$frostc$Type$Kind* $tmp637 = &$tmp627->typeKind;
org$frostlang$frostc$Type$Kind $tmp638 = *$tmp637;
org$frostlang$frostc$Type$Kind$wrapper* $tmp639;
$tmp639 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp639->value = $tmp638;
ITable* $tmp640 = ((frost$core$Equatable*) $tmp636)->$class->itable;
while ($tmp640->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp640 = $tmp640->next;
}
$fn642 $tmp641 = $tmp640->methods[0];
frost$core$Bit $tmp643 = $tmp641(((frost$core$Equatable*) $tmp636), ((frost$core$Equatable*) $tmp639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp639)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp636)));
*(&local55) = $tmp643;
goto block146;
block145:;
*(&local55) = $tmp632;
goto block146;
block146:;
frost$core$Bit $tmp644 = *(&local55);
bool $tmp645 = $tmp644.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
if ($tmp645) goto block138; else goto block140;
block138:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:83
org$frostlang$frostc$Type* $tmp646 = *(&local4);
org$frostlang$frostc$Position* $tmp647 = &((org$frostlang$frostc$Symbol*) $tmp646)->position;
org$frostlang$frostc$Position $tmp648 = *$tmp647;
org$frostlang$frostc$Type* $tmp649 = *(&local4);
org$frostlang$frostc$Type$Kind* $tmp650 = &$tmp649->typeKind;
org$frostlang$frostc$Type$Kind $tmp651 = *$tmp650;
org$frostlang$frostc$Type* $tmp652 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:84:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp653 = &$tmp652->_subtypes;
org$frostlang$frostc$FixedArray* $tmp654 = *$tmp653;
frost$core$Bit $tmp655 = frost$core$Bit$init$builtin_bit($tmp654 != NULL);
bool $tmp656 = $tmp655.value;
if ($tmp656) goto block148; else goto block149;
block149:;
frost$core$Int64 $tmp657 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s658, $tmp657);
abort(); // unreachable
block148:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp659 = &$tmp652->_subtypes;
org$frostlang$frostc$FixedArray* $tmp660 = *$tmp659;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
frost$core$Int64 $tmp661 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp662 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:84:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp663 = &$tmp662->_subtypes;
org$frostlang$frostc$FixedArray* $tmp664 = *$tmp663;
frost$core$Bit $tmp665 = frost$core$Bit$init$builtin_bit($tmp664 != NULL);
bool $tmp666 = $tmp665.value;
if ($tmp666) goto block151; else goto block152;
block152:;
frost$core$Int64 $tmp667 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s668, $tmp667);
abort(); // unreachable
block151:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp669 = &$tmp662->_subtypes;
org$frostlang$frostc$FixedArray* $tmp670 = *$tmp669;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
ITable* $tmp671 = ((frost$collections$CollectionView*) $tmp670)->$class->itable;
while ($tmp671->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp671 = $tmp671->next;
}
$fn673 $tmp672 = $tmp671->methods[0];
frost$core$Int64 $tmp674 = $tmp672(((frost$collections$CollectionView*) $tmp670));
frost$core$Int64 $tmp675 = (frost$core$Int64) {1};
int64_t $tmp676 = $tmp674.value;
int64_t $tmp677 = $tmp675.value;
int64_t $tmp678 = $tmp676 - $tmp677;
frost$core$Int64 $tmp679 = (frost$core$Int64) {$tmp678};
frost$core$Bit $tmp680 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp681 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp661, $tmp679, $tmp680);
ITable* $tmp682 = ((frost$collections$ListView*) $tmp660)->$class->itable;
while ($tmp682->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp682 = $tmp682->next;
}
$fn684 $tmp683 = $tmp682->methods[1];
frost$collections$ListView* $tmp685 = $tmp683(((frost$collections$ListView*) $tmp660), $tmp681);
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from MethodRef.frost:84:91
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp686 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp687 = (frost$core$Int64) {4};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:258:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp688 = &(&local57)->$rawValue;
*$tmp688 = $tmp687;
org$frostlang$frostc$Type$Kind $tmp689 = *(&local57);
*(&local56) = $tmp689;
org$frostlang$frostc$Type$Kind $tmp690 = *(&local56);
org$frostlang$frostc$Position $tmp691 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp692 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp686, &$s693, $tmp690, $tmp691, $tmp692);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
org$frostlang$frostc$Type* $tmp694 = *(&local4);
frost$core$Int64* $tmp695 = &$tmp694->priority;
frost$core$Int64 $tmp696 = *$tmp695;
org$frostlang$frostc$Type* $tmp697 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp648, $tmp651, $tmp685, $tmp686, $tmp696);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
org$frostlang$frostc$Type* $tmp698 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
*(&local4) = $tmp697;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
goto block139;
block140:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:87
org$frostlang$frostc$Type* $tmp699 = *(&local52);
org$frostlang$frostc$Type$Kind* $tmp700 = &$tmp699->typeKind;
org$frostlang$frostc$Type$Kind $tmp701 = *$tmp700;
org$frostlang$frostc$Type$Kind$wrapper* $tmp702;
$tmp702 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp702->value = $tmp701;
frost$core$Int64 $tmp703 = (frost$core$Int64) {11};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from MethodRef.frost:87:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp704 = &(&local59)->$rawValue;
*$tmp704 = $tmp703;
org$frostlang$frostc$Type$Kind $tmp705 = *(&local59);
*(&local58) = $tmp705;
org$frostlang$frostc$Type$Kind $tmp706 = *(&local58);
org$frostlang$frostc$Type$Kind$wrapper* $tmp707;
$tmp707 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp707->value = $tmp706;
ITable* $tmp708 = ((frost$core$Equatable*) $tmp702)->$class->itable;
while ($tmp708->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp708 = $tmp708->next;
}
$fn710 $tmp709 = $tmp708->methods[0];
frost$core$Bit $tmp711 = $tmp709(((frost$core$Equatable*) $tmp702), ((frost$core$Equatable*) $tmp707));
bool $tmp712 = $tmp711.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp707)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp702)));
if ($tmp712) goto block157; else goto block156;
block157:;
org$frostlang$frostc$Type* $tmp713 = *(&local52);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:88:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp714 = &$tmp713->_subtypes;
org$frostlang$frostc$FixedArray* $tmp715 = *$tmp714;
frost$core$Bit $tmp716 = frost$core$Bit$init$builtin_bit($tmp715 != NULL);
bool $tmp717 = $tmp716.value;
if ($tmp717) goto block160; else goto block161;
block161:;
frost$core$Int64 $tmp718 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s719, $tmp718);
abort(); // unreachable
block160:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp720 = &$tmp713->_subtypes;
org$frostlang$frostc$FixedArray* $tmp721 = *$tmp720;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
frost$core$Int64 $tmp722 = (frost$core$Int64) {0};
frost$core$Object* $tmp723 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp721, $tmp722);
frost$core$String** $tmp724 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp723))->name;
frost$core$String* $tmp725 = *$tmp724;
frost$core$Bit $tmp726 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp725, &$s727);
bool $tmp728 = $tmp726.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp723);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
if ($tmp728) goto block155; else goto block156;
block155:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:89
org$frostlang$frostc$Type* $tmp729 = *(&local4);
org$frostlang$frostc$Position* $tmp730 = &((org$frostlang$frostc$Symbol*) $tmp729)->position;
org$frostlang$frostc$Position $tmp731 = *$tmp730;
org$frostlang$frostc$Type* $tmp732 = *(&local4);
org$frostlang$frostc$Type$Kind* $tmp733 = &$tmp732->typeKind;
org$frostlang$frostc$Type$Kind $tmp734 = *$tmp733;
org$frostlang$frostc$Type* $tmp735 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:90:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp736 = &$tmp735->_subtypes;
org$frostlang$frostc$FixedArray* $tmp737 = *$tmp736;
frost$core$Bit $tmp738 = frost$core$Bit$init$builtin_bit($tmp737 != NULL);
bool $tmp739 = $tmp738.value;
if ($tmp739) goto block163; else goto block164;
block164:;
frost$core$Int64 $tmp740 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s741, $tmp740);
abort(); // unreachable
block163:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp742 = &$tmp735->_subtypes;
org$frostlang$frostc$FixedArray* $tmp743 = *$tmp742;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
frost$core$Int64 $tmp744 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp745 = *(&local4);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:90:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp746 = &$tmp745->_subtypes;
org$frostlang$frostc$FixedArray* $tmp747 = *$tmp746;
frost$core$Bit $tmp748 = frost$core$Bit$init$builtin_bit($tmp747 != NULL);
bool $tmp749 = $tmp748.value;
if ($tmp749) goto block166; else goto block167;
block167:;
frost$core$Int64 $tmp750 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s751, $tmp750);
abort(); // unreachable
block166:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp752 = &$tmp745->_subtypes;
org$frostlang$frostc$FixedArray* $tmp753 = *$tmp752;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
ITable* $tmp754 = ((frost$collections$CollectionView*) $tmp753)->$class->itable;
while ($tmp754->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp754 = $tmp754->next;
}
$fn756 $tmp755 = $tmp754->methods[0];
frost$core$Int64 $tmp757 = $tmp755(((frost$collections$CollectionView*) $tmp753));
frost$core$Int64 $tmp758 = (frost$core$Int64) {1};
int64_t $tmp759 = $tmp757.value;
int64_t $tmp760 = $tmp758.value;
int64_t $tmp761 = $tmp759 - $tmp760;
frost$core$Int64 $tmp762 = (frost$core$Int64) {$tmp761};
frost$core$Bit $tmp763 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp764 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp744, $tmp762, $tmp763);
ITable* $tmp765 = ((frost$collections$ListView*) $tmp743)->$class->itable;
while ($tmp765->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp765 = $tmp765->next;
}
$fn767 $tmp766 = $tmp765->methods[1];
frost$collections$ListView* $tmp768 = $tmp766(((frost$collections$ListView*) $tmp743), $tmp764);
org$frostlang$frostc$Type* $tmp769 = *(&local52);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:91:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp770 = &$tmp769->_subtypes;
org$frostlang$frostc$FixedArray* $tmp771 = *$tmp770;
frost$core$Bit $tmp772 = frost$core$Bit$init$builtin_bit($tmp771 != NULL);
bool $tmp773 = $tmp772.value;
if ($tmp773) goto block169; else goto block170;
block170:;
frost$core$Int64 $tmp774 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s775, $tmp774);
abort(); // unreachable
block169:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp776 = &$tmp769->_subtypes;
org$frostlang$frostc$FixedArray* $tmp777 = *$tmp776;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Int64 $tmp778 = (frost$core$Int64) {1};
frost$core$Object* $tmp779 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp777, $tmp778);
org$frostlang$frostc$Type* $tmp780 = *(&local4);
frost$core$Int64* $tmp781 = &$tmp780->priority;
frost$core$Int64 $tmp782 = *$tmp781;
org$frostlang$frostc$Type* $tmp783 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp731, $tmp734, $tmp768, ((org$frostlang$frostc$Type*) $tmp779), $tmp782);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
org$frostlang$frostc$Type* $tmp784 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
*(&local4) = $tmp783;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
frost$core$Frost$unref$frost$core$Object$Q($tmp779);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
goto block156;
block156:;
goto block139;
block139:;
org$frostlang$frostc$Type* $tmp785 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
*(&local52) = ((org$frostlang$frostc$Type*) NULL);
goto block111;
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:94
org$frostlang$frostc$Type* $tmp786 = *(&local3);
org$frostlang$frostc$Type* $tmp787 = *(&local4);
org$frostlang$frostc$Type* $tmp788 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp786, $tmp787);
*(&local60) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
org$frostlang$frostc$Type* $tmp789 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
*(&local60) = $tmp788;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:95
frost$core$Bit $tmp790 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block171; else goto block173;
block171:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:96
frost$core$Weak** $tmp792 = &param3->owner;
frost$core$Weak* $tmp793 = *$tmp792;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodRef.frost:96:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp794 = &$tmp793->_valid;
frost$core$Bit $tmp795 = *$tmp794;
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block176; else goto block177;
block177:;
frost$core$Int64 $tmp797 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s798, $tmp797);
abort(); // unreachable
block176:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp799 = &$tmp793->value;
frost$core$Object* $tmp800 = *$tmp799;
frost$core$Frost$ref$frost$core$Object$Q($tmp800);
frost$core$String** $tmp801 = &((org$frostlang$frostc$ClassDecl*) $tmp800)->name;
frost$core$String* $tmp802 = *$tmp801;
frost$core$String* $tmp803 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp802, &$s804);
frost$core$String** $tmp805 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp806 = *$tmp805;
frost$core$String* $tmp807 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp803, $tmp806);
frost$core$String* $tmp808 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp807, &$s809);
*(&local61) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
frost$core$String* $tmp810 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
*(&local61) = $tmp808;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
frost$core$Frost$unref$frost$core$Object$Q($tmp800);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:97
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp811 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp811);
*(&local62) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
frost$collections$HashMap* $tmp812 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
*(&local62) = $tmp811;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:98
frost$core$Int64 $tmp813 = (frost$core$Int64) {0};
ITable* $tmp814 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp814->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp814 = $tmp814->next;
}
$fn816 $tmp815 = $tmp814->methods[0];
frost$core$Int64 $tmp817 = $tmp815(((frost$collections$CollectionView*) param4));
frost$core$Bit $tmp818 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp819 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp813, $tmp817, $tmp818);
frost$core$Int64 $tmp820 = $tmp819.min;
*(&local63) = $tmp820;
frost$core$Int64 $tmp821 = $tmp819.max;
frost$core$Bit $tmp822 = $tmp819.inclusive;
bool $tmp823 = $tmp822.value;
frost$core$Int64 $tmp824 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp825 = $tmp824.value;
frost$core$UInt64 $tmp826 = (frost$core$UInt64) {((uint64_t) $tmp825)};
if ($tmp823) goto block182; else goto block183;
block182:;
int64_t $tmp827 = $tmp820.value;
int64_t $tmp828 = $tmp821.value;
bool $tmp829 = $tmp827 <= $tmp828;
frost$core$Bit $tmp830 = (frost$core$Bit) {$tmp829};
bool $tmp831 = $tmp830.value;
if ($tmp831) goto block179; else goto block180;
block183:;
int64_t $tmp832 = $tmp820.value;
int64_t $tmp833 = $tmp821.value;
bool $tmp834 = $tmp832 < $tmp833;
frost$core$Bit $tmp835 = (frost$core$Bit) {$tmp834};
bool $tmp836 = $tmp835.value;
if ($tmp836) goto block179; else goto block180;
block179:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:99
frost$collections$HashMap* $tmp837 = *(&local62);
frost$core$String* $tmp838 = *(&local61);
frost$collections$Array** $tmp839 = &param3->genericParameters;
frost$collections$Array* $tmp840 = *$tmp839;
frost$core$Int64 $tmp841 = *(&local63);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from MethodRef.frost:99:53
frost$core$Int64 $tmp842 = (frost$core$Int64) {0};
int64_t $tmp843 = $tmp841.value;
int64_t $tmp844 = $tmp842.value;
bool $tmp845 = $tmp843 >= $tmp844;
frost$core$Bit $tmp846 = (frost$core$Bit) {$tmp845};
bool $tmp847 = $tmp846.value;
if ($tmp847) goto block187; else goto block186;
block187:;
ITable* $tmp848 = ((frost$collections$CollectionView*) $tmp840)->$class->itable;
while ($tmp848->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp848 = $tmp848->next;
}
$fn850 $tmp849 = $tmp848->methods[0];
frost$core$Int64 $tmp851 = $tmp849(((frost$collections$CollectionView*) $tmp840));
int64_t $tmp852 = $tmp841.value;
int64_t $tmp853 = $tmp851.value;
bool $tmp854 = $tmp852 < $tmp853;
frost$core$Bit $tmp855 = (frost$core$Bit) {$tmp854};
bool $tmp856 = $tmp855.value;
if ($tmp856) goto block185; else goto block186;
block186:;
frost$core$Int64 $tmp857 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s858, $tmp857, &$s859);
abort(); // unreachable
block185:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp860 = &$tmp840->data;
frost$core$Object** $tmp861 = *$tmp860;
int64_t $tmp862 = $tmp841.value;
frost$core$Object* $tmp863 = $tmp861[$tmp862];
frost$core$Frost$ref$frost$core$Object$Q($tmp863);
frost$core$String** $tmp864 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp863))->name;
frost$core$String* $tmp865 = *$tmp864;
frost$core$String* $tmp866 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp838, $tmp865);
frost$core$Int64 $tmp867 = *(&local63);
ITable* $tmp868 = param4->$class->itable;
while ($tmp868->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp868 = $tmp868->next;
}
$fn870 $tmp869 = $tmp868->methods[0];
frost$core$Object* $tmp871 = $tmp869(param4, $tmp867);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp837, ((frost$collections$Key*) $tmp866), ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp871)));
frost$core$Frost$unref$frost$core$Object$Q($tmp871);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
frost$core$Frost$unref$frost$core$Object$Q($tmp863);
frost$core$Int64 $tmp872 = *(&local63);
int64_t $tmp873 = $tmp821.value;
int64_t $tmp874 = $tmp872.value;
int64_t $tmp875 = $tmp873 - $tmp874;
frost$core$Int64 $tmp876 = (frost$core$Int64) {$tmp875};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp877 = $tmp876.value;
frost$core$UInt64 $tmp878 = (frost$core$UInt64) {((uint64_t) $tmp877)};
if ($tmp823) goto block190; else goto block191;
block190:;
uint64_t $tmp879 = $tmp878.value;
uint64_t $tmp880 = $tmp826.value;
bool $tmp881 = $tmp879 >= $tmp880;
frost$core$Bit $tmp882 = (frost$core$Bit) {$tmp881};
bool $tmp883 = $tmp882.value;
if ($tmp883) goto block188; else goto block180;
block191:;
uint64_t $tmp884 = $tmp878.value;
uint64_t $tmp885 = $tmp826.value;
bool $tmp886 = $tmp884 > $tmp885;
frost$core$Bit $tmp887 = (frost$core$Bit) {$tmp886};
bool $tmp888 = $tmp887.value;
if ($tmp888) goto block188; else goto block180;
block188:;
int64_t $tmp889 = $tmp872.value;
int64_t $tmp890 = $tmp824.value;
int64_t $tmp891 = $tmp889 + $tmp890;
frost$core$Int64 $tmp892 = (frost$core$Int64) {$tmp891};
*(&local63) = $tmp892;
goto block179;
block180:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:101
org$frostlang$frostc$Type* $tmp893 = *(&local60);
frost$collections$HashMap* $tmp894 = *(&local62);
org$frostlang$frostc$Type* $tmp895 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp893, $tmp894);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
org$frostlang$frostc$Type** $tmp896 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp897 = *$tmp896;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
org$frostlang$frostc$Type** $tmp898 = &param0->effectiveType;
*$tmp898 = $tmp895;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
frost$collections$HashMap* $tmp899 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
*(&local62) = ((frost$collections$HashMap*) NULL);
frost$core$String* $tmp900 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
*(&local61) = ((frost$core$String*) NULL);
goto block172;
block173:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:104
org$frostlang$frostc$Type* $tmp901 = *(&local60);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
org$frostlang$frostc$Type** $tmp902 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp903 = *$tmp902;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
org$frostlang$frostc$Type** $tmp904 = &param0->effectiveType;
*$tmp904 = $tmp901;
goto block172;
block172:;
org$frostlang$frostc$Type* $tmp905 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
*(&local60) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp906 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
*(&local40) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp907 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp908 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return;

}
frost$core$Int64 org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64(org$frostlang$frostc$MethodRef* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:109
org$frostlang$frostc$Type** $tmp909 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp910 = *$tmp909;
// begin inline call to function org.frostlang.frostc.Type.get_parameterCount():frost.core.Int64 from MethodRef.frost:109:29
org$frostlang$frostc$Type$Kind* $tmp911 = &$tmp910->typeKind;
org$frostlang$frostc$Type$Kind $tmp912 = *$tmp911;
org$frostlang$frostc$Type$Kind$wrapper* $tmp913;
$tmp913 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp913->value = $tmp912;
frost$core$Int64 $tmp914 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:649:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp915 = &(&local1)->$rawValue;
*$tmp915 = $tmp914;
org$frostlang$frostc$Type$Kind $tmp916 = *(&local1);
*(&local0) = $tmp916;
org$frostlang$frostc$Type$Kind $tmp917 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp918;
$tmp918 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp918->value = $tmp917;
ITable* $tmp919 = ((frost$core$Equatable*) $tmp913)->$class->itable;
while ($tmp919->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp919 = $tmp919->next;
}
$fn921 $tmp920 = $tmp919->methods[0];
frost$core$Bit $tmp922 = $tmp920(((frost$core$Equatable*) $tmp913), ((frost$core$Equatable*) $tmp918));
bool $tmp923 = $tmp922.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp918)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp913)));
if ($tmp923) goto block2; else goto block6;
block6:;
org$frostlang$frostc$Type$Kind* $tmp924 = &$tmp910->typeKind;
org$frostlang$frostc$Type$Kind $tmp925 = *$tmp924;
org$frostlang$frostc$Type$Kind$wrapper* $tmp926;
$tmp926 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp926->value = $tmp925;
frost$core$Int64 $tmp927 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:649:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp928 = &(&local3)->$rawValue;
*$tmp928 = $tmp927;
org$frostlang$frostc$Type$Kind $tmp929 = *(&local3);
*(&local2) = $tmp929;
org$frostlang$frostc$Type$Kind $tmp930 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp931;
$tmp931 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp931->value = $tmp930;
ITable* $tmp932 = ((frost$core$Equatable*) $tmp926)->$class->itable;
while ($tmp932->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp932 = $tmp932->next;
}
$fn934 $tmp933 = $tmp932->methods[0];
frost$core$Bit $tmp935 = $tmp933(((frost$core$Equatable*) $tmp926), ((frost$core$Equatable*) $tmp931));
bool $tmp936 = $tmp935.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp931)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp926)));
if ($tmp936) goto block2; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp937 = &$tmp910->typeKind;
org$frostlang$frostc$Type$Kind $tmp938 = *$tmp937;
org$frostlang$frostc$Type$Kind$wrapper* $tmp939;
$tmp939 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp939->value = $tmp938;
frost$core$Int64 $tmp940 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:649:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp941 = &(&local5)->$rawValue;
*$tmp941 = $tmp940;
org$frostlang$frostc$Type$Kind $tmp942 = *(&local5);
*(&local4) = $tmp942;
org$frostlang$frostc$Type$Kind $tmp943 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp944;
$tmp944 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp944->value = $tmp943;
ITable* $tmp945 = ((frost$core$Equatable*) $tmp939)->$class->itable;
while ($tmp945->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp945 = $tmp945->next;
}
$fn947 $tmp946 = $tmp945->methods[0];
frost$core$Bit $tmp948 = $tmp946(((frost$core$Equatable*) $tmp939), ((frost$core$Equatable*) $tmp944));
bool $tmp949 = $tmp948.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp944)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp939)));
if ($tmp949) goto block2; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp950 = &$tmp910->typeKind;
org$frostlang$frostc$Type$Kind $tmp951 = *$tmp950;
org$frostlang$frostc$Type$Kind$wrapper* $tmp952;
$tmp952 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp952->value = $tmp951;
frost$core$Int64 $tmp953 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:650:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp954 = &(&local7)->$rawValue;
*$tmp954 = $tmp953;
org$frostlang$frostc$Type$Kind $tmp955 = *(&local7);
*(&local6) = $tmp955;
org$frostlang$frostc$Type$Kind $tmp956 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp957;
$tmp957 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp957->value = $tmp956;
ITable* $tmp958 = ((frost$core$Equatable*) $tmp952)->$class->itable;
while ($tmp958->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp958 = $tmp958->next;
}
$fn960 $tmp959 = $tmp958->methods[0];
frost$core$Bit $tmp961 = $tmp959(((frost$core$Equatable*) $tmp952), ((frost$core$Equatable*) $tmp957));
bool $tmp962 = $tmp961.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp957)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp952)));
if ($tmp962) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp963 = (frost$core$Int64) {651};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s964, $tmp963, &$s965);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:652
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:652:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp966 = &$tmp910->_subtypes;
org$frostlang$frostc$FixedArray* $tmp967 = *$tmp966;
frost$core$Bit $tmp968 = frost$core$Bit$init$builtin_bit($tmp967 != NULL);
bool $tmp969 = $tmp968.value;
if ($tmp969) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp970 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s971, $tmp970);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp972 = &$tmp910->_subtypes;
org$frostlang$frostc$FixedArray* $tmp973 = *$tmp972;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
ITable* $tmp974 = ((frost$collections$CollectionView*) $tmp973)->$class->itable;
while ($tmp974->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp974 = $tmp974->next;
}
$fn976 $tmp975 = $tmp974->methods[0];
frost$core$Int64 $tmp977 = $tmp975(((frost$collections$CollectionView*) $tmp973));
frost$core$Int64 $tmp978 = (frost$core$Int64) {1};
int64_t $tmp979 = $tmp977.value;
int64_t $tmp980 = $tmp978.value;
int64_t $tmp981 = $tmp979 - $tmp980;
frost$core$Int64 $tmp982 = (frost$core$Int64) {$tmp981};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
return $tmp982;

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodRef* param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:113
org$frostlang$frostc$Type** $tmp983 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp984 = *$tmp983;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from MethodRef.frost:113:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp985 = &$tmp984->_subtypes;
org$frostlang$frostc$FixedArray* $tmp986 = *$tmp985;
frost$core$Bit $tmp987 = frost$core$Bit$init$builtin_bit($tmp986 != NULL);
bool $tmp988 = $tmp987.value;
if ($tmp988) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp989 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s990, $tmp989);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp991 = &$tmp984->_subtypes;
org$frostlang$frostc$FixedArray* $tmp992 = *$tmp991;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
frost$core$Object* $tmp993 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp992, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp993)));
frost$core$Frost$unref$frost$core$Object$Q($tmp993);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
return ((org$frostlang$frostc$Type*) $tmp993);

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodRef* param0) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:117
org$frostlang$frostc$Type** $tmp994 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp995 = *$tmp994;
// begin inline call to function org.frostlang.frostc.Type.get_returnType():org.frostlang.frostc.Type from MethodRef.frost:117:29
org$frostlang$frostc$Type$Kind* $tmp996 = &$tmp995->typeKind;
org$frostlang$frostc$Type$Kind $tmp997 = *$tmp996;
org$frostlang$frostc$Type$Kind$wrapper* $tmp998;
$tmp998 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp998->value = $tmp997;
frost$core$Int64 $tmp999 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1000 = &(&local1)->$rawValue;
*$tmp1000 = $tmp999;
org$frostlang$frostc$Type$Kind $tmp1001 = *(&local1);
*(&local0) = $tmp1001;
org$frostlang$frostc$Type$Kind $tmp1002 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1003;
$tmp1003 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1003->value = $tmp1002;
ITable* $tmp1004 = ((frost$core$Equatable*) $tmp998)->$class->itable;
while ($tmp1004->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1004 = $tmp1004->next;
}
$fn1006 $tmp1005 = $tmp1004->methods[0];
frost$core$Bit $tmp1007 = $tmp1005(((frost$core$Equatable*) $tmp998), ((frost$core$Equatable*) $tmp1003));
bool $tmp1008 = $tmp1007.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1003)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp998)));
if ($tmp1008) goto block2; else goto block6;
block6:;
org$frostlang$frostc$Type$Kind* $tmp1009 = &$tmp995->typeKind;
org$frostlang$frostc$Type$Kind $tmp1010 = *$tmp1009;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1011;
$tmp1011 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1011->value = $tmp1010;
frost$core$Int64 $tmp1012 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1013 = &(&local3)->$rawValue;
*$tmp1013 = $tmp1012;
org$frostlang$frostc$Type$Kind $tmp1014 = *(&local3);
*(&local2) = $tmp1014;
org$frostlang$frostc$Type$Kind $tmp1015 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1016;
$tmp1016 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1016->value = $tmp1015;
ITable* $tmp1017 = ((frost$core$Equatable*) $tmp1011)->$class->itable;
while ($tmp1017->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1017 = $tmp1017->next;
}
$fn1019 $tmp1018 = $tmp1017->methods[0];
frost$core$Bit $tmp1020 = $tmp1018(((frost$core$Equatable*) $tmp1011), ((frost$core$Equatable*) $tmp1016));
bool $tmp1021 = $tmp1020.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1016)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1011)));
if ($tmp1021) goto block2; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp1022 = &$tmp995->typeKind;
org$frostlang$frostc$Type$Kind $tmp1023 = *$tmp1022;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1024;
$tmp1024 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1024->value = $tmp1023;
frost$core$Int64 $tmp1025 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:661:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1026 = &(&local5)->$rawValue;
*$tmp1026 = $tmp1025;
org$frostlang$frostc$Type$Kind $tmp1027 = *(&local5);
*(&local4) = $tmp1027;
org$frostlang$frostc$Type$Kind $tmp1028 = *(&local4);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1029;
$tmp1029 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1029->value = $tmp1028;
ITable* $tmp1030 = ((frost$core$Equatable*) $tmp1024)->$class->itable;
while ($tmp1030->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1030 = $tmp1030->next;
}
$fn1032 $tmp1031 = $tmp1030->methods[0];
frost$core$Bit $tmp1033 = $tmp1031(((frost$core$Equatable*) $tmp1024), ((frost$core$Equatable*) $tmp1029));
bool $tmp1034 = $tmp1033.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1029)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1024)));
if ($tmp1034) goto block2; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp1035 = &$tmp995->typeKind;
org$frostlang$frostc$Type$Kind $tmp1036 = *$tmp1035;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1037;
$tmp1037 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1037->value = $tmp1036;
frost$core$Int64 $tmp1038 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:662:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1039 = &(&local7)->$rawValue;
*$tmp1039 = $tmp1038;
org$frostlang$frostc$Type$Kind $tmp1040 = *(&local7);
*(&local6) = $tmp1040;
org$frostlang$frostc$Type$Kind $tmp1041 = *(&local6);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1042;
$tmp1042 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1042->value = $tmp1041;
ITable* $tmp1043 = ((frost$core$Equatable*) $tmp1037)->$class->itable;
while ($tmp1043->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1043 = $tmp1043->next;
}
$fn1045 $tmp1044 = $tmp1043->methods[0];
frost$core$Bit $tmp1046 = $tmp1044(((frost$core$Equatable*) $tmp1037), ((frost$core$Equatable*) $tmp1042));
bool $tmp1047 = $tmp1046.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1042)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1037)));
if ($tmp1047) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp1048 = (frost$core$Int64) {663};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1049, $tmp1048, &$s1050);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:664
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:16
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1051 = &$tmp995->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1052 = *$tmp1051;
frost$core$Bit $tmp1053 = frost$core$Bit$init$builtin_bit($tmp1052 != NULL);
bool $tmp1054 = $tmp1053.value;
if ($tmp1054) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp1055 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1056, $tmp1055);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1057 = &$tmp995->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1058 = *$tmp1057;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:664:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp1059 = &$tmp995->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1060 = *$tmp1059;
frost$core$Bit $tmp1061 = frost$core$Bit$init$builtin_bit($tmp1060 != NULL);
bool $tmp1062 = $tmp1061.value;
if ($tmp1062) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp1063 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1064, $tmp1063);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp1065 = &$tmp995->_subtypes;
org$frostlang$frostc$FixedArray* $tmp1066 = *$tmp1065;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
ITable* $tmp1067 = ((frost$collections$CollectionView*) $tmp1066)->$class->itable;
while ($tmp1067->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1067 = $tmp1067->next;
}
$fn1069 $tmp1068 = $tmp1067->methods[0];
frost$core$Int64 $tmp1070 = $tmp1068(((frost$collections$CollectionView*) $tmp1066));
frost$core$Int64 $tmp1071 = (frost$core$Int64) {1};
int64_t $tmp1072 = $tmp1070.value;
int64_t $tmp1073 = $tmp1071.value;
int64_t $tmp1074 = $tmp1072 - $tmp1073;
frost$core$Int64 $tmp1075 = (frost$core$Int64) {$tmp1074};
frost$core$Object* $tmp1076 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1058, $tmp1075);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1076)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1076);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1076)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1076)));
return ((org$frostlang$frostc$Type*) $tmp1076);

}
frost$core$String* org$frostlang$frostc$MethodRef$get_asString$R$frost$core$String(org$frostlang$frostc$MethodRef* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:122
org$frostlang$frostc$MethodDecl** $tmp1077 = &param0->value;
org$frostlang$frostc$MethodDecl* $tmp1078 = *$tmp1077;
frost$core$String* $tmp1079 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp1078);
frost$core$String* $tmp1080 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1081, $tmp1079);
frost$core$String* $tmp1082 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1080, &$s1083);
org$frostlang$frostc$Type** $tmp1084 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp1085 = *$tmp1084;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodRef.frost:122:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn1087 $tmp1086 = ($fn1087) ((frost$core$Object*) $tmp1085)->$class->vtable[0];
frost$core$String* $tmp1088 = $tmp1086(((frost$core$Object*) $tmp1085));
frost$core$String* $tmp1089 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1082, $tmp1088);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
frost$core$String* $tmp1090 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1089, &$s1091);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
return $tmp1090;

}
void org$frostlang$frostc$MethodRef$cleanup(org$frostlang$frostc$MethodRef* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodRef.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Type** $tmp1092 = &param0->target;
org$frostlang$frostc$Type* $tmp1093 = *$tmp1092;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
org$frostlang$frostc$MethodDecl** $tmp1094 = &param0->value;
org$frostlang$frostc$MethodDecl* $tmp1095 = *$tmp1094;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
org$frostlang$frostc$Type** $tmp1096 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp1097 = *$tmp1096;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
return;

}

