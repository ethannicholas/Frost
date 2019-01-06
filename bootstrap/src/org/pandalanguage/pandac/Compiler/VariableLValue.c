#include "org/pandalanguage/pandac/Compiler/VariableLValue.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler/LValue.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Variable/Storage.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/IR.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"
#include "org/pandalanguage/pandac/IR/Statement.h"


struct { panda$core$Class* cl; ITable* next; void* methods[3]; } org$pandalanguage$pandac$Compiler$VariableLValue$_org$pandalanguage$pandac$Compiler$LValue = { (panda$core$Class*) &org$pandalanguage$pandac$Compiler$LValue$class, NULL, { org$pandalanguage$pandac$Compiler$VariableLValue$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$VariableLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q, org$pandalanguage$pandac$Compiler$VariableLValue$compileStore$org$pandalanguage$pandac$IR$Value} };

static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$VariableLValue$class_type org$pandalanguage$pandac$Compiler$VariableLValue$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$VariableLValue$_org$pandalanguage$pandac$Compiler$LValue, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$VariableLValue$cleanup, org$pandalanguage$pandac$Compiler$VariableLValue$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$VariableLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q, org$pandalanguage$pandac$Compiler$VariableLValue$compileStore$org$pandalanguage$pandac$IR$Value} };

typedef org$pandalanguage$pandac$Type* (*$fn43)(org$pandalanguage$pandac$Compiler$VariableLValue*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn46)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$Type* (*$fn63)(org$pandalanguage$pandac$Compiler$VariableLValue*);
typedef org$pandalanguage$pandac$IR$Value* (*$fn72)(org$pandalanguage$pandac$Compiler$VariableLValue*);
typedef org$pandalanguage$pandac$Type* (*$fn87)(org$pandalanguage$pandac$Compiler$VariableLValue*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn90)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x4c\x56\x61\x6c\x75\x65", 48, -3300914184469935870, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x70\x61\x6e\x64\x61", 14, -3408958965109419534, NULL };

void org$pandalanguage$pandac$Compiler$VariableLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$Compiler$VariableLValue* param0, org$pandalanguage$pandac$Compiler* param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$Variable* param3) {

panda$core$Int64 local0;
// line 6084
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$Compiler** $tmp2 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 6085
org$pandalanguage$pandac$Variable$Storage** $tmp5 = &param3->storage;
org$pandalanguage$pandac$Variable$Storage* $tmp6 = *$tmp5;
panda$core$Int64* $tmp7 = &$tmp6->$rawValue;
panda$core$Int64 $tmp8 = *$tmp7;
panda$core$Int64 $tmp9 = (panda$core$Int64) {0};
panda$core$Bit $tmp10 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp8, $tmp9);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block2; else goto block3;
block2:;
panda$core$Int64* $tmp12 = (panda$core$Int64*) ($tmp6->$data + 0);
panda$core$Int64 $tmp13 = *$tmp12;
*(&local0) = $tmp13;
// line 6087
panda$core$Int64 $tmp14 = *(&local0);
panda$core$Int64* $tmp15 = &param0->slot;
*$tmp15 = $tmp14;
goto block1;
block3:;
// line 6090
panda$core$Bit $tmp16 = panda$core$Bit$init$builtin_bit(false);
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp18 = (panda$core$Int64) {6090};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s19, $tmp18);
abort(); // unreachable
block4:;
goto block1;
block1:;
// line 6093
org$pandalanguage$pandac$Position* $tmp20 = &param0->position;
*$tmp20 = param2;
return;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$VariableLValue$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler$VariableLValue* param0) {

// line 6098
org$pandalanguage$pandac$Compiler** $tmp21 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp22 = *$tmp21;
org$pandalanguage$pandac$IR** $tmp23 = &$tmp22->ir;
org$pandalanguage$pandac$IR* $tmp24 = *$tmp23;
panda$collections$Array** $tmp25 = &$tmp24->locals;
panda$collections$Array* $tmp26 = *$tmp25;
panda$core$Int64* $tmp27 = &param0->slot;
panda$core$Int64 $tmp28 = *$tmp27;
panda$core$Object* $tmp29 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp26, $tmp28);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp29)));
panda$core$Panda$unref$panda$core$Object$Q($tmp29);
// unreffing REF($10:panda.collections.Array.T)
return ((org$pandalanguage$pandac$Type*) $tmp29);

}
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$Compiler$VariableLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler$VariableLValue* param0) {

org$pandalanguage$pandac$IR$Statement$ID local0;
// line 6103
org$pandalanguage$pandac$Compiler** $tmp30 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp31 = *$tmp30;
org$pandalanguage$pandac$IR** $tmp32 = &$tmp31->ir;
org$pandalanguage$pandac$IR* $tmp33 = *$tmp32;
org$pandalanguage$pandac$IR$Statement* $tmp34 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp35 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Position* $tmp36 = &param0->position;
org$pandalanguage$pandac$Position $tmp37 = *$tmp36;
org$pandalanguage$pandac$IR$Value* $tmp38 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp39 = (panda$core$Int64) {2};
panda$core$Int64* $tmp40 = &param0->slot;
panda$core$Int64 $tmp41 = *$tmp40;
$fn43 $tmp42 = ($fn43) param0->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp44 = $tmp42(param0);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp38, $tmp39, $tmp41, $tmp44);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp34, $tmp35, $tmp37, $tmp38);
$fn46 $tmp45 = ($fn46) $tmp33->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp47 = $tmp45($tmp33, $tmp34);
*(&local0) = $tmp47;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
// unreffing REF($14:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
// unreffing REF($9:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// unreffing REF($5:org.pandalanguage.pandac.IR.Statement)
// line 6104
org$pandalanguage$pandac$IR$Value* $tmp48 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp49 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp50 = *(&local0);
org$pandalanguage$pandac$Compiler** $tmp51 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp52 = *$tmp51;
org$pandalanguage$pandac$IR** $tmp53 = &$tmp52->ir;
org$pandalanguage$pandac$IR* $tmp54 = *$tmp53;
panda$collections$Array** $tmp55 = &$tmp54->locals;
panda$collections$Array* $tmp56 = *$tmp55;
panda$core$Int64* $tmp57 = &param0->slot;
panda$core$Int64 $tmp58 = *$tmp57;
panda$core$Object* $tmp59 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp56, $tmp58);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp48, $tmp49, $tmp50, ((org$pandalanguage$pandac$Type*) $tmp59));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
panda$core$Panda$unref$panda$core$Object$Q($tmp59);
// unreffing REF($42:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
// unreffing REF($30:org.pandalanguage.pandac.IR.Value)
return $tmp48;

}
void org$pandalanguage$pandac$Compiler$VariableLValue$compileStore$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$Compiler$VariableLValue* param0, org$pandalanguage$pandac$IR$Value* param1) {

// line 6109
org$pandalanguage$pandac$Compiler** $tmp60 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp61 = *$tmp60;
$fn63 $tmp62 = ($fn63) param0->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp64 = $tmp62(param0);
panda$core$Bit $tmp65 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp61, $tmp64);
bool $tmp66 = $tmp65.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing REF($4:org.pandalanguage.pandac.Type)
if ($tmp66) goto block1; else goto block2;
block1:;
// line 6110
org$pandalanguage$pandac$Compiler** $tmp67 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp68 = *$tmp67;
org$pandalanguage$pandac$Compiler$compileRef$org$pandalanguage$pandac$IR$Value($tmp68, param1);
// line 6111
org$pandalanguage$pandac$Compiler** $tmp69 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp70 = *$tmp69;
$fn72 $tmp71 = ($fn72) param0->$class->vtable[3];
org$pandalanguage$pandac$IR$Value* $tmp73 = $tmp71(param0);
org$pandalanguage$pandac$Compiler$compileUnref$org$pandalanguage$pandac$IR$Value($tmp70, $tmp73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing REF($19:org.pandalanguage.pandac.IR.Value?)
goto block2;
block2:;
// line 6113
org$pandalanguage$pandac$Compiler** $tmp74 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp75 = *$tmp74;
org$pandalanguage$pandac$IR** $tmp76 = &$tmp75->ir;
org$pandalanguage$pandac$IR* $tmp77 = *$tmp76;
org$pandalanguage$pandac$IR$Statement* $tmp78 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp79 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position* $tmp80 = &param0->position;
org$pandalanguage$pandac$Position $tmp81 = *$tmp80;
org$pandalanguage$pandac$IR$Value* $tmp82 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp83 = (panda$core$Int64) {2};
panda$core$Int64* $tmp84 = &param0->slot;
panda$core$Int64 $tmp85 = *$tmp84;
$fn87 $tmp86 = ($fn87) param0->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp88 = $tmp86(param0);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp82, $tmp83, $tmp85, $tmp88);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp78, $tmp79, $tmp81, param1, $tmp82);
$fn90 $tmp89 = ($fn90) $tmp77->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp91 = $tmp89($tmp77, $tmp78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
// unreffing REF($40:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
// unreffing REF($35:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp78));
// unreffing REF($31:org.pandalanguage.pandac.IR.Statement)
return;

}
void org$pandalanguage$pandac$Compiler$VariableLValue$cleanup(org$pandalanguage$pandac$Compiler$VariableLValue* param0) {

// line 6076
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$Compiler** $tmp92 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp93 = *$tmp92;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
return;

}

