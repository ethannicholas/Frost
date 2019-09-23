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

void frost$io$PushbackInputStream$init$frost$io$InputStream(void* rawSelf, frost$io$InputStream* param1) {
frost$io$PushbackInputStream* param0 = (frost$io$PushbackInputStream*) rawSelf;

frost$collections$Array* _1;
frost$core$Object* _3;
frost$collections$Array** _5;
frost$collections$Array* _6;
frost$core$Object* _7;
frost$collections$Array** _9;
frost$core$Object* _11;
frost$core$Object* _14;
frost$io$InputStream** _16;
frost$io$InputStream* _17;
frost$core$Object* _18;
frost$io$InputStream** _20;
frost$io$InputStream* _23;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:21
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_1);
_3 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = &param0->pushbackBuffer;
_6 = *_5;
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
_9 = &param0->pushbackBuffer;
*_9 = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:29
_14 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_14);
_16 = &param0->source;
_17 = *_16;
_18 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_20 = &param0->source;
*_20 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:30
_23 = ((frost$io$InputStream*) param0);
frost$io$InputStream$init(_23);
return;

}
frost$core$UInt8$nullable frost$io$PushbackInputStream$read$R$frost$core$UInt8$Q(void* rawSelf) {
frost$io$PushbackInputStream* param0 = (frost$io$PushbackInputStream*) rawSelf;

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
frost$collections$Array** _16;
frost$collections$Array* _17;
frost$collections$CollectionView* _18;
$fn3 _19;
frost$core$Int _20;
frost$core$Int _21;
int64_t _22;
int64_t _23;
int64_t _24;
frost$core$Int _25;
frost$core$Int _27;
int64_t _28;
int64_t _29;
bool _30;
frost$core$Bit _31;
bool _32;
frost$collections$CollectionView* _34;
$fn4 _35;
frost$core$Int _36;
int64_t _37;
int64_t _38;
bool _39;
frost$core$Bit _40;
bool _41;
frost$core$Int _43;
frost$core$Object*** _47;
frost$core$Object** _48;
frost$core$Int64 _49;
int64_t _50;
frost$core$Object* _51;
frost$core$Object* _52;
frost$core$UInt8 _55;
frost$core$Object* _57;
frost$collections$Array** _60;
frost$collections$Array* _61;
frost$collections$Array** _62;
frost$collections$Array* _63;
frost$collections$CollectionView* _64;
$fn5 _65;
frost$core$Int _66;
frost$core$Int _67;
int64_t _68;
int64_t _69;
int64_t _70;
frost$core$Int _71;
frost$core$Object* _72;
frost$core$UInt8 _73;
frost$core$Object* _74;
frost$core$UInt8 _77;
frost$core$UInt8$nullable _78;
frost$io$InputStream** _81;
frost$io$InputStream* _82;
$fn6 _83;
frost$core$UInt8$nullable _84;
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
_16 = &param0->pushbackBuffer;
_17 = *_16;
_18 = ((frost$collections$CollectionView*) _17);
ITable* $tmp8 = _18->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp8 = $tmp8->next;
}
_19 = $tmp8->methods[0];
_20 = _19(_18);
_21 = (frost$core$Int) {1u};
_22 = _20.value;
_23 = _21.value;
_24 = _22 - _23;
_25 = (frost$core$Int) {_24};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from PushbackInputStream.frost:36:41
_27 = (frost$core$Int) {0u};
_28 = _25.value;
_29 = _27.value;
_30 = _28 >= _29;
_31 = (frost$core$Bit) {_30};
_32 = _31.value;
if (_32) goto block6; else goto block5;
block6:;
_34 = ((frost$collections$CollectionView*) _15);
ITable* $tmp9 = _34->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp9 = $tmp9->next;
}
_35 = $tmp9->methods[0];
_36 = _35(_34);
_37 = _25.value;
_38 = _36.value;
_39 = _37 < _38;
_40 = (frost$core$Bit) {_39};
_41 = _40.value;
if (_41) goto block4; else goto block5;
block5:;
_43 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _43, &$s11);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_47 = &_15->data;
_48 = *_47;
_49 = frost$core$Int64$init$frost$core$Int(_25);
_50 = _49.value;
_51 = _48[_50];
_52 = _51;
frost$core$Frost$ref$frost$core$Object$Q(_52);
_55 = ((frost$core$UInt8$wrapper*) _51)->value;
*(&local0) = _55;
_57 = _51;
frost$core$Frost$unref$frost$core$Object$Q(_57);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:37
_60 = &param0->pushbackBuffer;
_61 = *_60;
_62 = &param0->pushbackBuffer;
_63 = *_62;
_64 = ((frost$collections$CollectionView*) _63);
ITable* $tmp12 = _64->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
_65 = $tmp12->methods[0];
_66 = _65(_64);
_67 = (frost$core$Int) {1u};
_68 = _66.value;
_69 = _67.value;
_70 = _68 - _69;
_71 = (frost$core$Int) {_70};
_72 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(_61, _71);
_73 = ((frost$core$UInt8$wrapper*) _72)->value;
_74 = _72;
frost$core$Frost$unref$frost$core$Object$Q(_74);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:38
_77 = *(&local0);
_78 = ((frost$core$UInt8$nullable) { _77, true });
return _78;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:40
_81 = &param0->source;
_82 = *_81;
_83 = ($fn13) _82->$class->vtable[2];
_84 = _83(_82);
return _84;

}
void frost$io$PushbackInputStream$pushback$frost$core$UInt8(void* rawSelf, frost$core$UInt8 param1) {
frost$io$PushbackInputStream* param0 = (frost$io$PushbackInputStream*) rawSelf;

frost$collections$Array** _1;
frost$collections$Array* _2;
frost$core$Object* _3;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:50
_1 = &param0->pushbackBuffer;
_2 = *_1;
frost$core$UInt8$wrapper* $tmp14;
$tmp14 = (frost$core$UInt8$wrapper*) frostObjectAlloc(sizeof(frost$core$UInt8$wrapper), (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp14->value = param1;
_3 = ((frost$core$Object*) $tmp14);
frost$collections$Array$add$frost$collections$Array$T(_2, _3);
_5 = _3;
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
void frost$io$PushbackInputStream$pushback$frost$core$Int8(void* rawSelf, frost$core$Int8 param1) {
frost$io$PushbackInputStream* param0 = (frost$io$PushbackInputStream*) rawSelf;

frost$collections$Array** _1;
frost$collections$Array* _2;
int8_t _5;
uint8_t _6;
frost$core$UInt8 _7;
frost$core$Object* _9;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:60
_1 = &param0->pushbackBuffer;
_2 = *_1;
// begin inline call to function frost.core.Int8.get_asUInt8():frost.core.UInt8 from PushbackInputStream.frost:60:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1208
_5 = param1.value;
_6 = ((uint8_t) _5);
_7 = (frost$core$UInt8) {_6};
frost$core$UInt8$wrapper* $tmp15;
$tmp15 = (frost$core$UInt8$wrapper*) frostObjectAlloc(sizeof(frost$core$UInt8$wrapper), (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp15->value = _7;
_9 = ((frost$core$Object*) $tmp15);
frost$collections$Array$add$frost$collections$Array$T(_2, _9);
_11 = _9;
frost$core$Frost$unref$frost$core$Object$Q(_11);
return;

}
void frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$UInt8$GT(void* rawSelf, frost$collections$ListView* param1) {
frost$io$PushbackInputStream* param0 = (frost$io$PushbackInputStream*) rawSelf;

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
frost$core$Int _59;
$fn17 _60;
frost$core$Object* _61;
frost$core$UInt8 _62;
frost$collections$Array** _65;
frost$collections$Array* _66;
frost$core$Object* _67;
frost$core$Object* _69;
frost$core$Object* _72;
frost$core$Int _75;
int64_t _77;
int64_t _78;
int64_t _79;
frost$core$Int _80;
int64_t _82;
int64_t _83;
bool _84;
frost$core$Bit _85;
bool _86;
int64_t _88;
int64_t _89;
bool _90;
frost$core$Bit _91;
bool _92;
int64_t _94;
int64_t _95;
int64_t _96;
frost$core$Int _97;
int64_t _99;
int64_t _100;
bool _101;
frost$core$Bit _102;
bool _103;
int64_t _105;
int64_t _106;
bool _107;
frost$core$Bit _108;
bool _109;
int64_t _111;
int64_t _112;
int64_t _113;
frost$core$Int _114;
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
_59 = *(&local0);
ITable* $tmp19 = param1->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp19 = $tmp19->next;
}
_60 = $tmp19->methods[0];
_61 = _60(param1, _59);
_62 = ((frost$core$UInt8$wrapper*) _61)->value;
// begin inline call to method frost.io.PushbackInputStream.pushback(v:frost.core.UInt8) from PushbackInputStream.frost:70:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:50
_65 = &param0->pushbackBuffer;
_66 = *_65;
frost$core$UInt8$wrapper* $tmp20;
$tmp20 = (frost$core$UInt8$wrapper*) frostObjectAlloc(sizeof(frost$core$UInt8$wrapper), (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp20->value = _62;
_67 = ((frost$core$Object*) $tmp20);
frost$collections$Array$add$frost$collections$Array$T(_66, _67);
_69 = _67;
frost$core$Frost$unref$frost$core$Object$Q(_69);
_72 = _61;
frost$core$Frost$unref$frost$core$Object$Q(_72);
_75 = *(&local0);
if (_30) goto block13; else goto block14;
block13:;
_77 = _15.value;
_78 = _75.value;
_79 = _77 - _78;
_80 = (frost$core$Int) {_79};
if (_24) goto block15; else goto block16;
block15:;
_82 = _80.value;
_83 = _16.value;
_84 = _82 >= _83;
_85 = (frost$core$Bit) {_84};
_86 = _85.value;
if (_86) goto block12; else goto block3;
block16:;
_88 = _80.value;
_89 = _16.value;
_90 = _88 > _89;
_91 = (frost$core$Bit) {_90};
_92 = _91.value;
if (_92) goto block12; else goto block3;
block14:;
_94 = _75.value;
_95 = _15.value;
_96 = _94 - _95;
_97 = (frost$core$Int) {_96};
if (_24) goto block17; else goto block18;
block17:;
_99 = _97.value;
_100 = _21.value;
_101 = _99 >= _100;
_102 = (frost$core$Bit) {_101};
_103 = _102.value;
if (_103) goto block12; else goto block3;
block18:;
_105 = _97.value;
_106 = _21.value;
_107 = _105 > _106;
_108 = (frost$core$Bit) {_107};
_109 = _108.value;
if (_109) goto block12; else goto block3;
block12:;
_111 = _75.value;
_112 = _16.value;
_113 = _111 + _112;
_114 = (frost$core$Int) {_113};
*(&local0) = _114;
goto block2;
block3:;
return;

}
void frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$Int8$GT(void* rawSelf, frost$collections$ListView* param1) {
frost$io$PushbackInputStream* param0 = (frost$io$PushbackInputStream*) rawSelf;

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
frost$core$Int _59;
$fn22 _60;
frost$core$Object* _61;
frost$core$Int8 _62;
frost$collections$Array** _65;
frost$collections$Array* _66;
int8_t _69;
uint8_t _70;
frost$core$UInt8 _71;
frost$core$Object* _73;
frost$core$Object* _75;
frost$core$Object* _78;
frost$core$Int _81;
int64_t _83;
int64_t _84;
int64_t _85;
frost$core$Int _86;
int64_t _88;
int64_t _89;
bool _90;
frost$core$Bit _91;
bool _92;
int64_t _94;
int64_t _95;
bool _96;
frost$core$Bit _97;
bool _98;
int64_t _100;
int64_t _101;
int64_t _102;
frost$core$Int _103;
int64_t _105;
int64_t _106;
bool _107;
frost$core$Bit _108;
bool _109;
int64_t _111;
int64_t _112;
bool _113;
frost$core$Bit _114;
bool _115;
int64_t _117;
int64_t _118;
int64_t _119;
frost$core$Int _120;
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
_59 = *(&local0);
ITable* $tmp24 = param1->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp24 = $tmp24->next;
}
_60 = $tmp24->methods[0];
_61 = _60(param1, _59);
_62 = ((frost$core$Int8$wrapper*) _61)->value;
// begin inline call to method frost.io.PushbackInputStream.pushback(v:frost.core.Int8) from PushbackInputStream.frost:81:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:60
_65 = &param0->pushbackBuffer;
_66 = *_65;
// begin inline call to function frost.core.Int8.get_asUInt8():frost.core.UInt8 from PushbackInputStream.frost:60:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1208
_69 = _62.value;
_70 = ((uint8_t) _69);
_71 = (frost$core$UInt8) {_70};
frost$core$UInt8$wrapper* $tmp25;
$tmp25 = (frost$core$UInt8$wrapper*) frostObjectAlloc(sizeof(frost$core$UInt8$wrapper), (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp25->value = _71;
_73 = ((frost$core$Object*) $tmp25);
frost$collections$Array$add$frost$collections$Array$T(_66, _73);
_75 = _73;
frost$core$Frost$unref$frost$core$Object$Q(_75);
_78 = _61;
frost$core$Frost$unref$frost$core$Object$Q(_78);
_81 = *(&local0);
if (_30) goto block14; else goto block15;
block14:;
_83 = _15.value;
_84 = _81.value;
_85 = _83 - _84;
_86 = (frost$core$Int) {_85};
if (_24) goto block16; else goto block17;
block16:;
_88 = _86.value;
_89 = _16.value;
_90 = _88 >= _89;
_91 = (frost$core$Bit) {_90};
_92 = _91.value;
if (_92) goto block13; else goto block3;
block17:;
_94 = _86.value;
_95 = _16.value;
_96 = _94 > _95;
_97 = (frost$core$Bit) {_96};
_98 = _97.value;
if (_98) goto block13; else goto block3;
block15:;
_100 = _81.value;
_101 = _15.value;
_102 = _100 - _101;
_103 = (frost$core$Int) {_102};
if (_24) goto block18; else goto block19;
block18:;
_105 = _103.value;
_106 = _21.value;
_107 = _105 >= _106;
_108 = (frost$core$Bit) {_107};
_109 = _108.value;
if (_109) goto block13; else goto block3;
block19:;
_111 = _103.value;
_112 = _21.value;
_113 = _111 > _112;
_114 = (frost$core$Bit) {_113};
_115 = _114.value;
if (_115) goto block13; else goto block3;
block13:;
_117 = _81.value;
_118 = _16.value;
_119 = _117 + _118;
_120 = (frost$core$Int) {_119};
*(&local0) = _120;
goto block2;
block3:;
return;

}
void frost$io$PushbackInputStream$pushback$frost$core$Char8(void* rawSelf, frost$core$Char8 param1) {
frost$io$PushbackInputStream* param0 = (frost$io$PushbackInputStream*) rawSelf;

uint8_t _3;
frost$core$UInt8 _4;
frost$collections$Array** _8;
frost$collections$Array* _9;
frost$core$Object* _10;
frost$core$Object* _12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:91
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from PushbackInputStream.frost:91:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_3 = param1.value;
_4 = (frost$core$UInt8) {_3};
// begin inline call to method frost.io.PushbackInputStream.pushback(v:frost.core.UInt8) from PushbackInputStream.frost:91:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:50
_8 = &param0->pushbackBuffer;
_9 = *_8;
frost$core$UInt8$wrapper* $tmp26;
$tmp26 = (frost$core$UInt8$wrapper*) frostObjectAlloc(sizeof(frost$core$UInt8$wrapper), (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp26->value = _4;
_10 = ((frost$core$Object*) $tmp26);
frost$collections$Array$add$frost$collections$Array$T(_9, _10);
_12 = _10;
frost$core$Frost$unref$frost$core$Object$Q(_12);
return;

}
void frost$io$PushbackInputStream$pushback$frost$collections$ListView$LTfrost$core$Char8$GT(void* rawSelf, frost$collections$ListView* param1) {
frost$io$PushbackInputStream* param0 = (frost$io$PushbackInputStream*) rawSelf;

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
frost$core$Int _59;
$fn28 _60;
frost$core$Object* _61;
frost$core$Char8 _62;
uint8_t _67;
frost$core$UInt8 _68;
frost$collections$Array** _72;
frost$collections$Array* _73;
frost$core$Object* _74;
frost$core$Object* _76;
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
_59 = *(&local0);
ITable* $tmp30 = param1->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp30 = $tmp30->next;
}
_60 = $tmp30->methods[0];
_61 = _60(param1, _59);
_62 = ((frost$core$Char8$wrapper*) _61)->value;
// begin inline call to method frost.io.PushbackInputStream.pushback(c:frost.core.Char8) from PushbackInputStream.frost:101:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:91
// begin inline call to function frost.core.Char8.get_asUInt8():frost.core.UInt8 from PushbackInputStream.frost:91:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char8.frost:126
_67 = _62.value;
_68 = (frost$core$UInt8) {_67};
// begin inline call to method frost.io.PushbackInputStream.pushback(v:frost.core.UInt8) from PushbackInputStream.frost:91:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:50
_72 = &param0->pushbackBuffer;
_73 = *_72;
frost$core$UInt8$wrapper* $tmp31;
$tmp31 = (frost$core$UInt8$wrapper*) frostObjectAlloc(sizeof(frost$core$UInt8$wrapper), (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp31->value = _68;
_74 = ((frost$core$Object*) $tmp31);
frost$collections$Array$add$frost$collections$Array$T(_73, _74);
_76 = _74;
frost$core$Frost$unref$frost$core$Object$Q(_76);
_80 = _61;
frost$core$Frost$unref$frost$core$Object$Q(_80);
_83 = *(&local0);
if (_30) goto block15; else goto block16;
block15:;
_85 = _15.value;
_86 = _83.value;
_87 = _85 - _86;
_88 = (frost$core$Int) {_87};
if (_24) goto block17; else goto block18;
block17:;
_90 = _88.value;
_91 = _16.value;
_92 = _90 >= _91;
_93 = (frost$core$Bit) {_92};
_94 = _93.value;
if (_94) goto block14; else goto block3;
block18:;
_96 = _88.value;
_97 = _16.value;
_98 = _96 > _97;
_99 = (frost$core$Bit) {_98};
_100 = _99.value;
if (_100) goto block14; else goto block3;
block16:;
_102 = _83.value;
_103 = _15.value;
_104 = _102 - _103;
_105 = (frost$core$Int) {_104};
if (_24) goto block19; else goto block20;
block19:;
_107 = _105.value;
_108 = _21.value;
_109 = _107 >= _108;
_110 = (frost$core$Bit) {_109};
_111 = _110.value;
if (_111) goto block14; else goto block3;
block20:;
_113 = _105.value;
_114 = _21.value;
_115 = _113 > _114;
_116 = (frost$core$Bit) {_115};
_117 = _116.value;
if (_117) goto block14; else goto block3;
block14:;
_119 = _83.value;
_120 = _16.value;
_121 = _119 + _120;
_122 = (frost$core$Int) {_121};
*(&local0) = _122;
goto block2;
block3:;
return;

}
void frost$io$PushbackInputStream$pushback$frost$core$String(void* rawSelf, frost$core$String* param1) {
frost$io$PushbackInputStream* param0 = (frost$io$PushbackInputStream*) rawSelf;

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
frost$core$Int _71;
$fn33 _72;
frost$core$Object* _73;
frost$core$Char8 _74;
frost$core$UInt8 _77;
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
frost$core$Object* _126;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:111
// begin inline call to function frost.core.String.get_utf8():frost.collections.ListView<frost.core.Char8> from PushbackInputStream.frost:111:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:458
_3 = (frost$core$String$UTF8List*) frostObjectAlloc(sizeof(frost$core$String$UTF8List), (frost$core$Class*) &frost$core$String$UTF8List$class);
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
_71 = *(&local0);
ITable* $tmp35 = _5->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp35 = $tmp35->next;
}
_72 = $tmp35->methods[0];
_73 = _72(_5, _71);
_74 = ((frost$core$Char8$wrapper*) _73)->value;
// begin inline call to method frost.io.PushbackInputStream.pushback(c:frost.core.Char8) from PushbackInputStream.frost:101:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/PushbackInputStream.frost:91
_77 = frost$core$Char8$get_asUInt8$R$frost$core$UInt8(_74);
frost$io$PushbackInputStream$pushback$frost$core$UInt8(param0, _77);
_80 = _73;
frost$core$Frost$unref$frost$core$Object$Q(_80);
_83 = *(&local0);
if (_42) goto block15; else goto block16;
block15:;
_85 = _27.value;
_86 = _83.value;
_87 = _85 - _86;
_88 = (frost$core$Int) {_87};
if (_36) goto block17; else goto block18;
block17:;
_90 = _88.value;
_91 = _28.value;
_92 = _90 >= _91;
_93 = (frost$core$Bit) {_92};
_94 = _93.value;
if (_94) goto block14; else goto block5;
block18:;
_96 = _88.value;
_97 = _28.value;
_98 = _96 > _97;
_99 = (frost$core$Bit) {_98};
_100 = _99.value;
if (_100) goto block14; else goto block5;
block16:;
_102 = _83.value;
_103 = _27.value;
_104 = _102 - _103;
_105 = (frost$core$Int) {_104};
if (_36) goto block19; else goto block20;
block19:;
_107 = _105.value;
_108 = _33.value;
_109 = _107 >= _108;
_110 = (frost$core$Bit) {_109};
_111 = _110.value;
if (_111) goto block14; else goto block5;
block20:;
_113 = _105.value;
_114 = _33.value;
_115 = _113 > _114;
_116 = (frost$core$Bit) {_115};
_117 = _116.value;
if (_117) goto block14; else goto block5;
block14:;
_119 = _83.value;
_120 = _28.value;
_121 = _119 + _120;
_122 = (frost$core$Int) {_121};
*(&local0) = _122;
goto block4;
block5:;
_126 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_126);
return;

}
void frost$io$PushbackInputStream$cleanup(void* rawSelf) {
frost$io$PushbackInputStream* param0 = (frost$io$PushbackInputStream*) rawSelf;

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

