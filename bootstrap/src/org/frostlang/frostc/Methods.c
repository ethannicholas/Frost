#include "org/frostlang/frostc/Methods.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/core/Frost.h"
#include "frost/collections/HashSet.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/HashKey.h"
#include "frost/collections/HashMap.h"
#include "frost/io/Console.h"


static frost$core$String $s1;
org$frostlang$frostc$Methods$class_type org$frostlang$frostc$Methods$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Methods$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn3)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$Iterator* (*$fn8)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn9)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn10)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn11)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn12)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn13)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn14)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn15)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn16)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn17)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x73", 28, -7892381055912215442, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x73\x2e\x66\x72\x6f\x73\x74", 13, 3446750053624965341, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x73\x2e\x69\x6e\x69\x74\x28\x6d\x65\x74\x68\x6f\x64\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3e\x29", 127, -2859513609938129634, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x3a", 18, 5562811063883540698, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };

void org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(org$frostlang$frostc$Methods* param0, frost$collections$ListView* param1) {

org$frostlang$frostc$Symbol$Kind local0;
org$frostlang$frostc$Symbol$Kind local1;
frost$collections$CollectionView* _0;
$fn2 _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _4;
int64_t _5;
bool _6;
frost$core$Bit _7;
bool _8;
frost$core$Bit _10;
bool _13;
bool _14;
frost$core$Bit _15;
bool _17;
frost$core$Int _19;
org$frostlang$frostc$Symbol* _23;
frost$core$Int _24;
frost$core$Int* _27;
org$frostlang$frostc$Symbol$Kind _29;
org$frostlang$frostc$Symbol$Kind _32;
org$frostlang$frostc$Position _33;
frost$collections$ListView* _34;
frost$core$Int _35;
$fn3 _36;
frost$core$Object* _37;
org$frostlang$frostc$MethodDecl* _38;
org$frostlang$frostc$Symbol* _39;
frost$core$String** _40;
frost$core$String* _41;
frost$core$Object* _43;
org$frostlang$frostc$FixedArray* _46;
org$frostlang$frostc$FixedArray* _47;
frost$collections$ListView* _48;
frost$core$Object* _50;
org$frostlang$frostc$FixedArray** _52;
org$frostlang$frostc$FixedArray* _53;
frost$core$Object* _54;
org$frostlang$frostc$FixedArray** _56;
frost$core$Object* _58;
_0 = ((frost$collections$CollectionView*) param1);
ITable* $tmp4 = _0->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4 = $tmp4->next;
}
_1 = $tmp4->methods[0];
_2 = _1(_0);
_3 = (frost$core$Int) {0u};
_4 = _2.value;
_5 = _3.value;
_6 = _4 > _5;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block3; else goto block2;
block3:;
_10 = org$frostlang$frostc$Methods$containsDuplicates$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$R$frost$core$Bit(param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Methods.frost:7:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_13 = _10.value;
_14 = !_13;
_15 = (frost$core$Bit) {_14};
_17 = _15.value;
if (_17) goto block1; else goto block2;
block2:;
_19 = (frost$core$Int) {8u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _19, &$s6);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:9
_23 = ((org$frostlang$frostc$Symbol*) param0);
_24 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from Methods.frost:9:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_27 = &(&local1)->$rawValue;
*_27 = _24;
_29 = *(&local1);
*(&local0) = _29;
_32 = *(&local0);
_33 = org$frostlang$frostc$Position$init();
_34 = param1;
_35 = (frost$core$Int) {0u};
ITable* $tmp7 = _34->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp7 = $tmp7->next;
}
_36 = $tmp7->methods[0];
_37 = _36(_34, _35);
_38 = ((org$frostlang$frostc$MethodDecl*) _37);
_39 = ((org$frostlang$frostc$Symbol*) _38);
_40 = &_39->name;
_41 = *_40;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(_23, _32, _33, _41);
_43 = _37;
frost$core$Frost$unref$frost$core$Object$Q(_43);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:10
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
_46 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
_47 = _46;
_48 = param1;
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT(_47, _48);
_50 = ((frost$core$Object*) _46);
frost$core$Frost$ref$frost$core$Object$Q(_50);
_52 = &param0->methods;
_53 = *_52;
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
_56 = &param0->methods;
*_56 = _46;
_58 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_58);
return;

}
frost$core$Bit org$frostlang$frostc$Methods$containsDuplicates$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$R$frost$core$Bit(frost$collections$ListView* param0) {

frost$collections$HashSet* local0 = NULL;
org$frostlang$frostc$MethodDecl* local1 = NULL;
org$frostlang$frostc$MethodDecl* local2 = NULL;
frost$core$Bit _1;
bool _2;
frost$core$Bit _5;
frost$collections$HashSet* _8;
frost$collections$HashSet* _9;
frost$core$Object* _12;
frost$collections$HashSet* _14;
frost$core$Object* _15;
frost$core$Object* _18;
frost$collections$Iterable* _21;
frost$collections$Iterable* _22;
$fn8 _23;
frost$collections$Iterator* _24;
frost$collections$Iterator* _25;
frost$collections$Iterator* _27;
$fn9 _28;
frost$core$Bit _29;
bool _30;
frost$collections$Iterator* _33;
$fn10 _34;
frost$core$Object* _35;
org$frostlang$frostc$MethodDecl* _36;
frost$core$Object* _37;
org$frostlang$frostc$MethodDecl* _39;
frost$core$Object* _40;
frost$collections$HashSet* _44;
frost$collections$HashSet* _45;
org$frostlang$frostc$MethodDecl* _46;
frost$core$String* _47;
frost$collections$HashKey* _48;
frost$collections$HashMap** _51;
frost$collections$HashMap* _52;
frost$collections$HashMap* _53;
frost$collections$HashKey* _54;
frost$core$Object* _55;
frost$core$Object* _58;
frost$core$Object* _60;
org$frostlang$frostc$MethodDecl* _62;
frost$core$Object* _63;
frost$core$Object* _67;
frost$collections$HashSet* _70;
frost$collections$CollectionView* _71;
$fn11 _72;
frost$core$Int _73;
frost$collections$CollectionView* _74;
$fn12 _75;
frost$core$Int _76;
int64_t _77;
int64_t _78;
bool _79;
frost$core$Bit _80;
bool _81;
frost$collections$Iterable* _94;
frost$collections$Iterable* _95;
$fn13 _96;
frost$collections$Iterator* _97;
frost$collections$Iterator* _98;
frost$collections$Iterator* _100;
$fn14 _101;
frost$core$Bit _102;
bool _103;
frost$collections$Iterator* _106;
$fn15 _107;
frost$core$Object* _108;
org$frostlang$frostc$MethodDecl* _109;
frost$core$Object* _110;
org$frostlang$frostc$MethodDecl* _112;
frost$core$Object* _113;
org$frostlang$frostc$MethodDecl* _117;
frost$core$String* _118;
frost$core$Object* _128;
frost$core$Object* _130;
org$frostlang$frostc$MethodDecl* _132;
frost$core$Object* _133;
frost$core$Object* _137;
frost$collections$HashSet* _141;
frost$collections$CollectionView* _142;
$fn16 _143;
frost$core$Int _144;
frost$collections$CollectionView* _145;
$fn17 _146;
frost$core$Int _147;
int64_t _148;
int64_t _149;
bool _150;
frost$core$Bit _151;
frost$collections$HashSet* _152;
frost$core$Object* _153;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:15
_1 = (frost$core$Bit) {true};
_2 = _1.value;
if (_2) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:15
_5 = (frost$core$Bit) {false};
return _5;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:16
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
_8 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
_9 = _8;
frost$collections$HashSet$init(_9);
*(&local0) = ((frost$collections$HashSet*) NULL);
_12 = ((frost$core$Object*) _8);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = *(&local0);
_15 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_15);
*(&local0) = _8;
_18 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_18);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:17
_21 = ((frost$collections$Iterable*) param0);
_22 = _21;
ITable* $tmp18 = _22->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp18 = $tmp18->next;
}
_23 = $tmp18->methods[0];
_24 = _23(_22);
_25 = _24;
goto block3;
block3:;
_27 = _25;
ITable* $tmp19 = _27->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp19 = $tmp19->next;
}
_28 = $tmp19->methods[0];
_29 = _28(_27);
_30 = _29.value;
if (_30) goto block5; else goto block4;
block4:;
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
_33 = _25;
ITable* $tmp20 = _33->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp20 = $tmp20->next;
}
_34 = $tmp20->methods[1];
_35 = _34(_33);
_36 = ((org$frostlang$frostc$MethodDecl*) _35);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$ref$frost$core$Object$Q(_37);
_39 = *(&local1);
_40 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_40);
*(&local1) = _36;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:18
_44 = *(&local0);
_45 = _44;
_46 = *(&local1);
_47 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(_46);
_48 = ((frost$collections$HashKey*) _47);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Methods.frost:18:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
_51 = &_45->contents;
_52 = *_51;
_53 = _52;
_54 = _48;
_55 = ((frost$core$Object*) _48);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_53, _54, _55);
_58 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_58);
_60 = _35;
frost$core$Frost$unref$frost$core$Object$Q(_60);
_62 = *(&local1);
_63 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_63);
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block3;
block5:;
_67 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_67);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:20
_70 = *(&local0);
_71 = ((frost$collections$CollectionView*) _70);
ITable* $tmp21 = _71->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp21 = $tmp21->next;
}
_72 = $tmp21->methods[0];
_73 = _72(_71);
_74 = ((frost$collections$CollectionView*) param0);
ITable* $tmp22 = _74->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp22 = $tmp22->next;
}
_75 = $tmp22->methods[0];
_76 = _75(_74);
_77 = _73.value;
_78 = _76.value;
_79 = _77 < _78;
_80 = (frost$core$Bit) {_79};
_81 = _80.value;
if (_81) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:21
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Methods.frost:21:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s23);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s24);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:22
_94 = ((frost$collections$Iterable*) param0);
_95 = _94;
ITable* $tmp25 = _95->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp25 = $tmp25->next;
}
_96 = $tmp25->methods[0];
_97 = _96(_95);
_98 = _97;
goto block11;
block11:;
_100 = _98;
ITable* $tmp26 = _100->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp26 = $tmp26->next;
}
_101 = $tmp26->methods[0];
_102 = _101(_100);
_103 = _102.value;
if (_103) goto block13; else goto block12;
block12:;
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
_106 = _98;
ITable* $tmp27 = _106->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp27 = $tmp27->next;
}
_107 = $tmp27->methods[1];
_108 = _107(_106);
_109 = ((org$frostlang$frostc$MethodDecl*) _108);
_110 = ((frost$core$Object*) _109);
frost$core$Frost$ref$frost$core$Object$Q(_110);
_112 = *(&local2);
_113 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_113);
*(&local2) = _109;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:23
_117 = *(&local2);
_118 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String(_117);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Methods.frost:23:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_118);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s28);
_128 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_128);
_130 = _108;
frost$core$Frost$unref$frost$core$Object$Q(_130);
_132 = *(&local2);
_133 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_133);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block11;
block13:;
_137 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_137);
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:26
_141 = *(&local0);
_142 = ((frost$collections$CollectionView*) _141);
ITable* $tmp29 = _142->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp29 = $tmp29->next;
}
_143 = $tmp29->methods[0];
_144 = _143(_142);
_145 = ((frost$collections$CollectionView*) param0);
ITable* $tmp30 = _145->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp30 = $tmp30->next;
}
_146 = $tmp30->methods[0];
_147 = _146(_145);
_148 = _144.value;
_149 = _147.value;
_150 = _148 < _149;
_151 = (frost$core$Bit) {_150};
_152 = *(&local0);
_153 = ((frost$core$Object*) _152);
frost$core$Frost$unref$frost$core$Object$Q(_153);
*(&local0) = ((frost$collections$HashSet*) NULL);
return _151;

}
void org$frostlang$frostc$Methods$cleanup(org$frostlang$frostc$Methods* param0) {

org$frostlang$frostc$Symbol* _1;
org$frostlang$frostc$FixedArray** _3;
org$frostlang$frostc$FixedArray* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:4
_1 = ((org$frostlang$frostc$Symbol*) param0);
org$frostlang$frostc$Symbol$cleanup(_1);
_3 = &param0->methods;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}

