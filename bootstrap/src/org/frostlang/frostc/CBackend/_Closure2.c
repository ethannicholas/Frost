#include "org/frostlang/frostc/CBackend/_Closure2.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/CBackend.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Frost.h"
#include "frost/core/Error.h"
#include "frost/io/IndentedOutputStream.h"
#include "frost/io/OutputStream.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$CBackend$_Closure2$class_type org$frostlang$frostc$CBackend$_Closure2$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$CBackend$_Closure2$cleanup, org$frostlang$frostc$CBackend$_Closure2$$anonymous1$frost$core$String} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$Error* (*$fn3)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn6)(frost$core$Object*);
typedef frost$core$Error* (*$fn9)(frost$io$OutputStream*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x42\x61\x63\x6b\x65\x6e\x64\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32", 39, 5948515979133035237, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x42\x61\x63\x6b\x65\x6e\x64\x2e\x66\x72\x6f\x73\x74", 14, -8061044029211103966, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x42\x61\x63\x6b\x65\x6e\x64\x2e\x66\x72\x6f\x73\x74", 14, -8061044029211103966, NULL };

void org$frostlang$frostc$CBackend$_Closure2$init$org$frostlang$frostc$CBackend$org$frostlang$frostc$IR$Statement$ID(void* rawSelf, org$frostlang$frostc$CBackend* param1, org$frostlang$frostc$IR$Statement$ID param2) {
org$frostlang$frostc$CBackend$_Closure2* param0 = (org$frostlang$frostc$CBackend$_Closure2*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$CBackend** _3;
org$frostlang$frostc$CBackend* _4;
frost$core$Object* _5;
org$frostlang$frostc$CBackend** _7;
org$frostlang$frostc$IR$Statement$ID* _10;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:1513
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->$self;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:1513
_10 = &param0->id;
*_10 = param2;
return;

}
void org$frostlang$frostc$CBackend$_Closure2$cleanup(void* rawSelf) {
org$frostlang$frostc$CBackend$_Closure2* param0 = (org$frostlang$frostc$CBackend$_Closure2*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$CBackend** _3;
org$frostlang$frostc$CBackend* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:1513
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
void org$frostlang$frostc$CBackend$_Closure2$$anonymous1$frost$core$String(void* rawSelf, frost$core$String* param1) {
org$frostlang$frostc$CBackend$_Closure2* param0 = (org$frostlang$frostc$CBackend$_Closure2*) rawSelf;

frost$core$Error* local0 = NULL;
org$frostlang$frostc$CBackend** _3;
org$frostlang$frostc$CBackend* _4;
frost$io$IndentedOutputStream** _5;
frost$io$IndentedOutputStream* _6;
frost$io$OutputStream* _7;
frost$core$Object* _10;
frost$core$String* _13;
org$frostlang$frostc$CBackend** _14;
org$frostlang$frostc$CBackend* _15;
org$frostlang$frostc$IR$Statement$ID* _16;
org$frostlang$frostc$IR$Statement$ID _17;
frost$core$Int _20;
frost$core$Object* _21;
$fn2 _24;
frost$core$String* _25;
frost$core$String* _26;
frost$core$Object* _27;
frost$core$Object* _29;
frost$core$Object* _31;
frost$core$Object* _34;
frost$core$Object* _36;
frost$core$Object* _38;
frost$core$String* _41;
frost$core$String* _42;
$fn3 _43;
frost$core$Error* _44;
bool _45;
frost$core$Object* _47;
bool _49;
frost$core$Bit _50;
bool _51;
frost$core$Int _53;
frost$core$Error* _56;
frost$core$Object* _58;
frost$core$Object* _60;
frost$core$Object* _62;
frost$core$Object* _64;
frost$core$Object* _66;
frost$core$Object* _68;
frost$core$Int _85;
frost$core$Object* _71;
frost$core$Object* _73;
frost$core$Object* _75;
frost$core$Object* _77;
frost$core$Object* _79;
frost$core$Object* _81;
frost$core$Error* _88;
frost$core$Object* _89;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:1514
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:1515
_3 = &param0->$self;
_4 = *_3;
_5 = &_4->out;
_6 = *_5;
_7 = ((frost$io$OutputStream*) _6);
// begin inline call to function frost.core.String.get_asString():frost.core.String from CBackend.frost:1515:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_10 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_13 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param1, &$s4);
_14 = &param0->$self;
_15 = *_14;
_16 = &param0->id;
_17 = *_16;
// begin inline call to function org.frostlang.frostc.CBackend.name(id:org.frostlang.frostc.IR.Statement.ID):frost.core.String from CBackend.frost:1515:56
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:918
_20 = _17.value;
frost$core$Int$wrapper* $tmp5;
$tmp5 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp5->value = _20;
_21 = ((frost$core$Object*) $tmp5);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from CBackend.frost:918:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_24 = ($fn6) _21->$class->vtable[0];
_25 = _24(_21);
_26 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s7, _25);
_27 = ((frost$core$Object*) _26);
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_29);
_31 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_31);
_34 = ((frost$core$Object*) _26);
frost$core$Frost$ref$frost$core$Object$Q(_34);
_36 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = _21;
frost$core$Frost$unref$frost$core$Object$Q(_38);
_41 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_13, _26);
_42 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_41, &$s8);
_43 = ($fn9) _7->$class->vtable[19];
_44 = _43(_7, _42);
_45 = _44 == NULL;
if (_45) goto block6; else goto block7;
block7:;
_47 = ((frost$core$Object*) _44);
frost$core$Frost$ref$frost$core$Object$Q(_47);
_49 = _44 != NULL;
_50 = (frost$core$Bit) {_49};
_51 = _50.value;
if (_51) goto block8; else goto block9;
block9:;
_53 = (frost$core$Int) {1515u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _53, &$s11);
abort(); // unreachable
block8:;
_56 = _44;
*(&local0) = _56;
_58 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_58);
_60 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_60);
_62 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_62);
_64 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_64);
_66 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_66);
_68 = ((frost$core$Object*) param1);
frost$core$Frost$unref$frost$core$Object$Q(_68);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:1518
_85 = (frost$core$Int) {1518u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s12, _85);
abort(); // unreachable
block6:;
_71 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_71);
_73 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_73);
_75 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_75);
_77 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_77);
_79 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_79);
_81 = ((frost$core$Object*) param1);
frost$core$Frost$unref$frost$core$Object$Q(_81);
_88 = *(&local0);
_89 = ((frost$core$Object*) _88);
frost$core$Frost$unref$frost$core$Object$Q(_89);
*(&local0) = ((frost$core$Error*) NULL);
return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




