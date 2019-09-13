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
#include "frost/collections/Array.h"


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
typedef frost$core$Object* (*$fn27)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn28)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn36)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn37)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Int (*$fn38)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn39)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn40)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn41)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn42)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn43)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn44)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn52)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn53)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn54)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn55)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn56)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn57)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn58)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn62)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn63)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn64)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn65)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn66)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn67)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn68)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn72)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn73)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn74)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn75)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn76)(frost$collections$Iterator*);
typedef void (*$fn77)(frost$core$Object*);
typedef void (*$fn78)(frost$core$Object*, frost$core$Object*);
typedef void (*$fn82)(frost$core$Object*);
typedef void (*$fn83)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Int (*$fn84)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn85)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn86)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn87)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn88)(frost$core$Object*);
typedef frost$core$Object* (*$fn89)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn94)(frost$core$Object*);
typedef frost$core$Object* (*$fn95)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Int (*$fn96)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn97)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn98)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn99)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn100)(frost$core$Object*);
typedef frost$core$Object* (*$fn101)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn106)(frost$core$Object*);
typedef frost$core$Object* (*$fn107)(frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 32, -3187779348182749487, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 20, -1009795112068118972, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54", 220, 6908775502092721301, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 20, -1009795112068118972, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54", 219, -2277848183399103972, NULL };

frost$core$Object* frost$collections$CollectionView$get_first$R$frost$collections$CollectionView$T(frost$collections$CollectionView* param0) {

frost$collections$Iterable* _1;
$fn2 _2;
frost$collections$Iterator* _3;
frost$collections$Iterator* _4;
frost$collections$Iterator* _5;
$fn3 _6;
frost$core$Object* _7;
frost$core$Object* _8;
frost$core$Object* _9;
frost$core$Object* _11;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:23
_1 = ((frost$collections$Iterable*) param0);
ITable* $tmp4 = _1->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp4 = $tmp4->next;
}
_2 = $tmp4->methods[0];
_3 = _2(_1);
_4 = _3;
_5 = _4;
ITable* $tmp5 = _5->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp5 = $tmp5->next;
}
_6 = $tmp5->methods[1];
_7 = _6(_5);
_8 = _7;
_9 = _8;
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = _7;
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_13);
return _8;

}
frost$core$String* frost$collections$CollectionView$join$R$frost$core$String(frost$collections$CollectionView* param0) {

frost$collections$CollectionView* _1;
$fn6 _2;
frost$core$String* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:34
_1 = param0;
ITable* $tmp7 = _1->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp7 = $tmp7->next;
}
_2 = $tmp7->methods[3];
_3 = _2(_1, &$s8);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$core$String* frost$collections$CollectionView$join$frost$core$String$R$frost$core$String(frost$collections$CollectionView* param0, frost$core$String* param1) {

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$core$Object* local2 = NULL;
frost$collections$CollectionView* _1;
$fn9 _2;
frost$core$Int _3;
frost$core$Int _4;
int64_t _7;
int64_t _8;
bool _9;
frost$core$Bit _10;
bool _12;
frost$core$Object* _15;
frost$core$Bit _19;
frost$core$MutableString* _22;
frost$core$Object* _25;
frost$core$MutableString* _27;
frost$core$Object* _28;
frost$core$Object* _31;
frost$collections$Iterable* _34;
frost$collections$Iterable* _35;
$fn10 _36;
frost$collections$Iterator* _37;
frost$collections$Iterator* _38;
frost$collections$Iterator* _40;
$fn11 _41;
frost$core$Bit _42;
bool _43;
frost$collections$Iterator* _46;
$fn12 _47;
frost$core$Object* _48;
frost$core$Object* _49;
frost$core$Object* _50;
frost$core$Object* _52;
frost$core$Object* _53;
frost$core$Bit _57;
bool _58;
frost$core$Bit _61;
frost$core$MutableString* _66;
frost$core$Object* _70;
frost$core$Object* _71;
bool _72;
frost$core$Bit _73;
bool _74;
frost$core$MutableString* _77;
frost$core$Object* _78;
frost$core$Object* _79;
$fn13 _82;
frost$core$String* _83;
frost$core$Object* _85;
frost$core$MutableString* _91;
frost$core$Object* _94;
frost$core$Object* _96;
frost$core$Object* _97;
frost$core$Object* _101;
frost$core$MutableString* _104;
frost$core$String* _105;
frost$core$Object* _106;
frost$core$Object* _108;
frost$core$MutableString* _110;
frost$core$Object* _111;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:47
_1 = param0;
ITable* $tmp14 = _1->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp14 = $tmp14->next;
}
_2 = $tmp14->methods[0];
_3 = _2(_1);
_4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CollectionView.frost:47:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_7 = _3.value;
_8 = _4.value;
_9 = _7 == _8;
_10 = (frost$core$Bit) {_9};
_12 = _10.value;
if (_12) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:48
_15 = ((frost$core$Object*) &$s15);
frost$core$Frost$ref$frost$core$Object$Q(_15);
return &$s16;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:50
_19 = (frost$core$Bit) {true};
*(&local0) = _19;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:51
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_22 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_22);
*(&local1) = ((frost$core$MutableString*) NULL);
_25 = ((frost$core$Object*) _22);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = *(&local1);
_28 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local1) = _22;
_31 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_31);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:52
_34 = ((frost$collections$Iterable*) param0);
_35 = _34;
ITable* $tmp17 = _35->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp17 = $tmp17->next;
}
_36 = $tmp17->methods[0];
_37 = _36(_35);
_38 = _37;
goto block4;
block4:;
_40 = _38;
ITable* $tmp18 = _40->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp18 = $tmp18->next;
}
_41 = $tmp18->methods[0];
_42 = _41(_40);
_43 = _42.value;
if (_43) goto block6; else goto block5;
block5:;
*(&local2) = ((frost$core$Object*) NULL);
_46 = _38;
ITable* $tmp19 = _46->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp19 = $tmp19->next;
}
_47 = $tmp19->methods[1];
_48 = _47(_46);
_49 = _48;
_50 = _49;
frost$core$Frost$ref$frost$core$Object$Q(_50);
_52 = *(&local2);
_53 = _52;
frost$core$Frost$unref$frost$core$Object$Q(_53);
*(&local2) = _49;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:53
_57 = *(&local0);
_58 = _57.value;
if (_58) goto block7; else goto block9;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:54
_61 = (frost$core$Bit) {false};
*(&local0) = _61;
goto block8;
block9:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:57
_66 = *(&local1);
frost$core$MutableString$append$frost$core$String(_66, param1);
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:60
_70 = *(&local2);
_71 = _70;
_72 = _71 != NULL;
_73 = (frost$core$Bit) {_72};
_74 = _73.value;
if (_74) goto block10; else goto block12;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:61
_77 = *(&local1);
_78 = *(&local2);
_79 = _78;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from CollectionView.frost:61:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_82 = ($fn20) _79->$class->vtable[0];
_83 = _82(_79);
frost$core$MutableString$append$frost$core$String(_77, _83);
_85 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_85);
goto block11;
block12:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:64
_91 = *(&local1);
frost$core$MutableString$append$frost$core$String(_91, &$s21);
goto block11;
block11:;
_94 = _48;
frost$core$Frost$unref$frost$core$Object$Q(_94);
_96 = *(&local2);
_97 = _96;
frost$core$Frost$unref$frost$core$Object$Q(_97);
*(&local2) = ((frost$core$Object*) NULL);
goto block4;
block6:;
_101 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_101);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:67
_104 = *(&local1);
_105 = frost$core$MutableString$finish$R$frost$core$String(_104);
_106 = ((frost$core$Object*) _105);
frost$core$Frost$ref$frost$core$Object$Q(_106);
_108 = ((frost$core$Object*) _105);
frost$core$Frost$unref$frost$core$Object$Q(_108);
_110 = *(&local1);
_111 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_111);
*(&local1) = ((frost$core$MutableString*) NULL);
return _105;

}
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1) {

frost$collections$Iterator* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
frost$collections$CollectionView* _0;
$fn22 _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _4;
int64_t _5;
bool _6;
frost$core$Bit _7;
bool _8;
frost$core$Int _10;
frost$collections$Iterable* _14;
$fn23 _15;
frost$collections$Iterator* _16;
frost$collections$Iterator* _17;
frost$core$Object* _19;
frost$collections$Iterator* _21;
frost$core$Object* _22;
frost$core$Object* _25;
frost$collections$Iterator* _28;
frost$collections$Iterator* _29;
$fn24 _30;
frost$core$Object* _31;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$Object* _36;
frost$core$Object* _37;
frost$core$Object* _40;
frost$collections$Iterator* _44;
frost$collections$Iterator* _45;
$fn25 _46;
frost$core$Bit _47;
bool _50;
bool _51;
frost$core$Bit _52;
bool _54;
frost$core$Object* _57;
frost$collections$Iterator* _58;
frost$collections$Iterator* _59;
$fn26 _60;
frost$core$Object* _61;
frost$core$Object* _62;
frost$core$MutableMethod* _63;
frost$core$Int8** _64;
frost$core$Int8* _65;
frost$core$Object** _66;
frost$core$Object* _67;
bool _68;
$fn27 _70;
frost$core$Object* _71;
$fn28 _74;
frost$core$Object* _75;
frost$core$Object* _78;
frost$core$Object* _79;
frost$core$Object* _81;
frost$core$Object* _82;
frost$core$Object* _85;
frost$core$Object* _87;
frost$core$Object* _91;
frost$core$Object* _92;
frost$core$Object* _94;
frost$core$Object* _95;
frost$collections$Iterator* _98;
frost$core$Object* _99;
_0 = param0;
ITable* $tmp29 = _0->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp29 = $tmp29->next;
}
_1 = $tmp29->methods[0];
_2 = _1(_0);
_3 = (frost$core$Int) {0u};
_4 = _2.value;
_5 = _3.value;
_6 = _4 > _5;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block1; else goto block2;
block2:;
_10 = (frost$core$Int) {96u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s30, _10, &$s31);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:98
_14 = ((frost$collections$Iterable*) param0);
ITable* $tmp32 = _14->$class->itable;
while ($tmp32->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp32 = $tmp32->next;
}
_15 = $tmp32->methods[0];
_16 = _15(_14);
_17 = _16;
*(&local0) = ((frost$collections$Iterator*) NULL);
_19 = ((frost$core$Object*) _17);
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = *(&local0);
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
*(&local0) = _17;
_25 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_25);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:99
_28 = *(&local0);
_29 = _28;
ITable* $tmp33 = _29->$class->itable;
while ($tmp33->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp33 = $tmp33->next;
}
_30 = $tmp33->methods[1];
_31 = _30(_29);
_32 = _31;
*(&local1) = ((frost$core$Object*) NULL);
_34 = _32;
frost$core$Frost$ref$frost$core$Object$Q(_34);
_36 = *(&local1);
_37 = _36;
frost$core$Frost$unref$frost$core$Object$Q(_37);
*(&local1) = _32;
_40 = _31;
frost$core$Frost$unref$frost$core$Object$Q(_40);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:100
goto block3;
block3:;
_44 = *(&local0);
_45 = _44;
ITable* $tmp34 = _45->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp34 = $tmp34->next;
}
_46 = $tmp34->methods[0];
_47 = _46(_45);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from CollectionView.frost:100:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_50 = _47.value;
_51 = !_50;
_52 = (frost$core$Bit) {_51};
_54 = _52.value;
if (_54) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:101
_57 = *(&local1);
_58 = *(&local0);
_59 = _58;
ITable* $tmp35 = _59->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp35 = $tmp35->next;
}
_60 = $tmp35->methods[1];
_61 = _60(_59);
_62 = _61;
_63 = param1;
_64 = &_63->pointer;
_65 = *_64;
_66 = &_63->target;
_67 = *_66;
_68 = _67 != ((frost$core$Object*) NULL);
if (_68) goto block7; else goto block8;
block8:;
_70 = (($fn36) _65);
_71 = _70(_57, _62);
*(&local2) = _71;
goto block9;
block7:;
_74 = (($fn37) _65);
_75 = _74(_67, _57, _62);
*(&local2) = _75;
goto block9;
block9:;
_78 = *(&local2);
_79 = _78;
frost$core$Frost$ref$frost$core$Object$Q(_79);
_81 = *(&local1);
_82 = _81;
frost$core$Frost$unref$frost$core$Object$Q(_82);
*(&local1) = _78;
_85 = _78;
frost$core$Frost$unref$frost$core$Object$Q(_85);
_87 = _61;
frost$core$Frost$unref$frost$core$Object$Q(_87);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:103
_91 = *(&local1);
_92 = _91;
frost$core$Frost$ref$frost$core$Object$Q(_92);
_94 = *(&local1);
_95 = _94;
frost$core$Frost$unref$frost$core$Object$Q(_95);
*(&local1) = ((frost$core$Object*) NULL);
_98 = *(&local0);
_99 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_99);
*(&local0) = ((frost$collections$Iterator*) NULL);
return _91;

}
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1) {

frost$collections$Iterator* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
frost$collections$CollectionView* _0;
$fn38 _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _4;
int64_t _5;
bool _6;
frost$core$Bit _7;
bool _8;
frost$core$Int _10;
frost$collections$Iterable* _14;
$fn39 _15;
frost$collections$Iterator* _16;
frost$collections$Iterator* _17;
frost$core$Object* _19;
frost$collections$Iterator* _21;
frost$core$Object* _22;
frost$core$Object* _25;
frost$collections$Iterator* _28;
frost$collections$Iterator* _29;
$fn40 _30;
frost$core$Object* _31;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$Object* _36;
frost$core$Object* _37;
frost$core$Object* _40;
frost$collections$Iterator* _44;
frost$collections$Iterator* _45;
$fn41 _46;
frost$core$Bit _47;
bool _50;
bool _51;
frost$core$Bit _52;
bool _54;
frost$core$Object* _57;
frost$collections$Iterator* _58;
frost$collections$Iterator* _59;
$fn42 _60;
frost$core$Object* _61;
frost$core$Object* _62;
frost$core$MutableMethod* _63;
frost$core$Int8** _64;
frost$core$Int8* _65;
frost$core$Object** _66;
frost$core$Object* _67;
bool _68;
$fn43 _70;
frost$core$Object* _71;
$fn44 _74;
frost$core$Object* _75;
frost$core$Object* _78;
frost$core$Object* _79;
frost$core$Object* _81;
frost$core$Object* _82;
frost$core$Object* _85;
frost$core$Object* _87;
frost$core$Object* _91;
frost$core$Object* _92;
frost$core$Object* _94;
frost$core$Object* _95;
frost$collections$Iterator* _98;
frost$core$Object* _99;
_0 = param0;
ITable* $tmp45 = _0->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp45 = $tmp45->next;
}
_1 = $tmp45->methods[0];
_2 = _1(_0);
_3 = (frost$core$Int) {0u};
_4 = _2.value;
_5 = _3.value;
_6 = _4 > _5;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block1; else goto block2;
block2:;
_10 = (frost$core$Int) {108u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s46, _10, &$s47);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:110
_14 = ((frost$collections$Iterable*) param0);
ITable* $tmp48 = _14->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp48 = $tmp48->next;
}
_15 = $tmp48->methods[0];
_16 = _15(_14);
_17 = _16;
*(&local0) = ((frost$collections$Iterator*) NULL);
_19 = ((frost$core$Object*) _17);
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = *(&local0);
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
*(&local0) = _17;
_25 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_25);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:111
_28 = *(&local0);
_29 = _28;
ITable* $tmp49 = _29->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp49 = $tmp49->next;
}
_30 = $tmp49->methods[1];
_31 = _30(_29);
_32 = _31;
*(&local1) = ((frost$core$Object*) NULL);
_34 = _32;
frost$core$Frost$ref$frost$core$Object$Q(_34);
_36 = *(&local1);
_37 = _36;
frost$core$Frost$unref$frost$core$Object$Q(_37);
*(&local1) = _32;
_40 = _31;
frost$core$Frost$unref$frost$core$Object$Q(_40);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:112
goto block3;
block3:;
_44 = *(&local0);
_45 = _44;
ITable* $tmp50 = _45->$class->itable;
while ($tmp50->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp50 = $tmp50->next;
}
_46 = $tmp50->methods[0];
_47 = _46(_45);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from CollectionView.frost:112:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_50 = _47.value;
_51 = !_50;
_52 = (frost$core$Bit) {_51};
_54 = _52.value;
if (_54) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:113
_57 = *(&local1);
_58 = *(&local0);
_59 = _58;
ITable* $tmp51 = _59->$class->itable;
while ($tmp51->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp51 = $tmp51->next;
}
_60 = $tmp51->methods[1];
_61 = _60(_59);
_62 = _61;
_63 = param1;
_64 = &_63->pointer;
_65 = *_64;
_66 = &_63->target;
_67 = *_66;
_68 = _67 != ((frost$core$Object*) NULL);
if (_68) goto block7; else goto block8;
block8:;
_70 = (($fn52) _65);
_71 = _70(_57, _62);
*(&local2) = _71;
goto block9;
block7:;
_74 = (($fn53) _65);
_75 = _74(_67, _57, _62);
*(&local2) = _75;
goto block9;
block9:;
_78 = *(&local2);
_79 = _78;
frost$core$Frost$ref$frost$core$Object$Q(_79);
_81 = *(&local1);
_82 = _81;
frost$core$Frost$unref$frost$core$Object$Q(_82);
*(&local1) = _78;
_85 = _78;
frost$core$Frost$unref$frost$core$Object$Q(_85);
_87 = _61;
frost$core$Frost$unref$frost$core$Object$Q(_87);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:115
_91 = *(&local1);
_92 = _91;
frost$core$Frost$ref$frost$core$Object$Q(_92);
_94 = *(&local1);
_95 = _94;
frost$core$Frost$unref$frost$core$Object$Q(_95);
*(&local1) = ((frost$core$Object*) NULL);
_98 = *(&local0);
_99 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_99);
*(&local0) = ((frost$collections$Iterator*) NULL);
return _91;

}
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1, frost$core$Object* param2) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
frost$core$Object* _2;
frost$core$Object* _4;
frost$core$Object* _5;
frost$collections$Iterable* _9;
frost$collections$Iterable* _10;
$fn54 _11;
frost$collections$Iterator* _12;
frost$collections$Iterator* _13;
frost$collections$Iterator* _15;
$fn55 _16;
frost$core$Bit _17;
bool _18;
frost$collections$Iterator* _21;
$fn56 _22;
frost$core$Object* _23;
frost$core$Object* _24;
frost$core$Object* _25;
frost$core$Object* _27;
frost$core$Object* _28;
frost$core$Object* _32;
frost$core$Object* _33;
frost$core$MutableMethod* _34;
frost$core$Int8** _35;
frost$core$Int8* _36;
frost$core$Object** _37;
frost$core$Object* _38;
bool _39;
$fn57 _41;
frost$core$Object* _42;
$fn58 _45;
frost$core$Object* _46;
frost$core$Object* _49;
frost$core$Object* _50;
frost$core$Object* _52;
frost$core$Object* _53;
frost$core$Object* _56;
frost$core$Object* _58;
frost$core$Object* _60;
frost$core$Object* _61;
frost$core$Object* _65;
frost$core$Object* _68;
frost$core$Object* _69;
frost$core$Object* _71;
frost$core$Object* _72;
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
_10 = _9;
ITable* $tmp59 = _10->$class->itable;
while ($tmp59->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp59 = $tmp59->next;
}
_11 = $tmp59->methods[0];
_12 = _11(_10);
_13 = _12;
goto block1;
block1:;
_15 = _13;
ITable* $tmp60 = _15->$class->itable;
while ($tmp60->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp60 = $tmp60->next;
}
_16 = $tmp60->methods[0];
_17 = _16(_15);
_18 = _17.value;
if (_18) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
_21 = _13;
ITable* $tmp61 = _21->$class->itable;
while ($tmp61->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp61 = $tmp61->next;
}
_22 = $tmp61->methods[1];
_23 = _22(_21);
_24 = _23;
_25 = _24;
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = *(&local1);
_28 = _27;
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local1) = _24;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:133
_32 = *(&local0);
_33 = *(&local1);
_34 = param1;
_35 = &_34->pointer;
_36 = *_35;
_37 = &_34->target;
_38 = *_37;
_39 = _38 != ((frost$core$Object*) NULL);
if (_39) goto block4; else goto block5;
block5:;
_41 = (($fn62) _36);
_42 = _41(_32, _33);
*(&local2) = _42;
goto block6;
block4:;
_45 = (($fn63) _36);
_46 = _45(_38, _32, _33);
*(&local2) = _46;
goto block6;
block6:;
_49 = *(&local2);
_50 = _49;
frost$core$Frost$ref$frost$core$Object$Q(_50);
_52 = *(&local0);
_53 = _52;
frost$core$Frost$unref$frost$core$Object$Q(_53);
*(&local0) = _49;
_56 = _49;
frost$core$Frost$unref$frost$core$Object$Q(_56);
_58 = _23;
frost$core$Frost$unref$frost$core$Object$Q(_58);
_60 = *(&local1);
_61 = _60;
frost$core$Frost$unref$frost$core$Object$Q(_61);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_65 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_65);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:135
_68 = *(&local0);
_69 = _68;
frost$core$Frost$ref$frost$core$Object$Q(_69);
_71 = *(&local0);
_72 = _71;
frost$core$Frost$unref$frost$core$Object$Q(_72);
*(&local0) = ((frost$core$Object*) NULL);
return _68;

}
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1, frost$core$Object* param2) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
frost$core$Object* _2;
frost$core$Object* _4;
frost$core$Object* _5;
frost$collections$Iterable* _9;
frost$collections$Iterable* _10;
$fn64 _11;
frost$collections$Iterator* _12;
frost$collections$Iterator* _13;
frost$collections$Iterator* _15;
$fn65 _16;
frost$core$Bit _17;
bool _18;
frost$collections$Iterator* _21;
$fn66 _22;
frost$core$Object* _23;
frost$core$Object* _24;
frost$core$Object* _25;
frost$core$Object* _27;
frost$core$Object* _28;
frost$core$Object* _32;
frost$core$Object* _33;
frost$core$MutableMethod* _34;
frost$core$Int8** _35;
frost$core$Int8* _36;
frost$core$Object** _37;
frost$core$Object* _38;
bool _39;
$fn67 _41;
frost$core$Object* _42;
$fn68 _45;
frost$core$Object* _46;
frost$core$Object* _49;
frost$core$Object* _50;
frost$core$Object* _52;
frost$core$Object* _53;
frost$core$Object* _56;
frost$core$Object* _58;
frost$core$Object* _60;
frost$core$Object* _61;
frost$core$Object* _65;
frost$core$Object* _68;
frost$core$Object* _69;
frost$core$Object* _71;
frost$core$Object* _72;
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
_10 = _9;
ITable* $tmp69 = _10->$class->itable;
while ($tmp69->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp69 = $tmp69->next;
}
_11 = $tmp69->methods[0];
_12 = _11(_10);
_13 = _12;
goto block1;
block1:;
_15 = _13;
ITable* $tmp70 = _15->$class->itable;
while ($tmp70->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp70 = $tmp70->next;
}
_16 = $tmp70->methods[0];
_17 = _16(_15);
_18 = _17.value;
if (_18) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
_21 = _13;
ITable* $tmp71 = _21->$class->itable;
while ($tmp71->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp71 = $tmp71->next;
}
_22 = $tmp71->methods[1];
_23 = _22(_21);
_24 = _23;
_25 = _24;
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = *(&local1);
_28 = _27;
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local1) = _24;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:142
_32 = *(&local0);
_33 = *(&local1);
_34 = param1;
_35 = &_34->pointer;
_36 = *_35;
_37 = &_34->target;
_38 = *_37;
_39 = _38 != ((frost$core$Object*) NULL);
if (_39) goto block4; else goto block5;
block5:;
_41 = (($fn72) _36);
_42 = _41(_32, _33);
*(&local2) = _42;
goto block6;
block4:;
_45 = (($fn73) _36);
_46 = _45(_38, _32, _33);
*(&local2) = _46;
goto block6;
block6:;
_49 = *(&local2);
_50 = _49;
frost$core$Frost$ref$frost$core$Object$Q(_50);
_52 = *(&local0);
_53 = _52;
frost$core$Frost$unref$frost$core$Object$Q(_53);
*(&local0) = _49;
_56 = _49;
frost$core$Frost$unref$frost$core$Object$Q(_56);
_58 = _23;
frost$core$Frost$unref$frost$core$Object$Q(_58);
_60 = *(&local1);
_61 = _60;
frost$core$Frost$unref$frost$core$Object$Q(_61);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_65 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_65);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:144
_68 = *(&local0);
_69 = _68;
frost$core$Frost$ref$frost$core$Object$Q(_69);
_71 = *(&local0);
_72 = _71;
frost$core$Frost$unref$frost$core$Object$Q(_72);
*(&local0) = ((frost$core$Object*) NULL);
return _68;

}
void frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1) {

frost$core$Object* local0 = NULL;
frost$collections$Iterable* _1;
frost$collections$Iterable* _2;
$fn74 _3;
frost$collections$Iterator* _4;
frost$collections$Iterator* _5;
frost$collections$Iterator* _7;
$fn75 _8;
frost$core$Bit _9;
bool _10;
frost$collections$Iterator* _13;
$fn76 _14;
frost$core$Object* _15;
frost$core$Object* _16;
frost$core$Object* _17;
frost$core$Object* _19;
frost$core$Object* _20;
frost$core$Object* _24;
frost$core$MutableMethod* _25;
frost$core$Int8** _26;
frost$core$Int8* _27;
frost$core$Object** _28;
frost$core$Object* _29;
bool _30;
$fn77 _32;
$fn78 _35;
frost$core$Object* _38;
frost$core$Object* _40;
frost$core$Object* _41;
frost$core$Object* _45;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:157
_1 = ((frost$collections$Iterable*) param0);
_2 = _1;
ITable* $tmp79 = _2->$class->itable;
while ($tmp79->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp79 = $tmp79->next;
}
_3 = $tmp79->methods[0];
_4 = _3(_2);
_5 = _4;
goto block1;
block1:;
_7 = _5;
ITable* $tmp80 = _7->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp80 = $tmp80->next;
}
_8 = $tmp80->methods[0];
_9 = _8(_7);
_10 = _9.value;
if (_10) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Object*) NULL);
_13 = _5;
ITable* $tmp81 = _13->$class->itable;
while ($tmp81->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp81 = $tmp81->next;
}
_14 = $tmp81->methods[1];
_15 = _14(_13);
_16 = _15;
_17 = _16;
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = *(&local0);
_20 = _19;
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local0) = _16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:158
_24 = *(&local0);
_25 = param1;
_26 = &_25->pointer;
_27 = *_26;
_28 = &_25->target;
_29 = *_28;
_30 = _29 != ((frost$core$Object*) NULL);
if (_30) goto block4; else goto block5;
block5:;
_32 = (($fn82) _27);
_32(_24);
goto block6;
block4:;
_35 = (($fn83) _27);
_35(_29, _24);
goto block6;
block6:;
_38 = _15;
frost$core$Frost$unref$frost$core$Object$Q(_38);
_40 = *(&local0);
_41 = _40;
frost$core$Frost$unref$frost$core$Object$Q(_41);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_45 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_45);
return;

}
frost$collections$Array* frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
frost$collections$Array* _1;
frost$collections$Array* _2;
frost$collections$CollectionView* _3;
$fn84 _4;
frost$core$Int _5;
frost$core$Object* _8;
frost$collections$Array* _10;
frost$core$Object* _11;
frost$core$Object* _14;
frost$collections$Iterable* _17;
frost$collections$Iterable* _18;
$fn85 _19;
frost$collections$Iterator* _20;
frost$collections$Iterator* _21;
frost$collections$Iterator* _23;
$fn86 _24;
frost$core$Bit _25;
bool _26;
frost$collections$Iterator* _29;
$fn87 _30;
frost$core$Object* _31;
frost$core$Object* _32;
frost$core$Object* _33;
frost$core$Object* _35;
frost$core$Object* _36;
frost$collections$Array* _40;
frost$collections$Array* _41;
frost$core$Object* _42;
frost$core$MutableMethod* _43;
frost$core$Int8** _44;
frost$core$Int8* _45;
frost$core$Object** _46;
frost$core$Object* _47;
bool _48;
$fn88 _50;
frost$core$Object* _51;
$fn89 _54;
frost$core$Object* _55;
frost$core$Object* _58;
frost$core$Object* _59;
frost$core$Object* _61;
frost$core$Object* _63;
frost$core$Object* _65;
frost$core$Object* _66;
frost$core$Object* _70;
frost$collections$Array* _73;
frost$core$Object* _74;
frost$collections$Array* _76;
frost$core$Object* _77;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:165
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_1 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_2 = _1;
_3 = param0;
ITable* $tmp90 = _3->$class->itable;
while ($tmp90->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp90 = $tmp90->next;
}
_4 = $tmp90->methods[0];
_5 = _4(_3);
frost$collections$Array$init$frost$core$Int(_2, _5);
*(&local0) = ((frost$collections$Array*) NULL);
_8 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = *(&local0);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
*(&local0) = _1;
_14 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_14);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:166
_17 = ((frost$collections$Iterable*) param0);
_18 = _17;
ITable* $tmp91 = _18->$class->itable;
while ($tmp91->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp91 = $tmp91->next;
}
_19 = $tmp91->methods[0];
_20 = _19(_18);
_21 = _20;
goto block1;
block1:;
_23 = _21;
ITable* $tmp92 = _23->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp92 = $tmp92->next;
}
_24 = $tmp92->methods[0];
_25 = _24(_23);
_26 = _25.value;
if (_26) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
_29 = _21;
ITable* $tmp93 = _29->$class->itable;
while ($tmp93->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp93 = $tmp93->next;
}
_30 = $tmp93->methods[1];
_31 = _30(_29);
_32 = _31;
_33 = _32;
frost$core$Frost$ref$frost$core$Object$Q(_33);
_35 = *(&local1);
_36 = _35;
frost$core$Frost$unref$frost$core$Object$Q(_36);
*(&local1) = _32;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:167
_40 = *(&local0);
_41 = _40;
_42 = *(&local1);
_43 = param1;
_44 = &_43->pointer;
_45 = *_44;
_46 = &_43->target;
_47 = *_46;
_48 = _47 != ((frost$core$Object*) NULL);
if (_48) goto block4; else goto block5;
block5:;
_50 = (($fn94) _45);
_51 = _50(_42);
*(&local2) = _51;
goto block6;
block4:;
_54 = (($fn95) _45);
_55 = _54(_47, _42);
*(&local2) = _55;
goto block6;
block6:;
_58 = *(&local2);
_59 = _58;
frost$collections$Array$add$frost$collections$Array$T(_41, _59);
_61 = _58;
frost$core$Frost$unref$frost$core$Object$Q(_61);
_63 = _31;
frost$core$Frost$unref$frost$core$Object$Q(_63);
_65 = *(&local1);
_66 = _65;
frost$core$Frost$unref$frost$core$Object$Q(_66);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_70 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_70);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:169
_73 = *(&local0);
_74 = ((frost$core$Object*) _73);
frost$core$Frost$ref$frost$core$Object$Q(_74);
_76 = *(&local0);
_77 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_77);
*(&local0) = ((frost$collections$Array*) NULL);
return _73;

}
frost$collections$Array* frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
frost$collections$Array* _1;
frost$collections$Array* _2;
frost$collections$CollectionView* _3;
$fn96 _4;
frost$core$Int _5;
frost$core$Object* _8;
frost$collections$Array* _10;
frost$core$Object* _11;
frost$core$Object* _14;
frost$collections$Iterable* _17;
frost$collections$Iterable* _18;
$fn97 _19;
frost$collections$Iterator* _20;
frost$collections$Iterator* _21;
frost$collections$Iterator* _23;
$fn98 _24;
frost$core$Bit _25;
bool _26;
frost$collections$Iterator* _29;
$fn99 _30;
frost$core$Object* _31;
frost$core$Object* _32;
frost$core$Object* _33;
frost$core$Object* _35;
frost$core$Object* _36;
frost$collections$Array* _40;
frost$collections$Array* _41;
frost$core$Object* _42;
frost$core$MutableMethod* _43;
frost$core$Int8** _44;
frost$core$Int8* _45;
frost$core$Object** _46;
frost$core$Object* _47;
bool _48;
$fn100 _50;
frost$core$Object* _51;
$fn101 _54;
frost$core$Object* _55;
frost$core$Object* _58;
frost$core$Object* _59;
frost$core$Object* _61;
frost$core$Object* _63;
frost$core$Object* _65;
frost$core$Object* _66;
frost$core$Object* _70;
frost$collections$Array* _73;
frost$core$Object* _74;
frost$collections$Array* _76;
frost$core$Object* _77;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:174
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_1 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_2 = _1;
_3 = param0;
ITable* $tmp102 = _3->$class->itable;
while ($tmp102->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp102 = $tmp102->next;
}
_4 = $tmp102->methods[0];
_5 = _4(_3);
frost$collections$Array$init$frost$core$Int(_2, _5);
*(&local0) = ((frost$collections$Array*) NULL);
_8 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = *(&local0);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
*(&local0) = _1;
_14 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_14);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:175
_17 = ((frost$collections$Iterable*) param0);
_18 = _17;
ITable* $tmp103 = _18->$class->itable;
while ($tmp103->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp103 = $tmp103->next;
}
_19 = $tmp103->methods[0];
_20 = _19(_18);
_21 = _20;
goto block1;
block1:;
_23 = _21;
ITable* $tmp104 = _23->$class->itable;
while ($tmp104->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp104 = $tmp104->next;
}
_24 = $tmp104->methods[0];
_25 = _24(_23);
_26 = _25.value;
if (_26) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
_29 = _21;
ITable* $tmp105 = _29->$class->itable;
while ($tmp105->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp105 = $tmp105->next;
}
_30 = $tmp105->methods[1];
_31 = _30(_29);
_32 = _31;
_33 = _32;
frost$core$Frost$ref$frost$core$Object$Q(_33);
_35 = *(&local1);
_36 = _35;
frost$core$Frost$unref$frost$core$Object$Q(_36);
*(&local1) = _32;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:176
_40 = *(&local0);
_41 = _40;
_42 = *(&local1);
_43 = param1;
_44 = &_43->pointer;
_45 = *_44;
_46 = &_43->target;
_47 = *_46;
_48 = _47 != ((frost$core$Object*) NULL);
if (_48) goto block4; else goto block5;
block5:;
_50 = (($fn106) _45);
_51 = _50(_42);
*(&local2) = _51;
goto block6;
block4:;
_54 = (($fn107) _45);
_55 = _54(_47, _42);
*(&local2) = _55;
goto block6;
block6:;
_58 = *(&local2);
_59 = _58;
frost$collections$Array$add$frost$collections$Array$T(_41, _59);
_61 = _58;
frost$core$Frost$unref$frost$core$Object$Q(_61);
_63 = _31;
frost$core$Frost$unref$frost$core$Object$Q(_63);
_65 = *(&local1);
_66 = _65;
frost$core$Frost$unref$frost$core$Object$Q(_66);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_70 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_70);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:178
_73 = *(&local0);
_74 = ((frost$core$Object*) _73);
frost$core$Frost$ref$frost$core$Object$Q(_74);
_76 = *(&local0);
_77 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_77);
*(&local0) = ((frost$collections$Array*) NULL);
return _73;

}






