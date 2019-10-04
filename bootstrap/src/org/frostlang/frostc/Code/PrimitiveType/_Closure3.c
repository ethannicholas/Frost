#include "org/frostlang/frostc/Code/PrimitiveType/_Closure3.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Code/PrimitiveType.h"
#include "frost/unsafe/Pointer.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$Code$PrimitiveType$_Closure3$class_type org$frostlang$frostc$Code$PrimitiveType$_Closure3$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Code$PrimitiveType$_Closure3$cleanup, org$frostlang$frostc$Code$PrimitiveType$_Closure3$$anonymous2$frost$collections$CollectionView$T$R$frost$collections$CollectionView$map$U} };

typedef frost$core$Int (*$fn2)(org$frostlang$frostc$Code$PrimitiveType*);
typedef frost$core$Int (*$fn3)(frost$core$Object*, org$frostlang$frostc$Code$PrimitiveType*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x2e\x50\x72\x69\x6d\x69\x74\x69\x76\x65\x54\x79\x70\x65\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x33", 49, -6188573941749115809, NULL };

void org$frostlang$frostc$Code$PrimitiveType$_Closure3$init$$LPorg$frostlang$frostc$Code$PrimitiveType$RP$EQ$GT$LPfrost$core$Int$RP(void* rawSelf, frost$core$MutableMethod* param1) {
org$frostlang$frostc$Code$PrimitiveType$_Closure3* param0 = (org$frostlang$frostc$Code$PrimitiveType$_Closure3*) rawSelf;

frost$core$Object* _1;
frost$core$MutableMethod** _3;
frost$core$MutableMethod* _4;
frost$core$Object* _5;
frost$core$MutableMethod** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:110
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
void org$frostlang$frostc$Code$PrimitiveType$_Closure3$cleanup(void* rawSelf) {
org$frostlang$frostc$Code$PrimitiveType$_Closure3* param0 = (org$frostlang$frostc$Code$PrimitiveType$_Closure3*) rawSelf;

frost$core$Object* _1;
frost$core$MutableMethod** _3;
frost$core$MutableMethod* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:110
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$method2;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
frost$core$Object* org$frostlang$frostc$Code$PrimitiveType$_Closure3$$anonymous2$frost$collections$CollectionView$T$R$frost$collections$CollectionView$map$U(void* rawSelf, frost$core$Object* param1) {
org$frostlang$frostc$Code$PrimitiveType$_Closure3* param0 = (org$frostlang$frostc$Code$PrimitiveType$_Closure3*) rawSelf;

frost$core$Int local0;
frost$core$MutableMethod** _1;
frost$core$MutableMethod* _2;
org$frostlang$frostc$Code$PrimitiveType* _3;
frost$core$MutableMethod* _4;
int64_t* _5;
int64_t _6;
frost$core$Object** _7;
frost$core$Object* _8;
bool _9;
frost$unsafe$Pointer _11;
frost$core$Int _12;
frost$unsafe$Pointer _15;
frost$core$Int _16;
frost$core$Int _19;
frost$core$Object* _20;
frost$core$Object* _21;
frost$core$Object* _23;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:110
_1 = &param0->$method2;
_2 = *_1;
_3 = ((org$frostlang$frostc$Code$PrimitiveType*) param1);
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
frost$core$Int$wrapper* $tmp4;
$tmp4 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp4->value = _19;
_20 = ((frost$core$Object*) $tmp4);
_21 = _20;
frost$core$Frost$ref$frost$core$Object$Q(_21);
_23 = _20;
frost$core$Frost$unref$frost$core$Object$Q(_23);
return _20;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




