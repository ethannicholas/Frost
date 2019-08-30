#include "org/frostlang/frostc/lvalue/ChoiceFieldLValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/lvalue/LValue.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "frost/core/Int.h"
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
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlang$frostc$lvalue$ChoiceFieldLValue$_org$frostlang$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class, NULL, { org$frostlang$frostc$lvalue$ChoiceFieldLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlang$frostc$IR$Value} };

static frost$core$String $s1;
org$frostlang$frostc$lvalue$ChoiceFieldLValue$class_type org$frostlang$frostc$lvalue$ChoiceFieldLValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$ChoiceFieldLValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$lvalue$ChoiceFieldLValue$cleanup, org$frostlang$frostc$lvalue$ChoiceFieldLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlang$frostc$IR$Value} };

typedef org$frostlang$frostc$Type* (*$fn3)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn30)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn61)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn81)(org$frostlang$frostc$lvalue$ChoiceFieldLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn112)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int (*$fn139)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn155)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 45, -2381040971898687521, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 23, 3695017846869358131, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x69\x6e\x69\x74\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2c\x20\x63\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x2c\x20\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29", 259, 7570709601419522468, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 23, 3695017846869358131, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };

void org$frostlang$frostc$lvalue$ChoiceFieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$ChoiceCase* param4, frost$core$Int param5) {

frost$core$Bit local0;
$fn3 $tmp2 = ($fn3) param3->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4 = $tmp2(param3);
frost$core$Weak** $tmp5 = &param4->owner;
frost$core$Weak* $tmp6 = *$tmp5;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ChoiceFieldLValue.frost:20:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp7 = &$tmp6->_valid;
frost$core$Bit $tmp8 = *$tmp7;
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block5; else goto block6;
block6:;
frost$core$Int $tmp10 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s11, $tmp10);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp12 = &$tmp6->value;
frost$core$Object* $tmp13 = *$tmp12;
frost$core$Frost$ref$frost$core$Object$Q($tmp13);
org$frostlang$frostc$Type** $tmp14 = &((org$frostlang$frostc$ClassDecl*) $tmp13)->type;
org$frostlang$frostc$Type* $tmp15 = *$tmp14;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from ChoiceFieldLValue.frost:20:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
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
frost$core$Int $tmp34 = (frost$core$Int) {21u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s35, $tmp34, &$s36);
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
frost$core$Int* $tmp46 = &param0->index;
*$tmp46 = param5;
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$ChoiceFieldLValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:31
org$frostlang$frostc$ChoiceCase** $tmp47 = &param0->choiceCase;
org$frostlang$frostc$ChoiceCase* $tmp48 = *$tmp47;
frost$collections$Array** $tmp49 = &$tmp48->fields;
frost$collections$Array* $tmp50 = *$tmp49;
frost$core$Int* $tmp51 = &param0->index;
frost$core$Int $tmp52 = *$tmp51;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from ChoiceFieldLValue.frost:31:33
frost$core$Int $tmp53 = (frost$core$Int) {0u};
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
frost$core$Int $tmp62 = $tmp60(((frost$collections$CollectionView*) $tmp50));
int64_t $tmp63 = $tmp52.value;
int64_t $tmp64 = $tmp62.value;
bool $tmp65 = $tmp63 < $tmp64;
frost$core$Bit $tmp66 = (frost$core$Bit) {$tmp65};
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block2; else goto block3;
block3:;
frost$core$Int $tmp68 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s69, $tmp68, &$s70);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp71 = &$tmp50->data;
frost$core$Object** $tmp72 = *$tmp71;
frost$core$Int64 $tmp73 = frost$core$Int64$init$frost$core$Int($tmp52);
int64_t $tmp74 = $tmp73.value;
frost$core$Object* $tmp75 = $tmp72[$tmp74];
frost$core$Frost$ref$frost$core$Object$Q($tmp75);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp75)));
frost$core$Frost$unref$frost$core$Object$Q($tmp75);
return ((org$frostlang$frostc$Type*) $tmp75);

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:36
frost$core$Int $tmp76 = (frost$core$Int) {36u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s77, $tmp76);
abort(); // unreachable

}
void org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlang$frostc$IR$Value(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0, org$frostlang$frostc$IR$Value* param1) {

frost$core$Bit local0;
org$frostlang$frostc$IR$Statement$ID local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:41
org$frostlang$frostc$Compiler** $tmp78 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp79 = *$tmp78;
$fn81 $tmp80 = ($fn81) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp82 = $tmp80(param0);
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from ChoiceFieldLValue.frost:41:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:659
frost$core$Bit $tmp83 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp82);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:659:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp84 = $tmp83.value;
bool $tmp85 = !$tmp84;
frost$core$Bit $tmp86 = (frost$core$Bit) {$tmp85};
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:660
frost$core$Bit $tmp88 = (frost$core$Bit) {false};
*(&local0) = $tmp88;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:662
frost$core$Bit $tmp89 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit($tmp79, $tmp82);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:662:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp90 = $tmp89.value;
bool $tmp91 = !$tmp90;
frost$core$Bit $tmp92 = (frost$core$Bit) {$tmp91};
*(&local0) = $tmp92;
goto block3;
block3:;
frost$core$Bit $tmp93 = *(&local0);
bool $tmp94 = $tmp93.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
if ($tmp94) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:42
org$frostlang$frostc$Compiler** $tmp95 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp96 = *$tmp95;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value($tmp96, param1);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:44
org$frostlang$frostc$Compiler** $tmp97 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp98 = *$tmp97;
org$frostlang$frostc$IR** $tmp99 = &$tmp98->ir;
org$frostlang$frostc$IR* $tmp100 = *$tmp99;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp101 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp102 = (frost$core$Int) {4u};
org$frostlang$frostc$Position* $tmp103 = &param0->position;
org$frostlang$frostc$Position $tmp104 = *$tmp103;
org$frostlang$frostc$IR$Value** $tmp105 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp106 = *$tmp105;
org$frostlang$frostc$ChoiceCase** $tmp107 = &param0->choiceCase;
org$frostlang$frostc$ChoiceCase* $tmp108 = *$tmp107;
frost$core$Int* $tmp109 = &param0->index;
frost$core$Int $tmp110 = *$tmp109;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int($tmp101, $tmp102, $tmp104, $tmp106, $tmp108, $tmp110);
$fn112 $tmp111 = ($fn112) $tmp100->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp113 = $tmp111($tmp100, $tmp101);
*(&local1) = $tmp113;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:46
org$frostlang$frostc$Compiler** $tmp114 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp115 = *$tmp114;
org$frostlang$frostc$IR** $tmp116 = &$tmp115->ir;
org$frostlang$frostc$IR* $tmp117 = *$tmp116;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp118 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp119 = (frost$core$Int) {27u};
org$frostlang$frostc$Position* $tmp120 = &param0->position;
org$frostlang$frostc$Position $tmp121 = *$tmp120;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp122 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp123 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp124 = *(&local1);
org$frostlang$frostc$ChoiceCase** $tmp125 = &param0->choiceCase;
org$frostlang$frostc$ChoiceCase* $tmp126 = *$tmp125;
frost$collections$Array** $tmp127 = &$tmp126->fields;
frost$collections$Array* $tmp128 = *$tmp127;
frost$core$Int* $tmp129 = &param0->index;
frost$core$Int $tmp130 = *$tmp129;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from ChoiceFieldLValue.frost:47:34
frost$core$Int $tmp131 = (frost$core$Int) {0u};
int64_t $tmp132 = $tmp130.value;
int64_t $tmp133 = $tmp131.value;
bool $tmp134 = $tmp132 >= $tmp133;
frost$core$Bit $tmp135 = (frost$core$Bit) {$tmp134};
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block11; else goto block10;
block11:;
ITable* $tmp137 = ((frost$collections$CollectionView*) $tmp128)->$class->itable;
while ($tmp137->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp137 = $tmp137->next;
}
$fn139 $tmp138 = $tmp137->methods[0];
frost$core$Int $tmp140 = $tmp138(((frost$collections$CollectionView*) $tmp128));
int64_t $tmp141 = $tmp130.value;
int64_t $tmp142 = $tmp140.value;
bool $tmp143 = $tmp141 < $tmp142;
frost$core$Bit $tmp144 = (frost$core$Bit) {$tmp143};
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block9; else goto block10;
block10:;
frost$core$Int $tmp146 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s147, $tmp146, &$s148);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp149 = &$tmp128->data;
frost$core$Object** $tmp150 = *$tmp149;
frost$core$Int64 $tmp151 = frost$core$Int64$init$frost$core$Int($tmp130);
int64_t $tmp152 = $tmp151.value;
frost$core$Object* $tmp153 = $tmp150[$tmp152];
frost$core$Frost$ref$frost$core$Object$Q($tmp153);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp122, $tmp123, $tmp124, ((org$frostlang$frostc$Type*) $tmp153));
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp118, $tmp119, $tmp121, param1, $tmp122);
$fn155 $tmp154 = ($fn155) $tmp117->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp156 = $tmp154($tmp117, $tmp118);
frost$core$Frost$unref$frost$core$Object$Q($tmp153);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
return;

}
void org$frostlang$frostc$lvalue$ChoiceFieldLValue$cleanup(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp157 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp158 = *$tmp157;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
org$frostlang$frostc$IR$Value** $tmp159 = &param0->target;
org$frostlang$frostc$IR$Value* $tmp160 = *$tmp159;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
org$frostlang$frostc$ChoiceCase** $tmp161 = &param0->choiceCase;
org$frostlang$frostc$ChoiceCase* $tmp162 = *$tmp161;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
return;

}

