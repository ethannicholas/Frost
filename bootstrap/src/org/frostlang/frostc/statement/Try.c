#include "org/frostlang/frostc/statement/Try.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/AutoScope.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/Variable/Kind.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Compiler/AutoContext.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Stack.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Try$class_type org$frostlang$frostc$statement$Try$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Try$cleanup} };

typedef org$frostlang$frostc$IR$Block$ID (*$fn9)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn14)(org$frostlang$frostc$IR*, frost$core$String*);
typedef frost$core$Int (*$fn47)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn64)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn78)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn93)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn112)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn162)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn168)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$collections$Iterator* (*$fn197)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn201)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn206)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn215)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn226)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn231)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn244)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn248)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn253)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn261)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn272)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn277)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x54\x72\x79", 34, -3160075893431704438, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x79\x20\x66\x61\x69\x6c", 8, -4144140211942277782, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x79\x20\x65\x6e\x64", 7, 3097653119450397847, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };

void org$frostlang$frostc$statement$Try$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$FixedArray* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4) {

org$frostlang$frostc$Compiler$AutoScope* local0 = NULL;
org$frostlang$frostc$IR* local1 = NULL;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$IR$Block$ID local3;
org$frostlang$frostc$Variable* local4 = NULL;
frost$core$String* local5 = NULL;
org$frostlang$frostc$Variable$Kind local6;
org$frostlang$frostc$Variable$Kind local7;
frost$core$Bit local8;
org$frostlang$frostc$Compiler$AutoContext* local9 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local10 = NULL;
org$frostlang$frostc$ASTNode* local11 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local12 = NULL;
org$frostlang$frostc$ASTNode* local13 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:18
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp2 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp2, param0);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
org$frostlang$frostc$Compiler$AutoScope* $tmp3 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
*(&local0) = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:19
org$frostlang$frostc$IR** $tmp4 = &param0->ir;
org$frostlang$frostc$IR* $tmp5 = *$tmp4;
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
org$frostlang$frostc$IR* $tmp6 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
*(&local1) = $tmp5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:20
org$frostlang$frostc$IR* $tmp7 = *(&local1);
$fn9 $tmp8 = ($fn9) $tmp7->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp10 = $tmp8($tmp7, &$s11);
*(&local2) = $tmp10;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:21
org$frostlang$frostc$IR* $tmp12 = *(&local1);
$fn14 $tmp13 = ($fn14) $tmp12->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp15 = $tmp13($tmp12, &$s16);
*(&local3) = $tmp15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:22
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:23
frost$core$Bit $tmp17 = (frost$core$Bit) {param3 != NULL};
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:24
frost$core$Int* $tmp19 = &param3->$rawValue;
frost$core$Int $tmp20 = *$tmp19;
frost$core$Int $tmp21 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Try.frost:25:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp22 = $tmp20.value;
int64_t $tmp23 = $tmp21.value;
bool $tmp24 = $tmp22 == $tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp27 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp28 = *$tmp27;
frost$core$String** $tmp29 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp30 = *$tmp29;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$String* $tmp31 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
*(&local5) = $tmp30;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:26
FROST_ASSERT(88 == sizeof(org$frostlang$frostc$Variable));
org$frostlang$frostc$Variable* $tmp32 = (org$frostlang$frostc$Variable*) frostObjectAlloc(88, (frost$core$Class*) &org$frostlang$frostc$Variable$class);
frost$core$Int $tmp33 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Variable.Kind from Try.frost:26:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int* $tmp34 = &(&local7)->$rawValue;
*$tmp34 = $tmp33;
org$frostlang$frostc$Variable$Kind $tmp35 = *(&local7);
*(&local6) = $tmp35;
org$frostlang$frostc$Variable$Kind $tmp36 = *(&local6);
frost$core$String* $tmp37 = *(&local5);
org$frostlang$frostc$Type** $tmp38 = &param0->ERROR_TYPE;
org$frostlang$frostc$Type* $tmp39 = *$tmp38;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Variable$Storage));
org$frostlang$frostc$Variable$Storage* $tmp40 = (org$frostlang$frostc$Variable$Storage*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Variable$Storage$class);
frost$core$Int $tmp41 = (frost$core$Int) {0u};
org$frostlang$frostc$IR* $tmp42 = *(&local1);
frost$collections$Array** $tmp43 = &$tmp42->locals;
frost$collections$Array* $tmp44 = *$tmp43;
ITable* $tmp45 = ((frost$collections$CollectionView*) $tmp44)->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp45 = $tmp45->next;
}
$fn47 $tmp46 = $tmp45->methods[0];
frost$core$Int $tmp48 = $tmp46(((frost$collections$CollectionView*) $tmp44));
org$frostlang$frostc$Variable$Storage$init$frost$core$Int$frost$core$Int($tmp40, $tmp41, $tmp48);
org$frostlang$frostc$Variable$init$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Variable$Storage($tmp32, param1, $tmp36, $tmp37, $tmp39, $tmp40);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
org$frostlang$frostc$Variable* $tmp49 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
*(&local4) = $tmp32;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:28
org$frostlang$frostc$Variable* $tmp50 = *(&local4);
frost$collections$Stack** $tmp51 = &param0->currentMethod;
frost$collections$Stack* $tmp52 = *$tmp51;
frost$core$Int $tmp53 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Try.frost:28:61
frost$core$Int $tmp54 = (frost$core$Int) {0u};
int64_t $tmp55 = $tmp53.value;
int64_t $tmp56 = $tmp54.value;
bool $tmp57 = $tmp55 >= $tmp56;
frost$core$Bit $tmp58 = (frost$core$Bit) {$tmp57};
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block12; else goto block11;
block12:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp60 = &$tmp52->contents;
frost$collections$Array* $tmp61 = *$tmp60;
ITable* $tmp62 = ((frost$collections$CollectionView*) $tmp61)->$class->itable;
while ($tmp62->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp62 = $tmp62->next;
}
$fn64 $tmp63 = $tmp62->methods[0];
frost$core$Int $tmp65 = $tmp63(((frost$collections$CollectionView*) $tmp61));
int64_t $tmp66 = $tmp53.value;
int64_t $tmp67 = $tmp65.value;
bool $tmp68 = $tmp66 < $tmp67;
frost$core$Bit $tmp69 = (frost$core$Bit) {$tmp68};
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block10; else goto block11;
block11:;
frost$core$Int $tmp71 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s72, $tmp71, &$s73);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp74 = &$tmp52->contents;
frost$collections$Array* $tmp75 = *$tmp74;
ITable* $tmp76 = ((frost$collections$CollectionView*) $tmp75)->$class->itable;
while ($tmp76->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp76 = $tmp76->next;
}
$fn78 $tmp77 = $tmp76->methods[0];
frost$core$Int $tmp79 = $tmp77(((frost$collections$CollectionView*) $tmp75));
int64_t $tmp80 = $tmp79.value;
int64_t $tmp81 = $tmp53.value;
bool $tmp82 = $tmp80 > $tmp81;
frost$core$Bit $tmp83 = (frost$core$Bit) {$tmp82};
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block14; else goto block15;
block15:;
frost$core$Int $tmp85 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s86, $tmp85);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp87 = &$tmp52->contents;
frost$collections$Array* $tmp88 = *$tmp87;
frost$collections$Array** $tmp89 = &$tmp52->contents;
frost$collections$Array* $tmp90 = *$tmp89;
ITable* $tmp91 = ((frost$collections$CollectionView*) $tmp90)->$class->itable;
while ($tmp91->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp91 = $tmp91->next;
}
$fn93 $tmp92 = $tmp91->methods[0];
frost$core$Int $tmp94 = $tmp92(((frost$collections$CollectionView*) $tmp90));
frost$core$Int $tmp95 = (frost$core$Int) {1u};
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95.value;
int64_t $tmp98 = $tmp96 - $tmp97;
frost$core$Int $tmp99 = (frost$core$Int) {$tmp98};
int64_t $tmp100 = $tmp99.value;
int64_t $tmp101 = $tmp53.value;
int64_t $tmp102 = $tmp100 - $tmp101;
frost$core$Int $tmp103 = (frost$core$Int) {$tmp102};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp104 = (frost$core$Int) {0u};
int64_t $tmp105 = $tmp103.value;
int64_t $tmp106 = $tmp104.value;
bool $tmp107 = $tmp105 >= $tmp106;
frost$core$Bit $tmp108 = (frost$core$Bit) {$tmp107};
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block19; else goto block18;
block19:;
ITable* $tmp110 = ((frost$collections$CollectionView*) $tmp88)->$class->itable;
while ($tmp110->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp110 = $tmp110->next;
}
$fn112 $tmp111 = $tmp110->methods[0];
frost$core$Int $tmp113 = $tmp111(((frost$collections$CollectionView*) $tmp88));
int64_t $tmp114 = $tmp103.value;
int64_t $tmp115 = $tmp113.value;
bool $tmp116 = $tmp114 < $tmp115;
frost$core$Bit $tmp117 = (frost$core$Bit) {$tmp116};
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block17; else goto block18;
block18:;
frost$core$Int $tmp119 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s120, $tmp119, &$s121);
abort(); // unreachable
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp122 = &$tmp88->data;
frost$core$Object** $tmp123 = *$tmp122;
frost$core$Int64 $tmp124 = frost$core$Int64$init$frost$core$Int($tmp103);
int64_t $tmp125 = $tmp124.value;
frost$core$Object* $tmp126 = $tmp123[$tmp125];
frost$core$Frost$ref$frost$core$Object$Q($tmp126);
frost$core$Frost$ref$frost$core$Object$Q($tmp126);
frost$core$Frost$unref$frost$core$Object$Q($tmp126);
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp127 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp127, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp126)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$Weak** $tmp128 = &$tmp50->owner;
frost$core$Weak* $tmp129 = *$tmp128;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$core$Weak** $tmp130 = &$tmp50->owner;
*$tmp130 = $tmp127;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$Frost$unref$frost$core$Object$Q($tmp126);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:29
org$frostlang$frostc$Variable* $tmp131 = *(&local4);
org$frostlang$frostc$Type** $tmp132 = &$tmp131->type;
org$frostlang$frostc$Type* $tmp133 = *$tmp132;
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Try.frost:29:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:736
frost$core$Bit $tmp134 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp133);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:736:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp135 = $tmp134.value;
bool $tmp136 = !$tmp135;
frost$core$Bit $tmp137 = (frost$core$Bit) {$tmp136};
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:737
frost$core$Bit $tmp139 = (frost$core$Bit) {false};
*(&local8) = $tmp139;
goto block22;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:739
frost$core$Bit $tmp140 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp133);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:739:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp141 = $tmp140.value;
bool $tmp142 = !$tmp141;
frost$core$Bit $tmp143 = (frost$core$Bit) {$tmp142};
*(&local8) = $tmp143;
goto block22;
block22:;
frost$core$Bit $tmp144 = *(&local8);
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:30
org$frostlang$frostc$IR* $tmp146 = *(&local1);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp147 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp148 = (frost$core$Int) {27u};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp149 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp150 = (frost$core$Int) {4u};
org$frostlang$frostc$Variable* $tmp151 = *(&local4);
org$frostlang$frostc$Type** $tmp152 = &$tmp151->type;
org$frostlang$frostc$Type* $tmp153 = *$tmp152;
org$frostlang$frostc$Type* $tmp154 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp153);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type($tmp149, $tmp150, $tmp154);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp155 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp156 = (frost$core$Int) {2u};
org$frostlang$frostc$IR* $tmp157 = *(&local1);
frost$collections$Array** $tmp158 = &$tmp157->locals;
frost$collections$Array* $tmp159 = *$tmp158;
ITable* $tmp160 = ((frost$collections$CollectionView*) $tmp159)->$class->itable;
while ($tmp160->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp160 = $tmp160->next;
}
$fn162 $tmp161 = $tmp160->methods[0];
frost$core$Int $tmp163 = $tmp161(((frost$collections$CollectionView*) $tmp159));
org$frostlang$frostc$Variable* $tmp164 = *(&local4);
org$frostlang$frostc$Type** $tmp165 = &$tmp164->type;
org$frostlang$frostc$Type* $tmp166 = *$tmp165;
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp155, $tmp156, $tmp163, $tmp166);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp147, $tmp148, param1, $tmp149, $tmp155);
$fn168 $tmp167 = ($fn168) $tmp146->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp169 = $tmp167($tmp146, $tmp147);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:32
frost$collections$Stack** $tmp170 = &param0->enclosingContexts;
frost$collections$Stack* $tmp171 = *$tmp170;
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp172 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int $tmp173 = (frost$core$Int) {3u};
org$frostlang$frostc$Variable* $tmp174 = *(&local4);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$org$frostlang$frostc$Variable($tmp172, $tmp173, $tmp174);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Try.frost:32:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp175 = &$tmp171->contents;
frost$collections$Array* $tmp176 = *$tmp175;
frost$collections$Array$add$frost$collections$Array$T($tmp176, ((frost$core$Object*) $tmp172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:34
org$frostlang$frostc$IR* $tmp177 = *(&local1);
frost$collections$Array** $tmp178 = &$tmp177->locals;
frost$collections$Array* $tmp179 = *$tmp178;
org$frostlang$frostc$Variable* $tmp180 = *(&local4);
org$frostlang$frostc$Type** $tmp181 = &$tmp180->type;
org$frostlang$frostc$Type* $tmp182 = *$tmp181;
frost$collections$Array$add$frost$collections$Array$T($tmp179, ((frost$core$Object*) $tmp182));
frost$core$String* $tmp183 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local5) = ((frost$core$String*) NULL);
goto block2;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:37
frost$core$Int $tmp184 = (frost$core$Int) {37u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s185, $tmp184);
abort(); // unreachable
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:42
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Variable*) NULL)));
org$frostlang$frostc$Variable* $tmp186 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
goto block2;
block2:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:45
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp187 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp188 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int $tmp189 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Block$ID $tmp190 = *(&local2);
org$frostlang$frostc$Variable* $tmp191 = *(&local4);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$org$frostlang$frostc$IR$Block$ID$Q$org$frostlang$frostc$Variable$Q($tmp188, $tmp189, ((org$frostlang$frostc$IR$Block$ID$nullable) { $tmp190, true }), $tmp191);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp187, param0, $tmp188);
*(&local9) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
org$frostlang$frostc$Compiler$AutoContext* $tmp192 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
*(&local9) = $tmp187;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:47
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp193 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp193, param0);
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
org$frostlang$frostc$Compiler$AutoScope* $tmp194 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
*(&local10) = $tmp193;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:48
ITable* $tmp195 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp195->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp195 = $tmp195->next;
}
$fn197 $tmp196 = $tmp195->methods[0];
frost$collections$Iterator* $tmp198 = $tmp196(((frost$collections$Iterable*) param2));
goto block28;
block28:;
ITable* $tmp199 = $tmp198->$class->itable;
while ($tmp199->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp199 = $tmp199->next;
}
$fn201 $tmp200 = $tmp199->methods[0];
frost$core$Bit $tmp202 = $tmp200($tmp198);
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block30; else goto block29;
block29:;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp204 = $tmp198->$class->itable;
while ($tmp204->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp204 = $tmp204->next;
}
$fn206 $tmp205 = $tmp204->methods[1];
frost$core$Object* $tmp207 = $tmp205($tmp198);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp207)));
org$frostlang$frostc$ASTNode* $tmp208 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
*(&local11) = ((org$frostlang$frostc$ASTNode*) $tmp207);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:49
org$frostlang$frostc$ASTNode* $tmp209 = *(&local11);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp209);
frost$core$Frost$unref$frost$core$Object$Q($tmp207);
org$frostlang$frostc$ASTNode* $tmp210 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block28;
block30:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
org$frostlang$frostc$Compiler$AutoScope* $tmp211 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp212 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:52
org$frostlang$frostc$IR* $tmp213 = *(&local1);
$fn215 $tmp214 = ($fn215) $tmp213->$class->vtable[5];
frost$core$Bit $tmp216 = $tmp214($tmp213);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Try.frost:52:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp217 = $tmp216.value;
bool $tmp218 = !$tmp217;
frost$core$Bit $tmp219 = (frost$core$Bit) {$tmp218};
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:53
org$frostlang$frostc$IR* $tmp221 = *(&local1);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp222 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp223 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp224 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp222, $tmp223, param1, $tmp224);
$fn226 $tmp225 = ($fn226) $tmp221->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp227 = $tmp225($tmp221, $tmp222);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
goto block32;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:55
org$frostlang$frostc$IR* $tmp228 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp229 = *(&local2);
$fn231 $tmp230 = ($fn231) $tmp228->$class->vtable[4];
$tmp230($tmp228, $tmp229);
// <no location>
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:58
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp232 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp232, param0);
*(&local12) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
org$frostlang$frostc$Compiler$AutoScope* $tmp233 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
*(&local12) = $tmp232;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:59
org$frostlang$frostc$Variable* $tmp234 = *(&local4);
frost$core$Bit $tmp235 = (frost$core$Bit) {$tmp234 != NULL};
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:60
org$frostlang$frostc$SymbolTable** $tmp237 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp238 = *$tmp237;
org$frostlang$frostc$Variable* $tmp239 = *(&local4);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Try.frost:60:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp240 = &((org$frostlang$frostc$Symbol*) $tmp239)->name;
frost$core$String* $tmp241 = *$tmp240;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp238, ((org$frostlang$frostc$Symbol*) $tmp239), $tmp241);
goto block35;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:62
ITable* $tmp242 = ((frost$collections$Iterable*) param4)->$class->itable;
while ($tmp242->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp242 = $tmp242->next;
}
$fn244 $tmp243 = $tmp242->methods[0];
frost$collections$Iterator* $tmp245 = $tmp243(((frost$collections$Iterable*) param4));
goto block37;
block37:;
ITable* $tmp246 = $tmp245->$class->itable;
while ($tmp246->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp246 = $tmp246->next;
}
$fn248 $tmp247 = $tmp246->methods[0];
frost$core$Bit $tmp249 = $tmp247($tmp245);
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block39; else goto block38;
block38:;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp251 = $tmp245->$class->itable;
while ($tmp251->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp251 = $tmp251->next;
}
$fn253 $tmp252 = $tmp251->methods[1];
frost$core$Object* $tmp254 = $tmp252($tmp245);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp254)));
org$frostlang$frostc$ASTNode* $tmp255 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
*(&local13) = ((org$frostlang$frostc$ASTNode*) $tmp254);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:63
org$frostlang$frostc$ASTNode* $tmp256 = *(&local13);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp256);
frost$core$Frost$unref$frost$core$Object$Q($tmp254);
org$frostlang$frostc$ASTNode* $tmp257 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block37;
block39:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
org$frostlang$frostc$Compiler$AutoScope* $tmp258 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local12) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:66
org$frostlang$frostc$IR* $tmp259 = *(&local1);
$fn261 $tmp260 = ($fn261) $tmp259->$class->vtable[5];
frost$core$Bit $tmp262 = $tmp260($tmp259);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Try.frost:66:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp263 = $tmp262.value;
bool $tmp264 = !$tmp263;
frost$core$Bit $tmp265 = (frost$core$Bit) {$tmp264};
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:67
org$frostlang$frostc$IR* $tmp267 = *(&local1);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp268 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp269 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp270 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp268, $tmp269, param1, $tmp270);
$fn272 $tmp271 = ($fn272) $tmp267->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp273 = $tmp271($tmp267, $tmp268);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
goto block41;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:70
org$frostlang$frostc$IR* $tmp274 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp275 = *(&local3);
$fn277 $tmp276 = ($fn277) $tmp274->$class->vtable[4];
$tmp276($tmp274, $tmp275);
org$frostlang$frostc$Variable* $tmp278 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
org$frostlang$frostc$IR* $tmp279 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp280 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return;

}
void org$frostlang$frostc$statement$Try$init(org$frostlang$frostc$statement$Try* param0) {

return;

}
void org$frostlang$frostc$statement$Try$cleanup(org$frostlang$frostc$statement$Try* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:14
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

