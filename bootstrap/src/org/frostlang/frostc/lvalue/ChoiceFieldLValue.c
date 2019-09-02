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
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Equatable.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
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
typedef frost$core$Int (*$fn11)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn16)(org$frostlang$frostc$lvalue$ChoiceFieldLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn17)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int (*$fn18)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn19)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn20)(org$frostlang$frostc$lvalue$ChoiceFieldLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn21)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn25)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65", 45, -2381040971898687521, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 23, 3695017846869358131, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x69\x6e\x69\x74\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2c\x20\x63\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x2c\x20\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29", 259, 7570709601419522468, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -775704626125802412, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x68\x6f\x69\x63\x65\x46\x69\x65\x6c\x64\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 23, 3695017846869358131, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -775704626125802412, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };

void org$frostlang$frostc$lvalue$ChoiceFieldLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$ChoiceCase* param4, frost$core$Int param5) {

frost$core$Bit local0;
$fn2 _0;
org$frostlang$frostc$Type* _1;
frost$core$Weak** _2;
frost$core$Weak* _3;
frost$core$Weak* _4;
frost$core$Bit* _9;
frost$core$Bit _10;
bool _12;
frost$core$Int _14;
frost$core$Object** _18;
frost$core$Object* _19;
frost$core$Object* _20;
frost$core$Object* _21;
org$frostlang$frostc$ClassDecl* _24;
org$frostlang$frostc$Type** _25;
org$frostlang$frostc$Type* _26;
org$frostlang$frostc$Symbol* _29;
frost$core$String** _30;
frost$core$String* _31;
org$frostlang$frostc$Symbol* _32;
frost$core$String** _33;
frost$core$String* _34;
frost$core$Bit _35;
bool _36;
org$frostlang$frostc$Type$Kind* _38;
org$frostlang$frostc$Type$Kind _39;
frost$core$Equatable* _40;
frost$core$Equatable* _41;
org$frostlang$frostc$Type$Kind* _42;
org$frostlang$frostc$Type$Kind _43;
frost$core$Equatable* _44;
$fn3 _45;
frost$core$Bit _46;
frost$core$Object* _47;
frost$core$Object* _49;
frost$core$Bit _55;
bool _57;
frost$core$Object* _58;
frost$core$Object* _60;
frost$core$Int _63;
frost$core$Object* _67;
org$frostlang$frostc$Compiler** _69;
org$frostlang$frostc$Compiler* _70;
frost$core$Object* _71;
org$frostlang$frostc$Compiler** _73;
frost$core$Object* _76;
org$frostlang$frostc$IR$Value** _78;
org$frostlang$frostc$IR$Value* _79;
frost$core$Object* _80;
org$frostlang$frostc$IR$Value** _82;
frost$core$Object* _85;
org$frostlang$frostc$ChoiceCase** _87;
org$frostlang$frostc$ChoiceCase* _88;
frost$core$Object* _89;
org$frostlang$frostc$ChoiceCase** _91;
frost$core$Int* _94;
_0 = ($fn4) param3->$class->vtable[2];
_1 = _0(param3);
_2 = &param4->owner;
_3 = *_2;
_4 = _3;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ChoiceFieldLValue.frost:20:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
_9 = &_4->_valid;
_10 = *_9;
_12 = _10.value;
if (_12) goto block5; else goto block6;
block6:;
_14 = (frost$core$Int) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s5, _14);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
_18 = &_4->value;
_19 = *_18;
_20 = _19;
_21 = _20;
frost$core$Frost$ref$frost$core$Object$Q(_21);
_24 = ((org$frostlang$frostc$ClassDecl*) _20);
_25 = &_24->type;
_26 = *_25;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from ChoiceFieldLValue.frost:20:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
_29 = ((org$frostlang$frostc$Symbol*) _1);
_30 = &_29->name;
_31 = *_30;
_32 = ((org$frostlang$frostc$Symbol*) _26);
_33 = &_32->name;
_34 = *_33;
_35 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_31, _34);
_36 = _35.value;
if (_36) goto block8; else goto block9;
block8:;
_38 = &_1->typeKind;
_39 = *_38;
org$frostlang$frostc$Type$Kind$wrapper* $tmp6;
$tmp6 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp6->value = _39;
_40 = ((frost$core$Equatable*) $tmp6);
_41 = _40;
_42 = &_26->typeKind;
_43 = *_42;
org$frostlang$frostc$Type$Kind$wrapper* $tmp7;
$tmp7 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp7->value = _43;
_44 = ((frost$core$Equatable*) $tmp7);
ITable* $tmp8 = _41->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp8 = $tmp8->next;
}
_45 = $tmp8->methods[0];
_46 = _45(_41, _44);
_47 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_47);
_49 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_49);
*(&local0) = _46;
goto block10;
block9:;
*(&local0) = _35;
goto block10;
block10:;
_55 = *(&local0);
_57 = _55.value;
_58 = _20;
frost$core$Frost$unref$frost$core$Object$Q(_58);
_60 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_60);
if (_57) goto block1; else goto block2;
block2:;
_63 = (frost$core$Int) {21u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _63, &$s10);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:23
_67 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_67);
_69 = &param0->compiler;
_70 = *_69;
_71 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_71);
_73 = &param0->compiler;
*_73 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:24
_76 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_76);
_78 = &param0->target;
_79 = *_78;
_80 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_80);
_82 = &param0->target;
*_82 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:25
_85 = ((frost$core$Object*) param4);
frost$core$Frost$ref$frost$core$Object$Q(_85);
_87 = &param0->choiceCase;
_88 = *_87;
_89 = ((frost$core$Object*) _88);
frost$core$Frost$unref$frost$core$Object$Q(_89);
_91 = &param0->choiceCase;
*_91 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:26
_94 = &param0->index;
*_94 = param5;
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$ChoiceFieldLValue$type$R$org$frostlang$frostc$Type(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0) {

org$frostlang$frostc$ChoiceCase** _1;
org$frostlang$frostc$ChoiceCase* _2;
frost$collections$Array** _3;
frost$collections$Array* _4;
frost$collections$Array* _5;
frost$core$Int* _6;
frost$core$Int _7;
frost$core$Int _9;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _14;
frost$collections$CollectionView* _16;
$fn11 _17;
frost$core$Int _18;
int64_t _19;
int64_t _20;
bool _21;
frost$core$Bit _22;
bool _23;
frost$core$Int _25;
frost$core$Object*** _29;
frost$core$Object** _30;
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
_5 = _4;
_6 = &param0->index;
_7 = *_6;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from ChoiceFieldLValue.frost:31:33
_9 = (frost$core$Int) {0u};
_10 = _7.value;
_11 = _9.value;
_12 = _10 >= _11;
_13 = (frost$core$Bit) {_12};
_14 = _13.value;
if (_14) goto block4; else goto block3;
block4:;
_16 = ((frost$collections$CollectionView*) _5);
ITable* $tmp12 = _16->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
_17 = $tmp12->methods[0];
_18 = _17(_16);
_19 = _7.value;
_20 = _18.value;
_21 = _19 < _20;
_22 = (frost$core$Bit) {_21};
_23 = _22.value;
if (_23) goto block2; else goto block3;
block3:;
_25 = (frost$core$Int) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _25, &$s14);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
_29 = &_5->data;
_30 = *_29;
_31 = frost$core$Int64$init$frost$core$Int(_7);
_32 = _31.value;
_33 = _30[_32];
_34 = _33;
frost$core$Frost$ref$frost$core$Object$Q(_34);
_37 = ((org$frostlang$frostc$Type*) _33);
_38 = ((frost$core$Object*) _37);
frost$core$Frost$ref$frost$core$Object$Q(_38);
_40 = _33;
frost$core$Frost$unref$frost$core$Object$Q(_40);
return _37;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:36
_1 = (frost$core$Int) {36u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s15, _1);
abort(); // unreachable

}
void org$frostlang$frostc$lvalue$ChoiceFieldLValue$compileStore$org$frostlang$frostc$IR$Value(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0, org$frostlang$frostc$IR$Value* param1) {

frost$core$Bit local0;
org$frostlang$frostc$IR$Statement$ID local1;
org$frostlang$frostc$Compiler** _1;
org$frostlang$frostc$Compiler* _2;
$fn16 _3;
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
org$frostlang$frostc$Position* _47;
org$frostlang$frostc$Position _48;
org$frostlang$frostc$IR$Value** _49;
org$frostlang$frostc$IR$Value* _50;
org$frostlang$frostc$ChoiceCase** _51;
org$frostlang$frostc$ChoiceCase* _52;
frost$core$Int* _53;
frost$core$Int _54;
$fn17 _56;
org$frostlang$frostc$IR$Statement$ID _57;
frost$core$Object* _59;
org$frostlang$frostc$Compiler** _62;
org$frostlang$frostc$Compiler* _63;
org$frostlang$frostc$IR** _64;
org$frostlang$frostc$IR* _65;
org$frostlang$frostc$IR$Statement* _66;
frost$core$Int _67;
org$frostlang$frostc$Position* _68;
org$frostlang$frostc$Position _69;
org$frostlang$frostc$IR$Value* _70;
frost$core$Int _71;
org$frostlang$frostc$IR$Statement$ID _72;
org$frostlang$frostc$ChoiceCase** _73;
org$frostlang$frostc$ChoiceCase* _74;
frost$collections$Array** _75;
frost$collections$Array* _76;
frost$collections$Array* _77;
frost$core$Int* _78;
frost$core$Int _79;
frost$core$Int _81;
int64_t _82;
int64_t _83;
bool _84;
frost$core$Bit _85;
bool _86;
frost$collections$CollectionView* _88;
$fn18 _89;
frost$core$Int _90;
int64_t _91;
int64_t _92;
bool _93;
frost$core$Bit _94;
bool _95;
frost$core$Int _97;
frost$core$Object*** _101;
frost$core$Object** _102;
frost$core$Int64 _103;
int64_t _104;
frost$core$Object* _105;
frost$core$Object* _106;
org$frostlang$frostc$Type* _109;
$fn19 _112;
org$frostlang$frostc$IR$Statement$ID _113;
frost$core$Object* _114;
frost$core$Object* _116;
frost$core$Object* _118;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:41
_1 = &param0->compiler;
_2 = *_1;
_3 = ($fn20) param0->$class->vtable[2];
_4 = _3(param0);
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from ChoiceFieldLValue.frost:41:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:661
_7 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(_4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:661:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
_10 = _7.value;
_11 = !_10;
_12 = (frost$core$Bit) {_11};
_14 = _12.value;
if (_14) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:662
_17 = (frost$core$Bit) {false};
*(&local0) = _17;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:664
_21 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(_2, _4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:664:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
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
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
_45 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_46 = (frost$core$Int) {4u};
_47 = &param0->position;
_48 = *_47;
_49 = &param0->target;
_50 = *_49;
_51 = &param0->choiceCase;
_52 = *_51;
_53 = &param0->index;
_54 = *_53;
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int(_45, _46, _48, _50, _52, _54);
_56 = ($fn21) _44->$class->vtable[2];
_57 = _56(_44, _45);
*(&local1) = _57;
_59 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_59);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/ChoiceFieldLValue.frost:46
_62 = &param0->compiler;
_63 = *_62;
_64 = &_63->ir;
_65 = *_64;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
_66 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_67 = (frost$core$Int) {27u};
_68 = &param0->position;
_69 = *_68;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
_70 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_71 = (frost$core$Int) {7u};
_72 = *(&local1);
_73 = &param0->choiceCase;
_74 = *_73;
_75 = &_74->fields;
_76 = *_75;
_77 = _76;
_78 = &param0->index;
_79 = *_78;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from ChoiceFieldLValue.frost:47:34
_81 = (frost$core$Int) {0u};
_82 = _79.value;
_83 = _81.value;
_84 = _82 >= _83;
_85 = (frost$core$Bit) {_84};
_86 = _85.value;
if (_86) goto block11; else goto block10;
block11:;
_88 = ((frost$collections$CollectionView*) _77);
ITable* $tmp22 = _88->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp22 = $tmp22->next;
}
_89 = $tmp22->methods[0];
_90 = _89(_88);
_91 = _79.value;
_92 = _90.value;
_93 = _91 < _92;
_94 = (frost$core$Bit) {_93};
_95 = _94.value;
if (_95) goto block9; else goto block10;
block10:;
_97 = (frost$core$Int) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s23, _97, &$s24);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
_101 = &_77->data;
_102 = *_101;
_103 = frost$core$Int64$init$frost$core$Int(_79);
_104 = _103.value;
_105 = _102[_104];
_106 = _105;
frost$core$Frost$ref$frost$core$Object$Q(_106);
_109 = ((org$frostlang$frostc$Type*) _105);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(_70, _71, _72, _109);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(_66, _67, _69, param1, _70);
_112 = ($fn25) _65->$class->vtable[2];
_113 = _112(_65, _66);
_114 = _105;
frost$core$Frost$unref$frost$core$Object$Q(_114);
_116 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_116);
_118 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_118);
return;

}
void org$frostlang$frostc$lvalue$ChoiceFieldLValue$cleanup(org$frostlang$frostc$lvalue$ChoiceFieldLValue* param0) {

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

