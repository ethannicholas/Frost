#include "org/frostlanguage/frostc/MethodDecl.h"
#include "org/frostlanguage/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/ClassDecl.h"
#include "org/frostlanguage/frostc/Position.h"
#include "org/frostlanguage/frostc/Annotations.h"
#include "org/frostlanguage/frostc/MethodDecl/Kind.h"
#include "frost/collections/Array.h"
#include "org/frostlanguage/frostc/Type.h"
#include "org/frostlanguage/frostc/FixedArray.h"
#include "frost/core/Bit.h"
#include "org/frostlanguage/frostc/MethodDecl/Parameter.h"
#include "frost/core/Int64.h"
#include "org/frostlanguage/frostc/Compiler/Resolution.h"
#include "frost/core/Weak.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlanguage/frostc/Symbol/Kind.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Equatable.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "org/frostlanguage/frostc/Annotations/Expression.h"
#include "org/frostlanguage/frostc/ASTNode.h"
#include "org/frostlanguage/frostc/parser/Token/Kind.h"
#include "org/frostlanguage/frostc/Type/Kind.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"


static frost$core$String $s1;
org$frostlanguage$frostc$MethodDecl$class_type org$frostlanguage$frostc$MethodDecl$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &org$frostlanguage$frostc$Symbol$class, NULL, { org$frostlanguage$frostc$MethodDecl$convert$R$frost$core$String, org$frostlanguage$frostc$MethodDecl$cleanup, org$frostlanguage$frostc$MethodDecl$get_heritable$R$frost$core$Bit, org$frostlanguage$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit, org$frostlanguage$frostc$MethodDecl$isInstance$R$frost$core$Bit, org$frostlanguage$frostc$MethodDecl$matches$org$frostlanguage$frostc$MethodDecl$R$frost$core$Bit, org$frostlanguage$frostc$MethodDecl$get_priority$R$frost$core$Int64, org$frostlanguage$frostc$MethodDecl$get_type$R$org$frostlanguage$frostc$Type, org$frostlanguage$frostc$MethodDecl$get_signature$R$frost$core$String, org$frostlanguage$frostc$MethodDecl$get_declaration$R$frost$core$String} };

typedef frost$core$Int64 (*$fn15)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn45)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn49)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn54)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn80)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn95)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn116)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn127)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn139)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn149)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn157)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn163)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn176)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn210)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn247)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn251)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn256)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn301)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn329)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn336)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn340)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn345)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn361)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn391)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn395)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn400)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn418)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 35, -3494484339602820341, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -4513292705335416282, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x69\x6e\x69\x74\x28\x6f\x77\x6e\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x64\x6f\x63\x63\x6f\x6d\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2c\x20\x6d\x65\x74\x68\x6f\x64\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64\x2c\x20\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x2c\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x2c\x20\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x62\x6f\x64\x79\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x29", 609, -4367881195767407099, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -4513292705335416282, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s407 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s444 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static frost$core$String $s446 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s450 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s460 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static frost$core$String $s462 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -4513292705335416282, NULL };
static frost$core$String $s486 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x67\x65\x74\x5f\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 105, -7621933327869134826, NULL };
static frost$core$String $s495 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s499 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s504 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };

void org$frostlanguage$frostc$MethodDecl$init$org$frostlanguage$frostc$ClassDecl$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$Annotations$org$frostlanguage$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlanguage$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlanguage$frostc$MethodDecl$Parameter$GT$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(org$frostlanguage$frostc$MethodDecl* param0, org$frostlanguage$frostc$ClassDecl* param1, org$frostlanguage$frostc$Position param2, frost$core$String* param3, org$frostlanguage$frostc$Annotations* param4, org$frostlanguage$frostc$MethodDecl$Kind param5, frost$core$String* param6, frost$collections$Array* param7, frost$collections$Array* param8, org$frostlanguage$frostc$Type* param9, org$frostlanguage$frostc$FixedArray* param10) {

frost$core$Bit local0;
org$frostlanguage$frostc$MethodDecl$Parameter* local1 = NULL;
// line 66
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Compiler$Resolution $tmp3 = org$frostlanguage$frostc$Compiler$Resolution$init$frost$core$Int64($tmp2);
org$frostlanguage$frostc$Compiler$Resolution* $tmp4 = &param0->resolved;
*$tmp4 = $tmp3;
// line 68
frost$core$Bit $tmp5 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp6 = &param0->overrideKnown;
*$tmp6 = $tmp5;
// line 71
frost$core$Weak* $tmp7 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp7, ((frost$core$Object*) ((org$frostlanguage$frostc$MethodDecl*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$Weak** $tmp8 = &param0->overridden;
frost$core$Weak* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$Weak** $tmp10 = &param0->overridden;
*$tmp10 = $tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
// unreffing REF($10:frost.core.Weak<org.frostlanguage.frostc.MethodDecl?>)
frost$core$Bit $tmp11 = frost$core$Bit$init$builtin_bit(param7 == NULL);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block1; else goto block2;
block1:;
*(&local0) = $tmp11;
goto block3;
block2:;
ITable* $tmp13 = ((frost$collections$CollectionView*) param7)->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
$fn15 $tmp14 = $tmp13->methods[0];
frost$core$Int64 $tmp16 = $tmp14(((frost$collections$CollectionView*) param7));
frost$core$Int64 $tmp17 = (frost$core$Int64) {0};
int64_t $tmp18 = $tmp16.value;
int64_t $tmp19 = $tmp17.value;
bool $tmp20 = $tmp18 > $tmp19;
frost$core$Bit $tmp21 = (frost$core$Bit) {$tmp20};
*(&local0) = $tmp21;
goto block3;
block3:;
frost$core$Bit $tmp22 = *(&local0);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp24 = (frost$core$Int64) {84};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s25, $tmp24, &$s26);
abort(); // unreachable
block4:;
// line 88
frost$core$Int64 $tmp27 = (frost$core$Int64) {5};
org$frostlanguage$frostc$Symbol$Kind $tmp28 = org$frostlanguage$frostc$Symbol$Kind$init$frost$core$Int64($tmp27);
org$frostlanguage$frostc$Symbol$init$org$frostlanguage$frostc$Symbol$Kind$org$frostlanguage$frostc$Position$frost$core$String(((org$frostlanguage$frostc$Symbol*) param0), $tmp28, param2, param6);
// line 89
frost$core$Weak* $tmp29 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp29, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$Weak** $tmp30 = &param0->owner;
frost$core$Weak* $tmp31 = *$tmp30;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
frost$core$Weak** $tmp32 = &param0->owner;
*$tmp32 = $tmp29;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// unreffing REF($53:frost.core.Weak<org.frostlanguage.frostc.ClassDecl>)
// line 90
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp33 = &param0->doccomment;
frost$core$String* $tmp34 = *$tmp33;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$String** $tmp35 = &param0->doccomment;
*$tmp35 = param3;
// line 91
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlanguage$frostc$Annotations** $tmp36 = &param0->annotations;
org$frostlanguage$frostc$Annotations* $tmp37 = *$tmp36;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
org$frostlanguage$frostc$Annotations** $tmp38 = &param0->annotations;
*$tmp38 = param4;
// line 92
org$frostlanguage$frostc$MethodDecl$Kind* $tmp39 = &param0->methodKind;
*$tmp39 = param5;
// line 93
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
frost$collections$Array** $tmp40 = &param0->genericParameters;
frost$collections$Array* $tmp41 = *$tmp40;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$collections$Array** $tmp42 = &param0->genericParameters;
*$tmp42 = param7;
// line 94
ITable* $tmp43 = ((frost$collections$Iterable*) param8)->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp43 = $tmp43->next;
}
$fn45 $tmp44 = $tmp43->methods[0];
frost$collections$Iterator* $tmp46 = $tmp44(((frost$collections$Iterable*) param8));
goto block6;
block6:;
ITable* $tmp47 = $tmp46->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp47 = $tmp47->next;
}
$fn49 $tmp48 = $tmp47->methods[0];
frost$core$Bit $tmp50 = $tmp48($tmp46);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block8; else goto block7;
block7:;
*(&local1) = ((org$frostlanguage$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp52 = $tmp46->$class->itable;
while ($tmp52->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp52 = $tmp52->next;
}
$fn54 $tmp53 = $tmp52->methods[1];
frost$core$Object* $tmp55 = $tmp53($tmp46);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$MethodDecl$Parameter*) $tmp55)));
org$frostlanguage$frostc$MethodDecl$Parameter* $tmp56 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
*(&local1) = ((org$frostlanguage$frostc$MethodDecl$Parameter*) $tmp55);
// line 95
org$frostlanguage$frostc$MethodDecl$Parameter* $tmp57 = *(&local1);
frost$core$Weak* $tmp58 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp58, ((frost$core$Object*) param0));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
frost$core$Weak** $tmp59 = &$tmp57->owner;
frost$core$Weak* $tmp60 = *$tmp59;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$core$Weak** $tmp61 = &$tmp57->owner;
*$tmp61 = $tmp58;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
// unreffing REF($124:frost.core.Weak<org.frostlanguage.frostc.MethodDecl?>)
frost$core$Frost$unref$frost$core$Object$Q($tmp55);
// unreffing REF($113:frost.collections.Iterator.T)
org$frostlanguage$frostc$MethodDecl$Parameter* $tmp62 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// unreffing p
*(&local1) = ((org$frostlanguage$frostc$MethodDecl$Parameter*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// unreffing REF($102:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 97
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
frost$collections$Array** $tmp63 = &param0->parameters;
frost$collections$Array* $tmp64 = *$tmp63;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$collections$Array** $tmp65 = &param0->parameters;
*$tmp65 = param8;
// line 98
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlanguage$frostc$Type** $tmp66 = &param0->returnType;
org$frostlanguage$frostc$Type* $tmp67 = *$tmp66;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
org$frostlanguage$frostc$Type** $tmp68 = &param0->returnType;
*$tmp68 = param9;
// line 99
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param10));
org$frostlanguage$frostc$FixedArray** $tmp69 = &param0->body;
org$frostlanguage$frostc$FixedArray* $tmp70 = *$tmp69;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
org$frostlanguage$frostc$FixedArray** $tmp71 = &param0->body;
*$tmp71 = param10;
return;

}
frost$core$Bit org$frostlanguage$frostc$MethodDecl$get_heritable$R$frost$core$Bit(org$frostlanguage$frostc$MethodDecl* param0) {

// line 104
org$frostlanguage$frostc$MethodDecl$Kind* $tmp72 = &param0->methodKind;
org$frostlanguage$frostc$MethodDecl$Kind $tmp73 = *$tmp72;
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp74;
$tmp74 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp74->value = $tmp73;
frost$core$Int64 $tmp75 = (frost$core$Int64) {2};
org$frostlanguage$frostc$MethodDecl$Kind $tmp76 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp75);
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp77;
$tmp77 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp77->value = $tmp76;
ITable* $tmp78 = ((frost$core$Equatable*) $tmp74)->$class->itable;
while ($tmp78->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp78 = $tmp78->next;
}
$fn80 $tmp79 = $tmp78->methods[1];
frost$core$Bit $tmp81 = $tmp79(((frost$core$Equatable*) $tmp74), ((frost$core$Equatable*) $tmp77));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp77)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp74)));
// unreffing REF($3:frost.core.Equatable<org.frostlanguage.frostc.MethodDecl.Kind>)
return $tmp81;

}
frost$core$Bit org$frostlanguage$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit(org$frostlanguage$frostc$MethodDecl* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
// line 108
org$frostlanguage$frostc$Annotations** $tmp82 = &param0->annotations;
org$frostlanguage$frostc$Annotations* $tmp83 = *$tmp82;
frost$core$Bit $tmp84 = org$frostlanguage$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp83);
frost$core$Bit $tmp85 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp84);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block1; else goto block2;
block1:;
org$frostlanguage$frostc$MethodDecl$Kind* $tmp87 = &param0->methodKind;
org$frostlanguage$frostc$MethodDecl$Kind $tmp88 = *$tmp87;
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp89;
$tmp89 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp89->value = $tmp88;
frost$core$Int64 $tmp90 = (frost$core$Int64) {2};
org$frostlanguage$frostc$MethodDecl$Kind $tmp91 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp90);
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp92;
$tmp92 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp92->value = $tmp91;
ITable* $tmp93 = ((frost$core$Equatable*) $tmp89)->$class->itable;
while ($tmp93->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp93 = $tmp93->next;
}
$fn95 $tmp94 = $tmp93->methods[1];
frost$core$Bit $tmp96 = $tmp94(((frost$core$Equatable*) $tmp89), ((frost$core$Equatable*) $tmp92));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp92)));
// unreffing REF($13:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp89)));
// unreffing REF($9:frost.core.Equatable<org.frostlanguage.frostc.MethodDecl.Kind>)
*(&local1) = $tmp96;
goto block3;
block2:;
*(&local1) = $tmp85;
goto block3;
block3:;
frost$core$Bit $tmp97 = *(&local1);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block4; else goto block5;
block4:;
org$frostlanguage$frostc$Annotations** $tmp99 = &param0->annotations;
org$frostlanguage$frostc$Annotations* $tmp100 = *$tmp99;
frost$core$Bit $tmp101 = org$frostlanguage$frostc$Annotations$get_isFinal$R$frost$core$Bit($tmp100);
frost$core$Bit $tmp102 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp101);
*(&local0) = $tmp102;
goto block6;
block5:;
*(&local0) = $tmp97;
goto block6;
block6:;
frost$core$Bit $tmp103 = *(&local0);
return $tmp103;

}
frost$core$Bit org$frostlanguage$frostc$MethodDecl$isInstance$R$frost$core$Bit(org$frostlanguage$frostc$MethodDecl* param0) {

// line 112
org$frostlanguage$frostc$Annotations** $tmp104 = &param0->annotations;
org$frostlanguage$frostc$Annotations* $tmp105 = *$tmp104;
frost$core$Bit $tmp106 = org$frostlanguage$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp105);
frost$core$Bit $tmp107 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp106);
return $tmp107;

}
frost$core$Bit org$frostlanguage$frostc$MethodDecl$matches$org$frostlanguage$frostc$MethodDecl$R$frost$core$Bit(org$frostlanguage$frostc$MethodDecl* param0, org$frostlanguage$frostc$MethodDecl* param1) {

frost$core$Bit local0;
frost$core$Int64 local1;
// line 116
org$frostlanguage$frostc$Compiler$Resolution* $tmp108 = &param0->resolved;
org$frostlanguage$frostc$Compiler$Resolution $tmp109 = *$tmp108;
org$frostlanguage$frostc$Compiler$Resolution$wrapper* $tmp110;
$tmp110 = (org$frostlanguage$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$Resolution$wrapperclass);
$tmp110->value = $tmp109;
frost$core$Int64 $tmp111 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Compiler$Resolution $tmp112 = org$frostlanguage$frostc$Compiler$Resolution$init$frost$core$Int64($tmp111);
org$frostlanguage$frostc$Compiler$Resolution$wrapper* $tmp113;
$tmp113 = (org$frostlanguage$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$Resolution$wrapperclass);
$tmp113->value = $tmp112;
ITable* $tmp114 = ((frost$core$Equatable*) $tmp110)->$class->itable;
while ($tmp114->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp114 = $tmp114->next;
}
$fn116 $tmp115 = $tmp114->methods[1];
frost$core$Bit $tmp117 = $tmp115(((frost$core$Equatable*) $tmp110), ((frost$core$Equatable*) $tmp113));
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block1; else goto block2;
block1:;
org$frostlanguage$frostc$Compiler$Resolution* $tmp119 = &param1->resolved;
org$frostlanguage$frostc$Compiler$Resolution $tmp120 = *$tmp119;
org$frostlanguage$frostc$Compiler$Resolution$wrapper* $tmp121;
$tmp121 = (org$frostlanguage$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$Resolution$wrapperclass);
$tmp121->value = $tmp120;
frost$core$Int64 $tmp122 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Compiler$Resolution $tmp123 = org$frostlanguage$frostc$Compiler$Resolution$init$frost$core$Int64($tmp122);
org$frostlanguage$frostc$Compiler$Resolution$wrapper* $tmp124;
$tmp124 = (org$frostlanguage$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$Resolution$wrapperclass);
$tmp124->value = $tmp123;
ITable* $tmp125 = ((frost$core$Equatable*) $tmp121)->$class->itable;
while ($tmp125->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp125 = $tmp125->next;
}
$fn127 $tmp126 = $tmp125->methods[1];
frost$core$Bit $tmp128 = $tmp126(((frost$core$Equatable*) $tmp121), ((frost$core$Equatable*) $tmp124));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp124)));
// unreffing REF($18:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp121)));
// unreffing REF($14:frost.core.Equatable<org.frostlanguage.frostc.Compiler.Resolution>)
*(&local0) = $tmp128;
goto block3;
block2:;
*(&local0) = $tmp117;
goto block3;
block3:;
frost$core$Bit $tmp129 = *(&local0);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp131 = (frost$core$Int64) {116};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s132, $tmp131);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp113)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp110)));
// unreffing REF($3:frost.core.Equatable<org.frostlanguage.frostc.Compiler.Resolution>)
// line 118
frost$core$String** $tmp133 = &((org$frostlanguage$frostc$Symbol*) param0)->name;
frost$core$String* $tmp134 = *$tmp133;
frost$core$String** $tmp135 = &((org$frostlanguage$frostc$Symbol*) param1)->name;
frost$core$String* $tmp136 = *$tmp135;
ITable* $tmp137 = ((frost$core$Equatable*) $tmp134)->$class->itable;
while ($tmp137->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp137 = $tmp137->next;
}
$fn139 $tmp138 = $tmp137->methods[1];
frost$core$Bit $tmp140 = $tmp138(((frost$core$Equatable*) $tmp134), ((frost$core$Equatable*) $tmp136));
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block6; else goto block7;
block6:;
// line 119
frost$core$Bit $tmp142 = frost$core$Bit$init$builtin_bit(false);
return $tmp142;
block7:;
// line 121
org$frostlanguage$frostc$Type** $tmp143 = &param0->returnType;
org$frostlanguage$frostc$Type* $tmp144 = *$tmp143;
org$frostlanguage$frostc$Type** $tmp145 = &param1->returnType;
org$frostlanguage$frostc$Type* $tmp146 = *$tmp145;
ITable* $tmp147 = ((frost$core$Equatable*) $tmp144)->$class->itable;
while ($tmp147->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp147 = $tmp147->next;
}
$fn149 $tmp148 = $tmp147->methods[1];
frost$core$Bit $tmp150 = $tmp148(((frost$core$Equatable*) $tmp144), ((frost$core$Equatable*) $tmp146));
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block8; else goto block9;
block8:;
// line 122
frost$core$Bit $tmp152 = frost$core$Bit$init$builtin_bit(false);
return $tmp152;
block9:;
// line 124
frost$collections$Array** $tmp153 = &param0->parameters;
frost$collections$Array* $tmp154 = *$tmp153;
ITable* $tmp155 = ((frost$collections$CollectionView*) $tmp154)->$class->itable;
while ($tmp155->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp155 = $tmp155->next;
}
$fn157 $tmp156 = $tmp155->methods[0];
frost$core$Int64 $tmp158 = $tmp156(((frost$collections$CollectionView*) $tmp154));
frost$collections$Array** $tmp159 = &param1->parameters;
frost$collections$Array* $tmp160 = *$tmp159;
ITable* $tmp161 = ((frost$collections$CollectionView*) $tmp160)->$class->itable;
while ($tmp161->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp161 = $tmp161->next;
}
$fn163 $tmp162 = $tmp161->methods[0];
frost$core$Int64 $tmp164 = $tmp162(((frost$collections$CollectionView*) $tmp160));
int64_t $tmp165 = $tmp158.value;
int64_t $tmp166 = $tmp164.value;
bool $tmp167 = $tmp165 != $tmp166;
frost$core$Bit $tmp168 = (frost$core$Bit) {$tmp167};
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block10; else goto block11;
block10:;
// line 125
frost$core$Bit $tmp170 = frost$core$Bit$init$builtin_bit(false);
return $tmp170;
block11:;
// line 127
frost$core$Int64 $tmp171 = (frost$core$Int64) {0};
frost$collections$Array** $tmp172 = &param0->parameters;
frost$collections$Array* $tmp173 = *$tmp172;
ITable* $tmp174 = ((frost$collections$CollectionView*) $tmp173)->$class->itable;
while ($tmp174->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp174 = $tmp174->next;
}
$fn176 $tmp175 = $tmp174->methods[0];
frost$core$Int64 $tmp177 = $tmp175(((frost$collections$CollectionView*) $tmp173));
frost$core$Bit $tmp178 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp179 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp171, $tmp177, $tmp178);
frost$core$Int64 $tmp180 = $tmp179.min;
*(&local1) = $tmp180;
frost$core$Int64 $tmp181 = $tmp179.max;
frost$core$Bit $tmp182 = $tmp179.inclusive;
bool $tmp183 = $tmp182.value;
frost$core$Int64 $tmp184 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp185 = frost$core$Int64$convert$R$frost$core$UInt64($tmp184);
if ($tmp183) goto block15; else goto block16;
block15:;
int64_t $tmp186 = $tmp180.value;
int64_t $tmp187 = $tmp181.value;
bool $tmp188 = $tmp186 <= $tmp187;
frost$core$Bit $tmp189 = (frost$core$Bit) {$tmp188};
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block12; else goto block13;
block16:;
int64_t $tmp191 = $tmp180.value;
int64_t $tmp192 = $tmp181.value;
bool $tmp193 = $tmp191 < $tmp192;
frost$core$Bit $tmp194 = (frost$core$Bit) {$tmp193};
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block12; else goto block13;
block12:;
// line 128
frost$collections$Array** $tmp196 = &param0->parameters;
frost$collections$Array* $tmp197 = *$tmp196;
frost$core$Int64 $tmp198 = *(&local1);
frost$core$Object* $tmp199 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp197, $tmp198);
org$frostlanguage$frostc$Type** $tmp200 = &((org$frostlanguage$frostc$MethodDecl$Parameter*) $tmp199)->type;
org$frostlanguage$frostc$Type* $tmp201 = *$tmp200;
frost$collections$Array** $tmp202 = &param1->parameters;
frost$collections$Array* $tmp203 = *$tmp202;
frost$core$Int64 $tmp204 = *(&local1);
frost$core$Object* $tmp205 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp203, $tmp204);
org$frostlanguage$frostc$Type** $tmp206 = &((org$frostlanguage$frostc$MethodDecl$Parameter*) $tmp205)->type;
org$frostlanguage$frostc$Type* $tmp207 = *$tmp206;
ITable* $tmp208 = ((frost$core$Equatable*) $tmp201)->$class->itable;
while ($tmp208->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp208 = $tmp208->next;
}
$fn210 $tmp209 = $tmp208->methods[1];
frost$core$Bit $tmp211 = $tmp209(((frost$core$Equatable*) $tmp201), ((frost$core$Equatable*) $tmp207));
bool $tmp212 = $tmp211.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp205);
// unreffing REF($139:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp199);
// unreffing REF($129:frost.collections.Array.T)
if ($tmp212) goto block17; else goto block18;
block17:;
// line 129
frost$core$Bit $tmp213 = frost$core$Bit$init$builtin_bit(false);
return $tmp213;
block18:;
goto block14;
block14:;
frost$core$Int64 $tmp214 = *(&local1);
int64_t $tmp215 = $tmp181.value;
int64_t $tmp216 = $tmp214.value;
int64_t $tmp217 = $tmp215 - $tmp216;
frost$core$Int64 $tmp218 = (frost$core$Int64) {$tmp217};
frost$core$UInt64 $tmp219 = frost$core$Int64$convert$R$frost$core$UInt64($tmp218);
if ($tmp183) goto block20; else goto block21;
block20:;
uint64_t $tmp220 = $tmp219.value;
uint64_t $tmp221 = $tmp185.value;
bool $tmp222 = $tmp220 >= $tmp221;
frost$core$Bit $tmp223 = (frost$core$Bit) {$tmp222};
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block19; else goto block13;
block21:;
uint64_t $tmp225 = $tmp219.value;
uint64_t $tmp226 = $tmp185.value;
bool $tmp227 = $tmp225 > $tmp226;
frost$core$Bit $tmp228 = (frost$core$Bit) {$tmp227};
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block19; else goto block13;
block19:;
int64_t $tmp230 = $tmp214.value;
int64_t $tmp231 = $tmp184.value;
int64_t $tmp232 = $tmp230 + $tmp231;
frost$core$Int64 $tmp233 = (frost$core$Int64) {$tmp232};
*(&local1) = $tmp233;
goto block12;
block13:;
// line 132
frost$core$Bit $tmp234 = frost$core$Bit$init$builtin_bit(true);
return $tmp234;

}
frost$core$Int64 org$frostlanguage$frostc$MethodDecl$get_priority$R$frost$core$Int64(org$frostlanguage$frostc$MethodDecl* param0) {

org$frostlanguage$frostc$Annotations$Expression* local0 = NULL;
org$frostlanguage$frostc$ASTNode* local1 = NULL;
frost$core$UInt64 local2;
org$frostlanguage$frostc$parser$Token$Kind local3;
org$frostlanguage$frostc$ASTNode* local4 = NULL;
frost$core$UInt64 local5;
// line 136
org$frostlanguage$frostc$Annotations** $tmp235 = &param0->annotations;
org$frostlanguage$frostc$Annotations* $tmp236 = *$tmp235;
frost$collections$Array** $tmp237 = &$tmp236->expressions;
frost$collections$Array* $tmp238 = *$tmp237;
frost$core$Bit $tmp239 = frost$core$Bit$init$builtin_bit($tmp238 != NULL);
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block1; else goto block2;
block1:;
// line 137
org$frostlanguage$frostc$Annotations** $tmp241 = &param0->annotations;
org$frostlanguage$frostc$Annotations* $tmp242 = *$tmp241;
frost$collections$Array** $tmp243 = &$tmp242->expressions;
frost$collections$Array* $tmp244 = *$tmp243;
ITable* $tmp245 = ((frost$collections$Iterable*) $tmp244)->$class->itable;
while ($tmp245->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp245 = $tmp245->next;
}
$fn247 $tmp246 = $tmp245->methods[0];
frost$collections$Iterator* $tmp248 = $tmp246(((frost$collections$Iterable*) $tmp244));
goto block3;
block3:;
ITable* $tmp249 = $tmp248->$class->itable;
while ($tmp249->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp249 = $tmp249->next;
}
$fn251 $tmp250 = $tmp249->methods[0];
frost$core$Bit $tmp252 = $tmp250($tmp248);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block5; else goto block4;
block4:;
*(&local0) = ((org$frostlanguage$frostc$Annotations$Expression*) NULL);
ITable* $tmp254 = $tmp248->$class->itable;
while ($tmp254->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp254 = $tmp254->next;
}
$fn256 $tmp255 = $tmp254->methods[1];
frost$core$Object* $tmp257 = $tmp255($tmp248);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Annotations$Expression*) $tmp257)));
org$frostlanguage$frostc$Annotations$Expression* $tmp258 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local0) = ((org$frostlanguage$frostc$Annotations$Expression*) $tmp257);
// line 138
org$frostlanguage$frostc$Annotations$Expression* $tmp259 = *(&local0);
frost$core$Int64* $tmp260 = &$tmp259->$rawValue;
frost$core$Int64 $tmp261 = *$tmp260;
frost$core$Int64 $tmp262 = (frost$core$Int64) {4};
frost$core$Bit $tmp263 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp261, $tmp262);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block7; else goto block6;
block7:;
frost$core$String** $tmp265 = (frost$core$String**) ($tmp259->$data + 0);
frost$core$String* $tmp266 = *$tmp265;
org$frostlanguage$frostc$ASTNode** $tmp267 = (org$frostlanguage$frostc$ASTNode**) ($tmp259->$data + 8);
org$frostlanguage$frostc$ASTNode* $tmp268 = *$tmp267;
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
org$frostlanguage$frostc$ASTNode* $tmp269 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local1) = $tmp268;
// line 140
org$frostlanguage$frostc$ASTNode* $tmp270 = *(&local1);
frost$core$Int64* $tmp271 = &$tmp270->$rawValue;
frost$core$Int64 $tmp272 = *$tmp271;
frost$core$Int64 $tmp273 = (frost$core$Int64) {25};
frost$core$Bit $tmp274 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp272, $tmp273);
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block9; else goto block10;
block9:;
org$frostlanguage$frostc$Position* $tmp276 = (org$frostlanguage$frostc$Position*) ($tmp270->$data + 0);
org$frostlanguage$frostc$Position $tmp277 = *$tmp276;
frost$core$UInt64* $tmp278 = (frost$core$UInt64*) ($tmp270->$data + 16);
frost$core$UInt64 $tmp279 = *$tmp278;
*(&local2) = $tmp279;
// line 142
frost$core$UInt64 $tmp280 = *(&local2);
frost$core$Int64 $tmp281 = frost$core$UInt64$convert$R$frost$core$Int64($tmp280);
org$frostlanguage$frostc$ASTNode* $tmp282 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp257);
// unreffing REF($28:frost.collections.Iterator.T)
org$frostlanguage$frostc$Annotations$Expression* $tmp283 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
// unreffing a
*(&local0) = ((org$frostlanguage$frostc$Annotations$Expression*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
// unreffing REF($17:frost.collections.Iterator<frost.collections.Iterable.T>)
return $tmp281;
block10:;
frost$core$Int64 $tmp284 = (frost$core$Int64) {35};
frost$core$Bit $tmp285 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp272, $tmp284);
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block11; else goto block8;
block11:;
org$frostlanguage$frostc$Position* $tmp287 = (org$frostlanguage$frostc$Position*) ($tmp270->$data + 0);
org$frostlanguage$frostc$Position $tmp288 = *$tmp287;
org$frostlanguage$frostc$parser$Token$Kind* $tmp289 = (org$frostlanguage$frostc$parser$Token$Kind*) ($tmp270->$data + 16);
org$frostlanguage$frostc$parser$Token$Kind $tmp290 = *$tmp289;
*(&local3) = $tmp290;
org$frostlanguage$frostc$ASTNode** $tmp291 = (org$frostlanguage$frostc$ASTNode**) ($tmp270->$data + 24);
org$frostlanguage$frostc$ASTNode* $tmp292 = *$tmp291;
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
org$frostlanguage$frostc$ASTNode* $tmp293 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local4) = $tmp292;
// line 145
org$frostlanguage$frostc$parser$Token$Kind $tmp294 = *(&local3);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp295;
$tmp295 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp295->value = $tmp294;
frost$core$Int64 $tmp296 = (frost$core$Int64) {53};
org$frostlanguage$frostc$parser$Token$Kind $tmp297 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp296);
org$frostlanguage$frostc$parser$Token$Kind$wrapper* $tmp298;
$tmp298 = (org$frostlanguage$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$parser$Token$Kind$wrapperclass);
$tmp298->value = $tmp297;
ITable* $tmp299 = ((frost$core$Equatable*) $tmp295)->$class->itable;
while ($tmp299->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp299 = $tmp299->next;
}
$fn301 $tmp300 = $tmp299->methods[0];
frost$core$Bit $tmp302 = $tmp300(((frost$core$Equatable*) $tmp295), ((frost$core$Equatable*) $tmp298));
bool $tmp303 = $tmp302.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp298)));
// unreffing REF($112:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp295)));
// unreffing REF($108:frost.core.Equatable<org.frostlanguage.frostc.parser.Token.Kind>)
if ($tmp303) goto block12; else goto block13;
block12:;
// line 146
org$frostlanguage$frostc$ASTNode* $tmp304 = *(&local4);
frost$core$Int64* $tmp305 = &$tmp304->$rawValue;
frost$core$Int64 $tmp306 = *$tmp305;
frost$core$Int64 $tmp307 = (frost$core$Int64) {25};
frost$core$Bit $tmp308 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp306, $tmp307);
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block15; else goto block14;
block15:;
org$frostlanguage$frostc$Position* $tmp310 = (org$frostlanguage$frostc$Position*) ($tmp304->$data + 0);
org$frostlanguage$frostc$Position $tmp311 = *$tmp310;
frost$core$UInt64* $tmp312 = (frost$core$UInt64*) ($tmp304->$data + 16);
frost$core$UInt64 $tmp313 = *$tmp312;
*(&local5) = $tmp313;
// line 148
frost$core$UInt64 $tmp314 = *(&local5);
frost$core$Int64 $tmp315 = frost$core$UInt64$convert$R$frost$core$Int64($tmp314);
frost$core$Int64 $tmp316 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp315);
org$frostlanguage$frostc$ASTNode* $tmp317 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
// unreffing base
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp318 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp257);
// unreffing REF($28:frost.collections.Iterator.T)
org$frostlanguage$frostc$Annotations$Expression* $tmp319 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
// unreffing a
*(&local0) = ((org$frostlanguage$frostc$Annotations$Expression*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
// unreffing REF($17:frost.collections.Iterator<frost.collections.Iterable.T>)
return $tmp316;
block14:;
goto block13;
block13:;
org$frostlanguage$frostc$ASTNode* $tmp320 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
// unreffing base
*(&local4) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block8;
block8:;
org$frostlanguage$frostc$ASTNode* $tmp321 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
// unreffing expr
*(&local1) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block6;
block6:;
frost$core$Frost$unref$frost$core$Object$Q($tmp257);
// unreffing REF($28:frost.collections.Iterator.T)
org$frostlanguage$frostc$Annotations$Expression* $tmp322 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
// unreffing a
*(&local0) = ((org$frostlanguage$frostc$Annotations$Expression*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
// unreffing REF($17:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block2;
block2:;
// line 158
frost$core$Int64 $tmp323 = (frost$core$Int64) {0};
return $tmp323;

}
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$MethodDecl$get_type$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$MethodDecl* param0) {

frost$collections$Array* local0 = NULL;
org$frostlanguage$frostc$MethodDecl$Parameter* local1 = NULL;
org$frostlanguage$frostc$Type$Kind local2;
// line 162
frost$collections$Array* $tmp324 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array** $tmp325 = &param0->parameters;
frost$collections$Array* $tmp326 = *$tmp325;
ITable* $tmp327 = ((frost$collections$CollectionView*) $tmp326)->$class->itable;
while ($tmp327->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp327 = $tmp327->next;
}
$fn329 $tmp328 = $tmp327->methods[0];
frost$core$Int64 $tmp330 = $tmp328(((frost$collections$CollectionView*) $tmp326));
frost$collections$Array$init$frost$core$Int64($tmp324, $tmp330);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
frost$collections$Array* $tmp331 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
*(&local0) = $tmp324;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
// unreffing REF($1:frost.collections.Array<org.frostlanguage.frostc.Type>)
// line 163
frost$collections$Array** $tmp332 = &param0->parameters;
frost$collections$Array* $tmp333 = *$tmp332;
ITable* $tmp334 = ((frost$collections$Iterable*) $tmp333)->$class->itable;
while ($tmp334->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp334 = $tmp334->next;
}
$fn336 $tmp335 = $tmp334->methods[0];
frost$collections$Iterator* $tmp337 = $tmp335(((frost$collections$Iterable*) $tmp333));
goto block1;
block1:;
ITable* $tmp338 = $tmp337->$class->itable;
while ($tmp338->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp338 = $tmp338->next;
}
$fn340 $tmp339 = $tmp338->methods[0];
frost$core$Bit $tmp341 = $tmp339($tmp337);
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlanguage$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp343 = $tmp337->$class->itable;
while ($tmp343->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp343 = $tmp343->next;
}
$fn345 $tmp344 = $tmp343->methods[1];
frost$core$Object* $tmp346 = $tmp344($tmp337);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$MethodDecl$Parameter*) $tmp346)));
org$frostlanguage$frostc$MethodDecl$Parameter* $tmp347 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
*(&local1) = ((org$frostlanguage$frostc$MethodDecl$Parameter*) $tmp346);
// line 164
frost$collections$Array* $tmp348 = *(&local0);
org$frostlanguage$frostc$MethodDecl$Parameter* $tmp349 = *(&local1);
org$frostlanguage$frostc$Type** $tmp350 = &$tmp349->type;
org$frostlanguage$frostc$Type* $tmp351 = *$tmp350;
frost$collections$Array$add$frost$collections$Array$T($tmp348, ((frost$core$Object*) $tmp351));
frost$core$Frost$unref$frost$core$Object$Q($tmp346);
// unreffing REF($36:frost.collections.Iterator.T)
org$frostlanguage$frostc$MethodDecl$Parameter* $tmp352 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
// unreffing p
*(&local1) = ((org$frostlanguage$frostc$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// unreffing REF($25:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 166
// line 167
org$frostlanguage$frostc$MethodDecl$Kind* $tmp353 = &param0->methodKind;
org$frostlanguage$frostc$MethodDecl$Kind $tmp354 = *$tmp353;
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp355;
$tmp355 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp355->value = $tmp354;
frost$core$Int64 $tmp356 = (frost$core$Int64) {1};
org$frostlanguage$frostc$MethodDecl$Kind $tmp357 = org$frostlanguage$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp356);
org$frostlanguage$frostc$MethodDecl$Kind$wrapper* $tmp358;
$tmp358 = (org$frostlanguage$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$MethodDecl$Kind$wrapperclass);
$tmp358->value = $tmp357;
ITable* $tmp359 = ((frost$core$Equatable*) $tmp355)->$class->itable;
while ($tmp359->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp359 = $tmp359->next;
}
$fn361 $tmp360 = $tmp359->methods[0];
frost$core$Bit $tmp362 = $tmp360(((frost$core$Equatable*) $tmp355), ((frost$core$Equatable*) $tmp358));
bool $tmp363 = $tmp362.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp358)));
// unreffing REF($72:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp355)));
// unreffing REF($68:frost.core.Equatable<org.frostlanguage.frostc.MethodDecl.Kind>)
if ($tmp363) goto block4; else goto block6;
block4:;
// line 168
frost$core$Int64 $tmp364 = (frost$core$Int64) {17};
org$frostlanguage$frostc$Type$Kind $tmp365 = org$frostlanguage$frostc$Type$Kind$init$frost$core$Int64($tmp364);
*(&local2) = $tmp365;
goto block5;
block6:;
// line 1
// line 171
frost$core$Int64 $tmp366 = (frost$core$Int64) {18};
org$frostlanguage$frostc$Type$Kind $tmp367 = org$frostlanguage$frostc$Type$Kind$init$frost$core$Int64($tmp366);
*(&local2) = $tmp367;
goto block5;
block5:;
// line 173
org$frostlanguage$frostc$Position* $tmp368 = &((org$frostlanguage$frostc$Symbol*) param0)->position;
org$frostlanguage$frostc$Position $tmp369 = *$tmp368;
org$frostlanguage$frostc$Type$Kind $tmp370 = *(&local2);
frost$collections$Array* $tmp371 = *(&local0);
org$frostlanguage$frostc$Type** $tmp372 = &param0->returnType;
org$frostlanguage$frostc$Type* $tmp373 = *$tmp372;
frost$core$Int64 $tmp374 = org$frostlanguage$frostc$MethodDecl$get_priority$R$frost$core$Int64(param0);
org$frostlanguage$frostc$Type* $tmp375 = org$frostlanguage$frostc$Type$methodType$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT$org$frostlanguage$frostc$Type$frost$core$Int64$R$org$frostlanguage$frostc$Type($tmp369, $tmp370, ((frost$collections$ListView*) $tmp371), $tmp373, $tmp374);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
// unreffing REF($104:org.frostlanguage.frostc.Type)
frost$collections$Array* $tmp376 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
// unreffing paramTypes
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp375;

}
frost$core$String* org$frostlanguage$frostc$MethodDecl$get_signature$R$frost$core$String(org$frostlanguage$frostc$MethodDecl* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlanguage$frostc$MethodDecl$Parameter* local2 = NULL;
// line 177
frost$core$MutableString* $tmp377 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String** $tmp378 = &((org$frostlanguage$frostc$Symbol*) param0)->name;
frost$core$String* $tmp379 = *$tmp378;
frost$core$String* $tmp380 = frost$core$String$convert$R$frost$core$String($tmp379);
frost$core$String* $tmp381 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp380, &$s382);
frost$core$MutableString$init$frost$core$String($tmp377, $tmp381);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$core$MutableString* $tmp383 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
*(&local0) = $tmp377;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
// unreffing REF($6:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
// unreffing REF($1:frost.core.MutableString)
// line 178
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s384));
frost$core$String* $tmp385 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
*(&local1) = &$s386;
// line 179
frost$collections$Array** $tmp387 = &param0->parameters;
frost$collections$Array* $tmp388 = *$tmp387;
ITable* $tmp389 = ((frost$collections$Iterable*) $tmp388)->$class->itable;
while ($tmp389->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp389 = $tmp389->next;
}
$fn391 $tmp390 = $tmp389->methods[0];
frost$collections$Iterator* $tmp392 = $tmp390(((frost$collections$Iterable*) $tmp388));
goto block1;
block1:;
ITable* $tmp393 = $tmp392->$class->itable;
while ($tmp393->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp393 = $tmp393->next;
}
$fn395 $tmp394 = $tmp393->methods[0];
frost$core$Bit $tmp396 = $tmp394($tmp392);
bool $tmp397 = $tmp396.value;
if ($tmp397) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlanguage$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp398 = $tmp392->$class->itable;
while ($tmp398->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp398 = $tmp398->next;
}
$fn400 $tmp399 = $tmp398->methods[1];
frost$core$Object* $tmp401 = $tmp399($tmp392);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$MethodDecl$Parameter*) $tmp401)));
org$frostlanguage$frostc$MethodDecl$Parameter* $tmp402 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
*(&local2) = ((org$frostlanguage$frostc$MethodDecl$Parameter*) $tmp401);
// line 180
frost$core$MutableString* $tmp403 = *(&local0);
frost$core$String* $tmp404 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp403, $tmp404);
// line 181
frost$core$MutableString* $tmp405 = *(&local0);
org$frostlanguage$frostc$MethodDecl$Parameter* $tmp406 = *(&local2);
frost$core$MutableString$append$frost$core$Object($tmp405, ((frost$core$Object*) $tmp406));
// line 182
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s407));
frost$core$String* $tmp408 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
*(&local1) = &$s409;
frost$core$Frost$unref$frost$core$Object$Q($tmp401);
// unreffing REF($49:frost.collections.Iterator.T)
org$frostlanguage$frostc$MethodDecl$Parameter* $tmp410 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
// unreffing p
*(&local2) = ((org$frostlanguage$frostc$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
// unreffing REF($38:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 184
frost$core$MutableString* $tmp411 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp411, &$s412);
// line 185
org$frostlanguage$frostc$Type** $tmp413 = &param0->returnType;
org$frostlanguage$frostc$Type* $tmp414 = *$tmp413;
org$frostlanguage$frostc$Type* $tmp415 = org$frostlanguage$frostc$Type$Void$R$org$frostlanguage$frostc$Type();
ITable* $tmp416 = ((frost$core$Equatable*) $tmp414)->$class->itable;
while ($tmp416->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp416 = $tmp416->next;
}
$fn418 $tmp417 = $tmp416->methods[1];
frost$core$Bit $tmp419 = $tmp417(((frost$core$Equatable*) $tmp414), ((frost$core$Equatable*) $tmp415));
bool $tmp420 = $tmp419.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
// unreffing REF($93:org.frostlanguage.frostc.Type)
if ($tmp420) goto block4; else goto block5;
block4:;
// line 186
frost$core$MutableString* $tmp421 = *(&local0);
org$frostlanguage$frostc$Type** $tmp422 = &param0->returnType;
org$frostlanguage$frostc$Type* $tmp423 = *$tmp422;
frost$core$String* $tmp424 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s425, ((frost$core$Object*) $tmp423));
frost$core$String* $tmp426 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp424, &$s427);
frost$core$MutableString$append$frost$core$String($tmp421, $tmp426);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
// unreffing REF($108:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
// unreffing REF($107:frost.core.String)
goto block5;
block5:;
// line 188
frost$core$MutableString* $tmp428 = *(&local0);
frost$core$String* $tmp429 = frost$core$MutableString$finish$R$frost$core$String($tmp428);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
// unreffing REF($119:frost.core.String)
frost$core$String* $tmp430 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp431 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp429;

}
frost$core$String* org$frostlanguage$frostc$MethodDecl$get_declaration$R$frost$core$String(org$frostlanguage$frostc$MethodDecl* param0) {

// line 192
org$frostlanguage$frostc$MethodDecl$Kind* $tmp432 = &param0->methodKind;
org$frostlanguage$frostc$MethodDecl$Kind $tmp433 = *$tmp432;
frost$core$Int64 $tmp434 = $tmp433.$rawValue;
frost$core$Int64 $tmp435 = (frost$core$Int64) {0};
frost$core$Bit $tmp436 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp434, $tmp435);
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block2; else goto block3;
block2:;
// line 194
frost$core$Weak** $tmp438 = &param0->owner;
frost$core$Weak* $tmp439 = *$tmp438;
frost$core$Object* $tmp440 = frost$core$Weak$get$R$frost$core$Weak$T($tmp439);
frost$core$String** $tmp441 = &((org$frostlanguage$frostc$ClassDecl*) $tmp440)->name;
frost$core$String* $tmp442 = *$tmp441;
frost$core$String* $tmp443 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s444, $tmp442);
frost$core$String* $tmp445 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp443, &$s446);
frost$core$String* $tmp447 = org$frostlanguage$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp448 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp445, $tmp447);
frost$core$String* $tmp449 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp448, &$s450);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
// unreffing REF($20:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
// unreffing REF($19:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
// unreffing REF($18:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
// unreffing REF($17:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
// unreffing REF($16:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp440);
// unreffing REF($12:frost.core.Weak.T)
return $tmp449;
block3:;
frost$core$Int64 $tmp451 = (frost$core$Int64) {1};
frost$core$Bit $tmp452 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp434, $tmp451);
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block4; else goto block5;
block4:;
// line 197
frost$core$Weak** $tmp454 = &param0->owner;
frost$core$Weak* $tmp455 = *$tmp454;
frost$core$Object* $tmp456 = frost$core$Weak$get$R$frost$core$Weak$T($tmp455);
frost$core$String** $tmp457 = &((org$frostlanguage$frostc$ClassDecl*) $tmp456)->name;
frost$core$String* $tmp458 = *$tmp457;
frost$core$String* $tmp459 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s460, $tmp458);
frost$core$String* $tmp461 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp459, &$s462);
frost$core$String* $tmp463 = org$frostlanguage$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp464 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp461, $tmp463);
frost$core$String* $tmp465 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp464, &$s466);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
// unreffing REF($58:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
// unreffing REF($57:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
// unreffing REF($56:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
// unreffing REF($55:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
// unreffing REF($54:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp456);
// unreffing REF($50:frost.core.Weak.T)
return $tmp465;
block5:;
frost$core$Int64 $tmp467 = (frost$core$Int64) {2};
frost$core$Bit $tmp468 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp434, $tmp467);
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block6; else goto block1;
block6:;
// line 200
frost$core$Weak** $tmp470 = &param0->owner;
frost$core$Weak* $tmp471 = *$tmp470;
frost$core$Object* $tmp472 = frost$core$Weak$get$R$frost$core$Weak$T($tmp471);
frost$core$String** $tmp473 = &((org$frostlanguage$frostc$ClassDecl*) $tmp472)->name;
frost$core$String* $tmp474 = *$tmp473;
frost$core$String* $tmp475 = frost$core$String$convert$R$frost$core$String($tmp474);
frost$core$String* $tmp476 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp475, &$s477);
frost$core$String* $tmp478 = org$frostlanguage$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp479 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp476, $tmp478);
frost$core$String* $tmp480 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp479, &$s481);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
// unreffing REF($96:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
// unreffing REF($95:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
// unreffing REF($94:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
// unreffing REF($93:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
// unreffing REF($92:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp472);
// unreffing REF($88:frost.core.Weak.T)
return $tmp480;
block1:;
frost$core$Bit $tmp482 = frost$core$Bit$init$builtin_bit(false);
bool $tmp483 = $tmp482.value;
if ($tmp483) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp484 = (frost$core$Int64) {191};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s485, $tmp484, &$s486);
abort(); // unreachable
block7:;
abort(); // unreachable

}
frost$core$String* org$frostlanguage$frostc$MethodDecl$convert$R$frost$core$String(org$frostlanguage$frostc$MethodDecl* param0) {

// line 207
org$frostlanguage$frostc$FixedArray** $tmp487 = &param0->body;
org$frostlanguage$frostc$FixedArray* $tmp488 = *$tmp487;
frost$core$Bit $tmp489 = frost$core$Bit$init$builtin_bit($tmp488 != NULL);
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block1; else goto block2;
block1:;
// line 208
org$frostlanguage$frostc$Annotations** $tmp491 = &param0->annotations;
org$frostlanguage$frostc$Annotations* $tmp492 = *$tmp491;
frost$core$String* $tmp493 = org$frostlanguage$frostc$Annotations$convert$R$frost$core$String($tmp492);
frost$core$String* $tmp494 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp493, &$s495);
frost$core$String* $tmp496 = org$frostlanguage$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp497 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp494, $tmp496);
frost$core$String* $tmp498 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp497, &$s499);
org$frostlanguage$frostc$FixedArray** $tmp500 = &param0->body;
org$frostlanguage$frostc$FixedArray* $tmp501 = *$tmp500;
frost$core$String* $tmp502 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp498, ((frost$core$Object*) $tmp501));
frost$core$String* $tmp503 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp502, &$s504);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
// unreffing REF($19:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
// unreffing REF($18:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
// unreffing REF($14:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
// unreffing REF($13:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
// unreffing REF($12:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
// unreffing REF($11:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
// unreffing REF($10:frost.core.String)
return $tmp503;
block2:;
// line 210
frost$core$String* $tmp505 = org$frostlanguage$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
// unreffing REF($45:frost.core.String)
return $tmp505;

}
void org$frostlanguage$frostc$MethodDecl$cleanup(org$frostlanguage$frostc$MethodDecl* param0) {

// line 6
org$frostlanguage$frostc$Symbol$cleanup(((org$frostlanguage$frostc$Symbol*) param0));
frost$core$Weak** $tmp506 = &param0->owner;
frost$core$Weak* $tmp507 = *$tmp506;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
frost$core$String** $tmp508 = &param0->doccomment;
frost$core$String* $tmp509 = *$tmp508;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
org$frostlanguage$frostc$Annotations** $tmp510 = &param0->annotations;
org$frostlanguage$frostc$Annotations* $tmp511 = *$tmp510;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
frost$collections$Array** $tmp512 = &param0->genericParameters;
frost$collections$Array* $tmp513 = *$tmp512;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
frost$collections$Array** $tmp514 = &param0->parameters;
frost$collections$Array* $tmp515 = *$tmp514;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
org$frostlanguage$frostc$Type** $tmp516 = &param0->returnType;
org$frostlanguage$frostc$Type* $tmp517 = *$tmp516;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
org$frostlanguage$frostc$FixedArray** $tmp518 = &param0->body;
org$frostlanguage$frostc$FixedArray* $tmp519 = *$tmp518;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
frost$core$Weak** $tmp520 = &param0->overridden;
frost$core$Weak* $tmp521 = *$tmp520;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
return;

}

