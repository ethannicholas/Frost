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

void org$frostlang$frostc$frostdoc$Markdown$_Closure2$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure2* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

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
void org$frostlang$frostc$frostdoc$Markdown$_Closure2$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure2* param0) {

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
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure2$$anonymous1$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$_Closure2* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$String* local2 = NULL;
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
frost$collections$ListView* _17;
frost$core$Int _18;
$fn3 _19;
frost$core$Object* _20;
frost$core$String* _21;
bool _22;
frost$core$Bit _23;
bool _24;
frost$core$Int _26;
frost$core$String* _29;
frost$core$Object* _32;
frost$core$MutableString* _34;
frost$core$Object* _35;
frost$core$Object* _38;
frost$core$Object* _40;
org$frostlang$frostc$frostdoc$Markdown** _43;
org$frostlang$frostc$frostdoc$Markdown* _44;
frost$core$MutableString* _45;
$fn4 _46;
frost$collections$CollectionView* _51;
$fn5 _52;
frost$core$Int _53;
frost$core$Int _54;
int64_t _55;
int64_t _56;
bool _57;
frost$core$Bit _58;
bool _59;
frost$collections$ListView* _62;
frost$core$Int _63;
$fn6 _64;
frost$core$Object* _65;
frost$core$String* _66;
frost$core$Object* _67;
frost$core$String* _69;
frost$core$Object* _70;
frost$core$Object* _73;
frost$core$String* _76;
bool _77;
frost$core$Bit _78;
bool _79;
frost$core$String* _82;
frost$core$Object* _83;
frost$core$String* _85;
frost$core$Object* _86;
frost$core$String* _91;
bool _92;
frost$core$Bit _93;
bool _94;
frost$core$Int _96;
frost$core$String* _99;
frost$core$String* _100;
frost$core$String* _101;
frost$core$Object* _102;
frost$core$String* _104;
frost$core$Object* _105;
frost$core$Object* _108;
frost$core$String* _113;
frost$core$Object* _114;
frost$core$String* _116;
frost$core$Object* _117;
org$frostlang$frostc$frostdoc$Markdown** _122;
org$frostlang$frostc$frostdoc$Markdown* _123;
frost$collections$HashMap** _124;
frost$collections$HashMap* _125;
frost$collections$HashMap* _126;
frost$core$String* _127;
bool _128;
frost$core$Bit _129;
bool _130;
frost$core$Int _132;
frost$core$String* _135;
frost$collections$HashKey* _136;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* _137;
frost$core$MutableString* _138;
frost$core$String* _139;
frost$core$String* _140;
bool _141;
frost$core$Bit _142;
bool _143;
frost$core$Int _145;
frost$core$String* _148;
frost$core$Object* _150;
frost$core$Object* _152;
frost$core$Object* _154;
frost$core$Object* _157;
frost$core$String* _159;
frost$core$Object* _160;
frost$core$MutableString* _163;
frost$core$Object* _164;
frost$core$String* _167;
frost$core$Object* _168;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:178
_1 = param1;
_2 = (frost$core$Int) {1u};
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:179
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_16 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
_17 = param1;
_18 = (frost$core$Int) {2u};
ITable* $tmp8 = _17->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp8 = $tmp8->next;
}
_19 = $tmp8->methods[0];
_20 = _19(_17, _18);
_21 = ((frost$core$String*) _20);
_22 = _21 != NULL;
_23 = (frost$core$Bit) {_22};
_24 = _23.value;
if (_24) goto block1; else goto block2;
block2:;
_26 = (frost$core$Int) {179u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _26, &$s10);
abort(); // unreachable
block1:;
_29 = _21;
frost$core$MutableString$init$frost$core$String(_16, _29);
*(&local1) = ((frost$core$MutableString*) NULL);
_32 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_32);
_34 = *(&local1);
_35 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_35);
*(&local1) = _16;
_38 = _20;
frost$core$Frost$unref$frost$core$Object$Q(_38);
_40 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_40);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:180
_43 = &param0->$self;
_44 = *_43;
_45 = *(&local1);
_46 = ($fn11) _44->$class->vtable[28];
_46(_44, _45);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:181
*(&local2) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:182
_51 = ((frost$collections$CollectionView*) param1);
ITable* $tmp12 = _51->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
_52 = $tmp12->methods[0];
_53 = _52(_51);
_54 = (frost$core$Int) {3u};
_55 = _53.value;
_56 = _54.value;
_57 = _55 > _56;
_58 = (frost$core$Bit) {_57};
_59 = _58.value;
if (_59) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:183
_62 = param1;
_63 = (frost$core$Int) {3u};
ITable* $tmp13 = _62->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp13 = $tmp13->next;
}
_64 = $tmp13->methods[0];
_65 = _64(_62, _63);
_66 = ((frost$core$String*) _65);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$ref$frost$core$Object$Q(_67);
_69 = *(&local2);
_70 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_70);
*(&local2) = _66;
_73 = _65;
frost$core$Frost$unref$frost$core$Object$Q(_73);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:184
_76 = *(&local2);
_77 = _76 == NULL;
_78 = (frost$core$Bit) {_77};
_79 = _78.value;
if (_79) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:185
_82 = &$s14;
_83 = ((frost$core$Object*) _82);
frost$core$Frost$ref$frost$core$Object$Q(_83);
_85 = *(&local2);
_86 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_86);
*(&local2) = _82;
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:187
_91 = *(&local2);
_92 = _91 != NULL;
_93 = (frost$core$Bit) {_92};
_94 = _93.value;
if (_94) goto block8; else goto block9;
block9:;
_96 = (frost$core$Int) {187u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s15, _96, &$s16);
abort(); // unreachable
block8:;
_99 = _91;
_100 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(_99, &$s17, &$s18);
_101 = _100;
_102 = ((frost$core$Object*) _101);
frost$core$Frost$ref$frost$core$Object$Q(_102);
_104 = *(&local2);
_105 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_105);
*(&local2) = _101;
_108 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_108);
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:190
_113 = &$s19;
_114 = ((frost$core$Object*) _113);
frost$core$Frost$ref$frost$core$Object$Q(_114);
_116 = *(&local2);
_117 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_117);
*(&local2) = _113;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:193
_122 = &param0->$self;
_123 = *_122;
_124 = &_123->linkDefinitions;
_125 = *_124;
_126 = _125;
_127 = *(&local0);
_128 = _127 != NULL;
_129 = (frost$core$Bit) {_128};
_130 = _129.value;
if (_130) goto block10; else goto block11;
block11:;
_132 = (frost$core$Int) {193u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s20, _132, &$s21);
abort(); // unreachable
block10:;
_135 = _127;
_136 = ((frost$collections$HashKey*) _135);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$frostdoc$Markdown$LinkDefinition));
_137 = (org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$frostdoc$Markdown$LinkDefinition$class);
_138 = *(&local1);
_139 = frost$core$MutableString$finish$R$frost$core$String(_138);
_140 = *(&local2);
_141 = _140 != NULL;
_142 = (frost$core$Bit) {_141};
_143 = _142.value;
if (_143) goto block12; else goto block13;
block13:;
_145 = (frost$core$Int) {193u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _145, &$s23);
abort(); // unreachable
block12:;
_148 = _140;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition$init$frost$core$String$frost$core$String(_137, _139, _148);
_150 = ((frost$core$Object*) _137);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_126, _136, _150);
_152 = ((frost$core$Object*) _139);
frost$core$Frost$unref$frost$core$Object$Q(_152);
_154 = ((frost$core$Object*) _137);
frost$core$Frost$unref$frost$core$Object$Q(_154);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:194
_157 = ((frost$core$Object*) &$s24);
frost$core$Frost$ref$frost$core$Object$Q(_157);
_159 = *(&local2);
_160 = ((frost$core$Object*) _159);
frost$core$Frost$unref$frost$core$Object$Q(_160);
*(&local2) = ((frost$core$String*) NULL);
_163 = *(&local1);
_164 = ((frost$core$Object*) _163);
frost$core$Frost$unref$frost$core$Object$Q(_164);
*(&local1) = ((frost$core$MutableString*) NULL);
_167 = *(&local0);
_168 = ((frost$core$Object*) _167);
frost$core$Frost$unref$frost$core$Object$Q(_168);
*(&local0) = ((frost$core$String*) NULL);
return &$s25;

}






