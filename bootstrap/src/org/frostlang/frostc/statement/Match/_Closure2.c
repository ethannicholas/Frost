#include "org/frostlang/frostc/statement/Match/_Closure2.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/MethodPosition.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/collections/Stack.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/MethodDecl.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Match$_Closure2$class_type org$frostlang$frostc$statement$Match$_Closure2$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Match$_Closure2$cleanup, org$frostlang$frostc$statement$Match$_Closure2$$anonymous1$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$MethodPosition} };

typedef org$frostlang$frostc$Position (*$fn2)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Int (*$fn3)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn5)(org$frostlang$frostc$ASTNode*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x4d\x61\x74\x63\x68\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32", 46, 5619203075714238740, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };

void org$frostlang$frostc$statement$Match$_Closure2$init$org$frostlang$frostc$Compiler(void* rawSelf, org$frostlang$frostc$Compiler* param1) {
org$frostlang$frostc$statement$Match$_Closure2* param0 = (org$frostlang$frostc$statement$Match$_Closure2*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
org$frostlang$frostc$Compiler** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:51
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->compiler;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->compiler;
*_7 = param1;
return;

}
void org$frostlang$frostc$statement$Match$_Closure2$cleanup(void* rawSelf) {
org$frostlang$frostc$statement$Match$_Closure2* param0 = (org$frostlang$frostc$statement$Match$_Closure2*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:51
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->compiler;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
org$frostlang$frostc$MethodPosition org$frostlang$frostc$statement$Match$_Closure2$$anonymous1$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$MethodPosition(void* rawSelf, org$frostlang$frostc$ASTNode* param1) {
org$frostlang$frostc$statement$Match$_Closure2* param0 = (org$frostlang$frostc$statement$Match$_Closure2*) rawSelf;

$fn2 _1;
org$frostlang$frostc$Position _2;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$collections$Stack** _7;
frost$collections$Stack* _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
bool _16;
frost$core$Int _18;
int64_t _19;
int64_t _20;
bool _21;
frost$core$Bit _22;
bool _23;
frost$core$Int _25;
frost$collections$Array** _29;
frost$collections$Array* _30;
frost$collections$CollectionView* _31;
$fn3 _32;
frost$core$Int _33;
int64_t _34;
int64_t _35;
bool _36;
frost$core$Bit _37;
bool _38;
frost$core$Int _40;
frost$collections$Array** _44;
frost$collections$Array* _45;
frost$collections$Array** _46;
frost$collections$Array* _47;
frost$collections$CollectionView* _48;
$fn4 _49;
frost$core$Int _50;
frost$core$Int _51;
int64_t _52;
int64_t _53;
int64_t _54;
frost$core$Int _55;
int64_t _56;
int64_t _57;
int64_t _58;
frost$core$Int _59;
frost$core$Object* _60;
frost$core$Object* _61;
frost$core$Object* _62;
frost$core$Object* _64;
org$frostlang$frostc$MethodDecl* _67;
frost$core$Int* _68;
frost$core$Int _69;
frost$core$Object* _70;
org$frostlang$frostc$MethodPosition _73;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:52
_1 = ($fn5) param1->$class->vtable[2];
_2 = _1(param1);
_3 = &param0->compiler;
_4 = *_3;
// begin inline call to function org.frostlang.frostc.Compiler.get_currentMethodIndex():frost.core.Int from Match.frost:52:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:676
_7 = &_4->currentMethod;
_8 = *_7;
_9 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Compiler.frost:676:29
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 >= _13;
_15 = (frost$core$Bit) {_14};
_16 = _15.value;
if (_16) goto block5; else goto block4;
block5:;
_18 = frost$collections$Stack$get_count$R$frost$core$Int(_8);
_19 = _9.value;
_20 = _18.value;
_21 = _19 < _20;
_22 = (frost$core$Bit) {_21};
_23 = _22.value;
if (_23) goto block3; else goto block4;
block4:;
_25 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _25, &$s7);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_29 = &_8->contents;
_30 = *_29;
_31 = ((frost$collections$CollectionView*) _30);
ITable* $tmp8 = _31->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp8 = $tmp8->next;
}
_32 = $tmp8->methods[0];
_33 = _32(_31);
_34 = _33.value;
_35 = _9.value;
_36 = _34 > _35;
_37 = (frost$core$Bit) {_36};
_38 = _37.value;
if (_38) goto block6; else goto block7;
block7:;
_40 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s9, _40);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_44 = &_8->contents;
_45 = *_44;
_46 = &_8->contents;
_47 = *_46;
_48 = ((frost$collections$CollectionView*) _47);
ITable* $tmp10 = _48->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp10 = $tmp10->next;
}
_49 = $tmp10->methods[0];
_50 = _49(_48);
_51 = (frost$core$Int) {1u};
_52 = _50.value;
_53 = _51.value;
_54 = _52 - _53;
_55 = (frost$core$Int) {_54};
_56 = _55.value;
_57 = _9.value;
_58 = _56 - _57;
_59 = (frost$core$Int) {_58};
_60 = frost$collections$Array$$IDX$frost$core$Int$R$frost$collections$Array$T(_45, _59);
_61 = _60;
_62 = _61;
frost$core$Frost$ref$frost$core$Object$Q(_62);
_64 = _60;
frost$core$Frost$unref$frost$core$Object$Q(_64);
_67 = ((org$frostlang$frostc$MethodDecl*) _61);
_68 = &_67->index;
_69 = *_68;
_70 = _61;
frost$core$Frost$unref$frost$core$Object$Q(_70);
_73 = org$frostlang$frostc$MethodPosition$init$org$frostlang$frostc$Position$frost$core$Int(_2, _69);
return _73;

}






