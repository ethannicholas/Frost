#include "org/frostlang/frostc/frostdoc/Markdown/_Closure6.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure6$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure6$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure6$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure6$$anonymous5$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$Object* (*$fn2)(frost$collections$ListView*, frost$core$Int);
typedef void (*$fn3)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn5)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$String*);
typedef frost$core$String* (*$fn6)(frost$core$Object*);
typedef frost$core$String* (*$fn7)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$String*);
typedef void (*$fn11)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn12)(frost$core$Object*);
typedef frost$core$String* (*$fn13)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$String*);
typedef frost$core$String* (*$fn14)(frost$core$Object*);
typedef frost$core$String* (*$fn17)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x36", 48, 5457370281776160769, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x69\x6c\x74\x6f\x3a", 7, -5678420075542792885, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 6240236502603552868, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22\x3e", 2, 561975819213520929, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x61\x3e", 4, 8936268775352766043, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure6$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure6* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
org$frostlang$frostc$frostdoc$Markdown** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:359
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
void org$frostlang$frostc$frostdoc$Markdown$_Closure6$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure6* param0) {

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:359
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure6$$anonymous5$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$_Closure6* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
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
org$frostlang$frostc$frostdoc$Markdown** _37;
org$frostlang$frostc$frostdoc$Markdown* _38;
frost$core$MutableString* _39;
$fn3 _40;
org$frostlang$frostc$frostdoc$Markdown** _43;
org$frostlang$frostc$frostdoc$Markdown* _44;
frost$core$MutableString* _45;
frost$core$Object* _46;
$fn4 _47;
frost$core$String* _48;
$fn5 _49;
frost$core$String* _50;
frost$core$Object* _52;
frost$core$String* _54;
frost$core$Object* _55;
frost$core$Object* _58;
frost$core$Object* _60;
org$frostlang$frostc$frostdoc$Markdown** _63;
org$frostlang$frostc$frostdoc$Markdown* _64;
frost$core$MutableString* _65;
frost$core$Object* _66;
$fn6 _69;
frost$core$String* _70;
frost$core$String* _71;
frost$core$Object* _72;
frost$core$Object* _74;
frost$core$Object* _76;
frost$core$String* _79;
$fn7 _80;
frost$core$String* _81;
frost$core$Object* _83;
frost$core$String* _85;
frost$core$Object* _86;
frost$core$Object* _89;
frost$core$Object* _91;
frost$core$Object* _93;
frost$core$String* _96;
frost$core$String* _97;
frost$core$String* _98;
frost$core$String* _99;
frost$core$String* _100;
frost$core$String* _101;
frost$core$Object* _102;
frost$core$Object* _104;
frost$core$Object* _106;
frost$core$Object* _108;
frost$core$Object* _110;
frost$core$String* _112;
frost$core$Object* _113;
frost$core$String* _116;
frost$core$Object* _117;
frost$core$MutableString* _120;
frost$core$Object* _121;
frost$core$String* _124;
frost$core$Object* _125;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:360
_1 = param1;
_2 = (frost$core$Int) {1u};
ITable* $tmp8 = _1->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp8 = $tmp8->next;
}
_3 = $tmp8->methods[0];
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:361
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_16 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
_17 = *(&local0);
_18 = _17 != NULL;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block1; else goto block2;
block2:;
_22 = (frost$core$Int) {361u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _22, &$s10);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:362
_37 = &param0->$self;
_38 = *_37;
_39 = *(&local1);
_40 = ($fn11) _38->$class->vtable[11];
_40(_38, _39);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:363
_43 = &param0->$self;
_44 = *_43;
_45 = *(&local1);
_46 = ((frost$core$Object*) _45);
_47 = ($fn12) _46->$class->vtable[0];
_48 = _47(_46);
_49 = ($fn13) _44->$class->vtable[12];
_50 = _49(_44, _48);
*(&local2) = ((frost$core$String*) NULL);
_52 = ((frost$core$Object*) _50);
frost$core$Frost$ref$frost$core$Object$Q(_52);
_54 = *(&local2);
_55 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_55);
*(&local2) = _50;
_58 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_58);
_60 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_60);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:364
_63 = &param0->$self;
_64 = *_63;
_65 = *(&local1);
_66 = ((frost$core$Object*) _65);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:364:41
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_69 = ($fn14) _66->$class->vtable[0];
_70 = _69(_66);
_71 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s15, _70);
_72 = ((frost$core$Object*) _71);
frost$core$Frost$ref$frost$core$Object$Q(_72);
_74 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_74);
_76 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_76);
_79 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_71, &$s16);
_80 = ($fn17) _64->$class->vtable[12];
_81 = _80(_64, _79);
*(&local3) = ((frost$core$String*) NULL);
_83 = ((frost$core$Object*) _81);
frost$core$Frost$ref$frost$core$Object$Q(_83);
_85 = *(&local3);
_86 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_86);
*(&local3) = _81;
_89 = ((frost$core$Object*) _81);
frost$core$Frost$unref$frost$core$Object$Q(_89);
_91 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_91);
_93 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_93);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:365
_96 = *(&local3);
_97 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s18, _96);
_98 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_97, &$s19);
_99 = *(&local2);
_100 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_98, _99);
_101 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_100, &$s20);
_102 = ((frost$core$Object*) _101);
frost$core$Frost$ref$frost$core$Object$Q(_102);
_104 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_104);
_106 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_106);
_108 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_108);
_110 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_110);
_112 = *(&local3);
_113 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_113);
*(&local3) = ((frost$core$String*) NULL);
_116 = *(&local2);
_117 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_117);
*(&local2) = ((frost$core$String*) NULL);
_120 = *(&local1);
_121 = ((frost$core$Object*) _120);
frost$core$Frost$unref$frost$core$Object$Q(_121);
*(&local1) = ((frost$core$MutableString*) NULL);
_124 = *(&local0);
_125 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_125);
*(&local0) = ((frost$core$String*) NULL);
return _101;

}

