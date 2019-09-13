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
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x20\x74\x79\x70\x65\x20\x6f\x66\x20\x61\x72\x72\x61\x79\x20\x6c\x69\x74\x65\x72\x61\x6c", 38, -8359935776264034572, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, -3028311162545364143, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, -3028311162545364143, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 132, 2551870669144231736, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, -3028311162545364143, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x64\x64", 3, -1798129113975691692, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, -3028311162545364143, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 132, 2551870669144231736, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, -3028311162545364143, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 132, 2551870669144231736, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, -3028311162545364143, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x6d", 4, 9188557619686916277, NULL };

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
frost$core$Object* _144;
org$frostlang$frostc$Type* _146;
frost$core$Object* _147;
org$frostlang$frostc$Pair* _150;
frost$core$Object* _151;
org$frostlang$frostc$Type* _156;
bool _157;
frost$core$Bit _158;
bool _159;
frost$core$Int _161;
org$frostlang$frostc$Type* _164;
org$frostlang$frostc$Pair* _165;
frost$core$Object* _166;
org$frostlang$frostc$Pair* _168;
frost$core$Object* _169;
frost$core$Object* _172;
org$frostlang$frostc$Type* _174;
frost$core$Object* _175;
org$frostlang$frostc$Pair* _180;
bool _181;
frost$core$Bit _182;
bool _183;
frost$core$Int _185;
org$frostlang$frostc$Pair* _188;
frost$core$Object** _189;
frost$core$Object* _190;
org$frostlang$frostc$Type* _191;
org$frostlang$frostc$Type** _194;
org$frostlang$frostc$Type* _195;
frost$collections$Array* _196;
frost$collections$Array* _197;
frost$core$Int _198;
frost$collections$Array* _200;
frost$core$Object* _201;
frost$collections$ListView* _203;
org$frostlang$frostc$Type* _204;
frost$core$Object* _205;
frost$core$Object* _207;
frost$core$Object* _209;
frost$core$Object* _213;
org$frostlang$frostc$Type* _215;
frost$core$Object* _216;
frost$core$Object* _219;
org$frostlang$frostc$Type* _222;
org$frostlang$frostc$IR$Value* _225;
frost$core$Int _226;
org$frostlang$frostc$Type** _229;
org$frostlang$frostc$Type* _230;
frost$collections$Array* _231;
frost$collections$Array* _232;
frost$core$Int _233;
frost$collections$Array* _235;
frost$core$Object* _236;
frost$collections$ListView* _238;
org$frostlang$frostc$Type* _239;
frost$core$Object* _240;
frost$core$Object* _242;
frost$core$Object* _244;
frost$core$Object* _248;
frost$core$Object* _250;
frost$core$Object* _252;
frost$collections$Array* _255;
frost$collections$Array* _256;
frost$core$Int _257;
frost$collections$Array* _259;
org$frostlang$frostc$ASTNode* _260;
frost$core$Int _261;
frost$collections$CollectionView* _262;
$fn2 _263;
frost$core$Int _264;
int64_t _267;
uint64_t _268;
frost$core$UInt64 _269;
frost$core$Object* _272;
frost$collections$ListView* _274;
org$frostlang$frostc$Compiler$TypeContext* _275;
frost$core$Int _276;
org$frostlang$frostc$IR$Value* _278;
frost$core$Object* _280;
org$frostlang$frostc$IR$Value* _282;
frost$core$Object* _283;
frost$core$Object* _286;
frost$core$Object* _288;
frost$core$Object* _290;
frost$core$Object* _292;
frost$core$Object* _294;
org$frostlang$frostc$IR$Value* _297;
bool _298;
frost$core$Bit _299;
bool _300;
frost$core$Object* _303;
org$frostlang$frostc$IR$Value* _305;
frost$core$Object* _306;
org$frostlang$frostc$Type* _309;
frost$core$Object* _310;
org$frostlang$frostc$Pair* _313;
frost$core$Object* _314;
frost$collections$Iterable* _319;
frost$collections$Iterable* _320;
$fn3 _321;
frost$collections$Iterator* _322;
frost$collections$Iterator* _323;
frost$collections$Iterator* _325;
$fn4 _326;
frost$core$Bit _327;
bool _328;
frost$collections$Iterator* _331;
$fn5 _332;
frost$core$Object* _333;
org$frostlang$frostc$ASTNode* _334;
frost$core$Object* _335;
org$frostlang$frostc$ASTNode* _337;
frost$core$Object* _338;
org$frostlang$frostc$IR$Value* _342;
bool _343;
frost$core$Bit _344;
bool _345;
frost$core$Int _347;
org$frostlang$frostc$IR$Value* _350;
frost$collections$Array* _351;
frost$collections$Array* _352;
frost$core$Int _353;
frost$collections$Array* _355;
org$frostlang$frostc$ASTNode* _356;
frost$core$Object* _357;
frost$collections$ListView* _359;
org$frostlang$frostc$Compiler$TypeContext* _360;
frost$core$Int _361;
org$frostlang$frostc$IR$Value* _363;
frost$core$Object* _364;
frost$core$Object* _366;
frost$core$Object* _368;
frost$core$Object* _370;
org$frostlang$frostc$ASTNode* _372;
frost$core$Object* _373;
frost$core$Object* _377;
org$frostlang$frostc$Pair* _380;
bool _381;
frost$core$Bit _382;
bool _383;
frost$core$Int _385;
org$frostlang$frostc$Pair* _388;
frost$core$Object** _389;
frost$core$Object* _390;
frost$core$Bit _391;
bool _394;
bool _395;
frost$core$Bit _396;
bool _398;
org$frostlang$frostc$Pair* _401;
bool _402;
frost$core$Bit _403;
bool _404;
frost$core$Int _406;
org$frostlang$frostc$Pair* _409;
frost$core$Object** _410;
frost$core$Object* _411;
org$frostlang$frostc$Type* _412;
org$frostlang$frostc$Type** _415;
org$frostlang$frostc$Type* _416;
frost$collections$Array* _417;
frost$collections$Array* _418;
frost$core$Int _419;
frost$collections$Array* _421;
frost$core$Object* _422;
frost$collections$ListView* _424;
org$frostlang$frostc$Type* _425;
frost$core$Object* _426;
frost$core$Object* _428;
frost$core$Object* _430;
org$frostlang$frostc$IR$Value* _435;
frost$core$Int _436;
org$frostlang$frostc$Type** _439;
org$frostlang$frostc$Type* _440;
frost$collections$Array* _441;
frost$collections$Array* _442;
frost$core$Int _443;
frost$collections$Array* _445;
frost$core$Object* _446;
frost$collections$ListView* _448;
org$frostlang$frostc$Type* _449;
frost$core$Object* _450;
frost$core$Object* _452;
frost$core$Object* _454;
frost$core$Object* _458;
frost$core$Object* _460;
frost$core$Object* _462;
frost$collections$Array* _465;
frost$collections$Array* _466;
frost$core$Int _467;
frost$collections$Array* _469;
org$frostlang$frostc$ASTNode* _470;
frost$core$Int _471;
org$frostlang$frostc$IR$Value* _472;
bool _473;
frost$core$Bit _474;
bool _475;
frost$core$Int _477;
org$frostlang$frostc$IR$Value* _480;
frost$core$Object* _482;
frost$collections$ListView* _484;
org$frostlang$frostc$Compiler$TypeContext* _485;
frost$core$Int _486;
org$frostlang$frostc$IR$Value* _488;
frost$core$Object* _489;
org$frostlang$frostc$IR$Value* _491;
frost$core$Object* _492;
frost$core$Object* _495;
frost$core$Object* _497;
frost$core$Object* _499;
frost$core$Object* _501;
frost$core$Object* _503;
frost$core$Object* _505;
org$frostlang$frostc$IR$Value* _508;
bool _509;
frost$core$Bit _510;
bool _511;
frost$core$Object* _514;
org$frostlang$frostc$IR$Value* _516;
frost$core$Object* _517;
org$frostlang$frostc$Type* _520;
frost$core$Object* _521;
org$frostlang$frostc$Pair* _524;
frost$core$Object* _525;
org$frostlang$frostc$IR$Value* _531;
org$frostlang$frostc$IR$Value* _532;
frost$core$Object* _533;
frost$core$Object* _535;
org$frostlang$frostc$IR$Value* _537;
frost$core$Object* _538;
org$frostlang$frostc$Type* _541;
frost$core$Object* _542;
org$frostlang$frostc$Pair* _545;
frost$core$Object* _546;
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
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s9);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:37
_144 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_144);
_146 = *(&local3);
_147 = ((frost$core$Object*) _146);
frost$core$Frost$unref$frost$core$Object$Q(_147);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
_150 = *(&local0);
_151 = ((frost$core$Object*) _150);
frost$core$Frost$unref$frost$core$Object$Q(_151);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:39
_156 = *(&local3);
_157 = _156 != NULL;
_158 = (frost$core$Bit) {_157};
_159 = _158.value;
if (_159) goto block15; else goto block16;
block16:;
_161 = (frost$core$Int) {39u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _161, &$s11);
abort(); // unreachable
block15:;
_164 = _156;
_165 = org$frostlang$frostc$Compiler$getListType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$Type$GT$Q(param0, _164);
_166 = ((frost$core$Object*) _165);
frost$core$Frost$ref$frost$core$Object$Q(_166);
_168 = *(&local0);
_169 = ((frost$core$Object*) _168);
frost$core$Frost$unref$frost$core$Object$Q(_169);
*(&local0) = _165;
_172 = ((frost$core$Object*) _165);
frost$core$Frost$unref$frost$core$Object$Q(_172);
_174 = *(&local3);
_175 = ((frost$core$Object*) _174);
frost$core$Frost$unref$frost$core$Object$Q(_175);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:42
_180 = *(&local0);
_181 = _180 != NULL;
_182 = (frost$core$Bit) {_181};
_183 = _182.value;
if (_183) goto block17; else goto block18;
block18:;
_185 = (frost$core$Int) {42u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s12, _185, &$s13);
abort(); // unreachable
block17:;
_188 = _180;
_189 = &_188->second;
_190 = *_189;
_191 = ((org$frostlang$frostc$Type*) _190);
// begin inline call to method org.frostlang.frostc.Type.ArrayOf(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from ArrayLiteral.frost:42:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:290
_194 = &param0->ARRAY_TYPE;
_195 = *_194;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_196 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_197 = _196;
_198 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_197, _198);
_200 = _196;
_201 = ((frost$core$Object*) _191);
frost$collections$Array$add$frost$collections$Array$T(_200, _201);
_203 = ((frost$collections$ListView*) _196);
_204 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_195, _203);
_205 = ((frost$core$Object*) _204);
frost$core$Frost$ref$frost$core$Object$Q(_205);
_207 = ((frost$core$Object*) _204);
frost$core$Frost$unref$frost$core$Object$Q(_207);
_209 = ((frost$core$Object*) _196);
frost$core$Frost$unref$frost$core$Object$Q(_209);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
_213 = ((frost$core$Object*) _204);
frost$core$Frost$ref$frost$core$Object$Q(_213);
_215 = *(&local4);
_216 = ((frost$core$Object*) _215);
frost$core$Frost$unref$frost$core$Object$Q(_216);
*(&local4) = _204;
_219 = ((frost$core$Object*) _204);
frost$core$Frost$unref$frost$core$Object$Q(_219);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:43
_222 = *(&local4);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from ArrayLiteral.frost:43:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3599
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
_225 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_226 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3599:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:274
_229 = &param0->CLASS_TYPE;
_230 = *_229;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_231 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_232 = _231;
_233 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_232, _233);
_235 = _231;
_236 = ((frost$core$Object*) _222);
frost$collections$Array$add$frost$collections$Array$T(_235, _236);
_238 = ((frost$collections$ListView*) _231);
_239 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_230, _238);
_240 = ((frost$core$Object*) _239);
frost$core$Frost$ref$frost$core$Object$Q(_240);
_242 = ((frost$core$Object*) _239);
frost$core$Frost$unref$frost$core$Object$Q(_242);
_244 = ((frost$core$Object*) _231);
frost$core$Frost$unref$frost$core$Object$Q(_244);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type(_225, _226, _222, _239);
_248 = ((frost$core$Object*) _225);
frost$core$Frost$ref$frost$core$Object$Q(_248);
_250 = ((frost$core$Object*) _239);
frost$core$Frost$unref$frost$core$Object$Q(_250);
_252 = ((frost$core$Object*) _225);
frost$core$Frost$unref$frost$core$Object$Q(_252);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_255 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_256 = _255;
_257 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_256, _257);
_259 = _255;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
_260 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_261 = (frost$core$Int) {25u};
_262 = ((frost$collections$CollectionView*) param2);
ITable* $tmp14 = _262->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp14 = $tmp14->next;
}
_263 = $tmp14->methods[0];
_264 = _263(_262);
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from ArrayLiteral.frost:44:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
_267 = _264.value;
_268 = ((uint64_t) _267);
_269 = (frost$core$UInt64) {_268};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64(_260, _261, param1, _269);
_272 = ((frost$core$Object*) _260);
frost$collections$Array$add$frost$collections$Array$T(_259, _272);
_274 = ((frost$collections$ListView*) _255);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
_275 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_276 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_275, _276);
_278 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _225, _274, _275);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
_280 = ((frost$core$Object*) _278);
frost$core$Frost$ref$frost$core$Object$Q(_280);
_282 = *(&local5);
_283 = ((frost$core$Object*) _282);
frost$core$Frost$unref$frost$core$Object$Q(_283);
*(&local5) = _278;
_286 = ((frost$core$Object*) _278);
frost$core$Frost$unref$frost$core$Object$Q(_286);
_288 = ((frost$core$Object*) _275);
frost$core$Frost$unref$frost$core$Object$Q(_288);
_290 = ((frost$core$Object*) _260);
frost$core$Frost$unref$frost$core$Object$Q(_290);
_292 = ((frost$core$Object*) _255);
frost$core$Frost$unref$frost$core$Object$Q(_292);
_294 = ((frost$core$Object*) _225);
frost$core$Frost$unref$frost$core$Object$Q(_294);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:46
_297 = *(&local5);
_298 = _297 == NULL;
_299 = (frost$core$Bit) {_298};
_300 = _299.value;
if (_300) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:47
_303 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_303);
_305 = *(&local5);
_306 = ((frost$core$Object*) _305);
frost$core$Frost$unref$frost$core$Object$Q(_306);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
_309 = *(&local4);
_310 = ((frost$core$Object*) _309);
frost$core$Frost$unref$frost$core$Object$Q(_310);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
_313 = *(&local0);
_314 = ((frost$core$Object*) _313);
frost$core$Frost$unref$frost$core$Object$Q(_314);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:49
_319 = ((frost$collections$Iterable*) param2);
_320 = _319;
ITable* $tmp15 = _320->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp15 = $tmp15->next;
}
_321 = $tmp15->methods[0];
_322 = _321(_320);
_323 = _322;
goto block25;
block25:;
_325 = _323;
ITable* $tmp16 = _325->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp16 = $tmp16->next;
}
_326 = $tmp16->methods[0];
_327 = _326(_325);
_328 = _327.value;
if (_328) goto block27; else goto block26;
block26:;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
_331 = _323;
ITable* $tmp17 = _331->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp17 = $tmp17->next;
}
_332 = $tmp17->methods[1];
_333 = _332(_331);
_334 = ((org$frostlang$frostc$ASTNode*) _333);
_335 = ((frost$core$Object*) _334);
frost$core$Frost$ref$frost$core$Object$Q(_335);
_337 = *(&local6);
_338 = ((frost$core$Object*) _337);
frost$core$Frost$unref$frost$core$Object$Q(_338);
*(&local6) = _334;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:50
_342 = *(&local5);
_343 = _342 != NULL;
_344 = (frost$core$Bit) {_343};
_345 = _344.value;
if (_345) goto block28; else goto block29;
block29:;
_347 = (frost$core$Int) {50u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _347, &$s19);
abort(); // unreachable
block28:;
_350 = _342;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_351 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_352 = _351;
_353 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_352, _353);
_355 = _351;
_356 = *(&local6);
_357 = ((frost$core$Object*) _356);
frost$collections$Array$add$frost$collections$Array$T(_355, _357);
_359 = ((frost$collections$ListView*) _351);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
_360 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_361 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_360, _361);
_363 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _350, &$s20, _359, _360);
_364 = ((frost$core$Object*) _363);
frost$core$Frost$unref$frost$core$Object$Q(_364);
_366 = ((frost$core$Object*) _360);
frost$core$Frost$unref$frost$core$Object$Q(_366);
_368 = ((frost$core$Object*) _351);
frost$core$Frost$unref$frost$core$Object$Q(_368);
_370 = _333;
frost$core$Frost$unref$frost$core$Object$Q(_370);
_372 = *(&local6);
_373 = ((frost$core$Object*) _372);
frost$core$Frost$unref$frost$core$Object$Q(_373);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block25;
block27:;
_377 = ((frost$core$Object*) _322);
frost$core$Frost$unref$frost$core$Object$Q(_377);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:52
_380 = *(&local0);
_381 = _380 != NULL;
_382 = (frost$core$Bit) {_381};
_383 = _382.value;
if (_383) goto block32; else goto block33;
block33:;
_385 = (frost$core$Int) {52u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s21, _385, &$s22);
abort(); // unreachable
block32:;
_388 = _380;
_389 = &_388->first;
_390 = *_389;
_391 = ((frost$core$Bit$wrapper*) _390)->value;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ArrayLiteral.frost:52:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_394 = _391.value;
_395 = !_394;
_396 = (frost$core$Bit) {_395};
_398 = _396.value;
if (_398) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:53
_401 = *(&local0);
_402 = _401 != NULL;
_403 = (frost$core$Bit) {_402};
_404 = _403.value;
if (_404) goto block35; else goto block36;
block36:;
_406 = (frost$core$Int) {54u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s23, _406, &$s24);
abort(); // unreachable
block35:;
_409 = _401;
_410 = &_409->second;
_411 = *_410;
_412 = ((org$frostlang$frostc$Type*) _411);
// begin inline call to method org.frostlang.frostc.Type.ImmutableArrayOf(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from ArrayLiteral.frost:54:63
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:295
_415 = &param0->IMMUTABLE_ARRAY_TYPE;
_416 = *_415;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_417 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_418 = _417;
_419 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_418, _419);
_421 = _417;
_422 = ((frost$core$Object*) _412);
frost$collections$Array$add$frost$collections$Array$T(_421, _422);
_424 = ((frost$collections$ListView*) _417);
_425 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_416, _424);
_426 = ((frost$core$Object*) _425);
frost$core$Frost$ref$frost$core$Object$Q(_426);
_428 = ((frost$core$Object*) _425);
frost$core$Frost$unref$frost$core$Object$Q(_428);
_430 = ((frost$core$Object*) _417);
frost$core$Frost$unref$frost$core$Object$Q(_430);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from ArrayLiteral.frost:54:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3599
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
_435 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_436 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3599:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:274
_439 = &param0->CLASS_TYPE;
_440 = *_439;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_441 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_442 = _441;
_443 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_442, _443);
_445 = _441;
_446 = ((frost$core$Object*) _425);
frost$collections$Array$add$frost$collections$Array$T(_445, _446);
_448 = ((frost$collections$ListView*) _441);
_449 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_440, _448);
_450 = ((frost$core$Object*) _449);
frost$core$Frost$ref$frost$core$Object$Q(_450);
_452 = ((frost$core$Object*) _449);
frost$core$Frost$unref$frost$core$Object$Q(_452);
_454 = ((frost$core$Object*) _441);
frost$core$Frost$unref$frost$core$Object$Q(_454);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type(_435, _436, _425, _449);
_458 = ((frost$core$Object*) _435);
frost$core$Frost$ref$frost$core$Object$Q(_458);
_460 = ((frost$core$Object*) _449);
frost$core$Frost$unref$frost$core$Object$Q(_460);
_462 = ((frost$core$Object*) _435);
frost$core$Frost$unref$frost$core$Object$Q(_462);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_465 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_466 = _465;
_467 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_466, _467);
_469 = _465;
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
_470 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_471 = (frost$core$Int) {26u};
_472 = *(&local5);
_473 = _472 != NULL;
_474 = (frost$core$Bit) {_473};
_475 = _474.value;
if (_475) goto block40; else goto block41;
block41:;
_477 = (frost$core$Int) {55u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s25, _477, &$s26);
abort(); // unreachable
block40:;
_480 = _472;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_470, _471, param1, _480);
_482 = ((frost$core$Object*) _470);
frost$collections$Array$add$frost$collections$Array$T(_469, _482);
_484 = ((frost$collections$ListView*) _465);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
_485 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_486 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_485, _486);
_488 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _435, &$s27, _484, _485);
_489 = ((frost$core$Object*) _488);
frost$core$Frost$ref$frost$core$Object$Q(_489);
_491 = *(&local5);
_492 = ((frost$core$Object*) _491);
frost$core$Frost$unref$frost$core$Object$Q(_492);
*(&local5) = _488;
_495 = ((frost$core$Object*) _488);
frost$core$Frost$unref$frost$core$Object$Q(_495);
_497 = ((frost$core$Object*) _485);
frost$core$Frost$unref$frost$core$Object$Q(_497);
_499 = ((frost$core$Object*) _470);
frost$core$Frost$unref$frost$core$Object$Q(_499);
_501 = ((frost$core$Object*) _465);
frost$core$Frost$unref$frost$core$Object$Q(_501);
_503 = ((frost$core$Object*) _435);
frost$core$Frost$unref$frost$core$Object$Q(_503);
_505 = ((frost$core$Object*) _425);
frost$core$Frost$unref$frost$core$Object$Q(_505);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:56
_508 = *(&local5);
_509 = _508 == NULL;
_510 = (frost$core$Bit) {_509};
_511 = _510.value;
if (_511) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:57
_514 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_514);
_516 = *(&local5);
_517 = ((frost$core$Object*) _516);
frost$core$Frost$unref$frost$core$Object$Q(_517);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
_520 = *(&local4);
_521 = ((frost$core$Object*) _520);
frost$core$Frost$unref$frost$core$Object$Q(_521);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
_524 = *(&local0);
_525 = ((frost$core$Object*) _524);
frost$core$Frost$unref$frost$core$Object$Q(_525);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block43:;
goto block31;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:60
_531 = *(&local5);
_532 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _531, param3);
_533 = ((frost$core$Object*) _532);
frost$core$Frost$ref$frost$core$Object$Q(_533);
_535 = ((frost$core$Object*) _532);
frost$core$Frost$unref$frost$core$Object$Q(_535);
_537 = *(&local5);
_538 = ((frost$core$Object*) _537);
frost$core$Frost$unref$frost$core$Object$Q(_538);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
_541 = *(&local4);
_542 = ((frost$core$Object*) _541);
frost$core$Frost$unref$frost$core$Object$Q(_542);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
_545 = *(&local0);
_546 = ((frost$core$Object*) _545);
frost$core$Frost$unref$frost$core$Object$Q(_546);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return _532;

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






