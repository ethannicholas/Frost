#include "org/frostlang/frostc/frostdoc/Markdown/_Closure16.h"
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
org$frostlang$frostc$frostdoc$Markdown$_Closure16$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure16$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure16$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure16$$anonymous15$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object} };

typedef frost$core$Object* (*$fn2)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn3)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$String* (*$fn4)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$String*);
typedef frost$core$String* (*$fn20)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31\x36", 49, -4907398300202668058, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x2a\x2b\x2d\x5d", 5, -9070757250471388869, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6c", 2, 631724438846900500, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6c", 2, 631724438846900500, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x6c", 2, 626099337358108374, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x6c", 2, 626099337358108374, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d", 6, 7690319398872698237, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a\x0a\x0a", 3, 3447371480047673453, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x0a", 2, 581129311773172049, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f", 2, 579162285470681020, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x0a", 2, 581129311773172049, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure16$init$org$frostlang$frostc$frostdoc$Markdown(void* rawSelf, org$frostlang$frostc$frostdoc$Markdown* param1) {
org$frostlang$frostc$frostdoc$Markdown$_Closure16* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure16*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
org$frostlang$frostc$frostdoc$Markdown** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:685
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
void org$frostlang$frostc$frostdoc$Markdown$_Closure16$cleanup(void* rawSelf) {
org$frostlang$frostc$frostdoc$Markdown$_Closure16* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure16*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:685
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
frost$core$Object* org$frostlang$frostc$frostdoc$Markdown$_Closure16$$anonymous15$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object(void* rawSelf, frost$collections$ListView* param1) {
org$frostlang$frostc$frostdoc$Markdown$_Closure16* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure16*) rawSelf;

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
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
frost$core$Int _15;
$fn3 _16;
frost$core$Object* _17;
frost$core$String* _18;
frost$core$Object* _20;
frost$core$String* _22;
frost$core$Object* _23;
frost$core$Object* _26;
frost$core$String* _31;
bool _32;
frost$core$Bit _33;
bool _34;
frost$core$Int _36;
frost$core$String* _39;
frost$core$RegularExpression* _40;
frost$core$Matcher* _44;
frost$core$Bit _45;
frost$core$Object* _46;
bool _49;
frost$core$Object* _50;
frost$core$Object* _54;
frost$core$String* _56;
frost$core$Object* _57;
frost$core$Object* _63;
frost$core$String* _65;
frost$core$Object* _66;
frost$core$String* _71;
bool _72;
frost$core$Bit _73;
bool _74;
frost$core$Int _76;
frost$core$String* _79;
frost$core$RegularExpression* _80;
frost$core$Bit _84;
frost$core$String* _85;
frost$core$Object* _86;
frost$core$Object* _88;
frost$core$String* _91;
frost$core$Object* _92;
frost$core$String* _94;
frost$core$Object* _95;
frost$core$Object* _98;
frost$core$Object* _100;
org$frostlang$frostc$frostdoc$Markdown** _103;
org$frostlang$frostc$frostdoc$Markdown* _104;
frost$core$String* _105;
bool _106;
frost$core$Bit _107;
bool _108;
frost$core$Int _110;
frost$core$String* _113;
$fn4 _114;
frost$core$String* _115;
frost$core$Object* _117;
frost$core$String* _119;
frost$core$Object* _120;
frost$core$Object* _123;
frost$core$String* _126;
frost$core$String* _127;
frost$core$String* _128;
frost$core$String* _129;
frost$core$String* _130;
frost$core$String* _131;
frost$core$String* _132;
frost$core$String* _133;
frost$core$String* _134;
frost$core$Object* _135;
frost$core$Object* _136;
frost$core$Object* _138;
frost$core$Object* _140;
frost$core$Object* _142;
frost$core$Object* _144;
frost$core$Object* _146;
frost$core$Object* _148;
frost$core$String* _150;
frost$core$Object* _151;
frost$core$String* _154;
frost$core$Object* _155;
frost$core$String* _158;
frost$core$Object* _159;
frost$core$String* _162;
frost$core$Object* _163;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:686
_1 = (frost$core$Int) {1u};
ITable* $tmp5 = param1->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp5 = $tmp5->next;
}
_2 = $tmp5->methods[0];
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:687
_15 = (frost$core$Int) {3u};
ITable* $tmp6 = param1->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp6 = $tmp6->next;
}
_16 = $tmp6->methods[0];
_17 = _16(param1, _15);
_18 = ((frost$core$String*) _17);
*(&local1) = ((frost$core$String*) NULL);
_20 = ((frost$core$Object*) _18);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = *(&local1);
_23 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_23);
*(&local1) = _18;
_26 = _17;
frost$core$Frost$unref$frost$core$Object$Q(_26);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:688
*(&local2) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:689
_31 = *(&local1);
_32 = _31 != NULL;
_33 = (frost$core$Bit) {_32};
_34 = _33.value;
if (_34) goto block4; else goto block5;
block5:;
_36 = (frost$core$Int) {689u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _36, &$s8);
abort(); // unreachable
block4:;
_39 = _31;
_40 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_40, &$s9);
// begin inline call to function frost.core.String.matches(regex:frost.core.RegularExpression):frost.core.Bit from Markdown.frost:689:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1047
_44 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_40, _39);
frost$core$Matcher$matches$R$frost$core$Bit(&_45, _44);
_46 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_46);
_49 = _45.value;
_50 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_50);
if (_49) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:690
_54 = ((frost$core$Object*) &$s10);
frost$core$Frost$ref$frost$core$Object$Q(_54);
_56 = *(&local2);
_57 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_57);
*(&local2) = &$s11;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:693
_63 = ((frost$core$Object*) &$s12);
frost$core$Frost$ref$frost$core$Object$Q(_63);
_65 = *(&local2);
_66 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_66);
*(&local2) = &$s13;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:698
_71 = *(&local0);
_72 = _71 != NULL;
_73 = (frost$core$Bit) {_72};
_74 = _73.value;
if (_74) goto block7; else goto block8;
block8:;
_76 = (frost$core$Int) {698u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _76, &$s15);
abort(); // unreachable
block7:;
_79 = _71;
_80 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_80, &$s16);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:698:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1120
_84 = (frost$core$Bit) {true};
_85 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(_79, _80, &$s17, _84);
_86 = ((frost$core$Object*) _85);
frost$core$Frost$ref$frost$core$Object$Q(_86);
_88 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_88);
_91 = _85;
_92 = ((frost$core$Object*) _91);
frost$core$Frost$ref$frost$core$Object$Q(_92);
_94 = *(&local0);
_95 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_95);
*(&local0) = _91;
_98 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_98);
_100 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_100);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:700
_103 = &param0->$self;
_104 = *_103;
_105 = *(&local0);
_106 = _105 != NULL;
_107 = (frost$core$Bit) {_106};
_108 = _107.value;
if (_108) goto block10; else goto block11;
block11:;
_110 = (frost$core$Int) {700u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _110, &$s19);
abort(); // unreachable
block10:;
_113 = _105;
_114 = ($fn20) _104->$class->vtable[20];
_115 = _114(_104, _113);
*(&local3) = ((frost$core$String*) NULL);
_117 = ((frost$core$Object*) _115);
frost$core$Frost$ref$frost$core$Object$Q(_117);
_119 = *(&local3);
_120 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_120);
*(&local3) = _115;
_123 = ((frost$core$Object*) _115);
frost$core$Frost$unref$frost$core$Object$Q(_123);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:701
_126 = *(&local2);
_127 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s21, _126);
_128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_127, &$s22);
_129 = *(&local3);
_130 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_128, _129);
_131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_130, &$s23);
_132 = *(&local2);
_133 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_131, _132);
_134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_133, &$s24);
_135 = ((frost$core$Object*) _134);
_136 = _135;
frost$core$Frost$ref$frost$core$Object$Q(_136);
_138 = ((frost$core$Object*) _134);
frost$core$Frost$unref$frost$core$Object$Q(_138);
_140 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_140);
_142 = ((frost$core$Object*) _131);
frost$core$Frost$unref$frost$core$Object$Q(_142);
_144 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_144);
_146 = ((frost$core$Object*) _128);
frost$core$Frost$unref$frost$core$Object$Q(_146);
_148 = ((frost$core$Object*) _127);
frost$core$Frost$unref$frost$core$Object$Q(_148);
_150 = *(&local3);
_151 = ((frost$core$Object*) _150);
frost$core$Frost$unref$frost$core$Object$Q(_151);
*(&local3) = ((frost$core$String*) NULL);
_154 = *(&local2);
_155 = ((frost$core$Object*) _154);
frost$core$Frost$unref$frost$core$Object$Q(_155);
*(&local2) = ((frost$core$String*) NULL);
_158 = *(&local1);
_159 = ((frost$core$Object*) _158);
frost$core$Frost$unref$frost$core$Object$Q(_159);
*(&local1) = ((frost$core$String*) NULL);
_162 = *(&local0);
_163 = ((frost$core$Object*) _162);
frost$core$Frost$unref$frost$core$Object$Q(_163);
*(&local0) = ((frost$core$String*) NULL);
return _135;

}

