#include "org/pandalanguage/pandac/lvalue/ChoiceFieldLValue.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/lvalue/LValue.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/ChoiceCase.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/collections/Array.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"
#include "org/pandalanguage/pandac/IR.h"
#include "org/pandalanguage/pandac/IR/Statement.h"


struct { panda$core$Class* cl; ITable* next; void* methods[3]; } org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$_org$pandalanguage$pandac$lvalue$LValue = { (panda$core$Class*) &org$pandalanguage$pandac$lvalue$LValue$class, NULL, { org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q, org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$compileStore$org$pandalanguage$pandac$IR$Value} };

static panda$core$String $s1;
org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$class_type org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$_org$pandalanguage$pandac$lvalue$LValue, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$cleanup, org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q, org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$compileStore$org$pandalanguage$pandac$IR$Value} };

typedef org$pandalanguage$pandac$Type* (*$fn31)(org$pandalanguage$pandac$lvalue$ChoiceFieldLValue*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn52)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn73)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 49, 7318647344579589797, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 23, -6371488786330827919, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 23, -6371488786330827919, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x4c\x6f\x61\x64\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 130, 6950814508221530831, NULL };

void org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64(org$pandalanguage$pandac$lvalue$ChoiceFieldLValue* param0, org$pandalanguage$pandac$Compiler* param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$ChoiceCase* param4, panda$core$Int64 param5) {

// line 22
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$Compiler** $tmp2 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 23
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp5 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
org$pandalanguage$pandac$IR$Value** $tmp7 = &param0->target;
*$tmp7 = param3;
// line 24
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ChoiceCase** $tmp8 = &param0->choiceCase;
org$pandalanguage$pandac$ChoiceCase* $tmp9 = *$tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
org$pandalanguage$pandac$ChoiceCase** $tmp10 = &param0->choiceCase;
*$tmp10 = param4;
// line 25
panda$core$Int64* $tmp11 = &param0->index;
*$tmp11 = param5;
return;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$lvalue$ChoiceFieldLValue* param0) {

// line 30
org$pandalanguage$pandac$ChoiceCase** $tmp12 = &param0->choiceCase;
org$pandalanguage$pandac$ChoiceCase* $tmp13 = *$tmp12;
panda$collections$Array** $tmp14 = &$tmp13->fields;
panda$collections$Array* $tmp15 = *$tmp14;
panda$core$Int64* $tmp16 = &param0->index;
panda$core$Int64 $tmp17 = *$tmp16;
panda$core$Object* $tmp18 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp15, $tmp17);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp18)));
panda$core$Panda$unref$panda$core$Object$Q($tmp18);
// unreffing REF($8:panda.collections.Array.T)
return ((org$pandalanguage$pandac$Type*) $tmp18);

}
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$lvalue$ChoiceFieldLValue* param0) {

// line 35
panda$core$Bit $tmp19 = panda$core$Bit$init$builtin_bit(false);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp21 = (panda$core$Int64) {35};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s22, $tmp21);
abort(); // unreachable
block1:;
panda$core$Bit $tmp23 = panda$core$Bit$init$builtin_bit(false);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp25 = (panda$core$Int64) {34};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s26, $tmp25, &$s27);
abort(); // unreachable
block3:;
abort(); // unreachable

}
void org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$compileStore$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$lvalue$ChoiceFieldLValue* param0, org$pandalanguage$pandac$IR$Value* param1) {

org$pandalanguage$pandac$IR$Statement$ID local0;
// line 40
org$pandalanguage$pandac$Compiler** $tmp28 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp29 = *$tmp28;
$fn31 $tmp30 = ($fn31) param0->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp32 = $tmp30(param0);
panda$core$Bit $tmp33 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp29, $tmp32);
bool $tmp34 = $tmp33.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
// unreffing REF($4:org.pandalanguage.pandac.Type)
if ($tmp34) goto block1; else goto block2;
block1:;
// line 41
org$pandalanguage$pandac$Compiler** $tmp35 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp36 = *$tmp35;
org$pandalanguage$pandac$Compiler$compileRef$org$pandalanguage$pandac$IR$Value($tmp36, param1);
goto block2;
block2:;
// line 43
org$pandalanguage$pandac$Compiler** $tmp37 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp38 = *$tmp37;
org$pandalanguage$pandac$IR** $tmp39 = &$tmp38->ir;
org$pandalanguage$pandac$IR* $tmp40 = *$tmp39;
org$pandalanguage$pandac$IR$Statement* $tmp41 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp42 = (panda$core$Int64) {4};
org$pandalanguage$pandac$Position* $tmp43 = &param0->position;
org$pandalanguage$pandac$Position $tmp44 = *$tmp43;
org$pandalanguage$pandac$IR$Value** $tmp45 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp46 = *$tmp45;
org$pandalanguage$pandac$ChoiceCase** $tmp47 = &param0->choiceCase;
org$pandalanguage$pandac$ChoiceCase* $tmp48 = *$tmp47;
panda$core$Int64* $tmp49 = &param0->index;
panda$core$Int64 $tmp50 = *$tmp49;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64($tmp41, $tmp42, $tmp44, $tmp46, $tmp48, $tmp50);
$fn52 $tmp51 = ($fn52) $tmp40->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp53 = $tmp51($tmp40, $tmp41);
*(&local0) = $tmp53;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// unreffing REF($21:org.pandalanguage.pandac.IR.Statement)
// line 45
org$pandalanguage$pandac$Compiler** $tmp54 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp55 = *$tmp54;
org$pandalanguage$pandac$IR** $tmp56 = &$tmp55->ir;
org$pandalanguage$pandac$IR* $tmp57 = *$tmp56;
org$pandalanguage$pandac$IR$Statement* $tmp58 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp59 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position* $tmp60 = &param0->position;
org$pandalanguage$pandac$Position $tmp61 = *$tmp60;
org$pandalanguage$pandac$IR$Value* $tmp62 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp63 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp64 = *(&local0);
org$pandalanguage$pandac$ChoiceCase** $tmp65 = &param0->choiceCase;
org$pandalanguage$pandac$ChoiceCase* $tmp66 = *$tmp65;
panda$collections$Array** $tmp67 = &$tmp66->fields;
panda$collections$Array* $tmp68 = *$tmp67;
panda$core$Int64* $tmp69 = &param0->index;
panda$core$Int64 $tmp70 = *$tmp69;
panda$core$Object* $tmp71 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp68, $tmp70);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp62, $tmp63, $tmp64, ((org$pandalanguage$pandac$Type*) $tmp71));
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp58, $tmp59, $tmp61, param1, $tmp62);
$fn73 $tmp72 = ($fn73) $tmp57->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp74 = $tmp72($tmp57, $tmp58);
panda$core$Panda$unref$panda$core$Object$Q($tmp71);
// unreffing REF($57:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
// unreffing REF($47:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
// unreffing REF($43:org.pandalanguage.pandac.IR.Statement)
return;

}
void org$pandalanguage$pandac$lvalue$ChoiceFieldLValue$cleanup(org$pandalanguage$pandac$lvalue$ChoiceFieldLValue* param0) {

// line 9
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$Compiler** $tmp75 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp76 = *$tmp75;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
org$pandalanguage$pandac$IR$Value** $tmp77 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp78 = *$tmp77;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp78));
org$pandalanguage$pandac$ChoiceCase** $tmp79 = &param0->choiceCase;
org$pandalanguage$pandac$ChoiceCase* $tmp80 = *$tmp79;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
return;

}

