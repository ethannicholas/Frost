#include "org/frostlang/frostc/ChoiceCase.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Int.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/core/Weak.h"
#include "frost/core/Object.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$ChoiceCase$class_type org$frostlang$frostc$ChoiceCase$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { org$frostlang$frostc$ChoiceCase$get_asString$R$frost$core$String, org$frostlang$frostc$ChoiceCase$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65", 31, -1681702743889979521, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };

void org$frostlang$frostc$ChoiceCase$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$frost$core$Int$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT(void* rawSelf, org$frostlang$frostc$ClassDecl* param1, org$frostlang$frostc$Position param2, frost$core$String* param3, frost$core$String* param4, frost$core$Int param5, frost$collections$ListView* param6) {
org$frostlang$frostc$ChoiceCase* param0 = (org$frostlang$frostc$ChoiceCase*) rawSelf;

org$frostlang$frostc$Compiler$Resolution local0;
org$frostlang$frostc$Compiler$Resolution local1;
org$frostlang$frostc$Symbol$Kind local2;
org$frostlang$frostc$Symbol$Kind local3;
frost$core$Weak* _1;
frost$core$Object* _2;
frost$core$Object* _4;
frost$core$Weak** _6;
frost$core$Weak* _7;
frost$core$Object* _8;
frost$core$Weak** _10;
frost$core$Object* _12;
frost$core$Int _15;
frost$core$Int* _18;
org$frostlang$frostc$Compiler$Resolution _20;
org$frostlang$frostc$Compiler$Resolution _23;
org$frostlang$frostc$Compiler$Resolution* _24;
frost$core$Weak* _27;
org$frostlang$frostc$ClassDecl* _28;
frost$core$Object* _29;
frost$core$Object* _31;
frost$core$Weak** _33;
frost$core$Weak* _34;
frost$core$Object* _35;
frost$core$Weak** _37;
frost$core$Object* _39;
frost$core$Object* _42;
frost$core$String** _44;
frost$core$String* _45;
frost$core$Object* _46;
frost$core$String** _48;
frost$core$Int* _51;
frost$collections$Array* _54;
frost$collections$CollectionView* _55;
frost$core$Object* _57;
frost$collections$Array** _59;
frost$collections$Array* _60;
frost$core$Object* _61;
frost$collections$Array** _63;
frost$core$Object* _65;
org$frostlang$frostc$Symbol* _68;
frost$core$Int _69;
frost$core$Int* _72;
org$frostlang$frostc$Symbol$Kind _74;
org$frostlang$frostc$Symbol$Kind _77;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:15
_1 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_2 = ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_1, _2);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->initMethod;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_10 = &param0->initMethod;
*_10 = _1;
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:17
_15 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from ChoiceCase.frost:17:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
_18 = &(&local1)->$rawValue;
*_18 = _15;
_20 = *(&local1);
*(&local0) = _20;
_23 = *(&local0);
_24 = &param0->resolved;
*_24 = _23;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:21
_27 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_28 = param1;
_29 = ((frost$core$Object*) _28);
frost$core$Weak$init$frost$core$Weak$T$Q(_27, _29);
_31 = ((frost$core$Object*) _27);
frost$core$Frost$ref$frost$core$Object$Q(_31);
_33 = &param0->owner;
_34 = *_33;
_35 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_35);
_37 = &param0->owner;
*_37 = _27;
_39 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_39);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:22
_42 = ((frost$core$Object*) param4);
frost$core$Frost$ref$frost$core$Object$Q(_42);
_44 = &param0->doccomment;
_45 = *_44;
_46 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_46);
_48 = &param0->doccomment;
*_48 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:23
_51 = &param0->rawValue;
*_51 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:24
_54 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_55 = ((frost$collections$CollectionView*) param6);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_54, _55);
_57 = ((frost$core$Object*) _54);
frost$core$Frost$ref$frost$core$Object$Q(_57);
_59 = &param0->fields;
_60 = *_59;
_61 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_61);
_63 = &param0->fields;
*_63 = _54;
_65 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_65);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:25
_68 = ((org$frostlang$frostc$Symbol*) param0);
_69 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from ChoiceCase.frost:25:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_72 = &(&local3)->$rawValue;
*_72 = _69;
_74 = *(&local3);
*(&local2) = _74;
_77 = *(&local2);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(_68, _77, param2, param3);
return;

}
frost$core$String* org$frostlang$frostc$ChoiceCase$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$ChoiceCase* param0 = (org$frostlang$frostc$ChoiceCase*) rawSelf;

frost$core$Weak** _1;
frost$core$Weak* _2;
frost$core$Bit* _7;
frost$core$Bit _8;
bool _10;
frost$core$Int _12;
frost$core$Object** _16;
frost$core$Object* _17;
frost$core$Object* _18;
frost$core$Object* _19;
org$frostlang$frostc$ClassDecl* _22;
frost$core$String** _23;
frost$core$String* _24;
frost$core$Object* _27;
frost$core$String* _30;
org$frostlang$frostc$Symbol* _31;
frost$core$String** _32;
frost$core$String* _33;
frost$core$String* _34;
frost$core$String* _35;
frost$core$Object* _36;
frost$core$Object* _38;
frost$core$Object* _40;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$Object* _46;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:30
_1 = &param0->owner;
_2 = *_1;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ChoiceCase.frost:30:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_7 = &_2->_valid;
_8 = *_7;
_10 = _8.value;
if (_10) goto block3; else goto block4;
block4:;
_12 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2, _12, &$s3);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_16 = &_2->value;
_17 = *_16;
_18 = _17;
_19 = _18;
frost$core$Frost$ref$frost$core$Object$Q(_19);
_22 = ((org$frostlang$frostc$ClassDecl*) _18);
_23 = &_22->name;
_24 = *_23;
// begin inline call to function frost.core.String.get_asString():frost.core.String from ChoiceCase.frost:30:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_27 = ((frost$core$Object*) _24);
frost$core$Frost$ref$frost$core$Object$Q(_27);
_30 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_24, &$s4);
_31 = ((org$frostlang$frostc$Symbol*) param0);
_32 = &_31->name;
_33 = *_32;
_34 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_30, _33);
_35 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_34, &$s5);
_36 = ((frost$core$Object*) _35);
frost$core$Frost$ref$frost$core$Object$Q(_36);
_38 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_38);
_40 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_40);
_42 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_44);
_46 = _18;
frost$core$Frost$unref$frost$core$Object$Q(_46);
return _35;

}
void org$frostlang$frostc$ChoiceCase$cleanup(void* rawSelf) {
org$frostlang$frostc$ChoiceCase* param0 = (org$frostlang$frostc$ChoiceCase*) rawSelf;

org$frostlang$frostc$Symbol* _1;
frost$core$Weak** _3;
frost$core$Weak* _4;
frost$core$Object* _5;
frost$core$String** _7;
frost$core$String* _8;
frost$core$Object* _9;
frost$collections$Array** _11;
frost$collections$Array* _12;
frost$core$Object* _13;
frost$core$Weak** _15;
frost$core$Weak* _16;
frost$core$Object* _17;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:4
_1 = ((org$frostlang$frostc$Symbol*) param0);
org$frostlang$frostc$Symbol$cleanup(_1);
_3 = &param0->owner;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->doccomment;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->fields;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = &param0->initMethod;
_16 = *_15;
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




