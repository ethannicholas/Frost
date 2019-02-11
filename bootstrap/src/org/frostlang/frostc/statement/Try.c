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
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Stack.h"
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
typedef frost$core$Int64 (*$fn47)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn64)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn78)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn93)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn112)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn161)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn167)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$collections$Iterator* (*$fn196)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn200)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn205)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn214)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn225)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn230)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn243)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn247)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn252)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn260)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn271)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn276)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x54\x72\x79", 34, -8546630798215162542, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x79\x20\x66\x61\x69\x6c", 8, 23387625596074996, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x79\x20\x65\x6e\x64", 7, 231560649457195, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, 2015636186561573124, NULL };

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
frost$core$Bit $tmp17 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:24
frost$core$Int64* $tmp19 = &param3->$rawValue;
frost$core$Int64 $tmp20 = *$tmp19;
frost$core$Int64 $tmp21 = (frost$core$Int64) {22};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Try.frost:25:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp22 = $tmp20.value;
int64_t $tmp23 = $tmp21.value;
bool $tmp24 = $tmp22 == $tmp23;
frost$core$Bit $tmp25 = frost$core$Bit$init$builtin_bit($tmp24);
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
frost$core$Int64 $tmp33 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Variable.Kind from Try.frost:26:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int64* $tmp34 = &(&local7)->$rawValue;
*$tmp34 = $tmp33;
org$frostlang$frostc$Variable$Kind $tmp35 = *(&local7);
*(&local6) = $tmp35;
org$frostlang$frostc$Variable$Kind $tmp36 = *(&local6);
frost$core$String* $tmp37 = *(&local5);
org$frostlang$frostc$Type** $tmp38 = &param0->ERROR_TYPE;
org$frostlang$frostc$Type* $tmp39 = *$tmp38;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Variable$Storage));
org$frostlang$frostc$Variable$Storage* $tmp40 = (org$frostlang$frostc$Variable$Storage*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Variable$Storage$class);
frost$core$Int64 $tmp41 = (frost$core$Int64) {0};
org$frostlang$frostc$IR* $tmp42 = *(&local1);
frost$collections$Array** $tmp43 = &$tmp42->locals;
frost$collections$Array* $tmp44 = *$tmp43;
ITable* $tmp45 = ((frost$collections$CollectionView*) $tmp44)->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp45 = $tmp45->next;
}
$fn47 $tmp46 = $tmp45->methods[0];
frost$core$Int64 $tmp48 = $tmp46(((frost$collections$CollectionView*) $tmp44));
org$frostlang$frostc$Variable$Storage$init$frost$core$Int64$frost$core$Int64($tmp40, $tmp41, $tmp48);
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
frost$core$Int64 $tmp53 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Try.frost:28:61
frost$core$Int64 $tmp54 = (frost$core$Int64) {0};
int64_t $tmp55 = $tmp53.value;
int64_t $tmp56 = $tmp54.value;
bool $tmp57 = $tmp55 >= $tmp56;
frost$core$Bit $tmp58 = (frost$core$Bit) {$tmp57};
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block12; else goto block11;
block12:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp60 = &$tmp52->contents;
frost$collections$Array* $tmp61 = *$tmp60;
ITable* $tmp62 = ((frost$collections$CollectionView*) $tmp61)->$class->itable;
while ($tmp62->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp62 = $tmp62->next;
}
$fn64 $tmp63 = $tmp62->methods[0];
frost$core$Int64 $tmp65 = $tmp63(((frost$collections$CollectionView*) $tmp61));
int64_t $tmp66 = $tmp53.value;
int64_t $tmp67 = $tmp65.value;
bool $tmp68 = $tmp66 < $tmp67;
frost$core$Bit $tmp69 = (frost$core$Bit) {$tmp68};
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp71 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s72, $tmp71, &$s73);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp74 = &$tmp52->contents;
frost$collections$Array* $tmp75 = *$tmp74;
ITable* $tmp76 = ((frost$collections$CollectionView*) $tmp75)->$class->itable;
while ($tmp76->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp76 = $tmp76->next;
}
$fn78 $tmp77 = $tmp76->methods[0];
frost$core$Int64 $tmp79 = $tmp77(((frost$collections$CollectionView*) $tmp75));
int64_t $tmp80 = $tmp79.value;
int64_t $tmp81 = $tmp53.value;
bool $tmp82 = $tmp80 > $tmp81;
frost$core$Bit $tmp83 = (frost$core$Bit) {$tmp82};
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp85 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s86, $tmp85);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp87 = &$tmp52->contents;
frost$collections$Array* $tmp88 = *$tmp87;
frost$collections$Array** $tmp89 = &$tmp52->contents;
frost$collections$Array* $tmp90 = *$tmp89;
ITable* $tmp91 = ((frost$collections$CollectionView*) $tmp90)->$class->itable;
while ($tmp91->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp91 = $tmp91->next;
}
$fn93 $tmp92 = $tmp91->methods[0];
frost$core$Int64 $tmp94 = $tmp92(((frost$collections$CollectionView*) $tmp90));
frost$core$Int64 $tmp95 = (frost$core$Int64) {1};
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95.value;
int64_t $tmp98 = $tmp96 - $tmp97;
frost$core$Int64 $tmp99 = (frost$core$Int64) {$tmp98};
int64_t $tmp100 = $tmp99.value;
int64_t $tmp101 = $tmp53.value;
int64_t $tmp102 = $tmp100 - $tmp101;
frost$core$Int64 $tmp103 = (frost$core$Int64) {$tmp102};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp104 = (frost$core$Int64) {0};
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
frost$core$Int64 $tmp113 = $tmp111(((frost$collections$CollectionView*) $tmp88));
int64_t $tmp114 = $tmp103.value;
int64_t $tmp115 = $tmp113.value;
bool $tmp116 = $tmp114 < $tmp115;
frost$core$Bit $tmp117 = (frost$core$Bit) {$tmp116};
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp119 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s120, $tmp119, &$s121);
abort(); // unreachable
block17:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp122 = &$tmp88->data;
frost$core$Object** $tmp123 = *$tmp122;
int64_t $tmp124 = $tmp103.value;
frost$core$Object* $tmp125 = $tmp123[$tmp124];
frost$core$Frost$ref$frost$core$Object$Q($tmp125);
frost$core$Frost$ref$frost$core$Object$Q($tmp125);
frost$core$Frost$unref$frost$core$Object$Q($tmp125);
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp126 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp126, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp125)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$Weak** $tmp127 = &$tmp50->owner;
frost$core$Weak* $tmp128 = *$tmp127;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$Weak** $tmp129 = &$tmp50->owner;
*$tmp129 = $tmp126;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$Frost$unref$frost$core$Object$Q($tmp125);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:29
org$frostlang$frostc$Variable* $tmp130 = *(&local4);
org$frostlang$frostc$Type** $tmp131 = &$tmp130->type;
org$frostlang$frostc$Type* $tmp132 = *$tmp131;
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Try.frost:29:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:722
frost$core$Bit $tmp133 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp132);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:722:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp134 = $tmp133.value;
bool $tmp135 = !$tmp134;
frost$core$Bit $tmp136 = (frost$core$Bit) {$tmp135};
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:723
frost$core$Bit $tmp138 = frost$core$Bit$init$builtin_bit(false);
*(&local8) = $tmp138;
goto block22;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:725
frost$core$Bit $tmp139 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp132);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:725:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp140 = $tmp139.value;
bool $tmp141 = !$tmp140;
frost$core$Bit $tmp142 = (frost$core$Bit) {$tmp141};
*(&local8) = $tmp142;
goto block22;
block22:;
frost$core$Bit $tmp143 = *(&local8);
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:30
org$frostlang$frostc$IR* $tmp145 = *(&local1);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp146 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp147 = (frost$core$Int64) {27};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp148 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp149 = (frost$core$Int64) {4};
org$frostlang$frostc$Variable* $tmp150 = *(&local4);
org$frostlang$frostc$Type** $tmp151 = &$tmp150->type;
org$frostlang$frostc$Type* $tmp152 = *$tmp151;
org$frostlang$frostc$Type* $tmp153 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp152);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp148, $tmp149, $tmp153);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp154 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp155 = (frost$core$Int64) {2};
org$frostlang$frostc$IR* $tmp156 = *(&local1);
frost$collections$Array** $tmp157 = &$tmp156->locals;
frost$collections$Array* $tmp158 = *$tmp157;
ITable* $tmp159 = ((frost$collections$CollectionView*) $tmp158)->$class->itable;
while ($tmp159->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp159 = $tmp159->next;
}
$fn161 $tmp160 = $tmp159->methods[0];
frost$core$Int64 $tmp162 = $tmp160(((frost$collections$CollectionView*) $tmp158));
org$frostlang$frostc$Variable* $tmp163 = *(&local4);
org$frostlang$frostc$Type** $tmp164 = &$tmp163->type;
org$frostlang$frostc$Type* $tmp165 = *$tmp164;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp154, $tmp155, $tmp162, $tmp165);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp146, $tmp147, param1, $tmp148, $tmp154);
$fn167 $tmp166 = ($fn167) $tmp145->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp168 = $tmp166($tmp145, $tmp146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:32
frost$collections$Stack** $tmp169 = &param0->enclosingContexts;
frost$collections$Stack* $tmp170 = *$tmp169;
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp171 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp172 = (frost$core$Int64) {3};
org$frostlang$frostc$Variable* $tmp173 = *(&local4);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$Variable($tmp171, $tmp172, $tmp173);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Try.frost:32:56
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:16
frost$collections$Array** $tmp174 = &$tmp170->contents;
frost$collections$Array* $tmp175 = *$tmp174;
frost$collections$Array$add$frost$collections$Array$T($tmp175, ((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:34
org$frostlang$frostc$IR* $tmp176 = *(&local1);
frost$collections$Array** $tmp177 = &$tmp176->locals;
frost$collections$Array* $tmp178 = *$tmp177;
org$frostlang$frostc$Variable* $tmp179 = *(&local4);
org$frostlang$frostc$Type** $tmp180 = &$tmp179->type;
org$frostlang$frostc$Type* $tmp181 = *$tmp180;
frost$collections$Array$add$frost$collections$Array$T($tmp178, ((frost$core$Object*) $tmp181));
frost$core$String* $tmp182 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local5) = ((frost$core$String*) NULL);
goto block2;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:37
frost$core$Int64 $tmp183 = (frost$core$Int64) {37};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s184, $tmp183);
abort(); // unreachable
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:42
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Variable*) NULL)));
org$frostlang$frostc$Variable* $tmp185 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
goto block2;
block2:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:45
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp186 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp187 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp188 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Block$ID $tmp189 = *(&local2);
org$frostlang$frostc$Variable* $tmp190 = *(&local4);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Block$ID$Q$org$frostlang$frostc$Variable$Q($tmp187, $tmp188, ((org$frostlang$frostc$IR$Block$ID$nullable) { $tmp189, true }), $tmp190);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp186, param0, $tmp187);
*(&local9) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
org$frostlang$frostc$Compiler$AutoContext* $tmp191 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
*(&local9) = $tmp186;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:47
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp192 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp192, param0);
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
org$frostlang$frostc$Compiler$AutoScope* $tmp193 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
*(&local10) = $tmp192;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:48
ITable* $tmp194 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp194->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp194 = $tmp194->next;
}
$fn196 $tmp195 = $tmp194->methods[0];
frost$collections$Iterator* $tmp197 = $tmp195(((frost$collections$Iterable*) param2));
goto block28;
block28:;
ITable* $tmp198 = $tmp197->$class->itable;
while ($tmp198->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp198 = $tmp198->next;
}
$fn200 $tmp199 = $tmp198->methods[0];
frost$core$Bit $tmp201 = $tmp199($tmp197);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block30; else goto block29;
block29:;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp203 = $tmp197->$class->itable;
while ($tmp203->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp203 = $tmp203->next;
}
$fn205 $tmp204 = $tmp203->methods[1];
frost$core$Object* $tmp206 = $tmp204($tmp197);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp206)));
org$frostlang$frostc$ASTNode* $tmp207 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
*(&local11) = ((org$frostlang$frostc$ASTNode*) $tmp206);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:49
org$frostlang$frostc$ASTNode* $tmp208 = *(&local11);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp208);
frost$core$Frost$unref$frost$core$Object$Q($tmp206);
org$frostlang$frostc$ASTNode* $tmp209 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block28;
block30:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
org$frostlang$frostc$Compiler$AutoScope* $tmp210 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp211 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:52
org$frostlang$frostc$IR* $tmp212 = *(&local1);
$fn214 $tmp213 = ($fn214) $tmp212->$class->vtable[5];
frost$core$Bit $tmp215 = $tmp213($tmp212);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Try.frost:52:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp216 = $tmp215.value;
bool $tmp217 = !$tmp216;
frost$core$Bit $tmp218 = (frost$core$Bit) {$tmp217};
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:53
org$frostlang$frostc$IR* $tmp220 = *(&local1);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp221 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp222 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp223 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp221, $tmp222, param1, $tmp223);
$fn225 $tmp224 = ($fn225) $tmp220->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp226 = $tmp224($tmp220, $tmp221);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
goto block32;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:55
org$frostlang$frostc$IR* $tmp227 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp228 = *(&local2);
$fn230 $tmp229 = ($fn230) $tmp227->$class->vtable[4];
$tmp229($tmp227, $tmp228);
// <no location>
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:58
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp231 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp231, param0);
*(&local12) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
org$frostlang$frostc$Compiler$AutoScope* $tmp232 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
*(&local12) = $tmp231;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:59
org$frostlang$frostc$Variable* $tmp233 = *(&local4);
frost$core$Bit $tmp234 = frost$core$Bit$init$builtin_bit($tmp233 != NULL);
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:60
org$frostlang$frostc$SymbolTable** $tmp236 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp237 = *$tmp236;
org$frostlang$frostc$Variable* $tmp238 = *(&local4);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Try.frost:60:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp239 = &((org$frostlang$frostc$Symbol*) $tmp238)->name;
frost$core$String* $tmp240 = *$tmp239;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp237, ((org$frostlang$frostc$Symbol*) $tmp238), $tmp240);
goto block35;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:62
ITable* $tmp241 = ((frost$collections$Iterable*) param4)->$class->itable;
while ($tmp241->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp241 = $tmp241->next;
}
$fn243 $tmp242 = $tmp241->methods[0];
frost$collections$Iterator* $tmp244 = $tmp242(((frost$collections$Iterable*) param4));
goto block37;
block37:;
ITable* $tmp245 = $tmp244->$class->itable;
while ($tmp245->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp245 = $tmp245->next;
}
$fn247 $tmp246 = $tmp245->methods[0];
frost$core$Bit $tmp248 = $tmp246($tmp244);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block39; else goto block38;
block38:;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp250 = $tmp244->$class->itable;
while ($tmp250->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp250 = $tmp250->next;
}
$fn252 $tmp251 = $tmp250->methods[1];
frost$core$Object* $tmp253 = $tmp251($tmp244);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp253)));
org$frostlang$frostc$ASTNode* $tmp254 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
*(&local13) = ((org$frostlang$frostc$ASTNode*) $tmp253);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:63
org$frostlang$frostc$ASTNode* $tmp255 = *(&local13);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp255);
frost$core$Frost$unref$frost$core$Object$Q($tmp253);
org$frostlang$frostc$ASTNode* $tmp256 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block37;
block39:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
org$frostlang$frostc$Compiler$AutoScope* $tmp257 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
*(&local12) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:66
org$frostlang$frostc$IR* $tmp258 = *(&local1);
$fn260 $tmp259 = ($fn260) $tmp258->$class->vtable[5];
frost$core$Bit $tmp261 = $tmp259($tmp258);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Try.frost:66:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp262 = $tmp261.value;
bool $tmp263 = !$tmp262;
frost$core$Bit $tmp264 = (frost$core$Bit) {$tmp263};
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:67
org$frostlang$frostc$IR* $tmp266 = *(&local1);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp267 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp268 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp269 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp267, $tmp268, param1, $tmp269);
$fn271 $tmp270 = ($fn271) $tmp266->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp272 = $tmp270($tmp266, $tmp267);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
goto block41;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:70
org$frostlang$frostc$IR* $tmp273 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp274 = *(&local3);
$fn276 $tmp275 = ($fn276) $tmp273->$class->vtable[4];
$tmp275($tmp273, $tmp274);
org$frostlang$frostc$Variable* $tmp277 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
org$frostlang$frostc$IR* $tmp278 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp279 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
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

