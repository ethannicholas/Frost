#include "org/frostlang/frostc/frostdoc/Markdown/_Closure34.h"
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
org$frostlang$frostc$frostdoc$Markdown$_Closure34$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure34$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure34$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure34$$anonymous33$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$Object* (*$fn2)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef void (*$fn5)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn6)(frost$core$Object*);
typedef frost$core$String* (*$fn11)(frost$core$Object*);
typedef frost$core$String* (*$fn14)(frost$core$Object*);
typedef void (*$fn16)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn17)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x33\x34", 49, -4905408184155984598, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e\x5b\x20\x5c\x74\x5d\x2b", 7, 2144065729583989714, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2b\x24", 7, 1065103647703566382, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x63\x6f\x64\x65\x3e", 6, -4368029754542842124, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x63\x6f\x64\x65\x3e", 7, 1685123786324366533, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure34$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure34* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
org$frostlang$frostc$frostdoc$Markdown** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1085
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
void org$frostlang$frostc$frostdoc$Markdown$_Closure34$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure34* param0) {

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1085
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure34$$anonymous33$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$_Closure34* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$Matcher* local2 = NULL;
frost$core$Matcher* local3 = NULL;
frost$collections$ListView* _1;
frost$core$Int _2;
$fn2 _3;
frost$core$Object* _4;
frost$core$String* _5;
frost$core$Object* _7;
frost$core$String* _9;
frost$core$Object* _10;
frost$core$Object* _13;
frost$core$MutableString* _16;
frost$core$String* _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$core$Int _22;
frost$core$String* _25;
frost$core$Object* _28;
frost$core$MutableString* _30;
frost$core$Object* _31;
frost$core$Object* _34;
frost$core$MutableString* _37;
frost$core$RegularExpression* _38;
frost$core$Bit _42;
frost$core$Object* _45;
$fn3 _46;
frost$core$String* _47;
frost$core$Matcher* _48;
frost$core$Object* _50;
frost$core$Matcher* _52;
frost$core$Object* _53;
frost$core$Object* _56;
frost$core$Object* _58;
frost$core$Matcher* _64;
frost$core$Bit _65;
bool _66;
frost$core$Matcher* _69;
frost$core$Matcher* _73;
frost$core$Matcher* _75;
frost$core$Object* _76;
frost$core$Object* _81;
frost$core$MutableString* _84;
frost$core$RegularExpression* _85;
frost$core$Bit _89;
frost$core$Object* _92;
$fn4 _93;
frost$core$String* _94;
frost$core$Matcher* _95;
frost$core$Object* _97;
frost$core$Matcher* _99;
frost$core$Object* _100;
frost$core$Object* _103;
frost$core$Object* _105;
frost$core$Matcher* _111;
frost$core$Bit _112;
bool _113;
frost$core$Matcher* _116;
frost$core$Matcher* _120;
frost$core$Matcher* _122;
frost$core$Object* _123;
frost$core$Object* _128;
org$frostlang$frostc$frostdoc$Markdown** _131;
org$frostlang$frostc$frostdoc$Markdown* _132;
frost$core$MutableString* _133;
$fn5 _134;
frost$core$MutableString* _137;
frost$core$Object* _138;
$fn6 _141;
frost$core$String* _142;
frost$core$String* _143;
frost$core$Object* _144;
frost$core$Object* _146;
frost$core$Object* _148;
frost$core$String* _151;
frost$core$Object* _152;
frost$core$Object* _154;
frost$core$Object* _156;
frost$core$MutableString* _158;
frost$core$Object* _159;
frost$core$String* _162;
frost$core$Object* _163;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1086
_1 = param1;
_2 = (frost$core$Int) {2u};
ITable* $tmp7 = _1->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp7 = $tmp7->next;
}
_3 = $tmp7->methods[0];
_4 = _3(_1, _2);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1087
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_16 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
_17 = *(&local0);
_18 = _17 != NULL;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block1; else goto block2;
block2:;
_22 = (frost$core$Int) {1087u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _22, &$s9);
abort(); // unreachable
block1:;
_25 = _17;
frost$core$MutableString$init$frost$core$String(_16, _25);
*(&local1) = ((frost$core$MutableString*) NULL);
_28 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = *(&local1);
_31 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_31);
*(&local1) = _16;
_34 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_34);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1088
_37 = *(&local1);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_38 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_38, &$s10);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1088:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_42 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_45 = ((frost$core$Object*) _37);
_46 = ($fn11) _45->$class->vtable[0];
_47 = _46(_45);
_48 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_38, _47);
*(&local2) = ((frost$core$Matcher*) NULL);
_50 = ((frost$core$Object*) _48);
frost$core$Frost$ref$frost$core$Object$Q(_50);
_52 = *(&local2);
_53 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_53);
*(&local2) = _48;
_56 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_56);
_58 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_58);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(_37);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block5;
block5:;
_64 = *(&local2);
_65 = frost$core$Matcher$find$R$frost$core$Bit(_64);
_66 = _65.value;
if (_66) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_69 = *(&local2);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_69, _37, &$s12, _42);
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_73 = *(&local2);
frost$core$Matcher$appendTail$frost$core$MutableString(_73, _37);
_75 = *(&local2);
_76 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_76);
*(&local2) = ((frost$core$Matcher*) NULL);
_81 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_81);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1089
_84 = *(&local1);
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
_85 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_85, &$s13);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:1089:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_89 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_92 = ((frost$core$Object*) _84);
_93 = ($fn14) _92->$class->vtable[0];
_94 = _93(_92);
_95 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_85, _94);
*(&local3) = ((frost$core$Matcher*) NULL);
_97 = ((frost$core$Object*) _95);
frost$core$Frost$ref$frost$core$Object$Q(_97);
_99 = *(&local3);
_100 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_100);
*(&local3) = _95;
_103 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_103);
_105 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_105);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(_84);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block10;
block10:;
_111 = *(&local3);
_112 = frost$core$Matcher$find$R$frost$core$Bit(_111);
_113 = _112.value;
if (_113) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_116 = *(&local3);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_116, _84, &$s15, _89);
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_120 = *(&local3);
frost$core$Matcher$appendTail$frost$core$MutableString(_120, _84);
_122 = *(&local3);
_123 = ((frost$core$Object*) _122);
frost$core$Frost$unref$frost$core$Object$Q(_123);
*(&local3) = ((frost$core$Matcher*) NULL);
_128 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_128);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1090
_131 = &param0->$self;
_132 = *_131;
_133 = *(&local1);
_134 = ($fn16) _132->$class->vtable[18];
_134(_132, _133);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:1091
_137 = *(&local1);
_138 = ((frost$core$Object*) _137);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:1091:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_141 = ($fn17) _138->$class->vtable[0];
_142 = _141(_138);
_143 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s18, _142);
_144 = ((frost$core$Object*) _143);
frost$core$Frost$ref$frost$core$Object$Q(_144);
_146 = ((frost$core$Object*) _143);
frost$core$Frost$unref$frost$core$Object$Q(_146);
_148 = ((frost$core$Object*) _142);
frost$core$Frost$unref$frost$core$Object$Q(_148);
_151 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_143, &$s19);
_152 = ((frost$core$Object*) _151);
frost$core$Frost$ref$frost$core$Object$Q(_152);
_154 = ((frost$core$Object*) _151);
frost$core$Frost$unref$frost$core$Object$Q(_154);
_156 = ((frost$core$Object*) _143);
frost$core$Frost$unref$frost$core$Object$Q(_156);
_158 = *(&local1);
_159 = ((frost$core$Object*) _158);
frost$core$Frost$unref$frost$core$Object$Q(_159);
*(&local1) = ((frost$core$MutableString*) NULL);
_162 = *(&local0);
_163 = ((frost$core$Object*) _162);
frost$core$Frost$unref$frost$core$Object$Q(_163);
*(&local0) = ((frost$core$String*) NULL);
return _151;

}

