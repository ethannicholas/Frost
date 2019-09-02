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
#include "org/frostlang/frostc/Position.h"
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
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -775704626125802412, NULL };
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

frost$core$Bit org$frostlang$frostc$pass$MergeBlocks$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit(org$frostlang$frostc$pass$MergeBlocks* param0, org$frostlang$frostc$IR* param1, org$frostlang$frostc$pass$Analyzer* param2) {

frost$core$Bit local0;
frost$core$Int local1;
org$frostlang$frostc$IR$Block* local2 = NULL;
frost$collections$HashSet* local3 = NULL;
org$frostlang$frostc$IR$Block* local4 = NULL;
org$frostlang$frostc$Position local5;
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
frost$collections$Array* _66;
frost$core$Int _67;
frost$core$Int _69;
int64_t _70;
int64_t _71;
bool _72;
frost$core$Bit _73;
bool _74;
frost$collections$CollectionView* _76;
$fn3 _77;
frost$core$Int _78;
int64_t _79;
int64_t _80;
bool _81;
frost$core$Bit _82;
bool _83;
frost$core$Int _85;
frost$core$Object*** _89;
frost$core$Object** _90;
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
frost$collections$HashMap* _110;
org$frostlang$frostc$IR$Block* _111;
org$frostlang$frostc$IR$Block$ID* _112;
org$frostlang$frostc$IR$Block$ID _113;
frost$collections$HashKey* _114;
frost$core$Object* _115;
frost$collections$HashSet* _116;
frost$core$Object* _118;
frost$collections$HashSet* _120;
frost$core$Object* _121;
frost$core$Object* _124;
frost$core$Object* _126;
frost$collections$HashSet* _129;
bool _130;
frost$core$Bit _131;
bool _132;
frost$collections$HashSet* _134;
bool _135;
frost$core$Bit _136;
bool _137;
frost$core$Int _139;
frost$collections$CollectionView* _142;
$fn4 _143;
frost$core$Int _144;
frost$core$Int _145;
int64_t _148;
int64_t _149;
bool _150;
frost$core$Bit _151;
bool _153;
frost$collections$HashMap** _156;
frost$collections$HashMap* _157;
frost$collections$HashMap* _158;
frost$collections$HashSet* _159;
bool _160;
frost$core$Bit _161;
bool _162;
frost$core$Int _164;
frost$collections$Iterable* _167;
$fn5 _168;
frost$collections$Iterator* _169;
frost$collections$Iterator* _170;
frost$collections$Iterator* _171;
$fn6 _172;
frost$core$Object* _173;
org$frostlang$frostc$pass$Analyzer$BlockExit _174;
org$frostlang$frostc$IR$Block$ID _175;
frost$collections$HashKey* _176;
frost$core$Object* _177;
org$frostlang$frostc$IR$Block* _178;
frost$core$Object* _180;
org$frostlang$frostc$IR$Block* _182;
frost$core$Object* _183;
frost$core$Object* _186;
frost$core$Object* _188;
frost$core$Object* _190;
frost$core$Object* _192;
org$frostlang$frostc$IR$Block* _195;
bool _196;
frost$core$Bit _197;
bool _198;
frost$core$Int _200;
org$frostlang$frostc$IR$Block* _204;
bool _205;
frost$core$Bit _206;
bool _207;
frost$core$Int _209;
org$frostlang$frostc$IR$Block* _212;
org$frostlang$frostc$LinkedList** _213;
org$frostlang$frostc$LinkedList* _214;
org$frostlang$frostc$LinkedList* _215;
$fn7 _216;
frost$core$Object* _217;
org$frostlang$frostc$IR$Statement* _218;
frost$core$Int* _219;
frost$core$Int _220;
frost$core$Int _221;
int64_t _224;
int64_t _225;
bool _226;
frost$core$Bit _227;
bool _229;
org$frostlang$frostc$Position* _231;
org$frostlang$frostc$Position _232;
org$frostlang$frostc$IR$Block$ID* _234;
org$frostlang$frostc$IR$Block$ID _235;
org$frostlang$frostc$IR$Block$ID _238;
org$frostlang$frostc$IR$Block* _239;
org$frostlang$frostc$IR$Block$ID* _240;
org$frostlang$frostc$IR$Block$ID _241;
frost$core$Int _244;
frost$core$Int _245;
int64_t _248;
int64_t _249;
bool _250;
frost$core$Bit _251;
bool _254;
frost$core$Int _256;
org$frostlang$frostc$IR$Block* _260;
bool _261;
frost$core$Bit _262;
bool _263;
frost$core$Int _265;
org$frostlang$frostc$IR$Block* _268;
org$frostlang$frostc$LinkedList** _269;
org$frostlang$frostc$LinkedList* _270;
org$frostlang$frostc$LinkedList* _271;
$fn8 _272;
org$frostlang$frostc$IR$Block* _275;
bool _276;
frost$core$Bit _277;
bool _278;
frost$core$Int _280;
org$frostlang$frostc$IR$Block* _283;
org$frostlang$frostc$LinkedList** _284;
org$frostlang$frostc$LinkedList* _285;
org$frostlang$frostc$LinkedList* _286;
$fn9 _287;
org$frostlang$frostc$IR$Block* _290;
bool _291;
frost$core$Bit _292;
bool _293;
frost$core$Int _295;
org$frostlang$frostc$IR$Block* _298;
org$frostlang$frostc$LinkedList** _299;
org$frostlang$frostc$LinkedList* _300;
org$frostlang$frostc$LinkedList* _301;
org$frostlang$frostc$IR$Block* _302;
org$frostlang$frostc$LinkedList** _303;
org$frostlang$frostc$LinkedList* _304;
org$frostlang$frostc$LinkedList* _305;
$fn10 _306;
org$frostlang$frostc$IR$Block* _309;
bool _310;
frost$core$Bit _311;
bool _312;
frost$core$Int _314;
org$frostlang$frostc$IR$Block* _317;
org$frostlang$frostc$LinkedList** _318;
org$frostlang$frostc$LinkedList* _319;
org$frostlang$frostc$LinkedList* _320;
org$frostlang$frostc$IR$Block* _321;
org$frostlang$frostc$LinkedList** _322;
org$frostlang$frostc$LinkedList* _323;
org$frostlang$frostc$LinkedList* _324;
$fn11 _325;
org$frostlang$frostc$IR$Block* _328;
org$frostlang$frostc$LinkedList** _329;
org$frostlang$frostc$LinkedList* _330;
org$frostlang$frostc$LinkedList* _331;
org$frostlang$frostc$IR$Statement* _332;
frost$core$Int _333;
org$frostlang$frostc$Position _334;
frost$core$Object* _336;
$fn12 _337;
frost$core$Object* _339;
frost$core$Bit _342;
frost$core$Object* _345;
org$frostlang$frostc$IR$Block* _347;
frost$core$Object* _348;
frost$collections$HashSet* _352;
frost$core$Object* _353;
org$frostlang$frostc$IR$Block* _356;
frost$core$Object* _357;
frost$core$Int _361;
int64_t _363;
int64_t _364;
int64_t _365;
frost$core$Int _366;
int64_t _368;
int64_t _369;
bool _370;
frost$core$Bit _371;
bool _372;
int64_t _374;
int64_t _375;
bool _376;
frost$core$Bit _377;
bool _378;
int64_t _380;
int64_t _381;
int64_t _382;
frost$core$Int _383;
int64_t _385;
int64_t _386;
bool _387;
frost$core$Bit _388;
bool _389;
int64_t _391;
int64_t _392;
bool _393;
frost$core$Bit _394;
bool _395;
int64_t _397;
int64_t _398;
int64_t _399;
frost$core$Int _400;
frost$core$Bit _404;
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:87
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
_66 = _65;
_67 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from MergeBlocks.frost:9:31
_69 = (frost$core$Int) {0u};
_70 = _67.value;
_71 = _69.value;
_72 = _70 >= _71;
_73 = (frost$core$Bit) {_72};
_74 = _73.value;
if (_74) goto block14; else goto block13;
block14:;
_76 = ((frost$collections$CollectionView*) _66);
ITable* $tmp14 = _76->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp14 = $tmp14->next;
}
_77 = $tmp14->methods[0];
_78 = _77(_76);
_79 = _67.value;
_80 = _78.value;
_81 = _79 < _80;
_82 = (frost$core$Bit) {_81};
_83 = _82.value;
if (_83) goto block12; else goto block13;
block13:;
_85 = (frost$core$Int) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s15, _85, &$s16);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
_89 = &_66->data;
_90 = *_89;
_91 = frost$core$Int64$init$frost$core$Int(_67);
_92 = _91.value;
_93 = _90[_92];
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
_110 = _109;
_111 = *(&local2);
_112 = &_111->id;
_113 = *_112;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp17;
$tmp17 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp17->value = _113;
_114 = ((frost$collections$HashKey*) $tmp17);
_115 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(_110, _114);
_116 = ((frost$collections$HashSet*) _115);
*(&local3) = ((frost$collections$HashSet*) NULL);
_118 = ((frost$core$Object*) _116);
frost$core$Frost$ref$frost$core$Object$Q(_118);
_120 = *(&local3);
_121 = ((frost$core$Object*) _120);
frost$core$Frost$unref$frost$core$Object$Q(_121);
*(&local3) = _116;
_124 = _115;
frost$core$Frost$unref$frost$core$Object$Q(_124);
_126 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_126);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:11
_129 = *(&local3);
_130 = _129 != NULL;
_131 = (frost$core$Bit) {_130};
_132 = _131.value;
if (_132) goto block17; else goto block16;
block17:;
_134 = *(&local3);
_135 = _134 != NULL;
_136 = (frost$core$Bit) {_135};
_137 = _136.value;
if (_137) goto block18; else goto block19;
block19:;
_139 = (frost$core$Int) {11u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _139, &$s19);
abort(); // unreachable
block18:;
_142 = ((frost$collections$CollectionView*) _134);
ITable* $tmp20 = _142->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp20 = $tmp20->next;
}
_143 = $tmp20->methods[0];
_144 = _143(_142);
_145 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MergeBlocks.frost:11:45
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_148 = _144.value;
_149 = _145.value;
_150 = _148 == _149;
_151 = (frost$core$Bit) {_150};
_153 = _151.value;
if (_153) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:12
_156 = &param2->blocks;
_157 = *_156;
_158 = _157;
_159 = *(&local3);
_160 = _159 != NULL;
_161 = (frost$core$Bit) {_160};
_162 = _161.value;
if (_162) goto block21; else goto block22;
block22:;
_164 = (frost$core$Int) {12u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s21, _164, &$s22);
abort(); // unreachable
block21:;
_167 = ((frost$collections$Iterable*) _159);
ITable* $tmp23 = _167->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp23 = $tmp23->next;
}
_168 = $tmp23->methods[0];
_169 = _168(_167);
_170 = _169;
_171 = _170;
ITable* $tmp24 = _171->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp24 = $tmp24->next;
}
_172 = $tmp24->methods[1];
_173 = _172(_171);
_174 = ((org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper*) _173)->value;
_175 = _174.id;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp25;
$tmp25 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp25->value = _175;
_176 = ((frost$collections$HashKey*) $tmp25);
_177 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(_158, _176);
_178 = ((org$frostlang$frostc$IR$Block*) _177);
*(&local4) = ((org$frostlang$frostc$IR$Block*) NULL);
_180 = ((frost$core$Object*) _178);
frost$core$Frost$ref$frost$core$Object$Q(_180);
_182 = *(&local4);
_183 = ((frost$core$Object*) _182);
frost$core$Frost$unref$frost$core$Object$Q(_183);
*(&local4) = _178;
_186 = _177;
frost$core$Frost$unref$frost$core$Object$Q(_186);
_188 = ((frost$core$Object*) _176);
frost$core$Frost$unref$frost$core$Object$Q(_188);
_190 = _173;
frost$core$Frost$unref$frost$core$Object$Q(_190);
_192 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_192);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:13
_195 = *(&local4);
_196 = _195 != NULL;
_197 = (frost$core$Bit) {_196};
_198 = _197.value;
if (_198) goto block23; else goto block24;
block24:;
_200 = (frost$core$Int) {13u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s26, _200);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:14
_204 = *(&local4);
_205 = _204 != NULL;
_206 = (frost$core$Bit) {_205};
_207 = _206.value;
if (_207) goto block25; else goto block26;
block26:;
_209 = (frost$core$Int) {14u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s27, _209, &$s28);
abort(); // unreachable
block25:;
_212 = _204;
_213 = &_212->statements;
_214 = *_213;
_215 = _214;
_216 = ($fn29) _215->$class->vtable[6];
_217 = _216(_215);
_218 = ((org$frostlang$frostc$IR$Statement*) _217);
_219 = &_218->$rawValue;
_220 = *_219;
_221 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MergeBlocks.frost:15:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_224 = _220.value;
_225 = _221.value;
_226 = _224 == _225;
_227 = (frost$core$Bit) {_226};
_229 = _227.value;
if (_229) goto block28; else goto block27;
block28:;
_231 = (org$frostlang$frostc$Position*) (_218->$data + 0);
_232 = *_231;
*(&local5) = _232;
_234 = (org$frostlang$frostc$IR$Block$ID*) (_218->$data + 24);
_235 = *_234;
*(&local6) = _235;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:16
_238 = *(&local6);
_239 = *(&local2);
_240 = &_239->id;
_241 = *_240;
// begin inline call to function org.frostlang.frostc.IR.Block.ID.=(other:org.frostlang.frostc.IR.Block.ID):frost.core.Bit from MergeBlocks.frost:16:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:382
_244 = _238.value;
_245 = _241.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:382:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_248 = _244.value;
_249 = _245.value;
_250 = _248 == _249;
_251 = (frost$core$Bit) {_250};
_254 = _251.value;
if (_254) goto block32; else goto block33;
block33:;
_256 = (frost$core$Int) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s30, _256);
abort(); // unreachable
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:17
_260 = *(&local4);
_261 = _260 != NULL;
_262 = (frost$core$Bit) {_261};
_263 = _262.value;
if (_263) goto block34; else goto block35;
block35:;
_265 = (frost$core$Int) {17u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s31, _265, &$s32);
abort(); // unreachable
block34:;
_268 = _260;
_269 = &_268->statements;
_270 = *_269;
_271 = _270;
_272 = ($fn33) _271->$class->vtable[7];
_272(_271);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:18
_275 = *(&local4);
_276 = _275 != NULL;
_277 = (frost$core$Bit) {_276};
_278 = _277.value;
if (_278) goto block36; else goto block37;
block37:;
_280 = (frost$core$Int) {18u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s34, _280, &$s35);
abort(); // unreachable
block36:;
_283 = _275;
_284 = &_283->ids;
_285 = *_284;
_286 = _285;
_287 = ($fn36) _286->$class->vtable[7];
_287(_286);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:19
_290 = *(&local4);
_291 = _290 != NULL;
_292 = (frost$core$Bit) {_291};
_293 = _292.value;
if (_293) goto block38; else goto block39;
block39:;
_295 = (frost$core$Int) {19u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s37, _295, &$s38);
abort(); // unreachable
block38:;
_298 = _290;
_299 = &_298->statements;
_300 = *_299;
_301 = _300;
_302 = *(&local2);
_303 = &_302->statements;
_304 = *_303;
_305 = _304;
_306 = ($fn39) _301->$class->vtable[5];
_306(_301, _305);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:20
_309 = *(&local4);
_310 = _309 != NULL;
_311 = (frost$core$Bit) {_310};
_312 = _311.value;
if (_312) goto block40; else goto block41;
block41:;
_314 = (frost$core$Int) {20u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s40, _314, &$s41);
abort(); // unreachable
block40:;
_317 = _309;
_318 = &_317->ids;
_319 = *_318;
_320 = _319;
_321 = *(&local2);
_322 = &_321->ids;
_323 = *_322;
_324 = _323;
_325 = ($fn42) _320->$class->vtable[5];
_325(_320, _324);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:21
_328 = *(&local2);
_329 = &_328->statements;
_330 = *_329;
_331 = _330;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
_332 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_333 = (frost$core$Int) {28u};
_334 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position(_332, _333, _334);
_336 = ((frost$core$Object*) _332);
_337 = ($fn43) _331->$class->vtable[4];
_337(_331, _336);
_339 = ((frost$core$Object*) _332);
frost$core$Frost$unref$frost$core$Object$Q(_339);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:22
_342 = (frost$core$Bit) {true};
*(&local0) = _342;
goto block27;
block27:;
_345 = _217;
frost$core$Frost$unref$frost$core$Object$Q(_345);
_347 = *(&local4);
_348 = ((frost$core$Object*) _347);
frost$core$Frost$unref$frost$core$Object$Q(_348);
*(&local4) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block16;
block16:;
_352 = *(&local3);
_353 = ((frost$core$Object*) _352);
frost$core$Frost$unref$frost$core$Object$Q(_353);
*(&local3) = ((frost$collections$HashSet*) NULL);
_356 = *(&local2);
_357 = ((frost$core$Object*) _356);
frost$core$Frost$unref$frost$core$Object$Q(_357);
*(&local2) = ((org$frostlang$frostc$IR$Block*) NULL);
_361 = *(&local1);
if (_35) goto block43; else goto block44;
block43:;
_363 = _20.value;
_364 = _361.value;
_365 = _363 - _364;
_366 = (frost$core$Int) {_365};
if (_29) goto block45; else goto block46;
block45:;
_368 = _366.value;
_369 = _21.value;
_370 = _368 >= _369;
_371 = (frost$core$Bit) {_370};
_372 = _371.value;
if (_372) goto block42; else goto block3;
block46:;
_374 = _366.value;
_375 = _21.value;
_376 = _374 > _375;
_377 = (frost$core$Bit) {_376};
_378 = _377.value;
if (_378) goto block42; else goto block3;
block44:;
_380 = _361.value;
_381 = _20.value;
_382 = _380 - _381;
_383 = (frost$core$Int) {_382};
if (_29) goto block47; else goto block48;
block47:;
_385 = _383.value;
_386 = _26.value;
_387 = _385 >= _386;
_388 = (frost$core$Bit) {_387};
_389 = _388.value;
if (_389) goto block42; else goto block3;
block48:;
_391 = _383.value;
_392 = _26.value;
_393 = _391 > _392;
_394 = (frost$core$Bit) {_393};
_395 = _394.value;
if (_395) goto block42; else goto block3;
block42:;
_397 = _361.value;
_398 = _21.value;
_399 = _397 + _398;
_400 = (frost$core$Int) {_399};
*(&local1) = _400;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:27
_404 = *(&local0);
return _404;

}
void org$frostlang$frostc$pass$MergeBlocks$init(org$frostlang$frostc$pass$MergeBlocks* param0) {

return;

}
void org$frostlang$frostc$pass$MergeBlocks$cleanup(org$frostlang$frostc$pass$MergeBlocks* param0) {

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/MergeBlocks.frost:5
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

