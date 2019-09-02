#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
frost$core$Object$class_type frost$core$Object$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, NULL, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -3731481016707133325, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };

frost$core$String* frost$core$Object$get_asString$R$frost$core$String(frost$core$Object* param0) {

frost$core$Class** _1;
frost$core$Class* _2;
frost$core$String** _3;
frost$core$String* _4;
frost$core$String* _5;
frost$core$String* _6;
frost$core$Object* _7;
frost$core$Object* _9;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Object.frost:25
_1 = &param0->$class;
_2 = *_1;
_3 = &_2->name;
_4 = *_3;
_5 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2, _4);
_6 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_5, &$s3);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_11);
return _6;

}
void frost$core$Object$cleanup(frost$core$Object* param0) {

frost$core$Class** _0;
frost$core$Class* _1;
frost$core$Object* _2;
_0 = &param0->$class;
_1 = *_0;
_2 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_2);
return;

}
void frost$core$Object$init(frost$core$Object* param0) {

return;

}






