#include "org/frostlang/frostc/lvalue/FieldLValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/lvalue/LValue.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/FieldDecl/Kind.h"
#include "frost/collections/Stack.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/Array.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlang$frostc$lvalue$FieldLValue$_org$frostlang$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class, NULL, { org$frostlang$frostc$lvalue$FieldLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$FieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$FieldLValue$compileStore$org$frostlang$frostc$IR$Value} };

static frost$core$String $s1;
org$frostlang$frostc$lvalue$FieldLValue$class_type org$frostlang$frostc$lvalue$FieldLValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$FieldLValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$lvalue$FieldLValue$cleanup, org$frostlang$frostc$lvalue$FieldLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$FieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$FieldLValue$compileStore$org$frostlang$frostc$IR$Value, org$frostlang$frostc$lvalue$FieldLValue$compileUnref} };

typedef frost$core$Bit (*$fn14)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn25)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn96)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn145)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn166)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef frost$core$Bit (*$fn192)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn239)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn254)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn270)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn305)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn309)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn373)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn402)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn451)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn458)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn474)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn490)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn505)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn531)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn546)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn562)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 39, -7329818318767612820, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74\x5f", 4, 211223516, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x74\x5f", 4, 223587128, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };

void org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$lvalue$FieldLValue* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$FieldDecl* param4) {

org$frostlang$frostc$Type* local0 = NULL;
// line 29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 30
org$frostlang$frostc$Position* $tmp5 = &param0->position;
*$tmp5 = param2;
// line 31
org$frostlang$frostc$Compiler$Resolution* $tmp6 = &param4->resolved;
org$frostlang$frostc$Compiler$Resolution $tmp7 = *$tmp6;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp8;
$tmp8 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp8->value = $tmp7;
frost$core$Int64 $tmp9 = (frost$core$Int64) {2};
org$frostlang$frostc$Compiler$Resolution $tmp10 = org$frostlang$frostc$Compiler$Resolution$init$frost$core$Int64($tmp9);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp11;
$tmp11 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp11->value = $tmp10;
ITable* $tmp12 = ((frost$core$Equatable*) $tmp8)->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp12 = $tmp12->next;
}
$fn14 $tmp13 = $tmp12->methods[0];
frost$core$Bit $tmp15 = $tmp13(((frost$core$Equatable*) $tmp8), ((frost$core$Equatable*) $tmp11));
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp17 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s18, $tmp17);
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp11)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp8)));
// line 32
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FieldDecl** $tmp19 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp20 = *$tmp19;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
org$frostlang$frostc$FieldDecl** $tmp21 = &param0->field;
*$tmp21 = param4;
// line 33
frost$core$Bit $tmp22 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block6; else goto block5;
block6:;
$fn25 $tmp24 = ($fn25) param3->$class->vtable[2];
org$frostlang$frostc$Type* $tmp26 = $tmp24(param3);
frost$core$Bit $tmp27 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp26);
frost$core$Bit $tmp28 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp27);
bool $tmp29 = $tmp28.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
if ($tmp29) goto block3; else goto block5;
block3:;
// line 34
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp30 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp31 = *$tmp30;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
org$frostlang$frostc$IR$Value** $tmp32 = &param0->target;
*$tmp32 = param3;
goto block4;
block5:;
// line 36
org$frostlang$frostc$Annotations** $tmp33 = &param4->annotations;
org$frostlang$frostc$Annotations* $tmp34 = *$tmp33;
frost$core$Bit $tmp35 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp34);
frost$core$Bit $tmp36 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp35);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block7; else goto block8;
block7:;
// line 37
frost$core$Weak** $tmp38 = &param4->owner;
frost$core$Weak* $tmp39 = *$tmp38;
frost$core$Object* $tmp40 = frost$core$Weak$get$R$frost$core$Weak$T($tmp39);
org$frostlang$frostc$Annotations** $tmp41 = &((org$frostlang$frostc$ClassDecl*) $tmp40)->annotations;
org$frostlang$frostc$Annotations* $tmp42 = *$tmp41;
frost$core$Bit $tmp43 = org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit($tmp42);
bool $tmp44 = $tmp43.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp40);
if ($tmp44) goto block12; else goto block11;
block12:;
frost$core$Bit* $tmp45 = &param1->reportErrors;
frost$core$Bit $tmp46 = *$tmp45;
frost$core$Bit $tmp47 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp46);
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block9; else goto block11;
block9:;
// line 39
org$frostlang$frostc$IR$Value* $tmp49 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp50 = (frost$core$Int64) {7};
frost$core$Int64 $tmp51 = (frost$core$Int64) {18446744073709551615};
org$frostlang$frostc$IR$Statement$ID $tmp52 = org$frostlang$frostc$IR$Statement$ID$init$frost$core$Int64($tmp51);
frost$core$Weak** $tmp53 = &param4->owner;
frost$core$Weak* $tmp54 = *$tmp53;
frost$core$Object* $tmp55 = frost$core$Weak$get$R$frost$core$Weak$T($tmp54);
org$frostlang$frostc$Type** $tmp56 = &((org$frostlang$frostc$ClassDecl*) $tmp55)->type;
org$frostlang$frostc$Type* $tmp57 = *$tmp56;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp49, $tmp50, $tmp52, $tmp57);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
org$frostlang$frostc$IR$Value** $tmp58 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp59 = *$tmp58;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
org$frostlang$frostc$IR$Value** $tmp60 = &param0->target;
*$tmp60 = $tmp49;
frost$core$Frost$unref$frost$core$Object$Q($tmp55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
goto block10;
block11:;
// line 1
// line 42
frost$core$Bit $tmp61 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp62 = org$frostlang$frostc$Compiler$compileSelf$org$frostlang$frostc$Position$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param1, param2, $tmp61);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
org$frostlang$frostc$IR$Value** $tmp63 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp64 = *$tmp63;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
org$frostlang$frostc$IR$Value** $tmp65 = &param0->target;
*$tmp65 = $tmp62;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
goto block10;
block10:;
goto block8;
block8:;
goto block4;
block4:;
// line 45
org$frostlang$frostc$Type** $tmp66 = &param4->type;
org$frostlang$frostc$Type* $tmp67 = *$tmp66;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
org$frostlang$frostc$Type** $tmp68 = &param0->rawType;
org$frostlang$frostc$Type* $tmp69 = *$tmp68;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
org$frostlang$frostc$Type** $tmp70 = &param0->rawType;
*$tmp70 = $tmp67;
// line 46
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
// line 47
frost$core$Bit* $tmp71 = &param1->inFieldCleanup;
frost$core$Bit $tmp72 = *$tmp71;
frost$core$Bit $tmp73 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp72);
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block16; else goto block15;
block16:;
org$frostlang$frostc$Annotations** $tmp75 = &param4->annotations;
org$frostlang$frostc$Annotations* $tmp76 = *$tmp75;
frost$core$Bit $tmp77 = org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit($tmp76);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block13; else goto block15;
block13:;
// line 48
org$frostlang$frostc$Type** $tmp79 = &param0->rawType;
org$frostlang$frostc$Type* $tmp80 = *$tmp79;
org$frostlang$frostc$FixedArray** $tmp81 = &$tmp80->subtypes;
org$frostlang$frostc$FixedArray* $tmp82 = *$tmp81;
frost$core$Int64 $tmp83 = (frost$core$Int64) {1};
frost$core$Object* $tmp84 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp82, $tmp83);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp84)));
org$frostlang$frostc$Type* $tmp85 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp84);
frost$core$Frost$unref$frost$core$Object$Q($tmp84);
goto block14;
block15:;
// line 1
// line 51
org$frostlang$frostc$Type** $tmp86 = &param0->rawType;
org$frostlang$frostc$Type* $tmp87 = *$tmp86;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
org$frostlang$frostc$Type* $tmp88 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local0) = $tmp87;
goto block14;
block14:;
// line 53
org$frostlang$frostc$IR$Value** $tmp89 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp90 = *$tmp89;
frost$core$Bit $tmp91 = frost$core$Bit$init$builtin_bit($tmp90 != NULL);
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block17; else goto block19;
block17:;
// line 54
org$frostlang$frostc$IR$Value** $tmp93 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp94 = *$tmp93;
$fn96 $tmp95 = ($fn96) $tmp94->$class->vtable[2];
org$frostlang$frostc$Type* $tmp97 = $tmp95($tmp94);
frost$core$Weak** $tmp98 = &param4->owner;
frost$core$Weak* $tmp99 = *$tmp98;
frost$core$Object* $tmp100 = frost$core$Weak$get$R$frost$core$Weak$T($tmp99);
org$frostlang$frostc$Type* $tmp101 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param1, $tmp97, ((org$frostlang$frostc$ClassDecl*) $tmp100));
org$frostlang$frostc$Type* $tmp102 = *(&local0);
org$frostlang$frostc$Type* $tmp103 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp101, $tmp102);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
org$frostlang$frostc$Type** $tmp104 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp105 = *$tmp104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
org$frostlang$frostc$Type** $tmp106 = &param0->effectiveType;
*$tmp106 = $tmp103;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$core$Frost$unref$frost$core$Object$Q($tmp100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
goto block18;
block19:;
// line 1
// line 58
org$frostlang$frostc$Type* $tmp107 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
org$frostlang$frostc$Type** $tmp108 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp109 = *$tmp108;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
org$frostlang$frostc$Type** $tmp110 = &param0->effectiveType;
*$tmp110 = $tmp107;
goto block18;
block18:;
// line 60
org$frostlang$frostc$IR$Value** $tmp111 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp112 = *$tmp111;
frost$core$Bit $tmp113 = frost$core$Bit$init$builtin_bit($tmp112 != NULL);
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block20; else goto block21;
block20:;
// line 61
org$frostlang$frostc$IR$Value** $tmp115 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp116 = *$tmp115;
frost$core$Weak** $tmp117 = &param4->owner;
frost$core$Weak* $tmp118 = *$tmp117;
frost$core$Object* $tmp119 = frost$core$Weak$get$R$frost$core$Weak$T($tmp118);
org$frostlang$frostc$Type** $tmp120 = &((org$frostlang$frostc$ClassDecl*) $tmp119)->type;
org$frostlang$frostc$Type* $tmp121 = *$tmp120;
org$frostlang$frostc$IR$Value* $tmp122 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param1, param2, $tmp116, $tmp121);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
org$frostlang$frostc$IR$Value** $tmp123 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp124 = *$tmp123;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
org$frostlang$frostc$IR$Value** $tmp125 = &param0->target;
*$tmp125 = $tmp122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q($tmp119);
goto block21;
block21:;
org$frostlang$frostc$Type* $tmp126 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$FieldLValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$FieldLValue* param0) {

// line 67
org$frostlang$frostc$Type** $tmp127 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp128 = *$tmp127;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
return $tmp128;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$FieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$lvalue$FieldLValue* param0) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Statement$ID local2;
org$frostlang$frostc$IR$Statement$ID local3;
// line 72
org$frostlang$frostc$FieldDecl** $tmp129 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp130 = *$tmp129;
org$frostlang$frostc$Annotations** $tmp131 = &$tmp130->annotations;
org$frostlang$frostc$Annotations* $tmp132 = *$tmp131;
frost$core$Bit $tmp133 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp132);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block3; else goto block2;
block3:;
org$frostlang$frostc$FieldDecl** $tmp135 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp136 = *$tmp135;
org$frostlang$frostc$FieldDecl$Kind* $tmp137 = &$tmp136->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp138 = *$tmp137;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp139;
$tmp139 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp139->value = $tmp138;
frost$core$Int64 $tmp140 = (frost$core$Int64) {2};
org$frostlang$frostc$FieldDecl$Kind $tmp141 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp140);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp142;
$tmp142 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp142->value = $tmp141;
ITable* $tmp143 = ((frost$core$Equatable*) $tmp139)->$class->itable;
while ($tmp143->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp143 = $tmp143->next;
}
$fn145 $tmp144 = $tmp143->methods[0];
frost$core$Bit $tmp146 = $tmp144(((frost$core$Equatable*) $tmp139), ((frost$core$Equatable*) $tmp142));
bool $tmp147 = $tmp146.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp142)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp139)));
if ($tmp147) goto block1; else goto block2;
block1:;
// line 73
org$frostlang$frostc$Compiler** $tmp148 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp149 = *$tmp148;
frost$collections$Stack** $tmp150 = &$tmp149->currentClass;
frost$collections$Stack* $tmp151 = *$tmp150;
org$frostlang$frostc$FieldDecl** $tmp152 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp153 = *$tmp152;
frost$core$Weak** $tmp154 = &$tmp153->owner;
frost$core$Weak* $tmp155 = *$tmp154;
frost$core$Object* $tmp156 = frost$core$Weak$get$R$frost$core$Weak$T($tmp155);
frost$collections$Stack$push$frost$collections$Stack$T($tmp151, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp156)));
frost$core$Frost$unref$frost$core$Object$Q($tmp156);
// line 74
org$frostlang$frostc$Compiler** $tmp157 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp158 = *$tmp157;
org$frostlang$frostc$FieldDecl** $tmp159 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp160 = *$tmp159;
org$frostlang$frostc$ASTNode** $tmp161 = &$tmp160->rawValue;
org$frostlang$frostc$ASTNode* $tmp162 = *$tmp161;
org$frostlang$frostc$Compiler$TypeContext* $tmp163 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp164 = (frost$core$Int64) {3};
$fn166 $tmp165 = ($fn166) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp167 = $tmp165(param0);
frost$core$Bit $tmp168 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp163, $tmp164, $tmp167, $tmp168);
org$frostlang$frostc$IR$Value* $tmp169 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp158, $tmp162, $tmp163);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
org$frostlang$frostc$IR$Value* $tmp170 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
*(&local0) = $tmp169;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
// line 76
org$frostlang$frostc$Compiler** $tmp171 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp172 = *$tmp171;
frost$collections$Stack** $tmp173 = &$tmp172->currentClass;
frost$collections$Stack* $tmp174 = *$tmp173;
frost$core$Object* $tmp175 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp174);
frost$core$Frost$unref$frost$core$Object$Q($tmp175);
// line 77
org$frostlang$frostc$IR$Value* $tmp176 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
org$frostlang$frostc$IR$Value* $tmp177 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp176;
block2:;
// line 79
org$frostlang$frostc$IR$Value** $tmp178 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp179 = *$tmp178;
frost$core$Bit $tmp180 = frost$core$Bit$init$builtin_bit($tmp179 == NULL);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block4; else goto block5;
block4:;
// line 81
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block5:;
// line 83
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 84
org$frostlang$frostc$FieldDecl** $tmp182 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp183 = *$tmp182;
org$frostlang$frostc$FieldDecl$Kind* $tmp184 = &$tmp183->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp185 = *$tmp184;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp186;
$tmp186 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp186->value = $tmp185;
frost$core$Int64 $tmp187 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp188 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp187);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp189;
$tmp189 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp189->value = $tmp188;
ITable* $tmp190 = ((frost$core$Equatable*) $tmp186)->$class->itable;
while ($tmp190->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp190 = $tmp190->next;
}
$fn192 $tmp191 = $tmp190->methods[0];
frost$core$Bit $tmp193 = $tmp191(((frost$core$Equatable*) $tmp186), ((frost$core$Equatable*) $tmp189));
bool $tmp194 = $tmp193.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp189)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp186)));
if ($tmp194) goto block6; else goto block8;
block6:;
// line 85
org$frostlang$frostc$Compiler** $tmp195 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp196 = *$tmp195;
org$frostlang$frostc$Position* $tmp197 = &param0->position;
org$frostlang$frostc$Position $tmp198 = *$tmp197;
org$frostlang$frostc$IR$Value** $tmp199 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp200 = *$tmp199;
org$frostlang$frostc$FieldDecl** $tmp201 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp202 = *$tmp201;
frost$core$String** $tmp203 = &((org$frostlang$frostc$Symbol*) $tmp202)->name;
frost$core$String* $tmp204 = *$tmp203;
frost$core$String* $tmp205 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s206, $tmp204);
frost$core$String* $tmp207 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp205, &$s208);
frost$collections$Array* $tmp209 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp209);
org$frostlang$frostc$Compiler$TypeContext* $tmp210 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp211 = (frost$core$Int64) {3};
org$frostlang$frostc$Type** $tmp212 = &param0->rawType;
org$frostlang$frostc$Type* $tmp213 = *$tmp212;
frost$core$Bit $tmp214 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp210, $tmp211, $tmp213, $tmp214);
org$frostlang$frostc$IR$Value* $tmp215 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp196, $tmp198, $tmp200, $tmp207, ((frost$collections$ListView*) $tmp209), $tmp210);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
org$frostlang$frostc$IR$Value* $tmp216 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
*(&local1) = $tmp215;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
goto block7;
block8:;
// line 1
// line 89
// line 90
org$frostlang$frostc$Compiler** $tmp217 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp218 = *$tmp217;
org$frostlang$frostc$FieldDecl** $tmp219 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp220 = *$tmp219;
frost$core$Weak** $tmp221 = &$tmp220->owner;
frost$core$Weak* $tmp222 = *$tmp221;
frost$core$Object* $tmp223 = frost$core$Weak$get$R$frost$core$Weak$T($tmp222);
frost$core$Bit $tmp224 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit($tmp218, ((org$frostlang$frostc$ClassDecl*) $tmp223));
bool $tmp225 = $tmp224.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp223);
if ($tmp225) goto block9; else goto block11;
block9:;
// line 91
org$frostlang$frostc$Compiler** $tmp226 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp227 = *$tmp226;
org$frostlang$frostc$IR** $tmp228 = &$tmp227->ir;
org$frostlang$frostc$IR* $tmp229 = *$tmp228;
org$frostlang$frostc$IR$Statement* $tmp230 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp231 = (frost$core$Int64) {10};
org$frostlang$frostc$Position* $tmp232 = &param0->position;
org$frostlang$frostc$Position $tmp233 = *$tmp232;
org$frostlang$frostc$IR$Value** $tmp234 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp235 = *$tmp234;
org$frostlang$frostc$FieldDecl** $tmp236 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp237 = *$tmp236;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp230, $tmp231, $tmp233, $tmp235, $tmp237);
$fn239 $tmp238 = ($fn239) $tmp229->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp240 = $tmp238($tmp229, $tmp230);
*(&local2) = $tmp240;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
goto block10;
block11:;
// line 1
// line 94
org$frostlang$frostc$Compiler** $tmp241 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp242 = *$tmp241;
org$frostlang$frostc$IR** $tmp243 = &$tmp242->ir;
org$frostlang$frostc$IR* $tmp244 = *$tmp243;
org$frostlang$frostc$IR$Statement* $tmp245 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp246 = (frost$core$Int64) {11};
org$frostlang$frostc$Position* $tmp247 = &param0->position;
org$frostlang$frostc$Position $tmp248 = *$tmp247;
org$frostlang$frostc$IR$Value** $tmp249 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp250 = *$tmp249;
org$frostlang$frostc$FieldDecl** $tmp251 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp252 = *$tmp251;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp245, $tmp246, $tmp248, $tmp250, $tmp252);
$fn254 $tmp253 = ($fn254) $tmp244->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp255 = $tmp253($tmp244, $tmp245);
*(&local3) = $tmp255;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
// line 96
org$frostlang$frostc$Compiler** $tmp256 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp257 = *$tmp256;
org$frostlang$frostc$IR** $tmp258 = &$tmp257->ir;
org$frostlang$frostc$IR* $tmp259 = *$tmp258;
org$frostlang$frostc$IR$Statement* $tmp260 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp261 = (frost$core$Int64) {14};
org$frostlang$frostc$Position* $tmp262 = &param0->position;
org$frostlang$frostc$Position $tmp263 = *$tmp262;
org$frostlang$frostc$IR$Value* $tmp264 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp265 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp266 = *(&local3);
org$frostlang$frostc$Type** $tmp267 = &param0->rawType;
org$frostlang$frostc$Type* $tmp268 = *$tmp267;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp264, $tmp265, $tmp266, $tmp268);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp260, $tmp261, $tmp263, $tmp264);
$fn270 $tmp269 = ($fn270) $tmp259->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp271 = $tmp269($tmp259, $tmp260);
*(&local2) = $tmp271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
goto block10;
block10:;
// line 98
org$frostlang$frostc$IR$Value* $tmp272 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp273 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp274 = *(&local2);
org$frostlang$frostc$Type** $tmp275 = &param0->rawType;
org$frostlang$frostc$Type* $tmp276 = *$tmp275;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp272, $tmp273, $tmp274, $tmp276);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
org$frostlang$frostc$IR$Value* $tmp277 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
*(&local1) = $tmp272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
goto block7;
block7:;
// line 100
org$frostlang$frostc$Compiler** $tmp278 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp279 = *$tmp278;
frost$core$Bit* $tmp280 = &$tmp279->inFieldCleanup;
frost$core$Bit $tmp281 = *$tmp280;
frost$core$Bit $tmp282 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp281);
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block14; else goto block13;
block14:;
org$frostlang$frostc$FieldDecl** $tmp284 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp285 = *$tmp284;
org$frostlang$frostc$Annotations** $tmp286 = &$tmp285->annotations;
org$frostlang$frostc$Annotations* $tmp287 = *$tmp286;
frost$core$Bit $tmp288 = org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit($tmp287);
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block12; else goto block13;
block12:;
// line 101
org$frostlang$frostc$Compiler** $tmp290 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp291 = *$tmp290;
org$frostlang$frostc$Position* $tmp292 = &param0->position;
org$frostlang$frostc$Position $tmp293 = *$tmp292;
org$frostlang$frostc$IR$Value* $tmp294 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp295 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp295);
org$frostlang$frostc$Compiler$TypeContext* $tmp296 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp297 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp296, $tmp297);
org$frostlang$frostc$IR$Value* $tmp298 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp291, $tmp293, $tmp294, &$s299, ((frost$collections$ListView*) $tmp295), $tmp296);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
org$frostlang$frostc$IR$Value* $tmp300 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
*(&local1) = $tmp298;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
goto block13;
block13:;
// line 104
org$frostlang$frostc$Type** $tmp301 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp302 = *$tmp301;
org$frostlang$frostc$IR$Value* $tmp303 = *(&local1);
$fn305 $tmp304 = ($fn305) $tmp303->$class->vtable[2];
org$frostlang$frostc$Type* $tmp306 = $tmp304($tmp303);
ITable* $tmp307 = ((frost$core$Equatable*) $tmp302)->$class->itable;
while ($tmp307->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp307 = $tmp307->next;
}
$fn309 $tmp308 = $tmp307->methods[1];
frost$core$Bit $tmp310 = $tmp308(((frost$core$Equatable*) $tmp302), ((frost$core$Equatable*) $tmp306));
bool $tmp311 = $tmp310.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
if ($tmp311) goto block15; else goto block16;
block15:;
// line 105
org$frostlang$frostc$Compiler** $tmp312 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp313 = *$tmp312;
org$frostlang$frostc$Position* $tmp314 = &param0->position;
org$frostlang$frostc$Position $tmp315 = *$tmp314;
org$frostlang$frostc$IR$Value* $tmp316 = *(&local1);
org$frostlang$frostc$Type** $tmp317 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp318 = *$tmp317;
org$frostlang$frostc$IR$Value* $tmp319 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q($tmp313, $tmp315, $tmp316, $tmp318);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
org$frostlang$frostc$IR$Value* $tmp320 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
*(&local1) = $tmp319;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
goto block16;
block16:;
// line 107
org$frostlang$frostc$IR$Value* $tmp321 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
org$frostlang$frostc$IR$Value* $tmp322 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp321;

}
void org$frostlang$frostc$lvalue$FieldLValue$compileStore$org$frostlang$frostc$IR$Value(org$frostlang$frostc$lvalue$FieldLValue* param0, org$frostlang$frostc$IR$Value* param1) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$collections$Array* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
// line 112
org$frostlang$frostc$IR$Value** $tmp323 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp324 = *$tmp323;
frost$core$Bit $tmp325 = frost$core$Bit$init$builtin_bit($tmp324 == NULL);
bool $tmp326 = $tmp325.value;
if ($tmp326) goto block1; else goto block2;
block1:;
// line 114
return;
block2:;
// line 116
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 117
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 118
org$frostlang$frostc$Compiler** $tmp327 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp328 = *$tmp327;
frost$core$Bit* $tmp329 = &$tmp328->inFieldCleanup;
frost$core$Bit $tmp330 = *$tmp329;
frost$core$Bit $tmp331 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp330);
bool $tmp332 = $tmp331.value;
if ($tmp332) goto block6; else goto block5;
block6:;
org$frostlang$frostc$FieldDecl** $tmp333 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp334 = *$tmp333;
org$frostlang$frostc$Annotations** $tmp335 = &$tmp334->annotations;
org$frostlang$frostc$Annotations* $tmp336 = *$tmp335;
frost$core$Bit $tmp337 = org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit($tmp336);
bool $tmp338 = $tmp337.value;
if ($tmp338) goto block3; else goto block5;
block3:;
// line 119
frost$collections$Array* $tmp339 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp339);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$collections$Array* $tmp340 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
*(&local2) = $tmp339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
// line 120
frost$collections$Array* $tmp341 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp342 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp343 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp344 = &param0->position;
org$frostlang$frostc$Position $tmp345 = *$tmp344;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp342, $tmp343, $tmp345, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp341, ((frost$core$Object*) $tmp342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// line 121
org$frostlang$frostc$Compiler** $tmp346 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp347 = *$tmp346;
org$frostlang$frostc$ASTNode* $tmp348 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp349 = (frost$core$Int64) {9};
org$frostlang$frostc$Position* $tmp350 = &param0->position;
org$frostlang$frostc$Position $tmp351 = *$tmp350;
org$frostlang$frostc$ASTNode* $tmp352 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp353 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp354 = &param0->position;
org$frostlang$frostc$Position $tmp355 = *$tmp354;
org$frostlang$frostc$IR$Value* $tmp356 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp357 = (frost$core$Int64) {14};
org$frostlang$frostc$Type** $tmp358 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp359 = *$tmp358;
org$frostlang$frostc$Type* $tmp360 = org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp359);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp356, $tmp357, $tmp360);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp352, $tmp353, $tmp355, $tmp356);
frost$collections$Array* $tmp361 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp362 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp361);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp348, $tmp349, $tmp351, $tmp352, $tmp362);
org$frostlang$frostc$IR$Value* $tmp363 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q($tmp347, $tmp348);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
org$frostlang$frostc$IR$Value* $tmp364 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
*(&local1) = $tmp363;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
frost$collections$Array* $tmp365 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
*(&local2) = ((frost$collections$Array*) NULL);
goto block4;
block5:;
// line 1
// line 126
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$IR$Value* $tmp366 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
*(&local1) = param1;
goto block4;
block4:;
// line 128
org$frostlang$frostc$Type** $tmp367 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp368 = *$tmp367;
org$frostlang$frostc$Type** $tmp369 = &param0->rawType;
org$frostlang$frostc$Type* $tmp370 = *$tmp369;
ITable* $tmp371 = ((frost$core$Equatable*) $tmp368)->$class->itable;
while ($tmp371->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp371 = $tmp371->next;
}
$fn373 $tmp372 = $tmp371->methods[1];
frost$core$Bit $tmp374 = $tmp372(((frost$core$Equatable*) $tmp368), ((frost$core$Equatable*) $tmp370));
bool $tmp375 = $tmp374.value;
if ($tmp375) goto block7; else goto block9;
block7:;
// line 129
org$frostlang$frostc$Compiler** $tmp376 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp377 = *$tmp376;
org$frostlang$frostc$Position* $tmp378 = &param0->position;
org$frostlang$frostc$Position $tmp379 = *$tmp378;
org$frostlang$frostc$IR$Value* $tmp380 = *(&local1);
org$frostlang$frostc$Type** $tmp381 = &param0->rawType;
org$frostlang$frostc$Type* $tmp382 = *$tmp381;
org$frostlang$frostc$IR$Value* $tmp383 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q($tmp377, $tmp379, $tmp380, $tmp382);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
org$frostlang$frostc$IR$Value* $tmp384 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
*(&local0) = $tmp383;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
// line 130
org$frostlang$frostc$IR$Value* $tmp385 = *(&local0);
frost$core$Bit $tmp386 = frost$core$Bit$init$builtin_bit(false);
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block10; else goto block11;
block10:;
// line 131
org$frostlang$frostc$IR$Value* $tmp388 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp389 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block11:;
goto block8;
block9:;
// line 1
// line 135
org$frostlang$frostc$IR$Value* $tmp390 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
org$frostlang$frostc$IR$Value* $tmp391 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
*(&local0) = $tmp390;
goto block8;
block8:;
// line 137
org$frostlang$frostc$FieldDecl** $tmp392 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp393 = *$tmp392;
org$frostlang$frostc$FieldDecl$Kind* $tmp394 = &$tmp393->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp395 = *$tmp394;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp396;
$tmp396 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp396->value = $tmp395;
frost$core$Int64 $tmp397 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp398 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp397);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp399;
$tmp399 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp399->value = $tmp398;
ITable* $tmp400 = ((frost$core$Equatable*) $tmp396)->$class->itable;
while ($tmp400->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp400 = $tmp400->next;
}
$fn402 $tmp401 = $tmp400->methods[0];
frost$core$Bit $tmp403 = $tmp401(((frost$core$Equatable*) $tmp396), ((frost$core$Equatable*) $tmp399));
bool $tmp404 = $tmp403.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp399)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp396)));
if ($tmp404) goto block12; else goto block14;
block12:;
// line 138
frost$collections$Array* $tmp405 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp405);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
frost$collections$Array* $tmp406 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
*(&local3) = $tmp405;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
// line 139
frost$collections$Array* $tmp407 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp408 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp409 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp410 = &param0->position;
org$frostlang$frostc$Position $tmp411 = *$tmp410;
org$frostlang$frostc$IR$Value* $tmp412 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp408, $tmp409, $tmp411, $tmp412);
frost$collections$Array$add$frost$collections$Array$T($tmp407, ((frost$core$Object*) $tmp408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
// line 140
org$frostlang$frostc$Compiler** $tmp413 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp414 = *$tmp413;
org$frostlang$frostc$Position* $tmp415 = &param0->position;
org$frostlang$frostc$Position $tmp416 = *$tmp415;
org$frostlang$frostc$IR$Value** $tmp417 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp418 = *$tmp417;
org$frostlang$frostc$FieldDecl** $tmp419 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp420 = *$tmp419;
frost$core$String** $tmp421 = &((org$frostlang$frostc$Symbol*) $tmp420)->name;
frost$core$String* $tmp422 = *$tmp421;
frost$core$String* $tmp423 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s424, $tmp422);
frost$core$String* $tmp425 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp423, &$s426);
frost$collections$Array* $tmp427 = *(&local3);
org$frostlang$frostc$Compiler$TypeContext* $tmp428 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp429 = (frost$core$Int64) {3};
org$frostlang$frostc$Type** $tmp430 = &param0->rawType;
org$frostlang$frostc$Type* $tmp431 = *$tmp430;
frost$core$Bit $tmp432 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp428, $tmp429, $tmp431, $tmp432);
org$frostlang$frostc$IR$Value* $tmp433 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp414, $tmp416, $tmp418, $tmp425, ((frost$collections$ListView*) $tmp427), $tmp428);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
frost$collections$Array* $tmp434 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
*(&local3) = ((frost$collections$Array*) NULL);
goto block13;
block14:;
// line 1
// line 144
org$frostlang$frostc$Compiler** $tmp435 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp436 = *$tmp435;
org$frostlang$frostc$Type** $tmp437 = &param0->rawType;
org$frostlang$frostc$Type* $tmp438 = *$tmp437;
frost$core$Bit $tmp439 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit($tmp436, $tmp438);
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block17; else goto block16;
block17:;
org$frostlang$frostc$FieldDecl** $tmp441 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp442 = *$tmp441;
frost$core$Weak** $tmp443 = &$tmp442->owner;
frost$core$Weak* $tmp444 = *$tmp443;
frost$core$Object* $tmp445 = frost$core$Weak$get$R$frost$core$Weak$T($tmp444);
frost$core$String** $tmp446 = &((org$frostlang$frostc$ClassDecl*) $tmp445)->name;
frost$core$String* $tmp447 = *$tmp446;
ITable* $tmp449 = ((frost$core$Equatable*) $tmp447)->$class->itable;
while ($tmp449->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp449 = $tmp449->next;
}
$fn451 $tmp450 = $tmp449->methods[1];
frost$core$Bit $tmp452 = $tmp450(((frost$core$Equatable*) $tmp447), ((frost$core$Equatable*) &$s448));
bool $tmp453 = $tmp452.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp445);
if ($tmp453) goto block15; else goto block16;
block15:;
// line 145
org$frostlang$frostc$Compiler** $tmp454 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp455 = *$tmp454;
org$frostlang$frostc$IR$Value* $tmp456 = *(&local1);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value($tmp455, $tmp456);
// line 146
$fn458 $tmp457 = ($fn458) param0->$class->vtable[5];
$tmp457(param0);
goto block16;
block16:;
// line 148
org$frostlang$frostc$IR$Value* $tmp459 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp460 = (frost$core$Int64) {7};
org$frostlang$frostc$Compiler** $tmp461 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp462 = *$tmp461;
org$frostlang$frostc$IR** $tmp463 = &$tmp462->ir;
org$frostlang$frostc$IR* $tmp464 = *$tmp463;
org$frostlang$frostc$IR$Statement* $tmp465 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp466 = (frost$core$Int64) {11};
org$frostlang$frostc$Position* $tmp467 = &param0->position;
org$frostlang$frostc$Position $tmp468 = *$tmp467;
org$frostlang$frostc$IR$Value** $tmp469 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp470 = *$tmp469;
org$frostlang$frostc$FieldDecl** $tmp471 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp472 = *$tmp471;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp465, $tmp466, $tmp468, $tmp470, $tmp472);
$fn474 $tmp473 = ($fn474) $tmp464->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp475 = $tmp473($tmp464, $tmp465);
org$frostlang$frostc$Type** $tmp476 = &param0->rawType;
org$frostlang$frostc$Type* $tmp477 = *$tmp476;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp459, $tmp460, $tmp475, $tmp477);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
org$frostlang$frostc$IR$Value* $tmp478 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
*(&local4) = $tmp459;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
// line 150
org$frostlang$frostc$Compiler** $tmp479 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp480 = *$tmp479;
org$frostlang$frostc$IR** $tmp481 = &$tmp480->ir;
org$frostlang$frostc$IR* $tmp482 = *$tmp481;
org$frostlang$frostc$IR$Statement* $tmp483 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp484 = (frost$core$Int64) {27};
org$frostlang$frostc$Position* $tmp485 = &param0->position;
org$frostlang$frostc$Position $tmp486 = *$tmp485;
org$frostlang$frostc$IR$Value* $tmp487 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp488 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp483, $tmp484, $tmp486, $tmp487, $tmp488);
$fn490 $tmp489 = ($fn490) $tmp482->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp491 = $tmp489($tmp482, $tmp483);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
org$frostlang$frostc$IR$Value* $tmp492 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block13;
block13:;
org$frostlang$frostc$IR$Value* $tmp493 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp494 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$lvalue$FieldLValue$compileUnref(org$frostlang$frostc$lvalue$FieldLValue* param0) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$IR$Statement$ID local1;
org$frostlang$frostc$IR$Statement$ID local2;
// line 155
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 156
org$frostlang$frostc$FieldDecl** $tmp495 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp496 = *$tmp495;
org$frostlang$frostc$FieldDecl$Kind* $tmp497 = &$tmp496->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp498 = *$tmp497;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp499;
$tmp499 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp499->value = $tmp498;
frost$core$Int64 $tmp500 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp501 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp500);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp502;
$tmp502 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp502->value = $tmp501;
ITable* $tmp503 = ((frost$core$Equatable*) $tmp499)->$class->itable;
while ($tmp503->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp503 = $tmp503->next;
}
$fn505 $tmp504 = $tmp503->methods[0];
frost$core$Bit $tmp506 = $tmp504(((frost$core$Equatable*) $tmp499), ((frost$core$Equatable*) $tmp502));
bool $tmp507 = $tmp506.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp502)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp499)));
if ($tmp507) goto block1; else goto block2;
block1:;
// line 157
org$frostlang$frostc$IR$Value* $tmp508 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block2:;
// line 159
// line 160
org$frostlang$frostc$Compiler** $tmp509 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp510 = *$tmp509;
org$frostlang$frostc$FieldDecl** $tmp511 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp512 = *$tmp511;
frost$core$Weak** $tmp513 = &$tmp512->owner;
frost$core$Weak* $tmp514 = *$tmp513;
frost$core$Object* $tmp515 = frost$core$Weak$get$R$frost$core$Weak$T($tmp514);
frost$core$Bit $tmp516 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit($tmp510, ((org$frostlang$frostc$ClassDecl*) $tmp515));
bool $tmp517 = $tmp516.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp515);
if ($tmp517) goto block3; else goto block5;
block3:;
// line 161
org$frostlang$frostc$Compiler** $tmp518 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp519 = *$tmp518;
org$frostlang$frostc$IR** $tmp520 = &$tmp519->ir;
org$frostlang$frostc$IR* $tmp521 = *$tmp520;
org$frostlang$frostc$IR$Statement* $tmp522 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp523 = (frost$core$Int64) {10};
org$frostlang$frostc$Position* $tmp524 = &param0->position;
org$frostlang$frostc$Position $tmp525 = *$tmp524;
org$frostlang$frostc$IR$Value** $tmp526 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp527 = *$tmp526;
org$frostlang$frostc$FieldDecl** $tmp528 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp529 = *$tmp528;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp522, $tmp523, $tmp525, $tmp527, $tmp529);
$fn531 $tmp530 = ($fn531) $tmp521->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp532 = $tmp530($tmp521, $tmp522);
*(&local1) = $tmp532;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
goto block4;
block5:;
// line 1
// line 164
org$frostlang$frostc$Compiler** $tmp533 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp534 = *$tmp533;
org$frostlang$frostc$IR** $tmp535 = &$tmp534->ir;
org$frostlang$frostc$IR* $tmp536 = *$tmp535;
org$frostlang$frostc$IR$Statement* $tmp537 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp538 = (frost$core$Int64) {11};
org$frostlang$frostc$Position* $tmp539 = &param0->position;
org$frostlang$frostc$Position $tmp540 = *$tmp539;
org$frostlang$frostc$IR$Value** $tmp541 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp542 = *$tmp541;
org$frostlang$frostc$FieldDecl** $tmp543 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp544 = *$tmp543;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp537, $tmp538, $tmp540, $tmp542, $tmp544);
$fn546 $tmp545 = ($fn546) $tmp536->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp547 = $tmp545($tmp536, $tmp537);
*(&local2) = $tmp547;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
// line 165
org$frostlang$frostc$Compiler** $tmp548 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp549 = *$tmp548;
org$frostlang$frostc$IR** $tmp550 = &$tmp549->ir;
org$frostlang$frostc$IR* $tmp551 = *$tmp550;
org$frostlang$frostc$IR$Statement* $tmp552 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp553 = (frost$core$Int64) {14};
org$frostlang$frostc$Position* $tmp554 = &param0->position;
org$frostlang$frostc$Position $tmp555 = *$tmp554;
org$frostlang$frostc$IR$Value* $tmp556 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp557 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp558 = *(&local2);
org$frostlang$frostc$Type** $tmp559 = &param0->rawType;
org$frostlang$frostc$Type* $tmp560 = *$tmp559;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp556, $tmp557, $tmp558, $tmp560);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp552, $tmp553, $tmp555, $tmp556);
$fn562 $tmp561 = ($fn562) $tmp551->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp563 = $tmp561($tmp551, $tmp552);
*(&local1) = $tmp563;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
goto block4;
block4:;
// line 167
org$frostlang$frostc$IR$Value* $tmp564 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp565 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp566 = *(&local1);
org$frostlang$frostc$Type** $tmp567 = &param0->rawType;
org$frostlang$frostc$Type* $tmp568 = *$tmp567;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp564, $tmp565, $tmp566, $tmp568);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
org$frostlang$frostc$IR$Value* $tmp569 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
*(&local0) = $tmp564;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
// line 168
org$frostlang$frostc$Compiler** $tmp570 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp571 = *$tmp570;
org$frostlang$frostc$IR$Value* $tmp572 = *(&local0);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value($tmp571, $tmp572);
org$frostlang$frostc$IR$Value* $tmp573 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$lvalue$FieldLValue$cleanup(org$frostlang$frostc$lvalue$FieldLValue* param0) {

// line 15
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp574 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp575 = *$tmp574;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
org$frostlang$frostc$IR$Value** $tmp576 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp577 = *$tmp576;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
org$frostlang$frostc$FieldDecl** $tmp578 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp579 = *$tmp578;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
org$frostlang$frostc$Type** $tmp580 = &param0->rawType;
org$frostlang$frostc$Type* $tmp581 = *$tmp580;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
org$frostlang$frostc$Type** $tmp582 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp583 = *$tmp582;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
return;

}

