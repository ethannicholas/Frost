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
#include "frost/core/Int64.h"
#include "frost/core/MutableString.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"


static frost$core$String $s1;
frost$io$IndentedOutputStream$class_type frost$io$IndentedOutputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$io$OutputStream$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$IndentedOutputStream$cleanup, frost$io$IndentedOutputStream$write$frost$core$UInt8$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt16$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt32$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int8$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int16$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int32$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int64$R$frost$core$Error$Q, frost$io$IndentedOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Char8$R$frost$core$Error$Q, frost$io$OutputStream$print$frost$core$String$R$frost$core$Error$Q, frost$io$OutputStream$print$frost$core$Object$R$frost$core$Error$Q, frost$io$OutputStream$printLine$frost$core$String$R$frost$core$Error$Q, frost$io$OutputStream$printLine$frost$core$Object$R$frost$core$Error$Q, frost$io$OutputStream$printLine$R$frost$core$Error$Q, frost$io$OutputStream$flush$R$frost$core$Error$Q, frost$io$OutputStream$close$R$frost$core$Error$Q, frost$io$IndentedOutputStream$indentIfNeeded$R$frost$core$Error$Q} };

typedef frost$core$Error* (*$fn4)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn7)(frost$io$OutputStream*, frost$core$UInt8);
typedef frost$core$Error* (*$fn10)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Error* (*$fn11)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Error* (*$fn12)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Error* (*$fn13)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Error* (*$fn16)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Error* (*$fn21)(frost$io$OutputStream*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Error* (*$fn24)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn28)(frost$io$OutputStream*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 29, 7285494389777280767, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 26, -698644628301053101, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 26, -698644628301053101, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 26, -698644628301053101, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 26, -698644628301053101, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 26, -698644628301053101, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 26, -698644628301053101, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 93, -6936278265055109166, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };

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
frost$core$Error* frost$io$IndentedOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q(void* rawSelf, frost$core$UInt8* param1, frost$core$Int param2) {
frost$io$IndentedOutputStream* param0 = (frost$io$IndentedOutputStream*) rawSelf;

frost$core$Error* local0 = NULL;
frost$core$Int local1;
frost$core$Int local2;
frost$core$Int _3;
frost$core$Int _6;
frost$core$Int _10;
int64_t _11;
int64_t _12;
bool _13;
frost$core$Bit _14;
bool _15;
frost$core$Int _18;
frost$core$Int64 _19;
int64_t _20;
frost$core$UInt8 _21;
frost$core$UInt8 _22;
uint8_t _25;
uint8_t _26;
bool _27;
frost$core$Bit _28;
bool _30;
frost$io$OutputStream** _33;
frost$io$OutputStream* _34;
frost$core$Int _35;
frost$core$Int64 _36;
int64_t _37;
frost$core$UInt8* _38;
frost$core$Int _39;
frost$core$Int _40;
int64_t _41;
int64_t _42;
int64_t _43;
frost$core$Int _44;
$fn10 _45;
frost$core$Error* _46;
bool _47;
frost$core$Object* _49;
bool _51;
frost$core$Bit _52;
bool _53;
frost$core$Int _55;
frost$core$Error* _58;
frost$core$Object* _60;
frost$core$Object* _63;
frost$core$Int _66;
frost$core$Bit _69;
frost$core$Bit* _70;
frost$core$Bit* _74;
frost$core$Bit _75;
bool _76;
frost$io$OutputStream** _79;
frost$io$OutputStream* _80;
frost$core$Int _81;
frost$core$Int64 _82;
int64_t _83;
frost$core$UInt8* _84;
frost$core$Int _85;
frost$core$Int _86;
int64_t _87;
int64_t _88;
int64_t _89;
frost$core$Int _90;
$fn11 _91;
frost$core$Error* _92;
bool _93;
frost$core$Object* _95;
bool _97;
frost$core$Bit _98;
bool _99;
frost$core$Int _101;
frost$core$Error* _104;
frost$core$Object* _106;
frost$core$Object* _109;
frost$core$Int _112;
frost$core$Error* _115;
bool _116;
frost$core$Object* _118;
bool _120;
frost$core$Bit _121;
bool _122;
frost$core$Int _124;
frost$core$Error* _127;
frost$core$Object* _129;
frost$core$Object* _132;
frost$core$Int _137;
frost$core$Int _138;
int64_t _139;
int64_t _140;
int64_t _141;
frost$core$Int _142;
frost$io$OutputStream** _146;
frost$io$OutputStream* _147;
frost$core$Int _148;
frost$core$Int64 _149;
int64_t _150;
frost$core$UInt8* _151;
frost$core$Int _152;
frost$core$Int _153;
int64_t _154;
int64_t _155;
int64_t _156;
frost$core$Int _157;
$fn12 _158;
frost$core$Error* _159;
bool _160;
frost$core$Object* _162;
bool _164;
frost$core$Bit _165;
bool _166;
frost$core$Int _168;
frost$core$Error* _171;
frost$core$Object* _173;
frost$core$Object* _176;
frost$core$Object* _179;
frost$core$Error* _181;
frost$core$Object* _182;
frost$core$Error* _187;
frost$core$Error* _188;
frost$core$Object* _189;
frost$core$Error* _191;
frost$core$Object* _192;
frost$core$Error* _196;
frost$core$Object* _197;
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
_18 = *(&local2);
_19 = frost$core$Int64$init$frost$core$Int(_18);
_20 = _19.value;
_21 = param1[_20];
_22 = (frost$core$UInt8) {10u};
// begin inline call to function frost.core.UInt8.=(other:frost.core.UInt8):frost.core.Bit from IndentedOutputStream.frost:71:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:643
_25 = _21.value;
_26 = _22.value;
_27 = _25 == _26;
_28 = (frost$core$Bit) {_27};
_30 = _28.value;
if (_30) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:72
_33 = &param0->out;
_34 = *_33;
_35 = *(&local1);
_36 = frost$core$Int64$init$frost$core$Int(_35);
_37 = _36.value;
_38 = param1 + _37;
_39 = *(&local2);
_40 = *(&local1);
_41 = _39.value;
_42 = _40.value;
_43 = _41 - _42;
_44 = (frost$core$Int) {_43};
_45 = ($fn13) _34->$class->vtable[10];
_46 = _45(_34, _38, _44);
_47 = _46 == NULL;
if (_47) goto block10; else goto block11;
block11:;
_49 = ((frost$core$Object*) _46);
frost$core$Frost$ref$frost$core$Object$Q(_49);
_51 = _46 != NULL;
_52 = (frost$core$Bit) {_51};
_53 = _52.value;
if (_53) goto block12; else goto block13;
block13:;
_55 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _55, &$s15);
abort(); // unreachable
block12:;
_58 = _46;
*(&local0) = _58;
_60 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_60);
goto block1;
block10:;
_63 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_63);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:73
_66 = *(&local2);
*(&local1) = _66;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:74
_69 = (frost$core$Bit) {true};
_70 = &param0->atLineStart;
*_70 = _69;
goto block7;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:76
_74 = &param0->atLineStart;
_75 = *_74;
_76 = _75.value;
if (_76) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:77
_79 = &param0->out;
_80 = *_79;
_81 = *(&local1);
_82 = frost$core$Int64$init$frost$core$Int(_81);
_83 = _82.value;
_84 = param1 + _83;
_85 = *(&local2);
_86 = *(&local1);
_87 = _85.value;
_88 = _86.value;
_89 = _87 - _88;
_90 = (frost$core$Int) {_89};
_91 = ($fn16) _80->$class->vtable[10];
_92 = _91(_80, _84, _90);
_93 = _92 == NULL;
if (_93) goto block16; else goto block17;
block17:;
_95 = ((frost$core$Object*) _92);
frost$core$Frost$ref$frost$core$Object$Q(_95);
_97 = _92 != NULL;
_98 = (frost$core$Bit) {_97};
_99 = _98.value;
if (_99) goto block18; else goto block19;
block19:;
_101 = (frost$core$Int) {77u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s17, _101, &$s18);
abort(); // unreachable
block18:;
_104 = _92;
*(&local0) = _104;
_106 = ((frost$core$Object*) _92);
frost$core$Frost$unref$frost$core$Object$Q(_106);
goto block1;
block16:;
_109 = ((frost$core$Object*) _92);
frost$core$Frost$unref$frost$core$Object$Q(_109);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:78
_112 = *(&local2);
*(&local1) = _112;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:79
_115 = frost$io$IndentedOutputStream$indentIfNeeded$R$frost$core$Error$Q(param0);
_116 = _115 == NULL;
if (_116) goto block20; else goto block21;
block21:;
_118 = ((frost$core$Object*) _115);
frost$core$Frost$ref$frost$core$Object$Q(_118);
_120 = _115 != NULL;
_121 = (frost$core$Bit) {_120};
_122 = _121.value;
if (_122) goto block22; else goto block23;
block23:;
_124 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s19, _124, &$s20);
abort(); // unreachable
block22:;
_127 = _115;
*(&local0) = _127;
_129 = ((frost$core$Object*) _115);
frost$core$Frost$unref$frost$core$Object$Q(_129);
goto block1;
block20:;
_132 = ((frost$core$Object*) _115);
frost$core$Frost$unref$frost$core$Object$Q(_132);
goto block15;
block15:;
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:81
_137 = *(&local2);
_138 = (frost$core$Int) {1u};
_139 = _137.value;
_140 = _138.value;
_141 = _139 + _140;
_142 = (frost$core$Int) {_141};
*(&local2) = _142;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:83
_146 = &param0->out;
_147 = *_146;
_148 = *(&local1);
_149 = frost$core$Int64$init$frost$core$Int(_148);
_150 = _149.value;
_151 = param1 + _150;
_152 = *(&local2);
_153 = *(&local1);
_154 = _152.value;
_155 = _153.value;
_156 = _154 - _155;
_157 = (frost$core$Int) {_156};
_158 = ($fn21) _147->$class->vtable[10];
_159 = _158(_147, _151, _157);
_160 = _159 == NULL;
if (_160) goto block24; else goto block25;
block25:;
_162 = ((frost$core$Object*) _159);
frost$core$Frost$ref$frost$core$Object$Q(_162);
_164 = _159 != NULL;
_165 = (frost$core$Bit) {_164};
_166 = _165.value;
if (_166) goto block26; else goto block27;
block27:;
_168 = (frost$core$Int) {83u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _168, &$s23);
abort(); // unreachable
block26:;
_171 = _159;
*(&local0) = _171;
_173 = ((frost$core$Object*) _159);
frost$core$Frost$unref$frost$core$Object$Q(_173);
goto block1;
block24:;
_176 = ((frost$core$Object*) _159);
frost$core$Frost$unref$frost$core$Object$Q(_176);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:84
_179 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_179);
_181 = *(&local0);
_182 = ((frost$core$Object*) _181);
frost$core$Frost$unref$frost$core$Object$Q(_182);
*(&local0) = ((frost$core$Error*) NULL);
return ((frost$core$Error*) NULL);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/IndentedOutputStream.frost:87
_187 = *(&local0);
_188 = _187;
_189 = ((frost$core$Object*) _188);
frost$core$Frost$ref$frost$core$Object$Q(_189);
_191 = *(&local0);
_192 = ((frost$core$Object*) _191);
frost$core$Frost$unref$frost$core$Object$Q(_192);
*(&local0) = ((frost$core$Error*) NULL);
return _188;
block2:;
_196 = *(&local0);
_197 = ((frost$core$Object*) _196);
frost$core$Frost$unref$frost$core$Object$Q(_197);
*(&local0) = ((frost$core$Error*) NULL);
goto block28;
block28:;

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

