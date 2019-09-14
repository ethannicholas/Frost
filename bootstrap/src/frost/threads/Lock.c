#include "frost/threads/Lock.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"

__attribute__((weak)) void frost$threads$Lock$cleanup$shim(frost$threads$Lock* p0) {
    frost$threads$Lock$cleanup(p0);

}

static frost$core$String $s1;
frost$threads$Lock$class_type frost$threads$Lock$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$threads$Lock$cleanup$shim, frost$threads$Lock$lock, frost$threads$Lock$unlock, frost$threads$Lock$create, frost$threads$Lock$destroy} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4c\x6f\x63\x6b", 18, 4968142814039504275, NULL };

void frost$threads$Lock$init(void* rawSelf) {
frost$threads$Lock* param0 = (frost$threads$Lock*) rawSelf;

// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Lock.frost:17
frost$threads$Lock$create(param0);
return;

}
void frost$threads$Lock$cleanup(void* rawSelf) {
frost$threads$Lock* param0 = (frost$threads$Lock*) rawSelf;

frost$core$Immutable* _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Lock.frost:44
frost$threads$Lock$destroy(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Lock.frost:43
_3 = ((frost$core$Immutable*) param0);
frost$core$Immutable$cleanup(_3);
return;

}






