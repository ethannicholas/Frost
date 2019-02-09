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
#include "org/frostlang/frostc/Type/Kind.h"
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
typedef frost$core$Int64 (*$fn53)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn70)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn84)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn99)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn118)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn167)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn173)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$collections$Iterator* (*$fn202)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn206)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn211)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn220)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn231)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn236)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn249)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn253)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn258)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn266)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn277)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn282)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x54\x72\x79", 34, -8546630798215162542, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x79\x20\x66\x61\x69\x6c", 8, 23387625596074996, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x79\x20\x65\x6e\x64", 7, 231560649457195, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 16, -3824106976449029430, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, 2015636186561573124, NULL };

void org$frostlang$frostc$statement$Try$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$FixedArray* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4) {

org$frostlang$frostc$Compiler$AutoScope* local0 = NULL;
org$frostlang$frostc$IR* local1 = NULL;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$IR$Block$ID local3;
org$frostlang$frostc$Variable* local4 = NULL;
frost$core$String* local5 = NULL;
org$frostlang$frostc$Variable$Kind local6;
org$frostlang$frostc$Variable$Kind local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
frost$core$Bit local10;
org$frostlang$frostc$Compiler$AutoContext* local11 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local12 = NULL;
org$frostlang$frostc$ASTNode* local13 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local14 = NULL;
org$frostlang$frostc$ASTNode* local15 = NULL;
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
// begin inline call to method org.frostlang.frostc.Type.Error():org.frostlang.frostc.Type from Try.frost:26:87
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:300
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp38 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp39 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:300:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp40 = &(&local9)->$rawValue;
*$tmp40 = $tmp39;
org$frostlang$frostc$Type$Kind $tmp41 = *(&local9);
*(&local8) = $tmp41;
org$frostlang$frostc$Type$Kind $tmp42 = *(&local8);
org$frostlang$frostc$Position $tmp43 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp44 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp38, &$s45, $tmp42, $tmp43, $tmp44);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Variable$Storage));
org$frostlang$frostc$Variable$Storage* $tmp46 = (org$frostlang$frostc$Variable$Storage*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Variable$Storage$class);
frost$core$Int64 $tmp47 = (frost$core$Int64) {0};
org$frostlang$frostc$IR* $tmp48 = *(&local1);
frost$collections$Array** $tmp49 = &$tmp48->locals;
frost$collections$Array* $tmp50 = *$tmp49;
ITable* $tmp51 = ((frost$collections$CollectionView*) $tmp50)->$class->itable;
while ($tmp51->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp51 = $tmp51->next;
}
$fn53 $tmp52 = $tmp51->methods[0];
frost$core$Int64 $tmp54 = $tmp52(((frost$collections$CollectionView*) $tmp50));
org$frostlang$frostc$Variable$Storage$init$frost$core$Int64$frost$core$Int64($tmp46, $tmp47, $tmp54);
org$frostlang$frostc$Variable$init$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Variable$Storage($tmp32, param1, $tmp36, $tmp37, $tmp38, $tmp46);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
org$frostlang$frostc$Variable* $tmp55 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
*(&local4) = $tmp32;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:28
org$frostlang$frostc$Variable* $tmp56 = *(&local4);
frost$collections$Stack** $tmp57 = &param0->currentMethod;
frost$collections$Stack* $tmp58 = *$tmp57;
frost$core$Int64 $tmp59 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Try.frost:28:61
frost$core$Int64 $tmp60 = (frost$core$Int64) {0};
int64_t $tmp61 = $tmp59.value;
int64_t $tmp62 = $tmp60.value;
bool $tmp63 = $tmp61 >= $tmp62;
frost$core$Bit $tmp64 = (frost$core$Bit) {$tmp63};
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block14; else goto block13;
block14:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp66 = &$tmp58->contents;
frost$collections$Array* $tmp67 = *$tmp66;
ITable* $tmp68 = ((frost$collections$CollectionView*) $tmp67)->$class->itable;
while ($tmp68->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp68 = $tmp68->next;
}
$fn70 $tmp69 = $tmp68->methods[0];
frost$core$Int64 $tmp71 = $tmp69(((frost$collections$CollectionView*) $tmp67));
int64_t $tmp72 = $tmp59.value;
int64_t $tmp73 = $tmp71.value;
bool $tmp74 = $tmp72 < $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp77 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s78, $tmp77, &$s79);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp80 = &$tmp58->contents;
frost$collections$Array* $tmp81 = *$tmp80;
ITable* $tmp82 = ((frost$collections$CollectionView*) $tmp81)->$class->itable;
while ($tmp82->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp82 = $tmp82->next;
}
$fn84 $tmp83 = $tmp82->methods[0];
frost$core$Int64 $tmp85 = $tmp83(((frost$collections$CollectionView*) $tmp81));
int64_t $tmp86 = $tmp85.value;
int64_t $tmp87 = $tmp59.value;
bool $tmp88 = $tmp86 > $tmp87;
frost$core$Bit $tmp89 = (frost$core$Bit) {$tmp88};
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp91 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s92, $tmp91);
abort(); // unreachable
block16:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp93 = &$tmp58->contents;
frost$collections$Array* $tmp94 = *$tmp93;
frost$collections$Array** $tmp95 = &$tmp58->contents;
frost$collections$Array* $tmp96 = *$tmp95;
ITable* $tmp97 = ((frost$collections$CollectionView*) $tmp96)->$class->itable;
while ($tmp97->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp97 = $tmp97->next;
}
$fn99 $tmp98 = $tmp97->methods[0];
frost$core$Int64 $tmp100 = $tmp98(((frost$collections$CollectionView*) $tmp96));
frost$core$Int64 $tmp101 = (frost$core$Int64) {1};
int64_t $tmp102 = $tmp100.value;
int64_t $tmp103 = $tmp101.value;
int64_t $tmp104 = $tmp102 - $tmp103;
frost$core$Int64 $tmp105 = (frost$core$Int64) {$tmp104};
int64_t $tmp106 = $tmp105.value;
int64_t $tmp107 = $tmp59.value;
int64_t $tmp108 = $tmp106 - $tmp107;
frost$core$Int64 $tmp109 = (frost$core$Int64) {$tmp108};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp110 = (frost$core$Int64) {0};
int64_t $tmp111 = $tmp109.value;
int64_t $tmp112 = $tmp110.value;
bool $tmp113 = $tmp111 >= $tmp112;
frost$core$Bit $tmp114 = (frost$core$Bit) {$tmp113};
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block21; else goto block20;
block21:;
ITable* $tmp116 = ((frost$collections$CollectionView*) $tmp94)->$class->itable;
while ($tmp116->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp116 = $tmp116->next;
}
$fn118 $tmp117 = $tmp116->methods[0];
frost$core$Int64 $tmp119 = $tmp117(((frost$collections$CollectionView*) $tmp94));
int64_t $tmp120 = $tmp109.value;
int64_t $tmp121 = $tmp119.value;
bool $tmp122 = $tmp120 < $tmp121;
frost$core$Bit $tmp123 = (frost$core$Bit) {$tmp122};
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp125 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s126, $tmp125, &$s127);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp128 = &$tmp94->data;
frost$core$Object** $tmp129 = *$tmp128;
int64_t $tmp130 = $tmp109.value;
frost$core$Object* $tmp131 = $tmp129[$tmp130];
frost$core$Frost$ref$frost$core$Object$Q($tmp131);
frost$core$Frost$ref$frost$core$Object$Q($tmp131);
frost$core$Frost$unref$frost$core$Object$Q($tmp131);
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp132 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp132, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp131)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$core$Weak** $tmp133 = &$tmp56->owner;
frost$core$Weak* $tmp134 = *$tmp133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Weak** $tmp135 = &$tmp56->owner;
*$tmp135 = $tmp132;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$core$Frost$unref$frost$core$Object$Q($tmp131);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:29
org$frostlang$frostc$Variable* $tmp136 = *(&local4);
org$frostlang$frostc$Type** $tmp137 = &$tmp136->type;
org$frostlang$frostc$Type* $tmp138 = *$tmp137;
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Try.frost:29:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:622
frost$core$Bit $tmp139 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp138);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:622:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp140 = $tmp139.value;
bool $tmp141 = !$tmp140;
frost$core$Bit $tmp142 = (frost$core$Bit) {$tmp141};
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:623
frost$core$Bit $tmp144 = frost$core$Bit$init$builtin_bit(false);
*(&local10) = $tmp144;
goto block24;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:625
frost$core$Bit $tmp145 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp138);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:625:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp146 = $tmp145.value;
bool $tmp147 = !$tmp146;
frost$core$Bit $tmp148 = (frost$core$Bit) {$tmp147};
*(&local10) = $tmp148;
goto block24;
block24:;
frost$core$Bit $tmp149 = *(&local10);
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:30
org$frostlang$frostc$IR* $tmp151 = *(&local1);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp152 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp153 = (frost$core$Int64) {27};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp154 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp155 = (frost$core$Int64) {4};
org$frostlang$frostc$Variable* $tmp156 = *(&local4);
org$frostlang$frostc$Type** $tmp157 = &$tmp156->type;
org$frostlang$frostc$Type* $tmp158 = *$tmp157;
org$frostlang$frostc$Type* $tmp159 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp158);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp154, $tmp155, $tmp159);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp160 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp161 = (frost$core$Int64) {2};
org$frostlang$frostc$IR* $tmp162 = *(&local1);
frost$collections$Array** $tmp163 = &$tmp162->locals;
frost$collections$Array* $tmp164 = *$tmp163;
ITable* $tmp165 = ((frost$collections$CollectionView*) $tmp164)->$class->itable;
while ($tmp165->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp165 = $tmp165->next;
}
$fn167 $tmp166 = $tmp165->methods[0];
frost$core$Int64 $tmp168 = $tmp166(((frost$collections$CollectionView*) $tmp164));
org$frostlang$frostc$Variable* $tmp169 = *(&local4);
org$frostlang$frostc$Type** $tmp170 = &$tmp169->type;
org$frostlang$frostc$Type* $tmp171 = *$tmp170;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp160, $tmp161, $tmp168, $tmp171);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp152, $tmp153, param1, $tmp154, $tmp160);
$fn173 $tmp172 = ($fn173) $tmp151->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp174 = $tmp172($tmp151, $tmp152);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:32
frost$collections$Stack** $tmp175 = &param0->enclosingContexts;
frost$collections$Stack* $tmp176 = *$tmp175;
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp177 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp178 = (frost$core$Int64) {3};
org$frostlang$frostc$Variable* $tmp179 = *(&local4);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$Variable($tmp177, $tmp178, $tmp179);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Try.frost:32:56
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:16
frost$collections$Array** $tmp180 = &$tmp176->contents;
frost$collections$Array* $tmp181 = *$tmp180;
frost$collections$Array$add$frost$collections$Array$T($tmp181, ((frost$core$Object*) $tmp177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
goto block23;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:34
org$frostlang$frostc$IR* $tmp182 = *(&local1);
frost$collections$Array** $tmp183 = &$tmp182->locals;
frost$collections$Array* $tmp184 = *$tmp183;
org$frostlang$frostc$Variable* $tmp185 = *(&local4);
org$frostlang$frostc$Type** $tmp186 = &$tmp185->type;
org$frostlang$frostc$Type* $tmp187 = *$tmp186;
frost$collections$Array$add$frost$collections$Array$T($tmp184, ((frost$core$Object*) $tmp187));
frost$core$String* $tmp188 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
*(&local5) = ((frost$core$String*) NULL);
goto block2;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:37
frost$core$Int64 $tmp189 = (frost$core$Int64) {37};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s190, $tmp189);
abort(); // unreachable
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:42
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Variable*) NULL)));
org$frostlang$frostc$Variable* $tmp191 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
goto block2;
block2:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:45
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp192 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp193 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp194 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Block$ID $tmp195 = *(&local2);
org$frostlang$frostc$Variable* $tmp196 = *(&local4);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Block$ID$Q$org$frostlang$frostc$Variable$Q($tmp193, $tmp194, ((org$frostlang$frostc$IR$Block$ID$nullable) { $tmp195, true }), $tmp196);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp192, param0, $tmp193);
*(&local11) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
org$frostlang$frostc$Compiler$AutoContext* $tmp197 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
*(&local11) = $tmp192;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:47
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp198 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp198, param0);
*(&local12) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
org$frostlang$frostc$Compiler$AutoScope* $tmp199 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
*(&local12) = $tmp198;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:48
ITable* $tmp200 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp200->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp200 = $tmp200->next;
}
$fn202 $tmp201 = $tmp200->methods[0];
frost$collections$Iterator* $tmp203 = $tmp201(((frost$collections$Iterable*) param2));
goto block30;
block30:;
ITable* $tmp204 = $tmp203->$class->itable;
while ($tmp204->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp204 = $tmp204->next;
}
$fn206 $tmp205 = $tmp204->methods[0];
frost$core$Bit $tmp207 = $tmp205($tmp203);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block32; else goto block31;
block31:;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp209 = $tmp203->$class->itable;
while ($tmp209->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp209 = $tmp209->next;
}
$fn211 $tmp210 = $tmp209->methods[1];
frost$core$Object* $tmp212 = $tmp210($tmp203);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp212)));
org$frostlang$frostc$ASTNode* $tmp213 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
*(&local13) = ((org$frostlang$frostc$ASTNode*) $tmp212);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:49
org$frostlang$frostc$ASTNode* $tmp214 = *(&local13);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp214);
frost$core$Frost$unref$frost$core$Object$Q($tmp212);
org$frostlang$frostc$ASTNode* $tmp215 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block30;
block32:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
org$frostlang$frostc$Compiler$AutoScope* $tmp216 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
*(&local12) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp217 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
*(&local11) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:52
org$frostlang$frostc$IR* $tmp218 = *(&local1);
$fn220 $tmp219 = ($fn220) $tmp218->$class->vtable[5];
frost$core$Bit $tmp221 = $tmp219($tmp218);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Try.frost:52:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp222 = $tmp221.value;
bool $tmp223 = !$tmp222;
frost$core$Bit $tmp224 = (frost$core$Bit) {$tmp223};
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:53
org$frostlang$frostc$IR* $tmp226 = *(&local1);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp227 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp228 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp229 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp227, $tmp228, param1, $tmp229);
$fn231 $tmp230 = ($fn231) $tmp226->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp232 = $tmp230($tmp226, $tmp227);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
goto block34;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:55
org$frostlang$frostc$IR* $tmp233 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp234 = *(&local2);
$fn236 $tmp235 = ($fn236) $tmp233->$class->vtable[4];
$tmp235($tmp233, $tmp234);
// <no location>
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:58
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp237 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp237, param0);
*(&local14) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
org$frostlang$frostc$Compiler$AutoScope* $tmp238 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local14) = $tmp237;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:59
org$frostlang$frostc$Variable* $tmp239 = *(&local4);
frost$core$Bit $tmp240 = frost$core$Bit$init$builtin_bit($tmp239 != NULL);
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:60
org$frostlang$frostc$SymbolTable** $tmp242 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp243 = *$tmp242;
org$frostlang$frostc$Variable* $tmp244 = *(&local4);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Try.frost:60:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp245 = &((org$frostlang$frostc$Symbol*) $tmp244)->name;
frost$core$String* $tmp246 = *$tmp245;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp243, ((org$frostlang$frostc$Symbol*) $tmp244), $tmp246);
goto block37;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:62
ITable* $tmp247 = ((frost$collections$Iterable*) param4)->$class->itable;
while ($tmp247->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp247 = $tmp247->next;
}
$fn249 $tmp248 = $tmp247->methods[0];
frost$collections$Iterator* $tmp250 = $tmp248(((frost$collections$Iterable*) param4));
goto block39;
block39:;
ITable* $tmp251 = $tmp250->$class->itable;
while ($tmp251->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp251 = $tmp251->next;
}
$fn253 $tmp252 = $tmp251->methods[0];
frost$core$Bit $tmp254 = $tmp252($tmp250);
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block41; else goto block40;
block40:;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp256 = $tmp250->$class->itable;
while ($tmp256->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp256 = $tmp256->next;
}
$fn258 $tmp257 = $tmp256->methods[1];
frost$core$Object* $tmp259 = $tmp257($tmp250);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp259)));
org$frostlang$frostc$ASTNode* $tmp260 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local15) = ((org$frostlang$frostc$ASTNode*) $tmp259);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:63
org$frostlang$frostc$ASTNode* $tmp261 = *(&local15);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp261);
frost$core$Frost$unref$frost$core$Object$Q($tmp259);
org$frostlang$frostc$ASTNode* $tmp262 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block39;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
org$frostlang$frostc$Compiler$AutoScope* $tmp263 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local14) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:66
org$frostlang$frostc$IR* $tmp264 = *(&local1);
$fn266 $tmp265 = ($fn266) $tmp264->$class->vtable[5];
frost$core$Bit $tmp267 = $tmp265($tmp264);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Try.frost:66:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp268 = $tmp267.value;
bool $tmp269 = !$tmp268;
frost$core$Bit $tmp270 = (frost$core$Bit) {$tmp269};
bool $tmp271 = $tmp270.value;
if ($tmp271) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:67
org$frostlang$frostc$IR* $tmp272 = *(&local1);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp273 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp274 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp275 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp273, $tmp274, param1, $tmp275);
$fn277 $tmp276 = ($fn277) $tmp272->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp278 = $tmp276($tmp272, $tmp273);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
goto block43;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:70
org$frostlang$frostc$IR* $tmp279 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp280 = *(&local3);
$fn282 $tmp281 = ($fn282) $tmp279->$class->vtable[4];
$tmp281($tmp279, $tmp280);
org$frostlang$frostc$Variable* $tmp283 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
org$frostlang$frostc$IR* $tmp284 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp285 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
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

