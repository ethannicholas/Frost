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

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$expression$Call$_Closure2$class_type org$frostlang$frostc$expression$Call$_Closure2$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Call$_Closure2$cleanup, org$frostlang$frostc$expression$Call$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$GenericParameter$R$org$frostlang$frostc$Type} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32", 46, -3670043225117352222, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, -7895598607751292851, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };

void org$frostlang$frostc$expression$Call$_Closure2$init$org$frostlang$frostc$MethodRef$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT(void* rawSelf, org$frostlang$frostc$MethodRef* param1, frost$collections$HashMap* param2) {
org$frostlang$frostc$expression$Call$_Closure2* param0 = (org$frostlang$frostc$expression$Call$_Closure2*) rawSelf;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Call.frost:655
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->m;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->m;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Call.frost:655
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
void org$frostlang$frostc$expression$Call$_Closure2$cleanup(void* rawSelf) {
org$frostlang$frostc$expression$Call$_Closure2* param0 = (org$frostlang$frostc$expression$Call$_Closure2*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$MethodRef** _3;
org$frostlang$frostc$MethodRef* _4;
frost$core$Object* _5;
frost$collections$HashMap** _7;
frost$collections$HashMap* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Call.frost:655
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
org$frostlang$frostc$Type* org$frostlang$frostc$expression$Call$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$GenericParameter$R$org$frostlang$frostc$Type(void* rawSelf, org$frostlang$frostc$MethodDecl$GenericParameter* param1) {
org$frostlang$frostc$expression$Call$_Closure2* param0 = (org$frostlang$frostc$expression$Call$_Closure2*) rawSelf;

frost$collections$HashMap** _1;
frost$collections$HashMap* _2;
org$frostlang$frostc$MethodRef** _3;
org$frostlang$frostc$MethodRef* _4;
org$frostlang$frostc$MethodDecl** _5;
org$frostlang$frostc$MethodDecl* _6;
frost$core$Weak** _7;
frost$core$Weak* _8;
frost$core$Bit* _13;
frost$core$Bit _14;
bool _16;
frost$core$Int _18;
frost$core$Object** _22;
frost$core$Object* _23;
frost$core$Object* _24;
frost$core$Object* _25;
org$frostlang$frostc$ClassDecl* _28;
frost$core$String** _29;
frost$core$String* _30;
frost$core$String* _31;
org$frostlang$frostc$MethodRef** _32;
org$frostlang$frostc$MethodRef* _33;
org$frostlang$frostc$MethodDecl** _34;
org$frostlang$frostc$MethodDecl* _35;
org$frostlang$frostc$Symbol* _36;
frost$core$String** _37;
frost$core$String* _38;
frost$core$String* _39;
frost$core$String* _40;
org$frostlang$frostc$Symbol* _41;
frost$core$String** _42;
frost$core$String* _43;
frost$core$String* _44;
frost$collections$HashKey* _45;
frost$core$Object* _46;
org$frostlang$frostc$Type* _47;
bool _48;
frost$core$Bit _49;
bool _50;
frost$core$Int _52;
org$frostlang$frostc$Type* _55;
frost$core$Object* _56;
frost$core$Object* _58;
frost$core$Object* _60;
frost$core$Object* _62;
frost$core$Object* _64;
frost$core$Object* _66;
frost$core$Object* _68;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Call.frost:655
_1 = &param0->remaps;
_2 = *_1;
_3 = &param0->m;
_4 = *_3;
_5 = &_4->value;
_6 = *_5;
_7 = &_6->owner;
_8 = *_7;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Call.frost:655:72
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_13 = &_8->_valid;
_14 = *_13;
_16 = _14.value;
if (_16) goto block3; else goto block4;
block4:;
_18 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2, _18, &$s3);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_22 = &_8->value;
_23 = *_22;
_24 = _23;
_25 = _24;
frost$core$Frost$ref$frost$core$Object$Q(_25);
_28 = ((org$frostlang$frostc$ClassDecl*) _24);
_29 = &_28->name;
_30 = *_29;
_31 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_30, &$s4);
_32 = &param0->m;
_33 = *_32;
_34 = &_33->value;
_35 = *_34;
_36 = ((org$frostlang$frostc$Symbol*) _35);
_37 = &_36->name;
_38 = *_37;
_39 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_31, _38);
_40 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_39, &$s5);
_41 = ((org$frostlang$frostc$Symbol*) param1);
_42 = &_41->name;
_43 = *_42;
_44 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_40, _43);
_45 = ((frost$collections$HashKey*) _44);
_46 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(_2, _45);
_47 = ((org$frostlang$frostc$Type*) _46);
_48 = _47 != NULL;
_49 = (frost$core$Bit) {_48};
_50 = _49.value;
if (_50) goto block5; else goto block6;
block6:;
_52 = (frost$core$Int) {656u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _52, &$s7);
abort(); // unreachable
block5:;
_55 = _47;
_56 = ((frost$core$Object*) _55);
frost$core$Frost$ref$frost$core$Object$Q(_56);
_58 = _46;
frost$core$Frost$unref$frost$core$Object$Q(_58);
_60 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_60);
_62 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_62);
_64 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_64);
_66 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_66);
_68 = _24;
frost$core$Frost$unref$frost$core$Object$Q(_68);
return _55;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




