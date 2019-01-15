#include "frost/threads/Lock.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"

__attribute__((weak)) void frost$threads$Lock$cleanup$shim(frost$threads$Lock* p0) {
    frost$threads$Lock$cleanup(p0);

}

static frost$core$String $s1;
frost$threads$Lock$class_type frost$threads$Lock$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$convert$R$frost$core$String, frost$threads$Lock$cleanup$shim, frost$threads$Lock$lock, frost$threads$Lock$unlock, frost$threads$Lock$create, frost$threads$Lock$destroy} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4c\x6f\x63\x6b", 18, 878080470133442863, NULL };

void frost$threads$Lock$init(frost$threads$Lock* param0) {

// line 17
frost$threads$Lock$create(param0);
return;

}
void frost$threads$Lock$cleanup(frost$threads$Lock* param0) {

// line 44
frost$threads$Lock$destroy(param0);
// line 43
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
return;

}






