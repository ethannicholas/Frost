#include "frost/io/Console.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableString.h"
#include "frost/core/Char8.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/core/UInt8.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
frost$io$Console$class_type frost$io$Console$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$Console$cleanup} };

typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn5)(frost$core$Object*);
typedef frost$core$String* (*$fn6)(frost$core$Object*);
typedef frost$core$String* (*$fn10)(frost$core$Object*);
typedef frost$core$String* (*$fn11)(frost$core$Object*);
typedef frost$core$String* (*$fn12)(frost$core$Object*);
typedef frost$core$String* (*$fn13)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x43\x6f\x6e\x73\x6f\x6c\x65", 16, -964513568563874098, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x6f\x6e\x73\x6f\x6c\x65\x2e\x66\x72\x6f\x73\x74", 13, 397585341085301174, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 71, -5598996583363859745, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x6f\x6e\x73\x6f\x6c\x65\x2e\x66\x72\x6f\x73\x74", 13, 397585341085301174, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 71, -5598996583363859745, NULL };

void frost$io$Console$init(void* rawSelf) {
frost$io$Console* param0 = (frost$io$Console*) rawSelf;

return;

}
void frost$io$Console$printLine$frost$core$String(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s2);
return;

}
void frost$io$Console$print$frost$core$Object(frost$core$Object* param0) {

$fn3 _1;
frost$core$String* _2;
frost$core$Object* _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:54
_1 = ($fn4) param0->$class->vtable[0];
_2 = _1(param0);
frost$io$Console$print$frost$core$String(_2);
_4 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_4);
return;

}
void frost$io$Console$printLine$frost$core$Object(frost$core$Object* param0) {

$fn5 _1;
frost$core$String* _2;
frost$core$Object* _12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
_1 = ($fn6) param0->$class->vtable[0];
_2 = _1(param0);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_2);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s7);
_12 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_12);
return;

}
void frost$io$Console$printLine() {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s8);
return;

}
void frost$io$Console$printErrorLine$frost$core$String(frost$core$String* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s9);
return;

}
void frost$io$Console$printError$frost$core$Object(frost$core$Object* param0) {

$fn10 _1;
frost$core$String* _2;
frost$core$Object* _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:94
_1 = ($fn11) param0->$class->vtable[0];
_2 = _1(param0);
frost$io$Console$printError$frost$core$String(_2);
_4 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_4);
return;

}
void frost$io$Console$printErrorLine$frost$core$Object(frost$core$Object* param0) {

$fn12 _1;
frost$core$String* _2;
frost$core$Object* _12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
_1 = ($fn13) param0->$class->vtable[0];
_2 = _1(param0);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_2);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s14);
_12 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_12);
return;

}
void frost$io$Console$printErrorLine() {

// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s15);
return;

}
frost$core$String* frost$io$Console$readLine$R$frost$core$String$Q() {

frost$core$MutableString* local0 = NULL;
frost$core$Char8$nullable local1;
frost$core$MutableString* _1;
frost$core$Object* _4;
frost$core$MutableString* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$core$Char8$nullable _15;
frost$core$Char8$nullable _18;
bool _19;
frost$core$Bit _20;
bool _21;
frost$core$MutableString* _24;
frost$core$Int* _25;
frost$core$Int _26;
frost$core$Int _27;
int64_t _30;
int64_t _31;
bool _32;
frost$core$Bit _33;
bool _35;
frost$core$Object* _38;
frost$core$MutableString* _40;
frost$core$Object* _41;
frost$core$Char8$nullable _48;
bool _49;
frost$core$Bit _50;
bool _51;
frost$core$Int _53;
frost$core$Char8 _56;
frost$core$UInt8 _57;
frost$core$Char8 _58;
uint8_t _61;
uint8_t _62;
bool _63;
frost$core$Bit _64;
bool _66;
frost$core$MutableString* _71;
frost$core$Char8$nullable _72;
bool _73;
frost$core$Bit _74;
bool _75;
frost$core$Int _77;
frost$core$Char8 _80;
frost$core$MutableString* _84;
frost$core$String* _85;
frost$core$String* _86;
frost$core$Object* _87;
frost$core$Object* _89;
frost$core$MutableString* _91;
frost$core$Object* _92;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:127
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_1);
*(&local0) = ((frost$core$MutableString*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:128
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:129
frost$io$Console$read$R$frost$core$Char8$Q(&_15);
*(&local1) = _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:130
_18 = *(&local1);
_19 = !_18.nonnull;
_20 = (frost$core$Bit) {_19};
_21 = _20.value;
if (_21) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:131
_24 = *(&local0);
_25 = &_24->_length;
_26 = *_25;
_27 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Console.frost:131:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_30 = _26.value;
_31 = _27.value;
_32 = _30 == _31;
_33 = (frost$core$Bit) {_32};
_35 = _33.value;
if (_35) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:132
_38 = ((frost$core$Object*) ((frost$core$String*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_38);
_40 = *(&local0);
_41 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_41);
*(&local0) = ((frost$core$MutableString*) NULL);
return ((frost$core$String*) NULL);
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:134
goto block2;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:136
_48 = *(&local1);
_49 = _48.nonnull;
_50 = (frost$core$Bit) {_49};
_51 = _50.value;
if (_51) goto block10; else goto block11;
block11:;
_53 = (frost$core$Int) {136u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s16, _53, &$s17);
abort(); // unreachable
block10:;
_56 = ((frost$core$Char8) _48.value);
_57 = (frost$core$UInt8) {10u};
_58 = frost$core$Char8$init$frost$core$UInt8(_57);
// begin inline call to function frost.core.Char8.=(other:frost.core.Char8):frost.core.Bit from Console.frost:136:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:26
_61 = _56.value;
_62 = _58.value;
_63 = _61 == _62;
_64 = (frost$core$Bit) {_63};
_66 = _64.value;
if (_66) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:137
goto block2;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:139
_71 = *(&local0);
_72 = *(&local1);
_73 = _72.nonnull;
_74 = (frost$core$Bit) {_73};
_75 = _74.value;
if (_75) goto block13; else goto block14;
block14:;
_77 = (frost$core$Int) {139u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _77, &$s19);
abort(); // unreachable
block13:;
_80 = ((frost$core$Char8) _72.value);
frost$core$MutableString$append$frost$core$Char8(_71, _80);
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:141
_84 = *(&local0);
_85 = frost$core$MutableString$finish$R$frost$core$String(_84);
_86 = _85;
_87 = ((frost$core$Object*) _86);
frost$core$Frost$ref$frost$core$Object$Q(_87);
_89 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_89);
_91 = *(&local0);
_92 = ((frost$core$Object*) _91);
frost$core$Frost$unref$frost$core$Object$Q(_92);
*(&local0) = ((frost$core$MutableString*) NULL);
return _86;

}
void frost$io$Console$cleanup(void* rawSelf) {
frost$io$Console* param0 = (frost$io$Console*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:7
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




