#include "org/frostlang/frostc/expression/ArrayLiteral.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/MethodPosition.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/collections/Array.h"
#include "frost/collections/ListView.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/UInt64.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/expression/Call.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$expression$ArrayLiteral$class_type org$frostlang$frostc$expression$ArrayLiteral$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$ArrayLiteral$cleanup} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn3)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn5)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c", 44, -2744936157929090312, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, -3028311162545364143, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x63\x61\x6e\x6e\x6f\x74\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x20\x74\x79\x70\x65\x20\x6f\x66\x20\x61\x72\x72\x61\x79\x20\x6c\x69\x74\x65\x72\x61\x6c", 38, -8359935776264034572, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x63\x61\x6e\x6e\x6f\x74\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x20\x74\x79\x70\x65\x20\x6f\x66\x20\x61\x72\x72\x61\x79\x20\x6c\x69\x74\x65\x72\x61\x6c", 38, -8359935776264034572, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, -3028311162545364143, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, -3028311162545364143, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 132, 2551870669144231736, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, -3028311162545364143, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x61\x64\x64", 3, -1798129113975691692, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, -3028311162545364143, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 132, 2551870669144231736, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, -3028311162545364143, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 132, 2551870669144231736, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x4c\x69\x74\x65\x72\x61\x6c\x2e\x66\x72\x6f\x73\x74", 18, -3028311162545364143, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x6d", 4, 9188557619686916277, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$ArrayLiteral$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$MethodPosition param1, org$frostlang$frostc$FixedArray* param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

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
frost$core$Int _48;
frost$core$Int _49;
frost$core$Int _50;
org$frostlang$frostc$Position _51;
org$frostlang$frostc$Type* _54;
frost$core$Object* _56;
org$frostlang$frostc$Type* _58;
frost$core$Object* _59;
frost$core$Object* _62;
frost$core$Object* _64;
org$frostlang$frostc$Type* _67;
bool _68;
frost$core$Bit _69;
bool _70;
org$frostlang$frostc$Type* _73;
bool _74;
frost$core$Bit _75;
bool _76;
frost$core$Int _78;
org$frostlang$frostc$Type* _81;
org$frostlang$frostc$Pair* _82;
frost$core$Object* _83;
org$frostlang$frostc$Pair* _85;
frost$core$Object* _86;
frost$core$Object* _89;
org$frostlang$frostc$Pair* _93;
bool _94;
frost$core$Bit _95;
bool _96;
frost$core$Int _103;
frost$core$Int _104;
frost$core$Int _105;
org$frostlang$frostc$Position _106;
frost$core$Object* _111;
org$frostlang$frostc$Type* _113;
frost$core$Object* _114;
org$frostlang$frostc$Type* _117;
frost$core$Object* _118;
org$frostlang$frostc$Pair* _121;
frost$core$Object* _122;
org$frostlang$frostc$Type* _126;
frost$core$Object* _127;
org$frostlang$frostc$Type* _131;
frost$core$Object* _132;
org$frostlang$frostc$ASTNode* _137;
frost$core$Int _138;
frost$core$Int _141;
frost$core$Int _142;
frost$core$Int _143;
org$frostlang$frostc$Position _144;
org$frostlang$frostc$Type* _147;
frost$core$Object* _149;
org$frostlang$frostc$Type* _151;
frost$core$Object* _152;
frost$core$Object* _155;
frost$core$Object* _157;
org$frostlang$frostc$Type* _160;
bool _161;
frost$core$Bit _162;
bool _163;
frost$core$Int _170;
frost$core$Int _171;
frost$core$Int _172;
org$frostlang$frostc$Position _173;
frost$core$Object* _178;
org$frostlang$frostc$Type* _180;
frost$core$Object* _181;
org$frostlang$frostc$Pair* _184;
frost$core$Object* _185;
org$frostlang$frostc$Type* _190;
bool _191;
frost$core$Bit _192;
bool _193;
frost$core$Int _195;
org$frostlang$frostc$Type* _198;
org$frostlang$frostc$Pair* _199;
frost$core$Object* _200;
org$frostlang$frostc$Pair* _202;
frost$core$Object* _203;
frost$core$Object* _206;
org$frostlang$frostc$Type* _208;
frost$core$Object* _209;
org$frostlang$frostc$Pair* _214;
bool _215;
frost$core$Bit _216;
bool _217;
frost$core$Int _219;
org$frostlang$frostc$Pair* _222;
frost$core$Object** _223;
frost$core$Object* _224;
org$frostlang$frostc$Type* _225;
org$frostlang$frostc$Type** _228;
org$frostlang$frostc$Type* _229;
frost$collections$Array* _230;
frost$core$Int _231;
frost$core$Object* _233;
frost$collections$ListView* _235;
org$frostlang$frostc$Type* _236;
frost$core$Object* _237;
frost$core$Object* _239;
frost$core$Object* _241;
frost$core$Object* _245;
org$frostlang$frostc$Type* _247;
frost$core$Object* _248;
frost$core$Object* _251;
org$frostlang$frostc$Type* _254;
org$frostlang$frostc$IR$Value* _257;
frost$core$Int _258;
org$frostlang$frostc$Type** _261;
org$frostlang$frostc$Type* _262;
frost$collections$Array* _263;
frost$core$Int _264;
frost$core$Object* _266;
frost$collections$ListView* _268;
org$frostlang$frostc$Type* _269;
frost$core$Object* _270;
frost$core$Object* _272;
frost$core$Object* _274;
frost$core$Object* _278;
frost$core$Object* _280;
frost$core$Object* _282;
frost$collections$Array* _285;
frost$core$Int _286;
org$frostlang$frostc$ASTNode* _288;
frost$core$Int _289;
frost$core$Int _292;
frost$core$Int _293;
frost$core$Int _294;
org$frostlang$frostc$Position _295;
frost$collections$CollectionView* _297;
$fn2 _298;
frost$core$Int _299;
int64_t _302;
uint64_t _303;
frost$core$UInt64 _304;
frost$core$Object* _307;
frost$collections$ListView* _309;
org$frostlang$frostc$Compiler$TypeContext* _310;
frost$core$Int _311;
org$frostlang$frostc$IR$Value* _313;
frost$core$Object* _315;
org$frostlang$frostc$IR$Value* _317;
frost$core$Object* _318;
frost$core$Object* _321;
frost$core$Object* _323;
frost$core$Object* _325;
frost$core$Object* _327;
frost$core$Object* _329;
org$frostlang$frostc$IR$Value* _332;
bool _333;
frost$core$Bit _334;
bool _335;
frost$core$Object* _338;
org$frostlang$frostc$IR$Value* _340;
frost$core$Object* _341;
org$frostlang$frostc$Type* _344;
frost$core$Object* _345;
org$frostlang$frostc$Pair* _348;
frost$core$Object* _349;
frost$collections$Iterable* _354;
$fn3 _355;
frost$collections$Iterator* _356;
$fn4 _358;
frost$core$Bit _359;
bool _360;
$fn5 _363;
frost$core$Object* _364;
org$frostlang$frostc$ASTNode* _365;
frost$core$Object* _366;
org$frostlang$frostc$ASTNode* _368;
frost$core$Object* _369;
org$frostlang$frostc$IR$Value* _373;
bool _374;
frost$core$Bit _375;
bool _376;
frost$core$Int _378;
org$frostlang$frostc$IR$Value* _381;
frost$collections$Array* _382;
frost$core$Int _383;
org$frostlang$frostc$ASTNode* _385;
frost$core$Object* _386;
frost$collections$ListView* _388;
org$frostlang$frostc$Compiler$TypeContext* _389;
frost$core$Int _390;
org$frostlang$frostc$IR$Value* _392;
frost$core$Object* _393;
frost$core$Object* _395;
frost$core$Object* _397;
frost$core$Object* _399;
org$frostlang$frostc$ASTNode* _401;
frost$core$Object* _402;
frost$core$Object* _406;
org$frostlang$frostc$Pair* _409;
bool _410;
frost$core$Bit _411;
bool _412;
frost$core$Int _414;
org$frostlang$frostc$Pair* _417;
frost$core$Object** _418;
frost$core$Object* _419;
frost$core$Bit _420;
bool _423;
bool _424;
frost$core$Bit _425;
bool _427;
org$frostlang$frostc$Pair* _430;
bool _431;
frost$core$Bit _432;
bool _433;
frost$core$Int _435;
org$frostlang$frostc$Pair* _438;
frost$core$Object** _439;
frost$core$Object* _440;
org$frostlang$frostc$Type* _441;
org$frostlang$frostc$Type** _444;
org$frostlang$frostc$Type* _445;
frost$collections$Array* _446;
frost$core$Int _447;
frost$core$Object* _449;
frost$collections$ListView* _451;
org$frostlang$frostc$Type* _452;
frost$core$Object* _453;
frost$core$Object* _455;
frost$core$Object* _457;
org$frostlang$frostc$IR$Value* _462;
frost$core$Int _463;
org$frostlang$frostc$Type** _466;
org$frostlang$frostc$Type* _467;
frost$collections$Array* _468;
frost$core$Int _469;
frost$core$Object* _471;
frost$collections$ListView* _473;
org$frostlang$frostc$Type* _474;
frost$core$Object* _475;
frost$core$Object* _477;
frost$core$Object* _479;
frost$core$Object* _483;
frost$core$Object* _485;
frost$core$Object* _487;
frost$collections$Array* _490;
frost$core$Int _491;
org$frostlang$frostc$ASTNode* _493;
frost$core$Int _494;
frost$core$Int _497;
frost$core$Int _498;
frost$core$Int _499;
org$frostlang$frostc$Position _500;
org$frostlang$frostc$IR$Value* _502;
bool _503;
frost$core$Bit _504;
bool _505;
frost$core$Int _507;
org$frostlang$frostc$IR$Value* _510;
frost$core$Object* _512;
frost$collections$ListView* _514;
org$frostlang$frostc$Compiler$TypeContext* _515;
frost$core$Int _516;
org$frostlang$frostc$IR$Value* _518;
frost$core$Object* _519;
org$frostlang$frostc$IR$Value* _521;
frost$core$Object* _522;
frost$core$Object* _525;
frost$core$Object* _527;
frost$core$Object* _529;
frost$core$Object* _531;
frost$core$Object* _533;
frost$core$Object* _535;
org$frostlang$frostc$IR$Value* _538;
bool _539;
frost$core$Bit _540;
bool _541;
frost$core$Object* _544;
org$frostlang$frostc$IR$Value* _546;
frost$core$Object* _547;
org$frostlang$frostc$Type* _550;
frost$core$Object* _551;
org$frostlang$frostc$Pair* _554;
frost$core$Object* _555;
org$frostlang$frostc$IR$Value* _561;
org$frostlang$frostc$IR$Value* _562;
frost$core$Object* _563;
frost$core$Object* _565;
org$frostlang$frostc$IR$Value* _567;
frost$core$Object* _568;
org$frostlang$frostc$Type* _571;
frost$core$Object* _572;
org$frostlang$frostc$Pair* _575;
frost$core$Object* _576;
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
_15 = &param3->$data.$TYPE.field0;
_16 = *_15;
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
_18 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = *(&local1);
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
*(&local1) = _16;
_24 = &param3->$data.$TYPE.field1;
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
_44 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_45 = (frost$core$Int) {1u};
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from ArrayLiteral.frost:23:83
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_48 = param1.file;
_49 = param1.line;
_50 = param1.column;
_51 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_48, _49, _50);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(_44, _45, _51, param2);
_54 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, _44);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
_56 = ((frost$core$Object*) _54);
frost$core$Frost$ref$frost$core$Object$Q(_56);
_58 = *(&local2);
_59 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_59);
*(&local2) = _54;
_62 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_62);
_64 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_64);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:25
_67 = *(&local2);
_68 = _67 != NULL;
_69 = (frost$core$Bit) {_68};
_70 = _69.value;
if (_70) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:26
_73 = *(&local2);
_74 = _73 != NULL;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
if (_76) goto block10; else goto block11;
block11:;
_78 = (frost$core$Int) {26u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _78, &$s7);
abort(); // unreachable
block10:;
_81 = _73;
_82 = org$frostlang$frostc$Compiler$getListType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$Type$GT$Q(param0, _81);
_83 = ((frost$core$Object*) _82);
frost$core$Frost$ref$frost$core$Object$Q(_83);
_85 = *(&local0);
_86 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_86);
*(&local0) = _82;
_89 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_89);
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:28
_93 = *(&local0);
_94 = _93 == NULL;
_95 = (frost$core$Bit) {_94};
_96 = _95.value;
if (_96) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:29
// begin inline call to method org.frostlang.frostc.Compiler.error(pos:org.frostlang.frostc.MethodPosition, msg:frost.core.String) from ArrayLiteral.frost:29:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6108
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Compiler.frost:6108:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_103 = param1.file;
_104 = param1.line;
_105 = param1.column;
_106 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_103, _104, _105);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, _106, &$s8);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:30
_111 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_111);
_113 = *(&local2);
_114 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_114);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
_117 = *(&local1);
_118 = ((frost$core$Object*) _117);
frost$core$Frost$unref$frost$core$Object$Q(_118);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
_121 = *(&local0);
_122 = ((frost$core$Object*) _121);
frost$core$Frost$unref$frost$core$Object$Q(_122);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block13:;
_126 = *(&local2);
_127 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_127);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block6;
block6:;
_131 = *(&local1);
_132 = ((frost$core$Object*) _131);
frost$core$Frost$unref$frost$core$Object$Q(_132);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:35
_137 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_138 = (frost$core$Int) {1u};
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from ArrayLiteral.frost:35:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_141 = param1.file;
_142 = param1.line;
_143 = param1.column;
_144 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_141, _142, _143);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(_137, _138, _144, param2);
_147 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, _137);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
_149 = ((frost$core$Object*) _147);
frost$core$Frost$ref$frost$core$Object$Q(_149);
_151 = *(&local3);
_152 = ((frost$core$Object*) _151);
frost$core$Frost$unref$frost$core$Object$Q(_152);
*(&local3) = _147;
_155 = ((frost$core$Object*) _147);
frost$core$Frost$unref$frost$core$Object$Q(_155);
_157 = ((frost$core$Object*) _137);
frost$core$Frost$unref$frost$core$Object$Q(_157);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:36
_160 = *(&local3);
_161 = _160 == NULL;
_162 = (frost$core$Bit) {_161};
_163 = _162.value;
if (_163) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:37
// begin inline call to method org.frostlang.frostc.Compiler.error(pos:org.frostlang.frostc.MethodPosition, msg:frost.core.String) from ArrayLiteral.frost:37:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6108
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Compiler.frost:6108:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_170 = param1.file;
_171 = param1.line;
_172 = param1.column;
_173 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_170, _171, _172);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, _173, &$s9);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:38
_178 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_178);
_180 = *(&local3);
_181 = ((frost$core$Object*) _180);
frost$core$Frost$unref$frost$core$Object$Q(_181);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
_184 = *(&local0);
_185 = ((frost$core$Object*) _184);
frost$core$Frost$unref$frost$core$Object$Q(_185);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:40
_190 = *(&local3);
_191 = _190 != NULL;
_192 = (frost$core$Bit) {_191};
_193 = _192.value;
if (_193) goto block21; else goto block22;
block22:;
_195 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _195, &$s11);
abort(); // unreachable
block21:;
_198 = _190;
_199 = org$frostlang$frostc$Compiler$getListType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$Type$GT$Q(param0, _198);
_200 = ((frost$core$Object*) _199);
frost$core$Frost$ref$frost$core$Object$Q(_200);
_202 = *(&local0);
_203 = ((frost$core$Object*) _202);
frost$core$Frost$unref$frost$core$Object$Q(_203);
*(&local0) = _199;
_206 = ((frost$core$Object*) _199);
frost$core$Frost$unref$frost$core$Object$Q(_206);
_208 = *(&local3);
_209 = ((frost$core$Object*) _208);
frost$core$Frost$unref$frost$core$Object$Q(_209);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:43
_214 = *(&local0);
_215 = _214 != NULL;
_216 = (frost$core$Bit) {_215};
_217 = _216.value;
if (_217) goto block23; else goto block24;
block24:;
_219 = (frost$core$Int) {43u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s12, _219, &$s13);
abort(); // unreachable
block23:;
_222 = _214;
_223 = &_222->second;
_224 = *_223;
_225 = ((org$frostlang$frostc$Type*) _224);
// begin inline call to method org.frostlang.frostc.Type.ArrayOf(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from ArrayLiteral.frost:43:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:292
_228 = &param0->ARRAY_TYPE;
_229 = *_228;
_230 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_231 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_230, _231);
_233 = ((frost$core$Object*) _225);
frost$collections$Array$add$frost$collections$Array$T(_230, _233);
_235 = ((frost$collections$ListView*) _230);
_236 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_229, _235);
_237 = ((frost$core$Object*) _236);
frost$core$Frost$ref$frost$core$Object$Q(_237);
_239 = ((frost$core$Object*) _236);
frost$core$Frost$unref$frost$core$Object$Q(_239);
_241 = ((frost$core$Object*) _230);
frost$core$Frost$unref$frost$core$Object$Q(_241);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
_245 = ((frost$core$Object*) _236);
frost$core$Frost$ref$frost$core$Object$Q(_245);
_247 = *(&local4);
_248 = ((frost$core$Object*) _247);
frost$core$Frost$unref$frost$core$Object$Q(_248);
*(&local4) = _236;
_251 = ((frost$core$Object*) _236);
frost$core$Frost$unref$frost$core$Object$Q(_251);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:44
_254 = *(&local4);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from ArrayLiteral.frost:44:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3493
_257 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_258 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3493:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:276
_261 = &param0->CLASS_TYPE;
_262 = *_261;
_263 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_264 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_263, _264);
_266 = ((frost$core$Object*) _254);
frost$collections$Array$add$frost$collections$Array$T(_263, _266);
_268 = ((frost$collections$ListView*) _263);
_269 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_262, _268);
_270 = ((frost$core$Object*) _269);
frost$core$Frost$ref$frost$core$Object$Q(_270);
_272 = ((frost$core$Object*) _269);
frost$core$Frost$unref$frost$core$Object$Q(_272);
_274 = ((frost$core$Object*) _263);
frost$core$Frost$unref$frost$core$Object$Q(_274);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type(_257, _258, _254, _269);
_278 = ((frost$core$Object*) _257);
frost$core$Frost$ref$frost$core$Object$Q(_278);
_280 = ((frost$core$Object*) _269);
frost$core$Frost$unref$frost$core$Object$Q(_280);
_282 = ((frost$core$Object*) _257);
frost$core$Frost$unref$frost$core$Object$Q(_282);
_285 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_286 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_285, _286);
_288 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_289 = (frost$core$Int) {25u};
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from ArrayLiteral.frost:45:38
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_292 = param1.file;
_293 = param1.line;
_294 = param1.column;
_295 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_292, _293, _294);
_297 = ((frost$collections$CollectionView*) param2);
ITable* $tmp14 = _297->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp14 = $tmp14->next;
}
_298 = $tmp14->methods[0];
_299 = _298(_297);
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from ArrayLiteral.frost:45:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
_302 = _299.value;
_303 = ((uint64_t) _302);
_304 = (frost$core$UInt64) {_303};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64(_288, _289, _295, _304);
_307 = ((frost$core$Object*) _288);
frost$collections$Array$add$frost$collections$Array$T(_285, _307);
_309 = ((frost$collections$ListView*) _285);
_310 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_311 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_310, _311);
_313 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _257, _309, _310);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
_315 = ((frost$core$Object*) _313);
frost$core$Frost$ref$frost$core$Object$Q(_315);
_317 = *(&local5);
_318 = ((frost$core$Object*) _317);
frost$core$Frost$unref$frost$core$Object$Q(_318);
*(&local5) = _313;
_321 = ((frost$core$Object*) _313);
frost$core$Frost$unref$frost$core$Object$Q(_321);
_323 = ((frost$core$Object*) _310);
frost$core$Frost$unref$frost$core$Object$Q(_323);
_325 = ((frost$core$Object*) _288);
frost$core$Frost$unref$frost$core$Object$Q(_325);
_327 = ((frost$core$Object*) _285);
frost$core$Frost$unref$frost$core$Object$Q(_327);
_329 = ((frost$core$Object*) _257);
frost$core$Frost$unref$frost$core$Object$Q(_329);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:47
_332 = *(&local5);
_333 = _332 == NULL;
_334 = (frost$core$Bit) {_333};
_335 = _334.value;
if (_335) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:48
_338 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_338);
_340 = *(&local5);
_341 = ((frost$core$Object*) _340);
frost$core$Frost$unref$frost$core$Object$Q(_341);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
_344 = *(&local4);
_345 = ((frost$core$Object*) _344);
frost$core$Frost$unref$frost$core$Object$Q(_345);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
_348 = *(&local0);
_349 = ((frost$core$Object*) _348);
frost$core$Frost$unref$frost$core$Object$Q(_349);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:50
_354 = ((frost$collections$Iterable*) param2);
ITable* $tmp15 = _354->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp15 = $tmp15->next;
}
_355 = $tmp15->methods[0];
_356 = _355(_354);
goto block32;
block32:;
ITable* $tmp16 = _356->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp16 = $tmp16->next;
}
_358 = $tmp16->methods[0];
_359 = _358(_356);
_360 = _359.value;
if (_360) goto block34; else goto block33;
block33:;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp17 = _356->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp17 = $tmp17->next;
}
_363 = $tmp17->methods[1];
_364 = _363(_356);
_365 = ((org$frostlang$frostc$ASTNode*) _364);
_366 = ((frost$core$Object*) _365);
frost$core$Frost$ref$frost$core$Object$Q(_366);
_368 = *(&local6);
_369 = ((frost$core$Object*) _368);
frost$core$Frost$unref$frost$core$Object$Q(_369);
*(&local6) = _365;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:51
_373 = *(&local5);
_374 = _373 != NULL;
_375 = (frost$core$Bit) {_374};
_376 = _375.value;
if (_376) goto block35; else goto block36;
block36:;
_378 = (frost$core$Int) {51u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _378, &$s19);
abort(); // unreachable
block35:;
_381 = _373;
_382 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_383 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_382, _383);
_385 = *(&local6);
_386 = ((frost$core$Object*) _385);
frost$collections$Array$add$frost$collections$Array$T(_382, _386);
_388 = ((frost$collections$ListView*) _382);
_389 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_390 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_389, _390);
_392 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _381, &$s20, _388, _389);
_393 = ((frost$core$Object*) _392);
frost$core$Frost$unref$frost$core$Object$Q(_393);
_395 = ((frost$core$Object*) _389);
frost$core$Frost$unref$frost$core$Object$Q(_395);
_397 = ((frost$core$Object*) _382);
frost$core$Frost$unref$frost$core$Object$Q(_397);
_399 = _364;
frost$core$Frost$unref$frost$core$Object$Q(_399);
_401 = *(&local6);
_402 = ((frost$core$Object*) _401);
frost$core$Frost$unref$frost$core$Object$Q(_402);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block32;
block34:;
_406 = ((frost$core$Object*) _356);
frost$core$Frost$unref$frost$core$Object$Q(_406);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:53
_409 = *(&local0);
_410 = _409 != NULL;
_411 = (frost$core$Bit) {_410};
_412 = _411.value;
if (_412) goto block39; else goto block40;
block40:;
_414 = (frost$core$Int) {53u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s21, _414, &$s22);
abort(); // unreachable
block39:;
_417 = _409;
_418 = &_417->first;
_419 = *_418;
_420 = ((frost$core$Bit$wrapper*) _419)->value;
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ArrayLiteral.frost:53:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_423 = _420.value;
_424 = !_423;
_425 = (frost$core$Bit) {_424};
_427 = _425.value;
if (_427) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:54
_430 = *(&local0);
_431 = _430 != NULL;
_432 = (frost$core$Bit) {_431};
_433 = _432.value;
if (_433) goto block42; else goto block43;
block43:;
_435 = (frost$core$Int) {55u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s23, _435, &$s24);
abort(); // unreachable
block42:;
_438 = _430;
_439 = &_438->second;
_440 = *_439;
_441 = ((org$frostlang$frostc$Type*) _440);
// begin inline call to method org.frostlang.frostc.Type.ImmutableArrayOf(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from ArrayLiteral.frost:55:63
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:297
_444 = &param0->IMMUTABLE_ARRAY_TYPE;
_445 = *_444;
_446 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_447 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_446, _447);
_449 = ((frost$core$Object*) _441);
frost$collections$Array$add$frost$collections$Array$T(_446, _449);
_451 = ((frost$collections$ListView*) _446);
_452 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_445, _451);
_453 = ((frost$core$Object*) _452);
frost$core$Frost$ref$frost$core$Object$Q(_453);
_455 = ((frost$core$Object*) _452);
frost$core$Frost$unref$frost$core$Object$Q(_455);
_457 = ((frost$core$Object*) _446);
frost$core$Frost$unref$frost$core$Object$Q(_457);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from ArrayLiteral.frost:55:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3493
_462 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_463 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3493:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:276
_466 = &param0->CLASS_TYPE;
_467 = *_466;
_468 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_469 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_468, _469);
_471 = ((frost$core$Object*) _452);
frost$collections$Array$add$frost$collections$Array$T(_468, _471);
_473 = ((frost$collections$ListView*) _468);
_474 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_467, _473);
_475 = ((frost$core$Object*) _474);
frost$core$Frost$ref$frost$core$Object$Q(_475);
_477 = ((frost$core$Object*) _474);
frost$core$Frost$unref$frost$core$Object$Q(_477);
_479 = ((frost$core$Object*) _468);
frost$core$Frost$unref$frost$core$Object$Q(_479);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type(_462, _463, _452, _474);
_483 = ((frost$core$Object*) _462);
frost$core$Frost$ref$frost$core$Object$Q(_483);
_485 = ((frost$core$Object*) _474);
frost$core$Frost$unref$frost$core$Object$Q(_485);
_487 = ((frost$core$Object*) _462);
frost$core$Frost$unref$frost$core$Object$Q(_487);
_490 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_491 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_490, _491);
_493 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_494 = (frost$core$Int) {26u};
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from ArrayLiteral.frost:56:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_497 = param1.file;
_498 = param1.line;
_499 = param1.column;
_500 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_497, _498, _499);
_502 = *(&local5);
_503 = _502 != NULL;
_504 = (frost$core$Bit) {_503};
_505 = _504.value;
if (_505) goto block48; else goto block49;
block49:;
_507 = (frost$core$Int) {56u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s25, _507, &$s26);
abort(); // unreachable
block48:;
_510 = _502;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_493, _494, _500, _510);
_512 = ((frost$core$Object*) _493);
frost$collections$Array$add$frost$collections$Array$T(_490, _512);
_514 = ((frost$collections$ListView*) _490);
_515 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_516 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_515, _516);
_518 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _462, &$s27, _514, _515);
_519 = ((frost$core$Object*) _518);
frost$core$Frost$ref$frost$core$Object$Q(_519);
_521 = *(&local5);
_522 = ((frost$core$Object*) _521);
frost$core$Frost$unref$frost$core$Object$Q(_522);
*(&local5) = _518;
_525 = ((frost$core$Object*) _518);
frost$core$Frost$unref$frost$core$Object$Q(_525);
_527 = ((frost$core$Object*) _515);
frost$core$Frost$unref$frost$core$Object$Q(_527);
_529 = ((frost$core$Object*) _493);
frost$core$Frost$unref$frost$core$Object$Q(_529);
_531 = ((frost$core$Object*) _490);
frost$core$Frost$unref$frost$core$Object$Q(_531);
_533 = ((frost$core$Object*) _462);
frost$core$Frost$unref$frost$core$Object$Q(_533);
_535 = ((frost$core$Object*) _452);
frost$core$Frost$unref$frost$core$Object$Q(_535);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:57
_538 = *(&local5);
_539 = _538 == NULL;
_540 = (frost$core$Bit) {_539};
_541 = _540.value;
if (_541) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:58
_544 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_544);
_546 = *(&local5);
_547 = ((frost$core$Object*) _546);
frost$core$Frost$unref$frost$core$Object$Q(_547);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
_550 = *(&local4);
_551 = ((frost$core$Object*) _550);
frost$core$Frost$unref$frost$core$Object$Q(_551);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
_554 = *(&local0);
_555 = ((frost$core$Object*) _554);
frost$core$Frost$unref$frost$core$Object$Q(_555);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block51:;
goto block38;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:61
_561 = *(&local5);
_562 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _561, param3);
_563 = ((frost$core$Object*) _562);
frost$core$Frost$ref$frost$core$Object$Q(_563);
_565 = ((frost$core$Object*) _562);
frost$core$Frost$unref$frost$core$Object$Q(_565);
_567 = *(&local5);
_568 = ((frost$core$Object*) _567);
frost$core$Frost$unref$frost$core$Object$Q(_568);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
_571 = *(&local4);
_572 = ((frost$core$Object*) _571);
frost$core$Frost$unref$frost$core$Object$Q(_572);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
_575 = *(&local0);
_576 = ((frost$core$Object*) _575);
frost$core$Frost$unref$frost$core$Object$Q(_576);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return _562;

}
void org$frostlang$frostc$expression$ArrayLiteral$init(void* rawSelf) {
org$frostlang$frostc$expression$ArrayLiteral* param0 = (org$frostlang$frostc$expression$ArrayLiteral*) rawSelf;

return;

}
void org$frostlang$frostc$expression$ArrayLiteral$cleanup(void* rawSelf) {
org$frostlang$frostc$expression$ArrayLiteral* param0 = (org$frostlang$frostc$expression$ArrayLiteral*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/ArrayLiteral.frost:12
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




