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
org$frostlang$frostc$lvalue$FieldLValue$class_type org$frostlang$frostc$lvalue$FieldLValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$FieldLValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$lvalue$FieldLValue$cleanup, org$frostlang$frostc$lvalue$FieldLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$FieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$FieldLValue$compileStore$org$frostlang$frostc$IR$Value, org$frostlang$frostc$lvalue$FieldLValue$compileUnref} };

typedef frost$core$Bit (*$fn14)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn25)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn99)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn148)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn170)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef frost$core$Bit (*$fn195)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn241)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn256)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn272)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn308)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn312)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn377)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn406)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn454)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn462)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn478)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn494)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn509)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn535)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn550)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn566)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 39, -7329818318767612820, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74\x5f", 4, 211223516, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static frost$core$String $s428 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x74\x5f", 4, 223587128, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s451 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };

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
// unreffing REF($19:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp8)));
// unreffing REF($15:frost.core.Equatable<org.frostlang.frostc.Compiler.Resolution>)
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
// unreffing REF($49:org.frostlang.frostc.Type)
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
// unreffing REF($83:frost.core.Weak.T)
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
// unreffing REF($111:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// unreffing REF($104:org.frostlang.frostc.IR.Value)
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
// unreffing REF($135:org.frostlang.frostc.IR.Value?)
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
// unreffing REF($187:org.frostlang.frostc.FixedArray.T)
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
// unreffing REF($231:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// unreffing REF($228:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q($tmp103);
// unreffing REF($226:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// unreffing REF($222:org.frostlang.frostc.Type)
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
// unreffing REF($282:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q($tmp122);
// unreffing REF($278:frost.core.Weak.T)
goto block27;
block27:;
org$frostlang$frostc$Type* $tmp129 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
// unreffing base
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
// unreffing REF($16:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp142)));
// unreffing REF($12:frost.core.Equatable<org.frostlang.frostc.FieldDecl.Kind>)
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
// unreffing REF($43:frost.core.Weak.T)
// line 74
org$frostlang$frostc$Compiler** $tmp161 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp162 = *$tmp161;
org$frostlang$frostc$FieldDecl** $tmp163 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp164 = *$tmp163;
org$frostlang$frostc$ASTNode** $tmp165 = &$tmp164->rawValue;
org$frostlang$frostc$ASTNode* $tmp166 = *$tmp165;
org$frostlang$frostc$Compiler$TypeContext* $tmp167 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp168 = (frost$core$Int64) {3};
$fn170 $tmp169 = ($fn170) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp171 = $tmp169(param0);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp167, $tmp168, $tmp171);
org$frostlang$frostc$IR$Value* $tmp172 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp162, $tmp166, $tmp167);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
org$frostlang$frostc$IR$Value* $tmp173 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
*(&local1) = $tmp172;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
// unreffing REF($63:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
// unreffing REF($61:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
// unreffing REF($58:org.frostlang.frostc.Compiler.TypeContext)
// line 75
org$frostlang$frostc$Compiler** $tmp174 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp175 = *$tmp174;
frost$collections$Stack** $tmp176 = &$tmp175->currentClass;
frost$collections$Stack* $tmp177 = *$tmp176;
frost$core$Object* $tmp178 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp177);
frost$core$Frost$unref$frost$core$Object$Q($tmp178);
// unreffing REF($86:frost.collections.Stack.T)
// line 76
org$frostlang$frostc$IR$Value* $tmp179 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
org$frostlang$frostc$IR$Value* $tmp180 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
// unreffing result
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp179;
block2:;
// line 78
org$frostlang$frostc$IR$Value** $tmp181 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp182 = *$tmp181;
frost$core$Bit $tmp183 = frost$core$Bit$init$builtin_bit($tmp182 == NULL);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block6; else goto block7;
block6:;
// line 80
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block7:;
// line 82
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 83
org$frostlang$frostc$FieldDecl** $tmp185 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp186 = *$tmp185;
org$frostlang$frostc$FieldDecl$Kind* $tmp187 = &$tmp186->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp188 = *$tmp187;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp189;
$tmp189 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp189->value = $tmp188;
frost$core$Int64 $tmp190 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp191 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp190);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp192;
$tmp192 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp192->value = $tmp191;
ITable* $tmp193 = ((frost$core$Equatable*) $tmp189)->$class->itable;
while ($tmp193->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp193 = $tmp193->next;
}
$fn195 $tmp194 = $tmp193->methods[0];
frost$core$Bit $tmp196 = $tmp194(((frost$core$Equatable*) $tmp189), ((frost$core$Equatable*) $tmp192));
bool $tmp197 = $tmp196.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp192)));
// unreffing REF($123:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp189)));
// unreffing REF($119:frost.core.Equatable<org.frostlang.frostc.FieldDecl.Kind>)
if ($tmp197) goto block8; else goto block10;
block8:;
// line 84
org$frostlang$frostc$Compiler** $tmp198 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp199 = *$tmp198;
org$frostlang$frostc$Position* $tmp200 = &param0->position;
org$frostlang$frostc$Position $tmp201 = *$tmp200;
org$frostlang$frostc$IR$Value** $tmp202 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp203 = *$tmp202;
org$frostlang$frostc$FieldDecl** $tmp204 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp205 = *$tmp204;
frost$core$String** $tmp206 = &((org$frostlang$frostc$Symbol*) $tmp205)->name;
frost$core$String* $tmp207 = *$tmp206;
frost$core$String* $tmp208 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s209, $tmp207);
frost$core$String* $tmp210 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp208, &$s211);
frost$collections$Array* $tmp212 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp212);
org$frostlang$frostc$Compiler$TypeContext* $tmp213 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp214 = (frost$core$Int64) {3};
org$frostlang$frostc$Type** $tmp215 = &param0->rawType;
org$frostlang$frostc$Type* $tmp216 = *$tmp215;
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp213, $tmp214, $tmp216);
org$frostlang$frostc$IR$Value* $tmp217 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp199, $tmp201, $tmp203, $tmp210, ((frost$collections$ListView*) $tmp212), $tmp213);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
org$frostlang$frostc$IR$Value* $tmp218 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
*(&local2) = $tmp217;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
// unreffing REF($158:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
// unreffing REF($153:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
// unreffing REF($149:frost.collections.Array<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
// unreffing REF($148:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
// unreffing REF($147:frost.core.String)
goto block9;
block10:;
// line 1
// line 88
// line 89
org$frostlang$frostc$Compiler** $tmp219 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp220 = *$tmp219;
org$frostlang$frostc$FieldDecl** $tmp221 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp222 = *$tmp221;
frost$core$Weak** $tmp223 = &$tmp222->owner;
frost$core$Weak* $tmp224 = *$tmp223;
frost$core$Object* $tmp225 = frost$core$Weak$get$R$frost$core$Weak$T($tmp224);
frost$core$Bit $tmp226 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit($tmp220, ((org$frostlang$frostc$ClassDecl*) $tmp225));
bool $tmp227 = $tmp226.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp225);
// unreffing REF($192:frost.core.Weak.T)
if ($tmp227) goto block11; else goto block13;
block11:;
// line 90
org$frostlang$frostc$Compiler** $tmp228 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp229 = *$tmp228;
org$frostlang$frostc$IR** $tmp230 = &$tmp229->ir;
org$frostlang$frostc$IR* $tmp231 = *$tmp230;
org$frostlang$frostc$IR$Statement* $tmp232 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp233 = (frost$core$Int64) {9};
org$frostlang$frostc$Position* $tmp234 = &param0->position;
org$frostlang$frostc$Position $tmp235 = *$tmp234;
org$frostlang$frostc$IR$Value** $tmp236 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp237 = *$tmp236;
org$frostlang$frostc$FieldDecl** $tmp238 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp239 = *$tmp238;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp232, $tmp233, $tmp235, $tmp237, $tmp239);
$fn241 $tmp240 = ($fn241) $tmp231->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp242 = $tmp240($tmp231, $tmp232);
*(&local3) = $tmp242;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
// unreffing REF($206:org.frostlang.frostc.IR.Statement)
goto block12;
block13:;
// line 1
// line 93
org$frostlang$frostc$Compiler** $tmp243 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp244 = *$tmp243;
org$frostlang$frostc$IR** $tmp245 = &$tmp244->ir;
org$frostlang$frostc$IR* $tmp246 = *$tmp245;
org$frostlang$frostc$IR$Statement* $tmp247 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp248 = (frost$core$Int64) {10};
org$frostlang$frostc$Position* $tmp249 = &param0->position;
org$frostlang$frostc$Position $tmp250 = *$tmp249;
org$frostlang$frostc$IR$Value** $tmp251 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp252 = *$tmp251;
org$frostlang$frostc$FieldDecl** $tmp253 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp254 = *$tmp253;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp247, $tmp248, $tmp250, $tmp252, $tmp254);
$fn256 $tmp255 = ($fn256) $tmp246->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp257 = $tmp255($tmp246, $tmp247);
*(&local4) = $tmp257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// unreffing REF($229:org.frostlang.frostc.IR.Statement)
// line 95
org$frostlang$frostc$Compiler** $tmp258 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp259 = *$tmp258;
org$frostlang$frostc$IR** $tmp260 = &$tmp259->ir;
org$frostlang$frostc$IR* $tmp261 = *$tmp260;
org$frostlang$frostc$IR$Statement* $tmp262 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp263 = (frost$core$Int64) {13};
org$frostlang$frostc$Position* $tmp264 = &param0->position;
org$frostlang$frostc$Position $tmp265 = *$tmp264;
org$frostlang$frostc$IR$Value* $tmp266 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp267 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp268 = *(&local4);
org$frostlang$frostc$Type** $tmp269 = &param0->rawType;
org$frostlang$frostc$Type* $tmp270 = *$tmp269;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp266, $tmp267, $tmp268, $tmp270);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp262, $tmp263, $tmp265, $tmp266);
$fn272 $tmp271 = ($fn272) $tmp261->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp273 = $tmp271($tmp261, $tmp262);
*(&local3) = $tmp273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
// unreffing REF($254:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
// unreffing REF($250:org.frostlang.frostc.IR.Statement)
goto block12;
block12:;
// line 97
org$frostlang$frostc$IR$Value* $tmp274 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp275 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp276 = *(&local3);
org$frostlang$frostc$Type** $tmp277 = &param0->rawType;
org$frostlang$frostc$Type* $tmp278 = *$tmp277;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp274, $tmp275, $tmp276, $tmp278);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
org$frostlang$frostc$IR$Value* $tmp279 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local2) = $tmp274;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
// unreffing REF($272:org.frostlang.frostc.IR.Value)
goto block9;
block9:;
// line 99
org$frostlang$frostc$Compiler** $tmp280 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp281 = *$tmp280;
frost$core$Bit* $tmp282 = &$tmp281->inFieldCleanup;
frost$core$Bit $tmp283 = *$tmp282;
frost$core$Bit $tmp284 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp283);
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block16; else goto block17;
block16:;
org$frostlang$frostc$FieldDecl** $tmp286 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp287 = *$tmp286;
org$frostlang$frostc$Annotations** $tmp288 = &$tmp287->annotations;
org$frostlang$frostc$Annotations* $tmp289 = *$tmp288;
frost$core$Bit $tmp290 = org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit($tmp289);
*(&local5) = $tmp290;
goto block18;
block17:;
*(&local5) = $tmp284;
goto block18;
block18:;
frost$core$Bit $tmp291 = *(&local5);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block14; else goto block15;
block14:;
// line 100
org$frostlang$frostc$Compiler** $tmp293 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp294 = *$tmp293;
org$frostlang$frostc$Position* $tmp295 = &param0->position;
org$frostlang$frostc$Position $tmp296 = *$tmp295;
org$frostlang$frostc$IR$Value* $tmp297 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp298 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp298);
org$frostlang$frostc$Compiler$TypeContext* $tmp299 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp300 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp299, $tmp300);
org$frostlang$frostc$IR$Value* $tmp301 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp294, $tmp296, $tmp297, &$s302, ((frost$collections$ListView*) $tmp298), $tmp299);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
org$frostlang$frostc$IR$Value* $tmp303 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local2) = $tmp301;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
// unreffing REF($321:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
// unreffing REF($318:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
// unreffing REF($314:org.frostlang.frostc.FixedArray<org.frostlang.frostc.ASTNode>)
goto block15;
block15:;
// line 103
org$frostlang$frostc$Type** $tmp304 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp305 = *$tmp304;
org$frostlang$frostc$IR$Value* $tmp306 = *(&local2);
$fn308 $tmp307 = ($fn308) $tmp306->$class->vtable[2];
org$frostlang$frostc$Type* $tmp309 = $tmp307($tmp306);
ITable* $tmp310 = ((frost$core$Equatable*) $tmp305)->$class->itable;
while ($tmp310->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp310 = $tmp310->next;
}
$fn312 $tmp311 = $tmp310->methods[1];
frost$core$Bit $tmp313 = $tmp311(((frost$core$Equatable*) $tmp305), ((frost$core$Equatable*) $tmp309));
bool $tmp314 = $tmp313.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
// unreffing REF($346:org.frostlang.frostc.Type)
if ($tmp314) goto block19; else goto block20;
block19:;
// line 104
org$frostlang$frostc$Compiler** $tmp315 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp316 = *$tmp315;
org$frostlang$frostc$Position* $tmp317 = &param0->position;
org$frostlang$frostc$Position $tmp318 = *$tmp317;
org$frostlang$frostc$IR$Value* $tmp319 = *(&local2);
org$frostlang$frostc$Type** $tmp320 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp321 = *$tmp320;
org$frostlang$frostc$IR$Value* $tmp322 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q($tmp316, $tmp318, $tmp319, $tmp321);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
org$frostlang$frostc$IR$Value* $tmp323 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local2) = $tmp322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
// unreffing REF($364:org.frostlang.frostc.IR.Value?)
goto block20;
block20:;
// line 106
org$frostlang$frostc$IR$Value* $tmp324 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
org$frostlang$frostc$IR$Value* $tmp325 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
// unreffing result
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp324;

}
void org$frostlang$frostc$lvalue$FieldLValue$compileStore$org$frostlang$frostc$IR$Value(org$frostlang$frostc$lvalue$FieldLValue* param0, org$frostlang$frostc$IR$Value* param1) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
frost$core$Bit local2;
frost$collections$Array* local3 = NULL;
frost$collections$Array* local4 = NULL;
frost$core$Bit local5;
org$frostlang$frostc$IR$Value* local6 = NULL;
// line 111
org$frostlang$frostc$IR$Value** $tmp326 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp327 = *$tmp326;
frost$core$Bit $tmp328 = frost$core$Bit$init$builtin_bit($tmp327 == NULL);
bool $tmp329 = $tmp328.value;
if ($tmp329) goto block1; else goto block2;
block1:;
// line 113
return;
block2:;
// line 115
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 116
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 117
org$frostlang$frostc$Compiler** $tmp330 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp331 = *$tmp330;
frost$core$Bit* $tmp332 = &$tmp331->inFieldCleanup;
frost$core$Bit $tmp333 = *$tmp332;
frost$core$Bit $tmp334 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp333);
bool $tmp335 = $tmp334.value;
if ($tmp335) goto block5; else goto block6;
block5:;
org$frostlang$frostc$FieldDecl** $tmp336 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp337 = *$tmp336;
org$frostlang$frostc$Annotations** $tmp338 = &$tmp337->annotations;
org$frostlang$frostc$Annotations* $tmp339 = *$tmp338;
frost$core$Bit $tmp340 = org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit($tmp339);
*(&local2) = $tmp340;
goto block7;
block6:;
*(&local2) = $tmp334;
goto block7;
block7:;
frost$core$Bit $tmp341 = *(&local2);
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block3; else goto block8;
block3:;
// line 118
frost$collections$Array* $tmp343 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp343);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$collections$Array* $tmp344 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
*(&local3) = $tmp343;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
// unreffing REF($34:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 119
frost$collections$Array* $tmp345 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp346 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp347 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp348 = &param0->position;
org$frostlang$frostc$Position $tmp349 = *$tmp348;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp346, $tmp347, $tmp349, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp345, ((frost$core$Object*) $tmp346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
// unreffing REF($50:org.frostlang.frostc.ASTNode)
// line 120
org$frostlang$frostc$Compiler** $tmp350 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp351 = *$tmp350;
org$frostlang$frostc$ASTNode* $tmp352 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp353 = (frost$core$Int64) {9};
org$frostlang$frostc$Position* $tmp354 = &param0->position;
org$frostlang$frostc$Position $tmp355 = *$tmp354;
org$frostlang$frostc$ASTNode* $tmp356 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp357 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp358 = &param0->position;
org$frostlang$frostc$Position $tmp359 = *$tmp358;
org$frostlang$frostc$IR$Value* $tmp360 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp361 = (frost$core$Int64) {14};
org$frostlang$frostc$Type** $tmp362 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp363 = *$tmp362;
org$frostlang$frostc$Type* $tmp364 = org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp363);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp360, $tmp361, $tmp364);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp356, $tmp357, $tmp359, $tmp360);
frost$collections$Array* $tmp365 = *(&local3);
org$frostlang$frostc$FixedArray* $tmp366 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp365);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp352, $tmp353, $tmp355, $tmp356, $tmp366);
org$frostlang$frostc$IR$Value* $tmp367 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q($tmp351, $tmp352);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
org$frostlang$frostc$IR$Value* $tmp368 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
*(&local1) = $tmp367;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
// unreffing REF($83:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
// unreffing REF($80:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
// unreffing REF($75:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
// unreffing REF($71:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
// unreffing REF($67:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
// unreffing REF($63:org.frostlang.frostc.ASTNode)
frost$collections$Array* $tmp369 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
// unreffing args
*(&local3) = ((frost$collections$Array*) NULL);
goto block4;
block8:;
// line 1
// line 125
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$IR$Value* $tmp370 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
*(&local1) = param1;
goto block4;
block4:;
// line 127
org$frostlang$frostc$Type** $tmp371 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp372 = *$tmp371;
org$frostlang$frostc$Type** $tmp373 = &param0->rawType;
org$frostlang$frostc$Type* $tmp374 = *$tmp373;
ITable* $tmp375 = ((frost$core$Equatable*) $tmp372)->$class->itable;
while ($tmp375->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp375 = $tmp375->next;
}
$fn377 $tmp376 = $tmp375->methods[1];
frost$core$Bit $tmp378 = $tmp376(((frost$core$Equatable*) $tmp372), ((frost$core$Equatable*) $tmp374));
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block9; else goto block11;
block9:;
// line 128
org$frostlang$frostc$Compiler** $tmp380 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp381 = *$tmp380;
org$frostlang$frostc$Position* $tmp382 = &param0->position;
org$frostlang$frostc$Position $tmp383 = *$tmp382;
org$frostlang$frostc$IR$Value* $tmp384 = *(&local1);
org$frostlang$frostc$Type** $tmp385 = &param0->rawType;
org$frostlang$frostc$Type* $tmp386 = *$tmp385;
org$frostlang$frostc$IR$Value* $tmp387 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q($tmp381, $tmp383, $tmp384, $tmp386);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
org$frostlang$frostc$IR$Value* $tmp388 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
*(&local0) = $tmp387;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
// unreffing REF($145:org.frostlang.frostc.IR.Value?)
// line 129
org$frostlang$frostc$IR$Value* $tmp389 = *(&local0);
frost$core$Bit $tmp390 = frost$core$Bit$init$builtin_bit(false);
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block12; else goto block13;
block12:;
// line 130
org$frostlang$frostc$IR$Value* $tmp392 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
// unreffing value
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp393 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
// unreffing cast
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block13:;
goto block10;
block11:;
// line 1
// line 134
org$frostlang$frostc$IR$Value* $tmp394 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
org$frostlang$frostc$IR$Value* $tmp395 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local0) = $tmp394;
goto block10;
block10:;
// line 136
org$frostlang$frostc$FieldDecl** $tmp396 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp397 = *$tmp396;
org$frostlang$frostc$FieldDecl$Kind* $tmp398 = &$tmp397->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp399 = *$tmp398;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp400;
$tmp400 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp400->value = $tmp399;
frost$core$Int64 $tmp401 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp402 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp401);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp403;
$tmp403 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp403->value = $tmp402;
ITable* $tmp404 = ((frost$core$Equatable*) $tmp400)->$class->itable;
while ($tmp404->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp404 = $tmp404->next;
}
$fn406 $tmp405 = $tmp404->methods[0];
frost$core$Bit $tmp407 = $tmp405(((frost$core$Equatable*) $tmp400), ((frost$core$Equatable*) $tmp403));
bool $tmp408 = $tmp407.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp403)));
// unreffing REF($193:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp400)));
// unreffing REF($189:frost.core.Equatable<org.frostlang.frostc.FieldDecl.Kind>)
if ($tmp408) goto block14; else goto block16;
block14:;
// line 137
frost$collections$Array* $tmp409 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp409);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
frost$collections$Array* $tmp410 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
*(&local4) = $tmp409;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
// unreffing REF($205:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 138
frost$collections$Array* $tmp411 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp412 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp413 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp414 = &param0->position;
org$frostlang$frostc$Position $tmp415 = *$tmp414;
org$frostlang$frostc$IR$Value* $tmp416 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp412, $tmp413, $tmp415, $tmp416);
frost$collections$Array$add$frost$collections$Array$T($tmp411, ((frost$core$Object*) $tmp412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
// unreffing REF($221:org.frostlang.frostc.ASTNode)
// line 139
org$frostlang$frostc$Compiler** $tmp417 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp418 = *$tmp417;
org$frostlang$frostc$Position* $tmp419 = &param0->position;
org$frostlang$frostc$Position $tmp420 = *$tmp419;
org$frostlang$frostc$IR$Value** $tmp421 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp422 = *$tmp421;
org$frostlang$frostc$FieldDecl** $tmp423 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp424 = *$tmp423;
frost$core$String** $tmp425 = &((org$frostlang$frostc$Symbol*) $tmp424)->name;
frost$core$String* $tmp426 = *$tmp425;
frost$core$String* $tmp427 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s428, $tmp426);
frost$core$String* $tmp429 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp427, &$s430);
frost$collections$Array* $tmp431 = *(&local4);
org$frostlang$frostc$Compiler$TypeContext* $tmp432 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp433 = (frost$core$Int64) {3};
org$frostlang$frostc$Type** $tmp434 = &param0->rawType;
org$frostlang$frostc$Type* $tmp435 = *$tmp434;
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp432, $tmp433, $tmp435);
org$frostlang$frostc$IR$Value* $tmp436 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp418, $tmp420, $tmp422, $tmp429, ((frost$collections$ListView*) $tmp431), $tmp432);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
// unreffing REF($254:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
// unreffing REF($249:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
// unreffing REF($246:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
// unreffing REF($245:frost.core.String)
frost$collections$Array* $tmp437 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
// unreffing args
*(&local4) = ((frost$collections$Array*) NULL);
goto block15;
block16:;
// line 1
// line 143
org$frostlang$frostc$Compiler** $tmp438 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp439 = *$tmp438;
org$frostlang$frostc$Type** $tmp440 = &param0->rawType;
org$frostlang$frostc$Type* $tmp441 = *$tmp440;
frost$core$Bit $tmp442 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit($tmp439, $tmp441);
bool $tmp443 = $tmp442.value;
if ($tmp443) goto block19; else goto block20;
block19:;
org$frostlang$frostc$FieldDecl** $tmp444 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp445 = *$tmp444;
frost$core$Weak** $tmp446 = &$tmp445->owner;
frost$core$Weak* $tmp447 = *$tmp446;
frost$core$Object* $tmp448 = frost$core$Weak$get$R$frost$core$Weak$T($tmp447);
frost$core$String** $tmp449 = &((org$frostlang$frostc$ClassDecl*) $tmp448)->name;
frost$core$String* $tmp450 = *$tmp449;
ITable* $tmp452 = ((frost$core$Equatable*) $tmp450)->$class->itable;
while ($tmp452->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp452 = $tmp452->next;
}
$fn454 $tmp453 = $tmp452->methods[1];
frost$core$Bit $tmp455 = $tmp453(((frost$core$Equatable*) $tmp450), ((frost$core$Equatable*) &$s451));
frost$core$Frost$unref$frost$core$Object$Q($tmp448);
// unreffing REF($287:frost.core.Weak.T)
*(&local5) = $tmp455;
goto block21;
block20:;
*(&local5) = $tmp442;
goto block21;
block21:;
frost$core$Bit $tmp456 = *(&local5);
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block17; else goto block18;
block17:;
// line 144
org$frostlang$frostc$Compiler** $tmp458 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp459 = *$tmp458;
org$frostlang$frostc$IR$Value* $tmp460 = *(&local1);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value($tmp459, $tmp460);
// line 145
$fn462 $tmp461 = ($fn462) param0->$class->vtable[5];
$tmp461(param0);
goto block18;
block18:;
// line 147
org$frostlang$frostc$IR$Value* $tmp463 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp464 = (frost$core$Int64) {7};
org$frostlang$frostc$Compiler** $tmp465 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp466 = *$tmp465;
org$frostlang$frostc$IR** $tmp467 = &$tmp466->ir;
org$frostlang$frostc$IR* $tmp468 = *$tmp467;
org$frostlang$frostc$IR$Statement* $tmp469 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp470 = (frost$core$Int64) {10};
org$frostlang$frostc$Position* $tmp471 = &param0->position;
org$frostlang$frostc$Position $tmp472 = *$tmp471;
org$frostlang$frostc$IR$Value** $tmp473 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp474 = *$tmp473;
org$frostlang$frostc$FieldDecl** $tmp475 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp476 = *$tmp475;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp469, $tmp470, $tmp472, $tmp474, $tmp476);
$fn478 $tmp477 = ($fn478) $tmp468->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp479 = $tmp477($tmp468, $tmp469);
org$frostlang$frostc$Type** $tmp480 = &param0->rawType;
org$frostlang$frostc$Type* $tmp481 = *$tmp480;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp463, $tmp464, $tmp479, $tmp481);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
org$frostlang$frostc$IR$Value* $tmp482 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
*(&local6) = $tmp463;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
// unreffing REF($322:org.frostlang.frostc.IR.Statement)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
// unreffing REF($316:org.frostlang.frostc.IR.Value)
// line 149
org$frostlang$frostc$Compiler** $tmp483 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp484 = *$tmp483;
org$frostlang$frostc$IR** $tmp485 = &$tmp484->ir;
org$frostlang$frostc$IR* $tmp486 = *$tmp485;
org$frostlang$frostc$IR$Statement* $tmp487 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp488 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp489 = &param0->position;
org$frostlang$frostc$Position $tmp490 = *$tmp489;
org$frostlang$frostc$IR$Value* $tmp491 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp492 = *(&local6);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp487, $tmp488, $tmp490, $tmp491, $tmp492);
$fn494 $tmp493 = ($fn494) $tmp486->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp495 = $tmp493($tmp486, $tmp487);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
// unreffing REF($355:org.frostlang.frostc.IR.Statement)
org$frostlang$frostc$IR$Value* $tmp496 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
// unreffing ptr
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block15:;
org$frostlang$frostc$IR$Value* $tmp497 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
// unreffing value
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp498 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
// unreffing cast
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$lvalue$FieldLValue$compileUnref(org$frostlang$frostc$lvalue$FieldLValue* param0) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$IR$Statement$ID local1;
org$frostlang$frostc$IR$Statement$ID local2;
// line 154
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 155
org$frostlang$frostc$FieldDecl** $tmp499 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp500 = *$tmp499;
org$frostlang$frostc$FieldDecl$Kind* $tmp501 = &$tmp500->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp502 = *$tmp501;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp503;
$tmp503 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp503->value = $tmp502;
frost$core$Int64 $tmp504 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp505 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp504);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp506;
$tmp506 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp506->value = $tmp505;
ITable* $tmp507 = ((frost$core$Equatable*) $tmp503)->$class->itable;
while ($tmp507->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp507 = $tmp507->next;
}
$fn509 $tmp508 = $tmp507->methods[0];
frost$core$Bit $tmp510 = $tmp508(((frost$core$Equatable*) $tmp503), ((frost$core$Equatable*) $tmp506));
bool $tmp511 = $tmp510.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp506)));
// unreffing REF($11:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp503)));
// unreffing REF($7:frost.core.Equatable<org.frostlang.frostc.FieldDecl.Kind>)
if ($tmp511) goto block1; else goto block2;
block1:;
// line 156
org$frostlang$frostc$IR$Value* $tmp512 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
// unreffing result
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block2:;
// line 158
// line 159
org$frostlang$frostc$Compiler** $tmp513 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp514 = *$tmp513;
org$frostlang$frostc$FieldDecl** $tmp515 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp516 = *$tmp515;
frost$core$Weak** $tmp517 = &$tmp516->owner;
frost$core$Weak* $tmp518 = *$tmp517;
frost$core$Object* $tmp519 = frost$core$Weak$get$R$frost$core$Weak$T($tmp518);
frost$core$Bit $tmp520 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit($tmp514, ((org$frostlang$frostc$ClassDecl*) $tmp519));
bool $tmp521 = $tmp520.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp519);
// unreffing REF($38:frost.core.Weak.T)
if ($tmp521) goto block3; else goto block5;
block3:;
// line 160
org$frostlang$frostc$Compiler** $tmp522 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp523 = *$tmp522;
org$frostlang$frostc$IR** $tmp524 = &$tmp523->ir;
org$frostlang$frostc$IR* $tmp525 = *$tmp524;
org$frostlang$frostc$IR$Statement* $tmp526 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp527 = (frost$core$Int64) {9};
org$frostlang$frostc$Position* $tmp528 = &param0->position;
org$frostlang$frostc$Position $tmp529 = *$tmp528;
org$frostlang$frostc$IR$Value** $tmp530 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp531 = *$tmp530;
org$frostlang$frostc$FieldDecl** $tmp532 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp533 = *$tmp532;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp526, $tmp527, $tmp529, $tmp531, $tmp533);
$fn535 $tmp534 = ($fn535) $tmp525->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp536 = $tmp534($tmp525, $tmp526);
*(&local1) = $tmp536;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
// unreffing REF($52:org.frostlang.frostc.IR.Statement)
goto block4;
block5:;
// line 1
// line 163
org$frostlang$frostc$Compiler** $tmp537 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp538 = *$tmp537;
org$frostlang$frostc$IR** $tmp539 = &$tmp538->ir;
org$frostlang$frostc$IR* $tmp540 = *$tmp539;
org$frostlang$frostc$IR$Statement* $tmp541 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp542 = (frost$core$Int64) {10};
org$frostlang$frostc$Position* $tmp543 = &param0->position;
org$frostlang$frostc$Position $tmp544 = *$tmp543;
org$frostlang$frostc$IR$Value** $tmp545 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp546 = *$tmp545;
org$frostlang$frostc$FieldDecl** $tmp547 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp548 = *$tmp547;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp541, $tmp542, $tmp544, $tmp546, $tmp548);
$fn550 $tmp549 = ($fn550) $tmp540->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp551 = $tmp549($tmp540, $tmp541);
*(&local2) = $tmp551;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
// unreffing REF($75:org.frostlang.frostc.IR.Statement)
// line 164
org$frostlang$frostc$Compiler** $tmp552 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp553 = *$tmp552;
org$frostlang$frostc$IR** $tmp554 = &$tmp553->ir;
org$frostlang$frostc$IR* $tmp555 = *$tmp554;
org$frostlang$frostc$IR$Statement* $tmp556 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp557 = (frost$core$Int64) {13};
org$frostlang$frostc$Position* $tmp558 = &param0->position;
org$frostlang$frostc$Position $tmp559 = *$tmp558;
org$frostlang$frostc$IR$Value* $tmp560 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp561 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp562 = *(&local2);
org$frostlang$frostc$Type** $tmp563 = &param0->rawType;
org$frostlang$frostc$Type* $tmp564 = *$tmp563;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp560, $tmp561, $tmp562, $tmp564);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp556, $tmp557, $tmp559, $tmp560);
$fn566 $tmp565 = ($fn566) $tmp555->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp567 = $tmp565($tmp555, $tmp556);
*(&local1) = $tmp567;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
// unreffing REF($100:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
// unreffing REF($96:org.frostlang.frostc.IR.Statement)
goto block4;
block4:;
// line 166
org$frostlang$frostc$IR$Value* $tmp568 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp569 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp570 = *(&local1);
org$frostlang$frostc$Type** $tmp571 = &param0->rawType;
org$frostlang$frostc$Type* $tmp572 = *$tmp571;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp568, $tmp569, $tmp570, $tmp572);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
org$frostlang$frostc$IR$Value* $tmp573 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
*(&local0) = $tmp568;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
// unreffing REF($118:org.frostlang.frostc.IR.Value)
// line 167
org$frostlang$frostc$Compiler** $tmp574 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp575 = *$tmp574;
org$frostlang$frostc$IR$Value* $tmp576 = *(&local0);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value($tmp575, $tmp576);
org$frostlang$frostc$IR$Value* $tmp577 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
// unreffing result
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$lvalue$FieldLValue$cleanup(org$frostlang$frostc$lvalue$FieldLValue* param0) {

// line 15
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp578 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp579 = *$tmp578;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
org$frostlang$frostc$IR$Value** $tmp580 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp581 = *$tmp580;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
org$frostlang$frostc$FieldDecl** $tmp582 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp583 = *$tmp582;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
org$frostlang$frostc$Type** $tmp584 = &param0->rawType;
org$frostlang$frostc$Type* $tmp585 = *$tmp584;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
org$frostlang$frostc$Type** $tmp586 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp587 = *$tmp586;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
return;

}

