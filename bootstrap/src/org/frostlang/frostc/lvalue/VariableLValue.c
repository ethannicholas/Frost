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
org$frostlang$frostc$lvalue$VariableLValue$class_type org$frostlang$frostc$lvalue$VariableLValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$VariableLValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$lvalue$VariableLValue$cleanup, org$frostlang$frostc$lvalue$VariableLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$VariableLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$VariableLValue$compileStore$org$frostlang$frostc$IR$Value} };

typedef org$frostlang$frostc$Type* (*$fn51)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn54)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn71)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$IR$Value* (*$fn80)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$Type* (*$fn100)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn103)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x4c\x56\x61\x6c\x75\x65", 42, 1688759092515817554, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x79\x69\x6e\x67\x20\x74\x6f\x20\x73\x74\x6f\x72\x65\x20\x69\x6e\x74\x6f\x20\x6e\x6f\x6e\x2d\x6c\x6f\x63\x61\x6c\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20", 40, -4389980992813749051, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x61\x74\x20", 4, 138031278, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x56\x61\x72\x69\x61\x62\x6c\x65\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 20, -554897390060984052, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x56\x61\x72\x69\x61\x62\x6c\x65\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 20, -554897390060984052, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };

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
frost$core$Bit $tmp16 = frost$core$Bit$init$builtin_bit(false);
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp18 = (frost$core$Int64) {23};
frost$core$String* $tmp19 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s20, ((frost$core$Object*) param3));
frost$core$String* $tmp21 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp19, &$s22);
org$frostlang$frostc$Position$wrapper* $tmp23;
$tmp23 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp23->value = param2;
frost$core$String* $tmp24 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp21, ((frost$core$Object*) $tmp23));
frost$core$String* $tmp25 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp24, &$s26);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s27, $tmp18, $tmp25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
// unreffing REF($36:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// unreffing REF($35:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
// unreffing REF($34:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// unreffing REF($33:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
// unreffing REF($32:frost.core.String)
abort(); // unreachable
block4:;
goto block1;
block1:;
// line 26
org$frostlang$frostc$Position* $tmp28 = &param0->position;
*$tmp28 = param2;
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$VariableLValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$VariableLValue* param0) {

// line 31
org$frostlang$frostc$Compiler** $tmp29 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp30 = *$tmp29;
org$frostlang$frostc$IR** $tmp31 = &$tmp30->ir;
org$frostlang$frostc$IR* $tmp32 = *$tmp31;
frost$collections$Array** $tmp33 = &$tmp32->locals;
frost$collections$Array* $tmp34 = *$tmp33;
frost$core$Int64* $tmp35 = &param0->slot;
frost$core$Int64 $tmp36 = *$tmp35;
frost$core$Object* $tmp37 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp34, $tmp36);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp37)));
frost$core$Frost$unref$frost$core$Object$Q($tmp37);
// unreffing REF($10:frost.collections.Array.T)
return ((org$frostlang$frostc$Type*) $tmp37);

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$VariableLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$lvalue$VariableLValue* param0) {

org$frostlang$frostc$IR$Statement$ID local0;
// line 36
org$frostlang$frostc$Compiler** $tmp38 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp39 = *$tmp38;
org$frostlang$frostc$IR** $tmp40 = &$tmp39->ir;
org$frostlang$frostc$IR* $tmp41 = *$tmp40;
org$frostlang$frostc$IR$Statement* $tmp42 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp43 = (frost$core$Int64) {13};
org$frostlang$frostc$Position* $tmp44 = &param0->position;
org$frostlang$frostc$Position $tmp45 = *$tmp44;
org$frostlang$frostc$IR$Value* $tmp46 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp47 = (frost$core$Int64) {2};
frost$core$Int64* $tmp48 = &param0->slot;
frost$core$Int64 $tmp49 = *$tmp48;
$fn51 $tmp50 = ($fn51) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp52 = $tmp50(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp46, $tmp47, $tmp49, $tmp52);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp42, $tmp43, $tmp45, $tmp46);
$fn54 $tmp53 = ($fn54) $tmp41->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp55 = $tmp53($tmp41, $tmp42);
*(&local0) = $tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
// unreffing REF($14:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// unreffing REF($9:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
// unreffing REF($5:org.frostlang.frostc.IR.Statement)
// line 37
org$frostlang$frostc$IR$Value* $tmp56 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp57 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp58 = *(&local0);
org$frostlang$frostc$Compiler** $tmp59 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp60 = *$tmp59;
org$frostlang$frostc$IR** $tmp61 = &$tmp60->ir;
org$frostlang$frostc$IR* $tmp62 = *$tmp61;
frost$collections$Array** $tmp63 = &$tmp62->locals;
frost$collections$Array* $tmp64 = *$tmp63;
frost$core$Int64* $tmp65 = &param0->slot;
frost$core$Int64 $tmp66 = *$tmp65;
frost$core$Object* $tmp67 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp64, $tmp66);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp56, $tmp57, $tmp58, ((org$frostlang$frostc$Type*) $tmp67));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$core$Frost$unref$frost$core$Object$Q($tmp67);
// unreffing REF($42:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
// unreffing REF($30:org.frostlang.frostc.IR.Value)
return $tmp56;

}
void org$frostlang$frostc$lvalue$VariableLValue$compileStore$org$frostlang$frostc$IR$Value(org$frostlang$frostc$lvalue$VariableLValue* param0, org$frostlang$frostc$IR$Value* param1) {

// line 42
org$frostlang$frostc$Compiler** $tmp68 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp69 = *$tmp68;
$fn71 $tmp70 = ($fn71) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp72 = $tmp70(param0);
frost$core$Bit $tmp73 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit($tmp69, $tmp72);
bool $tmp74 = $tmp73.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// unreffing REF($4:org.frostlang.frostc.Type)
if ($tmp74) goto block1; else goto block2;
block1:;
// line 43
org$frostlang$frostc$Compiler** $tmp75 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp76 = *$tmp75;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value($tmp76, param1);
// line 44
org$frostlang$frostc$Compiler** $tmp77 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp78 = *$tmp77;
$fn80 $tmp79 = ($fn80) param0->$class->vtable[3];
org$frostlang$frostc$IR$Value* $tmp81 = $tmp79(param0);
frost$core$Bit $tmp82 = frost$core$Bit$init$builtin_bit($tmp81 != NULL);
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp84 = (frost$core$Int64) {44};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s85, $tmp84, &$s86);
abort(); // unreachable
block3:;
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value($tmp78, $tmp81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// unreffing REF($19:org.frostlang.frostc.IR.Value?)
goto block2;
block2:;
// line 46
org$frostlang$frostc$Compiler** $tmp87 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp88 = *$tmp87;
org$frostlang$frostc$IR** $tmp89 = &$tmp88->ir;
org$frostlang$frostc$IR* $tmp90 = *$tmp89;
org$frostlang$frostc$IR$Statement* $tmp91 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp92 = (frost$core$Int64) {26};
org$frostlang$frostc$Position* $tmp93 = &param0->position;
org$frostlang$frostc$Position $tmp94 = *$tmp93;
org$frostlang$frostc$IR$Value* $tmp95 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp96 = (frost$core$Int64) {2};
frost$core$Int64* $tmp97 = &param0->slot;
frost$core$Int64 $tmp98 = *$tmp97;
$fn100 $tmp99 = ($fn100) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp101 = $tmp99(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp95, $tmp96, $tmp98, $tmp101);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp91, $tmp92, $tmp94, param1, $tmp95);
$fn103 $tmp102 = ($fn103) $tmp90->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp104 = $tmp102($tmp90, $tmp91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// unreffing REF($47:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
// unreffing REF($42:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// unreffing REF($38:org.frostlang.frostc.IR.Statement)
return;

}
void org$frostlang$frostc$lvalue$VariableLValue$cleanup(org$frostlang$frostc$lvalue$VariableLValue* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp105 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp106 = *$tmp105;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
return;

}

