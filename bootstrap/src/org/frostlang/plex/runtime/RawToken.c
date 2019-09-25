#include "org/frostlang/plex/runtime/RawToken.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Int.h"
#include "frost/core/String/Index.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) void org$frostlang$plex$runtime$RawToken$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$plex$runtime$RawToken$cleanup(((org$frostlang$plex$runtime$RawToken$wrapper*) p0)->value);

}

static frost$core$String $s1;
org$frostlang$plex$runtime$RawToken$class_type org$frostlang$plex$runtime$RawToken$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$plex$runtime$RawToken$cleanup$shim} };

static frost$core$String $s2;
org$frostlang$plex$runtime$RawToken$wrapperclass_type org$frostlang$plex$runtime$RawToken$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$plex$runtime$RawToken$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x70\x6c\x65\x78\x2e\x72\x75\x6e\x74\x69\x6d\x65\x2e\x52\x61\x77\x54\x6f\x6b\x65\x6e", 35, -4379178860334872585, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x70\x6c\x65\x78\x2e\x72\x75\x6e\x74\x69\x6d\x65\x2e\x52\x61\x77\x54\x6f\x6b\x65\x6e", 35, -4379178860334872585, NULL };

org$frostlang$plex$runtime$RawToken org$frostlang$plex$runtime$RawToken$init$frost$core$Int$frost$core$String$Index$frost$core$String$Index$frost$core$Int$frost$core$Int(frost$core$Int param0, frost$core$String$Index param1, frost$core$String$Index param2, frost$core$Int param3, frost$core$Int param4) {

org$frostlang$plex$runtime$RawToken local0;
frost$core$Int* _1;
frost$core$String$Index* _4;
frost$core$String$Index* _7;
frost$core$Int* _10;
frost$core$Int* _13;
org$frostlang$plex$runtime$RawToken _15;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/RawToken.frost:12
_1 = &(&local0)->kind;
*_1 = param0;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/RawToken.frost:13
_4 = &(&local0)->start;
*_4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/RawToken.frost:14
_7 = &(&local0)->end;
*_7 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/RawToken.frost:15
_10 = &(&local0)->line;
*_10 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/RawToken.frost:16
_13 = &(&local0)->column;
*_13 = param4;
_15 = *(&local0);
return _15;

}
void org$frostlang$plex$runtime$RawToken$cleanup(org$frostlang$plex$runtime$RawToken param0) {

return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




