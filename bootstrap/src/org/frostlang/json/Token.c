#include "org/frostlang/json/Token.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "org/frostlang/json/Token/Kind.h"
#include "frost/core/String/Index.h"
#include "org/frostlang/json/Position.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) void org$frostlang$json$Token$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$json$Token$cleanup(((org$frostlang$json$Token$wrapper*) p0)->value);

}

static frost$core$String $s1;
org$frostlang$json$Token$class_type org$frostlang$json$Token$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$json$Token$cleanup$shim} };

static frost$core$String $s2;
org$frostlang$json$Token$wrapperclass_type org$frostlang$json$Token$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$json$Token$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e", 24, 648725149034874120, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e", 24, 648725149034874120, NULL };

org$frostlang$json$Token org$frostlang$json$Token$init$org$frostlang$json$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$json$Position(org$frostlang$json$Token$Kind param0, frost$core$String$Index param1, frost$core$String$Index param2, org$frostlang$json$Position param3) {

org$frostlang$json$Token local0;
org$frostlang$json$Token$Kind* _1;
frost$core$String$Index* _4;
frost$core$String$Index* _7;
org$frostlang$json$Position* _10;
org$frostlang$json$Token _12;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:35
_1 = &(&local0)->kind;
*_1 = param0;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:36
_4 = &(&local0)->start;
*_4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:37
_7 = &(&local0)->end;
*_7 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/json/Token.frost:38
_10 = &(&local0)->position;
*_10 = param3;
_12 = *(&local0);
return _12;

}
void org$frostlang$json$Token$cleanup(org$frostlang$json$Token param0) {

return;

}

