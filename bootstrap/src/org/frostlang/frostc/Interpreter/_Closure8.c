#include "org/frostlang/frostc/Interpreter/_Closure8.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"
#include "frost/unsafe/Pointer.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$Interpreter$_Closure8$class_type org$frostlang$frostc$Interpreter$_Closure8$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Interpreter$_Closure8$cleanup, org$frostlang$frostc$Interpreter$_Closure8$$anonymous7$frost$collections$CollectionView$T$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T} };

typedef frost$core$Int (*$fn2)(frost$core$Int, frost$core$Int);
typedef frost$core$Int (*$fn3)(frost$core$Object*, frost$core$Int, frost$core$Int);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x38", 42, -1381942175872046362, NULL };

void org$frostlang$frostc$Interpreter$_Closure8$init$$LPfrost$core$Int$Cfrost$core$Int$RP$EQ$GT$LPfrost$core$Int$RP(void* rawSelf, frost$core$MutableMethod* param1) {
org$frostlang$frostc$Interpreter$_Closure8* param0 = (org$frostlang$frostc$Interpreter$_Closure8*) rawSelf;

frost$core$Object* _1;
frost$core$MutableMethod** _3;
frost$core$MutableMethod* _4;
frost$core$Object* _5;
frost$core$MutableMethod** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:222
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->$method2;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->$method2;
*_7 = param1;
return;

}
void org$frostlang$frostc$Interpreter$_Closure8$cleanup(void* rawSelf) {
org$frostlang$frostc$Interpreter$_Closure8* param0 = (org$frostlang$frostc$Interpreter$_Closure8*) rawSelf;

frost$core$Object* _1;
frost$core$MutableMethod** _3;
frost$core$MutableMethod* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:222
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$method2;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
frost$core$Object* org$frostlang$frostc$Interpreter$_Closure8$$anonymous7$frost$collections$CollectionView$T$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T(void* rawSelf, frost$core$Object* param1, frost$core$Object* param2) {
org$frostlang$frostc$Interpreter$_Closure8* param0 = (org$frostlang$frostc$Interpreter$_Closure8*) rawSelf;

frost$core$Int local0;
frost$core$MutableMethod** _1;
frost$core$MutableMethod* _2;
frost$core$Int _3;
frost$core$Int _4;
frost$core$MutableMethod* _5;
int64_t* _6;
int64_t _7;
frost$core$Object** _8;
frost$core$Object* _9;
bool _10;
frost$unsafe$Pointer _12;
frost$core$Int _13;
frost$unsafe$Pointer _16;
frost$core$Int _17;
frost$core$Int _20;
frost$core$Object* _21;
frost$core$Object* _22;
frost$core$Object* _24;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:222
_1 = &param0->$method2;
_2 = *_1;
_3 = ((frost$core$Int$wrapper*) param1)->value;
_4 = ((frost$core$Int$wrapper*) param2)->value;
_5 = _2;
_6 = &_5->pointer;
_7 = *_6;
_8 = &_5->target;
_9 = *_8;
_10 = _9 != ((frost$core$Object*) NULL);
if (_10) goto block1; else goto block2;
block2:;
_12 = (frost$unsafe$Pointer) {_7};
_13 = (($fn2) _12.value)(_3, _4);
*(&local0) = _13;
goto block3;
block1:;
_16 = (frost$unsafe$Pointer) {_7};
_17 = (($fn3) _16.value)(_9, _3, _4);
*(&local0) = _17;
goto block3;
block3:;
_20 = *(&local0);
frost$core$Int$wrapper* $tmp4;
$tmp4 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp4->value = _20;
_21 = ((frost$core$Object*) $tmp4);
_22 = _21;
frost$core$Frost$ref$frost$core$Object$Q(_22);
_24 = _21;
frost$core$Frost$unref$frost$core$Object$Q(_24);
return _21;

}

