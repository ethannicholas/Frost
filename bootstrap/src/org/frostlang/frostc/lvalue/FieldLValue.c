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
#include "org/frostlang/frostc/SymbolTable.h"
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
typedef org$frostlang$frostc$Type* (*$fn95)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn144)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn183)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef frost$core$Bit (*$fn216)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn263)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn278)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn294)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn329)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn333)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn397)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn426)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn475)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn482)(org$frostlang$frostc$lvalue$FieldLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn498)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn514)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn529)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn555)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn570)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn586)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 39, -7329818318767612820, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 17, -1841921998124322434, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74\x5f", 4, 211223516, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x74\x5f", 4, 223587128, NULL };
static frost$core$String $s450 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s472 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };

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
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
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
org$frostlang$frostc$FixedArray* $tmp81 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp80);
frost$core$Int64 $tmp82 = (frost$core$Int64) {1};
frost$core$Object* $tmp83 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp81, $tmp82);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp83)));
org$frostlang$frostc$Type* $tmp84 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp83);
frost$core$Frost$unref$frost$core$Object$Q($tmp83);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
goto block14;
block15:;
// line 1
// line 51
org$frostlang$frostc$Type** $tmp85 = &param0->rawType;
org$frostlang$frostc$Type* $tmp86 = *$tmp85;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
org$frostlang$frostc$Type* $tmp87 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
*(&local0) = $tmp86;
goto block14;
block14:;
// line 53
org$frostlang$frostc$IR$Value** $tmp88 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp89 = *$tmp88;
frost$core$Bit $tmp90 = frost$core$Bit$init$builtin_bit($tmp89 != NULL);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block17; else goto block19;
block17:;
// line 54
org$frostlang$frostc$IR$Value** $tmp92 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp93 = *$tmp92;
$fn95 $tmp94 = ($fn95) $tmp93->$class->vtable[2];
org$frostlang$frostc$Type* $tmp96 = $tmp94($tmp93);
frost$core$Weak** $tmp97 = &param4->owner;
frost$core$Weak* $tmp98 = *$tmp97;
frost$core$Object* $tmp99 = frost$core$Weak$get$R$frost$core$Weak$T($tmp98);
org$frostlang$frostc$Type* $tmp100 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param1, $tmp96, ((org$frostlang$frostc$ClassDecl*) $tmp99));
org$frostlang$frostc$Type* $tmp101 = *(&local0);
org$frostlang$frostc$Type* $tmp102 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param1, $tmp100, $tmp101);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
org$frostlang$frostc$Type** $tmp103 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp104 = *$tmp103;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
org$frostlang$frostc$Type** $tmp105 = &param0->effectiveType;
*$tmp105 = $tmp102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$core$Frost$unref$frost$core$Object$Q($tmp99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
goto block18;
block19:;
// line 1
// line 58
org$frostlang$frostc$Type* $tmp106 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
org$frostlang$frostc$Type** $tmp107 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp108 = *$tmp107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
org$frostlang$frostc$Type** $tmp109 = &param0->effectiveType;
*$tmp109 = $tmp106;
goto block18;
block18:;
// line 60
org$frostlang$frostc$IR$Value** $tmp110 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp111 = *$tmp110;
frost$core$Bit $tmp112 = frost$core$Bit$init$builtin_bit($tmp111 != NULL);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block20; else goto block21;
block20:;
// line 61
org$frostlang$frostc$IR$Value** $tmp114 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp115 = *$tmp114;
frost$core$Weak** $tmp116 = &param4->owner;
frost$core$Weak* $tmp117 = *$tmp116;
frost$core$Object* $tmp118 = frost$core$Weak$get$R$frost$core$Weak$T($tmp117);
org$frostlang$frostc$Type** $tmp119 = &((org$frostlang$frostc$ClassDecl*) $tmp118)->type;
org$frostlang$frostc$Type* $tmp120 = *$tmp119;
org$frostlang$frostc$IR$Value* $tmp121 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param1, param2, $tmp115, $tmp120);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
org$frostlang$frostc$IR$Value** $tmp122 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp123 = *$tmp122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
org$frostlang$frostc$IR$Value** $tmp124 = &param0->target;
*$tmp124 = $tmp121;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q($tmp118);
goto block21;
block21:;
org$frostlang$frostc$Type* $tmp125 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$FieldLValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$FieldLValue* param0) {

// line 67
org$frostlang$frostc$Type** $tmp126 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp127 = *$tmp126;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
return $tmp127;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$FieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$lvalue$FieldLValue* param0) {

org$frostlang$frostc$SymbolTable* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$IR$Statement$ID local4;
// line 72
org$frostlang$frostc$FieldDecl** $tmp128 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp129 = *$tmp128;
org$frostlang$frostc$Annotations** $tmp130 = &$tmp129->annotations;
org$frostlang$frostc$Annotations* $tmp131 = *$tmp130;
frost$core$Bit $tmp132 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp131);
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block3; else goto block2;
block3:;
org$frostlang$frostc$FieldDecl** $tmp134 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp135 = *$tmp134;
org$frostlang$frostc$FieldDecl$Kind* $tmp136 = &$tmp135->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp137 = *$tmp136;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp138;
$tmp138 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp138->value = $tmp137;
frost$core$Int64 $tmp139 = (frost$core$Int64) {2};
org$frostlang$frostc$FieldDecl$Kind $tmp140 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp139);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp141;
$tmp141 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp141->value = $tmp140;
ITable* $tmp142 = ((frost$core$Equatable*) $tmp138)->$class->itable;
while ($tmp142->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp142 = $tmp142->next;
}
$fn144 $tmp143 = $tmp142->methods[0];
frost$core$Bit $tmp145 = $tmp143(((frost$core$Equatable*) $tmp138), ((frost$core$Equatable*) $tmp141));
bool $tmp146 = $tmp145.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp141)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp138)));
if ($tmp146) goto block1; else goto block2;
block1:;
// line 73
org$frostlang$frostc$Compiler** $tmp147 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp148 = *$tmp147;
frost$collections$Stack** $tmp149 = &$tmp148->currentClass;
frost$collections$Stack* $tmp150 = *$tmp149;
org$frostlang$frostc$FieldDecl** $tmp151 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp152 = *$tmp151;
frost$core$Weak** $tmp153 = &$tmp152->owner;
frost$core$Weak* $tmp154 = *$tmp153;
frost$core$Object* $tmp155 = frost$core$Weak$get$R$frost$core$Weak$T($tmp154);
frost$collections$Stack$push$frost$collections$Stack$T($tmp150, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp155)));
frost$core$Frost$unref$frost$core$Object$Q($tmp155);
// line 74
org$frostlang$frostc$Compiler** $tmp156 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp157 = *$tmp156;
org$frostlang$frostc$SymbolTable** $tmp158 = &$tmp157->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp159 = *$tmp158;
*(&local0) = ((org$frostlang$frostc$SymbolTable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
org$frostlang$frostc$SymbolTable* $tmp160 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
*(&local0) = $tmp159;
// line 75
org$frostlang$frostc$Compiler** $tmp161 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp162 = *$tmp161;
org$frostlang$frostc$Compiler** $tmp163 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp164 = *$tmp163;
org$frostlang$frostc$FieldDecl** $tmp165 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp166 = *$tmp165;
frost$core$Weak** $tmp167 = &$tmp166->owner;
frost$core$Weak* $tmp168 = *$tmp167;
frost$core$Object* $tmp169 = frost$core$Weak$get$R$frost$core$Weak$T($tmp168);
org$frostlang$frostc$SymbolTable* $tmp170 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp164, ((org$frostlang$frostc$ClassDecl*) $tmp169));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
org$frostlang$frostc$SymbolTable** $tmp171 = &$tmp162->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp172 = *$tmp171;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
org$frostlang$frostc$SymbolTable** $tmp173 = &$tmp162->symbolTable;
*$tmp173 = $tmp170;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$core$Frost$unref$frost$core$Object$Q($tmp169);
// line 76
org$frostlang$frostc$Compiler** $tmp174 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp175 = *$tmp174;
org$frostlang$frostc$FieldDecl** $tmp176 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp177 = *$tmp176;
org$frostlang$frostc$ASTNode** $tmp178 = &$tmp177->rawValue;
org$frostlang$frostc$ASTNode* $tmp179 = *$tmp178;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp180 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp181 = (frost$core$Int64) {3};
$fn183 $tmp182 = ($fn183) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp184 = $tmp182(param0);
frost$core$Bit $tmp185 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp180, $tmp181, $tmp184, $tmp185);
org$frostlang$frostc$IR$Value* $tmp186 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp175, $tmp179, $tmp180);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
org$frostlang$frostc$IR$Value* $tmp187 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
*(&local1) = $tmp186;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
// line 78
org$frostlang$frostc$Compiler** $tmp188 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp189 = *$tmp188;
org$frostlang$frostc$SymbolTable* $tmp190 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
org$frostlang$frostc$SymbolTable** $tmp191 = &$tmp189->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp192 = *$tmp191;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
org$frostlang$frostc$SymbolTable** $tmp193 = &$tmp189->symbolTable;
*$tmp193 = $tmp190;
// line 79
org$frostlang$frostc$Compiler** $tmp194 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp195 = *$tmp194;
frost$collections$Stack** $tmp196 = &$tmp195->currentClass;
frost$collections$Stack* $tmp197 = *$tmp196;
frost$core$Object* $tmp198 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp197);
frost$core$Frost$unref$frost$core$Object$Q($tmp198);
// line 80
org$frostlang$frostc$IR$Value* $tmp199 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
org$frostlang$frostc$IR$Value* $tmp200 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$SymbolTable* $tmp201 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
*(&local0) = ((org$frostlang$frostc$SymbolTable*) NULL);
return $tmp199;
block2:;
// line 82
org$frostlang$frostc$IR$Value** $tmp202 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp203 = *$tmp202;
frost$core$Bit $tmp204 = frost$core$Bit$init$builtin_bit($tmp203 == NULL);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block4; else goto block5;
block4:;
// line 84
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block5:;
// line 86
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 87
org$frostlang$frostc$FieldDecl** $tmp206 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp207 = *$tmp206;
org$frostlang$frostc$FieldDecl$Kind* $tmp208 = &$tmp207->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp209 = *$tmp208;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp210;
$tmp210 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp210->value = $tmp209;
frost$core$Int64 $tmp211 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp212 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp211);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp213;
$tmp213 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp213->value = $tmp212;
ITable* $tmp214 = ((frost$core$Equatable*) $tmp210)->$class->itable;
while ($tmp214->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp214 = $tmp214->next;
}
$fn216 $tmp215 = $tmp214->methods[0];
frost$core$Bit $tmp217 = $tmp215(((frost$core$Equatable*) $tmp210), ((frost$core$Equatable*) $tmp213));
bool $tmp218 = $tmp217.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp213)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp210)));
if ($tmp218) goto block6; else goto block8;
block6:;
// line 88
org$frostlang$frostc$Compiler** $tmp219 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp220 = *$tmp219;
org$frostlang$frostc$Position* $tmp221 = &param0->position;
org$frostlang$frostc$Position $tmp222 = *$tmp221;
org$frostlang$frostc$IR$Value** $tmp223 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp224 = *$tmp223;
org$frostlang$frostc$FieldDecl** $tmp225 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp226 = *$tmp225;
frost$core$String** $tmp227 = &((org$frostlang$frostc$Symbol*) $tmp226)->name;
frost$core$String* $tmp228 = *$tmp227;
frost$core$String* $tmp229 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s230, $tmp228);
frost$core$String* $tmp231 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp229, &$s232);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp233 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp233);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp234 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp235 = (frost$core$Int64) {3};
org$frostlang$frostc$Type** $tmp236 = &param0->rawType;
org$frostlang$frostc$Type* $tmp237 = *$tmp236;
frost$core$Bit $tmp238 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp234, $tmp235, $tmp237, $tmp238);
org$frostlang$frostc$IR$Value* $tmp239 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp220, $tmp222, $tmp224, $tmp231, ((frost$collections$ListView*) $tmp233), $tmp234);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
org$frostlang$frostc$IR$Value* $tmp240 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
*(&local2) = $tmp239;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
goto block7;
block8:;
// line 1
// line 92
// line 93
org$frostlang$frostc$Compiler** $tmp241 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp242 = *$tmp241;
org$frostlang$frostc$FieldDecl** $tmp243 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp244 = *$tmp243;
frost$core$Weak** $tmp245 = &$tmp244->owner;
frost$core$Weak* $tmp246 = *$tmp245;
frost$core$Object* $tmp247 = frost$core$Weak$get$R$frost$core$Weak$T($tmp246);
frost$core$Bit $tmp248 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit($tmp242, ((org$frostlang$frostc$ClassDecl*) $tmp247));
bool $tmp249 = $tmp248.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp247);
if ($tmp249) goto block9; else goto block11;
block9:;
// line 94
org$frostlang$frostc$Compiler** $tmp250 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp251 = *$tmp250;
org$frostlang$frostc$IR** $tmp252 = &$tmp251->ir;
org$frostlang$frostc$IR* $tmp253 = *$tmp252;
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp254 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp255 = (frost$core$Int64) {10};
org$frostlang$frostc$Position* $tmp256 = &param0->position;
org$frostlang$frostc$Position $tmp257 = *$tmp256;
org$frostlang$frostc$IR$Value** $tmp258 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp259 = *$tmp258;
org$frostlang$frostc$FieldDecl** $tmp260 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp261 = *$tmp260;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp254, $tmp255, $tmp257, $tmp259, $tmp261);
$fn263 $tmp262 = ($fn263) $tmp253->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp264 = $tmp262($tmp253, $tmp254);
*(&local3) = $tmp264;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
goto block10;
block11:;
// line 1
// line 97
org$frostlang$frostc$Compiler** $tmp265 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp266 = *$tmp265;
org$frostlang$frostc$IR** $tmp267 = &$tmp266->ir;
org$frostlang$frostc$IR* $tmp268 = *$tmp267;
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp269 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp270 = (frost$core$Int64) {11};
org$frostlang$frostc$Position* $tmp271 = &param0->position;
org$frostlang$frostc$Position $tmp272 = *$tmp271;
org$frostlang$frostc$IR$Value** $tmp273 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp274 = *$tmp273;
org$frostlang$frostc$FieldDecl** $tmp275 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp276 = *$tmp275;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp269, $tmp270, $tmp272, $tmp274, $tmp276);
$fn278 $tmp277 = ($fn278) $tmp268->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp279 = $tmp277($tmp268, $tmp269);
*(&local4) = $tmp279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
// line 99
org$frostlang$frostc$Compiler** $tmp280 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp281 = *$tmp280;
org$frostlang$frostc$IR** $tmp282 = &$tmp281->ir;
org$frostlang$frostc$IR* $tmp283 = *$tmp282;
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp284 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp285 = (frost$core$Int64) {14};
org$frostlang$frostc$Position* $tmp286 = &param0->position;
org$frostlang$frostc$Position $tmp287 = *$tmp286;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp288 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp289 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp290 = *(&local4);
org$frostlang$frostc$Type** $tmp291 = &param0->rawType;
org$frostlang$frostc$Type* $tmp292 = *$tmp291;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp288, $tmp289, $tmp290, $tmp292);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp284, $tmp285, $tmp287, $tmp288);
$fn294 $tmp293 = ($fn294) $tmp283->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp295 = $tmp293($tmp283, $tmp284);
*(&local3) = $tmp295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
goto block10;
block10:;
// line 101
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp296 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp297 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp298 = *(&local3);
org$frostlang$frostc$Type** $tmp299 = &param0->rawType;
org$frostlang$frostc$Type* $tmp300 = *$tmp299;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp296, $tmp297, $tmp298, $tmp300);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
org$frostlang$frostc$IR$Value* $tmp301 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
*(&local2) = $tmp296;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
goto block7;
block7:;
// line 103
org$frostlang$frostc$Compiler** $tmp302 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp303 = *$tmp302;
frost$core$Bit* $tmp304 = &$tmp303->inFieldCleanup;
frost$core$Bit $tmp305 = *$tmp304;
frost$core$Bit $tmp306 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp305);
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block14; else goto block13;
block14:;
org$frostlang$frostc$FieldDecl** $tmp308 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp309 = *$tmp308;
org$frostlang$frostc$Annotations** $tmp310 = &$tmp309->annotations;
org$frostlang$frostc$Annotations* $tmp311 = *$tmp310;
frost$core$Bit $tmp312 = org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit($tmp311);
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block12; else goto block13;
block12:;
// line 104
org$frostlang$frostc$Compiler** $tmp314 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp315 = *$tmp314;
org$frostlang$frostc$Position* $tmp316 = &param0->position;
org$frostlang$frostc$Position $tmp317 = *$tmp316;
org$frostlang$frostc$IR$Value* $tmp318 = *(&local2);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp319 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp319);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp320 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp321 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp320, $tmp321);
org$frostlang$frostc$IR$Value* $tmp322 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp315, $tmp317, $tmp318, &$s323, ((frost$collections$ListView*) $tmp319), $tmp320);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
org$frostlang$frostc$IR$Value* $tmp324 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
*(&local2) = $tmp322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
goto block13;
block13:;
// line 107
org$frostlang$frostc$Type** $tmp325 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp326 = *$tmp325;
org$frostlang$frostc$IR$Value* $tmp327 = *(&local2);
$fn329 $tmp328 = ($fn329) $tmp327->$class->vtable[2];
org$frostlang$frostc$Type* $tmp330 = $tmp328($tmp327);
ITable* $tmp331 = ((frost$core$Equatable*) $tmp326)->$class->itable;
while ($tmp331->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp331 = $tmp331->next;
}
$fn333 $tmp332 = $tmp331->methods[1];
frost$core$Bit $tmp334 = $tmp332(((frost$core$Equatable*) $tmp326), ((frost$core$Equatable*) $tmp330));
bool $tmp335 = $tmp334.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
if ($tmp335) goto block15; else goto block16;
block15:;
// line 108
org$frostlang$frostc$Compiler** $tmp336 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp337 = *$tmp336;
org$frostlang$frostc$Position* $tmp338 = &param0->position;
org$frostlang$frostc$Position $tmp339 = *$tmp338;
org$frostlang$frostc$IR$Value* $tmp340 = *(&local2);
org$frostlang$frostc$Type** $tmp341 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp342 = *$tmp341;
org$frostlang$frostc$IR$Value* $tmp343 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q($tmp337, $tmp339, $tmp340, $tmp342);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
org$frostlang$frostc$IR$Value* $tmp344 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
*(&local2) = $tmp343;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
goto block16;
block16:;
// line 110
org$frostlang$frostc$IR$Value* $tmp345 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
org$frostlang$frostc$IR$Value* $tmp346 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp345;

}
void org$frostlang$frostc$lvalue$FieldLValue$compileStore$org$frostlang$frostc$IR$Value(org$frostlang$frostc$lvalue$FieldLValue* param0, org$frostlang$frostc$IR$Value* param1) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$collections$Array* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
// line 115
org$frostlang$frostc$IR$Value** $tmp347 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp348 = *$tmp347;
frost$core$Bit $tmp349 = frost$core$Bit$init$builtin_bit($tmp348 == NULL);
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block1; else goto block2;
block1:;
// line 117
return;
block2:;
// line 119
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 120
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 121
org$frostlang$frostc$Compiler** $tmp351 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp352 = *$tmp351;
frost$core$Bit* $tmp353 = &$tmp352->inFieldCleanup;
frost$core$Bit $tmp354 = *$tmp353;
frost$core$Bit $tmp355 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp354);
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block6; else goto block5;
block6:;
org$frostlang$frostc$FieldDecl** $tmp357 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp358 = *$tmp357;
org$frostlang$frostc$Annotations** $tmp359 = &$tmp358->annotations;
org$frostlang$frostc$Annotations* $tmp360 = *$tmp359;
frost$core$Bit $tmp361 = org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit($tmp360);
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block3; else goto block5;
block3:;
// line 122
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp363 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp363);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
frost$collections$Array* $tmp364 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
*(&local2) = $tmp363;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
// line 123
frost$collections$Array* $tmp365 = *(&local2);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp366 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp367 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp368 = &param0->position;
org$frostlang$frostc$Position $tmp369 = *$tmp368;
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp366, $tmp367, $tmp369, param1);
frost$collections$Array$add$frost$collections$Array$T($tmp365, ((frost$core$Object*) $tmp366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
// line 124
org$frostlang$frostc$Compiler** $tmp370 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp371 = *$tmp370;
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp372 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp373 = (frost$core$Int64) {9};
org$frostlang$frostc$Position* $tmp374 = &param0->position;
org$frostlang$frostc$Position $tmp375 = *$tmp374;
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp376 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp377 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp378 = &param0->position;
org$frostlang$frostc$Position $tmp379 = *$tmp378;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp380 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp381 = (frost$core$Int64) {14};
org$frostlang$frostc$Type** $tmp382 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp383 = *$tmp382;
org$frostlang$frostc$Type* $tmp384 = org$frostlang$frostc$Type$WeakOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp383);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp380, $tmp381, $tmp384);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp376, $tmp377, $tmp379, $tmp380);
frost$collections$Array* $tmp385 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp386 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp385);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp372, $tmp373, $tmp375, $tmp376, $tmp386);
org$frostlang$frostc$IR$Value* $tmp387 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q($tmp371, $tmp372);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
org$frostlang$frostc$IR$Value* $tmp388 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
*(&local1) = $tmp387;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
frost$collections$Array* $tmp389 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
*(&local2) = ((frost$collections$Array*) NULL);
goto block4;
block5:;
// line 1
// line 129
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$IR$Value* $tmp390 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
*(&local1) = param1;
goto block4;
block4:;
// line 131
org$frostlang$frostc$Type** $tmp391 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp392 = *$tmp391;
org$frostlang$frostc$Type** $tmp393 = &param0->rawType;
org$frostlang$frostc$Type* $tmp394 = *$tmp393;
ITable* $tmp395 = ((frost$core$Equatable*) $tmp392)->$class->itable;
while ($tmp395->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp395 = $tmp395->next;
}
$fn397 $tmp396 = $tmp395->methods[1];
frost$core$Bit $tmp398 = $tmp396(((frost$core$Equatable*) $tmp392), ((frost$core$Equatable*) $tmp394));
bool $tmp399 = $tmp398.value;
if ($tmp399) goto block7; else goto block9;
block7:;
// line 132
org$frostlang$frostc$Compiler** $tmp400 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp401 = *$tmp400;
org$frostlang$frostc$Position* $tmp402 = &param0->position;
org$frostlang$frostc$Position $tmp403 = *$tmp402;
org$frostlang$frostc$IR$Value* $tmp404 = *(&local1);
org$frostlang$frostc$Type** $tmp405 = &param0->rawType;
org$frostlang$frostc$Type* $tmp406 = *$tmp405;
org$frostlang$frostc$IR$Value* $tmp407 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q($tmp401, $tmp403, $tmp404, $tmp406);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
org$frostlang$frostc$IR$Value* $tmp408 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
*(&local0) = $tmp407;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
// line 133
org$frostlang$frostc$IR$Value* $tmp409 = *(&local0);
frost$core$Bit $tmp410 = frost$core$Bit$init$builtin_bit(false);
bool $tmp411 = $tmp410.value;
if ($tmp411) goto block10; else goto block11;
block10:;
// line 134
org$frostlang$frostc$IR$Value* $tmp412 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp413 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block11:;
goto block8;
block9:;
// line 1
// line 138
org$frostlang$frostc$IR$Value* $tmp414 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
org$frostlang$frostc$IR$Value* $tmp415 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local0) = $tmp414;
goto block8;
block8:;
// line 140
org$frostlang$frostc$FieldDecl** $tmp416 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp417 = *$tmp416;
org$frostlang$frostc$FieldDecl$Kind* $tmp418 = &$tmp417->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp419 = *$tmp418;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp420;
$tmp420 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp420->value = $tmp419;
frost$core$Int64 $tmp421 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp422 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp421);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp423;
$tmp423 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp423->value = $tmp422;
ITable* $tmp424 = ((frost$core$Equatable*) $tmp420)->$class->itable;
while ($tmp424->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp424 = $tmp424->next;
}
$fn426 $tmp425 = $tmp424->methods[0];
frost$core$Bit $tmp427 = $tmp425(((frost$core$Equatable*) $tmp420), ((frost$core$Equatable*) $tmp423));
bool $tmp428 = $tmp427.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp423)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp420)));
if ($tmp428) goto block12; else goto block14;
block12:;
// line 141
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp429 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp429);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
frost$collections$Array* $tmp430 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
*(&local3) = $tmp429;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
// line 142
frost$collections$Array* $tmp431 = *(&local3);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp432 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp433 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp434 = &param0->position;
org$frostlang$frostc$Position $tmp435 = *$tmp434;
org$frostlang$frostc$IR$Value* $tmp436 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp432, $tmp433, $tmp435, $tmp436);
frost$collections$Array$add$frost$collections$Array$T($tmp431, ((frost$core$Object*) $tmp432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
// line 143
org$frostlang$frostc$Compiler** $tmp437 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp438 = *$tmp437;
org$frostlang$frostc$Position* $tmp439 = &param0->position;
org$frostlang$frostc$Position $tmp440 = *$tmp439;
org$frostlang$frostc$IR$Value** $tmp441 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp442 = *$tmp441;
org$frostlang$frostc$FieldDecl** $tmp443 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp444 = *$tmp443;
frost$core$String** $tmp445 = &((org$frostlang$frostc$Symbol*) $tmp444)->name;
frost$core$String* $tmp446 = *$tmp445;
frost$core$String* $tmp447 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s448, $tmp446);
frost$core$String* $tmp449 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp447, &$s450);
frost$collections$Array* $tmp451 = *(&local3);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp452 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp453 = (frost$core$Int64) {3};
org$frostlang$frostc$Type** $tmp454 = &param0->rawType;
org$frostlang$frostc$Type* $tmp455 = *$tmp454;
frost$core$Bit $tmp456 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp452, $tmp453, $tmp455, $tmp456);
org$frostlang$frostc$IR$Value* $tmp457 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q($tmp438, $tmp440, $tmp442, $tmp449, ((frost$collections$ListView*) $tmp451), $tmp452);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
frost$collections$Array* $tmp458 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
*(&local3) = ((frost$collections$Array*) NULL);
goto block13;
block14:;
// line 1
// line 147
org$frostlang$frostc$Compiler** $tmp459 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp460 = *$tmp459;
org$frostlang$frostc$Type** $tmp461 = &param0->rawType;
org$frostlang$frostc$Type* $tmp462 = *$tmp461;
frost$core$Bit $tmp463 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit($tmp460, $tmp462);
bool $tmp464 = $tmp463.value;
if ($tmp464) goto block17; else goto block16;
block17:;
org$frostlang$frostc$FieldDecl** $tmp465 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp466 = *$tmp465;
frost$core$Weak** $tmp467 = &$tmp466->owner;
frost$core$Weak* $tmp468 = *$tmp467;
frost$core$Object* $tmp469 = frost$core$Weak$get$R$frost$core$Weak$T($tmp468);
frost$core$String** $tmp470 = &((org$frostlang$frostc$ClassDecl*) $tmp469)->name;
frost$core$String* $tmp471 = *$tmp470;
ITable* $tmp473 = ((frost$core$Equatable*) $tmp471)->$class->itable;
while ($tmp473->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp473 = $tmp473->next;
}
$fn475 $tmp474 = $tmp473->methods[1];
frost$core$Bit $tmp476 = $tmp474(((frost$core$Equatable*) $tmp471), ((frost$core$Equatable*) &$s472));
bool $tmp477 = $tmp476.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp469);
if ($tmp477) goto block15; else goto block16;
block15:;
// line 148
org$frostlang$frostc$Compiler** $tmp478 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp479 = *$tmp478;
org$frostlang$frostc$IR$Value* $tmp480 = *(&local1);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value($tmp479, $tmp480);
// line 149
$fn482 $tmp481 = ($fn482) param0->$class->vtable[5];
$tmp481(param0);
goto block16;
block16:;
// line 151
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp483 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp484 = (frost$core$Int64) {7};
org$frostlang$frostc$Compiler** $tmp485 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp486 = *$tmp485;
org$frostlang$frostc$IR** $tmp487 = &$tmp486->ir;
org$frostlang$frostc$IR* $tmp488 = *$tmp487;
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp489 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp490 = (frost$core$Int64) {11};
org$frostlang$frostc$Position* $tmp491 = &param0->position;
org$frostlang$frostc$Position $tmp492 = *$tmp491;
org$frostlang$frostc$IR$Value** $tmp493 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp494 = *$tmp493;
org$frostlang$frostc$FieldDecl** $tmp495 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp496 = *$tmp495;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp489, $tmp490, $tmp492, $tmp494, $tmp496);
$fn498 $tmp497 = ($fn498) $tmp488->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp499 = $tmp497($tmp488, $tmp489);
org$frostlang$frostc$Type** $tmp500 = &param0->rawType;
org$frostlang$frostc$Type* $tmp501 = *$tmp500;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp483, $tmp484, $tmp499, $tmp501);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
org$frostlang$frostc$IR$Value* $tmp502 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
*(&local4) = $tmp483;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
// line 153
org$frostlang$frostc$Compiler** $tmp503 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp504 = *$tmp503;
org$frostlang$frostc$IR** $tmp505 = &$tmp504->ir;
org$frostlang$frostc$IR* $tmp506 = *$tmp505;
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp507 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp508 = (frost$core$Int64) {27};
org$frostlang$frostc$Position* $tmp509 = &param0->position;
org$frostlang$frostc$Position $tmp510 = *$tmp509;
org$frostlang$frostc$IR$Value* $tmp511 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp512 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp507, $tmp508, $tmp510, $tmp511, $tmp512);
$fn514 $tmp513 = ($fn514) $tmp506->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp515 = $tmp513($tmp506, $tmp507);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
org$frostlang$frostc$IR$Value* $tmp516 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block13;
block13:;
org$frostlang$frostc$IR$Value* $tmp517 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp518 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$lvalue$FieldLValue$compileUnref(org$frostlang$frostc$lvalue$FieldLValue* param0) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$IR$Statement$ID local1;
org$frostlang$frostc$IR$Statement$ID local2;
// line 158
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 159
org$frostlang$frostc$FieldDecl** $tmp519 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp520 = *$tmp519;
org$frostlang$frostc$FieldDecl$Kind* $tmp521 = &$tmp520->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp522 = *$tmp521;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp523;
$tmp523 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp523->value = $tmp522;
frost$core$Int64 $tmp524 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp525 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp524);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp526;
$tmp526 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp526->value = $tmp525;
ITable* $tmp527 = ((frost$core$Equatable*) $tmp523)->$class->itable;
while ($tmp527->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp527 = $tmp527->next;
}
$fn529 $tmp528 = $tmp527->methods[0];
frost$core$Bit $tmp530 = $tmp528(((frost$core$Equatable*) $tmp523), ((frost$core$Equatable*) $tmp526));
bool $tmp531 = $tmp530.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp526)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp523)));
if ($tmp531) goto block1; else goto block2;
block1:;
// line 160
org$frostlang$frostc$IR$Value* $tmp532 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block2:;
// line 162
// line 163
org$frostlang$frostc$Compiler** $tmp533 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp534 = *$tmp533;
org$frostlang$frostc$FieldDecl** $tmp535 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp536 = *$tmp535;
frost$core$Weak** $tmp537 = &$tmp536->owner;
frost$core$Weak* $tmp538 = *$tmp537;
frost$core$Object* $tmp539 = frost$core$Weak$get$R$frost$core$Weak$T($tmp538);
frost$core$Bit $tmp540 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit($tmp534, ((org$frostlang$frostc$ClassDecl*) $tmp539));
bool $tmp541 = $tmp540.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp539);
if ($tmp541) goto block3; else goto block5;
block3:;
// line 164
org$frostlang$frostc$Compiler** $tmp542 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp543 = *$tmp542;
org$frostlang$frostc$IR** $tmp544 = &$tmp543->ir;
org$frostlang$frostc$IR* $tmp545 = *$tmp544;
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp546 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp547 = (frost$core$Int64) {10};
org$frostlang$frostc$Position* $tmp548 = &param0->position;
org$frostlang$frostc$Position $tmp549 = *$tmp548;
org$frostlang$frostc$IR$Value** $tmp550 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp551 = *$tmp550;
org$frostlang$frostc$FieldDecl** $tmp552 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp553 = *$tmp552;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp546, $tmp547, $tmp549, $tmp551, $tmp553);
$fn555 $tmp554 = ($fn555) $tmp545->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp556 = $tmp554($tmp545, $tmp546);
*(&local1) = $tmp556;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
goto block4;
block5:;
// line 1
// line 167
org$frostlang$frostc$Compiler** $tmp557 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp558 = *$tmp557;
org$frostlang$frostc$IR** $tmp559 = &$tmp558->ir;
org$frostlang$frostc$IR* $tmp560 = *$tmp559;
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp561 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp562 = (frost$core$Int64) {11};
org$frostlang$frostc$Position* $tmp563 = &param0->position;
org$frostlang$frostc$Position $tmp564 = *$tmp563;
org$frostlang$frostc$IR$Value** $tmp565 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp566 = *$tmp565;
org$frostlang$frostc$FieldDecl** $tmp567 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp568 = *$tmp567;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp561, $tmp562, $tmp564, $tmp566, $tmp568);
$fn570 $tmp569 = ($fn570) $tmp560->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp571 = $tmp569($tmp560, $tmp561);
*(&local2) = $tmp571;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
// line 168
org$frostlang$frostc$Compiler** $tmp572 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp573 = *$tmp572;
org$frostlang$frostc$IR** $tmp574 = &$tmp573->ir;
org$frostlang$frostc$IR* $tmp575 = *$tmp574;
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp576 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp577 = (frost$core$Int64) {14};
org$frostlang$frostc$Position* $tmp578 = &param0->position;
org$frostlang$frostc$Position $tmp579 = *$tmp578;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp580 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp581 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp582 = *(&local2);
org$frostlang$frostc$Type** $tmp583 = &param0->rawType;
org$frostlang$frostc$Type* $tmp584 = *$tmp583;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp580, $tmp581, $tmp582, $tmp584);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp576, $tmp577, $tmp579, $tmp580);
$fn586 $tmp585 = ($fn586) $tmp575->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp587 = $tmp585($tmp575, $tmp576);
*(&local1) = $tmp587;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
goto block4;
block4:;
// line 170
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp588 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp589 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp590 = *(&local1);
org$frostlang$frostc$Type** $tmp591 = &param0->rawType;
org$frostlang$frostc$Type* $tmp592 = *$tmp591;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp588, $tmp589, $tmp590, $tmp592);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
org$frostlang$frostc$IR$Value* $tmp593 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
*(&local0) = $tmp588;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
// line 171
org$frostlang$frostc$Compiler** $tmp594 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp595 = *$tmp594;
org$frostlang$frostc$IR$Value* $tmp596 = *(&local0);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value($tmp595, $tmp596);
org$frostlang$frostc$IR$Value* $tmp597 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$lvalue$FieldLValue$cleanup(org$frostlang$frostc$lvalue$FieldLValue* param0) {

// line 15
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp598 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp599 = *$tmp598;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
org$frostlang$frostc$IR$Value** $tmp600 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp601 = *$tmp600;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
org$frostlang$frostc$FieldDecl** $tmp602 = &param0->field;
org$frostlang$frostc$FieldDecl* $tmp603 = *$tmp602;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
org$frostlang$frostc$Type** $tmp604 = &param0->rawType;
org$frostlang$frostc$Type* $tmp605 = *$tmp604;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
org$frostlang$frostc$Type** $tmp606 = &param0->effectiveType;
org$frostlang$frostc$Type* $tmp607 = *$tmp606;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
return;

}

