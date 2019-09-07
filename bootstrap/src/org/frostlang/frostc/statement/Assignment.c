#include "org/frostlang/frostc/statement/Assignment.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/lvalue/LValue.h"
#include "frost/core/Bit.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/expression/Binary.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Assignment$class_type org$frostlang$frostc$statement$Assignment$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Assignment$cleanup} };

typedef frost$core$Bit (*$fn2)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn5)(org$frostlang$frostc$lvalue$LValue*);
typedef org$frostlang$frostc$IR$Value* (*$fn6)(org$frostlang$frostc$lvalue$LValue*);
typedef org$frostlang$frostc$Type* (*$fn7)(org$frostlang$frostc$lvalue$LValue*);
typedef void (*$fn8)(org$frostlang$frostc$lvalue$LValue*, org$frostlang$frostc$IR$Value*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74", 41, 2998949642810861948, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 15, 7724162655211760908, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 4890295877816459128, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 8142898892933095984, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 4890295877816459128, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 107, 5030970485974034943, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 4890295877816459128, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 107, 5030970485974034943, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 4890295877816459128, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 4890295877816459128, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 107, 5030970485974034943, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 4890295877816459128, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 107, 5030970485974034943, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 4890295877816459128, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };

void org$frostlang$frostc$statement$Assignment$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$expression$Binary$Operator param3, org$frostlang$frostc$ASTNode* param4) {

org$frostlang$frostc$expression$Binary$Operator local0;
org$frostlang$frostc$expression$Binary$Operator local1;
org$frostlang$frostc$Position local2;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$expression$Binary$Operator local4;
org$frostlang$frostc$ASTNode* local5 = NULL;
org$frostlang$frostc$expression$Binary$Operator local6;
org$frostlang$frostc$expression$Binary$Operator local7;
frost$collections$Array* local8 = NULL;
org$frostlang$frostc$IR$Value* local9 = NULL;
org$frostlang$frostc$lvalue$LValue* local10 = NULL;
org$frostlang$frostc$IR$Value* local11 = NULL;
org$frostlang$frostc$expression$Binary$Operator local12;
org$frostlang$frostc$expression$Binary$Operator local13;
org$frostlang$frostc$IR$Value* local14 = NULL;
frost$core$Bit _1;
bool _4;
bool _5;
frost$core$Bit _6;
bool _8;
frost$core$Equatable* _15;
frost$core$Equatable* _16;
frost$core$Int _17;
frost$core$Int* _20;
org$frostlang$frostc$expression$Binary$Operator _22;
org$frostlang$frostc$expression$Binary$Operator _25;
frost$core$Equatable* _26;
$fn2 _27;
frost$core$Bit _28;
bool _29;
frost$core$Object* _30;
frost$core$Object* _32;
frost$core$Int* _36;
frost$core$Int _37;
frost$core$Int _38;
int64_t _41;
int64_t _42;
bool _43;
frost$core$Bit _44;
bool _46;
org$frostlang$frostc$Position* _48;
org$frostlang$frostc$Position _49;
org$frostlang$frostc$ASTNode** _51;
org$frostlang$frostc$ASTNode* _52;
frost$core$Object* _54;
org$frostlang$frostc$ASTNode* _56;
frost$core$Object* _57;
org$frostlang$frostc$expression$Binary$Operator* _60;
org$frostlang$frostc$expression$Binary$Operator _61;
org$frostlang$frostc$ASTNode** _63;
org$frostlang$frostc$ASTNode* _64;
frost$core$Object* _66;
org$frostlang$frostc$ASTNode* _68;
frost$core$Object* _69;
org$frostlang$frostc$expression$Binary$Operator _73;
frost$core$Equatable* _74;
frost$core$Equatable* _75;
frost$core$Int _76;
frost$core$Int* _79;
org$frostlang$frostc$expression$Binary$Operator _81;
org$frostlang$frostc$expression$Binary$Operator _84;
frost$core$Equatable* _85;
$fn3 _86;
frost$core$Bit _87;
bool _88;
frost$core$Object* _89;
frost$core$Object* _91;
frost$collections$Array* _95;
frost$collections$Array* _96;
frost$core$Object* _99;
frost$collections$Array* _101;
frost$core$Object* _102;
frost$core$Object* _105;
org$frostlang$frostc$ASTNode* _108;
org$frostlang$frostc$Compiler$TypeContext* _109;
frost$core$Int _110;
org$frostlang$frostc$IR$Value* _112;
frost$core$Object* _114;
org$frostlang$frostc$IR$Value* _116;
frost$core$Object* _117;
frost$core$Object* _120;
frost$core$Object* _122;
org$frostlang$frostc$IR$Value* _125;
bool _126;
frost$core$Bit _127;
bool _128;
org$frostlang$frostc$IR$Value* _131;
frost$core$Object* _132;
frost$collections$Array* _135;
frost$core$Object* _136;
org$frostlang$frostc$ASTNode* _139;
frost$core$Object* _140;
org$frostlang$frostc$ASTNode* _143;
frost$core$Object* _144;
frost$collections$Array* _149;
frost$collections$Array* _150;
org$frostlang$frostc$ASTNode* _151;
frost$core$Object* _152;
frost$collections$Array* _155;
frost$collections$Array* _156;
frost$core$Object* _157;
org$frostlang$frostc$Position _160;
org$frostlang$frostc$IR$Value* _161;
bool _162;
frost$core$Bit _163;
bool _164;
frost$core$Int _166;
org$frostlang$frostc$IR$Value* _169;
frost$collections$Array* _170;
frost$collections$ListView* _171;
org$frostlang$frostc$Compiler$TypeContext* _172;
frost$core$Int _173;
org$frostlang$frostc$IR$Value* _175;
frost$core$Object* _176;
frost$core$Object* _178;
org$frostlang$frostc$IR$Value* _181;
frost$core$Object* _182;
frost$collections$Array* _185;
frost$core$Object* _186;
org$frostlang$frostc$ASTNode* _189;
frost$core$Object* _190;
org$frostlang$frostc$ASTNode* _193;
frost$core$Object* _194;
org$frostlang$frostc$ASTNode* _198;
frost$core$Object* _199;
org$frostlang$frostc$ASTNode* _202;
frost$core$Object* _203;
org$frostlang$frostc$lvalue$LValue* _209;
frost$core$Object* _211;
org$frostlang$frostc$lvalue$LValue* _213;
frost$core$Object* _214;
frost$core$Object* _217;
org$frostlang$frostc$lvalue$LValue* _220;
bool _221;
frost$core$Bit _222;
bool _223;
org$frostlang$frostc$lvalue$LValue* _226;
frost$core$Object* _227;
frost$core$Equatable* _234;
frost$core$Equatable* _235;
frost$core$Int _236;
frost$core$Int* _239;
org$frostlang$frostc$expression$Binary$Operator _241;
org$frostlang$frostc$expression$Binary$Operator _244;
frost$core$Equatable* _245;
$fn4 _246;
frost$core$Bit _247;
bool _248;
frost$core$Object* _249;
frost$core$Object* _251;
org$frostlang$frostc$Compiler$TypeContext* _255;
frost$core$Int _256;
org$frostlang$frostc$lvalue$LValue* _257;
bool _258;
frost$core$Bit _259;
bool _260;
frost$core$Int _262;
org$frostlang$frostc$lvalue$LValue* _265;
$fn5 _266;
org$frostlang$frostc$Type* _267;
frost$core$Bit _268;
org$frostlang$frostc$IR$Value* _270;
frost$core$Object* _271;
org$frostlang$frostc$IR$Value* _273;
frost$core$Object* _274;
frost$core$Object* _277;
frost$core$Object* _279;
frost$core$Object* _281;
org$frostlang$frostc$lvalue$LValue* _286;
bool _287;
frost$core$Bit _288;
bool _289;
frost$core$Int _291;
org$frostlang$frostc$lvalue$LValue* _294;
$fn6 _295;
org$frostlang$frostc$IR$Value* _296;
frost$core$Object* _298;
org$frostlang$frostc$IR$Value* _300;
frost$core$Object* _301;
frost$core$Object* _304;
org$frostlang$frostc$IR$Value* _307;
bool _308;
frost$core$Bit _309;
bool _310;
org$frostlang$frostc$IR$Value* _313;
frost$core$Object* _314;
org$frostlang$frostc$IR$Value* _317;
frost$core$Object* _318;
org$frostlang$frostc$lvalue$LValue* _321;
frost$core$Object* _322;
org$frostlang$frostc$ASTNode* _327;
frost$core$Int _328;
org$frostlang$frostc$IR$Value* _329;
bool _330;
frost$core$Bit _331;
bool _332;
frost$core$Int _334;
org$frostlang$frostc$IR$Value* _337;
org$frostlang$frostc$expression$Binary$Operator _339;
org$frostlang$frostc$Compiler$TypeContext* _340;
frost$core$Int _341;
org$frostlang$frostc$lvalue$LValue* _342;
bool _343;
frost$core$Bit _344;
bool _345;
frost$core$Int _347;
org$frostlang$frostc$lvalue$LValue* _350;
$fn7 _351;
org$frostlang$frostc$Type* _352;
frost$core$Bit _353;
org$frostlang$frostc$IR$Value* _355;
frost$core$Object* _356;
org$frostlang$frostc$IR$Value* _358;
frost$core$Object* _359;
frost$core$Object* _362;
frost$core$Object* _364;
frost$core$Object* _366;
frost$core$Object* _368;
org$frostlang$frostc$IR$Value* _370;
frost$core$Object* _371;
org$frostlang$frostc$IR$Value* _376;
bool _377;
frost$core$Bit _378;
bool _379;
org$frostlang$frostc$IR$Value* _382;
frost$core$Object* _383;
org$frostlang$frostc$lvalue$LValue* _386;
frost$core$Object* _387;
org$frostlang$frostc$lvalue$LValue* _392;
bool _393;
frost$core$Bit _394;
bool _395;
frost$core$Int _397;
org$frostlang$frostc$lvalue$LValue* _400;
org$frostlang$frostc$IR$Value* _401;
bool _402;
frost$core$Bit _403;
bool _404;
frost$core$Int _406;
org$frostlang$frostc$IR$Value* _409;
$fn8 _410;
org$frostlang$frostc$IR$Value* _412;
frost$core$Object* _413;
org$frostlang$frostc$lvalue$LValue* _416;
frost$core$Object* _417;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:16
_1 = org$frostlang$frostc$expression$Binary$Operator$get_isAssignment$R$frost$core$Bit(param3);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Assignment.frost:16:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_4 = _1.value;
_5 = !_4;
_6 = (frost$core$Bit) {_5};
_8 = _6.value;
if (_8) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:17
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s9);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:18
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:20
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp10;
$tmp10 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp10->value = param3;
_15 = ((frost$core$Equatable*) $tmp10);
_16 = _15;
_17 = (frost$core$Int) {24u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Assignment.frost:20:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_20 = &(&local1)->$rawValue;
*_20 = _17;
_22 = *(&local1);
*(&local0) = _22;
_25 = *(&local0);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp11;
$tmp11 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp11->value = _25;
_26 = ((frost$core$Equatable*) $tmp11);
ITable* $tmp12 = _16->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp12 = $tmp12->next;
}
_27 = $tmp12->methods[0];
_28 = _27(_16, _26);
_29 = _28.value;
_30 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_30);
_32 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_32);
if (_29) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:21
_36 = &param2->$rawValue;
_37 = *_36;
_38 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Assignment.frost:22:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_41 = _37.value;
_42 = _38.value;
_43 = _41 == _42;
_44 = (frost$core$Bit) {_43};
_46 = _44.value;
if (_46) goto block8; else goto block7;
block8:;
_48 = (org$frostlang$frostc$Position*) (param2->$data + 0);
_49 = *_48;
*(&local2) = _49;
_51 = (org$frostlang$frostc$ASTNode**) (param2->$data + 24);
_52 = *_51;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
_54 = ((frost$core$Object*) _52);
frost$core$Frost$ref$frost$core$Object$Q(_54);
_56 = *(&local3);
_57 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_57);
*(&local3) = _52;
_60 = (org$frostlang$frostc$expression$Binary$Operator*) (param2->$data + 32);
_61 = *_60;
*(&local4) = _61;
_63 = (org$frostlang$frostc$ASTNode**) (param2->$data + 40);
_64 = *_63;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
_66 = ((frost$core$Object*) _64);
frost$core$Frost$ref$frost$core$Object$Q(_66);
_68 = *(&local5);
_69 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_69);
*(&local5) = _64;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:23
_73 = *(&local4);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp13;
$tmp13 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp13->value = _73;
_74 = ((frost$core$Equatable*) $tmp13);
_75 = _74;
_76 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Assignment.frost:23:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_79 = &(&local7)->$rawValue;
*_79 = _76;
_81 = *(&local7);
*(&local6) = _81;
_84 = *(&local6);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp14;
$tmp14 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp14->value = _84;
_85 = ((frost$core$Equatable*) $tmp14);
ITable* $tmp15 = _75->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp15 = $tmp15->next;
}
_86 = $tmp15->methods[0];
_87 = _86(_75, _85);
_88 = _87.value;
_89 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_89);
_91 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_91);
if (_88) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:24
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_95 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_96 = _95;
frost$collections$Array$init(_96);
*(&local8) = ((frost$collections$Array*) NULL);
_99 = ((frost$core$Object*) _95);
frost$core$Frost$ref$frost$core$Object$Q(_99);
_101 = *(&local8);
_102 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_102);
*(&local8) = _95;
_105 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_105);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:25
_108 = *(&local3);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
_109 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_110 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_109, _110);
_112 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, _108, _109);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
_114 = ((frost$core$Object*) _112);
frost$core$Frost$ref$frost$core$Object$Q(_114);
_116 = *(&local9);
_117 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_117);
*(&local9) = _112;
_120 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_120);
_122 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_122);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:26
_125 = *(&local9);
_126 = _125 == NULL;
_127 = (frost$core$Bit) {_126};
_128 = _127.value;
if (_128) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:27
_131 = *(&local9);
_132 = ((frost$core$Object*) _131);
frost$core$Frost$unref$frost$core$Object$Q(_132);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
_135 = *(&local8);
_136 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_136);
*(&local8) = ((frost$collections$Array*) NULL);
_139 = *(&local5);
_140 = ((frost$core$Object*) _139);
frost$core$Frost$unref$frost$core$Object$Q(_140);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
_143 = *(&local3);
_144 = ((frost$core$Object*) _143);
frost$core$Frost$unref$frost$core$Object$Q(_144);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:29
_149 = *(&local8);
_150 = _149;
_151 = *(&local5);
_152 = ((frost$core$Object*) _151);
frost$collections$Array$add$frost$collections$Array$T(_150, _152);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:30
_155 = *(&local8);
_156 = _155;
_157 = ((frost$core$Object*) param4);
frost$collections$Array$add$frost$collections$Array$T(_156, _157);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:31
_160 = *(&local2);
_161 = *(&local9);
_162 = _161 != NULL;
_163 = (frost$core$Bit) {_162};
_164 = _163.value;
if (_164) goto block15; else goto block16;
block16:;
_166 = (frost$core$Int) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s16, _166, &$s17);
abort(); // unreachable
block15:;
_169 = _161;
_170 = *(&local8);
_171 = ((frost$collections$ListView*) _170);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
_172 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_173 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_172, _173);
_175 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, _160, _169, &$s18, _171, _172);
_176 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_176);
_178 = ((frost$core$Object*) _172);
frost$core$Frost$unref$frost$core$Object$Q(_178);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:33
_181 = *(&local9);
_182 = ((frost$core$Object*) _181);
frost$core$Frost$unref$frost$core$Object$Q(_182);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
_185 = *(&local8);
_186 = ((frost$core$Object*) _185);
frost$core$Frost$unref$frost$core$Object$Q(_186);
*(&local8) = ((frost$collections$Array*) NULL);
_189 = *(&local5);
_190 = ((frost$core$Object*) _189);
frost$core$Frost$unref$frost$core$Object$Q(_190);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
_193 = *(&local3);
_194 = ((frost$core$Object*) _193);
frost$core$Frost$unref$frost$core$Object$Q(_194);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return;
block11:;
_198 = *(&local5);
_199 = ((frost$core$Object*) _198);
frost$core$Frost$unref$frost$core$Object$Q(_199);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
_202 = *(&local3);
_203 = ((frost$core$Object*) _202);
frost$core$Frost$unref$frost$core$Object$Q(_203);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block7:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:38
_209 = org$frostlang$frostc$lvalue$LValue$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$lvalue$LValue$Q(param0, param2);
*(&local10) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
_211 = ((frost$core$Object*) _209);
frost$core$Frost$ref$frost$core$Object$Q(_211);
_213 = *(&local10);
_214 = ((frost$core$Object*) _213);
frost$core$Frost$unref$frost$core$Object$Q(_214);
*(&local10) = _209;
_217 = ((frost$core$Object*) _209);
frost$core$Frost$unref$frost$core$Object$Q(_217);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:39
_220 = *(&local10);
_221 = _220 == NULL;
_222 = (frost$core$Bit) {_221};
_223 = _222.value;
if (_223) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:40
_226 = *(&local10);
_227 = ((frost$core$Object*) _226);
frost$core$Frost$unref$frost$core$Object$Q(_227);
*(&local10) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:42
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:43
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp19;
$tmp19 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp19->value = param3;
_234 = ((frost$core$Equatable*) $tmp19);
_235 = _234;
_236 = (frost$core$Int) {24u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Assignment.frost:43:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_239 = &(&local13)->$rawValue;
*_239 = _236;
_241 = *(&local13);
*(&local12) = _241;
_244 = *(&local12);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp20;
$tmp20 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp20->value = _244;
_245 = ((frost$core$Equatable*) $tmp20);
ITable* $tmp21 = _235->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp21 = $tmp21->next;
}
_246 = $tmp21->methods[0];
_247 = _246(_235, _245);
_248 = _247.value;
_249 = ((frost$core$Object*) _245);
frost$core$Frost$unref$frost$core$Object$Q(_249);
_251 = ((frost$core$Object*) _234);
frost$core$Frost$unref$frost$core$Object$Q(_251);
if (_248) goto block19; else goto block21;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:44
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
_255 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_256 = (frost$core$Int) {3u};
_257 = *(&local10);
_258 = _257 != NULL;
_259 = (frost$core$Bit) {_258};
_260 = _259.value;
if (_260) goto block23; else goto block24;
block24:;
_262 = (frost$core$Int) {44u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _262, &$s23);
abort(); // unreachable
block23:;
_265 = _257;
ITable* $tmp24 = _265->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp24 = $tmp24->next;
}
_266 = $tmp24->methods[0];
_267 = _266(_265);
_268 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_255, _256, _267, _268);
_270 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, _255);
_271 = ((frost$core$Object*) _270);
frost$core$Frost$ref$frost$core$Object$Q(_271);
_273 = *(&local11);
_274 = ((frost$core$Object*) _273);
frost$core$Frost$unref$frost$core$Object$Q(_274);
*(&local11) = _270;
_277 = ((frost$core$Object*) _270);
frost$core$Frost$unref$frost$core$Object$Q(_277);
_279 = ((frost$core$Object*) _267);
frost$core$Frost$unref$frost$core$Object$Q(_279);
_281 = ((frost$core$Object*) _255);
frost$core$Frost$unref$frost$core$Object$Q(_281);
goto block20;
block21:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:47
_286 = *(&local10);
_287 = _286 != NULL;
_288 = (frost$core$Bit) {_287};
_289 = _288.value;
if (_289) goto block25; else goto block26;
block26:;
_291 = (frost$core$Int) {47u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s25, _291, &$s26);
abort(); // unreachable
block25:;
_294 = _286;
ITable* $tmp27 = _294->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp27 = $tmp27->next;
}
_295 = $tmp27->methods[1];
_296 = _295(_294);
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
_298 = ((frost$core$Object*) _296);
frost$core$Frost$ref$frost$core$Object$Q(_298);
_300 = *(&local14);
_301 = ((frost$core$Object*) _300);
frost$core$Frost$unref$frost$core$Object$Q(_301);
*(&local14) = _296;
_304 = ((frost$core$Object*) _296);
frost$core$Frost$unref$frost$core$Object$Q(_304);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:48
_307 = *(&local14);
_308 = _307 == NULL;
_309 = (frost$core$Bit) {_308};
_310 = _309.value;
if (_310) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:49
_313 = *(&local14);
_314 = ((frost$core$Object*) _313);
frost$core$Frost$unref$frost$core$Object$Q(_314);
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
_317 = *(&local11);
_318 = ((frost$core$Object*) _317);
frost$core$Frost$unref$frost$core$Object$Q(_318);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
_321 = *(&local10);
_322 = ((frost$core$Object*) _321);
frost$core$Frost$unref$frost$core$Object$Q(_322);
*(&local10) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:51
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
_327 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_328 = (frost$core$Int) {26u};
_329 = *(&local14);
_330 = _329 != NULL;
_331 = (frost$core$Bit) {_330};
_332 = _331.value;
if (_332) goto block29; else goto block30;
block30:;
_334 = (frost$core$Int) {51u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s28, _334, &$s29);
abort(); // unreachable
block29:;
_337 = _329;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_327, _328, param1, _337);
_339 = org$frostlang$frostc$expression$Binary$Operator$removeAssignment$R$org$frostlang$frostc$expression$Binary$Operator(param3);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
_340 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_341 = (frost$core$Int) {3u};
_342 = *(&local10);
_343 = _342 != NULL;
_344 = (frost$core$Bit) {_343};
_345 = _344.value;
if (_345) goto block31; else goto block32;
block32:;
_347 = (frost$core$Int) {52u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s30, _347, &$s31);
abort(); // unreachable
block31:;
_350 = _342;
ITable* $tmp32 = _350->$class->itable;
while ($tmp32->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp32 = $tmp32->next;
}
_351 = $tmp32->methods[0];
_352 = _351(_350);
_353 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_340, _341, _352, _353);
_355 = org$frostlang$frostc$expression$Binary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _327, _339, param4, _340);
_356 = ((frost$core$Object*) _355);
frost$core$Frost$ref$frost$core$Object$Q(_356);
_358 = *(&local11);
_359 = ((frost$core$Object*) _358);
frost$core$Frost$unref$frost$core$Object$Q(_359);
*(&local11) = _355;
_362 = ((frost$core$Object*) _355);
frost$core$Frost$unref$frost$core$Object$Q(_362);
_364 = ((frost$core$Object*) _352);
frost$core$Frost$unref$frost$core$Object$Q(_364);
_366 = ((frost$core$Object*) _340);
frost$core$Frost$unref$frost$core$Object$Q(_366);
_368 = ((frost$core$Object*) _327);
frost$core$Frost$unref$frost$core$Object$Q(_368);
_370 = *(&local14);
_371 = ((frost$core$Object*) _370);
frost$core$Frost$unref$frost$core$Object$Q(_371);
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:54
_376 = *(&local11);
_377 = _376 == NULL;
_378 = (frost$core$Bit) {_377};
_379 = _378.value;
if (_379) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:55
_382 = *(&local11);
_383 = ((frost$core$Object*) _382);
frost$core$Frost$unref$frost$core$Object$Q(_383);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
_386 = *(&local10);
_387 = ((frost$core$Object*) _386);
frost$core$Frost$unref$frost$core$Object$Q(_387);
*(&local10) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:57
_392 = *(&local10);
_393 = _392 != NULL;
_394 = (frost$core$Bit) {_393};
_395 = _394.value;
if (_395) goto block35; else goto block36;
block36:;
_397 = (frost$core$Int) {57u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s33, _397, &$s34);
abort(); // unreachable
block35:;
_400 = _392;
_401 = *(&local11);
_402 = _401 != NULL;
_403 = (frost$core$Bit) {_402};
_404 = _403.value;
if (_404) goto block37; else goto block38;
block38:;
_406 = (frost$core$Int) {57u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s35, _406, &$s36);
abort(); // unreachable
block37:;
_409 = _401;
ITable* $tmp37 = _400->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp37 = $tmp37->next;
}
_410 = $tmp37->methods[2];
_410(_400, _409);
_412 = *(&local11);
_413 = ((frost$core$Object*) _412);
frost$core$Frost$unref$frost$core$Object$Q(_413);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
_416 = *(&local10);
_417 = ((frost$core$Object*) _416);
frost$core$Frost$unref$frost$core$Object$Q(_417);
*(&local10) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;

}
void org$frostlang$frostc$statement$Assignment$init(org$frostlang$frostc$statement$Assignment* param0) {

return;

}
void org$frostlang$frostc$statement$Assignment$cleanup(org$frostlang$frostc$statement$Assignment* param0) {

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:12
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}






