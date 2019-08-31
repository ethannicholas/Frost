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
#include "frost/core/Int.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Statement.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$And$class_type org$frostlang$frostc$expression$And$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$And$cleanup} };

typedef frost$core$Int (*$fn12)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn37)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn42)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn47)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn63)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn68)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn98)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn105)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn110)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn122)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn129)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn134)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn140)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn154)(org$frostlang$frostc$IR*, frost$core$String*);
typedef void (*$fn162)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x6e\x64", 35, 534377468572104957, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x64\x20\x74\x72\x75\x65", 8, 6551506118492247358, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x64\x20\x66\x61\x6c\x73\x65", 9, 59802535508334937, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x64\x20\x6d\x65\x72\x67\x65", 9, 3577556354573257594, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x64\x2e\x66\x72\x6f\x73\x74", 9, -7231675374248336750, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x64\x2e\x66\x72\x6f\x73\x74", 9, -7231675374248336750, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x64\x2e\x66\x72\x6f\x73\x74", 9, -7231675374248336750, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x64\x20\x6c\x65\x66\x74\x20\x74\x72\x75\x65", 13, 3687610413917854125, NULL };

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:15
org$frostlang$frostc$IR** $tmp2 = &param0->ir;
org$frostlang$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:17
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp5 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp6 = (frost$core$Int) {2u};
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
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp5, $tmp6, $tmp13, $tmp15);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
org$frostlang$frostc$IR$Value* $tmp16 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
*(&local1) = $tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:18
org$frostlang$frostc$IR* $tmp17 = *(&local0);
frost$collections$Array** $tmp18 = &$tmp17->locals;
frost$collections$Array* $tmp19 = *$tmp18;
org$frostlang$frostc$Type** $tmp20 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp21 = *$tmp20;
frost$collections$Array$add$frost$collections$Array$T($tmp19, ((frost$core$Object*) $tmp21));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:19
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:20
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp22 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp23 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp24 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp25 = *$tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp22, $tmp23, $tmp25, $tmp26);
org$frostlang$frostc$IR$Value* $tmp27 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
org$frostlang$frostc$IR$Value* $tmp28 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
*(&local2) = $tmp27;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:21
org$frostlang$frostc$IR$Value* $tmp29 = *(&local2);
frost$core$Bit $tmp30 = (frost$core$Bit) {$tmp29 == NULL};
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:22
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:24
org$frostlang$frostc$IR* $tmp35 = *(&local0);
$fn37 $tmp36 = ($fn37) $tmp35->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp38 = $tmp36($tmp35, &$s39);
*(&local3) = $tmp38;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:25
org$frostlang$frostc$IR* $tmp40 = *(&local0);
$fn42 $tmp41 = ($fn42) $tmp40->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp43 = $tmp41($tmp40, &$s44);
*(&local4) = $tmp43;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:26
org$frostlang$frostc$IR* $tmp45 = *(&local0);
$fn47 $tmp46 = ($fn47) $tmp45->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp48 = $tmp46($tmp45, &$s49);
*(&local5) = $tmp48;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:27
org$frostlang$frostc$IR* $tmp50 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp51 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp52 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Value* $tmp53 = *(&local2);
frost$core$Bit $tmp54 = (frost$core$Bit) {$tmp53 != NULL};
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block3; else goto block4;
block4:;
frost$core$Int $tmp56 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s57, $tmp56, &$s58);
abort(); // unreachable
block3:;
org$frostlang$frostc$IR$Value* $tmp59 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp53);
org$frostlang$frostc$IR$Block$ID $tmp60 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp61 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp51, $tmp52, param1, $tmp59, $tmp60, $tmp61);
$fn63 $tmp62 = ($fn63) $tmp50->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp64 = $tmp62($tmp50, $tmp51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:29
org$frostlang$frostc$IR* $tmp65 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp66 = *(&local3);
$fn68 $tmp67 = ($fn68) $tmp65->$class->vtable[4];
$tmp67($tmp65, $tmp66);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:30
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:32
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp69 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp69, param0);
*(&local7) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp70 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
*(&local7) = $tmp69;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:33
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp71 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp72 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp73 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp74 = *$tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp71, $tmp72, $tmp74, $tmp75);
org$frostlang$frostc$IR$Value* $tmp76 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp71);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
org$frostlang$frostc$IR$Value* $tmp77 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local6) = $tmp76;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:35
org$frostlang$frostc$IR$Value* $tmp78 = *(&local6);
frost$core$Bit $tmp79 = (frost$core$Bit) {$tmp78 == NULL};
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:36
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp81 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local7) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp82 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp83 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp84 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp85 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block6:;
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp86 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local7) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:39
org$frostlang$frostc$IR* $tmp87 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp88 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp89 = (frost$core$Int) {27u};
org$frostlang$frostc$IR$Value* $tmp90 = *(&local6);
frost$core$Bit $tmp91 = (frost$core$Bit) {$tmp90 != NULL};
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block7; else goto block8;
block8:;
frost$core$Int $tmp93 = (frost$core$Int) {39u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s94, $tmp93, &$s95);
abort(); // unreachable
block7:;
org$frostlang$frostc$IR$Value* $tmp96 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp88, $tmp89, param1, $tmp90, $tmp96);
$fn98 $tmp97 = ($fn98) $tmp87->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp99 = $tmp97($tmp87, $tmp88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:40
org$frostlang$frostc$IR* $tmp100 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp101 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp102 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp103 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp101, $tmp102, param1, $tmp103);
$fn105 $tmp104 = ($fn105) $tmp100->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp106 = $tmp104($tmp100, $tmp101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:41
org$frostlang$frostc$IR* $tmp107 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp108 = *(&local4);
$fn110 $tmp109 = ($fn110) $tmp107->$class->vtable[4];
$tmp109($tmp107, $tmp108);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:42
org$frostlang$frostc$IR* $tmp111 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp112 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp113 = (frost$core$Int) {27u};
org$frostlang$frostc$IR$Value* $tmp114 = *(&local2);
frost$core$Bit $tmp115 = (frost$core$Bit) {$tmp114 != NULL};
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block9; else goto block10;
block10:;
frost$core$Int $tmp117 = (frost$core$Int) {42u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s118, $tmp117, &$s119);
abort(); // unreachable
block9:;
org$frostlang$frostc$IR$Value* $tmp120 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp112, $tmp113, param1, $tmp114, $tmp120);
$fn122 $tmp121 = ($fn122) $tmp111->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp123 = $tmp121($tmp111, $tmp112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:43
org$frostlang$frostc$IR* $tmp124 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp125 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp126 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp127 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp125, $tmp126, param1, $tmp127);
$fn129 $tmp128 = ($fn129) $tmp124->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp130 = $tmp128($tmp124, $tmp125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:44
org$frostlang$frostc$IR* $tmp131 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp132 = *(&local5);
$fn134 $tmp133 = ($fn134) $tmp131->$class->vtable[4];
$tmp133($tmp131, $tmp132);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:45
org$frostlang$frostc$IR* $tmp135 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp136 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp137 = (frost$core$Int) {14u};
org$frostlang$frostc$IR$Value* $tmp138 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp136, $tmp137, param1, $tmp138);
$fn140 $tmp139 = ($fn140) $tmp135->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp141 = $tmp139($tmp135, $tmp136);
*(&local8) = $tmp141;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:46
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp142 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp143 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp144 = *(&local8);
org$frostlang$frostc$Type** $tmp145 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp146 = *$tmp145;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp142, $tmp143, $tmp144, $tmp146);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
org$frostlang$frostc$IR$Value* $tmp147 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp148 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp149 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp150 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp142;

}
void org$frostlang$frostc$expression$And$compileConditionalBranch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$IR$Block$ID param4, org$frostlang$frostc$IR$Block$ID param5) {

org$frostlang$frostc$IR$Block$ID local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:52
org$frostlang$frostc$IR** $tmp151 = &param0->ir;
org$frostlang$frostc$IR* $tmp152 = *$tmp151;
$fn154 $tmp153 = ($fn154) $tmp152->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp155 = $tmp153($tmp152, &$s156);
*(&local0) = $tmp155;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:53
org$frostlang$frostc$IR$Block$ID $tmp157 = *(&local0);
org$frostlang$frostc$Compiler$compileConditionalBranch$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, param2, $tmp157, param5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:54
org$frostlang$frostc$IR** $tmp158 = &param0->ir;
org$frostlang$frostc$IR* $tmp159 = *$tmp158;
org$frostlang$frostc$IR$Block$ID $tmp160 = *(&local0);
$fn162 $tmp161 = ($fn162) $tmp159->$class->vtable[4];
$tmp161($tmp159, $tmp160);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:55
org$frostlang$frostc$Compiler$compileConditionalBranch$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, param3, param4, param5);
return;

}
void org$frostlang$frostc$expression$And$init(org$frostlang$frostc$expression$And* param0) {

return;

}
void org$frostlang$frostc$expression$And$cleanup(org$frostlang$frostc$expression$And* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:11
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






