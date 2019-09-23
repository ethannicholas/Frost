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
frost$core$Object*** _88;
frost$core$Object** _89;
frost$core$Int64 _90;
int64_t _91;
frost$core$Object* _92;
frost$core$Object* _93;
org$frostlang$frostc$IR$Block* _96;
frost$core$Object* _98;
org$frostlang$frostc$IR$Block* _100;
frost$core$Object* _101;
frost$core$Object* _104;
frost$collections$HashMap** _107;
frost$collections$HashMap* _108;
org$frostlang$frostc$IR$Block* _109;
org$frostlang$frostc$IR$Block$ID* _110;
org$frostlang$frostc$IR$Block$ID _111;
frost$collections$HashKey* _112;
frost$core$Object* _113;
frost$collections$HashSet* _114;
frost$core$Object* _116;
frost$collections$HashSet* _118;
frost$core$Object* _119;
frost$core$Object* _122;
frost$core$Object* _124;
frost$collections$HashSet* _127;
bool _128;
frost$core$Bit _129;
bool _130;
frost$collections$HashSet* _132;
bool _133;
frost$core$Bit _134;
bool _135;
frost$core$Int _137;
frost$collections$CollectionView* _140;
$fn4 _141;
frost$core$Int _142;
frost$core$Int _143;
int64_t _146;
int64_t _147;
bool _148;
frost$core$Bit _149;
bool _151;
frost$collections$HashMap** _154;
frost$collections$HashMap* _155;
frost$collections$HashSet* _156;
bool _157;
frost$core$Bit _158;
bool _159;
frost$core$Int _161;
frost$collections$Iterable* _164;
$fn5 _165;
frost$collections$Iterator* _166;
$fn6 _167;
frost$core$Object* _168;
org$frostlang$frostc$pass$Analyzer$BlockExit _169;
org$frostlang$frostc$IR$Block$ID _170;
frost$collections$HashKey* _171;
frost$core$Object* _172;
org$frostlang$frostc$IR$Block* _173;
frost$core$Object* _175;
org$frostlang$frostc$IR$Block* _177;
frost$core$Object* _178;
frost$core$Object* _181;
frost$core$Object* _183;
frost$core$Object* _185;
frost$core$Object* _187;
org$frostlang$frostc$IR$Block* _190;
bool _191;
frost$core$Bit _192;
bool _193;
frost$core$Int _195;
org$frostlang$frostc$IR$Block* _199;
bool _200;
frost$core$Bit _201;
bool _202;
frost$core$Int _204;
org$frostlang$frostc$IR$Block* _207;
org$frostlang$frostc$LinkedList** _208;
org$frostlang$frostc$LinkedList* _209;
$fn7 _210;
frost$core$Object* _211;
org$frostlang$frostc$IR$Statement* _212;
frost$core$Int* _213;
frost$core$Int _214;
frost$core$Int _215;
int64_t _218;
int64_t _219;
bool _220;
frost$core$Bit _221;
bool _223;
org$frostlang$frostc$MethodPosition* _225;
org$frostlang$frostc$MethodPosition _226;
org$frostlang$frostc$IR$Block$ID* _228;
org$frostlang$frostc$IR$Block$ID _229;
org$frostlang$frostc$IR$Block$ID _232;
org$frostlang$frostc$IR$Block* _233;
org$frostlang$frostc$IR$Block$ID* _234;
org$frostlang$frostc$IR$Block$ID _235;
frost$core$Int _238;
frost$core$Int _239;
int64_t _242;
int64_t _243;
bool _244;
frost$core$Bit _245;
bool _248;
frost$core$Int _250;
org$frostlang$frostc$IR$Block* _254;
bool _255;
frost$core$Bit _256;
bool _257;
frost$core$Int _259;
org$frostlang$frostc$IR$Block* _262;
org$frostlang$frostc$LinkedList** _263;
org$frostlang$frostc$LinkedList* _264;
$fn8 _265;
org$frostlang$frostc$IR$Block* _268;
bool _269;
frost$core$Bit _270;
bool _271;
frost$core$Int _273;
org$frostlang$frostc$IR$Block* _276;
org$frostlang$frostc$LinkedList** _277;
org$frostlang$frostc$LinkedList* _278;
$fn9 _279;
org$frostlang$frostc$IR$Block* _282;
bool _283;
frost$core$Bit _284;
bool _285;
frost$core$Int _287;
org$frostlang$frostc$IR$Block* _290;
org$frostlang$frostc$LinkedList** _291;
org$frostlang$frostc$LinkedList* _292;
org$frostlang$frostc$IR$Block* _293;
org$frostlang$frostc$LinkedList** _294;
org$frostlang$frostc$LinkedList* _295;
$fn10 _296;
org$frostlang$frostc$IR$Block* _299;
bool _300;
frost$core$Bit _301;
bool _302;
frost$core$Int _304;
org$frostlang$frostc$IR$Block* _307;
org$frostlang$frostc$LinkedList** _308;
org$frostlang$frostc$LinkedList* _309;
org$frostlang$frostc$IR$Block* _310;
org$frostlang$frostc$LinkedList** _311;
org$frostlang$frostc$LinkedList* _312;
$fn11 _313;
org$frostlang$frostc$IR$Block* _316;
org$frostlang$frostc$LinkedList** _317;
org$frostlang$frostc$LinkedList* _318;
org$frostlang$frostc$IR$Statement* _319;
frost$core$Int _320;
org$frostlang$frostc$MethodPosition _321;
frost$core$Object* _323;
$fn12 _324;
frost$core$Object* _326;
frost$core$Bit _329;
frost$core$Object* _332;
org$frostlang$frostc$IR$Block* _334;
frost$core$Object* _335;
frost$collections$HashSet* _339;
frost$core$Object* _340;
org$frostlang$frostc$IR$Block* _343;
frost$core$Object* _344;
frost$core$Int _348;
int64_t _350;
int64_t _351;
int64_t _352;
frost$core$Int _353;
int64_t _355;
int64_t _356;
bool _357;
frost$core$Bit _358;
bool _359;
int64_t _361;
int64_t _362;
bool _363;
frost$core$Bit _364;
bool _365;
int64_t _367;
int64_t _368;
int64_t _369;
frost$core$Int _370;
int64_t _372;
int64_t _373;
bool _374;
frost$core$Bit _375;
bool _376;
int64_t _378;
int64_t _379;
bool _380;
frost$core$Bit _381;
bool _382;
int64_t _384;
int64_t _385;
int64_t _386;
frost$core$Int _387;
frost$core$Bit _391;
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
_90 = frost$core$Int64$init$frost$core$Int(_66);
_91 = _90.value;
_92 = _89[_91];
_93 = _92;
frost$core$Frost$ref$frost$core$Object$Q(_93);
_96 = ((org$frostlang$frostc$IR$Block*) _92);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
_98 = ((frost$core$Object*) _96);
frost$core$Frost$ref$frost$core$Object$Q(_98);
_100 = *(&local2);
_101 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_101);
*(&local2) = _96;
_104 = _92;
frost$core$Frost$unref$frost$core$Object$Q(_104);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:10
_107 = &param2->predecessors;
_108 = *_107;
_109 = *(&local2);
_110 = &_109->id;
_111 = *_110;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp17;
$tmp17 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Block$ID$wrapper), (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp17->value = _111;
_112 = ((frost$collections$HashKey*) $tmp17);
_113 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(_108, _112);
_114 = ((frost$collections$HashSet*) _113);
*(&local3) = ((frost$collections$HashSet*) NULL);
_116 = ((frost$core$Object*) _114);
frost$core$Frost$ref$frost$core$Object$Q(_116);
_118 = *(&local3);
_119 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_119);
*(&local3) = _114;
_122 = _113;
frost$core$Frost$unref$frost$core$Object$Q(_122);
_124 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_124);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:11
_127 = *(&local3);
_128 = _127 != NULL;
_129 = (frost$core$Bit) {_128};
_130 = _129.value;
if (_130) goto block17; else goto block16;
block17:;
_132 = *(&local3);
_133 = _132 != NULL;
_134 = (frost$core$Bit) {_133};
_135 = _134.value;
if (_135) goto block18; else goto block19;
block19:;
_137 = (frost$core$Int) {11u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _137, &$s19);
abort(); // unreachable
block18:;
_140 = ((frost$collections$CollectionView*) _132);
ITable* $tmp20 = _140->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp20 = $tmp20->next;
}
_141 = $tmp20->methods[0];
_142 = _141(_140);
_143 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MergeBlocks.frost:11:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_146 = _142.value;
_147 = _143.value;
_148 = _146 == _147;
_149 = (frost$core$Bit) {_148};
_151 = _149.value;
if (_151) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:12
_154 = &param2->blocks;
_155 = *_154;
_156 = *(&local3);
_157 = _156 != NULL;
_158 = (frost$core$Bit) {_157};
_159 = _158.value;
if (_159) goto block21; else goto block22;
block22:;
_161 = (frost$core$Int) {12u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s21, _161, &$s22);
abort(); // unreachable
block21:;
_164 = ((frost$collections$Iterable*) _156);
ITable* $tmp23 = _164->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp23 = $tmp23->next;
}
_165 = $tmp23->methods[0];
_166 = _165(_164);
ITable* $tmp24 = _166->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp24 = $tmp24->next;
}
_167 = $tmp24->methods[1];
_168 = _167(_166);
_169 = ((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) _168)->value;
_170 = _169.id;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp25;
$tmp25 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Block$ID$wrapper), (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp25->value = _170;
_171 = ((frost$collections$HashKey*) $tmp25);
_172 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(_155, _171);
_173 = ((org$frostlang$frostc$IR$Block*) _172);
*(&local4) = ((org$frostlang$frostc$IR$Block*) NULL);
_175 = ((frost$core$Object*) _173);
frost$core$Frost$ref$frost$core$Object$Q(_175);
_177 = *(&local4);
_178 = ((frost$core$Object*) _177);
frost$core$Frost$unref$frost$core$Object$Q(_178);
*(&local4) = _173;
_181 = _172;
frost$core$Frost$unref$frost$core$Object$Q(_181);
_183 = ((frost$core$Object*) _171);
frost$core$Frost$unref$frost$core$Object$Q(_183);
_185 = _168;
frost$core$Frost$unref$frost$core$Object$Q(_185);
_187 = ((frost$core$Object*) _166);
frost$core$Frost$unref$frost$core$Object$Q(_187);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:13
_190 = *(&local4);
_191 = _190 != NULL;
_192 = (frost$core$Bit) {_191};
_193 = _192.value;
if (_193) goto block23; else goto block24;
block24:;
_195 = (frost$core$Int) {13u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s26, _195);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:14
_199 = *(&local4);
_200 = _199 != NULL;
_201 = (frost$core$Bit) {_200};
_202 = _201.value;
if (_202) goto block25; else goto block26;
block26:;
_204 = (frost$core$Int) {14u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s27, _204, &$s28);
abort(); // unreachable
block25:;
_207 = _199;
_208 = &_207->statements;
_209 = *_208;
_210 = ($fn29) _209->$class->vtable[6];
_211 = _210(_209);
_212 = ((org$frostlang$frostc$IR$Statement*) _211);
_213 = &_212->$rawValue;
_214 = *_213;
_215 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MergeBlocks.frost:15:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_218 = _214.value;
_219 = _215.value;
_220 = _218 == _219;
_221 = (frost$core$Bit) {_220};
_223 = _221.value;
if (_223) goto block28; else goto block27;
block28:;
_225 = &_212->$data.$BRANCH.field0;
_226 = *_225;
*(&local5) = _226;
_228 = &_212->$data.$BRANCH.field1;
_229 = *_228;
*(&local6) = _229;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:16
_232 = *(&local6);
_233 = *(&local2);
_234 = &_233->id;
_235 = *_234;
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from MergeBlocks.frost:16:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:383
_238 = _232.value;
_239 = _235.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:383:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_242 = _238.value;
_243 = _239.value;
_244 = _242 == _243;
_245 = (frost$core$Bit) {_244};
_248 = _245.value;
if (_248) goto block32; else goto block33;
block33:;
_250 = (frost$core$Int) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s30, _250);
abort(); // unreachable
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:17
_254 = *(&local4);
_255 = _254 != NULL;
_256 = (frost$core$Bit) {_255};
_257 = _256.value;
if (_257) goto block34; else goto block35;
block35:;
_259 = (frost$core$Int) {17u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s31, _259, &$s32);
abort(); // unreachable
block34:;
_262 = _254;
_263 = &_262->statements;
_264 = *_263;
_265 = ($fn33) _264->$class->vtable[7];
_265(_264);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:18
_268 = *(&local4);
_269 = _268 != NULL;
_270 = (frost$core$Bit) {_269};
_271 = _270.value;
if (_271) goto block36; else goto block37;
block37:;
_273 = (frost$core$Int) {18u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s34, _273, &$s35);
abort(); // unreachable
block36:;
_276 = _268;
_277 = &_276->ids;
_278 = *_277;
_279 = ($fn36) _278->$class->vtable[7];
_279(_278);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:19
_282 = *(&local4);
_283 = _282 != NULL;
_284 = (frost$core$Bit) {_283};
_285 = _284.value;
if (_285) goto block38; else goto block39;
block39:;
_287 = (frost$core$Int) {19u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s37, _287, &$s38);
abort(); // unreachable
block38:;
_290 = _282;
_291 = &_290->statements;
_292 = *_291;
_293 = *(&local2);
_294 = &_293->statements;
_295 = *_294;
_296 = ($fn39) _292->$class->vtable[5];
_296(_292, _295);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:20
_299 = *(&local4);
_300 = _299 != NULL;
_301 = (frost$core$Bit) {_300};
_302 = _301.value;
if (_302) goto block40; else goto block41;
block41:;
_304 = (frost$core$Int) {20u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s40, _304, &$s41);
abort(); // unreachable
block40:;
_307 = _299;
_308 = &_307->ids;
_309 = *_308;
_310 = *(&local2);
_311 = &_310->ids;
_312 = *_311;
_313 = ($fn42) _309->$class->vtable[5];
_313(_309, _312);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:21
_316 = *(&local2);
_317 = &_316->statements;
_318 = *_317;
_319 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_320 = (frost$core$Int) {28u};
_321 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition(_319, _320, _321);
_323 = ((frost$core$Object*) _319);
_324 = ($fn43) _318->$class->vtable[4];
_324(_318, _323);
_326 = ((frost$core$Object*) _319);
frost$core$Frost$unref$frost$core$Object$Q(_326);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:22
_329 = (frost$core$Bit) {true};
*(&local0) = _329;
goto block27;
block27:;
_332 = _211;
frost$core$Frost$unref$frost$core$Object$Q(_332);
_334 = *(&local4);
_335 = ((frost$core$Object*) _334);
frost$core$Frost$unref$frost$core$Object$Q(_335);
*(&local4) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block16;
block16:;
_339 = *(&local3);
_340 = ((frost$core$Object*) _339);
frost$core$Frost$unref$frost$core$Object$Q(_340);
*(&local3) = ((frost$collections$HashSet*) NULL);
_343 = *(&local2);
_344 = ((frost$core$Object*) _343);
frost$core$Frost$unref$frost$core$Object$Q(_344);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
_348 = *(&local1);
if (_35) goto block43; else goto block44;
block43:;
_350 = _20.value;
_351 = _348.value;
_352 = _350 - _351;
_353 = (frost$core$Int) {_352};
if (_29) goto block45; else goto block46;
block45:;
_355 = _353.value;
_356 = _21.value;
_357 = _355 >= _356;
_358 = (frost$core$Bit) {_357};
_359 = _358.value;
if (_359) goto block42; else goto block3;
block46:;
_361 = _353.value;
_362 = _21.value;
_363 = _361 > _362;
_364 = (frost$core$Bit) {_363};
_365 = _364.value;
if (_365) goto block42; else goto block3;
block44:;
_367 = _348.value;
_368 = _20.value;
_369 = _367 - _368;
_370 = (frost$core$Int) {_369};
if (_29) goto block47; else goto block48;
block47:;
_372 = _370.value;
_373 = _26.value;
_374 = _372 >= _373;
_375 = (frost$core$Bit) {_374};
_376 = _375.value;
if (_376) goto block42; else goto block3;
block48:;
_378 = _370.value;
_379 = _26.value;
_380 = _378 > _379;
_381 = (frost$core$Bit) {_380};
_382 = _381.value;
if (_382) goto block42; else goto block3;
block42:;
_384 = _348.value;
_385 = _21.value;
_386 = _384 + _385;
_387 = (frost$core$Int) {_386};
*(&local1) = _387;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:27
_391 = *(&local0);
return _391;

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

