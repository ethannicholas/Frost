#include "org/frostlang/plex/runtime/RawToken.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"
#include "frost/core/String/Index.h"

__attribute__((weak)) void org$frostlang$plex$runtime$RawToken$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$plex$runtime$RawToken$cleanup(((org$frostlang$plex$runtime$RawToken$wrapper*) p0)->value);

}

static frost$core$String $s1;
org$frostlang$plex$runtime$RawToken$class_type org$frostlang$plex$runtime$RawToken$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$plex$runtime$RawToken$cleanup$shim} };

static frost$core$String $s2;
org$frostlang$plex$runtime$RawToken$wrapperclass_type org$frostlang$plex$runtime$RawToken$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$plex$runtime$RawToken$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x70\x6c\x65\x78\x2e\x72\x75\x6e\x74\x69\x6d\x65\x2e\x52\x61\x77\x54\x6f\x6b\x65\x6e", 35, 944382737001150597, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x70\x6c\x65\x78\x2e\x72\x75\x6e\x74\x69\x6d\x65\x2e\x52\x61\x77\x54\x6f\x6b\x65\x6e", 35, 944382737001150597, NULL };

org$frostlang$plex$runtime$RawToken org$frostlang$plex$runtime$RawToken$init$frost$core$Int64$frost$core$String$Index$frost$core$String$Index$frost$core$Int64$frost$core$Int64(frost$core$Int64 param0, frost$core$String$Index param1, frost$core$String$Index param2, frost$core$Int64 param3, frost$core$Int64 param4) {

org$frostlang$plex$runtime$RawToken local0;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/RawToken.frost:12
frost$core$Int64* $tmp3 = &(&local0)->kind;
*$tmp3 = param0;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/RawToken.frost:13
frost$core$String$Index* $tmp4 = &(&local0)->start;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/RawToken.frost:14
frost$core$String$Index* $tmp5 = &(&local0)->end;
*$tmp5 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/RawToken.frost:15
frost$core$Int64* $tmp6 = &(&local0)->line;
*$tmp6 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/plex/runtime/RawToken.frost:16
frost$core$Int64* $tmp7 = &(&local0)->column;
*$tmp7 = param4;
org$frostlang$plex$runtime$RawToken $tmp8 = *(&local0);
return $tmp8;

}
void org$frostlang$plex$runtime$RawToken$cleanup(org$frostlang$plex$runtime$RawToken param0) {

return;

}






