#include "org/frostlang/frostc/frostdoc/Markdown/_Closure24.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure24$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure24$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure24$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure24$$anonymous23$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object} };

typedef frost$core$Object* (*$fn2)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn3)(frost$collections$ListView*, frost$core$Int);
typedef void (*$fn4)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$collections$Iterator* (*$fn5)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn6)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn7)(frost$core$Object*);
typedef frost$core$String* (*$fn8)(frost$core$Object*);
typedef void (*$fn13)(org$frostlang$frostc$frostdoc$Markdown*, frost$core$MutableString*);
typedef frost$core$String* (*$fn19)(frost$core$Object*);
typedef frost$core$String* (*$fn23)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x34", 49, -4904425220760553189, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68", 1, -5808546977549255721, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f", 2, 579162285470681020, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x0a", 2, 581129311773172049, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure24$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$_Closure24* param0, org$frostlang$frostc$frostdoc$Markdown* param1) {

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
org$frostlang$frostc$frostdoc$Markdown** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:782
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
void org$frostlang$frostc$frostdoc$Markdown$_Closure24$cleanup(org$frostlang$frostc$frostdoc$Markdown$_Closure24* param0) {

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:782
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
frost$core$Object* org$frostlang$frostc$frostdoc$Markdown$_Closure24$$anonymous23$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object(org$frostlang$frostc$frostdoc$Markdown$_Closure24* param0, frost$collections$ListView* param1) {

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$Int local2;
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
frost$core$String* _49;
bool _50;
frost$core$Bit _51;
bool _52;
frost$core$Int _54;
frost$core$String* _57;
frost$collections$Iterable* _60;
$fn5 _61;
frost$collections$Iterator* _62;
frost$collections$Iterator* _63;
frost$collections$Iterator* _64;
$fn6 _65;
frost$core$Int _66;
frost$core$Object* _67;
frost$core$Int _72;
frost$core$Object* _73;
$fn7 _76;
frost$core$String* _77;
frost$core$String* _78;
frost$core$Object* _79;
frost$core$Object* _81;
frost$core$Object* _83;
frost$core$Object* _87;
frost$core$String* _89;
frost$core$Object* _90;
frost$core$Object* _93;
frost$core$Object* _95;
frost$core$String* _98;
frost$core$String* _99;
frost$core$String* _100;
frost$core$MutableString* _101;
frost$core$Object* _102;
$fn8 _105;
frost$core$String* _106;
frost$core$String* _107;
frost$core$Object* _108;
frost$core$Object* _110;
frost$core$Object* _112;
frost$core$String* _115;
frost$core$String* _116;
frost$core$String* _117;
frost$core$String* _118;
frost$core$Object* _119;
frost$core$Object* _120;
frost$core$Object* _122;
frost$core$Object* _124;
frost$core$Object* _126;
frost$core$Object* _128;
frost$core$Object* _130;
frost$core$Object* _132;
frost$core$String* _134;
frost$core$Object* _135;
frost$core$MutableString* _138;
frost$core$Object* _139;
frost$core$String* _142;
frost$core$Object* _143;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:783
_1 = param1;
_2 = (frost$core$Int) {1u};
ITable* $tmp9 = _1->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp9 = $tmp9->next;
}
_3 = $tmp9->methods[0];
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:784
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_16 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
_17 = param1;
_18 = (frost$core$Int) {2u};
ITable* $tmp10 = _17->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp10 = $tmp10->next;
}
_19 = $tmp10->methods[0];
_20 = _19(_17, _18);
_21 = ((frost$core$String*) _20);
_22 = _21 != NULL;
_23 = (frost$core$Bit) {_22};
_24 = _23.value;
if (_24) goto block1; else goto block2;
block2:;
_26 = (frost$core$Int) {784u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, _26, &$s12);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:785
_43 = &param0->$self;
_44 = *_43;
_45 = *(&local1);
_46 = ($fn13) _44->$class->vtable[22];
_46(_44, _45);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:786
_49 = *(&local0);
_50 = _49 != NULL;
_51 = (frost$core$Bit) {_50};
_52 = _51.value;
if (_52) goto block3; else goto block4;
block4:;
_54 = (frost$core$Int) {786u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _54, &$s15);
abort(); // unreachable
block3:;
_57 = _49;
// begin inline call to function frost.core.String.get_length():frost.core.Int from Markdown.frost:786:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:139
_60 = ((frost$collections$Iterable*) _57);
ITable* $tmp16 = _60->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp16 = $tmp16->next;
}
_61 = $tmp16->methods[0];
_62 = _61(_60);
_63 = _62;
_64 = _63;
ITable* $tmp17 = _64->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp17 = $tmp17->next;
}
_65 = $tmp17->methods[2];
_66 = _65(_64);
_67 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_67);
*(&local2) = _66;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:787
_72 = *(&local2);
frost$core$Int$wrapper* $tmp18;
$tmp18 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp18->value = _72;
_73 = ((frost$core$Object*) $tmp18);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:787:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_76 = ($fn19) _73->$class->vtable[0];
_77 = _76(_73);
_78 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s20, _77);
_79 = ((frost$core$Object*) _78);
frost$core$Frost$ref$frost$core$Object$Q(_79);
_81 = ((frost$core$Object*) _78);
frost$core$Frost$unref$frost$core$Object$Q(_81);
_83 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_83);
*(&local3) = ((frost$core$String*) NULL);
_87 = ((frost$core$Object*) _78);
frost$core$Frost$ref$frost$core$Object$Q(_87);
_89 = *(&local3);
_90 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_90);
*(&local3) = _78;
_93 = ((frost$core$Object*) _78);
frost$core$Frost$unref$frost$core$Object$Q(_93);
_95 = _73;
frost$core$Frost$unref$frost$core$Object$Q(_95);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:788
_98 = *(&local3);
_99 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s21, _98);
_100 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_99, &$s22);
_101 = *(&local1);
_102 = ((frost$core$Object*) _101);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Markdown.frost:788:20
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:155
_105 = ($fn23) _102->$class->vtable[0];
_106 = _105(_102);
_107 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_100, _106);
_108 = ((frost$core$Object*) _107);
frost$core$Frost$ref$frost$core$Object$Q(_108);
_110 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_110);
_112 = ((frost$core$Object*) _106);
frost$core$Frost$unref$frost$core$Object$Q(_112);
_115 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_107, &$s24);
_116 = *(&local3);
_117 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_115, _116);
_118 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_117, &$s25);
_119 = ((frost$core$Object*) _118);
_120 = _119;
frost$core$Frost$ref$frost$core$Object$Q(_120);
_122 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_122);
_124 = ((frost$core$Object*) _117);
frost$core$Frost$unref$frost$core$Object$Q(_124);
_126 = ((frost$core$Object*) _115);
frost$core$Frost$unref$frost$core$Object$Q(_126);
_128 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_128);
_130 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_130);
_132 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_132);
_134 = *(&local3);
_135 = ((frost$core$Object*) _134);
frost$core$Frost$unref$frost$core$Object$Q(_135);
*(&local3) = ((frost$core$String*) NULL);
_138 = *(&local1);
_139 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_139);
*(&local1) = ((frost$core$MutableString*) NULL);
_142 = *(&local0);
_143 = ((frost$core$Object*) _142);
frost$core$Frost$unref$frost$core$Object$Q(_143);
*(&local0) = ((frost$core$String*) NULL);
return _119;

}

