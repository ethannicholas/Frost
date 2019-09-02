#include "org/frostlang/frostc/CCodeGenerator/AutoContext.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/CCodeGenerator.h"
#include "org/frostlang/frostc/CCodeGenerator/EnclosingContext.h"
#include "frost/collections/Stack.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"


static frost$core$String $s1;
org$frostlang$frostc$CCodeGenerator$AutoContext$class_type org$frostlang$frostc$CCodeGenerator$AutoContext$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$AutoContext$cleanup} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn3)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn5)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x41\x75\x74\x6f\x43\x6f\x6e\x74\x65\x78\x74", 47, 6998785848884278453, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 4580239808655160548, NULL };

void org$frostlang$frostc$CCodeGenerator$AutoContext$init$org$frostlang$frostc$CCodeGenerator$org$frostlang$frostc$CCodeGenerator$EnclosingContext(org$frostlang$frostc$CCodeGenerator$AutoContext* param0, org$frostlang$frostc$CCodeGenerator* param1, org$frostlang$frostc$CCodeGenerator$EnclosingContext* param2) {

frost$core$Object* _1;
org$frostlang$frostc$CCodeGenerator** _3;
org$frostlang$frostc$CCodeGenerator* _4;
frost$core$Object* _5;
org$frostlang$frostc$CCodeGenerator** _7;
frost$core$Object* _10;
org$frostlang$frostc$CCodeGenerator$EnclosingContext** _12;
org$frostlang$frostc$CCodeGenerator$EnclosingContext* _13;
frost$core$Object* _14;
org$frostlang$frostc$CCodeGenerator$EnclosingContext** _16;
frost$collections$Stack** _19;
frost$collections$Stack* _20;
frost$collections$Stack* _21;
frost$core$Object* _22;
frost$collections$Array** _25;
frost$collections$Array* _26;
frost$collections$Array* _27;
frost$core$Object* _28;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:26
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->cg;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->cg;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:27
_10 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = &param0->context;
_13 = *_12;
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = &param0->context;
*_16 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:28
_19 = &param1->enclosingContexts;
_20 = *_19;
_21 = _20;
_22 = ((frost$core$Object*) param2);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from CCodeGenerator.frost:28:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:16
_25 = &_21->contents;
_26 = *_25;
_27 = _26;
_28 = _22;
frost$collections$Array$add$frost$collections$Array$T(_27, _28);
return;

}
void org$frostlang$frostc$CCodeGenerator$AutoContext$cleanup(org$frostlang$frostc$CCodeGenerator$AutoContext* param0) {

org$frostlang$frostc$CCodeGenerator** _1;
org$frostlang$frostc$CCodeGenerator* _2;
frost$collections$Stack** _3;
frost$collections$Stack* _4;
frost$collections$Stack* _5;
frost$core$Int _6;
frost$core$Int _8;
int64_t _9;
int64_t _10;
bool _11;
frost$core$Bit _12;
bool _13;
frost$collections$Array** _17;
frost$collections$Array* _18;
frost$collections$CollectionView* _19;
$fn2 _20;
frost$core$Int _21;
int64_t _23;
int64_t _24;
bool _25;
frost$core$Bit _26;
bool _27;
frost$core$Int _29;
frost$collections$Array** _33;
frost$collections$Array* _34;
frost$collections$CollectionView* _35;
$fn3 _36;
frost$core$Int _37;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _42;
frost$core$Int _44;
frost$collections$Array** _48;
frost$collections$Array* _49;
frost$collections$Array* _50;
frost$collections$Array** _51;
frost$collections$Array* _52;
frost$collections$CollectionView* _53;
$fn4 _54;
frost$core$Int _55;
frost$core$Int _56;
int64_t _57;
int64_t _58;
int64_t _59;
frost$core$Int _60;
int64_t _61;
int64_t _62;
int64_t _63;
frost$core$Int _64;
frost$core$Int _66;
int64_t _67;
int64_t _68;
bool _69;
frost$core$Bit _70;
bool _71;
frost$collections$CollectionView* _73;
$fn5 _74;
frost$core$Int _75;
int64_t _76;
int64_t _77;
bool _78;
frost$core$Bit _79;
bool _80;
frost$core$Int _82;
frost$core$Object*** _86;
frost$core$Object** _87;
frost$core$Int64 _88;
int64_t _89;
frost$core$Object* _90;
frost$core$Object* _91;
frost$core$Object* _94;
frost$core$Object* _95;
frost$core$Object* _97;
org$frostlang$frostc$CCodeGenerator$EnclosingContext* _100;
org$frostlang$frostc$CCodeGenerator$EnclosingContext** _101;
org$frostlang$frostc$CCodeGenerator$EnclosingContext* _102;
bool _103;
frost$core$Bit _104;
bool _105;
frost$core$Int _107;
frost$core$Object* _110;
org$frostlang$frostc$CCodeGenerator** _113;
org$frostlang$frostc$CCodeGenerator* _114;
frost$collections$Stack** _115;
frost$collections$Stack* _116;
frost$collections$Stack* _117;
frost$core$Object* _118;
org$frostlang$frostc$CCodeGenerator$EnclosingContext* _119;
frost$core$Object* _120;
frost$core$Object* _123;
org$frostlang$frostc$CCodeGenerator** _125;
org$frostlang$frostc$CCodeGenerator* _126;
frost$core$Object* _127;
org$frostlang$frostc$CCodeGenerator$EnclosingContext** _129;
org$frostlang$frostc$CCodeGenerator$EnclosingContext* _130;
frost$core$Object* _131;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:33
_1 = &param0->cg;
_2 = *_1;
_3 = &_2->enclosingContexts;
_4 = *_3;
_5 = _4;
_6 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from CCodeGenerator.frost:33:40
_8 = (frost$core$Int) {0u};
_9 = _6.value;
_10 = _8.value;
_11 = _9 >= _10;
_12 = (frost$core$Bit) {_11};
_13 = _12.value;
if (_13) goto block4; else goto block3;
block4:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
_17 = &_5->contents;
_18 = *_17;
_19 = ((frost$collections$CollectionView*) _18);
ITable* $tmp6 = _19->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6 = $tmp6->next;
}
_20 = $tmp6->methods[0];
_21 = _20(_19);
_23 = _6.value;
_24 = _21.value;
_25 = _23 < _24;
_26 = (frost$core$Bit) {_25};
_27 = _26.value;
if (_27) goto block2; else goto block3;
block3:;
_29 = (frost$core$Int) {30u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _29, &$s8);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
_33 = &_5->contents;
_34 = *_33;
_35 = ((frost$collections$CollectionView*) _34);
ITable* $tmp9 = _35->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp9 = $tmp9->next;
}
_36 = $tmp9->methods[0];
_37 = _36(_35);
_38 = _37.value;
_39 = _6.value;
_40 = _38 > _39;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block6; else goto block7;
block7:;
_44 = (frost$core$Int) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s10, _44);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
_48 = &_5->contents;
_49 = *_48;
_50 = _49;
_51 = &_5->contents;
_52 = *_51;
_53 = ((frost$collections$CollectionView*) _52);
ITable* $tmp11 = _53->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
_54 = $tmp11->methods[0];
_55 = _54(_53);
_56 = (frost$core$Int) {1u};
_57 = _55.value;
_58 = _56.value;
_59 = _57 - _58;
_60 = (frost$core$Int) {_59};
_61 = _60.value;
_62 = _6.value;
_63 = _61 - _62;
_64 = (frost$core$Int) {_63};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.stub:32:16
_66 = (frost$core$Int) {0u};
_67 = _64.value;
_68 = _66.value;
_69 = _67 >= _68;
_70 = (frost$core$Bit) {_69};
_71 = _70.value;
if (_71) goto block11; else goto block10;
block11:;
_73 = ((frost$collections$CollectionView*) _50);
ITable* $tmp12 = _73->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
_74 = $tmp12->methods[0];
_75 = _74(_73);
_76 = _64.value;
_77 = _75.value;
_78 = _76 < _77;
_79 = (frost$core$Bit) {_78};
_80 = _79.value;
if (_80) goto block9; else goto block10;
block10:;
_82 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _82, &$s14);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_86 = &_50->data;
_87 = *_86;
_88 = frost$core$Int64$init$frost$core$Int(_64);
_89 = _88.value;
_90 = _87[_89];
_91 = _90;
frost$core$Frost$ref$frost$core$Object$Q(_91);
_94 = _90;
_95 = _94;
frost$core$Frost$ref$frost$core$Object$Q(_95);
_97 = _90;
frost$core$Frost$unref$frost$core$Object$Q(_97);
_100 = ((org$frostlang$frostc$CCodeGenerator$EnclosingContext*) _94);
_101 = &param0->context;
_102 = *_101;
_103 = _100 == _102;
_104 = (frost$core$Bit) {_103};
_105 = _104.value;
if (_105) goto block12; else goto block13;
block13:;
_107 = (frost$core$Int) {33u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s15, _107);
abort(); // unreachable
block12:;
_110 = _94;
frost$core$Frost$unref$frost$core$Object$Q(_110);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:34
_113 = &param0->cg;
_114 = *_113;
_115 = &_114->enclosingContexts;
_116 = *_115;
_117 = _116;
_118 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_117);
_119 = ((org$frostlang$frostc$CCodeGenerator$EnclosingContext*) _118);
_120 = _118;
frost$core$Frost$unref$frost$core$Object$Q(_120);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CCodeGenerator.frost:32
_123 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_123);
_125 = &param0->cg;
_126 = *_125;
_127 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_127);
_129 = &param0->context;
_130 = *_129;
_131 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_131);
return;

}

