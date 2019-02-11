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
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlang$frostc$lvalue$ChoiceFieldLValue$_org$frostlang$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class, NULL, { org$frostlang$frostc$lvalue$ChoiceFieldLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlang$frostc$IR$Value} };

static frost$core$String $s1;
org$frostlang$frostc$lvalue$ChoiceFieldLValue$class_type org$frostlang$frostc$lvalue$ChoiceFieldLValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$ChoiceFieldLValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$lvalue$ChoiceFieldLValue$cleanup, org$frostlang$frostc$lvalue$ChoiceFieldLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlang$frostc$IR$Value} };

typedef frost$core$Int64 (*$fn26)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn45)(org$frostlang$frostc$lvalue$ChoiceFieldLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn76)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn103)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn118)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 45, 8958090540298926135, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 23, -6371488786330827919, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };

void org$frostlang$frostc$lvalue$ChoiceFieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$ChoiceCase* param4, frost$core$Int64 param5) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:22
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:23
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp5 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlang$frostc$IR$Value** $tmp7 = &param0->target;
*$tmp7 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:24
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ChoiceCase** $tmp8 = &param0->choiceCase;
org$frostlang$frostc$ChoiceCase* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
org$frostlang$frostc$ChoiceCase** $tmp10 = &param0->choiceCase;
*$tmp10 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:25
frost$core$Int64* $tmp11 = &param0->index;
*$tmp11 = param5;
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$ChoiceFieldLValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:30
org$frostlang$frostc$ChoiceCase** $tmp12 = &param0->choiceCase;
org$frostlang$frostc$ChoiceCase* $tmp13 = *$tmp12;
frost$collections$Array** $tmp14 = &$tmp13->fields;
frost$collections$Array* $tmp15 = *$tmp14;
frost$core$Int64* $tmp16 = &param0->index;
frost$core$Int64 $tmp17 = *$tmp16;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from ChoiceFieldLValue.frost:30:33
frost$core$Int64 $tmp18 = (frost$core$Int64) {0};
int64_t $tmp19 = $tmp17.value;
int64_t $tmp20 = $tmp18.value;
bool $tmp21 = $tmp19 >= $tmp20;
frost$core$Bit $tmp22 = (frost$core$Bit) {$tmp21};
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block4; else goto block3;
block4:;
ITable* $tmp24 = ((frost$collections$CollectionView*) $tmp15)->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp24 = $tmp24->next;
}
$fn26 $tmp25 = $tmp24->methods[0];
frost$core$Int64 $tmp27 = $tmp25(((frost$collections$CollectionView*) $tmp15));
int64_t $tmp28 = $tmp17.value;
int64_t $tmp29 = $tmp27.value;
bool $tmp30 = $tmp28 < $tmp29;
frost$core$Bit $tmp31 = (frost$core$Bit) {$tmp30};
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp33 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s34, $tmp33, &$s35);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp36 = &$tmp15->data;
frost$core$Object** $tmp37 = *$tmp36;
int64_t $tmp38 = $tmp17.value;
frost$core$Object* $tmp39 = $tmp37[$tmp38];
frost$core$Frost$ref$frost$core$Object$Q($tmp39);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp39)));
frost$core$Frost$unref$frost$core$Object$Q($tmp39);
return ((org$frostlang$frostc$Type*) $tmp39);

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:35
frost$core$Int64 $tmp40 = (frost$core$Int64) {35};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s41, $tmp40);
abort(); // unreachable

}
void org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlang$frostc$IR$Value(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0, org$frostlang$frostc$IR$Value* param1) {

frost$core$Bit local0;
org$frostlang$frostc$IR$Statement$ID local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:40
org$frostlang$frostc$Compiler** $tmp42 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp43 = *$tmp42;
$fn45 $tmp44 = ($fn45) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp46 = $tmp44(param0);
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from ChoiceFieldLValue.frost:40:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:722
frost$core$Bit $tmp47 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp46);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:722:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp48 = $tmp47.value;
bool $tmp49 = !$tmp48;
frost$core$Bit $tmp50 = (frost$core$Bit) {$tmp49};
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:723
frost$core$Bit $tmp52 = frost$core$Bit$init$builtin_bit(false);
*(&local0) = $tmp52;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:725
frost$core$Bit $tmp53 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit($tmp43, $tmp46);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:725:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp54 = $tmp53.value;
bool $tmp55 = !$tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55};
*(&local0) = $tmp56;
goto block3;
block3:;
frost$core$Bit $tmp57 = *(&local0);
bool $tmp58 = $tmp57.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
if ($tmp58) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:41
org$frostlang$frostc$Compiler** $tmp59 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp60 = *$tmp59;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value($tmp60, param1);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:43
org$frostlang$frostc$Compiler** $tmp61 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp62 = *$tmp61;
org$frostlang$frostc$IR** $tmp63 = &$tmp62->ir;
org$frostlang$frostc$IR* $tmp64 = *$tmp63;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp65 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp66 = (frost$core$Int64) {4};
org$frostlang$frostc$Position* $tmp67 = &param0->position;
org$frostlang$frostc$Position $tmp68 = *$tmp67;
org$frostlang$frostc$IR$Value** $tmp69 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp70 = *$tmp69;
org$frostlang$frostc$ChoiceCase** $tmp71 = &param0->choiceCase;
org$frostlang$frostc$ChoiceCase* $tmp72 = *$tmp71;
frost$core$Int64* $tmp73 = &param0->index;
frost$core$Int64 $tmp74 = *$tmp73;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64($tmp65, $tmp66, $tmp68, $tmp70, $tmp72, $tmp74);
$fn76 $tmp75 = ($fn76) $tmp64->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp77 = $tmp75($tmp64, $tmp65);
*(&local1) = $tmp77;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:45
org$frostlang$frostc$Compiler** $tmp78 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp79 = *$tmp78;
org$frostlang$frostc$IR** $tmp80 = &$tmp79->ir;
org$frostlang$frostc$IR* $tmp81 = *$tmp80;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp82 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp83 = (frost$core$Int64) {27};
org$frostlang$frostc$Position* $tmp84 = &param0->position;
org$frostlang$frostc$Position $tmp85 = *$tmp84;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp86 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp87 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp88 = *(&local1);
org$frostlang$frostc$ChoiceCase** $tmp89 = &param0->choiceCase;
org$frostlang$frostc$ChoiceCase* $tmp90 = *$tmp89;
frost$collections$Array** $tmp91 = &$tmp90->fields;
frost$collections$Array* $tmp92 = *$tmp91;
frost$core$Int64* $tmp93 = &param0->index;
frost$core$Int64 $tmp94 = *$tmp93;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from ChoiceFieldLValue.frost:46:34
frost$core$Int64 $tmp95 = (frost$core$Int64) {0};
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95.value;
bool $tmp98 = $tmp96 >= $tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block11; else goto block10;
block11:;
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
if ($tmp109) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp110 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s111, $tmp110, &$s112);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp113 = &$tmp92->data;
frost$core$Object** $tmp114 = *$tmp113;
int64_t $tmp115 = $tmp94.value;
frost$core$Object* $tmp116 = $tmp114[$tmp115];
frost$core$Frost$ref$frost$core$Object$Q($tmp116);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp86, $tmp87, $tmp88, ((org$frostlang$frostc$Type*) $tmp116));
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp82, $tmp83, $tmp85, param1, $tmp86);
$fn118 $tmp117 = ($fn118) $tmp81->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp119 = $tmp117($tmp81, $tmp82);
frost$core$Frost$unref$frost$core$Object$Q($tmp116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
return;

}
void org$frostlang$frostc$lvalue$ChoiceFieldLValue$cleanup(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp120 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp121 = *$tmp120;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
org$frostlang$frostc$IR$Value** $tmp122 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp123 = *$tmp122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
org$frostlang$frostc$ChoiceCase** $tmp124 = &param0->choiceCase;
org$frostlang$frostc$ChoiceCase* $tmp125 = *$tmp124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
return;

}

