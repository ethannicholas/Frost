#include "org/frostlang/frostc/lvalue/FieldLValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/lvalue/LValue.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int64.h"
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
typedef org$frostlang$frostc$Type* (*$fn99)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn148)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn170)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef frost$core$Bit (*$fn196)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn243)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn258)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn274)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn310)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn314)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn379)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn408)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn457)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn465)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn481)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn497)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn512)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn538)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn553)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn569)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 39, -7329818318767612820, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74\x5f", 4, 211223516, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s304 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x74\x5f", 4, 223587128, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };

void org$frostlang$frostc$lvalue$FieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$lvalue$FieldLValue* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$FieldDecl* param4) {

frost$core$Bit local0;
frost$core$Bit local1;
org$frostlang$frostc$Type* local2 = NULL;
frost$core$Bit local3;
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
if ($tmp23) goto block5; else goto block6;
block5:;
$fn25 $tmp24 = ($fn25) param3->$class->vtable[2];
org$frostlang$frostc$Type* $tmp26 = $tmp24(param3);
frost$core$Bit $tmp27 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp26);
frost$core$Bit $tmp28 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
*(&local0) = $tmp28;
goto block7;
block6:;
*(&local0) = $tmp22;
goto block7;
block7:;
frost$core$Bit $tmp29 = *(&local0);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block3; else goto block8;
block3:;
// line 34
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp31 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp32 = *$tmp31;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
org$frostlang$frostc$IR$Value** $tmp33 = &param0->target;
*$tmp33 = param3;
goto block4;
block8:;
// line 36
org$frostlang$frostc$Annotations** $tmp34 = &param4->annotations;
org$frostlang$frostc$Annotations* $tmp35 = *$tmp34;
frost$core$Bit $tmp36 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp35);
frost$core$Bit $tmp37 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp36);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block9; else goto block10;
block9:;
// line 37
frost$core$Weak** $tmp39 = &param4->owner;
frost$core$Weak* $tmp40 = *$tmp39;
frost$core$Object* $tmp41 = frost$core$Weak$get$R$frost$core$Weak$T($tmp40);
org$frostlang$frostc$Annotations** $tmp42 = &((org$frostlang$frostc$ClassDecl*) $tmp41)->annotations;
org$frostlang$frostc$Annotations* $tmp43 = *$tmp42;
frost$core$Bit $tmp44 = org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit($tmp43);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block13; else goto block14;
block13:;
frost$core$Bit* $tmp46 = &param1->reportErrors;
frost$core$Bit $tmp47 = *$tmp46;
frost$core$Bit $tmp48 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp47);
*(&local1) = $tmp48;
goto block15;
block14:;
*(&local1) = $tmp44;
goto block15;
block15:;
frost$core$Bit $tmp49 = *(&local1);
bool $tmp50 = $tmp49.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp41);
if ($tmp50) goto block11; else goto block16;
block11:;
// line 39
org$frostlang$frostc$IR$Value* $tmp51 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp52 = (frost$core$Int64) {7};
frost$core$Int64 $tmp53 = (frost$core$Int64) {18446744073709551615};
org$frostlang$frostc$IR$Statement$ID $tmp54 = org$frostlang$frostc$IR$Statement$ID$init$frost$core$Int64($tmp53);
frost$core$Weak** $tmp55 = &param4->owner;
frost$core$Weak* $tmp56 = *$tmp55;
frost$core$Object* $tmp57 = frost$core$Weak$get$R$frost$core$Weak$T($tmp56);
org$frostlang$frostc$Type** $tmp58 = &((org$frostlang$frostc$ClassDecl*) $tmp57)->type;
org$frostlang$frostc$Type* $tmp59 = *$tmp58;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp51, $tmp52, $tmp54, $tmp59);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
org$frostlang$frostc$IR$Value** $tmp60 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp61 = *$tmp60;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
org$frostlang$frostc$IR$Value** $tmp62 = &param0->target;
*$tmp62 = $tmp51;
frost$core$Frost$unref$frost$core$Object$Q($tmp57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
goto block12;
block16:;
// line 1
// line 42
frost$core$Bit $tmp63 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp64 = org$frostlang$frostc$Compiler$compileSelf$org$frostlang$frostc$Position$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param1, param2, $tmp63);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
org$frostlang$frostc$IR$Value** $tmp65 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp66 = *$tmp65;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
org$frostlang$frostc$IR$Value** $tmp67 = &param0->target;
*$tmp67 = $tmp64;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
goto block12;
block12:;
goto block10;
block10:;
goto block4;
block4:;
// line 45
org$frostlang$frostc$Type** $tmp68 = &param4->type;
org$frostlang$frostc$Type* $tmp69 = *$tmp68;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
org$frostlang$frostc$Type** $tmp70 = &param0->rawType;
org$frostlang$frostc$Type* $tmp71 = *$tmp70;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
org$frostlang$frostc$Type** $tmp72 = &param0->rawType;
*$tmp72 = $tmp69;
// line 46
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
// line 47
frost$core$Bit* $tmp73 = &param1->inFieldCleanup;
frost$core$Bit $tmp74 = *$tmp73;
frost$core$Bit $tmp75 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp74);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block19; else goto block20;
block19:;
org$frostlang$frostc$Annotations** $tmp77 = &param4->annotations;
org$frostlang$frostc$Annotations* $tmp78 = *$tmp77;
frost$core$Bit $tmp79 = org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit($tmp78);
*(&local3) = $tmp79;
goto block21;
block20:;
*(&local3) = $tmp75;
goto block21;
block21:;
frost$core$Bit $tmp80 = *(&local3);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block17; else goto block22;
block17:;
// line 48
org$frostlang$frostc$Type** $tmp82 = &param0->rawType;
org$frostlang$frostc$Type* $tmp83 = *$tmp82;
org$frostlang$frostc$FixedArray** $tmp84 = &$tmp83->subtypes;
org$frostlang$frostc$FixedArray* $tmp85 = *$tmp84;
frost$core$Int64 $tmp86 = (frost$core$Int64) {1};
frost$core$Object* $tmp87 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp85, $tmp86);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp87)));
org$frostlang$frostc$Type* $tmp88 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp87);
frost$core$Frost$unref$frost$core$Object$Q($tmp87);
goto block18;
block22:;
// line 1
// line 51
org$frostlang$frostc$Type** $tmp89 = &param0->rawType;
org$frostlang$frostc$Type* $tmp90 = *$tmp89;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
org$frostlang$frostc$Type* $tmp91 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local2) = $tmp90;
goto block18;
block18:;
// line 53
org$frostlang$frostc$IR$Value** $tmp92 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp93 = *$tmp92;
frost$core$Bit $tmp94 = frost$core$Bit$init$builtin_bit($tmp93 != NULL);
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block23; else goto block25;
block23:;
// line 54
org$frostlang$frostc$IR$Value** $tmp96 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp97 = *$tmp96;
$fn99 $tmp98 = ($fn99) $tmp97->$class->vtable[2];
org$frostlang$frostc$Type* $tmp100 = $tmp98($tmp97);
frost$core$Weak** $tmp101 = &param4->owner;
frost$core$Weak* $tmp102 = *$tmp101;
frost$core$Object* $tmp103 = frost$core$Weak$get$R$frost$core$Weak$T($tmp102);
org$frostlang$frostc$Type* $tmp104 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param1, $tmp100, ((org$frostlang$frostc$ClassDecl*) $tmp103));
org$frostlang$frostc$Type* $tmp105 = *(&local2);
org$frostlang$frostc$Type* $tmp106 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp104, $tmp105);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
org$frostlang$frostc$Type** $tmp107 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp108 = *$tmp107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
org$frostlang$frostc$Type** $tmp109 = &param0->effectiveType;
*$tmp109 = $tmp106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$core$Frost$unref$frost$core$Object$Q($tmp103);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
goto block24;
block25:;
// line 1
// line 58
org$frostlang$frostc$Type* $tmp110 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
org$frostlang$frostc$Type** $tmp111 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp112 = *$tmp111;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
org$frostlang$frostc$Type** $tmp113 = &param0->effectiveType;
*$tmp113 = $tmp110;
goto block24;
block24:;
// line 60
org$frostlang$frostc$IR$Value** $tmp114 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp115 = *$tmp114;
frost$core$Bit $tmp116 = frost$core$Bit$init$builtin_bit($tmp115 != NULL);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block26; else goto block27;
block26:;
// line 61
org$frostlang$frostc$IR$Value** $tmp118 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp119 = *$tmp118;
frost$core$Weak** $tmp120 = &param4->owner;
frost$core$Weak* $tmp121 = *$tmp120;
frost$core$Object* $tmp122 = frost$core$Weak$get$R$frost$core$Weak$T($tmp121);
org$frostlang$frostc$Type** $tmp123 = &((org$frostlang$frostc$ClassDecl*) $tmp122)->type;
org$frostlang$frostc$Type* $tmp124 = *$tmp123;
org$frostlang$frostc$IR$Value* $tmp125 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param1, param2, $tmp119, $tmp124);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
org$frostlang$frostc$IR$Value** $tmp126 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp127 = *$tmp126;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
org$frostlang$frostc$IR$Value** $tmp128 = &param0->target;
*$tmp128 = $tmp125;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$core$Frost$unref$frost$core$Object$Q($tmp122);
goto block27;
block27:;
org$frostlang$frostc$Type* $tmp129 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$FieldLValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$FieldLValue* param0) {

// line 67
org$frostlang$frostc$Type** $tmp130 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp131 = *$tmp130;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
return $tmp131;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$FieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$lvalue$FieldLValue* param0) {

frost$core$Bit local0;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$IR$Statement$ID local4;
frost$core$Bit local5;
// line 72
org$frostlang$frostc$FieldDecl** $tmp132 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp133 = *$tmp132;
org$frostlang$frostc$Annotations** $tmp134 = &$tmp133->annotations;
org$frostlang$frostc$Annotations* $tmp135 = *$tmp134;
frost$core$Bit $tmp136 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp135);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block3; else goto block4;
block3:;
org$frostlang$frostc$FieldDecl** $tmp138 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp139 = *$tmp138;
org$frostlang$frostc$FieldDecl$Kind* $tmp140 = &$tmp139->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp141 = *$tmp140;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp142;
$tmp142 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp142->value = $tmp141;
frost$core$Int64 $tmp143 = (frost$core$Int64) {2};
org$frostlang$frostc$FieldDecl$Kind $tmp144 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp143);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp145;
$tmp145 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp145->value = $tmp144;
ITable* $tmp146 = ((frost$core$Equatable*) $tmp142)->$class->itable;
while ($tmp146->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp146 = $tmp146->next;
}
$fn148 $tmp147 = $tmp146->methods[0];
frost$core$Bit $tmp149 = $tmp147(((frost$core$Equatable*) $tmp142), ((frost$core$Equatable*) $tmp145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp145)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp142)));
*(&local0) = $tmp149;
goto block5;
block4:;
*(&local0) = $tmp136;
goto block5;
block5:;
frost$core$Bit $tmp150 = *(&local0);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block1; else goto block2;
block1:;
// line 73
org$frostlang$frostc$Compiler** $tmp152 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp153 = *$tmp152;
frost$collections$Stack** $tmp154 = &$tmp153->currentClass;
frost$collections$Stack* $tmp155 = *$tmp154;
org$frostlang$frostc$FieldDecl** $tmp156 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp157 = *$tmp156;
frost$core$Weak** $tmp158 = &$tmp157->owner;
frost$core$Weak* $tmp159 = *$tmp158;
frost$core$Object* $tmp160 = frost$core$Weak$get$R$frost$core$Weak$T($tmp159);
frost$collections$Stack$push$frost$collections$Stack$T($tmp155, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp160)));
frost$core$Frost$unref$frost$core$Object$Q($tmp160);
// line 74
org$frostlang$frostc$Compiler** $tmp161 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp162 = *$tmp161;
org$frostlang$frostc$FieldDecl** $tmp163 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp164 = *$tmp163;
org$frostlang$frostc$ASTNode** $tmp165 = &$tmp164->rawValue;
org$frostlang$frostc$ASTNode* $tmp166 = *$tmp165;
org$frostlang$frostc$Compiler$TypeContext* $tmp167 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp168 = (frost$core$Int64) {3};
$fn170 $tmp169 = ($fn170) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp171 = $tmp169(param0);
frost$core$Bit $tmp172 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp167, $tmp168, $tmp171, $tmp172);
org$frostlang$frostc$IR$Value* $tmp173 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp162, $tmp166, $tmp167);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
org$frostlang$frostc$IR$Value* $tmp174 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
*(&local1) = $tmp173;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
// line 76
org$frostlang$frostc$Compiler** $tmp175 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp176 = *$tmp175;
frost$collections$Stack** $tmp177 = &$tmp176->currentClass;
frost$collections$Stack* $tmp178 = *$tmp177;
frost$core$Object* $tmp179 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp178);
frost$core$Frost$unref$frost$core$Object$Q($tmp179);
// line 77
org$frostlang$frostc$IR$Value* $tmp180 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
org$frostlang$frostc$IR$Value* $tmp181 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp180;
block2:;
// line 79
org$frostlang$frostc$IR$Value** $tmp182 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp183 = *$tmp182;
frost$core$Bit $tmp184 = frost$core$Bit$init$builtin_bit($tmp183 == NULL);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block6; else goto block7;
block6:;
// line 81
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block7:;
// line 83
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 84
org$frostlang$frostc$FieldDecl** $tmp186 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp187 = *$tmp186;
org$frostlang$frostc$FieldDecl$Kind* $tmp188 = &$tmp187->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp189 = *$tmp188;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp190;
$tmp190 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp190->value = $tmp189;
frost$core$Int64 $tmp191 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp192 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp191);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp193;
$tmp193 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp193->value = $tmp192;
ITable* $tmp194 = ((frost$core$Equatable*) $tmp190)->$class->itable;
while ($tmp194->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp194 = $tmp194->next;
}
$fn196 $tmp195 = $tmp194->methods[0];
frost$core$Bit $tmp197 = $tmp195(((frost$core$Equatable*) $tmp190), ((frost$core$Equatable*) $tmp193));
bool $tmp198 = $tmp197.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp193)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp190)));
if ($tmp198) goto block8; else goto block10;
block8:;
// line 85
org$frostlang$frostc$Compiler** $tmp199 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp200 = *$tmp199;
org$frostlang$frostc$Position* $tmp201 = &param0->position;
org$frostlang$frostc$Position $tmp202 = *$tmp201;
org$frostlang$frostc$IR$Value** $tmp203 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp204 = *$tmp203;
org$frostlang$frostc$FieldDecl** $tmp205 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp206 = *$tmp205;
frost$core$String** $tmp207 = &((org$frostlang$frostc$Symbol*) $tmp206)->name;
frost$core$String* $tmp208 = *$tmp207;
frost$core$String* $tmp209 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s210, $tmp208);
frost$core$String* $tmp211 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp209, &$s212);
frost$collections$Array* $tmp213 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp213);
org$frostlang$frostc$Compiler$TypeContext* $tmp214 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp215 = (frost$core$Int64) {3};
org$frostlang$frostc$Type** $tmp216 = &param0->rawType;
org$frostlang$frostc$Type* $tmp217 = *$tmp216;
frost$core$Bit $tmp218 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp214, $tmp215, $tmp217, $tmp218);
org$frostlang$frostc$IR$Value* $tmp219 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp200, $tmp202, $tmp204, $tmp211, ((frost$collections$ListView*) $tmp213), $tmp214);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
org$frostlang$frostc$IR$Value* $tmp220 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
*(&local2) = $tmp219;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
goto block9;
block10:;
// line 1
// line 89
// line 90
org$frostlang$frostc$Compiler** $tmp221 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp222 = *$tmp221;
org$frostlang$frostc$FieldDecl** $tmp223 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp224 = *$tmp223;
frost$core$Weak** $tmp225 = &$tmp224->owner;
frost$core$Weak* $tmp226 = *$tmp225;
frost$core$Object* $tmp227 = frost$core$Weak$get$R$frost$core$Weak$T($tmp226);
frost$core$Bit $tmp228 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit($tmp222, ((org$frostlang$frostc$ClassDecl*) $tmp227));
bool $tmp229 = $tmp228.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp227);
if ($tmp229) goto block11; else goto block13;
block11:;
// line 91
org$frostlang$frostc$Compiler** $tmp230 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp231 = *$tmp230;
org$frostlang$frostc$IR** $tmp232 = &$tmp231->ir;
org$frostlang$frostc$IR* $tmp233 = *$tmp232;
org$frostlang$frostc$IR$Statement* $tmp234 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp235 = (frost$core$Int64) {10};
org$frostlang$frostc$Position* $tmp236 = &param0->position;
org$frostlang$frostc$Position $tmp237 = *$tmp236;
org$frostlang$frostc$IR$Value** $tmp238 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp239 = *$tmp238;
org$frostlang$frostc$FieldDecl** $tmp240 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp241 = *$tmp240;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp234, $tmp235, $tmp237, $tmp239, $tmp241);
$fn243 $tmp242 = ($fn243) $tmp233->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp244 = $tmp242($tmp233, $tmp234);
*(&local3) = $tmp244;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
goto block12;
block13:;
// line 1
// line 94
org$frostlang$frostc$Compiler** $tmp245 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp246 = *$tmp245;
org$frostlang$frostc$IR** $tmp247 = &$tmp246->ir;
org$frostlang$frostc$IR* $tmp248 = *$tmp247;
org$frostlang$frostc$IR$Statement* $tmp249 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp250 = (frost$core$Int64) {11};
org$frostlang$frostc$Position* $tmp251 = &param0->position;
org$frostlang$frostc$Position $tmp252 = *$tmp251;
org$frostlang$frostc$IR$Value** $tmp253 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp254 = *$tmp253;
org$frostlang$frostc$FieldDecl** $tmp255 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp256 = *$tmp255;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp249, $tmp250, $tmp252, $tmp254, $tmp256);
$fn258 $tmp257 = ($fn258) $tmp248->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp259 = $tmp257($tmp248, $tmp249);
*(&local4) = $tmp259;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
// line 96
org$frostlang$frostc$Compiler** $tmp260 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp261 = *$tmp260;
org$frostlang$frostc$IR** $tmp262 = &$tmp261->ir;
org$frostlang$frostc$IR* $tmp263 = *$tmp262;
org$frostlang$frostc$IR$Statement* $tmp264 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp265 = (frost$core$Int64) {14};
org$frostlang$frostc$Position* $tmp266 = &param0->position;
org$frostlang$frostc$Position $tmp267 = *$tmp266;
org$frostlang$frostc$IR$Value* $tmp268 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp269 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp270 = *(&local4);
org$frostlang$frostc$Type** $tmp271 = &param0->rawType;
org$frostlang$frostc$Type* $tmp272 = *$tmp271;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp268, $tmp269, $tmp270, $tmp272);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp264, $tmp265, $tmp267, $tmp268);
$fn274 $tmp273 = ($fn274) $tmp263->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp275 = $tmp273($tmp263, $tmp264);
*(&local3) = $tmp275;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
goto block12;
block12:;
// line 98
org$frostlang$frostc$IR$Value* $tmp276 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp277 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp278 = *(&local3);
org$frostlang$frostc$Type** $tmp279 = &param0->rawType;
org$frostlang$frostc$Type* $tmp280 = *$tmp279;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp276, $tmp277, $tmp278, $tmp280);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
org$frostlang$frostc$IR$Value* $tmp281 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
*(&local2) = $tmp276;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
goto block9;
block9:;
// line 100
org$frostlang$frostc$Compiler** $tmp282 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp283 = *$tmp282;
frost$core$Bit* $tmp284 = &$tmp283->inFieldCleanup;
frost$core$Bit $tmp285 = *$tmp284;
frost$core$Bit $tmp286 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp285);
bool $tmp287 = $tmp286.value;
if ($tmp287) goto block16; else goto block17;
block16:;
org$frostlang$frostc$FieldDecl** $tmp288 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp289 = *$tmp288;
org$frostlang$frostc$Annotations** $tmp290 = &$tmp289->annotations;
org$frostlang$frostc$Annotations* $tmp291 = *$tmp290;
frost$core$Bit $tmp292 = org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit($tmp291);
*(&local5) = $tmp292;
goto block18;
block17:;
*(&local5) = $tmp286;
goto block18;
block18:;
frost$core$Bit $tmp293 = *(&local5);
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block14; else goto block15;
block14:;
// line 101
org$frostlang$frostc$Compiler** $tmp295 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp296 = *$tmp295;
org$frostlang$frostc$Position* $tmp297 = &param0->position;
org$frostlang$frostc$Position $tmp298 = *$tmp297;
org$frostlang$frostc$IR$Value* $tmp299 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp300 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp300);
org$frostlang$frostc$Compiler$TypeContext* $tmp301 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp302 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp301, $tmp302);
org$frostlang$frostc$IR$Value* $tmp303 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp296, $tmp298, $tmp299, &$s304, ((frost$collections$ListView*) $tmp300), $tmp301);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
org$frostlang$frostc$IR$Value* $tmp305 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local2) = $tmp303;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
goto block15;
block15:;
// line 104
org$frostlang$frostc$Type** $tmp306 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp307 = *$tmp306;
org$frostlang$frostc$IR$Value* $tmp308 = *(&local2);
$fn310 $tmp309 = ($fn310) $tmp308->$class->vtable[2];
org$frostlang$frostc$Type* $tmp311 = $tmp309($tmp308);
ITable* $tmp312 = ((frost$core$Equatable*) $tmp307)->$class->itable;
while ($tmp312->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp312 = $tmp312->next;
}
$fn314 $tmp313 = $tmp312->methods[1];
frost$core$Bit $tmp315 = $tmp313(((frost$core$Equatable*) $tmp307), ((frost$core$Equatable*) $tmp311));
bool $tmp316 = $tmp315.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
if ($tmp316) goto block19; else goto block20;
block19:;
// line 105
org$frostlang$frostc$Compiler** $tmp317 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp318 = *$tmp317;
org$frostlang$frostc$Position* $tmp319 = &param0->position;
org$frostlang$frostc$Position $tmp320 = *$tmp319;
org$frostlang$frostc$IR$Value* $tmp321 = *(&local2);
org$frostlang$frostc$Type** $tmp322 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp323 = *$tmp322;
org$frostlang$frostc$IR$Value* $tmp324 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q($tmp318, $tmp320, $tmp321, $tmp323);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
org$frostlang$frostc$IR$Value* $tmp325 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local2) = $tmp324;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
goto block20;
block20:;
// line 107
org$frostlang$frostc$IR$Value* $tmp326 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
org$frostlang$frostc$IR$Value* $tmp327 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp326;

}
void org$frostlang$frostc$lvalue$FieldLValue$compileStore$org$frostlang$frostc$IR$Value(org$frostlang$frostc$lvalue$FieldLValue* param0, org$frostlang$frostc$IR$Value* param1) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
frost$core$Bit local2;
frost$collections$Array* local3 = NULL;
frost$collections$Array* local4 = NULL;
frost$core$Bit local5;
org$frostlang$frostc$IR$Value* local6 = NULL;
// line 112
org$frostlang$frostc$IR$Value** $tmp328 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp329 = *$tmp328;
frost$core$Bit $tmp330 = frost$core$Bit$init$builtin_bit($tmp329 == NULL);
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block1; else goto block2;
block1:;
// line 114
return;
block2:;
// line 116
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 117
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 118
org$frostlang$frostc$Compiler** $tmp332 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp333 = *$tmp332;
frost$core$Bit* $tmp334 = &$tmp333->inFieldCleanup;
frost$core$Bit $tmp335 = *$tmp334;
frost$core$Bit $tmp336 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp335);
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block5; else goto block6;
block5:;
org$frostlang$frostc$FieldDecl** $tmp338 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp339 = *$tmp338;
org$frostlang$frostc$Annotations** $tmp340 = &$tmp339->annotations;
org$frostlang$frostc$Annotations* $tmp341 = *$tmp340;
frost$core$Bit $tmp342 = org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit($tmp341);
*(&local2) = $tmp342;
goto block7;
block6:;
*(&local2) = $tmp336;
goto block7;
block7:;
frost$core$Bit $tmp343 = *(&local2);
bool $tmp344 = $tmp343.value;
if ($tmp344) goto block3; else goto block8;
block3:;
// line 119
frost$collections$Array* $tmp345 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp345);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$collections$Array* $tmp346 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
*(&local3) = $tmp345;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
// line 120
frost$collections$Array* $tmp347 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp348 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp349 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp350 = &param0->position;
org$frostlang$frostc$Position $tmp351 = *$tmp350;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp348, $tmp349, $tmp351, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp347, ((frost$core$Object*) $tmp348));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
// line 121
org$frostlang$frostc$Compiler** $tmp352 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp353 = *$tmp352;
org$frostlang$frostc$ASTNode* $tmp354 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp355 = (frost$core$Int64) {9};
org$frostlang$frostc$Position* $tmp356 = &param0->position;
org$frostlang$frostc$Position $tmp357 = *$tmp356;
org$frostlang$frostc$ASTNode* $tmp358 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp359 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp360 = &param0->position;
org$frostlang$frostc$Position $tmp361 = *$tmp360;
org$frostlang$frostc$IR$Value* $tmp362 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp363 = (frost$core$Int64) {14};
org$frostlang$frostc$Type** $tmp364 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp365 = *$tmp364;
org$frostlang$frostc$Type* $tmp366 = org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp365);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp362, $tmp363, $tmp366);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp358, $tmp359, $tmp361, $tmp362);
frost$collections$Array* $tmp367 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp368 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp367);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp354, $tmp355, $tmp357, $tmp358, $tmp368);
org$frostlang$frostc$IR$Value* $tmp369 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q($tmp353, $tmp354);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
org$frostlang$frostc$IR$Value* $tmp370 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
*(&local1) = $tmp369;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
frost$collections$Array* $tmp371 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
*(&local3) = ((frost$collections$Array*) NULL);
goto block4;
block8:;
// line 1
// line 126
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$IR$Value* $tmp372 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
*(&local1) = param1;
goto block4;
block4:;
// line 128
org$frostlang$frostc$Type** $tmp373 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp374 = *$tmp373;
org$frostlang$frostc$Type** $tmp375 = &param0->rawType;
org$frostlang$frostc$Type* $tmp376 = *$tmp375;
ITable* $tmp377 = ((frost$core$Equatable*) $tmp374)->$class->itable;
while ($tmp377->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp377 = $tmp377->next;
}
$fn379 $tmp378 = $tmp377->methods[1];
frost$core$Bit $tmp380 = $tmp378(((frost$core$Equatable*) $tmp374), ((frost$core$Equatable*) $tmp376));
bool $tmp381 = $tmp380.value;
if ($tmp381) goto block9; else goto block11;
block9:;
// line 129
org$frostlang$frostc$Compiler** $tmp382 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp383 = *$tmp382;
org$frostlang$frostc$Position* $tmp384 = &param0->position;
org$frostlang$frostc$Position $tmp385 = *$tmp384;
org$frostlang$frostc$IR$Value* $tmp386 = *(&local1);
org$frostlang$frostc$Type** $tmp387 = &param0->rawType;
org$frostlang$frostc$Type* $tmp388 = *$tmp387;
org$frostlang$frostc$IR$Value* $tmp389 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q($tmp383, $tmp385, $tmp386, $tmp388);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
org$frostlang$frostc$IR$Value* $tmp390 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
*(&local0) = $tmp389;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
// line 130
org$frostlang$frostc$IR$Value* $tmp391 = *(&local0);
frost$core$Bit $tmp392 = frost$core$Bit$init$builtin_bit(false);
bool $tmp393 = $tmp392.value;
if ($tmp393) goto block12; else goto block13;
block12:;
// line 131
org$frostlang$frostc$IR$Value* $tmp394 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp395 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block13:;
goto block10;
block11:;
// line 1
// line 135
org$frostlang$frostc$IR$Value* $tmp396 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
org$frostlang$frostc$IR$Value* $tmp397 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local0) = $tmp396;
goto block10;
block10:;
// line 137
org$frostlang$frostc$FieldDecl** $tmp398 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp399 = *$tmp398;
org$frostlang$frostc$FieldDecl$Kind* $tmp400 = &$tmp399->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp401 = *$tmp400;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp402;
$tmp402 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp402->value = $tmp401;
frost$core$Int64 $tmp403 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp404 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp403);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp405;
$tmp405 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp405->value = $tmp404;
ITable* $tmp406 = ((frost$core$Equatable*) $tmp402)->$class->itable;
while ($tmp406->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp406 = $tmp406->next;
}
$fn408 $tmp407 = $tmp406->methods[0];
frost$core$Bit $tmp409 = $tmp407(((frost$core$Equatable*) $tmp402), ((frost$core$Equatable*) $tmp405));
bool $tmp410 = $tmp409.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp405)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp402)));
if ($tmp410) goto block14; else goto block16;
block14:;
// line 138
frost$collections$Array* $tmp411 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp411);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
frost$collections$Array* $tmp412 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
*(&local4) = $tmp411;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
// line 139
frost$collections$Array* $tmp413 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp414 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp415 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp416 = &param0->position;
org$frostlang$frostc$Position $tmp417 = *$tmp416;
org$frostlang$frostc$IR$Value* $tmp418 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp414, $tmp415, $tmp417, $tmp418);
frost$collections$Array$add$frost$collections$Array$T($tmp413, ((frost$core$Object*) $tmp414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
// line 140
org$frostlang$frostc$Compiler** $tmp419 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp420 = *$tmp419;
org$frostlang$frostc$Position* $tmp421 = &param0->position;
org$frostlang$frostc$Position $tmp422 = *$tmp421;
org$frostlang$frostc$IR$Value** $tmp423 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp424 = *$tmp423;
org$frostlang$frostc$FieldDecl** $tmp425 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp426 = *$tmp425;
frost$core$String** $tmp427 = &((org$frostlang$frostc$Symbol*) $tmp426)->name;
frost$core$String* $tmp428 = *$tmp427;
frost$core$String* $tmp429 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s430, $tmp428);
frost$core$String* $tmp431 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp429, &$s432);
frost$collections$Array* $tmp433 = *(&local4);
org$frostlang$frostc$Compiler$TypeContext* $tmp434 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp435 = (frost$core$Int64) {3};
org$frostlang$frostc$Type** $tmp436 = &param0->rawType;
org$frostlang$frostc$Type* $tmp437 = *$tmp436;
frost$core$Bit $tmp438 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp434, $tmp435, $tmp437, $tmp438);
org$frostlang$frostc$IR$Value* $tmp439 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp420, $tmp422, $tmp424, $tmp431, ((frost$collections$ListView*) $tmp433), $tmp434);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
frost$collections$Array* $tmp440 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
*(&local4) = ((frost$collections$Array*) NULL);
goto block15;
block16:;
// line 1
// line 144
org$frostlang$frostc$Compiler** $tmp441 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp442 = *$tmp441;
org$frostlang$frostc$Type** $tmp443 = &param0->rawType;
org$frostlang$frostc$Type* $tmp444 = *$tmp443;
frost$core$Bit $tmp445 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit($tmp442, $tmp444);
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block19; else goto block20;
block19:;
org$frostlang$frostc$FieldDecl** $tmp447 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp448 = *$tmp447;
frost$core$Weak** $tmp449 = &$tmp448->owner;
frost$core$Weak* $tmp450 = *$tmp449;
frost$core$Object* $tmp451 = frost$core$Weak$get$R$frost$core$Weak$T($tmp450);
frost$core$String** $tmp452 = &((org$frostlang$frostc$ClassDecl*) $tmp451)->name;
frost$core$String* $tmp453 = *$tmp452;
ITable* $tmp455 = ((frost$core$Equatable*) $tmp453)->$class->itable;
while ($tmp455->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp455 = $tmp455->next;
}
$fn457 $tmp456 = $tmp455->methods[1];
frost$core$Bit $tmp458 = $tmp456(((frost$core$Equatable*) $tmp453), ((frost$core$Equatable*) &$s454));
frost$core$Frost$unref$frost$core$Object$Q($tmp451);
*(&local5) = $tmp458;
goto block21;
block20:;
*(&local5) = $tmp445;
goto block21;
block21:;
frost$core$Bit $tmp459 = *(&local5);
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block17; else goto block18;
block17:;
// line 145
org$frostlang$frostc$Compiler** $tmp461 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp462 = *$tmp461;
org$frostlang$frostc$IR$Value* $tmp463 = *(&local1);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value($tmp462, $tmp463);
// line 146
$fn465 $tmp464 = ($fn465) param0->$class->vtable[5];
$tmp464(param0);
goto block18;
block18:;
// line 148
org$frostlang$frostc$IR$Value* $tmp466 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp467 = (frost$core$Int64) {7};
org$frostlang$frostc$Compiler** $tmp468 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp469 = *$tmp468;
org$frostlang$frostc$IR** $tmp470 = &$tmp469->ir;
org$frostlang$frostc$IR* $tmp471 = *$tmp470;
org$frostlang$frostc$IR$Statement* $tmp472 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp473 = (frost$core$Int64) {11};
org$frostlang$frostc$Position* $tmp474 = &param0->position;
org$frostlang$frostc$Position $tmp475 = *$tmp474;
org$frostlang$frostc$IR$Value** $tmp476 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp477 = *$tmp476;
org$frostlang$frostc$FieldDecl** $tmp478 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp479 = *$tmp478;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp472, $tmp473, $tmp475, $tmp477, $tmp479);
$fn481 $tmp480 = ($fn481) $tmp471->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp482 = $tmp480($tmp471, $tmp472);
org$frostlang$frostc$Type** $tmp483 = &param0->rawType;
org$frostlang$frostc$Type* $tmp484 = *$tmp483;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp466, $tmp467, $tmp482, $tmp484);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
org$frostlang$frostc$IR$Value* $tmp485 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
*(&local6) = $tmp466;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
// line 150
org$frostlang$frostc$Compiler** $tmp486 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp487 = *$tmp486;
org$frostlang$frostc$IR** $tmp488 = &$tmp487->ir;
org$frostlang$frostc$IR* $tmp489 = *$tmp488;
org$frostlang$frostc$IR$Statement* $tmp490 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp491 = (frost$core$Int64) {27};
org$frostlang$frostc$Position* $tmp492 = &param0->position;
org$frostlang$frostc$Position $tmp493 = *$tmp492;
org$frostlang$frostc$IR$Value* $tmp494 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp495 = *(&local6);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp490, $tmp491, $tmp493, $tmp494, $tmp495);
$fn497 $tmp496 = ($fn497) $tmp489->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp498 = $tmp496($tmp489, $tmp490);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
org$frostlang$frostc$IR$Value* $tmp499 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block15:;
org$frostlang$frostc$IR$Value* $tmp500 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp501 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
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
org$frostlang$frostc$FieldDecl** $tmp502 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp503 = *$tmp502;
org$frostlang$frostc$FieldDecl$Kind* $tmp504 = &$tmp503->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp505 = *$tmp504;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp506;
$tmp506 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp506->value = $tmp505;
frost$core$Int64 $tmp507 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp508 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp507);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp509;
$tmp509 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp509->value = $tmp508;
ITable* $tmp510 = ((frost$core$Equatable*) $tmp506)->$class->itable;
while ($tmp510->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp510 = $tmp510->next;
}
$fn512 $tmp511 = $tmp510->methods[0];
frost$core$Bit $tmp513 = $tmp511(((frost$core$Equatable*) $tmp506), ((frost$core$Equatable*) $tmp509));
bool $tmp514 = $tmp513.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp509)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp506)));
if ($tmp514) goto block1; else goto block2;
block1:;
// line 157
org$frostlang$frostc$IR$Value* $tmp515 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block2:;
// line 159
// line 160
org$frostlang$frostc$Compiler** $tmp516 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp517 = *$tmp516;
org$frostlang$frostc$FieldDecl** $tmp518 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp519 = *$tmp518;
frost$core$Weak** $tmp520 = &$tmp519->owner;
frost$core$Weak* $tmp521 = *$tmp520;
frost$core$Object* $tmp522 = frost$core$Weak$get$R$frost$core$Weak$T($tmp521);
frost$core$Bit $tmp523 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit($tmp517, ((org$frostlang$frostc$ClassDecl*) $tmp522));
bool $tmp524 = $tmp523.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp522);
if ($tmp524) goto block3; else goto block5;
block3:;
// line 161
org$frostlang$frostc$Compiler** $tmp525 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp526 = *$tmp525;
org$frostlang$frostc$IR** $tmp527 = &$tmp526->ir;
org$frostlang$frostc$IR* $tmp528 = *$tmp527;
org$frostlang$frostc$IR$Statement* $tmp529 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp530 = (frost$core$Int64) {10};
org$frostlang$frostc$Position* $tmp531 = &param0->position;
org$frostlang$frostc$Position $tmp532 = *$tmp531;
org$frostlang$frostc$IR$Value** $tmp533 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp534 = *$tmp533;
org$frostlang$frostc$FieldDecl** $tmp535 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp536 = *$tmp535;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp529, $tmp530, $tmp532, $tmp534, $tmp536);
$fn538 $tmp537 = ($fn538) $tmp528->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp539 = $tmp537($tmp528, $tmp529);
*(&local1) = $tmp539;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
goto block4;
block5:;
// line 1
// line 164
org$frostlang$frostc$Compiler** $tmp540 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp541 = *$tmp540;
org$frostlang$frostc$IR** $tmp542 = &$tmp541->ir;
org$frostlang$frostc$IR* $tmp543 = *$tmp542;
org$frostlang$frostc$IR$Statement* $tmp544 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp545 = (frost$core$Int64) {11};
org$frostlang$frostc$Position* $tmp546 = &param0->position;
org$frostlang$frostc$Position $tmp547 = *$tmp546;
org$frostlang$frostc$IR$Value** $tmp548 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp549 = *$tmp548;
org$frostlang$frostc$FieldDecl** $tmp550 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp551 = *$tmp550;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp544, $tmp545, $tmp547, $tmp549, $tmp551);
$fn553 $tmp552 = ($fn553) $tmp543->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp554 = $tmp552($tmp543, $tmp544);
*(&local2) = $tmp554;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
// line 165
org$frostlang$frostc$Compiler** $tmp555 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp556 = *$tmp555;
org$frostlang$frostc$IR** $tmp557 = &$tmp556->ir;
org$frostlang$frostc$IR* $tmp558 = *$tmp557;
org$frostlang$frostc$IR$Statement* $tmp559 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp560 = (frost$core$Int64) {14};
org$frostlang$frostc$Position* $tmp561 = &param0->position;
org$frostlang$frostc$Position $tmp562 = *$tmp561;
org$frostlang$frostc$IR$Value* $tmp563 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp564 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp565 = *(&local2);
org$frostlang$frostc$Type** $tmp566 = &param0->rawType;
org$frostlang$frostc$Type* $tmp567 = *$tmp566;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp563, $tmp564, $tmp565, $tmp567);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp559, $tmp560, $tmp562, $tmp563);
$fn569 $tmp568 = ($fn569) $tmp558->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp570 = $tmp568($tmp558, $tmp559);
*(&local1) = $tmp570;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
goto block4;
block4:;
// line 167
org$frostlang$frostc$IR$Value* $tmp571 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp572 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp573 = *(&local1);
org$frostlang$frostc$Type** $tmp574 = &param0->rawType;
org$frostlang$frostc$Type* $tmp575 = *$tmp574;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp571, $tmp572, $tmp573, $tmp575);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
org$frostlang$frostc$IR$Value* $tmp576 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
*(&local0) = $tmp571;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
// line 168
org$frostlang$frostc$Compiler** $tmp577 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp578 = *$tmp577;
org$frostlang$frostc$IR$Value* $tmp579 = *(&local0);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value($tmp578, $tmp579);
org$frostlang$frostc$IR$Value* $tmp580 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$lvalue$FieldLValue$cleanup(org$frostlang$frostc$lvalue$FieldLValue* param0) {

// line 15
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp581 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp582 = *$tmp581;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
org$frostlang$frostc$IR$Value** $tmp583 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp584 = *$tmp583;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
org$frostlang$frostc$FieldDecl** $tmp585 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp586 = *$tmp585;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
org$frostlang$frostc$Type** $tmp587 = &param0->rawType;
org$frostlang$frostc$Type* $tmp588 = *$tmp587;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
org$frostlang$frostc$Type** $tmp589 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp590 = *$tmp589;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
return;

}

