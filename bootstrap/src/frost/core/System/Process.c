#include "frost/core/System/Process.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"

__attribute__((weak)) void frost$core$System$Process$cleanup$shim(frost$core$System$Process* p0) {
    frost$core$System$Process$cleanup(p0);

}

static frost$core$String $s1;
frost$core$System$Process$class_type frost$core$System$Process$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$core$System$Process$cleanup$shim, frost$core$System$Process$standardInput$R$frost$io$OutputStream, frost$core$System$Process$standardOutput$R$frost$io$InputStream, frost$core$System$Process$standardError$R$frost$io$InputStream, frost$core$System$Process$exitCode$R$frost$core$Int64$Q, frost$core$System$Process$waitFor$R$frost$core$Int64, frost$core$System$Process$_cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73", 25, 3505769073572454810, NULL };

void frost$core$System$Process$cleanup(frost$core$System$Process* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/System.frost:63
frost$core$System$Process$_cleanup(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/System.frost:62
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
return;

}
void frost$core$System$Process$init(frost$core$System$Process* param0) {

return;

}






