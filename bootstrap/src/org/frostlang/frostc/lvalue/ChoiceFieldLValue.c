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
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Weak.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Equatable.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlang$frostc$lvalue$ChoiceFieldLValue$_org$frostlang$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class, NULL, { org$frostlang$frostc$lvalue$ChoiceFieldLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlang$frostc$IR$Value} };

static frost$core$String $s1;
org$frostlang$frostc$lvalue$ChoiceFieldLValue$class_type org$frostlang$frostc$lvalue$ChoiceFieldLValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$ChoiceFieldLValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$lvalue$ChoiceFieldLValue$cleanup, org$frostlang$frostc$lvalue$ChoiceFieldLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlang$frostc$IR$Value} };

typedef org$frostlang$frostc$Type* (*$fn3)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn30)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn61)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn80)(org$frostlang$frostc$lvalue$ChoiceFieldLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn111)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn138)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn153)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 45, -2381040971898687521, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 23, 3695017846869358131, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x69\x6e\x69\x74\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2c\x20\x63\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x2c\x20\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 261, 3505437497112399818, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -775704626125802412, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 23, 3695017846869358131, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -775704626125802412, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };

void org$frostlang$frostc$lvalue$ChoiceFieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$ChoiceCase* param4, frost$core$Int64 param5) {

frost$core$Bit local0;
$fn3 $tmp2 = ($fn3) param3->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4 = $tmp2(param3);
frost$core$Weak** $tmp5 = &param4->owner;
frost$core$Weak* $tmp6 = *$tmp5;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ChoiceFieldLValue.frost:20:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp7 = &$tmp6->_valid;
frost$core$Bit $tmp8 = *$tmp7;
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp10 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s11, $tmp10);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp12 = &$tmp6->value;
frost$core$Object* $tmp13 = *$tmp12;
frost$core$Frost$ref$frost$core$Object$Q($tmp13);
org$frostlang$frostc$Type** $tmp14 = &((org$frostlang$frostc$ClassDecl*) $tmp13)->type;
org$frostlang$frostc$Type* $tmp15 = *$tmp14;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from ChoiceFieldLValue.frost:20:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp16 = &((org$frostlang$frostc$Symbol*) $tmp4)->name;
frost$core$String* $tmp17 = *$tmp16;
frost$core$String** $tmp18 = &((org$frostlang$frostc$Symbol*) $tmp15)->name;
frost$core$String* $tmp19 = *$tmp18;
frost$core$Bit $tmp20 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp17, $tmp19);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Type$Kind* $tmp22 = &$tmp4->typeKind;
org$frostlang$frostc$Type$Kind $tmp23 = *$tmp22;
org$frostlang$frostc$Type$Kind$wrapper* $tmp24;
$tmp24 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp24->value = $tmp23;
org$frostlang$frostc$Type$Kind* $tmp25 = &$tmp15->typeKind;
org$frostlang$frostc$Type$Kind $tmp26 = *$tmp25;
org$frostlang$frostc$Type$Kind$wrapper* $tmp27;
$tmp27 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp27->value = $tmp26;
ITable* $tmp28 = ((frost$core$Equatable*) $tmp24)->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp28 = $tmp28->next;
}
$fn30 $tmp29 = $tmp28->methods[0];
frost$core$Bit $tmp31 = $tmp29(((frost$core$Equatable*) $tmp24), ((frost$core$Equatable*) $tmp27));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp27)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp24)));
*(&local0) = $tmp31;
goto block10;
block9:;
*(&local0) = $tmp20;
goto block10;
block10:;
frost$core$Bit $tmp32 = *(&local0);
bool $tmp33 = $tmp32.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
if ($tmp33) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp34 = (frost$core$Int64) {21u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s35, $tmp34, &$s36);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:23
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp37 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp38 = *$tmp37;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
org$frostlang$frostc$Compiler** $tmp39 = &param0->compiler;
*$tmp39 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:24
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR$Value** $tmp40 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp41 = *$tmp40;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
org$frostlang$frostc$IR$Value** $tmp42 = &param0->target;
*$tmp42 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:25
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$ChoiceCase** $tmp43 = &param0->choiceCase;
org$frostlang$frostc$ChoiceCase* $tmp44 = *$tmp43;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
org$frostlang$frostc$ChoiceCase** $tmp45 = &param0->choiceCase;
*$tmp45 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:26
frost$core$Int64* $tmp46 = &param0->index;
*$tmp46 = param5;
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$ChoiceFieldLValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:31
org$frostlang$frostc$ChoiceCase** $tmp47 = &param0->choiceCase;
org$frostlang$frostc$ChoiceCase* $tmp48 = *$tmp47;
frost$collections$Array** $tmp49 = &$tmp48->fields;
frost$collections$Array* $tmp50 = *$tmp49;
frost$core$Int64* $tmp51 = &param0->index;
frost$core$Int64 $tmp52 = *$tmp51;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from ChoiceFieldLValue.frost:31:33
frost$core$Int64 $tmp53 = (frost$core$Int64) {0u};
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53.value;
bool $tmp56 = $tmp54 >= $tmp55;
frost$core$Bit $tmp57 = (frost$core$Bit) {$tmp56};
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block4; else goto block3;
block4:;
ITable* $tmp59 = ((frost$collections$CollectionView*) $tmp50)->$class->itable;
while ($tmp59->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp59 = $tmp59->next;
}
$fn61 $tmp60 = $tmp59->methods[0];
frost$core$Int64 $tmp62 = $tmp60(((frost$collections$CollectionView*) $tmp50));
int64_t $tmp63 = $tmp52.value;
int64_t $tmp64 = $tmp62.value;
bool $tmp65 = $tmp63 < $tmp64;
frost$core$Bit $tmp66 = (frost$core$Bit) {$tmp65};
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp68 = (frost$core$Int64) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s69, $tmp68, &$s70);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp71 = &$tmp50->data;
frost$core$Object** $tmp72 = *$tmp71;
int64_t $tmp73 = $tmp52.value;
frost$core$Object* $tmp74 = $tmp72[$tmp73];
frost$core$Frost$ref$frost$core$Object$Q($tmp74);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp74)));
frost$core$Frost$unref$frost$core$Object$Q($tmp74);
return ((org$frostlang$frostc$Type*) $tmp74);

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:36
frost$core$Int64 $tmp75 = (frost$core$Int64) {36u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s76, $tmp75);
abort(); // unreachable

}
void org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlang$frostc$IR$Value(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0, org$frostlang$frostc$IR$Value* param1) {

frost$core$Bit local0;
org$frostlang$frostc$IR$Statement$ID local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:41
org$frostlang$frostc$Compiler** $tmp77 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp78 = *$tmp77;
$fn80 $tmp79 = ($fn80) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp81 = $tmp79(param0);
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from ChoiceFieldLValue.frost:41:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:722
frost$core$Bit $tmp82 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp81);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:722:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp83 = $tmp82.value;
bool $tmp84 = !$tmp83;
frost$core$Bit $tmp85 = (frost$core$Bit) {$tmp84};
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:723
frost$core$Bit $tmp87 = (frost$core$Bit) {false};
*(&local0) = $tmp87;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:725
frost$core$Bit $tmp88 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit($tmp78, $tmp81);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:725:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp89 = $tmp88.value;
bool $tmp90 = !$tmp89;
frost$core$Bit $tmp91 = (frost$core$Bit) {$tmp90};
*(&local0) = $tmp91;
goto block3;
block3:;
frost$core$Bit $tmp92 = *(&local0);
bool $tmp93 = $tmp92.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
if ($tmp93) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:42
org$frostlang$frostc$Compiler** $tmp94 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp95 = *$tmp94;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value($tmp95, param1);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:44
org$frostlang$frostc$Compiler** $tmp96 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp97 = *$tmp96;
org$frostlang$frostc$IR** $tmp98 = &$tmp97->ir;
org$frostlang$frostc$IR* $tmp99 = *$tmp98;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp100 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp101 = (frost$core$Int64) {4u};
org$frostlang$frostc$Position* $tmp102 = &param0->position;
org$frostlang$frostc$Position $tmp103 = *$tmp102;
org$frostlang$frostc$IR$Value** $tmp104 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp105 = *$tmp104;
org$frostlang$frostc$ChoiceCase** $tmp106 = &param0->choiceCase;
org$frostlang$frostc$ChoiceCase* $tmp107 = *$tmp106;
frost$core$Int64* $tmp108 = &param0->index;
frost$core$Int64 $tmp109 = *$tmp108;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64($tmp100, $tmp101, $tmp103, $tmp105, $tmp107, $tmp109);
$fn111 $tmp110 = ($fn111) $tmp99->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp112 = $tmp110($tmp99, $tmp100);
*(&local1) = $tmp112;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:46
org$frostlang$frostc$Compiler** $tmp113 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp114 = *$tmp113;
org$frostlang$frostc$IR** $tmp115 = &$tmp114->ir;
org$frostlang$frostc$IR* $tmp116 = *$tmp115;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp117 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp118 = (frost$core$Int64) {27u};
org$frostlang$frostc$Position* $tmp119 = &param0->position;
org$frostlang$frostc$Position $tmp120 = *$tmp119;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp121 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp122 = (frost$core$Int64) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp123 = *(&local1);
org$frostlang$frostc$ChoiceCase** $tmp124 = &param0->choiceCase;
org$frostlang$frostc$ChoiceCase* $tmp125 = *$tmp124;
frost$collections$Array** $tmp126 = &$tmp125->fields;
frost$collections$Array* $tmp127 = *$tmp126;
frost$core$Int64* $tmp128 = &param0->index;
frost$core$Int64 $tmp129 = *$tmp128;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from ChoiceFieldLValue.frost:47:34
frost$core$Int64 $tmp130 = (frost$core$Int64) {0u};
int64_t $tmp131 = $tmp129.value;
int64_t $tmp132 = $tmp130.value;
bool $tmp133 = $tmp131 >= $tmp132;
frost$core$Bit $tmp134 = (frost$core$Bit) {$tmp133};
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block11; else goto block10;
block11:;
ITable* $tmp136 = ((frost$collections$CollectionView*) $tmp127)->$class->itable;
while ($tmp136->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp136 = $tmp136->next;
}
$fn138 $tmp137 = $tmp136->methods[0];
frost$core$Int64 $tmp139 = $tmp137(((frost$collections$CollectionView*) $tmp127));
int64_t $tmp140 = $tmp129.value;
int64_t $tmp141 = $tmp139.value;
bool $tmp142 = $tmp140 < $tmp141;
frost$core$Bit $tmp143 = (frost$core$Bit) {$tmp142};
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp145 = (frost$core$Int64) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s146, $tmp145, &$s147);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp148 = &$tmp127->data;
frost$core$Object** $tmp149 = *$tmp148;
int64_t $tmp150 = $tmp129.value;
frost$core$Object* $tmp151 = $tmp149[$tmp150];
frost$core$Frost$ref$frost$core$Object$Q($tmp151);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp121, $tmp122, $tmp123, ((org$frostlang$frostc$Type*) $tmp151));
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp117, $tmp118, $tmp120, param1, $tmp121);
$fn153 $tmp152 = ($fn153) $tmp116->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp154 = $tmp152($tmp116, $tmp117);
frost$core$Frost$unref$frost$core$Object$Q($tmp151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
return;

}
void org$frostlang$frostc$lvalue$ChoiceFieldLValue$cleanup(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp155 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp156 = *$tmp155;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
org$frostlang$frostc$IR$Value** $tmp157 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp158 = *$tmp157;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
org$frostlang$frostc$ChoiceCase** $tmp159 = &param0->choiceCase;
org$frostlang$frostc$ChoiceCase* $tmp160 = *$tmp159;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
return;

}

