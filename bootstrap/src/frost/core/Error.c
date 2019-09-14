#include "frost/core/Error.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$String* frost$core$Error$get_asString$R$frost$core$String$shim(frost$core$Error* p0) {
    frost$core$String* result = frost$core$Error$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$core$Error$cleanup$shim(frost$core$Error* p0) {
    frost$core$Error$cleanup(p0);

}

static frost$core$String $s1;
frost$core$Error$class_type frost$core$Error$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Error$get_asString$R$frost$core$String$shim, frost$core$Error$cleanup$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 16, -2245513124245986350, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };

void frost$core$Error$init$frost$core$String(void* rawSelf, frost$core$String* param1) {
frost$core$Error* param0 = (frost$core$Error*) rawSelf;

frost$core$Object* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
frost$core$String** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Error.frost:16
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->message;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->message;
*_7 = param1;
return;

}
frost$core$String* frost$core$Error$get_asString$R$frost$core$String(void* rawSelf) {
frost$core$Error* param0 = (frost$core$Error*) rawSelf;

frost$core$String** _1;
frost$core$String* _2;
frost$core$Object* _5;
frost$core$String* _8;
frost$core$Object* _9;
frost$core$Object* _11;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Error.frost:21
_1 = &param0->message;
_2 = *_1;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Error.frost:21:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_5 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_8 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2, &$s2);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_13);
return _8;

}
void frost$core$Error$cleanup(void* rawSelf) {
frost$core$Error* param0 = (frost$core$Error*) rawSelf;

frost$core$Immutable* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Error.frost:6
_1 = ((frost$core$Immutable*) param0);
frost$core$Immutable$cleanup(_1);
_3 = &param0->message;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}






