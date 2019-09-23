#include "org/frostlang/frostc/pass/RemoveAsserts.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/MethodPosition.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/pass/Analyzer.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/LinkedList.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"


static frost$core$String $s1;
org$frostlang$frostc$pass$RemoveAsserts$class_type org$frostlang$frostc$pass$RemoveAsserts$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$pass$RemoveAsserts$cleanup, org$frostlang$frostc$pass$RemoveAsserts$isAssertionFail$org$frostlang$frostc$IR$Statement$R$frost$core$Bit, org$frostlang$frostc$pass$RemoveAsserts$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit} };

typedef frost$core$Int (*$fn6)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn7)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn8)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn9)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn10)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn11)(org$frostlang$frostc$pass$RemoveAsserts*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn12)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*);
typedef frost$core$Bit (*$fn20)(org$frostlang$frostc$pass$RemoveAsserts*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn21)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x52\x65\x6d\x6f\x76\x65\x41\x73\x73\x65\x72\x74\x73", 39, 2675365451163764056, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x46\x61\x69\x6c\x75\x72\x65", 16, -1047342833001589897, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, 4237142976622831502, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };

frost$core$Bit org$frostlang$frostc$pass$RemoveAsserts$isAssertionFail$org$frostlang$frostc$IR$Statement$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$IR$Statement* param1) {
org$frostlang$frostc$pass$RemoveAsserts* param0 = (org$frostlang$frostc$pass$RemoveAsserts*) rawSelf;

org$frostlang$frostc$MethodDecl* local0 = NULL;
frost$core$Bit local1;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
org$frostlang$frostc$MethodPosition* _13;
org$frostlang$frostc$MethodPosition _14;
org$frostlang$frostc$MethodDecl** _15;
org$frostlang$frostc$MethodDecl* _16;
frost$core$Object* _18;
org$frostlang$frostc$MethodDecl* _20;
frost$core$Object* _21;
org$frostlang$frostc$FixedArray** _24;
org$frostlang$frostc$FixedArray* _25;
org$frostlang$frostc$MethodDecl* _27;
org$frostlang$frostc$Symbol* _28;
frost$core$String** _29;
frost$core$String* _30;
frost$core$Bit _31;
bool _32;
org$frostlang$frostc$MethodDecl* _34;
frost$core$Weak** _35;
frost$core$Weak* _36;
frost$core$Bit* _41;
frost$core$Bit _42;
bool _44;
frost$core$Int _46;
frost$core$Object** _50;
frost$core$Object* _51;
frost$core$Object* _52;
frost$core$Object* _53;
org$frostlang$frostc$ClassDecl* _56;
frost$core$String** _57;
frost$core$String* _58;
frost$core$Bit _59;
frost$core$Object* _60;
frost$core$Bit _66;
org$frostlang$frostc$MethodDecl* _67;
frost$core$Object* _68;
frost$core$Bit _73;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:7
_1 = &param1->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RemoveAsserts.frost:8:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param1->$data.$STATIC_CALL.field0;
_14 = *_13;
_15 = &param1->$data.$STATIC_CALL.field1;
_16 = *_15;
*(&local0) = ((org$frostlang$frostc$MethodDecl*) NULL);
_18 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = *(&local0);
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
*(&local0) = _16;
_24 = &param1->$data.$STATIC_CALL.field2;
_25 = *_24;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:9
_27 = *(&local0);
_28 = ((org$frostlang$frostc$Symbol*) _27);
_29 = &_28->name;
_30 = *_29;
_31 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_30, &$s2);
_32 = _31.value;
if (_32) goto block5; else goto block6;
block5:;
_34 = *(&local0);
_35 = &_34->owner;
_36 = *_35;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from RemoveAsserts.frost:9:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_41 = &_36->_valid;
_42 = *_41;
_44 = _42.value;
if (_44) goto block10; else goto block11;
block11:;
_46 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3, _46, &$s4);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_50 = &_36->value;
_51 = *_50;
_52 = _51;
_53 = _52;
frost$core$Frost$ref$frost$core$Object$Q(_53);
_56 = ((org$frostlang$frostc$ClassDecl*) _52);
_57 = &_56->name;
_58 = *_57;
_59 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_58, &$s5);
_60 = _52;
frost$core$Frost$unref$frost$core$Object$Q(_60);
*(&local1) = _59;
goto block7;
block6:;
*(&local1) = _31;
goto block7;
block7:;
_66 = *(&local1);
_67 = *(&local0);
_68 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_68);
*(&local0) = ((org$frostlang$frostc$MethodDecl*) NULL);
return _66;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:12
_73 = (frost$core$Bit) {false};
return _73;
block1:;
goto block12;
block12:;

}
frost$core$Bit org$frostlang$frostc$pass$RemoveAsserts$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$IR* param1, org$frostlang$frostc$pass$Analyzer* param2) {
org$frostlang$frostc$pass$RemoveAsserts* param0 = (org$frostlang$frostc$pass$RemoveAsserts*) rawSelf;

frost$core$Bit local0;
frost$core$Int local1;
org$frostlang$frostc$IR$Block* local2 = NULL;
org$frostlang$frostc$IR$Statement* local3 = NULL;
frost$core$Bit _1;
frost$collections$Array** _4;
frost$collections$Array* _5;
frost$collections$CollectionView* _6;
$fn6 _7;
frost$core$Int _8;
frost$core$Int _9;
int64_t _10;
int64_t _11;
int64_t _12;
frost$core$Int _13;
frost$core$Int _14;
frost$core$Int _15;
frost$core$Bit _16;
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT _17;
frost$core$Int _18;
frost$core$Int _20;
frost$core$Int _21;
int64_t _24;
int64_t _25;
frost$core$Int _26;
frost$core$Bit _28;
bool _29;
frost$core$Int _30;
int64_t _31;
int64_t _32;
bool _33;
frost$core$Bit _34;
bool _35;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _42;
int64_t _44;
int64_t _45;
bool _46;
frost$core$Bit _47;
bool _48;
int64_t _51;
int64_t _52;
bool _53;
frost$core$Bit _54;
bool _55;
int64_t _57;
int64_t _58;
bool _59;
frost$core$Bit _60;
bool _61;
frost$collections$Array** _64;
frost$collections$Array* _65;
frost$core$Int _66;
frost$core$Int _68;
int64_t _69;
int64_t _70;
bool _71;
frost$core$Bit _72;
bool _73;
frost$collections$CollectionView* _75;
$fn7 _76;
frost$core$Int _77;
int64_t _78;
int64_t _79;
bool _80;
frost$core$Bit _81;
bool _82;
frost$core$Int _84;
frost$core$Object*** _88;
frost$core$Object** _89;
frost$core$Int64 _90;
int64_t _91;
frost$core$Object* _92;
frost$core$Object* _93;
org$frostlang$frostc$IR$Block* _96;
frost$core$Object* _98;
org$frostlang$frostc$IR$Block* _100;
frost$core$Object* _101;
frost$core$Object* _104;
org$frostlang$frostc$IR$Block* _107;
org$frostlang$frostc$LinkedList** _108;
org$frostlang$frostc$LinkedList* _109;
frost$collections$Iterable* _110;
$fn8 _111;
frost$collections$Iterator* _112;
$fn9 _114;
frost$core$Bit _115;
bool _116;
$fn10 _119;
frost$core$Object* _120;
org$frostlang$frostc$IR$Statement* _121;
frost$core$Object* _122;
org$frostlang$frostc$IR$Statement* _124;
frost$core$Object* _125;
org$frostlang$frostc$IR$Statement* _129;
$fn11 _130;
frost$core$Bit _131;
bool _132;
org$frostlang$frostc$IR$Block* _135;
$fn12 _136;
frost$core$Bit _139;
frost$core$Object* _142;
org$frostlang$frostc$IR$Statement* _144;
frost$core$Object* _145;
frost$core$Object* _149;
org$frostlang$frostc$IR$Statement* _151;
frost$core$Object* _152;
frost$core$Object* _156;
org$frostlang$frostc$IR$Block* _158;
frost$core$Object* _159;
frost$core$Int _163;
int64_t _165;
int64_t _166;
int64_t _167;
frost$core$Int _168;
int64_t _170;
int64_t _171;
bool _172;
frost$core$Bit _173;
bool _174;
int64_t _176;
int64_t _177;
bool _178;
frost$core$Bit _179;
bool _180;
int64_t _182;
int64_t _183;
int64_t _184;
frost$core$Int _185;
int64_t _187;
int64_t _188;
bool _189;
frost$core$Bit _190;
bool _191;
int64_t _193;
int64_t _194;
bool _195;
frost$core$Bit _196;
bool _197;
int64_t _199;
int64_t _200;
int64_t _201;
frost$core$Int _202;
frost$core$Bit _206;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:18
_1 = (frost$core$Bit) {false};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:19
_4 = &param1->blocks;
_5 = *_4;
_6 = ((frost$collections$CollectionView*) _5);
ITable* $tmp13 = _6->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
_7 = $tmp13->methods[0];
_8 = _7(_6);
_9 = (frost$core$Int) {1u};
_10 = _8.value;
_11 = _9.value;
_12 = _10 - _11;
_13 = (frost$core$Int) {_12};
_14 = (frost$core$Int) {0u};
_15 = (frost$core$Int) {18446744073709551615u};
_16 = (frost$core$Bit) {true};
_17 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit(_13, _14, _15, _16);
_18 = _17.start;
*(&local1) = _18;
_20 = _17.end;
_21 = _17.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from RemoveAsserts.frost:19:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
_24 = _21.value;
_25 = -_24;
_26 = (frost$core$Int) {_25};
_28 = _17.inclusive;
_29 = _28.value;
_30 = (frost$core$Int) {0u};
_31 = _21.value;
_32 = _30.value;
_33 = _31 >= _32;
_34 = (frost$core$Bit) {_33};
_35 = _34.value;
if (_35) goto block5; else goto block6;
block5:;
if (_29) goto block7; else goto block8;
block7:;
_38 = _18.value;
_39 = _20.value;
_40 = _38 <= _39;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block2; else goto block3;
block8:;
_44 = _18.value;
_45 = _20.value;
_46 = _44 < _45;
_47 = (frost$core$Bit) {_46};
_48 = _47.value;
if (_48) goto block2; else goto block3;
block6:;
if (_29) goto block9; else goto block10;
block9:;
_51 = _18.value;
_52 = _20.value;
_53 = _51 >= _52;
_54 = (frost$core$Bit) {_53};
_55 = _54.value;
if (_55) goto block2; else goto block3;
block10:;
_57 = _18.value;
_58 = _20.value;
_59 = _57 > _58;
_60 = (frost$core$Bit) {_59};
_61 = _60.value;
if (_61) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:20
_64 = &param1->blocks;
_65 = *_64;
_66 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from RemoveAsserts.frost:20:31
_68 = (frost$core$Int) {0u};
_69 = _66.value;
_70 = _68.value;
_71 = _69 >= _70;
_72 = (frost$core$Bit) {_71};
_73 = _72.value;
if (_73) goto block14; else goto block13;
block14:;
_75 = ((frost$collections$CollectionView*) _65);
ITable* $tmp14 = _75->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp14 = $tmp14->next;
}
_76 = $tmp14->methods[0];
_77 = _76(_75);
_78 = _66.value;
_79 = _77.value;
_80 = _78 < _79;
_81 = (frost$core$Bit) {_80};
_82 = _81.value;
if (_82) goto block12; else goto block13;
block13:;
_84 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s15, _84, &$s16);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_88 = &_65->data;
_89 = *_88;
_90 = frost$core$Int64$init$frost$core$Int(_66);
_91 = _90.value;
_92 = _89[_91];
_93 = _92;
frost$core$Frost$ref$frost$core$Object$Q(_93);
_96 = ((org$frostlang$frostc$IR$Block*) _92);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
_98 = ((frost$core$Object*) _96);
frost$core$Frost$ref$frost$core$Object$Q(_98);
_100 = *(&local2);
_101 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_101);
*(&local2) = _96;
_104 = _92;
frost$core$Frost$unref$frost$core$Object$Q(_104);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:21
_107 = *(&local2);
_108 = &_107->statements;
_109 = *_108;
_110 = ((frost$collections$Iterable*) _109);
ITable* $tmp17 = _110->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp17 = $tmp17->next;
}
_111 = $tmp17->methods[0];
_112 = _111(_110);
goto block15;
block15:;
ITable* $tmp18 = _112->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp18 = $tmp18->next;
}
_114 = $tmp18->methods[0];
_115 = _114(_112);
_116 = _115.value;
if (_116) goto block17; else goto block16;
block16:;
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
ITable* $tmp19 = _112->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp19 = $tmp19->next;
}
_119 = $tmp19->methods[1];
_120 = _119(_112);
_121 = ((org$frostlang$frostc$IR$Statement*) _120);
_122 = ((frost$core$Object*) _121);
frost$core$Frost$ref$frost$core$Object$Q(_122);
_124 = *(&local3);
_125 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_125);
*(&local3) = _121;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:22
_129 = *(&local3);
_130 = ($fn20) param0->$class->vtable[2];
_131 = _130(param0, _129);
_132 = _131.value;
if (_132) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:23
_135 = *(&local2);
_136 = ($fn21) param2->$class->vtable[13];
_136(param2, _135);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:24
_139 = (frost$core$Bit) {true};
*(&local0) = _139;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:25
_142 = _120;
frost$core$Frost$unref$frost$core$Object$Q(_142);
_144 = *(&local3);
_145 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_145);
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block17;
block19:;
_149 = _120;
frost$core$Frost$unref$frost$core$Object$Q(_149);
_151 = *(&local3);
_152 = ((frost$core$Object*) _151);
frost$core$Frost$unref$frost$core$Object$Q(_152);
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block15;
block17:;
_156 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_156);
_158 = *(&local2);
_159 = ((frost$core$Object*) _158);
frost$core$Frost$unref$frost$core$Object$Q(_159);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
_163 = *(&local1);
if (_35) goto block21; else goto block22;
block21:;
_165 = _20.value;
_166 = _163.value;
_167 = _165 - _166;
_168 = (frost$core$Int) {_167};
if (_29) goto block23; else goto block24;
block23:;
_170 = _168.value;
_171 = _21.value;
_172 = _170 >= _171;
_173 = (frost$core$Bit) {_172};
_174 = _173.value;
if (_174) goto block20; else goto block3;
block24:;
_176 = _168.value;
_177 = _21.value;
_178 = _176 > _177;
_179 = (frost$core$Bit) {_178};
_180 = _179.value;
if (_180) goto block20; else goto block3;
block22:;
_182 = _163.value;
_183 = _20.value;
_184 = _182 - _183;
_185 = (frost$core$Int) {_184};
if (_29) goto block25; else goto block26;
block25:;
_187 = _185.value;
_188 = _26.value;
_189 = _187 >= _188;
_190 = (frost$core$Bit) {_189};
_191 = _190.value;
if (_191) goto block20; else goto block3;
block26:;
_193 = _185.value;
_194 = _26.value;
_195 = _193 > _194;
_196 = (frost$core$Bit) {_195};
_197 = _196.value;
if (_197) goto block20; else goto block3;
block20:;
_199 = _163.value;
_200 = _21.value;
_201 = _199 + _200;
_202 = (frost$core$Int) {_201};
*(&local1) = _202;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:29
_206 = *(&local0);
return _206;

}
void org$frostlang$frostc$pass$RemoveAsserts$init(void* rawSelf) {
org$frostlang$frostc$pass$RemoveAsserts* param0 = (org$frostlang$frostc$pass$RemoveAsserts*) rawSelf;

return;

}
void org$frostlang$frostc$pass$RemoveAsserts$cleanup(void* rawSelf) {
org$frostlang$frostc$pass$RemoveAsserts* param0 = (org$frostlang$frostc$pass$RemoveAsserts*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:5
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

