#include "org/frostlang/frostc/expression/Binary/_Closure2.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Int.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Symbol.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Binary$_Closure2$class_type org$frostlang$frostc$expression$Binary$_Closure2$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Binary$_Closure2$cleanup, org$frostlang$frostc$expression$Binary$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$R$frost$core$Bit} };

typedef frost$core$Bit (*$fn2)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32", 48, 5724515677484241007, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };

void org$frostlang$frostc$expression$Binary$_Closure2$init$org$frostlang$frostc$Type(org$frostlang$frostc$expression$Binary$_Closure2* param0, org$frostlang$frostc$Type* param1) {

frost$core$Object* _1;
org$frostlang$frostc$Type** _3;
org$frostlang$frostc$Type* _4;
frost$core$Object* _5;
org$frostlang$frostc$Type** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:215
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->left;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->left;
*_7 = param1;
return;

}
void org$frostlang$frostc$expression$Binary$_Closure2$cleanup(org$frostlang$frostc$expression$Binary$_Closure2* param0) {

frost$core$Object* _1;
org$frostlang$frostc$Type** _3;
org$frostlang$frostc$Type* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:215
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->left;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
frost$core$Bit org$frostlang$frostc$expression$Binary$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$expression$Binary$_Closure2* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Bit local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Annotations** _1;
org$frostlang$frostc$Annotations* _2;
frost$core$Int* _5;
frost$core$Int _6;
frost$core$Int _7;
int64_t _10;
int64_t _11;
int64_t _12;
frost$core$Int _13;
frost$core$Int _15;
int64_t _16;
int64_t _17;
bool _18;
frost$core$Bit _19;
org$frostlang$frostc$Type** _21;
org$frostlang$frostc$Type* _22;
org$frostlang$frostc$Type$Kind* _25;
org$frostlang$frostc$Type$Kind _26;
frost$core$Equatable* _27;
frost$core$Equatable* _28;
frost$core$Int _29;
frost$core$Int* _32;
org$frostlang$frostc$Type$Kind _34;
org$frostlang$frostc$Type$Kind _37;
frost$core$Equatable* _38;
$fn2 _39;
frost$core$Bit _40;
bool _41;
org$frostlang$frostc$FixedArray** _45;
org$frostlang$frostc$FixedArray* _46;
bool _47;
frost$core$Bit _48;
bool _49;
frost$core$Int _51;
org$frostlang$frostc$FixedArray* _54;
frost$core$Object* _55;
org$frostlang$frostc$FixedArray* _58;
frost$core$Int _59;
frost$core$Object* _60;
org$frostlang$frostc$Type* _61;
org$frostlang$frostc$Symbol* _62;
frost$core$String** _63;
frost$core$String* _64;
frost$core$Bit _65;
frost$core$Object* _66;
frost$core$Object* _68;
frost$core$Bit _74;
frost$core$Object* _75;
frost$core$Object* _77;
bool _82;
bool _83;
bool _84;
frost$core$Bit _85;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:215
_1 = &param1->annotations;
_2 = *_1;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Binary.frost:215:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
_5 = &_2->flags;
_6 = *_5;
_7 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_10 = _6.value;
_11 = _7.value;
_12 = _10 & _11;
_13 = (frost$core$Int) {_12};
_15 = (frost$core$Int) {0u};
_16 = _13.value;
_17 = _15.value;
_18 = _16 != _17;
_19 = (frost$core$Bit) {_18};
_21 = &param0->left;
_22 = *_21;
// begin inline call to function org.frostlang.frostc.Type.get_isClassLiteral():frost.core.Bit from Binary.frost:215:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:371
_25 = &_22->typeKind;
_26 = *_25;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3;
$tmp3 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3->value = _26;
_27 = ((frost$core$Equatable*) $tmp3);
_28 = _27;
_29 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:371:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_32 = &(&local2)->$rawValue;
*_32 = _29;
_34 = *(&local2);
*(&local1) = _34;
_37 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp4;
$tmp4 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4->value = _37;
_38 = ((frost$core$Equatable*) $tmp4);
ITable* $tmp5 = _28->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5 = $tmp5->next;
}
_39 = $tmp5->methods[0];
_40 = _39(_28, _38);
_41 = _40.value;
if (_41) goto block5; else goto block6;
block5:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:371:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:244
_45 = &_22->_subtypes;
_46 = *_45;
_47 = _46 != NULL;
_48 = (frost$core$Bit) {_47};
_49 = _48.value;
if (_49) goto block9; else goto block10;
block10:;
_51 = (frost$core$Int) {244u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _51, &$s7);
abort(); // unreachable
block9:;
_54 = _46;
_55 = ((frost$core$Object*) _54);
frost$core$Frost$ref$frost$core$Object$Q(_55);
_58 = _54;
_59 = (frost$core$Int) {0u};
_60 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_58, _59);
_61 = ((org$frostlang$frostc$Type*) _60);
_62 = ((org$frostlang$frostc$Symbol*) _61);
_63 = &_62->name;
_64 = *_63;
_65 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_64, &$s8);
_66 = _60;
frost$core$Frost$unref$frost$core$Object$Q(_66);
_68 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_68);
*(&local0) = _65;
goto block7;
block6:;
*(&local0) = _40;
goto block7;
block7:;
_74 = *(&local0);
_75 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_75);
_77 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_77);
// begin inline call to function frost.core.Bit.=(other:frost.core.Bit):frost.core.Bit from Binary.frost:215:64
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:25
_82 = _19.value;
_83 = _74.value;
_84 = _82 == _83;
_85 = (frost$core$Bit) {_84};
return _85;

}






