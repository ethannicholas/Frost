#include "frost/io/PushbackInputStream.h"
#include "frost/io/InputStream.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt8.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/Int8.h"
#include "frost/collections/ListView.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
#include "frost/core/Char8.h"
#include "frost/core/String/UTF8List.h"


static frost$core$String $s1;
frost$io$PushbackInputStream$class_type frost$io$PushbackInputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$io$InputStream$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$PushbackInputStream$cleanup, frost$io$PushbackInputStream$read$R$frost$core$UInt8$Q, frost$io$InputStream$read$R$frost$core$UInt16$Q, frost$io$InputStream$read$R$frost$core$UInt32$Q, frost$io$InputStream$read$R$frost$core$UInt64$Q, frost$io$InputStream$read$R$frost$core$Int8$Q, frost$io$InputStream$read$R$frost$core$Int16$Q, frost$io$InputStream$read$R$frost$core$Int32$Q, frost$io$InputStream$read$R$frost$core$Int64$Q, frost$io$InputStream$read$R$frost$core$Char8$Q, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$readFully$R$frost$core$String, frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT, frost$io$InputStream$readLine$R$frost$core$String$Q, frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int$GT, frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT, frost$io$InputStream$close$R$frost$core$Error$Q, frost$io$PushbackInputStream$pushback$frost$core$UInt8, frost$io$PushbackInputStream$pushback$frost$core$Int8, frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$UInt8$GT, frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$Int8$GT, frost$io$PushbackInputStream$pushback$frost$core$Char8, frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$Char8$GT, frost$io$PushbackInputStream$pushback$frost$core$String} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn3)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn5)(frost$collections$CollectionView*);
typedef frost$core$UInt8$nullable (*$fn6)(frost$io$InputStream*);
typedef frost$core$UInt8$nullable (*$fn13)(frost$io$InputStream*);
typedef frost$core$Int (*$fn16)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn17)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn21)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn22)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn27)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn28)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn32)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn33)(frost$collections$ListView*, frost$core$Int);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x50\x75\x73\x68\x62\x61\x63\x6b\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 28, 8789994324960517746, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };

void frost$io$PushbackInputStream$init$frost$io$InputStream(frost$io$PushbackInputStream* param0, frost$io$InputStream* param1) {

frost$collections$Array* _1;
frost$collections$Array* _2;
frost$core$Object* _4;
frost$collections$Array** _6;
frost$collections$Array* _7;
frost$core$Object* _8;
frost$collections$Array** _10;
frost$core$Object* _12;
frost$core$Object* _15;
frost$io$InputStream** _17;
frost$io$InputStream* _18;
frost$core$Object* _19;
frost$io$InputStream** _21;
frost$io$InputStream* _24;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:21
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_1 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_2 = _1;
frost$collections$Array$init(_2);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->pushbackBuffer;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_10 = &param0->pushbackBuffer;
*_10 = _1;
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:29
_15 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_15);
_17 = &param0->source;
_18 = *_17;
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = &param0->source;
*_21 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:30
_24 = ((frost$io$InputStream*) param0);
frost$io$InputStream$init(_24);
return;

}
frost$core$UInt8$nullable frost$io$PushbackInputStream$read$R$frost$core$UInt8$Q(frost$io$PushbackInputStream* param0) {

frost$core$UInt8 local0;
frost$collections$Array** _1;
frost$collections$Array* _2;
frost$collections$CollectionView* _3;
$fn2 _4;
frost$core$Int _5;
frost$core$Int _6;
int64_t _7;
int64_t _8;
bool _9;
frost$core$Bit _10;
bool _11;
frost$collections$Array** _14;
frost$collections$Array* _15;
frost$collections$Array* _16;
frost$collections$Array** _17;
frost$collections$Array* _18;
frost$collections$CollectionView* _19;
$fn3 _20;
frost$core$Int _21;
frost$core$Int _22;
int64_t _23;
int64_t _24;
int64_t _25;
frost$core$Int _26;
frost$core$Int _28;
int64_t _29;
int64_t _30;
bool _31;
frost$core$Bit _32;
bool _33;
frost$collections$CollectionView* _35;
$fn4 _36;
frost$core$Int _37;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _42;
frost$core$Int _44;
frost$core$Object*** _48;
frost$core$Object** _49;
frost$core$Int64 _50;
int64_t _51;
frost$core$Object* _52;
frost$core$Object* _53;
frost$core$UInt8 _56;
frost$core$Object* _58;
frost$collections$Array** _61;
frost$collections$Array* _62;
frost$collections$Array* _63;
frost$collections$Array** _64;
frost$collections$Array* _65;
frost$collections$CollectionView* _66;
$fn5 _67;
frost$core$Int _68;
frost$core$Int _69;
int64_t _70;
int64_t _71;
int64_t _72;
frost$core$Int _73;
frost$core$Object* _74;
frost$core$UInt8 _75;
frost$core$Object* _76;
frost$core$UInt8 _79;
frost$core$UInt8$nullable _80;
frost$io$InputStream** _83;
frost$io$InputStream* _84;
$fn6 _85;
frost$core$UInt8$nullable _86;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:35
_1 = &param0->pushbackBuffer;
_2 = *_1;
_3 = ((frost$collections$CollectionView*) _2);
ITable* $tmp7 = _3->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp7 = $tmp7->next;
}
_4 = $tmp7->methods[0];
_5 = _4(_3);
_6 = (frost$core$Int) {0u};
_7 = _5.value;
_8 = _6.value;
_9 = _7 > _8;
_10 = (frost$core$Bit) {_9};
_11 = _10.value;
if (_11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:36
_14 = &param0->pushbackBuffer;
_15 = *_14;
_16 = _15;
_17 = &param0->pushbackBuffer;
_18 = *_17;
_19 = ((frost$collections$CollectionView*) _18);
ITable* $tmp8 = _19->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp8 = $tmp8->next;
}
_20 = $tmp8->methods[0];
_21 = _20(_19);
_22 = (frost$core$Int) {1u};
_23 = _21.value;
_24 = _22.value;
_25 = _23 - _24;
_26 = (frost$core$Int) {_25};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from PushbackInputStream.frost:36:41
_28 = (frost$core$Int) {0u};
_29 = _26.value;
_30 = _28.value;
_31 = _29 >= _30;
_32 = (frost$core$Bit) {_31};
_33 = _32.value;
if (_33) goto block6; else goto block5;
block6:;
_35 = ((frost$collections$CollectionView*) _16);
ITable* $tmp9 = _35->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp9 = $tmp9->next;
}
_36 = $tmp9->methods[0];
_37 = _36(_35);
_38 = _26.value;
_39 = _37.value;
_40 = _38 < _39;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block4; else goto block5;
block5:;
_44 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _44, &$s11);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_48 = &_16->data;
_49 = *_48;
_50 = frost$core$Int64$init$frost$core$Int(_26);
_51 = _50.value;
_52 = _49[_51];
_53 = _52;
frost$core$Frost$ref$frost$core$Object$Q(_53);
_56 = ((frost$core$UInt8$wrapper*) _52)->value;
*(&local0) = _56;
_58 = _52;
frost$core$Frost$unref$frost$core$Object$Q(_58);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:37
_61 = &param0->pushbackBuffer;
_62 = *_61;
_63 = _62;
_64 = &param0->pushbackBuffer;
_65 = *_64;
_66 = ((frost$collections$CollectionView*) _65);
ITable* $tmp12 = _66->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
_67 = $tmp12->methods[0];
_68 = _67(_66);
_69 = (frost$core$Int) {1u};
_70 = _68.value;
_71 = _69.value;
_72 = _70 - _71;
_73 = (frost$core$Int) {_72};
_74 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(_63, _73);
_75 = ((frost$core$UInt8$wrapper*) _74)->value;
_76 = _74;
frost$core$Frost$unref$frost$core$Object$Q(_76);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:38
_79 = *(&local0);
_80 = ((frost$core$UInt8$nullable) { _79, true });
return _80;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:40
_83 = &param0->source;
_84 = *_83;
_85 = ($fn13) _84->$class->vtable[2];
_86 = _85(_84);
return _86;

}
void frost$io$PushbackInputStream$pushback$frost$core$UInt8(frost$io$PushbackInputStream* param0, frost$core$UInt8 param1) {

frost$collections$Array** _1;
frost$collections$Array* _2;
frost$collections$Array* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:50
_1 = &param0->pushbackBuffer;
_2 = *_1;
_3 = _2;
frost$core$UInt8$wrapper* $tmp14;
$tmp14 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp14->value = param1;
_4 = ((frost$core$Object*) $tmp14);
frost$collections$Array$add$frost$collections$Array$T(_3, _4);
_6 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_6);
return;

}
void frost$io$PushbackInputStream$pushback$frost$core$Int8(frost$io$PushbackInputStream* param0, frost$core$Int8 param1) {

frost$collections$Array** _1;
frost$collections$Array* _2;
frost$collections$Array* _3;
int8_t _6;
uint8_t _7;
frost$core$UInt8 _8;
frost$core$Object* _10;
frost$core$Object* _12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:60
_1 = &param0->pushbackBuffer;
_2 = *_1;
_3 = _2;
// begin inline call to function frost.core.Int8.get_asUInt8():frost.core.UInt8 from PushbackInputStream.frost:60:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1208
_6 = param1.value;
_7 = ((uint8_t) _6);
_8 = (frost$core$UInt8) {_7};
frost$core$UInt8$wrapper* $tmp15;
$tmp15 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp15->value = _8;
_10 = ((frost$core$Object*) $tmp15);
frost$collections$Array$add$frost$collections$Array$T(_3, _10);
_12 = _10;
frost$core$Frost$unref$frost$core$Object$Q(_12);
return;

}
void frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$UInt8$GT(frost$io$PushbackInputStream* param0, frost$collections$ListView* param1) {

frost$core$Int local0;
frost$collections$CollectionView* _1;
$fn16 _2;
frost$core$Int _3;
frost$core$Int _4;
int64_t _5;
int64_t _6;
int64_t _7;
frost$core$Int _8;
frost$core$Int _9;
frost$core$Int _10;
frost$core$Bit _11;
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT _12;
frost$core$Int _13;
frost$core$Int _15;
frost$core$Int _16;
int64_t _19;
int64_t _20;
frost$core$Int _21;
frost$core$Bit _23;
bool _24;
frost$core$Int _25;
int64_t _26;
int64_t _27;
bool _28;
frost$core$Bit _29;
bool _30;
int64_t _33;
int64_t _34;
bool _35;
frost$core$Bit _36;
bool _37;
int64_t _39;
int64_t _40;
bool _41;
frost$core$Bit _42;
bool _43;
int64_t _46;
int64_t _47;
bool _48;
frost$core$Bit _49;
bool _50;
int64_t _52;
int64_t _53;
bool _54;
frost$core$Bit _55;
bool _56;
frost$collections$ListView* _59;
frost$core$Int _60;
$fn17 _61;
frost$core$Object* _62;
frost$core$UInt8 _63;
frost$collections$Array** _66;
frost$collections$Array* _67;
frost$collections$Array* _68;
frost$core$Object* _69;
frost$core$Object* _71;
frost$core$Object* _74;
frost$core$Int _77;
int64_t _79;
int64_t _80;
int64_t _81;
frost$core$Int _82;
int64_t _84;
int64_t _85;
bool _86;
frost$core$Bit _87;
bool _88;
int64_t _90;
int64_t _91;
bool _92;
frost$core$Bit _93;
bool _94;
int64_t _96;
int64_t _97;
int64_t _98;
frost$core$Int _99;
int64_t _101;
int64_t _102;
bool _103;
frost$core$Bit _104;
bool _105;
int64_t _107;
int64_t _108;
bool _109;
frost$core$Bit _110;
bool _111;
int64_t _113;
int64_t _114;
int64_t _115;
frost$core$Int _116;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:69
_1 = ((frost$collections$CollectionView*) param1);
ITable* $tmp18 = _1->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp18 = $tmp18->next;
}
_2 = $tmp18->methods[0];
_3 = _2(_1);
_4 = (frost$core$Int) {1u};
_5 = _3.value;
_6 = _4.value;
_7 = _5 - _6;
_8 = (frost$core$Int) {_7};
_9 = (frost$core$Int) {0u};
_10 = (frost$core$Int) {18446744073709551615u};
_11 = (frost$core$Bit) {true};
_12 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit(_8, _9, _10, _11);
_13 = _12.start;
*(&local0) = _13;
_15 = _12.end;
_16 = _12.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from PushbackInputStream.frost:69:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
_19 = _16.value;
_20 = -_19;
_21 = (frost$core$Int) {_20};
_23 = _12.inclusive;
_24 = _23.value;
_25 = (frost$core$Int) {0u};
_26 = _16.value;
_27 = _25.value;
_28 = _26 >= _27;
_29 = (frost$core$Bit) {_28};
_30 = _29.value;
if (_30) goto block5; else goto block6;
block5:;
if (_24) goto block7; else goto block8;
block7:;
_33 = _13.value;
_34 = _15.value;
_35 = _33 <= _34;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block2; else goto block3;
block8:;
_39 = _13.value;
_40 = _15.value;
_41 = _39 < _40;
_42 = (frost$core$Bit) {_41};
_43 = _42.value;
if (_43) goto block2; else goto block3;
block6:;
if (_24) goto block9; else goto block10;
block9:;
_46 = _13.value;
_47 = _15.value;
_48 = _46 >= _47;
_49 = (frost$core$Bit) {_48};
_50 = _49.value;
if (_50) goto block2; else goto block3;
block10:;
_52 = _13.value;
_53 = _15.value;
_54 = _52 > _53;
_55 = (frost$core$Bit) {_54};
_56 = _55.value;
if (_56) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:70
_59 = param1;
_60 = *(&local0);
ITable* $tmp19 = _59->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp19 = $tmp19->next;
}
_61 = $tmp19->methods[0];
_62 = _61(_59, _60);
_63 = ((frost$core$UInt8$wrapper*) _62)->value;
// begin inline call to method frost.io.PushbackInputStream.pushback(v:frost.core.UInt8) from PushbackInputStream.frost:70:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:50
_66 = &param0->pushbackBuffer;
_67 = *_66;
_68 = _67;
frost$core$UInt8$wrapper* $tmp20;
$tmp20 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp20->value = _63;
_69 = ((frost$core$Object*) $tmp20);
frost$collections$Array$add$frost$collections$Array$T(_68, _69);
_71 = _69;
frost$core$Frost$unref$frost$core$Object$Q(_71);
_74 = _62;
frost$core$Frost$unref$frost$core$Object$Q(_74);
_77 = *(&local0);
if (_30) goto block13; else goto block14;
block13:;
_79 = _15.value;
_80 = _77.value;
_81 = _79 - _80;
_82 = (frost$core$Int) {_81};
if (_24) goto block15; else goto block16;
block15:;
_84 = _82.value;
_85 = _16.value;
_86 = _84 >= _85;
_87 = (frost$core$Bit) {_86};
_88 = _87.value;
if (_88) goto block12; else goto block3;
block16:;
_90 = _82.value;
_91 = _16.value;
_92 = _90 > _91;
_93 = (frost$core$Bit) {_92};
_94 = _93.value;
if (_94) goto block12; else goto block3;
block14:;
_96 = _77.value;
_97 = _15.value;
_98 = _96 - _97;
_99 = (frost$core$Int) {_98};
if (_24) goto block17; else goto block18;
block17:;
_101 = _99.value;
_102 = _21.value;
_103 = _101 >= _102;
_104 = (frost$core$Bit) {_103};
_105 = _104.value;
if (_105) goto block12; else goto block3;
block18:;
_107 = _99.value;
_108 = _21.value;
_109 = _107 > _108;
_110 = (frost$core$Bit) {_109};
_111 = _110.value;
if (_111) goto block12; else goto block3;
block12:;
_113 = _77.value;
_114 = _16.value;
_115 = _113 + _114;
_116 = (frost$core$Int) {_115};
*(&local0) = _116;
goto block2;
block3:;
return;

}
void frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$Int8$GT(frost$io$PushbackInputStream* param0, frost$collections$ListView* param1) {

frost$core$Int local0;
frost$collections$CollectionView* _1;
$fn21 _2;
frost$core$Int _3;
frost$core$Int _4;
int64_t _5;
int64_t _6;
int64_t _7;
frost$core$Int _8;
frost$core$Int _9;
frost$core$Int _10;
frost$core$Bit _11;
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT _12;
frost$core$Int _13;
frost$core$Int _15;
frost$core$Int _16;
int64_t _19;
int64_t _20;
frost$core$Int _21;
frost$core$Bit _23;
bool _24;
frost$core$Int _25;
int64_t _26;
int64_t _27;
bool _28;
frost$core$Bit _29;
bool _30;
int64_t _33;
int64_t _34;
bool _35;
frost$core$Bit _36;
bool _37;
int64_t _39;
int64_t _40;
bool _41;
frost$core$Bit _42;
bool _43;
int64_t _46;
int64_t _47;
bool _48;
frost$core$Bit _49;
bool _50;
int64_t _52;
int64_t _53;
bool _54;
frost$core$Bit _55;
bool _56;
frost$collections$ListView* _59;
frost$core$Int _60;
$fn22 _61;
frost$core$Object* _62;
frost$core$Int8 _63;
frost$collections$Array** _66;
frost$collections$Array* _67;
frost$collections$Array* _68;
int8_t _71;
uint8_t _72;
frost$core$UInt8 _73;
frost$core$Object* _75;
frost$core$Object* _77;
frost$core$Object* _80;
frost$core$Int _83;
int64_t _85;
int64_t _86;
int64_t _87;
frost$core$Int _88;
int64_t _90;
int64_t _91;
bool _92;
frost$core$Bit _93;
bool _94;
int64_t _96;
int64_t _97;
bool _98;
frost$core$Bit _99;
bool _100;
int64_t _102;
int64_t _103;
int64_t _104;
frost$core$Int _105;
int64_t _107;
int64_t _108;
bool _109;
frost$core$Bit _110;
bool _111;
int64_t _113;
int64_t _114;
bool _115;
frost$core$Bit _116;
bool _117;
int64_t _119;
int64_t _120;
int64_t _121;
frost$core$Int _122;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:80
_1 = ((frost$collections$CollectionView*) param1);
ITable* $tmp23 = _1->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp23 = $tmp23->next;
}
_2 = $tmp23->methods[0];
_3 = _2(_1);
_4 = (frost$core$Int) {1u};
_5 = _3.value;
_6 = _4.value;
_7 = _5 - _6;
_8 = (frost$core$Int) {_7};
_9 = (frost$core$Int) {0u};
_10 = (frost$core$Int) {18446744073709551615u};
_11 = (frost$core$Bit) {true};
_12 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit(_8, _9, _10, _11);
_13 = _12.start;
*(&local0) = _13;
_15 = _12.end;
_16 = _12.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from PushbackInputStream.frost:80:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
_19 = _16.value;
_20 = -_19;
_21 = (frost$core$Int) {_20};
_23 = _12.inclusive;
_24 = _23.value;
_25 = (frost$core$Int) {0u};
_26 = _16.value;
_27 = _25.value;
_28 = _26 >= _27;
_29 = (frost$core$Bit) {_28};
_30 = _29.value;
if (_30) goto block5; else goto block6;
block5:;
if (_24) goto block7; else goto block8;
block7:;
_33 = _13.value;
_34 = _15.value;
_35 = _33 <= _34;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block2; else goto block3;
block8:;
_39 = _13.value;
_40 = _15.value;
_41 = _39 < _40;
_42 = (frost$core$Bit) {_41};
_43 = _42.value;
if (_43) goto block2; else goto block3;
block6:;
if (_24) goto block9; else goto block10;
block9:;
_46 = _13.value;
_47 = _15.value;
_48 = _46 >= _47;
_49 = (frost$core$Bit) {_48};
_50 = _49.value;
if (_50) goto block2; else goto block3;
block10:;
_52 = _13.value;
_53 = _15.value;
_54 = _52 > _53;
_55 = (frost$core$Bit) {_54};
_56 = _55.value;
if (_56) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:81
_59 = param1;
_60 = *(&local0);
ITable* $tmp24 = _59->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp24 = $tmp24->next;
}
_61 = $tmp24->methods[0];
_62 = _61(_59, _60);
_63 = ((frost$core$Int8$wrapper*) _62)->value;
// begin inline call to method frost.io.PushbackInputStream.pushback(v:frost.core.Int8) from PushbackInputStream.frost:81:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:60
_66 = &param0->pushbackBuffer;
_67 = *_66;
_68 = _67;
// begin inline call to function frost.core.Int8.get_asUInt8():frost.core.UInt8 from PushbackInputStream.frost:60:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1208
_71 = _63.value;
_72 = ((uint8_t) _71);
_73 = (frost$core$UInt8) {_72};
frost$core$UInt8$wrapper* $tmp25;
$tmp25 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp25->value = _73;
_75 = ((frost$core$Object*) $tmp25);
frost$collections$Array$add$frost$collections$Array$T(_68, _75);
_77 = _75;
frost$core$Frost$unref$frost$core$Object$Q(_77);
_80 = _62;
frost$core$Frost$unref$frost$core$Object$Q(_80);
_83 = *(&local0);
if (_30) goto block14; else goto block15;
block14:;
_85 = _15.value;
_86 = _83.value;
_87 = _85 - _86;
_88 = (frost$core$Int) {_87};
if (_24) goto block16; else goto block17;
block16:;
_90 = _88.value;
_91 = _16.value;
_92 = _90 >= _91;
_93 = (frost$core$Bit) {_92};
_94 = _93.value;
if (_94) goto block13; else goto block3;
block17:;
_96 = _88.value;
_97 = _16.value;
_98 = _96 > _97;
_99 = (frost$core$Bit) {_98};
_100 = _99.value;
if (_100) goto block13; else goto block3;
block15:;
_102 = _83.value;
_103 = _15.value;
_104 = _102 - _103;
_105 = (frost$core$Int) {_104};
if (_24) goto block18; else goto block19;
block18:;
_107 = _105.value;
_108 = _21.value;
_109 = _107 >= _108;
_110 = (frost$core$Bit) {_109};
_111 = _110.value;
if (_111) goto block13; else goto block3;
block19:;
_113 = _105.value;
_114 = _21.value;
_115 = _113 > _114;
_116 = (frost$core$Bit) {_115};
_117 = _116.value;
if (_117) goto block13; else goto block3;
block13:;
_119 = _83.value;
_120 = _16.value;
_121 = _119 + _120;
_122 = (frost$core$Int) {_121};
*(&local0) = _122;
goto block2;
block3:;
return;

}
void frost$io$PushbackInputStream$pushback$frost$core$Char8(frost$io$PushbackInputStream* param0, frost$core$Char8 param1) {

uint8_t _3;
frost$core$UInt8 _4;
frost$collections$Array** _8;
frost$collections$Array* _9;
frost$collections$Array* _10;
frost$core$Object* _11;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:91
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from PushbackInputStream.frost:91:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_3 = param1.value;
_4 = (frost$core$UInt8) {_3};
// begin inline call to method frost.io.PushbackInputStream.pushback(v:frost.core.UInt8) from PushbackInputStream.frost:91:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:50
_8 = &param0->pushbackBuffer;
_9 = *_8;
_10 = _9;
frost$core$UInt8$wrapper* $tmp26;
$tmp26 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp26->value = _4;
_11 = ((frost$core$Object*) $tmp26);
frost$collections$Array$add$frost$collections$Array$T(_10, _11);
_13 = _11;
frost$core$Frost$unref$frost$core$Object$Q(_13);
return;

}
void frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$Char8$GT(frost$io$PushbackInputStream* param0, frost$collections$ListView* param1) {

frost$core$Int local0;
frost$collections$CollectionView* _1;
$fn27 _2;
frost$core$Int _3;
frost$core$Int _4;
int64_t _5;
int64_t _6;
int64_t _7;
frost$core$Int _8;
frost$core$Int _9;
frost$core$Int _10;
frost$core$Bit _11;
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT _12;
frost$core$Int _13;
frost$core$Int _15;
frost$core$Int _16;
int64_t _19;
int64_t _20;
frost$core$Int _21;
frost$core$Bit _23;
bool _24;
frost$core$Int _25;
int64_t _26;
int64_t _27;
bool _28;
frost$core$Bit _29;
bool _30;
int64_t _33;
int64_t _34;
bool _35;
frost$core$Bit _36;
bool _37;
int64_t _39;
int64_t _40;
bool _41;
frost$core$Bit _42;
bool _43;
int64_t _46;
int64_t _47;
bool _48;
frost$core$Bit _49;
bool _50;
int64_t _52;
int64_t _53;
bool _54;
frost$core$Bit _55;
bool _56;
frost$collections$ListView* _59;
frost$core$Int _60;
$fn28 _61;
frost$core$Object* _62;
frost$core$Char8 _63;
uint8_t _68;
frost$core$UInt8 _69;
frost$collections$Array** _73;
frost$collections$Array* _74;
frost$collections$Array* _75;
frost$core$Object* _76;
frost$core$Object* _78;
frost$core$Object* _82;
frost$core$Int _85;
int64_t _87;
int64_t _88;
int64_t _89;
frost$core$Int _90;
int64_t _92;
int64_t _93;
bool _94;
frost$core$Bit _95;
bool _96;
int64_t _98;
int64_t _99;
bool _100;
frost$core$Bit _101;
bool _102;
int64_t _104;
int64_t _105;
int64_t _106;
frost$core$Int _107;
int64_t _109;
int64_t _110;
bool _111;
frost$core$Bit _112;
bool _113;
int64_t _115;
int64_t _116;
bool _117;
frost$core$Bit _118;
bool _119;
int64_t _121;
int64_t _122;
int64_t _123;
frost$core$Int _124;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:100
_1 = ((frost$collections$CollectionView*) param1);
ITable* $tmp29 = _1->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp29 = $tmp29->next;
}
_2 = $tmp29->methods[0];
_3 = _2(_1);
_4 = (frost$core$Int) {1u};
_5 = _3.value;
_6 = _4.value;
_7 = _5 - _6;
_8 = (frost$core$Int) {_7};
_9 = (frost$core$Int) {0u};
_10 = (frost$core$Int) {18446744073709551615u};
_11 = (frost$core$Bit) {true};
_12 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit(_8, _9, _10, _11);
_13 = _12.start;
*(&local0) = _13;
_15 = _12.end;
_16 = _12.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from PushbackInputStream.frost:100:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
_19 = _16.value;
_20 = -_19;
_21 = (frost$core$Int) {_20};
_23 = _12.inclusive;
_24 = _23.value;
_25 = (frost$core$Int) {0u};
_26 = _16.value;
_27 = _25.value;
_28 = _26 >= _27;
_29 = (frost$core$Bit) {_28};
_30 = _29.value;
if (_30) goto block5; else goto block6;
block5:;
if (_24) goto block7; else goto block8;
block7:;
_33 = _13.value;
_34 = _15.value;
_35 = _33 <= _34;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block2; else goto block3;
block8:;
_39 = _13.value;
_40 = _15.value;
_41 = _39 < _40;
_42 = (frost$core$Bit) {_41};
_43 = _42.value;
if (_43) goto block2; else goto block3;
block6:;
if (_24) goto block9; else goto block10;
block9:;
_46 = _13.value;
_47 = _15.value;
_48 = _46 >= _47;
_49 = (frost$core$Bit) {_48};
_50 = _49.value;
if (_50) goto block2; else goto block3;
block10:;
_52 = _13.value;
_53 = _15.value;
_54 = _52 > _53;
_55 = (frost$core$Bit) {_54};
_56 = _55.value;
if (_56) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:101
_59 = param1;
_60 = *(&local0);
ITable* $tmp30 = _59->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp30 = $tmp30->next;
}
_61 = $tmp30->methods[0];
_62 = _61(_59, _60);
_63 = ((frost$core$Char8$wrapper*) _62)->value;
// begin inline call to method frost.io.PushbackInputStream.pushback(c:frost.core.Char8) from PushbackInputStream.frost:101:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:91
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from PushbackInputStream.frost:91:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_68 = _63.value;
_69 = (frost$core$UInt8) {_68};
// begin inline call to method frost.io.PushbackInputStream.pushback(v:frost.core.UInt8) from PushbackInputStream.frost:91:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:50
_73 = &param0->pushbackBuffer;
_74 = *_73;
_75 = _74;
frost$core$UInt8$wrapper* $tmp31;
$tmp31 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp31->value = _69;
_76 = ((frost$core$Object*) $tmp31);
frost$collections$Array$add$frost$collections$Array$T(_75, _76);
_78 = _76;
frost$core$Frost$unref$frost$core$Object$Q(_78);
_82 = _62;
frost$core$Frost$unref$frost$core$Object$Q(_82);
_85 = *(&local0);
if (_30) goto block15; else goto block16;
block15:;
_87 = _15.value;
_88 = _85.value;
_89 = _87 - _88;
_90 = (frost$core$Int) {_89};
if (_24) goto block17; else goto block18;
block17:;
_92 = _90.value;
_93 = _16.value;
_94 = _92 >= _93;
_95 = (frost$core$Bit) {_94};
_96 = _95.value;
if (_96) goto block14; else goto block3;
block18:;
_98 = _90.value;
_99 = _16.value;
_100 = _98 > _99;
_101 = (frost$core$Bit) {_100};
_102 = _101.value;
if (_102) goto block14; else goto block3;
block16:;
_104 = _85.value;
_105 = _15.value;
_106 = _104 - _105;
_107 = (frost$core$Int) {_106};
if (_24) goto block19; else goto block20;
block19:;
_109 = _107.value;
_110 = _21.value;
_111 = _109 >= _110;
_112 = (frost$core$Bit) {_111};
_113 = _112.value;
if (_113) goto block14; else goto block3;
block20:;
_115 = _107.value;
_116 = _21.value;
_117 = _115 > _116;
_118 = (frost$core$Bit) {_117};
_119 = _118.value;
if (_119) goto block14; else goto block3;
block14:;
_121 = _85.value;
_122 = _16.value;
_123 = _121 + _122;
_124 = (frost$core$Int) {_123};
*(&local0) = _124;
goto block2;
block3:;
return;

}
void frost$io$PushbackInputStream$pushback$frost$core$String(frost$io$PushbackInputStream* param0, frost$core$String* param1) {

frost$core$Int local0;
frost$core$String$UTF8List* _3;
frost$collections$ListView* _5;
frost$core$Object* _6;
frost$core$Object* _8;
frost$collections$CollectionView* _13;
$fn32 _14;
frost$core$Int _15;
frost$core$Int _16;
int64_t _17;
int64_t _18;
int64_t _19;
frost$core$Int _20;
frost$core$Int _21;
frost$core$Int _22;
frost$core$Bit _23;
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT _24;
frost$core$Int _25;
frost$core$Int _27;
frost$core$Int _28;
int64_t _31;
int64_t _32;
frost$core$Int _33;
frost$core$Bit _35;
bool _36;
frost$core$Int _37;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _42;
int64_t _45;
int64_t _46;
bool _47;
frost$core$Bit _48;
bool _49;
int64_t _51;
int64_t _52;
bool _53;
frost$core$Bit _54;
bool _55;
int64_t _58;
int64_t _59;
bool _60;
frost$core$Bit _61;
bool _62;
int64_t _64;
int64_t _65;
bool _66;
frost$core$Bit _67;
bool _68;
frost$collections$ListView* _71;
frost$core$Int _72;
$fn33 _73;
frost$core$Object* _74;
frost$core$Char8 _75;
frost$core$UInt8 _78;
frost$core$Object* _81;
frost$core$Int _84;
int64_t _86;
int64_t _87;
int64_t _88;
frost$core$Int _89;
int64_t _91;
int64_t _92;
bool _93;
frost$core$Bit _94;
bool _95;
int64_t _97;
int64_t _98;
bool _99;
frost$core$Bit _100;
bool _101;
int64_t _103;
int64_t _104;
int64_t _105;
frost$core$Int _106;
int64_t _108;
int64_t _109;
bool _110;
frost$core$Bit _111;
bool _112;
int64_t _114;
int64_t _115;
bool _116;
frost$core$Bit _117;
bool _118;
int64_t _120;
int64_t _121;
int64_t _122;
frost$core$Int _123;
frost$core$Object* _127;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:111
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from PushbackInputStream.frost:111:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:458
FROST_ASSERT(24 == sizeof(frost$core$String$UTF8List));
_3 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String(_3, param1);
_5 = ((frost$collections$ListView*) _3);
_6 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_8);
// begin inline call to method frost.io.PushbackInputStream.pushback(c:frost.collections.ListView<frost.core.Char8>) from PushbackInputStream.frost:111:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:100
_13 = ((frost$collections$CollectionView*) _5);
ITable* $tmp34 = _13->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp34 = $tmp34->next;
}
_14 = $tmp34->methods[0];
_15 = _14(_13);
_16 = (frost$core$Int) {1u};
_17 = _15.value;
_18 = _16.value;
_19 = _17 - _18;
_20 = (frost$core$Int) {_19};
_21 = (frost$core$Int) {0u};
_22 = (frost$core$Int) {18446744073709551615u};
_23 = (frost$core$Bit) {true};
_24 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit(_20, _21, _22, _23);
_25 = _24.start;
*(&local0) = _25;
_27 = _24.end;
_28 = _24.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from PushbackInputStream.frost:100:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
_31 = _28.value;
_32 = -_31;
_33 = (frost$core$Int) {_32};
_35 = _24.inclusive;
_36 = _35.value;
_37 = (frost$core$Int) {0u};
_38 = _28.value;
_39 = _37.value;
_40 = _38 >= _39;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block7; else goto block8;
block7:;
if (_36) goto block9; else goto block10;
block9:;
_45 = _25.value;
_46 = _27.value;
_47 = _45 <= _46;
_48 = (frost$core$Bit) {_47};
_49 = _48.value;
if (_49) goto block4; else goto block5;
block10:;
_51 = _25.value;
_52 = _27.value;
_53 = _51 < _52;
_54 = (frost$core$Bit) {_53};
_55 = _54.value;
if (_55) goto block4; else goto block5;
block8:;
if (_36) goto block11; else goto block12;
block11:;
_58 = _25.value;
_59 = _27.value;
_60 = _58 >= _59;
_61 = (frost$core$Bit) {_60};
_62 = _61.value;
if (_62) goto block4; else goto block5;
block12:;
_64 = _25.value;
_65 = _27.value;
_66 = _64 > _65;
_67 = (frost$core$Bit) {_66};
_68 = _67.value;
if (_68) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:101
_71 = _5;
_72 = *(&local0);
ITable* $tmp35 = _71->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp35 = $tmp35->next;
}
_73 = $tmp35->methods[0];
_74 = _73(_71, _72);
_75 = ((frost$core$Char8$wrapper*) _74)->value;
// begin inline call to method frost.io.PushbackInputStream.pushback(c:frost.core.Char8) from PushbackInputStream.frost:101:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:91
_78 = frost$core$Char8$get_asUInt8$R$frost$core$UInt8(_75);
frost$io$PushbackInputStream$pushback$frost$core$UInt8(param0, _78);
_81 = _74;
frost$core$Frost$unref$frost$core$Object$Q(_81);
_84 = *(&local0);
if (_42) goto block15; else goto block16;
block15:;
_86 = _27.value;
_87 = _84.value;
_88 = _86 - _87;
_89 = (frost$core$Int) {_88};
if (_36) goto block17; else goto block18;
block17:;
_91 = _89.value;
_92 = _28.value;
_93 = _91 >= _92;
_94 = (frost$core$Bit) {_93};
_95 = _94.value;
if (_95) goto block14; else goto block5;
block18:;
_97 = _89.value;
_98 = _28.value;
_99 = _97 > _98;
_100 = (frost$core$Bit) {_99};
_101 = _100.value;
if (_101) goto block14; else goto block5;
block16:;
_103 = _84.value;
_104 = _27.value;
_105 = _103 - _104;
_106 = (frost$core$Int) {_105};
if (_36) goto block19; else goto block20;
block19:;
_108 = _106.value;
_109 = _33.value;
_110 = _108 >= _109;
_111 = (frost$core$Bit) {_110};
_112 = _111.value;
if (_112) goto block14; else goto block5;
block20:;
_114 = _106.value;
_115 = _33.value;
_116 = _114 > _115;
_117 = (frost$core$Bit) {_116};
_118 = _117.value;
if (_118) goto block14; else goto block5;
block14:;
_120 = _84.value;
_121 = _28.value;
_122 = _120 + _121;
_123 = (frost$core$Int) {_122};
*(&local0) = _123;
goto block4;
block5:;
_127 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_127);
return;

}
void frost$io$PushbackInputStream$cleanup(frost$io$PushbackInputStream* param0) {

frost$io$InputStream* _1;
frost$io$InputStream** _3;
frost$io$InputStream* _4;
frost$core$Object* _5;
frost$collections$Array** _7;
frost$collections$Array* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:16
_1 = ((frost$io$InputStream*) param0);
frost$io$InputStream$cleanup(_1);
_3 = &param0->source;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->pushbackBuffer;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}

