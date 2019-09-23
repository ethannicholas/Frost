#include "org/frostlang/frostc/frostdoc/Markdown/_Closure2.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/HashKey.h"
#include "org/frostlang/frostc/frostdoc/Markdown/LinkDefinition.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure2$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure2$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure2$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure2$$anonymous1$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$Object* (*$fn2)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn3)(frost$collections$ListView*, frost$core$Int);
typedef void (*$fn4)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$Int (*$fn5)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn6)(frost$collections$ListView*, frost$core$Int);
typedef void (*$fn11)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32", 48, 5457374679822673613, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x71\x75\x6f\x74\x3b", 6, -8530148639892707939, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure2$init$org$frostlang$frostc$frostdoc$Markdown(void* rawSelf, org$frostlang$frostc$frostdoc$Markdown* param1) {
org$frostlang$frostc$frostdoc$Markdown$_Closure2* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure2*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
org$frostlang$frostc$frostdoc$Markdown** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:177
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
void org$frostlang$frostc$frostdoc$Markdown$_Closure2$cleanup(void* rawSelf) {
org$frostlang$frostc$frostdoc$Markdown$_Closure2* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure2*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:177
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure2$$anonymous1$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(void* rawSelf, frost$collections$ListView* param1) {
org$frostlang$frostc$frostdoc$Markdown$_Closure2* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure2*) rawSelf;

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$Int _1;
$fn2 _2;
frost$core$Object* _3;
frost$core$String* _4;
frost$core$Object* _6;
frost$core$String* _8;
frost$core$Object* _9;
frost$core$Object* _12;
frost$core$MutableString* _15;
frost$core$Int _16;
$fn3 _17;
frost$core$Object* _18;
frost$core$String* _19;
bool _20;
frost$core$Bit _21;
bool _22;
frost$core$Int _24;
frost$core$String* _27;
frost$core$Object* _30;
frost$core$MutableString* _32;
frost$core$Object* _33;
frost$core$Object* _36;
frost$core$Object* _38;
org$frostlang$frostc$frostdoc$Markdown** _41;
org$frostlang$frostc$frostdoc$Markdown* _42;
frost$core$MutableString* _43;
$fn4 _44;
frost$collections$CollectionView* _49;
$fn5 _50;
frost$core$Int _51;
frost$core$Int _52;
int64_t _53;
int64_t _54;
bool _55;
frost$core$Bit _56;
bool _57;
frost$core$Int _60;
$fn6 _61;
frost$core$Object* _62;
frost$core$String* _63;
frost$core$Object* _64;
frost$core$String* _66;
frost$core$Object* _67;
frost$core$Object* _70;
frost$core$String* _73;
bool _74;
frost$core$Bit _75;
bool _76;
frost$core$String* _79;
frost$core$Object* _80;
frost$core$String* _82;
frost$core$Object* _83;
frost$core$String* _88;
bool _89;
frost$core$Bit _90;
bool _91;
frost$core$Int _93;
frost$core$String* _96;
frost$core$String* _97;
frost$core$String* _98;
frost$core$Object* _99;
frost$core$String* _101;
frost$core$Object* _102;
frost$core$Object* _105;
frost$core$String* _110;
frost$core$Object* _111;
frost$core$String* _113;
frost$core$Object* _114;
org$frostlang$frostc$frostdoc$Markdown** _119;
org$frostlang$frostc$frostdoc$Markdown* _120;
frost$collections$HashMap** _121;
frost$collections$HashMap* _122;
frost$core$String* _123;
bool _124;
frost$core$Bit _125;
bool _126;
frost$core$Int _128;
frost$core$String* _131;
frost$collections$HashKey* _132;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* _133;
frost$core$MutableString* _134;
frost$core$String* _135;
frost$core$String* _136;
bool _137;
frost$core$Bit _138;
bool _139;
frost$core$Int _141;
frost$core$String* _144;
frost$core$Object* _146;
frost$core$Object* _148;
frost$core$Object* _150;
frost$core$Object* _153;
frost$core$String* _155;
frost$core$Object* _156;
frost$core$MutableString* _159;
frost$core$Object* _160;
frost$core$String* _163;
frost$core$Object* _164;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:178
_1 = (frost$core$Int) {1u};
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:179
_15 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
_16 = (frost$core$Int) {2u};
ITable* $tmp8 = param1->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp8 = $tmp8->next;
}
_17 = $tmp8->methods[0];
_18 = _17(param1, _16);
_19 = ((frost$core$String*) _18);
_20 = _19 != NULL;
_21 = (frost$core$Bit) {_20};
_22 = _21.value;
if (_22) goto block1; else goto block2;
block2:;
_24 = (frost$core$Int) {179u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _24, &$s10);
abort(); // unreachable
block1:;
_27 = _19;
frost$core$MutableString$init$frost$core$String(_15, _27);
*(&local1) = ((frost$core$MutableString*) NULL);
_30 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = *(&local1);
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
*(&local1) = _15;
_36 = _18;
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_38);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:180
_41 = &param0->$self;
_42 = *_41;
_43 = *(&local1);
_44 = ($fn11) _42->$class->vtable[28];
_44(_42, _43);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:181
*(&local2) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:182
_49 = ((frost$collections$CollectionView*) param1);
ITable* $tmp12 = _49->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
_50 = $tmp12->methods[0];
_51 = _50(_49);
_52 = (frost$core$Int) {3u};
_53 = _51.value;
_54 = _52.value;
_55 = _53 > _54;
_56 = (frost$core$Bit) {_55};
_57 = _56.value;
if (_57) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:183
_60 = (frost$core$Int) {3u};
ITable* $tmp13 = param1->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp13 = $tmp13->next;
}
_61 = $tmp13->methods[0];
_62 = _61(param1, _60);
_63 = ((frost$core$String*) _62);
_64 = ((frost$core$Object*) _63);
frost$core$Frost$ref$frost$core$Object$Q(_64);
_66 = *(&local2);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_67);
*(&local2) = _63;
_70 = _62;
frost$core$Frost$unref$frost$core$Object$Q(_70);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:184
_73 = *(&local2);
_74 = _73 == NULL;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
if (_76) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:185
_79 = &$s14;
_80 = ((frost$core$Object*) _79);
frost$core$Frost$ref$frost$core$Object$Q(_80);
_82 = *(&local2);
_83 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_83);
*(&local2) = _79;
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:187
_88 = *(&local2);
_89 = _88 != NULL;
_90 = (frost$core$Bit) {_89};
_91 = _90.value;
if (_91) goto block8; else goto block9;
block9:;
_93 = (frost$core$Int) {187u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s15, _93, &$s16);
abort(); // unreachable
block8:;
_96 = _88;
_97 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(_96, &$s17, &$s18);
_98 = _97;
_99 = ((frost$core$Object*) _98);
frost$core$Frost$ref$frost$core$Object$Q(_99);
_101 = *(&local2);
_102 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_102);
*(&local2) = _98;
_105 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_105);
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:190
_110 = &$s19;
_111 = ((frost$core$Object*) _110);
frost$core$Frost$ref$frost$core$Object$Q(_111);
_113 = *(&local2);
_114 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_114);
*(&local2) = _110;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:193
_119 = &param0->$self;
_120 = *_119;
_121 = &_120->linkDefinitions;
_122 = *_121;
_123 = *(&local0);
_124 = _123 != NULL;
_125 = (frost$core$Bit) {_124};
_126 = _125.value;
if (_126) goto block10; else goto block11;
block11:;
_128 = (frost$core$Int) {193u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s20, _128, &$s21);
abort(); // unreachable
block10:;
_131 = _123;
_132 = ((frost$collections$HashKey*) _131);
_133 = (org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) frostObjectAlloc(sizeof(org$frostlang$frostc$frostdoc$Markdown$LinkDefinition), (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$LinkDefinition$class);
_134 = *(&local1);
_135 = frost$core$MutableString$finish$R$frost$core$String(_134);
_136 = *(&local2);
_137 = _136 != NULL;
_138 = (frost$core$Bit) {_137};
_139 = _138.value;
if (_139) goto block12; else goto block13;
block13:;
_141 = (frost$core$Int) {193u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _141, &$s23);
abort(); // unreachable
block12:;
_144 = _136;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition$init$frost$core$String$frost$core$String(_133, _135, _144);
_146 = ((frost$core$Object*) _133);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_122, _132, _146);
_148 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_148);
_150 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_150);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:194
_153 = ((frost$core$Object*) &$s24);
frost$core$Frost$ref$frost$core$Object$Q(_153);
_155 = *(&local2);
_156 = ((frost$core$Object*) _155);
frost$core$Frost$unref$frost$core$Object$Q(_156);
*(&local2) = ((frost$core$String*) NULL);
_159 = *(&local1);
_160 = ((frost$core$Object*) _159);
frost$core$Frost$unref$frost$core$Object$Q(_160);
*(&local1) = ((frost$core$MutableString*) NULL);
_163 = *(&local0);
_164 = ((frost$core$Object*) _163);
frost$core$Frost$unref$frost$core$Object$Q(_164);
*(&local0) = ((frost$core$String*) NULL);
return &$s25;

}






