#include "org/frostlang/frostc/lvalue/VariableLValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/lvalue/LValue.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Variable.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
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

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn8)(frost$core$Object*);
typedef frost$core$Int (*$fn11)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn15)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn16)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int (*$fn17)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn18)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn19)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn23)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$IR$Value* (*$fn24)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$Type* (*$fn25)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn26)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn27)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$IR$Value* (*$fn28)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$Type* (*$fn31)(org$frostlang$frostc$lvalue$VariableLValue*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn32)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x4c\x56\x61\x6c\x75\x65", 42, -7965962857027405548, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x79\x69\x6e\x67\x20\x74\x6f\x20\x73\x74\x6f\x72\x65\x20\x69\x6e\x74\x6f\x20\x6e\x6f\x6e\x2d\x6c\x6f\x63\x61\x6c\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20", 40, 1486801200006233533, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x61\x74\x20", 4, 299896688342426654, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x61\x72\x69\x61\x62\x6c\x65\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 20, -3684104756208286480, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x61\x72\x69\x61\x62\x6c\x65\x4c\x56\x61\x6c\x75\x65\x2e\x66\x72\x6f\x73\x74", 20, -3684104756208286480, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };

void org$frostlang$frostc$lvalue$VariableLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Variable(void* rawSelf, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$Variable* param3) {
org$frostlang$frostc$lvalue$VariableLValue* param0 = (org$frostlang$frostc$lvalue$VariableLValue*) rawSelf;

frost$core$Int local0;
frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
org$frostlang$frostc$Compiler** _7;
org$frostlang$frostc$Variable$Storage** _10;
org$frostlang$frostc$Variable$Storage* _11;
frost$core$Int* _12;
frost$core$Int _13;
frost$core$Int _14;
int64_t _17;
int64_t _18;
bool _19;
frost$core$Bit _20;
bool _22;
frost$core$Int* _24;
frost$core$Int _25;
frost$core$Int _28;
frost$core$Int* _29;
org$frostlang$frostc$Position* _75;
frost$core$Int _33;
frost$core$Object* _34;
$fn2 _37;
frost$core$String* _38;
frost$core$String* _39;
frost$core$Object* _40;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$String* _47;
frost$core$Object* _48;
$fn3 _51;
frost$core$String* _52;
frost$core$String* _53;
frost$core$Object* _54;
frost$core$Object* _56;
frost$core$Object* _58;
frost$core$String* _61;
frost$core$Object* _63;
frost$core$Object* _65;
frost$core$Object* _67;
frost$core$Object* _69;
frost$core$Object* _71;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:17
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->compiler;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->compiler;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:18
_10 = &param3->storage;
_11 = *_10;
_12 = &_11->$rawValue;
_13 = *_12;
_14 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from VariableLValue.frost:19:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_17 = _13.value;
_18 = _14.value;
_19 = _17 == _18;
_20 = (frost$core$Bit) {_19};
_22 = _20.value;
if (_22) goto block2; else goto block3;
block2:;
_24 = &_11->$data.$LOCAL.field0;
_25 = *_24;
*(&local0) = _25;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:20
_28 = *(&local0);
_29 = &param0->slot;
*_29 = _28;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:26
_75 = &param0->position;
*_75 = param2;
return;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:23
_33 = (frost$core$Int) {23u};
_34 = ((frost$core$Object*) param3);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from VariableLValue.frost:23:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_37 = ($fn4) _34->$class->vtable[0];
_38 = _37(_34);
_39 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5, _38);
_40 = ((frost$core$Object*) _39);
frost$core$Frost$ref$frost$core$Object$Q(_40);
_42 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_44);
_47 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_39, &$s6);
org$frostlang$frostc$Position$wrapper* $tmp7;
$tmp7 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Position$wrapper), (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp7->value = param2;
_48 = ((frost$core$Object*) $tmp7);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from VariableLValue.frost:23:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_51 = ($fn8) _48->$class->vtable[0];
_52 = _51(_48);
_53 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_47, _52);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$ref$frost$core$Object$Q(_54);
_56 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_56);
_58 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_58);
_61 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_53, &$s9);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _33, _61);
_63 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_63);
_65 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_65);
_67 = _48;
frost$core$Frost$unref$frost$core$Object$Q(_67);
_69 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_69);
_71 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_71);
abort(); // unreachable

}
org$frostlang$frostc$Type* org$frostlang$frostc$lvalue$VariableLValue$type$R$org$frostlang$frostc$Type(void* rawSelf) {
org$frostlang$frostc$lvalue$VariableLValue* param0 = (org$frostlang$frostc$lvalue$VariableLValue*) rawSelf;

org$frostlang$frostc$Compiler** _1;
org$frostlang$frostc$Compiler* _2;
org$frostlang$frostc$IR** _3;
org$frostlang$frostc$IR* _4;
frost$collections$Array** _5;
frost$collections$Array* _6;
frost$collections$Array* _7;
frost$core$Int* _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
bool _16;
frost$collections$CollectionView* _18;
$fn11 _19;
frost$core$Int _20;
int64_t _21;
int64_t _22;
bool _23;
frost$core$Bit _24;
bool _25;
frost$core$Int _27;
frost$core$Object*** _31;
frost$core$Object** _32;
frost$core$Int64 _33;
int64_t _34;
frost$core$Object* _35;
frost$core$Object* _36;
org$frostlang$frostc$Type* _39;
frost$core$Object* _40;
frost$core$Object* _42;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:31
_1 = &param0->compiler;
_2 = *_1;
_3 = &_2->ir;
_4 = *_3;
_5 = &_4->locals;
_6 = *_5;
_7 = _6;
_8 = &param0->slot;
_9 = *_8;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from VariableLValue.frost:31:34
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 >= _13;
_15 = (frost$core$Bit) {_14};
_16 = _15.value;
if (_16) goto block4; else goto block3;
block4:;
_18 = ((frost$collections$CollectionView*) _7);
ITable* $tmp12 = _18->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
_19 = $tmp12->methods[0];
_20 = _19(_18);
_21 = _9.value;
_22 = _20.value;
_23 = _21 < _22;
_24 = (frost$core$Bit) {_23};
_25 = _24.value;
if (_25) goto block2; else goto block3;
block3:;
_27 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _27, &$s14);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_31 = &_7->data;
_32 = *_31;
_33 = frost$core$Int64$init$frost$core$Int(_9);
_34 = _33.value;
_35 = _32[_34];
_36 = _35;
frost$core$Frost$ref$frost$core$Object$Q(_36);
_39 = ((org$frostlang$frostc$Type*) _35);
_40 = ((frost$core$Object*) _39);
frost$core$Frost$ref$frost$core$Object$Q(_40);
_42 = _35;
frost$core$Frost$unref$frost$core$Object$Q(_42);
return _39;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$lvalue$VariableLValue$compileLoad$R$org$frostlang$frostc$IR$Value$Q(void* rawSelf) {
org$frostlang$frostc$lvalue$VariableLValue* param0 = (org$frostlang$frostc$lvalue$VariableLValue*) rawSelf;

org$frostlang$frostc$IR$Statement$ID local0;
org$frostlang$frostc$Compiler** _1;
org$frostlang$frostc$Compiler* _2;
org$frostlang$frostc$IR** _3;
org$frostlang$frostc$IR* _4;
org$frostlang$frostc$IR$Statement* _5;
frost$core$Int _6;
org$frostlang$frostc$Position* _7;
org$frostlang$frostc$Position _8;
org$frostlang$frostc$IR$Value* _9;
frost$core$Int _10;
frost$core$Int* _11;
frost$core$Int _12;
$fn15 _13;
org$frostlang$frostc$Type* _14;
$fn16 _17;
org$frostlang$frostc$IR$Statement$ID _18;
frost$core$Object* _20;
frost$core$Object* _22;
frost$core$Object* _24;
org$frostlang$frostc$IR$Value* _27;
frost$core$Int _28;
org$frostlang$frostc$IR$Statement$ID _29;
org$frostlang$frostc$Compiler** _30;
org$frostlang$frostc$Compiler* _31;
org$frostlang$frostc$IR** _32;
org$frostlang$frostc$IR* _33;
frost$collections$Array** _34;
frost$collections$Array* _35;
frost$collections$Array* _36;
frost$core$Int* _37;
frost$core$Int _38;
frost$core$Int _40;
int64_t _41;
int64_t _42;
bool _43;
frost$core$Bit _44;
bool _45;
frost$collections$CollectionView* _47;
$fn17 _48;
frost$core$Int _49;
int64_t _50;
int64_t _51;
bool _52;
frost$core$Bit _53;
bool _54;
frost$core$Int _56;
frost$core$Object*** _60;
frost$core$Object** _61;
frost$core$Int64 _62;
int64_t _63;
frost$core$Object* _64;
frost$core$Object* _65;
org$frostlang$frostc$Type* _68;
org$frostlang$frostc$IR$Value* _70;
frost$core$Object* _71;
frost$core$Object* _73;
frost$core$Object* _75;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:36
_1 = &param0->compiler;
_2 = *_1;
_3 = &_2->ir;
_4 = *_3;
_5 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_6 = (frost$core$Int) {14u};
_7 = &param0->position;
_8 = *_7;
_9 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_10 = (frost$core$Int) {2u};
_11 = &param0->slot;
_12 = *_11;
_13 = ($fn18) param0->$class->vtable[2];
_14 = _13(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type(_9, _10, _12, _14);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_5, _6, _8, _9);
_17 = ($fn19) _4->$class->vtable[2];
_18 = _17(_4, _5);
*(&local0) = _18;
_20 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_22 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_24);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:37
_27 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_28 = (frost$core$Int) {7u};
_29 = *(&local0);
_30 = &param0->compiler;
_31 = *_30;
_32 = &_31->ir;
_33 = *_32;
_34 = &_33->locals;
_35 = *_34;
_36 = _35;
_37 = &param0->slot;
_38 = *_37;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from VariableLValue.frost:37:55
_40 = (frost$core$Int) {0u};
_41 = _38.value;
_42 = _40.value;
_43 = _41 >= _42;
_44 = (frost$core$Bit) {_43};
_45 = _44.value;
if (_45) goto block4; else goto block3;
block4:;
_47 = ((frost$collections$CollectionView*) _36);
ITable* $tmp20 = _47->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp20 = $tmp20->next;
}
_48 = $tmp20->methods[0];
_49 = _48(_47);
_50 = _38.value;
_51 = _49.value;
_52 = _50 < _51;
_53 = (frost$core$Bit) {_52};
_54 = _53.value;
if (_54) goto block2; else goto block3;
block3:;
_56 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s21, _56, &$s22);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_60 = &_36->data;
_61 = *_60;
_62 = frost$core$Int64$init$frost$core$Int(_38);
_63 = _62.value;
_64 = _61[_63];
_65 = _64;
frost$core$Frost$ref$frost$core$Object$Q(_65);
_68 = ((org$frostlang$frostc$Type*) _64);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(_27, _28, _29, _68);
_70 = _27;
_71 = ((frost$core$Object*) _70);
frost$core$Frost$ref$frost$core$Object$Q(_71);
_73 = _64;
frost$core$Frost$unref$frost$core$Object$Q(_73);
_75 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_75);
return _70;

}
void org$frostlang$frostc$lvalue$VariableLValue$compileStore$org$frostlang$frostc$IR$Value(void* rawSelf, org$frostlang$frostc$IR$Value* param1) {
org$frostlang$frostc$lvalue$VariableLValue* param0 = (org$frostlang$frostc$lvalue$VariableLValue*) rawSelf;

frost$core$Bit local0;
org$frostlang$frostc$Compiler** _1;
org$frostlang$frostc$Compiler* _2;
$fn23 _3;
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
org$frostlang$frostc$Compiler** _40;
org$frostlang$frostc$Compiler* _41;
$fn24 _42;
org$frostlang$frostc$IR$Value* _43;
bool _44;
frost$core$Bit _45;
bool _46;
frost$core$Int _48;
org$frostlang$frostc$IR$Value* _51;
frost$core$Object* _53;
org$frostlang$frostc$Compiler** _57;
org$frostlang$frostc$Compiler* _58;
org$frostlang$frostc$IR** _59;
org$frostlang$frostc$IR* _60;
org$frostlang$frostc$IR$Statement* _61;
frost$core$Int _62;
org$frostlang$frostc$Position* _63;
org$frostlang$frostc$Position _64;
org$frostlang$frostc$IR$Value* _65;
frost$core$Int _66;
frost$core$Int* _67;
frost$core$Int _68;
$fn25 _69;
org$frostlang$frostc$Type* _70;
$fn26 _73;
org$frostlang$frostc$IR$Statement$ID _74;
frost$core$Object* _75;
frost$core$Object* _77;
frost$core$Object* _79;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:42
_1 = &param0->compiler;
_2 = *_1;
_3 = ($fn27) param0->$class->vtable[2];
_4 = _3(param0);
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from VariableLValue.frost:42:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:664
_7 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(_4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:664:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_10 = _7.value;
_11 = !_10;
_12 = (frost$core$Bit) {_11};
_14 = _12.value;
if (_14) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:665
_17 = (frost$core$Bit) {false};
*(&local0) = _17;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:667
_21 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(_2, _4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:667:16
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:43
_36 = &param0->compiler;
_37 = *_36;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(_37, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:44
_40 = &param0->compiler;
_41 = *_40;
_42 = ($fn28) param0->$class->vtable[3];
_43 = _42(param0);
_44 = _43 != NULL;
_45 = (frost$core$Bit) {_44};
_46 = _45.value;
if (_46) goto block8; else goto block9;
block9:;
_48 = (frost$core$Int) {44u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s29, _48, &$s30);
abort(); // unreachable
block8:;
_51 = _43;
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value(_41, _51);
_53 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_53);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:46
_57 = &param0->compiler;
_58 = *_57;
_59 = &_58->ir;
_60 = *_59;
_61 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_62 = (frost$core$Int) {27u};
_63 = &param0->position;
_64 = *_63;
_65 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_66 = (frost$core$Int) {2u};
_67 = &param0->slot;
_68 = *_67;
_69 = ($fn31) param0->$class->vtable[2];
_70 = _69(param0);
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type(_65, _66, _68, _70);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(_61, _62, _64, param1, _65);
_73 = ($fn32) _60->$class->vtable[2];
_74 = _73(_60, _61);
_75 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_75);
_77 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_77);
_79 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_79);
return;

}
void org$frostlang$frostc$lvalue$VariableLValue$cleanup(void* rawSelf) {
org$frostlang$frostc$lvalue$VariableLValue* param0 = (org$frostlang$frostc$lvalue$VariableLValue*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/lvalue/VariableLValue.frost:9
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->compiler;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}

