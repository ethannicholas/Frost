#include "org/frostlang/json/Token.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "org/frostlang/json/Token/Kind.h"
#include "frost/core/String/Index.h"
#include "org/frostlang/json/Position.h"

__attribute__((weak)) void org$frostlang$json$Token$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$json$Token$cleanup(((org$frostlang$json$Token$wrapper*) p0)->value);

}

static frost$core$String $s1;
org$frostlang$json$Token$class_type org$frostlang$json$Token$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$json$Token$cleanup$shim} };

static frost$core$String $s2;
org$frostlang$json$Token$wrapperclass_type org$frostlang$json$Token$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s2, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$json$Token$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e", 24, -6053151712158832162, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x6a\x73\x6f\x6e\x2e\x54\x6f\x6b\x65\x6e", 24, -6053151712158832162, NULL };

org$frostlang$json$Token org$frostlang$json$Token$init$org$frostlang$json$Token$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$json$Position(org$frostlang$json$Token$Kind param0, frost$core$String$Index param1, frost$core$String$Index param2, org$frostlang$json$Position param3) {

org$frostlang$json$Token local0;
// line 58
org$frostlang$json$Token$Kind* $tmp3 = &(&local0)->kind;
*$tmp3 = param0;
// line 59
frost$core$String$Index* $tmp4 = &(&local0)->start;
*$tmp4 = param1;
// line 60
frost$core$String$Index* $tmp5 = &(&local0)->end;
*$tmp5 = param2;
// line 61
org$frostlang$json$Position* $tmp6 = &(&local0)->position;
*$tmp6 = param3;
org$frostlang$json$Token $tmp7 = *(&local0);
return $tmp7;

}
void org$frostlang$json$Token$cleanup(org$frostlang$json$Token param0) {

return;

}

