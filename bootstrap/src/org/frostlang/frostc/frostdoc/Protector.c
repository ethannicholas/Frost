#include "org/frostlang/frostc/frostdoc/Protector.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableString.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/math/Random.h"
#include "frost/core/String/Index.h"
#include "frost/core/Char32.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Protector$class_type org$frostlang$frostc$frostdoc$Protector$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Protector$cleanup, org$frostlang$frostc$frostdoc$Protector$encode$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Protector$decode$frost$core$String$R$frost$core$String$Q, org$frostlang$frostc$frostdoc$Protector$randomToken$R$frost$core$String} };

typedef frost$core$String* (*$fn2)(org$frostlang$frostc$frostdoc$Protector*);
typedef frost$core$String* (*$fn3)(org$frostlang$frostc$frostdoc$Protector*);
typedef frost$core$Int (*$fn10)(frost$math$Random*, frost$core$Int);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x50\x72\x6f\x74\x65\x63\x74\x6f\x72", 39, 8376201690720760444, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x42\x43\x44\x45\x46\x47\x48\x49\x4a\x4b\x4c\x4d\x4e\x4f\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5a\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6a\x6b\x6c\x6d\x6e\x6f\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7a\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x2d\x2f\x2c\x2e", 66, -6663281110466647188, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x42\x43\x44\x45\x46\x47\x48\x49\x4a\x4b\x4c\x4d\x4e\x4f\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5a\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6a\x6b\x6c\x6d\x6e\x6f\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7a\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x2d\x2f\x2c\x2e", 66, -6663281110466647188, NULL };

frost$core$String* org$frostlang$frostc$frostdoc$Protector$encode$frost$core$String$R$frost$core$String(void* rawSelf, frost$core$String* param1) {
org$frostlang$frostc$frostdoc$Protector* param0 = (org$frostlang$frostc$frostdoc$Protector*) rawSelf;

frost$core$String* local0 = NULL;
frost$collections$HashMap** _1;
frost$collections$HashMap* _2;
frost$collections$HashKey* _3;
frost$core$Object* _4;
frost$core$String* _5;
frost$core$Object* _7;
frost$core$String* _9;
frost$core$Object* _10;
frost$core$Object* _13;
frost$core$String* _16;
bool _17;
frost$core$Bit _18;
bool _19;
$fn2 _22;
frost$core$String* _23;
frost$core$String* _24;
frost$core$Object* _25;
frost$core$String* _27;
frost$core$Object* _28;
frost$core$Object* _31;
frost$collections$HashMap** _34;
frost$collections$HashMap* _35;
frost$collections$HashKey* _36;
frost$core$String* _37;
bool _38;
frost$core$Bit _39;
bool _40;
frost$core$Int _42;
frost$core$String* _45;
frost$core$Object* _46;
frost$collections$HashMap** _49;
frost$collections$HashMap* _50;
frost$core$String* _51;
bool _52;
frost$core$Bit _53;
bool _54;
frost$core$Int _56;
frost$core$String* _59;
frost$collections$HashKey* _60;
frost$core$Object* _61;
frost$core$String* _65;
bool _66;
frost$core$Bit _67;
bool _68;
frost$core$Int _70;
frost$core$String* _73;
frost$core$Object* _74;
frost$core$String* _76;
frost$core$Object* _77;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:59
_1 = &param0->encodeMap;
_2 = *_1;
_3 = ((frost$collections$HashKey*) param1);
_4 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(_2, _3);
_5 = ((frost$core$String*) _4);
*(&local0) = ((frost$core$String*) NULL);
_7 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = *(&local0);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_10);
*(&local0) = _5;
_13 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:60
_16 = *(&local0);
_17 = _16 == NULL;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:61
_22 = ($fn3) param0->$class->vtable[4];
_23 = _22(param0);
_24 = _23;
_25 = ((frost$core$Object*) _24);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = *(&local0);
_28 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local0) = _24;
_31 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_31);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:62
_34 = &param0->encodeMap;
_35 = *_34;
_36 = ((frost$collections$HashKey*) param1);
_37 = *(&local0);
_38 = _37 != NULL;
_39 = (frost$core$Bit) {_38};
_40 = _39.value;
if (_40) goto block3; else goto block4;
block4:;
_42 = (frost$core$Int) {62u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4, _42, &$s5);
abort(); // unreachable
block3:;
_45 = _37;
_46 = ((frost$core$Object*) _45);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_35, _36, _46);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:63
_49 = &param0->decodeMap;
_50 = *_49;
_51 = *(&local0);
_52 = _51 != NULL;
_53 = (frost$core$Bit) {_52};
_54 = _53.value;
if (_54) goto block5; else goto block6;
block6:;
_56 = (frost$core$Int) {63u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _56, &$s7);
abort(); // unreachable
block5:;
_59 = _51;
_60 = ((frost$collections$HashKey*) _59);
_61 = ((frost$core$Object*) param1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_50, _60, _61);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:65
_65 = *(&local0);
_66 = _65 != NULL;
_67 = (frost$core$Bit) {_66};
_68 = _67.value;
if (_68) goto block7; else goto block8;
block8:;
_70 = (frost$core$Int) {65u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _70, &$s9);
abort(); // unreachable
block7:;
_73 = _65;
_74 = ((frost$core$Object*) _73);
frost$core$Frost$ref$frost$core$Object$Q(_74);
_76 = *(&local0);
_77 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_77);
*(&local0) = ((frost$core$String*) NULL);
return _73;

}
frost$core$String* org$frostlang$frostc$frostdoc$Protector$decode$frost$core$String$R$frost$core$String$Q(void* rawSelf, frost$core$String* param1) {
org$frostlang$frostc$frostdoc$Protector* param0 = (org$frostlang$frostc$frostdoc$Protector*) rawSelf;

frost$collections$HashMap** _1;
frost$collections$HashMap* _2;
frost$collections$HashKey* _3;
frost$core$Object* _4;
frost$core$String* _5;
frost$core$Object* _6;
frost$core$Object* _8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:69
_1 = &param0->decodeMap;
_2 = *_1;
_3 = ((frost$collections$HashKey*) param1);
_4 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(_2, _3);
_5 = ((frost$core$String*) _4);
_6 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_8);
return _5;

}
frost$core$String* org$frostlang$frostc$frostdoc$Protector$randomToken$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$frostdoc$Protector* param0 = (org$frostlang$frostc$frostdoc$Protector*) rawSelf;

frost$core$Int local0;
frost$core$String* local1 = NULL;
frost$core$MutableString* local2 = NULL;
frost$core$Int local3;
frost$core$Int _1;
frost$core$Object* _5;
frost$core$String* _7;
frost$core$Object* _8;
frost$core$MutableString* _12;
frost$core$Object* _15;
frost$core$MutableString* _17;
frost$core$Object* _18;
frost$core$Object* _21;
frost$core$Int _24;
frost$core$Int _25;
frost$core$Bit _26;
frost$core$Range$LTfrost$core$Int$GT _27;
frost$core$Int _28;
frost$core$Int _30;
frost$core$Bit _31;
bool _32;
frost$core$Int _33;
int64_t _35;
int64_t _36;
bool _37;
frost$core$Bit _38;
bool _39;
int64_t _41;
int64_t _42;
bool _43;
frost$core$Bit _44;
bool _45;
frost$core$MutableString* _48;
frost$core$String* _49;
frost$math$Random** _50;
frost$math$Random* _51;
frost$core$String* _52;
frost$core$Int* _55;
frost$core$Int _56;
$fn10 _58;
frost$core$Int _59;
frost$core$Int _64;
frost$core$String$Index _65;
frost$core$String$Index _67;
frost$core$Char32 _68;
frost$core$Int _72;
int64_t _73;
int64_t _74;
int64_t _75;
frost$core$Int _76;
int64_t _78;
int64_t _79;
bool _80;
frost$core$Bit _81;
bool _82;
int64_t _84;
int64_t _85;
bool _86;
frost$core$Bit _87;
bool _88;
int64_t _90;
int64_t _91;
int64_t _92;
frost$core$Int _93;
frost$core$MutableString* _97;
frost$core$String* _98;
frost$core$Object* _99;
frost$core$Object* _101;
frost$core$MutableString* _103;
frost$core$Object* _104;
frost$core$String* _107;
frost$core$Object* _108;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:73
_1 = (frost$core$Int) {20u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:74
*(&local1) = ((frost$core$String*) NULL);
_5 = ((frost$core$Object*) &$s11);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = *(&local1);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
*(&local1) = &$s12;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:75
_12 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_12);
*(&local2) = ((frost$core$MutableString*) NULL);
_15 = ((frost$core$Object*) _12);
frost$core$Frost$ref$frost$core$Object$Q(_15);
_17 = *(&local2);
_18 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_18);
*(&local2) = _12;
_21 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_21);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:76
_24 = (frost$core$Int) {0u};
_25 = *(&local0);
_26 = (frost$core$Bit) {false};
_27 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_24, _25, _26);
_28 = _27.min;
*(&local3) = _28;
_30 = _27.max;
_31 = _27.inclusive;
_32 = _31.value;
_33 = (frost$core$Int) {1u};
if (_32) goto block4; else goto block5;
block4:;
_35 = _28.value;
_36 = _30.value;
_37 = _35 <= _36;
_38 = (frost$core$Bit) {_37};
_39 = _38.value;
if (_39) goto block1; else goto block2;
block5:;
_41 = _28.value;
_42 = _30.value;
_43 = _41 < _42;
_44 = (frost$core$Bit) {_43};
_45 = _44.value;
if (_45) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:77
_48 = *(&local2);
_49 = *(&local1);
_50 = &param0->random;
_51 = *_50;
_52 = *(&local1);
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int from Markdown.frost:77:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:492
_55 = &_52->_length;
_56 = *_55;
ITable* $tmp13 = _51->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$math$Random$class) {
    $tmp13 = $tmp13->next;
}
_58 = $tmp13->methods[3];
_59 = _58(_51, _56);
// begin inline call to function frost.core.String.[](index:frost.core.Int):frost.core.Char32 from Markdown.frost:77:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:675
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:675:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_64 = (frost$core$Int) {0u};
_65 = frost$core$String$Index$init$frost$core$Int(_64);
_67 = frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index(_49, _65, _59);
_68 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(_49, _67);
frost$core$MutableString$append$frost$core$Char32(_48, _68);
_72 = *(&local3);
_73 = _30.value;
_74 = _72.value;
_75 = _73 - _74;
_76 = (frost$core$Int) {_75};
if (_32) goto block10; else goto block11;
block10:;
_78 = _76.value;
_79 = _33.value;
_80 = _78 >= _79;
_81 = (frost$core$Bit) {_80};
_82 = _81.value;
if (_82) goto block9; else goto block2;
block11:;
_84 = _76.value;
_85 = _33.value;
_86 = _84 > _85;
_87 = (frost$core$Bit) {_86};
_88 = _87.value;
if (_88) goto block9; else goto block2;
block9:;
_90 = _72.value;
_91 = _33.value;
_92 = _90 + _91;
_93 = (frost$core$Int) {_92};
*(&local3) = _93;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:79
_97 = *(&local2);
_98 = frost$core$MutableString$finish$R$frost$core$String(_97);
_99 = ((frost$core$Object*) _98);
frost$core$Frost$ref$frost$core$Object$Q(_99);
_101 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_101);
_103 = *(&local2);
_104 = ((frost$core$Object*) _103);
frost$core$Frost$unref$frost$core$Object$Q(_104);
*(&local2) = ((frost$core$MutableString*) NULL);
_107 = *(&local1);
_108 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_108);
*(&local1) = ((frost$core$String*) NULL);
return _98;

}
void org$frostlang$frostc$frostdoc$Protector$init(void* rawSelf) {
org$frostlang$frostc$frostdoc$Protector* param0 = (org$frostlang$frostc$frostdoc$Protector*) rawSelf;

frost$collections$HashMap* _1;
frost$core$Object* _3;
frost$collections$HashMap** _5;
frost$collections$HashMap* _6;
frost$core$Object* _7;
frost$collections$HashMap** _9;
frost$core$Object* _11;
frost$collections$HashMap* _14;
frost$core$Object* _16;
frost$collections$HashMap** _18;
frost$collections$HashMap* _19;
frost$core$Object* _20;
frost$collections$HashMap** _22;
frost$core$Object* _24;
frost$math$Random* _27;
frost$core$Object* _28;
frost$math$Random** _30;
frost$math$Random* _31;
frost$core$Object* _32;
frost$math$Random** _34;
frost$core$Object* _36;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:52
_1 = (frost$collections$HashMap*) frostObjectAlloc(sizeof(frost$collections$HashMap), (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init(_1);
_3 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = &param0->encodeMap;
_6 = *_5;
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
_9 = &param0->encodeMap;
*_9 = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:54
_14 = (frost$collections$HashMap*) frostObjectAlloc(sizeof(frost$collections$HashMap), (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init(_14);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = &param0->decodeMap;
_19 = *_18;
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_22 = &param0->decodeMap;
*_22 = _14;
_24 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_24);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:56
_27 = frost$math$Random$default$R$frost$math$Random();
_28 = ((frost$core$Object*) _27);
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = &param0->random;
_31 = *_30;
_32 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = &param0->random;
*_34 = _27;
_36 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_36);
return;

}
void org$frostlang$frostc$frostdoc$Protector$cleanup(void* rawSelf) {
org$frostlang$frostc$frostdoc$Protector* param0 = (org$frostlang$frostc$frostdoc$Protector*) rawSelf;

frost$core$Object* _1;
frost$collections$HashMap** _3;
frost$collections$HashMap* _4;
frost$core$Object* _5;
frost$collections$HashMap** _7;
frost$collections$HashMap* _8;
frost$core$Object* _9;
frost$math$Random** _11;
frost$math$Random* _12;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:47
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->encodeMap;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->decodeMap;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->random;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
return;

}

