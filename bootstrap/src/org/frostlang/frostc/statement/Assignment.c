#include "org/frostlang/frostc/statement/Assignment.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/MethodPosition.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/lvalue/LValue.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "frost/collections/Stack.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/expression/Binary.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$statement$Assignment$class_type org$frostlang$frostc$statement$Assignment$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Assignment$cleanup} };

typedef frost$core$Bit (*$fn2)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn5)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn6)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn7)(org$frostlang$frostc$lvalue$LValue*);
typedef org$frostlang$frostc$IR$Value* (*$fn8)(org$frostlang$frostc$lvalue$LValue*);
typedef org$frostlang$frostc$Type* (*$fn9)(org$frostlang$frostc$lvalue$LValue*);
typedef void (*$fn10)(org$frostlang$frostc$lvalue$LValue*, org$frostlang$frostc$IR$Value*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74", 41, 2998949642810861948, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6e\x6f\x74\x20\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 15, 7724162655211760908, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 4890295877816459128, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x5b\x5d\x3a\x3d", 4, 8142898892933095984, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 4890295877816459128, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 107, 5030970485974034943, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 4890295877816459128, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 107, 5030970485974034943, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 4890295877816459128, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 4890295877816459128, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 107, 5030970485974034943, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 4890295877816459128, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x6c\x76\x61\x6c\x75\x65\x2e\x4c\x56\x61\x6c\x75\x65", 107, 5030970485974034943, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2e\x66\x72\x6f\x73\x74", 16, 4890295877816459128, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };

void org$frostlang$frostc$statement$Assignment$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$MethodPosition param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$expression$Binary$Operator param3, org$frostlang$frostc$ASTNode* param4) {

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
frost$core$Int _15;
frost$core$Int _16;
frost$core$Int _17;
org$frostlang$frostc$Position _18;
frost$core$Equatable* _25;
frost$core$Int _26;
frost$core$Int* _29;
org$frostlang$frostc$expression$Binary$Operator _31;
org$frostlang$frostc$expression$Binary$Operator _34;
frost$core$Equatable* _35;
$fn2 _36;
frost$core$Bit _37;
bool _38;
frost$core$Object* _39;
frost$core$Object* _41;
frost$core$Int* _45;
frost$core$Int _46;
frost$core$Int _47;
int64_t _50;
int64_t _51;
bool _52;
frost$core$Bit _53;
bool _55;
org$frostlang$frostc$Position* _57;
org$frostlang$frostc$Position _58;
org$frostlang$frostc$ASTNode** _60;
org$frostlang$frostc$ASTNode* _61;
frost$core$Object* _63;
org$frostlang$frostc$ASTNode* _65;
frost$core$Object* _66;
org$frostlang$frostc$expression$Binary$Operator* _69;
org$frostlang$frostc$expression$Binary$Operator _70;
org$frostlang$frostc$ASTNode** _72;
org$frostlang$frostc$ASTNode* _73;
frost$core$Object* _75;
org$frostlang$frostc$ASTNode* _77;
frost$core$Object* _78;
org$frostlang$frostc$expression$Binary$Operator _82;
frost$core$Equatable* _83;
frost$core$Int _84;
frost$core$Int* _87;
org$frostlang$frostc$expression$Binary$Operator _89;
org$frostlang$frostc$expression$Binary$Operator _92;
frost$core$Equatable* _93;
$fn3 _94;
frost$core$Bit _95;
bool _96;
frost$core$Object* _97;
frost$core$Object* _99;
frost$collections$Array* _103;
frost$core$Object* _106;
frost$collections$Array* _108;
frost$core$Object* _109;
frost$core$Object* _112;
org$frostlang$frostc$ASTNode* _115;
org$frostlang$frostc$Compiler$TypeContext* _116;
frost$core$Int _117;
org$frostlang$frostc$IR$Value* _119;
frost$core$Object* _121;
org$frostlang$frostc$IR$Value* _123;
frost$core$Object* _124;
frost$core$Object* _127;
frost$core$Object* _129;
org$frostlang$frostc$IR$Value* _132;
bool _133;
frost$core$Bit _134;
bool _135;
org$frostlang$frostc$IR$Value* _138;
frost$core$Object* _139;
frost$collections$Array* _142;
frost$core$Object* _143;
org$frostlang$frostc$ASTNode* _146;
frost$core$Object* _147;
org$frostlang$frostc$ASTNode* _150;
frost$core$Object* _151;
frost$collections$Array* _156;
org$frostlang$frostc$ASTNode* _157;
frost$core$Object* _158;
frost$collections$Array* _161;
frost$core$Object* _162;
org$frostlang$frostc$Position _165;
frost$collections$Stack** _168;
frost$collections$Stack* _169;
frost$core$Int _170;
frost$core$Int _172;
int64_t _173;
int64_t _174;
bool _175;
frost$core$Bit _176;
bool _177;
frost$core$Int _179;
int64_t _180;
int64_t _181;
bool _182;
frost$core$Bit _183;
bool _184;
frost$core$Int _186;
frost$collections$Array** _190;
frost$collections$Array* _191;
frost$collections$CollectionView* _192;
$fn4 _193;
frost$core$Int _194;
int64_t _195;
int64_t _196;
bool _197;
frost$core$Bit _198;
bool _199;
frost$core$Int _201;
frost$collections$Array** _205;
frost$collections$Array* _206;
frost$collections$Array** _207;
frost$collections$Array* _208;
frost$collections$CollectionView* _209;
$fn5 _210;
frost$core$Int _211;
frost$core$Int _212;
int64_t _213;
int64_t _214;
int64_t _215;
frost$core$Int _216;
int64_t _217;
int64_t _218;
int64_t _219;
frost$core$Int _220;
frost$core$Object* _221;
frost$core$Object* _222;
frost$core$Object* _223;
frost$core$Object* _225;
org$frostlang$frostc$MethodDecl* _228;
frost$core$Int* _229;
frost$core$Int _230;
frost$core$Object* _231;
org$frostlang$frostc$MethodPosition _234;
org$frostlang$frostc$IR$Value* _235;
bool _236;
frost$core$Bit _237;
bool _238;
frost$core$Int _240;
org$frostlang$frostc$IR$Value* _243;
frost$collections$Array* _244;
frost$collections$ListView* _245;
org$frostlang$frostc$Compiler$TypeContext* _246;
frost$core$Int _247;
org$frostlang$frostc$IR$Value* _249;
frost$core$Object* _250;
frost$core$Object* _252;
org$frostlang$frostc$IR$Value* _255;
frost$core$Object* _256;
frost$collections$Array* _259;
frost$core$Object* _260;
org$frostlang$frostc$ASTNode* _263;
frost$core$Object* _264;
org$frostlang$frostc$ASTNode* _267;
frost$core$Object* _268;
org$frostlang$frostc$ASTNode* _272;
frost$core$Object* _273;
org$frostlang$frostc$ASTNode* _276;
frost$core$Object* _277;
org$frostlang$frostc$lvalue$LValue* _283;
frost$core$Object* _285;
org$frostlang$frostc$lvalue$LValue* _287;
frost$core$Object* _288;
frost$core$Object* _291;
org$frostlang$frostc$lvalue$LValue* _294;
bool _295;
frost$core$Bit _296;
bool _297;
org$frostlang$frostc$lvalue$LValue* _300;
frost$core$Object* _301;
frost$core$Equatable* _308;
frost$core$Int _309;
frost$core$Int* _312;
org$frostlang$frostc$expression$Binary$Operator _314;
org$frostlang$frostc$expression$Binary$Operator _317;
frost$core$Equatable* _318;
$fn6 _319;
frost$core$Bit _320;
bool _321;
frost$core$Object* _322;
frost$core$Object* _324;
org$frostlang$frostc$Compiler$TypeContext* _328;
frost$core$Int _329;
org$frostlang$frostc$lvalue$LValue* _330;
bool _331;
frost$core$Bit _332;
bool _333;
frost$core$Int _335;
org$frostlang$frostc$lvalue$LValue* _338;
$fn7 _339;
org$frostlang$frostc$Type* _340;
frost$core$Bit _341;
org$frostlang$frostc$IR$Value* _343;
frost$core$Object* _344;
org$frostlang$frostc$IR$Value* _346;
frost$core$Object* _347;
frost$core$Object* _350;
frost$core$Object* _352;
frost$core$Object* _354;
org$frostlang$frostc$lvalue$LValue* _359;
bool _360;
frost$core$Bit _361;
bool _362;
frost$core$Int _364;
org$frostlang$frostc$lvalue$LValue* _367;
$fn8 _368;
org$frostlang$frostc$IR$Value* _369;
frost$core$Object* _371;
org$frostlang$frostc$IR$Value* _373;
frost$core$Object* _374;
frost$core$Object* _377;
org$frostlang$frostc$IR$Value* _380;
bool _381;
frost$core$Bit _382;
bool _383;
org$frostlang$frostc$IR$Value* _386;
frost$core$Object* _387;
org$frostlang$frostc$IR$Value* _390;
frost$core$Object* _391;
org$frostlang$frostc$lvalue$LValue* _394;
frost$core$Object* _395;
org$frostlang$frostc$ASTNode* _400;
frost$core$Int _401;
frost$core$Int _404;
frost$core$Int _405;
frost$core$Int _406;
org$frostlang$frostc$Position _407;
org$frostlang$frostc$IR$Value* _409;
bool _410;
frost$core$Bit _411;
bool _412;
frost$core$Int _414;
org$frostlang$frostc$IR$Value* _417;
org$frostlang$frostc$expression$Binary$Operator _419;
org$frostlang$frostc$Compiler$TypeContext* _420;
frost$core$Int _421;
org$frostlang$frostc$lvalue$LValue* _422;
bool _423;
frost$core$Bit _424;
bool _425;
frost$core$Int _427;
org$frostlang$frostc$lvalue$LValue* _430;
$fn9 _431;
org$frostlang$frostc$Type* _432;
frost$core$Bit _433;
org$frostlang$frostc$IR$Value* _435;
frost$core$Object* _436;
org$frostlang$frostc$IR$Value* _438;
frost$core$Object* _439;
frost$core$Object* _442;
frost$core$Object* _444;
frost$core$Object* _446;
frost$core$Object* _448;
org$frostlang$frostc$IR$Value* _450;
frost$core$Object* _451;
org$frostlang$frostc$IR$Value* _456;
bool _457;
frost$core$Bit _458;
bool _459;
org$frostlang$frostc$IR$Value* _462;
frost$core$Object* _463;
org$frostlang$frostc$lvalue$LValue* _466;
frost$core$Object* _467;
org$frostlang$frostc$lvalue$LValue* _472;
bool _473;
frost$core$Bit _474;
bool _475;
frost$core$Int _477;
org$frostlang$frostc$lvalue$LValue* _480;
org$frostlang$frostc$IR$Value* _481;
bool _482;
frost$core$Bit _483;
bool _484;
frost$core$Int _486;
org$frostlang$frostc$IR$Value* _489;
$fn10 _490;
org$frostlang$frostc$IR$Value* _492;
frost$core$Object* _493;
org$frostlang$frostc$lvalue$LValue* _496;
frost$core$Object* _497;
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
// begin inline call to method org.frostlang.frostc.Compiler.error(pos:org.frostlang.frostc.MethodPosition, msg:frost.core.String) from Assignment.frost:17:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6109
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Compiler.frost:6109:18
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_15 = param1.file;
_16 = param1.line;
_17 = param1.column;
_18 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_15, _16, _17);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, _18, &$s11);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:18
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:20
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp12;
$tmp12 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$expression$Binary$Operator$wrapper), (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp12->value = param3;
_25 = ((frost$core$Equatable*) $tmp12);
_26 = (frost$core$Int) {25u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Assignment.frost:20:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:18
_29 = &(&local1)->$rawValue;
*_29 = _26;
_31 = *(&local1);
*(&local0) = _31;
_34 = *(&local0);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp13;
$tmp13 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$expression$Binary$Operator$wrapper), (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp13->value = _34;
_35 = ((frost$core$Equatable*) $tmp13);
ITable* $tmp14 = _25->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp14 = $tmp14->next;
}
_36 = $tmp14->methods[0];
_37 = _36(_25, _35);
_38 = _37.value;
_39 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_39);
_41 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_41);
if (_38) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:21
_45 = &param2->$rawValue;
_46 = *_45;
_47 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Assignment.frost:22:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_50 = _46.value;
_51 = _47.value;
_52 = _50 == _51;
_53 = (frost$core$Bit) {_52};
_55 = _53.value;
if (_55) goto block10; else goto block9;
block10:;
_57 = &param2->$data.$BINARY.field0;
_58 = *_57;
*(&local2) = _58;
_60 = &param2->$data.$BINARY.field1;
_61 = *_60;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
_63 = ((frost$core$Object*) _61);
frost$core$Frost$ref$frost$core$Object$Q(_63);
_65 = *(&local3);
_66 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_66);
*(&local3) = _61;
_69 = &param2->$data.$BINARY.field2;
_70 = *_69;
*(&local4) = _70;
_72 = &param2->$data.$BINARY.field3;
_73 = *_72;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
_75 = ((frost$core$Object*) _73);
frost$core$Frost$ref$frost$core$Object$Q(_75);
_77 = *(&local5);
_78 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_78);
*(&local5) = _73;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:23
_82 = *(&local4);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp15;
$tmp15 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$expression$Binary$Operator$wrapper), (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp15->value = _82;
_83 = ((frost$core$Equatable*) $tmp15);
_84 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Assignment.frost:23:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:18
_87 = &(&local7)->$rawValue;
*_87 = _84;
_89 = *(&local7);
*(&local6) = _89;
_92 = *(&local6);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp16;
$tmp16 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$expression$Binary$Operator$wrapper), (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp16->value = _92;
_93 = ((frost$core$Equatable*) $tmp16);
ITable* $tmp17 = _83->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp17 = $tmp17->next;
}
_94 = $tmp17->methods[0];
_95 = _94(_83, _93);
_96 = _95.value;
_97 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_97);
_99 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_99);
if (_96) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:24
_103 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_103);
*(&local8) = ((frost$collections$Array*) NULL);
_106 = ((frost$core$Object*) _103);
frost$core$Frost$ref$frost$core$Object$Q(_106);
_108 = *(&local8);
_109 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_109);
*(&local8) = _103;
_112 = ((frost$core$Object*) _103);
frost$core$Frost$unref$frost$core$Object$Q(_112);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:25
_115 = *(&local3);
_116 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_117 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_116, _117);
_119 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, _115, _116);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
_121 = ((frost$core$Object*) _119);
frost$core$Frost$ref$frost$core$Object$Q(_121);
_123 = *(&local9);
_124 = ((frost$core$Object*) _123);
frost$core$Frost$unref$frost$core$Object$Q(_124);
*(&local9) = _119;
_127 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_127);
_129 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_129);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:26
_132 = *(&local9);
_133 = _132 == NULL;
_134 = (frost$core$Bit) {_133};
_135 = _134.value;
if (_135) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:27
_138 = *(&local9);
_139 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_139);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
_142 = *(&local8);
_143 = ((frost$core$Object*) _142);
frost$core$Frost$unref$frost$core$Object$Q(_143);
*(&local8) = ((frost$collections$Array*) NULL);
_146 = *(&local5);
_147 = ((frost$core$Object*) _146);
frost$core$Frost$unref$frost$core$Object$Q(_147);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
_150 = *(&local3);
_151 = ((frost$core$Object*) _150);
frost$core$Frost$unref$frost$core$Object$Q(_151);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:29
_156 = *(&local8);
_157 = *(&local5);
_158 = ((frost$core$Object*) _157);
frost$collections$Array$add$frost$collections$Array$T(_156, _158);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:30
_161 = *(&local8);
_162 = ((frost$core$Object*) param4);
frost$collections$Array$add$frost$collections$Array$T(_161, _162);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:31
_165 = *(&local2);
// begin inline call to function org.frostlang.frostc.Compiler.get_currentMethodIndex():frost.core.Int from Assignment.frost:32:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:676
_168 = &param0->currentMethod;
_169 = *_168;
_170 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Compiler.frost:676:29
_172 = (frost$core$Int) {0u};
_173 = _170.value;
_174 = _172.value;
_175 = _173 >= _174;
_176 = (frost$core$Bit) {_175};
_177 = _176.value;
if (_177) goto block21; else goto block20;
block21:;
_179 = frost$collections$Stack$get_count$R$frost$core$Int(_169);
_180 = _170.value;
_181 = _179.value;
_182 = _180 < _181;
_183 = (frost$core$Bit) {_182};
_184 = _183.value;
if (_184) goto block19; else goto block20;
block20:;
_186 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _186, &$s19);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_190 = &_169->contents;
_191 = *_190;
_192 = ((frost$collections$CollectionView*) _191);
ITable* $tmp20 = _192->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp20 = $tmp20->next;
}
_193 = $tmp20->methods[0];
_194 = _193(_192);
_195 = _194.value;
_196 = _170.value;
_197 = _195 > _196;
_198 = (frost$core$Bit) {_197};
_199 = _198.value;
if (_199) goto block22; else goto block23;
block23:;
_201 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s21, _201);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_205 = &_169->contents;
_206 = *_205;
_207 = &_169->contents;
_208 = *_207;
_209 = ((frost$collections$CollectionView*) _208);
ITable* $tmp22 = _209->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp22 = $tmp22->next;
}
_210 = $tmp22->methods[0];
_211 = _210(_209);
_212 = (frost$core$Int) {1u};
_213 = _211.value;
_214 = _212.value;
_215 = _213 - _214;
_216 = (frost$core$Int) {_215};
_217 = _216.value;
_218 = _170.value;
_219 = _217 - _218;
_220 = (frost$core$Int) {_219};
_221 = frost$collections$Array$$IDX$frost$core$Int$R$frost$collections$Array$T(_206, _220);
_222 = _221;
_223 = _222;
frost$core$Frost$ref$frost$core$Object$Q(_223);
_225 = _221;
frost$core$Frost$unref$frost$core$Object$Q(_225);
_228 = ((org$frostlang$frostc$MethodDecl*) _222);
_229 = &_228->index;
_230 = *_229;
_231 = _222;
frost$core$Frost$unref$frost$core$Object$Q(_231);
_234 = org$frostlang$frostc$MethodPosition$init$org$frostlang$frostc$Position$frost$core$Int(_165, _230);
_235 = *(&local9);
_236 = _235 != NULL;
_237 = (frost$core$Bit) {_236};
_238 = _237.value;
if (_238) goto block24; else goto block25;
block25:;
_240 = (frost$core$Int) {32u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s23, _240, &$s24);
abort(); // unreachable
block24:;
_243 = _235;
_244 = *(&local8);
_245 = ((frost$collections$ListView*) _244);
_246 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_247 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_246, _247);
_249 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, _234, _243, &$s25, _245, _246);
_250 = ((frost$core$Object*) _249);
frost$core$Frost$unref$frost$core$Object$Q(_250);
_252 = ((frost$core$Object*) _246);
frost$core$Frost$unref$frost$core$Object$Q(_252);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:34
_255 = *(&local9);
_256 = ((frost$core$Object*) _255);
frost$core$Frost$unref$frost$core$Object$Q(_256);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
_259 = *(&local8);
_260 = ((frost$core$Object*) _259);
frost$core$Frost$unref$frost$core$Object$Q(_260);
*(&local8) = ((frost$collections$Array*) NULL);
_263 = *(&local5);
_264 = ((frost$core$Object*) _263);
frost$core$Frost$unref$frost$core$Object$Q(_264);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
_267 = *(&local3);
_268 = ((frost$core$Object*) _267);
frost$core$Frost$unref$frost$core$Object$Q(_268);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return;
block13:;
_272 = *(&local5);
_273 = ((frost$core$Object*) _272);
frost$core$Frost$unref$frost$core$Object$Q(_273);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
_276 = *(&local3);
_277 = ((frost$core$Object*) _276);
frost$core$Frost$unref$frost$core$Object$Q(_277);
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block9:;
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:39
_283 = org$frostlang$frostc$lvalue$LValue$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$lvalue$LValue$Q(param0, param2);
*(&local10) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
_285 = ((frost$core$Object*) _283);
frost$core$Frost$ref$frost$core$Object$Q(_285);
_287 = *(&local10);
_288 = ((frost$core$Object*) _287);
frost$core$Frost$unref$frost$core$Object$Q(_288);
*(&local10) = _283;
_291 = ((frost$core$Object*) _283);
frost$core$Frost$unref$frost$core$Object$Q(_291);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:40
_294 = *(&local10);
_295 = _294 == NULL;
_296 = (frost$core$Bit) {_295};
_297 = _296.value;
if (_297) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:41
_300 = *(&local10);
_301 = ((frost$core$Object*) _300);
frost$core$Frost$unref$frost$core$Object$Q(_301);
*(&local10) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:43
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:44
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp26;
$tmp26 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$expression$Binary$Operator$wrapper), (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp26->value = param3;
_308 = ((frost$core$Equatable*) $tmp26);
_309 = (frost$core$Int) {25u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Assignment.frost:44:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:18
_312 = &(&local13)->$rawValue;
*_312 = _309;
_314 = *(&local13);
*(&local12) = _314;
_317 = *(&local12);
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp27;
$tmp27 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$expression$Binary$Operator$wrapper), (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp27->value = _317;
_318 = ((frost$core$Equatable*) $tmp27);
ITable* $tmp28 = _308->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp28 = $tmp28->next;
}
_319 = $tmp28->methods[0];
_320 = _319(_308, _318);
_321 = _320.value;
_322 = ((frost$core$Object*) _318);
frost$core$Frost$unref$frost$core$Object$Q(_322);
_324 = ((frost$core$Object*) _308);
frost$core$Frost$unref$frost$core$Object$Q(_324);
if (_321) goto block28; else goto block30;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:45
_328 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_329 = (frost$core$Int) {3u};
_330 = *(&local10);
_331 = _330 != NULL;
_332 = (frost$core$Bit) {_331};
_333 = _332.value;
if (_333) goto block32; else goto block33;
block33:;
_335 = (frost$core$Int) {45u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s29, _335, &$s30);
abort(); // unreachable
block32:;
_338 = _330;
ITable* $tmp31 = _338->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp31 = $tmp31->next;
}
_339 = $tmp31->methods[0];
_340 = _339(_338);
_341 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_328, _329, _340, _341);
_343 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, _328);
_344 = ((frost$core$Object*) _343);
frost$core$Frost$ref$frost$core$Object$Q(_344);
_346 = *(&local11);
_347 = ((frost$core$Object*) _346);
frost$core$Frost$unref$frost$core$Object$Q(_347);
*(&local11) = _343;
_350 = ((frost$core$Object*) _343);
frost$core$Frost$unref$frost$core$Object$Q(_350);
_352 = ((frost$core$Object*) _340);
frost$core$Frost$unref$frost$core$Object$Q(_352);
_354 = ((frost$core$Object*) _328);
frost$core$Frost$unref$frost$core$Object$Q(_354);
goto block29;
block30:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:48
_359 = *(&local10);
_360 = _359 != NULL;
_361 = (frost$core$Bit) {_360};
_362 = _361.value;
if (_362) goto block34; else goto block35;
block35:;
_364 = (frost$core$Int) {48u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s32, _364, &$s33);
abort(); // unreachable
block34:;
_367 = _359;
ITable* $tmp34 = _367->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp34 = $tmp34->next;
}
_368 = $tmp34->methods[1];
_369 = _368(_367);
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
_371 = ((frost$core$Object*) _369);
frost$core$Frost$ref$frost$core$Object$Q(_371);
_373 = *(&local14);
_374 = ((frost$core$Object*) _373);
frost$core$Frost$unref$frost$core$Object$Q(_374);
*(&local14) = _369;
_377 = ((frost$core$Object*) _369);
frost$core$Frost$unref$frost$core$Object$Q(_377);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:49
_380 = *(&local14);
_381 = _380 == NULL;
_382 = (frost$core$Bit) {_381};
_383 = _382.value;
if (_383) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:50
_386 = *(&local14);
_387 = ((frost$core$Object*) _386);
frost$core$Frost$unref$frost$core$Object$Q(_387);
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
_390 = *(&local11);
_391 = ((frost$core$Object*) _390);
frost$core$Frost$unref$frost$core$Object$Q(_391);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
_394 = *(&local10);
_395 = ((frost$core$Object*) _394);
frost$core$Frost$unref$frost$core$Object$Q(_395);
*(&local10) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:52
_400 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_401 = (frost$core$Int) {26u};
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Assignment.frost:53:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_404 = param1.file;
_405 = param1.line;
_406 = param1.column;
_407 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_404, _405, _406);
_409 = *(&local14);
_410 = _409 != NULL;
_411 = (frost$core$Bit) {_410};
_412 = _411.value;
if (_412) goto block39; else goto block40;
block40:;
_414 = (frost$core$Int) {53u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s35, _414, &$s36);
abort(); // unreachable
block39:;
_417 = _409;
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_400, _401, _407, _417);
_419 = org$frostlang$frostc$expression$Binary$Operator$removeAssignment$R$org$frostlang$frostc$expression$Binary$Operator(param3);
_420 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_421 = (frost$core$Int) {3u};
_422 = *(&local10);
_423 = _422 != NULL;
_424 = (frost$core$Bit) {_423};
_425 = _424.value;
if (_425) goto block41; else goto block42;
block42:;
_427 = (frost$core$Int) {54u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s37, _427, &$s38);
abort(); // unreachable
block41:;
_430 = _422;
ITable* $tmp39 = _430->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp39 = $tmp39->next;
}
_431 = $tmp39->methods[0];
_432 = _431(_430);
_433 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_420, _421, _432, _433);
_435 = org$frostlang$frostc$expression$Binary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, _400, _419, param4, _420);
_436 = ((frost$core$Object*) _435);
frost$core$Frost$ref$frost$core$Object$Q(_436);
_438 = *(&local11);
_439 = ((frost$core$Object*) _438);
frost$core$Frost$unref$frost$core$Object$Q(_439);
*(&local11) = _435;
_442 = ((frost$core$Object*) _435);
frost$core$Frost$unref$frost$core$Object$Q(_442);
_444 = ((frost$core$Object*) _432);
frost$core$Frost$unref$frost$core$Object$Q(_444);
_446 = ((frost$core$Object*) _420);
frost$core$Frost$unref$frost$core$Object$Q(_446);
_448 = ((frost$core$Object*) _400);
frost$core$Frost$unref$frost$core$Object$Q(_448);
_450 = *(&local14);
_451 = ((frost$core$Object*) _450);
frost$core$Frost$unref$frost$core$Object$Q(_451);
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block29;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:56
_456 = *(&local11);
_457 = _456 == NULL;
_458 = (frost$core$Bit) {_457};
_459 = _458.value;
if (_459) goto block43; else goto block44;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:57
_462 = *(&local11);
_463 = ((frost$core$Object*) _462);
frost$core$Frost$unref$frost$core$Object$Q(_463);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
_466 = *(&local10);
_467 = ((frost$core$Object*) _466);
frost$core$Frost$unref$frost$core$Object$Q(_467);
*(&local10) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:59
_472 = *(&local10);
_473 = _472 != NULL;
_474 = (frost$core$Bit) {_473};
_475 = _474.value;
if (_475) goto block45; else goto block46;
block46:;
_477 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s40, _477, &$s41);
abort(); // unreachable
block45:;
_480 = _472;
_481 = *(&local11);
_482 = _481 != NULL;
_483 = (frost$core$Bit) {_482};
_484 = _483.value;
if (_484) goto block47; else goto block48;
block48:;
_486 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s42, _486, &$s43);
abort(); // unreachable
block47:;
_489 = _481;
ITable* $tmp44 = _480->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &org$frostlang$frostc$lvalue$LValue$class) {
    $tmp44 = $tmp44->next;
}
_490 = $tmp44->methods[2];
_490(_480, _489);
_492 = *(&local11);
_493 = ((frost$core$Object*) _492);
frost$core$Frost$unref$frost$core$Object$Q(_493);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
_496 = *(&local10);
_497 = ((frost$core$Object*) _496);
frost$core$Frost$unref$frost$core$Object$Q(_497);
*(&local10) = ((org$frostlang$frostc$lvalue$LValue*) NULL);
return;

}
void org$frostlang$frostc$statement$Assignment$init(void* rawSelf) {
org$frostlang$frostc$statement$Assignment* param0 = (org$frostlang$frostc$statement$Assignment*) rawSelf;

return;

}
void org$frostlang$frostc$statement$Assignment$cleanup(void* rawSelf) {
org$frostlang$frostc$statement$Assignment* param0 = (org$frostlang$frostc$statement$Assignment*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assignment.frost:12
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

