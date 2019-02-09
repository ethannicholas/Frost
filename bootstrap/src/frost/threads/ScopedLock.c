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


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x53\x63\x6f\x70\x65\x64\x4c\x6f\x63\x6b", 24, 3527520772043370465, NULL };

void frost$threads$ScopedLock$init$frost$threads$Lock(frost$threads$ScopedLock* param0, frost$threads$Lock* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/ScopedLock.frost:20
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$threads$Lock** $tmp2 = &param0->lock;
frost$threads$Lock* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$threads$Lock** $tmp4 = &param0->lock;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/ScopedLock.frost:21
frost$threads$Lock$lock(param1);
return;

}
void frost$threads$ScopedLock$cleanup(frost$threads$ScopedLock* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/ScopedLock.frost:26
frost$threads$Lock** $tmp5 = &param0->lock;
frost$threads$Lock* $tmp6 = *$tmp5;
frost$threads$Lock$unlock($tmp6);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/ScopedLock.frost:25
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$threads$Lock** $tmp7 = &param0->lock;
frost$threads$Lock* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
return;

}






