#include "org/frostlang/frostc/frostdoc/Markdown/_Closure9.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/MutableString.h"
#include "frost/core/Matcher.h"
#include "frost/core/RegularExpression.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/core/MutableMethod.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure9$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure9$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure9$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous7$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object} };

typedef frost$core$Object* (*$fn2)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn8)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$String* (*$fn9)(frost$core$Object*);
typedef frost$core$String* (*$fn10)(frost$core$Object*);
typedef void (*$fn11)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn12)(frost$core$Object*);
typedef frost$core$String* (*$fn17)(frost$core$Object*);
typedef frost$core$String* (*$fn20)(frost$core$Object*);
typedef void (*$fn22)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn26)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x39", 48, 5457362585194763292, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e\x20\x20", 3, -4419926680519616343, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2a\x3e\x5b\x20\x5c\x74\x5d\x3f", 18, -8235597953229802763, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2b\x24", 12, -1139377895399220983, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e", 1, -5808496400014358015, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20", 2, 560038479724991597, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x73\x2a\x3c\x70\x72\x65\x3e\x2e\x2a\x3f\x3c\x2f\x70\x72\x65\x3e\x29", 19, -4411630579144895119, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65\x3e\x0a", 13, 1814359033806142976, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x3c\x2f\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65\x3e\x0a\x0a", 16, -2722217356043136765, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure9$init$org$frostlang$frostc$frostdoc$Markdown(void* rawSelf, org$frostlang$frostc$frostdoc$Markdown* param1) {
org$frostlang$frostc$frostdoc$Markdown$_Closure9* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure9*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
org$frostlang$frostc$frostdoc$Markdown** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:408
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
void org$frostlang$frostc$frostdoc$Markdown$_Closure9$cleanup(void* rawSelf) {
org$frostlang$frostc$frostdoc$Markdown$_Closure9* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure9*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:408
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
frost$core$Object* org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous33$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object(frost$collections$ListView* param0) {

frost$collections$ListView* _1;
frost$core$Int _2;
$fn2 _3;
frost$core$Object* _4;
frost$core$String* _5;
bool _6;
frost$core$Bit _7;
bool _8;
frost$core$Int _10;
frost$core$String* _13;
frost$core$String* _14;
frost$core$Object* _15;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Object* _20;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:416
_1 = param0;
_2 = (frost$core$Int) {1u};
ITable* $tmp3 = _1->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp3 = $tmp3->next;
}
_3 = $tmp3->methods[0];
_4 = _3(_1, _2);
_5 = ((frost$core$String*) _4);
_6 = _5 != NULL;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block1; else goto block2;
block2:;
_10 = (frost$core$Int) {416u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4, _10, &$s5);
abort(); // unreachable
block1:;
_13 = _5;
_14 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(_13, &$s6, &$s7);
_15 = ((frost$core$Object*) _14);
_16 = _15;
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_20 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_20);
return _15;

}
frost$core$Object* org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous7$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object(void* rawSelf, frost$collections$ListView* param1) {
org$frostlang$frostc$frostdoc$Markdown$_Closure9* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure9*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$Matcher* local2 = NULL;
frost$core$RegularExpression* local3 = NULL;
frost$core$MutableString* _1;
frost$collections$ListView* _2;
frost$core$Int _3;
$fn8 _4;
frost$core$Object* _5;
frost$core$String* _6;
bool _7;
frost$core$Bit _8;
bool _9;
frost$core$Int _11;
frost$core$String* _14;
frost$core$Object* _17;
frost$core$MutableString* _19;
frost$core$Object* _20;
frost$core$Object* _23;
frost$core$Object* _25;
frost$core$MutableString* _28;
frost$core$RegularExpression* _29;
frost$core$Bit _33;
frost$core$Object* _36;
$fn9 _37;
frost$core$String* _38;
frost$core$Matcher* _39;
frost$core$Object* _41;
frost$core$Matcher* _43;
frost$core$Object* _44;
frost$core$Object* _47;
frost$core$Object* _49;
frost$core$Matcher* _55;
frost$core$Bit _56;
bool _57;
frost$core$Matcher* _60;
frost$core$Matcher* _64;
frost$core$Matcher* _66;
frost$core$Object* _67;
frost$core$Object* _72;
frost$core$MutableString* _75;
frost$core$RegularExpression* _76;
frost$core$Bit _80;
frost$core$Object* _83;
$fn10 _84;
frost$core$String* _85;
frost$core$Matcher* _86;
frost$core$Object* _88;
frost$core$Matcher* _90;
frost$core$Object* _91;
frost$core$Object* _94;
frost$core$Object* _96;
frost$core$Matcher* _102;
frost$core$Bit _103;
bool _104;
frost$core$Matcher* _107;
frost$core$Matcher* _111;
frost$core$Matcher* _113;
frost$core$Object* _114;
frost$core$Object* _119;
org$frostlang$frostc$frostdoc$Markdown** _122;
org$frostlang$frostc$frostdoc$Markdown* _123;
frost$core$MutableString* _124;
$fn11 _125;
frost$core$MutableString* _128;
frost$core$RegularExpression* _131;
frost$core$Int _132;
frost$core$Object* _135;
frost$core$RegularExpression* _137;
frost$core$Object* _138;
frost$core$Object* _141;
frost$core$MutableString* _144;
frost$core$RegularExpression* _145;
frost$core$Int8* _146;
frost$core$Method* _147;
frost$core$Int8** _150;
frost$core$Object* _153;
frost$core$Immutable** _155;
frost$core$Immutable* _156;
frost$core$Object* _157;
frost$core$Immutable** _159;
frost$core$Method* _162;
frost$core$MutableMethod* _163;
frost$core$Object* _165;
frost$core$MutableString* _168;
frost$core$Object* _169;
$fn12 _172;
frost$core$String* _173;
frost$core$String* _174;
frost$core$Object* _175;
frost$core$Object* _177;
frost$core$Object* _179;
frost$core$String* _182;
frost$core$Object* _183;
frost$core$Object* _184;
frost$core$Object* _186;
frost$core$Object* _188;
frost$core$RegularExpression* _190;
frost$core$Object* _191;
frost$core$MutableString* _194;
frost$core$Object* _195;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:409
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
_2 = param1;
_3 = (frost$core$Int) {1u};
ITable* $tmp13 = _2->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp13 = $tmp13->next;
}
_4 = $tmp13->methods[0];
_5 = _4(_2, _3);
_6 = ((frost$core$String*) _5);
_7 = _6 != NULL;
_8 = (frost$core$Bit) {_7};
_9 = _8.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {409u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _11, &$s15);
abort(); // unreachable
block1:;
_14 = _6;
frost$core$MutableString$init$frost$core$String(_1, _14);
*(&local0) = ((frost$core$MutableString*) NULL);
_17 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = *(&local0);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local0) = _1;
_23 = _5;
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_25);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:410
_28 = *(&local0);
_29 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_29, &$s16);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:410:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_33 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_36 = ((frost$core$Object*) _28);
_37 = ($fn17) _36->$class->vtable[0];
_38 = _37(_36);
_39 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_29, _38);
*(&local1) = ((frost$core$Matcher*) NULL);
_41 = ((frost$core$Object*) _39);
frost$core$Frost$ref$frost$core$Object$Q(_41);
_43 = *(&local1);
_44 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_44);
*(&local1) = _39;
_47 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_47);
_49 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_49);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(_28);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block5;
block5:;
_55 = *(&local1);
_56 = frost$core$Matcher$find$R$frost$core$Bit(_55);
_57 = _56.value;
if (_57) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_60 = *(&local1);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_60, _28, &$s18, _33);
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_64 = *(&local1);
frost$core$Matcher$appendTail$frost$core$MutableString(_64, _28);
_66 = *(&local1);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_67);
*(&local1) = ((frost$core$Matcher*) NULL);
_72 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_72);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:411
_75 = *(&local0);
_76 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_76, &$s19);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:411:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_80 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_83 = ((frost$core$Object*) _75);
_84 = ($fn20) _83->$class->vtable[0];
_85 = _84(_83);
_86 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_76, _85);
*(&local2) = ((frost$core$Matcher*) NULL);
_88 = ((frost$core$Object*) _86);
frost$core$Frost$ref$frost$core$Object$Q(_88);
_90 = *(&local2);
_91 = ((frost$core$Object*) _90);
frost$core$Frost$unref$frost$core$Object$Q(_91);
*(&local2) = _86;
_94 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_94);
_96 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_96);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(_75);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block10;
block10:;
_102 = *(&local2);
_103 = frost$core$Matcher$find$R$frost$core$Bit(_102);
_104 = _103.value;
if (_104) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_107 = *(&local2);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_107, _75, &$s21, _80);
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_111 = *(&local2);
frost$core$Matcher$appendTail$frost$core$MutableString(_111, _75);
_113 = *(&local2);
_114 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_114);
*(&local2) = ((frost$core$Matcher*) NULL);
_119 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_119);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:412
_122 = &param0->$self;
_123 = *_122;
_124 = *(&local0);
_125 = ($fn22) _123->$class->vtable[6];
_125(_123, _124);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:413
_128 = *(&local0);
frost$core$MutableString$replace$frost$core$String$frost$core$String(_128, &$s23, &$s24);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:415
_131 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
_132 = (frost$core$Int) {4u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int(_131, &$s25, _132);
*(&local3) = ((frost$core$RegularExpression*) NULL);
_135 = ((frost$core$Object*) _131);
frost$core$Frost$ref$frost$core$Object$Q(_135);
_137 = *(&local3);
_138 = ((frost$core$Object*) _137);
frost$core$Frost$unref$frost$core$Object$Q(_138);
*(&local3) = _131;
_141 = ((frost$core$Object*) _131);
frost$core$Frost$unref$frost$core$Object$Q(_141);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:416
_144 = *(&local0);
_145 = *(&local3);
_146 = ((frost$core$Int8*) org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous33$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object);
_147 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Markdown.frost:416:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
_150 = &_147->pointer;
*_150 = _146;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
_153 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_153);
_155 = &_147->target;
_156 = *_155;
_157 = ((frost$core$Object*) _156);
frost$core$Frost$unref$frost$core$Object$Q(_157);
_159 = &_147->target;
*_159 = ((frost$core$Immutable*) NULL);
_162 = _147;
_163 = ((frost$core$MutableMethod*) _162);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(_144, _145, _163);
_165 = ((frost$core$Object*) _147);
frost$core$Frost$unref$frost$core$Object$Q(_165);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:417
_168 = *(&local0);
_169 = ((frost$core$Object*) _168);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:417:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_172 = ($fn26) _169->$class->vtable[0];
_173 = _172(_169);
_174 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s27, _173);
_175 = ((frost$core$Object*) _174);
frost$core$Frost$ref$frost$core$Object$Q(_175);
_177 = ((frost$core$Object*) _174);
frost$core$Frost$unref$frost$core$Object$Q(_177);
_179 = ((frost$core$Object*) _173);
frost$core$Frost$unref$frost$core$Object$Q(_179);
_182 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_174, &$s28);
_183 = ((frost$core$Object*) _182);
_184 = _183;
frost$core$Frost$ref$frost$core$Object$Q(_184);
_186 = ((frost$core$Object*) _182);
frost$core$Frost$unref$frost$core$Object$Q(_186);
_188 = ((frost$core$Object*) _174);
frost$core$Frost$unref$frost$core$Object$Q(_188);
_190 = *(&local3);
_191 = ((frost$core$Object*) _190);
frost$core$Frost$unref$frost$core$Object$Q(_191);
*(&local3) = ((frost$core$RegularExpression*) NULL);
_194 = *(&local0);
_195 = ((frost$core$Object*) _194);
frost$core$Frost$unref$frost$core$Object$Q(_195);
*(&local0) = ((frost$core$MutableString*) NULL);
return _183;

}

