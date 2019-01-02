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
#include "panda/collections/ImmutableArray.h"
#include "org/pandalanguage/pandac/Compiler/AutoScope.h"
#include "org/pandalanguage/pandac/Compiler/AutoUnrefs.h"
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"
#include "panda/collections/Stack.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
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
typedef panda$core$Bit (*$fn144)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn178)(org$pandalanguage$pandac$Compiler$FieldLValue*);
typedef panda$core$Bit (*$fn204)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn250)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn265)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn281)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$Type* (*$fn322)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn326)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn391)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn420)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn468)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn473)(org$pandalanguage$pandac$Compiler$FieldLValue*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn492)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn508)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Bit (*$fn523)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn549)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn564)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn580)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 45, -7982951497069999908, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x70\x61\x6e\x64\x61", 14, -3408958965109419534, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74\x5f", 4, 211223516, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x74\x5f", 4, 223587128, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };

void org$pandalanguage$pandac$Compiler$FieldLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler$FieldLValue* param0, org$pandalanguage$pandac$Compiler* param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$FieldDecl* param4) {

panda$core$Bit local0;
panda$core$Bit local1;
org$pandalanguage$pandac$Type* local2 = NULL;
panda$core$Bit local3;
// line 5977
org$pandalanguage$pandac$Compiler** $tmp2 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 5978
org$pandalanguage$pandac$Position* $tmp5 = &param0->position;
*$tmp5 = param2;
// line 5979
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
panda$core$Int64 $tmp17 = (panda$core$Int64) {5979};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s18, $tmp17);
abort(); // unreachable
block1:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp8)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp11)));
// line 5980
org$pandalanguage$pandac$FieldDecl** $tmp19 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp20 = *$tmp19;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FieldDecl** $tmp21 = &param0->field;
*$tmp21 = param4;
// line 5981
panda$core$Bit $tmp22 = panda$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block3; else goto block4;
block3:;
$fn25 $tmp24 = ($fn25) param3->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp26 = $tmp24(param3);
panda$core$Bit $tmp27 = org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit($tmp26);
panda$core$Bit $tmp28 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
*(&local0) = $tmp28;
goto block5;
block4:;
*(&local0) = $tmp22;
goto block5;
block5:;
panda$core$Bit $tmp29 = *(&local0);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block6; else goto block8;
block6:;
// line 5982
org$pandalanguage$pandac$IR$Value** $tmp31 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp32 = *$tmp31;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp33 = &param0->target;
*$tmp33 = param3;
goto block7;
block8:;
// line 5984
org$pandalanguage$pandac$Annotations** $tmp34 = &param4->annotations;
org$pandalanguage$pandac$Annotations* $tmp35 = *$tmp34;
panda$core$Bit $tmp36 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp35);
panda$core$Bit $tmp37 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp36);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block9; else goto block10;
block9:;
// line 5985
panda$core$Weak** $tmp39 = &param4->owner;
panda$core$Weak* $tmp40 = *$tmp39;
panda$core$Object* $tmp41 = panda$core$Weak$get$R$panda$core$Weak$T($tmp40);
panda$core$Panda$unref$panda$core$Object$Q($tmp41);
org$pandalanguage$pandac$Annotations** $tmp42 = &((org$pandalanguage$pandac$ClassDecl*) $tmp41)->annotations;
org$pandalanguage$pandac$Annotations* $tmp43 = *$tmp42;
panda$core$Bit $tmp44 = org$pandalanguage$pandac$Annotations$get_isSynthetic$R$panda$core$Bit($tmp43);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block11; else goto block12;
block11:;
panda$core$Bit* $tmp46 = &param1->reportErrors;
panda$core$Bit $tmp47 = *$tmp46;
panda$core$Bit $tmp48 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp47);
*(&local1) = $tmp48;
goto block13;
block12:;
*(&local1) = $tmp44;
goto block13;
block13:;
panda$core$Bit $tmp49 = *(&local1);
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block14; else goto block16;
block14:;
// line 5987
org$pandalanguage$pandac$IR$Value* $tmp51 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp52 = (panda$core$Int64) {7};
panda$core$Int64 $tmp53 = (panda$core$Int64) {18446744073709551615};
org$pandalanguage$pandac$IR$Statement$ID $tmp54 = org$pandalanguage$pandac$IR$Statement$ID$init$panda$core$Int64($tmp53);
panda$core$Weak** $tmp55 = &param4->owner;
panda$core$Weak* $tmp56 = *$tmp55;
panda$core$Object* $tmp57 = panda$core$Weak$get$R$panda$core$Weak$T($tmp56);
panda$core$Panda$unref$panda$core$Object$Q($tmp57);
org$pandalanguage$pandac$Type** $tmp58 = &((org$pandalanguage$pandac$ClassDecl*) $tmp57)->type;
org$pandalanguage$pandac$Type* $tmp59 = *$tmp58;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp51, $tmp52, $tmp54, $tmp59);
org$pandalanguage$pandac$IR$Value** $tmp60 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp61 = *$tmp60;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
org$pandalanguage$pandac$IR$Value** $tmp62 = &param0->target;
*$tmp62 = $tmp51;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
goto block15;
block16:;
// line 1
// line 5990
panda$core$Bit $tmp63 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$IR$Value* $tmp64 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$Position$panda$core$Bit$R$org$pandalanguage$pandac$IR$Value$Q(param1, param2, $tmp63);
org$pandalanguage$pandac$IR$Value** $tmp65 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp66 = *$tmp65;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
org$pandalanguage$pandac$IR$Value** $tmp67 = &param0->target;
*$tmp67 = $tmp64;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
goto block15;
block15:;
goto block10;
block10:;
goto block7;
block7:;
// line 5993
org$pandalanguage$pandac$Type** $tmp68 = &param4->type;
org$pandalanguage$pandac$Type* $tmp69 = *$tmp68;
org$pandalanguage$pandac$Type** $tmp70 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp71 = *$tmp70;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
org$pandalanguage$pandac$Type** $tmp72 = &param0->rawType;
*$tmp72 = $tmp69;
// line 5994
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
// line 5995
panda$core$Bit* $tmp73 = &param1->inFieldCleanup;
panda$core$Bit $tmp74 = *$tmp73;
panda$core$Bit $tmp75 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp74);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block17; else goto block18;
block17:;
org$pandalanguage$pandac$Annotations** $tmp77 = &param4->annotations;
org$pandalanguage$pandac$Annotations* $tmp78 = *$tmp77;
panda$core$Bit $tmp79 = org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit($tmp78);
*(&local3) = $tmp79;
goto block19;
block18:;
*(&local3) = $tmp75;
goto block19;
block19:;
panda$core$Bit $tmp80 = *(&local3);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block20; else goto block22;
block20:;
// line 5996
org$pandalanguage$pandac$Type** $tmp82 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp83 = *$tmp82;
panda$collections$ImmutableArray** $tmp84 = &$tmp83->subtypes;
panda$collections$ImmutableArray* $tmp85 = *$tmp84;
panda$core$Int64 $tmp86 = (panda$core$Int64) {1};
panda$core$Object* $tmp87 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp85, $tmp86);
org$pandalanguage$pandac$Type* $tmp88 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp87)));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp87);
panda$core$Panda$unref$panda$core$Object$Q($tmp87);
goto block21;
block22:;
// line 1
// line 5999
org$pandalanguage$pandac$Type** $tmp89 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp90 = *$tmp89;
org$pandalanguage$pandac$Type* $tmp91 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
*(&local2) = $tmp90;
goto block21;
block21:;
// line 6001
org$pandalanguage$pandac$IR$Value** $tmp92 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp93 = *$tmp92;
panda$core$Bit $tmp94 = panda$core$Bit$init$builtin_bit($tmp93 != NULL);
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block23; else goto block25;
block23:;
// line 6002
org$pandalanguage$pandac$IR$Value** $tmp96 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp97 = *$tmp96;
$fn99 $tmp98 = ($fn99) $tmp97->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp100 = $tmp98($tmp97);
org$pandalanguage$pandac$Type* $tmp101 = *(&local2);
org$pandalanguage$pandac$Type* $tmp102 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, $tmp100, $tmp101);
org$pandalanguage$pandac$Type** $tmp103 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp104 = *$tmp103;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
org$pandalanguage$pandac$Type** $tmp105 = &param0->effectiveType;
*$tmp105 = $tmp102;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
goto block24;
block25:;
// line 1
// line 6005
org$pandalanguage$pandac$Type* $tmp106 = *(&local2);
org$pandalanguage$pandac$Type** $tmp107 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp108 = *$tmp107;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
org$pandalanguage$pandac$Type** $tmp109 = &param0->effectiveType;
*$tmp109 = $tmp106;
goto block24;
block24:;
// line 6007
org$pandalanguage$pandac$IR$Value** $tmp110 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp111 = *$tmp110;
panda$core$Bit $tmp112 = panda$core$Bit$init$builtin_bit($tmp111 != NULL);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block26; else goto block27;
block26:;
// line 6008
org$pandalanguage$pandac$IR$Value** $tmp114 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp115 = *$tmp114;
panda$core$Weak** $tmp116 = &param4->owner;
panda$core$Weak* $tmp117 = *$tmp116;
panda$core$Object* $tmp118 = panda$core$Weak$get$R$panda$core$Weak$T($tmp117);
panda$core$Panda$unref$panda$core$Object$Q($tmp118);
org$pandalanguage$pandac$Type** $tmp119 = &((org$pandalanguage$pandac$ClassDecl*) $tmp118)->type;
org$pandalanguage$pandac$Type* $tmp120 = *$tmp119;
org$pandalanguage$pandac$IR$Value* $tmp121 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param1, param2, $tmp115, $tmp120);
org$pandalanguage$pandac$IR$Value** $tmp122 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp123 = *$tmp122;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp123));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
org$pandalanguage$pandac$IR$Value** $tmp124 = &param0->target;
*$tmp124 = $tmp121;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
goto block27;
block27:;
org$pandalanguage$pandac$Type* $tmp125 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
// unreffing base
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
return;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$FieldLValue$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler$FieldLValue* param0) {

// line 6014
org$pandalanguage$pandac$Type** $tmp126 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp127 = *$tmp126;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
return $tmp127;

}
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$Compiler$FieldLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler$FieldLValue* param0) {

panda$core$Bit local0;
org$pandalanguage$pandac$Compiler$AutoScope* local1 = NULL;
org$pandalanguage$pandac$IR$Value* local2 = NULL;
org$pandalanguage$pandac$IR$Value* local3 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local4;
org$pandalanguage$pandac$IR$Statement$ID local5;
panda$core$Bit local6;
org$pandalanguage$pandac$Compiler$AutoUnrefs* local7 = NULL;
// line 6019
org$pandalanguage$pandac$FieldDecl** $tmp128 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp129 = *$tmp128;
org$pandalanguage$pandac$Annotations** $tmp130 = &$tmp129->annotations;
org$pandalanguage$pandac$Annotations* $tmp131 = *$tmp130;
panda$core$Bit $tmp132 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp131);
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block1; else goto block2;
block1:;
org$pandalanguage$pandac$FieldDecl** $tmp134 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp135 = *$tmp134;
org$pandalanguage$pandac$FieldDecl$Kind* $tmp136 = &$tmp135->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp137 = *$tmp136;
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp138;
$tmp138 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp138->value = $tmp137;
panda$core$Int64 $tmp139 = (panda$core$Int64) {2};
org$pandalanguage$pandac$FieldDecl$Kind $tmp140 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp139);
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp141;
$tmp141 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp141->value = $tmp140;
ITable* $tmp142 = ((panda$core$Equatable*) $tmp138)->$class->itable;
while ($tmp142->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp142 = $tmp142->next;
}
$fn144 $tmp143 = $tmp142->methods[0];
panda$core$Bit $tmp145 = $tmp143(((panda$core$Equatable*) $tmp138), ((panda$core$Equatable*) $tmp141));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp138)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp141)));
*(&local0) = $tmp145;
goto block3;
block2:;
*(&local0) = $tmp132;
goto block3;
block3:;
panda$core$Bit $tmp146 = *(&local0);
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block4; else goto block5;
block4:;
// line 6020
org$pandalanguage$pandac$Compiler** $tmp148 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp149 = *$tmp148;
panda$collections$Stack** $tmp150 = &$tmp149->currentClass;
panda$collections$Stack* $tmp151 = *$tmp150;
org$pandalanguage$pandac$FieldDecl** $tmp152 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp153 = *$tmp152;
panda$core$Weak** $tmp154 = &$tmp153->owner;
panda$core$Weak* $tmp155 = *$tmp154;
panda$core$Object* $tmp156 = panda$core$Weak$get$R$panda$core$Weak$T($tmp155);
panda$core$Panda$unref$panda$core$Object$Q($tmp156);
panda$collections$Stack$push$panda$collections$Stack$T($tmp151, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp156)));
// line 6021
org$pandalanguage$pandac$Compiler$AutoScope* $tmp157 = (org$pandalanguage$pandac$Compiler$AutoScope*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoScope$class);
org$pandalanguage$pandac$Compiler** $tmp158 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp159 = *$tmp158;
org$pandalanguage$pandac$Compiler** $tmp160 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp161 = *$tmp160;
org$pandalanguage$pandac$FieldDecl** $tmp162 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp163 = *$tmp162;
panda$core$Weak** $tmp164 = &$tmp163->owner;
panda$core$Weak* $tmp165 = *$tmp164;
panda$core$Object* $tmp166 = panda$core$Weak$get$R$panda$core$Weak$T($tmp165);
panda$core$Panda$unref$panda$core$Object$Q($tmp166);
org$pandalanguage$pandac$SymbolTable* $tmp167 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable($tmp161, ((org$pandalanguage$pandac$ClassDecl*) $tmp166));
org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$SymbolTable($tmp157, $tmp159, $tmp167);
*(&local1) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp168 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp168));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
*(&local1) = $tmp157;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
// line 6022
org$pandalanguage$pandac$Compiler** $tmp169 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp170 = *$tmp169;
org$pandalanguage$pandac$FieldDecl** $tmp171 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp172 = *$tmp171;
org$pandalanguage$pandac$ASTNode** $tmp173 = &$tmp172->rawValue;
org$pandalanguage$pandac$ASTNode* $tmp174 = *$tmp173;
org$pandalanguage$pandac$Compiler$TypeContext* $tmp175 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp176 = (panda$core$Int64) {3};
$fn178 $tmp177 = ($fn178) param0->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp179 = $tmp177(param0);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp175, $tmp176, $tmp179);
org$pandalanguage$pandac$IR$Value* $tmp180 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp170, $tmp174, $tmp175);
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp181 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
*(&local2) = $tmp180;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
// line 6023
org$pandalanguage$pandac$Compiler** $tmp182 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp183 = *$tmp182;
panda$collections$Stack** $tmp184 = &$tmp183->currentClass;
panda$collections$Stack* $tmp185 = *$tmp184;
panda$core$Object* $tmp186 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp185);
panda$core$Panda$unref$panda$core$Object$Q($tmp186);
// line 6024
org$pandalanguage$pandac$IR$Value* $tmp187 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
org$pandalanguage$pandac$IR$Value* $tmp188 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
// unreffing result
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp189 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
// unreffing auto
*(&local1) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
return $tmp187;
block5:;
// line 6026
org$pandalanguage$pandac$IR$Value** $tmp190 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp191 = *$tmp190;
panda$core$Bit $tmp192 = panda$core$Bit$init$builtin_bit($tmp191 == NULL);
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block6; else goto block7;
block6:;
// line 6028
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block7:;
// line 6030
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 6031
org$pandalanguage$pandac$FieldDecl** $tmp194 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp195 = *$tmp194;
org$pandalanguage$pandac$FieldDecl$Kind* $tmp196 = &$tmp195->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp197 = *$tmp196;
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp198;
$tmp198 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp198->value = $tmp197;
panda$core$Int64 $tmp199 = (panda$core$Int64) {3};
org$pandalanguage$pandac$FieldDecl$Kind $tmp200 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp199);
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp201;
$tmp201 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp201->value = $tmp200;
ITable* $tmp202 = ((panda$core$Equatable*) $tmp198)->$class->itable;
while ($tmp202->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp202 = $tmp202->next;
}
$fn204 $tmp203 = $tmp202->methods[0];
panda$core$Bit $tmp205 = $tmp203(((panda$core$Equatable*) $tmp198), ((panda$core$Equatable*) $tmp201));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp198)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp201)));
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block8; else goto block10;
block8:;
// line 6032
org$pandalanguage$pandac$Compiler** $tmp207 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp208 = *$tmp207;
org$pandalanguage$pandac$Position* $tmp209 = &param0->position;
org$pandalanguage$pandac$Position $tmp210 = *$tmp209;
org$pandalanguage$pandac$IR$Value** $tmp211 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp212 = *$tmp211;
org$pandalanguage$pandac$FieldDecl** $tmp213 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp214 = *$tmp213;
panda$core$String** $tmp215 = &((org$pandalanguage$pandac$Symbol*) $tmp214)->name;
panda$core$String* $tmp216 = *$tmp215;
panda$core$String* $tmp217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s218, $tmp216);
panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp217, &$s220);
panda$collections$Array* $tmp221 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp221);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp222 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp223 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type** $tmp224 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp225 = *$tmp224;
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp222, $tmp223, $tmp225);
org$pandalanguage$pandac$IR$Value* $tmp226 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp208, $tmp210, $tmp212, $tmp219, ((panda$collections$ListView*) $tmp221), $tmp222);
org$pandalanguage$pandac$IR$Value* $tmp227 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp227));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
*(&local3) = $tmp226;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp221));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
goto block9;
block10:;
// line 1
// line 6036
// line 6037
org$pandalanguage$pandac$Compiler** $tmp228 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp229 = *$tmp228;
org$pandalanguage$pandac$FieldDecl** $tmp230 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp231 = *$tmp230;
panda$core$Weak** $tmp232 = &$tmp231->owner;
panda$core$Weak* $tmp233 = *$tmp232;
panda$core$Object* $tmp234 = panda$core$Weak$get$R$panda$core$Weak$T($tmp233);
panda$core$Panda$unref$panda$core$Object$Q($tmp234);
panda$core$Bit $tmp235 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit($tmp229, ((org$pandalanguage$pandac$ClassDecl*) $tmp234));
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block11; else goto block13;
block11:;
// line 6038
org$pandalanguage$pandac$Compiler** $tmp237 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp238 = *$tmp237;
org$pandalanguage$pandac$IR** $tmp239 = &$tmp238->ir;
org$pandalanguage$pandac$IR* $tmp240 = *$tmp239;
org$pandalanguage$pandac$IR$Statement* $tmp241 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp242 = (panda$core$Int64) {9};
org$pandalanguage$pandac$Position* $tmp243 = &param0->position;
org$pandalanguage$pandac$Position $tmp244 = *$tmp243;
org$pandalanguage$pandac$IR$Value** $tmp245 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp246 = *$tmp245;
org$pandalanguage$pandac$FieldDecl** $tmp247 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp248 = *$tmp247;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp241, $tmp242, $tmp244, $tmp246, $tmp248);
$fn250 $tmp249 = ($fn250) $tmp240->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp251 = $tmp249($tmp240, $tmp241);
*(&local4) = $tmp251;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp241));
goto block12;
block13:;
// line 1
// line 6041
org$pandalanguage$pandac$Compiler** $tmp252 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp253 = *$tmp252;
org$pandalanguage$pandac$IR** $tmp254 = &$tmp253->ir;
org$pandalanguage$pandac$IR* $tmp255 = *$tmp254;
org$pandalanguage$pandac$IR$Statement* $tmp256 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp257 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Position* $tmp258 = &param0->position;
org$pandalanguage$pandac$Position $tmp259 = *$tmp258;
org$pandalanguage$pandac$IR$Value** $tmp260 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp261 = *$tmp260;
org$pandalanguage$pandac$FieldDecl** $tmp262 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp263 = *$tmp262;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp256, $tmp257, $tmp259, $tmp261, $tmp263);
$fn265 $tmp264 = ($fn265) $tmp255->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp266 = $tmp264($tmp255, $tmp256);
*(&local5) = $tmp266;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
// line 6043
org$pandalanguage$pandac$Compiler** $tmp267 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp268 = *$tmp267;
org$pandalanguage$pandac$IR** $tmp269 = &$tmp268->ir;
org$pandalanguage$pandac$IR* $tmp270 = *$tmp269;
org$pandalanguage$pandac$IR$Statement* $tmp271 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp272 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Position* $tmp273 = &param0->position;
org$pandalanguage$pandac$Position $tmp274 = *$tmp273;
org$pandalanguage$pandac$IR$Value* $tmp275 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp276 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp277 = *(&local5);
org$pandalanguage$pandac$Type** $tmp278 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp279 = *$tmp278;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp275, $tmp276, $tmp277, $tmp279);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp271, $tmp272, $tmp274, $tmp275);
$fn281 $tmp280 = ($fn281) $tmp270->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp282 = $tmp280($tmp270, $tmp271);
*(&local4) = $tmp282;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp271));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
goto block12;
block12:;
// line 6045
org$pandalanguage$pandac$IR$Value* $tmp283 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp284 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp285 = *(&local4);
org$pandalanguage$pandac$Type** $tmp286 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp287 = *$tmp286;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp283, $tmp284, $tmp285, $tmp287);
org$pandalanguage$pandac$IR$Value* $tmp288 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp288));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
*(&local3) = $tmp283;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
goto block9;
block9:;
// line 6047
org$pandalanguage$pandac$Compiler** $tmp289 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp290 = *$tmp289;
panda$core$Bit* $tmp291 = &$tmp290->inFieldCleanup;
panda$core$Bit $tmp292 = *$tmp291;
panda$core$Bit $tmp293 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp292);
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$FieldDecl** $tmp295 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp296 = *$tmp295;
org$pandalanguage$pandac$Annotations** $tmp297 = &$tmp296->annotations;
org$pandalanguage$pandac$Annotations* $tmp298 = *$tmp297;
panda$core$Bit $tmp299 = org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit($tmp298);
*(&local6) = $tmp299;
goto block16;
block15:;
*(&local6) = $tmp293;
goto block16;
block16:;
panda$core$Bit $tmp300 = *(&local6);
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block17; else goto block18;
block17:;
// line 6048
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp302 = (org$pandalanguage$pandac$Compiler$AutoUnrefs*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoUnrefs$class);
org$pandalanguage$pandac$Compiler** $tmp303 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp304 = *$tmp303;
org$pandalanguage$pandac$Compiler$AutoUnrefs$init$org$pandalanguage$pandac$Compiler($tmp302, $tmp304);
*(&local7) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp305 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
*(&local7) = $tmp302;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
// line 6049
org$pandalanguage$pandac$Compiler** $tmp306 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp307 = *$tmp306;
org$pandalanguage$pandac$Position* $tmp308 = &param0->position;
org$pandalanguage$pandac$Position $tmp309 = *$tmp308;
org$pandalanguage$pandac$IR$Value* $tmp310 = *(&local3);
panda$collections$ImmutableArray* $tmp311 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp311);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp312 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp313 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp312, $tmp313);
org$pandalanguage$pandac$IR$Value* $tmp314 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp307, $tmp309, $tmp310, &$s315, ((panda$collections$ListView*) $tmp311), $tmp312);
org$pandalanguage$pandac$IR$Value* $tmp316 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp316));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
*(&local3) = $tmp314;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp317 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp317));
// unreffing auto
*(&local7) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
goto block18;
block18:;
// line 6052
org$pandalanguage$pandac$Type** $tmp318 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp319 = *$tmp318;
org$pandalanguage$pandac$IR$Value* $tmp320 = *(&local3);
$fn322 $tmp321 = ($fn322) $tmp320->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp323 = $tmp321($tmp320);
ITable* $tmp324 = ((panda$core$Equatable*) $tmp319)->$class->itable;
while ($tmp324->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp324 = $tmp324->next;
}
$fn326 $tmp325 = $tmp324->methods[1];
panda$core$Bit $tmp327 = $tmp325(((panda$core$Equatable*) $tmp319), ((panda$core$Equatable*) $tmp323));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp323));
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block19; else goto block20;
block19:;
// line 6053
org$pandalanguage$pandac$Compiler** $tmp329 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp330 = *$tmp329;
org$pandalanguage$pandac$Position* $tmp331 = &param0->position;
org$pandalanguage$pandac$Position $tmp332 = *$tmp331;
org$pandalanguage$pandac$IR$Value* $tmp333 = *(&local3);
org$pandalanguage$pandac$Type** $tmp334 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp335 = *$tmp334;
org$pandalanguage$pandac$IR$Value* $tmp336 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q($tmp330, $tmp332, $tmp333, $tmp335);
org$pandalanguage$pandac$IR$Value* $tmp337 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp336));
*(&local3) = $tmp336;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp336));
goto block20;
block20:;
// line 6055
org$pandalanguage$pandac$IR$Value* $tmp338 = *(&local3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp338));
org$pandalanguage$pandac$IR$Value* $tmp339 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp338;

}
void org$pandalanguage$pandac$Compiler$FieldLValue$compileStore$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$Compiler$FieldLValue* param0, org$pandalanguage$pandac$IR$Value* param1) {

org$pandalanguage$pandac$IR$Value* local0 = NULL;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
panda$core$Bit local2;
panda$collections$Array* local3 = NULL;
panda$collections$Array* local4 = NULL;
panda$core$Bit local5;
org$pandalanguage$pandac$IR$Value* local6 = NULL;
// line 6060
org$pandalanguage$pandac$IR$Value** $tmp340 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp341 = *$tmp340;
panda$core$Bit $tmp342 = panda$core$Bit$init$builtin_bit($tmp341 == NULL);
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block1; else goto block2;
block1:;
// line 6062
return;
block2:;
// line 6064
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 6065
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 6066
org$pandalanguage$pandac$Compiler** $tmp344 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp345 = *$tmp344;
panda$core$Bit* $tmp346 = &$tmp345->inFieldCleanup;
panda$core$Bit $tmp347 = *$tmp346;
panda$core$Bit $tmp348 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp347);
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block3; else goto block4;
block3:;
org$pandalanguage$pandac$FieldDecl** $tmp350 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp351 = *$tmp350;
org$pandalanguage$pandac$Annotations** $tmp352 = &$tmp351->annotations;
org$pandalanguage$pandac$Annotations* $tmp353 = *$tmp352;
panda$core$Bit $tmp354 = org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit($tmp353);
*(&local2) = $tmp354;
goto block5;
block4:;
*(&local2) = $tmp348;
goto block5;
block5:;
panda$core$Bit $tmp355 = *(&local2);
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block6; else goto block8;
block6:;
// line 6067
panda$collections$Array* $tmp357 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp357);
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp358 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp357));
*(&local3) = $tmp357;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp357));
// line 6068
panda$collections$Array* $tmp359 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp360 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp361 = (panda$core$Int64) {23};
org$pandalanguage$pandac$Position* $tmp362 = &param0->position;
org$pandalanguage$pandac$Position $tmp363 = *$tmp362;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp360, $tmp361, $tmp363, param1);
panda$collections$Array$add$panda$collections$Array$T($tmp359, ((panda$core$Object*) $tmp360));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp360));
// line 6069
org$pandalanguage$pandac$Compiler** $tmp364 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp365 = *$tmp364;
org$pandalanguage$pandac$ASTNode* $tmp366 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp367 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Position* $tmp368 = &param0->position;
org$pandalanguage$pandac$Position $tmp369 = *$tmp368;
org$pandalanguage$pandac$ASTNode* $tmp370 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp371 = (panda$core$Int64) {23};
org$pandalanguage$pandac$Position* $tmp372 = &param0->position;
org$pandalanguage$pandac$Position $tmp373 = *$tmp372;
org$pandalanguage$pandac$IR$Value* $tmp374 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp375 = (panda$core$Int64) {12};
org$pandalanguage$pandac$Type** $tmp376 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp377 = *$tmp376;
org$pandalanguage$pandac$Type* $tmp378 = org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp377);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp374, $tmp375, $tmp378);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp370, $tmp371, $tmp373, $tmp374);
panda$collections$Array* $tmp379 = *(&local3);
panda$collections$ImmutableArray* $tmp380 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp379);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp366, $tmp367, $tmp369, $tmp370, $tmp380);
org$pandalanguage$pandac$IR$Value* $tmp381 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IR$Value$Q($tmp365, $tmp366);
org$pandalanguage$pandac$IR$Value* $tmp382 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp382));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
*(&local1) = $tmp381;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp370));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp374));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp378));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
panda$collections$Array* $tmp383 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp383));
// unreffing args
*(&local3) = ((panda$collections$Array*) NULL);
goto block7;
block8:;
// line 1
// line 6074
org$pandalanguage$pandac$IR$Value* $tmp384 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp384));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
*(&local1) = param1;
goto block7;
block7:;
// line 6076
org$pandalanguage$pandac$Type** $tmp385 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp386 = *$tmp385;
org$pandalanguage$pandac$Type** $tmp387 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp388 = *$tmp387;
ITable* $tmp389 = ((panda$core$Equatable*) $tmp386)->$class->itable;
while ($tmp389->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp389 = $tmp389->next;
}
$fn391 $tmp390 = $tmp389->methods[1];
panda$core$Bit $tmp392 = $tmp390(((panda$core$Equatable*) $tmp386), ((panda$core$Equatable*) $tmp388));
bool $tmp393 = $tmp392.value;
if ($tmp393) goto block9; else goto block11;
block9:;
// line 6077
org$pandalanguage$pandac$Compiler** $tmp394 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp395 = *$tmp394;
org$pandalanguage$pandac$Position* $tmp396 = &param0->position;
org$pandalanguage$pandac$Position $tmp397 = *$tmp396;
org$pandalanguage$pandac$IR$Value* $tmp398 = *(&local1);
org$pandalanguage$pandac$Type** $tmp399 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp400 = *$tmp399;
org$pandalanguage$pandac$IR$Value* $tmp401 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q($tmp395, $tmp397, $tmp398, $tmp400);
org$pandalanguage$pandac$IR$Value* $tmp402 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
*(&local0) = $tmp401;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
// line 6078
org$pandalanguage$pandac$IR$Value* $tmp403 = *(&local0);
panda$core$Bit $tmp404 = panda$core$Bit$init$builtin_bit(false);
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block12; else goto block13;
block12:;
// line 6079
org$pandalanguage$pandac$IR$Value* $tmp406 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp407 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
// unreffing cast
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;
block13:;
goto block10;
block11:;
// line 1
// line 6083
org$pandalanguage$pandac$IR$Value* $tmp408 = *(&local1);
org$pandalanguage$pandac$IR$Value* $tmp409 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp409));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
*(&local0) = $tmp408;
goto block10;
block10:;
// line 6085
org$pandalanguage$pandac$FieldDecl** $tmp410 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp411 = *$tmp410;
org$pandalanguage$pandac$FieldDecl$Kind* $tmp412 = &$tmp411->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp413 = *$tmp412;
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp414;
$tmp414 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp414->value = $tmp413;
panda$core$Int64 $tmp415 = (panda$core$Int64) {3};
org$pandalanguage$pandac$FieldDecl$Kind $tmp416 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp415);
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp417;
$tmp417 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp417->value = $tmp416;
ITable* $tmp418 = ((panda$core$Equatable*) $tmp414)->$class->itable;
while ($tmp418->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp418 = $tmp418->next;
}
$fn420 $tmp419 = $tmp418->methods[0];
panda$core$Bit $tmp421 = $tmp419(((panda$core$Equatable*) $tmp414), ((panda$core$Equatable*) $tmp417));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp414)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp417)));
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block14; else goto block16;
block14:;
// line 6086
panda$collections$Array* $tmp423 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp423);
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp424 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp424));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp423));
*(&local4) = $tmp423;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp423));
// line 6087
panda$collections$Array* $tmp425 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp426 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp427 = (panda$core$Int64) {23};
org$pandalanguage$pandac$Position* $tmp428 = &param0->position;
org$pandalanguage$pandac$Position $tmp429 = *$tmp428;
org$pandalanguage$pandac$IR$Value* $tmp430 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp426, $tmp427, $tmp429, $tmp430);
panda$collections$Array$add$panda$collections$Array$T($tmp425, ((panda$core$Object*) $tmp426));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp426));
// line 6088
org$pandalanguage$pandac$Compiler** $tmp431 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp432 = *$tmp431;
org$pandalanguage$pandac$Position* $tmp433 = &param0->position;
org$pandalanguage$pandac$Position $tmp434 = *$tmp433;
org$pandalanguage$pandac$IR$Value** $tmp435 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp436 = *$tmp435;
org$pandalanguage$pandac$FieldDecl** $tmp437 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp438 = *$tmp437;
panda$core$String** $tmp439 = &((org$pandalanguage$pandac$Symbol*) $tmp438)->name;
panda$core$String* $tmp440 = *$tmp439;
panda$core$String* $tmp441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s442, $tmp440);
panda$core$String* $tmp443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp441, &$s444);
panda$collections$Array* $tmp445 = *(&local4);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp446 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp447 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type** $tmp448 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp449 = *$tmp448;
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp446, $tmp447, $tmp449);
org$pandalanguage$pandac$IR$Value* $tmp450 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp432, $tmp434, $tmp436, $tmp443, ((panda$collections$ListView*) $tmp445), $tmp446);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp441));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp443));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp446));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp450));
panda$collections$Array* $tmp451 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp451));
// unreffing args
*(&local4) = ((panda$collections$Array*) NULL);
goto block15;
block16:;
// line 1
// line 6092
org$pandalanguage$pandac$Compiler** $tmp452 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp453 = *$tmp452;
org$pandalanguage$pandac$Type** $tmp454 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp455 = *$tmp454;
panda$core$Bit $tmp456 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp453, $tmp455);
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block17; else goto block18;
block17:;
org$pandalanguage$pandac$FieldDecl** $tmp458 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp459 = *$tmp458;
panda$core$Weak** $tmp460 = &$tmp459->owner;
panda$core$Weak* $tmp461 = *$tmp460;
panda$core$Object* $tmp462 = panda$core$Weak$get$R$panda$core$Weak$T($tmp461);
panda$core$Panda$unref$panda$core$Object$Q($tmp462);
panda$core$String** $tmp463 = &((org$pandalanguage$pandac$ClassDecl*) $tmp462)->name;
panda$core$String* $tmp464 = *$tmp463;
ITable* $tmp466 = ((panda$core$Equatable*) $tmp464)->$class->itable;
while ($tmp466->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp466 = $tmp466->next;
}
$fn468 $tmp467 = $tmp466->methods[1];
panda$core$Bit $tmp469 = $tmp467(((panda$core$Equatable*) $tmp464), ((panda$core$Equatable*) &$s465));
*(&local5) = $tmp469;
goto block19;
block18:;
*(&local5) = $tmp456;
goto block19;
block19:;
panda$core$Bit $tmp470 = *(&local5);
bool $tmp471 = $tmp470.value;
if ($tmp471) goto block20; else goto block21;
block20:;
// line 6093
$fn473 $tmp472 = ($fn473) param0->$class->vtable[5];
$tmp472(param0);
// line 6094
org$pandalanguage$pandac$Compiler** $tmp474 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp475 = *$tmp474;
org$pandalanguage$pandac$IR$Value* $tmp476 = *(&local1);
org$pandalanguage$pandac$Compiler$compileRef$org$pandalanguage$pandac$IR$Value($tmp475, $tmp476);
goto block21;
block21:;
// line 6096
org$pandalanguage$pandac$IR$Value* $tmp477 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp478 = (panda$core$Int64) {7};
org$pandalanguage$pandac$Compiler** $tmp479 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp480 = *$tmp479;
org$pandalanguage$pandac$IR** $tmp481 = &$tmp480->ir;
org$pandalanguage$pandac$IR* $tmp482 = *$tmp481;
org$pandalanguage$pandac$IR$Statement* $tmp483 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp484 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Position* $tmp485 = &param0->position;
org$pandalanguage$pandac$Position $tmp486 = *$tmp485;
org$pandalanguage$pandac$IR$Value** $tmp487 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp488 = *$tmp487;
org$pandalanguage$pandac$FieldDecl** $tmp489 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp490 = *$tmp489;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp483, $tmp484, $tmp486, $tmp488, $tmp490);
$fn492 $tmp491 = ($fn492) $tmp482->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp493 = $tmp491($tmp482, $tmp483);
org$pandalanguage$pandac$Type** $tmp494 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp495 = *$tmp494;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp477, $tmp478, $tmp493, $tmp495);
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp496 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp496));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp477));
*(&local6) = $tmp477;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp477));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp483));
// line 6098
org$pandalanguage$pandac$Compiler** $tmp497 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp498 = *$tmp497;
org$pandalanguage$pandac$IR** $tmp499 = &$tmp498->ir;
org$pandalanguage$pandac$IR* $tmp500 = *$tmp499;
org$pandalanguage$pandac$IR$Statement* $tmp501 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp502 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position* $tmp503 = &param0->position;
org$pandalanguage$pandac$Position $tmp504 = *$tmp503;
org$pandalanguage$pandac$IR$Value* $tmp505 = *(&local0);
org$pandalanguage$pandac$IR$Value* $tmp506 = *(&local6);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp501, $tmp502, $tmp504, $tmp505, $tmp506);
$fn508 $tmp507 = ($fn508) $tmp500->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp509 = $tmp507($tmp500, $tmp501);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
org$pandalanguage$pandac$IR$Value* $tmp510 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp510));
// unreffing ptr
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block15;
block15:;
org$pandalanguage$pandac$IR$Value* $tmp511 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp511));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp512 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
// unreffing cast
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;

}
void org$pandalanguage$pandac$Compiler$FieldLValue$compileUnref(org$pandalanguage$pandac$Compiler$FieldLValue* param0) {

org$pandalanguage$pandac$IR$Value* local0 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local1;
org$pandalanguage$pandac$IR$Statement$ID local2;
// line 6103
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 6104
org$pandalanguage$pandac$FieldDecl** $tmp513 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp514 = *$tmp513;
org$pandalanguage$pandac$FieldDecl$Kind* $tmp515 = &$tmp514->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp516 = *$tmp515;
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp517;
$tmp517 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp517->value = $tmp516;
panda$core$Int64 $tmp518 = (panda$core$Int64) {3};
org$pandalanguage$pandac$FieldDecl$Kind $tmp519 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp518);
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp520;
$tmp520 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp520->value = $tmp519;
ITable* $tmp521 = ((panda$core$Equatable*) $tmp517)->$class->itable;
while ($tmp521->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp521 = $tmp521->next;
}
$fn523 $tmp522 = $tmp521->methods[0];
panda$core$Bit $tmp524 = $tmp522(((panda$core$Equatable*) $tmp517), ((panda$core$Equatable*) $tmp520));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp517)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp520)));
bool $tmp525 = $tmp524.value;
if ($tmp525) goto block1; else goto block2;
block1:;
// line 6105
org$pandalanguage$pandac$IR$Value* $tmp526 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp526));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;
block2:;
// line 6107
// line 6108
org$pandalanguage$pandac$Compiler** $tmp527 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp528 = *$tmp527;
org$pandalanguage$pandac$FieldDecl** $tmp529 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp530 = *$tmp529;
panda$core$Weak** $tmp531 = &$tmp530->owner;
panda$core$Weak* $tmp532 = *$tmp531;
panda$core$Object* $tmp533 = panda$core$Weak$get$R$panda$core$Weak$T($tmp532);
panda$core$Panda$unref$panda$core$Object$Q($tmp533);
panda$core$Bit $tmp534 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit($tmp528, ((org$pandalanguage$pandac$ClassDecl*) $tmp533));
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block3; else goto block5;
block3:;
// line 6109
org$pandalanguage$pandac$Compiler** $tmp536 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp537 = *$tmp536;
org$pandalanguage$pandac$IR** $tmp538 = &$tmp537->ir;
org$pandalanguage$pandac$IR* $tmp539 = *$tmp538;
org$pandalanguage$pandac$IR$Statement* $tmp540 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp541 = (panda$core$Int64) {9};
org$pandalanguage$pandac$Position* $tmp542 = &param0->position;
org$pandalanguage$pandac$Position $tmp543 = *$tmp542;
org$pandalanguage$pandac$IR$Value** $tmp544 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp545 = *$tmp544;
org$pandalanguage$pandac$FieldDecl** $tmp546 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp547 = *$tmp546;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp540, $tmp541, $tmp543, $tmp545, $tmp547);
$fn549 $tmp548 = ($fn549) $tmp539->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp550 = $tmp548($tmp539, $tmp540);
*(&local1) = $tmp550;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp540));
goto block4;
block5:;
// line 1
// line 6112
org$pandalanguage$pandac$Compiler** $tmp551 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp552 = *$tmp551;
org$pandalanguage$pandac$IR** $tmp553 = &$tmp552->ir;
org$pandalanguage$pandac$IR* $tmp554 = *$tmp553;
org$pandalanguage$pandac$IR$Statement* $tmp555 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp556 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Position* $tmp557 = &param0->position;
org$pandalanguage$pandac$Position $tmp558 = *$tmp557;
org$pandalanguage$pandac$IR$Value** $tmp559 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp560 = *$tmp559;
org$pandalanguage$pandac$FieldDecl** $tmp561 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp562 = *$tmp561;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp555, $tmp556, $tmp558, $tmp560, $tmp562);
$fn564 $tmp563 = ($fn564) $tmp554->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp565 = $tmp563($tmp554, $tmp555);
*(&local2) = $tmp565;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp555));
// line 6113
org$pandalanguage$pandac$Compiler** $tmp566 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp567 = *$tmp566;
org$pandalanguage$pandac$IR** $tmp568 = &$tmp567->ir;
org$pandalanguage$pandac$IR* $tmp569 = *$tmp568;
org$pandalanguage$pandac$IR$Statement* $tmp570 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp571 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Position* $tmp572 = &param0->position;
org$pandalanguage$pandac$Position $tmp573 = *$tmp572;
org$pandalanguage$pandac$IR$Value* $tmp574 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp575 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp576 = *(&local2);
org$pandalanguage$pandac$Type** $tmp577 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp578 = *$tmp577;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp574, $tmp575, $tmp576, $tmp578);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp570, $tmp571, $tmp573, $tmp574);
$fn580 $tmp579 = ($fn580) $tmp569->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp581 = $tmp579($tmp569, $tmp570);
*(&local1) = $tmp581;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp570));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp574));
goto block4;
block4:;
// line 6115
org$pandalanguage$pandac$IR$Value* $tmp582 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp583 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp584 = *(&local1);
org$pandalanguage$pandac$Type** $tmp585 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp586 = *$tmp585;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp582, $tmp583, $tmp584, $tmp586);
org$pandalanguage$pandac$IR$Value* $tmp587 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp587));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp582));
*(&local0) = $tmp582;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp582));
// line 6134
org$pandalanguage$pandac$Compiler** $tmp588 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp589 = *$tmp588;
org$pandalanguage$pandac$IR$Value* $tmp590 = *(&local0);
org$pandalanguage$pandac$Compiler$compileUnref$org$pandalanguage$pandac$IR$Value($tmp589, $tmp590);
org$pandalanguage$pandac$IR$Value* $tmp591 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp591));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;

}
void org$pandalanguage$pandac$Compiler$FieldLValue$cleanup(org$pandalanguage$pandac$Compiler$FieldLValue* param0) {

org$pandalanguage$pandac$Compiler** $tmp592 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp593 = *$tmp592;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp593));
org$pandalanguage$pandac$IR$Value** $tmp594 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp595 = *$tmp594;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp595));
org$pandalanguage$pandac$FieldDecl** $tmp596 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp597 = *$tmp596;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp597));
org$pandalanguage$pandac$Type** $tmp598 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp599 = *$tmp598;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp599));
org$pandalanguage$pandac$Type** $tmp600 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp601 = *$tmp600;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp601));
return;

}

