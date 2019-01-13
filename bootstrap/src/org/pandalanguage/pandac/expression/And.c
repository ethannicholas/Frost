#include "org/pandalanguage/pandac/expression/And.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "org/pandalanguage/pandac/IR.h"
#include "org/pandalanguage/pandac/IR/Block/ID.h"
#include "org/pandalanguage/pandac/Compiler/AutoUnrefs.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/collections/Array.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/IR/Statement.h"


static panda$core$String $s1;
org$pandalanguage$pandac$expression$And$class_type org$pandalanguage$pandac$expression$And$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$expression$And$cleanup} };

typedef panda$core$Int64 (*$fn12)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn33)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn38)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn43)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn54)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn59)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn82)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn89)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn94)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn101)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn108)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn113)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn119)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x6e\x64", 39, 985718176122599571, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x64\x20\x74\x72\x75\x65", 8, 21346101648957588, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x64\x20\x66\x61\x6c\x73\x65", 9, 2155956265070265363, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x64\x20\x6d\x65\x72\x67\x65", 9, 2155956265802869368, NULL };

org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$And$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$ASTNode* param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$Compiler$TypeContext* param4) {

org$pandalanguage$pandac$IR* local0 = NULL;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
org$pandalanguage$pandac$IR$Value* local2 = NULL;
org$pandalanguage$pandac$IR$Block$ID local3;
org$pandalanguage$pandac$IR$Block$ID local4;
org$pandalanguage$pandac$IR$Block$ID local5;
org$pandalanguage$pandac$IR$Value* local6 = NULL;
org$pandalanguage$pandac$Compiler$AutoUnrefs* local7 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local8;
// line 15
org$pandalanguage$pandac$IR** $tmp2 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$IR* $tmp4 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
*(&local0) = $tmp3;
// line 17
org$pandalanguage$pandac$IR$Value* $tmp5 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp6 = (panda$core$Int64) {2};
org$pandalanguage$pandac$IR* $tmp7 = *(&local0);
panda$collections$Array** $tmp8 = &$tmp7->locals;
panda$collections$Array* $tmp9 = *$tmp8;
ITable* $tmp10 = ((panda$collections$CollectionView*) $tmp9)->$class->itable;
while ($tmp10->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[0];
panda$core$Int64 $tmp13 = $tmp11(((panda$collections$CollectionView*) $tmp9));
org$pandalanguage$pandac$Type* $tmp14 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp5, $tmp6, $tmp13, $tmp14);
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
org$pandalanguage$pandac$IR$Value* $tmp15 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
*(&local1) = $tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
// unreffing REF($19:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
// unreffing REF($11:org.pandalanguage.pandac.IR.Value)
// line 18
org$pandalanguage$pandac$IR* $tmp16 = *(&local0);
panda$collections$Array** $tmp17 = &$tmp16->locals;
panda$collections$Array* $tmp18 = *$tmp17;
org$pandalanguage$pandac$Type* $tmp19 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
panda$collections$Array$add$panda$collections$Array$T($tmp18, ((panda$core$Object*) $tmp19));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
// unreffing REF($39:org.pandalanguage.pandac.Type)
// line 19
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 20
org$pandalanguage$pandac$Compiler$TypeContext* $tmp20 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp21 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp22 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp20, $tmp21, $tmp22);
org$pandalanguage$pandac$IR$Value* $tmp23 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param2, $tmp20);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
org$pandalanguage$pandac$IR$Value* $tmp24 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
*(&local2) = $tmp23;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
// unreffing REF($52:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
// unreffing REF($50:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
// unreffing REF($48:org.pandalanguage.pandac.Compiler.TypeContext)
// line 21
org$pandalanguage$pandac$IR$Value* $tmp25 = *(&local2);
panda$core$Bit $tmp26 = panda$core$Bit$init$builtin_bit($tmp25 == NULL);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block1; else goto block2;
block1:;
// line 22
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp28 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
// unreffing compiledLeft
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp29 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
// unreffing result
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp30 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block2:;
// line 24
org$pandalanguage$pandac$IR* $tmp31 = *(&local0);
$fn33 $tmp32 = ($fn33) $tmp31->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp34 = $tmp32($tmp31, &$s35);
*(&local3) = $tmp34;
// line 25
org$pandalanguage$pandac$IR* $tmp36 = *(&local0);
$fn38 $tmp37 = ($fn38) $tmp36->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp39 = $tmp37($tmp36, &$s40);
*(&local4) = $tmp39;
// line 26
org$pandalanguage$pandac$IR* $tmp41 = *(&local0);
$fn43 $tmp42 = ($fn43) $tmp41->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp44 = $tmp42($tmp41, &$s45);
*(&local5) = $tmp44;
// line 27
org$pandalanguage$pandac$IR* $tmp46 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp47 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp48 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp49 = *(&local2);
org$pandalanguage$pandac$IR$Value* $tmp50 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp49);
org$pandalanguage$pandac$IR$Block$ID $tmp51 = *(&local3);
org$pandalanguage$pandac$IR$Block$ID $tmp52 = *(&local4);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp47, $tmp48, param1, $tmp50, $tmp51, $tmp52);
$fn54 $tmp53 = ($fn54) $tmp46->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp55 = $tmp53($tmp46, $tmp47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
// unreffing REF($114:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
// unreffing REF($110:org.pandalanguage.pandac.IR.Statement)
// line 29
org$pandalanguage$pandac$IR* $tmp56 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp57 = *(&local3);
$fn59 $tmp58 = ($fn59) $tmp56->$class->vtable[4];
$tmp58($tmp56, $tmp57);
// line 30
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 1
// line 32
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp60 = (org$pandalanguage$pandac$Compiler$AutoUnrefs*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoUnrefs$class);
org$pandalanguage$pandac$Compiler$AutoUnrefs$init$org$pandalanguage$pandac$Compiler($tmp60, param0);
*(&local7) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp61 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
*(&local7) = $tmp60;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
// unreffing REF($135:org.pandalanguage.pandac.Compiler.AutoUnrefs)
// line 33
org$pandalanguage$pandac$Compiler$TypeContext* $tmp62 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp63 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp64 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp62, $tmp63, $tmp64);
org$pandalanguage$pandac$IR$Value* $tmp65 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param3, $tmp62);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
org$pandalanguage$pandac$IR$Value* $tmp66 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
*(&local6) = $tmp65;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing REF($152:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing REF($150:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
// unreffing REF($148:org.pandalanguage.pandac.Compiler.TypeContext)
// line 34
org$pandalanguage$pandac$IR$Value* $tmp67 = *(&local6);
panda$core$Bit $tmp68 = panda$core$Bit$init$builtin_bit($tmp67 == NULL);
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block3; else goto block4;
block3:;
// line 35
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp70 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
// unreffing unrefs
*(&local7) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp71 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
// unreffing compiledRight
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp72 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// unreffing compiledLeft
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp73 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing result
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp74 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block4:;
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp75 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing unrefs
*(&local7) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
// line 38
org$pandalanguage$pandac$IR* $tmp76 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp77 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp78 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp79 = *(&local6);
org$pandalanguage$pandac$IR$Value* $tmp80 = *(&local1);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp77, $tmp78, param1, $tmp79, $tmp80);
$fn82 $tmp81 = ($fn82) $tmp76->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp83 = $tmp81($tmp76, $tmp77);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
// unreffing REF($210:org.pandalanguage.pandac.IR.Statement)
// line 39
org$pandalanguage$pandac$IR* $tmp84 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp85 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp86 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp87 = *(&local5);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp85, $tmp86, param1, $tmp87);
$fn89 $tmp88 = ($fn89) $tmp84->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp90 = $tmp88($tmp84, $tmp85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
// unreffing REF($223:org.pandalanguage.pandac.IR.Statement)
// line 40
org$pandalanguage$pandac$IR* $tmp91 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp92 = *(&local4);
$fn94 $tmp93 = ($fn94) $tmp91->$class->vtable[4];
$tmp93($tmp91, $tmp92);
// line 41
org$pandalanguage$pandac$IR* $tmp95 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp96 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp97 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp98 = *(&local2);
org$pandalanguage$pandac$IR$Value* $tmp99 = *(&local1);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp96, $tmp97, param1, $tmp98, $tmp99);
$fn101 $tmp100 = ($fn101) $tmp95->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp102 = $tmp100($tmp95, $tmp96);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
// unreffing REF($239:org.pandalanguage.pandac.IR.Statement)
// line 42
org$pandalanguage$pandac$IR* $tmp103 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp104 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp105 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp106 = *(&local5);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp104, $tmp105, param1, $tmp106);
$fn108 $tmp107 = ($fn108) $tmp103->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp109 = $tmp107($tmp103, $tmp104);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
// unreffing REF($252:org.pandalanguage.pandac.IR.Statement)
// line 43
org$pandalanguage$pandac$IR* $tmp110 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp111 = *(&local5);
$fn113 $tmp112 = ($fn113) $tmp110->$class->vtable[4];
$tmp112($tmp110, $tmp111);
// line 44
org$pandalanguage$pandac$IR* $tmp114 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp115 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp116 = (panda$core$Int64) {13};
org$pandalanguage$pandac$IR$Value* $tmp117 = *(&local1);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp115, $tmp116, param1, $tmp117);
$fn119 $tmp118 = ($fn119) $tmp114->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp120 = $tmp118($tmp114, $tmp115);
*(&local8) = $tmp120;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
// unreffing REF($268:org.pandalanguage.pandac.IR.Statement)
// line 45
org$pandalanguage$pandac$IR$Value* $tmp121 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp122 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp123 = *(&local8);
org$pandalanguage$pandac$Type* $tmp124 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp121, $tmp122, $tmp123, $tmp124);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
// unreffing REF($282:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
// unreffing REF($279:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$IR$Value* $tmp125 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
// unreffing compiledRight
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp126 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
// unreffing compiledLeft
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp127 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
// unreffing result
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp128 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp121;

}
void org$pandalanguage$pandac$expression$And$init(org$pandalanguage$pandac$expression$And* param0) {

return;

}
void org$pandalanguage$pandac$expression$And$cleanup(org$pandalanguage$pandac$expression$And* param0) {

// line 11
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






