#include "org/frostlang/frostc/expression/Or.h"
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
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Statement.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Or$class_type org$frostlang$frostc$expression$Or$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$expression$Or$cleanup} };

typedef frost$core$Int64 (*$fn12)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn33)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn38)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn43)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn54)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn59)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn66)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn73)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn78)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn101)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn108)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn113)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn119)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x4f\x72", 34, 2929099002013185031, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x20\x74\x72\x75\x65", 7, 226243874007106, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x20\x66\x61\x6c\x73\x65", 8, 22850629800266681, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x20\x6d\x65\x72\x67\x65", 8, 22850630532870686, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Or$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$IR$Block$ID local3;
org$frostlang$frostc$IR$Block$ID local4;
org$frostlang$frostc$IR$Block$ID local5;
org$frostlang$frostc$IR$Value* local6 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local7 = NULL;
org$frostlang$frostc$IR$Statement$ID local8;
// line 15
org$frostlang$frostc$IR** $tmp2 = &param0->ir;
org$frostlang$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// line 17
org$frostlang$frostc$IR$Value* $tmp5 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp6 = (frost$core$Int64) {2};
org$frostlang$frostc$IR* $tmp7 = *(&local0);
frost$collections$Array** $tmp8 = &$tmp7->locals;
frost$collections$Array* $tmp9 = *$tmp8;
ITable* $tmp10 = ((frost$collections$CollectionView*) $tmp9)->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[0];
frost$core$Int64 $tmp13 = $tmp11(((frost$collections$CollectionView*) $tmp9));
org$frostlang$frostc$Type* $tmp14 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp5, $tmp6, $tmp13, $tmp14);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
org$frostlang$frostc$IR$Value* $tmp15 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
*(&local1) = $tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// unreffing REF($19:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
// unreffing REF($11:org.frostlang.frostc.IR.Value)
// line 18
org$frostlang$frostc$IR* $tmp16 = *(&local0);
frost$collections$Array** $tmp17 = &$tmp16->locals;
frost$collections$Array* $tmp18 = *$tmp17;
org$frostlang$frostc$Type* $tmp19 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp18, ((frost$core$Object*) $tmp19));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
// unreffing REF($39:org.frostlang.frostc.Type)
// line 19
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 20
org$frostlang$frostc$Compiler$TypeContext* $tmp20 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp21 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp22 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp20, $tmp21, $tmp22);
org$frostlang$frostc$IR$Value* $tmp23 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp20);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
org$frostlang$frostc$IR$Value* $tmp24 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
*(&local2) = $tmp23;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
// unreffing REF($52:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// unreffing REF($50:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// unreffing REF($48:org.frostlang.frostc.Compiler.TypeContext)
// line 21
org$frostlang$frostc$IR$Value* $tmp25 = *(&local2);
frost$core$Bit $tmp26 = frost$core$Bit$init$builtin_bit($tmp25 == NULL);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block1; else goto block2;
block1:;
// line 22
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp28 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// unreffing compiledLeft
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp29 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// unreffing result
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp30 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// line 24
org$frostlang$frostc$IR* $tmp31 = *(&local0);
$fn33 $tmp32 = ($fn33) $tmp31->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp34 = $tmp32($tmp31, &$s35);
*(&local3) = $tmp34;
// line 25
org$frostlang$frostc$IR* $tmp36 = *(&local0);
$fn38 $tmp37 = ($fn38) $tmp36->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp39 = $tmp37($tmp36, &$s40);
*(&local4) = $tmp39;
// line 26
org$frostlang$frostc$IR* $tmp41 = *(&local0);
$fn43 $tmp42 = ($fn43) $tmp41->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp44 = $tmp42($tmp41, &$s45);
*(&local5) = $tmp44;
// line 27
org$frostlang$frostc$IR* $tmp46 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp47 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp48 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp49 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp50 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp49);
org$frostlang$frostc$IR$Block$ID $tmp51 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp52 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp47, $tmp48, param1, $tmp50, $tmp51, $tmp52);
$fn54 $tmp53 = ($fn54) $tmp46->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp55 = $tmp53($tmp46, $tmp47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// unreffing REF($114:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// unreffing REF($110:org.frostlang.frostc.IR.Statement)
// line 29
org$frostlang$frostc$IR* $tmp56 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp57 = *(&local3);
$fn59 $tmp58 = ($fn59) $tmp56->$class->vtable[4];
$tmp58($tmp56, $tmp57);
// line 30
org$frostlang$frostc$IR* $tmp60 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp61 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp62 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp63 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp64 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp61, $tmp62, param1, $tmp63, $tmp64);
$fn66 $tmp65 = ($fn66) $tmp60->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp67 = $tmp65($tmp60, $tmp61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
// unreffing REF($133:org.frostlang.frostc.IR.Statement)
// line 31
org$frostlang$frostc$IR* $tmp68 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp69 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp70 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp71 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp69, $tmp70, param1, $tmp71);
$fn73 $tmp72 = ($fn73) $tmp68->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp74 = $tmp72($tmp68, $tmp69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// unreffing REF($146:org.frostlang.frostc.IR.Statement)
// line 32
org$frostlang$frostc$IR* $tmp75 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp76 = *(&local4);
$fn78 $tmp77 = ($fn78) $tmp75->$class->vtable[4];
$tmp77($tmp75, $tmp76);
// line 33
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 1
// line 35
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp79 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp79, param0);
*(&local7) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp80 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
*(&local7) = $tmp79;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
// unreffing REF($164:org.frostlang.frostc.Compiler.AutoUnrefs)
// line 36
org$frostlang$frostc$Compiler$TypeContext* $tmp81 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp82 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp83 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp81, $tmp82, $tmp83);
org$frostlang$frostc$IR$Value* $tmp84 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp81);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
org$frostlang$frostc$IR$Value* $tmp85 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
*(&local6) = $tmp84;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
// unreffing REF($181:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// unreffing REF($179:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// unreffing REF($177:org.frostlang.frostc.Compiler.TypeContext)
// line 37
org$frostlang$frostc$IR$Value* $tmp86 = *(&local6);
frost$core$Bit $tmp87 = frost$core$Bit$init$builtin_bit($tmp86 == NULL);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block3; else goto block4;
block3:;
// line 38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp89 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
// unreffing unrefs
*(&local7) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp90 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing compiledRight
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp91 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// unreffing compiledLeft
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp92 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
// unreffing result
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp93 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block4:;
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp94 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// unreffing unrefs
*(&local7) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 41
org$frostlang$frostc$IR* $tmp95 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp96 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp97 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp98 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp99 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp96, $tmp97, param1, $tmp98, $tmp99);
$fn101 $tmp100 = ($fn101) $tmp95->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp102 = $tmp100($tmp95, $tmp96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
// unreffing REF($239:org.frostlang.frostc.IR.Statement)
// line 42
org$frostlang$frostc$IR* $tmp103 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp104 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp105 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp106 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp104, $tmp105, param1, $tmp106);
$fn108 $tmp107 = ($fn108) $tmp103->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp109 = $tmp107($tmp103, $tmp104);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// unreffing REF($252:org.frostlang.frostc.IR.Statement)
// line 43
org$frostlang$frostc$IR* $tmp110 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp111 = *(&local5);
$fn113 $tmp112 = ($fn113) $tmp110->$class->vtable[4];
$tmp112($tmp110, $tmp111);
// line 44
org$frostlang$frostc$IR* $tmp114 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp115 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp116 = (frost$core$Int64) {13};
org$frostlang$frostc$IR$Value* $tmp117 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp115, $tmp116, param1, $tmp117);
$fn119 $tmp118 = ($fn119) $tmp114->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp120 = $tmp118($tmp114, $tmp115);
*(&local8) = $tmp120;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
// unreffing REF($268:org.frostlang.frostc.IR.Statement)
// line 45
org$frostlang$frostc$IR$Value* $tmp121 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp122 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp123 = *(&local8);
org$frostlang$frostc$Type* $tmp124 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp121, $tmp122, $tmp123, $tmp124);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
// unreffing REF($282:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// unreffing REF($279:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$IR$Value* $tmp125 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
// unreffing compiledRight
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp126 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
// unreffing compiledLeft
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp127 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
// unreffing result
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp128 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp121;

}
void org$frostlang$frostc$expression$Or$init(org$frostlang$frostc$expression$Or* param0) {

return;

}
void org$frostlang$frostc$expression$Or$cleanup(org$frostlang$frostc$expression$Or* param0) {

// line 11
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






