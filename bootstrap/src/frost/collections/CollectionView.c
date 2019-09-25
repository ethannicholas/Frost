#include "frost/collections/CollectionView.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int.h"
#include "frost/core/MutableMethod.h"
#include "frost/unsafe/Pointer.h"
#include "frost/collections/Array.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$CollectionView$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { NULL, frost$collections$CollectionView$get_first$R$frost$collections$CollectionView$T, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$CollectionView$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$CollectionView$_frost$collections$CollectionView, { NULL} };

static frost$core$String $s1;
frost$collections$CollectionView$class_type frost$collections$CollectionView$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$CollectionView$_frost$collections$Iterable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, frost$collections$CollectionView$get_first$R$frost$collections$CollectionView$T, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

typedef frost$collections$Iterator* (*$fn2)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn3)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn6)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Int (*$fn9)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn10)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn11)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn12)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn13)(frost$core$Object*);
typedef frost$core$String* (*$fn20)(frost$core$Object*);
typedef frost$core$Int (*$fn22)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn23)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn24)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn25)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn26)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn34)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn35)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Int (*$fn36)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn37)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn38)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn39)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn40)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn48)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn49)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn50)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn51)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn52)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn56)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn57)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn58)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn59)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn60)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn64)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn65)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn66)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn67)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn68)(frost$collections$Iterator*);
typedef void (*$fn72)(frost$core$Object*);
typedef void (*$fn73)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Int (*$fn74)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn75)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn76)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn77)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn82)(frost$core$Object*);
typedef frost$core$Object* (*$fn83)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Int (*$fn84)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn85)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn86)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn87)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn92)(frost$core$Object*);
typedef frost$core$Object* (*$fn93)(frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 32, -3187779348182749487, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 20, -1009795112068118972, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54", 220, 6908775502092721301, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 20, -1009795112068118972, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54", 219, -2277848183399103972, NULL };

frost$core$Object* frost$collections$CollectionView$get_first$R$frost$collections$CollectionView$T(void* rawSelf) {
frost$collections$CollectionView* param0 = (frost$collections$CollectionView*) rawSelf;

frost$collections$Iterable* _1;
$fn2 _2;
frost$collections$Iterator* _3;
$fn3 _4;
frost$core$Object* _5;
frost$core$Object* _6;
frost$core$Object* _7;
frost$core$Object* _9;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:23
_1 = ((frost$collections$Iterable*) param0);
ITable* $tmp4 = _1->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp4 = $tmp4->next;
}
_2 = $tmp4->methods[0];
_3 = _2(_1);
ITable* $tmp5 = _3->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp5 = $tmp5->next;
}
_4 = $tmp5->methods[1];
_5 = _4(_3);
_6 = _5;
_7 = _6;
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = _5;
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_11);
return _6;

}
frost$core$String* frost$collections$CollectionView$join$R$frost$core$String(void* rawSelf) {
frost$collections$CollectionView* param0 = (frost$collections$CollectionView*) rawSelf;

$fn6 _1;
frost$core$String* _2;
frost$core$Object* _3;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:34
ITable* $tmp7 = param0->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp7 = $tmp7->next;
}
_1 = $tmp7->methods[3];
_2 = _1(param0, &$s8);
_3 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return _2;

}
frost$core$String* frost$collections$CollectionView$join$frost$core$String$R$frost$core$String(void* rawSelf, frost$core$String* param1) {
frost$collections$CollectionView* param0 = (frost$collections$CollectionView*) rawSelf;

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$core$Object* local2 = NULL;
$fn9 _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Object* _14;
frost$core$Bit _18;
frost$core$MutableString* _21;
frost$core$Object* _24;
frost$core$MutableString* _26;
frost$core$Object* _27;
frost$core$Object* _30;
frost$collections$Iterable* _33;
$fn10 _34;
frost$collections$Iterator* _35;
$fn11 _37;
frost$core$Bit _38;
bool _39;
$fn12 _42;
frost$core$Object* _43;
frost$core$Object* _44;
frost$core$Object* _45;
frost$core$Object* _47;
frost$core$Object* _48;
frost$core$Bit _52;
bool _53;
frost$core$Bit _56;
frost$core$MutableString* _61;
frost$core$Object* _65;
frost$core$Object* _66;
bool _67;
frost$core$Bit _68;
bool _69;
frost$core$MutableString* _72;
frost$core$Object* _73;
frost$core$Object* _74;
$fn13 _77;
frost$core$String* _78;
frost$core$Object* _80;
frost$core$MutableString* _86;
frost$core$Object* _89;
frost$core$Object* _91;
frost$core$Object* _92;
frost$core$Object* _96;
frost$core$MutableString* _99;
frost$core$String* _100;
frost$core$Object* _101;
frost$core$Object* _103;
frost$core$MutableString* _105;
frost$core$Object* _106;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:47
ITable* $tmp14 = param0->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp14 = $tmp14->next;
}
_1 = $tmp14->methods[0];
_2 = _1(param0);
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CollectionView.frost:47:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:48
_14 = ((frost$core$Object*) &$s15);
frost$core$Frost$ref$frost$core$Object$Q(_14);
return &$s16;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:50
_18 = (frost$core$Bit) {true};
*(&local0) = _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:51
_21 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_21);
*(&local1) = ((frost$core$MutableString*) NULL);
_24 = ((frost$core$Object*) _21);
frost$core$Frost$ref$frost$core$Object$Q(_24);
_26 = *(&local1);
_27 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_27);
*(&local1) = _21;
_30 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_30);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:52
_33 = ((frost$collections$Iterable*) param0);
ITable* $tmp17 = _33->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp17 = $tmp17->next;
}
_34 = $tmp17->methods[0];
_35 = _34(_33);
goto block4;
block4:;
ITable* $tmp18 = _35->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp18 = $tmp18->next;
}
_37 = $tmp18->methods[0];
_38 = _37(_35);
_39 = _38.value;
if (_39) goto block6; else goto block5;
block5:;
*(&local2) = ((frost$core$Object*) NULL);
ITable* $tmp19 = _35->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp19 = $tmp19->next;
}
_42 = $tmp19->methods[1];
_43 = _42(_35);
_44 = _43;
_45 = _44;
frost$core$Frost$ref$frost$core$Object$Q(_45);
_47 = *(&local2);
_48 = _47;
frost$core$Frost$unref$frost$core$Object$Q(_48);
*(&local2) = _44;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:53
_52 = *(&local0);
_53 = _52.value;
if (_53) goto block7; else goto block9;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:54
_56 = (frost$core$Bit) {false};
*(&local0) = _56;
goto block8;
block9:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:57
_61 = *(&local1);
frost$core$MutableString$append$frost$core$String(_61, param1);
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:60
_65 = *(&local2);
_66 = _65;
_67 = _66 != NULL;
_68 = (frost$core$Bit) {_67};
_69 = _68.value;
if (_69) goto block10; else goto block12;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:61
_72 = *(&local1);
_73 = *(&local2);
_74 = _73;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from CollectionView.frost:61:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_77 = ($fn20) _74->$class->vtable[0];
_78 = _77(_74);
frost$core$MutableString$append$frost$core$String(_72, _78);
_80 = ((frost$core$Object*) _78);
frost$core$Frost$unref$frost$core$Object$Q(_80);
goto block11;
block12:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:64
_86 = *(&local1);
frost$core$MutableString$append$frost$core$String(_86, &$s21);
goto block11;
block11:;
_89 = _43;
frost$core$Frost$unref$frost$core$Object$Q(_89);
_91 = *(&local2);
_92 = _91;
frost$core$Frost$unref$frost$core$Object$Q(_92);
*(&local2) = ((frost$core$Object*) NULL);
goto block4;
block6:;
_96 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_96);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:67
_99 = *(&local1);
_100 = frost$core$MutableString$finish$R$frost$core$String(_99);
_101 = ((frost$core$Object*) _100);
frost$core$Frost$ref$frost$core$Object$Q(_101);
_103 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_103);
_105 = *(&local1);
_106 = ((frost$core$Object*) _105);
frost$core$Frost$unref$frost$core$Object$Q(_106);
*(&local1) = ((frost$core$MutableString*) NULL);
return _100;

}
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T(void* rawSelf, frost$core$MutableMethod* param1) {
frost$collections$CollectionView* param0 = (frost$collections$CollectionView*) rawSelf;

frost$collections$Iterator* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
$fn22 _0;
frost$core$Int _1;
frost$core$Int _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
frost$core$Int _9;
frost$collections$Iterable* _13;
$fn23 _14;
frost$collections$Iterator* _15;
frost$core$Object* _17;
frost$collections$Iterator* _19;
frost$core$Object* _20;
frost$core$Object* _23;
frost$collections$Iterator* _26;
$fn24 _27;
frost$core$Object* _28;
frost$core$Object* _29;
frost$core$Object* _31;
frost$core$Object* _33;
frost$core$Object* _34;
frost$core$Object* _37;
frost$collections$Iterator* _41;
$fn25 _42;
frost$core$Bit _43;
bool _46;
bool _47;
frost$core$Bit _48;
bool _50;
frost$core$Object* _53;
frost$collections$Iterator* _54;
$fn26 _55;
frost$core$Object* _56;
frost$core$Object* _57;
frost$core$MutableMethod* _58;
int64_t* _59;
int64_t _60;
frost$core$Object** _61;
frost$core$Object* _62;
bool _63;
frost$unsafe$Pointer _65;
frost$core$Object* _66;
frost$unsafe$Pointer _69;
frost$core$Object* _70;
frost$core$Object* _73;
frost$core$Object* _74;
frost$core$Object* _76;
frost$core$Object* _77;
frost$core$Object* _80;
frost$core$Object* _82;
frost$core$Object* _86;
frost$core$Object* _87;
frost$core$Object* _89;
frost$core$Object* _90;
frost$collections$Iterator* _93;
frost$core$Object* _94;
ITable* $tmp27 = param0->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp27 = $tmp27->next;
}
_0 = $tmp27->methods[0];
_1 = _0(param0);
_2 = (frost$core$Int) {0u};
_3 = _1.value;
_4 = _2.value;
_5 = _3 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block2:;
_9 = (frost$core$Int) {96u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s28, _9, &$s29);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:98
_13 = ((frost$collections$Iterable*) param0);
ITable* $tmp30 = _13->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp30 = $tmp30->next;
}
_14 = $tmp30->methods[0];
_15 = _14(_13);
*(&local0) = ((frost$collections$Iterator*) NULL);
_17 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = *(&local0);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local0) = _15;
_23 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_23);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:99
_26 = *(&local0);
ITable* $tmp31 = _26->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp31 = $tmp31->next;
}
_27 = $tmp31->methods[1];
_28 = _27(_26);
_29 = _28;
*(&local1) = ((frost$core$Object*) NULL);
_31 = _29;
frost$core$Frost$ref$frost$core$Object$Q(_31);
_33 = *(&local1);
_34 = _33;
frost$core$Frost$unref$frost$core$Object$Q(_34);
*(&local1) = _29;
_37 = _28;
frost$core$Frost$unref$frost$core$Object$Q(_37);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:100
goto block3;
block3:;
_41 = *(&local0);
ITable* $tmp32 = _41->$class->itable;
while ($tmp32->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp32 = $tmp32->next;
}
_42 = $tmp32->methods[0];
_43 = _42(_41);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from CollectionView.frost:100:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_46 = _43.value;
_47 = !_46;
_48 = (frost$core$Bit) {_47};
_50 = _48.value;
if (_50) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:101
_53 = *(&local1);
_54 = *(&local0);
ITable* $tmp33 = _54->$class->itable;
while ($tmp33->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp33 = $tmp33->next;
}
_55 = $tmp33->methods[1];
_56 = _55(_54);
_57 = _56;
_58 = param1;
_59 = &_58->pointer;
_60 = *_59;
_61 = &_58->target;
_62 = *_61;
_63 = _62 != ((frost$core$Object*) NULL);
if (_63) goto block7; else goto block8;
block8:;
_65 = (frost$unsafe$Pointer) {_60};
_66 = (($fn34) _65.value)(_53, _57);
*(&local2) = _66;
goto block9;
block7:;
_69 = (frost$unsafe$Pointer) {_60};
_70 = (($fn35) _69.value)(_62, _53, _57);
*(&local2) = _70;
goto block9;
block9:;
_73 = *(&local2);
_74 = _73;
frost$core$Frost$ref$frost$core$Object$Q(_74);
_76 = *(&local1);
_77 = _76;
frost$core$Frost$unref$frost$core$Object$Q(_77);
*(&local1) = _73;
_80 = _73;
frost$core$Frost$unref$frost$core$Object$Q(_80);
_82 = _56;
frost$core$Frost$unref$frost$core$Object$Q(_82);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:103
_86 = *(&local1);
_87 = _86;
frost$core$Frost$ref$frost$core$Object$Q(_87);
_89 = *(&local1);
_90 = _89;
frost$core$Frost$unref$frost$core$Object$Q(_90);
*(&local1) = ((frost$core$Object*) NULL);
_93 = *(&local0);
_94 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_94);
*(&local0) = ((frost$collections$Iterator*) NULL);
return _86;

}
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T(void* rawSelf, frost$core$MutableMethod* param1) {
frost$collections$CollectionView* param0 = (frost$collections$CollectionView*) rawSelf;

frost$collections$Iterator* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
$fn36 _0;
frost$core$Int _1;
frost$core$Int _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
frost$core$Int _9;
frost$collections$Iterable* _13;
$fn37 _14;
frost$collections$Iterator* _15;
frost$core$Object* _17;
frost$collections$Iterator* _19;
frost$core$Object* _20;
frost$core$Object* _23;
frost$collections$Iterator* _26;
$fn38 _27;
frost$core$Object* _28;
frost$core$Object* _29;
frost$core$Object* _31;
frost$core$Object* _33;
frost$core$Object* _34;
frost$core$Object* _37;
frost$collections$Iterator* _41;
$fn39 _42;
frost$core$Bit _43;
bool _46;
bool _47;
frost$core$Bit _48;
bool _50;
frost$core$Object* _53;
frost$collections$Iterator* _54;
$fn40 _55;
frost$core$Object* _56;
frost$core$Object* _57;
frost$core$MutableMethod* _58;
int64_t* _59;
int64_t _60;
frost$core$Object** _61;
frost$core$Object* _62;
bool _63;
frost$unsafe$Pointer _65;
frost$core$Object* _66;
frost$unsafe$Pointer _69;
frost$core$Object* _70;
frost$core$Object* _73;
frost$core$Object* _74;
frost$core$Object* _76;
frost$core$Object* _77;
frost$core$Object* _80;
frost$core$Object* _82;
frost$core$Object* _86;
frost$core$Object* _87;
frost$core$Object* _89;
frost$core$Object* _90;
frost$collections$Iterator* _93;
frost$core$Object* _94;
ITable* $tmp41 = param0->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp41 = $tmp41->next;
}
_0 = $tmp41->methods[0];
_1 = _0(param0);
_2 = (frost$core$Int) {0u};
_3 = _1.value;
_4 = _2.value;
_5 = _3 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block2:;
_9 = (frost$core$Int) {108u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s42, _9, &$s43);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:110
_13 = ((frost$collections$Iterable*) param0);
ITable* $tmp44 = _13->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp44 = $tmp44->next;
}
_14 = $tmp44->methods[0];
_15 = _14(_13);
*(&local0) = ((frost$collections$Iterator*) NULL);
_17 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = *(&local0);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local0) = _15;
_23 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_23);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:111
_26 = *(&local0);
ITable* $tmp45 = _26->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp45 = $tmp45->next;
}
_27 = $tmp45->methods[1];
_28 = _27(_26);
_29 = _28;
*(&local1) = ((frost$core$Object*) NULL);
_31 = _29;
frost$core$Frost$ref$frost$core$Object$Q(_31);
_33 = *(&local1);
_34 = _33;
frost$core$Frost$unref$frost$core$Object$Q(_34);
*(&local1) = _29;
_37 = _28;
frost$core$Frost$unref$frost$core$Object$Q(_37);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:112
goto block3;
block3:;
_41 = *(&local0);
ITable* $tmp46 = _41->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp46 = $tmp46->next;
}
_42 = $tmp46->methods[0];
_43 = _42(_41);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from CollectionView.frost:112:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_46 = _43.value;
_47 = !_46;
_48 = (frost$core$Bit) {_47};
_50 = _48.value;
if (_50) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:113
_53 = *(&local1);
_54 = *(&local0);
ITable* $tmp47 = _54->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp47 = $tmp47->next;
}
_55 = $tmp47->methods[1];
_56 = _55(_54);
_57 = _56;
_58 = param1;
_59 = &_58->pointer;
_60 = *_59;
_61 = &_58->target;
_62 = *_61;
_63 = _62 != ((frost$core$Object*) NULL);
if (_63) goto block7; else goto block8;
block8:;
_65 = (frost$unsafe$Pointer) {_60};
_66 = (($fn48) _65.value)(_53, _57);
*(&local2) = _66;
goto block9;
block7:;
_69 = (frost$unsafe$Pointer) {_60};
_70 = (($fn49) _69.value)(_62, _53, _57);
*(&local2) = _70;
goto block9;
block9:;
_73 = *(&local2);
_74 = _73;
frost$core$Frost$ref$frost$core$Object$Q(_74);
_76 = *(&local1);
_77 = _76;
frost$core$Frost$unref$frost$core$Object$Q(_77);
*(&local1) = _73;
_80 = _73;
frost$core$Frost$unref$frost$core$Object$Q(_80);
_82 = _56;
frost$core$Frost$unref$frost$core$Object$Q(_82);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:115
_86 = *(&local1);
_87 = _86;
frost$core$Frost$ref$frost$core$Object$Q(_87);
_89 = *(&local1);
_90 = _89;
frost$core$Frost$unref$frost$core$Object$Q(_90);
*(&local1) = ((frost$core$Object*) NULL);
_93 = *(&local0);
_94 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_94);
*(&local0) = ((frost$collections$Iterator*) NULL);
return _86;

}
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T(void* rawSelf, frost$core$MutableMethod* param1, frost$core$Object* param2) {
frost$collections$CollectionView* param0 = (frost$collections$CollectionView*) rawSelf;

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
frost$core$Object* _2;
frost$core$Object* _4;
frost$core$Object* _5;
frost$collections$Iterable* _9;
$fn50 _10;
frost$collections$Iterator* _11;
$fn51 _13;
frost$core$Bit _14;
bool _15;
$fn52 _18;
frost$core$Object* _19;
frost$core$Object* _20;
frost$core$Object* _21;
frost$core$Object* _23;
frost$core$Object* _24;
frost$core$Object* _28;
frost$core$Object* _29;
frost$core$MutableMethod* _30;
int64_t* _31;
int64_t _32;
frost$core$Object** _33;
frost$core$Object* _34;
bool _35;
frost$unsafe$Pointer _37;
frost$core$Object* _38;
frost$unsafe$Pointer _41;
frost$core$Object* _42;
frost$core$Object* _45;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Object* _49;
frost$core$Object* _52;
frost$core$Object* _54;
frost$core$Object* _56;
frost$core$Object* _57;
frost$core$Object* _61;
frost$core$Object* _64;
frost$core$Object* _65;
frost$core$Object* _67;
frost$core$Object* _68;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:131
*(&local0) = ((frost$core$Object*) NULL);
_2 = param2;
frost$core$Frost$ref$frost$core$Object$Q(_2);
_4 = *(&local0);
_5 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_5);
*(&local0) = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:132
_9 = ((frost$collections$Iterable*) param0);
ITable* $tmp53 = _9->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp53 = $tmp53->next;
}
_10 = $tmp53->methods[0];
_11 = _10(_9);
goto block1;
block1:;
ITable* $tmp54 = _11->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp54 = $tmp54->next;
}
_13 = $tmp54->methods[0];
_14 = _13(_11);
_15 = _14.value;
if (_15) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp55 = _11->$class->itable;
while ($tmp55->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp55 = $tmp55->next;
}
_18 = $tmp55->methods[1];
_19 = _18(_11);
_20 = _19;
_21 = _20;
frost$core$Frost$ref$frost$core$Object$Q(_21);
_23 = *(&local1);
_24 = _23;
frost$core$Frost$unref$frost$core$Object$Q(_24);
*(&local1) = _20;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:133
_28 = *(&local0);
_29 = *(&local1);
_30 = param1;
_31 = &_30->pointer;
_32 = *_31;
_33 = &_30->target;
_34 = *_33;
_35 = _34 != ((frost$core$Object*) NULL);
if (_35) goto block4; else goto block5;
block5:;
_37 = (frost$unsafe$Pointer) {_32};
_38 = (($fn56) _37.value)(_28, _29);
*(&local2) = _38;
goto block6;
block4:;
_41 = (frost$unsafe$Pointer) {_32};
_42 = (($fn57) _41.value)(_34, _28, _29);
*(&local2) = _42;
goto block6;
block6:;
_45 = *(&local2);
_46 = _45;
frost$core$Frost$ref$frost$core$Object$Q(_46);
_48 = *(&local0);
_49 = _48;
frost$core$Frost$unref$frost$core$Object$Q(_49);
*(&local0) = _45;
_52 = _45;
frost$core$Frost$unref$frost$core$Object$Q(_52);
_54 = _19;
frost$core$Frost$unref$frost$core$Object$Q(_54);
_56 = *(&local1);
_57 = _56;
frost$core$Frost$unref$frost$core$Object$Q(_57);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_61 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_61);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:135
_64 = *(&local0);
_65 = _64;
frost$core$Frost$ref$frost$core$Object$Q(_65);
_67 = *(&local0);
_68 = _67;
frost$core$Frost$unref$frost$core$Object$Q(_68);
*(&local0) = ((frost$core$Object*) NULL);
return _64;

}
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T(void* rawSelf, frost$core$MutableMethod* param1, frost$core$Object* param2) {
frost$collections$CollectionView* param0 = (frost$collections$CollectionView*) rawSelf;

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
frost$core$Object* _2;
frost$core$Object* _4;
frost$core$Object* _5;
frost$collections$Iterable* _9;
$fn58 _10;
frost$collections$Iterator* _11;
$fn59 _13;
frost$core$Bit _14;
bool _15;
$fn60 _18;
frost$core$Object* _19;
frost$core$Object* _20;
frost$core$Object* _21;
frost$core$Object* _23;
frost$core$Object* _24;
frost$core$Object* _28;
frost$core$Object* _29;
frost$core$MutableMethod* _30;
int64_t* _31;
int64_t _32;
frost$core$Object** _33;
frost$core$Object* _34;
bool _35;
frost$unsafe$Pointer _37;
frost$core$Object* _38;
frost$unsafe$Pointer _41;
frost$core$Object* _42;
frost$core$Object* _45;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Object* _49;
frost$core$Object* _52;
frost$core$Object* _54;
frost$core$Object* _56;
frost$core$Object* _57;
frost$core$Object* _61;
frost$core$Object* _64;
frost$core$Object* _65;
frost$core$Object* _67;
frost$core$Object* _68;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:140
*(&local0) = ((frost$core$Object*) NULL);
_2 = param2;
frost$core$Frost$ref$frost$core$Object$Q(_2);
_4 = *(&local0);
_5 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_5);
*(&local0) = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:141
_9 = ((frost$collections$Iterable*) param0);
ITable* $tmp61 = _9->$class->itable;
while ($tmp61->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp61 = $tmp61->next;
}
_10 = $tmp61->methods[0];
_11 = _10(_9);
goto block1;
block1:;
ITable* $tmp62 = _11->$class->itable;
while ($tmp62->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp62 = $tmp62->next;
}
_13 = $tmp62->methods[0];
_14 = _13(_11);
_15 = _14.value;
if (_15) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp63 = _11->$class->itable;
while ($tmp63->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp63 = $tmp63->next;
}
_18 = $tmp63->methods[1];
_19 = _18(_11);
_20 = _19;
_21 = _20;
frost$core$Frost$ref$frost$core$Object$Q(_21);
_23 = *(&local1);
_24 = _23;
frost$core$Frost$unref$frost$core$Object$Q(_24);
*(&local1) = _20;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:142
_28 = *(&local0);
_29 = *(&local1);
_30 = param1;
_31 = &_30->pointer;
_32 = *_31;
_33 = &_30->target;
_34 = *_33;
_35 = _34 != ((frost$core$Object*) NULL);
if (_35) goto block4; else goto block5;
block5:;
_37 = (frost$unsafe$Pointer) {_32};
_38 = (($fn64) _37.value)(_28, _29);
*(&local2) = _38;
goto block6;
block4:;
_41 = (frost$unsafe$Pointer) {_32};
_42 = (($fn65) _41.value)(_34, _28, _29);
*(&local2) = _42;
goto block6;
block6:;
_45 = *(&local2);
_46 = _45;
frost$core$Frost$ref$frost$core$Object$Q(_46);
_48 = *(&local0);
_49 = _48;
frost$core$Frost$unref$frost$core$Object$Q(_49);
*(&local0) = _45;
_52 = _45;
frost$core$Frost$unref$frost$core$Object$Q(_52);
_54 = _19;
frost$core$Frost$unref$frost$core$Object$Q(_54);
_56 = *(&local1);
_57 = _56;
frost$core$Frost$unref$frost$core$Object$Q(_57);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_61 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_61);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:144
_64 = *(&local0);
_65 = _64;
frost$core$Frost$ref$frost$core$Object$Q(_65);
_67 = *(&local0);
_68 = _67;
frost$core$Frost$unref$frost$core$Object$Q(_68);
*(&local0) = ((frost$core$Object*) NULL);
return _64;

}
void frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP(void* rawSelf, frost$core$MutableMethod* param1) {
frost$collections$CollectionView* param0 = (frost$collections$CollectionView*) rawSelf;

frost$core$Object* local0 = NULL;
frost$collections$Iterable* _1;
$fn66 _2;
frost$collections$Iterator* _3;
$fn67 _5;
frost$core$Bit _6;
bool _7;
$fn68 _10;
frost$core$Object* _11;
frost$core$Object* _12;
frost$core$Object* _13;
frost$core$Object* _15;
frost$core$Object* _16;
frost$core$Object* _20;
frost$core$MutableMethod* _21;
int64_t* _22;
int64_t _23;
frost$core$Object** _24;
frost$core$Object* _25;
bool _26;
frost$unsafe$Pointer _28;
frost$unsafe$Pointer _31;
frost$core$Object* _34;
frost$core$Object* _36;
frost$core$Object* _37;
frost$core$Object* _41;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:157
_1 = ((frost$collections$Iterable*) param0);
ITable* $tmp69 = _1->$class->itable;
while ($tmp69->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp69 = $tmp69->next;
}
_2 = $tmp69->methods[0];
_3 = _2(_1);
goto block1;
block1:;
ITable* $tmp70 = _3->$class->itable;
while ($tmp70->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp70 = $tmp70->next;
}
_5 = $tmp70->methods[0];
_6 = _5(_3);
_7 = _6.value;
if (_7) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp71 = _3->$class->itable;
while ($tmp71->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp71 = $tmp71->next;
}
_10 = $tmp71->methods[1];
_11 = _10(_3);
_12 = _11;
_13 = _12;
frost$core$Frost$ref$frost$core$Object$Q(_13);
_15 = *(&local0);
_16 = _15;
frost$core$Frost$unref$frost$core$Object$Q(_16);
*(&local0) = _12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:158
_20 = *(&local0);
_21 = param1;
_22 = &_21->pointer;
_23 = *_22;
_24 = &_21->target;
_25 = *_24;
_26 = _25 != ((frost$core$Object*) NULL);
if (_26) goto block4; else goto block5;
block5:;
_28 = (frost$unsafe$Pointer) {_23};
(($fn72) _28.value)(_20);
goto block6;
block4:;
_31 = (frost$unsafe$Pointer) {_23};
(($fn73) _31.value)(_25, _20);
goto block6;
block6:;
_34 = _11;
frost$core$Frost$unref$frost$core$Object$Q(_34);
_36 = *(&local0);
_37 = _36;
frost$core$Frost$unref$frost$core$Object$Q(_37);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_41 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_41);
return;

}
frost$collections$Array* frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT(void* rawSelf, frost$core$MutableMethod* param1) {
frost$collections$CollectionView* param0 = (frost$collections$CollectionView*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
frost$collections$Array* _1;
$fn74 _2;
frost$core$Int _3;
frost$core$Object* _6;
frost$collections$Array* _8;
frost$core$Object* _9;
frost$core$Object* _12;
frost$collections$Iterable* _15;
$fn75 _16;
frost$collections$Iterator* _17;
$fn76 _19;
frost$core$Bit _20;
bool _21;
$fn77 _24;
frost$core$Object* _25;
frost$core$Object* _26;
frost$core$Object* _27;
frost$core$Object* _29;
frost$core$Object* _30;
frost$collections$Array* _34;
frost$core$Object* _35;
frost$core$MutableMethod* _36;
int64_t* _37;
int64_t _38;
frost$core$Object** _39;
frost$core$Object* _40;
bool _41;
frost$unsafe$Pointer _43;
frost$core$Object* _44;
frost$unsafe$Pointer _47;
frost$core$Object* _48;
frost$core$Object* _51;
frost$core$Object* _52;
frost$core$Object* _54;
frost$core$Object* _56;
frost$core$Object* _58;
frost$core$Object* _59;
frost$core$Object* _63;
frost$collections$Array* _66;
frost$core$Object* _67;
frost$collections$Array* _69;
frost$core$Object* _70;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:165
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp78 = param0->$class->itable;
while ($tmp78->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp78 = $tmp78->next;
}
_2 = $tmp78->methods[0];
_3 = _2(param0);
frost$collections$Array$init$frost$core$Int(_1, _3);
*(&local0) = ((frost$collections$Array*) NULL);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = *(&local0);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
*(&local0) = _1;
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:166
_15 = ((frost$collections$Iterable*) param0);
ITable* $tmp79 = _15->$class->itable;
while ($tmp79->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp79 = $tmp79->next;
}
_16 = $tmp79->methods[0];
_17 = _16(_15);
goto block1;
block1:;
ITable* $tmp80 = _17->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp80 = $tmp80->next;
}
_19 = $tmp80->methods[0];
_20 = _19(_17);
_21 = _20.value;
if (_21) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp81 = _17->$class->itable;
while ($tmp81->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp81 = $tmp81->next;
}
_24 = $tmp81->methods[1];
_25 = _24(_17);
_26 = _25;
_27 = _26;
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = *(&local1);
_30 = _29;
frost$core$Frost$unref$frost$core$Object$Q(_30);
*(&local1) = _26;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:167
_34 = *(&local0);
_35 = *(&local1);
_36 = param1;
_37 = &_36->pointer;
_38 = *_37;
_39 = &_36->target;
_40 = *_39;
_41 = _40 != ((frost$core$Object*) NULL);
if (_41) goto block4; else goto block5;
block5:;
_43 = (frost$unsafe$Pointer) {_38};
_44 = (($fn82) _43.value)(_35);
*(&local2) = _44;
goto block6;
block4:;
_47 = (frost$unsafe$Pointer) {_38};
_48 = (($fn83) _47.value)(_40, _35);
*(&local2) = _48;
goto block6;
block6:;
_51 = *(&local2);
_52 = _51;
frost$collections$Array$add$frost$collections$Array$T(_34, _52);
_54 = _51;
frost$core$Frost$unref$frost$core$Object$Q(_54);
_56 = _25;
frost$core$Frost$unref$frost$core$Object$Q(_56);
_58 = *(&local1);
_59 = _58;
frost$core$Frost$unref$frost$core$Object$Q(_59);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_63 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_63);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:169
_66 = *(&local0);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$ref$frost$core$Object$Q(_67);
_69 = *(&local0);
_70 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_70);
*(&local0) = ((frost$collections$Array*) NULL);
return _66;

}
frost$collections$Array* frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT(void* rawSelf, frost$core$MutableMethod* param1) {
frost$collections$CollectionView* param0 = (frost$collections$CollectionView*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
frost$collections$Array* _1;
$fn84 _2;
frost$core$Int _3;
frost$core$Object* _6;
frost$collections$Array* _8;
frost$core$Object* _9;
frost$core$Object* _12;
frost$collections$Iterable* _15;
$fn85 _16;
frost$collections$Iterator* _17;
$fn86 _19;
frost$core$Bit _20;
bool _21;
$fn87 _24;
frost$core$Object* _25;
frost$core$Object* _26;
frost$core$Object* _27;
frost$core$Object* _29;
frost$core$Object* _30;
frost$collections$Array* _34;
frost$core$Object* _35;
frost$core$MutableMethod* _36;
int64_t* _37;
int64_t _38;
frost$core$Object** _39;
frost$core$Object* _40;
bool _41;
frost$unsafe$Pointer _43;
frost$core$Object* _44;
frost$unsafe$Pointer _47;
frost$core$Object* _48;
frost$core$Object* _51;
frost$core$Object* _52;
frost$core$Object* _54;
frost$core$Object* _56;
frost$core$Object* _58;
frost$core$Object* _59;
frost$core$Object* _63;
frost$collections$Array* _66;
frost$core$Object* _67;
frost$collections$Array* _69;
frost$core$Object* _70;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:174
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp88 = param0->$class->itable;
while ($tmp88->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp88 = $tmp88->next;
}
_2 = $tmp88->methods[0];
_3 = _2(param0);
frost$collections$Array$init$frost$core$Int(_1, _3);
*(&local0) = ((frost$collections$Array*) NULL);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = *(&local0);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
*(&local0) = _1;
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:175
_15 = ((frost$collections$Iterable*) param0);
ITable* $tmp89 = _15->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp89 = $tmp89->next;
}
_16 = $tmp89->methods[0];
_17 = _16(_15);
goto block1;
block1:;
ITable* $tmp90 = _17->$class->itable;
while ($tmp90->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp90 = $tmp90->next;
}
_19 = $tmp90->methods[0];
_20 = _19(_17);
_21 = _20.value;
if (_21) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp91 = _17->$class->itable;
while ($tmp91->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp91 = $tmp91->next;
}
_24 = $tmp91->methods[1];
_25 = _24(_17);
_26 = _25;
_27 = _26;
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = *(&local1);
_30 = _29;
frost$core$Frost$unref$frost$core$Object$Q(_30);
*(&local1) = _26;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:176
_34 = *(&local0);
_35 = *(&local1);
_36 = param1;
_37 = &_36->pointer;
_38 = *_37;
_39 = &_36->target;
_40 = *_39;
_41 = _40 != ((frost$core$Object*) NULL);
if (_41) goto block4; else goto block5;
block5:;
_43 = (frost$unsafe$Pointer) {_38};
_44 = (($fn92) _43.value)(_35);
*(&local2) = _44;
goto block6;
block4:;
_47 = (frost$unsafe$Pointer) {_38};
_48 = (($fn93) _47.value)(_40, _35);
*(&local2) = _48;
goto block6;
block6:;
_51 = *(&local2);
_52 = _51;
frost$collections$Array$add$frost$collections$Array$T(_34, _52);
_54 = _51;
frost$core$Frost$unref$frost$core$Object$Q(_54);
_56 = _25;
frost$core$Frost$unref$frost$core$Object$Q(_56);
_58 = *(&local1);
_59 = _58;
frost$core$Frost$unref$frost$core$Object$Q(_59);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_63 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_63);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:178
_66 = *(&local0);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$ref$frost$core$Object$Q(_67);
_69 = *(&local0);
_70 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_70);
*(&local0) = ((frost$collections$Array*) NULL);
return _66;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




