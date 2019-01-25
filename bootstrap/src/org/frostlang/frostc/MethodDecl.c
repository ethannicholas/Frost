#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "frost/core/Bit.h"
#include "frost/core/Weak.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Equatable.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/Annotations/Expression.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/expression/Unary/Operator.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"


static frost$core$String $s1;
org$frostlang$frostc$MethodDecl$class_type org$frostlang$frostc$MethodDecl$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { org$frostlang$frostc$MethodDecl$get_asString$R$frost$core$String, org$frostlang$frostc$MethodDecl$cleanup, org$frostlang$frostc$MethodDecl$get_heritable$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$isInstance$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$matches$org$frostlang$frostc$MethodDecl$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int64, org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type, org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String, org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String} };

typedef frost$core$Int64 (*$fn15)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn44)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn48)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn53)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn79)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn94)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn115)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn126)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn138)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn148)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn156)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn162)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn175)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn209)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn246)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn250)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn255)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn300)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn328)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn335)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn339)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn344)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn360)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn390)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn394)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn399)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn417)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 31, -4625542026981951671, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -4513292705335416282, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x69\x6e\x69\x74\x28\x6f\x77\x6e\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x64\x6f\x63\x63\x6f\x6d\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2c\x20\x6d\x65\x74\x68\x6f\x64\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64\x2c\x20\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x2c\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x2c\x20\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x62\x6f\x64\x79\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x29", 569, -6722446447606640415, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -4513292705335416282, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s443 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s459 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static frost$core$String $s461 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s465 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s476 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s480 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -4513292705335416282, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s495 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };

void org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$MethodDecl* param0, org$frostlang$frostc$ClassDecl* param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$Annotations* param4, org$frostlang$frostc$MethodDecl$Kind param5, frost$core$String* param6, frost$collections$Array* param7, frost$collections$Array* param8, org$frostlang$frostc$Type* param9, org$frostlang$frostc$FixedArray* param10) {

org$frostlang$frostc$MethodDecl$Parameter* local0 = NULL;
// line 66
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$Resolution $tmp3 = org$frostlang$frostc$Compiler$Resolution$init$frost$core$Int64($tmp2);
org$frostlang$frostc$Compiler$Resolution* $tmp4 = &param0->resolved;
*$tmp4 = $tmp3;
// line 68
frost$core$Bit $tmp5 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp6 = &param0->overrideKnown;
*$tmp6 = $tmp5;
// line 71
frost$core$Weak* $tmp7 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp7, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$Weak** $tmp8 = &param0->overridden;
frost$core$Weak* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$Weak** $tmp10 = &param0->overridden;
*$tmp10 = $tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$Bit $tmp11 = frost$core$Bit$init$builtin_bit(param7 == NULL);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block1; else goto block3;
block3:;
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
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp23 = (frost$core$Int64) {84};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s24, $tmp23, &$s25);
abort(); // unreachable
block1:;
// line 88
frost$core$Int64 $tmp26 = (frost$core$Int64) {5};
org$frostlang$frostc$Symbol$Kind $tmp27 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp26);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp27, param2, param6);
// line 89
frost$core$Weak* $tmp28 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp28, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Weak** $tmp29 = &param0->owner;
frost$core$Weak* $tmp30 = *$tmp29;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$Weak** $tmp31 = &param0->owner;
*$tmp31 = $tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// line 90
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp32 = &param0->doccomment;
frost$core$String* $tmp33 = *$tmp32;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$String** $tmp34 = &param0->doccomment;
*$tmp34 = param3;
// line 91
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$Annotations** $tmp35 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp36 = *$tmp35;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
org$frostlang$frostc$Annotations** $tmp37 = &param0->annotations;
*$tmp37 = param4;
// line 92
org$frostlang$frostc$MethodDecl$Kind* $tmp38 = &param0->methodKind;
*$tmp38 = param5;
// line 93
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
frost$collections$Array** $tmp39 = &param0->genericParameters;
frost$collections$Array* $tmp40 = *$tmp39;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
frost$collections$Array** $tmp41 = &param0->genericParameters;
*$tmp41 = param7;
// line 94
ITable* $tmp42 = ((frost$collections$Iterable*) param8)->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp42 = $tmp42->next;
}
$fn44 $tmp43 = $tmp42->methods[0];
frost$collections$Iterator* $tmp45 = $tmp43(((frost$collections$Iterable*) param8));
goto block4;
block4:;
ITable* $tmp46 = $tmp45->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp46 = $tmp46->next;
}
$fn48 $tmp47 = $tmp46->methods[0];
frost$core$Bit $tmp49 = $tmp47($tmp45);
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block6; else goto block5;
block5:;
*(&local0) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp51 = $tmp45->$class->itable;
while ($tmp51->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp51 = $tmp51->next;
}
$fn53 $tmp52 = $tmp51->methods[1];
frost$core$Object* $tmp54 = $tmp52($tmp45);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp54)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp55 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
*(&local0) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp54);
// line 95
org$frostlang$frostc$MethodDecl$Parameter* $tmp56 = *(&local0);
frost$core$Weak* $tmp57 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp57, ((frost$core$Object*) param0));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Weak** $tmp58 = &$tmp56->owner;
frost$core$Weak* $tmp59 = *$tmp58;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Weak** $tmp60 = &$tmp56->owner;
*$tmp60 = $tmp57;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Frost$unref$frost$core$Object$Q($tmp54);
org$frostlang$frostc$MethodDecl$Parameter* $tmp61 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local0) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// line 97
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
frost$collections$Array** $tmp62 = &param0->parameters;
frost$collections$Array* $tmp63 = *$tmp62;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$collections$Array** $tmp64 = &param0->parameters;
*$tmp64 = param8;
// line 98
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$Type** $tmp65 = &param0->returnType;
org$frostlang$frostc$Type* $tmp66 = *$tmp65;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
org$frostlang$frostc$Type** $tmp67 = &param0->returnType;
*$tmp67 = param9;
// line 99
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param10));
org$frostlang$frostc$FixedArray** $tmp68 = &param0->body;
org$frostlang$frostc$FixedArray* $tmp69 = *$tmp68;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
org$frostlang$frostc$FixedArray** $tmp70 = &param0->body;
*$tmp70 = param10;
return;

}
frost$core$Bit org$frostlang$frostc$MethodDecl$get_heritable$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* param0) {

// line 104
org$frostlang$frostc$MethodDecl$Kind* $tmp71 = &param0->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp72 = *$tmp71;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp73;
$tmp73 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp73->value = $tmp72;
frost$core$Int64 $tmp74 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp75 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp74);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp76;
$tmp76 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp76->value = $tmp75;
ITable* $tmp77 = ((frost$core$Equatable*) $tmp73)->$class->itable;
while ($tmp77->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp77 = $tmp77->next;
}
$fn79 $tmp78 = $tmp77->methods[1];
frost$core$Bit $tmp80 = $tmp78(((frost$core$Equatable*) $tmp73), ((frost$core$Equatable*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp76)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp73)));
return $tmp80;

}
frost$core$Bit org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
// line 108
org$frostlang$frostc$Annotations** $tmp81 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp82 = *$tmp81;
frost$core$Bit $tmp83 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp82);
frost$core$Bit $tmp84 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp83);
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block1; else goto block2;
block1:;
org$frostlang$frostc$MethodDecl$Kind* $tmp86 = &param0->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp87 = *$tmp86;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp88;
$tmp88 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp88->value = $tmp87;
frost$core$Int64 $tmp89 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp90 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp89);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp91;
$tmp91 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp91->value = $tmp90;
ITable* $tmp92 = ((frost$core$Equatable*) $tmp88)->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp92 = $tmp92->next;
}
$fn94 $tmp93 = $tmp92->methods[1];
frost$core$Bit $tmp95 = $tmp93(((frost$core$Equatable*) $tmp88), ((frost$core$Equatable*) $tmp91));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp91)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp88)));
*(&local1) = $tmp95;
goto block3;
block2:;
*(&local1) = $tmp84;
goto block3;
block3:;
frost$core$Bit $tmp96 = *(&local1);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Annotations** $tmp98 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp99 = *$tmp98;
frost$core$Bit $tmp100 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit($tmp99);
frost$core$Bit $tmp101 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp100);
*(&local0) = $tmp101;
goto block6;
block5:;
*(&local0) = $tmp96;
goto block6;
block6:;
frost$core$Bit $tmp102 = *(&local0);
return $tmp102;

}
frost$core$Bit org$frostlang$frostc$MethodDecl$isInstance$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* param0) {

// line 112
org$frostlang$frostc$Annotations** $tmp103 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp104 = *$tmp103;
frost$core$Bit $tmp105 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp104);
frost$core$Bit $tmp106 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp105);
return $tmp106;

}
frost$core$Bit org$frostlang$frostc$MethodDecl$matches$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Bit local0;
frost$core$Int64 local1;
// line 116
org$frostlang$frostc$Compiler$Resolution* $tmp107 = &param0->resolved;
org$frostlang$frostc$Compiler$Resolution $tmp108 = *$tmp107;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp109;
$tmp109 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp109->value = $tmp108;
frost$core$Int64 $tmp110 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$Resolution $tmp111 = org$frostlang$frostc$Compiler$Resolution$init$frost$core$Int64($tmp110);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp112;
$tmp112 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp112->value = $tmp111;
ITable* $tmp113 = ((frost$core$Equatable*) $tmp109)->$class->itable;
while ($tmp113->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp113 = $tmp113->next;
}
$fn115 $tmp114 = $tmp113->methods[1];
frost$core$Bit $tmp116 = $tmp114(((frost$core$Equatable*) $tmp109), ((frost$core$Equatable*) $tmp112));
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block1; else goto block2;
block1:;
org$frostlang$frostc$Compiler$Resolution* $tmp118 = &param1->resolved;
org$frostlang$frostc$Compiler$Resolution $tmp119 = *$tmp118;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp120;
$tmp120 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp120->value = $tmp119;
frost$core$Int64 $tmp121 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$Resolution $tmp122 = org$frostlang$frostc$Compiler$Resolution$init$frost$core$Int64($tmp121);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp123;
$tmp123 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp123->value = $tmp122;
ITable* $tmp124 = ((frost$core$Equatable*) $tmp120)->$class->itable;
while ($tmp124->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp124 = $tmp124->next;
}
$fn126 $tmp125 = $tmp124->methods[1];
frost$core$Bit $tmp127 = $tmp125(((frost$core$Equatable*) $tmp120), ((frost$core$Equatable*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp123)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp120)));
*(&local0) = $tmp127;
goto block3;
block2:;
*(&local0) = $tmp116;
goto block3;
block3:;
frost$core$Bit $tmp128 = *(&local0);
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp130 = (frost$core$Int64) {116};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s131, $tmp130);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp112)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp109)));
// line 118
frost$core$String** $tmp132 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp133 = *$tmp132;
frost$core$String** $tmp134 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp135 = *$tmp134;
ITable* $tmp136 = ((frost$core$Equatable*) $tmp133)->$class->itable;
while ($tmp136->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp136 = $tmp136->next;
}
$fn138 $tmp137 = $tmp136->methods[1];
frost$core$Bit $tmp139 = $tmp137(((frost$core$Equatable*) $tmp133), ((frost$core$Equatable*) $tmp135));
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block6; else goto block7;
block6:;
// line 119
frost$core$Bit $tmp141 = frost$core$Bit$init$builtin_bit(false);
return $tmp141;
block7:;
// line 121
org$frostlang$frostc$Type** $tmp142 = &param0->returnType;
org$frostlang$frostc$Type* $tmp143 = *$tmp142;
org$frostlang$frostc$Type** $tmp144 = &param1->returnType;
org$frostlang$frostc$Type* $tmp145 = *$tmp144;
ITable* $tmp146 = ((frost$core$Equatable*) $tmp143)->$class->itable;
while ($tmp146->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp146 = $tmp146->next;
}
$fn148 $tmp147 = $tmp146->methods[1];
frost$core$Bit $tmp149 = $tmp147(((frost$core$Equatable*) $tmp143), ((frost$core$Equatable*) $tmp145));
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block8; else goto block9;
block8:;
// line 122
frost$core$Bit $tmp151 = frost$core$Bit$init$builtin_bit(false);
return $tmp151;
block9:;
// line 124
frost$collections$Array** $tmp152 = &param0->parameters;
frost$collections$Array* $tmp153 = *$tmp152;
ITable* $tmp154 = ((frost$collections$CollectionView*) $tmp153)->$class->itable;
while ($tmp154->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp154 = $tmp154->next;
}
$fn156 $tmp155 = $tmp154->methods[0];
frost$core$Int64 $tmp157 = $tmp155(((frost$collections$CollectionView*) $tmp153));
frost$collections$Array** $tmp158 = &param1->parameters;
frost$collections$Array* $tmp159 = *$tmp158;
ITable* $tmp160 = ((frost$collections$CollectionView*) $tmp159)->$class->itable;
while ($tmp160->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp160 = $tmp160->next;
}
$fn162 $tmp161 = $tmp160->methods[0];
frost$core$Int64 $tmp163 = $tmp161(((frost$collections$CollectionView*) $tmp159));
int64_t $tmp164 = $tmp157.value;
int64_t $tmp165 = $tmp163.value;
bool $tmp166 = $tmp164 != $tmp165;
frost$core$Bit $tmp167 = (frost$core$Bit) {$tmp166};
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block10; else goto block11;
block10:;
// line 125
frost$core$Bit $tmp169 = frost$core$Bit$init$builtin_bit(false);
return $tmp169;
block11:;
// line 127
frost$core$Int64 $tmp170 = (frost$core$Int64) {0};
frost$collections$Array** $tmp171 = &param0->parameters;
frost$collections$Array* $tmp172 = *$tmp171;
ITable* $tmp173 = ((frost$collections$CollectionView*) $tmp172)->$class->itable;
while ($tmp173->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp173 = $tmp173->next;
}
$fn175 $tmp174 = $tmp173->methods[0];
frost$core$Int64 $tmp176 = $tmp174(((frost$collections$CollectionView*) $tmp172));
frost$core$Bit $tmp177 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp178 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp170, $tmp176, $tmp177);
frost$core$Int64 $tmp179 = $tmp178.min;
*(&local1) = $tmp179;
frost$core$Int64 $tmp180 = $tmp178.max;
frost$core$Bit $tmp181 = $tmp178.inclusive;
bool $tmp182 = $tmp181.value;
frost$core$Int64 $tmp183 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp184 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp183);
if ($tmp182) goto block15; else goto block16;
block15:;
int64_t $tmp185 = $tmp179.value;
int64_t $tmp186 = $tmp180.value;
bool $tmp187 = $tmp185 <= $tmp186;
frost$core$Bit $tmp188 = (frost$core$Bit) {$tmp187};
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block12; else goto block13;
block16:;
int64_t $tmp190 = $tmp179.value;
int64_t $tmp191 = $tmp180.value;
bool $tmp192 = $tmp190 < $tmp191;
frost$core$Bit $tmp193 = (frost$core$Bit) {$tmp192};
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block12; else goto block13;
block12:;
// line 128
frost$collections$Array** $tmp195 = &param0->parameters;
frost$collections$Array* $tmp196 = *$tmp195;
frost$core$Int64 $tmp197 = *(&local1);
frost$core$Object* $tmp198 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp196, $tmp197);
org$frostlang$frostc$Type** $tmp199 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp198)->type;
org$frostlang$frostc$Type* $tmp200 = *$tmp199;
frost$collections$Array** $tmp201 = &param1->parameters;
frost$collections$Array* $tmp202 = *$tmp201;
frost$core$Int64 $tmp203 = *(&local1);
frost$core$Object* $tmp204 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp202, $tmp203);
org$frostlang$frostc$Type** $tmp205 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp204)->type;
org$frostlang$frostc$Type* $tmp206 = *$tmp205;
ITable* $tmp207 = ((frost$core$Equatable*) $tmp200)->$class->itable;
while ($tmp207->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp207 = $tmp207->next;
}
$fn209 $tmp208 = $tmp207->methods[1];
frost$core$Bit $tmp210 = $tmp208(((frost$core$Equatable*) $tmp200), ((frost$core$Equatable*) $tmp206));
bool $tmp211 = $tmp210.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp204);
frost$core$Frost$unref$frost$core$Object$Q($tmp198);
if ($tmp211) goto block17; else goto block18;
block17:;
// line 129
frost$core$Bit $tmp212 = frost$core$Bit$init$builtin_bit(false);
return $tmp212;
block18:;
goto block14;
block14:;
frost$core$Int64 $tmp213 = *(&local1);
int64_t $tmp214 = $tmp180.value;
int64_t $tmp215 = $tmp213.value;
int64_t $tmp216 = $tmp214 - $tmp215;
frost$core$Int64 $tmp217 = (frost$core$Int64) {$tmp216};
frost$core$UInt64 $tmp218 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp217);
if ($tmp182) goto block20; else goto block21;
block20:;
uint64_t $tmp219 = $tmp218.value;
uint64_t $tmp220 = $tmp184.value;
bool $tmp221 = $tmp219 >= $tmp220;
frost$core$Bit $tmp222 = (frost$core$Bit) {$tmp221};
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block19; else goto block13;
block21:;
uint64_t $tmp224 = $tmp218.value;
uint64_t $tmp225 = $tmp184.value;
bool $tmp226 = $tmp224 > $tmp225;
frost$core$Bit $tmp227 = (frost$core$Bit) {$tmp226};
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block19; else goto block13;
block19:;
int64_t $tmp229 = $tmp213.value;
int64_t $tmp230 = $tmp183.value;
int64_t $tmp231 = $tmp229 + $tmp230;
frost$core$Int64 $tmp232 = (frost$core$Int64) {$tmp231};
*(&local1) = $tmp232;
goto block12;
block13:;
// line 132
frost$core$Bit $tmp233 = frost$core$Bit$init$builtin_bit(true);
return $tmp233;

}
frost$core$Int64 org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int64(org$frostlang$frostc$MethodDecl* param0) {

org$frostlang$frostc$Annotations$Expression* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$core$UInt64 local2;
org$frostlang$frostc$expression$Unary$Operator local3;
org$frostlang$frostc$ASTNode* local4 = NULL;
frost$core$UInt64 local5;
// line 136
org$frostlang$frostc$Annotations** $tmp234 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp235 = *$tmp234;
frost$collections$Array** $tmp236 = &$tmp235->expressions;
frost$collections$Array* $tmp237 = *$tmp236;
frost$core$Bit $tmp238 = frost$core$Bit$init$builtin_bit($tmp237 != NULL);
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block1; else goto block2;
block1:;
// line 137
org$frostlang$frostc$Annotations** $tmp240 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp241 = *$tmp240;
frost$collections$Array** $tmp242 = &$tmp241->expressions;
frost$collections$Array* $tmp243 = *$tmp242;
ITable* $tmp244 = ((frost$collections$Iterable*) $tmp243)->$class->itable;
while ($tmp244->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp244 = $tmp244->next;
}
$fn246 $tmp245 = $tmp244->methods[0];
frost$collections$Iterator* $tmp247 = $tmp245(((frost$collections$Iterable*) $tmp243));
goto block3;
block3:;
ITable* $tmp248 = $tmp247->$class->itable;
while ($tmp248->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp248 = $tmp248->next;
}
$fn250 $tmp249 = $tmp248->methods[0];
frost$core$Bit $tmp251 = $tmp249($tmp247);
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block5; else goto block4;
block4:;
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
ITable* $tmp253 = $tmp247->$class->itable;
while ($tmp253->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp253 = $tmp253->next;
}
$fn255 $tmp254 = $tmp253->methods[1];
frost$core$Object* $tmp256 = $tmp254($tmp247);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Annotations$Expression*) $tmp256)));
org$frostlang$frostc$Annotations$Expression* $tmp257 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) $tmp256);
// line 138
org$frostlang$frostc$Annotations$Expression* $tmp258 = *(&local0);
frost$core$Int64* $tmp259 = &$tmp258->$rawValue;
frost$core$Int64 $tmp260 = *$tmp259;
frost$core$Int64 $tmp261 = (frost$core$Int64) {4};
frost$core$Bit $tmp262 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp260, $tmp261);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block7; else goto block6;
block7:;
frost$core$String** $tmp264 = (frost$core$String**) ($tmp258->$data + 0);
frost$core$String* $tmp265 = *$tmp264;
org$frostlang$frostc$ASTNode** $tmp266 = (org$frostlang$frostc$ASTNode**) ($tmp258->$data + 8);
org$frostlang$frostc$ASTNode* $tmp267 = *$tmp266;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
org$frostlang$frostc$ASTNode* $tmp268 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local1) = $tmp267;
// line 140
org$frostlang$frostc$ASTNode* $tmp269 = *(&local1);
frost$core$Int64* $tmp270 = &$tmp269->$rawValue;
frost$core$Int64 $tmp271 = *$tmp270;
frost$core$Int64 $tmp272 = (frost$core$Int64) {25};
frost$core$Bit $tmp273 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp271, $tmp272);
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Position* $tmp275 = (org$frostlang$frostc$Position*) ($tmp269->$data + 0);
org$frostlang$frostc$Position $tmp276 = *$tmp275;
frost$core$UInt64* $tmp277 = (frost$core$UInt64*) ($tmp269->$data + 16);
frost$core$UInt64 $tmp278 = *$tmp277;
*(&local2) = $tmp278;
// line 142
frost$core$UInt64 $tmp279 = *(&local2);
frost$core$Int64 $tmp280 = frost$core$UInt64$get_asInt64$R$frost$core$Int64($tmp279);
org$frostlang$frostc$ASTNode* $tmp281 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp256);
org$frostlang$frostc$Annotations$Expression* $tmp282 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
return $tmp280;
block10:;
frost$core$Int64 $tmp283 = (frost$core$Int64) {48};
frost$core$Bit $tmp284 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp271, $tmp283);
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block11; else goto block8;
block11:;
org$frostlang$frostc$Position* $tmp286 = (org$frostlang$frostc$Position*) ($tmp269->$data + 0);
org$frostlang$frostc$Position $tmp287 = *$tmp286;
org$frostlang$frostc$expression$Unary$Operator* $tmp288 = (org$frostlang$frostc$expression$Unary$Operator*) ($tmp269->$data + 16);
org$frostlang$frostc$expression$Unary$Operator $tmp289 = *$tmp288;
*(&local3) = $tmp289;
org$frostlang$frostc$ASTNode** $tmp290 = (org$frostlang$frostc$ASTNode**) ($tmp269->$data + 24);
org$frostlang$frostc$ASTNode* $tmp291 = *$tmp290;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
org$frostlang$frostc$ASTNode* $tmp292 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
*(&local4) = $tmp291;
// line 145
org$frostlang$frostc$expression$Unary$Operator $tmp293 = *(&local3);
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp294;
$tmp294 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp294->value = $tmp293;
frost$core$Int64 $tmp295 = (frost$core$Int64) {2};
org$frostlang$frostc$expression$Unary$Operator $tmp296 = org$frostlang$frostc$expression$Unary$Operator$init$frost$core$Int64($tmp295);
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp297;
$tmp297 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp297->value = $tmp296;
ITable* $tmp298 = ((frost$core$Equatable*) $tmp294)->$class->itable;
while ($tmp298->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp298 = $tmp298->next;
}
$fn300 $tmp299 = $tmp298->methods[0];
frost$core$Bit $tmp301 = $tmp299(((frost$core$Equatable*) $tmp294), ((frost$core$Equatable*) $tmp297));
bool $tmp302 = $tmp301.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp297)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp294)));
if ($tmp302) goto block12; else goto block13;
block12:;
// line 146
org$frostlang$frostc$ASTNode* $tmp303 = *(&local4);
frost$core$Int64* $tmp304 = &$tmp303->$rawValue;
frost$core$Int64 $tmp305 = *$tmp304;
frost$core$Int64 $tmp306 = (frost$core$Int64) {25};
frost$core$Bit $tmp307 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp305, $tmp306);
bool $tmp308 = $tmp307.value;
if ($tmp308) goto block15; else goto block14;
block15:;
org$frostlang$frostc$Position* $tmp309 = (org$frostlang$frostc$Position*) ($tmp303->$data + 0);
org$frostlang$frostc$Position $tmp310 = *$tmp309;
frost$core$UInt64* $tmp311 = (frost$core$UInt64*) ($tmp303->$data + 16);
frost$core$UInt64 $tmp312 = *$tmp311;
*(&local5) = $tmp312;
// line 148
frost$core$UInt64 $tmp313 = *(&local5);
frost$core$Int64 $tmp314 = frost$core$UInt64$get_asInt64$R$frost$core$Int64($tmp313);
frost$core$Int64 $tmp315 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp314);
org$frostlang$frostc$ASTNode* $tmp316 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp317 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp256);
org$frostlang$frostc$Annotations$Expression* $tmp318 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
return $tmp315;
block14:;
goto block13;
block13:;
org$frostlang$frostc$ASTNode* $tmp319 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block8:;
org$frostlang$frostc$ASTNode* $tmp320 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block6:;
frost$core$Frost$unref$frost$core$Object$Q($tmp256);
org$frostlang$frostc$Annotations$Expression* $tmp321 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
goto block2;
block2:;
// line 158
frost$core$Int64 $tmp322 = (frost$core$Int64) {0};
return $tmp322;

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodDecl$get_type$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodDecl* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local1 = NULL;
org$frostlang$frostc$Type$Kind local2;
// line 162
frost$collections$Array* $tmp323 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array** $tmp324 = &param0->parameters;
frost$collections$Array* $tmp325 = *$tmp324;
ITable* $tmp326 = ((frost$collections$CollectionView*) $tmp325)->$class->itable;
while ($tmp326->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp326 = $tmp326->next;
}
$fn328 $tmp327 = $tmp326->methods[0];
frost$core$Int64 $tmp329 = $tmp327(((frost$collections$CollectionView*) $tmp325));
frost$collections$Array$init$frost$core$Int64($tmp323, $tmp329);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
frost$collections$Array* $tmp330 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
*(&local0) = $tmp323;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
// line 163
frost$collections$Array** $tmp331 = &param0->parameters;
frost$collections$Array* $tmp332 = *$tmp331;
ITable* $tmp333 = ((frost$collections$Iterable*) $tmp332)->$class->itable;
while ($tmp333->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp333 = $tmp333->next;
}
$fn335 $tmp334 = $tmp333->methods[0];
frost$collections$Iterator* $tmp336 = $tmp334(((frost$collections$Iterable*) $tmp332));
goto block1;
block1:;
ITable* $tmp337 = $tmp336->$class->itable;
while ($tmp337->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp337 = $tmp337->next;
}
$fn339 $tmp338 = $tmp337->methods[0];
frost$core$Bit $tmp340 = $tmp338($tmp336);
bool $tmp341 = $tmp340.value;
if ($tmp341) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp342 = $tmp336->$class->itable;
while ($tmp342->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp342 = $tmp342->next;
}
$fn344 $tmp343 = $tmp342->methods[1];
frost$core$Object* $tmp345 = $tmp343($tmp336);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp345)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp346 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
*(&local1) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp345);
// line 164
frost$collections$Array* $tmp347 = *(&local0);
org$frostlang$frostc$MethodDecl$Parameter* $tmp348 = *(&local1);
org$frostlang$frostc$Type** $tmp349 = &$tmp348->type;
org$frostlang$frostc$Type* $tmp350 = *$tmp349;
frost$collections$Array$add$frost$collections$Array$T($tmp347, ((frost$core$Object*) $tmp350));
frost$core$Frost$unref$frost$core$Object$Q($tmp345);
org$frostlang$frostc$MethodDecl$Parameter* $tmp351 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
*(&local1) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
// line 166
// line 167
org$frostlang$frostc$MethodDecl$Kind* $tmp352 = &param0->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp353 = *$tmp352;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp354;
$tmp354 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp354->value = $tmp353;
frost$core$Int64 $tmp355 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp356 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp355);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp357;
$tmp357 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp357->value = $tmp356;
ITable* $tmp358 = ((frost$core$Equatable*) $tmp354)->$class->itable;
while ($tmp358->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp358 = $tmp358->next;
}
$fn360 $tmp359 = $tmp358->methods[0];
frost$core$Bit $tmp361 = $tmp359(((frost$core$Equatable*) $tmp354), ((frost$core$Equatable*) $tmp357));
bool $tmp362 = $tmp361.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp357)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp354)));
if ($tmp362) goto block4; else goto block6;
block4:;
// line 168
frost$core$Int64 $tmp363 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp364 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp363);
*(&local2) = $tmp364;
goto block5;
block6:;
// line 1
// line 171
frost$core$Int64 $tmp365 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp366 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp365);
*(&local2) = $tmp366;
goto block5;
block5:;
// line 173
org$frostlang$frostc$Position* $tmp367 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp368 = *$tmp367;
org$frostlang$frostc$Type$Kind $tmp369 = *(&local2);
frost$collections$Array* $tmp370 = *(&local0);
org$frostlang$frostc$Type** $tmp371 = &param0->returnType;
org$frostlang$frostc$Type* $tmp372 = *$tmp371;
frost$core$Int64 $tmp373 = org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int64(param0);
org$frostlang$frostc$Type* $tmp374 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp368, $tmp369, ((frost$collections$ListView*) $tmp370), $tmp372, $tmp373);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
frost$collections$Array* $tmp375 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp374;

}
frost$core$String* org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(org$frostlang$frostc$MethodDecl* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
// line 177
frost$core$MutableString* $tmp376 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String** $tmp377 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp378 = *$tmp377;
frost$core$String* $tmp379 = frost$core$String$get_asString$R$frost$core$String($tmp378);
frost$core$String* $tmp380 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp379, &$s381);
frost$core$MutableString$init$frost$core$String($tmp376, $tmp380);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$core$MutableString* $tmp382 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
*(&local0) = $tmp376;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
// line 178
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s383));
frost$core$String* $tmp384 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
*(&local1) = &$s385;
// line 179
frost$collections$Array** $tmp386 = &param0->parameters;
frost$collections$Array* $tmp387 = *$tmp386;
ITable* $tmp388 = ((frost$collections$Iterable*) $tmp387)->$class->itable;
while ($tmp388->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp388 = $tmp388->next;
}
$fn390 $tmp389 = $tmp388->methods[0];
frost$collections$Iterator* $tmp391 = $tmp389(((frost$collections$Iterable*) $tmp387));
goto block1;
block1:;
ITable* $tmp392 = $tmp391->$class->itable;
while ($tmp392->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp392 = $tmp392->next;
}
$fn394 $tmp393 = $tmp392->methods[0];
frost$core$Bit $tmp395 = $tmp393($tmp391);
bool $tmp396 = $tmp395.value;
if ($tmp396) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp397 = $tmp391->$class->itable;
while ($tmp397->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp397 = $tmp397->next;
}
$fn399 $tmp398 = $tmp397->methods[1];
frost$core$Object* $tmp400 = $tmp398($tmp391);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp400)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp401 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp400);
// line 180
frost$core$MutableString* $tmp402 = *(&local0);
frost$core$String* $tmp403 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp402, $tmp403);
// line 181
frost$core$MutableString* $tmp404 = *(&local0);
org$frostlang$frostc$MethodDecl$Parameter* $tmp405 = *(&local2);
frost$core$MutableString$append$frost$core$Object($tmp404, ((frost$core$Object*) $tmp405));
// line 182
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s406));
frost$core$String* $tmp407 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
*(&local1) = &$s408;
frost$core$Frost$unref$frost$core$Object$Q($tmp400);
org$frostlang$frostc$MethodDecl$Parameter* $tmp409 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
// line 184
frost$core$MutableString* $tmp410 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp410, &$s411);
// line 185
org$frostlang$frostc$Type** $tmp412 = &param0->returnType;
org$frostlang$frostc$Type* $tmp413 = *$tmp412;
org$frostlang$frostc$Type* $tmp414 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp415 = ((frost$core$Equatable*) $tmp413)->$class->itable;
while ($tmp415->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp415 = $tmp415->next;
}
$fn417 $tmp416 = $tmp415->methods[1];
frost$core$Bit $tmp418 = $tmp416(((frost$core$Equatable*) $tmp413), ((frost$core$Equatable*) $tmp414));
bool $tmp419 = $tmp418.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
if ($tmp419) goto block4; else goto block5;
block4:;
// line 186
frost$core$MutableString* $tmp420 = *(&local0);
org$frostlang$frostc$Type** $tmp421 = &param0->returnType;
org$frostlang$frostc$Type* $tmp422 = *$tmp421;
frost$core$String* $tmp423 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s424, ((frost$core$Object*) $tmp422));
frost$core$String* $tmp425 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp423, &$s426);
frost$core$MutableString$append$frost$core$String($tmp420, $tmp425);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
goto block5;
block5:;
// line 188
frost$core$MutableString* $tmp427 = *(&local0);
frost$core$String* $tmp428 = frost$core$MutableString$finish$R$frost$core$String($tmp427);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
frost$core$String* $tmp429 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp430 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp428;

}
frost$core$String* org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String(org$frostlang$frostc$MethodDecl* param0) {

// line 192
org$frostlang$frostc$MethodDecl$Kind* $tmp431 = &param0->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp432 = *$tmp431;
frost$core$Int64 $tmp433 = $tmp432.$rawValue;
frost$core$Int64 $tmp434 = (frost$core$Int64) {0};
frost$core$Bit $tmp435 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp433, $tmp434);
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block2; else goto block3;
block2:;
// line 194
frost$core$Weak** $tmp437 = &param0->owner;
frost$core$Weak* $tmp438 = *$tmp437;
frost$core$Object* $tmp439 = frost$core$Weak$get$R$frost$core$Weak$T($tmp438);
frost$core$String** $tmp440 = &((org$frostlang$frostc$ClassDecl*) $tmp439)->name;
frost$core$String* $tmp441 = *$tmp440;
frost$core$String* $tmp442 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s443, $tmp441);
frost$core$String* $tmp444 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp442, &$s445);
frost$core$String* $tmp446 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp447 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp444, $tmp446);
frost$core$String* $tmp448 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp447, &$s449);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
frost$core$Frost$unref$frost$core$Object$Q($tmp439);
return $tmp448;
block3:;
frost$core$Int64 $tmp450 = (frost$core$Int64) {1};
frost$core$Bit $tmp451 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp433, $tmp450);
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block4; else goto block5;
block4:;
// line 197
frost$core$Weak** $tmp453 = &param0->owner;
frost$core$Weak* $tmp454 = *$tmp453;
frost$core$Object* $tmp455 = frost$core$Weak$get$R$frost$core$Weak$T($tmp454);
frost$core$String** $tmp456 = &((org$frostlang$frostc$ClassDecl*) $tmp455)->name;
frost$core$String* $tmp457 = *$tmp456;
frost$core$String* $tmp458 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s459, $tmp457);
frost$core$String* $tmp460 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp458, &$s461);
frost$core$String* $tmp462 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp463 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp460, $tmp462);
frost$core$String* $tmp464 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp463, &$s465);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
frost$core$Frost$unref$frost$core$Object$Q($tmp455);
return $tmp464;
block5:;
frost$core$Int64 $tmp466 = (frost$core$Int64) {2};
frost$core$Bit $tmp467 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp433, $tmp466);
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block6; else goto block1;
block6:;
// line 200
frost$core$Weak** $tmp469 = &param0->owner;
frost$core$Weak* $tmp470 = *$tmp469;
frost$core$Object* $tmp471 = frost$core$Weak$get$R$frost$core$Weak$T($tmp470);
frost$core$String** $tmp472 = &((org$frostlang$frostc$ClassDecl*) $tmp471)->name;
frost$core$String* $tmp473 = *$tmp472;
frost$core$String* $tmp474 = frost$core$String$get_asString$R$frost$core$String($tmp473);
frost$core$String* $tmp475 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp474, &$s476);
frost$core$String* $tmp477 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp478 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp475, $tmp477);
frost$core$String* $tmp479 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp478, &$s480);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
frost$core$Frost$unref$frost$core$Object$Q($tmp471);
return $tmp479;
block1:;
// line 203
frost$core$Int64 $tmp481 = (frost$core$Int64) {203};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s482, $tmp481);
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$MethodDecl$get_asString$R$frost$core$String(org$frostlang$frostc$MethodDecl* param0) {

// line 208
org$frostlang$frostc$FixedArray** $tmp483 = &param0->body;
org$frostlang$frostc$FixedArray* $tmp484 = *$tmp483;
frost$core$Bit $tmp485 = frost$core$Bit$init$builtin_bit($tmp484 != NULL);
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block1; else goto block2;
block1:;
// line 209
org$frostlang$frostc$Annotations** $tmp487 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp488 = *$tmp487;
frost$core$String* $tmp489 = org$frostlang$frostc$Annotations$get_asString$R$frost$core$String($tmp488);
frost$core$String* $tmp490 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp489, &$s491);
frost$core$String* $tmp492 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp493 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp490, $tmp492);
frost$core$String* $tmp494 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp493, &$s495);
org$frostlang$frostc$FixedArray** $tmp496 = &param0->body;
org$frostlang$frostc$FixedArray* $tmp497 = *$tmp496;
frost$core$String* $tmp498 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp494, ((frost$core$Object*) $tmp497));
frost$core$String* $tmp499 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp498, &$s500);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
return $tmp499;
block2:;
// line 211
frost$core$String* $tmp501 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
return $tmp501;

}
void org$frostlang$frostc$MethodDecl$cleanup(org$frostlang$frostc$MethodDecl* param0) {

// line 6
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
frost$core$Weak** $tmp502 = &param0->owner;
frost$core$Weak* $tmp503 = *$tmp502;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$String** $tmp504 = &param0->doccomment;
frost$core$String* $tmp505 = *$tmp504;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
org$frostlang$frostc$Annotations** $tmp506 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp507 = *$tmp506;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
frost$collections$Array** $tmp508 = &param0->genericParameters;
frost$collections$Array* $tmp509 = *$tmp508;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
frost$collections$Array** $tmp510 = &param0->parameters;
frost$collections$Array* $tmp511 = *$tmp510;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
org$frostlang$frostc$Type** $tmp512 = &param0->returnType;
org$frostlang$frostc$Type* $tmp513 = *$tmp512;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
org$frostlang$frostc$FixedArray** $tmp514 = &param0->body;
org$frostlang$frostc$FixedArray* $tmp515 = *$tmp514;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
frost$core$Weak** $tmp516 = &param0->overridden;
frost$core$Weak* $tmp517 = *$tmp516;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
return;

}

