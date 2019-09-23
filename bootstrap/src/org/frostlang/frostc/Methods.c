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

void org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(void* rawSelf, frost$collections$ListView* param1) {
org$frostlang$frostc$Methods* param0 = (org$frostlang$frostc$Methods*) rawSelf;

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
frost$core$Int _34;
$fn3 _35;
frost$core$Object* _36;
org$frostlang$frostc$MethodDecl* _37;
org$frostlang$frostc$Symbol* _38;
frost$core$String** _39;
frost$core$String* _40;
frost$core$Object* _42;
org$frostlang$frostc$FixedArray* _45;
frost$core$Object* _47;
org$frostlang$frostc$FixedArray** _49;
org$frostlang$frostc$FixedArray* _50;
frost$core$Object* _51;
org$frostlang$frostc$FixedArray** _53;
frost$core$Object* _55;
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
_34 = (frost$core$Int) {0u};
ITable* $tmp7 = param1->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp7 = $tmp7->next;
}
_35 = $tmp7->methods[0];
_36 = _35(param1, _34);
_37 = ((org$frostlang$frostc$MethodDecl*) _36);
_38 = ((org$frostlang$frostc$Symbol*) _37);
_39 = &_38->name;
_40 = *_39;
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(_23, _32, _33, _40);
_42 = _36;
frost$core$Frost$unref$frost$core$Object$Q(_42);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:10
_45 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(sizeof(org$frostlang$frostc$FixedArray), (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT(_45, param1);
_47 = ((frost$core$Object*) _45);
frost$core$Frost$ref$frost$core$Object$Q(_47);
_49 = &param0->methods;
_50 = *_49;
_51 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_51);
_53 = &param0->methods;
*_53 = _45;
_55 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_55);
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
frost$core$Object* _11;
frost$collections$HashSet* _13;
frost$core$Object* _14;
frost$core$Object* _17;
frost$collections$Iterable* _20;
$fn8 _21;
frost$collections$Iterator* _22;
$fn9 _24;
frost$core$Bit _25;
bool _26;
$fn10 _29;
frost$core$Object* _30;
org$frostlang$frostc$MethodDecl* _31;
frost$core$Object* _32;
org$frostlang$frostc$MethodDecl* _34;
frost$core$Object* _35;
frost$collections$HashSet* _39;
org$frostlang$frostc$MethodDecl* _40;
frost$core$String* _41;
frost$collections$HashKey* _42;
frost$collections$HashMap** _45;
frost$collections$HashMap* _46;
frost$collections$HashKey* _47;
frost$core$Object* _48;
frost$core$Object* _51;
frost$core$Object* _53;
org$frostlang$frostc$MethodDecl* _55;
frost$core$Object* _56;
frost$core$Object* _60;
frost$collections$HashSet* _63;
frost$collections$CollectionView* _64;
$fn11 _65;
frost$core$Int _66;
frost$collections$CollectionView* _67;
$fn12 _68;
frost$core$Int _69;
int64_t _70;
int64_t _71;
bool _72;
frost$core$Bit _73;
bool _74;
frost$collections$Iterable* _87;
$fn13 _88;
frost$collections$Iterator* _89;
$fn14 _91;
frost$core$Bit _92;
bool _93;
$fn15 _96;
frost$core$Object* _97;
org$frostlang$frostc$MethodDecl* _98;
frost$core$Object* _99;
org$frostlang$frostc$MethodDecl* _101;
frost$core$Object* _102;
org$frostlang$frostc$MethodDecl* _106;
frost$core$String* _107;
frost$core$Object* _117;
frost$core$Object* _119;
org$frostlang$frostc$MethodDecl* _121;
frost$core$Object* _122;
frost$core$Object* _126;
frost$collections$HashSet* _130;
frost$collections$CollectionView* _131;
$fn16 _132;
frost$core$Int _133;
frost$collections$CollectionView* _134;
$fn17 _135;
frost$core$Int _136;
int64_t _137;
int64_t _138;
bool _139;
frost$core$Bit _140;
frost$collections$HashSet* _141;
frost$core$Object* _142;
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
_8 = (frost$collections$HashSet*) frostObjectAlloc(sizeof(frost$collections$HashSet), (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init(_8);
*(&local0) = ((frost$collections$HashSet*) NULL);
_11 = ((frost$core$Object*) _8);
frost$core$Frost$ref$frost$core$Object$Q(_11);
_13 = *(&local0);
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
*(&local0) = _8;
_17 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_17);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:17
_20 = ((frost$collections$Iterable*) param0);
ITable* $tmp18 = _20->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp18 = $tmp18->next;
}
_21 = $tmp18->methods[0];
_22 = _21(_20);
goto block3;
block3:;
ITable* $tmp19 = _22->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp19 = $tmp19->next;
}
_24 = $tmp19->methods[0];
_25 = _24(_22);
_26 = _25.value;
if (_26) goto block5; else goto block4;
block4:;
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp20 = _22->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp20 = $tmp20->next;
}
_29 = $tmp20->methods[1];
_30 = _29(_22);
_31 = ((org$frostlang$frostc$MethodDecl*) _30);
_32 = ((frost$core$Object*) _31);
frost$core$Frost$ref$frost$core$Object$Q(_32);
_34 = *(&local1);
_35 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_35);
*(&local1) = _31;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:18
_39 = *(&local0);
_40 = *(&local1);
_41 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(_40);
_42 = ((frost$collections$HashKey*) _41);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from Methods.frost:18:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
_45 = &_39->contents;
_46 = *_45;
_47 = _42;
_48 = ((frost$core$Object*) _42);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_46, _47, _48);
_51 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_51);
_53 = _30;
frost$core$Frost$unref$frost$core$Object$Q(_53);
_55 = *(&local1);
_56 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_56);
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block3;
block5:;
_60 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_60);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:20
_63 = *(&local0);
_64 = ((frost$collections$CollectionView*) _63);
ITable* $tmp21 = _64->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp21 = $tmp21->next;
}
_65 = $tmp21->methods[0];
_66 = _65(_64);
_67 = ((frost$collections$CollectionView*) param0);
ITable* $tmp22 = _67->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp22 = $tmp22->next;
}
_68 = $tmp22->methods[0];
_69 = _68(_67);
_70 = _66.value;
_71 = _69.value;
_72 = _70 < _71;
_73 = (frost$core$Bit) {_72};
_74 = _73.value;
if (_74) goto block7; else goto block8;
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
_87 = ((frost$collections$Iterable*) param0);
ITable* $tmp25 = _87->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp25 = $tmp25->next;
}
_88 = $tmp25->methods[0];
_89 = _88(_87);
goto block11;
block11:;
ITable* $tmp26 = _89->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp26 = $tmp26->next;
}
_91 = $tmp26->methods[0];
_92 = _91(_89);
_93 = _92.value;
if (_93) goto block13; else goto block12;
block12:;
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp27 = _89->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp27 = $tmp27->next;
}
_96 = $tmp27->methods[1];
_97 = _96(_89);
_98 = ((org$frostlang$frostc$MethodDecl*) _97);
_99 = ((frost$core$Object*) _98);
frost$core$Frost$ref$frost$core$Object$Q(_99);
_101 = *(&local2);
_102 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_102);
*(&local2) = _98;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:23
_106 = *(&local2);
_107 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String(_106);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Methods.frost:23:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_107);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s28);
_117 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_117);
_119 = _97;
frost$core$Frost$unref$frost$core$Object$Q(_119);
_121 = *(&local2);
_122 = ((frost$core$Object*) _121);
frost$core$Frost$unref$frost$core$Object$Q(_122);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block11;
block13:;
_126 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_126);
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Methods.frost:26
_130 = *(&local0);
_131 = ((frost$collections$CollectionView*) _130);
ITable* $tmp29 = _131->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp29 = $tmp29->next;
}
_132 = $tmp29->methods[0];
_133 = _132(_131);
_134 = ((frost$collections$CollectionView*) param0);
ITable* $tmp30 = _134->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp30 = $tmp30->next;
}
_135 = $tmp30->methods[0];
_136 = _135(_134);
_137 = _133.value;
_138 = _136.value;
_139 = _137 < _138;
_140 = (frost$core$Bit) {_139};
_141 = *(&local0);
_142 = ((frost$core$Object*) _141);
frost$core$Frost$unref$frost$core$Object$Q(_142);
*(&local0) = ((frost$collections$HashSet*) NULL);
return _140;

}
void org$frostlang$frostc$Methods$cleanup(void* rawSelf) {
org$frostlang$frostc$Methods* param0 = (org$frostlang$frostc$Methods*) rawSelf;

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

