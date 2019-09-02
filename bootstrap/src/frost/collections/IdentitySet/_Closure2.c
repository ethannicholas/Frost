#include "frost/collections/IdentitySet/_Closure2.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
frost$collections$IdentitySet$_Closure2$class_type frost$collections$IdentitySet$_Closure2$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$IdentitySet$_Closure2$cleanup, frost$collections$IdentitySet$_Closure2$$anonymous1$frost$collections$IdentitySet$T$frost$collections$IdentitySet$T$R$frost$core$Bit} };

typedef frost$core$Bit (*$fn2)(frost$core$Object*);
typedef frost$core$Bit (*$fn3)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn4)(frost$core$Object*);
typedef frost$core$Bit (*$fn5)(frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x53\x65\x74\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32", 39, 4710045827721624792, NULL };

void frost$collections$IdentitySet$_Closure2$init$$LPfrost$collections$IdentitySet$T$RP$EQ$GT$LPfrost$core$Bit$RP(frost$collections$IdentitySet$_Closure2* param0, frost$core$MutableMethod* param1) {

frost$core$Object* _1;
frost$core$MutableMethod** _3;
frost$core$MutableMethod* _4;
frost$core$Object* _5;
frost$core$MutableMethod** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:54
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->test;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->test;
*_7 = param1;
return;

}
void frost$collections$IdentitySet$_Closure2$cleanup(frost$collections$IdentitySet$_Closure2* param0) {

frost$core$Object* _1;
frost$core$MutableMethod** _3;
frost$core$MutableMethod* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:54
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->test;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
frost$core$Bit frost$collections$IdentitySet$_Closure2$$anonymous1$frost$collections$IdentitySet$T$frost$collections$IdentitySet$T$R$frost$core$Bit(frost$collections$IdentitySet$_Closure2* param0, frost$core$Object* param1, frost$core$Object* param2) {

frost$core$Bit local0;
frost$core$MutableMethod** _1;
frost$core$MutableMethod* _2;
frost$core$MutableMethod* _3;
frost$core$Int8** _4;
frost$core$Int8* _5;
frost$core$Object** _6;
frost$core$Object* _7;
bool _8;
$fn2 _10;
frost$core$Bit _11;
$fn3 _14;
frost$core$Bit _15;
frost$core$Bit _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/IdentitySet.frost:54
_1 = &param0->test;
_2 = *_1;
_3 = _2;
_4 = &_3->pointer;
_5 = *_4;
_6 = &_3->target;
_7 = *_6;
_8 = _7 != ((frost$core$Object*) NULL);
if (_8) goto block1; else goto block2;
block2:;
_10 = (($fn4) _5);
_11 = _10(param1);
*(&local0) = _11;
goto block3;
block1:;
_14 = (($fn5) _5);
_15 = _14(_7, param1);
*(&local0) = _15;
goto block3;
block3:;
_18 = *(&local0);
return _18;

}






