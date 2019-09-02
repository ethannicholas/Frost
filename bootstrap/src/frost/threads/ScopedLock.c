#include "frost/threads/ScopedLock.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/threads/Lock.h"
#include "frost/core/Frost.h"

__attribute__((weak)) void frost$threads$ScopedLock$cleanup$shim(frost$threads$ScopedLock* p0) {
    frost$threads$ScopedLock$cleanup(p0);

}

static frost$core$String $s1;
frost$threads$ScopedLock$class_type frost$threads$ScopedLock$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$threads$ScopedLock$cleanup$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x53\x63\x6f\x70\x65\x64\x4c\x6f\x63\x6b", 24, -7716745767815268293, NULL };

void frost$threads$ScopedLock$init$frost$threads$Lock(frost$threads$ScopedLock* param0, frost$threads$Lock* param1) {

frost$core$Object* _1;
frost$threads$Lock** _3;
frost$threads$Lock* _4;
frost$core$Object* _5;
frost$threads$Lock** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/ScopedLock.frost:20
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->lock;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->lock;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/ScopedLock.frost:21
frost$threads$Lock$lock(param1);
return;

}
void frost$threads$ScopedLock$cleanup(frost$threads$ScopedLock* param0) {

frost$threads$Lock** _1;
frost$threads$Lock* _2;
frost$core$Immutable* _5;
frost$threads$Lock** _7;
frost$threads$Lock* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/ScopedLock.frost:26
_1 = &param0->lock;
_2 = *_1;
frost$threads$Lock$unlock(_2);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/ScopedLock.frost:25
_5 = ((frost$core$Immutable*) param0);
frost$core$Immutable$cleanup(_5);
_7 = &param0->lock;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}






