#include "org/frostlang/frostc/lvalue/VariableLValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/lvalue/LValue.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Variable.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/IR.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR/Statement.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlang$frostc$lvalue$VariableLValue$_org$frostlang$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class, NULL, { org$frostlang$frostc$lvalue$VariableLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$VariableLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$VariableLValue$compileStore$org$frostlang$frostc$IR$Value} };

static frost$core$String $s1;
org$frostlang$frostc$lvalue$VariableLValue$class_type org$frostlang$frostc$lvalue$VariableLValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$VariableLValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$lvalue$VariableLValue$cleanup, org$frostlang$frostc$lvalue$VariableLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$VariableLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$VariableLValue$compileStore$org$frostlang$frostc$IR$Value} };

typedef org$frostlang$frostc$Type* (*$fn49)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn52)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn69)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$IR$Value* (*$fn78)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$Type* (*$fn93)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn96)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x4c\x56\x61\x6c\x75\x65", 42, 1688759092515817554, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x79\x69\x6e\x67\x20\x74\x6f\x20\x73\x74\x6f\x72\x65\x20\x69\x6e\x74\x6f\x20\x6e\x6f\x6e\x2d\x6c\x6f\x63\x61\x6c\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20", 40, -4389980992813749051, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x61\x74\x20", 4, 138031278, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x56\x61\x72\x69\x61\x62\x6c\x65\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 20, -554897390060984052, NULL };

void org$frostlang$frostc$lvalue$VariableLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Variable(org$frostlang$frostc$lvalue$VariableLValue* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$Variable* param3) {

frost$core$Int64 local0;
// line 17
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 18
org$frostlang$frostc$Variable$Storage** $tmp5 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp6 = *$tmp5;
frost$core$Int64* $tmp7 = &$tmp6->$rawValue;
frost$core$Int64 $tmp8 = *$tmp7;
frost$core$Int64 $tmp9 = (frost$core$Int64) {0};
frost$core$Bit $tmp10 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp8, $tmp9);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp12 = (frost$core$Int64*) ($tmp6->$data + 0);
frost$core$Int64 $tmp13 = *$tmp12;
*(&local0) = $tmp13;
// line 20
frost$core$Int64 $tmp14 = *(&local0);
frost$core$Int64* $tmp15 = &param0->slot;
*$tmp15 = $tmp14;
goto block1;
block3:;
// line 23
frost$core$Int64 $tmp16 = (frost$core$Int64) {23};
frost$core$String* $tmp17 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s18, ((frost$core$Object*) param3));
frost$core$String* $tmp19 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp17, &$s20);
org$frostlang$frostc$Position$wrapper* $tmp21;
$tmp21 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp21->value = param2;
frost$core$String* $tmp22 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp19, ((frost$core$Object*) $tmp21));
frost$core$String* $tmp23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp22, &$s24);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s25, $tmp16, $tmp23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
abort(); // unreachable
block1:;
// line 26
org$frostlang$frostc$Position* $tmp26 = &param0->position;
*$tmp26 = param2;
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$VariableLValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$VariableLValue* param0) {

// line 31
org$frostlang$frostc$Compiler** $tmp27 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp28 = *$tmp27;
org$frostlang$frostc$IR** $tmp29 = &$tmp28->ir;
org$frostlang$frostc$IR* $tmp30 = *$tmp29;
frost$collections$Array** $tmp31 = &$tmp30->locals;
frost$collections$Array* $tmp32 = *$tmp31;
frost$core$Int64* $tmp33 = &param0->slot;
frost$core$Int64 $tmp34 = *$tmp33;
frost$core$Object* $tmp35 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp32, $tmp34);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp35)));
frost$core$Frost$unref$frost$core$Object$Q($tmp35);
return ((org$frostlang$frostc$Type*) $tmp35);

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$VariableLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$lvalue$VariableLValue* param0) {

org$frostlang$frostc$IR$Statement$ID local0;
// line 36
org$frostlang$frostc$Compiler** $tmp36 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp37 = *$tmp36;
org$frostlang$frostc$IR** $tmp38 = &$tmp37->ir;
org$frostlang$frostc$IR* $tmp39 = *$tmp38;
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp40 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp41 = (frost$core$Int64) {14};
org$frostlang$frostc$Position* $tmp42 = &param0->position;
org$frostlang$frostc$Position $tmp43 = *$tmp42;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp44 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp45 = (frost$core$Int64) {2};
frost$core$Int64* $tmp46 = &param0->slot;
frost$core$Int64 $tmp47 = *$tmp46;
$fn49 $tmp48 = ($fn49) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp50 = $tmp48(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp44, $tmp45, $tmp47, $tmp50);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp40, $tmp41, $tmp43, $tmp44);
$fn52 $tmp51 = ($fn52) $tmp39->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp53 = $tmp51($tmp39, $tmp40);
*(&local0) = $tmp53;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
// line 37
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp54 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp55 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp56 = *(&local0);
org$frostlang$frostc$Compiler** $tmp57 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp58 = *$tmp57;
org$frostlang$frostc$IR** $tmp59 = &$tmp58->ir;
org$frostlang$frostc$IR* $tmp60 = *$tmp59;
frost$collections$Array** $tmp61 = &$tmp60->locals;
frost$collections$Array* $tmp62 = *$tmp61;
frost$core$Int64* $tmp63 = &param0->slot;
frost$core$Int64 $tmp64 = *$tmp63;
frost$core$Object* $tmp65 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp62, $tmp64);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp54, $tmp55, $tmp56, ((org$frostlang$frostc$Type*) $tmp65));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q($tmp65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
return $tmp54;

}
void org$frostlang$frostc$lvalue$VariableLValue$compileStore$org$frostlang$frostc$IR$Value(org$frostlang$frostc$lvalue$VariableLValue* param0, org$frostlang$frostc$IR$Value* param1) {

// line 42
org$frostlang$frostc$Compiler** $tmp66 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp67 = *$tmp66;
$fn69 $tmp68 = ($fn69) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp70 = $tmp68(param0);
frost$core$Bit $tmp71 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit($tmp67, $tmp70);
bool $tmp72 = $tmp71.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
if ($tmp72) goto block1; else goto block2;
block1:;
// line 43
org$frostlang$frostc$Compiler** $tmp73 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp74 = *$tmp73;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value($tmp74, param1);
// line 44
org$frostlang$frostc$Compiler** $tmp75 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp76 = *$tmp75;
$fn78 $tmp77 = ($fn78) param0->$class->vtable[3];
org$frostlang$frostc$IR$Value* $tmp79 = $tmp77(param0);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value($tmp76, $tmp79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
goto block2;
block2:;
// line 46
org$frostlang$frostc$Compiler** $tmp80 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp81 = *$tmp80;
org$frostlang$frostc$IR** $tmp82 = &$tmp81->ir;
org$frostlang$frostc$IR* $tmp83 = *$tmp82;
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp84 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp85 = (frost$core$Int64) {27};
org$frostlang$frostc$Position* $tmp86 = &param0->position;
org$frostlang$frostc$Position $tmp87 = *$tmp86;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp88 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp89 = (frost$core$Int64) {2};
frost$core$Int64* $tmp90 = &param0->slot;
frost$core$Int64 $tmp91 = *$tmp90;
$fn93 $tmp92 = ($fn93) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp94 = $tmp92(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp88, $tmp89, $tmp91, $tmp94);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp84, $tmp85, $tmp87, param1, $tmp88);
$fn96 $tmp95 = ($fn96) $tmp83->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp97 = $tmp95($tmp83, $tmp84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
return;

}
void org$frostlang$frostc$lvalue$VariableLValue$cleanup(org$frostlang$frostc$lvalue$VariableLValue* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp98 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp99 = *$tmp98;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
return;

}

