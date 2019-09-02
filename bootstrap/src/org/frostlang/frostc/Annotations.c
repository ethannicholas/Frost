#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int.h"
#include "frost/collections/ListView.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableString.h"
#include "org/frostlang/frostc/Annotations/Expression.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"


static frost$core$String $s1;
org$frostlang$frostc$Annotations$class_type org$frostlang$frostc$Annotations$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Annotations$get_asString$R$frost$core$String, org$frostlang$frostc$Annotations$cleanup, org$frostlang$frostc$Annotations$$ADD$frost$core$Int$R$org$frostlang$frostc$Annotations, org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isProtected$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isPackage$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isImplicit$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isSpecialize$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isUnsafeImmutable$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isCapture$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isStub$R$frost$core$Bit, org$frostlang$frostc$Annotations$get_isNoReturn$R$frost$core$Bit} };

typedef frost$collections$Iterator* (*$fn4)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn5)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn6)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn7)(org$frostlang$frostc$Annotations$Expression*);
typedef frost$core$String* (*$fn30)(org$frostlang$frostc$Annotations$Expression*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 32, -3727525998185663494, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x66\x72\x6f\x73\x74", 17, 6603721120407380261, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e", 181, -9180470419585452727, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65\x0a", 9, 7504085677159738224, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64\x0a", 11, 3417735785989968063, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65\x0a", 9, 7316564790028378509, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x63\x6c\x61\x73\x73\x0a", 7, -8772872116996701327, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x0a", 10, -598795757614138593, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c\x0a", 10, 6354908901121230922, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74\x0a", 10, -9136437784257450902, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x66\x69\x6e\x61\x6c\x0a", 7, 3361673370950359069, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74\x0a", 10, 6386724094415238349, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65\x0a", 8, -3755101626165136332, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x0a", 12, -7973885740183628362, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x77\x65\x61\x6b\x0a", 6, -1069795085517334493, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x0a", 11, 5212321009198887816, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x0a", 17, -3089315765389776073, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74\x0a", 9, 435752407526547110, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x63\x61\x70\x74\x75\x72\x65\x0a", 9, 5160618025363691719, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x0a", 10, 3497896125064590416, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x66\x72\x6f\x73\x74", 17, 6603721120407380261, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e", 175, 7470130727508762403, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };

void org$frostlang$frostc$Annotations$init(org$frostlang$frostc$Annotations* param0) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:88
_1 = (frost$core$Int) {0u};
org$frostlang$frostc$Annotations$init$frost$core$Int(param0, _1);
return;

}
void org$frostlang$frostc$Annotations$init$frost$core$Int(org$frostlang$frostc$Annotations* param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:92
org$frostlang$frostc$Annotations$init$frost$core$Int$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q(param0, param1, ((frost$collections$ListView*) NULL));
return;

}
void org$frostlang$frostc$Annotations$init$frost$core$Int$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q(org$frostlang$frostc$Annotations* param0, frost$core$Int param1, frost$collections$ListView* param2) {

frost$core$Int* _1;
bool _4;
frost$core$Bit _5;
bool _6;
frost$collections$Array* _9;
frost$collections$Array* _10;
bool _11;
frost$core$Bit _12;
bool _13;
frost$core$Int _15;
frost$collections$ListView* _18;
frost$collections$CollectionView* _19;
frost$collections$Array* _21;
frost$core$Object* _22;
frost$collections$Array** _24;
frost$collections$Array* _25;
frost$core$Object* _26;
frost$collections$Array** _28;
frost$core$Object* _30;
frost$core$Object* _35;
frost$collections$Array** _37;
frost$collections$Array* _38;
frost$core$Object* _39;
frost$collections$Array** _41;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:96
_1 = &param0->flags;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:97
_4 = param2 != NULL;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:98
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_9 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_10 = _9;
_11 = param2 != NULL;
_12 = (frost$core$Bit) {_11};
_13 = _12.value;
if (_13) goto block4; else goto block5;
block5:;
_15 = (frost$core$Int) {98u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2, _15, &$s3);
abort(); // unreachable
block4:;
_18 = param2;
_19 = ((frost$collections$CollectionView*) _18);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_10, _19);
_21 = _9;
_22 = ((frost$core$Object*) _21);
frost$core$Frost$ref$frost$core$Object$Q(_22);
_24 = &param0->expressions;
_25 = *_24;
_26 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_26);
_28 = &param0->expressions;
*_28 = _21;
_30 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_30);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:101
_35 = ((frost$core$Object*) ((frost$collections$Array*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_35);
_37 = &param0->expressions;
_38 = *_37;
_39 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_39);
_41 = &param0->expressions;
*_41 = ((frost$collections$Array*) NULL);
goto block2;
block2:;
return;

}
org$frostlang$frostc$Annotations* org$frostlang$frostc$Annotations$$ADD$frost$core$Int$R$org$frostlang$frostc$Annotations(org$frostlang$frostc$Annotations* param0, frost$core$Int param1) {

org$frostlang$frostc$Annotations* _1;
frost$core$Int* _2;
frost$core$Int _3;
int64_t _4;
int64_t _5;
int64_t _6;
frost$core$Int _7;
frost$collections$Array** _8;
frost$collections$Array* _9;
frost$collections$ListView* _10;
frost$core$Object* _12;
frost$core$Object* _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:106
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
_1 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
_2 = &param0->flags;
_3 = *_2;
_4 = _3.value;
_5 = param1.value;
_6 = _4 + _5;
_7 = (frost$core$Int) {_6};
_8 = &param0->expressions;
_9 = *_8;
_10 = ((frost$collections$ListView*) _9);
org$frostlang$frostc$Annotations$init$frost$core$Int$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q(_1, _7, _10);
_12 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_14);
return _1;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:110
_1 = &param0->flags;
_2 = *_1;
_3 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:110:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_6 = _2.value;
_7 = _3.value;
_8 = _6 & _7;
_9 = (frost$core$Int) {_8};
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 != _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isProtected$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:114
_1 = &param0->flags;
_2 = *_1;
_3 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:114:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_6 = _2.value;
_7 = _3.value;
_8 = _6 & _7;
_9 = (frost$core$Int) {_8};
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 != _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isPackage$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:118
_1 = &param0->flags;
_2 = *_1;
_3 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:118:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_6 = _2.value;
_7 = _3.value;
_8 = _6 & _7;
_9 = (frost$core$Int) {_8};
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 != _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
_1 = &param0->flags;
_2 = *_1;
_3 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_6 = _2.value;
_7 = _3.value;
_8 = _6 & _7;
_9 = (frost$core$Int) {_8};
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 != _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isOverride$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:126
_1 = &param0->flags;
_2 = *_1;
_3 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:126:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_6 = _2.value;
_7 = _3.value;
_8 = _6 & _7;
_9 = (frost$core$Int) {_8};
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 != _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isExternal$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:130
_1 = &param0->flags;
_2 = *_1;
_3 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:130:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_6 = _2.value;
_7 = _3.value;
_8 = _6 & _7;
_9 = (frost$core$Int) {_8};
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 != _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isImplicit$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:134
_1 = &param0->flags;
_2 = *_1;
_3 = (frost$core$Int) {128u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:134:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_6 = _2.value;
_7 = _3.value;
_8 = _6 & _7;
_9 = (frost$core$Int) {_8};
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 != _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:138
_1 = &param0->flags;
_2 = *_1;
_3 = (frost$core$Int) {256u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:138:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_6 = _2.value;
_7 = _3.value;
_8 = _6 & _7;
_9 = (frost$core$Int) {_8};
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 != _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:142
_1 = &param0->flags;
_2 = *_1;
_3 = (frost$core$Int) {512u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:142:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_6 = _2.value;
_7 = _3.value;
_8 = _6 & _7;
_9 = (frost$core$Int) {_8};
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 != _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:146
_1 = &param0->flags;
_2 = *_1;
_3 = (frost$core$Int) {1024u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:146:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_6 = _2.value;
_7 = _3.value;
_8 = _6 & _7;
_9 = (frost$core$Int) {_8};
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 != _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isSpecialize$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:150
_1 = &param0->flags;
_2 = *_1;
_3 = (frost$core$Int) {2048u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:150:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_6 = _2.value;
_7 = _3.value;
_8 = _6 & _7;
_9 = (frost$core$Int) {_8};
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 != _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:154
_1 = &param0->flags;
_2 = *_1;
_3 = (frost$core$Int) {4096u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:154:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_6 = _2.value;
_7 = _3.value;
_8 = _6 & _7;
_9 = (frost$core$Int) {_8};
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 != _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:158
_1 = &param0->flags;
_2 = *_1;
_3 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:158:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_6 = _2.value;
_7 = _3.value;
_8 = _6 & _7;
_9 = (frost$core$Int) {_8};
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 != _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isUnsafeImmutable$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:162
_1 = &param0->flags;
_2 = *_1;
_3 = (frost$core$Int) {16384u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:162:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_6 = _2.value;
_7 = _3.value;
_8 = _6 & _7;
_9 = (frost$core$Int) {_8};
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 != _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:166
_1 = &param0->flags;
_2 = *_1;
_3 = (frost$core$Int) {32768u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:166:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_6 = _2.value;
_7 = _3.value;
_8 = _6 & _7;
_9 = (frost$core$Int) {_8};
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 != _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isCapture$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:170
_1 = &param0->flags;
_2 = *_1;
_3 = (frost$core$Int) {65536u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:170:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_6 = _2.value;
_7 = _3.value;
_8 = _6 & _7;
_9 = (frost$core$Int) {_8};
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 != _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isStub$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:174
_1 = &param0->flags;
_2 = *_1;
_3 = (frost$core$Int) {131072u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:174:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_6 = _2.value;
_7 = _3.value;
_8 = _6 & _7;
_9 = (frost$core$Int) {_8};
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 != _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$Bit org$frostlang$frostc$Annotations$get_isNoReturn$R$frost$core$Bit(org$frostlang$frostc$Annotations* param0) {

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:178
_1 = &param0->flags;
_2 = *_1;
_3 = (frost$core$Int) {262144u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:178:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_6 = _2.value;
_7 = _3.value;
_8 = _6 & _7;
_9 = (frost$core$Int) {_8};
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 != _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$String* org$frostlang$frostc$Annotations$get_asString$R$frost$core$String(org$frostlang$frostc$Annotations* param0) {

frost$core$MutableString* local0 = NULL;
org$frostlang$frostc$Annotations$Expression* local1 = NULL;
frost$core$MutableString* _1;
frost$core$Object* _4;
frost$core$MutableString* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$core$Int* _15;
frost$core$Int _16;
frost$core$Int _17;
int64_t _20;
int64_t _21;
int64_t _22;
frost$core$Int _23;
frost$core$Int _25;
int64_t _26;
int64_t _27;
bool _28;
frost$core$Bit _29;
bool _31;
frost$core$MutableString* _34;
frost$core$Int* _40;
frost$core$Int _41;
frost$core$Int _42;
int64_t _45;
int64_t _46;
int64_t _47;
frost$core$Int _48;
frost$core$Int _50;
int64_t _51;
int64_t _52;
bool _53;
frost$core$Bit _54;
bool _56;
frost$core$MutableString* _59;
frost$core$Int* _65;
frost$core$Int _66;
frost$core$Int _67;
int64_t _70;
int64_t _71;
int64_t _72;
frost$core$Int _73;
frost$core$Int _75;
int64_t _76;
int64_t _77;
bool _78;
frost$core$Bit _79;
bool _81;
frost$core$MutableString* _84;
frost$core$Int* _90;
frost$core$Int _91;
frost$core$Int _92;
int64_t _95;
int64_t _96;
int64_t _97;
frost$core$Int _98;
frost$core$Int _100;
int64_t _101;
int64_t _102;
bool _103;
frost$core$Bit _104;
bool _106;
frost$core$MutableString* _109;
frost$core$Int* _115;
frost$core$Int _116;
frost$core$Int _117;
int64_t _120;
int64_t _121;
int64_t _122;
frost$core$Int _123;
frost$core$Int _125;
int64_t _126;
int64_t _127;
bool _128;
frost$core$Bit _129;
bool _131;
frost$core$MutableString* _134;
frost$core$Int* _140;
frost$core$Int _141;
frost$core$Int _142;
int64_t _145;
int64_t _146;
int64_t _147;
frost$core$Int _148;
frost$core$Int _150;
int64_t _151;
int64_t _152;
bool _153;
frost$core$Bit _154;
bool _156;
frost$core$MutableString* _159;
frost$core$Int* _165;
frost$core$Int _166;
frost$core$Int _167;
int64_t _170;
int64_t _171;
int64_t _172;
frost$core$Int _173;
frost$core$Int _175;
int64_t _176;
int64_t _177;
bool _178;
frost$core$Bit _179;
bool _181;
frost$core$MutableString* _184;
frost$core$Int* _190;
frost$core$Int _191;
frost$core$Int _192;
int64_t _195;
int64_t _196;
int64_t _197;
frost$core$Int _198;
frost$core$Int _200;
int64_t _201;
int64_t _202;
bool _203;
frost$core$Bit _204;
bool _206;
frost$core$MutableString* _209;
frost$core$Int* _215;
frost$core$Int _216;
frost$core$Int _217;
int64_t _220;
int64_t _221;
int64_t _222;
frost$core$Int _223;
frost$core$Int _225;
int64_t _226;
int64_t _227;
bool _228;
frost$core$Bit _229;
bool _231;
frost$core$MutableString* _234;
frost$core$Int* _240;
frost$core$Int _241;
frost$core$Int _242;
int64_t _245;
int64_t _246;
int64_t _247;
frost$core$Int _248;
frost$core$Int _250;
int64_t _251;
int64_t _252;
bool _253;
frost$core$Bit _254;
bool _256;
frost$core$MutableString* _259;
frost$core$Int* _265;
frost$core$Int _266;
frost$core$Int _267;
int64_t _270;
int64_t _271;
int64_t _272;
frost$core$Int _273;
frost$core$Int _275;
int64_t _276;
int64_t _277;
bool _278;
frost$core$Bit _279;
bool _281;
frost$core$MutableString* _284;
frost$core$Int* _290;
frost$core$Int _291;
frost$core$Int _292;
int64_t _295;
int64_t _296;
int64_t _297;
frost$core$Int _298;
frost$core$Int _300;
int64_t _301;
int64_t _302;
bool _303;
frost$core$Bit _304;
bool _306;
frost$core$MutableString* _309;
frost$core$Int* _315;
frost$core$Int _316;
frost$core$Int _317;
int64_t _320;
int64_t _321;
int64_t _322;
frost$core$Int _323;
frost$core$Int _325;
int64_t _326;
int64_t _327;
bool _328;
frost$core$Bit _329;
bool _331;
frost$core$MutableString* _334;
frost$core$Int* _340;
frost$core$Int _341;
frost$core$Int _342;
int64_t _345;
int64_t _346;
int64_t _347;
frost$core$Int _348;
frost$core$Int _350;
int64_t _351;
int64_t _352;
bool _353;
frost$core$Bit _354;
bool _356;
frost$core$MutableString* _359;
frost$core$Int* _365;
frost$core$Int _366;
frost$core$Int _367;
int64_t _370;
int64_t _371;
int64_t _372;
frost$core$Int _373;
frost$core$Int _375;
int64_t _376;
int64_t _377;
bool _378;
frost$core$Bit _379;
bool _381;
frost$core$MutableString* _384;
frost$core$Int* _390;
frost$core$Int _391;
frost$core$Int _392;
int64_t _395;
int64_t _396;
int64_t _397;
frost$core$Int _398;
frost$core$Int _400;
int64_t _401;
int64_t _402;
bool _403;
frost$core$Bit _404;
bool _406;
frost$core$MutableString* _409;
frost$core$Int* _415;
frost$core$Int _416;
frost$core$Int _417;
int64_t _420;
int64_t _421;
int64_t _422;
frost$core$Int _423;
frost$core$Int _425;
int64_t _426;
int64_t _427;
bool _428;
frost$core$Bit _429;
bool _431;
frost$core$MutableString* _434;
frost$collections$Array** _438;
frost$collections$Array* _439;
bool _440;
frost$core$Bit _441;
bool _442;
frost$collections$Array** _445;
frost$collections$Array* _446;
bool _447;
frost$core$Bit _448;
bool _449;
frost$core$Int _451;
frost$collections$Array* _454;
frost$collections$Iterable* _455;
frost$collections$Iterable* _456;
$fn4 _457;
frost$collections$Iterator* _458;
frost$collections$Iterator* _459;
frost$collections$Iterator* _461;
$fn5 _462;
frost$core$Bit _463;
bool _464;
frost$collections$Iterator* _467;
$fn6 _468;
frost$core$Object* _469;
org$frostlang$frostc$Annotations$Expression* _470;
frost$core$Object* _471;
org$frostlang$frostc$Annotations$Expression* _473;
frost$core$Object* _474;
frost$core$MutableString* _478;
org$frostlang$frostc$Annotations$Expression* _479;
$fn7 _480;
frost$core$String* _481;
frost$core$String* _482;
frost$core$Object* _484;
frost$core$Object* _486;
frost$core$Object* _488;
org$frostlang$frostc$Annotations$Expression* _490;
frost$core$Object* _491;
frost$core$Object* _495;
frost$core$MutableString* _499;
frost$core$String* _500;
frost$core$Object* _501;
frost$core$Object* _503;
frost$core$MutableString* _505;
frost$core$Object* _506;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:183
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_1 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_1);
*(&local0) = ((frost$core$MutableString*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:184
// begin inline call to function org.frostlang.frostc.Annotations.get_isPrivate():frost.core.Bit from Annotations.frost:184:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:110
_15 = &param0->flags;
_16 = *_15;
_17 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:110:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_20 = _16.value;
_21 = _17.value;
_22 = _20 & _21;
_23 = (frost$core$Int) {_22};
_25 = (frost$core$Int) {0u};
_26 = _23.value;
_27 = _25.value;
_28 = _26 != _27;
_29 = (frost$core$Bit) {_28};
_31 = _29.value;
if (_31) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:185
_34 = *(&local0);
frost$core$MutableString$append$frost$core$String(_34, &$s8);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:187
// begin inline call to function org.frostlang.frostc.Annotations.get_isProtected():frost.core.Bit from Annotations.frost:187:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:114
_40 = &param0->flags;
_41 = *_40;
_42 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:114:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_45 = _41.value;
_46 = _42.value;
_47 = _45 & _46;
_48 = (frost$core$Int) {_47};
_50 = (frost$core$Int) {0u};
_51 = _48.value;
_52 = _50.value;
_53 = _51 != _52;
_54 = (frost$core$Bit) {_53};
_56 = _54.value;
if (_56) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:188
_59 = *(&local0);
frost$core$MutableString$append$frost$core$String(_59, &$s9);
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:190
// begin inline call to function org.frostlang.frostc.Annotations.get_isPackage():frost.core.Bit from Annotations.frost:190:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:118
_65 = &param0->flags;
_66 = *_65;
_67 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:118:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_70 = _66.value;
_71 = _67.value;
_72 = _70 & _71;
_73 = (frost$core$Int) {_72};
_75 = (frost$core$Int) {0u};
_76 = _73.value;
_77 = _75.value;
_78 = _76 != _77;
_79 = (frost$core$Bit) {_78};
_81 = _79.value;
if (_81) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:191
_84 = *(&local0);
frost$core$MutableString$append$frost$core$String(_84, &$s10);
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:193
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Annotations.frost:193:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
_90 = &param0->flags;
_91 = *_90;
_92 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_95 = _91.value;
_96 = _92.value;
_97 = _95 & _96;
_98 = (frost$core$Int) {_97};
_100 = (frost$core$Int) {0u};
_101 = _98.value;
_102 = _100.value;
_103 = _101 != _102;
_104 = (frost$core$Bit) {_103};
_106 = _104.value;
if (_106) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:194
_109 = *(&local0);
frost$core$MutableString$append$frost$core$String(_109, &$s11);
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:196
// begin inline call to function org.frostlang.frostc.Annotations.get_isOverride():frost.core.Bit from Annotations.frost:196:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:126
_115 = &param0->flags;
_116 = *_115;
_117 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:126:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_120 = _116.value;
_121 = _117.value;
_122 = _120 & _121;
_123 = (frost$core$Int) {_122};
_125 = (frost$core$Int) {0u};
_126 = _123.value;
_127 = _125.value;
_128 = _126 != _127;
_129 = (frost$core$Bit) {_128};
_131 = _129.value;
if (_131) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:197
_134 = *(&local0);
frost$core$MutableString$append$frost$core$String(_134, &$s12);
goto block18;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:199
// begin inline call to function org.frostlang.frostc.Annotations.get_isExternal():frost.core.Bit from Annotations.frost:199:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:130
_140 = &param0->flags;
_141 = *_140;
_142 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:130:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_145 = _141.value;
_146 = _142.value;
_147 = _145 & _146;
_148 = (frost$core$Int) {_147};
_150 = (frost$core$Int) {0u};
_151 = _148.value;
_152 = _150.value;
_153 = _151 != _152;
_154 = (frost$core$Bit) {_153};
_156 = _154.value;
if (_156) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:200
_159 = *(&local0);
frost$core$MutableString$append$frost$core$String(_159, &$s13);
goto block22;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:202
// begin inline call to function org.frostlang.frostc.Annotations.get_isImplicit():frost.core.Bit from Annotations.frost:202:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:134
_165 = &param0->flags;
_166 = *_165;
_167 = (frost$core$Int) {128u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:134:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_170 = _166.value;
_171 = _167.value;
_172 = _170 & _171;
_173 = (frost$core$Int) {_172};
_175 = (frost$core$Int) {0u};
_176 = _173.value;
_177 = _175.value;
_178 = _176 != _177;
_179 = (frost$core$Bit) {_178};
_181 = _179.value;
if (_181) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:203
_184 = *(&local0);
frost$core$MutableString$append$frost$core$String(_184, &$s14);
goto block26;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:205
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from Annotations.frost:205:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:138
_190 = &param0->flags;
_191 = *_190;
_192 = (frost$core$Int) {256u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:138:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_195 = _191.value;
_196 = _192.value;
_197 = _195 & _196;
_198 = (frost$core$Int) {_197};
_200 = (frost$core$Int) {0u};
_201 = _198.value;
_202 = _200.value;
_203 = _201 != _202;
_204 = (frost$core$Bit) {_203};
_206 = _204.value;
if (_206) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:206
_209 = *(&local0);
frost$core$MutableString$append$frost$core$String(_209, &$s15);
goto block30;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:208
// begin inline call to function org.frostlang.frostc.Annotations.get_isAbstract():frost.core.Bit from Annotations.frost:208:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:142
_215 = &param0->flags;
_216 = *_215;
_217 = (frost$core$Int) {512u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:142:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_220 = _216.value;
_221 = _217.value;
_222 = _220 & _221;
_223 = (frost$core$Int) {_222};
_225 = (frost$core$Int) {0u};
_226 = _223.value;
_227 = _225.value;
_228 = _226 != _227;
_229 = (frost$core$Bit) {_228};
_231 = _229.value;
if (_231) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:209
_234 = *(&local0);
frost$core$MutableString$append$frost$core$String(_234, &$s16);
goto block34;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:211
// begin inline call to function org.frostlang.frostc.Annotations.get_isInline():frost.core.Bit from Annotations.frost:211:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:146
_240 = &param0->flags;
_241 = *_240;
_242 = (frost$core$Int) {1024u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:146:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_245 = _241.value;
_246 = _242.value;
_247 = _245 & _246;
_248 = (frost$core$Int) {_247};
_250 = (frost$core$Int) {0u};
_251 = _248.value;
_252 = _250.value;
_253 = _251 != _252;
_254 = (frost$core$Bit) {_253};
_256 = _254.value;
if (_256) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:212
_259 = *(&local0);
frost$core$MutableString$append$frost$core$String(_259, &$s17);
goto block38;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:214
// begin inline call to function org.frostlang.frostc.Annotations.get_isSpecialize():frost.core.Bit from Annotations.frost:214:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:150
_265 = &param0->flags;
_266 = *_265;
_267 = (frost$core$Int) {2048u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:150:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_270 = _266.value;
_271 = _267.value;
_272 = _270 & _271;
_273 = (frost$core$Int) {_272};
_275 = (frost$core$Int) {0u};
_276 = _273.value;
_277 = _275.value;
_278 = _276 != _277;
_279 = (frost$core$Bit) {_278};
_281 = _279.value;
if (_281) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:215
_284 = *(&local0);
frost$core$MutableString$append$frost$core$String(_284, &$s18);
goto block42;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:217
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from Annotations.frost:217:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:154
_290 = &param0->flags;
_291 = *_290;
_292 = (frost$core$Int) {4096u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:154:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_295 = _291.value;
_296 = _292.value;
_297 = _295 & _296;
_298 = (frost$core$Int) {_297};
_300 = (frost$core$Int) {0u};
_301 = _298.value;
_302 = _300.value;
_303 = _301 != _302;
_304 = (frost$core$Bit) {_303};
_306 = _304.value;
if (_306) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:218
_309 = *(&local0);
frost$core$MutableString$append$frost$core$String(_309, &$s19);
goto block46;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:220
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from Annotations.frost:220:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:158
_315 = &param0->flags;
_316 = *_315;
_317 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:158:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_320 = _316.value;
_321 = _317.value;
_322 = _320 & _321;
_323 = (frost$core$Int) {_322};
_325 = (frost$core$Int) {0u};
_326 = _323.value;
_327 = _325.value;
_328 = _326 != _327;
_329 = (frost$core$Bit) {_328};
_331 = _329.value;
if (_331) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:221
_334 = *(&local0);
frost$core$MutableString$append$frost$core$String(_334, &$s20);
goto block50;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:223
// begin inline call to function org.frostlang.frostc.Annotations.get_isUnsafeImmutable():frost.core.Bit from Annotations.frost:223:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:162
_340 = &param0->flags;
_341 = *_340;
_342 = (frost$core$Int) {16384u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:162:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_345 = _341.value;
_346 = _342.value;
_347 = _345 & _346;
_348 = (frost$core$Int) {_347};
_350 = (frost$core$Int) {0u};
_351 = _348.value;
_352 = _350.value;
_353 = _351 != _352;
_354 = (frost$core$Bit) {_353};
_356 = _354.value;
if (_356) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:224
_359 = *(&local0);
frost$core$MutableString$append$frost$core$String(_359, &$s21);
goto block54;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:226
// begin inline call to function org.frostlang.frostc.Annotations.get_isDefault():frost.core.Bit from Annotations.frost:226:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:166
_365 = &param0->flags;
_366 = *_365;
_367 = (frost$core$Int) {32768u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:166:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_370 = _366.value;
_371 = _367.value;
_372 = _370 & _371;
_373 = (frost$core$Int) {_372};
_375 = (frost$core$Int) {0u};
_376 = _373.value;
_377 = _375.value;
_378 = _376 != _377;
_379 = (frost$core$Bit) {_378};
_381 = _379.value;
if (_381) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:227
_384 = *(&local0);
frost$core$MutableString$append$frost$core$String(_384, &$s22);
goto block58;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:229
// begin inline call to function org.frostlang.frostc.Annotations.get_isCapture():frost.core.Bit from Annotations.frost:229:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:170
_390 = &param0->flags;
_391 = *_390;
_392 = (frost$core$Int) {65536u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:170:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_395 = _391.value;
_396 = _392.value;
_397 = _395 & _396;
_398 = (frost$core$Int) {_397};
_400 = (frost$core$Int) {0u};
_401 = _398.value;
_402 = _400.value;
_403 = _401 != _402;
_404 = (frost$core$Bit) {_403};
_406 = _404.value;
if (_406) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:230
_409 = *(&local0);
frost$core$MutableString$append$frost$core$String(_409, &$s23);
goto block62;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:232
// begin inline call to function org.frostlang.frostc.Annotations.get_isNoReturn():frost.core.Bit from Annotations.frost:232:12
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:178
_415 = &param0->flags;
_416 = *_415;
_417 = (frost$core$Int) {262144u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:178:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:231
_420 = _416.value;
_421 = _417.value;
_422 = _420 & _421;
_423 = (frost$core$Int) {_422};
_425 = (frost$core$Int) {0u};
_426 = _423.value;
_427 = _425.value;
_428 = _426 != _427;
_429 = (frost$core$Bit) {_428};
_431 = _429.value;
if (_431) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:233
_434 = *(&local0);
frost$core$MutableString$append$frost$core$String(_434, &$s24);
goto block66;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:235
_438 = &param0->expressions;
_439 = *_438;
_440 = _439 != NULL;
_441 = (frost$core$Bit) {_440};
_442 = _441.value;
if (_442) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:236
_445 = &param0->expressions;
_446 = *_445;
_447 = _446 != NULL;
_448 = (frost$core$Bit) {_447};
_449 = _448.value;
if (_449) goto block71; else goto block72;
block72:;
_451 = (frost$core$Int) {236u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s25, _451, &$s26);
abort(); // unreachable
block71:;
_454 = _446;
_455 = ((frost$collections$Iterable*) _454);
_456 = _455;
ITable* $tmp27 = _456->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp27 = $tmp27->next;
}
_457 = $tmp27->methods[0];
_458 = _457(_456);
_459 = _458;
goto block73;
block73:;
_461 = _459;
ITable* $tmp28 = _461->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp28 = $tmp28->next;
}
_462 = $tmp28->methods[0];
_463 = _462(_461);
_464 = _463.value;
if (_464) goto block75; else goto block74;
block74:;
*(&local1) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
_467 = _459;
ITable* $tmp29 = _467->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp29 = $tmp29->next;
}
_468 = $tmp29->methods[1];
_469 = _468(_467);
_470 = ((org$frostlang$frostc$Annotations$Expression*) _469);
_471 = ((frost$core$Object*) _470);
frost$core$Frost$ref$frost$core$Object$Q(_471);
_473 = *(&local1);
_474 = ((frost$core$Object*) _473);
frost$core$Frost$unref$frost$core$Object$Q(_474);
*(&local1) = _470;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:237
_478 = *(&local0);
_479 = *(&local1);
_480 = ($fn30) _479->$class->vtable[0];
_481 = _480(_479);
_482 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_481, &$s31);
frost$core$MutableString$append$frost$core$String(_478, _482);
_484 = ((frost$core$Object*) _482);
frost$core$Frost$unref$frost$core$Object$Q(_484);
_486 = ((frost$core$Object*) _481);
frost$core$Frost$unref$frost$core$Object$Q(_486);
_488 = _469;
frost$core$Frost$unref$frost$core$Object$Q(_488);
_490 = *(&local1);
_491 = ((frost$core$Object*) _490);
frost$core$Frost$unref$frost$core$Object$Q(_491);
*(&local1) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
goto block73;
block75:;
_495 = ((frost$core$Object*) _458);
frost$core$Frost$unref$frost$core$Object$Q(_495);
goto block70;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:240
_499 = *(&local0);
_500 = frost$core$MutableString$finish$R$frost$core$String(_499);
_501 = ((frost$core$Object*) _500);
frost$core$Frost$ref$frost$core$Object$Q(_501);
_503 = ((frost$core$Object*) _500);
frost$core$Frost$unref$frost$core$Object$Q(_503);
_505 = *(&local0);
_506 = ((frost$core$Object*) _505);
frost$core$Frost$unref$frost$core$Object$Q(_506);
*(&local0) = ((frost$core$MutableString*) NULL);
return _500;

}
void org$frostlang$frostc$Annotations$cleanup(org$frostlang$frostc$Annotations* param0) {

frost$core$Object* _1;
frost$collections$Array** _3;
frost$collections$Array* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:4
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->expressions;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}

