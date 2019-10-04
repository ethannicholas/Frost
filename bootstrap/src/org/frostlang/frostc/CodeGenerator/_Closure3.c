#include "org/frostlang/frostc/CodeGenerator/_Closure3.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Code/Value.h"
#include "frost/core/Char8.h"
#include "frost/unsafe/Pointer.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$CodeGenerator$_Closure3$class_type org$frostlang$frostc$CodeGenerator$_Closure3$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$CodeGenerator$_Closure3$cleanup, org$frostlang$frostc$CodeGenerator$_Closure3$$anonymous2$frost$collections$CollectionView$T$R$frost$collections$CollectionView$map$U} };

typedef org$frostlang$frostc$Code$Value* (*$fn2)(frost$core$Char8);
typedef org$frostlang$frostc$Code$Value* (*$fn3)(frost$core$Object*, frost$core$Char8);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x33", 44, -8754958053537642105, NULL };

void org$frostlang$frostc$CodeGenerator$_Closure3$init$$LPfrost$core$Char8$RP$EQ$GT$LPorg$frostlang$frostc$Code$Value$RP(void* rawSelf, frost$core$MutableMethod* param1) {
org$frostlang$frostc$CodeGenerator$_Closure3* param0 = (org$frostlang$frostc$CodeGenerator$_Closure3*) rawSelf;

frost$core$Object* _1;
frost$core$MutableMethod** _3;
frost$core$MutableMethod* _4;
frost$core$Object* _5;
frost$core$MutableMethod** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CodeGenerator.frost:132
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->$method1;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->$method1;
*_7 = param1;
return;

}
void org$frostlang$frostc$CodeGenerator$_Closure3$cleanup(void* rawSelf) {
org$frostlang$frostc$CodeGenerator$_Closure3* param0 = (org$frostlang$frostc$CodeGenerator$_Closure3*) rawSelf;

frost$core$Object* _1;
frost$core$MutableMethod** _3;
frost$core$MutableMethod* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CodeGenerator.frost:132
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$method1;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
frost$core$Object* org$frostlang$frostc$CodeGenerator$_Closure3$$anonymous2$frost$collections$CollectionView$T$R$frost$collections$CollectionView$map$U(void* rawSelf, frost$core$Object* param1) {
org$frostlang$frostc$CodeGenerator$_Closure3* param0 = (org$frostlang$frostc$CodeGenerator$_Closure3*) rawSelf;

org$frostlang$frostc$Code$Value* local0 = NULL;
frost$core$MutableMethod** _1;
frost$core$MutableMethod* _2;
frost$core$Char8 _3;
frost$core$MutableMethod* _4;
int64_t* _5;
int64_t _6;
frost$core$Object** _7;
frost$core$Object* _8;
bool _9;
frost$unsafe$Pointer _11;
org$frostlang$frostc$Code$Value* _12;
frost$unsafe$Pointer _15;
org$frostlang$frostc$Code$Value* _16;
org$frostlang$frostc$Code$Value* _19;
frost$core$Object* _20;
frost$core$Object* _21;
frost$core$Object* _23;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CodeGenerator.frost:132
_1 = &param0->$method1;
_2 = *_1;
_3 = ((frost$core$Char8$wrapper*) param1)->value;
_4 = _2;
_5 = &_4->pointer;
_6 = *_5;
_7 = &_4->target;
_8 = *_7;
_9 = _8 != ((frost$core$Object*) NULL);
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$unsafe$Pointer) {_6};
_12 = (($fn2) _11.value)(_3);
*(&local0) = _12;
goto block3;
block1:;
_15 = (frost$unsafe$Pointer) {_6};
_16 = (($fn3) _15.value)(_8, _3);
*(&local0) = _16;
goto block3;
block3:;
_19 = *(&local0);
_20 = ((frost$core$Object*) _19);
_21 = _20;
frost$core$Frost$ref$frost$core$Object$Q(_21);
_23 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_23);
return _20;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




