#include "frost/io/LineNumberInputStream.h"
#include "frost/io/InputStream.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt8.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
frost$io$LineNumberInputStream$class_type frost$io$LineNumberInputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$io$InputStream$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$LineNumberInputStream$cleanup, frost$io$LineNumberInputStream$read$R$frost$core$UInt8$Q, frost$io$InputStream$read$R$frost$core$UInt16$Q, frost$io$InputStream$read$R$frost$core$UInt32$Q, frost$io$InputStream$read$R$frost$core$UInt64$Q, frost$io$InputStream$read$R$frost$core$Int8$Q, frost$io$InputStream$read$R$frost$core$Int16$Q, frost$io$InputStream$read$R$frost$core$Int32$Q, frost$io$InputStream$read$R$frost$core$Int64$Q, frost$io$InputStream$read$R$frost$core$Char8$Q, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$readFully$R$frost$core$String, frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT, frost$io$InputStream$readLine$R$frost$core$String$Q, frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int$GT, frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT, frost$io$InputStream$close$R$frost$core$Error$Q} };

typedef frost$core$UInt8$nullable (*$fn2)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn3)(frost$io$InputStream*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 30, 1260523631505748438, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 27, -4697261567984210418, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 27, -4697261567984210418, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 71, 6614696324120396559, NULL };

void frost$io$LineNumberInputStream$init$frost$io$InputStream(void* rawSelf, frost$io$InputStream* param1) {
frost$io$LineNumberInputStream* param0 = (frost$io$LineNumberInputStream*) rawSelf;

frost$core$Int _1;
frost$core$Int* _2;
frost$core$Int _5;
frost$core$Int* _6;
frost$core$Int _9;
frost$core$Int* _10;
frost$core$Object* _13;
frost$io$InputStream** _15;
frost$io$InputStream* _16;
frost$core$Object* _17;
frost$io$InputStream** _19;
frost$io$InputStream* _22;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:21
_1 = (frost$core$Int) {1u};
_2 = &param0->line;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:26
_5 = (frost$core$Int) {1u};
_6 = &param0->column;
*_6 = _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:31
_9 = (frost$core$Int) {4u};
_10 = &param0->tabSize;
*_10 = _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:39
_13 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_13);
_15 = &param0->source;
_16 = *_15;
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = &param0->source;
*_19 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:40
_22 = ((frost$io$InputStream*) param0);
frost$io$InputStream$init(_22);
return;

}
frost$core$UInt8$nullable frost$io$LineNumberInputStream$read$R$frost$core$UInt8$Q(void* rawSelf) {
frost$io$LineNumberInputStream* param0 = (frost$io$LineNumberInputStream*) rawSelf;

frost$core$UInt8$nullable local0;
frost$io$InputStream** _1;
frost$io$InputStream* _2;
$fn2 _3;
frost$core$UInt8$nullable _4;
frost$core$UInt8$nullable _7;
bool _8;
frost$core$Bit _9;
bool _10;
frost$core$UInt8$nullable _15;
bool _16;
frost$core$Bit _17;
bool _18;
frost$core$Int _20;
frost$core$UInt8 _23;
frost$core$UInt8 _24;
uint8_t _27;
uint8_t _28;
bool _29;
frost$core$Bit _30;
bool _32;
frost$core$Int* _35;
frost$core$Int _36;
frost$core$Int _37;
int64_t _38;
int64_t _39;
int64_t _40;
frost$core$Int _41;
frost$core$Int* _42;
frost$core$Int _45;
frost$core$Int* _46;
bool _49;
frost$core$Bit _50;
bool _51;
frost$core$Int _53;
frost$core$UInt8 _56;
frost$core$UInt8 _57;
uint8_t _60;
uint8_t _61;
bool _62;
frost$core$Bit _63;
bool _65;
frost$core$Int* _68;
frost$core$Int _69;
frost$core$Int* _70;
frost$core$Int _71;
frost$core$Int* _72;
frost$core$Int _73;
frost$core$Int* _74;
frost$core$Int _75;
int64_t _78;
int64_t _79;
int64_t _80;
frost$core$Int _81;
int64_t _83;
int64_t _84;
int64_t _85;
frost$core$Int _86;
int64_t _87;
int64_t _88;
int64_t _89;
frost$core$Int _90;
frost$core$Int* _91;
frost$core$Int* _95;
frost$core$Int _96;
frost$core$Int _97;
int64_t _98;
int64_t _99;
int64_t _100;
frost$core$Int _101;
frost$core$Int* _102;
frost$core$UInt8$nullable _106;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:45
_1 = &param0->source;
_2 = *_1;
_3 = ($fn3) _2->$class->vtable[2];
_4 = _3(_2);
*(&local0) = _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:46
_7 = *(&local0);
_8 = !_7.nonnull;
_9 = (frost$core$Bit) {_8};
_10 = _9.value;
if (_10) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:47
return ((frost$core$UInt8$nullable) { .nonnull = false });
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:49
_15 = *(&local0);
_16 = _15.nonnull;
_17 = (frost$core$Bit) {_16};
_18 = _17.value;
if (_18) goto block6; else goto block7;
block7:;
_20 = (frost$core$Int) {50u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4, _20, &$s5);
abort(); // unreachable
block6:;
_23 = ((frost$core$UInt8) _15.value);
_24 = (frost$core$UInt8) {10u};
// begin inline call to function frost.core.UInt8.=(other:frost.core.UInt8):frost.core.Bit from LineNumberInputStream.frost:50:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:643
_27 = _23.value;
_28 = _24.value;
_29 = _27 == _28;
_30 = (frost$core$Bit) {_29};
_32 = _30.value;
if (_32) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:51
_35 = &param0->line;
_36 = *_35;
_37 = (frost$core$Int) {1u};
_38 = _36.value;
_39 = _37.value;
_40 = _38 + _39;
_41 = (frost$core$Int) {_40};
_42 = &param0->line;
*_42 = _41;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:52
_45 = (frost$core$Int) {1u};
_46 = &param0->column;
*_46 = _45;
goto block3;
block5:;
_49 = _15.nonnull;
_50 = (frost$core$Bit) {_49};
_51 = _50.value;
if (_51) goto block11; else goto block12;
block12:;
_53 = (frost$core$Int) {54u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _53, &$s7);
abort(); // unreachable
block11:;
_56 = ((frost$core$UInt8) _15.value);
_57 = (frost$core$UInt8) {9u};
// begin inline call to function frost.core.UInt8.=(other:frost.core.UInt8):frost.core.Bit from LineNumberInputStream.frost:54:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:643
_60 = _56.value;
_61 = _57.value;
_62 = _60 == _61;
_63 = (frost$core$Bit) {_62};
_65 = _63.value;
if (_65) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:55
_68 = &param0->column;
_69 = *_68;
_70 = &param0->tabSize;
_71 = *_70;
_72 = &param0->column;
_73 = *_72;
_74 = &param0->tabSize;
_75 = *_74;
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from LineNumberInputStream.frost:55:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_78 = _73.value;
_79 = _75.value;
_80 = _78 % _79;
_81 = (frost$core$Int) {_80};
_83 = _71.value;
_84 = _81.value;
_85 = _83 - _84;
_86 = (frost$core$Int) {_85};
_87 = _69.value;
_88 = _86.value;
_89 = _87 + _88;
_90 = (frost$core$Int) {_89};
_91 = &param0->column;
*_91 = _90;
goto block3;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:58
_95 = &param0->column;
_96 = *_95;
_97 = (frost$core$Int) {1u};
_98 = _96.value;
_99 = _97.value;
_100 = _98 + _99;
_101 = (frost$core$Int) {_100};
_102 = &param0->column;
*_102 = _101;
goto block3;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:61
_106 = *(&local0);
return _106;

}
void frost$io$LineNumberInputStream$cleanup(void* rawSelf) {
frost$io$LineNumberInputStream* param0 = (frost$io$LineNumberInputStream*) rawSelf;

frost$io$InputStream* _1;
frost$io$InputStream** _3;
frost$io$InputStream* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/LineNumberInputStream.frost:14
_1 = ((frost$io$InputStream*) param0);
frost$io$InputStream$cleanup(_1);
_3 = &param0->source;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}






