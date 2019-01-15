#include "org/frostlanguage/regex/RegexToken.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "org/frostlanguage/regex/RegexToken/Kind.h"
#include "frost/core/String/Index.h"
#include "org/frostlanguage/frostc/Position.h"

__attribute__((weak)) void org$frostlanguage$regex$RegexToken$cleanup$shim(frost$core$Object* p0) {
    org$frostlanguage$regex$RegexToken$cleanup(((org$frostlanguage$regex$RegexToken$wrapper*) p0)->value);

}

static frost$core$String $s1;
org$frostlanguage$regex$RegexToken$class_type org$frostlanguage$regex$RegexToken$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$regex$RegexToken$cleanup$shim} };

static frost$core$String $s2;
org$frostlanguage$regex$RegexToken$wrapperclass_type org$frostlanguage$regex$RegexToken$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s2, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$regex$RegexToken$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 34, 7079701149811985960, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 34, 7079701149811985960, NULL };

org$frostlanguage$regex$RegexToken org$frostlanguage$regex$RegexToken$init$org$frostlanguage$regex$RegexToken$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlanguage$frostc$Position(org$frostlanguage$regex$RegexToken$Kind param0, frost$core$String$Index param1, frost$core$String$Index param2, org$frostlanguage$frostc$Position param3) {

org$frostlanguage$regex$RegexToken local0;
// line 68
org$frostlanguage$regex$RegexToken$Kind* $tmp3 = &(&local0)->kind;
*$tmp3 = param0;
// line 69
frost$core$String$Index* $tmp4 = &(&local0)->start;
*$tmp4 = param1;
// line 70
frost$core$String$Index* $tmp5 = &(&local0)->end;
*$tmp5 = param2;
// line 71
org$frostlanguage$frostc$Position* $tmp6 = &(&local0)->position;
*$tmp6 = param3;
org$frostlanguage$regex$RegexToken $tmp7 = *(&local0);
return $tmp7;

}
void org$frostlanguage$regex$RegexToken$cleanup(org$frostlanguage$regex$RegexToken param0) {

return;

}

