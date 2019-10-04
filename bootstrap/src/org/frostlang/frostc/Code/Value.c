#include "org/frostlang/frostc/Code/Value.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Code/PrimitiveType.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/Code/Signature.h"
#include "frost/core/Real64.h"
#include "org/frostlang/frostc/Code/Statement/ID.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/Array.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$Code$Value$class_type org$frostlang$frostc$Code$Value$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Code$Value$get_asString$R$frost$core$String, org$frostlang$frostc$Code$Value$cleanup, org$frostlang$frostc$Code$Value$get_type$R$org$frostlang$frostc$Code$PrimitiveType} };

typedef org$frostlang$frostc$Code$PrimitiveType* (*$fn2)(org$frostlang$frostc$Code$Value*);
typedef org$frostlang$frostc$Code$PrimitiveType* (*$fn3)(org$frostlang$frostc$Code$Value*);
typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);
typedef frost$collections$Array* (*$fn5)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn6)(frost$core$Object*);
typedef frost$core$String* (*$fn9)(frost$core$Object*);
typedef frost$core$String* (*$fn11)(frost$core$Object*);
typedef frost$core$String* (*$fn12)(frost$core$Object*);
typedef frost$core$String* (*$fn13)(frost$core$Object*);
typedef frost$core$String* (*$fn14)(frost$core$Object*);
typedef frost$core$String* (*$fn15)(frost$core$Object*);
typedef frost$core$String* (*$fn16)(frost$core$Object*);
typedef frost$core$String* (*$fn17)(frost$core$Object*);
typedef frost$core$String* (*$fn18)(frost$core$Object*);
typedef frost$core$String* (*$fn19)(frost$core$Object*);
typedef frost$core$String* (*$fn20)(frost$core$Object*);
typedef frost$core$String* (*$fn21)(frost$core$Object*);
typedef frost$core$String* (*$fn22)(frost$core$Object*);
typedef frost$core$String* (*$fn23)(frost$core$Object*);
typedef frost$core$String* (*$fn24)(frost$core$Object*);
typedef frost$core$String* (*$fn25)(frost$core$Object*);
typedef frost$core$String* (*$fn27)(frost$core$Object*);
typedef frost$core$String* (*$fn31)(frost$core$Object*);
typedef frost$core$String* (*$fn35)(frost$core$Object*);
typedef frost$core$String* (*$fn38)(frost$core$Object*);
typedef frost$core$String* (*$fn40)(frost$core$Object*);
typedef frost$core$String* (*$fn44)(frost$core$Object*);
typedef frost$core$String* (*$fn47)(frost$core$Object*);
typedef frost$core$String* (*$fn50)(frost$core$Object*);
typedef frost$core$String* (*$fn53)(frost$core$Object*);
typedef frost$core$String* (*$fn56)(frost$core$Object*);
typedef frost$core$String* (*$fn59)(frost$core$Object*);
typedef frost$core$String* (*$fn61)(frost$core$Object*);
typedef frost$core$String* (*$fn64)(frost$core$Object*);
typedef frost$core$String* (*$fn66)(frost$core$Object*);
typedef frost$core$String* (*$fn69)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x2e\x56\x61\x6c\x75\x65", 31, 401410655666036246, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 10, 3952116379015744940, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x49\x54\x28", 4, -880069279446464792, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x47\x4c\x4f\x42\x41\x4c\x5f\x50\x4f\x49\x4e\x54\x45\x52\x28", 15, -5088812196995783584, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e\x54\x28", 4, 763481980206855874, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x45\x54\x48\x4f\x44\x5f\x50\x4f\x49\x4e\x54\x45\x52\x28", 15, 395441415275443262, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x50\x41\x52\x41\x4d\x45\x54\x45\x52\x28", 10, 8631742952335322280, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x45\x41\x4c\x28", 5, -5683309221205980465, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x54\x41\x54\x45\x4d\x45\x4e\x54\x28", 10, 8974997179310465786, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x52\x52\x41\x59\x28", 6, -3549779656121369174, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x54\x52\x55\x43\x54\x28", 7, 98271112238727000, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x55\x4e\x44\x45\x46\x49\x4e\x45\x44\x28", 10, -3748273312849998575, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x6f\x64\x65\x2e\x66\x72\x6f\x73\x74", 10, 3952116379015744940, NULL };

org$frostlang$frostc$Code$PrimitiveType* org$frostlang$frostc$Code$Value$$anonymous6$org$frostlang$frostc$Code$Value$R$org$frostlang$frostc$Code$PrimitiveType(org$frostlang$frostc$Code$Value* param0) {

$fn2 _1;
org$frostlang$frostc$Code$PrimitiveType* _2;
frost$core$Object* _3;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:721
_1 = ($fn3) param0->$class->vtable[2];
_2 = _1(param0);
_3 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return _2;

}
org$frostlang$frostc$Code$PrimitiveType* org$frostlang$frostc$Code$Value$get_type$R$org$frostlang$frostc$Code$PrimitiveType(void* rawSelf) {
org$frostlang$frostc$Code$Value* param0 = (org$frostlang$frostc$Code$Value*) rawSelf;

org$frostlang$frostc$Code$PrimitiveType* local0 = NULL;
org$frostlang$frostc$Code$PrimitiveType* local1 = NULL;
org$frostlang$frostc$Code$PrimitiveType* local2 = NULL;
org$frostlang$frostc$Code$PrimitiveType* local3 = NULL;
org$frostlang$frostc$Code$PrimitiveType* local4 = NULL;
org$frostlang$frostc$FixedArray* local5 = NULL;
org$frostlang$frostc$FixedArray* local6 = NULL;
org$frostlang$frostc$Code$PrimitiveType* local7 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
org$frostlang$frostc$Code$PrimitiveType* _14;
frost$core$Int _15;
frost$core$Object* _17;
frost$core$Object* _19;
frost$core$Int _22;
int64_t _25;
int64_t _26;
bool _27;
frost$core$Bit _28;
bool _30;
frost$core$Int* _32;
frost$core$Int _33;
org$frostlang$frostc$Code$PrimitiveType* _35;
frost$core$Int _36;
frost$core$Object* _38;
frost$core$Object* _40;
frost$core$Int _43;
int64_t _46;
int64_t _47;
bool _48;
frost$core$Bit _49;
bool _51;
frost$core$UInt64* _53;
frost$core$UInt64 _54;
org$frostlang$frostc$Code$PrimitiveType** _55;
org$frostlang$frostc$Code$PrimitiveType* _56;
frost$core$Object* _58;
org$frostlang$frostc$Code$PrimitiveType* _60;
frost$core$Object* _61;
org$frostlang$frostc$Code$PrimitiveType* _65;
frost$core$Object* _66;
org$frostlang$frostc$Code$PrimitiveType* _68;
frost$core$Object* _69;
frost$core$Int _73;
int64_t _76;
int64_t _77;
bool _78;
frost$core$Bit _79;
bool _81;
org$frostlang$frostc$Code$Signature** _83;
org$frostlang$frostc$Code$Signature* _84;
org$frostlang$frostc$Code$PrimitiveType* _86;
frost$core$Int _87;
frost$core$Object* _89;
frost$core$Object* _91;
frost$core$Int _94;
int64_t _97;
int64_t _98;
bool _99;
frost$core$Bit _100;
bool _102;
frost$core$Int* _104;
frost$core$Int _105;
org$frostlang$frostc$Code$PrimitiveType** _106;
org$frostlang$frostc$Code$PrimitiveType* _107;
frost$core$Object* _109;
org$frostlang$frostc$Code$PrimitiveType* _111;
frost$core$Object* _112;
org$frostlang$frostc$Code$PrimitiveType* _116;
frost$core$Object* _117;
org$frostlang$frostc$Code$PrimitiveType* _119;
frost$core$Object* _120;
frost$core$Int _124;
int64_t _127;
int64_t _128;
bool _129;
frost$core$Bit _130;
bool _132;
frost$core$Real64* _134;
frost$core$Real64 _135;
org$frostlang$frostc$Code$PrimitiveType** _136;
org$frostlang$frostc$Code$PrimitiveType* _137;
frost$core$Object* _139;
org$frostlang$frostc$Code$PrimitiveType* _141;
frost$core$Object* _142;
org$frostlang$frostc$Code$PrimitiveType* _146;
frost$core$Object* _147;
org$frostlang$frostc$Code$PrimitiveType* _149;
frost$core$Object* _150;
frost$core$Int _154;
int64_t _157;
int64_t _158;
bool _159;
frost$core$Bit _160;
bool _162;
org$frostlang$frostc$Code$Statement$ID* _164;
org$frostlang$frostc$Code$Statement$ID _165;
org$frostlang$frostc$Code$PrimitiveType** _166;
org$frostlang$frostc$Code$PrimitiveType* _167;
frost$core$Object* _169;
org$frostlang$frostc$Code$PrimitiveType* _171;
frost$core$Object* _172;
org$frostlang$frostc$Code$PrimitiveType* _176;
frost$core$Object* _177;
org$frostlang$frostc$Code$PrimitiveType* _179;
frost$core$Object* _180;
frost$core$Int _184;
int64_t _187;
int64_t _188;
bool _189;
frost$core$Bit _190;
bool _192;
org$frostlang$frostc$Code$PrimitiveType** _194;
org$frostlang$frostc$Code$PrimitiveType* _195;
frost$core$Object* _197;
org$frostlang$frostc$Code$PrimitiveType* _199;
frost$core$Object* _200;
org$frostlang$frostc$FixedArray** _203;
org$frostlang$frostc$FixedArray* _204;
frost$core$Object* _206;
org$frostlang$frostc$FixedArray* _208;
frost$core$Object* _209;
org$frostlang$frostc$Code$PrimitiveType* _213;
frost$core$Int _214;
org$frostlang$frostc$FixedArray* _215;
frost$collections$CollectionView* _216;
$fn4 _217;
frost$core$Int _218;
org$frostlang$frostc$Code$PrimitiveType* _219;
frost$core$Object* _221;
frost$core$Object* _223;
org$frostlang$frostc$FixedArray* _225;
frost$core$Object* _226;
org$frostlang$frostc$Code$PrimitiveType* _229;
frost$core$Object* _230;
frost$core$Int _234;
int64_t _237;
int64_t _238;
bool _239;
frost$core$Bit _240;
bool _242;
org$frostlang$frostc$FixedArray** _244;
org$frostlang$frostc$FixedArray* _245;
frost$core$Object* _247;
org$frostlang$frostc$FixedArray* _249;
frost$core$Object* _250;
org$frostlang$frostc$Code$PrimitiveType* _254;
frost$core$Int _255;
org$frostlang$frostc$FixedArray* _256;
frost$collections$CollectionView* _257;
int64_t _258;
frost$core$Method* _259;
int64_t* _262;
frost$core$Object* _265;
frost$core$Immutable** _267;
frost$core$Immutable* _268;
frost$core$Object* _269;
frost$core$Immutable** _271;
frost$core$Method* _274;
frost$core$MutableMethod* _275;
frost$core$MutableMethod* _276;
$fn5 _277;
frost$collections$Array* _278;
org$frostlang$frostc$FixedArray* _279;
frost$core$Object* _281;
frost$core$Object* _283;
frost$core$Object* _285;
frost$core$Object* _287;
frost$core$Object* _289;
org$frostlang$frostc$FixedArray* _291;
frost$core$Object* _292;
frost$core$Int _296;
int64_t _299;
int64_t _300;
bool _301;
frost$core$Bit _302;
bool _304;
org$frostlang$frostc$Code$PrimitiveType** _306;
org$frostlang$frostc$Code$PrimitiveType* _307;
frost$core$Object* _309;
org$frostlang$frostc$Code$PrimitiveType* _311;
frost$core$Object* _312;
org$frostlang$frostc$Code$PrimitiveType* _316;
frost$core$Object* _317;
org$frostlang$frostc$Code$PrimitiveType* _319;
frost$core$Object* _320;
frost$core$Int _325;
frost$core$Object* _326;
$fn6 _327;
frost$core$String* _328;
frost$core$Object* _330;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:694
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:695:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:696
_14 = (org$frostlang$frostc$Code$PrimitiveType*) frostObjectAlloc(sizeof(org$frostlang$frostc$Code$PrimitiveType), (frost$core$Class*) &org$frostlang$frostc$Code$PrimitiveType$class);
_15 = (frost$core$Int) {7u};
org$frostlang$frostc$Code$PrimitiveType$init$frost$core$Int(_14, _15);
_17 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_19);
return _14;
block3:;
_22 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:698:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_25 = _2.value;
_26 = _22.value;
_27 = _25 == _26;
_28 = (frost$core$Bit) {_27};
_30 = _28.value;
if (_30) goto block5; else goto block6;
block5:;
_32 = &param0->$data.$GLOBAL_POINTER.field0;
_33 = *_32;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:699
_35 = (org$frostlang$frostc$Code$PrimitiveType*) frostObjectAlloc(sizeof(org$frostlang$frostc$Code$PrimitiveType), (frost$core$Class*) &org$frostlang$frostc$Code$PrimitiveType$class);
_36 = (frost$core$Int) {0u};
org$frostlang$frostc$Code$PrimitiveType$init$frost$core$Int(_35, _36);
_38 = ((frost$core$Object*) _35);
frost$core$Frost$ref$frost$core$Object$Q(_38);
_40 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_40);
return _35;
block6:;
_43 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:701:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_46 = _2.value;
_47 = _43.value;
_48 = _46 == _47;
_49 = (frost$core$Bit) {_48};
_51 = _49.value;
if (_51) goto block8; else goto block9;
block8:;
_53 = &param0->$data.$INT.field0;
_54 = *_53;
_55 = &param0->$data.$INT.field1;
_56 = *_55;
*(&local0) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_58 = ((frost$core$Object*) _56);
frost$core$Frost$ref$frost$core$Object$Q(_58);
_60 = *(&local0);
_61 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_61);
*(&local0) = _56;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:702
_65 = *(&local0);
_66 = ((frost$core$Object*) _65);
frost$core$Frost$ref$frost$core$Object$Q(_66);
_68 = *(&local0);
_69 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_69);
*(&local0) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
return _65;
block9:;
_73 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:704:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_76 = _2.value;
_77 = _73.value;
_78 = _76 == _77;
_79 = (frost$core$Bit) {_78};
_81 = _79.value;
if (_81) goto block11; else goto block12;
block11:;
_83 = &param0->$data.$METHOD_POINTER.field0;
_84 = *_83;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:705
_86 = (org$frostlang$frostc$Code$PrimitiveType*) frostObjectAlloc(sizeof(org$frostlang$frostc$Code$PrimitiveType), (frost$core$Class*) &org$frostlang$frostc$Code$PrimitiveType$class);
_87 = (frost$core$Int) {0u};
org$frostlang$frostc$Code$PrimitiveType$init$frost$core$Int(_86, _87);
_89 = ((frost$core$Object*) _86);
frost$core$Frost$ref$frost$core$Object$Q(_89);
_91 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_91);
return _86;
block12:;
_94 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:707:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_97 = _2.value;
_98 = _94.value;
_99 = _97 == _98;
_100 = (frost$core$Bit) {_99};
_102 = _100.value;
if (_102) goto block14; else goto block15;
block14:;
_104 = &param0->$data.$PARAMETER.field0;
_105 = *_104;
_106 = &param0->$data.$PARAMETER.field1;
_107 = *_106;
*(&local1) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_109 = ((frost$core$Object*) _107);
frost$core$Frost$ref$frost$core$Object$Q(_109);
_111 = *(&local1);
_112 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_112);
*(&local1) = _107;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:708
_116 = *(&local1);
_117 = ((frost$core$Object*) _116);
frost$core$Frost$ref$frost$core$Object$Q(_117);
_119 = *(&local1);
_120 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_120);
*(&local1) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
return _116;
block15:;
_124 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:710:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_127 = _2.value;
_128 = _124.value;
_129 = _127 == _128;
_130 = (frost$core$Bit) {_129};
_132 = _130.value;
if (_132) goto block17; else goto block18;
block17:;
_134 = &param0->$data.$REAL.field0;
_135 = *_134;
_136 = &param0->$data.$REAL.field1;
_137 = *_136;
*(&local2) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_139 = ((frost$core$Object*) _137);
frost$core$Frost$ref$frost$core$Object$Q(_139);
_141 = *(&local2);
_142 = ((frost$core$Object*) _141);
frost$core$Frost$unref$frost$core$Object$Q(_142);
*(&local2) = _137;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:711
_146 = *(&local2);
_147 = ((frost$core$Object*) _146);
frost$core$Frost$ref$frost$core$Object$Q(_147);
_149 = *(&local2);
_150 = ((frost$core$Object*) _149);
frost$core$Frost$unref$frost$core$Object$Q(_150);
*(&local2) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
return _146;
block18:;
_154 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:713:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_157 = _2.value;
_158 = _154.value;
_159 = _157 == _158;
_160 = (frost$core$Bit) {_159};
_162 = _160.value;
if (_162) goto block20; else goto block21;
block20:;
_164 = &param0->$data.$STATEMENT.field0;
_165 = *_164;
_166 = &param0->$data.$STATEMENT.field1;
_167 = *_166;
*(&local3) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_169 = ((frost$core$Object*) _167);
frost$core$Frost$ref$frost$core$Object$Q(_169);
_171 = *(&local3);
_172 = ((frost$core$Object*) _171);
frost$core$Frost$unref$frost$core$Object$Q(_172);
*(&local3) = _167;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:714
_176 = *(&local3);
_177 = ((frost$core$Object*) _176);
frost$core$Frost$ref$frost$core$Object$Q(_177);
_179 = *(&local3);
_180 = ((frost$core$Object*) _179);
frost$core$Frost$unref$frost$core$Object$Q(_180);
*(&local3) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
return _176;
block21:;
_184 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:716:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_187 = _2.value;
_188 = _184.value;
_189 = _187 == _188;
_190 = (frost$core$Bit) {_189};
_192 = _190.value;
if (_192) goto block23; else goto block24;
block23:;
_194 = &param0->$data.$ARRAY.field0;
_195 = *_194;
*(&local4) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_197 = ((frost$core$Object*) _195);
frost$core$Frost$ref$frost$core$Object$Q(_197);
_199 = *(&local4);
_200 = ((frost$core$Object*) _199);
frost$core$Frost$unref$frost$core$Object$Q(_200);
*(&local4) = _195;
_203 = &param0->$data.$ARRAY.field1;
_204 = *_203;
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
_206 = ((frost$core$Object*) _204);
frost$core$Frost$ref$frost$core$Object$Q(_206);
_208 = *(&local5);
_209 = ((frost$core$Object*) _208);
frost$core$Frost$unref$frost$core$Object$Q(_209);
*(&local5) = _204;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:717
_213 = (org$frostlang$frostc$Code$PrimitiveType*) frostObjectAlloc(sizeof(org$frostlang$frostc$Code$PrimitiveType), (frost$core$Class*) &org$frostlang$frostc$Code$PrimitiveType$class);
_214 = (frost$core$Int) {8u};
_215 = *(&local5);
_216 = ((frost$collections$CollectionView*) _215);
ITable* $tmp7 = _216->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp7 = $tmp7->next;
}
_217 = $tmp7->methods[0];
_218 = _217(_216);
_219 = *(&local4);
org$frostlang$frostc$Code$PrimitiveType$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Code$PrimitiveType(_213, _214, _218, _219);
_221 = ((frost$core$Object*) _213);
frost$core$Frost$ref$frost$core$Object$Q(_221);
_223 = ((frost$core$Object*) _213);
frost$core$Frost$unref$frost$core$Object$Q(_223);
_225 = *(&local5);
_226 = ((frost$core$Object*) _225);
frost$core$Frost$unref$frost$core$Object$Q(_226);
*(&local5) = ((org$frostlang$frostc$FixedArray*) NULL);
_229 = *(&local4);
_230 = ((frost$core$Object*) _229);
frost$core$Frost$unref$frost$core$Object$Q(_230);
*(&local4) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
return _213;
block24:;
_234 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:719:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_237 = _2.value;
_238 = _234.value;
_239 = _237 == _238;
_240 = (frost$core$Bit) {_239};
_242 = _240.value;
if (_242) goto block26; else goto block27;
block26:;
_244 = &param0->$data.$STRUCT.field0;
_245 = *_244;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
_247 = ((frost$core$Object*) _245);
frost$core$Frost$ref$frost$core$Object$Q(_247);
_249 = *(&local6);
_250 = ((frost$core$Object*) _249);
frost$core$Frost$unref$frost$core$Object$Q(_250);
*(&local6) = _245;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:720
_254 = (org$frostlang$frostc$Code$PrimitiveType*) frostObjectAlloc(sizeof(org$frostlang$frostc$Code$PrimitiveType), (frost$core$Class*) &org$frostlang$frostc$Code$PrimitiveType$class);
_255 = (frost$core$Int) {9u};
_256 = *(&local6);
_257 = ((frost$collections$CollectionView*) _256);
_258 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Code$Value$$anonymous6$org$frostlang$frostc$Code$Value$R$org$frostlang$frostc$Code$PrimitiveType).value;
_259 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:builtin_int, target:frost.core.Immutable?) from Code.frost:721:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:35
_262 = &_259->pointer;
*_262 = _258;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:36
_265 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_265);
_267 = &_259->target;
_268 = *_267;
_269 = ((frost$core$Object*) _268);
frost$core$Frost$unref$frost$core$Object$Q(_269);
_271 = &_259->target;
*_271 = ((frost$core$Immutable*) NULL);
_274 = _259;
_275 = ((frost$core$MutableMethod*) _274);
_276 = _275;
ITable* $tmp8 = _257->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp8 = $tmp8->next;
}
_277 = $tmp8->methods[9];
_278 = _277(_257, _276);
_279 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT(_278);
org$frostlang$frostc$Code$PrimitiveType$init$frost$core$Int$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Code$PrimitiveType$GT(_254, _255, _279);
_281 = ((frost$core$Object*) _254);
frost$core$Frost$ref$frost$core$Object$Q(_281);
_283 = ((frost$core$Object*) _279);
frost$core$Frost$unref$frost$core$Object$Q(_283);
_285 = ((frost$core$Object*) _278);
frost$core$Frost$unref$frost$core$Object$Q(_285);
_287 = ((frost$core$Object*) _259);
frost$core$Frost$unref$frost$core$Object$Q(_287);
_289 = ((frost$core$Object*) _254);
frost$core$Frost$unref$frost$core$Object$Q(_289);
_291 = *(&local6);
_292 = ((frost$core$Object*) _291);
frost$core$Frost$unref$frost$core$Object$Q(_292);
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
return _254;
block27:;
_296 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:723:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_299 = _2.value;
_300 = _296.value;
_301 = _299 == _300;
_302 = (frost$core$Bit) {_301};
_304 = _302.value;
if (_304) goto block30; else goto block1;
block30:;
_306 = &param0->$data.$UNDEFINED.field0;
_307 = *_306;
*(&local7) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_309 = ((frost$core$Object*) _307);
frost$core$Frost$ref$frost$core$Object$Q(_309);
_311 = *(&local7);
_312 = ((frost$core$Object*) _311);
frost$core$Frost$unref$frost$core$Object$Q(_312);
*(&local7) = _307;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:724
_316 = *(&local7);
_317 = ((frost$core$Object*) _316);
frost$core$Frost$ref$frost$core$Object$Q(_317);
_319 = *(&local7);
_320 = ((frost$core$Object*) _319);
frost$core$Frost$unref$frost$core$Object$Q(_320);
*(&local7) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
return _316;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:727
_325 = (frost$core$Int) {727u};
_326 = ((frost$core$Object*) param0);
_327 = ($fn9) _326->$class->vtable[0];
_328 = _327(_326);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _325, _328);
_330 = ((frost$core$Object*) _328);
frost$core$Frost$unref$frost$core$Object$Q(_330);
abort(); // unreachable

}
void org$frostlang$frostc$Code$Value$cleanup(void* rawSelf) {
org$frostlang$frostc$Code$Value* param0 = (org$frostlang$frostc$Code$Value*) rawSelf;

frost$core$Bit local0;
frost$core$Int local1;
frost$core$UInt64 local2;
org$frostlang$frostc$Code$PrimitiveType* local3 = NULL;
org$frostlang$frostc$Code$Signature* local4 = NULL;
frost$core$Int local5;
org$frostlang$frostc$Code$PrimitiveType* local6 = NULL;
frost$core$Real64 local7;
org$frostlang$frostc$Code$PrimitiveType* local8 = NULL;
org$frostlang$frostc$Code$Statement$ID local9;
org$frostlang$frostc$Code$PrimitiveType* local10 = NULL;
org$frostlang$frostc$Code$PrimitiveType* local11 = NULL;
org$frostlang$frostc$FixedArray* local12 = NULL;
org$frostlang$frostc$FixedArray* local13 = NULL;
org$frostlang$frostc$Code$PrimitiveType* local14 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Bit* _13;
frost$core$Bit _14;
frost$core$Int _17;
int64_t _20;
int64_t _21;
bool _22;
frost$core$Bit _23;
bool _25;
frost$core$Int* _27;
frost$core$Int _28;
frost$core$Int _31;
int64_t _34;
int64_t _35;
bool _36;
frost$core$Bit _37;
bool _39;
frost$core$UInt64* _41;
frost$core$UInt64 _42;
org$frostlang$frostc$Code$PrimitiveType** _44;
org$frostlang$frostc$Code$PrimitiveType* _45;
frost$core$Object* _47;
org$frostlang$frostc$Code$PrimitiveType* _49;
frost$core$Object* _50;
org$frostlang$frostc$Code$PrimitiveType* _54;
frost$core$Object* _55;
org$frostlang$frostc$Code$PrimitiveType* _57;
frost$core$Object* _58;
frost$core$Int _62;
int64_t _65;
int64_t _66;
bool _67;
frost$core$Bit _68;
bool _70;
org$frostlang$frostc$Code$Signature** _72;
org$frostlang$frostc$Code$Signature* _73;
frost$core$Object* _75;
org$frostlang$frostc$Code$Signature* _77;
frost$core$Object* _78;
org$frostlang$frostc$Code$Signature* _82;
frost$core$Object* _83;
org$frostlang$frostc$Code$Signature* _85;
frost$core$Object* _86;
frost$core$Int _90;
int64_t _93;
int64_t _94;
bool _95;
frost$core$Bit _96;
bool _98;
frost$core$Int* _100;
frost$core$Int _101;
org$frostlang$frostc$Code$PrimitiveType** _103;
org$frostlang$frostc$Code$PrimitiveType* _104;
frost$core$Object* _106;
org$frostlang$frostc$Code$PrimitiveType* _108;
frost$core$Object* _109;
org$frostlang$frostc$Code$PrimitiveType* _113;
frost$core$Object* _114;
org$frostlang$frostc$Code$PrimitiveType* _116;
frost$core$Object* _117;
frost$core$Int _121;
int64_t _124;
int64_t _125;
bool _126;
frost$core$Bit _127;
bool _129;
frost$core$Real64* _131;
frost$core$Real64 _132;
org$frostlang$frostc$Code$PrimitiveType** _134;
org$frostlang$frostc$Code$PrimitiveType* _135;
frost$core$Object* _137;
org$frostlang$frostc$Code$PrimitiveType* _139;
frost$core$Object* _140;
org$frostlang$frostc$Code$PrimitiveType* _144;
frost$core$Object* _145;
org$frostlang$frostc$Code$PrimitiveType* _147;
frost$core$Object* _148;
frost$core$Int _152;
int64_t _155;
int64_t _156;
bool _157;
frost$core$Bit _158;
bool _160;
org$frostlang$frostc$Code$Statement$ID* _162;
org$frostlang$frostc$Code$Statement$ID _163;
org$frostlang$frostc$Code$PrimitiveType** _165;
org$frostlang$frostc$Code$PrimitiveType* _166;
frost$core$Object* _168;
org$frostlang$frostc$Code$PrimitiveType* _170;
frost$core$Object* _171;
org$frostlang$frostc$Code$PrimitiveType* _175;
frost$core$Object* _176;
org$frostlang$frostc$Code$PrimitiveType* _178;
frost$core$Object* _179;
frost$core$Int _183;
int64_t _186;
int64_t _187;
bool _188;
frost$core$Bit _189;
bool _191;
org$frostlang$frostc$Code$PrimitiveType** _193;
org$frostlang$frostc$Code$PrimitiveType* _194;
frost$core$Object* _196;
org$frostlang$frostc$Code$PrimitiveType* _198;
frost$core$Object* _199;
org$frostlang$frostc$FixedArray** _202;
org$frostlang$frostc$FixedArray* _203;
frost$core$Object* _205;
org$frostlang$frostc$FixedArray* _207;
frost$core$Object* _208;
org$frostlang$frostc$Code$PrimitiveType* _212;
frost$core$Object* _213;
org$frostlang$frostc$FixedArray* _216;
frost$core$Object* _217;
org$frostlang$frostc$FixedArray* _219;
frost$core$Object* _220;
org$frostlang$frostc$Code$PrimitiveType* _223;
frost$core$Object* _224;
frost$core$Int _228;
int64_t _231;
int64_t _232;
bool _233;
frost$core$Bit _234;
bool _236;
org$frostlang$frostc$FixedArray** _238;
org$frostlang$frostc$FixedArray* _239;
frost$core$Object* _241;
org$frostlang$frostc$FixedArray* _243;
frost$core$Object* _244;
org$frostlang$frostc$FixedArray* _248;
frost$core$Object* _249;
org$frostlang$frostc$FixedArray* _251;
frost$core$Object* _252;
frost$core$Int _256;
int64_t _259;
int64_t _260;
bool _261;
frost$core$Bit _262;
bool _264;
org$frostlang$frostc$Code$PrimitiveType** _266;
org$frostlang$frostc$Code$PrimitiveType* _267;
frost$core$Object* _269;
org$frostlang$frostc$Code$PrimitiveType* _271;
frost$core$Object* _272;
org$frostlang$frostc$Code$PrimitiveType* _276;
frost$core$Object* _277;
org$frostlang$frostc$Code$PrimitiveType* _279;
frost$core$Object* _280;
frost$core$Object* _285;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$BIT.field0;
_14 = *_13;
*(&local0) = _14;
goto block1;
block3:;
_17 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_20 = _2.value;
_21 = _17.value;
_22 = _20 == _21;
_23 = (frost$core$Bit) {_22};
_25 = _23.value;
if (_25) goto block5; else goto block6;
block5:;
_27 = &param0->$data.$GLOBAL_POINTER.field0;
_28 = *_27;
*(&local1) = _28;
goto block1;
block6:;
_31 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_34 = _2.value;
_35 = _31.value;
_36 = _34 == _35;
_37 = (frost$core$Bit) {_36};
_39 = _37.value;
if (_39) goto block8; else goto block9;
block8:;
_41 = &param0->$data.$INT.field0;
_42 = *_41;
*(&local2) = _42;
_44 = &param0->$data.$INT.field1;
_45 = *_44;
*(&local3) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_47 = ((frost$core$Object*) _45);
frost$core$Frost$ref$frost$core$Object$Q(_47);
_49 = *(&local3);
_50 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_50);
*(&local3) = _45;
// <no location>
_54 = *(&local3);
_55 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_55);
_57 = *(&local3);
_58 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_58);
*(&local3) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
goto block1;
block9:;
_62 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_65 = _2.value;
_66 = _62.value;
_67 = _65 == _66;
_68 = (frost$core$Bit) {_67};
_70 = _68.value;
if (_70) goto block11; else goto block12;
block11:;
_72 = &param0->$data.$METHOD_POINTER.field0;
_73 = *_72;
*(&local4) = ((org$frostlang$frostc$Code$Signature*) NULL);
_75 = ((frost$core$Object*) _73);
frost$core$Frost$ref$frost$core$Object$Q(_75);
_77 = *(&local4);
_78 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_78);
*(&local4) = _73;
// <no location>
_82 = *(&local4);
_83 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_83);
_85 = *(&local4);
_86 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_86);
*(&local4) = ((org$frostlang$frostc$Code$Signature*) NULL);
goto block1;
block12:;
_90 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_93 = _2.value;
_94 = _90.value;
_95 = _93 == _94;
_96 = (frost$core$Bit) {_95};
_98 = _96.value;
if (_98) goto block14; else goto block15;
block14:;
_100 = &param0->$data.$PARAMETER.field0;
_101 = *_100;
*(&local5) = _101;
_103 = &param0->$data.$PARAMETER.field1;
_104 = *_103;
*(&local6) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_106 = ((frost$core$Object*) _104);
frost$core$Frost$ref$frost$core$Object$Q(_106);
_108 = *(&local6);
_109 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_109);
*(&local6) = _104;
// <no location>
_113 = *(&local6);
_114 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_114);
_116 = *(&local6);
_117 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_117);
*(&local6) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
goto block1;
block15:;
_121 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_124 = _2.value;
_125 = _121.value;
_126 = _124 == _125;
_127 = (frost$core$Bit) {_126};
_129 = _127.value;
if (_129) goto block17; else goto block18;
block17:;
_131 = &param0->$data.$REAL.field0;
_132 = *_131;
*(&local7) = _132;
_134 = &param0->$data.$REAL.field1;
_135 = *_134;
*(&local8) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_137 = ((frost$core$Object*) _135);
frost$core$Frost$ref$frost$core$Object$Q(_137);
_139 = *(&local8);
_140 = ((frost$core$Object*) _139);
frost$core$Frost$unref$frost$core$Object$Q(_140);
*(&local8) = _135;
// <no location>
_144 = *(&local8);
_145 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_145);
_147 = *(&local8);
_148 = ((frost$core$Object*) _147);
frost$core$Frost$unref$frost$core$Object$Q(_148);
*(&local8) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
goto block1;
block18:;
_152 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_155 = _2.value;
_156 = _152.value;
_157 = _155 == _156;
_158 = (frost$core$Bit) {_157};
_160 = _158.value;
if (_160) goto block20; else goto block21;
block20:;
_162 = &param0->$data.$STATEMENT.field0;
_163 = *_162;
*(&local9) = _163;
_165 = &param0->$data.$STATEMENT.field1;
_166 = *_165;
*(&local10) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_168 = ((frost$core$Object*) _166);
frost$core$Frost$ref$frost$core$Object$Q(_168);
_170 = *(&local10);
_171 = ((frost$core$Object*) _170);
frost$core$Frost$unref$frost$core$Object$Q(_171);
*(&local10) = _166;
// <no location>
_175 = *(&local10);
_176 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_176);
_178 = *(&local10);
_179 = ((frost$core$Object*) _178);
frost$core$Frost$unref$frost$core$Object$Q(_179);
*(&local10) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
goto block1;
block21:;
_183 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_186 = _2.value;
_187 = _183.value;
_188 = _186 == _187;
_189 = (frost$core$Bit) {_188};
_191 = _189.value;
if (_191) goto block23; else goto block24;
block23:;
_193 = &param0->$data.$ARRAY.field0;
_194 = *_193;
*(&local11) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_196 = ((frost$core$Object*) _194);
frost$core$Frost$ref$frost$core$Object$Q(_196);
_198 = *(&local11);
_199 = ((frost$core$Object*) _198);
frost$core$Frost$unref$frost$core$Object$Q(_199);
*(&local11) = _194;
_202 = &param0->$data.$ARRAY.field1;
_203 = *_202;
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
_205 = ((frost$core$Object*) _203);
frost$core$Frost$ref$frost$core$Object$Q(_205);
_207 = *(&local12);
_208 = ((frost$core$Object*) _207);
frost$core$Frost$unref$frost$core$Object$Q(_208);
*(&local12) = _203;
// <no location>
_212 = *(&local11);
_213 = ((frost$core$Object*) _212);
frost$core$Frost$unref$frost$core$Object$Q(_213);
// <no location>
_216 = *(&local12);
_217 = ((frost$core$Object*) _216);
frost$core$Frost$unref$frost$core$Object$Q(_217);
_219 = *(&local12);
_220 = ((frost$core$Object*) _219);
frost$core$Frost$unref$frost$core$Object$Q(_220);
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
_223 = *(&local11);
_224 = ((frost$core$Object*) _223);
frost$core$Frost$unref$frost$core$Object$Q(_224);
*(&local11) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
goto block1;
block24:;
_228 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_231 = _2.value;
_232 = _228.value;
_233 = _231 == _232;
_234 = (frost$core$Bit) {_233};
_236 = _234.value;
if (_236) goto block26; else goto block27;
block26:;
_238 = &param0->$data.$STRUCT.field0;
_239 = *_238;
*(&local13) = ((org$frostlang$frostc$FixedArray*) NULL);
_241 = ((frost$core$Object*) _239);
frost$core$Frost$ref$frost$core$Object$Q(_241);
_243 = *(&local13);
_244 = ((frost$core$Object*) _243);
frost$core$Frost$unref$frost$core$Object$Q(_244);
*(&local13) = _239;
// <no location>
_248 = *(&local13);
_249 = ((frost$core$Object*) _248);
frost$core$Frost$unref$frost$core$Object$Q(_249);
_251 = *(&local13);
_252 = ((frost$core$Object*) _251);
frost$core$Frost$unref$frost$core$Object$Q(_252);
*(&local13) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block1;
block27:;
_256 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_259 = _2.value;
_260 = _256.value;
_261 = _259 == _260;
_262 = (frost$core$Bit) {_261};
_264 = _262.value;
if (_264) goto block29; else goto block1;
block29:;
_266 = &param0->$data.$UNDEFINED.field0;
_267 = *_266;
*(&local14) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_269 = ((frost$core$Object*) _267);
frost$core$Frost$ref$frost$core$Object$Q(_269);
_271 = *(&local14);
_272 = ((frost$core$Object*) _271);
frost$core$Frost$unref$frost$core$Object$Q(_272);
*(&local14) = _267;
// <no location>
_276 = *(&local14);
_277 = ((frost$core$Object*) _276);
frost$core$Frost$unref$frost$core$Object$Q(_277);
_279 = *(&local14);
_280 = ((frost$core$Object*) _279);
frost$core$Frost$unref$frost$core$Object$Q(_280);
*(&local14) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_285 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_285);
return;

}
void org$frostlang$frostc$Code$Value$init$frost$core$Int$frost$core$Bit(void* rawSelf, frost$core$Int param1, frost$core$Bit param2) {
org$frostlang$frostc$Code$Value* param0 = (org$frostlang$frostc$Code$Value*) rawSelf;

frost$core$Int* _1;
frost$core$Bit* _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_4 = &param0->$data.$BIT.field0;
*_4 = param2;
return;

}
void org$frostlang$frostc$Code$Value$init$frost$core$Int$frost$core$Int(void* rawSelf, frost$core$Int param1, frost$core$Int param2) {
org$frostlang$frostc$Code$Value* param0 = (org$frostlang$frostc$Code$Value*) rawSelf;

frost$core$Int* _1;
frost$core$Int* _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_4 = &param0->$data.$GLOBAL_POINTER.field0;
*_4 = param2;
return;

}
void org$frostlang$frostc$Code$Value$init$frost$core$Int$frost$core$UInt64$org$frostlang$frostc$Code$PrimitiveType(void* rawSelf, frost$core$Int param1, frost$core$UInt64 param2, org$frostlang$frostc$Code$PrimitiveType* param3) {
org$frostlang$frostc$Code$Value* param0 = (org$frostlang$frostc$Code$Value*) rawSelf;

frost$core$Int* _1;
frost$core$UInt64* _4;
frost$core$Object* _7;
org$frostlang$frostc$Code$PrimitiveType** _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_4 = &param0->$data.$INT.field0;
*_4 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_7 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = &param0->$data.$INT.field1;
*_9 = param3;
return;

}
void org$frostlang$frostc$Code$Value$init$frost$core$Int$org$frostlang$frostc$Code$Signature(void* rawSelf, frost$core$Int param1, org$frostlang$frostc$Code$Signature* param2) {
org$frostlang$frostc$Code$Value* param0 = (org$frostlang$frostc$Code$Value*) rawSelf;

frost$core$Int* _1;
frost$core$Object* _4;
org$frostlang$frostc$Code$Signature** _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->$data.$METHOD_POINTER.field0;
*_6 = param2;
return;

}
void org$frostlang$frostc$Code$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Code$PrimitiveType(void* rawSelf, frost$core$Int param1, frost$core$Int param2, org$frostlang$frostc$Code$PrimitiveType* param3) {
org$frostlang$frostc$Code$Value* param0 = (org$frostlang$frostc$Code$Value*) rawSelf;

frost$core$Int* _1;
frost$core$Int* _4;
frost$core$Object* _7;
org$frostlang$frostc$Code$PrimitiveType** _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_4 = &param0->$data.$PARAMETER.field0;
*_4 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_7 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = &param0->$data.$PARAMETER.field1;
*_9 = param3;
return;

}
void org$frostlang$frostc$Code$Value$init$frost$core$Int$frost$core$Real64$org$frostlang$frostc$Code$PrimitiveType(void* rawSelf, frost$core$Int param1, frost$core$Real64 param2, org$frostlang$frostc$Code$PrimitiveType* param3) {
org$frostlang$frostc$Code$Value* param0 = (org$frostlang$frostc$Code$Value*) rawSelf;

frost$core$Int* _1;
frost$core$Real64* _4;
frost$core$Object* _7;
org$frostlang$frostc$Code$PrimitiveType** _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_4 = &param0->$data.$REAL.field0;
*_4 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_7 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = &param0->$data.$REAL.field1;
*_9 = param3;
return;

}
void org$frostlang$frostc$Code$Value$init$frost$core$Int$org$frostlang$frostc$Code$Statement$ID$org$frostlang$frostc$Code$PrimitiveType(void* rawSelf, frost$core$Int param1, org$frostlang$frostc$Code$Statement$ID param2, org$frostlang$frostc$Code$PrimitiveType* param3) {
org$frostlang$frostc$Code$Value* param0 = (org$frostlang$frostc$Code$Value*) rawSelf;

frost$core$Int* _1;
org$frostlang$frostc$Code$Statement$ID* _4;
frost$core$Object* _7;
org$frostlang$frostc$Code$PrimitiveType** _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_4 = &param0->$data.$STATEMENT.field0;
*_4 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_7 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = &param0->$data.$STATEMENT.field1;
*_9 = param3;
return;

}
void org$frostlang$frostc$Code$Value$init$frost$core$Int$org$frostlang$frostc$Code$PrimitiveType$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Code$Value$GT(void* rawSelf, frost$core$Int param1, org$frostlang$frostc$Code$PrimitiveType* param2, org$frostlang$frostc$FixedArray* param3) {
org$frostlang$frostc$Code$Value* param0 = (org$frostlang$frostc$Code$Value*) rawSelf;

frost$core$Int* _1;
frost$core$Object* _4;
org$frostlang$frostc$Code$PrimitiveType** _6;
frost$core$Object* _9;
org$frostlang$frostc$FixedArray** _11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->$data.$ARRAY.field0;
*_6 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_9 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = &param0->$data.$ARRAY.field1;
*_11 = param3;
return;

}
void org$frostlang$frostc$Code$Value$init$frost$core$Int$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Code$Value$GT(void* rawSelf, frost$core$Int param1, org$frostlang$frostc$FixedArray* param2) {
org$frostlang$frostc$Code$Value* param0 = (org$frostlang$frostc$Code$Value*) rawSelf;

frost$core$Int* _1;
frost$core$Object* _4;
org$frostlang$frostc$FixedArray** _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->$data.$STRUCT.field0;
*_6 = param2;
return;

}
void org$frostlang$frostc$Code$Value$init$frost$core$Int$org$frostlang$frostc$Code$PrimitiveType(void* rawSelf, frost$core$Int param1, org$frostlang$frostc$Code$PrimitiveType* param2) {
org$frostlang$frostc$Code$Value* param0 = (org$frostlang$frostc$Code$Value*) rawSelf;

frost$core$Int* _1;
frost$core$Object* _4;
org$frostlang$frostc$Code$PrimitiveType** _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_1 = &param0->$rawValue;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->$data.$UNDEFINED.field0;
*_6 = param2;
return;

}
frost$core$String* org$frostlang$frostc$Code$Value$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$Code$Value* param0 = (org$frostlang$frostc$Code$Value*) rawSelf;

frost$core$Bit local0;
frost$core$Int local1;
frost$core$UInt64 local2;
org$frostlang$frostc$Code$PrimitiveType* local3 = NULL;
org$frostlang$frostc$Code$Signature* local4 = NULL;
frost$core$Int local5;
org$frostlang$frostc$Code$PrimitiveType* local6 = NULL;
frost$core$Real64 local7;
org$frostlang$frostc$Code$PrimitiveType* local8 = NULL;
org$frostlang$frostc$Code$Statement$ID local9;
org$frostlang$frostc$Code$PrimitiveType* local10 = NULL;
org$frostlang$frostc$Code$PrimitiveType* local11 = NULL;
org$frostlang$frostc$FixedArray* local12 = NULL;
org$frostlang$frostc$FixedArray* local13 = NULL;
org$frostlang$frostc$Code$PrimitiveType* local14 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Bit* _13;
frost$core$Bit _14;
frost$core$Bit _17;
frost$core$Object* _18;
$fn11 _21;
frost$core$String* _22;
frost$core$String* _23;
frost$core$Object* _24;
frost$core$Object* _26;
frost$core$Object* _28;
frost$core$String* _31;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$Object* _36;
frost$core$Object* _38;
frost$core$Int _41;
int64_t _44;
int64_t _45;
bool _46;
frost$core$Bit _47;
bool _49;
frost$core$Int* _51;
frost$core$Int _52;
frost$core$Int _55;
frost$core$Object* _56;
$fn12 _59;
frost$core$String* _60;
frost$core$String* _61;
frost$core$Object* _62;
frost$core$Object* _64;
frost$core$Object* _66;
frost$core$String* _69;
frost$core$Object* _70;
frost$core$Object* _72;
frost$core$Object* _74;
frost$core$Object* _76;
frost$core$Int _79;
int64_t _82;
int64_t _83;
bool _84;
frost$core$Bit _85;
bool _87;
frost$core$UInt64* _89;
frost$core$UInt64 _90;
org$frostlang$frostc$Code$PrimitiveType** _92;
org$frostlang$frostc$Code$PrimitiveType* _93;
frost$core$Object* _95;
org$frostlang$frostc$Code$PrimitiveType* _97;
frost$core$Object* _98;
frost$core$UInt64 _102;
frost$core$Object* _103;
$fn13 _106;
frost$core$String* _107;
frost$core$String* _108;
frost$core$Object* _109;
frost$core$Object* _111;
frost$core$Object* _113;
frost$core$String* _116;
org$frostlang$frostc$Code$PrimitiveType* _117;
frost$core$Object* _118;
$fn14 _121;
frost$core$String* _122;
frost$core$String* _123;
frost$core$Object* _124;
frost$core$Object* _126;
frost$core$Object* _128;
frost$core$String* _131;
frost$core$Object* _132;
frost$core$Object* _134;
frost$core$Object* _136;
frost$core$Object* _138;
frost$core$Object* _140;
frost$core$Object* _142;
org$frostlang$frostc$Code$PrimitiveType* _144;
frost$core$Object* _145;
frost$core$Int _149;
int64_t _152;
int64_t _153;
bool _154;
frost$core$Bit _155;
bool _157;
org$frostlang$frostc$Code$Signature** _159;
org$frostlang$frostc$Code$Signature* _160;
frost$core$Object* _162;
org$frostlang$frostc$Code$Signature* _164;
frost$core$Object* _165;
org$frostlang$frostc$Code$Signature* _169;
frost$core$Object* _170;
$fn15 _173;
frost$core$String* _174;
frost$core$String* _175;
frost$core$Object* _176;
frost$core$Object* _178;
frost$core$Object* _180;
frost$core$String* _183;
frost$core$Object* _184;
frost$core$Object* _186;
frost$core$Object* _188;
org$frostlang$frostc$Code$Signature* _190;
frost$core$Object* _191;
frost$core$Int _195;
int64_t _198;
int64_t _199;
bool _200;
frost$core$Bit _201;
bool _203;
frost$core$Int* _205;
frost$core$Int _206;
org$frostlang$frostc$Code$PrimitiveType** _208;
org$frostlang$frostc$Code$PrimitiveType* _209;
frost$core$Object* _211;
org$frostlang$frostc$Code$PrimitiveType* _213;
frost$core$Object* _214;
frost$core$Int _218;
frost$core$Object* _219;
$fn16 _222;
frost$core$String* _223;
frost$core$String* _224;
frost$core$Object* _225;
frost$core$Object* _227;
frost$core$Object* _229;
frost$core$String* _232;
org$frostlang$frostc$Code$PrimitiveType* _233;
frost$core$Object* _234;
$fn17 _237;
frost$core$String* _238;
frost$core$String* _239;
frost$core$Object* _240;
frost$core$Object* _242;
frost$core$Object* _244;
frost$core$String* _247;
frost$core$Object* _248;
frost$core$Object* _250;
frost$core$Object* _252;
frost$core$Object* _254;
frost$core$Object* _256;
frost$core$Object* _258;
org$frostlang$frostc$Code$PrimitiveType* _260;
frost$core$Object* _261;
frost$core$Int _265;
int64_t _268;
int64_t _269;
bool _270;
frost$core$Bit _271;
bool _273;
frost$core$Real64* _275;
frost$core$Real64 _276;
org$frostlang$frostc$Code$PrimitiveType** _278;
org$frostlang$frostc$Code$PrimitiveType* _279;
frost$core$Object* _281;
org$frostlang$frostc$Code$PrimitiveType* _283;
frost$core$Object* _284;
frost$core$Real64 _288;
frost$core$Object* _289;
$fn18 _292;
frost$core$String* _293;
frost$core$String* _294;
frost$core$Object* _295;
frost$core$Object* _297;
frost$core$Object* _299;
frost$core$String* _302;
org$frostlang$frostc$Code$PrimitiveType* _303;
frost$core$Object* _304;
$fn19 _307;
frost$core$String* _308;
frost$core$String* _309;
frost$core$Object* _310;
frost$core$Object* _312;
frost$core$Object* _314;
frost$core$String* _317;
frost$core$Object* _318;
frost$core$Object* _320;
frost$core$Object* _322;
frost$core$Object* _324;
frost$core$Object* _326;
frost$core$Object* _328;
org$frostlang$frostc$Code$PrimitiveType* _330;
frost$core$Object* _331;
frost$core$Int _335;
int64_t _338;
int64_t _339;
bool _340;
frost$core$Bit _341;
bool _343;
org$frostlang$frostc$Code$Statement$ID* _345;
org$frostlang$frostc$Code$Statement$ID _346;
org$frostlang$frostc$Code$PrimitiveType** _348;
org$frostlang$frostc$Code$PrimitiveType* _349;
frost$core$Object* _351;
org$frostlang$frostc$Code$PrimitiveType* _353;
frost$core$Object* _354;
org$frostlang$frostc$Code$Statement$ID _358;
frost$core$Object* _359;
$fn20 _362;
frost$core$String* _363;
frost$core$String* _364;
frost$core$Object* _365;
frost$core$Object* _367;
frost$core$Object* _369;
frost$core$String* _372;
org$frostlang$frostc$Code$PrimitiveType* _373;
frost$core$Object* _374;
$fn21 _377;
frost$core$String* _378;
frost$core$String* _379;
frost$core$Object* _380;
frost$core$Object* _382;
frost$core$Object* _384;
frost$core$String* _387;
frost$core$Object* _388;
frost$core$Object* _390;
frost$core$Object* _392;
frost$core$Object* _394;
frost$core$Object* _396;
frost$core$Object* _398;
org$frostlang$frostc$Code$PrimitiveType* _400;
frost$core$Object* _401;
frost$core$Int _405;
int64_t _408;
int64_t _409;
bool _410;
frost$core$Bit _411;
bool _413;
org$frostlang$frostc$Code$PrimitiveType** _415;
org$frostlang$frostc$Code$PrimitiveType* _416;
frost$core$Object* _418;
org$frostlang$frostc$Code$PrimitiveType* _420;
frost$core$Object* _421;
org$frostlang$frostc$FixedArray** _424;
org$frostlang$frostc$FixedArray* _425;
frost$core$Object* _427;
org$frostlang$frostc$FixedArray* _429;
frost$core$Object* _430;
org$frostlang$frostc$Code$PrimitiveType* _434;
frost$core$Object* _435;
$fn22 _438;
frost$core$String* _439;
frost$core$String* _440;
frost$core$Object* _441;
frost$core$Object* _443;
frost$core$Object* _445;
frost$core$String* _448;
org$frostlang$frostc$FixedArray* _449;
frost$core$Object* _450;
$fn23 _453;
frost$core$String* _454;
frost$core$String* _455;
frost$core$Object* _456;
frost$core$Object* _458;
frost$core$Object* _460;
frost$core$String* _463;
frost$core$Object* _464;
frost$core$Object* _466;
frost$core$Object* _468;
frost$core$Object* _470;
frost$core$Object* _472;
org$frostlang$frostc$FixedArray* _474;
frost$core$Object* _475;
org$frostlang$frostc$Code$PrimitiveType* _478;
frost$core$Object* _479;
frost$core$Int _483;
int64_t _486;
int64_t _487;
bool _488;
frost$core$Bit _489;
bool _491;
org$frostlang$frostc$FixedArray** _493;
org$frostlang$frostc$FixedArray* _494;
frost$core$Object* _496;
org$frostlang$frostc$FixedArray* _498;
frost$core$Object* _499;
org$frostlang$frostc$FixedArray* _503;
frost$core$Object* _504;
$fn24 _507;
frost$core$String* _508;
frost$core$String* _509;
frost$core$Object* _510;
frost$core$Object* _512;
frost$core$Object* _514;
frost$core$String* _517;
frost$core$Object* _518;
frost$core$Object* _520;
frost$core$Object* _522;
org$frostlang$frostc$FixedArray* _524;
frost$core$Object* _525;
frost$core$Int _529;
int64_t _532;
int64_t _533;
bool _534;
frost$core$Bit _535;
bool _537;
org$frostlang$frostc$Code$PrimitiveType** _539;
org$frostlang$frostc$Code$PrimitiveType* _540;
frost$core$Object* _542;
org$frostlang$frostc$Code$PrimitiveType* _544;
frost$core$Object* _545;
org$frostlang$frostc$Code$PrimitiveType* _549;
frost$core$Object* _550;
$fn25 _553;
frost$core$String* _554;
frost$core$String* _555;
frost$core$Object* _556;
frost$core$Object* _558;
frost$core$Object* _560;
frost$core$String* _563;
frost$core$Object* _564;
frost$core$Object* _566;
frost$core$Object* _568;
org$frostlang$frostc$Code$PrimitiveType* _570;
frost$core$Object* _571;
frost$core$Int _576;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_1 = &param0->$rawValue;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
_13 = &param0->$data.$BIT.field0;
_14 = *_13;
*(&local0) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_17 = *(&local0);
frost$core$Bit$wrapper* $tmp26;
$tmp26 = (frost$core$Bit$wrapper*) frostObjectAlloc(sizeof(frost$core$Bit$wrapper), (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp26->value = _17;
_18 = ((frost$core$Object*) $tmp26);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_21 = ($fn27) _18->$class->vtable[0];
_22 = _21(_18);
_23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s28, _22);
_24 = ((frost$core$Object*) _23);
frost$core$Frost$ref$frost$core$Object$Q(_24);
_26 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_26);
_28 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_28);
_31 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_23, &$s29);
_32 = ((frost$core$Object*) _31);
frost$core$Frost$ref$frost$core$Object$Q(_32);
_34 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_34);
_36 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = _18;
frost$core$Frost$unref$frost$core$Object$Q(_38);
return _31;
block3:;
_41 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_44 = _2.value;
_45 = _41.value;
_46 = _44 == _45;
_47 = (frost$core$Bit) {_46};
_49 = _47.value;
if (_49) goto block6; else goto block7;
block6:;
_51 = &param0->$data.$GLOBAL_POINTER.field0;
_52 = *_51;
*(&local1) = _52;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_55 = *(&local1);
frost$core$Int$wrapper* $tmp30;
$tmp30 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp30->value = _55;
_56 = ((frost$core$Object*) $tmp30);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_59 = ($fn31) _56->$class->vtable[0];
_60 = _59(_56);
_61 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s32, _60);
_62 = ((frost$core$Object*) _61);
frost$core$Frost$ref$frost$core$Object$Q(_62);
_64 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_64);
_66 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_66);
_69 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_61, &$s33);
_70 = ((frost$core$Object*) _69);
frost$core$Frost$ref$frost$core$Object$Q(_70);
_72 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_72);
_74 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_74);
_76 = _56;
frost$core$Frost$unref$frost$core$Object$Q(_76);
return _69;
block7:;
_79 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_82 = _2.value;
_83 = _79.value;
_84 = _82 == _83;
_85 = (frost$core$Bit) {_84};
_87 = _85.value;
if (_87) goto block10; else goto block11;
block10:;
_89 = &param0->$data.$INT.field0;
_90 = *_89;
*(&local2) = _90;
_92 = &param0->$data.$INT.field1;
_93 = *_92;
*(&local3) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_95 = ((frost$core$Object*) _93);
frost$core$Frost$ref$frost$core$Object$Q(_95);
_97 = *(&local3);
_98 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_98);
*(&local3) = _93;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_102 = *(&local2);
frost$core$UInt64$wrapper* $tmp34;
$tmp34 = (frost$core$UInt64$wrapper*) frostObjectAlloc(sizeof(frost$core$UInt64$wrapper), (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp34->value = _102;
_103 = ((frost$core$Object*) $tmp34);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_106 = ($fn35) _103->$class->vtable[0];
_107 = _106(_103);
_108 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s36, _107);
_109 = ((frost$core$Object*) _108);
frost$core$Frost$ref$frost$core$Object$Q(_109);
_111 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_111);
_113 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_113);
_116 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_108, &$s37);
_117 = *(&local3);
_118 = ((frost$core$Object*) _117);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_121 = ($fn38) _118->$class->vtable[0];
_122 = _121(_118);
_123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_116, _122);
_124 = ((frost$core$Object*) _123);
frost$core$Frost$ref$frost$core$Object$Q(_124);
_126 = ((frost$core$Object*) _123);
frost$core$Frost$unref$frost$core$Object$Q(_126);
_128 = ((frost$core$Object*) _122);
frost$core$Frost$unref$frost$core$Object$Q(_128);
_131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_123, &$s39);
_132 = ((frost$core$Object*) _131);
frost$core$Frost$ref$frost$core$Object$Q(_132);
_134 = ((frost$core$Object*) _131);
frost$core$Frost$unref$frost$core$Object$Q(_134);
_136 = ((frost$core$Object*) _123);
frost$core$Frost$unref$frost$core$Object$Q(_136);
_138 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_138);
_140 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_140);
_142 = _103;
frost$core$Frost$unref$frost$core$Object$Q(_142);
_144 = *(&local3);
_145 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_145);
*(&local3) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
return _131;
block11:;
_149 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_152 = _2.value;
_153 = _149.value;
_154 = _152 == _153;
_155 = (frost$core$Bit) {_154};
_157 = _155.value;
if (_157) goto block15; else goto block16;
block15:;
_159 = &param0->$data.$METHOD_POINTER.field0;
_160 = *_159;
*(&local4) = ((org$frostlang$frostc$Code$Signature*) NULL);
_162 = ((frost$core$Object*) _160);
frost$core$Frost$ref$frost$core$Object$Q(_162);
_164 = *(&local4);
_165 = ((frost$core$Object*) _164);
frost$core$Frost$unref$frost$core$Object$Q(_165);
*(&local4) = _160;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_169 = *(&local4);
_170 = ((frost$core$Object*) _169);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_173 = ($fn40) _170->$class->vtable[0];
_174 = _173(_170);
_175 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s41, _174);
_176 = ((frost$core$Object*) _175);
frost$core$Frost$ref$frost$core$Object$Q(_176);
_178 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_178);
_180 = ((frost$core$Object*) _174);
frost$core$Frost$unref$frost$core$Object$Q(_180);
_183 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_175, &$s42);
_184 = ((frost$core$Object*) _183);
frost$core$Frost$ref$frost$core$Object$Q(_184);
_186 = ((frost$core$Object*) _183);
frost$core$Frost$unref$frost$core$Object$Q(_186);
_188 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_188);
_190 = *(&local4);
_191 = ((frost$core$Object*) _190);
frost$core$Frost$unref$frost$core$Object$Q(_191);
*(&local4) = ((org$frostlang$frostc$Code$Signature*) NULL);
return _183;
block16:;
_195 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_198 = _2.value;
_199 = _195.value;
_200 = _198 == _199;
_201 = (frost$core$Bit) {_200};
_203 = _201.value;
if (_203) goto block19; else goto block20;
block19:;
_205 = &param0->$data.$PARAMETER.field0;
_206 = *_205;
*(&local5) = _206;
_208 = &param0->$data.$PARAMETER.field1;
_209 = *_208;
*(&local6) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_211 = ((frost$core$Object*) _209);
frost$core$Frost$ref$frost$core$Object$Q(_211);
_213 = *(&local6);
_214 = ((frost$core$Object*) _213);
frost$core$Frost$unref$frost$core$Object$Q(_214);
*(&local6) = _209;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_218 = *(&local5);
frost$core$Int$wrapper* $tmp43;
$tmp43 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp43->value = _218;
_219 = ((frost$core$Object*) $tmp43);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_222 = ($fn44) _219->$class->vtable[0];
_223 = _222(_219);
_224 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s45, _223);
_225 = ((frost$core$Object*) _224);
frost$core$Frost$ref$frost$core$Object$Q(_225);
_227 = ((frost$core$Object*) _224);
frost$core$Frost$unref$frost$core$Object$Q(_227);
_229 = ((frost$core$Object*) _223);
frost$core$Frost$unref$frost$core$Object$Q(_229);
_232 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_224, &$s46);
_233 = *(&local6);
_234 = ((frost$core$Object*) _233);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_237 = ($fn47) _234->$class->vtable[0];
_238 = _237(_234);
_239 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_232, _238);
_240 = ((frost$core$Object*) _239);
frost$core$Frost$ref$frost$core$Object$Q(_240);
_242 = ((frost$core$Object*) _239);
frost$core$Frost$unref$frost$core$Object$Q(_242);
_244 = ((frost$core$Object*) _238);
frost$core$Frost$unref$frost$core$Object$Q(_244);
_247 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_239, &$s48);
_248 = ((frost$core$Object*) _247);
frost$core$Frost$ref$frost$core$Object$Q(_248);
_250 = ((frost$core$Object*) _247);
frost$core$Frost$unref$frost$core$Object$Q(_250);
_252 = ((frost$core$Object*) _239);
frost$core$Frost$unref$frost$core$Object$Q(_252);
_254 = ((frost$core$Object*) _232);
frost$core$Frost$unref$frost$core$Object$Q(_254);
_256 = ((frost$core$Object*) _224);
frost$core$Frost$unref$frost$core$Object$Q(_256);
_258 = _219;
frost$core$Frost$unref$frost$core$Object$Q(_258);
_260 = *(&local6);
_261 = ((frost$core$Object*) _260);
frost$core$Frost$unref$frost$core$Object$Q(_261);
*(&local6) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
return _247;
block20:;
_265 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_268 = _2.value;
_269 = _265.value;
_270 = _268 == _269;
_271 = (frost$core$Bit) {_270};
_273 = _271.value;
if (_273) goto block24; else goto block25;
block24:;
_275 = &param0->$data.$REAL.field0;
_276 = *_275;
*(&local7) = _276;
_278 = &param0->$data.$REAL.field1;
_279 = *_278;
*(&local8) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_281 = ((frost$core$Object*) _279);
frost$core$Frost$ref$frost$core$Object$Q(_281);
_283 = *(&local8);
_284 = ((frost$core$Object*) _283);
frost$core$Frost$unref$frost$core$Object$Q(_284);
*(&local8) = _279;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_288 = *(&local7);
frost$core$Real64$wrapper* $tmp49;
$tmp49 = (frost$core$Real64$wrapper*) frostObjectAlloc(sizeof(frost$core$Real64$wrapper), (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp49->value = _288;
_289 = ((frost$core$Object*) $tmp49);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_292 = ($fn50) _289->$class->vtable[0];
_293 = _292(_289);
_294 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s51, _293);
_295 = ((frost$core$Object*) _294);
frost$core$Frost$ref$frost$core$Object$Q(_295);
_297 = ((frost$core$Object*) _294);
frost$core$Frost$unref$frost$core$Object$Q(_297);
_299 = ((frost$core$Object*) _293);
frost$core$Frost$unref$frost$core$Object$Q(_299);
_302 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_294, &$s52);
_303 = *(&local8);
_304 = ((frost$core$Object*) _303);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_307 = ($fn53) _304->$class->vtable[0];
_308 = _307(_304);
_309 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_302, _308);
_310 = ((frost$core$Object*) _309);
frost$core$Frost$ref$frost$core$Object$Q(_310);
_312 = ((frost$core$Object*) _309);
frost$core$Frost$unref$frost$core$Object$Q(_312);
_314 = ((frost$core$Object*) _308);
frost$core$Frost$unref$frost$core$Object$Q(_314);
_317 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_309, &$s54);
_318 = ((frost$core$Object*) _317);
frost$core$Frost$ref$frost$core$Object$Q(_318);
_320 = ((frost$core$Object*) _317);
frost$core$Frost$unref$frost$core$Object$Q(_320);
_322 = ((frost$core$Object*) _309);
frost$core$Frost$unref$frost$core$Object$Q(_322);
_324 = ((frost$core$Object*) _302);
frost$core$Frost$unref$frost$core$Object$Q(_324);
_326 = ((frost$core$Object*) _294);
frost$core$Frost$unref$frost$core$Object$Q(_326);
_328 = _289;
frost$core$Frost$unref$frost$core$Object$Q(_328);
_330 = *(&local8);
_331 = ((frost$core$Object*) _330);
frost$core$Frost$unref$frost$core$Object$Q(_331);
*(&local8) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
return _317;
block25:;
_335 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_338 = _2.value;
_339 = _335.value;
_340 = _338 == _339;
_341 = (frost$core$Bit) {_340};
_343 = _341.value;
if (_343) goto block29; else goto block30;
block29:;
_345 = &param0->$data.$STATEMENT.field0;
_346 = *_345;
*(&local9) = _346;
_348 = &param0->$data.$STATEMENT.field1;
_349 = *_348;
*(&local10) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_351 = ((frost$core$Object*) _349);
frost$core$Frost$ref$frost$core$Object$Q(_351);
_353 = *(&local10);
_354 = ((frost$core$Object*) _353);
frost$core$Frost$unref$frost$core$Object$Q(_354);
*(&local10) = _349;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_358 = *(&local9);
org$frostlang$frostc$Code$Statement$ID$wrapper* $tmp55;
$tmp55 = (org$frostlang$frostc$Code$Statement$ID$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Code$Statement$ID$wrapper), (frost$core$Class*) &org$frostlang$frostc$Code$Statement$ID$wrapperclass);
$tmp55->value = _358;
_359 = ((frost$core$Object*) $tmp55);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_362 = ($fn56) _359->$class->vtable[0];
_363 = _362(_359);
_364 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s57, _363);
_365 = ((frost$core$Object*) _364);
frost$core$Frost$ref$frost$core$Object$Q(_365);
_367 = ((frost$core$Object*) _364);
frost$core$Frost$unref$frost$core$Object$Q(_367);
_369 = ((frost$core$Object*) _363);
frost$core$Frost$unref$frost$core$Object$Q(_369);
_372 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_364, &$s58);
_373 = *(&local10);
_374 = ((frost$core$Object*) _373);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_377 = ($fn59) _374->$class->vtable[0];
_378 = _377(_374);
_379 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_372, _378);
_380 = ((frost$core$Object*) _379);
frost$core$Frost$ref$frost$core$Object$Q(_380);
_382 = ((frost$core$Object*) _379);
frost$core$Frost$unref$frost$core$Object$Q(_382);
_384 = ((frost$core$Object*) _378);
frost$core$Frost$unref$frost$core$Object$Q(_384);
_387 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_379, &$s60);
_388 = ((frost$core$Object*) _387);
frost$core$Frost$ref$frost$core$Object$Q(_388);
_390 = ((frost$core$Object*) _387);
frost$core$Frost$unref$frost$core$Object$Q(_390);
_392 = ((frost$core$Object*) _379);
frost$core$Frost$unref$frost$core$Object$Q(_392);
_394 = ((frost$core$Object*) _372);
frost$core$Frost$unref$frost$core$Object$Q(_394);
_396 = ((frost$core$Object*) _364);
frost$core$Frost$unref$frost$core$Object$Q(_396);
_398 = _359;
frost$core$Frost$unref$frost$core$Object$Q(_398);
_400 = *(&local10);
_401 = ((frost$core$Object*) _400);
frost$core$Frost$unref$frost$core$Object$Q(_401);
*(&local10) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
return _387;
block30:;
_405 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_408 = _2.value;
_409 = _405.value;
_410 = _408 == _409;
_411 = (frost$core$Bit) {_410};
_413 = _411.value;
if (_413) goto block34; else goto block35;
block34:;
_415 = &param0->$data.$ARRAY.field0;
_416 = *_415;
*(&local11) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_418 = ((frost$core$Object*) _416);
frost$core$Frost$ref$frost$core$Object$Q(_418);
_420 = *(&local11);
_421 = ((frost$core$Object*) _420);
frost$core$Frost$unref$frost$core$Object$Q(_421);
*(&local11) = _416;
_424 = &param0->$data.$ARRAY.field1;
_425 = *_424;
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
_427 = ((frost$core$Object*) _425);
frost$core$Frost$ref$frost$core$Object$Q(_427);
_429 = *(&local12);
_430 = ((frost$core$Object*) _429);
frost$core$Frost$unref$frost$core$Object$Q(_430);
*(&local12) = _425;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_434 = *(&local11);
_435 = ((frost$core$Object*) _434);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_438 = ($fn61) _435->$class->vtable[0];
_439 = _438(_435);
_440 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s62, _439);
_441 = ((frost$core$Object*) _440);
frost$core$Frost$ref$frost$core$Object$Q(_441);
_443 = ((frost$core$Object*) _440);
frost$core$Frost$unref$frost$core$Object$Q(_443);
_445 = ((frost$core$Object*) _439);
frost$core$Frost$unref$frost$core$Object$Q(_445);
_448 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_440, &$s63);
_449 = *(&local12);
_450 = ((frost$core$Object*) _449);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_453 = ($fn64) _450->$class->vtable[0];
_454 = _453(_450);
_455 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_448, _454);
_456 = ((frost$core$Object*) _455);
frost$core$Frost$ref$frost$core$Object$Q(_456);
_458 = ((frost$core$Object*) _455);
frost$core$Frost$unref$frost$core$Object$Q(_458);
_460 = ((frost$core$Object*) _454);
frost$core$Frost$unref$frost$core$Object$Q(_460);
_463 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_455, &$s65);
_464 = ((frost$core$Object*) _463);
frost$core$Frost$ref$frost$core$Object$Q(_464);
_466 = ((frost$core$Object*) _463);
frost$core$Frost$unref$frost$core$Object$Q(_466);
_468 = ((frost$core$Object*) _455);
frost$core$Frost$unref$frost$core$Object$Q(_468);
_470 = ((frost$core$Object*) _448);
frost$core$Frost$unref$frost$core$Object$Q(_470);
_472 = ((frost$core$Object*) _440);
frost$core$Frost$unref$frost$core$Object$Q(_472);
_474 = *(&local12);
_475 = ((frost$core$Object*) _474);
frost$core$Frost$unref$frost$core$Object$Q(_475);
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
_478 = *(&local11);
_479 = ((frost$core$Object*) _478);
frost$core$Frost$unref$frost$core$Object$Q(_479);
*(&local11) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
return _463;
block35:;
_483 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_486 = _2.value;
_487 = _483.value;
_488 = _486 == _487;
_489 = (frost$core$Bit) {_488};
_491 = _489.value;
if (_491) goto block39; else goto block40;
block39:;
_493 = &param0->$data.$STRUCT.field0;
_494 = *_493;
*(&local13) = ((org$frostlang$frostc$FixedArray*) NULL);
_496 = ((frost$core$Object*) _494);
frost$core$Frost$ref$frost$core$Object$Q(_496);
_498 = *(&local13);
_499 = ((frost$core$Object*) _498);
frost$core$Frost$unref$frost$core$Object$Q(_499);
*(&local13) = _494;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_503 = *(&local13);
_504 = ((frost$core$Object*) _503);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_507 = ($fn66) _504->$class->vtable[0];
_508 = _507(_504);
_509 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s67, _508);
_510 = ((frost$core$Object*) _509);
frost$core$Frost$ref$frost$core$Object$Q(_510);
_512 = ((frost$core$Object*) _509);
frost$core$Frost$unref$frost$core$Object$Q(_512);
_514 = ((frost$core$Object*) _508);
frost$core$Frost$unref$frost$core$Object$Q(_514);
_517 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_509, &$s68);
_518 = ((frost$core$Object*) _517);
frost$core$Frost$ref$frost$core$Object$Q(_518);
_520 = ((frost$core$Object*) _517);
frost$core$Frost$unref$frost$core$Object$Q(_520);
_522 = ((frost$core$Object*) _509);
frost$core$Frost$unref$frost$core$Object$Q(_522);
_524 = *(&local13);
_525 = ((frost$core$Object*) _524);
frost$core$Frost$unref$frost$core$Object$Q(_525);
*(&local13) = ((org$frostlang$frostc$FixedArray*) NULL);
return _517;
block40:;
_529 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_532 = _2.value;
_533 = _529.value;
_534 = _532 == _533;
_535 = (frost$core$Bit) {_534};
_537 = _535.value;
if (_537) goto block43; else goto block44;
block43:;
_539 = &param0->$data.$UNDEFINED.field0;
_540 = *_539;
*(&local14) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
_542 = ((frost$core$Object*) _540);
frost$core$Frost$ref$frost$core$Object$Q(_542);
_544 = *(&local14);
_545 = ((frost$core$Object*) _544);
frost$core$Frost$unref$frost$core$Object$Q(_545);
*(&local14) = _540;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_549 = *(&local14);
_550 = ((frost$core$Object*) _549);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Code.frost:680:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_553 = ($fn69) _550->$class->vtable[0];
_554 = _553(_550);
_555 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s70, _554);
_556 = ((frost$core$Object*) _555);
frost$core$Frost$ref$frost$core$Object$Q(_556);
_558 = ((frost$core$Object*) _555);
frost$core$Frost$unref$frost$core$Object$Q(_558);
_560 = ((frost$core$Object*) _554);
frost$core$Frost$unref$frost$core$Object$Q(_560);
_563 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_555, &$s71);
_564 = ((frost$core$Object*) _563);
frost$core$Frost$ref$frost$core$Object$Q(_564);
_566 = ((frost$core$Object*) _563);
frost$core$Frost$unref$frost$core$Object$Q(_566);
_568 = ((frost$core$Object*) _555);
frost$core$Frost$unref$frost$core$Object$Q(_568);
_570 = *(&local14);
_571 = ((frost$core$Object*) _570);
frost$core$Frost$unref$frost$core$Object$Q(_571);
*(&local14) = ((org$frostlang$frostc$Code$PrimitiveType*) NULL);
return _563;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:680
_576 = (frost$core$Int) {680u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s72, _576);
abort(); // unreachable
block1:;
goto block47;
block47:;

}

