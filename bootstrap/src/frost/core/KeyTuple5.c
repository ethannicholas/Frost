#include "frost/core/KeyTuple5.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"

__attribute__((weak)) frost$core$Bit frost$core$KeyTuple5$$EQ$frost$core$KeyTuple5$LTfrost$core$KeyTuple5$T0$Cfrost$core$KeyTuple5$T1$Cfrost$core$KeyTuple5$T2$Cfrost$core$KeyTuple5$T3$Cfrost$core$KeyTuple5$T4$GT$R$frost$core$Bit$shim(frost$core$KeyTuple5* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$KeyTuple5$$EQ$frost$core$KeyTuple5$LTfrost$core$KeyTuple5$T0$Cfrost$core$KeyTuple5$T1$Cfrost$core$KeyTuple5$T2$Cfrost$core$KeyTuple5$T3$Cfrost$core$KeyTuple5$T4$GT$R$frost$core$Bit(p0, ((frost$core$KeyTuple5*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$KeyTuple5$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { frost$core$KeyTuple5$get_hash$R$frost$core$Int} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$KeyTuple5$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$KeyTuple5$_frost$collections$HashKey, { frost$core$KeyTuple5$$EQ$frost$core$KeyTuple5$LTfrost$core$KeyTuple5$T0$Cfrost$core$KeyTuple5$T1$Cfrost$core$KeyTuple5$T2$Cfrost$core$KeyTuple5$T3$Cfrost$core$KeyTuple5$T4$GT$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$core$KeyTuple5$class_type frost$core$KeyTuple5$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$KeyTuple5$_frost$core$Equatable, { frost$core$KeyTuple5$get_asString$R$frost$core$String, frost$core$KeyTuple5$cleanup, frost$core$KeyTuple5$$IDX$frost$core$Int$R$frost$core$Object$Q, frost$core$KeyTuple5$$EQ$frost$core$KeyTuple5$LTfrost$core$KeyTuple5$T0$Cfrost$core$KeyTuple5$T1$Cfrost$core$KeyTuple5$T2$Cfrost$core$KeyTuple5$T3$Cfrost$core$KeyTuple5$T4$GT$R$frost$core$Bit$shim, frost$core$KeyTuple5$get_hash$R$frost$core$Int} };

typedef frost$core$Bit (*$fn4)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn5)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn6)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn7)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn8)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn14)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn15)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn16)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn17)(frost$collections$HashKey*);
typedef frost$core$Int (*$fn18)(frost$collections$HashKey*);
typedef frost$core$String* (*$fn24)(frost$core$Object*);
typedef frost$core$String* (*$fn25)(frost$core$Object*);
typedef frost$core$String* (*$fn26)(frost$core$Object*);
typedef frost$core$String* (*$fn27)(frost$core$Object*);
typedef frost$core$String* (*$fn28)(frost$core$Object*);
typedef frost$core$String* (*$fn29)(frost$core$Object*);
typedef frost$core$String* (*$fn32)(frost$core$Object*);
typedef frost$core$String* (*$fn34)(frost$core$Object*);
typedef frost$core$String* (*$fn36)(frost$core$Object*);
typedef frost$core$String* (*$fn38)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4b\x65\x79\x54\x75\x70\x6c\x65\x35", 20, -7689922964623250174, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4b\x65\x79\x54\x75\x70\x6c\x65\x35\x2e\x66\x72\x6f\x73\x74", 15, 6586214149684132753, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4b\x65\x79\x54\x75\x70\x6c\x65\x35\x2e\x5b\x5d\x28\x69\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 94, 960819468512506182, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void frost$core$KeyTuple5$init$frost$core$KeyTuple5$T0$frost$core$KeyTuple5$T1$frost$core$KeyTuple5$T2$frost$core$KeyTuple5$T3$frost$core$KeyTuple5$T4(void* rawSelf, frost$collections$HashKey* param1, frost$collections$HashKey* param2, frost$collections$HashKey* param3, frost$collections$HashKey* param4, frost$collections$HashKey* param5) {
frost$core$KeyTuple5* param0 = (frost$core$KeyTuple5*) rawSelf;

frost$core$KeyTuple5* _1;
frost$core$Object* _2;
frost$collections$HashKey** _4;
frost$collections$HashKey* _5;
frost$core$Object* _6;
frost$collections$HashKey** _8;
frost$core$KeyTuple5* _11;
frost$core$Object* _12;
frost$collections$HashKey** _14;
frost$collections$HashKey* _15;
frost$core$Object* _16;
frost$collections$HashKey** _18;
frost$core$KeyTuple5* _21;
frost$core$Object* _22;
frost$collections$HashKey** _24;
frost$collections$HashKey* _25;
frost$core$Object* _26;
frost$collections$HashKey** _28;
frost$core$KeyTuple5* _31;
frost$core$Object* _32;
frost$collections$HashKey** _34;
frost$collections$HashKey* _35;
frost$core$Object* _36;
frost$collections$HashKey** _38;
frost$core$KeyTuple5* _41;
frost$core$Object* _42;
frost$collections$HashKey** _44;
frost$collections$HashKey* _45;
frost$core$Object* _46;
frost$collections$HashKey** _48;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:11
_1 = param0;
_2 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_2);
_4 = &_1->f0;
_5 = *_4;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = &_1->f0;
*_8 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:12
_11 = param0;
_12 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = &_11->f1;
_15 = *_14;
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = &_11->f1;
*_18 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:13
_21 = param0;
_22 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_22);
_24 = &_21->f2;
_25 = *_24;
_26 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_26);
_28 = &_21->f2;
*_28 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:14
_31 = param0;
_32 = ((frost$core$Object*) param4);
frost$core$Frost$ref$frost$core$Object$Q(_32);
_34 = &_31->f3;
_35 = *_34;
_36 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = &_31->f3;
*_38 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:15
_41 = param0;
_42 = ((frost$core$Object*) param5);
frost$core$Frost$ref$frost$core$Object$Q(_42);
_44 = &_41->f4;
_45 = *_44;
_46 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_46);
_48 = &_41->f4;
*_48 = param5;
return;

}
frost$core$Object* frost$core$KeyTuple5$$IDX$frost$core$Int$R$frost$core$Object$Q(void* rawSelf, frost$core$Int param1) {
frost$core$KeyTuple5* param0 = (frost$core$KeyTuple5*) rawSelf;

frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Int _7;
int64_t _8;
int64_t _9;
bool _10;
frost$core$Bit _11;
bool _12;
frost$core$Int _14;
frost$core$Int _18;
int64_t _21;
int64_t _22;
bool _23;
frost$core$Bit _24;
bool _26;
frost$core$KeyTuple5* _29;
frost$collections$HashKey** _30;
frost$collections$HashKey* _31;
frost$core$Object* _32;
frost$core$Int _35;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _43;
frost$core$KeyTuple5* _46;
frost$collections$HashKey** _47;
frost$collections$HashKey* _48;
frost$core$Object* _49;
frost$core$Int _52;
int64_t _55;
int64_t _56;
bool _57;
frost$core$Bit _58;
bool _60;
frost$core$KeyTuple5* _63;
frost$collections$HashKey** _64;
frost$collections$HashKey* _65;
frost$core$Object* _66;
frost$core$Int _69;
int64_t _72;
int64_t _73;
bool _74;
frost$core$Bit _75;
bool _77;
frost$core$KeyTuple5* _80;
frost$collections$HashKey** _81;
frost$collections$HashKey* _82;
frost$core$Object* _83;
frost$core$Int _86;
int64_t _89;
int64_t _90;
bool _91;
frost$core$Bit _92;
bool _94;
frost$core$KeyTuple5* _97;
frost$collections$HashKey** _98;
frost$collections$HashKey* _99;
frost$core$Object* _100;
_0 = (frost$core$Int) {0u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
_7 = (frost$core$Int) {5u};
_8 = param1.value;
_9 = _7.value;
_10 = _8 < _9;
_11 = (frost$core$Bit) {_10};
_12 = _11.value;
if (_12) goto block1; else goto block2;
block2:;
_14 = (frost$core$Int) {19u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2, _14, &$s3);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:20
_18 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from KeyTuple5.frost:21:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_21 = param1.value;
_22 = _18.value;
_23 = _21 == _22;
_24 = (frost$core$Bit) {_23};
_26 = _24.value;
if (_26) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:21
_29 = param0;
_30 = &_29->f0;
_31 = *_30;
_32 = ((frost$core$Object*) _31);
frost$core$Frost$ref$frost$core$Object$Q(_32);
return _32;
block6:;
_35 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from KeyTuple5.frost:22:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_38 = param1.value;
_39 = _35.value;
_40 = _38 == _39;
_41 = (frost$core$Bit) {_40};
_43 = _41.value;
if (_43) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:22
_46 = param0;
_47 = &_46->f1;
_48 = *_47;
_49 = ((frost$core$Object*) _48);
frost$core$Frost$ref$frost$core$Object$Q(_49);
return _49;
block9:;
_52 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from KeyTuple5.frost:23:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_55 = param1.value;
_56 = _52.value;
_57 = _55 == _56;
_58 = (frost$core$Bit) {_57};
_60 = _58.value;
if (_60) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:23
_63 = param0;
_64 = &_63->f2;
_65 = *_64;
_66 = ((frost$core$Object*) _65);
frost$core$Frost$ref$frost$core$Object$Q(_66);
return _66;
block12:;
_69 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from KeyTuple5.frost:24:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_72 = param1.value;
_73 = _69.value;
_74 = _72 == _73;
_75 = (frost$core$Bit) {_74};
_77 = _75.value;
if (_77) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:24
_80 = param0;
_81 = &_80->f3;
_82 = *_81;
_83 = ((frost$core$Object*) _82);
frost$core$Frost$ref$frost$core$Object$Q(_83);
return _83;
block15:;
_86 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from KeyTuple5.frost:25:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_89 = param1.value;
_90 = _86.value;
_91 = _89 == _90;
_92 = (frost$core$Bit) {_91};
_94 = _92.value;
if (_94) goto block17; else goto block4;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:25
_97 = param0;
_98 = &_97->f4;
_99 = *_98;
_100 = ((frost$core$Object*) _99);
frost$core$Frost$ref$frost$core$Object$Q(_100);
return _100;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:27
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
return ((frost$core$Object*) NULL);

}
frost$core$Bit frost$core$KeyTuple5$$EQ$frost$core$KeyTuple5$LTfrost$core$KeyTuple5$T0$Cfrost$core$KeyTuple5$T1$Cfrost$core$KeyTuple5$T2$Cfrost$core$KeyTuple5$T3$Cfrost$core$KeyTuple5$T4$GT$R$frost$core$Bit(void* rawSelf, frost$core$KeyTuple5* param1) {
frost$core$KeyTuple5* param0 = (frost$core$KeyTuple5*) rawSelf;

frost$core$KeyTuple5* _1;
frost$collections$HashKey** _2;
frost$collections$HashKey* _3;
frost$core$Equatable* _4;
frost$core$Equatable* _5;
frost$core$KeyTuple5* _6;
frost$collections$HashKey** _7;
frost$collections$HashKey* _8;
frost$core$Equatable* _9;
$fn4 _10;
frost$core$Bit _11;
bool _12;
frost$core$Bit _15;
frost$core$KeyTuple5* _18;
frost$collections$HashKey** _19;
frost$collections$HashKey* _20;
frost$core$Equatable* _21;
frost$core$Equatable* _22;
frost$core$KeyTuple5* _23;
frost$collections$HashKey** _24;
frost$collections$HashKey* _25;
frost$core$Equatable* _26;
$fn5 _27;
frost$core$Bit _28;
bool _29;
frost$core$Bit _32;
frost$core$KeyTuple5* _35;
frost$collections$HashKey** _36;
frost$collections$HashKey* _37;
frost$core$Equatable* _38;
frost$core$Equatable* _39;
frost$core$KeyTuple5* _40;
frost$collections$HashKey** _41;
frost$collections$HashKey* _42;
frost$core$Equatable* _43;
$fn6 _44;
frost$core$Bit _45;
bool _46;
frost$core$Bit _49;
frost$core$KeyTuple5* _52;
frost$collections$HashKey** _53;
frost$collections$HashKey* _54;
frost$core$Equatable* _55;
frost$core$Equatable* _56;
frost$core$KeyTuple5* _57;
frost$collections$HashKey** _58;
frost$collections$HashKey* _59;
frost$core$Equatable* _60;
$fn7 _61;
frost$core$Bit _62;
bool _63;
frost$core$Bit _66;
frost$core$KeyTuple5* _69;
frost$collections$HashKey** _70;
frost$collections$HashKey* _71;
frost$core$Equatable* _72;
frost$core$Equatable* _73;
frost$core$KeyTuple5* _74;
frost$collections$HashKey** _75;
frost$collections$HashKey* _76;
frost$core$Equatable* _77;
$fn8 _78;
frost$core$Bit _79;
bool _80;
frost$core$Bit _83;
frost$core$Bit _86;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:32
_1 = param0;
_2 = &_1->f0;
_3 = *_2;
_4 = ((frost$core$Equatable*) _3);
_5 = _4;
_6 = param1;
_7 = &_6->f0;
_8 = *_7;
_9 = ((frost$core$Equatable*) _8);
ITable* $tmp9 = _5->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp9 = $tmp9->next;
}
_10 = $tmp9->methods[1];
_11 = _10(_5, _9);
_12 = _11.value;
if (_12) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:32
_15 = (frost$core$Bit) {false};
return _15;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:33
_18 = param0;
_19 = &_18->f1;
_20 = *_19;
_21 = ((frost$core$Equatable*) _20);
_22 = _21;
_23 = param1;
_24 = &_23->f1;
_25 = *_24;
_26 = ((frost$core$Equatable*) _25);
ITable* $tmp10 = _22->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp10 = $tmp10->next;
}
_27 = $tmp10->methods[1];
_28 = _27(_22, _26);
_29 = _28.value;
if (_29) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:33
_32 = (frost$core$Bit) {false};
return _32;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:34
_35 = param0;
_36 = &_35->f2;
_37 = *_36;
_38 = ((frost$core$Equatable*) _37);
_39 = _38;
_40 = param1;
_41 = &_40->f2;
_42 = *_41;
_43 = ((frost$core$Equatable*) _42);
ITable* $tmp11 = _39->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp11 = $tmp11->next;
}
_44 = $tmp11->methods[1];
_45 = _44(_39, _43);
_46 = _45.value;
if (_46) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:34
_49 = (frost$core$Bit) {false};
return _49;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:35
_52 = param0;
_53 = &_52->f3;
_54 = *_53;
_55 = ((frost$core$Equatable*) _54);
_56 = _55;
_57 = param1;
_58 = &_57->f3;
_59 = *_58;
_60 = ((frost$core$Equatable*) _59);
ITable* $tmp12 = _56->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp12 = $tmp12->next;
}
_61 = $tmp12->methods[1];
_62 = _61(_56, _60);
_63 = _62.value;
if (_63) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:35
_66 = (frost$core$Bit) {false};
return _66;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:36
_69 = param0;
_70 = &_69->f4;
_71 = *_70;
_72 = ((frost$core$Equatable*) _71);
_73 = _72;
_74 = param1;
_75 = &_74->f4;
_76 = *_75;
_77 = ((frost$core$Equatable*) _76);
ITable* $tmp13 = _73->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp13 = $tmp13->next;
}
_78 = $tmp13->methods[1];
_79 = _78(_73, _77);
_80 = _79.value;
if (_80) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:36
_83 = (frost$core$Bit) {false};
return _83;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:37
_86 = (frost$core$Bit) {true};
return _86;

}
frost$core$Int frost$core$KeyTuple5$get_hash$R$frost$core$Int(void* rawSelf) {
frost$core$KeyTuple5* param0 = (frost$core$KeyTuple5*) rawSelf;

frost$core$Int local0;
frost$core$Int _1;
frost$core$Int _4;
frost$core$KeyTuple5* _5;
frost$collections$HashKey** _6;
frost$collections$HashKey* _7;
frost$collections$HashKey* _8;
$fn14 _9;
frost$core$Int _10;
int64_t _13;
int64_t _14;
int64_t _15;
frost$core$Int _16;
frost$core$Int _20;
frost$core$KeyTuple5* _21;
frost$collections$HashKey** _22;
frost$collections$HashKey* _23;
frost$collections$HashKey* _24;
$fn15 _25;
frost$core$Int _26;
int64_t _29;
int64_t _30;
int64_t _31;
frost$core$Int _32;
frost$core$Int _36;
frost$core$KeyTuple5* _37;
frost$collections$HashKey** _38;
frost$collections$HashKey* _39;
frost$collections$HashKey* _40;
$fn16 _41;
frost$core$Int _42;
int64_t _45;
int64_t _46;
int64_t _47;
frost$core$Int _48;
frost$core$Int _52;
frost$core$KeyTuple5* _53;
frost$collections$HashKey** _54;
frost$collections$HashKey* _55;
frost$collections$HashKey* _56;
$fn17 _57;
frost$core$Int _58;
int64_t _61;
int64_t _62;
int64_t _63;
frost$core$Int _64;
frost$core$Int _68;
frost$core$KeyTuple5* _69;
frost$collections$HashKey** _70;
frost$collections$HashKey* _71;
frost$collections$HashKey* _72;
$fn18 _73;
frost$core$Int _74;
int64_t _77;
int64_t _78;
int64_t _79;
frost$core$Int _80;
frost$core$Int _84;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:41
_1 = (frost$core$Int) {0u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:42
_4 = *(&local0);
_5 = param0;
_6 = &_5->f0;
_7 = *_6;
_8 = _7;
ITable* $tmp19 = _8->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp19 = $tmp19->next;
}
_9 = $tmp19->methods[0];
_10 = _9(_8);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from KeyTuple5.frost:42:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_13 = _4.value;
_14 = _10.value;
_15 = _13 ^ _14;
_16 = (frost$core$Int) {_15};
*(&local0) = _16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:43
_20 = *(&local0);
_21 = param0;
_22 = &_21->f1;
_23 = *_22;
_24 = _23;
ITable* $tmp20 = _24->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp20 = $tmp20->next;
}
_25 = $tmp20->methods[0];
_26 = _25(_24);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from KeyTuple5.frost:43:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_29 = _20.value;
_30 = _26.value;
_31 = _29 ^ _30;
_32 = (frost$core$Int) {_31};
*(&local0) = _32;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:44
_36 = *(&local0);
_37 = param0;
_38 = &_37->f2;
_39 = *_38;
_40 = _39;
ITable* $tmp21 = _40->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp21 = $tmp21->next;
}
_41 = $tmp21->methods[0];
_42 = _41(_40);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from KeyTuple5.frost:44:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_45 = _36.value;
_46 = _42.value;
_47 = _45 ^ _46;
_48 = (frost$core$Int) {_47};
*(&local0) = _48;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:45
_52 = *(&local0);
_53 = param0;
_54 = &_53->f3;
_55 = *_54;
_56 = _55;
ITable* $tmp22 = _56->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp22 = $tmp22->next;
}
_57 = $tmp22->methods[0];
_58 = _57(_56);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from KeyTuple5.frost:45:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_61 = _52.value;
_62 = _58.value;
_63 = _61 ^ _62;
_64 = (frost$core$Int) {_63};
*(&local0) = _64;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:46
_68 = *(&local0);
_69 = param0;
_70 = &_69->f4;
_71 = *_70;
_72 = _71;
ITable* $tmp23 = _72->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$HashKey$class) {
    $tmp23 = $tmp23->next;
}
_73 = $tmp23->methods[0];
_74 = _73(_72);
// begin inline call to function frost.core.Int.~~(other:frost.core.Int):frost.core.Int from KeyTuple5.frost:46:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_77 = _68.value;
_78 = _74.value;
_79 = _77 ^ _78;
_80 = (frost$core$Int) {_79};
*(&local0) = _80;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:47
_84 = *(&local0);
return _84;

}
frost$core$String* frost$core$KeyTuple5$get_asString$R$frost$core$String(void* rawSelf) {
frost$core$KeyTuple5* param0 = (frost$core$KeyTuple5*) rawSelf;

frost$core$KeyTuple5* _1;
frost$collections$HashKey** _2;
frost$collections$HashKey* _3;
frost$core$Object* _4;
$fn24 _7;
frost$core$String* _8;
frost$core$String* _9;
frost$core$Object* _10;
frost$core$Object* _12;
frost$core$Object* _14;
frost$core$String* _17;
frost$core$KeyTuple5* _18;
frost$collections$HashKey** _19;
frost$collections$HashKey* _20;
frost$core$Object* _21;
$fn25 _24;
frost$core$String* _25;
frost$core$String* _26;
frost$core$Object* _27;
frost$core$Object* _29;
frost$core$Object* _31;
frost$core$String* _34;
frost$core$KeyTuple5* _35;
frost$collections$HashKey** _36;
frost$collections$HashKey* _37;
frost$core$Object* _38;
$fn26 _41;
frost$core$String* _42;
frost$core$String* _43;
frost$core$Object* _44;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$String* _51;
frost$core$KeyTuple5* _52;
frost$collections$HashKey** _53;
frost$collections$HashKey* _54;
frost$core$Object* _55;
$fn27 _58;
frost$core$String* _59;
frost$core$String* _60;
frost$core$Object* _61;
frost$core$Object* _63;
frost$core$Object* _65;
frost$core$String* _68;
frost$core$KeyTuple5* _69;
frost$collections$HashKey** _70;
frost$collections$HashKey* _71;
frost$core$Object* _72;
$fn28 _75;
frost$core$String* _76;
frost$core$String* _77;
frost$core$Object* _78;
frost$core$Object* _80;
frost$core$Object* _82;
frost$core$String* _85;
frost$core$Object* _86;
frost$core$Object* _88;
frost$core$Object* _90;
frost$core$Object* _92;
frost$core$Object* _94;
frost$core$Object* _96;
frost$core$Object* _98;
frost$core$Object* _100;
frost$core$Object* _102;
frost$core$Object* _104;
frost$core$Object* _106;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:51
_1 = param0;
_2 = &_1->f0;
_3 = *_2;
_4 = ((frost$core$Object*) _3);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from KeyTuple5.frost:51:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_7 = ($fn29) _4->$class->vtable[0];
_8 = _7(_4);
_9 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s30, _8);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_17 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_9, &$s31);
_18 = param0;
_19 = &_18->f1;
_20 = *_19;
_21 = ((frost$core$Object*) _20);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from KeyTuple5.frost:51:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_24 = ($fn32) _21->$class->vtable[0];
_25 = _24(_21);
_26 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_17, _25);
_27 = ((frost$core$Object*) _26);
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_29);
_31 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_31);
_34 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_26, &$s33);
_35 = param0;
_36 = &_35->f2;
_37 = *_36;
_38 = ((frost$core$Object*) _37);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from KeyTuple5.frost:51:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_41 = ($fn34) _38->$class->vtable[0];
_42 = _41(_38);
_43 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_34, _42);
_44 = ((frost$core$Object*) _43);
frost$core$Frost$ref$frost$core$Object$Q(_44);
_46 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_46);
_48 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_48);
_51 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_43, &$s35);
_52 = param0;
_53 = &_52->f3;
_54 = *_53;
_55 = ((frost$core$Object*) _54);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from KeyTuple5.frost:51:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_58 = ($fn36) _55->$class->vtable[0];
_59 = _58(_55);
_60 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_51, _59);
_61 = ((frost$core$Object*) _60);
frost$core$Frost$ref$frost$core$Object$Q(_61);
_63 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_63);
_65 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_65);
_68 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_60, &$s37);
_69 = param0;
_70 = &_69->f4;
_71 = *_70;
_72 = ((frost$core$Object*) _71);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from KeyTuple5.frost:51:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_75 = ($fn38) _72->$class->vtable[0];
_76 = _75(_72);
_77 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_68, _76);
_78 = ((frost$core$Object*) _77);
frost$core$Frost$ref$frost$core$Object$Q(_78);
_80 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_80);
_82 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_82);
_85 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_77, &$s39);
_86 = ((frost$core$Object*) _85);
frost$core$Frost$ref$frost$core$Object$Q(_86);
_88 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_88);
_90 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_90);
_92 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_92);
_94 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_94);
_96 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_96);
_98 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_98);
_100 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_100);
_102 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_102);
_104 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_104);
_106 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_106);
return _85;

}
void frost$core$KeyTuple5$cleanup(void* rawSelf) {
frost$core$KeyTuple5* param0 = (frost$core$KeyTuple5*) rawSelf;

frost$core$Object* _1;
frost$core$KeyTuple5* _3;
frost$collections$HashKey** _4;
frost$collections$HashKey* _5;
frost$core$Object* _6;
frost$core$KeyTuple5* _8;
frost$collections$HashKey** _9;
frost$collections$HashKey* _10;
frost$core$Object* _11;
frost$core$KeyTuple5* _13;
frost$collections$HashKey** _14;
frost$collections$HashKey* _15;
frost$core$Object* _16;
frost$core$KeyTuple5* _18;
frost$collections$HashKey** _19;
frost$collections$HashKey* _20;
frost$core$Object* _21;
frost$core$KeyTuple5* _23;
frost$collections$HashKey** _24;
frost$collections$HashKey* _25;
frost$core$Object* _26;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/KeyTuple5.frost:3
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = param0;
_4 = &_3->f0;
_5 = *_4;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = param0;
_9 = &_8->f1;
_10 = *_9;
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = param0;
_14 = &_13->f2;
_15 = *_14;
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = param0;
_19 = &_18->f3;
_20 = *_19;
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_23 = param0;
_24 = &_23->f4;
_25 = *_24;
_26 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_26);
return;

}






