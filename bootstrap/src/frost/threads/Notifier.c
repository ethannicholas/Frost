#include "frost/threads/Notifier.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/threads/Lock.h"
#include "frost/core/Frost.h"

__attribute__((weak)) void frost$threads$Notifier$cleanup$shim(frost$threads$Notifier* p0) {
    frost$threads$Notifier$cleanup(p0);

}

static frost$core$String $s1;
frost$threads$Notifier$class_type frost$threads$Notifier$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$threads$Notifier$cleanup$shim, frost$threads$Notifier$wait, frost$threads$Notifier$notify, frost$threads$Notifier$notifyAll, frost$threads$Notifier$create, frost$threads$Notifier$destroy} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4e\x6f\x74\x69\x66\x69\x65\x72", 22, 4714131101462816310, NULL };

void frost$threads$Notifier$init$frost$threads$Lock(frost$threads$Notifier* param0, frost$threads$Lock* param1) {

// line 15
FROST_ASSERT(24 == sizeof(frost$threads$Lock));
frost$threads$Lock* $tmp2 = (frost$threads$Lock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$Lock$class);
frost$threads$Lock$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$threads$Lock** $tmp3 = &param0->lock;
frost$threads$Lock* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$threads$Lock** $tmp5 = &param0->lock;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// line 18
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$threads$Lock** $tmp6 = &param0->lock;
frost$threads$Lock* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$threads$Lock** $tmp8 = &param0->lock;
*$tmp8 = param1;
// line 19
frost$threads$Notifier$create(param0);
return;

}
void frost$threads$Notifier$cleanup(frost$threads$Notifier* param0) {

// line 44
frost$threads$Notifier$destroy(param0);
// line 43
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$threads$Lock** $tmp9 = &param0->lock;
frost$threads$Lock* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
return;

}






