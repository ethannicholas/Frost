#include "org/frostlang/frostc/expression/And.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Compiler/AutoUnrefs.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Statement.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$And$class_type org$frostlang$frostc$expression$And$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$And$cleanup} };

typedef frost$core$Int (*$fn12)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn37)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn42)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn47)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn58)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn63)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn88)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn95)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn100)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn107)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn114)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn119)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn125)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn139)(org$frostlang$frostc$IR*, frost$core$String*);
typedef void (*$fn147)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x6e\x64", 35, 534377468572104957, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x64\x20\x74\x72\x75\x65", 8, 6551506118492247358, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x64\x20\x66\x61\x6c\x73\x65", 9, 59802535508334937, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x64\x20\x6d\x65\x72\x67\x65", 9, 3577556354573257594, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x64\x20\x6c\x65\x66\x74\x20\x74\x72\x75\x65", 13, 3687610413917854125, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$And$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$IR$Block$ID local3;
org$frostlang$frostc$IR$Block$ID local4;
org$frostlang$frostc$IR$Block$ID local5;
org$frostlang$frostc$IR$Value* local6 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local7 = NULL;
org$frostlang$frostc$IR$Statement$ID local8;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:15
org$frostlang$frostc$IR** $tmp2 = &param0->ir;
org$frostlang$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:17
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp5 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp6 = (frost$core$Int64) {2u};
org$frostlang$frostc$IR* $tmp7 = *(&local0);
frost$collections$Array** $tmp8 = &$tmp7->locals;
frost$collections$Array* $tmp9 = *$tmp8;
ITable* $tmp10 = ((frost$collections$CollectionView*) $tmp9)->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[0];
frost$core$Int $tmp13 = $tmp11(((frost$collections$CollectionView*) $tmp9));
org$frostlang$frostc$Type** $tmp14 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp15 = *$tmp14;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int$org$frostlang$frostc$Type($tmp5, $tmp6, $tmp13, $tmp15);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
org$frostlang$frostc$IR$Value* $tmp16 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
*(&local1) = $tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:18
org$frostlang$frostc$IR* $tmp17 = *(&local0);
frost$collections$Array** $tmp18 = &$tmp17->locals;
frost$collections$Array* $tmp19 = *$tmp18;
org$frostlang$frostc$Type** $tmp20 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp21 = *$tmp20;
frost$collections$Array$add$frost$collections$Array$T($tmp19, ((frost$core$Object*) $tmp21));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:19
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:20
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp22 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp23 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type** $tmp24 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp25 = *$tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp22, $tmp23, $tmp25, $tmp26);
org$frostlang$frostc$IR$Value* $tmp27 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
org$frostlang$frostc$IR$Value* $tmp28 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
*(&local2) = $tmp27;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:21
org$frostlang$frostc$IR$Value* $tmp29 = *(&local2);
frost$core$Bit $tmp30 = (frost$core$Bit) {$tmp29 == NULL};
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:22
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp32 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp33 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp34 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:24
org$frostlang$frostc$IR* $tmp35 = *(&local0);
$fn37 $tmp36 = ($fn37) $tmp35->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp38 = $tmp36($tmp35, &$s39);
*(&local3) = $tmp38;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:25
org$frostlang$frostc$IR* $tmp40 = *(&local0);
$fn42 $tmp41 = ($fn42) $tmp40->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp43 = $tmp41($tmp40, &$s44);
*(&local4) = $tmp43;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:26
org$frostlang$frostc$IR* $tmp45 = *(&local0);
$fn47 $tmp46 = ($fn47) $tmp45->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp48 = $tmp46($tmp45, &$s49);
*(&local5) = $tmp48;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:27
org$frostlang$frostc$IR* $tmp50 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp51 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp52 = (frost$core$Int64) {5u};
org$frostlang$frostc$IR$Value* $tmp53 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp54 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp53);
org$frostlang$frostc$IR$Block$ID $tmp55 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp56 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp51, $tmp52, param1, $tmp54, $tmp55, $tmp56);
$fn58 $tmp57 = ($fn58) $tmp50->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp59 = $tmp57($tmp50, $tmp51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:29
org$frostlang$frostc$IR* $tmp60 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp61 = *(&local3);
$fn63 $tmp62 = ($fn63) $tmp60->$class->vtable[4];
$tmp62($tmp60, $tmp61);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:30
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:32
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp64 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp64, param0);
*(&local7) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp65 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local7) = $tmp64;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:33
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp66 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp67 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type** $tmp68 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp69 = *$tmp68;
frost$core$Bit $tmp70 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp66, $tmp67, $tmp69, $tmp70);
org$frostlang$frostc$IR$Value* $tmp71 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp66);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
org$frostlang$frostc$IR$Value* $tmp72 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
*(&local6) = $tmp71;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:35
org$frostlang$frostc$IR$Value* $tmp73 = *(&local6);
frost$core$Bit $tmp74 = (frost$core$Bit) {$tmp73 == NULL};
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:36
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp76 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
*(&local7) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp77 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp78 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp79 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp80 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block4:;
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp81 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local7) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:39
org$frostlang$frostc$IR* $tmp82 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp83 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp84 = (frost$core$Int64) {27u};
org$frostlang$frostc$IR$Value* $tmp85 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp86 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp83, $tmp84, param1, $tmp85, $tmp86);
$fn88 $tmp87 = ($fn88) $tmp82->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp89 = $tmp87($tmp82, $tmp83);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:40
org$frostlang$frostc$IR* $tmp90 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp91 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp92 = (frost$core$Int64) {1u};
org$frostlang$frostc$IR$Block$ID $tmp93 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp91, $tmp92, param1, $tmp93);
$fn95 $tmp94 = ($fn95) $tmp90->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp96 = $tmp94($tmp90, $tmp91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:41
org$frostlang$frostc$IR* $tmp97 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp98 = *(&local4);
$fn100 $tmp99 = ($fn100) $tmp97->$class->vtable[4];
$tmp99($tmp97, $tmp98);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:42
org$frostlang$frostc$IR* $tmp101 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp102 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp103 = (frost$core$Int64) {27u};
org$frostlang$frostc$IR$Value* $tmp104 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp105 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp102, $tmp103, param1, $tmp104, $tmp105);
$fn107 $tmp106 = ($fn107) $tmp101->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp108 = $tmp106($tmp101, $tmp102);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:43
org$frostlang$frostc$IR* $tmp109 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp110 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp111 = (frost$core$Int64) {1u};
org$frostlang$frostc$IR$Block$ID $tmp112 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp110, $tmp111, param1, $tmp112);
$fn114 $tmp113 = ($fn114) $tmp109->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp115 = $tmp113($tmp109, $tmp110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:44
org$frostlang$frostc$IR* $tmp116 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp117 = *(&local5);
$fn119 $tmp118 = ($fn119) $tmp116->$class->vtable[4];
$tmp118($tmp116, $tmp117);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:45
org$frostlang$frostc$IR* $tmp120 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp121 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp122 = (frost$core$Int64) {14u};
org$frostlang$frostc$IR$Value* $tmp123 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp121, $tmp122, param1, $tmp123);
$fn125 $tmp124 = ($fn125) $tmp120->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp126 = $tmp124($tmp120, $tmp121);
*(&local8) = $tmp126;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:46
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp127 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp128 = (frost$core$Int64) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp129 = *(&local8);
org$frostlang$frostc$Type** $tmp130 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp131 = *$tmp130;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp127, $tmp128, $tmp129, $tmp131);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
org$frostlang$frostc$IR$Value* $tmp132 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp133 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp134 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp135 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp127;

}
void org$frostlang$frostc$expression$And$compileConditionalBranch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$IR$Block$ID param4, org$frostlang$frostc$IR$Block$ID param5) {

org$frostlang$frostc$IR$Block$ID local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:52
org$frostlang$frostc$IR** $tmp136 = &param0->ir;
org$frostlang$frostc$IR* $tmp137 = *$tmp136;
$fn139 $tmp138 = ($fn139) $tmp137->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp140 = $tmp138($tmp137, &$s141);
*(&local0) = $tmp140;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:53
org$frostlang$frostc$IR$Block$ID $tmp142 = *(&local0);
org$frostlang$frostc$Compiler$compileConditionalBranch$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, param2, $tmp142, param5);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:54
org$frostlang$frostc$IR** $tmp143 = &param0->ir;
org$frostlang$frostc$IR* $tmp144 = *$tmp143;
org$frostlang$frostc$IR$Block$ID $tmp145 = *(&local0);
$fn147 $tmp146 = ($fn147) $tmp144->$class->vtable[4];
$tmp146($tmp144, $tmp145);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:55
org$frostlang$frostc$Compiler$compileConditionalBranch$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, param3, param4, param5);
return;

}
void org$frostlang$frostc$expression$And$init(org$frostlang$frostc$expression$And* param0) {

return;

}
void org$frostlang$frostc$expression$And$cleanup(org$frostlang$frostc$expression$And* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/And.frost:11
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






