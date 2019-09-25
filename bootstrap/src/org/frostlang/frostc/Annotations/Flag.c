#include "org/frostlang/frostc/Annotations/Flag.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$Annotations$Flag$class_type org$frostlang$frostc$Annotations$Flag$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Annotations$Flag$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x46\x6c\x61\x67", 37, 8757600847578528582, NULL };

void org$frostlang$frostc$Annotations$Flag$init(void* rawSelf) {
org$frostlang$frostc$Annotations$Flag* param0 = (org$frostlang$frostc$Annotations$Flag*) rawSelf;

return;

}
void org$frostlang$frostc$Annotations$Flag$cleanup(void* rawSelf) {
org$frostlang$frostc$Annotations$Flag* param0 = (org$frostlang$frostc$Annotations$Flag*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:5
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

