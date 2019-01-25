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
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlang$frostc$lvalue$ChoiceFieldLValue$_org$frostlang$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class, NULL, { org$frostlang$frostc$lvalue$ChoiceFieldLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlang$frostc$IR$Value} };

static frost$core$String $s1;
org$frostlang$frostc$lvalue$ChoiceFieldLValue$class_type org$frostlang$frostc$lvalue$ChoiceFieldLValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$ChoiceFieldLValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$lvalue$ChoiceFieldLValue$cleanup, org$frostlang$frostc$lvalue$ChoiceFieldLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlang$frostc$IR$Value} };

typedef org$frostlang$frostc$Type* (*$fn24)(org$frostlang$frostc$lvalue$ChoiceFieldLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn45)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn66)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 45, 8958090540298926135, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 23, -6371488786330827919, NULL };

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
frost$core$Int64 $tmp19 = (frost$core$Int64) {35};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s20, $tmp19);
abort(); // unreachable

}
void org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlang$frostc$IR$Value(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0, org$frostlang$frostc$IR$Value* param1) {

org$frostlang$frostc$IR$Statement$ID local0;
// line 40
org$frostlang$frostc$Compiler** $tmp21 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp22 = *$tmp21;
$fn24 $tmp23 = ($fn24) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp25 = $tmp23(param0);
frost$core$Bit $tmp26 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit($tmp22, $tmp25);
bool $tmp27 = $tmp26.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
if ($tmp27) goto block1; else goto block2;
block1:;
// line 41
org$frostlang$frostc$Compiler** $tmp28 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp29 = *$tmp28;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value($tmp29, param1);
goto block2;
block2:;
// line 43
org$frostlang$frostc$Compiler** $tmp30 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp31 = *$tmp30;
org$frostlang$frostc$IR** $tmp32 = &$tmp31->ir;
org$frostlang$frostc$IR* $tmp33 = *$tmp32;
org$frostlang$frostc$IR$Statement* $tmp34 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp35 = (frost$core$Int64) {4};
org$frostlang$frostc$Position* $tmp36 = &param0->position;
org$frostlang$frostc$Position $tmp37 = *$tmp36;
org$frostlang$frostc$IR$Value** $tmp38 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp39 = *$tmp38;
org$frostlang$frostc$ChoiceCase** $tmp40 = &param0->choiceCase;
org$frostlang$frostc$ChoiceCase* $tmp41 = *$tmp40;
frost$core$Int64* $tmp42 = &param0->index;
frost$core$Int64 $tmp43 = *$tmp42;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64($tmp34, $tmp35, $tmp37, $tmp39, $tmp41, $tmp43);
$fn45 $tmp44 = ($fn45) $tmp33->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp46 = $tmp44($tmp33, $tmp34);
*(&local0) = $tmp46;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// line 45
org$frostlang$frostc$Compiler** $tmp47 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp48 = *$tmp47;
org$frostlang$frostc$IR** $tmp49 = &$tmp48->ir;
org$frostlang$frostc$IR* $tmp50 = *$tmp49;
org$frostlang$frostc$IR$Statement* $tmp51 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp52 = (frost$core$Int64) {27};
org$frostlang$frostc$Position* $tmp53 = &param0->position;
org$frostlang$frostc$Position $tmp54 = *$tmp53;
org$frostlang$frostc$IR$Value* $tmp55 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp56 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp57 = *(&local0);
org$frostlang$frostc$ChoiceCase** $tmp58 = &param0->choiceCase;
org$frostlang$frostc$ChoiceCase* $tmp59 = *$tmp58;
frost$collections$Array** $tmp60 = &$tmp59->fields;
frost$collections$Array* $tmp61 = *$tmp60;
frost$core$Int64* $tmp62 = &param0->index;
frost$core$Int64 $tmp63 = *$tmp62;
frost$core$Object* $tmp64 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp61, $tmp63);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp55, $tmp56, $tmp57, ((org$frostlang$frostc$Type*) $tmp64));
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp51, $tmp52, $tmp54, param1, $tmp55);
$fn66 $tmp65 = ($fn66) $tmp50->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp67 = $tmp65($tmp50, $tmp51);
frost$core$Frost$unref$frost$core$Object$Q($tmp64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
return;

}
void org$frostlang$frostc$lvalue$ChoiceFieldLValue$cleanup(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp68 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp69 = *$tmp68;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
org$frostlang$frostc$IR$Value** $tmp70 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp71 = *$tmp70;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
org$frostlang$frostc$ChoiceCase** $tmp72 = &param0->choiceCase;
org$frostlang$frostc$ChoiceCase* $tmp73 = *$tmp72;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
return;

}

