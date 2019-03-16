#include "org/frostlang/frostc/lvalue/VariableLValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/lvalue/LValue.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Variable.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/IR.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR/Statement.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlang$frostc$lvalue$VariableLValue$_org$frostlang$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class, NULL, { org$frostlang$frostc$lvalue$VariableLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$VariableLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$VariableLValue$compileStore$org$frostlang$frostc$IR$Value} };

static frost$core$String $s1;
org$frostlang$frostc$lvalue$VariableLValue$class_type org$frostlang$frostc$lvalue$VariableLValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$VariableLValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$lvalue$VariableLValue$cleanup, org$frostlang$frostc$lvalue$VariableLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$VariableLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$VariableLValue$compileStore$org$frostlang$frostc$IR$Value} };

typedef frost$core$String* (*$fn22)(frost$core$Object*);
typedef frost$core$String* (*$fn30)(frost$core$Object*);
typedef frost$core$Int (*$fn52)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn80)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn83)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int (*$fn104)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn122)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$IR$Value* (*$fn141)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$Type* (*$fn156)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn159)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x4c\x56\x61\x6c\x75\x65", 42, -7965962857027405548, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x79\x69\x6e\x67\x20\x74\x6f\x20\x73\x74\x6f\x72\x65\x20\x69\x6e\x74\x6f\x20\x6e\x6f\x6e\x2d\x6c\x6f\x63\x61\x6c\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20", 40, 1486801200006233533, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x61\x74\x20", 4, 299896688342426654, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x61\x72\x69\x61\x62\x6c\x65\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 20, -3684104756208286480, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };

void org$frostlang$frostc$lvalue$VariableLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Variable(org$frostlang$frostc$lvalue$VariableLValue* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$Variable* param3) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:17
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:18
org$frostlang$frostc$Variable$Storage** $tmp5 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp6 = *$tmp5;
frost$core$Int* $tmp7 = &$tmp6->$rawValue;
frost$core$Int $tmp8 = *$tmp7;
frost$core$Int $tmp9 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from VariableLValue.frost:19:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp10 = $tmp8.value;
int64_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 == $tmp11;
frost$core$Bit $tmp13 = (frost$core$Bit) {$tmp12};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block2; else goto block3;
block2:;
frost$core$Int* $tmp15 = (frost$core$Int*) ($tmp6->$data + 0);
frost$core$Int $tmp16 = *$tmp15;
*(&local0) = $tmp16;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:20
frost$core$Int $tmp17 = *(&local0);
frost$core$Int* $tmp18 = &param0->slot;
*$tmp18 = $tmp17;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:26
org$frostlang$frostc$Position* $tmp19 = &param0->position;
*$tmp19 = param2;
return;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:23
frost$core$Int $tmp20 = (frost$core$Int) {23u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from VariableLValue.frost:23:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn22 $tmp21 = ($fn22) ((frost$core$Object*) param3)->$class->vtable[0];
frost$core$String* $tmp23 = $tmp21(((frost$core$Object*) param3));
frost$core$String* $tmp24 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s25, $tmp23);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$String* $tmp26 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp24, &$s27);
org$frostlang$frostc$Position$wrapper* $tmp28;
$tmp28 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp28->value = param2;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from VariableLValue.frost:23:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn30 $tmp29 = ($fn30) ((frost$core$Object*) $tmp28)->$class->vtable[0];
frost$core$String* $tmp31 = $tmp29(((frost$core$Object*) $tmp28));
frost$core$String* $tmp32 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp26, $tmp31);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
frost$core$String* $tmp33 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp32, &$s34);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s35, $tmp20, $tmp33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
abort(); // unreachable

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$VariableLValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$VariableLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:31
org$frostlang$frostc$Compiler** $tmp36 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp37 = *$tmp36;
org$frostlang$frostc$IR** $tmp38 = &$tmp37->ir;
org$frostlang$frostc$IR* $tmp39 = *$tmp38;
frost$collections$Array** $tmp40 = &$tmp39->locals;
frost$collections$Array* $tmp41 = *$tmp40;
frost$core$Int* $tmp42 = &param0->slot;
frost$core$Int $tmp43 = *$tmp42;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from VariableLValue.frost:31:34
frost$core$Int $tmp44 = (frost$core$Int) {0u};
int64_t $tmp45 = $tmp43.value;
int64_t $tmp46 = $tmp44.value;
bool $tmp47 = $tmp45 >= $tmp46;
frost$core$Bit $tmp48 = (frost$core$Bit) {$tmp47};
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block4; else goto block3;
block4:;
ITable* $tmp50 = ((frost$collections$CollectionView*) $tmp41)->$class->itable;
while ($tmp50->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp50 = $tmp50->next;
}
$fn52 $tmp51 = $tmp50->methods[0];
frost$core$Int $tmp53 = $tmp51(((frost$collections$CollectionView*) $tmp41));
int64_t $tmp54 = $tmp43.value;
int64_t $tmp55 = $tmp53.value;
bool $tmp56 = $tmp54 < $tmp55;
frost$core$Bit $tmp57 = (frost$core$Bit) {$tmp56};
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block2; else goto block3;
block3:;
frost$core$Int $tmp59 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s60, $tmp59, &$s61);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp62 = &$tmp41->data;
frost$core$Object** $tmp63 = *$tmp62;
frost$core$Int64 $tmp64 = frost$core$Int64$init$frost$core$Int($tmp43);
int64_t $tmp65 = $tmp64.value;
frost$core$Object* $tmp66 = $tmp63[$tmp65];
frost$core$Frost$ref$frost$core$Object$Q($tmp66);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp66)));
frost$core$Frost$unref$frost$core$Object$Q($tmp66);
return ((org$frostlang$frostc$Type*) $tmp66);

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$VariableLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$lvalue$VariableLValue* param0) {

org$frostlang$frostc$IR$Statement$ID local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:36
org$frostlang$frostc$Compiler** $tmp67 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp68 = *$tmp67;
org$frostlang$frostc$IR** $tmp69 = &$tmp68->ir;
org$frostlang$frostc$IR* $tmp70 = *$tmp69;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp71 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp72 = (frost$core$Int) {14u};
org$frostlang$frostc$Position* $tmp73 = &param0->position;
org$frostlang$frostc$Position $tmp74 = *$tmp73;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp75 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp76 = (frost$core$Int) {2u};
frost$core$Int* $tmp77 = &param0->slot;
frost$core$Int $tmp78 = *$tmp77;
$fn80 $tmp79 = ($fn80) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp81 = $tmp79(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp75, $tmp76, $tmp78, $tmp81);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp71, $tmp72, $tmp74, $tmp75);
$fn83 $tmp82 = ($fn83) $tmp70->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp84 = $tmp82($tmp70, $tmp71);
*(&local0) = $tmp84;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:37
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp85 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp86 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp87 = *(&local0);
org$frostlang$frostc$Compiler** $tmp88 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp89 = *$tmp88;
org$frostlang$frostc$IR** $tmp90 = &$tmp89->ir;
org$frostlang$frostc$IR* $tmp91 = *$tmp90;
frost$collections$Array** $tmp92 = &$tmp91->locals;
frost$collections$Array* $tmp93 = *$tmp92;
frost$core$Int* $tmp94 = &param0->slot;
frost$core$Int $tmp95 = *$tmp94;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from VariableLValue.frost:37:55
frost$core$Int $tmp96 = (frost$core$Int) {0u};
int64_t $tmp97 = $tmp95.value;
int64_t $tmp98 = $tmp96.value;
bool $tmp99 = $tmp97 >= $tmp98;
frost$core$Bit $tmp100 = (frost$core$Bit) {$tmp99};
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block4; else goto block3;
block4:;
ITable* $tmp102 = ((frost$collections$CollectionView*) $tmp93)->$class->itable;
while ($tmp102->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp102 = $tmp102->next;
}
$fn104 $tmp103 = $tmp102->methods[0];
frost$core$Int $tmp105 = $tmp103(((frost$collections$CollectionView*) $tmp93));
int64_t $tmp106 = $tmp95.value;
int64_t $tmp107 = $tmp105.value;
bool $tmp108 = $tmp106 < $tmp107;
frost$core$Bit $tmp109 = (frost$core$Bit) {$tmp108};
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block2; else goto block3;
block3:;
frost$core$Int $tmp111 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s112, $tmp111, &$s113);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp114 = &$tmp93->data;
frost$core$Object** $tmp115 = *$tmp114;
frost$core$Int64 $tmp116 = frost$core$Int64$init$frost$core$Int($tmp95);
int64_t $tmp117 = $tmp116.value;
frost$core$Object* $tmp118 = $tmp115[$tmp117];
frost$core$Frost$ref$frost$core$Object$Q($tmp118);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp85, $tmp86, $tmp87, ((org$frostlang$frostc$Type*) $tmp118));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q($tmp118);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
return $tmp85;

}
void org$frostlang$frostc$lvalue$VariableLValue$compileStore$org$frostlang$frostc$IR$Value(org$frostlang$frostc$lvalue$VariableLValue* param0, org$frostlang$frostc$IR$Value* param1) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:42
org$frostlang$frostc$Compiler** $tmp119 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp120 = *$tmp119;
$fn122 $tmp121 = ($fn122) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp123 = $tmp121(param0);
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from VariableLValue.frost:42:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:748
frost$core$Bit $tmp124 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp123);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:748:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp125 = $tmp124.value;
bool $tmp126 = !$tmp125;
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:749
frost$core$Bit $tmp129 = (frost$core$Bit) {false};
*(&local0) = $tmp129;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:751
frost$core$Bit $tmp130 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit($tmp120, $tmp123);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:751:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp131 = $tmp130.value;
bool $tmp132 = !$tmp131;
frost$core$Bit $tmp133 = (frost$core$Bit) {$tmp132};
*(&local0) = $tmp133;
goto block3;
block3:;
frost$core$Bit $tmp134 = *(&local0);
bool $tmp135 = $tmp134.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
if ($tmp135) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:43
org$frostlang$frostc$Compiler** $tmp136 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp137 = *$tmp136;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value($tmp137, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:44
org$frostlang$frostc$Compiler** $tmp138 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp139 = *$tmp138;
$fn141 $tmp140 = ($fn141) param0->$class->vtable[3];
org$frostlang$frostc$IR$Value* $tmp142 = $tmp140(param0);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value($tmp139, $tmp142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:46
org$frostlang$frostc$Compiler** $tmp143 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp144 = *$tmp143;
org$frostlang$frostc$IR** $tmp145 = &$tmp144->ir;
org$frostlang$frostc$IR* $tmp146 = *$tmp145;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp147 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp148 = (frost$core$Int) {27u};
org$frostlang$frostc$Position* $tmp149 = &param0->position;
org$frostlang$frostc$Position $tmp150 = *$tmp149;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp151 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp152 = (frost$core$Int) {2u};
frost$core$Int* $tmp153 = &param0->slot;
frost$core$Int $tmp154 = *$tmp153;
$fn156 $tmp155 = ($fn156) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp157 = $tmp155(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp151, $tmp152, $tmp154, $tmp157);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp147, $tmp148, $tmp150, param1, $tmp151);
$fn159 $tmp158 = ($fn159) $tmp146->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp160 = $tmp158($tmp146, $tmp147);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
return;

}
void org$frostlang$frostc$lvalue$VariableLValue$cleanup(org$frostlang$frostc$lvalue$VariableLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp161 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp162 = *$tmp161;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
return;

}

