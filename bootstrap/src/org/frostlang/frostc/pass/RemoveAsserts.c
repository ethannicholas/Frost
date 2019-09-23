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
#include "frost/unsafe/NewPointer.h"
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
frost$unsafe$NewPointer* _88;
frost$unsafe$NewPointer _89;
int64_t _90;
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
$fn8 _112;
frost$collections$Iterator* _113;
$fn9 _115;
frost$core$Bit _116;
bool _117;
$fn10 _120;
frost$core$Object* _121;
org$frostlang$frostc$IR$Statement* _122;
frost$core$Object* _123;
org$frostlang$frostc$IR$Statement* _125;
frost$core$Object* _126;
org$frostlang$frostc$IR$Statement* _130;
$fn11 _131;
frost$core$Bit _132;
bool _133;
org$frostlang$frostc$IR$Block* _136;
$fn12 _137;
frost$core$Bit _140;
frost$core$Object* _143;
org$frostlang$frostc$IR$Statement* _145;
frost$core$Object* _146;
frost$core$Object* _150;
org$frostlang$frostc$IR$Statement* _152;
frost$core$Object* _153;
frost$core$Object* _157;
org$frostlang$frostc$IR$Block* _159;
frost$core$Object* _160;
frost$core$Int _164;
int64_t _166;
int64_t _167;
int64_t _168;
frost$core$Int _169;
int64_t _171;
int64_t _172;
bool _173;
frost$core$Bit _174;
bool _175;
int64_t _177;
int64_t _178;
bool _179;
frost$core$Bit _180;
bool _181;
int64_t _183;
int64_t _184;
int64_t _185;
frost$core$Int _186;
int64_t _188;
int64_t _189;
bool _190;
frost$core$Bit _191;
bool _192;
int64_t _194;
int64_t _195;
bool _196;
frost$core$Bit _197;
bool _198;
int64_t _200;
int64_t _201;
int64_t _202;
frost$core$Int _203;
frost$core$Bit _207;
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
_90 = _89.value;
_91 = frost$core$Int64$init$frost$core$Int(_66);
_92 = _91.value;
_93 = ((frost$core$Object**)_90)[_92];
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
ITable* $tmp17 = _111->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp17 = $tmp17->next;
}
_112 = $tmp17->methods[0];
_113 = _112(_111);
goto block15;
block15:;
ITable* $tmp18 = _113->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp18 = $tmp18->next;
}
_115 = $tmp18->methods[0];
_116 = _115(_113);
_117 = _116.value;
if (_117) goto block17; else goto block16;
block16:;
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
ITable* $tmp19 = _113->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp19 = $tmp19->next;
}
_120 = $tmp19->methods[1];
_121 = _120(_113);
_122 = ((org$frostlang$frostc$IR$Statement*) _121);
_123 = ((frost$core$Object*) _122);
frost$core$Frost$ref$frost$core$Object$Q(_123);
_125 = *(&local3);
_126 = ((frost$core$Object*) _125);
frost$core$Frost$unref$frost$core$Object$Q(_126);
*(&local3) = _122;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:22
_130 = *(&local3);
_131 = ($fn20) param0->$class->vtable[2];
_132 = _131(param0, _130);
_133 = _132.value;
if (_133) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:23
_136 = *(&local2);
_137 = ($fn21) param2->$class->vtable[13];
_137(param2, _136);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:24
_140 = (frost$core$Bit) {true};
*(&local0) = _140;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:25
_143 = _121;
frost$core$Frost$unref$frost$core$Object$Q(_143);
_145 = *(&local3);
_146 = ((frost$core$Object*) _145);
frost$core$Frost$unref$frost$core$Object$Q(_146);
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block17;
block19:;
_150 = _121;
frost$core$Frost$unref$frost$core$Object$Q(_150);
_152 = *(&local3);
_153 = ((frost$core$Object*) _152);
frost$core$Frost$unref$frost$core$Object$Q(_153);
*(&local3) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block15;
block17:;
_157 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_157);
_159 = *(&local2);
_160 = ((frost$core$Object*) _159);
frost$core$Frost$unref$frost$core$Object$Q(_160);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
_164 = *(&local1);
if (_35) goto block21; else goto block22;
block21:;
_166 = _20.value;
_167 = _164.value;
_168 = _166 - _167;
_169 = (frost$core$Int) {_168};
if (_29) goto block23; else goto block24;
block23:;
_171 = _169.value;
_172 = _21.value;
_173 = _171 >= _172;
_174 = (frost$core$Bit) {_173};
_175 = _174.value;
if (_175) goto block20; else goto block3;
block24:;
_177 = _169.value;
_178 = _21.value;
_179 = _177 > _178;
_180 = (frost$core$Bit) {_179};
_181 = _180.value;
if (_181) goto block20; else goto block3;
block22:;
_183 = _164.value;
_184 = _20.value;
_185 = _183 - _184;
_186 = (frost$core$Int) {_185};
if (_29) goto block25; else goto block26;
block25:;
_188 = _186.value;
_189 = _26.value;
_190 = _188 >= _189;
_191 = (frost$core$Bit) {_190};
_192 = _191.value;
if (_192) goto block20; else goto block3;
block26:;
_194 = _186.value;
_195 = _26.value;
_196 = _194 > _195;
_197 = (frost$core$Bit) {_196};
_198 = _197.value;
if (_198) goto block20; else goto block3;
block20:;
_200 = _164.value;
_201 = _21.value;
_202 = _200 + _201;
_203 = (frost$core$Int) {_202};
*(&local1) = _203;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/RemoveAsserts.frost:29
_207 = *(&local0);
return _207;

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

