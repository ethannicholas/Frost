#include "org/frostlang/frostc/CBackend/AutoContext.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/CBackend.h"
#include "org/frostlang/frostc/CBackend/EnclosingContext.h"
#include "frost/collections/Stack.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/CollectionView.h"
#include "frost/unsafe/Pointer.h"
#include "frost/core/Int64.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$CBackend$AutoContext$class_type org$frostlang$frostc$CBackend$AutoContext$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$CBackend$AutoContext$cleanup} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn3)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn5)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x42\x61\x63\x6b\x65\x6e\x64\x2e\x41\x75\x74\x6f\x43\x6f\x6e\x74\x65\x78\x74", 41, -8930304058143818609, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x42\x61\x63\x6b\x65\x6e\x64\x2e\x66\x72\x6f\x73\x74", 14, -8061044029211103966, NULL };

void org$frostlang$frostc$CBackend$AutoContext$init$org$frostlang$frostc$CBackend$org$frostlang$frostc$CBackend$EnclosingContext(void* rawSelf, org$frostlang$frostc$CBackend* param1, org$frostlang$frostc$CBackend$EnclosingContext* param2) {
org$frostlang$frostc$CBackend$AutoContext* param0 = (org$frostlang$frostc$CBackend$AutoContext*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$CBackend** _3;
org$frostlang$frostc$CBackend* _4;
frost$core$Object* _5;
org$frostlang$frostc$CBackend** _7;
frost$core$Object* _10;
org$frostlang$frostc$CBackend$EnclosingContext** _12;
org$frostlang$frostc$CBackend$EnclosingContext* _13;
frost$core$Object* _14;
org$frostlang$frostc$CBackend$EnclosingContext** _16;
frost$collections$Stack** _19;
frost$collections$Stack* _20;
frost$core$Object* _21;
frost$collections$Array** _24;
frost$collections$Array* _25;
frost$core$Object* _26;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:26
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->backend;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->backend;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:27
_10 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = &param0->context;
_13 = *_12;
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = &param0->context;
*_16 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:28
_19 = &param1->enclosingContexts;
_20 = *_19;
_21 = ((frost$core$Object*) param2);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from CBackend.frost:28:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
_24 = &_20->contents;
_25 = *_24;
_26 = _21;
frost$collections$Array$add$frost$collections$Array$T(_25, _26);
return;

}
void org$frostlang$frostc$CBackend$AutoContext$cleanup(void* rawSelf) {
org$frostlang$frostc$CBackend$AutoContext* param0 = (org$frostlang$frostc$CBackend$AutoContext*) rawSelf;

org$frostlang$frostc$CBackend** _1;
org$frostlang$frostc$CBackend* _2;
frost$collections$Stack** _3;
frost$collections$Stack* _4;
frost$core$Int _5;
frost$core$Int _7;
int64_t _8;
int64_t _9;
bool _10;
frost$core$Bit _11;
bool _12;
frost$collections$Array** _16;
frost$collections$Array* _17;
frost$collections$CollectionView* _18;
$fn2 _19;
frost$core$Int _20;
int64_t _22;
int64_t _23;
bool _24;
frost$core$Bit _25;
bool _26;
frost$core$Int _28;
frost$collections$Array** _32;
frost$collections$Array* _33;
frost$collections$CollectionView* _34;
$fn3 _35;
frost$core$Int _36;
int64_t _37;
int64_t _38;
bool _39;
frost$core$Bit _40;
bool _41;
frost$core$Int _43;
frost$collections$Array** _47;
frost$collections$Array* _48;
frost$collections$Array** _49;
frost$collections$Array* _50;
frost$collections$CollectionView* _51;
$fn4 _52;
frost$core$Int _53;
frost$core$Int _54;
int64_t _55;
int64_t _56;
int64_t _57;
frost$core$Int _58;
int64_t _59;
int64_t _60;
int64_t _61;
frost$core$Int _62;
frost$core$Int _64;
int64_t _65;
int64_t _66;
bool _67;
frost$core$Bit _68;
bool _69;
frost$collections$CollectionView* _71;
$fn5 _72;
frost$core$Int _73;
int64_t _74;
int64_t _75;
bool _76;
frost$core$Bit _77;
bool _78;
frost$core$Int _80;
frost$unsafe$Pointer* _84;
frost$unsafe$Pointer _85;
int64_t _86;
frost$core$Int64 _87;
int64_t _88;
frost$core$Object* _89;
frost$core$Object* _90;
frost$core$Object* _93;
frost$core$Object* _94;
frost$core$Object* _96;
org$frostlang$frostc$CBackend$EnclosingContext* _99;
org$frostlang$frostc$CBackend$EnclosingContext** _100;
org$frostlang$frostc$CBackend$EnclosingContext* _101;
bool _102;
frost$core$Bit _103;
bool _104;
frost$core$Int _106;
frost$core$Object* _109;
org$frostlang$frostc$CBackend** _112;
org$frostlang$frostc$CBackend* _113;
frost$collections$Stack** _114;
frost$collections$Stack* _115;
frost$core$Object* _116;
org$frostlang$frostc$CBackend$EnclosingContext* _117;
frost$core$Object* _118;
frost$core$Object* _121;
org$frostlang$frostc$CBackend** _123;
org$frostlang$frostc$CBackend* _124;
frost$core$Object* _125;
org$frostlang$frostc$CBackend$EnclosingContext** _127;
org$frostlang$frostc$CBackend$EnclosingContext* _128;
frost$core$Object* _129;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:33
_1 = &param0->backend;
_2 = *_1;
_3 = &_2->enclosingContexts;
_4 = *_3;
_5 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from CBackend.frost:33:45
_7 = (frost$core$Int) {0u};
_8 = _5.value;
_9 = _7.value;
_10 = _8 >= _9;
_11 = (frost$core$Bit) {_10};
_12 = _11.value;
if (_12) goto block4; else goto block3;
block4:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_16 = &_4->contents;
_17 = *_16;
_18 = ((frost$collections$CollectionView*) _17);
ITable* $tmp6 = _18->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6 = $tmp6->next;
}
_19 = $tmp6->methods[0];
_20 = _19(_18);
_22 = _5.value;
_23 = _20.value;
_24 = _22 < _23;
_25 = (frost$core$Bit) {_24};
_26 = _25.value;
if (_26) goto block2; else goto block3;
block3:;
_28 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _28, &$s8);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_32 = &_4->contents;
_33 = *_32;
_34 = ((frost$collections$CollectionView*) _33);
ITable* $tmp9 = _34->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp9 = $tmp9->next;
}
_35 = $tmp9->methods[0];
_36 = _35(_34);
_37 = _36.value;
_38 = _5.value;
_39 = _37 > _38;
_40 = (frost$core$Bit) {_39};
_41 = _40.value;
if (_41) goto block6; else goto block7;
block7:;
_43 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s10, _43);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_47 = &_4->contents;
_48 = *_47;
_49 = &_4->contents;
_50 = *_49;
_51 = ((frost$collections$CollectionView*) _50);
ITable* $tmp11 = _51->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
_52 = $tmp11->methods[0];
_53 = _52(_51);
_54 = (frost$core$Int) {1u};
_55 = _53.value;
_56 = _54.value;
_57 = _55 - _56;
_58 = (frost$core$Int) {_57};
_59 = _58.value;
_60 = _5.value;
_61 = _59 - _60;
_62 = (frost$core$Int) {_61};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_64 = (frost$core$Int) {0u};
_65 = _62.value;
_66 = _64.value;
_67 = _65 >= _66;
_68 = (frost$core$Bit) {_67};
_69 = _68.value;
if (_69) goto block11; else goto block10;
block11:;
_71 = ((frost$collections$CollectionView*) _48);
ITable* $tmp12 = _71->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
_72 = $tmp12->methods[0];
_73 = _72(_71);
_74 = _62.value;
_75 = _73.value;
_76 = _74 < _75;
_77 = (frost$core$Bit) {_76};
_78 = _77.value;
if (_78) goto block9; else goto block10;
block10:;
_80 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _80, &$s14);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_84 = &_48->data;
_85 = *_84;
_86 = _85.value;
_87 = frost$core$Int64$init$frost$core$Int(_62);
_88 = _87.value;
_89 = ((frost$core$Object**)_86)[_88];
_90 = _89;
frost$core$Frost$ref$frost$core$Object$Q(_90);
_93 = _89;
_94 = _93;
frost$core$Frost$ref$frost$core$Object$Q(_94);
_96 = _89;
frost$core$Frost$unref$frost$core$Object$Q(_96);
_99 = ((org$frostlang$frostc$CBackend$EnclosingContext*) _93);
_100 = &param0->context;
_101 = *_100;
_102 = _99 == _101;
_103 = (frost$core$Bit) {_102};
_104 = _103.value;
if (_104) goto block12; else goto block13;
block13:;
_106 = (frost$core$Int) {33u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s15, _106);
abort(); // unreachable
block12:;
_109 = _93;
frost$core$Frost$unref$frost$core$Object$Q(_109);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:34
_112 = &param0->backend;
_113 = *_112;
_114 = &_113->enclosingContexts;
_115 = *_114;
_116 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_115);
_117 = ((org$frostlang$frostc$CBackend$EnclosingContext*) _116);
_118 = _116;
frost$core$Frost$unref$frost$core$Object$Q(_118);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CBackend.frost:32
_121 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_121);
_123 = &param0->backend;
_124 = *_123;
_125 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_125);
_127 = &param0->context;
_128 = *_127;
_129 = ((frost$core$Object*) _128);
frost$core$Frost$unref$frost$core$Object$Q(_129);
return;

}

