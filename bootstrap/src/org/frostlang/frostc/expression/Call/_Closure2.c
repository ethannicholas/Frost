#include "org/frostlang/frostc/expression/Call/_Closure2.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/MethodRef.h"
#include "frost/collections/HashMap.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Weak.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/HashKey.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Call$_Closure2$class_type org$frostlang$frostc$expression$Call$_Closure2$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Call$_Closure2$cleanup, org$frostlang$frostc$expression$Call$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$GenericParameter$R$org$frostlang$frostc$Type} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32", 46, -3670043225117352222, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, -7895598607751292851, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };

void org$frostlang$frostc$expression$Call$_Closure2$init$org$frostlang$frostc$MethodRef$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT(org$frostlang$frostc$expression$Call$_Closure2* param0, org$frostlang$frostc$MethodRef* param1, frost$collections$HashMap* param2) {

frost$core$Object* _1;
org$frostlang$frostc$MethodRef** _3;
org$frostlang$frostc$MethodRef* _4;
frost$core$Object* _5;
org$frostlang$frostc$MethodRef** _7;
frost$core$Object* _10;
frost$collections$HashMap** _12;
frost$collections$HashMap* _13;
frost$core$Object* _14;
frost$collections$HashMap** _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Call.frost:670
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->m;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->m;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Call.frost:670
_10 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = &param0->remaps;
_13 = *_12;
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = &param0->remaps;
*_16 = param2;
return;

}
void org$frostlang$frostc$expression$Call$_Closure2$cleanup(org$frostlang$frostc$expression$Call$_Closure2* param0) {

frost$core$Object* _1;
org$frostlang$frostc$MethodRef** _3;
org$frostlang$frostc$MethodRef* _4;
frost$core$Object* _5;
frost$collections$HashMap** _7;
frost$collections$HashMap* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Call.frost:670
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->m;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->remaps;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$expression$Call$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$GenericParameter$R$org$frostlang$frostc$Type(org$frostlang$frostc$expression$Call$_Closure2* param0, org$frostlang$frostc$MethodDecl$GenericParameter* param1) {

frost$collections$HashMap** _1;
frost$collections$HashMap* _2;
frost$collections$HashMap* _3;
org$frostlang$frostc$MethodRef** _4;
org$frostlang$frostc$MethodRef* _5;
org$frostlang$frostc$MethodDecl** _6;
org$frostlang$frostc$MethodDecl* _7;
frost$core$Weak** _8;
frost$core$Weak* _9;
frost$core$Weak* _10;
frost$core$Bit* _15;
frost$core$Bit _16;
bool _18;
frost$core$Int _20;
frost$core$Object** _24;
frost$core$Object* _25;
frost$core$Object* _26;
frost$core$Object* _27;
org$frostlang$frostc$ClassDecl* _30;
frost$core$String** _31;
frost$core$String* _32;
frost$core$String* _33;
org$frostlang$frostc$MethodRef** _34;
org$frostlang$frostc$MethodRef* _35;
org$frostlang$frostc$MethodDecl** _36;
org$frostlang$frostc$MethodDecl* _37;
org$frostlang$frostc$Symbol* _38;
frost$core$String** _39;
frost$core$String* _40;
frost$core$String* _41;
frost$core$String* _42;
org$frostlang$frostc$Symbol* _43;
frost$core$String** _44;
frost$core$String* _45;
frost$core$String* _46;
frost$collections$HashKey* _47;
frost$core$Object* _48;
org$frostlang$frostc$Type* _49;
bool _50;
frost$core$Bit _51;
bool _52;
frost$core$Int _54;
org$frostlang$frostc$Type* _57;
frost$core$Object* _58;
frost$core$Object* _60;
frost$core$Object* _62;
frost$core$Object* _64;
frost$core$Object* _66;
frost$core$Object* _68;
frost$core$Object* _70;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Call.frost:670
_1 = &param0->remaps;
_2 = *_1;
_3 = _2;
_4 = &param0->m;
_5 = *_4;
_6 = &_5->value;
_7 = *_6;
_8 = &_7->owner;
_9 = *_8;
_10 = _9;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Call.frost:670:72
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_15 = &_10->_valid;
_16 = *_15;
_18 = _16.value;
if (_18) goto block3; else goto block4;
block4:;
_20 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2, _20);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_24 = &_10->value;
_25 = *_24;
_26 = _25;
_27 = _26;
frost$core$Frost$ref$frost$core$Object$Q(_27);
_30 = ((org$frostlang$frostc$ClassDecl*) _26);
_31 = &_30->name;
_32 = *_31;
_33 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_32, &$s3);
_34 = &param0->m;
_35 = *_34;
_36 = &_35->value;
_37 = *_36;
_38 = ((org$frostlang$frostc$Symbol*) _37);
_39 = &_38->name;
_40 = *_39;
_41 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_33, _40);
_42 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_41, &$s4);
_43 = ((org$frostlang$frostc$Symbol*) param1);
_44 = &_43->name;
_45 = *_44;
_46 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_42, _45);
_47 = ((frost$collections$HashKey*) _46);
_48 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(_3, _47);
_49 = ((org$frostlang$frostc$Type*) _48);
_50 = _49 != NULL;
_51 = (frost$core$Bit) {_50};
_52 = _51.value;
if (_52) goto block5; else goto block6;
block6:;
_54 = (frost$core$Int) {671u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _54, &$s6);
abort(); // unreachable
block5:;
_57 = _49;
_58 = ((frost$core$Object*) _57);
frost$core$Frost$ref$frost$core$Object$Q(_58);
_60 = _48;
frost$core$Frost$unref$frost$core$Object$Q(_60);
_62 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_62);
_64 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_64);
_66 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_66);
_68 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_68);
_70 = _26;
frost$core$Frost$unref$frost$core$Object$Q(_70);
return _57;

}






