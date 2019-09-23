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

void org$frostlang$frostc$frostdoc$Markdown$_Closure6$init$org$frostlang$frostc$frostdoc$Markdown(void* rawSelf, org$frostlang$frostc$frostdoc$Markdown* param1) {
org$frostlang$frostc$frostdoc$Markdown$_Closure6* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure6*) rawSelf;

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
void org$frostlang$frostc$frostdoc$Markdown$_Closure6$cleanup(void* rawSelf) {
org$frostlang$frostc$frostdoc$Markdown$_Closure6* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure6*) rawSelf;

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
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure6$$anonymous5$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(void* rawSelf, frost$collections$ListView* param1) {
org$frostlang$frostc$frostdoc$Markdown$_Closure6* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure6*) rawSelf;

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
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
org$frostlang$frostc$frostdoc$Markdown** _36;
org$frostlang$frostc$frostdoc$Markdown* _37;
frost$core$MutableString* _38;
$fn3 _39;
org$frostlang$frostc$frostdoc$Markdown** _42;
org$frostlang$frostc$frostdoc$Markdown* _43;
frost$core$MutableString* _44;
frost$core$Object* _45;
$fn4 _46;
frost$core$String* _47;
$fn5 _48;
frost$core$String* _49;
frost$core$Object* _51;
frost$core$String* _53;
frost$core$Object* _54;
frost$core$Object* _57;
frost$core$Object* _59;
org$frostlang$frostc$frostdoc$Markdown** _62;
org$frostlang$frostc$frostdoc$Markdown* _63;
frost$core$MutableString* _64;
frost$core$Object* _65;
$fn6 _68;
frost$core$String* _69;
frost$core$String* _70;
frost$core$Object* _71;
frost$core$Object* _73;
frost$core$Object* _75;
frost$core$String* _78;
$fn7 _79;
frost$core$String* _80;
frost$core$Object* _82;
frost$core$String* _84;
frost$core$Object* _85;
frost$core$Object* _88;
frost$core$Object* _90;
frost$core$Object* _92;
frost$core$String* _95;
frost$core$String* _96;
frost$core$String* _97;
frost$core$String* _98;
frost$core$String* _99;
frost$core$String* _100;
frost$core$Object* _101;
frost$core$Object* _103;
frost$core$Object* _105;
frost$core$Object* _107;
frost$core$Object* _109;
frost$core$String* _111;
frost$core$Object* _112;
frost$core$String* _115;
frost$core$Object* _116;
frost$core$MutableString* _119;
frost$core$Object* _120;
frost$core$String* _123;
frost$core$Object* _124;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:360
_1 = (frost$core$Int) {1u};
ITable* $tmp8 = param1->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp8 = $tmp8->next;
}
_2 = $tmp8->methods[0];
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:361
_15 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
_16 = *(&local0);
_17 = _16 != NULL;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block1; else goto block2;
block2:;
_21 = (frost$core$Int) {361u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _21, &$s10);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:362
_36 = &param0->$self;
_37 = *_36;
_38 = *(&local1);
_39 = ($fn11) _37->$class->vtable[11];
_39(_37, _38);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:363
_42 = &param0->$self;
_43 = *_42;
_44 = *(&local1);
_45 = ((frost$core$Object*) _44);
_46 = ($fn12) _45->$class->vtable[0];
_47 = _46(_45);
_48 = ($fn13) _43->$class->vtable[12];
_49 = _48(_43, _47);
*(&local2) = ((frost$core$String*) NULL);
_51 = ((frost$core$Object*) _49);
frost$core$Frost$ref$frost$core$Object$Q(_51);
_53 = *(&local2);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local2) = _49;
_57 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_57);
_59 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_59);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:364
_62 = &param0->$self;
_63 = *_62;
_64 = *(&local1);
_65 = ((frost$core$Object*) _64);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:364:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_68 = ($fn14) _65->$class->vtable[0];
_69 = _68(_65);
_70 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s15, _69);
_71 = ((frost$core$Object*) _70);
frost$core$Frost$ref$frost$core$Object$Q(_71);
_73 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_73);
_75 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_75);
_78 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_70, &$s16);
_79 = ($fn17) _63->$class->vtable[12];
_80 = _79(_63, _78);
*(&local3) = ((frost$core$String*) NULL);
_82 = ((frost$core$Object*) _80);
frost$core$Frost$ref$frost$core$Object$Q(_82);
_84 = *(&local3);
_85 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_85);
*(&local3) = _80;
_88 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_88);
_90 = ((frost$core$Object*) _78);
frost$core$Frost$unref$frost$core$Object$Q(_90);
_92 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_92);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:365
_95 = *(&local3);
_96 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s18, _95);
_97 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_96, &$s19);
_98 = *(&local2);
_99 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_97, _98);
_100 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_99, &$s20);
_101 = ((frost$core$Object*) _100);
frost$core$Frost$ref$frost$core$Object$Q(_101);
_103 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_103);
_105 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_105);
_107 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_107);
_109 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_109);
_111 = *(&local3);
_112 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_112);
*(&local3) = ((frost$core$String*) NULL);
_115 = *(&local2);
_116 = ((frost$core$Object*) _115);
frost$core$Frost$unref$frost$core$Object$Q(_116);
*(&local2) = ((frost$core$String*) NULL);
_119 = *(&local1);
_120 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_120);
*(&local1) = ((frost$core$MutableString*) NULL);
_123 = *(&local0);
_124 = ((frost$core$Object*) _123);
frost$core$Frost$unref$frost$core$Object$Q(_124);
*(&local0) = ((frost$core$String*) NULL);
return _100;

}

