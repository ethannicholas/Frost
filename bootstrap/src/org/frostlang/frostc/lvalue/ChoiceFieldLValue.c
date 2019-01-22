#include "org/frostlang/frostc/lvalue/ChoiceFieldLValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/lvalue/LValue.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/collections/Array.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlang$frostc$lvalue$ChoiceFieldLValue$_org$frostlang$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class, NULL, { org$frostlang$frostc$lvalue$ChoiceFieldLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlang$frostc$IR$Value} };

static frost$core$String $s1;
org$frostlang$frostc$lvalue$ChoiceFieldLValue$class_type org$frostlang$frostc$lvalue$ChoiceFieldLValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$ChoiceFieldLValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$lvalue$ChoiceFieldLValue$cleanup, org$frostlang$frostc$lvalue$ChoiceFieldLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlang$frostc$IR$Value} };

typedef org$frostlang$frostc$Type* (*$fn26)(org$frostlang$frostc$lvalue$ChoiceFieldLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn47)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn68)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 45, 8958090540298926135, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 23, -6371488786330827919, NULL };

void org$frostlang$frostc$lvalue$ChoiceFieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$ChoiceCase* param4, frost$core$Int64 param5) {

// line 22
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 23
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp5 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlang$frostc$IR$Value** $tmp7 = &param0->target;
*$tmp7 = param3;
// line 24
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ChoiceCase** $tmp8 = &param0->choiceCase;
org$frostlang$frostc$ChoiceCase* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
org$frostlang$frostc$ChoiceCase** $tmp10 = &param0->choiceCase;
*$tmp10 = param4;
// line 25
frost$core$Int64* $tmp11 = &param0->index;
*$tmp11 = param5;
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$ChoiceFieldLValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0) {

// line 30
org$frostlang$frostc$ChoiceCase** $tmp12 = &param0->choiceCase;
org$frostlang$frostc$ChoiceCase* $tmp13 = *$tmp12;
frost$collections$Array** $tmp14 = &$tmp13->fields;
frost$collections$Array* $tmp15 = *$tmp14;
frost$core$Int64* $tmp16 = &param0->index;
frost$core$Int64 $tmp17 = *$tmp16;
frost$core$Object* $tmp18 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp15, $tmp17);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp18)));
frost$core$Frost$unref$frost$core$Object$Q($tmp18);
return ((org$frostlang$frostc$Type*) $tmp18);

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0) {

// line 35
frost$core$Bit $tmp19 = frost$core$Bit$init$builtin_bit(false);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp21 = (frost$core$Int64) {35};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s22, $tmp21);
abort(); // unreachable
block1:;
// line 36
goto block3;
block3:;
goto block3;
block4:;
goto block5;
block5:;

}
void org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlang$frostc$IR$Value(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0, org$frostlang$frostc$IR$Value* param1) {

org$frostlang$frostc$IR$Statement$ID local0;
// line 41
org$frostlang$frostc$Compiler** $tmp23 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp24 = *$tmp23;
$fn26 $tmp25 = ($fn26) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp27 = $tmp25(param0);
frost$core$Bit $tmp28 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit($tmp24, $tmp27);
bool $tmp29 = $tmp28.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
if ($tmp29) goto block1; else goto block2;
block1:;
// line 42
org$frostlang$frostc$Compiler** $tmp30 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp31 = *$tmp30;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value($tmp31, param1);
goto block2;
block2:;
// line 44
org$frostlang$frostc$Compiler** $tmp32 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp33 = *$tmp32;
org$frostlang$frostc$IR** $tmp34 = &$tmp33->ir;
org$frostlang$frostc$IR* $tmp35 = *$tmp34;
org$frostlang$frostc$IR$Statement* $tmp36 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp37 = (frost$core$Int64) {4};
org$frostlang$frostc$Position* $tmp38 = &param0->position;
org$frostlang$frostc$Position $tmp39 = *$tmp38;
org$frostlang$frostc$IR$Value** $tmp40 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp41 = *$tmp40;
org$frostlang$frostc$ChoiceCase** $tmp42 = &param0->choiceCase;
org$frostlang$frostc$ChoiceCase* $tmp43 = *$tmp42;
frost$core$Int64* $tmp44 = &param0->index;
frost$core$Int64 $tmp45 = *$tmp44;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64($tmp36, $tmp37, $tmp39, $tmp41, $tmp43, $tmp45);
$fn47 $tmp46 = ($fn47) $tmp35->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp48 = $tmp46($tmp35, $tmp36);
*(&local0) = $tmp48;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
// line 46
org$frostlang$frostc$Compiler** $tmp49 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp50 = *$tmp49;
org$frostlang$frostc$IR** $tmp51 = &$tmp50->ir;
org$frostlang$frostc$IR* $tmp52 = *$tmp51;
org$frostlang$frostc$IR$Statement* $tmp53 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp54 = (frost$core$Int64) {27};
org$frostlang$frostc$Position* $tmp55 = &param0->position;
org$frostlang$frostc$Position $tmp56 = *$tmp55;
org$frostlang$frostc$IR$Value* $tmp57 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp58 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp59 = *(&local0);
org$frostlang$frostc$ChoiceCase** $tmp60 = &param0->choiceCase;
org$frostlang$frostc$ChoiceCase* $tmp61 = *$tmp60;
frost$collections$Array** $tmp62 = &$tmp61->fields;
frost$collections$Array* $tmp63 = *$tmp62;
frost$core$Int64* $tmp64 = &param0->index;
frost$core$Int64 $tmp65 = *$tmp64;
frost$core$Object* $tmp66 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp63, $tmp65);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp57, $tmp58, $tmp59, ((org$frostlang$frostc$Type*) $tmp66));
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp53, $tmp54, $tmp56, param1, $tmp57);
$fn68 $tmp67 = ($fn68) $tmp52->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp69 = $tmp67($tmp52, $tmp53);
frost$core$Frost$unref$frost$core$Object$Q($tmp66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
return;

}
void org$frostlang$frostc$lvalue$ChoiceFieldLValue$cleanup(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp70 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp71 = *$tmp70;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
org$frostlang$frostc$IR$Value** $tmp72 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp73 = *$tmp72;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
org$frostlang$frostc$ChoiceCase** $tmp74 = &param0->choiceCase;
org$frostlang$frostc$ChoiceCase* $tmp75 = *$tmp74;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
return;

}

