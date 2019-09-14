#include "org/frostlang/frostc/frostdoc/Markdown/_Closure14.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/RegularExpression.h"
#include "frost/core/Matcher.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure14$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure14$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure14$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure14$$anonymous13$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object} };

typedef frost$core$Object* (*$fn2)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn3)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$String* (*$fn4)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$String*);
typedef frost$core$String* (*$fn20)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31\x34", 49, -4907400499225924480, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x2a\x2b\x2d\x5d", 5, -9070757250471388869, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6c", 2, 631724438846900500, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6c", 2, 631724438846900500, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x6c", 2, 626099337358108374, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x6c", 2, 626099337358108374, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c\x6e\x7b\x32\x2c\x7d", 7, -930419747099408993, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x0a\x0a", 3, 3447371480047673453, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c\x73\x2b\x24", 5, 3841610313750742941, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f", 2, 579162285470681020, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x0a", 2, 581129311773172049, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure14$init$org$frostlang$frostc$frostdoc$Markdown(void* rawSelf, org$frostlang$frostc$frostdoc$Markdown* param1) {
org$frostlang$frostc$frostdoc$Markdown$_Closure14* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure14*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
org$frostlang$frostc$frostdoc$Markdown** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:658
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
void org$frostlang$frostc$frostdoc$Markdown$_Closure14$cleanup(void* rawSelf) {
org$frostlang$frostc$frostdoc$Markdown$_Closure14* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure14*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:658
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
frost$core$Object* org$frostlang$frostc$frostdoc$Markdown$_Closure14$$anonymous13$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object(void* rawSelf, frost$collections$ListView* param1) {
org$frostlang$frostc$frostdoc$Markdown$_Closure14* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure14*) rawSelf;

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
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
frost$collections$ListView* _16;
frost$core$Int _17;
$fn3 _18;
frost$core$Object* _19;
frost$core$String* _20;
frost$core$Object* _22;
frost$core$String* _24;
frost$core$Object* _25;
frost$core$Object* _28;
frost$core$String* _33;
bool _34;
frost$core$Bit _35;
bool _36;
frost$core$Int _38;
frost$core$String* _41;
frost$core$RegularExpression* _42;
frost$core$Matcher* _46;
frost$core$Bit _47;
frost$core$Object* _48;
bool _51;
frost$core$Object* _52;
frost$core$Object* _56;
frost$core$String* _58;
frost$core$Object* _59;
frost$core$Object* _65;
frost$core$String* _67;
frost$core$Object* _68;
frost$core$String* _73;
bool _74;
frost$core$Bit _75;
bool _76;
frost$core$Int _78;
frost$core$String* _81;
frost$core$RegularExpression* _82;
frost$core$Bit _86;
frost$core$String* _87;
frost$core$Object* _88;
frost$core$Object* _90;
frost$core$String* _93;
frost$core$Object* _94;
frost$core$String* _96;
frost$core$Object* _97;
frost$core$Object* _100;
frost$core$Object* _102;
org$frostlang$frostc$frostdoc$Markdown** _105;
org$frostlang$frostc$frostdoc$Markdown* _106;
frost$core$String* _107;
bool _108;
frost$core$Bit _109;
bool _110;
frost$core$Int _112;
frost$core$String* _115;
$fn4 _116;
frost$core$String* _117;
frost$core$Object* _119;
frost$core$String* _121;
frost$core$Object* _122;
frost$core$Object* _125;
frost$core$String* _128;
frost$core$RegularExpression* _129;
frost$core$Bit _133;
frost$core$String* _134;
frost$core$Object* _135;
frost$core$Object* _137;
frost$core$Object* _140;
frost$core$String* _142;
frost$core$Object* _143;
frost$core$Object* _146;
frost$core$Object* _148;
frost$core$String* _151;
frost$core$String* _152;
frost$core$String* _153;
frost$core$String* _154;
frost$core$String* _155;
frost$core$String* _156;
frost$core$String* _157;
frost$core$String* _158;
frost$core$String* _159;
frost$core$Object* _160;
frost$core$Object* _161;
frost$core$Object* _163;
frost$core$Object* _165;
frost$core$Object* _167;
frost$core$Object* _169;
frost$core$Object* _171;
frost$core$Object* _173;
frost$core$String* _175;
frost$core$Object* _176;
frost$core$String* _179;
frost$core$Object* _180;
frost$core$String* _183;
frost$core$Object* _184;
frost$core$String* _187;
frost$core$Object* _188;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:659
_1 = param1;
_2 = (frost$core$Int) {1u};
ITable* $tmp5 = _1->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp5 = $tmp5->next;
}
_3 = $tmp5->methods[0];
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:660
_16 = param1;
_17 = (frost$core$Int) {3u};
ITable* $tmp6 = _16->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp6 = $tmp6->next;
}
_18 = $tmp6->methods[0];
_19 = _18(_16, _17);
_20 = ((frost$core$String*) _19);
*(&local1) = ((frost$core$String*) NULL);
_22 = ((frost$core$Object*) _20);
frost$core$Frost$ref$frost$core$Object$Q(_22);
_24 = *(&local1);
_25 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_25);
*(&local1) = _20;
_28 = _19;
frost$core$Frost$unref$frost$core$Object$Q(_28);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:661
*(&local2) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:662
_33 = *(&local1);
_34 = _33 != NULL;
_35 = (frost$core$Bit) {_34};
_36 = _35.value;
if (_36) goto block4; else goto block5;
block5:;
_38 = (frost$core$Int) {662u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _38, &$s8);
abort(); // unreachable
block4:;
_41 = _33;
_42 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_42, &$s9);
// begin inline call to function frost.core.String.matches(regex:frost.core.RegularExpression):frost.core.Bit from Markdown.frost:662:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1047
_46 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_42, _41);
frost$core$Matcher$matches$R$frost$core$Bit(&_47, _46);
_48 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_48);
_51 = _47.value;
_52 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_52);
if (_51) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:663
_56 = ((frost$core$Object*) &$s10);
frost$core$Frost$ref$frost$core$Object$Q(_56);
_58 = *(&local2);
_59 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_59);
*(&local2) = &$s11;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:666
_65 = ((frost$core$Object*) &$s12);
frost$core$Frost$ref$frost$core$Object$Q(_65);
_67 = *(&local2);
_68 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_68);
*(&local2) = &$s13;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:671
_73 = *(&local0);
_74 = _73 != NULL;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
if (_76) goto block7; else goto block8;
block8:;
_78 = (frost$core$Int) {671u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _78, &$s15);
abort(); // unreachable
block7:;
_81 = _73;
_82 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_82, &$s16);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:671:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1120
_86 = (frost$core$Bit) {true};
_87 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(_81, _82, &$s17, _86);
_88 = ((frost$core$Object*) _87);
frost$core$Frost$ref$frost$core$Object$Q(_88);
_90 = ((frost$core$Object*) _87);
frost$core$Frost$unref$frost$core$Object$Q(_90);
_93 = _87;
_94 = ((frost$core$Object*) _93);
frost$core$Frost$ref$frost$core$Object$Q(_94);
_96 = *(&local0);
_97 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_97);
*(&local0) = _93;
_100 = ((frost$core$Object*) _87);
frost$core$Frost$unref$frost$core$Object$Q(_100);
_102 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_102);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:673
_105 = &param0->$self;
_106 = *_105;
_107 = *(&local0);
_108 = _107 != NULL;
_109 = (frost$core$Bit) {_108};
_110 = _109.value;
if (_110) goto block10; else goto block11;
block11:;
_112 = (frost$core$Int) {673u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _112, &$s19);
abort(); // unreachable
block10:;
_115 = _107;
_116 = ($fn20) _106->$class->vtable[20];
_117 = _116(_106, _115);
*(&local3) = ((frost$core$String*) NULL);
_119 = ((frost$core$Object*) _117);
frost$core$Frost$ref$frost$core$Object$Q(_119);
_121 = *(&local3);
_122 = ((frost$core$Object*) _121);
frost$core$Frost$unref$frost$core$Object$Q(_122);
*(&local3) = _117;
_125 = ((frost$core$Object*) _117);
frost$core$Frost$unref$frost$core$Object$Q(_125);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:678
_128 = *(&local3);
_129 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_129, &$s21);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:678:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1120
_133 = (frost$core$Bit) {true};
_134 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(_128, _129, &$s22, _133);
_135 = ((frost$core$Object*) _134);
frost$core$Frost$ref$frost$core$Object$Q(_135);
_137 = ((frost$core$Object*) _134);
frost$core$Frost$unref$frost$core$Object$Q(_137);
_140 = ((frost$core$Object*) _134);
frost$core$Frost$ref$frost$core$Object$Q(_140);
_142 = *(&local3);
_143 = ((frost$core$Object*) _142);
frost$core$Frost$unref$frost$core$Object$Q(_143);
*(&local3) = _134;
_146 = ((frost$core$Object*) _134);
frost$core$Frost$unref$frost$core$Object$Q(_146);
_148 = ((frost$core$Object*) _129);
frost$core$Frost$unref$frost$core$Object$Q(_148);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:680
_151 = *(&local2);
_152 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s23, _151);
_153 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_152, &$s24);
_154 = *(&local3);
_155 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_153, _154);
_156 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_155, &$s25);
_157 = *(&local2);
_158 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_156, _157);
_159 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_158, &$s26);
_160 = ((frost$core$Object*) _159);
_161 = _160;
frost$core$Frost$ref$frost$core$Object$Q(_161);
_163 = ((frost$core$Object*) _159);
frost$core$Frost$unref$frost$core$Object$Q(_163);
_165 = ((frost$core$Object*) _158);
frost$core$Frost$unref$frost$core$Object$Q(_165);
_167 = ((frost$core$Object*) _156);
frost$core$Frost$unref$frost$core$Object$Q(_167);
_169 = ((frost$core$Object*) _155);
frost$core$Frost$unref$frost$core$Object$Q(_169);
_171 = ((frost$core$Object*) _153);
frost$core$Frost$unref$frost$core$Object$Q(_171);
_173 = ((frost$core$Object*) _152);
frost$core$Frost$unref$frost$core$Object$Q(_173);
_175 = *(&local3);
_176 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_176);
*(&local3) = ((frost$core$String*) NULL);
_179 = *(&local2);
_180 = ((frost$core$Object*) _179);
frost$core$Frost$unref$frost$core$Object$Q(_180);
*(&local2) = ((frost$core$String*) NULL);
_183 = *(&local1);
_184 = ((frost$core$Object*) _183);
frost$core$Frost$unref$frost$core$Object$Q(_184);
*(&local1) = ((frost$core$String*) NULL);
_187 = *(&local0);
_188 = ((frost$core$Object*) _187);
frost$core$Frost$unref$frost$core$Object$Q(_188);
*(&local0) = ((frost$core$String*) NULL);
return _160;

}

