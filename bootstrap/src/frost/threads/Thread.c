#include "frost/threads/Thread.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Method.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) void frost$threads$Thread$cleanup$shim(frost$threads$Thread* p0) {
    frost$threads$Thread$cleanup(p0);

}

static frost$core$String $s1;
frost$threads$Thread$class_type frost$threads$Thread$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$threads$Thread$cleanup$shim, frost$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit, frost$threads$Thread$waitFor} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x54\x68\x72\x65\x61\x64", 20, 8775502690324861764, NULL };

void frost$threads$Thread$init(void* rawSelf) {
frost$threads$Thread* param0 = (frost$threads$Thread*) rawSelf;

return;

}
frost$threads$Thread* frost$threads$Thread$start$$LP$RP$EQ$AM$GT$ST$LP$RP$R$frost$threads$Thread(frost$core$Method* param0) {

frost$threads$Thread* local0 = NULL;
frost$threads$Thread* _1;
frost$core$Object* _5;
frost$threads$Thread* _7;
frost$core$Object* _8;
frost$core$Object* _11;
frost$threads$Thread* _14;
frost$core$MutableMethod* _15;
frost$threads$Thread* _18;
frost$core$Object* _19;
frost$threads$Thread* _21;
frost$core$Object* _22;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Thread.frost:50
_1 = (frost$threads$Thread*) frostObjectAlloc(sizeof(frost$threads$Thread), (frost$core$Class*) &frost$threads$Thread$class);
// begin inline call to frost.threads.Thread.init() from Thread.frost:50:29
*(&local0) = ((frost$threads$Thread*) NULL);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = *(&local0);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
*(&local0) = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Thread.frost:51
_14 = *(&local0);
_15 = ((frost$core$MutableMethod*) param0);
frost$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(_14, _15, true);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Thread.frost:52
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = *(&local0);
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
*(&local0) = ((frost$threads$Thread*) NULL);
return _18;

}
frost$threads$Thread* frost$threads$Thread$start$$LP$RP$EQ$AM$GT$ST$LP$RP$frost$core$Bit$R$frost$threads$Thread(frost$core$Method* param0, frost$core$Bit param1) {

frost$threads$Thread* local0 = NULL;
frost$threads$Thread* _1;
frost$core$Object* _5;
frost$threads$Thread* _7;
frost$core$Object* _8;
frost$core$Object* _11;
frost$threads$Thread* _14;
frost$core$MutableMethod* _15;
bool _16;
frost$threads$Thread* _19;
frost$core$Object* _20;
frost$threads$Thread* _22;
frost$core$Object* _23;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Thread.frost:57
_1 = (frost$threads$Thread*) frostObjectAlloc(sizeof(frost$threads$Thread), (frost$core$Class*) &frost$threads$Thread$class);
// begin inline call to frost.threads.Thread.init() from Thread.frost:57:29
*(&local0) = ((frost$threads$Thread*) NULL);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = *(&local0);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
*(&local0) = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Thread.frost:58
_14 = *(&local0);
_15 = ((frost$core$MutableMethod*) param0);
_16 = param1.value;
frost$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(_14, _15, _16);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Thread.frost:59
_19 = *(&local0);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = *(&local0);
_23 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_23);
*(&local0) = ((frost$threads$Thread*) NULL);
return _19;

}
frost$threads$Thread* frost$threads$Thread$unsafeStart$$LP$RP$EQ$AM$GT$LP$RP$R$frost$threads$Thread(frost$core$MutableMethod* param0) {

frost$threads$Thread* local0 = NULL;
frost$threads$Thread* _1;
frost$core$Object* _5;
frost$threads$Thread* _7;
frost$core$Object* _8;
frost$core$Object* _11;
frost$threads$Thread* _14;
frost$threads$Thread* _17;
frost$core$Object* _18;
frost$threads$Thread* _20;
frost$core$Object* _21;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Thread.frost:64
_1 = (frost$threads$Thread*) frostObjectAlloc(sizeof(frost$threads$Thread), (frost$core$Class*) &frost$threads$Thread$class);
// begin inline call to frost.threads.Thread.init() from Thread.frost:64:29
*(&local0) = ((frost$threads$Thread*) NULL);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = *(&local0);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
*(&local0) = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Thread.frost:65
_14 = *(&local0);
frost$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(_14, param0, true);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Thread.frost:66
_17 = *(&local0);
_18 = ((frost$core$Object*) _17);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = *(&local0);
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
*(&local0) = ((frost$threads$Thread*) NULL);
return _17;

}
frost$threads$Thread* frost$threads$Thread$unsafeStart$$LP$RP$EQ$AM$GT$LP$RP$frost$core$Bit$R$frost$threads$Thread(frost$core$MutableMethod* param0, frost$core$Bit param1) {

frost$threads$Thread* local0 = NULL;
frost$threads$Thread* _1;
frost$core$Object* _5;
frost$threads$Thread* _7;
frost$core$Object* _8;
frost$core$Object* _11;
frost$threads$Thread* _14;
bool _15;
frost$threads$Thread* _18;
frost$core$Object* _19;
frost$threads$Thread* _21;
frost$core$Object* _22;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Thread.frost:71
_1 = (frost$threads$Thread*) frostObjectAlloc(sizeof(frost$threads$Thread), (frost$core$Class*) &frost$threads$Thread$class);
// begin inline call to frost.threads.Thread.init() from Thread.frost:71:29
*(&local0) = ((frost$threads$Thread*) NULL);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = *(&local0);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
*(&local0) = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Thread.frost:72
_14 = *(&local0);
_15 = param1.value;
frost$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit(_14, param0, _15);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Thread.frost:73
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = *(&local0);
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
*(&local0) = ((frost$threads$Thread*) NULL);
return _18;

}
frost$core$Int frost$threads$Thread$preferredThreadCount$R$frost$core$Int() {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Thread.frost:93
_1 = (frost$core$Int) {8u};
return _1;

}
void frost$threads$Thread$cleanup(void* rawSelf) {
frost$threads$Thread* param0 = (frost$threads$Thread*) rawSelf;

frost$core$Immutable* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/Thread.frost:23
_1 = ((frost$core$Immutable*) param0);
frost$core$Immutable$cleanup(_1);
return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




