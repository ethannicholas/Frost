#include "org/frostlang/frostc/lvalue/ChoiceFieldLValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/lvalue/LValue.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/MethodPosition.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Equatable.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/unsafe/NewPointer.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } org$frostlang$frostc$lvalue$ChoiceFieldLValue$_org$frostlang$frostc$lvalue$LValue = { (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class, NULL, { org$frostlang$frostc$lvalue$ChoiceFieldLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlang$frostc$IR$Value} };

static frost$core$String $s1;
org$frostlang$frostc$lvalue$ChoiceFieldLValue$class_type org$frostlang$frostc$lvalue$ChoiceFieldLValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$lvalue$ChoiceFieldLValue$_org$frostlang$frostc$lvalue$LValue, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$lvalue$ChoiceFieldLValue$cleanup, org$frostlang$frostc$lvalue$ChoiceFieldLValue$type$R$org$frostlang$frostc$Type, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlang$frostc$IR$Value} };

typedef org$frostlang$frostc$Type* (*$fn2)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn4)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn12)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn17)(org$frostlang$frostc$lvalue$ChoiceFieldLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn18)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int (*$fn19)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn20)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn21)(org$frostlang$frostc$lvalue$ChoiceFieldLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn22)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn26)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 45, -2381040971898687521, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 23, 3695017846869358131, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x69\x6e\x69\x74\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2c\x20\x63\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x2c\x20\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29", 265, -3760446083793505741, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 23, 3695017846869358131, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };

void org$frostlang$frostc$lvalue$ChoiceFieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int(void* rawSelf, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$MethodPosition param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$ChoiceCase* param4, frost$core$Int param5) {
org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0 = (org$frostlang$frostc$lvalue$ChoiceFieldLValue*) rawSelf;

frost$core$Bit local0;
$fn2 _0;
org$frostlang$frostc$Type* _1;
frost$core$Weak** _2;
frost$core$Weak* _3;
frost$core$Bit* _8;
frost$core$Bit _9;
bool _11;
frost$core$Int _13;
frost$core$Object** _17;
frost$core$Object* _18;
frost$core$Object* _19;
frost$core$Object* _20;
org$frostlang$frostc$ClassDecl* _23;
org$frostlang$frostc$Type** _24;
org$frostlang$frostc$Type* _25;
org$frostlang$frostc$Symbol* _28;
frost$core$String** _29;
frost$core$String* _30;
org$frostlang$frostc$Symbol* _31;
frost$core$String** _32;
frost$core$String* _33;
frost$core$Bit _34;
bool _35;
org$frostlang$frostc$Type$Kind* _37;
org$frostlang$frostc$Type$Kind _38;
frost$core$Equatable* _39;
org$frostlang$frostc$Type$Kind* _40;
org$frostlang$frostc$Type$Kind _41;
frost$core$Equatable* _42;
$fn3 _43;
frost$core$Bit _44;
frost$core$Object* _45;
frost$core$Object* _47;
frost$core$Bit _53;
bool _55;
frost$core$Object* _56;
frost$core$Object* _58;
frost$core$Int _61;
frost$core$Object* _65;
org$frostlang$frostc$Compiler** _67;
org$frostlang$frostc$Compiler* _68;
frost$core$Object* _69;
org$frostlang$frostc$Compiler** _71;
frost$core$Object* _74;
org$frostlang$frostc$IR$Value** _76;
org$frostlang$frostc$IR$Value* _77;
frost$core$Object* _78;
org$frostlang$frostc$IR$Value** _80;
frost$core$Object* _83;
org$frostlang$frostc$ChoiceCase** _85;
org$frostlang$frostc$ChoiceCase* _86;
frost$core$Object* _87;
org$frostlang$frostc$ChoiceCase** _89;
frost$core$Int* _92;
_0 = ($fn4) param3->$class->vtable[2];
_1 = _0(param3);
_2 = &param4->owner;
_3 = *_2;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ChoiceFieldLValue.frost:20:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_8 = &_3->_valid;
_9 = *_8;
_11 = _9.value;
if (_11) goto block5; else goto block6;
block6:;
_13 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _13, &$s6);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_17 = &_3->value;
_18 = *_17;
_19 = _18;
_20 = _19;
frost$core$Frost$ref$frost$core$Object$Q(_20);
_23 = ((org$frostlang$frostc$ClassDecl*) _19);
_24 = &_23->type;
_25 = *_24;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from ChoiceFieldLValue.frost:20:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
_28 = ((org$frostlang$frostc$Symbol*) _1);
_29 = &_28->name;
_30 = *_29;
_31 = ((org$frostlang$frostc$Symbol*) _25);
_32 = &_31->name;
_33 = *_32;
_34 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_30, _33);
_35 = _34.value;
if (_35) goto block8; else goto block9;
block8:;
_37 = &_1->typeKind;
_38 = *_37;
org$frostlang$frostc$Type$Kind$wrapper* $tmp7;
$tmp7 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp7->value = _38;
_39 = ((frost$core$Equatable*) $tmp7);
_40 = &_25->typeKind;
_41 = *_40;
org$frostlang$frostc$Type$Kind$wrapper* $tmp8;
$tmp8 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp8->value = _41;
_42 = ((frost$core$Equatable*) $tmp8);
ITable* $tmp9 = _39->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp9 = $tmp9->next;
}
_43 = $tmp9->methods[0];
_44 = _43(_39, _42);
_45 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_47);
*(&local0) = _44;
goto block10;
block9:;
*(&local0) = _34;
goto block10;
block10:;
_53 = *(&local0);
_55 = _53.value;
_56 = _19;
frost$core$Frost$unref$frost$core$Object$Q(_56);
_58 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_58);
if (_55) goto block1; else goto block2;
block2:;
_61 = (frost$core$Int) {21u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _61, &$s11);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:23
_65 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_65);
_67 = &param0->compiler;
_68 = *_67;
_69 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_69);
_71 = &param0->compiler;
*_71 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:24
_74 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_74);
_76 = &param0->target;
_77 = *_76;
_78 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_78);
_80 = &param0->target;
*_80 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:25
_83 = ((frost$core$Object*) param4);
frost$core$Frost$ref$frost$core$Object$Q(_83);
_85 = &param0->choiceCase;
_86 = *_85;
_87 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_87);
_89 = &param0->choiceCase;
*_89 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:26
_92 = &param0->index;
*_92 = param5;
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$ChoiceFieldLValue$type$R$org$frostlang$frostc$Type(void* rawSelf) {
org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0 = (org$frostlang$frostc$lvalue$ChoiceFieldLValue*) rawSelf;

org$frostlang$frostc$ChoiceCase** _1;
org$frostlang$frostc$ChoiceCase* _2;
frost$collections$Array** _3;
frost$collections$Array* _4;
frost$core$Int* _5;
frost$core$Int _6;
frost$core$Int _8;
int64_t _9;
int64_t _10;
bool _11;
frost$core$Bit _12;
bool _13;
frost$collections$CollectionView* _15;
$fn12 _16;
frost$core$Int _17;
int64_t _18;
int64_t _19;
bool _20;
frost$core$Bit _21;
bool _22;
frost$core$Int _24;
frost$unsafe$NewPointer* _28;
frost$unsafe$NewPointer _29;
int64_t _30;
frost$core$Int64 _31;
int64_t _32;
frost$core$Object* _33;
frost$core$Object* _34;
org$frostlang$frostc$Type* _37;
frost$core$Object* _38;
frost$core$Object* _40;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:31
_1 = &param0->choiceCase;
_2 = *_1;
_3 = &_2->fields;
_4 = *_3;
_5 = &param0->index;
_6 = *_5;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from ChoiceFieldLValue.frost:31:33
_8 = (frost$core$Int) {0u};
_9 = _6.value;
_10 = _8.value;
_11 = _9 >= _10;
_12 = (frost$core$Bit) {_11};
_13 = _12.value;
if (_13) goto block4; else goto block3;
block4:;
_15 = ((frost$collections$CollectionView*) _4);
ITable* $tmp13 = _15->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
_16 = $tmp13->methods[0];
_17 = _16(_15);
_18 = _6.value;
_19 = _17.value;
_20 = _18 < _19;
_21 = (frost$core$Bit) {_20};
_22 = _21.value;
if (_22) goto block2; else goto block3;
block3:;
_24 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _24, &$s15);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_28 = &_4->data;
_29 = *_28;
_30 = _29.value;
_31 = frost$core$Int64$init$frost$core$Int(_6);
_32 = _31.value;
_33 = ((frost$core$Object**)_30)[_32];
_34 = _33;
frost$core$Frost$ref$frost$core$Object$Q(_34);
_37 = ((org$frostlang$frostc$Type*) _33);
_38 = ((frost$core$Object*) _37);
frost$core$Frost$ref$frost$core$Object$Q(_38);
_40 = _33;
frost$core$Frost$unref$frost$core$Object$Q(_40);
return _37;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(void* rawSelf) {
org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0 = (org$frostlang$frostc$lvalue$ChoiceFieldLValue*) rawSelf;

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:36
_1 = (frost$core$Int) {36u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s16, _1);
abort(); // unreachable

}
void org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlang$frostc$IR$Value(void* rawSelf, org$frostlang$frostc$IR$Value* param1) {
org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0 = (org$frostlang$frostc$lvalue$ChoiceFieldLValue*) rawSelf;

frost$core$Bit local0;
org$frostlang$frostc$IR$Statement$ID local1;
org$frostlang$frostc$Compiler** _1;
org$frostlang$frostc$Compiler* _2;
$fn17 _3;
org$frostlang$frostc$Type* _4;
frost$core$Bit _7;
bool _10;
bool _11;
frost$core$Bit _12;
bool _14;
frost$core$Bit _17;
frost$core$Bit _21;
bool _24;
bool _25;
frost$core$Bit _26;
frost$core$Bit _30;
bool _31;
frost$core$Object* _32;
org$frostlang$frostc$Compiler** _36;
org$frostlang$frostc$Compiler* _37;
org$frostlang$frostc$Compiler** _41;
org$frostlang$frostc$Compiler* _42;
org$frostlang$frostc$IR** _43;
org$frostlang$frostc$IR* _44;
org$frostlang$frostc$IR$Statement* _45;
frost$core$Int _46;
org$frostlang$frostc$MethodPosition* _47;
org$frostlang$frostc$MethodPosition _48;
org$frostlang$frostc$IR$Value** _49;
org$frostlang$frostc$IR$Value* _50;
org$frostlang$frostc$ChoiceCase** _51;
org$frostlang$frostc$ChoiceCase* _52;
frost$core$Int* _53;
frost$core$Int _54;
$fn18 _56;
org$frostlang$frostc$IR$Statement$ID _57;
frost$core$Object* _59;
org$frostlang$frostc$Compiler** _62;
org$frostlang$frostc$Compiler* _63;
org$frostlang$frostc$IR** _64;
org$frostlang$frostc$IR* _65;
org$frostlang$frostc$IR$Statement* _66;
frost$core$Int _67;
org$frostlang$frostc$MethodPosition* _68;
org$frostlang$frostc$MethodPosition _69;
org$frostlang$frostc$IR$Value* _70;
frost$core$Int _71;
org$frostlang$frostc$IR$Statement$ID _72;
org$frostlang$frostc$ChoiceCase** _73;
org$frostlang$frostc$ChoiceCase* _74;
frost$collections$Array** _75;
frost$collections$Array* _76;
frost$core$Int* _77;
frost$core$Int _78;
frost$core$Int _80;
int64_t _81;
int64_t _82;
bool _83;
frost$core$Bit _84;
bool _85;
frost$collections$CollectionView* _87;
$fn19 _88;
frost$core$Int _89;
int64_t _90;
int64_t _91;
bool _92;
frost$core$Bit _93;
bool _94;
frost$core$Int _96;
frost$unsafe$NewPointer* _100;
frost$unsafe$NewPointer _101;
int64_t _102;
frost$core$Int64 _103;
int64_t _104;
frost$core$Object* _105;
frost$core$Object* _106;
org$frostlang$frostc$Type* _109;
$fn20 _112;
org$frostlang$frostc$IR$Statement$ID _113;
frost$core$Object* _114;
frost$core$Object* _116;
frost$core$Object* _118;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:41
_1 = &param0->compiler;
_2 = *_1;
_3 = ($fn21) param0->$class->vtable[2];
_4 = _3(param0);
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from ChoiceFieldLValue.frost:41:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:670
_7 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(_4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:670:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_10 = _7.value;
_11 = !_10;
_12 = (frost$core$Bit) {_11};
_14 = _12.value;
if (_14) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:671
_17 = (frost$core$Bit) {false};
*(&local0) = _17;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:673
_21 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(_2, _4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:673:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_24 = _21.value;
_25 = !_24;
_26 = (frost$core$Bit) {_25};
*(&local0) = _26;
goto block3;
block3:;
_30 = *(&local0);
_31 = _30.value;
_32 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_32);
if (_31) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:42
_36 = &param0->compiler;
_37 = *_36;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(_37, param1);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:44
_41 = &param0->compiler;
_42 = *_41;
_43 = &_42->ir;
_44 = *_43;
_45 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_46 = (frost$core$Int) {4u};
_47 = &param0->position;
_48 = *_47;
_49 = &param0->target;
_50 = *_49;
_51 = &param0->choiceCase;
_52 = *_51;
_53 = &param0->index;
_54 = *_53;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int(_45, _46, _48, _50, _52, _54);
_56 = ($fn22) _44->$class->vtable[2];
_57 = _56(_44, _45);
*(&local1) = _57;
_59 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_59);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:46
_62 = &param0->compiler;
_63 = *_62;
_64 = &_63->ir;
_65 = *_64;
_66 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_67 = (frost$core$Int) {27u};
_68 = &param0->position;
_69 = *_68;
_70 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_71 = (frost$core$Int) {7u};
_72 = *(&local1);
_73 = &param0->choiceCase;
_74 = *_73;
_75 = &_74->fields;
_76 = *_75;
_77 = &param0->index;
_78 = *_77;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from ChoiceFieldLValue.frost:47:34
_80 = (frost$core$Int) {0u};
_81 = _78.value;
_82 = _80.value;
_83 = _81 >= _82;
_84 = (frost$core$Bit) {_83};
_85 = _84.value;
if (_85) goto block11; else goto block10;
block11:;
_87 = ((frost$collections$CollectionView*) _76);
ITable* $tmp23 = _87->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp23 = $tmp23->next;
}
_88 = $tmp23->methods[0];
_89 = _88(_87);
_90 = _78.value;
_91 = _89.value;
_92 = _90 < _91;
_93 = (frost$core$Bit) {_92};
_94 = _93.value;
if (_94) goto block9; else goto block10;
block10:;
_96 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s24, _96, &$s25);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_100 = &_76->data;
_101 = *_100;
_102 = _101.value;
_103 = frost$core$Int64$init$frost$core$Int(_78);
_104 = _103.value;
_105 = ((frost$core$Object**)_102)[_104];
_106 = _105;
frost$core$Frost$ref$frost$core$Object$Q(_106);
_109 = ((org$frostlang$frostc$Type*) _105);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(_70, _71, _72, _109);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(_66, _67, _69, param1, _70);
_112 = ($fn26) _65->$class->vtable[2];
_113 = _112(_65, _66);
_114 = _105;
frost$core$Frost$unref$frost$core$Object$Q(_114);
_116 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_116);
_118 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_118);
return;

}
void org$frostlang$frostc$lvalue$ChoiceFieldLValue$cleanup(void* rawSelf) {
org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0 = (org$frostlang$frostc$lvalue$ChoiceFieldLValue*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
org$frostlang$frostc$IR$Value** _7;
org$frostlang$frostc$IR$Value* _8;
frost$core$Object* _9;
org$frostlang$frostc$ChoiceCase** _11;
org$frostlang$frostc$ChoiceCase* _12;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:9
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->compiler;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->target;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->choiceCase;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
return;

}

