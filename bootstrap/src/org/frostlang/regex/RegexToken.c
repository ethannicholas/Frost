#include "org/frostlang/regex/RegexToken.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "org/frostlang/regex/RegexToken/Kind.h"
#include "frost/core/String/Index.h"
#include "org/frostlang/frostc/Position.h"

__attribute__((weak)) void org$frostlang$regex$RegexToken$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$regex$RegexToken$cleanup(((org$frostlang$regex$RegexToken$wrapper*) p0)->value);

}

static frost$core$String $s1;
org$frostlang$regex$RegexToken$class_type org$frostlang$regex$RegexToken$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$regex$RegexToken$cleanup$shim} };

static frost$core$String $s2;
org$frostlang$regex$RegexToken$wrapperclass_type org$frostlang$regex$RegexToken$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$regex$RegexToken$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 30, -2972832504278846458, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 30, -2972832504278846458, NULL };

org$frostlang$regex$RegexToken org$frostlang$regex$RegexToken$init$org$frostlang$regex$RegexToken$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$frostc$Position(org$frostlang$regex$RegexToken$Kind param0, frost$core$String$Index param1, frost$core$String$Index param2, org$frostlang$frostc$Position param3) {

org$frostlang$regex$RegexToken local0;
org$frostlang$regex$RegexToken$Kind* _1;
frost$core$String$Index* _4;
frost$core$String$Index* _7;
org$frostlang$frostc$Position* _10;
org$frostlang$regex$RegexToken _12;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:41
_1 = &(&local0)->kind;
*_1 = param0;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:42
_4 = &(&local0)->start;
*_4 = param1;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:43
_7 = &(&local0)->end;
*_7 = param2;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:44
_10 = &(&local0)->position;
*_10 = param3;
_12 = *(&local0);
return _12;

}
void org$frostlang$regex$RegexToken$cleanup(org$frostlang$regex$RegexToken param0) {

return;

}

