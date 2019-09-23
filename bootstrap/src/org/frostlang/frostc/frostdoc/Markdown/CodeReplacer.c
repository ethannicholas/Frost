#include "org/frostlang/frostc/frostdoc/Markdown/CodeReplacer.h"
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
#include "frost/core/Int64.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/unsafe/NewPointer.h"
#include "frost/core/Equatable.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$class_type org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$cleanup, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$replacement$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$firstLine$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$isLanguageIdentifier$frost$core$String$R$frost$core$Bit, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$languageBlock$frost$core$String$frost$core$String$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$genericCodeBlock$frost$core$String$R$frost$core$String} };

typedef frost$core$Object* (*$fn2)(frost$collections$ListView*, frost$core$Int);
typedef void (*$fn3)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn4)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn5)(frost$core$Object*);
typedef frost$core$String* (*$fn6)(frost$core$Object*);
typedef frost$core$String* (*$fn7)(frost$core$Object*);
typedef frost$core$String* (*$fn8)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*);
typedef frost$core$Bit (*$fn9)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*);
typedef frost$core$String* (*$fn10)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*, frost$core$String*);
typedef frost$core$String* (*$fn11)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*);
typedef void (*$fn15)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef void (*$fn16)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn18)(frost$core$Object*);
typedef frost$core$String* (*$fn21)(frost$core$Object*);
typedef frost$core$String* (*$fn23)(frost$core$Object*);
typedef frost$core$String* (*$fn24)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*);
typedef frost$core$Bit (*$fn25)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*);
typedef frost$core$String* (*$fn26)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*, frost$core$String*);
typedef frost$core$String* (*$fn27)(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*, frost$core$String*);
typedef frost$core$Int (*$fn28)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn33)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x43\x6f\x64\x65\x52\x65\x70\x6c\x61\x63\x65\x72", 51, 5860124046831281376, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x41\x5c\x6e\x2b", 5, 7194222049286770233, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x73\x2b\x5c\x7a", 5, -1489214508352743697, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, -3364643104432915395, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, -3364643104432915395, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x61\x6e\x67\x3a", 5, -3364643104432915395, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x0a\x3c\x70\x72\x65\x20\x63\x6c\x61\x73\x73\x3d\x22", 14, 3540744169072508299, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22\x3e\x0a", 3, -3076321281910339311, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x3c\x2f\x70\x72\x65\x3e\x0a\x0a", 9, -7742285263970022103, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x0a\x3c\x70\x72\x65\x3e\x3c\x63\x6f\x64\x65\x3e", 13, 4282403471734233551, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x70\x72\x65\x3e\x0a\x0a", 16, 991304072172126489, NULL };

void org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$init$org$frostlang$frostc$frostdoc$Markdown(void* rawSelf, org$frostlang$frostc$frostdoc$Markdown* param1) {
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0 = (org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
org$frostlang$frostc$frostdoc$Markdown** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:446
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->markdown;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->markdown;
*_7 = param1;
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$replacement$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(void* rawSelf, frost$collections$ListView* param1) {
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0 = (org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) rawSelf;

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$Matcher* local2 = NULL;
frost$core$Matcher* local3 = NULL;
frost$core$String* local4 = NULL;
frost$core$String* local5 = NULL;
frost$core$String* local6 = NULL;
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
org$frostlang$frostc$frostdoc$Markdown** _39;
org$frostlang$frostc$frostdoc$Markdown* _40;
frost$core$MutableString* _41;
$fn3 _42;
org$frostlang$frostc$frostdoc$Markdown** _45;
org$frostlang$frostc$frostdoc$Markdown* _46;
frost$core$MutableString* _47;
$fn4 _48;
frost$core$MutableString* _51;
frost$core$RegularExpression* _52;
frost$core$Bit _56;
frost$core$Object* _59;
$fn5 _60;
frost$core$String* _61;
frost$core$Matcher* _62;
frost$core$Object* _64;
frost$core$Matcher* _66;
frost$core$Object* _67;
frost$core$Object* _70;
frost$core$Object* _72;
frost$core$Matcher* _78;
frost$core$Bit _79;
bool _80;
frost$core$Matcher* _83;
frost$core$Matcher* _87;
frost$core$Matcher* _89;
frost$core$Object* _90;
frost$core$Object* _95;
frost$core$MutableString* _98;
frost$core$RegularExpression* _99;
frost$core$Bit _103;
frost$core$Object* _106;
$fn6 _107;
frost$core$String* _108;
frost$core$Matcher* _109;
frost$core$Object* _111;
frost$core$Matcher* _113;
frost$core$Object* _114;
frost$core$Object* _117;
frost$core$Object* _119;
frost$core$Matcher* _125;
frost$core$Bit _126;
bool _127;
frost$core$Matcher* _130;
frost$core$Matcher* _134;
frost$core$Matcher* _136;
frost$core$Object* _137;
frost$core$Object* _142;
frost$core$MutableString* _145;
frost$core$Object* _146;
$fn7 _147;
frost$core$String* _148;
frost$core$Object* _150;
frost$core$String* _152;
frost$core$Object* _153;
frost$core$Object* _156;
frost$core$String* _161;
$fn8 _162;
frost$core$String* _163;
frost$core$Object* _165;
frost$core$String* _167;
frost$core$Object* _168;
frost$core$Object* _171;
frost$core$String* _174;
$fn9 _175;
frost$core$Bit _176;
bool _177;
frost$core$String* _180;
frost$core$String* _181;
$fn10 _182;
frost$core$String* _183;
frost$core$Object* _184;
frost$core$String* _186;
frost$core$Object* _187;
frost$core$Object* _190;
frost$core$String* _195;
$fn11 _196;
frost$core$String* _197;
frost$core$Object* _198;
frost$core$String* _200;
frost$core$Object* _201;
frost$core$Object* _204;
frost$core$String* _208;
frost$core$Object* _209;
frost$core$String* _211;
frost$core$Object* _212;
frost$core$String* _215;
frost$core$Object* _216;
frost$core$String* _219;
frost$core$Object* _220;
frost$core$MutableString* _223;
frost$core$Object* _224;
frost$core$String* _227;
frost$core$Object* _228;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:450
_1 = (frost$core$Int) {1u};
ITable* $tmp12 = param1->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp12 = $tmp12->next;
}
_2 = $tmp12->methods[0];
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:451
_15 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
_16 = *(&local0);
_17 = _16 != NULL;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block1; else goto block2;
block2:;
_21 = (frost$core$Int) {451u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _21, &$s14);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:452
_36 = *(&local1);
org$frostlang$frostc$frostdoc$Markdown$outdent$frost$core$MutableString(_36);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:453
_39 = &param0->markdown;
_40 = *_39;
_41 = *(&local1);
_42 = ($fn15) _40->$class->vtable[18];
_42(_40, _41);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:454
_45 = &param0->markdown;
_46 = *_45;
_47 = *(&local1);
_48 = ($fn16) _46->$class->vtable[14];
_48(_46, _47);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:455
_51 = *(&local1);
_52 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_52, &$s17);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:455:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_56 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_59 = ((frost$core$Object*) _51);
_60 = ($fn18) _59->$class->vtable[0];
_61 = _60(_59);
_62 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_52, _61);
*(&local2) = ((frost$core$Matcher*) NULL);
_64 = ((frost$core$Object*) _62);
frost$core$Frost$ref$frost$core$Object$Q(_64);
_66 = *(&local2);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_67);
*(&local2) = _62;
_70 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_70);
_72 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_72);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(_51);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block5;
block5:;
_78 = *(&local2);
_79 = frost$core$Matcher$find$R$frost$core$Bit(_78);
_80 = _79.value;
if (_80) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_83 = *(&local2);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_83, _51, &$s19, _56);
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_87 = *(&local2);
frost$core$Matcher$appendTail$frost$core$MutableString(_87, _51);
_89 = *(&local2);
_90 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_90);
*(&local2) = ((frost$core$Matcher*) NULL);
_95 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_95);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:456
_98 = *(&local1);
_99 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_99, &$s20);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:456:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_103 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_106 = ((frost$core$Object*) _98);
_107 = ($fn21) _106->$class->vtable[0];
_108 = _107(_106);
_109 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_99, _108);
*(&local3) = ((frost$core$Matcher*) NULL);
_111 = ((frost$core$Object*) _109);
frost$core$Frost$ref$frost$core$Object$Q(_111);
_113 = *(&local3);
_114 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_114);
*(&local3) = _109;
_117 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_117);
_119 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_119);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(_98);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block10;
block10:;
_125 = *(&local3);
_126 = frost$core$Matcher$find$R$frost$core$Bit(_125);
_127 = _126.value;
if (_127) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_130 = *(&local3);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_130, _98, &$s22, _103);
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_134 = *(&local3);
frost$core$Matcher$appendTail$frost$core$MutableString(_134, _98);
_136 = *(&local3);
_137 = ((frost$core$Object*) _136);
frost$core$Frost$unref$frost$core$Object$Q(_137);
*(&local3) = ((frost$core$Matcher*) NULL);
_142 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_142);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:457
_145 = *(&local1);
_146 = ((frost$core$Object*) _145);
_147 = ($fn23) _146->$class->vtable[0];
_148 = _147(_146);
*(&local4) = ((frost$core$String*) NULL);
_150 = ((frost$core$Object*) _148);
frost$core$Frost$ref$frost$core$Object$Q(_150);
_152 = *(&local4);
_153 = ((frost$core$Object*) _152);
frost$core$Frost$unref$frost$core$Object$Q(_153);
*(&local4) = _148;
_156 = ((frost$core$Object*) _148);
frost$core$Frost$unref$frost$core$Object$Q(_156);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:458
*(&local5) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:459
_161 = *(&local4);
_162 = ($fn24) param0->$class->vtable[3];
_163 = _162(param0, _161);
*(&local6) = ((frost$core$String*) NULL);
_165 = ((frost$core$Object*) _163);
frost$core$Frost$ref$frost$core$Object$Q(_165);
_167 = *(&local6);
_168 = ((frost$core$Object*) _167);
frost$core$Frost$unref$frost$core$Object$Q(_168);
*(&local6) = _163;
_171 = ((frost$core$Object*) _163);
frost$core$Frost$unref$frost$core$Object$Q(_171);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:460
_174 = *(&local6);
_175 = ($fn25) param0->$class->vtable[4];
_176 = _175(param0, _174);
_177 = _176.value;
if (_177) goto block13; else goto block15;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:461
_180 = *(&local6);
_181 = *(&local4);
_182 = ($fn26) param0->$class->vtable[5];
_183 = _182(param0, _180, _181);
_184 = ((frost$core$Object*) _183);
frost$core$Frost$ref$frost$core$Object$Q(_184);
_186 = *(&local5);
_187 = ((frost$core$Object*) _186);
frost$core$Frost$unref$frost$core$Object$Q(_187);
*(&local5) = _183;
_190 = ((frost$core$Object*) _183);
frost$core$Frost$unref$frost$core$Object$Q(_190);
goto block14;
block15:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:464
_195 = *(&local4);
_196 = ($fn27) param0->$class->vtable[6];
_197 = _196(param0, _195);
_198 = ((frost$core$Object*) _197);
frost$core$Frost$ref$frost$core$Object$Q(_198);
_200 = *(&local5);
_201 = ((frost$core$Object*) _200);
frost$core$Frost$unref$frost$core$Object$Q(_201);
*(&local5) = _197;
_204 = ((frost$core$Object*) _197);
frost$core$Frost$unref$frost$core$Object$Q(_204);
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:466
_208 = *(&local5);
_209 = ((frost$core$Object*) _208);
frost$core$Frost$ref$frost$core$Object$Q(_209);
_211 = *(&local6);
_212 = ((frost$core$Object*) _211);
frost$core$Frost$unref$frost$core$Object$Q(_212);
*(&local6) = ((frost$core$String*) NULL);
_215 = *(&local5);
_216 = ((frost$core$Object*) _215);
frost$core$Frost$unref$frost$core$Object$Q(_216);
*(&local5) = ((frost$core$String*) NULL);
_219 = *(&local4);
_220 = ((frost$core$Object*) _219);
frost$core$Frost$unref$frost$core$Object$Q(_220);
*(&local4) = ((frost$core$String*) NULL);
_223 = *(&local1);
_224 = ((frost$core$Object*) _223);
frost$core$Frost$unref$frost$core$Object$Q(_224);
*(&local1) = ((frost$core$MutableString*) NULL);
_227 = *(&local0);
_228 = ((frost$core$Object*) _227);
frost$core$Frost$unref$frost$core$Object$Q(_228);
*(&local0) = ((frost$core$String*) NULL);
return _208;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$firstLine$frost$core$String$R$frost$core$String(void* rawSelf, frost$core$String* param1) {
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0 = (org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) rawSelf;

frost$core$Int64 _3;
int64_t _6;
int64_t _7;
frost$core$Int _8;
frost$collections$Array* _10;
frost$core$Object* _11;
frost$core$Object* _13;
frost$core$Int _16;
frost$core$Int _18;
int64_t _19;
int64_t _20;
bool _21;
frost$core$Bit _22;
bool _23;
frost$collections$CollectionView* _25;
$fn28 _26;
frost$core$Int _27;
int64_t _28;
int64_t _29;
bool _30;
frost$core$Bit _31;
bool _32;
frost$core$Int _34;
frost$unsafe$NewPointer* _38;
frost$unsafe$NewPointer _39;
int64_t _40;
frost$core$Int64 _41;
int64_t _42;
frost$core$Object* _43;
frost$core$Object* _44;
frost$core$String* _47;
frost$core$Object* _48;
frost$core$Object* _50;
frost$core$Object* _52;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:470
// begin inline call to function frost.core.String.split(delimiter:frost.core.String):frost.collections.Array<frost.core.String> from Markdown.frost:470:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1378
_3 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_6 = _3.value;
_7 = ((int64_t) _6);
_8 = (frost$core$Int) {_7};
_10 = frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT(param1, &$s29, _8);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$ref$frost$core$Object$Q(_11);
_13 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_16 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Markdown.frost:470:36
_18 = (frost$core$Int) {0u};
_19 = _16.value;
_20 = _18.value;
_21 = _19 >= _20;
_22 = (frost$core$Bit) {_21};
_23 = _22.value;
if (_23) goto block6; else goto block5;
block6:;
_25 = ((frost$collections$CollectionView*) _10);
ITable* $tmp30 = _25->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp30 = $tmp30->next;
}
_26 = $tmp30->methods[0];
_27 = _26(_25);
_28 = _16.value;
_29 = _27.value;
_30 = _28 < _29;
_31 = (frost$core$Bit) {_30};
_32 = _31.value;
if (_32) goto block4; else goto block5;
block5:;
_34 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s31, _34, &$s32);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_38 = &_10->data;
_39 = *_38;
_40 = _39.value;
_41 = frost$core$Int64$init$frost$core$Int(_16);
_42 = _41.value;
_43 = ((frost$core$Object**)_40)[_42];
_44 = _43;
frost$core$Frost$ref$frost$core$Object$Q(_44);
_47 = ((frost$core$String*) _43);
_48 = ((frost$core$Object*) _47);
frost$core$Frost$ref$frost$core$Object$Q(_48);
_50 = _43;
frost$core$Frost$unref$frost$core$Object$Q(_50);
_52 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_52);
return _47;

}
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$isLanguageIdentifier$frost$core$String$R$frost$core$Bit(void* rawSelf, frost$core$String* param1) {
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0 = (org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) rawSelf;

frost$core$String* local0 = NULL;
frost$core$Object* _2;
frost$core$String* _4;
frost$core$Object* _5;
frost$core$Bit _9;
bool _10;
frost$core$String* _13;
frost$core$String* _14;
frost$core$Object* _15;
frost$core$String* _17;
frost$core$Object* _18;
frost$core$Object* _21;
frost$core$Object* _23;
frost$core$String* _27;
frost$core$Equatable* _28;
frost$core$Equatable* _29;
$fn33 _30;
frost$core$Bit _31;
frost$core$String* _32;
frost$core$Object* _33;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:474
*(&local0) = ((frost$core$String*) NULL);
_2 = ((frost$core$Object*) &$s34);
frost$core$Frost$ref$frost$core$Object$Q(_2);
_4 = *(&local0);
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
*(&local0) = &$s35;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:475
_9 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param1, &$s36);
_10 = _9.value;
if (_10) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:476
_13 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(param1, &$s37, &$s38);
_14 = frost$core$String$get_trimmed$R$frost$core$String(_13);
_15 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_15);
_17 = *(&local0);
_18 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_18);
*(&local0) = _14;
_21 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_23 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_23);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:478
_27 = *(&local0);
_28 = ((frost$core$Equatable*) _27);
_29 = ((frost$core$Equatable*) &$s39);
ITable* $tmp40 = _28->$class->itable;
while ($tmp40->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp40 = $tmp40->next;
}
_30 = $tmp40->methods[1];
_31 = _30(_28, _29);
_32 = *(&local0);
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
*(&local0) = ((frost$core$String*) NULL);
return _31;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$languageBlock$frost$core$String$frost$core$String$R$frost$core$String(void* rawSelf, frost$core$String* param1, frost$core$String* param2) {
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0 = (org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) rawSelf;

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* _1;
frost$core$String* _2;
frost$core$Object* _4;
frost$core$String* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$core$Object* _12;
frost$core$String* _15;
frost$core$String* _16;
frost$core$Object* _18;
frost$core$String* _20;
frost$core$Object* _21;
frost$core$Object* _24;
frost$core$Object* _26;
frost$core$String* _29;
frost$core$String* _30;
frost$core$String* _31;
frost$core$String* _32;
frost$core$String* _33;
frost$core$String* _34;
frost$core$Object* _35;
frost$core$Object* _37;
frost$core$Object* _39;
frost$core$Object* _41;
frost$core$Object* _43;
frost$core$String* _45;
frost$core$Object* _46;
frost$core$String* _49;
frost$core$Object* _50;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:482
_1 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(param1, &$s41, &$s42);
_2 = frost$core$String$get_trimmed$R$frost$core$String(_1);
*(&local0) = ((frost$core$String*) NULL);
_4 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _2;
_10 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_10);
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:483
_15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param1, &$s43);
_16 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(param2, _15, &$s44);
*(&local1) = ((frost$core$String*) NULL);
_18 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = *(&local1);
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
*(&local1) = _16;
_24 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_26);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:484
_29 = *(&local0);
_30 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s45, _29);
_31 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_30, &$s46);
_32 = *(&local1);
_33 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_31, _32);
_34 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_33, &$s47);
_35 = ((frost$core$Object*) _34);
frost$core$Frost$ref$frost$core$Object$Q(_35);
_37 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_37);
_39 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_39);
_41 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = *(&local1);
_46 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_46);
*(&local1) = ((frost$core$String*) NULL);
_49 = *(&local0);
_50 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_50);
*(&local0) = ((frost$core$String*) NULL);
return _34;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$genericCodeBlock$frost$core$String$R$frost$core$String(void* rawSelf, frost$core$String* param1) {
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0 = (org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) rawSelf;

frost$core$String* _1;
frost$core$String* _2;
frost$core$Object* _3;
frost$core$Object* _5;
frost$core$Object* _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:488
_1 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s48, param1);
_2 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_1, &$s49);
_3 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_7);
return _2;

}
void org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$cleanup(void* rawSelf) {
org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* param0 = (org$frostlang$frostc$frostdoc$Markdown$CodeReplacer*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:440
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->markdown;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}

