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
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR/Statement.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlang$frostc$lvalue$VariableLValue$_org$frostlang$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class, NULL, { org$frostlang$frostc$lvalue$VariableLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$VariableLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$VariableLValue$compileStore$org$frostlang$frostc$IR$Value} };

static frost$core$String $s1;
org$frostlang$frostc$lvalue$VariableLValue$class_type org$frostlang$frostc$lvalue$VariableLValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$VariableLValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$lvalue$VariableLValue$cleanup, org$frostlang$frostc$lvalue$VariableLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$VariableLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$VariableLValue$compileStore$org$frostlang$frostc$IR$Value} };

typedef frost$core$String* (*$fn22)(frost$core$Object*);
typedef frost$core$String* (*$fn30)(frost$core$Object*);
typedef frost$core$Int64 (*$fn52)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn79)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn82)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn103)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn120)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$IR$Value* (*$fn139)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$Type* (*$fn154)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn157)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x4c\x56\x61\x6c\x75\x65", 42, 1688759092515817554, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x79\x69\x6e\x67\x20\x74\x6f\x20\x73\x74\x6f\x72\x65\x20\x69\x6e\x74\x6f\x20\x6e\x6f\x6e\x2d\x6c\x6f\x63\x61\x6c\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20", 40, -4389980992813749051, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x61\x74\x20", 4, 138031278, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x61\x72\x69\x61\x62\x6c\x65\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 20, -554897390060984052, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };

void org$frostlang$frostc$lvalue$VariableLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Variable(org$frostlang$frostc$lvalue$VariableLValue* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$Variable* param3) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:17
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:18
org$frostlang$frostc$Variable$Storage** $tmp5 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp6 = *$tmp5;
frost$core$Int64* $tmp7 = &$tmp6->$rawValue;
frost$core$Int64 $tmp8 = *$tmp7;
frost$core$Int64 $tmp9 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from VariableLValue.frost:19:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp10 = $tmp8.value;
int64_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 == $tmp11;
frost$core$Bit $tmp13 = frost$core$Bit$init$builtin_bit($tmp12);
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp15 = (frost$core$Int64*) ($tmp6->$data + 0);
frost$core$Int64 $tmp16 = *$tmp15;
*(&local0) = $tmp16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:20
frost$core$Int64 $tmp17 = *(&local0);
frost$core$Int64* $tmp18 = &param0->slot;
*$tmp18 = $tmp17;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:26
org$frostlang$frostc$Position* $tmp19 = &param0->position;
*$tmp19 = param2;
return;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:23
frost$core$Int64 $tmp20 = (frost$core$Int64) {23};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from VariableLValue.frost:23:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn30 $tmp29 = ($fn30) ((frost$core$Object*) $tmp28)->$class->vtable[0];
frost$core$String* $tmp31 = $tmp29(((frost$core$Object*) $tmp28));
frost$core$String* $tmp32 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp26, $tmp31);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
frost$core$String* $tmp33 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp32, &$s34);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s35, $tmp20, $tmp33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
abort(); // unreachable

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$VariableLValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$VariableLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:31
org$frostlang$frostc$Compiler** $tmp36 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp37 = *$tmp36;
org$frostlang$frostc$IR** $tmp38 = &$tmp37->ir;
org$frostlang$frostc$IR* $tmp39 = *$tmp38;
frost$collections$Array** $tmp40 = &$tmp39->locals;
frost$collections$Array* $tmp41 = *$tmp40;
frost$core$Int64* $tmp42 = &param0->slot;
frost$core$Int64 $tmp43 = *$tmp42;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from VariableLValue.frost:31:34
frost$core$Int64 $tmp44 = (frost$core$Int64) {0};
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
frost$core$Int64 $tmp53 = $tmp51(((frost$collections$CollectionView*) $tmp41));
int64_t $tmp54 = $tmp43.value;
int64_t $tmp55 = $tmp53.value;
bool $tmp56 = $tmp54 < $tmp55;
frost$core$Bit $tmp57 = (frost$core$Bit) {$tmp56};
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp59 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s60, $tmp59, &$s61);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp62 = &$tmp41->data;
frost$core$Object** $tmp63 = *$tmp62;
int64_t $tmp64 = $tmp43.value;
frost$core$Object* $tmp65 = $tmp63[$tmp64];
frost$core$Frost$ref$frost$core$Object$Q($tmp65);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp65)));
frost$core$Frost$unref$frost$core$Object$Q($tmp65);
return ((org$frostlang$frostc$Type*) $tmp65);

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$VariableLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$lvalue$VariableLValue* param0) {

org$frostlang$frostc$IR$Statement$ID local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:36
org$frostlang$frostc$Compiler** $tmp66 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp67 = *$tmp66;
org$frostlang$frostc$IR** $tmp68 = &$tmp67->ir;
org$frostlang$frostc$IR* $tmp69 = *$tmp68;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp70 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp71 = (frost$core$Int64) {14};
org$frostlang$frostc$Position* $tmp72 = &param0->position;
org$frostlang$frostc$Position $tmp73 = *$tmp72;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp74 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp75 = (frost$core$Int64) {2};
frost$core$Int64* $tmp76 = &param0->slot;
frost$core$Int64 $tmp77 = *$tmp76;
$fn79 $tmp78 = ($fn79) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp80 = $tmp78(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp74, $tmp75, $tmp77, $tmp80);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp70, $tmp71, $tmp73, $tmp74);
$fn82 $tmp81 = ($fn82) $tmp69->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp83 = $tmp81($tmp69, $tmp70);
*(&local0) = $tmp83;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:37
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp84 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp85 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp86 = *(&local0);
org$frostlang$frostc$Compiler** $tmp87 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp88 = *$tmp87;
org$frostlang$frostc$IR** $tmp89 = &$tmp88->ir;
org$frostlang$frostc$IR* $tmp90 = *$tmp89;
frost$collections$Array** $tmp91 = &$tmp90->locals;
frost$collections$Array* $tmp92 = *$tmp91;
frost$core$Int64* $tmp93 = &param0->slot;
frost$core$Int64 $tmp94 = *$tmp93;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from VariableLValue.frost:37:55
frost$core$Int64 $tmp95 = (frost$core$Int64) {0};
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95.value;
bool $tmp98 = $tmp96 >= $tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block4; else goto block3;
block4:;
ITable* $tmp101 = ((frost$collections$CollectionView*) $tmp92)->$class->itable;
while ($tmp101->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp101 = $tmp101->next;
}
$fn103 $tmp102 = $tmp101->methods[0];
frost$core$Int64 $tmp104 = $tmp102(((frost$collections$CollectionView*) $tmp92));
int64_t $tmp105 = $tmp94.value;
int64_t $tmp106 = $tmp104.value;
bool $tmp107 = $tmp105 < $tmp106;
frost$core$Bit $tmp108 = (frost$core$Bit) {$tmp107};
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp110 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s111, $tmp110, &$s112);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp113 = &$tmp92->data;
frost$core$Object** $tmp114 = *$tmp113;
int64_t $tmp115 = $tmp94.value;
frost$core$Object* $tmp116 = $tmp114[$tmp115];
frost$core$Frost$ref$frost$core$Object$Q($tmp116);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp84, $tmp85, $tmp86, ((org$frostlang$frostc$Type*) $tmp116));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$Frost$unref$frost$core$Object$Q($tmp116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
return $tmp84;

}
void org$frostlang$frostc$lvalue$VariableLValue$compileStore$org$frostlang$frostc$IR$Value(org$frostlang$frostc$lvalue$VariableLValue* param0, org$frostlang$frostc$IR$Value* param1) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:42
org$frostlang$frostc$Compiler** $tmp117 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp118 = *$tmp117;
$fn120 $tmp119 = ($fn120) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp121 = $tmp119(param0);
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from VariableLValue.frost:42:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:622
frost$core$Bit $tmp122 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp121);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:622:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp123 = $tmp122.value;
bool $tmp124 = !$tmp123;
frost$core$Bit $tmp125 = (frost$core$Bit) {$tmp124};
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:623
frost$core$Bit $tmp127 = frost$core$Bit$init$builtin_bit(false);
*(&local0) = $tmp127;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:625
frost$core$Bit $tmp128 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit($tmp118, $tmp121);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:625:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp129 = $tmp128.value;
bool $tmp130 = !$tmp129;
frost$core$Bit $tmp131 = (frost$core$Bit) {$tmp130};
*(&local0) = $tmp131;
goto block3;
block3:;
frost$core$Bit $tmp132 = *(&local0);
bool $tmp133 = $tmp132.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
if ($tmp133) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:43
org$frostlang$frostc$Compiler** $tmp134 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp135 = *$tmp134;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value($tmp135, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:44
org$frostlang$frostc$Compiler** $tmp136 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp137 = *$tmp136;
$fn139 $tmp138 = ($fn139) param0->$class->vtable[3];
org$frostlang$frostc$IR$Value* $tmp140 = $tmp138(param0);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value($tmp137, $tmp140);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:46
org$frostlang$frostc$Compiler** $tmp141 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp142 = *$tmp141;
org$frostlang$frostc$IR** $tmp143 = &$tmp142->ir;
org$frostlang$frostc$IR* $tmp144 = *$tmp143;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp145 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp146 = (frost$core$Int64) {27};
org$frostlang$frostc$Position* $tmp147 = &param0->position;
org$frostlang$frostc$Position $tmp148 = *$tmp147;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp149 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp150 = (frost$core$Int64) {2};
frost$core$Int64* $tmp151 = &param0->slot;
frost$core$Int64 $tmp152 = *$tmp151;
$fn154 $tmp153 = ($fn154) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp155 = $tmp153(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp149, $tmp150, $tmp152, $tmp155);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp145, $tmp146, $tmp148, param1, $tmp149);
$fn157 $tmp156 = ($fn157) $tmp144->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp158 = $tmp156($tmp144, $tmp145);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
return;

}
void org$frostlang$frostc$lvalue$VariableLValue$cleanup(org$frostlang$frostc$lvalue$VariableLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp159 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp160 = *$tmp159;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
return;

}

