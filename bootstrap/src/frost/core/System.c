#include "frost/core/System.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"


static frost$core$String $s1;
frost$core$System$class_type frost$core$System$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, frost$core$System$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d", 17, 1146821074419521429, NULL };

void frost$core$System$init(frost$core$System* param0) {

return;

}
void frost$core$System$cleanup(frost$core$System* param0) {

// line 7
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

