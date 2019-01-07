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
typedef panda$core$Bit (*$fn144)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn166)(org$pandalanguage$pandac$Compiler$FieldLValue*);
typedef panda$core$Bit (*$fn191)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn237)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn252)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn268)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$Type* (*$fn304)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn308)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn373)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn402)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn450)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn458)(org$pandalanguage$pandac$Compiler$FieldLValue*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn474)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn490)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Bit (*$fn505)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn531)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn546)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn562)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 45, -7982951497069999908, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x70\x61\x6e\x64\x61", 14, -3408958965109419534, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74\x5f", 4, 211223516, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x74\x5f", 4, 223587128, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };

void org$pandalanguage$pandac$Compiler$FieldLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler$FieldLValue* param0, org$pandalanguage$pandac$Compiler* param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3, org$pandalanguage$pandac$FieldDecl* param4) {

panda$core$Bit local0;
panda$core$Bit local1;
org$pandalanguage$pandac$Type* local2 = NULL;
panda$core$Bit local3;
// line 6152
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$Compiler** $tmp2 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 6153
org$pandalanguage$pandac$Position* $tmp5 = &param0->position;
*$tmp5 = param2;
// line 6154
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
panda$core$Int64 $tmp17 = (panda$core$Int64) {6154};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s18, $tmp17);
abort(); // unreachable
block1:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp11)));
// unreffing REF($19:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp8)));
// unreffing REF($15:panda.core.Equatable<org.pandalanguage.pandac.Compiler.Resolution>)
// line 6155
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FieldDecl** $tmp19 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp20 = *$tmp19;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
org$pandalanguage$pandac$FieldDecl** $tmp21 = &param0->field;
*$tmp21 = param4;
// line 6156
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
// line 6157
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp31 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp32 = *$tmp31;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
org$pandalanguage$pandac$IR$Value** $tmp33 = &param0->target;
*$tmp33 = param3;
goto block4;
block8:;
// line 6159
org$pandalanguage$pandac$Annotations** $tmp34 = &param4->annotations;
org$pandalanguage$pandac$Annotations* $tmp35 = *$tmp34;
panda$core$Bit $tmp36 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp35);
panda$core$Bit $tmp37 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp36);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block9; else goto block10;
block9:;
// line 6160
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
// line 6162
org$pandalanguage$pandac$IR$Value* $tmp51 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
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
// line 6165
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
// line 6168
org$pandalanguage$pandac$Type** $tmp68 = &param4->type;
org$pandalanguage$pandac$Type* $tmp69 = *$tmp68;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
org$pandalanguage$pandac$Type** $tmp70 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp71 = *$tmp70;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
org$pandalanguage$pandac$Type** $tmp72 = &param0->rawType;
*$tmp72 = $tmp69;
// line 6169
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
// line 6170
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
// line 6171
org$pandalanguage$pandac$Type** $tmp82 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp83 = *$tmp82;
panda$collections$ImmutableArray** $tmp84 = &$tmp83->subtypes;
panda$collections$ImmutableArray* $tmp85 = *$tmp84;
panda$core$Int64 $tmp86 = (panda$core$Int64) {1};
panda$core$Object* $tmp87 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp85, $tmp86);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp87)));
org$pandalanguage$pandac$Type* $tmp88 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp87);
panda$core$Panda$unref$panda$core$Object$Q($tmp87);
// unreffing REF($187:panda.collections.ImmutableArray.T)
goto block18;
block22:;
// line 1
// line 6174
org$pandalanguage$pandac$Type** $tmp89 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp90 = *$tmp89;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
org$pandalanguage$pandac$Type* $tmp91 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
*(&local2) = $tmp90;
goto block18;
block18:;
// line 6176
org$pandalanguage$pandac$IR$Value** $tmp92 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp93 = *$tmp92;
panda$core$Bit $tmp94 = panda$core$Bit$init$builtin_bit($tmp93 != NULL);
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block23; else goto block25;
block23:;
// line 6177
org$pandalanguage$pandac$IR$Value** $tmp96 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp97 = *$tmp96;
$fn99 $tmp98 = ($fn99) $tmp97->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp100 = $tmp98($tmp97);
org$pandalanguage$pandac$Type* $tmp101 = *(&local2);
org$pandalanguage$pandac$Type* $tmp102 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, $tmp100, $tmp101);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
org$pandalanguage$pandac$Type** $tmp103 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp104 = *$tmp103;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
org$pandalanguage$pandac$Type** $tmp105 = &param0->effectiveType;
*$tmp105 = $tmp102;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
// unreffing REF($224:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
// unreffing REF($222:org.pandalanguage.pandac.Type)
goto block24;
block25:;
// line 1
// line 6180
org$pandalanguage$pandac$Type* $tmp106 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
org$pandalanguage$pandac$Type** $tmp107 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp108 = *$tmp107;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
org$pandalanguage$pandac$Type** $tmp109 = &param0->effectiveType;
*$tmp109 = $tmp106;
goto block24;
block24:;
// line 6182
org$pandalanguage$pandac$IR$Value** $tmp110 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp111 = *$tmp110;
panda$core$Bit $tmp112 = panda$core$Bit$init$builtin_bit($tmp111 != NULL);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block26; else goto block27;
block26:;
// line 6183
org$pandalanguage$pandac$IR$Value** $tmp114 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp115 = *$tmp114;
panda$core$Weak** $tmp116 = &param4->owner;
panda$core$Weak* $tmp117 = *$tmp116;
panda$core$Object* $tmp118 = panda$core$Weak$get$R$panda$core$Weak$T($tmp117);
org$pandalanguage$pandac$Type** $tmp119 = &((org$pandalanguage$pandac$ClassDecl*) $tmp118)->type;
org$pandalanguage$pandac$Type* $tmp120 = *$tmp119;
org$pandalanguage$pandac$IR$Value* $tmp121 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param1, param2, $tmp115, $tmp120);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
org$pandalanguage$pandac$IR$Value** $tmp122 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp123 = *$tmp122;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp123));
org$pandalanguage$pandac$IR$Value** $tmp124 = &param0->target;
*$tmp124 = $tmp121;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
// unreffing REF($269:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q($tmp118);
// unreffing REF($265:panda.core.Weak.T)
goto block27;
block27:;
org$pandalanguage$pandac$Type* $tmp125 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
// unreffing base
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
return;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$FieldLValue$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler$FieldLValue* param0) {

// line 6189
org$pandalanguage$pandac$Type** $tmp126 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp127 = *$tmp126;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
return $tmp127;

}
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$Compiler$FieldLValue$compileLoad$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler$FieldLValue* param0) {

panda$core$Bit local0;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
org$pandalanguage$pandac$IR$Value* local2 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local3;
org$pandalanguage$pandac$IR$Statement$ID local4;
panda$core$Bit local5;
// line 6194
org$pandalanguage$pandac$FieldDecl** $tmp128 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp129 = *$tmp128;
org$pandalanguage$pandac$Annotations** $tmp130 = &$tmp129->annotations;
org$pandalanguage$pandac$Annotations* $tmp131 = *$tmp130;
panda$core$Bit $tmp132 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp131);
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block3; else goto block4;
block3:;
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp141)));
// unreffing REF($16:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp138)));
// unreffing REF($12:panda.core.Equatable<org.pandalanguage.pandac.FieldDecl.Kind>)
*(&local0) = $tmp145;
goto block5;
block4:;
*(&local0) = $tmp132;
goto block5;
block5:;
panda$core$Bit $tmp146 = *(&local0);
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block1; else goto block2;
block1:;
// line 6195
org$pandalanguage$pandac$Compiler** $tmp148 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp149 = *$tmp148;
panda$collections$Stack** $tmp150 = &$tmp149->currentClass;
panda$collections$Stack* $tmp151 = *$tmp150;
org$pandalanguage$pandac$FieldDecl** $tmp152 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp153 = *$tmp152;
panda$core$Weak** $tmp154 = &$tmp153->owner;
panda$core$Weak* $tmp155 = *$tmp154;
panda$core$Object* $tmp156 = panda$core$Weak$get$R$panda$core$Weak$T($tmp155);
panda$collections$Stack$push$panda$collections$Stack$T($tmp151, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp156)));
panda$core$Panda$unref$panda$core$Object$Q($tmp156);
// unreffing REF($43:panda.core.Weak.T)
// line 6196
org$pandalanguage$pandac$Compiler** $tmp157 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp158 = *$tmp157;
org$pandalanguage$pandac$FieldDecl** $tmp159 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp160 = *$tmp159;
org$pandalanguage$pandac$ASTNode** $tmp161 = &$tmp160->rawValue;
org$pandalanguage$pandac$ASTNode* $tmp162 = *$tmp161;
org$pandalanguage$pandac$Compiler$TypeContext* $tmp163 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp164 = (panda$core$Int64) {3};
$fn166 $tmp165 = ($fn166) param0->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp167 = $tmp165(param0);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp163, $tmp164, $tmp167);
org$pandalanguage$pandac$IR$Value* $tmp168 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp158, $tmp162, $tmp163);
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp168));
org$pandalanguage$pandac$IR$Value* $tmp169 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp169));
*(&local1) = $tmp168;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp168));
// unreffing REF($63:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
// unreffing REF($61:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp163));
// unreffing REF($58:org.pandalanguage.pandac.Compiler.TypeContext)
// line 6197
org$pandalanguage$pandac$Compiler** $tmp170 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp171 = *$tmp170;
panda$collections$Stack** $tmp172 = &$tmp171->currentClass;
panda$collections$Stack* $tmp173 = *$tmp172;
panda$core$Object* $tmp174 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp173);
panda$core$Panda$unref$panda$core$Object$Q($tmp174);
// unreffing REF($86:panda.collections.Stack.T)
// line 6198
org$pandalanguage$pandac$IR$Value* $tmp175 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
org$pandalanguage$pandac$IR$Value* $tmp176 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
// unreffing result
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp175;
block2:;
// line 6200
org$pandalanguage$pandac$IR$Value** $tmp177 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp178 = *$tmp177;
panda$core$Bit $tmp179 = panda$core$Bit$init$builtin_bit($tmp178 == NULL);
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block6; else goto block7;
block6:;
// line 6202
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block7:;
// line 6204
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 6205
org$pandalanguage$pandac$FieldDecl** $tmp181 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp182 = *$tmp181;
org$pandalanguage$pandac$FieldDecl$Kind* $tmp183 = &$tmp182->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp184 = *$tmp183;
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp185;
$tmp185 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp185->value = $tmp184;
panda$core$Int64 $tmp186 = (panda$core$Int64) {3};
org$pandalanguage$pandac$FieldDecl$Kind $tmp187 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp186);
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp188;
$tmp188 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp188->value = $tmp187;
ITable* $tmp189 = ((panda$core$Equatable*) $tmp185)->$class->itable;
while ($tmp189->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp189 = $tmp189->next;
}
$fn191 $tmp190 = $tmp189->methods[0];
panda$core$Bit $tmp192 = $tmp190(((panda$core$Equatable*) $tmp185), ((panda$core$Equatable*) $tmp188));
bool $tmp193 = $tmp192.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp188)));
// unreffing REF($123:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp185)));
// unreffing REF($119:panda.core.Equatable<org.pandalanguage.pandac.FieldDecl.Kind>)
if ($tmp193) goto block8; else goto block10;
block8:;
// line 6206
org$pandalanguage$pandac$Compiler** $tmp194 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp195 = *$tmp194;
org$pandalanguage$pandac$Position* $tmp196 = &param0->position;
org$pandalanguage$pandac$Position $tmp197 = *$tmp196;
org$pandalanguage$pandac$IR$Value** $tmp198 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp199 = *$tmp198;
org$pandalanguage$pandac$FieldDecl** $tmp200 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp201 = *$tmp200;
panda$core$String** $tmp202 = &((org$pandalanguage$pandac$Symbol*) $tmp201)->name;
panda$core$String* $tmp203 = *$tmp202;
panda$core$String* $tmp204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s205, $tmp203);
panda$core$String* $tmp206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp204, &$s207);
panda$collections$Array* $tmp208 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp208);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp209 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp210 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type** $tmp211 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp212 = *$tmp211;
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp209, $tmp210, $tmp212);
org$pandalanguage$pandac$IR$Value* $tmp213 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp195, $tmp197, $tmp199, $tmp206, ((panda$collections$ListView*) $tmp208), $tmp209);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
org$pandalanguage$pandac$IR$Value* $tmp214 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
*(&local2) = $tmp213;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
// unreffing REF($158:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp209));
// unreffing REF($153:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
// unreffing REF($149:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
// unreffing REF($148:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
// unreffing REF($147:panda.core.String)
goto block9;
block10:;
// line 1
// line 6210
// line 6211
org$pandalanguage$pandac$Compiler** $tmp215 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp216 = *$tmp215;
org$pandalanguage$pandac$FieldDecl** $tmp217 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp218 = *$tmp217;
panda$core$Weak** $tmp219 = &$tmp218->owner;
panda$core$Weak* $tmp220 = *$tmp219;
panda$core$Object* $tmp221 = panda$core$Weak$get$R$panda$core$Weak$T($tmp220);
panda$core$Bit $tmp222 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit($tmp216, ((org$pandalanguage$pandac$ClassDecl*) $tmp221));
bool $tmp223 = $tmp222.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp221);
// unreffing REF($192:panda.core.Weak.T)
if ($tmp223) goto block11; else goto block13;
block11:;
// line 6212
org$pandalanguage$pandac$Compiler** $tmp224 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp225 = *$tmp224;
org$pandalanguage$pandac$IR** $tmp226 = &$tmp225->ir;
org$pandalanguage$pandac$IR* $tmp227 = *$tmp226;
org$pandalanguage$pandac$IR$Statement* $tmp228 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp229 = (panda$core$Int64) {9};
org$pandalanguage$pandac$Position* $tmp230 = &param0->position;
org$pandalanguage$pandac$Position $tmp231 = *$tmp230;
org$pandalanguage$pandac$IR$Value** $tmp232 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp233 = *$tmp232;
org$pandalanguage$pandac$FieldDecl** $tmp234 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp235 = *$tmp234;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp228, $tmp229, $tmp231, $tmp233, $tmp235);
$fn237 $tmp236 = ($fn237) $tmp227->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp238 = $tmp236($tmp227, $tmp228);
*(&local3) = $tmp238;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp228));
// unreffing REF($206:org.pandalanguage.pandac.IR.Statement)
goto block12;
block13:;
// line 1
// line 6215
org$pandalanguage$pandac$Compiler** $tmp239 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp240 = *$tmp239;
org$pandalanguage$pandac$IR** $tmp241 = &$tmp240->ir;
org$pandalanguage$pandac$IR* $tmp242 = *$tmp241;
org$pandalanguage$pandac$IR$Statement* $tmp243 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp244 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Position* $tmp245 = &param0->position;
org$pandalanguage$pandac$Position $tmp246 = *$tmp245;
org$pandalanguage$pandac$IR$Value** $tmp247 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp248 = *$tmp247;
org$pandalanguage$pandac$FieldDecl** $tmp249 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp250 = *$tmp249;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp243, $tmp244, $tmp246, $tmp248, $tmp250);
$fn252 $tmp251 = ($fn252) $tmp242->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp253 = $tmp251($tmp242, $tmp243);
*(&local4) = $tmp253;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
// unreffing REF($229:org.pandalanguage.pandac.IR.Statement)
// line 6217
org$pandalanguage$pandac$Compiler** $tmp254 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp255 = *$tmp254;
org$pandalanguage$pandac$IR** $tmp256 = &$tmp255->ir;
org$pandalanguage$pandac$IR* $tmp257 = *$tmp256;
org$pandalanguage$pandac$IR$Statement* $tmp258 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp259 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Position* $tmp260 = &param0->position;
org$pandalanguage$pandac$Position $tmp261 = *$tmp260;
org$pandalanguage$pandac$IR$Value* $tmp262 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp263 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp264 = *(&local4);
org$pandalanguage$pandac$Type** $tmp265 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp266 = *$tmp265;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp262, $tmp263, $tmp264, $tmp266);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp258, $tmp259, $tmp261, $tmp262);
$fn268 $tmp267 = ($fn268) $tmp257->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp269 = $tmp267($tmp257, $tmp258);
*(&local3) = $tmp269;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
// unreffing REF($254:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
// unreffing REF($250:org.pandalanguage.pandac.IR.Statement)
goto block12;
block12:;
// line 6219
org$pandalanguage$pandac$IR$Value* $tmp270 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp271 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp272 = *(&local3);
org$pandalanguage$pandac$Type** $tmp273 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp274 = *$tmp273;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp270, $tmp271, $tmp272, $tmp274);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
org$pandalanguage$pandac$IR$Value* $tmp275 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
*(&local2) = $tmp270;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
// unreffing REF($272:org.pandalanguage.pandac.IR.Value)
goto block9;
block9:;
// line 6221
org$pandalanguage$pandac$Compiler** $tmp276 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp277 = *$tmp276;
panda$core$Bit* $tmp278 = &$tmp277->inFieldCleanup;
panda$core$Bit $tmp279 = *$tmp278;
panda$core$Bit $tmp280 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp279);
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$FieldDecl** $tmp282 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp283 = *$tmp282;
org$pandalanguage$pandac$Annotations** $tmp284 = &$tmp283->annotations;
org$pandalanguage$pandac$Annotations* $tmp285 = *$tmp284;
panda$core$Bit $tmp286 = org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit($tmp285);
*(&local5) = $tmp286;
goto block18;
block17:;
*(&local5) = $tmp280;
goto block18;
block18:;
panda$core$Bit $tmp287 = *(&local5);
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block14; else goto block15;
block14:;
// line 6222
org$pandalanguage$pandac$Compiler** $tmp289 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp290 = *$tmp289;
org$pandalanguage$pandac$Position* $tmp291 = &param0->position;
org$pandalanguage$pandac$Position $tmp292 = *$tmp291;
org$pandalanguage$pandac$IR$Value* $tmp293 = *(&local2);
panda$collections$ImmutableArray* $tmp294 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp294);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp295 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp296 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp295, $tmp296);
org$pandalanguage$pandac$IR$Value* $tmp297 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp290, $tmp292, $tmp293, &$s298, ((panda$collections$ListView*) $tmp294), $tmp295);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp297));
org$pandalanguage$pandac$IR$Value* $tmp299 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp299));
*(&local2) = $tmp297;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp297));
// unreffing REF($321:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
// unreffing REF($318:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
// unreffing REF($314:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
goto block15;
block15:;
// line 6225
org$pandalanguage$pandac$Type** $tmp300 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp301 = *$tmp300;
org$pandalanguage$pandac$IR$Value* $tmp302 = *(&local2);
$fn304 $tmp303 = ($fn304) $tmp302->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp305 = $tmp303($tmp302);
ITable* $tmp306 = ((panda$core$Equatable*) $tmp301)->$class->itable;
while ($tmp306->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp306 = $tmp306->next;
}
$fn308 $tmp307 = $tmp306->methods[1];
panda$core$Bit $tmp309 = $tmp307(((panda$core$Equatable*) $tmp301), ((panda$core$Equatable*) $tmp305));
bool $tmp310 = $tmp309.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
// unreffing REF($346:org.pandalanguage.pandac.Type)
if ($tmp310) goto block19; else goto block20;
block19:;
// line 6226
org$pandalanguage$pandac$Compiler** $tmp311 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp312 = *$tmp311;
org$pandalanguage$pandac$Position* $tmp313 = &param0->position;
org$pandalanguage$pandac$Position $tmp314 = *$tmp313;
org$pandalanguage$pandac$IR$Value* $tmp315 = *(&local2);
org$pandalanguage$pandac$Type** $tmp316 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp317 = *$tmp316;
org$pandalanguage$pandac$IR$Value* $tmp318 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q($tmp312, $tmp314, $tmp315, $tmp317);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
org$pandalanguage$pandac$IR$Value* $tmp319 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp319));
*(&local2) = $tmp318;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
// unreffing REF($364:org.pandalanguage.pandac.IR.Value?)
goto block20;
block20:;
// line 6228
org$pandalanguage$pandac$IR$Value* $tmp320 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp320));
org$pandalanguage$pandac$IR$Value* $tmp321 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp321));
// unreffing result
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp320;

}
void org$pandalanguage$pandac$Compiler$FieldLValue$compileStore$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$Compiler$FieldLValue* param0, org$pandalanguage$pandac$IR$Value* param1) {

org$pandalanguage$pandac$IR$Value* local0 = NULL;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
panda$core$Bit local2;
panda$collections$Array* local3 = NULL;
panda$collections$Array* local4 = NULL;
panda$core$Bit local5;
org$pandalanguage$pandac$IR$Value* local6 = NULL;
// line 6233
org$pandalanguage$pandac$IR$Value** $tmp322 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp323 = *$tmp322;
panda$core$Bit $tmp324 = panda$core$Bit$init$builtin_bit($tmp323 == NULL);
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block1; else goto block2;
block1:;
// line 6235
return;
block2:;
// line 6237
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 6238
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 6239
org$pandalanguage$pandac$Compiler** $tmp326 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp327 = *$tmp326;
panda$core$Bit* $tmp328 = &$tmp327->inFieldCleanup;
panda$core$Bit $tmp329 = *$tmp328;
panda$core$Bit $tmp330 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp329);
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$FieldDecl** $tmp332 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp333 = *$tmp332;
org$pandalanguage$pandac$Annotations** $tmp334 = &$tmp333->annotations;
org$pandalanguage$pandac$Annotations* $tmp335 = *$tmp334;
panda$core$Bit $tmp336 = org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit($tmp335);
*(&local2) = $tmp336;
goto block7;
block6:;
*(&local2) = $tmp330;
goto block7;
block7:;
panda$core$Bit $tmp337 = *(&local2);
bool $tmp338 = $tmp337.value;
if ($tmp338) goto block3; else goto block8;
block3:;
// line 6240
panda$collections$Array* $tmp339 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp339);
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
panda$collections$Array* $tmp340 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
*(&local3) = $tmp339;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
// unreffing REF($34:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 6241
panda$collections$Array* $tmp341 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp342 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp343 = (panda$core$Int64) {24};
org$pandalanguage$pandac$Position* $tmp344 = &param0->position;
org$pandalanguage$pandac$Position $tmp345 = *$tmp344;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp342, $tmp343, $tmp345, param1);
panda$collections$Array$add$panda$collections$Array$T($tmp341, ((panda$core$Object*) $tmp342));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
// unreffing REF($50:org.pandalanguage.pandac.ASTNode)
// line 6242
org$pandalanguage$pandac$Compiler** $tmp346 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp347 = *$tmp346;
org$pandalanguage$pandac$ASTNode* $tmp348 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp349 = (panda$core$Int64) {9};
org$pandalanguage$pandac$Position* $tmp350 = &param0->position;
org$pandalanguage$pandac$Position $tmp351 = *$tmp350;
org$pandalanguage$pandac$ASTNode* $tmp352 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp353 = (panda$core$Int64) {24};
org$pandalanguage$pandac$Position* $tmp354 = &param0->position;
org$pandalanguage$pandac$Position $tmp355 = *$tmp354;
org$pandalanguage$pandac$IR$Value* $tmp356 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp357 = (panda$core$Int64) {12};
org$pandalanguage$pandac$Type** $tmp358 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp359 = *$tmp358;
org$pandalanguage$pandac$Type* $tmp360 = org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp359);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp356, $tmp357, $tmp360);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp352, $tmp353, $tmp355, $tmp356);
panda$collections$Array* $tmp361 = *(&local3);
panda$collections$ImmutableArray* $tmp362 = panda$collections$ImmutableArray$from$panda$collections$Array$LTpanda$collections$ImmutableArray$T$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT($tmp361);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp348, $tmp349, $tmp351, $tmp352, $tmp362);
org$pandalanguage$pandac$IR$Value* $tmp363 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IR$Value$Q($tmp347, $tmp348);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp363));
org$pandalanguage$pandac$IR$Value* $tmp364 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
*(&local1) = $tmp363;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp363));
// unreffing REF($83:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
// unreffing REF($80:panda.collections.ImmutableArray<panda.collections.ImmutableArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp360));
// unreffing REF($75:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp356));
// unreffing REF($71:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
// unreffing REF($67:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp348));
// unreffing REF($63:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp365 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp365));
// unreffing args
*(&local3) = ((panda$collections$Array*) NULL);
goto block4;
block8:;
// line 1
// line 6247
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$IR$Value* $tmp366 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
*(&local1) = param1;
goto block4;
block4:;
// line 6249
org$pandalanguage$pandac$Type** $tmp367 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp368 = *$tmp367;
org$pandalanguage$pandac$Type** $tmp369 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp370 = *$tmp369;
ITable* $tmp371 = ((panda$core$Equatable*) $tmp368)->$class->itable;
while ($tmp371->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp371 = $tmp371->next;
}
$fn373 $tmp372 = $tmp371->methods[1];
panda$core$Bit $tmp374 = $tmp372(((panda$core$Equatable*) $tmp368), ((panda$core$Equatable*) $tmp370));
bool $tmp375 = $tmp374.value;
if ($tmp375) goto block9; else goto block11;
block9:;
// line 6250
org$pandalanguage$pandac$Compiler** $tmp376 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp377 = *$tmp376;
org$pandalanguage$pandac$Position* $tmp378 = &param0->position;
org$pandalanguage$pandac$Position $tmp379 = *$tmp378;
org$pandalanguage$pandac$IR$Value* $tmp380 = *(&local1);
org$pandalanguage$pandac$Type** $tmp381 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp382 = *$tmp381;
org$pandalanguage$pandac$IR$Value* $tmp383 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q($tmp377, $tmp379, $tmp380, $tmp382);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp383));
org$pandalanguage$pandac$IR$Value* $tmp384 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp384));
*(&local0) = $tmp383;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp383));
// unreffing REF($145:org.pandalanguage.pandac.IR.Value?)
// line 6251
org$pandalanguage$pandac$IR$Value* $tmp385 = *(&local0);
panda$core$Bit $tmp386 = panda$core$Bit$init$builtin_bit(false);
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block12; else goto block13;
block12:;
// line 6252
org$pandalanguage$pandac$IR$Value* $tmp388 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp388));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp389 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp389));
// unreffing cast
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;
block13:;
goto block10;
block11:;
// line 1
// line 6256
org$pandalanguage$pandac$IR$Value* $tmp390 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp390));
org$pandalanguage$pandac$IR$Value* $tmp391 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp391));
*(&local0) = $tmp390;
goto block10;
block10:;
// line 6258
org$pandalanguage$pandac$FieldDecl** $tmp392 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp393 = *$tmp392;
org$pandalanguage$pandac$FieldDecl$Kind* $tmp394 = &$tmp393->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp395 = *$tmp394;
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp396;
$tmp396 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp396->value = $tmp395;
panda$core$Int64 $tmp397 = (panda$core$Int64) {3};
org$pandalanguage$pandac$FieldDecl$Kind $tmp398 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp397);
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp399;
$tmp399 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp399->value = $tmp398;
ITable* $tmp400 = ((panda$core$Equatable*) $tmp396)->$class->itable;
while ($tmp400->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp400 = $tmp400->next;
}
$fn402 $tmp401 = $tmp400->methods[0];
panda$core$Bit $tmp403 = $tmp401(((panda$core$Equatable*) $tmp396), ((panda$core$Equatable*) $tmp399));
bool $tmp404 = $tmp403.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp399)));
// unreffing REF($193:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp396)));
// unreffing REF($189:panda.core.Equatable<org.pandalanguage.pandac.FieldDecl.Kind>)
if ($tmp404) goto block14; else goto block16;
block14:;
// line 6259
panda$collections$Array* $tmp405 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp405);
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
panda$collections$Array* $tmp406 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
*(&local4) = $tmp405;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
// unreffing REF($205:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 6260
panda$collections$Array* $tmp407 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp408 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp409 = (panda$core$Int64) {24};
org$pandalanguage$pandac$Position* $tmp410 = &param0->position;
org$pandalanguage$pandac$Position $tmp411 = *$tmp410;
org$pandalanguage$pandac$IR$Value* $tmp412 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp408, $tmp409, $tmp411, $tmp412);
panda$collections$Array$add$panda$collections$Array$T($tmp407, ((panda$core$Object*) $tmp408));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
// unreffing REF($221:org.pandalanguage.pandac.ASTNode)
// line 6261
org$pandalanguage$pandac$Compiler** $tmp413 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp414 = *$tmp413;
org$pandalanguage$pandac$Position* $tmp415 = &param0->position;
org$pandalanguage$pandac$Position $tmp416 = *$tmp415;
org$pandalanguage$pandac$IR$Value** $tmp417 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp418 = *$tmp417;
org$pandalanguage$pandac$FieldDecl** $tmp419 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp420 = *$tmp419;
panda$core$String** $tmp421 = &((org$pandalanguage$pandac$Symbol*) $tmp420)->name;
panda$core$String* $tmp422 = *$tmp421;
panda$core$String* $tmp423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s424, $tmp422);
panda$core$String* $tmp425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp423, &$s426);
panda$collections$Array* $tmp427 = *(&local4);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp428 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp429 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type** $tmp430 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp431 = *$tmp430;
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp428, $tmp429, $tmp431);
org$pandalanguage$pandac$IR$Value* $tmp432 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q($tmp414, $tmp416, $tmp418, $tmp425, ((panda$collections$ListView*) $tmp427), $tmp428);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp432));
// unreffing REF($254:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
// unreffing REF($249:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
// unreffing REF($246:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp423));
// unreffing REF($245:panda.core.String)
panda$collections$Array* $tmp433 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp433));
// unreffing args
*(&local4) = ((panda$collections$Array*) NULL);
goto block15;
block16:;
// line 1
// line 6265
org$pandalanguage$pandac$Compiler** $tmp434 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp435 = *$tmp434;
org$pandalanguage$pandac$Type** $tmp436 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp437 = *$tmp436;
panda$core$Bit $tmp438 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp435, $tmp437);
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block19; else goto block20;
block19:;
org$pandalanguage$pandac$FieldDecl** $tmp440 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp441 = *$tmp440;
panda$core$Weak** $tmp442 = &$tmp441->owner;
panda$core$Weak* $tmp443 = *$tmp442;
panda$core$Object* $tmp444 = panda$core$Weak$get$R$panda$core$Weak$T($tmp443);
panda$core$String** $tmp445 = &((org$pandalanguage$pandac$ClassDecl*) $tmp444)->name;
panda$core$String* $tmp446 = *$tmp445;
ITable* $tmp448 = ((panda$core$Equatable*) $tmp446)->$class->itable;
while ($tmp448->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp448 = $tmp448->next;
}
$fn450 $tmp449 = $tmp448->methods[1];
panda$core$Bit $tmp451 = $tmp449(((panda$core$Equatable*) $tmp446), ((panda$core$Equatable*) &$s447));
panda$core$Panda$unref$panda$core$Object$Q($tmp444);
// unreffing REF($287:panda.core.Weak.T)
*(&local5) = $tmp451;
goto block21;
block20:;
*(&local5) = $tmp438;
goto block21;
block21:;
panda$core$Bit $tmp452 = *(&local5);
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block17; else goto block18;
block17:;
// line 6266
org$pandalanguage$pandac$Compiler** $tmp454 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp455 = *$tmp454;
org$pandalanguage$pandac$IR$Value* $tmp456 = *(&local1);
org$pandalanguage$pandac$Compiler$compileRef$org$pandalanguage$pandac$IR$Value($tmp455, $tmp456);
// line 6267
$fn458 $tmp457 = ($fn458) param0->$class->vtable[5];
$tmp457(param0);
goto block18;
block18:;
// line 6269
org$pandalanguage$pandac$IR$Value* $tmp459 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp460 = (panda$core$Int64) {7};
org$pandalanguage$pandac$Compiler** $tmp461 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp462 = *$tmp461;
org$pandalanguage$pandac$IR** $tmp463 = &$tmp462->ir;
org$pandalanguage$pandac$IR* $tmp464 = *$tmp463;
org$pandalanguage$pandac$IR$Statement* $tmp465 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp466 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Position* $tmp467 = &param0->position;
org$pandalanguage$pandac$Position $tmp468 = *$tmp467;
org$pandalanguage$pandac$IR$Value** $tmp469 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp470 = *$tmp469;
org$pandalanguage$pandac$FieldDecl** $tmp471 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp472 = *$tmp471;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp465, $tmp466, $tmp468, $tmp470, $tmp472);
$fn474 $tmp473 = ($fn474) $tmp464->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp475 = $tmp473($tmp464, $tmp465);
org$pandalanguage$pandac$Type** $tmp476 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp477 = *$tmp476;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp459, $tmp460, $tmp475, $tmp477);
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
org$pandalanguage$pandac$IR$Value* $tmp478 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp478));
*(&local6) = $tmp459;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp465));
// unreffing REF($322:org.pandalanguage.pandac.IR.Statement)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
// unreffing REF($316:org.pandalanguage.pandac.IR.Value)
// line 6271
org$pandalanguage$pandac$Compiler** $tmp479 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp480 = *$tmp479;
org$pandalanguage$pandac$IR** $tmp481 = &$tmp480->ir;
org$pandalanguage$pandac$IR* $tmp482 = *$tmp481;
org$pandalanguage$pandac$IR$Statement* $tmp483 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp484 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position* $tmp485 = &param0->position;
org$pandalanguage$pandac$Position $tmp486 = *$tmp485;
org$pandalanguage$pandac$IR$Value* $tmp487 = *(&local0);
org$pandalanguage$pandac$IR$Value* $tmp488 = *(&local6);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp483, $tmp484, $tmp486, $tmp487, $tmp488);
$fn490 $tmp489 = ($fn490) $tmp482->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp491 = $tmp489($tmp482, $tmp483);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp483));
// unreffing REF($355:org.pandalanguage.pandac.IR.Statement)
org$pandalanguage$pandac$IR$Value* $tmp492 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp492));
// unreffing ptr
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block15;
block15:;
org$pandalanguage$pandac$IR$Value* $tmp493 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp493));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp494 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp494));
// unreffing cast
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;

}
void org$pandalanguage$pandac$Compiler$FieldLValue$compileUnref(org$pandalanguage$pandac$Compiler$FieldLValue* param0) {

org$pandalanguage$pandac$IR$Value* local0 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local1;
org$pandalanguage$pandac$IR$Statement$ID local2;
// line 6276
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 6277
org$pandalanguage$pandac$FieldDecl** $tmp495 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp496 = *$tmp495;
org$pandalanguage$pandac$FieldDecl$Kind* $tmp497 = &$tmp496->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp498 = *$tmp497;
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp499;
$tmp499 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp499->value = $tmp498;
panda$core$Int64 $tmp500 = (panda$core$Int64) {3};
org$pandalanguage$pandac$FieldDecl$Kind $tmp501 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp500);
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp502;
$tmp502 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp502->value = $tmp501;
ITable* $tmp503 = ((panda$core$Equatable*) $tmp499)->$class->itable;
while ($tmp503->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp503 = $tmp503->next;
}
$fn505 $tmp504 = $tmp503->methods[0];
panda$core$Bit $tmp506 = $tmp504(((panda$core$Equatable*) $tmp499), ((panda$core$Equatable*) $tmp502));
bool $tmp507 = $tmp506.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp502)));
// unreffing REF($11:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp499)));
// unreffing REF($7:panda.core.Equatable<org.pandalanguage.pandac.FieldDecl.Kind>)
if ($tmp507) goto block1; else goto block2;
block1:;
// line 6278
org$pandalanguage$pandac$IR$Value* $tmp508 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp508));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;
block2:;
// line 6280
// line 6281
org$pandalanguage$pandac$Compiler** $tmp509 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp510 = *$tmp509;
org$pandalanguage$pandac$FieldDecl** $tmp511 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp512 = *$tmp511;
panda$core$Weak** $tmp513 = &$tmp512->owner;
panda$core$Weak* $tmp514 = *$tmp513;
panda$core$Object* $tmp515 = panda$core$Weak$get$R$panda$core$Weak$T($tmp514);
panda$core$Bit $tmp516 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit($tmp510, ((org$pandalanguage$pandac$ClassDecl*) $tmp515));
bool $tmp517 = $tmp516.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp515);
// unreffing REF($38:panda.core.Weak.T)
if ($tmp517) goto block3; else goto block5;
block3:;
// line 6282
org$pandalanguage$pandac$Compiler** $tmp518 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp519 = *$tmp518;
org$pandalanguage$pandac$IR** $tmp520 = &$tmp519->ir;
org$pandalanguage$pandac$IR* $tmp521 = *$tmp520;
org$pandalanguage$pandac$IR$Statement* $tmp522 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp523 = (panda$core$Int64) {9};
org$pandalanguage$pandac$Position* $tmp524 = &param0->position;
org$pandalanguage$pandac$Position $tmp525 = *$tmp524;
org$pandalanguage$pandac$IR$Value** $tmp526 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp527 = *$tmp526;
org$pandalanguage$pandac$FieldDecl** $tmp528 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp529 = *$tmp528;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp522, $tmp523, $tmp525, $tmp527, $tmp529);
$fn531 $tmp530 = ($fn531) $tmp521->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp532 = $tmp530($tmp521, $tmp522);
*(&local1) = $tmp532;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp522));
// unreffing REF($52:org.pandalanguage.pandac.IR.Statement)
goto block4;
block5:;
// line 1
// line 6285
org$pandalanguage$pandac$Compiler** $tmp533 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp534 = *$tmp533;
org$pandalanguage$pandac$IR** $tmp535 = &$tmp534->ir;
org$pandalanguage$pandac$IR* $tmp536 = *$tmp535;
org$pandalanguage$pandac$IR$Statement* $tmp537 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp538 = (panda$core$Int64) {10};
org$pandalanguage$pandac$Position* $tmp539 = &param0->position;
org$pandalanguage$pandac$Position $tmp540 = *$tmp539;
org$pandalanguage$pandac$IR$Value** $tmp541 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp542 = *$tmp541;
org$pandalanguage$pandac$FieldDecl** $tmp543 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp544 = *$tmp543;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp537, $tmp538, $tmp540, $tmp542, $tmp544);
$fn546 $tmp545 = ($fn546) $tmp536->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp547 = $tmp545($tmp536, $tmp537);
*(&local2) = $tmp547;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
// unreffing REF($75:org.pandalanguage.pandac.IR.Statement)
// line 6286
org$pandalanguage$pandac$Compiler** $tmp548 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp549 = *$tmp548;
org$pandalanguage$pandac$IR** $tmp550 = &$tmp549->ir;
org$pandalanguage$pandac$IR* $tmp551 = *$tmp550;
org$pandalanguage$pandac$IR$Statement* $tmp552 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp553 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Position* $tmp554 = &param0->position;
org$pandalanguage$pandac$Position $tmp555 = *$tmp554;
org$pandalanguage$pandac$IR$Value* $tmp556 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp557 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp558 = *(&local2);
org$pandalanguage$pandac$Type** $tmp559 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp560 = *$tmp559;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp556, $tmp557, $tmp558, $tmp560);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp552, $tmp553, $tmp555, $tmp556);
$fn562 $tmp561 = ($fn562) $tmp551->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp563 = $tmp561($tmp551, $tmp552);
*(&local1) = $tmp563;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
// unreffing REF($100:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp552));
// unreffing REF($96:org.pandalanguage.pandac.IR.Statement)
goto block4;
block4:;
// line 6288
org$pandalanguage$pandac$IR$Value* $tmp564 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp565 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp566 = *(&local1);
org$pandalanguage$pandac$Type** $tmp567 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp568 = *$tmp567;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp564, $tmp565, $tmp566, $tmp568);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp564));
org$pandalanguage$pandac$IR$Value* $tmp569 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp569));
*(&local0) = $tmp564;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp564));
// unreffing REF($118:org.pandalanguage.pandac.IR.Value)
// line 6289
org$pandalanguage$pandac$Compiler** $tmp570 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp571 = *$tmp570;
org$pandalanguage$pandac$IR$Value* $tmp572 = *(&local0);
org$pandalanguage$pandac$Compiler$compileUnref$org$pandalanguage$pandac$IR$Value($tmp571, $tmp572);
org$pandalanguage$pandac$IR$Value* $tmp573 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;

}
void org$pandalanguage$pandac$Compiler$FieldLValue$cleanup(org$pandalanguage$pandac$Compiler$FieldLValue* param0) {

// line 6138
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$Compiler** $tmp574 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp575 = *$tmp574;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp575));
org$pandalanguage$pandac$IR$Value** $tmp576 = &param0->target;
org$pandalanguage$pandac$IR$Value* $tmp577 = *$tmp576;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp577));
org$pandalanguage$pandac$FieldDecl** $tmp578 = &param0->field;
org$pandalanguage$pandac$FieldDecl* $tmp579 = *$tmp578;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp579));
org$pandalanguage$pandac$Type** $tmp580 = &param0->rawType;
org$pandalanguage$pandac$Type* $tmp581 = *$tmp580;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp581));
org$pandalanguage$pandac$Type** $tmp582 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp583 = *$tmp582;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp583));
return;

}

