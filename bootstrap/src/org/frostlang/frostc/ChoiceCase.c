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


static frost$core$String $s1;
org$frostlang$frostc$ChoiceCase$class_type org$frostlang$frostc$ChoiceCase$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { org$frostlang$frostc$ChoiceCase$get_asString$R$frost$core$String, org$frostlang$frostc$ChoiceCase$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65", 31, -1681702743889979521, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };

void org$frostlang$frostc$ChoiceCase$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$frost$core$Int$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$ChoiceCase* param0, org$frostlang$frostc$ClassDecl* param1, org$frostlang$frostc$Position param2, frost$core$String* param3, frost$core$String* param4, frost$core$Int param5, frost$collections$ListView* param6) {

org$frostlang$frostc$Compiler$Resolution local0;
org$frostlang$frostc$Compiler$Resolution local1;
org$frostlang$frostc$Symbol$Kind local2;
org$frostlang$frostc$Symbol$Kind local3;
frost$core$Weak* _1;
frost$core$Weak* _2;
frost$core$Object* _3;
frost$core$Object* _5;
frost$core$Weak** _7;
frost$core$Weak* _8;
frost$core$Object* _9;
frost$core$Weak** _11;
frost$core$Object* _13;
frost$core$Int _16;
frost$core$Int* _19;
org$frostlang$frostc$Compiler$Resolution _21;
org$frostlang$frostc$Compiler$Resolution _24;
org$frostlang$frostc$Compiler$Resolution* _25;
frost$core$Weak* _28;
frost$core$Weak* _29;
org$frostlang$frostc$ClassDecl* _30;
frost$core$Object* _31;
frost$core$Object* _33;
frost$core$Weak** _35;
frost$core$Weak* _36;
frost$core$Object* _37;
frost$core$Weak** _39;
frost$core$Object* _41;
frost$core$Object* _44;
frost$core$String** _46;
frost$core$String* _47;
frost$core$Object* _48;
frost$core$String** _50;
frost$core$Int* _53;
frost$collections$Array* _56;
frost$collections$Array* _57;
frost$collections$CollectionView* _58;
frost$collections$CollectionView* _59;
frost$core$Object* _61;
frost$collections$Array** _63;
frost$collections$Array* _64;
frost$core$Object* _65;
frost$collections$Array** _67;
frost$core$Object* _69;
org$frostlang$frostc$Symbol* _72;
frost$core$Int _73;
frost$core$Int* _76;
org$frostlang$frostc$Symbol$Kind _78;
org$frostlang$frostc$Symbol$Kind _81;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:15
FROST_ASSERT(32 == sizeof(frost$core$Weak));
_1 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
_2 = _1;
_3 = ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_2, _3);
_5 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &param0->initMethod;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->initMethod;
*_11 = _1;
_13 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:17
_16 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from ChoiceCase.frost:17:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
_19 = &(&local1)->$rawValue;
*_19 = _16;
_21 = *(&local1);
*(&local0) = _21;
_24 = *(&local0);
_25 = &param0->resolved;
*_25 = _24;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:21
FROST_ASSERT(32 == sizeof(frost$core$Weak));
_28 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
_29 = _28;
_30 = param1;
_31 = ((frost$core$Object*) _30);
frost$core$Weak$init$frost$core$Weak$T$Q(_29, _31);
_33 = ((frost$core$Object*) _28);
frost$core$Frost$ref$frost$core$Object$Q(_33);
_35 = &param0->owner;
_36 = *_35;
_37 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_37);
_39 = &param0->owner;
*_39 = _28;
_41 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_41);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:22
_44 = ((frost$core$Object*) param4);
frost$core$Frost$ref$frost$core$Object$Q(_44);
_46 = &param0->doccomment;
_47 = *_46;
_48 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_48);
_50 = &param0->doccomment;
*_50 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:23
_53 = &param0->rawValue;
*_53 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:24
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_56 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_57 = _56;
_58 = ((frost$collections$CollectionView*) param6);
_59 = _58;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_57, _59);
_61 = ((frost$core$Object*) _56);
frost$core$Frost$ref$frost$core$Object$Q(_61);
_63 = &param0->fields;
_64 = *_63;
_65 = ((frost$core$Object*) _64);
frost$core$Frost$unref$frost$core$Object$Q(_65);
_67 = &param0->fields;
*_67 = _56;
_69 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_69);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:25
_72 = ((org$frostlang$frostc$Symbol*) param0);
_73 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from ChoiceCase.frost:25:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
_76 = &(&local3)->$rawValue;
*_76 = _73;
_78 = *(&local3);
*(&local2) = _78;
_81 = *(&local2);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(_72, _81, param2, param3);
return;

}
frost$core$String* org$frostlang$frostc$ChoiceCase$get_asString$R$frost$core$String(org$frostlang$frostc$ChoiceCase* param0) {

frost$core$Weak** _1;
frost$core$Weak* _2;
frost$core$Weak* _3;
frost$core$Bit* _8;
frost$core$Bit _9;
bool _11;
frost$core$Int _13;
frost$core$Object** _17;
frost$core$Object* _18;
frost$core$Object* _19;
frost$core$Object* _20;
org$frostlang$frostc$ClassDecl* _23;
frost$core$String** _24;
frost$core$String* _25;
frost$core$Object* _28;
frost$core$String* _31;
org$frostlang$frostc$Symbol* _32;
frost$core$String** _33;
frost$core$String* _34;
frost$core$String* _35;
frost$core$String* _36;
frost$core$Object* _37;
frost$core$Object* _39;
frost$core$Object* _41;
frost$core$Object* _43;
frost$core$Object* _45;
frost$core$Object* _47;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ChoiceCase.frost:30
_1 = &param0->owner;
_2 = *_1;
_3 = _2;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ChoiceCase.frost:30:19
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
_8 = &_3->_valid;
_9 = *_8;
_11 = _9.value;
if (_11) goto block3; else goto block4;
block4:;
_13 = (frost$core$Int) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2, _13);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
_17 = &_3->value;
_18 = *_17;
_19 = _18;
_20 = _19;
frost$core$Frost$ref$frost$core$Object$Q(_20);
_23 = ((org$frostlang$frostc$ClassDecl*) _19);
_24 = &_23->name;
_25 = *_24;
// begin inline call to function frost.core.String.get_asString():frost.core.String from ChoiceCase.frost:30:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:112
_28 = ((frost$core$Object*) _25);
frost$core$Frost$ref$frost$core$Object$Q(_28);
_31 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_25, &$s3);
_32 = ((org$frostlang$frostc$Symbol*) param0);
_33 = &_32->name;
_34 = *_33;
_35 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_31, _34);
_36 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_35, &$s4);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$ref$frost$core$Object$Q(_37);
_39 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_39);
_41 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = _19;
frost$core$Frost$unref$frost$core$Object$Q(_47);
return _36;

}
void org$frostlang$frostc$ChoiceCase$cleanup(org$frostlang$frostc$ChoiceCase* param0) {

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






