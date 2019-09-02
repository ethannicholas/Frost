#include "org/frostlang/frostc/pass/RemoveAsserts.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Position.h"
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

typedef frost$core$Int (*$fn5)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn6)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn7)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn8)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn9)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn10)(org$frostlang$frostc$pass$RemoveAsserts*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn11)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*);
typedef frost$core$Bit (*$fn19)(org$frostlang$frostc$pass$RemoveAsserts*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn20)(org$frostlang$frostc$pass$Analyzer*, org$frostlang$frostc$IR$Block*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x52\x65\x6d\x6f\x76\x65\x41\x73\x73\x65\x72\x74\x73", 39, 2675365451163764056, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x46\x61\x69\x6c\x75\x72\x65", 16, -1047342833001589897, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74", 16, 4237142976622831502, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -775704626125802412, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };

frost$core$Bit org$frostlang$frostc$pass$RemoveAsserts$isAssertionFail$org$frostlang$frostc$IR$Statement$R$frost$core$Bit(org$frostlang$frostc$pass$RemoveAsserts* param0, org$frostlang$frostc$IR$Statement* param1) {

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
org$frostlang$frostc$Position* _13;
org$frostlang$frostc$Position _14;
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
frost$core$Weak* _37;
frost$core$Bit* _42;
frost$core$Bit _43;
bool _45;
frost$core$Int _47;
frost$core$Object** _51;
frost$core$Object* _52;
frost$core$Object* _53;
frost$core$Object* _54;
org$frostlang$frostc$ClassDecl* _57;
frost$core$String** _58;
frost$core$String* _59;
frost$core$Bit _60;
frost$core$Object* _61;
frost$core$Bit _67;
org$frostlang$frostc$MethodDecl* _68;
frost$core$Object* _69;
frost$core$Bit _74;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:7
_1 = &param1->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RemoveAsserts.frost:8:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = (org$frostlang$frostc$Position*) (param1->$data + 0);
_14 = *_13;
_15 = (org$frostlang$frostc$MethodDecl**) (param1->$data + 24);
_16 = *_15;
*(&local0) = ((org$frostlang$frostc$MethodDecl*) NULL);
_18 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = *(&local0);
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
*(&local0) = _16;
_24 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
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
_37 = _36;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from RemoveAsserts.frost:9:55
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
_42 = &_37->_valid;
_43 = *_42;
_45 = _43.value;
if (_45) goto block10; else goto block11;
block11:;
_47 = (frost$core$Int) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3, _47);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
_51 = &_37->value;
_52 = *_51;
_53 = _52;
_54 = _53;
frost$core$Frost$ref$frost$core$Object$Q(_54);
_57 = ((org$frostlang$frostc$ClassDecl*) _53);
_58 = &_57->name;
_59 = *_58;
_60 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_59, &$s4);
_61 = _53;
frost$core$Frost$unref$frost$core$Object$Q(_61);
*(&local1) = _60;
goto block7;
block6:;
*(&local1) = _31;
goto block7;
block7:;
_67 = *(&local1);
_68 = *(&local0);
_69 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_69);
*(&local0) = ((org$frostlang$frostc$MethodDecl*) NULL);
return _67;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:12
_74 = (frost$core$Bit) {false};
return _74;
block1:;
goto block12;
block12:;

}
frost$core$Bit org$frostlang$frostc$pass$RemoveAsserts$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit(org$frostlang$frostc$pass$RemoveAsserts* param0, org$frostlang$frostc$IR* param1, org$frostlang$frostc$pass$Analyzer* param2) {

frost$core$Bit local0;
frost$core$Int local1;
org$frostlang$frostc$IR$Block* local2 = NULL;
org$frostlang$frostc$IR$Statement* local3 = NULL;
frost$core$Bit _1;
frost$collections$Array** _4;
frost$collections$Array* _5;
frost$collections$CollectionView* _6;
$fn5 _7;
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
frost$collections$Array* _66;
frost$core$Int _67;
frost$core$Int _69;
int64_t _70;
int64_t _71;
bool _72;
frost$core$Bit _73;
bool _74;
frost$collections$CollectionView* _76;
$fn6 _77;
frost$core$Int _78;
int64_t _79;
int64_t _80;
bool _81;
frost$core$Bit _82;
bool _83;
frost$core$Int _85;
frost$core$Object*** _89;
frost$core$Object** _90;
frost$core$Int64 _91;
int64_t _92;
frost$core$Object* _93;
frost$core$Object* _94;
org$frostlang$frostc$IR$Block* _97;
frost$core$Object* _99;
org$frostlang$frostc$IR$Block* _101;
frost$core$Object* _102;
frost$core$Object* _105;
org$frostlang$frostc$IR$Block* _108;
org$frostlang$frostc$LinkedList** _109;
org$frostlang$frostc$LinkedList* _110;
frost$collections$Iterable* _111;
frost$collections$Iterable* _112;
$fn7 _113;
frost$collections$Iterator* _114;
frost$collections$Iterator* _115;
frost$collections$Iterator* _117;
$fn8 _118;
frost$core$Bit _119;
bool _120;
frost$collections$Iterator* _123;
$fn9 _124;
frost$core$Object* _125;
org$frostlang$frostc$IR$Statement* _126;
frost$core$Object* _127;
org$frostlang$frostc$IR$Statement* _129;
frost$core$Object* _130;
org$frostlang$frostc$IR$Statement* _134;
$fn10 _135;
frost$core$Bit _136;
bool _137;
org$frostlang$frostc$IR$Block* _140;
$fn11 _141;
frost$core$Bit _144;
frost$core$Object* _147;
org$frostlang$frostc$IR$Statement* _149;
frost$core$Object* _150;
frost$core$Object* _154;
org$frostlang$frostc$IR$Statement* _156;
frost$core$Object* _157;
frost$core$Object* _161;
org$frostlang$frostc$IR$Block* _163;
frost$core$Object* _164;
frost$core$Int _168;
int64_t _170;
int64_t _171;
int64_t _172;
frost$core$Int _173;
int64_t _175;
int64_t _176;
bool _177;
frost$core$Bit _178;
bool _179;
int64_t _181;
int64_t _182;
bool _183;
frost$core$Bit _184;
bool _185;
int64_t _187;
int64_t _188;
int64_t _189;
frost$core$Int _190;
int64_t _192;
int64_t _193;
bool _194;
frost$core$Bit _195;
bool _196;
int64_t _198;
int64_t _199;
bool _200;
frost$core$Bit _201;
bool _202;
int64_t _204;
int64_t _205;
int64_t _206;
frost$core$Int _207;
frost$core$Bit _211;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:18
_1 = (frost$core$Bit) {false};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:19
_4 = &param1->blocks;
_5 = *_4;
_6 = ((frost$collections$CollectionView*) _5);
ITable* $tmp12 = _6->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
_7 = $tmp12->methods[0];
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:87
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
_66 = _65;
_67 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from RemoveAsserts.frost:20:31
_69 = (frost$core$Int) {0u};
_70 = _67.value;
_71 = _69.value;
_72 = _70 >= _71;
_73 = (frost$core$Bit) {_72};
_74 = _73.value;
if (_74) goto block14; else goto block13;
block14:;
_76 = ((frost$collections$CollectionView*) _66);
ITable* $tmp13 = _76->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
_77 = $tmp13->methods[0];
_78 = _77(_76);
_79 = _67.value;
_80 = _78.value;
_81 = _79 < _80;
_82 = (frost$core$Bit) {_81};
_83 = _82.value;
if (_83) goto block12; else goto block13;
block13:;
_85 = (frost$core$Int) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _85, &$s15);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
_89 = &_66->data;
_90 = *_89;
_91 = frost$core$Int64$init$frost$core$Int(_67);
_92 = _91.value;
_93 = _90[_92];
_94 = _93;
frost$core$Frost$ref$frost$core$Object$Q(_94);
_97 = ((org$frostlang$frostc$IR$Block*) _93);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
_99 = ((frost$core$Object*) _97);
frost$core$Frost$ref$frost$core$Object$Q(_99);
_101 = *(&local2);
_102 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_102);
*(&local2) = _97;
_105 = _93;
frost$core$Frost$unref$frost$core$Object$Q(_105);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:21
_108 = *(&local2);
_109 = &_108->statements;
_110 = *_109;
_111 = ((frost$collections$Iterable*) _110);
_112 = _111;
ITable* $tmp16 = _112->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp16 = $tmp16->next;
}
_113 = $tmp16->methods[0];
_114 = _113(_112);
_115 = _114;
goto block15;
block15:;
_117 = _115;
ITable* $tmp17 = _117->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp17 = $tmp17->next;
}
_118 = $tmp17->methods[0];
_119 = _118(_117);
_120 = _119.value;
if (_120) goto block17; else goto block16;
block16:;
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
_123 = _115;
ITable* $tmp18 = _123->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp18 = $tmp18->next;
}
_124 = $tmp18->methods[1];
_125 = _124(_123);
_126 = ((org$frostlang$frostc$IR$Statement*) _125);
_127 = ((frost$core$Object*) _126);
frost$core$Frost$ref$frost$core$Object$Q(_127);
_129 = *(&local3);
_130 = ((frost$core$Object*) _129);
frost$core$Frost$unref$frost$core$Object$Q(_130);
*(&local3) = _126;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:22
_134 = *(&local3);
_135 = ($fn19) param0->$class->vtable[2];
_136 = _135(param0, _134);
_137 = _136.value;
if (_137) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:23
_140 = *(&local2);
_141 = ($fn20) param2->$class->vtable[13];
_141(param2, _140);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:24
_144 = (frost$core$Bit) {true};
*(&local0) = _144;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:25
_147 = _125;
frost$core$Frost$unref$frost$core$Object$Q(_147);
_149 = *(&local3);
_150 = ((frost$core$Object*) _149);
frost$core$Frost$unref$frost$core$Object$Q(_150);
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block17;
block19:;
_154 = _125;
frost$core$Frost$unref$frost$core$Object$Q(_154);
_156 = *(&local3);
_157 = ((frost$core$Object*) _156);
frost$core$Frost$unref$frost$core$Object$Q(_157);
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block15;
block17:;
_161 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_161);
_163 = *(&local2);
_164 = ((frost$core$Object*) _163);
frost$core$Frost$unref$frost$core$Object$Q(_164);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
_168 = *(&local1);
if (_35) goto block21; else goto block22;
block21:;
_170 = _20.value;
_171 = _168.value;
_172 = _170 - _171;
_173 = (frost$core$Int) {_172};
if (_29) goto block23; else goto block24;
block23:;
_175 = _173.value;
_176 = _21.value;
_177 = _175 >= _176;
_178 = (frost$core$Bit) {_177};
_179 = _178.value;
if (_179) goto block20; else goto block3;
block24:;
_181 = _173.value;
_182 = _21.value;
_183 = _181 > _182;
_184 = (frost$core$Bit) {_183};
_185 = _184.value;
if (_185) goto block20; else goto block3;
block22:;
_187 = _168.value;
_188 = _20.value;
_189 = _187 - _188;
_190 = (frost$core$Int) {_189};
if (_29) goto block25; else goto block26;
block25:;
_192 = _190.value;
_193 = _26.value;
_194 = _192 >= _193;
_195 = (frost$core$Bit) {_194};
_196 = _195.value;
if (_196) goto block20; else goto block3;
block26:;
_198 = _190.value;
_199 = _26.value;
_200 = _198 > _199;
_201 = (frost$core$Bit) {_200};
_202 = _201.value;
if (_202) goto block20; else goto block3;
block20:;
_204 = _168.value;
_205 = _21.value;
_206 = _204 + _205;
_207 = (frost$core$Int) {_206};
*(&local1) = _207;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:29
_211 = *(&local0);
return _211;

}
void org$frostlang$frostc$pass$RemoveAsserts$init(org$frostlang$frostc$pass$RemoveAsserts* param0) {

return;

}
void org$frostlang$frostc$pass$RemoveAsserts$cleanup(org$frostlang$frostc$pass$RemoveAsserts* param0) {

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:5
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

