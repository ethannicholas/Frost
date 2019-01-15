#include "org/frostlanguage/frostc/lvalue/ChoiceFieldLValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/lvalue/LValue.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "org/frostlanguage/frostc/Position.h"
#include "org/frostlanguage/frostc/IR/Value.h"
#include "org/frostlanguage/frostc/ChoiceCase.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "org/frostlanguage/frostc/Type.h"
#include "frost/collections/Array.h"
#include "frost/core/Bit.h"
#include "org/frostlanguage/frostc/IR/Statement/ID.h"
#include "org/frostlanguage/frostc/IR.h"
#include "org/frostlanguage/frostc/IR/Statement.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$_org$frostlanguage$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlanguage$frostc$lvalue$LValue$class, NULL, { org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$type$R$org$frostlanguage$frostc$Type, org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$compileLoad$R$org$frostlanguage$frostc$IR$Value$Q, org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlanguage$frostc$IR$Value} };

static frost$core$String $s1;
org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$class_type org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$_org$frostlanguage$frostc$lvalue$LValue, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$cleanup, org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$type$R$org$frostlanguage$frostc$Type, org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$compileLoad$R$org$frostlanguage$frostc$IR$Value$Q, org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlanguage$frostc$IR$Value} };

typedef org$frostlanguage$frostc$Type* (*$fn31)(org$frostlanguage$frostc$lvalue$ChoiceFieldLValue*);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn52)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn73)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 49, 8033210975850119753, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 23, -6371488786330827919, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 23, -6371488786330827919, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x4c\x6f\x61\x64\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 130, -20748192032130601, NULL };

void org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$org$frostlanguage$frostc$ChoiceCase$frost$core$Int64(org$frostlanguage$frostc$lvalue$ChoiceFieldLValue* param0, org$frostlanguage$frostc$Compiler* param1, org$frostlanguage$frostc$Position param2, org$frostlanguage$frostc$IR$Value* param3, org$frostlanguage$frostc$ChoiceCase* param4, frost$core$Int64 param5) {

// line 22
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlanguage$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlanguage$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 23
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlanguage$frostc$IR$Value** $tmp5 = &param0->target;
org$frostlanguage$frostc$IR$Value* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlanguage$frostc$IR$Value** $tmp7 = &param0->target;
*$tmp7 = param3;
// line 24
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlanguage$frostc$ChoiceCase** $tmp8 = &param0->choiceCase;
org$frostlanguage$frostc$ChoiceCase* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
org$frostlanguage$frostc$ChoiceCase** $tmp10 = &param0->choiceCase;
*$tmp10 = param4;
// line 25
frost$core$Int64* $tmp11 = &param0->index;
*$tmp11 = param5;
return;

}
org$frostlanguage$frostc$Type* org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$type$R$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$lvalue$ChoiceFieldLValue* param0) {

// line 30
org$frostlanguage$frostc$ChoiceCase** $tmp12 = &param0->choiceCase;
org$frostlanguage$frostc$ChoiceCase* $tmp13 = *$tmp12;
frost$collections$Array** $tmp14 = &$tmp13->fields;
frost$collections$Array* $tmp15 = *$tmp14;
frost$core$Int64* $tmp16 = &param0->index;
frost$core$Int64 $tmp17 = *$tmp16;
frost$core$Object* $tmp18 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp15, $tmp17);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Type*) $tmp18)));
frost$core$Frost$unref$frost$core$Object$Q($tmp18);
// unreffing REF($8:frost.collections.Array.T)
return ((org$frostlanguage$frostc$Type*) $tmp18);

}
org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$compileLoad$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$lvalue$ChoiceFieldLValue* param0) {

// line 35
frost$core$Bit $tmp19 = frost$core$Bit$init$builtin_bit(false);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp21 = (frost$core$Int64) {35};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s22, $tmp21);
abort(); // unreachable
block1:;
frost$core$Bit $tmp23 = frost$core$Bit$init$builtin_bit(false);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp25 = (frost$core$Int64) {34};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s26, $tmp25, &$s27);
abort(); // unreachable
block3:;
abort(); // unreachable

}
void org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlanguage$frostc$IR$Value(org$frostlanguage$frostc$lvalue$ChoiceFieldLValue* param0, org$frostlanguage$frostc$IR$Value* param1) {

org$frostlanguage$frostc$IR$Statement$ID local0;
// line 40
org$frostlanguage$frostc$Compiler** $tmp28 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp29 = *$tmp28;
$fn31 $tmp30 = ($fn31) param0->$class->vtable[2];
org$frostlanguage$frostc$Type* $tmp32 = $tmp30(param0);
frost$core$Bit $tmp33 = org$frostlanguage$frostc$Compiler$isRefCounted$org$frostlanguage$frostc$Type$R$frost$core$Bit($tmp29, $tmp32);
bool $tmp34 = $tmp33.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
// unreffing REF($4:org.frostlanguage.frostc.Type)
if ($tmp34) goto block1; else goto block2;
block1:;
// line 41
org$frostlanguage$frostc$Compiler** $tmp35 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp36 = *$tmp35;
org$frostlanguage$frostc$Compiler$compileRef$org$frostlanguage$frostc$IR$Value($tmp36, param1);
goto block2;
block2:;
// line 43
org$frostlanguage$frostc$Compiler** $tmp37 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp38 = *$tmp37;
org$frostlanguage$frostc$IR** $tmp39 = &$tmp38->ir;
org$frostlanguage$frostc$IR* $tmp40 = *$tmp39;
org$frostlanguage$frostc$IR$Statement* $tmp41 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp42 = (frost$core$Int64) {4};
org$frostlanguage$frostc$Position* $tmp43 = &param0->position;
org$frostlanguage$frostc$Position $tmp44 = *$tmp43;
org$frostlanguage$frostc$IR$Value** $tmp45 = &param0->target;
org$frostlanguage$frostc$IR$Value* $tmp46 = *$tmp45;
org$frostlanguage$frostc$ChoiceCase** $tmp47 = &param0->choiceCase;
org$frostlanguage$frostc$ChoiceCase* $tmp48 = *$tmp47;
frost$core$Int64* $tmp49 = &param0->index;
frost$core$Int64 $tmp50 = *$tmp49;
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$org$frostlanguage$frostc$ChoiceCase$frost$core$Int64($tmp41, $tmp42, $tmp44, $tmp46, $tmp48, $tmp50);
$fn52 $tmp51 = ($fn52) $tmp40->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp53 = $tmp51($tmp40, $tmp41);
*(&local0) = $tmp53;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
// unreffing REF($21:org.frostlanguage.frostc.IR.Statement)
// line 45
org$frostlanguage$frostc$Compiler** $tmp54 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp55 = *$tmp54;
org$frostlanguage$frostc$IR** $tmp56 = &$tmp55->ir;
org$frostlanguage$frostc$IR* $tmp57 = *$tmp56;
org$frostlanguage$frostc$IR$Statement* $tmp58 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp59 = (frost$core$Int64) {26};
org$frostlanguage$frostc$Position* $tmp60 = &param0->position;
org$frostlanguage$frostc$Position $tmp61 = *$tmp60;
org$frostlanguage$frostc$IR$Value* $tmp62 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp63 = (frost$core$Int64) {7};
org$frostlanguage$frostc$IR$Statement$ID $tmp64 = *(&local0);
org$frostlanguage$frostc$ChoiceCase** $tmp65 = &param0->choiceCase;
org$frostlanguage$frostc$ChoiceCase* $tmp66 = *$tmp65;
frost$collections$Array** $tmp67 = &$tmp66->fields;
frost$collections$Array* $tmp68 = *$tmp67;
frost$core$Int64* $tmp69 = &param0->index;
frost$core$Int64 $tmp70 = *$tmp69;
frost$core$Object* $tmp71 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp68, $tmp70);
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$IR$Statement$ID$org$frostlanguage$frostc$Type($tmp62, $tmp63, $tmp64, ((org$frostlanguage$frostc$Type*) $tmp71));
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$org$frostlanguage$frostc$IR$Value($tmp58, $tmp59, $tmp61, param1, $tmp62);
$fn73 $tmp72 = ($fn73) $tmp57->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp74 = $tmp72($tmp57, $tmp58);
frost$core$Frost$unref$frost$core$Object$Q($tmp71);
// unreffing REF($57:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// unreffing REF($47:org.frostlanguage.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
// unreffing REF($43:org.frostlanguage.frostc.IR.Statement)
return;

}
void org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$cleanup(org$frostlanguage$frostc$lvalue$ChoiceFieldLValue* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlanguage$frostc$Compiler** $tmp75 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp76 = *$tmp75;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
org$frostlanguage$frostc$IR$Value** $tmp77 = &param0->target;
org$frostlanguage$frostc$IR$Value* $tmp78 = *$tmp77;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
org$frostlanguage$frostc$ChoiceCase** $tmp79 = &param0->choiceCase;
org$frostlanguage$frostc$ChoiceCase* $tmp80 = *$tmp79;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
return;

}

