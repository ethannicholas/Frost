#include "org/frostlang/frostc/frostdoc/Markdown/_Closure32.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"
#include "frost/core/Matcher.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/RegularExpression.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure32$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure32$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure32$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure32$$anonymous31$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$Object* (*$fn2)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef void (*$fn5)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn6)(frost$core$Object*);
typedef frost$core$String* (*$fn11)(frost$core$Object*);
typedef frost$core$String* (*$fn14)(frost$core$Object*);
typedef void (*$fn16)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn17)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x33\x32", 49, -4905414781225753864, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e\x5b\x20\x5c\x74\x5d\x2b", 7, 2144065729583989714, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2b\x24", 7, 1065103647703566382, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x63\x6f\x64\x65\x3e", 6, -4368029754542842124, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x63\x6f\x64\x65\x3e", 7, 1685123786324366533, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure32$init$org$frostlang$frostc$frostdoc$Markdown(void* rawSelf, org$frostlang$frostc$frostdoc$Markdown* param1) {
org$frostlang$frostc$frostdoc$Markdown$_Closure32* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure32*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
org$frostlang$frostc$frostdoc$Markdown** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1088
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->$self;
*_7 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure32$cleanup(void* rawSelf) {
org$frostlang$frostc$frostdoc$Markdown$_Closure32* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure32*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1088
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure32$$anonymous31$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(void* rawSelf, frost$collections$ListView* param1) {
org$frostlang$frostc$frostdoc$Markdown$_Closure32* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure32*) rawSelf;

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$Matcher* local2 = NULL;
frost$core$Matcher* local3 = NULL;
frost$core$Int _1;
$fn2 _2;
frost$core$Object* _3;
frost$core$String* _4;
frost$core$Object* _6;
frost$core$String* _8;
frost$core$Object* _9;
frost$core$Object* _12;
frost$core$MutableString* _15;
frost$core$String* _16;
bool _17;
frost$core$Bit _18;
bool _19;
frost$core$Int _21;
frost$core$String* _24;
frost$core$Object* _27;
frost$core$MutableString* _29;
frost$core$Object* _30;
frost$core$Object* _33;
frost$core$MutableString* _36;
frost$core$RegularExpression* _37;
frost$core$Bit _41;
frost$core$Object* _44;
$fn3 _45;
frost$core$String* _46;
frost$core$Matcher* _47;
frost$core$Object* _49;
frost$core$Matcher* _51;
frost$core$Object* _52;
frost$core$Object* _55;
frost$core$Object* _57;
frost$core$Matcher* _63;
frost$core$Bit _64;
bool _65;
frost$core$Matcher* _68;
frost$core$Matcher* _72;
frost$core$Matcher* _74;
frost$core$Object* _75;
frost$core$Object* _80;
frost$core$MutableString* _83;
frost$core$RegularExpression* _84;
frost$core$Bit _88;
frost$core$Object* _91;
$fn4 _92;
frost$core$String* _93;
frost$core$Matcher* _94;
frost$core$Object* _96;
frost$core$Matcher* _98;
frost$core$Object* _99;
frost$core$Object* _102;
frost$core$Object* _104;
frost$core$Matcher* _110;
frost$core$Bit _111;
bool _112;
frost$core$Matcher* _115;
frost$core$Matcher* _119;
frost$core$Matcher* _121;
frost$core$Object* _122;
frost$core$Object* _127;
org$frostlang$frostc$frostdoc$Markdown** _130;
org$frostlang$frostc$frostdoc$Markdown* _131;
frost$core$MutableString* _132;
$fn5 _133;
frost$core$MutableString* _136;
frost$core$Object* _137;
$fn6 _140;
frost$core$String* _141;
frost$core$String* _142;
frost$core$Object* _143;
frost$core$Object* _145;
frost$core$Object* _147;
frost$core$String* _150;
frost$core$Object* _151;
frost$core$Object* _153;
frost$core$Object* _155;
frost$core$MutableString* _157;
frost$core$Object* _158;
frost$core$String* _161;
frost$core$Object* _162;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1089
_1 = (frost$core$Int) {2u};
ITable* $tmp7 = param1->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp7 = $tmp7->next;
}
_2 = $tmp7->methods[0];
_3 = _2(param1, _1);
_4 = ((frost$core$String*) _3);
*(&local0) = ((frost$core$String*) NULL);
_6 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = *(&local0);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
*(&local0) = _4;
_12 = _3;
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1090
_15 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
_16 = *(&local0);
_17 = _16 != NULL;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block1; else goto block2;
block2:;
_21 = (frost$core$Int) {1090u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _21, &$s9);
abort(); // unreachable
block1:;
_24 = _16;
frost$core$MutableString$init$frost$core$String(_15, _24);
*(&local1) = ((frost$core$MutableString*) NULL);
_27 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = *(&local1);
_30 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_30);
*(&local1) = _15;
_33 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_33);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1091
_36 = *(&local1);
_37 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_37, &$s10);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1091:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_41 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_44 = ((frost$core$Object*) _36);
_45 = ($fn11) _44->$class->vtable[0];
_46 = _45(_44);
_47 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_37, _46);
*(&local2) = ((frost$core$Matcher*) NULL);
_49 = ((frost$core$Object*) _47);
frost$core$Frost$ref$frost$core$Object$Q(_49);
_51 = *(&local2);
_52 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_52);
*(&local2) = _47;
_55 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_55);
_57 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_57);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(_36);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block5;
block5:;
_63 = *(&local2);
_64 = frost$core$Matcher$find$R$frost$core$Bit(_63);
_65 = _64.value;
if (_65) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_68 = *(&local2);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_68, _36, &$s12, _41);
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_72 = *(&local2);
frost$core$Matcher$appendTail$frost$core$MutableString(_72, _36);
_74 = *(&local2);
_75 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_75);
*(&local2) = ((frost$core$Matcher*) NULL);
_80 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_80);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1092
_83 = *(&local1);
_84 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_84, &$s13);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1092:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_88 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_91 = ((frost$core$Object*) _83);
_92 = ($fn14) _91->$class->vtable[0];
_93 = _92(_91);
_94 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_84, _93);
*(&local3) = ((frost$core$Matcher*) NULL);
_96 = ((frost$core$Object*) _94);
frost$core$Frost$ref$frost$core$Object$Q(_96);
_98 = *(&local3);
_99 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_99);
*(&local3) = _94;
_102 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_102);
_104 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_104);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(_83);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block10;
block10:;
_110 = *(&local3);
_111 = frost$core$Matcher$find$R$frost$core$Bit(_110);
_112 = _111.value;
if (_112) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_115 = *(&local3);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_115, _83, &$s15, _88);
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_119 = *(&local3);
frost$core$Matcher$appendTail$frost$core$MutableString(_119, _83);
_121 = *(&local3);
_122 = ((frost$core$Object*) _121);
frost$core$Frost$unref$frost$core$Object$Q(_122);
*(&local3) = ((frost$core$Matcher*) NULL);
_127 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_127);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1093
_130 = &param0->$self;
_131 = *_130;
_132 = *(&local1);
_133 = ($fn16) _131->$class->vtable[18];
_133(_131, _132);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1094
_136 = *(&local1);
_137 = ((frost$core$Object*) _136);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:1094:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_140 = ($fn17) _137->$class->vtable[0];
_141 = _140(_137);
_142 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s18, _141);
_143 = ((frost$core$Object*) _142);
frost$core$Frost$ref$frost$core$Object$Q(_143);
_145 = ((frost$core$Object*) _142);
frost$core$Frost$unref$frost$core$Object$Q(_145);
_147 = ((frost$core$Object*) _141);
frost$core$Frost$unref$frost$core$Object$Q(_147);
_150 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_142, &$s19);
_151 = ((frost$core$Object*) _150);
frost$core$Frost$ref$frost$core$Object$Q(_151);
_153 = ((frost$core$Object*) _150);
frost$core$Frost$unref$frost$core$Object$Q(_153);
_155 = ((frost$core$Object*) _142);
frost$core$Frost$unref$frost$core$Object$Q(_155);
_157 = *(&local1);
_158 = ((frost$core$Object*) _157);
frost$core$Frost$unref$frost$core$Object$Q(_158);
*(&local1) = ((frost$core$MutableString*) NULL);
_161 = *(&local0);
_162 = ((frost$core$Object*) _161);
frost$core$Frost$unref$frost$core$Object$Q(_162);
*(&local0) = ((frost$core$String*) NULL);
return _150;

}

