#include "org/frostlang/frostc/expression/ArrayLiteral.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "frost/collections/ListView.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/UInt64.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/expression/Call.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$ArrayLiteral$class_type org$frostlang$frostc$expression$ArrayLiteral$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$ArrayLiteral$cleanup} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn3)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn5)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c", 44, -2744936157929090312, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, -3028311162545364143, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x20\x74\x79\x70\x65\x20\x6f\x66\x20\x61\x72\x72\x61\x79\x20\x6c\x69\x74\x65\x72\x61\x6c", 38, -8359935776264034572, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, -3028311162545364143, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, -3028311162545364143, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 132, 2551870669144231736, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, -3028311162545364143, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x64\x64", 3, -1798129113975691692, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, -3028311162545364143, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 132, 2551870669144231736, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, -3028311162545364143, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 132, 2551870669144231736, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, -3028311162545364143, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x6d", 4, 9188557619686916277, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$ArrayLiteral$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$FixedArray* param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

org$frostlang$frostc$Pair* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$IR$Value* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
frost$core$Int* _3;
frost$core$Int _4;
frost$core$Int _5;
int64_t _8;
int64_t _9;
bool _10;
frost$core$Bit _11;
bool _13;
org$frostlang$frostc$Type** _15;
org$frostlang$frostc$Type* _16;
frost$core$Object* _18;
org$frostlang$frostc$Type* _20;
frost$core$Object* _21;
frost$core$Bit* _24;
frost$core$Bit _25;
org$frostlang$frostc$Type* _27;
org$frostlang$frostc$Pair* _28;
frost$core$Object* _29;
org$frostlang$frostc$Pair* _31;
frost$core$Object* _32;
frost$core$Object* _35;
org$frostlang$frostc$Pair* _38;
bool _39;
frost$core$Bit _40;
bool _41;
org$frostlang$frostc$ASTNode* _44;
frost$core$Int _45;
org$frostlang$frostc$Type* _47;
frost$core$Object* _49;
org$frostlang$frostc$Type* _51;
frost$core$Object* _52;
frost$core$Object* _55;
frost$core$Object* _57;
org$frostlang$frostc$Type* _60;
bool _61;
frost$core$Bit _62;
bool _63;
org$frostlang$frostc$Type* _66;
bool _67;
frost$core$Bit _68;
bool _69;
frost$core$Int _71;
org$frostlang$frostc$Type* _74;
org$frostlang$frostc$Pair* _75;
frost$core$Object* _76;
org$frostlang$frostc$Pair* _78;
frost$core$Object* _79;
frost$core$Object* _82;
org$frostlang$frostc$Pair* _86;
bool _87;
frost$core$Bit _88;
bool _89;
frost$core$Object* _94;
org$frostlang$frostc$Type* _96;
frost$core$Object* _97;
org$frostlang$frostc$Type* _100;
frost$core$Object* _101;
org$frostlang$frostc$Pair* _104;
frost$core$Object* _105;
org$frostlang$frostc$Type* _109;
frost$core$Object* _110;
org$frostlang$frostc$Type* _114;
frost$core$Object* _115;
org$frostlang$frostc$ASTNode* _120;
frost$core$Int _121;
org$frostlang$frostc$Type* _123;
frost$core$Object* _125;
org$frostlang$frostc$Type* _127;
frost$core$Object* _128;
frost$core$Object* _131;
frost$core$Object* _133;
org$frostlang$frostc$Type* _136;
bool _137;
frost$core$Bit _138;
bool _139;
frost$core$Object* _142;
org$frostlang$frostc$Type* _144;
frost$core$Object* _145;
org$frostlang$frostc$Pair* _148;
frost$core$Object* _149;
org$frostlang$frostc$Type* _154;
bool _155;
frost$core$Bit _156;
bool _157;
frost$core$Int _159;
org$frostlang$frostc$Type* _162;
org$frostlang$frostc$Pair* _163;
frost$core$Object* _164;
org$frostlang$frostc$Pair* _166;
frost$core$Object* _167;
frost$core$Object* _170;
org$frostlang$frostc$Type* _172;
frost$core$Object* _173;
org$frostlang$frostc$Pair* _178;
bool _179;
frost$core$Bit _180;
bool _181;
frost$core$Int _183;
org$frostlang$frostc$Pair* _186;
frost$core$Object** _187;
frost$core$Object* _188;
org$frostlang$frostc$Type* _189;
org$frostlang$frostc$Type** _192;
org$frostlang$frostc$Type* _193;
frost$collections$Array* _194;
frost$collections$Array* _195;
frost$core$Int _196;
frost$collections$Array* _198;
frost$core$Object* _199;
frost$collections$ListView* _201;
org$frostlang$frostc$Type* _202;
frost$core$Object* _203;
frost$core$Object* _205;
frost$core$Object* _207;
frost$core$Object* _211;
org$frostlang$frostc$Type* _213;
frost$core$Object* _214;
frost$core$Object* _217;
org$frostlang$frostc$Type* _220;
org$frostlang$frostc$IR$Value* _223;
frost$core$Int _224;
org$frostlang$frostc$Type** _227;
org$frostlang$frostc$Type* _228;
frost$collections$Array* _229;
frost$collections$Array* _230;
frost$core$Int _231;
frost$collections$Array* _233;
frost$core$Object* _234;
frost$collections$ListView* _236;
org$frostlang$frostc$Type* _237;
frost$core$Object* _238;
frost$core$Object* _240;
frost$core$Object* _242;
frost$core$Object* _246;
frost$core$Object* _248;
frost$core$Object* _250;
frost$collections$Array* _253;
frost$collections$Array* _254;
frost$core$Int _255;
frost$collections$Array* _257;
org$frostlang$frostc$ASTNode* _258;
frost$core$Int _259;
frost$collections$CollectionView* _260;
$fn2 _261;
frost$core$Int _262;
int64_t _265;
uint64_t _266;
frost$core$UInt64 _267;
frost$core$Object* _270;
frost$collections$ListView* _272;
org$frostlang$frostc$Compiler$TypeContext* _273;
frost$core$Int _274;
org$frostlang$frostc$IR$Value* _276;
frost$core$Object* _278;
org$frostlang$frostc$IR$Value* _280;
frost$core$Object* _281;
frost$core$Object* _284;
frost$core$Object* _286;
frost$core$Object* _288;
frost$core$Object* _290;
frost$core$Object* _292;
org$frostlang$frostc$IR$Value* _295;
bool _296;
frost$core$Bit _297;
bool _298;
frost$core$Object* _301;
org$frostlang$frostc$IR$Value* _303;
frost$core$Object* _304;
org$frostlang$frostc$Type* _307;
frost$core$Object* _308;
org$frostlang$frostc$Pair* _311;
frost$core$Object* _312;
frost$collections$Iterable* _317;
frost$collections$Iterable* _318;
$fn3 _319;
frost$collections$Iterator* _320;
frost$collections$Iterator* _321;
frost$collections$Iterator* _323;
$fn4 _324;
frost$core$Bit _325;
bool _326;
frost$collections$Iterator* _329;
$fn5 _330;
frost$core$Object* _331;
org$frostlang$frostc$ASTNode* _332;
frost$core$Object* _333;
org$frostlang$frostc$ASTNode* _335;
frost$core$Object* _336;
org$frostlang$frostc$IR$Value* _340;
bool _341;
frost$core$Bit _342;
bool _343;
frost$core$Int _345;
org$frostlang$frostc$IR$Value* _348;
frost$collections$Array* _349;
frost$collections$Array* _350;
frost$core$Int _351;
frost$collections$Array* _353;
org$frostlang$frostc$ASTNode* _354;
frost$core$Object* _355;
frost$collections$ListView* _357;
org$frostlang$frostc$Compiler$TypeContext* _358;
frost$core$Int _359;
org$frostlang$frostc$IR$Value* _361;
frost$core$Object* _362;
frost$core$Object* _364;
frost$core$Object* _366;
frost$core$Object* _368;
org$frostlang$frostc$ASTNode* _370;
frost$core$Object* _371;
frost$core$Object* _375;
org$frostlang$frostc$Pair* _378;
bool _379;
frost$core$Bit _380;
bool _381;
frost$core$Int _383;
org$frostlang$frostc$Pair* _386;
frost$core$Object** _387;
frost$core$Object* _388;
frost$core$Bit _389;
bool _392;
bool _393;
frost$core$Bit _394;
bool _396;
org$frostlang$frostc$Pair* _399;
bool _400;
frost$core$Bit _401;
bool _402;
frost$core$Int _404;
org$frostlang$frostc$Pair* _407;
frost$core$Object** _408;
frost$core$Object* _409;
org$frostlang$frostc$Type* _410;
org$frostlang$frostc$Type** _413;
org$frostlang$frostc$Type* _414;
frost$collections$Array* _415;
frost$collections$Array* _416;
frost$core$Int _417;
frost$collections$Array* _419;
frost$core$Object* _420;
frost$collections$ListView* _422;
org$frostlang$frostc$Type* _423;
frost$core$Object* _424;
frost$core$Object* _426;
frost$core$Object* _428;
org$frostlang$frostc$IR$Value* _433;
frost$core$Int _434;
org$frostlang$frostc$Type** _437;
org$frostlang$frostc$Type* _438;
frost$collections$Array* _439;
frost$collections$Array* _440;
frost$core$Int _441;
frost$collections$Array* _443;
frost$core$Object* _444;
frost$collections$ListView* _446;
org$frostlang$frostc$Type* _447;
frost$core$Object* _448;
frost$core$Object* _450;
frost$core$Object* _452;
frost$core$Object* _456;
frost$core$Object* _458;
frost$core$Object* _460;
frost$collections$Array* _463;
frost$collections$Array* _464;
frost$core$Int _465;
frost$collections$Array* _467;
org$frostlang$frostc$ASTNode* _468;
frost$core$Int _469;
org$frostlang$frostc$IR$Value* _470;
bool _471;
frost$core$Bit _472;
bool _473;
frost$core$Int _475;
org$frostlang$frostc$IR$Value* _478;
frost$core$Object* _480;
frost$collections$ListView* _482;
org$frostlang$frostc$Compiler$TypeContext* _483;
frost$core$Int _484;
org$frostlang$frostc$IR$Value* _486;
frost$core$Object* _487;
org$frostlang$frostc$IR$Value* _489;
frost$core$Object* _490;
frost$core$Object* _493;
frost$core$Object* _495;
frost$core$Object* _497;
frost$core$Object* _499;
frost$core$Object* _501;
frost$core$Object* _503;
org$frostlang$frostc$IR$Value* _506;
bool _507;
frost$core$Bit _508;
bool _509;
frost$core$Object* _512;
org$frostlang$frostc$IR$Value* _514;
frost$core$Object* _515;
org$frostlang$frostc$Type* _518;
frost$core$Object* _519;
org$frostlang$frostc$Pair* _522;
frost$core$Object* _523;
org$frostlang$frostc$IR$Value* _529;
org$frostlang$frostc$IR$Value* _530;
frost$core$Object* _531;
frost$core$Object* _533;
org$frostlang$frostc$IR$Value* _535;
frost$core$Object* _536;
org$frostlang$frostc$Type* _539;
frost$core$Object* _540;
org$frostlang$frostc$Pair* _543;
frost$core$Object* _544;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:16
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:17
_3 = &param3->$rawValue;
_4 = *_3;
_5 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ArrayLiteral.frost:18:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_8 = _4.value;
_9 = _5.value;
_10 = _8 == _9;
_11 = (frost$core$Bit) {_10};
_13 = _11.value;
if (_13) goto block2; else goto block3;
block2:;
_15 = (org$frostlang$frostc$Type**) (param3->$data + 0);
_16 = *_15;
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
_18 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = *(&local1);
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
*(&local1) = _16;
_24 = (frost$core$Bit*) (param3->$data + 8);
_25 = *_24;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:19
_27 = *(&local1);
_28 = org$frostlang$frostc$Compiler$getListType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$Type$GT$Q(param0, _27);
_29 = ((frost$core$Object*) _28);
frost$core$Frost$ref$frost$core$Object$Q(_29);
_31 = *(&local0);
_32 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_32);
*(&local0) = _28;
_35 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_35);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:20
_38 = *(&local0);
_39 = _38 == NULL;
_40 = (frost$core$Bit) {_39};
_41 = _40.value;
if (_41) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:23
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
_44 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_45 = (frost$core$Int) {1u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(_44, _45, param1, param2);
_47 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, _44);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
_49 = ((frost$core$Object*) _47);
frost$core$Frost$ref$frost$core$Object$Q(_49);
_51 = *(&local2);
_52 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_52);
*(&local2) = _47;
_55 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_55);
_57 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_57);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:24
_60 = *(&local2);
_61 = _60 != NULL;
_62 = (frost$core$Bit) {_61};
_63 = _62.value;
if (_63) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:25
_66 = *(&local2);
_67 = _66 != NULL;
_68 = (frost$core$Bit) {_67};
_69 = _68.value;
if (_69) goto block9; else goto block10;
block10:;
_71 = (frost$core$Int) {25u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _71, &$s7);
abort(); // unreachable
block9:;
_74 = _66;
_75 = org$frostlang$frostc$Compiler$getListType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$Type$GT$Q(param0, _74);
_76 = ((frost$core$Object*) _75);
frost$core$Frost$ref$frost$core$Object$Q(_76);
_78 = *(&local0);
_79 = ((frost$core$Object*) _78);
frost$core$Frost$unref$frost$core$Object$Q(_79);
*(&local0) = _75;
_82 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_82);
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:27
_86 = *(&local0);
_87 = _86 == NULL;
_88 = (frost$core$Bit) {_87};
_89 = _88.value;
if (_89) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:28
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s8);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:29
_94 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_94);
_96 = *(&local2);
_97 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_97);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
_100 = *(&local1);
_101 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_101);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
_104 = *(&local0);
_105 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_105);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block12:;
_109 = *(&local2);
_110 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_110);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block6;
block6:;
_114 = *(&local1);
_115 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_115);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:34
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
_120 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_121 = (frost$core$Int) {1u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(_120, _121, param1, param2);
_123 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, _120);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
_125 = ((frost$core$Object*) _123);
frost$core$Frost$ref$frost$core$Object$Q(_125);
_127 = *(&local3);
_128 = ((frost$core$Object*) _127);
frost$core$Frost$unref$frost$core$Object$Q(_128);
*(&local3) = _123;
_131 = ((frost$core$Object*) _123);
frost$core$Frost$unref$frost$core$Object$Q(_131);
_133 = ((frost$core$Object*) _120);
frost$core$Frost$unref$frost$core$Object$Q(_133);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:35
_136 = *(&local3);
_137 = _136 == NULL;
_138 = (frost$core$Bit) {_137};
_139 = _138.value;
if (_139) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:36
_142 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_142);
_144 = *(&local3);
_145 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_145);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
_148 = *(&local0);
_149 = ((frost$core$Object*) _148);
frost$core$Frost$unref$frost$core$Object$Q(_149);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:38
_154 = *(&local3);
_155 = _154 != NULL;
_156 = (frost$core$Bit) {_155};
_157 = _156.value;
if (_157) goto block15; else goto block16;
block16:;
_159 = (frost$core$Int) {38u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _159, &$s10);
abort(); // unreachable
block15:;
_162 = _154;
_163 = org$frostlang$frostc$Compiler$getListType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$Type$GT$Q(param0, _162);
_164 = ((frost$core$Object*) _163);
frost$core$Frost$ref$frost$core$Object$Q(_164);
_166 = *(&local0);
_167 = ((frost$core$Object*) _166);
frost$core$Frost$unref$frost$core$Object$Q(_167);
*(&local0) = _163;
_170 = ((frost$core$Object*) _163);
frost$core$Frost$unref$frost$core$Object$Q(_170);
_172 = *(&local3);
_173 = ((frost$core$Object*) _172);
frost$core$Frost$unref$frost$core$Object$Q(_173);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:41
_178 = *(&local0);
_179 = _178 != NULL;
_180 = (frost$core$Bit) {_179};
_181 = _180.value;
if (_181) goto block17; else goto block18;
block18:;
_183 = (frost$core$Int) {41u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, _183, &$s12);
abort(); // unreachable
block17:;
_186 = _178;
_187 = &_186->second;
_188 = *_187;
_189 = ((org$frostlang$frostc$Type*) _188);
// begin inline call to method org.frostlang.frostc.Type.ArrayOf(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from ArrayLiteral.frost:41:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:290
_192 = &param0->ARRAY_TYPE;
_193 = *_192;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_194 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_195 = _194;
_196 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_195, _196);
_198 = _194;
_199 = ((frost$core$Object*) _189);
frost$collections$Array$add$frost$collections$Array$T(_198, _199);
_201 = ((frost$collections$ListView*) _194);
_202 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_193, _201);
_203 = ((frost$core$Object*) _202);
frost$core$Frost$ref$frost$core$Object$Q(_203);
_205 = ((frost$core$Object*) _202);
frost$core$Frost$unref$frost$core$Object$Q(_205);
_207 = ((frost$core$Object*) _194);
frost$core$Frost$unref$frost$core$Object$Q(_207);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
_211 = ((frost$core$Object*) _202);
frost$core$Frost$ref$frost$core$Object$Q(_211);
_213 = *(&local4);
_214 = ((frost$core$Object*) _213);
frost$core$Frost$unref$frost$core$Object$Q(_214);
*(&local4) = _202;
_217 = ((frost$core$Object*) _202);
frost$core$Frost$unref$frost$core$Object$Q(_217);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:42
_220 = *(&local4);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from ArrayLiteral.frost:42:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3515
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
_223 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_224 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3515:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:274
_227 = &param0->CLASS_TYPE;
_228 = *_227;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_229 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_230 = _229;
_231 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_230, _231);
_233 = _229;
_234 = ((frost$core$Object*) _220);
frost$collections$Array$add$frost$collections$Array$T(_233, _234);
_236 = ((frost$collections$ListView*) _229);
_237 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_228, _236);
_238 = ((frost$core$Object*) _237);
frost$core$Frost$ref$frost$core$Object$Q(_238);
_240 = ((frost$core$Object*) _237);
frost$core$Frost$unref$frost$core$Object$Q(_240);
_242 = ((frost$core$Object*) _229);
frost$core$Frost$unref$frost$core$Object$Q(_242);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type(_223, _224, _220, _237);
_246 = ((frost$core$Object*) _223);
frost$core$Frost$ref$frost$core$Object$Q(_246);
_248 = ((frost$core$Object*) _237);
frost$core$Frost$unref$frost$core$Object$Q(_248);
_250 = ((frost$core$Object*) _223);
frost$core$Frost$unref$frost$core$Object$Q(_250);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_253 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_254 = _253;
_255 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_254, _255);
_257 = _253;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
_258 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_259 = (frost$core$Int) {25u};
_260 = ((frost$collections$CollectionView*) param2);
ITable* $tmp13 = _260->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
_261 = $tmp13->methods[0];
_262 = _261(_260);
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from ArrayLiteral.frost:43:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
_265 = _262.value;
_266 = ((uint64_t) _265);
_267 = (frost$core$UInt64) {_266};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64(_258, _259, param1, _267);
_270 = ((frost$core$Object*) _258);
frost$collections$Array$add$frost$collections$Array$T(_257, _270);
_272 = ((frost$collections$ListView*) _253);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
_273 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_274 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_273, _274);
_276 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _223, _272, _273);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
_278 = ((frost$core$Object*) _276);
frost$core$Frost$ref$frost$core$Object$Q(_278);
_280 = *(&local5);
_281 = ((frost$core$Object*) _280);
frost$core$Frost$unref$frost$core$Object$Q(_281);
*(&local5) = _276;
_284 = ((frost$core$Object*) _276);
frost$core$Frost$unref$frost$core$Object$Q(_284);
_286 = ((frost$core$Object*) _273);
frost$core$Frost$unref$frost$core$Object$Q(_286);
_288 = ((frost$core$Object*) _258);
frost$core$Frost$unref$frost$core$Object$Q(_288);
_290 = ((frost$core$Object*) _253);
frost$core$Frost$unref$frost$core$Object$Q(_290);
_292 = ((frost$core$Object*) _223);
frost$core$Frost$unref$frost$core$Object$Q(_292);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:45
_295 = *(&local5);
_296 = _295 == NULL;
_297 = (frost$core$Bit) {_296};
_298 = _297.value;
if (_298) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:46
_301 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_301);
_303 = *(&local5);
_304 = ((frost$core$Object*) _303);
frost$core$Frost$unref$frost$core$Object$Q(_304);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
_307 = *(&local4);
_308 = ((frost$core$Object*) _307);
frost$core$Frost$unref$frost$core$Object$Q(_308);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
_311 = *(&local0);
_312 = ((frost$core$Object*) _311);
frost$core$Frost$unref$frost$core$Object$Q(_312);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:48
_317 = ((frost$collections$Iterable*) param2);
_318 = _317;
ITable* $tmp14 = _318->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp14 = $tmp14->next;
}
_319 = $tmp14->methods[0];
_320 = _319(_318);
_321 = _320;
goto block25;
block25:;
_323 = _321;
ITable* $tmp15 = _323->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp15 = $tmp15->next;
}
_324 = $tmp15->methods[0];
_325 = _324(_323);
_326 = _325.value;
if (_326) goto block27; else goto block26;
block26:;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
_329 = _321;
ITable* $tmp16 = _329->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp16 = $tmp16->next;
}
_330 = $tmp16->methods[1];
_331 = _330(_329);
_332 = ((org$frostlang$frostc$ASTNode*) _331);
_333 = ((frost$core$Object*) _332);
frost$core$Frost$ref$frost$core$Object$Q(_333);
_335 = *(&local6);
_336 = ((frost$core$Object*) _335);
frost$core$Frost$unref$frost$core$Object$Q(_336);
*(&local6) = _332;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:49
_340 = *(&local5);
_341 = _340 != NULL;
_342 = (frost$core$Bit) {_341};
_343 = _342.value;
if (_343) goto block28; else goto block29;
block29:;
_345 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s17, _345, &$s18);
abort(); // unreachable
block28:;
_348 = _340;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_349 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_350 = _349;
_351 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_350, _351);
_353 = _349;
_354 = *(&local6);
_355 = ((frost$core$Object*) _354);
frost$collections$Array$add$frost$collections$Array$T(_353, _355);
_357 = ((frost$collections$ListView*) _349);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
_358 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_359 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_358, _359);
_361 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _348, &$s19, _357, _358);
_362 = ((frost$core$Object*) _361);
frost$core$Frost$unref$frost$core$Object$Q(_362);
_364 = ((frost$core$Object*) _358);
frost$core$Frost$unref$frost$core$Object$Q(_364);
_366 = ((frost$core$Object*) _349);
frost$core$Frost$unref$frost$core$Object$Q(_366);
_368 = _331;
frost$core$Frost$unref$frost$core$Object$Q(_368);
_370 = *(&local6);
_371 = ((frost$core$Object*) _370);
frost$core$Frost$unref$frost$core$Object$Q(_371);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block25;
block27:;
_375 = ((frost$core$Object*) _320);
frost$core$Frost$unref$frost$core$Object$Q(_375);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:51
_378 = *(&local0);
_379 = _378 != NULL;
_380 = (frost$core$Bit) {_379};
_381 = _380.value;
if (_381) goto block32; else goto block33;
block33:;
_383 = (frost$core$Int) {51u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s20, _383, &$s21);
abort(); // unreachable
block32:;
_386 = _378;
_387 = &_386->first;
_388 = *_387;
_389 = ((frost$core$Bit$wrapper*) _388)->value;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ArrayLiteral.frost:51:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_392 = _389.value;
_393 = !_392;
_394 = (frost$core$Bit) {_393};
_396 = _394.value;
if (_396) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:52
_399 = *(&local0);
_400 = _399 != NULL;
_401 = (frost$core$Bit) {_400};
_402 = _401.value;
if (_402) goto block35; else goto block36;
block36:;
_404 = (frost$core$Int) {53u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _404, &$s23);
abort(); // unreachable
block35:;
_407 = _399;
_408 = &_407->second;
_409 = *_408;
_410 = ((org$frostlang$frostc$Type*) _409);
// begin inline call to method org.frostlang.frostc.Type.ImmutableArrayOf(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from ArrayLiteral.frost:53:63
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:295
_413 = &param0->IMMUTABLE_ARRAY_TYPE;
_414 = *_413;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_415 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_416 = _415;
_417 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_416, _417);
_419 = _415;
_420 = ((frost$core$Object*) _410);
frost$collections$Array$add$frost$collections$Array$T(_419, _420);
_422 = ((frost$collections$ListView*) _415);
_423 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_414, _422);
_424 = ((frost$core$Object*) _423);
frost$core$Frost$ref$frost$core$Object$Q(_424);
_426 = ((frost$core$Object*) _423);
frost$core$Frost$unref$frost$core$Object$Q(_426);
_428 = ((frost$core$Object*) _415);
frost$core$Frost$unref$frost$core$Object$Q(_428);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from ArrayLiteral.frost:53:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3515
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
_433 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_434 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3515:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:274
_437 = &param0->CLASS_TYPE;
_438 = *_437;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_439 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_440 = _439;
_441 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_440, _441);
_443 = _439;
_444 = ((frost$core$Object*) _423);
frost$collections$Array$add$frost$collections$Array$T(_443, _444);
_446 = ((frost$collections$ListView*) _439);
_447 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_438, _446);
_448 = ((frost$core$Object*) _447);
frost$core$Frost$ref$frost$core$Object$Q(_448);
_450 = ((frost$core$Object*) _447);
frost$core$Frost$unref$frost$core$Object$Q(_450);
_452 = ((frost$core$Object*) _439);
frost$core$Frost$unref$frost$core$Object$Q(_452);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type(_433, _434, _423, _447);
_456 = ((frost$core$Object*) _433);
frost$core$Frost$ref$frost$core$Object$Q(_456);
_458 = ((frost$core$Object*) _447);
frost$core$Frost$unref$frost$core$Object$Q(_458);
_460 = ((frost$core$Object*) _433);
frost$core$Frost$unref$frost$core$Object$Q(_460);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_463 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_464 = _463;
_465 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_464, _465);
_467 = _463;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
_468 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_469 = (frost$core$Int) {26u};
_470 = *(&local5);
_471 = _470 != NULL;
_472 = (frost$core$Bit) {_471};
_473 = _472.value;
if (_473) goto block40; else goto block41;
block41:;
_475 = (frost$core$Int) {54u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s24, _475, &$s25);
abort(); // unreachable
block40:;
_478 = _470;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_468, _469, param1, _478);
_480 = ((frost$core$Object*) _468);
frost$collections$Array$add$frost$collections$Array$T(_467, _480);
_482 = ((frost$collections$ListView*) _463);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
_483 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_484 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_483, _484);
_486 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _433, &$s26, _482, _483);
_487 = ((frost$core$Object*) _486);
frost$core$Frost$ref$frost$core$Object$Q(_487);
_489 = *(&local5);
_490 = ((frost$core$Object*) _489);
frost$core$Frost$unref$frost$core$Object$Q(_490);
*(&local5) = _486;
_493 = ((frost$core$Object*) _486);
frost$core$Frost$unref$frost$core$Object$Q(_493);
_495 = ((frost$core$Object*) _483);
frost$core$Frost$unref$frost$core$Object$Q(_495);
_497 = ((frost$core$Object*) _468);
frost$core$Frost$unref$frost$core$Object$Q(_497);
_499 = ((frost$core$Object*) _463);
frost$core$Frost$unref$frost$core$Object$Q(_499);
_501 = ((frost$core$Object*) _433);
frost$core$Frost$unref$frost$core$Object$Q(_501);
_503 = ((frost$core$Object*) _423);
frost$core$Frost$unref$frost$core$Object$Q(_503);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:55
_506 = *(&local5);
_507 = _506 == NULL;
_508 = (frost$core$Bit) {_507};
_509 = _508.value;
if (_509) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:56
_512 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_512);
_514 = *(&local5);
_515 = ((frost$core$Object*) _514);
frost$core$Frost$unref$frost$core$Object$Q(_515);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
_518 = *(&local4);
_519 = ((frost$core$Object*) _518);
frost$core$Frost$unref$frost$core$Object$Q(_519);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
_522 = *(&local0);
_523 = ((frost$core$Object*) _522);
frost$core$Frost$unref$frost$core$Object$Q(_523);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block43:;
goto block31;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:59
_529 = *(&local5);
_530 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _529, param3);
_531 = ((frost$core$Object*) _530);
frost$core$Frost$ref$frost$core$Object$Q(_531);
_533 = ((frost$core$Object*) _530);
frost$core$Frost$unref$frost$core$Object$Q(_533);
_535 = *(&local5);
_536 = ((frost$core$Object*) _535);
frost$core$Frost$unref$frost$core$Object$Q(_536);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
_539 = *(&local4);
_540 = ((frost$core$Object*) _539);
frost$core$Frost$unref$frost$core$Object$Q(_540);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
_543 = *(&local0);
_544 = ((frost$core$Object*) _543);
frost$core$Frost$unref$frost$core$Object$Q(_544);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return _530;

}
void org$frostlang$frostc$expression$ArrayLiteral$init(org$frostlang$frostc$expression$ArrayLiteral* param0) {

return;

}
void org$frostlang$frostc$expression$ArrayLiteral$cleanup(org$frostlang$frostc$expression$ArrayLiteral* param0) {

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:12
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}






