#include "frost/threads/Notifier.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/threads/Lock.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) void frost$threads$Notifier$cleanup$shim(frost$threads$Notifier* p0) {
    frost$threads$Notifier$cleanup(p0);

}

static frost$core$String $s1;
frost$threads$Notifier$class_type frost$threads$Notifier$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$threads$Notifier$cleanup$shim, frost$threads$Notifier$wait, frost$threads$Notifier$notify, frost$threads$Notifier$notifyAll, frost$threads$Notifier$create, frost$threads$Notifier$destroy} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4e\x6f\x74\x69\x66\x69\x65\x72", 22, 7742414921846839318, NULL };

void frost$threads$Notifier$init$frost$threads$Lock(void* rawSelf, frost$threads$Lock* param1) {
frost$threads$Notifier* param0 = (frost$threads$Notifier*) rawSelf;

frost$threads$Lock* _1;
frost$core$Object* _3;
frost$threads$Lock** _5;
frost$threads$Lock* _6;
frost$core$Object* _7;
frost$threads$Lock** _9;
frost$core$Object* _11;
frost$core$Object* _14;
frost$threads$Lock** _16;
frost$threads$Lock* _17;
frost$core$Object* _18;
frost$threads$Lock** _20;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Notifier.frost:15
_1 = (frost$threads$Lock*) frostObjectAlloc(sizeof(frost$threads$Lock), (frost$core$Class*) &frost$threads$Lock$class);
frost$threads$Lock$init(_1);
_3 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = &param0->lock;
_6 = *_5;
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
_9 = &param0->lock;
*_9 = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Notifier.frost:18
_14 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_14);
_16 = &param0->lock;
_17 = *_16;
_18 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_20 = &param0->lock;
*_20 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Notifier.frost:19
frost$threads$Notifier$create(param0);
return;

}
void frost$threads$Notifier$cleanup(void* rawSelf) {
frost$threads$Notifier* param0 = (frost$threads$Notifier*) rawSelf;

frost$core$Immutable* _3;
frost$threads$Lock** _5;
frost$threads$Lock* _6;
frost$core$Object* _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Notifier.frost:44
frost$threads$Notifier$destroy(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Notifier.frost:43
_3 = ((frost$core$Immutable*) param0);
frost$core$Immutable$cleanup(_3);
_5 = &param0->lock;
_6 = *_5;
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




