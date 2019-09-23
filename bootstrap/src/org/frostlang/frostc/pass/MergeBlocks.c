#include "org/frostlang/frostc/pass/MergeBlocks.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/pass/Analyzer.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "frost/collections/HashSet.h"
#include "org/frostlang/frostc/MethodPosition.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
#include "frost/unsafe/NewPointer.h"
#include "frost/core/Int64.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/HashKey.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/pass/Analyzer/BlockExit.h"
#include "org/frostlang/frostc/LinkedList.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$pass$MergeBlocks$class_type org$frostlang$frostc$pass$MergeBlocks$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$pass$MergeBlocks$cleanup, org$frostlang$frostc$pass$MergeBlocks$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn3)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn5)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn6)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn7)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn8)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn9)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn10)(org$frostlang$frostc$LinkedList*, org$frostlang$frostc$LinkedList*);
typedef void (*$fn11)(org$frostlang$frostc$LinkedList*, org$frostlang$frostc$LinkedList*);
typedef void (*$fn12)(org$frostlang$frostc$LinkedList*, frost$core$Object*);
typedef frost$core$Object* (*$fn29)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn33)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn36)(org$frostlang$frostc$LinkedList*);
typedef void (*$fn39)(org$frostlang$frostc$LinkedList*, org$frostlang$frostc$LinkedList*);
typedef void (*$fn42)(org$frostlang$frostc$LinkedList*, org$frostlang$frostc$LinkedList*);
typedef void (*$fn43)(org$frostlang$frostc$LinkedList*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73", 37, -1664802375534301975, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x42\x6c\x6f\x63\x6b\x45\x78\x69\x74\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 142, 7030418619898892193, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x42\x6c\x6f\x63\x6b\x45\x78\x69\x74\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 136, 4083565817121878510, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b", 97, 2843296977023527325, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b", 97, 2843296977023527325, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b", 97, 2843296977023527325, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b", 97, 2843296977023527325, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x72\x67\x65\x42\x6c\x6f\x63\x6b\x73\x2e\x66\x72\x6f\x73\x74", 17, -6522198512651000971, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b", 97, 2843296977023527325, NULL };

frost$core$Bit org$frostlang$frostc$pass$MergeBlocks$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$IR* param1, org$frostlang$frostc$pass$Analyzer* param2) {
org$frostlang$frostc$pass$MergeBlocks* param0 = (org$frostlang$frostc$pass$MergeBlocks*) rawSelf;

frost$core$Bit local0;
frost$core$Int local1;
org$frostlang$frostc$IR$Block* local2 = NULL;
frost$collections$HashSet* local3 = NULL;
org$frostlang$frostc$IR$Block* local4 = NULL;
org$frostlang$frostc$MethodPosition local5;
org$frostlang$frostc$IR$Block$ID local6;
frost$core$Bit _1;
frost$collections$Array** _4;
frost$collections$Array* _5;
frost$collections$CollectionView* _6;
$fn2 _7;
frost$core$Int _8;
frost$core$Int _9;
int64_t _10;
int64_t _11;
int64_t _12;
frost$core$Int _13;
frost$core$Int _14;
frost$core$Int _15;
frost$core$Bit _16;
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT _17;
frost$core$Int _18;
frost$core$Int _20;
frost$core$Int _21;
int64_t _24;
int64_t _25;
frost$core$Int _26;
frost$core$Bit _28;
bool _29;
frost$core$Int _30;
int64_t _31;
int64_t _32;
bool _33;
frost$core$Bit _34;
bool _35;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _42;
int64_t _44;
int64_t _45;
bool _46;
frost$core$Bit _47;
bool _48;
int64_t _51;
int64_t _52;
bool _53;
frost$core$Bit _54;
bool _55;
int64_t _57;
int64_t _58;
bool _59;
frost$core$Bit _60;
bool _61;
frost$collections$Array** _64;
frost$collections$Array* _65;
frost$core$Int _66;
frost$core$Int _68;
int64_t _69;
int64_t _70;
bool _71;
frost$core$Bit _72;
bool _73;
frost$collections$CollectionView* _75;
$fn3 _76;
frost$core$Int _77;
int64_t _78;
int64_t _79;
bool _80;
frost$core$Bit _81;
bool _82;
frost$core$Int _84;
frost$unsafe$NewPointer* _88;
frost$unsafe$NewPointer _89;
int64_t _90;
frost$core$Int64 _91;
int64_t _92;
frost$core$Object* _93;
frost$core$Object* _94;
org$frostlang$frostc$IR$Block* _97;
frost$core$Object* _99;
org$frostlang$frostc$IR$Block* _101;
frost$core$Object* _102;
frost$core$Object* _105;
frost$collections$HashMap** _108;
frost$collections$HashMap* _109;
org$frostlang$frostc$IR$Block* _110;
org$frostlang$frostc$IR$Block$ID* _111;
org$frostlang$frostc$IR$Block$ID _112;
frost$collections$HashKey* _113;
frost$core$Object* _114;
frost$collections$HashSet* _115;
frost$core$Object* _117;
frost$collections$HashSet* _119;
frost$core$Object* _120;
frost$core$Object* _123;
frost$core$Object* _125;
frost$collections$HashSet* _128;
bool _129;
frost$core$Bit _130;
bool _131;
frost$collections$HashSet* _133;
bool _134;
frost$core$Bit _135;
bool _136;
frost$core$Int _138;
frost$collections$CollectionView* _141;
$fn4 _142;
frost$core$Int _143;
frost$core$Int _144;
int64_t _147;
int64_t _148;
bool _149;
frost$core$Bit _150;
bool _152;
frost$collections$HashMap** _155;
frost$collections$HashMap* _156;
frost$collections$HashSet* _157;
bool _158;
frost$core$Bit _159;
bool _160;
frost$core$Int _162;
frost$collections$Iterable* _165;
$fn5 _166;
frost$collections$Iterator* _167;
$fn6 _168;
frost$core$Object* _169;
org$frostlang$frostc$pass$Analyzer$BlockExit _170;
org$frostlang$frostc$IR$Block$ID _171;
frost$collections$HashKey* _172;
frost$core$Object* _173;
org$frostlang$frostc$IR$Block* _174;
frost$core$Object* _176;
org$frostlang$frostc$IR$Block* _178;
frost$core$Object* _179;
frost$core$Object* _182;
frost$core$Object* _184;
frost$core$Object* _186;
frost$core$Object* _188;
org$frostlang$frostc$IR$Block* _191;
bool _192;
frost$core$Bit _193;
bool _194;
frost$core$Int _196;
org$frostlang$frostc$IR$Block* _200;
bool _201;
frost$core$Bit _202;
bool _203;
frost$core$Int _205;
org$frostlang$frostc$IR$Block* _208;
org$frostlang$frostc$LinkedList** _209;
org$frostlang$frostc$LinkedList* _210;
$fn7 _211;
frost$core$Object* _212;
org$frostlang$frostc$IR$Statement* _213;
frost$core$Int* _214;
frost$core$Int _215;
frost$core$Int _216;
int64_t _219;
int64_t _220;
bool _221;
frost$core$Bit _222;
bool _224;
org$frostlang$frostc$MethodPosition* _226;
org$frostlang$frostc$MethodPosition _227;
org$frostlang$frostc$IR$Block$ID* _229;
org$frostlang$frostc$IR$Block$ID _230;
org$frostlang$frostc$IR$Block$ID _233;
org$frostlang$frostc$IR$Block* _234;
org$frostlang$frostc$IR$Block$ID* _235;
org$frostlang$frostc$IR$Block$ID _236;
frost$core$Int _239;
frost$core$Int _240;
int64_t _243;
int64_t _244;
bool _245;
frost$core$Bit _246;
bool _249;
frost$core$Int _251;
org$frostlang$frostc$IR$Block* _255;
bool _256;
frost$core$Bit _257;
bool _258;
frost$core$Int _260;
org$frostlang$frostc$IR$Block* _263;
org$frostlang$frostc$LinkedList** _264;
org$frostlang$frostc$LinkedList* _265;
$fn8 _266;
org$frostlang$frostc$IR$Block* _269;
bool _270;
frost$core$Bit _271;
bool _272;
frost$core$Int _274;
org$frostlang$frostc$IR$Block* _277;
org$frostlang$frostc$LinkedList** _278;
org$frostlang$frostc$LinkedList* _279;
$fn9 _280;
org$frostlang$frostc$IR$Block* _283;
bool _284;
frost$core$Bit _285;
bool _286;
frost$core$Int _288;
org$frostlang$frostc$IR$Block* _291;
org$frostlang$frostc$LinkedList** _292;
org$frostlang$frostc$LinkedList* _293;
org$frostlang$frostc$IR$Block* _294;
org$frostlang$frostc$LinkedList** _295;
org$frostlang$frostc$LinkedList* _296;
$fn10 _297;
org$frostlang$frostc$IR$Block* _300;
bool _301;
frost$core$Bit _302;
bool _303;
frost$core$Int _305;
org$frostlang$frostc$IR$Block* _308;
org$frostlang$frostc$LinkedList** _309;
org$frostlang$frostc$LinkedList* _310;
org$frostlang$frostc$IR$Block* _311;
org$frostlang$frostc$LinkedList** _312;
org$frostlang$frostc$LinkedList* _313;
$fn11 _314;
org$frostlang$frostc$IR$Block* _317;
org$frostlang$frostc$LinkedList** _318;
org$frostlang$frostc$LinkedList* _319;
org$frostlang$frostc$IR$Statement* _320;
frost$core$Int _321;
org$frostlang$frostc$MethodPosition _322;
frost$core$Object* _324;
$fn12 _325;
frost$core$Object* _327;
frost$core$Bit _330;
frost$core$Object* _333;
org$frostlang$frostc$IR$Block* _335;
frost$core$Object* _336;
frost$collections$HashSet* _340;
frost$core$Object* _341;
org$frostlang$frostc$IR$Block* _344;
frost$core$Object* _345;
frost$core$Int _349;
int64_t _351;
int64_t _352;
int64_t _353;
frost$core$Int _354;
int64_t _356;
int64_t _357;
bool _358;
frost$core$Bit _359;
bool _360;
int64_t _362;
int64_t _363;
bool _364;
frost$core$Bit _365;
bool _366;
int64_t _368;
int64_t _369;
int64_t _370;
frost$core$Int _371;
int64_t _373;
int64_t _374;
bool _375;
frost$core$Bit _376;
bool _377;
int64_t _379;
int64_t _380;
bool _381;
frost$core$Bit _382;
bool _383;
int64_t _385;
int64_t _386;
int64_t _387;
frost$core$Int _388;
frost$core$Bit _392;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:7
_1 = (frost$core$Bit) {false};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:8
_4 = &param1->blocks;
_5 = *_4;
_6 = ((frost$collections$CollectionView*) _5);
ITable* $tmp13 = _6->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
_7 = $tmp13->methods[0];
_8 = _7(_6);
_9 = (frost$core$Int) {1u};
_10 = _8.value;
_11 = _9.value;
_12 = _10 - _11;
_13 = (frost$core$Int) {_12};
_14 = (frost$core$Int) {0u};
_15 = (frost$core$Int) {18446744073709551615u};
_16 = (frost$core$Bit) {true};
_17 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit(_13, _14, _15, _16);
_18 = _17.start;
*(&local1) = _18;
_20 = _17.end;
_21 = _17.step;
// begin inline call to function frost.core.Int.-():frost.core.Int from MergeBlocks.frost:8:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
_24 = _21.value;
_25 = -_24;
_26 = (frost$core$Int) {_25};
_28 = _17.inclusive;
_29 = _28.value;
_30 = (frost$core$Int) {0u};
_31 = _21.value;
_32 = _30.value;
_33 = _31 >= _32;
_34 = (frost$core$Bit) {_33};
_35 = _34.value;
if (_35) goto block5; else goto block6;
block5:;
if (_29) goto block7; else goto block8;
block7:;
_38 = _18.value;
_39 = _20.value;
_40 = _38 <= _39;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block2; else goto block3;
block8:;
_44 = _18.value;
_45 = _20.value;
_46 = _44 < _45;
_47 = (frost$core$Bit) {_46};
_48 = _47.value;
if (_48) goto block2; else goto block3;
block6:;
if (_29) goto block9; else goto block10;
block9:;
_51 = _18.value;
_52 = _20.value;
_53 = _51 >= _52;
_54 = (frost$core$Bit) {_53};
_55 = _54.value;
if (_55) goto block2; else goto block3;
block10:;
_57 = _18.value;
_58 = _20.value;
_59 = _57 > _58;
_60 = (frost$core$Bit) {_59};
_61 = _60.value;
if (_61) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:9
_64 = &param1->blocks;
_65 = *_64;
_66 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from MergeBlocks.frost:9:31
_68 = (frost$core$Int) {0u};
_69 = _66.value;
_70 = _68.value;
_71 = _69 >= _70;
_72 = (frost$core$Bit) {_71};
_73 = _72.value;
if (_73) goto block14; else goto block13;
block14:;
_75 = ((frost$collections$CollectionView*) _65);
ITable* $tmp14 = _75->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp14 = $tmp14->next;
}
_76 = $tmp14->methods[0];
_77 = _76(_75);
_78 = _66.value;
_79 = _77.value;
_80 = _78 < _79;
_81 = (frost$core$Bit) {_80};
_82 = _81.value;
if (_82) goto block12; else goto block13;
block13:;
_84 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s15, _84, &$s16);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_88 = &_65->data;
_89 = *_88;
_90 = _89.value;
_91 = frost$core$Int64$init$frost$core$Int(_66);
_92 = _91.value;
_93 = ((frost$core$Object**)_90)[_92];
_94 = _93;
frost$core$Frost$ref$frost$core$Object$Q(_94);
_97 = ((org$frostlang$frostc$IR$Block*) _93);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
_99 = ((frost$core$Object*) _97);
frost$core$Frost$ref$frost$core$Object$Q(_99);
_101 = *(&local2);
_102 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_102);
*(&local2) = _97;
_105 = _93;
frost$core$Frost$unref$frost$core$Object$Q(_105);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:10
_108 = &param2->predecessors;
_109 = *_108;
_110 = *(&local2);
_111 = &_110->id;
_112 = *_111;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp17;
$tmp17 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Block$ID$wrapper), (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp17->value = _112;
_113 = ((frost$collections$HashKey*) $tmp17);
_114 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(_109, _113);
_115 = ((frost$collections$HashSet*) _114);
*(&local3) = ((frost$collections$HashSet*) NULL);
_117 = ((frost$core$Object*) _115);
frost$core$Frost$ref$frost$core$Object$Q(_117);
_119 = *(&local3);
_120 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_120);
*(&local3) = _115;
_123 = _114;
frost$core$Frost$unref$frost$core$Object$Q(_123);
_125 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_125);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:11
_128 = *(&local3);
_129 = _128 != NULL;
_130 = (frost$core$Bit) {_129};
_131 = _130.value;
if (_131) goto block17; else goto block16;
block17:;
_133 = *(&local3);
_134 = _133 != NULL;
_135 = (frost$core$Bit) {_134};
_136 = _135.value;
if (_136) goto block18; else goto block19;
block19:;
_138 = (frost$core$Int) {11u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _138, &$s19);
abort(); // unreachable
block18:;
_141 = ((frost$collections$CollectionView*) _133);
ITable* $tmp20 = _141->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp20 = $tmp20->next;
}
_142 = $tmp20->methods[0];
_143 = _142(_141);
_144 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MergeBlocks.frost:11:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_147 = _143.value;
_148 = _144.value;
_149 = _147 == _148;
_150 = (frost$core$Bit) {_149};
_152 = _150.value;
if (_152) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:12
_155 = &param2->blocks;
_156 = *_155;
_157 = *(&local3);
_158 = _157 != NULL;
_159 = (frost$core$Bit) {_158};
_160 = _159.value;
if (_160) goto block21; else goto block22;
block22:;
_162 = (frost$core$Int) {12u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s21, _162, &$s22);
abort(); // unreachable
block21:;
_165 = ((frost$collections$Iterable*) _157);
ITable* $tmp23 = _165->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp23 = $tmp23->next;
}
_166 = $tmp23->methods[0];
_167 = _166(_165);
ITable* $tmp24 = _167->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp24 = $tmp24->next;
}
_168 = $tmp24->methods[1];
_169 = _168(_167);
_170 = ((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) _169)->value;
_171 = _170.id;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp25;
$tmp25 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Block$ID$wrapper), (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp25->value = _171;
_172 = ((frost$collections$HashKey*) $tmp25);
_173 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(_156, _172);
_174 = ((org$frostlang$frostc$IR$Block*) _173);
*(&local4) = ((org$frostlang$frostc$IR$Block*) NULL);
_176 = ((frost$core$Object*) _174);
frost$core$Frost$ref$frost$core$Object$Q(_176);
_178 = *(&local4);
_179 = ((frost$core$Object*) _178);
frost$core$Frost$unref$frost$core$Object$Q(_179);
*(&local4) = _174;
_182 = _173;
frost$core$Frost$unref$frost$core$Object$Q(_182);
_184 = ((frost$core$Object*) _172);
frost$core$Frost$unref$frost$core$Object$Q(_184);
_186 = _169;
frost$core$Frost$unref$frost$core$Object$Q(_186);
_188 = ((frost$core$Object*) _167);
frost$core$Frost$unref$frost$core$Object$Q(_188);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:13
_191 = *(&local4);
_192 = _191 != NULL;
_193 = (frost$core$Bit) {_192};
_194 = _193.value;
if (_194) goto block23; else goto block24;
block24:;
_196 = (frost$core$Int) {13u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s26, _196);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:14
_200 = *(&local4);
_201 = _200 != NULL;
_202 = (frost$core$Bit) {_201};
_203 = _202.value;
if (_203) goto block25; else goto block26;
block26:;
_205 = (frost$core$Int) {14u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s27, _205, &$s28);
abort(); // unreachable
block25:;
_208 = _200;
_209 = &_208->statements;
_210 = *_209;
_211 = ($fn29) _210->$class->vtable[6];
_212 = _211(_210);
_213 = ((org$frostlang$frostc$IR$Statement*) _212);
_214 = &_213->$rawValue;
_215 = *_214;
_216 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MergeBlocks.frost:15:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_219 = _215.value;
_220 = _216.value;
_221 = _219 == _220;
_222 = (frost$core$Bit) {_221};
_224 = _222.value;
if (_224) goto block28; else goto block27;
block28:;
_226 = &_213->$data.$BRANCH.field0;
_227 = *_226;
*(&local5) = _227;
_229 = &_213->$data.$BRANCH.field1;
_230 = *_229;
*(&local6) = _230;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:16
_233 = *(&local6);
_234 = *(&local2);
_235 = &_234->id;
_236 = *_235;
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from MergeBlocks.frost:16:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:383
_239 = _233.value;
_240 = _236.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:383:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_243 = _239.value;
_244 = _240.value;
_245 = _243 == _244;
_246 = (frost$core$Bit) {_245};
_249 = _246.value;
if (_249) goto block32; else goto block33;
block33:;
_251 = (frost$core$Int) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s30, _251);
abort(); // unreachable
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:17
_255 = *(&local4);
_256 = _255 != NULL;
_257 = (frost$core$Bit) {_256};
_258 = _257.value;
if (_258) goto block34; else goto block35;
block35:;
_260 = (frost$core$Int) {17u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s31, _260, &$s32);
abort(); // unreachable
block34:;
_263 = _255;
_264 = &_263->statements;
_265 = *_264;
_266 = ($fn33) _265->$class->vtable[7];
_266(_265);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:18
_269 = *(&local4);
_270 = _269 != NULL;
_271 = (frost$core$Bit) {_270};
_272 = _271.value;
if (_272) goto block36; else goto block37;
block37:;
_274 = (frost$core$Int) {18u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s34, _274, &$s35);
abort(); // unreachable
block36:;
_277 = _269;
_278 = &_277->ids;
_279 = *_278;
_280 = ($fn36) _279->$class->vtable[7];
_280(_279);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:19
_283 = *(&local4);
_284 = _283 != NULL;
_285 = (frost$core$Bit) {_284};
_286 = _285.value;
if (_286) goto block38; else goto block39;
block39:;
_288 = (frost$core$Int) {19u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s37, _288, &$s38);
abort(); // unreachable
block38:;
_291 = _283;
_292 = &_291->statements;
_293 = *_292;
_294 = *(&local2);
_295 = &_294->statements;
_296 = *_295;
_297 = ($fn39) _293->$class->vtable[5];
_297(_293, _296);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:20
_300 = *(&local4);
_301 = _300 != NULL;
_302 = (frost$core$Bit) {_301};
_303 = _302.value;
if (_303) goto block40; else goto block41;
block41:;
_305 = (frost$core$Int) {20u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s40, _305, &$s41);
abort(); // unreachable
block40:;
_308 = _300;
_309 = &_308->ids;
_310 = *_309;
_311 = *(&local2);
_312 = &_311->ids;
_313 = *_312;
_314 = ($fn42) _310->$class->vtable[5];
_314(_310, _313);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:21
_317 = *(&local2);
_318 = &_317->statements;
_319 = *_318;
_320 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_321 = (frost$core$Int) {28u};
_322 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition(_320, _321, _322);
_324 = ((frost$core$Object*) _320);
_325 = ($fn43) _319->$class->vtable[4];
_325(_319, _324);
_327 = ((frost$core$Object*) _320);
frost$core$Frost$unref$frost$core$Object$Q(_327);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:22
_330 = (frost$core$Bit) {true};
*(&local0) = _330;
goto block27;
block27:;
_333 = _212;
frost$core$Frost$unref$frost$core$Object$Q(_333);
_335 = *(&local4);
_336 = ((frost$core$Object*) _335);
frost$core$Frost$unref$frost$core$Object$Q(_336);
*(&local4) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block16;
block16:;
_340 = *(&local3);
_341 = ((frost$core$Object*) _340);
frost$core$Frost$unref$frost$core$Object$Q(_341);
*(&local3) = ((frost$collections$HashSet*) NULL);
_344 = *(&local2);
_345 = ((frost$core$Object*) _344);
frost$core$Frost$unref$frost$core$Object$Q(_345);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
_349 = *(&local1);
if (_35) goto block43; else goto block44;
block43:;
_351 = _20.value;
_352 = _349.value;
_353 = _351 - _352;
_354 = (frost$core$Int) {_353};
if (_29) goto block45; else goto block46;
block45:;
_356 = _354.value;
_357 = _21.value;
_358 = _356 >= _357;
_359 = (frost$core$Bit) {_358};
_360 = _359.value;
if (_360) goto block42; else goto block3;
block46:;
_362 = _354.value;
_363 = _21.value;
_364 = _362 > _363;
_365 = (frost$core$Bit) {_364};
_366 = _365.value;
if (_366) goto block42; else goto block3;
block44:;
_368 = _349.value;
_369 = _20.value;
_370 = _368 - _369;
_371 = (frost$core$Int) {_370};
if (_29) goto block47; else goto block48;
block47:;
_373 = _371.value;
_374 = _26.value;
_375 = _373 >= _374;
_376 = (frost$core$Bit) {_375};
_377 = _376.value;
if (_377) goto block42; else goto block3;
block48:;
_379 = _371.value;
_380 = _26.value;
_381 = _379 > _380;
_382 = (frost$core$Bit) {_381};
_383 = _382.value;
if (_383) goto block42; else goto block3;
block42:;
_385 = _349.value;
_386 = _21.value;
_387 = _385 + _386;
_388 = (frost$core$Int) {_387};
*(&local1) = _388;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:27
_392 = *(&local0);
return _392;

}
void org$frostlang$frostc$pass$MergeBlocks$init(void* rawSelf) {
org$frostlang$frostc$pass$MergeBlocks* param0 = (org$frostlang$frostc$pass$MergeBlocks*) rawSelf;

return;

}
void org$frostlang$frostc$pass$MergeBlocks$cleanup(void* rawSelf) {
org$frostlang$frostc$pass$MergeBlocks* param0 = (org$frostlang$frostc$pass$MergeBlocks*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:5
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

