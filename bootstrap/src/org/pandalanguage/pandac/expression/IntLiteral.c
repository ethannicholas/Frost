#include "org/pandalanguage/pandac/expression/IntLiteral.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/core/Equatable.h"
#include "panda/core/Real64.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/expression/Call.h"


static panda$core$String $s1;
org$pandalanguage$pandac$expression$IntLiteral$class_type org$pandalanguage$pandac$expression$IntLiteral$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$expression$IntLiteral$cleanup} };

typedef panda$core$Bit (*$fn19)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn31)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn48)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x49\x6e\x74\x4c\x69\x74\x65\x72\x61\x6c", 46, 3123776283359885168, NULL };

org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$IntLiteral$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$UInt64$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, panda$core$UInt64 param2, org$pandalanguage$pandac$Compiler$TypeContext* param3) {

org$pandalanguage$pandac$Type* local0 = NULL;
panda$core$Bit local1;
// line 14
panda$core$Int64* $tmp2 = &param3->$rawValue;
panda$core$Int64 $tmp3 = *$tmp2;
panda$core$Int64 $tmp4 = (panda$core$Int64) {3};
panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block1;
block2:;
org$pandalanguage$pandac$Type** $tmp7 = (org$pandalanguage$pandac$Type**) (param3->$data + 0);
org$pandalanguage$pandac$Type* $tmp8 = *$tmp7;
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
org$pandalanguage$pandac$Type* $tmp9 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
*(&local0) = $tmp8;
// line 16
org$pandalanguage$pandac$Type* $tmp10 = *(&local0);
org$pandalanguage$pandac$Type$Kind* $tmp11 = &$tmp10->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp12 = *$tmp11;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp13;
$tmp13 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp13->value = $tmp12;
panda$core$Int64 $tmp14 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Type$Kind $tmp15 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp14);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp16;
$tmp16 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp16->value = $tmp15;
ITable* $tmp17 = ((panda$core$Equatable*) $tmp13)->$class->itable;
while ($tmp17->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp17 = $tmp17->next;
}
$fn19 $tmp18 = $tmp17->methods[0];
panda$core$Bit $tmp20 = $tmp18(((panda$core$Equatable*) $tmp13), ((panda$core$Equatable*) $tmp16));
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block5; else goto block6;
block5:;
*(&local1) = $tmp20;
goto block7;
block6:;
org$pandalanguage$pandac$Type* $tmp22 = *(&local0);
org$pandalanguage$pandac$Type$Kind* $tmp23 = &$tmp22->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp24 = *$tmp23;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp25;
$tmp25 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp25->value = $tmp24;
panda$core$Int64 $tmp26 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type$Kind $tmp27 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp26);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp28;
$tmp28 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp28->value = $tmp27;
ITable* $tmp29 = ((panda$core$Equatable*) $tmp25)->$class->itable;
while ($tmp29->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp29 = $tmp29->next;
}
$fn31 $tmp30 = $tmp29->methods[0];
panda$core$Bit $tmp32 = $tmp30(((panda$core$Equatable*) $tmp25), ((panda$core$Equatable*) $tmp28));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp28)));
// unreffing REF($38:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp25)));
// unreffing REF($34:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local1) = $tmp32;
goto block7;
block7:;
panda$core$Bit $tmp33 = *(&local1);
bool $tmp34 = $tmp33.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp16)));
// unreffing REF($24:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp13)));
// unreffing REF($20:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp34) goto block3; else goto block4;
block3:;
// line 17
org$pandalanguage$pandac$IR$Value* $tmp35 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp36 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type* $tmp37 = *(&local0);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$UInt64$org$pandalanguage$pandac$Type($tmp35, $tmp36, param2, $tmp37);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// unreffing REF($59:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$Type* $tmp38 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp35;
block4:;
// line 19
org$pandalanguage$pandac$Type* $tmp39 = *(&local0);
org$pandalanguage$pandac$Type$Kind* $tmp40 = &$tmp39->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp41 = *$tmp40;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp42;
$tmp42 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp42->value = $tmp41;
panda$core$Int64 $tmp43 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Type$Kind $tmp44 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp43);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp45;
$tmp45 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp45->value = $tmp44;
ITable* $tmp46 = ((panda$core$Equatable*) $tmp42)->$class->itable;
while ($tmp46->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp46 = $tmp46->next;
}
$fn48 $tmp47 = $tmp46->methods[0];
panda$core$Bit $tmp49 = $tmp47(((panda$core$Equatable*) $tmp42), ((panda$core$Equatable*) $tmp45));
bool $tmp50 = $tmp49.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp45)));
// unreffing REF($83:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp42)));
// unreffing REF($79:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp50) goto block8; else goto block9;
block8:;
// line 20
org$pandalanguage$pandac$IR$Value* $tmp51 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp52 = (panda$core$Int64) {6};
panda$core$Real64 $tmp53 = panda$core$Real64$init$panda$core$UInt64(param2);
org$pandalanguage$pandac$Type* $tmp54 = *(&local0);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Real64$org$pandalanguage$pandac$Type($tmp51, $tmp52, $tmp53, $tmp54);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// unreffing REF($95:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$Type* $tmp55 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp51;
block9:;
// line 22
org$pandalanguage$pandac$Type* $tmp56 = *(&local0);
panda$core$Bit $tmp57 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit($tmp56);
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block10; else goto block11;
block10:;
// line 23
org$pandalanguage$pandac$IR$Value* $tmp59 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp60 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type* $tmp61 = *(&local0);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp59, $tmp60, $tmp61);
panda$collections$Array* $tmp62 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp63 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp62, $tmp63);
org$pandalanguage$pandac$ASTNode* $tmp64 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp65 = (panda$core$Int64) {25};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp64, $tmp65, param1, param2);
panda$collections$Array$add$panda$collections$Array$T($tmp62, ((panda$core$Object*) $tmp64));
org$pandalanguage$pandac$IR$Value* $tmp66 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp59, ((panda$collections$ListView*) $tmp62), param3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
// unreffing REF($133:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing REF($127:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
// unreffing REF($122:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
// unreffing REF($118:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$Type* $tmp67 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp66;
block11:;
org$pandalanguage$pandac$Type* $tmp68 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block1:;
// line 28
org$pandalanguage$pandac$Compiler$TypeContext* $tmp69 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp70 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp71 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp69, $tmp70, $tmp71);
org$pandalanguage$pandac$IR$Value* $tmp72 = org$pandalanguage$pandac$expression$IntLiteral$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$UInt64$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, $tmp69);
org$pandalanguage$pandac$IR$Value* $tmp73 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp72, param3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing REF($166:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// unreffing REF($165:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
// unreffing REF($163:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
// unreffing REF($161:org.pandalanguage.pandac.Compiler.TypeContext)
return $tmp73;

}
void org$pandalanguage$pandac$expression$IntLiteral$init(org$pandalanguage$pandac$expression$IntLiteral* param0) {

return;

}
void org$pandalanguage$pandac$expression$IntLiteral$cleanup(org$pandalanguage$pandac$expression$IntLiteral* param0) {

// line 10
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}






