#include "org/pandalanguage/pandac/lvalue/VariableLValue.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/lvalue/LValue.h"
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


struct { panda$core$Class* cl; ITable* next; void* methods[3]; } org$pandalanguage$pandac$lvalue$VariableLValue$_org$pandalanguage$pandac$lvalue$LValue = { (panda$core$Class*) &org$pandalanguage$pandac$lvalue$LValue$class, NULL, { org$pandalanguage$pandac$lvalue$VariableLValue$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$lvalue$VariableLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q, org$pandalanguage$pandac$lvalue$VariableLValue$compileStore$org$pandalanguage$pandac$IR$Value} };

static panda$core$String $s1;
org$pandalanguage$pandac$lvalue$VariableLValue$class_type org$pandalanguage$pandac$lvalue$VariableLValue$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$lvalue$VariableLValue$_org$pandalanguage$pandac$lvalue$LValue, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$lvalue$VariableLValue$cleanup, org$pandalanguage$pandac$lvalue$VariableLValue$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$lvalue$VariableLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q, org$pandalanguage$pandac$lvalue$VariableLValue$compileStore$org$pandalanguage$pandac$IR$Value} };

typedef org$pandalanguage$pandac$Type* (*$fn51)(org$pandalanguage$pandac$lvalue$VariableLValue*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn54)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$Type* (*$fn71)(org$pandalanguage$pandac$lvalue$VariableLValue*);
typedef org$pandalanguage$pandac$IR$Value* (*$fn80)(org$pandalanguage$pandac$lvalue$VariableLValue*);
typedef org$pandalanguage$pandac$Type* (*$fn100)(org$pandalanguage$pandac$lvalue$VariableLValue*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn103)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x4c\x56\x61\x6c\x75\x65", 46, 1447068326716113432, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x79\x69\x6e\x67\x20\x74\x6f\x20\x73\x74\x6f\x72\x65\x20\x69\x6e\x74\x6f\x20\x6e\x6f\x6e\x2d\x6c\x6f\x63\x61\x6c\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20", 40, -4389980992813749051, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x61\x74\x20", 4, 138031278, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x56\x61\x72\x69\x61\x62\x6c\x65\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 20, -554897390060984052, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x56\x61\x72\x69\x61\x62\x6c\x65\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 20, -554897390060984052, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };

void org$pandalanguage$pandac$lvalue$VariableLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$lvalue$VariableLValue* param0, org$pandalanguage$pandac$Compiler* param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$Variable* param3) {

panda$core$Int64 local0;
// line 17
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$Compiler** $tmp2 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 18
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
// line 20
panda$core$Int64 $tmp14 = *(&local0);
panda$core$Int64* $tmp15 = &param0->slot;
*$tmp15 = $tmp14;
goto block1;
block3:;
// line 23
panda$core$Bit $tmp16 = panda$core$Bit$init$builtin_bit(false);
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp18 = (panda$core$Int64) {23};
panda$core$String* $tmp19 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s20, ((panda$core$Object*) param3));
panda$core$String* $tmp21 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp19, &$s22);
org$pandalanguage$pandac$Position$wrapper* $tmp23;
$tmp23 = (org$pandalanguage$pandac$Position$wrapper*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
$tmp23->value = param2;
panda$core$String* $tmp24 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp21, ((panda$core$Object*) $tmp23));
panda$core$String* $tmp25 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp24, &$s26);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s27, $tmp18, $tmp25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
// unreffing REF($36:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
// unreffing REF($35:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
// unreffing REF($34:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
// unreffing REF($33:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
// unreffing REF($32:panda.core.String)
abort(); // unreachable
block4:;
goto block1;
block1:;
// line 26
org$pandalanguage$pandac$Position* $tmp28 = &param0->position;
*$tmp28 = param2;
return;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$lvalue$VariableLValue$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$lvalue$VariableLValue* param0) {

// line 31
org$pandalanguage$pandac$Compiler** $tmp29 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp30 = *$tmp29;
org$pandalanguage$pandac$IR** $tmp31 = &$tmp30->ir;
org$pandalanguage$pandac$IR* $tmp32 = *$tmp31;
panda$collections$Array** $tmp33 = &$tmp32->locals;
panda$collections$Array* $tmp34 = *$tmp33;
panda$core$Int64* $tmp35 = &param0->slot;
panda$core$Int64 $tmp36 = *$tmp35;
panda$core$Object* $tmp37 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp34, $tmp36);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp37)));
panda$core$Panda$unref$panda$core$Object$Q($tmp37);
// unreffing REF($10:panda.collections.Array.T)
return ((org$pandalanguage$pandac$Type*) $tmp37);

}
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$lvalue$VariableLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$lvalue$VariableLValue* param0) {

org$pandalanguage$pandac$IR$Statement$ID local0;
// line 36
org$pandalanguage$pandac$Compiler** $tmp38 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp39 = *$tmp38;
org$pandalanguage$pandac$IR** $tmp40 = &$tmp39->ir;
org$pandalanguage$pandac$IR* $tmp41 = *$tmp40;
org$pandalanguage$pandac$IR$Statement* $tmp42 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp43 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Position* $tmp44 = &param0->position;
org$pandalanguage$pandac$Position $tmp45 = *$tmp44;
org$pandalanguage$pandac$IR$Value* $tmp46 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp47 = (panda$core$Int64) {2};
panda$core$Int64* $tmp48 = &param0->slot;
panda$core$Int64 $tmp49 = *$tmp48;
$fn51 $tmp50 = ($fn51) param0->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp52 = $tmp50(param0);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp46, $tmp47, $tmp49, $tmp52);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp42, $tmp43, $tmp45, $tmp46);
$fn54 $tmp53 = ($fn54) $tmp41->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp55 = $tmp53($tmp41, $tmp42);
*(&local0) = $tmp55;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
// unreffing REF($14:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
// unreffing REF($9:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
// unreffing REF($5:org.pandalanguage.pandac.IR.Statement)
// line 37
org$pandalanguage$pandac$IR$Value* $tmp56 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp57 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp58 = *(&local0);
org$pandalanguage$pandac$Compiler** $tmp59 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp60 = *$tmp59;
org$pandalanguage$pandac$IR** $tmp61 = &$tmp60->ir;
org$pandalanguage$pandac$IR* $tmp62 = *$tmp61;
panda$collections$Array** $tmp63 = &$tmp62->locals;
panda$collections$Array* $tmp64 = *$tmp63;
panda$core$Int64* $tmp65 = &param0->slot;
panda$core$Int64 $tmp66 = *$tmp65;
panda$core$Object* $tmp67 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp64, $tmp66);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp56, $tmp57, $tmp58, ((org$pandalanguage$pandac$Type*) $tmp67));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
panda$core$Panda$unref$panda$core$Object$Q($tmp67);
// unreffing REF($42:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
// unreffing REF($30:org.pandalanguage.pandac.IR.Value)
return $tmp56;

}
void org$pandalanguage$pandac$lvalue$VariableLValue$compileStore$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$lvalue$VariableLValue* param0, org$pandalanguage$pandac$IR$Value* param1) {

// line 42
org$pandalanguage$pandac$Compiler** $tmp68 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp69 = *$tmp68;
$fn71 $tmp70 = ($fn71) param0->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp72 = $tmp70(param0);
panda$core$Bit $tmp73 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp69, $tmp72);
bool $tmp74 = $tmp73.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// unreffing REF($4:org.pandalanguage.pandac.Type)
if ($tmp74) goto block1; else goto block2;
block1:;
// line 43
org$pandalanguage$pandac$Compiler** $tmp75 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp76 = *$tmp75;
org$pandalanguage$pandac$Compiler$compileRef$org$pandalanguage$pandac$IR$Value($tmp76, param1);
// line 44
org$pandalanguage$pandac$Compiler** $tmp77 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp78 = *$tmp77;
$fn80 $tmp79 = ($fn80) param0->$class->vtable[3];
org$pandalanguage$pandac$IR$Value* $tmp81 = $tmp79(param0);
panda$core$Bit $tmp82 = panda$core$Bit$init$builtin_bit($tmp81 != NULL);
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp84 = (panda$core$Int64) {44};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s85, $tmp84, &$s86);
abort(); // unreachable
block3:;
org$pandalanguage$pandac$Compiler$compileUnref$org$pandalanguage$pandac$IR$Value($tmp78, $tmp81);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
// unreffing REF($19:org.pandalanguage.pandac.IR.Value?)
goto block2;
block2:;
// line 46
org$pandalanguage$pandac$Compiler** $tmp87 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp88 = *$tmp87;
org$pandalanguage$pandac$IR** $tmp89 = &$tmp88->ir;
org$pandalanguage$pandac$IR* $tmp90 = *$tmp89;
org$pandalanguage$pandac$IR$Statement* $tmp91 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp92 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position* $tmp93 = &param0->position;
org$pandalanguage$pandac$Position $tmp94 = *$tmp93;
org$pandalanguage$pandac$IR$Value* $tmp95 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp96 = (panda$core$Int64) {2};
panda$core$Int64* $tmp97 = &param0->slot;
panda$core$Int64 $tmp98 = *$tmp97;
$fn100 $tmp99 = ($fn100) param0->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp101 = $tmp99(param0);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp95, $tmp96, $tmp98, $tmp101);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp91, $tmp92, $tmp94, param1, $tmp95);
$fn103 $tmp102 = ($fn103) $tmp90->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp104 = $tmp102($tmp90, $tmp91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
// unreffing REF($47:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
// unreffing REF($42:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
// unreffing REF($38:org.pandalanguage.pandac.IR.Statement)
return;

}
void org$pandalanguage$pandac$lvalue$VariableLValue$cleanup(org$pandalanguage$pandac$lvalue$VariableLValue* param0) {

// line 9
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$Compiler** $tmp105 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp106 = *$tmp105;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
return;

}

