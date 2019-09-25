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

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

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

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x39", 48, 5457362585194763292, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x5e\x20\x20", 3, -4419926680519616343, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2a\x3e\x5b\x20\x5c\x74\x5d\x3f", 18, -8235597953229802763, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2b\x24", 12, -1139377895399220983, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x5e", 1, -5808496400014358015, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x20\x20", 2, 560038479724991597, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x28\x5c\x73\x2a\x3c\x70\x72\x65\x3e\x2e\x2a\x3f\x3c\x2f\x70\x72\x65\x3e\x29", 19, -4411630579144895119, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3c\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65\x3e\x0a", 13, 1814359033806142976, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a\x3c\x2f\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65\x3e\x0a\x0a", 16, -2722217356043136765, NULL };

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

frost$core$Int _1;
$fn2 _2;
frost$core$Object* _3;
frost$core$String* _4;
bool _5;
frost$core$Bit _6;
bool _7;
frost$core$Int _9;
frost$core$String* _12;
frost$core$String* _13;
frost$core$Object* _14;
frost$core$Object* _15;
frost$core$Object* _17;
frost$core$Object* _19;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:416
_1 = (frost$core$Int) {1u};
ITable* $tmp3 = param0->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp3 = $tmp3->next;
}
_2 = $tmp3->methods[0];
_3 = _2(param0, _1);
_4 = ((frost$core$String*) _3);
_5 = _4 != NULL;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block2:;
_9 = (frost$core$Int) {416u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4, _9, &$s5);
abort(); // unreachable
block1:;
_12 = _4;
_13 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(_12, &$s6, &$s7);
_14 = ((frost$core$Object*) _13);
_15 = _14;
frost$core$Frost$ref$frost$core$Object$Q(_15);
_17 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = _3;
frost$core$Frost$unref$frost$core$Object$Q(_19);
return _14;

}
frost$core$Object* org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous7$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object(void* rawSelf, frost$collections$ListView* param1) {
org$frostlang$frostc$frostdoc$Markdown$_Closure9* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure9*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$Matcher* local2 = NULL;
frost$core$RegularExpression* local3 = NULL;
frost$core$MutableString* _1;
frost$core$Int _2;
$fn8 _3;
frost$core$Object* _4;
frost$core$String* _5;
bool _6;
frost$core$Bit _7;
bool _8;
frost$core$Int _10;
frost$core$String* _13;
frost$core$Object* _16;
frost$core$MutableString* _18;
frost$core$Object* _19;
frost$core$Object* _22;
frost$core$Object* _24;
frost$core$MutableString* _27;
frost$core$RegularExpression* _28;
frost$core$Bit _32;
frost$core$Object* _35;
$fn9 _36;
frost$core$String* _37;
frost$core$Matcher* _38;
frost$core$Object* _40;
frost$core$Matcher* _42;
frost$core$Object* _43;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Matcher* _54;
frost$core$Bit _55;
bool _56;
frost$core$Matcher* _59;
frost$core$Matcher* _63;
frost$core$Matcher* _65;
frost$core$Object* _66;
frost$core$Object* _71;
frost$core$MutableString* _74;
frost$core$RegularExpression* _75;
frost$core$Bit _79;
frost$core$Object* _82;
$fn10 _83;
frost$core$String* _84;
frost$core$Matcher* _85;
frost$core$Object* _87;
frost$core$Matcher* _89;
frost$core$Object* _90;
frost$core$Object* _93;
frost$core$Object* _95;
frost$core$Matcher* _101;
frost$core$Bit _102;
bool _103;
frost$core$Matcher* _106;
frost$core$Matcher* _110;
frost$core$Matcher* _112;
frost$core$Object* _113;
frost$core$Object* _118;
org$frostlang$frostc$frostdoc$Markdown** _121;
org$frostlang$frostc$frostdoc$Markdown* _122;
frost$core$MutableString* _123;
$fn11 _124;
frost$core$MutableString* _127;
frost$core$RegularExpression* _130;
frost$core$Int _131;
frost$core$Object* _134;
frost$core$RegularExpression* _136;
frost$core$Object* _137;
frost$core$Object* _140;
frost$core$MutableString* _143;
frost$core$RegularExpression* _144;
int64_t _145;
frost$core$Method* _146;
int64_t* _149;
frost$core$Object* _152;
frost$core$Immutable** _154;
frost$core$Immutable* _155;
frost$core$Object* _156;
frost$core$Immutable** _158;
frost$core$Method* _161;
frost$core$MutableMethod* _162;
frost$core$Object* _164;
frost$core$MutableString* _167;
frost$core$Object* _168;
$fn12 _171;
frost$core$String* _172;
frost$core$String* _173;
frost$core$Object* _174;
frost$core$Object* _176;
frost$core$Object* _178;
frost$core$String* _181;
frost$core$Object* _182;
frost$core$Object* _183;
frost$core$Object* _185;
frost$core$Object* _187;
frost$core$RegularExpression* _189;
frost$core$Object* _190;
frost$core$MutableString* _193;
frost$core$Object* _194;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:409
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
_2 = (frost$core$Int) {1u};
ITable* $tmp13 = param1->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp13 = $tmp13->next;
}
_3 = $tmp13->methods[0];
_4 = _3(param1, _2);
_5 = ((frost$core$String*) _4);
_6 = _5 != NULL;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block1; else goto block2;
block2:;
_10 = (frost$core$Int) {409u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _10, &$s15);
abort(); // unreachable
block1:;
_13 = _5;
frost$core$MutableString$init$frost$core$String(_1, _13);
*(&local0) = ((frost$core$MutableString*) NULL);
_16 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _1;
_22 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_24);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:410
_27 = *(&local0);
_28 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_28, &$s16);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:410:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_32 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_35 = ((frost$core$Object*) _27);
_36 = ($fn17) _35->$class->vtable[0];
_37 = _36(_35);
_38 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_28, _37);
*(&local1) = ((frost$core$Matcher*) NULL);
_40 = ((frost$core$Object*) _38);
frost$core$Frost$ref$frost$core$Object$Q(_40);
_42 = *(&local1);
_43 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_43);
*(&local1) = _38;
_46 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_46);
_48 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_48);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(_27);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block5;
block5:;
_54 = *(&local1);
_55 = frost$core$Matcher$find$R$frost$core$Bit(_54);
_56 = _55.value;
if (_56) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_59 = *(&local1);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_59, _27, &$s18, _32);
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_63 = *(&local1);
frost$core$Matcher$appendTail$frost$core$MutableString(_63, _27);
_65 = *(&local1);
_66 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_66);
*(&local1) = ((frost$core$Matcher*) NULL);
_71 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_71);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:411
_74 = *(&local0);
_75 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_75, &$s19);
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String) from Markdown.frost:411:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:401
_79 = (frost$core$Bit) {true};
// begin inline call to method frost.core.MutableString.replace(search:frost.core.RegularExpression, replacement:frost.core.String, allowGroupReferences:frost.core.Bit) from MutableString.frost:401:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:406
_82 = ((frost$core$Object*) _74);
_83 = ($fn20) _82->$class->vtable[0];
_84 = _83(_82);
_85 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_75, _84);
*(&local2) = ((frost$core$Matcher*) NULL);
_87 = ((frost$core$Object*) _85);
frost$core$Frost$ref$frost$core$Object$Q(_87);
_89 = *(&local2);
_90 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_90);
*(&local2) = _85;
_93 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_93);
_95 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_95);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:407
frost$core$MutableString$clear(_74);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:408
goto block10;
block10:;
_101 = *(&local2);
_102 = frost$core$Matcher$find$R$frost$core$Bit(_101);
_103 = _102.value;
if (_103) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:409
_106 = *(&local2);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(_106, _74, &$s21, _79);
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:411
_110 = *(&local2);
frost$core$Matcher$appendTail$frost$core$MutableString(_110, _74);
_112 = *(&local2);
_113 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_113);
*(&local2) = ((frost$core$Matcher*) NULL);
_118 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_118);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:412
_121 = &param0->$self;
_122 = *_121;
_123 = *(&local0);
_124 = ($fn22) _122->$class->vtable[6];
_124(_122, _123);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:413
_127 = *(&local0);
frost$core$MutableString$replace$frost$core$String$frost$core$String(_127, &$s23, &$s24);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:415
_130 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
_131 = (frost$core$Int) {4u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int(_130, &$s25, _131);
*(&local3) = ((frost$core$RegularExpression*) NULL);
_134 = ((frost$core$Object*) _130);
frost$core$Frost$ref$frost$core$Object$Q(_134);
_136 = *(&local3);
_137 = ((frost$core$Object*) _136);
frost$core$Frost$unref$frost$core$Object$Q(_137);
*(&local3) = _130;
_140 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_140);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:416
_143 = *(&local0);
_144 = *(&local3);
_145 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$frostdoc$Markdown$_Closure9$$anonymous33$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object).value;
_146 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:builtin_int, target:frost.core.Immutable?) from Markdown.frost:416:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:35
_149 = &_146->pointer;
*_149 = _145;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:36
_152 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_152);
_154 = &_146->target;
_155 = *_154;
_156 = ((frost$core$Object*) _155);
frost$core$Frost$unref$frost$core$Object$Q(_156);
_158 = &_146->target;
*_158 = ((frost$core$Immutable*) NULL);
_161 = _146;
_162 = ((frost$core$MutableMethod*) _161);
frost$core$MutableString$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP(_143, _144, _162);
_164 = ((frost$core$Object*) _146);
frost$core$Frost$unref$frost$core$Object$Q(_164);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:417
_167 = *(&local0);
_168 = ((frost$core$Object*) _167);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:417:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_171 = ($fn26) _168->$class->vtable[0];
_172 = _171(_168);
_173 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s27, _172);
_174 = ((frost$core$Object*) _173);
frost$core$Frost$ref$frost$core$Object$Q(_174);
_176 = ((frost$core$Object*) _173);
frost$core$Frost$unref$frost$core$Object$Q(_176);
_178 = ((frost$core$Object*) _172);
frost$core$Frost$unref$frost$core$Object$Q(_178);
_181 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_173, &$s28);
_182 = ((frost$core$Object*) _181);
_183 = _182;
frost$core$Frost$ref$frost$core$Object$Q(_183);
_185 = ((frost$core$Object*) _181);
frost$core$Frost$unref$frost$core$Object$Q(_185);
_187 = ((frost$core$Object*) _173);
frost$core$Frost$unref$frost$core$Object$Q(_187);
_189 = *(&local3);
_190 = ((frost$core$Object*) _189);
frost$core$Frost$unref$frost$core$Object$Q(_190);
*(&local3) = ((frost$core$RegularExpression*) NULL);
_193 = *(&local0);
_194 = ((frost$core$Object*) _193);
frost$core$Frost$unref$frost$core$Object$Q(_194);
*(&local0) = ((frost$core$MutableString*) NULL);
return _182;

}

