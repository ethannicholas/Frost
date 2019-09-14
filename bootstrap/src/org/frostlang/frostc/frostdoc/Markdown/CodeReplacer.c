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
org$frostlang$frostc$frostdoc$Markdown** _40;
org$frostlang$frostc$frostdoc$Markdown* _41;
frost$core$MutableString* _42;
$fn3 _43;
org$frostlang$frostc$frostdoc$Markdown** _46;
org$frostlang$frostc$frostdoc$Markdown* _47;
frost$core$MutableString* _48;
$fn4 _49;
frost$core$MutableString* _52;
frost$core$RegularExpression* _53;
frost$core$Bit _57;
frost$core$Object* _60;
$fn5 _61;
frost$core$String* _62;
frost$core$Matcher* _63;
frost$core$Object* _65;
frost$core$Matcher* _67;
frost$core$Object* _68;
frost$core$Object* _71;
frost$core$Object* _73;
frost$core$Matcher* _79;
frost$core$Bit _80;
bool _81;
frost$core$Matcher* _84;
frost$core$Matcher* _88;
frost$core$Matcher* _90;
frost$core$Object* _91;
frost$core$Object* _96;
frost$core$MutableString* _99;
frost$core$RegularExpression* _100;
frost$core$Bit _104;
frost$core$Object* _107;
$fn6 _108;
frost$core$String* _109;
frost$core$Matcher* _110;
frost$core$Object* _112;
frost$core$Matcher* _114;
frost$core$Object* _115;
frost$core$Object* _118;
frost$core$Object* _120;
frost$core$Matcher* _126;
frost$core$Bit _127;
bool _128;
frost$core$Matcher* _131;
frost$core$Matcher* _135;
frost$core$Matcher* _137;
frost$core$Object* _138;
frost$core$Object* _143;
frost$core$MutableString* _146;
frost$core$Object* _147;
$fn7 _148;
frost$core$String* _149;
frost$core$Object* _151;
frost$core$String* _153;
frost$core$Object* _154;
frost$core$Object* _157;
frost$core$String* _162;
$fn8 _163;
frost$core$String* _164;
frost$core$Object* _166;
frost$core$String* _168;
frost$core$Object* _169;
frost$core$Object* _172;
frost$core$String* _175;
$fn9 _176;
frost$core$Bit _177;
bool _178;
frost$core$String* _181;
frost$core$String* _182;
$fn10 _183;
frost$core$String* _184;
frost$core$Object* _185;
frost$core$String* _187;
frost$core$Object* _188;
frost$core$Object* _191;
frost$core$String* _196;
$fn11 _197;
frost$core$String* _198;
frost$core$Object* _199;
frost$core$String* _201;
frost$core$Object* _202;
frost$core$Object* _205;
frost$core$String* _209;
frost$core$Object* _210;
frost$core$String* _212;
frost$core$Object* _213;
frost$core$String* _216;
frost$core$Object* _217;
frost$core$String* _220;
frost$core$Object* _221;
frost$core$MutableString* _224;
frost$core$Object* _225;
frost$core$String* _228;
frost$core$Object* _229;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:450
_1 = param1;
_2 = (frost$core$Int) {1u};
ITable* $tmp12 = _1->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp12 = $tmp12->next;
}
_3 = $tmp12->methods[0];
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:451
_16 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
_17 = *(&local0);
_18 = _17 != NULL;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block1; else goto block2;
block2:;
_22 = (frost$core$Int) {451u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _22, &$s14);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:452
_37 = *(&local1);
org$frostlang$frostc$frostdoc$Markdown$outdent$frost$core$MutableString(_37);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:453
_40 = &param0->markdown;
_41 = *_40;
_42 = *(&local1);
_43 = ($fn15) _41->$class->vtable[18];
_43(_41, _42);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:454
_46 = &param0->markdown;
_47 = *_46;
_48 = *(&local1);
_49 = ($fn16) _47->$class->vtable[14];
_49(_47, _48);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:455
_52 = *(&local1);
_53 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_53, &$s17);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:455:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_57 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_60 = ((frost$core$Object*) _52);
_61 = ($fn18) _60->$class->vtable[0];
_62 = _61(_60);
_63 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_53, _62);
*(&local2) = ((frost$core$Matcher*) NULL);
_65 = ((frost$core$Object*) _63);
frost$core$Frost$ref$frost$core$Object$Q(_65);
_67 = *(&local2);
_68 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_68);
*(&local2) = _63;
_71 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_71);
_73 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_73);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(_52);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block5;
block5:;
_79 = *(&local2);
_80 = frost$core$Matcher$find$R$frost$core$Bit(_79);
_81 = _80.value;
if (_81) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_84 = *(&local2);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_84, _52, &$s19, _57);
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_88 = *(&local2);
frost$core$Matcher$appendTail$frost$core$MutableString(_88, _52);
_90 = *(&local2);
_91 = ((frost$core$Object*) _90);
frost$core$Frost$unref$frost$core$Object$Q(_91);
*(&local2) = ((frost$core$Matcher*) NULL);
_96 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_96);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:456
_99 = *(&local1);
_100 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_100, &$s20);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:456:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_104 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_107 = ((frost$core$Object*) _99);
_108 = ($fn21) _107->$class->vtable[0];
_109 = _108(_107);
_110 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_100, _109);
*(&local3) = ((frost$core$Matcher*) NULL);
_112 = ((frost$core$Object*) _110);
frost$core$Frost$ref$frost$core$Object$Q(_112);
_114 = *(&local3);
_115 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_115);
*(&local3) = _110;
_118 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_118);
_120 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_120);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(_99);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block10;
block10:;
_126 = *(&local3);
_127 = frost$core$Matcher$find$R$frost$core$Bit(_126);
_128 = _127.value;
if (_128) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_131 = *(&local3);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_131, _99, &$s22, _104);
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_135 = *(&local3);
frost$core$Matcher$appendTail$frost$core$MutableString(_135, _99);
_137 = *(&local3);
_138 = ((frost$core$Object*) _137);
frost$core$Frost$unref$frost$core$Object$Q(_138);
*(&local3) = ((frost$core$Matcher*) NULL);
_143 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_143);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:457
_146 = *(&local1);
_147 = ((frost$core$Object*) _146);
_148 = ($fn23) _147->$class->vtable[0];
_149 = _148(_147);
*(&local4) = ((frost$core$String*) NULL);
_151 = ((frost$core$Object*) _149);
frost$core$Frost$ref$frost$core$Object$Q(_151);
_153 = *(&local4);
_154 = ((frost$core$Object*) _153);
frost$core$Frost$unref$frost$core$Object$Q(_154);
*(&local4) = _149;
_157 = ((frost$core$Object*) _149);
frost$core$Frost$unref$frost$core$Object$Q(_157);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:458
*(&local5) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:459
_162 = *(&local4);
_163 = ($fn24) param0->$class->vtable[3];
_164 = _163(param0, _162);
*(&local6) = ((frost$core$String*) NULL);
_166 = ((frost$core$Object*) _164);
frost$core$Frost$ref$frost$core$Object$Q(_166);
_168 = *(&local6);
_169 = ((frost$core$Object*) _168);
frost$core$Frost$unref$frost$core$Object$Q(_169);
*(&local6) = _164;
_172 = ((frost$core$Object*) _164);
frost$core$Frost$unref$frost$core$Object$Q(_172);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:460
_175 = *(&local6);
_176 = ($fn25) param0->$class->vtable[4];
_177 = _176(param0, _175);
_178 = _177.value;
if (_178) goto block13; else goto block15;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:461
_181 = *(&local6);
_182 = *(&local4);
_183 = ($fn26) param0->$class->vtable[5];
_184 = _183(param0, _181, _182);
_185 = ((frost$core$Object*) _184);
frost$core$Frost$ref$frost$core$Object$Q(_185);
_187 = *(&local5);
_188 = ((frost$core$Object*) _187);
frost$core$Frost$unref$frost$core$Object$Q(_188);
*(&local5) = _184;
_191 = ((frost$core$Object*) _184);
frost$core$Frost$unref$frost$core$Object$Q(_191);
goto block14;
block15:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:464
_196 = *(&local4);
_197 = ($fn27) param0->$class->vtable[6];
_198 = _197(param0, _196);
_199 = ((frost$core$Object*) _198);
frost$core$Frost$ref$frost$core$Object$Q(_199);
_201 = *(&local5);
_202 = ((frost$core$Object*) _201);
frost$core$Frost$unref$frost$core$Object$Q(_202);
*(&local5) = _198;
_205 = ((frost$core$Object*) _198);
frost$core$Frost$unref$frost$core$Object$Q(_205);
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:466
_209 = *(&local5);
_210 = ((frost$core$Object*) _209);
frost$core$Frost$ref$frost$core$Object$Q(_210);
_212 = *(&local6);
_213 = ((frost$core$Object*) _212);
frost$core$Frost$unref$frost$core$Object$Q(_213);
*(&local6) = ((frost$core$String*) NULL);
_216 = *(&local5);
_217 = ((frost$core$Object*) _216);
frost$core$Frost$unref$frost$core$Object$Q(_217);
*(&local5) = ((frost$core$String*) NULL);
_220 = *(&local4);
_221 = ((frost$core$Object*) _220);
frost$core$Frost$unref$frost$core$Object$Q(_221);
*(&local4) = ((frost$core$String*) NULL);
_224 = *(&local1);
_225 = ((frost$core$Object*) _224);
frost$core$Frost$unref$frost$core$Object$Q(_225);
*(&local1) = ((frost$core$MutableString*) NULL);
_228 = *(&local0);
_229 = ((frost$core$Object*) _228);
frost$core$Frost$unref$frost$core$Object$Q(_229);
*(&local0) = ((frost$core$String*) NULL);
return _209;

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
frost$collections$Array* _16;
frost$core$Int _17;
frost$core$Int _19;
int64_t _20;
int64_t _21;
bool _22;
frost$core$Bit _23;
bool _24;
frost$collections$CollectionView* _26;
$fn28 _27;
frost$core$Int _28;
int64_t _29;
int64_t _30;
bool _31;
frost$core$Bit _32;
bool _33;
frost$core$Int _35;
frost$core$Object*** _39;
frost$core$Object** _40;
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
_16 = _10;
_17 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Markdown.frost:470:36
_19 = (frost$core$Int) {0u};
_20 = _17.value;
_21 = _19.value;
_22 = _20 >= _21;
_23 = (frost$core$Bit) {_22};
_24 = _23.value;
if (_24) goto block6; else goto block5;
block6:;
_26 = ((frost$collections$CollectionView*) _16);
ITable* $tmp30 = _26->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp30 = $tmp30->next;
}
_27 = $tmp30->methods[0];
_28 = _27(_26);
_29 = _17.value;
_30 = _28.value;
_31 = _29 < _30;
_32 = (frost$core$Bit) {_31};
_33 = _32.value;
if (_33) goto block4; else goto block5;
block5:;
_35 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s31, _35, &$s32);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_39 = &_16->data;
_40 = *_39;
_41 = frost$core$Int64$init$frost$core$Int(_17);
_42 = _41.value;
_43 = _40[_42];
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
frost$core$Equatable* _30;
$fn33 _31;
frost$core$Bit _32;
frost$core$String* _33;
frost$core$Object* _34;
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
_29 = _28;
_30 = ((frost$core$Equatable*) &$s39);
ITable* $tmp40 = _29->$class->itable;
while ($tmp40->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp40 = $tmp40->next;
}
_31 = $tmp40->methods[1];
_32 = _31(_29, _30);
_33 = *(&local0);
_34 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_34);
*(&local0) = ((frost$core$String*) NULL);
return _32;

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

