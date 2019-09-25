#include "frost/io/IndentedOutputStream.h"
#include "frost/io/OutputStream.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Error.h"
#include "frost/core/UInt8.h"
#include "frost/unsafe/Pointer.h"
#include "frost/core/Int64.h"
#include "frost/core/MutableString.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
frost$io$IndentedOutputStream$class_type frost$io$IndentedOutputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$io$OutputStream$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$IndentedOutputStream$cleanup, frost$io$IndentedOutputStream$write$frost$core$UInt8$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt16$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt32$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int8$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int16$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int32$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int64$R$frost$core$Error$Q, frost$io$IndentedOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Char8$R$frost$core$Error$Q, frost$io$OutputStream$print$frost$core$String$R$frost$core$Error$Q, frost$io$OutputStream$print$frost$core$Object$R$frost$core$Error$Q, frost$io$OutputStream$printLine$frost$core$String$R$frost$core$Error$Q, frost$io$OutputStream$printLine$frost$core$Object$R$frost$core$Error$Q, frost$io$OutputStream$printLine$R$frost$core$Error$Q, frost$io$OutputStream$flush$R$frost$core$Error$Q, frost$io$OutputStream$close$R$frost$core$Error$Q, frost$io$IndentedOutputStream$indentIfNeeded$R$frost$core$Error$Q} };

typedef frost$core$Error* (*$fn4)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn7)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn10)(frost$io$OutputStream*, frost$unsafe$Pointer, frost$core$Int);
typedef frost$core$Error* (*$fn11)(frost$io$OutputStream*, frost$unsafe$Pointer, frost$core$Int);
typedef frost$core$Error* (*$fn12)(frost$io$OutputStream*, frost$unsafe$Pointer, frost$core$Int);
typedef frost$core$Error* (*$fn13)(frost$io$OutputStream*, frost$unsafe$Pointer, frost$core$Int);
typedef frost$core$Error* (*$fn16)(frost$io$OutputStream*, frost$unsafe$Pointer, frost$core$Int);
typedef frost$core$Error* (*$fn21)(frost$io$OutputStream*, frost$unsafe$Pointer, frost$core$Int);
typedef frost$core$Error* (*$fn24)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn28)(frost$io$OutputStream*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 29, 7285494389777280767, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 26, -698644628301053101, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 26, -698644628301053101, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 26, -698644628301053101, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 26, -698644628301053101, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 26, -698644628301053101, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 26, -698644628301053101, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 93, -6936278265055109166, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x20", 1, -5808626142386486913, NULL };

void frost$io$IndentedOutputStream$init$frost$io$OutputStream(void* rawSelf, frost$io$OutputStream* param1) {
frost$io$IndentedOutputStream* param0 = (frost$io$IndentedOutputStream*) rawSelf;

frost$core$Int _1;
frost$core$Int* _2;
frost$core$Int _5;
frost$core$Int* _6;
frost$core$Object* _9;
frost$core$String** _11;
frost$core$String* _12;
frost$core$Object* _13;
frost$core$String** _15;
frost$core$Bit _18;
frost$core$Bit* _19;
frost$core$Object* _22;
frost$io$OutputStream** _24;
frost$io$OutputStream* _25;
frost$core$Object* _26;
frost$io$OutputStream** _28;
frost$io$OutputStream* _31;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:22
_1 = (frost$core$Int) {0u};
_2 = &param0->level;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:27
_5 = (frost$core$Int) {4u};
_6 = &param0->indentSize;
*_6 = _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:30
_9 = ((frost$core$Object*) &$s2);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = &param0->indent;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = &param0->indent;
*_15 = &$s3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:33
_18 = (frost$core$Bit) {true};
_19 = &param0->atLineStart;
*_19 = _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:44
_22 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_22);
_24 = &param0->out;
_25 = *_24;
_26 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_26);
_28 = &param0->out;
*_28 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:45
_31 = ((frost$io$OutputStream*) param0);
frost$io$OutputStream$init(_31);
return;

}
frost$core$Error* frost$io$IndentedOutputStream$write$frost$core$UInt8$R$frost$core$Error$Q(void* rawSelf, frost$core$UInt8 param1) {
frost$io$IndentedOutputStream* param0 = (frost$io$IndentedOutputStream*) rawSelf;

frost$core$Error* local0 = NULL;
frost$core$UInt8 _3;
uint8_t _6;
uint8_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Bit _14;
frost$core$Bit* _15;
frost$core$Error* _20;
bool _21;
frost$core$Object* _23;
bool _25;
frost$core$Bit _26;
bool _27;
frost$core$Int _29;
frost$core$Error* _32;
frost$core$Object* _34;
frost$core$Object* _37;
frost$io$OutputStream** _41;
frost$io$OutputStream* _42;
$fn4 _43;
frost$core$Error* _44;
bool _45;
frost$core$Object* _47;
bool _49;
frost$core$Bit _50;
bool _51;
frost$core$Int _53;
frost$core$Error* _56;
frost$core$Object* _58;
frost$core$Object* _61;
frost$core$Object* _64;
frost$core$Error* _66;
frost$core$Object* _67;
frost$core$Error* _72;
frost$core$Error* _73;
frost$core$Object* _74;
frost$core$Error* _76;
frost$core$Object* _77;
frost$core$Error* _81;
frost$core$Object* _82;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:50
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:51
_3 = (frost$core$UInt8) {10u};
// begin inline call to function frost.core.UInt8.=(other:frost.core.UInt8):frost.core.Bit from IndentedOutputStream.frost:51:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:643
_6 = param1.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:52
_14 = (frost$core$Bit) {true};
_15 = &param0->atLineStart;
*_15 = _14;
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:55
_20 = frost$io$IndentedOutputStream$indentIfNeeded$R$frost$core$Error$Q(param0);
_21 = _20 == NULL;
if (_21) goto block7; else goto block8;
block8:;
_23 = ((frost$core$Object*) _20);
frost$core$Frost$ref$frost$core$Object$Q(_23);
_25 = _20 != NULL;
_26 = (frost$core$Bit) {_25};
_27 = _26.value;
if (_27) goto block9; else goto block10;
block10:;
_29 = (frost$core$Int) {55u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _29, &$s6);
abort(); // unreachable
block9:;
_32 = _20;
*(&local0) = _32;
_34 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_34);
goto block1;
block7:;
_37 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_37);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:57
_41 = &param0->out;
_42 = *_41;
_43 = ($fn7) _42->$class->vtable[2];
_44 = _43(_42, param1);
_45 = _44 == NULL;
if (_45) goto block11; else goto block12;
block12:;
_47 = ((frost$core$Object*) _44);
frost$core$Frost$ref$frost$core$Object$Q(_47);
_49 = _44 != NULL;
_50 = (frost$core$Bit) {_49};
_51 = _50.value;
if (_51) goto block13; else goto block14;
block14:;
_53 = (frost$core$Int) {57u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _53, &$s9);
abort(); // unreachable
block13:;
_56 = _44;
*(&local0) = _56;
_58 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_58);
goto block1;
block11:;
_61 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_61);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:58
_64 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_64);
_66 = *(&local0);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_67);
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:61
_72 = *(&local0);
_73 = _72;
_74 = ((frost$core$Object*) _73);
frost$core$Frost$ref$frost$core$Object$Q(_74);
_76 = *(&local0);
_77 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_77);
*(&local0) = ((frost$core$Error*) NULL);
return _73;
block2:;
_81 = *(&local0);
_82 = ((frost$core$Object*) _81);
frost$core$Frost$unref$frost$core$Object$Q(_82);
*(&local0) = ((frost$core$Error*) NULL);
goto block15;
block15:;

}
frost$core$Error* frost$io$IndentedOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q(void* rawSelf, frost$unsafe$Pointer param1, frost$core$Int param2) {
frost$io$IndentedOutputStream* param0 = (frost$io$IndentedOutputStream*) rawSelf;

frost$core$Error* local0 = NULL;
frost$core$Int local1;
frost$core$Int local2;
int64_t local3;
int64_t local4;
frost$unsafe$Pointer local5;
frost$unsafe$Pointer local6;
int64_t local7;
int64_t local8;
frost$unsafe$Pointer local9;
frost$unsafe$Pointer local10;
int64_t local11;
int64_t local12;
frost$unsafe$Pointer local13;
frost$unsafe$Pointer local14;
frost$core$Int _3;
frost$core$Int _6;
frost$core$Int _10;
int64_t _11;
int64_t _12;
bool _13;
frost$core$Bit _14;
bool _15;
int64_t _18;
frost$core$Int _19;
frost$core$Int64 _20;
int64_t _21;
frost$core$UInt8 _22;
frost$core$UInt8 _23;
uint8_t _26;
uint8_t _27;
bool _28;
frost$core$Bit _29;
bool _31;
frost$io$OutputStream** _34;
frost$io$OutputStream* _35;
frost$core$Int _36;
int64_t _39;
int64_t _44;
int64_t _45;
int64_t _46;
int64_t _47;
int64_t _48;
int64_t* _51;
frost$unsafe$Pointer _53;
frost$unsafe$Pointer _56;
frost$core$Int _58;
frost$core$Int _59;
int64_t _60;
int64_t _61;
int64_t _62;
frost$core$Int _63;
$fn10 _64;
frost$core$Error* _65;
bool _66;
frost$core$Object* _68;
bool _70;
frost$core$Bit _71;
bool _72;
frost$core$Int _74;
frost$core$Error* _77;
frost$core$Object* _79;
frost$core$Object* _82;
frost$core$Int _85;
frost$core$Bit _88;
frost$core$Bit* _89;
frost$core$Bit* _93;
frost$core$Bit _94;
bool _95;
frost$io$OutputStream** _98;
frost$io$OutputStream* _99;
frost$core$Int _100;
int64_t _103;
int64_t _108;
int64_t _109;
int64_t _110;
int64_t _111;
int64_t _112;
int64_t* _115;
frost$unsafe$Pointer _117;
frost$unsafe$Pointer _120;
frost$core$Int _122;
frost$core$Int _123;
int64_t _124;
int64_t _125;
int64_t _126;
frost$core$Int _127;
$fn11 _128;
frost$core$Error* _129;
bool _130;
frost$core$Object* _132;
bool _134;
frost$core$Bit _135;
bool _136;
frost$core$Int _138;
frost$core$Error* _141;
frost$core$Object* _143;
frost$core$Object* _146;
frost$core$Int _149;
frost$core$Error* _152;
bool _153;
frost$core$Object* _155;
bool _157;
frost$core$Bit _158;
bool _159;
frost$core$Int _161;
frost$core$Error* _164;
frost$core$Object* _166;
frost$core$Object* _169;
frost$core$Int _174;
frost$core$Int _175;
int64_t _176;
int64_t _177;
int64_t _178;
frost$core$Int _179;
frost$io$OutputStream** _183;
frost$io$OutputStream* _184;
frost$core$Int _185;
int64_t _188;
int64_t _193;
int64_t _194;
int64_t _195;
int64_t _196;
int64_t _197;
int64_t* _200;
frost$unsafe$Pointer _202;
frost$unsafe$Pointer _205;
frost$core$Int _207;
frost$core$Int _208;
int64_t _209;
int64_t _210;
int64_t _211;
frost$core$Int _212;
$fn12 _213;
frost$core$Error* _214;
bool _215;
frost$core$Object* _217;
bool _219;
frost$core$Bit _220;
bool _221;
frost$core$Int _223;
frost$core$Error* _226;
frost$core$Object* _228;
frost$core$Object* _231;
frost$core$Object* _234;
frost$core$Error* _236;
frost$core$Object* _237;
frost$core$Error* _242;
frost$core$Error* _243;
frost$core$Object* _244;
frost$core$Error* _246;
frost$core$Object* _247;
frost$core$Error* _251;
frost$core$Object* _252;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:67
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:68
_3 = (frost$core$Int) {0u};
*(&local1) = _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:69
_6 = *(&local1);
*(&local2) = _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:70
goto block3;
block3:;
_10 = *(&local2);
_11 = _10.value;
_12 = param2.value;
_13 = _11 < _12;
_14 = (frost$core$Bit) {_13};
_15 = _14.value;
if (_15) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:71
_18 = param1.value;
_19 = *(&local2);
_20 = frost$core$Int64$init$frost$core$Int(_19);
_21 = _20.value;
_22 = ((frost$core$UInt8*)_18)[_21];
_23 = (frost$core$UInt8) {10u};
// begin inline call to function frost.core.UInt8.=(other:frost.core.UInt8):frost.core.Bit from IndentedOutputStream.frost:71:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:643
_26 = _22.value;
_27 = _23.value;
_28 = _26 == _27;
_29 = (frost$core$Bit) {_28};
_31 = _29.value;
if (_31) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:72
_34 = &param0->out;
_35 = *_34;
_36 = *(&local1);
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from IndentedOutputStream.frost:72:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_39 = _36.value;
*(&local3) = _39;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local4) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_44 = param1.value;
_45 = *(&local3);
_46 = *(&local4);
_47 = _45 * _46;
_48 = _44 + _47;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_51 = &(&local6)->value;
*_51 = _48;
_53 = *(&local6);
*(&local5) = _53;
_56 = *(&local5);
_58 = *(&local2);
_59 = *(&local1);
_60 = _58.value;
_61 = _59.value;
_62 = _60 - _61;
_63 = (frost$core$Int) {_62};
_64 = ($fn13) _35->$class->vtable[10];
_65 = _64(_35, _56, _63);
_66 = _65 == NULL;
if (_66) goto block12; else goto block13;
block13:;
_68 = ((frost$core$Object*) _65);
frost$core$Frost$ref$frost$core$Object$Q(_68);
_70 = _65 != NULL;
_71 = (frost$core$Bit) {_70};
_72 = _71.value;
if (_72) goto block14; else goto block15;
block15:;
_74 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _74, &$s15);
abort(); // unreachable
block14:;
_77 = _65;
*(&local0) = _77;
_79 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_79);
goto block1;
block12:;
_82 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_82);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:73
_85 = *(&local2);
*(&local1) = _85;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:74
_88 = (frost$core$Bit) {true};
_89 = &param0->atLineStart;
*_89 = _88;
goto block7;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:76
_93 = &param0->atLineStart;
_94 = *_93;
_95 = _94.value;
if (_95) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:77
_98 = &param0->out;
_99 = *_98;
_100 = *(&local1);
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from IndentedOutputStream.frost:77:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_103 = _100.value;
*(&local7) = _103;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local8) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_108 = param1.value;
_109 = *(&local7);
_110 = *(&local8);
_111 = _109 * _110;
_112 = _108 + _111;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_115 = &(&local10)->value;
*_115 = _112;
_117 = *(&local10);
*(&local9) = _117;
_120 = *(&local9);
_122 = *(&local2);
_123 = *(&local1);
_124 = _122.value;
_125 = _123.value;
_126 = _124 - _125;
_127 = (frost$core$Int) {_126};
_128 = ($fn16) _99->$class->vtable[10];
_129 = _128(_99, _120, _127);
_130 = _129 == NULL;
if (_130) goto block20; else goto block21;
block21:;
_132 = ((frost$core$Object*) _129);
frost$core$Frost$ref$frost$core$Object$Q(_132);
_134 = _129 != NULL;
_135 = (frost$core$Bit) {_134};
_136 = _135.value;
if (_136) goto block22; else goto block23;
block23:;
_138 = (frost$core$Int) {77u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s17, _138, &$s18);
abort(); // unreachable
block22:;
_141 = _129;
*(&local0) = _141;
_143 = ((frost$core$Object*) _129);
frost$core$Frost$unref$frost$core$Object$Q(_143);
goto block1;
block20:;
_146 = ((frost$core$Object*) _129);
frost$core$Frost$unref$frost$core$Object$Q(_146);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:78
_149 = *(&local2);
*(&local1) = _149;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:79
_152 = frost$io$IndentedOutputStream$indentIfNeeded$R$frost$core$Error$Q(param0);
_153 = _152 == NULL;
if (_153) goto block24; else goto block25;
block25:;
_155 = ((frost$core$Object*) _152);
frost$core$Frost$ref$frost$core$Object$Q(_155);
_157 = _152 != NULL;
_158 = (frost$core$Bit) {_157};
_159 = _158.value;
if (_159) goto block26; else goto block27;
block27:;
_161 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s19, _161, &$s20);
abort(); // unreachable
block26:;
_164 = _152;
*(&local0) = _164;
_166 = ((frost$core$Object*) _152);
frost$core$Frost$unref$frost$core$Object$Q(_166);
goto block1;
block24:;
_169 = ((frost$core$Object*) _152);
frost$core$Frost$unref$frost$core$Object$Q(_169);
goto block17;
block17:;
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:81
_174 = *(&local2);
_175 = (frost$core$Int) {1u};
_176 = _174.value;
_177 = _175.value;
_178 = _176 + _177;
_179 = (frost$core$Int) {_178};
*(&local2) = _179;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:83
_183 = &param0->out;
_184 = *_183;
_185 = *(&local1);
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from IndentedOutputStream.frost:83:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_188 = _185.value;
*(&local11) = _188;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local12) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_193 = param1.value;
_194 = *(&local11);
_195 = *(&local12);
_196 = _194 * _195;
_197 = _193 + _196;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_200 = &(&local14)->value;
*_200 = _197;
_202 = *(&local14);
*(&local13) = _202;
_205 = *(&local13);
_207 = *(&local2);
_208 = *(&local1);
_209 = _207.value;
_210 = _208.value;
_211 = _209 - _210;
_212 = (frost$core$Int) {_211};
_213 = ($fn21) _184->$class->vtable[10];
_214 = _213(_184, _205, _212);
_215 = _214 == NULL;
if (_215) goto block30; else goto block31;
block31:;
_217 = ((frost$core$Object*) _214);
frost$core$Frost$ref$frost$core$Object$Q(_217);
_219 = _214 != NULL;
_220 = (frost$core$Bit) {_219};
_221 = _220.value;
if (_221) goto block32; else goto block33;
block33:;
_223 = (frost$core$Int) {83u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _223, &$s23);
abort(); // unreachable
block32:;
_226 = _214;
*(&local0) = _226;
_228 = ((frost$core$Object*) _214);
frost$core$Frost$unref$frost$core$Object$Q(_228);
goto block1;
block30:;
_231 = ((frost$core$Object*) _214);
frost$core$Frost$unref$frost$core$Object$Q(_231);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:84
_234 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_234);
_236 = *(&local0);
_237 = ((frost$core$Object*) _236);
frost$core$Frost$unref$frost$core$Object$Q(_237);
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:87
_242 = *(&local0);
_243 = _242;
_244 = ((frost$core$Object*) _243);
frost$core$Frost$ref$frost$core$Object$Q(_244);
_246 = *(&local0);
_247 = ((frost$core$Object*) _246);
frost$core$Frost$unref$frost$core$Object$Q(_247);
*(&local0) = ((frost$core$Error*) NULL);
return _243;
block2:;
_251 = *(&local0);
_252 = ((frost$core$Object*) _251);
frost$core$Frost$unref$frost$core$Object$Q(_252);
*(&local0) = ((frost$core$Error*) NULL);
goto block34;
block34:;

}
frost$core$Error* frost$io$IndentedOutputStream$indentIfNeeded$R$frost$core$Error$Q(void* rawSelf) {
frost$io$IndentedOutputStream* param0 = (frost$io$IndentedOutputStream*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$Int local1;
frost$core$Bit* _1;
frost$core$Bit _2;
bool _3;
frost$core$Bit _6;
frost$core$Bit* _7;
frost$core$String** _10;
frost$core$String* _11;
frost$core$Int* _12;
frost$core$Int _13;
frost$core$Int* _14;
frost$core$Int _15;
frost$core$Int* _16;
frost$core$Int _17;
int64_t _18;
int64_t _19;
int64_t _20;
frost$core$Int _21;
int64_t _22;
int64_t _23;
bool _24;
frost$core$Bit _25;
bool _26;
frost$core$Int* _29;
frost$core$Int _30;
frost$core$Int* _31;
frost$core$Int _32;
int64_t _33;
int64_t _34;
int64_t _35;
frost$core$Int _36;
frost$core$Int _38;
int64_t _39;
int64_t _40;
bool _41;
frost$core$Bit _42;
bool _43;
frost$core$Int _45;
frost$core$MutableString* _49;
frost$core$Object* _52;
frost$core$MutableString* _54;
frost$core$Object* _55;
frost$core$Object* _58;
frost$core$Int _61;
frost$core$Bit _62;
frost$core$Range$LTfrost$core$Int$GT _63;
frost$core$Int _64;
frost$core$Int _66;
frost$core$Bit _67;
bool _68;
frost$core$Int _69;
int64_t _71;
int64_t _72;
bool _73;
frost$core$Bit _74;
bool _75;
int64_t _77;
int64_t _78;
bool _79;
frost$core$Bit _80;
bool _81;
frost$core$MutableString* _84;
frost$core$Int _87;
int64_t _88;
int64_t _89;
int64_t _90;
frost$core$Int _91;
int64_t _93;
int64_t _94;
bool _95;
frost$core$Bit _96;
bool _97;
int64_t _99;
int64_t _100;
bool _101;
frost$core$Bit _102;
bool _103;
int64_t _105;
int64_t _106;
int64_t _107;
frost$core$Int _108;
frost$core$MutableString* _112;
frost$core$String* _113;
frost$core$Object* _114;
frost$core$Object* _116;
frost$core$MutableString* _118;
frost$core$Object* _119;
frost$core$Object* _123;
frost$core$String** _125;
frost$core$String* _126;
frost$core$Object* _127;
frost$core$String** _129;
frost$core$Object* _131;
frost$io$OutputStream* _135;
frost$core$String** _136;
frost$core$String* _137;
$fn24 _138;
frost$core$Error* _139;
frost$core$Object* _140;
frost$core$Object* _142;
frost$core$Object* _146;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:93
_1 = &param0->atLineStart;
_2 = *_1;
_3 = _2.value;
if (_3) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:94
_6 = (frost$core$Bit) {false};
_7 = &param0->atLineStart;
*_7 = _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:95
_10 = &param0->indent;
_11 = *_10;
_12 = &_11->_length;
_13 = *_12;
_14 = &param0->indentSize;
_15 = *_14;
_16 = &param0->level;
_17 = *_16;
_18 = _15.value;
_19 = _17.value;
_20 = _18 * _19;
_21 = (frost$core$Int) {_20};
_22 = _13.value;
_23 = _21.value;
_24 = _22 != _23;
_25 = (frost$core$Bit) {_24};
_26 = _25.value;
if (_26) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:96
_29 = &param0->indentSize;
_30 = *_29;
_31 = &param0->level;
_32 = *_31;
_33 = _30.value;
_34 = _32.value;
_35 = _33 * _34;
_36 = (frost$core$Int) {_35};
// begin inline call to function frost.core.String.*(count:frost.core.Int):frost.core.String from IndentedOutputStream.frost:96:31
_38 = (frost$core$Int) {0u};
_39 = _36.value;
_40 = _38.value;
_41 = _39 >= _40;
_42 = (frost$core$Bit) {_41};
_43 = _42.value;
if (_43) goto block6; else goto block7;
block7:;
_45 = (frost$core$Int) {567u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s25, _45, &$s26);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:568
_49 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_49);
*(&local0) = ((frost$core$MutableString*) NULL);
_52 = ((frost$core$Object*) _49);
frost$core$Frost$ref$frost$core$Object$Q(_52);
_54 = *(&local0);
_55 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_55);
*(&local0) = _49;
_58 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_58);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:569
_61 = (frost$core$Int) {0u};
_62 = (frost$core$Bit) {false};
_63 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_61, _36, _62);
_64 = _63.min;
*(&local1) = _64;
_66 = _63.max;
_67 = _63.inclusive;
_68 = _67.value;
_69 = (frost$core$Int) {1u};
if (_68) goto block11; else goto block12;
block11:;
_71 = _64.value;
_72 = _66.value;
_73 = _71 <= _72;
_74 = (frost$core$Bit) {_73};
_75 = _74.value;
if (_75) goto block8; else goto block9;
block12:;
_77 = _64.value;
_78 = _66.value;
_79 = _77 < _78;
_80 = (frost$core$Bit) {_79};
_81 = _80.value;
if (_81) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:570
_84 = *(&local0);
frost$core$MutableString$append$frost$core$String(_84, &$s27);
_87 = *(&local1);
_88 = _66.value;
_89 = _87.value;
_90 = _88 - _89;
_91 = (frost$core$Int) {_90};
if (_68) goto block14; else goto block15;
block14:;
_93 = _91.value;
_94 = _69.value;
_95 = _93 >= _94;
_96 = (frost$core$Bit) {_95};
_97 = _96.value;
if (_97) goto block13; else goto block9;
block15:;
_99 = _91.value;
_100 = _69.value;
_101 = _99 > _100;
_102 = (frost$core$Bit) {_101};
_103 = _102.value;
if (_103) goto block13; else goto block9;
block13:;
_105 = _87.value;
_106 = _69.value;
_107 = _105 + _106;
_108 = (frost$core$Int) {_107};
*(&local1) = _108;
goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:572
_112 = *(&local0);
_113 = frost$core$MutableString$finish$R$frost$core$String(_112);
_114 = ((frost$core$Object*) _113);
frost$core$Frost$ref$frost$core$Object$Q(_114);
_116 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_116);
_118 = *(&local0);
_119 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_119);
*(&local0) = ((frost$core$MutableString*) NULL);
_123 = ((frost$core$Object*) _113);
frost$core$Frost$ref$frost$core$Object$Q(_123);
_125 = &param0->indent;
_126 = *_125;
_127 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_127);
_129 = &param0->indent;
*_129 = _113;
_131 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_131);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:98
_135 = ((frost$io$OutputStream*) param0);
_136 = &param0->indent;
_137 = *_136;
_138 = ($fn28) _135->$class->vtable[17];
_139 = _138(_135, _137);
_140 = ((frost$core$Object*) _139);
frost$core$Frost$ref$frost$core$Object$Q(_140);
_142 = ((frost$core$Object*) _139);
frost$core$Frost$unref$frost$core$Object$Q(_142);
return _139;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:100
_146 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_146);
return ((frost$core$Error*) NULL);

}
void frost$io$IndentedOutputStream$cleanup(void* rawSelf) {
frost$io$IndentedOutputStream* param0 = (frost$io$IndentedOutputStream*) rawSelf;

frost$io$OutputStream* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
frost$io$OutputStream** _7;
frost$io$OutputStream* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:17
_1 = ((frost$io$OutputStream*) param0);
frost$io$OutputStream$cleanup(_1);
_3 = &param0->indent;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->out;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}

