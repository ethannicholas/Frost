#include "org/frostlang/frostc/Main/_Closure4.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/System/Process.h"
#include "frost/core/Frost.h"
#include "frost/core/Error.h"
#include "frost/io/InputStream.h"
#include "frost/io/OutputStream.h"
#include "frost/core/Maybe.h"
#include "frost/core/Int.h"
#include "frost/io/Console.h"
#include "frost/core/System.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$Main$_Closure4$class_type org$frostlang$frostc$Main$_Closure4$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Main$_Closure4$cleanup, org$frostlang$frostc$Main$_Closure4$$anonymous3} };

typedef frost$core$Maybe* (*$fn2)(frost$io$InputStream*, frost$io$OutputStream*);
typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$Maybe* (*$fn4)(frost$io$InputStream*, frost$io$OutputStream*);
typedef frost$core$String* (*$fn5)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x34", 35, -6496849870863745747, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };

void org$frostlang$frostc$Main$_Closure4$init$frost$core$System$Process(void* rawSelf, frost$core$System$Process* param1) {
org$frostlang$frostc$Main$_Closure4* param0 = (org$frostlang$frostc$Main$_Closure4*) rawSelf;

frost$core$Object* _1;
frost$core$System$Process** _3;
frost$core$System$Process* _4;
frost$core$Object* _5;
frost$core$System$Process** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:86
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->p;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->p;
*_7 = param1;
return;

}
void org$frostlang$frostc$Main$_Closure4$cleanup(void* rawSelf) {
org$frostlang$frostc$Main$_Closure4* param0 = (org$frostlang$frostc$Main$_Closure4*) rawSelf;

frost$core$Object* _1;
frost$core$System$Process** _3;
frost$core$System$Process* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:86
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->p;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
void org$frostlang$frostc$Main$_Closure4$$anonymous3(void* rawSelf) {
org$frostlang$frostc$Main$_Closure4* param0 = (org$frostlang$frostc$Main$_Closure4*) rawSelf;

frost$core$Error* local0 = NULL;
frost$core$System$Process** _3;
frost$core$System$Process* _4;
frost$io$InputStream* _5;
frost$io$OutputStream* _6;
$fn2 _7;
frost$core$Maybe* _8;
frost$core$Int* _9;
frost$core$Int _10;
int64_t _11;
bool _12;
frost$core$Error** _14;
frost$core$Error* _15;
frost$core$Object* _16;
frost$core$Object* _19;
frost$core$Object* _21;
frost$core$Object* _23;
frost$core$Error* _37;
frost$core$Object* _38;
$fn3 _41;
frost$core$String* _42;
frost$core$Object* _49;
frost$core$Int _53;
frost$core$Int _55;
frost$core$Object** _26;
frost$core$Object* _27;
frost$core$Int _28;
frost$core$Object* _29;
frost$core$Object* _31;
frost$core$Object* _33;
frost$core$Error* _58;
frost$core$Object* _59;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:87
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:88
_3 = &param0->p;
_4 = *_3;
_5 = frost$core$System$Process$standardError$R$frost$io$InputStream(_4);
_6 = frost$io$Console$errorStream$R$frost$io$OutputStream();
_7 = ($fn4) _5->$class->vtable[17];
_8 = _7(_5, _6);
_9 = &_8->$rawValue;
_10 = *_9;
_11 = _10.value;
_12 = _11 == 0u;
if (_12) goto block3; else goto block4;
block4:;
_14 = &_8->$data.$ERROR.field0;
_15 = *_14;
_16 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_16);
*(&local0) = _15;
_19 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_23 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_23);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:91
_37 = *(&local0);
_38 = ((frost$core$Object*) _37);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from Main.frost:91:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
_41 = ($fn5) _38->$class->vtable[0];
_42 = _41(_38);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_42);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
_49 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_49);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:92
_53 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_53);
_55 = (frost$core$Int) {92u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _55, &$s7);
abort(); // unreachable
block3:;
_26 = &_8->$data.$SUCCESS.field0;
_27 = *_26;
_28 = ((frost$core$Int$wrapper*) _27)->value;
_29 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_29);
_31 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_31);
_33 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_33);
_58 = *(&local0);
_59 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_59);
*(&local0) = ((frost$core$Error*) NULL);
return;

}

