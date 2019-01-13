#include "org/pandalanguage/pandac/expression/ArrayLiteral.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/collections/Array.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/UInt64.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/expression/Call.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"


static panda$core$String $s1;
org$pandalanguage$pandac$expression$ArrayLiteral$class_type org$pandalanguage$pandac$expression$ArrayLiteral$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$expression$ArrayLiteral$cleanup} };

typedef panda$core$Int64 (*$fn62)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn77)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn81)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn86)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c", 48, -2836358604444930128, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x20\x74\x79\x70\x65\x20\x6f\x66\x20\x61\x72\x72\x61\x79\x20\x6c\x69\x74\x65\x72\x61\x6c", 38, 5390391589679961556, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x64\x64", 3, 2029998, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x72\x6f\x6d", 4, 210325337, NULL };

org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$ArrayLiteral$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$FixedArray* param2, org$pandalanguage$pandac$Compiler$TypeContext* param3) {

org$pandalanguage$pandac$Pair* local0 = NULL;
org$pandalanguage$pandac$Type* local1 = NULL;
org$pandalanguage$pandac$Type* local2 = NULL;
org$pandalanguage$pandac$Type* local3 = NULL;
org$pandalanguage$pandac$Type* local4 = NULL;
org$pandalanguage$pandac$IR$Value* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
// line 16
*(&local0) = ((org$pandalanguage$pandac$Pair*) NULL);
// line 17
panda$core$Int64* $tmp2 = &param3->$rawValue;
panda$core$Int64 $tmp3 = *$tmp2;
panda$core$Int64 $tmp4 = (panda$core$Int64) {3};
panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Type** $tmp7 = (org$pandalanguage$pandac$Type**) (param3->$data + 0);
org$pandalanguage$pandac$Type* $tmp8 = *$tmp7;
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
org$pandalanguage$pandac$Type* $tmp9 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
*(&local1) = $tmp8;
// line 19
org$pandalanguage$pandac$Type* $tmp10 = *(&local1);
org$pandalanguage$pandac$Pair* $tmp11 = org$pandalanguage$pandac$Compiler$getListType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$Type$GT$Q(param0, $tmp10);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
org$pandalanguage$pandac$Pair* $tmp12 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
*(&local0) = $tmp11;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
// unreffing REF($20:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.Type>?)
// line 20
org$pandalanguage$pandac$Pair* $tmp13 = *(&local0);
panda$core$Bit $tmp14 = panda$core$Bit$init$builtin_bit($tmp13 == NULL);
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block4; else goto block5;
block4:;
// line 23
org$pandalanguage$pandac$ASTNode* $tmp16 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp17 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp16, $tmp17, param1, param2);
org$pandalanguage$pandac$Type* $tmp18 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type$Q(param0, $tmp16);
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
org$pandalanguage$pandac$Type* $tmp19 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
*(&local2) = $tmp18;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
// unreffing REF($40:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
// unreffing REF($37:org.pandalanguage.pandac.ASTNode)
// line 24
org$pandalanguage$pandac$Type* $tmp20 = *(&local2);
panda$core$Bit $tmp21 = panda$core$Bit$init$builtin_bit($tmp20 != NULL);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block6; else goto block7;
block6:;
// line 25
org$pandalanguage$pandac$Type* $tmp23 = *(&local2);
org$pandalanguage$pandac$Pair* $tmp24 = org$pandalanguage$pandac$Compiler$getListType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$Type$GT$Q(param0, $tmp23);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
org$pandalanguage$pandac$Pair* $tmp25 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
*(&local0) = $tmp24;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
// unreffing REF($63:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.Type>?)
goto block7;
block7:;
// line 27
org$pandalanguage$pandac$Pair* $tmp26 = *(&local0);
panda$core$Bit $tmp27 = panda$core$Bit$init$builtin_bit($tmp26 == NULL);
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block8; else goto block9;
block8:;
// line 28
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s29);
// line 29
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp30 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// unreffing preferred
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp31 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Pair* $tmp32 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
// unreffing listType
*(&local0) = ((org$pandalanguage$pandac$Pair*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block9:;
org$pandalanguage$pandac$Type* $tmp33 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
// unreffing preferred
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block5;
block5:;
org$pandalanguage$pandac$Type* $tmp34 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block3:;
// line 34
org$pandalanguage$pandac$ASTNode* $tmp35 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp36 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp35, $tmp36, param1, param2);
org$pandalanguage$pandac$Type* $tmp37 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type$Q(param0, $tmp35);
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
org$pandalanguage$pandac$Type* $tmp38 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
*(&local3) = $tmp37;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
// unreffing REF($117:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// unreffing REF($114:org.pandalanguage.pandac.ASTNode)
// line 35
org$pandalanguage$pandac$Type* $tmp39 = *(&local3);
panda$core$Bit $tmp40 = panda$core$Bit$init$builtin_bit($tmp39 == NULL);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block10; else goto block11;
block10:;
// line 36
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp42 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
// unreffing t
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Pair* $tmp43 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
// unreffing listType
*(&local0) = ((org$pandalanguage$pandac$Pair*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block11:;
// line 38
org$pandalanguage$pandac$Type* $tmp44 = *(&local3);
org$pandalanguage$pandac$Pair* $tmp45 = org$pandalanguage$pandac$Compiler$getListType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$Type$GT$Q(param0, $tmp44);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
org$pandalanguage$pandac$Pair* $tmp46 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
*(&local0) = $tmp45;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
// unreffing REF($154:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.Type>?)
org$pandalanguage$pandac$Type* $tmp47 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
// unreffing t
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block1:;
// line 41
org$pandalanguage$pandac$Pair* $tmp48 = *(&local0);
panda$core$Object** $tmp49 = &$tmp48->second;
panda$core$Object* $tmp50 = *$tmp49;
org$pandalanguage$pandac$Type* $tmp51 = org$pandalanguage$pandac$Type$ArrayOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp50));
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
org$pandalanguage$pandac$Type* $tmp52 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
*(&local4) = $tmp51;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// unreffing REF($176:org.pandalanguage.pandac.Type)
// line 42
org$pandalanguage$pandac$IR$Value* $tmp53 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp54 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type* $tmp55 = *(&local4);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp53, $tmp54, $tmp55);
panda$collections$Array* $tmp56 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp57 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp56, $tmp57);
org$pandalanguage$pandac$ASTNode* $tmp58 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp59 = (panda$core$Int64) {25};
ITable* $tmp60 = ((panda$collections$CollectionView*) param2)->$class->itable;
while ($tmp60->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp60 = $tmp60->next;
}
$fn62 $tmp61 = $tmp60->methods[0];
panda$core$Int64 $tmp63 = $tmp61(((panda$collections$CollectionView*) param2));
panda$core$UInt64 $tmp64 = panda$core$Int64$convert$R$panda$core$UInt64($tmp63);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp58, $tmp59, param1, $tmp64);
panda$collections$Array$add$panda$collections$Array$T($tmp56, ((panda$core$Object*) $tmp58));
org$pandalanguage$pandac$Compiler$TypeContext* $tmp65 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp66 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp65, $tmp66);
org$pandalanguage$pandac$IR$Value* $tmp67 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp53, ((panda$collections$ListView*) $tmp56), $tmp65);
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
org$pandalanguage$pandac$IR$Value* $tmp68 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
*(&local5) = $tmp67;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// unreffing REF($210:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing REF($207:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
// unreffing REF($197:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
// unreffing REF($192:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
// unreffing REF($188:org.pandalanguage.pandac.IR.Value)
// line 45
org$pandalanguage$pandac$IR$Value* $tmp69 = *(&local5);
panda$core$Bit $tmp70 = panda$core$Bit$init$builtin_bit($tmp69 == NULL);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block12; else goto block13;
block12:;
// line 46
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp72 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// unreffing result
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp73 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing arrayType
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Pair* $tmp74 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
// unreffing listType
*(&local0) = ((org$pandalanguage$pandac$Pair*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block13:;
// line 48
ITable* $tmp75 = ((panda$collections$Iterable*) param2)->$class->itable;
while ($tmp75->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp75 = $tmp75->next;
}
$fn77 $tmp76 = $tmp75->methods[0];
panda$collections$Iterator* $tmp78 = $tmp76(((panda$collections$Iterable*) param2));
goto block14;
block14:;
ITable* $tmp79 = $tmp78->$class->itable;
while ($tmp79->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp79 = $tmp79->next;
}
$fn81 $tmp80 = $tmp79->methods[0];
panda$core$Bit $tmp82 = $tmp80($tmp78);
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block16; else goto block15;
block15:;
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp84 = $tmp78->$class->itable;
while ($tmp84->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp84 = $tmp84->next;
}
$fn86 $tmp85 = $tmp84->methods[1];
panda$core$Object* $tmp87 = $tmp85($tmp78);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp87)));
org$pandalanguage$pandac$ASTNode* $tmp88 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) $tmp87);
// line 49
org$pandalanguage$pandac$IR$Value* $tmp89 = *(&local5);
panda$collections$Array* $tmp90 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp91 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp90, $tmp91);
org$pandalanguage$pandac$ASTNode* $tmp92 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp90, ((panda$core$Object*) $tmp92));
org$pandalanguage$pandac$Compiler$TypeContext* $tmp93 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp94 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp93, $tmp94);
org$pandalanguage$pandac$IR$Value* $tmp95 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp89, &$s96, ((panda$collections$ListView*) $tmp90), $tmp93);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
// unreffing REF($296:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
// unreffing REF($293:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// unreffing REF($284:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q($tmp87);
// unreffing REF($273:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp97 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
// unreffing e
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block14;
block16:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp78));
// unreffing REF($262:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 51
org$pandalanguage$pandac$Pair* $tmp98 = *(&local0);
panda$core$Object** $tmp99 = &$tmp98->first;
panda$core$Object* $tmp100 = *$tmp99;
panda$core$Bit $tmp101 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) $tmp100)->value);
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block17; else goto block18;
block17:;
// line 52
org$pandalanguage$pandac$IR$Value* $tmp103 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp104 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Pair* $tmp105 = *(&local0);
panda$core$Object** $tmp106 = &$tmp105->second;
panda$core$Object* $tmp107 = *$tmp106;
org$pandalanguage$pandac$Type* $tmp108 = org$pandalanguage$pandac$Type$ImmutableArrayOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp107));
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp103, $tmp104, $tmp108);
panda$collections$Array* $tmp109 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp110 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp109, $tmp110);
org$pandalanguage$pandac$ASTNode* $tmp111 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp112 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp113 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp111, $tmp112, param1, $tmp113);
panda$collections$Array$add$panda$collections$Array$T($tmp109, ((panda$core$Object*) $tmp111));
org$pandalanguage$pandac$Compiler$TypeContext* $tmp114 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp115 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp114, $tmp115);
org$pandalanguage$pandac$IR$Value* $tmp116 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp103, &$s117, ((panda$collections$ListView*) $tmp109), $tmp114);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
org$pandalanguage$pandac$IR$Value* $tmp118 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
*(&local5) = $tmp116;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
// unreffing REF($353:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
// unreffing REF($350:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
// unreffing REF($342:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
// unreffing REF($337:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
// unreffing REF($335:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
// unreffing REF($328:org.pandalanguage.pandac.IR.Value)
// line 55
org$pandalanguage$pandac$IR$Value* $tmp119 = *(&local5);
panda$core$Bit $tmp120 = panda$core$Bit$init$builtin_bit($tmp119 == NULL);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block19; else goto block20;
block19:;
// line 56
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp122 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
// unreffing result
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp123 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp123));
// unreffing arrayType
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Pair* $tmp124 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
// unreffing listType
*(&local0) = ((org$pandalanguage$pandac$Pair*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block20:;
goto block18;
block18:;
// line 59
org$pandalanguage$pandac$IR$Value* $tmp125 = *(&local5);
org$pandalanguage$pandac$IR$Value* $tmp126 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp125, param3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
// unreffing REF($406:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$IR$Value* $tmp127 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
// unreffing result
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp128 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
// unreffing arrayType
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Pair* $tmp129 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
// unreffing listType
*(&local0) = ((org$pandalanguage$pandac$Pair*) NULL);
return $tmp126;

}
void org$pandalanguage$pandac$expression$ArrayLiteral$init(org$pandalanguage$pandac$expression$ArrayLiteral* param0) {

return;

}
void org$pandalanguage$pandac$expression$ArrayLiteral$cleanup(org$pandalanguage$pandac$expression$ArrayLiteral* param0) {

// line 12
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






