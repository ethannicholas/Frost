#include "org/pandalanguage/pandac/Compiler/FieldLValue.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler/LValue.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Compiler/Resolution.h"
#include "panda/core/Equatable.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"
#include "panda/collections/Stack.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/Array.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/IR.h"
#include "org/pandalanguage/pandac/IR/Statement.h"


struct { panda$core$Class* cl; ITable* next; void* methods[3]; } org$pandalanguage$pandac$Compiler$FieldLValue$_org$pandalanguage$pandac$Compiler$LValue = { (panda$core$Class*) &org$pandalanguage$pandac$Compiler$LValue$class, NULL, { org$pandalanguage$pandac$Compiler$FieldLValue$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$FieldLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q, org$pandalanguage$pandac$Compiler$FieldLValue$compileStore$org$pandalanguage$pandac$IR$Value} };

static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$FieldLValue$class_type org$pandalanguage$pandac$Compiler$FieldLValue$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$FieldLValue$_org$pandalanguage$pandac$Compiler$LValue, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$FieldLValue$cleanup, org$pandalanguage$pandac$Compiler$FieldLValue$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$FieldLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q, org$pandalanguage$pandac$Compiler$FieldLValue$compileStore$org$pandalanguage$pandac$IR$Value, org$pandalanguage$pandac$Compiler$FieldLValue$compileUnref} };

typedef panda$core$Bit (*$fn14)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn25)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn99)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn148)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn170)(org$pandalanguage$pandac$Compiler$FieldLValue*);
typedef panda$core$Bit (*$fn195)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn241)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn256)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn272)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$Type* (*$fn308)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn312)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn377)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn406)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn454)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn462)(org$pandalanguage$pandac$Compiler$FieldLValue*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn478)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn494)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Bit (*$fn509)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn535)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn550)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn566)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 45, -7982951497069999908, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x70\x61\x6e\x64\x61", 14, -3408958965109419534, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74\x5f", 4, 211223516, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x74\x5f", 4, 223587128, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };

void org$pandalanguage$pandac$Compiler$FieldLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler$FieldLValue* param0, org$pandalanguage$pandac$Compiler* param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$FieldDecl* param4) {

panda$core$Bit local0;
panda$core$Bit local1;
org$pandalanguage$pandac$Type* local2 = NULL;
panda$core$Bit local3;
// line 6532
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$Compiler** $tmp2 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 6533
org$pandalanguage$pandac$Position* $tmp5 = &param0->position;
*$tmp5 = param2;
// line 6534
org$pandalanguage$pandac$Compiler$Resolution* $tmp6 = &param4->resolved;
org$pandalanguage$pandac$Compiler$Resolution $tmp7 = *$tmp6;
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp8;
$tmp8 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp8->value = $tmp7;
panda$core$Int64 $tmp9 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Compiler$Resolution $tmp10 = org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64($tmp9);
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp11;
$tmp11 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp11->value = $tmp10;
ITable* $tmp12 = ((panda$core$Equatable*) $tmp8)->$class->itable;
while ($tmp12->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp12 = $tmp12->next;
}
$fn14 $tmp13 = $tmp12->methods[0];
panda$core$Bit $tmp15 = $tmp13(((panda$core$Equatable*) $tmp8), ((panda$core$Equatable*) $tmp11));
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp17 = (panda$core$Int64) {6534};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s18, $tmp17);
abort(); // unreachable
block1:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp11)));
// unreffing REF($19:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp8)));
// unreffing REF($15:panda.core.Equatable<org.pandalanguage.pandac.Compiler.Resolution>)
// line 6535
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FieldDecl** $tmp19 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp20 = *$tmp19;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
org$pandalanguage$pandac$FieldDecl** $tmp21 = &param0->field;
*$tmp21 = param4;
// line 6536
panda$core$Bit $tmp22 = panda$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block5; else goto block6;
block5:;
$fn25 $tmp24 = ($fn25) param3->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp26 = $tmp24(param3);
panda$core$Bit $tmp27 = org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit($tmp26);
panda$core$Bit $tmp28 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
// unreffing REF($49:org.pandalanguage.pandac.Type)
*(&local0) = $tmp28;
goto block7;
block6:;
*(&local0) = $tmp22;
goto block7;
block7:;
panda$core$Bit $tmp29 = *(&local0);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block3; else goto block8;
block3:;
// line 6537
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp31 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp32 = *$tmp31;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
org$pandalanguage$pandac$IR$Value** $tmp33 = &param0->target;
*$tmp33 = param3;
goto block4;
block8:;
// line 6539
org$pandalanguage$pandac$Annotations** $tmp34 = &param4->annotations;
org$pandalanguage$pandac$Annotations* $tmp35 = *$tmp34;
panda$core$Bit $tmp36 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp35);
panda$core$Bit $tmp37 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp36);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block9; else goto block10;
block9:;
// line 6540
panda$core$Weak** $tmp39 = &param4->owner;
panda$core$Weak* $tmp40 = *$tmp39;
panda$core$Object* $tmp41 = panda$core$Weak$get$R$panda$core$Weak$T($tmp40);
org$pandalanguage$pandac$Annotations** $tmp42 = &((org$pandalanguage$pandac$ClassDecl*) $tmp41)->annotations;
org$pandalanguage$pandac$Annotations* $tmp43 = *$tmp42;
panda$core$Bit $tmp44 = org$pandalanguage$pandac$Annotations$get_isSynthetic$R$panda$core$Bit($tmp43);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block13; else goto block14;
block13:;
panda$core$Bit* $tmp46 = &param1->reportErrors;
panda$core$Bit $tmp47 = *$tmp46;
panda$core$Bit $tmp48 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp47);
*(&local1) = $tmp48;
goto block15;
block14:;
*(&local1) = $tmp44;
goto block15;
block15:;
panda$core$Bit $tmp49 = *(&local1);
bool $tmp50 = $tmp49.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp41);
// unreffing REF($83:panda.core.Weak.T)
if ($tmp50) goto block11; else goto block16;
block11:;
// line 6542
org$pandalanguage$pandac$IR$Value* $tmp51 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp52 = (panda$core$Int64) {7};
panda$core$Int64 $tmp53 = (panda$core$Int64) {18446744073709551615};
org$pandalanguage$pandac$IR$Statement$ID $tmp54 = org$pandalanguage$pandac$IR$Statement$ID$init$panda$core$Int64($tmp53);
panda$core$Weak** $tmp55 = &param4->owner;
panda$core$Weak* $tmp56 = *$tmp55;
panda$core$Object* $tmp57 = panda$core$Weak$get$R$panda$core$Weak$T($tmp56);
org$pandalanguage$pandac$Type** $tmp58 = &((org$pandalanguage$pandac$ClassDecl*) $tmp57)->type;
org$pandalanguage$pandac$Type* $tmp59 = *$tmp58;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp51, $tmp52, $tmp54, $tmp59);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
org$pandalanguage$pandac$IR$Value** $tmp60 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp61 = *$tmp60;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
org$pandalanguage$pandac$IR$Value** $tmp62 = &param0->target;
*$tmp62 = $tmp51;
panda$core$Panda$unref$panda$core$Object$Q($tmp57);
// unreffing REF($111:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// unreffing REF($104:org.pandalanguage.pandac.IR.Value)
goto block12;
block16:;
// line 1
// line 6545
panda$core$Bit $tmp63 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$IR$Value* $tmp64 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$Position$panda$core$Bit$R$org$pandalanguage$pandac$IR$Value$Q(param1, param2, $tmp63);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
org$pandalanguage$pandac$IR$Value** $tmp65 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp66 = *$tmp65;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
org$pandalanguage$pandac$IR$Value** $tmp67 = &param0->target;
*$tmp67 = $tmp64;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing REF($135:org.pandalanguage.pandac.IR.Value?)
goto block12;
block12:;
goto block10;
block10:;
goto block4;
block4:;
// line 6548
org$pandalanguage$pandac$Type** $tmp68 = &param4->type;
org$pandalanguage$pandac$Type* $tmp69 = *$tmp68;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
org$pandalanguage$pandac$Type** $tmp70 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp71 = *$tmp70;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
org$pandalanguage$pandac$Type** $tmp72 = &param0->rawType;
*$tmp72 = $tmp69;
// line 6549
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
// line 6550
panda$core$Bit* $tmp73 = &param1->inFieldCleanup;
panda$core$Bit $tmp74 = *$tmp73;
panda$core$Bit $tmp75 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp74);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block19; else goto block20;
block19:;
org$pandalanguage$pandac$Annotations** $tmp77 = &param4->annotations;
org$pandalanguage$pandac$Annotations* $tmp78 = *$tmp77;
panda$core$Bit $tmp79 = org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit($tmp78);
*(&local3) = $tmp79;
goto block21;
block20:;
*(&local3) = $tmp75;
goto block21;
block21:;
panda$core$Bit $tmp80 = *(&local3);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block17; else goto block22;
block17:;
// line 6551
org$pandalanguage$pandac$Type** $tmp82 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp83 = *$tmp82;
org$pandalanguage$pandac$FixedArray** $tmp84 = &$tmp83->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp85 = *$tmp84;
panda$core$Int64 $tmp86 = (panda$core$Int64) {1};
panda$core$Object* $tmp87 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp85, $tmp86);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp87)));
org$pandalanguage$pandac$Type* $tmp88 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp87);
panda$core$Panda$unref$panda$core$Object$Q($tmp87);
// unreffing REF($187:org.pandalanguage.pandac.FixedArray.T)
goto block18;
block22:;
// line 1
// line 6554
org$pandalanguage$pandac$Type** $tmp89 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp90 = *$tmp89;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
org$pandalanguage$pandac$Type* $tmp91 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
*(&local2) = $tmp90;
goto block18;
block18:;
// line 6556
org$pandalanguage$pandac$IR$Value** $tmp92 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp93 = *$tmp92;
panda$core$Bit $tmp94 = panda$core$Bit$init$builtin_bit($tmp93 != NULL);
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block23; else goto block25;
block23:;
// line 6557
org$pandalanguage$pandac$IR$Value** $tmp96 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp97 = *$tmp96;
$fn99 $tmp98 = ($fn99) $tmp97->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp100 = $tmp98($tmp97);
panda$core$Weak** $tmp101 = &param4->owner;
panda$core$Weak* $tmp102 = *$tmp101;
panda$core$Object* $tmp103 = panda$core$Weak$get$R$panda$core$Weak$T($tmp102);
org$pandalanguage$pandac$Type* $tmp104 = org$pandalanguage$pandac$Compiler$findType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(param1, $tmp100, ((org$pandalanguage$pandac$ClassDecl*) $tmp103));
org$pandalanguage$pandac$Type* $tmp105 = *(&local2);
org$pandalanguage$pandac$Type* $tmp106 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, $tmp104, $tmp105);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
org$pandalanguage$pandac$Type** $tmp107 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp108 = *$tmp107;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
org$pandalanguage$pandac$Type** $tmp109 = &param0->effectiveType;
*$tmp109 = $tmp106;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
// unreffing REF($231:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
// unreffing REF($228:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q($tmp103);
// unreffing REF($226:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
// unreffing REF($222:org.pandalanguage.pandac.Type)
goto block24;
block25:;
// line 1
// line 6561
org$pandalanguage$pandac$Type* $tmp110 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
org$pandalanguage$pandac$Type** $tmp111 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp112 = *$tmp111;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
org$pandalanguage$pandac$Type** $tmp113 = &param0->effectiveType;
*$tmp113 = $tmp110;
goto block24;
block24:;
// line 6563
org$pandalanguage$pandac$IR$Value** $tmp114 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp115 = *$tmp114;
panda$core$Bit $tmp116 = panda$core$Bit$init$builtin_bit($tmp115 != NULL);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block26; else goto block27;
block26:;
// line 6564
org$pandalanguage$pandac$IR$Value** $tmp118 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp119 = *$tmp118;
panda$core$Weak** $tmp120 = &param4->owner;
panda$core$Weak* $tmp121 = *$tmp120;
panda$core$Object* $tmp122 = panda$core$Weak$get$R$panda$core$Weak$T($tmp121);
org$pandalanguage$pandac$Type** $tmp123 = &((org$pandalanguage$pandac$ClassDecl*) $tmp122)->type;
org$pandalanguage$pandac$Type* $tmp124 = *$tmp123;
org$pandalanguage$pandac$IR$Value* $tmp125 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param1, param2, $tmp119, $tmp124);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
org$pandalanguage$pandac$IR$Value** $tmp126 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp127 = *$tmp126;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
org$pandalanguage$pandac$IR$Value** $tmp128 = &param0->target;
*$tmp128 = $tmp125;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
// unreffing REF($282:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q($tmp122);
// unreffing REF($278:panda.core.Weak.T)
goto block27;
block27:;
org$pandalanguage$pandac$Type* $tmp129 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
// unreffing base
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
return;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$FieldLValue$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler$FieldLValue* param0) {

// line 6570
org$pandalanguage$pandac$Type** $tmp130 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp131 = *$tmp130;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
return $tmp131;

}
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$Compiler$FieldLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler$FieldLValue* param0) {

panda$core$Bit local0;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
org$pandalanguage$pandac$IR$Value* local2 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local3;
org$pandalanguage$pandac$IR$Statement$ID local4;
panda$core$Bit local5;
// line 6575
org$pandalanguage$pandac$FieldDecl** $tmp132 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp133 = *$tmp132;
org$pandalanguage$pandac$Annotations** $tmp134 = &$tmp133->annotations;
org$pandalanguage$pandac$Annotations* $tmp135 = *$tmp134;
panda$core$Bit $tmp136 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp135);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block3; else goto block4;
block3:;
org$pandalanguage$pandac$FieldDecl** $tmp138 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp139 = *$tmp138;
org$pandalanguage$pandac$FieldDecl$Kind* $tmp140 = &$tmp139->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp141 = *$tmp140;
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp142;
$tmp142 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp142->value = $tmp141;
panda$core$Int64 $tmp143 = (panda$core$Int64) {2};
org$pandalanguage$pandac$FieldDecl$Kind $tmp144 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp143);
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp145;
$tmp145 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp145->value = $tmp144;
ITable* $tmp146 = ((panda$core$Equatable*) $tmp142)->$class->itable;
while ($tmp146->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp146 = $tmp146->next;
}
$fn148 $tmp147 = $tmp146->methods[0];
panda$core$Bit $tmp149 = $tmp147(((panda$core$Equatable*) $tmp142), ((panda$core$Equatable*) $tmp145));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp145)));
// unreffing REF($16:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp142)));
// unreffing REF($12:panda.core.Equatable<org.pandalanguage.pandac.FieldDecl.Kind>)
*(&local0) = $tmp149;
goto block5;
block4:;
*(&local0) = $tmp136;
goto block5;
block5:;
panda$core$Bit $tmp150 = *(&local0);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block1; else goto block2;
block1:;
// line 6576
org$pandalanguage$pandac$Compiler** $tmp152 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp153 = *$tmp152;
panda$collections$Stack** $tmp154 = &$tmp153->currentClass;
panda$collections$Stack* $tmp155 = *$tmp154;
org$pandalanguage$pandac$FieldDecl** $tmp156 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp157 = *$tmp156;
panda$core$Weak** $tmp158 = &$tmp157->owner;
panda$core$Weak* $tmp159 = *$tmp158;
panda$core$Object* $tmp160 = panda$core$Weak$get$R$panda$core$Weak$T($tmp159);
panda$collections$Stack$push$panda$collections$Stack$T($tmp155, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp160)));
panda$core$Panda$unref$panda$core$Object$Q($tmp160);
// unreffing REF($43:panda.core.Weak.T)
// line 6577
org$pandalanguage$pandac$Compiler** $tmp161 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp162 = *$tmp161;
org$pandalanguage$pandac$FieldDecl** $tmp163 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp164 = *$tmp163;
org$pandalanguage$pandac$ASTNode** $tmp165 = &$tmp164->rawValue;
org$pandalanguage$pandac$ASTNode* $tmp166 = *$tmp165;
org$pandalanguage$pandac$Compiler$TypeContext* $tmp167 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp168 = (panda$core$Int64) {3};
$fn170 $tmp169 = ($fn170) param0->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp171 = $tmp169(param0);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp167, $tmp168, $tmp171);
org$pandalanguage$pandac$IR$Value* $tmp172 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp162, $tmp166, $tmp167);
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
org$pandalanguage$pandac$IR$Value* $tmp173 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
*(&local1) = $tmp172;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
// unreffing REF($63:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
// unreffing REF($61:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
// unreffing REF($58:org.pandalanguage.pandac.Compiler.TypeContext)
// line 6578
org$pandalanguage$pandac$Compiler** $tmp174 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp175 = *$tmp174;
panda$collections$Stack** $tmp176 = &$tmp175->currentClass;
panda$collections$Stack* $tmp177 = *$tmp176;
panda$core$Object* $tmp178 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp177);
panda$core$Panda$unref$panda$core$Object$Q($tmp178);
// unreffing REF($86:panda.collections.Stack.T)
// line 6579
org$pandalanguage$pandac$IR$Value* $tmp179 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
org$pandalanguage$pandac$IR$Value* $tmp180 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
// unreffing result
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp179;
block2:;
// line 6581
org$pandalanguage$pandac$IR$Value** $tmp181 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp182 = *$tmp181;
panda$core$Bit $tmp183 = panda$core$Bit$init$builtin_bit($tmp182 == NULL);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block6; else goto block7;
block6:;
// line 6583
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block7:;
// line 6585
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 6586
org$pandalanguage$pandac$FieldDecl** $tmp185 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp186 = *$tmp185;
org$pandalanguage$pandac$FieldDecl$Kind* $tmp187 = &$tmp186->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp188 = *$tmp187;
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp189;
$tmp189 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp189->value = $tmp188;
panda$core$Int64 $tmp190 = (panda$core$Int64) {3};
org$pandalanguage$pandac$FieldDecl$Kind $tmp191 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp190);
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp192;
$tmp192 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp192->value = $tmp191;
ITable* $tmp193 = ((panda$core$Equatable*) $tmp189)->$class->itable;
while ($tmp193->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp193 = $tmp193->next;
}
$fn195 $tmp194 = $tmp193->methods[0];
panda$core$Bit $tmp196 = $tmp194(((panda$core$Equatable*) $tmp189), ((panda$core$Equatable*) $tmp192));
bool $tmp197 = $tmp196.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp192)));
// unreffing REF($123:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp189)));
// unreffing REF($119:panda.core.Equatable<org.pandalanguage.pandac.FieldDecl.Kind>)
if ($tmp197) goto block8; else goto block10;
block8:;
// line 6587
org$pandalanguage$pandac$Compiler** $tmp198 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp199 = *$tmp198;
org$pandalanguage$pandac$Position* $tmp200 = &param0->position;
org$pandalanguage$pandac$Position $tmp201 = *$tmp200;
org$pandalanguage$pandac$IR$Value** $tmp202 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp203 = *$tmp202;
org$pandalanguage$pandac$FieldDecl** $tmp204 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp205 = *$tmp204;
panda$core$String** $tmp206 = &((org$pandalanguage$pandac$Symbol*) $tmp205)->name;
panda$core$String* $tmp207 = *$tmp206;
panda$core$String* $tmp208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s209, $tmp207);
panda$core$String* $tmp210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp208, &$s211);
panda$collections$Array* $tmp212 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp212);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp213 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp214 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type** $tmp215 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp216 = *$tmp215;
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp213, $tmp214, $tmp216);
org$pandalanguage$pandac$IR$Value* $tmp217 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp199, $tmp201, $tmp203, $tmp210, ((panda$collections$ListView*) $tmp212), $tmp213);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
org$pandalanguage$pandac$IR$Value* $tmp218 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
*(&local2) = $tmp217;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
// unreffing REF($158:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
// unreffing REF($153:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp212));
// unreffing REF($149:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
// unreffing REF($148:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
// unreffing REF($147:panda.core.String)
goto block9;
block10:;
// line 1
// line 6591
// line 6592
org$pandalanguage$pandac$Compiler** $tmp219 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp220 = *$tmp219;
org$pandalanguage$pandac$FieldDecl** $tmp221 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp222 = *$tmp221;
panda$core$Weak** $tmp223 = &$tmp222->owner;
panda$core$Weak* $tmp224 = *$tmp223;
panda$core$Object* $tmp225 = panda$core$Weak$get$R$panda$core$Weak$T($tmp224);
panda$core$Bit $tmp226 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit($tmp220, ((org$pandalanguage$pandac$ClassDecl*) $tmp225));
bool $tmp227 = $tmp226.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp225);
// unreffing REF($192:panda.core.Weak.T)
if ($tmp227) goto block11; else goto block13;
block11:;
// line 6593
org$pandalanguage$pandac$Compiler** $tmp228 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp229 = *$tmp228;
org$pandalanguage$pandac$IR** $tmp230 = &$tmp229->ir;
org$pandalanguage$pandac$IR* $tmp231 = *$tmp230;
org$pandalanguage$pandac$IR$Statement* $tmp232 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp233 = (panda$core$Int64) {9};
org$pandalanguage$pandac$Position* $tmp234 = &param0->position;
org$pandalanguage$pandac$Position $tmp235 = *$tmp234;
org$pandalanguage$pandac$IR$Value** $tmp236 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp237 = *$tmp236;
org$pandalanguage$pandac$FieldDecl** $tmp238 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp239 = *$tmp238;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp232, $tmp233, $tmp235, $tmp237, $tmp239);
$fn241 $tmp240 = ($fn241) $tmp231->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp242 = $tmp240($tmp231, $tmp232);
*(&local3) = $tmp242;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
// unreffing REF($206:org.pandalanguage.pandac.IR.Statement)
goto block12;
block13:;
// line 1
// line 6596
org$pandalanguage$pandac$Compiler** $tmp243 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp244 = *$tmp243;
org$pandalanguage$pandac$IR** $tmp245 = &$tmp244->ir;
org$pandalanguage$pandac$IR* $tmp246 = *$tmp245;
org$pandalanguage$pandac$IR$Statement* $tmp247 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp248 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Position* $tmp249 = &param0->position;
org$pandalanguage$pandac$Position $tmp250 = *$tmp249;
org$pandalanguage$pandac$IR$Value** $tmp251 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp252 = *$tmp251;
org$pandalanguage$pandac$FieldDecl** $tmp253 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp254 = *$tmp253;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp247, $tmp248, $tmp250, $tmp252, $tmp254);
$fn256 $tmp255 = ($fn256) $tmp246->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp257 = $tmp255($tmp246, $tmp247);
*(&local4) = $tmp257;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
// unreffing REF($229:org.pandalanguage.pandac.IR.Statement)
// line 6598
org$pandalanguage$pandac$Compiler** $tmp258 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp259 = *$tmp258;
org$pandalanguage$pandac$IR** $tmp260 = &$tmp259->ir;
org$pandalanguage$pandac$IR* $tmp261 = *$tmp260;
org$pandalanguage$pandac$IR$Statement* $tmp262 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp263 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Position* $tmp264 = &param0->position;
org$pandalanguage$pandac$Position $tmp265 = *$tmp264;
org$pandalanguage$pandac$IR$Value* $tmp266 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp267 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp268 = *(&local4);
org$pandalanguage$pandac$Type** $tmp269 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp270 = *$tmp269;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp266, $tmp267, $tmp268, $tmp270);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp262, $tmp263, $tmp265, $tmp266);
$fn272 $tmp271 = ($fn272) $tmp261->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp273 = $tmp271($tmp261, $tmp262);
*(&local3) = $tmp273;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
// unreffing REF($254:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
// unreffing REF($250:org.pandalanguage.pandac.IR.Statement)
goto block12;
block12:;
// line 6600
org$pandalanguage$pandac$IR$Value* $tmp274 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp275 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp276 = *(&local3);
org$pandalanguage$pandac$Type** $tmp277 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp278 = *$tmp277;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp274, $tmp275, $tmp276, $tmp278);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp274));
org$pandalanguage$pandac$IR$Value* $tmp279 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
*(&local2) = $tmp274;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp274));
// unreffing REF($272:org.pandalanguage.pandac.IR.Value)
goto block9;
block9:;
// line 6602
org$pandalanguage$pandac$Compiler** $tmp280 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp281 = *$tmp280;
panda$core$Bit* $tmp282 = &$tmp281->inFieldCleanup;
panda$core$Bit $tmp283 = *$tmp282;
panda$core$Bit $tmp284 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp283);
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$FieldDecl** $tmp286 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp287 = *$tmp286;
org$pandalanguage$pandac$Annotations** $tmp288 = &$tmp287->annotations;
org$pandalanguage$pandac$Annotations* $tmp289 = *$tmp288;
panda$core$Bit $tmp290 = org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit($tmp289);
*(&local5) = $tmp290;
goto block18;
block17:;
*(&local5) = $tmp284;
goto block18;
block18:;
panda$core$Bit $tmp291 = *(&local5);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block14; else goto block15;
block14:;
// line 6603
org$pandalanguage$pandac$Compiler** $tmp293 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp294 = *$tmp293;
org$pandalanguage$pandac$Position* $tmp295 = &param0->position;
org$pandalanguage$pandac$Position $tmp296 = *$tmp295;
org$pandalanguage$pandac$IR$Value* $tmp297 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp298 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp298);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp299 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp300 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp299, $tmp300);
org$pandalanguage$pandac$IR$Value* $tmp301 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp294, $tmp296, $tmp297, &$s302, ((panda$collections$ListView*) $tmp298), $tmp299);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
org$pandalanguage$pandac$IR$Value* $tmp303 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
*(&local2) = $tmp301;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
// unreffing REF($321:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp299));
// unreffing REF($318:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
// unreffing REF($314:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
goto block15;
block15:;
// line 6606
org$pandalanguage$pandac$Type** $tmp304 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp305 = *$tmp304;
org$pandalanguage$pandac$IR$Value* $tmp306 = *(&local2);
$fn308 $tmp307 = ($fn308) $tmp306->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp309 = $tmp307($tmp306);
ITable* $tmp310 = ((panda$core$Equatable*) $tmp305)->$class->itable;
while ($tmp310->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp310 = $tmp310->next;
}
$fn312 $tmp311 = $tmp310->methods[1];
panda$core$Bit $tmp313 = $tmp311(((panda$core$Equatable*) $tmp305), ((panda$core$Equatable*) $tmp309));
bool $tmp314 = $tmp313.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
// unreffing REF($346:org.pandalanguage.pandac.Type)
if ($tmp314) goto block19; else goto block20;
block19:;
// line 6607
org$pandalanguage$pandac$Compiler** $tmp315 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp316 = *$tmp315;
org$pandalanguage$pandac$Position* $tmp317 = &param0->position;
org$pandalanguage$pandac$Position $tmp318 = *$tmp317;
org$pandalanguage$pandac$IR$Value* $tmp319 = *(&local2);
org$pandalanguage$pandac$Type** $tmp320 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp321 = *$tmp320;
org$pandalanguage$pandac$IR$Value* $tmp322 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q($tmp316, $tmp318, $tmp319, $tmp321);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
org$pandalanguage$pandac$IR$Value* $tmp323 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp323));
*(&local2) = $tmp322;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
// unreffing REF($364:org.pandalanguage.pandac.IR.Value?)
goto block20;
block20:;
// line 6609
org$pandalanguage$pandac$IR$Value* $tmp324 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp324));
org$pandalanguage$pandac$IR$Value* $tmp325 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
// unreffing result
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp324;

}
void org$pandalanguage$pandac$Compiler$FieldLValue$compileStore$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$Compiler$FieldLValue* param0, org$pandalanguage$pandac$IR$Value* param1) {

org$pandalanguage$pandac$IR$Value* local0 = NULL;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
panda$core$Bit local2;
panda$collections$Array* local3 = NULL;
panda$collections$Array* local4 = NULL;
panda$core$Bit local5;
org$pandalanguage$pandac$IR$Value* local6 = NULL;
// line 6614
org$pandalanguage$pandac$IR$Value** $tmp326 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp327 = *$tmp326;
panda$core$Bit $tmp328 = panda$core$Bit$init$builtin_bit($tmp327 == NULL);
bool $tmp329 = $tmp328.value;
if ($tmp329) goto block1; else goto block2;
block1:;
// line 6616
return;
block2:;
// line 6618
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 6619
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 6620
org$pandalanguage$pandac$Compiler** $tmp330 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp331 = *$tmp330;
panda$core$Bit* $tmp332 = &$tmp331->inFieldCleanup;
panda$core$Bit $tmp333 = *$tmp332;
panda$core$Bit $tmp334 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp333);
bool $tmp335 = $tmp334.value;
if ($tmp335) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$FieldDecl** $tmp336 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp337 = *$tmp336;
org$pandalanguage$pandac$Annotations** $tmp338 = &$tmp337->annotations;
org$pandalanguage$pandac$Annotations* $tmp339 = *$tmp338;
panda$core$Bit $tmp340 = org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit($tmp339);
*(&local2) = $tmp340;
goto block7;
block6:;
*(&local2) = $tmp334;
goto block7;
block7:;
panda$core$Bit $tmp341 = *(&local2);
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block3; else goto block8;
block3:;
// line 6621
panda$collections$Array* $tmp343 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp343);
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
panda$collections$Array* $tmp344 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
*(&local3) = $tmp343;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
// unreffing REF($34:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 6622
panda$collections$Array* $tmp345 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp346 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp347 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position* $tmp348 = &param0->position;
org$pandalanguage$pandac$Position $tmp349 = *$tmp348;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp346, $tmp347, $tmp349, param1);
panda$collections$Array$add$panda$collections$Array$T($tmp345, ((panda$core$Object*) $tmp346));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
// unreffing REF($50:org.pandalanguage.pandac.ASTNode)
// line 6623
org$pandalanguage$pandac$Compiler** $tmp350 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp351 = *$tmp350;
org$pandalanguage$pandac$ASTNode* $tmp352 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp353 = (panda$core$Int64) {9};
org$pandalanguage$pandac$Position* $tmp354 = &param0->position;
org$pandalanguage$pandac$Position $tmp355 = *$tmp354;
org$pandalanguage$pandac$ASTNode* $tmp356 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp357 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position* $tmp358 = &param0->position;
org$pandalanguage$pandac$Position $tmp359 = *$tmp358;
org$pandalanguage$pandac$IR$Value* $tmp360 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp361 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type** $tmp362 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp363 = *$tmp362;
org$pandalanguage$pandac$Type* $tmp364 = org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp363);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp360, $tmp361, $tmp364);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp356, $tmp357, $tmp359, $tmp360);
panda$collections$Array* $tmp365 = *(&local3);
org$pandalanguage$pandac$FixedArray* $tmp366 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp365);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp352, $tmp353, $tmp355, $tmp356, $tmp366);
org$pandalanguage$pandac$IR$Value* $tmp367 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IR$Value$Q($tmp351, $tmp352);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp367));
org$pandalanguage$pandac$IR$Value* $tmp368 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp368));
*(&local1) = $tmp367;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp367));
// unreffing REF($83:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
// unreffing REF($80:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
// unreffing REF($75:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp360));
// unreffing REF($71:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp356));
// unreffing REF($67:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
// unreffing REF($63:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp369 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp369));
// unreffing args
*(&local3) = ((panda$collections$Array*) NULL);
goto block4;
block8:;
// line 1
// line 6628
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$IR$Value* $tmp370 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp370));
*(&local1) = param1;
goto block4;
block4:;
// line 6630
org$pandalanguage$pandac$Type** $tmp371 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp372 = *$tmp371;
org$pandalanguage$pandac$Type** $tmp373 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp374 = *$tmp373;
ITable* $tmp375 = ((panda$core$Equatable*) $tmp372)->$class->itable;
while ($tmp375->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp375 = $tmp375->next;
}
$fn377 $tmp376 = $tmp375->methods[1];
panda$core$Bit $tmp378 = $tmp376(((panda$core$Equatable*) $tmp372), ((panda$core$Equatable*) $tmp374));
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block9; else goto block11;
block9:;
// line 6631
org$pandalanguage$pandac$Compiler** $tmp380 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp381 = *$tmp380;
org$pandalanguage$pandac$Position* $tmp382 = &param0->position;
org$pandalanguage$pandac$Position $tmp383 = *$tmp382;
org$pandalanguage$pandac$IR$Value* $tmp384 = *(&local1);
org$pandalanguage$pandac$Type** $tmp385 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp386 = *$tmp385;
org$pandalanguage$pandac$IR$Value* $tmp387 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q($tmp381, $tmp383, $tmp384, $tmp386);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp387));
org$pandalanguage$pandac$IR$Value* $tmp388 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp388));
*(&local0) = $tmp387;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp387));
// unreffing REF($145:org.pandalanguage.pandac.IR.Value?)
// line 6632
org$pandalanguage$pandac$IR$Value* $tmp389 = *(&local0);
panda$core$Bit $tmp390 = panda$core$Bit$init$builtin_bit(false);
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block12; else goto block13;
block12:;
// line 6633
org$pandalanguage$pandac$IR$Value* $tmp392 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp392));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp393 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp393));
// unreffing cast
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;
block13:;
goto block10;
block11:;
// line 1
// line 6637
org$pandalanguage$pandac$IR$Value* $tmp394 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp394));
org$pandalanguage$pandac$IR$Value* $tmp395 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp395));
*(&local0) = $tmp394;
goto block10;
block10:;
// line 6639
org$pandalanguage$pandac$FieldDecl** $tmp396 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp397 = *$tmp396;
org$pandalanguage$pandac$FieldDecl$Kind* $tmp398 = &$tmp397->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp399 = *$tmp398;
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp400;
$tmp400 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp400->value = $tmp399;
panda$core$Int64 $tmp401 = (panda$core$Int64) {3};
org$pandalanguage$pandac$FieldDecl$Kind $tmp402 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp401);
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp403;
$tmp403 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp403->value = $tmp402;
ITable* $tmp404 = ((panda$core$Equatable*) $tmp400)->$class->itable;
while ($tmp404->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp404 = $tmp404->next;
}
$fn406 $tmp405 = $tmp404->methods[0];
panda$core$Bit $tmp407 = $tmp405(((panda$core$Equatable*) $tmp400), ((panda$core$Equatable*) $tmp403));
bool $tmp408 = $tmp407.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp403)));
// unreffing REF($193:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp400)));
// unreffing REF($189:panda.core.Equatable<org.pandalanguage.pandac.FieldDecl.Kind>)
if ($tmp408) goto block14; else goto block16;
block14:;
// line 6640
panda$collections$Array* $tmp409 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp409);
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp409));
panda$collections$Array* $tmp410 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp410));
*(&local4) = $tmp409;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp409));
// unreffing REF($205:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 6641
panda$collections$Array* $tmp411 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp412 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp413 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position* $tmp414 = &param0->position;
org$pandalanguage$pandac$Position $tmp415 = *$tmp414;
org$pandalanguage$pandac$IR$Value* $tmp416 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp412, $tmp413, $tmp415, $tmp416);
panda$collections$Array$add$panda$collections$Array$T($tmp411, ((panda$core$Object*) $tmp412));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp412));
// unreffing REF($221:org.pandalanguage.pandac.ASTNode)
// line 6642
org$pandalanguage$pandac$Compiler** $tmp417 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp418 = *$tmp417;
org$pandalanguage$pandac$Position* $tmp419 = &param0->position;
org$pandalanguage$pandac$Position $tmp420 = *$tmp419;
org$pandalanguage$pandac$IR$Value** $tmp421 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp422 = *$tmp421;
org$pandalanguage$pandac$FieldDecl** $tmp423 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp424 = *$tmp423;
panda$core$String** $tmp425 = &((org$pandalanguage$pandac$Symbol*) $tmp424)->name;
panda$core$String* $tmp426 = *$tmp425;
panda$core$String* $tmp427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s428, $tmp426);
panda$core$String* $tmp429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp427, &$s430);
panda$collections$Array* $tmp431 = *(&local4);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp432 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp433 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type** $tmp434 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp435 = *$tmp434;
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp432, $tmp433, $tmp435);
org$pandalanguage$pandac$IR$Value* $tmp436 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp418, $tmp420, $tmp422, $tmp429, ((panda$collections$ListView*) $tmp431), $tmp432);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp436));
// unreffing REF($254:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp432));
// unreffing REF($249:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp429));
// unreffing REF($246:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp427));
// unreffing REF($245:panda.core.String)
panda$collections$Array* $tmp437 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp437));
// unreffing args
*(&local4) = ((panda$collections$Array*) NULL);
goto block15;
block16:;
// line 1
// line 6646
org$pandalanguage$pandac$Compiler** $tmp438 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp439 = *$tmp438;
org$pandalanguage$pandac$Type** $tmp440 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp441 = *$tmp440;
panda$core$Bit $tmp442 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp439, $tmp441);
bool $tmp443 = $tmp442.value;
if ($tmp443) goto block19; else goto block20;
block19:;
org$pandalanguage$pandac$FieldDecl** $tmp444 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp445 = *$tmp444;
panda$core$Weak** $tmp446 = &$tmp445->owner;
panda$core$Weak* $tmp447 = *$tmp446;
panda$core$Object* $tmp448 = panda$core$Weak$get$R$panda$core$Weak$T($tmp447);
panda$core$String** $tmp449 = &((org$pandalanguage$pandac$ClassDecl*) $tmp448)->name;
panda$core$String* $tmp450 = *$tmp449;
ITable* $tmp452 = ((panda$core$Equatable*) $tmp450)->$class->itable;
while ($tmp452->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp452 = $tmp452->next;
}
$fn454 $tmp453 = $tmp452->methods[1];
panda$core$Bit $tmp455 = $tmp453(((panda$core$Equatable*) $tmp450), ((panda$core$Equatable*) &$s451));
panda$core$Panda$unref$panda$core$Object$Q($tmp448);
// unreffing REF($287:panda.core.Weak.T)
*(&local5) = $tmp455;
goto block21;
block20:;
*(&local5) = $tmp442;
goto block21;
block21:;
panda$core$Bit $tmp456 = *(&local5);
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block17; else goto block18;
block17:;
// line 6647
org$pandalanguage$pandac$Compiler** $tmp458 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp459 = *$tmp458;
org$pandalanguage$pandac$IR$Value* $tmp460 = *(&local1);
org$pandalanguage$pandac$Compiler$compileRef$org$pandalanguage$pandac$IR$Value($tmp459, $tmp460);
// line 6648
$fn462 $tmp461 = ($fn462) param0->$class->vtable[5];
$tmp461(param0);
goto block18;
block18:;
// line 6650
org$pandalanguage$pandac$IR$Value* $tmp463 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp464 = (panda$core$Int64) {7};
org$pandalanguage$pandac$Compiler** $tmp465 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp466 = *$tmp465;
org$pandalanguage$pandac$IR** $tmp467 = &$tmp466->ir;
org$pandalanguage$pandac$IR* $tmp468 = *$tmp467;
org$pandalanguage$pandac$IR$Statement* $tmp469 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp470 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Position* $tmp471 = &param0->position;
org$pandalanguage$pandac$Position $tmp472 = *$tmp471;
org$pandalanguage$pandac$IR$Value** $tmp473 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp474 = *$tmp473;
org$pandalanguage$pandac$FieldDecl** $tmp475 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp476 = *$tmp475;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp469, $tmp470, $tmp472, $tmp474, $tmp476);
$fn478 $tmp477 = ($fn478) $tmp468->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp479 = $tmp477($tmp468, $tmp469);
org$pandalanguage$pandac$Type** $tmp480 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp481 = *$tmp480;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp463, $tmp464, $tmp479, $tmp481);
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp463));
org$pandalanguage$pandac$IR$Value* $tmp482 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp482));
*(&local6) = $tmp463;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp469));
// unreffing REF($322:org.pandalanguage.pandac.IR.Statement)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp463));
// unreffing REF($316:org.pandalanguage.pandac.IR.Value)
// line 6652
org$pandalanguage$pandac$Compiler** $tmp483 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp484 = *$tmp483;
org$pandalanguage$pandac$IR** $tmp485 = &$tmp484->ir;
org$pandalanguage$pandac$IR* $tmp486 = *$tmp485;
org$pandalanguage$pandac$IR$Statement* $tmp487 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp488 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position* $tmp489 = &param0->position;
org$pandalanguage$pandac$Position $tmp490 = *$tmp489;
org$pandalanguage$pandac$IR$Value* $tmp491 = *(&local0);
org$pandalanguage$pandac$IR$Value* $tmp492 = *(&local6);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp487, $tmp488, $tmp490, $tmp491, $tmp492);
$fn494 $tmp493 = ($fn494) $tmp486->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp495 = $tmp493($tmp486, $tmp487);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp487));
// unreffing REF($355:org.pandalanguage.pandac.IR.Statement)
org$pandalanguage$pandac$IR$Value* $tmp496 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp496));
// unreffing ptr
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block15;
block15:;
org$pandalanguage$pandac$IR$Value* $tmp497 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp497));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp498 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp498));
// unreffing cast
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;

}
void org$pandalanguage$pandac$Compiler$FieldLValue$compileUnref(org$pandalanguage$pandac$Compiler$FieldLValue* param0) {

org$pandalanguage$pandac$IR$Value* local0 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local1;
org$pandalanguage$pandac$IR$Statement$ID local2;
// line 6657
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 6658
org$pandalanguage$pandac$FieldDecl** $tmp499 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp500 = *$tmp499;
org$pandalanguage$pandac$FieldDecl$Kind* $tmp501 = &$tmp500->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp502 = *$tmp501;
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp503;
$tmp503 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp503->value = $tmp502;
panda$core$Int64 $tmp504 = (panda$core$Int64) {3};
org$pandalanguage$pandac$FieldDecl$Kind $tmp505 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp504);
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp506;
$tmp506 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp506->value = $tmp505;
ITable* $tmp507 = ((panda$core$Equatable*) $tmp503)->$class->itable;
while ($tmp507->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp507 = $tmp507->next;
}
$fn509 $tmp508 = $tmp507->methods[0];
panda$core$Bit $tmp510 = $tmp508(((panda$core$Equatable*) $tmp503), ((panda$core$Equatable*) $tmp506));
bool $tmp511 = $tmp510.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp506)));
// unreffing REF($11:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp503)));
// unreffing REF($7:panda.core.Equatable<org.pandalanguage.pandac.FieldDecl.Kind>)
if ($tmp511) goto block1; else goto block2;
block1:;
// line 6659
org$pandalanguage$pandac$IR$Value* $tmp512 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;
block2:;
// line 6661
// line 6662
org$pandalanguage$pandac$Compiler** $tmp513 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp514 = *$tmp513;
org$pandalanguage$pandac$FieldDecl** $tmp515 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp516 = *$tmp515;
panda$core$Weak** $tmp517 = &$tmp516->owner;
panda$core$Weak* $tmp518 = *$tmp517;
panda$core$Object* $tmp519 = panda$core$Weak$get$R$panda$core$Weak$T($tmp518);
panda$core$Bit $tmp520 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit($tmp514, ((org$pandalanguage$pandac$ClassDecl*) $tmp519));
bool $tmp521 = $tmp520.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp519);
// unreffing REF($38:panda.core.Weak.T)
if ($tmp521) goto block3; else goto block5;
block3:;
// line 6663
org$pandalanguage$pandac$Compiler** $tmp522 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp523 = *$tmp522;
org$pandalanguage$pandac$IR** $tmp524 = &$tmp523->ir;
org$pandalanguage$pandac$IR* $tmp525 = *$tmp524;
org$pandalanguage$pandac$IR$Statement* $tmp526 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp527 = (panda$core$Int64) {9};
org$pandalanguage$pandac$Position* $tmp528 = &param0->position;
org$pandalanguage$pandac$Position $tmp529 = *$tmp528;
org$pandalanguage$pandac$IR$Value** $tmp530 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp531 = *$tmp530;
org$pandalanguage$pandac$FieldDecl** $tmp532 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp533 = *$tmp532;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp526, $tmp527, $tmp529, $tmp531, $tmp533);
$fn535 $tmp534 = ($fn535) $tmp525->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp536 = $tmp534($tmp525, $tmp526);
*(&local1) = $tmp536;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp526));
// unreffing REF($52:org.pandalanguage.pandac.IR.Statement)
goto block4;
block5:;
// line 1
// line 6666
org$pandalanguage$pandac$Compiler** $tmp537 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp538 = *$tmp537;
org$pandalanguage$pandac$IR** $tmp539 = &$tmp538->ir;
org$pandalanguage$pandac$IR* $tmp540 = *$tmp539;
org$pandalanguage$pandac$IR$Statement* $tmp541 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp542 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Position* $tmp543 = &param0->position;
org$pandalanguage$pandac$Position $tmp544 = *$tmp543;
org$pandalanguage$pandac$IR$Value** $tmp545 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp546 = *$tmp545;
org$pandalanguage$pandac$FieldDecl** $tmp547 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp548 = *$tmp547;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp541, $tmp542, $tmp544, $tmp546, $tmp548);
$fn550 $tmp549 = ($fn550) $tmp540->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp551 = $tmp549($tmp540, $tmp541);
*(&local2) = $tmp551;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
// unreffing REF($75:org.pandalanguage.pandac.IR.Statement)
// line 6667
org$pandalanguage$pandac$Compiler** $tmp552 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp553 = *$tmp552;
org$pandalanguage$pandac$IR** $tmp554 = &$tmp553->ir;
org$pandalanguage$pandac$IR* $tmp555 = *$tmp554;
org$pandalanguage$pandac$IR$Statement* $tmp556 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp557 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Position* $tmp558 = &param0->position;
org$pandalanguage$pandac$Position $tmp559 = *$tmp558;
org$pandalanguage$pandac$IR$Value* $tmp560 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp561 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp562 = *(&local2);
org$pandalanguage$pandac$Type** $tmp563 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp564 = *$tmp563;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp560, $tmp561, $tmp562, $tmp564);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp556, $tmp557, $tmp559, $tmp560);
$fn566 $tmp565 = ($fn566) $tmp555->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp567 = $tmp565($tmp555, $tmp556);
*(&local1) = $tmp567;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp560));
// unreffing REF($100:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
// unreffing REF($96:org.pandalanguage.pandac.IR.Statement)
goto block4;
block4:;
// line 6669
org$pandalanguage$pandac$IR$Value* $tmp568 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp569 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp570 = *(&local1);
org$pandalanguage$pandac$Type** $tmp571 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp572 = *$tmp571;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp568, $tmp569, $tmp570, $tmp572);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp568));
org$pandalanguage$pandac$IR$Value* $tmp573 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
*(&local0) = $tmp568;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp568));
// unreffing REF($118:org.pandalanguage.pandac.IR.Value)
// line 6670
org$pandalanguage$pandac$Compiler** $tmp574 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp575 = *$tmp574;
org$pandalanguage$pandac$IR$Value* $tmp576 = *(&local0);
org$pandalanguage$pandac$Compiler$compileUnref$org$pandalanguage$pandac$IR$Value($tmp575, $tmp576);
org$pandalanguage$pandac$IR$Value* $tmp577 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp577));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;

}
void org$pandalanguage$pandac$Compiler$FieldLValue$cleanup(org$pandalanguage$pandac$Compiler$FieldLValue* param0) {

// line 6518
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$Compiler** $tmp578 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp579 = *$tmp578;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp579));
org$pandalanguage$pandac$IR$Value** $tmp580 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp581 = *$tmp580;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp581));
org$pandalanguage$pandac$FieldDecl** $tmp582 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp583 = *$tmp582;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp583));
org$pandalanguage$pandac$Type** $tmp584 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp585 = *$tmp584;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp585));
org$pandalanguage$pandac$Type** $tmp586 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp587 = *$tmp586;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp587));
return;

}

