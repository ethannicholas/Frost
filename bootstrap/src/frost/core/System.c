#include "frost/core/System.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
frost$core$System$class_type frost$core$System$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$core$System$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d", 17, -7286761764710770627, NULL };

void frost$core$System$init(void* rawSelf) {
frost$core$System* param0 = (frost$core$System*) rawSelf;

return;

}
void frost$core$System$cleanup(void* rawSelf) {
frost$core$System* param0 = (frost$core$System*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/System.frost:7
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

