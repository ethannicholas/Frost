#include "org/frostlang/frostc/statement/Assert.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/AutoUnrefs.h"
#include "frost/collections/Array.h"
#include "frost/core/String/Index.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Int.h"
#include "frost/collections/Stack.h"
#include "frost/core/Bit.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "frost/io/File.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Methods.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/MethodRef.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/IR/Block/ID.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Assert$class_type org$frostlang$frostc$statement$Assert$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Assert$cleanup} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn3)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn5)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn6)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn27)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn28)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn29)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn30)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn31)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn32)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn33)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn35)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn39)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn40)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn41)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x41\x73\x73\x65\x72\x74", 37, -3457141472014761945, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x73\x73\x65\x72\x74\x2e\x66\x72\x6f\x73\x74", 12, -3085779117112402965, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x46\x61\x69\x6c\x75\x72\x65", 16, -1047342833001589897, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x73\x73\x65\x72\x74\x2e\x66\x72\x6f\x73\x74", 12, -3085779117112402965, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x73\x73\x65\x72\x74\x2e\x66\x72\x6f\x73\x74", 12, -3085779117112402965, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x46\x61\x69\x6c\x75\x72\x65", 16, -1047342833001589897, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20\x73\x75\x63\x63\x65\x73\x73", 14, 4705032740964695492, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20\x66\x61\x69\x6c\x75\x72\x65", 14, -6436788288102718507, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x73\x73\x65\x72\x74\x2e\x66\x72\x6f\x73\x74", 12, -3085779117112402965, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };

void org$frostlang$frostc$statement$Assert$compileFail$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2) {

org$frostlang$frostc$Compiler$AutoUnrefs* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String$Index$nullable local3;
org$frostlang$frostc$ClassDecl* local4 = NULL;
org$frostlang$frostc$MethodDecl* local5 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* _2;
frost$core$Object* _5;
org$frostlang$frostc$Compiler$AutoUnrefs* _7;
frost$core$Object* _8;
frost$core$Object* _11;
frost$collections$Array* _14;
frost$collections$Array* _15;
frost$core$Object* _18;
frost$collections$Array* _20;
frost$core$Object* _21;
frost$core$Object* _24;
frost$collections$Array* _27;
frost$collections$Array* _28;
org$frostlang$frostc$ASTNode* _29;
frost$core$Int _30;
frost$collections$Stack** _31;
frost$collections$Stack* _32;
frost$collections$Stack* _33;
frost$core$Int _34;
frost$core$Int _36;
int64_t _37;
int64_t _38;
bool _39;
frost$core$Bit _40;
bool _41;
frost$collections$Array** _45;
frost$collections$Array* _46;
frost$collections$CollectionView* _47;
$fn2 _48;
frost$core$Int _49;
int64_t _51;
int64_t _52;
bool _53;
frost$core$Bit _54;
bool _55;
frost$core$Int _57;
frost$collections$Array** _61;
frost$collections$Array* _62;
frost$collections$CollectionView* _63;
$fn3 _64;
frost$core$Int _65;
int64_t _66;
int64_t _67;
bool _68;
frost$core$Bit _69;
bool _70;
frost$core$Int _72;
frost$collections$Array** _76;
frost$collections$Array* _77;
frost$collections$Array* _78;
frost$collections$Array** _79;
frost$collections$Array* _80;
frost$collections$CollectionView* _81;
$fn4 _82;
frost$core$Int _83;
frost$core$Int _84;
int64_t _85;
int64_t _86;
int64_t _87;
frost$core$Int _88;
int64_t _89;
int64_t _90;
int64_t _91;
frost$core$Int _92;
frost$core$Int _94;
int64_t _95;
int64_t _96;
bool _97;
frost$core$Bit _98;
bool _99;
frost$collections$CollectionView* _101;
$fn5 _102;
frost$core$Int _103;
int64_t _104;
int64_t _105;
bool _106;
frost$core$Bit _107;
bool _108;
frost$core$Int _110;
frost$core$Object*** _114;
frost$core$Object** _115;
frost$core$Int64 _116;
int64_t _117;
frost$core$Object* _118;
frost$core$Object* _119;
frost$core$Object* _122;
frost$core$Object* _123;
frost$core$Object* _125;
org$frostlang$frostc$ClassDecl* _128;
frost$io$File** _129;
frost$io$File* _130;
frost$core$String** _133;
frost$core$String* _134;
frost$core$String$Index _137;
frost$core$String$Index$nullable _138;
frost$core$String$Index$nullable _142;
bool _143;
frost$core$Bit _144;
bool _145;
frost$core$String** _148;
frost$core$String* _149;
frost$core$String** _150;
frost$core$String* _151;
frost$core$String$Index$nullable _152;
bool _153;
frost$core$Bit _154;
bool _155;
frost$core$Int _157;
frost$core$String$Index _160;
frost$core$String$Index _161;
frost$core$String$Index$nullable _162;
frost$core$Bit _163;
frost$core$Range$LTfrost$core$String$Index$Q$GT _164;
frost$core$String* _165;
frost$core$Object* _166;
frost$core$Object* _168;
frost$core$Object* _171;
frost$core$String** _176;
frost$core$String* _177;
frost$core$Object* _178;
frost$core$Object* _181;
frost$core$String* _185;
frost$core$Object* _187;
frost$core$Object* _189;
frost$collections$Array* _192;
frost$collections$Array* _193;
org$frostlang$frostc$ASTNode* _194;
frost$core$Int _195;
frost$core$Int _196;
int64_t _199;
uint64_t _200;
frost$core$UInt64 _201;
frost$core$Object* _204;
frost$core$Object* _206;
org$frostlang$frostc$Type** _209;
org$frostlang$frostc$Type* _210;
org$frostlang$frostc$ClassDecl* _211;
frost$core$Object* _213;
org$frostlang$frostc$ClassDecl* _215;
frost$core$Object* _216;
frost$core$Object* _219;
bool _224;
frost$core$Bit _225;
bool _226;
org$frostlang$frostc$ClassDecl* _229;
bool _230;
frost$core$Bit _231;
bool _232;
frost$core$Int _234;
org$frostlang$frostc$ClassDecl* _237;
org$frostlang$frostc$SymbolTable* _238;
org$frostlang$frostc$Symbol* _239;
org$frostlang$frostc$Methods* _240;
org$frostlang$frostc$FixedArray** _241;
org$frostlang$frostc$FixedArray* _242;
org$frostlang$frostc$FixedArray* _243;
frost$core$Int _244;
frost$core$Object* _245;
org$frostlang$frostc$MethodDecl* _246;
frost$core$Object* _247;
org$frostlang$frostc$MethodDecl* _249;
frost$core$Object* _250;
frost$core$Object* _253;
frost$core$Object* _255;
frost$core$Object* _257;
frost$collections$Array* _260;
frost$collections$Array* _261;
bool _262;
frost$core$Bit _263;
bool _264;
frost$core$Int _266;
org$frostlang$frostc$ASTNode* _269;
frost$core$Object* _270;
org$frostlang$frostc$ClassDecl* _275;
bool _276;
frost$core$Bit _277;
bool _278;
frost$core$Int _280;
org$frostlang$frostc$ClassDecl* _283;
org$frostlang$frostc$SymbolTable* _284;
org$frostlang$frostc$Symbol* _285;
org$frostlang$frostc$Methods* _286;
org$frostlang$frostc$FixedArray** _287;
org$frostlang$frostc$FixedArray* _288;
org$frostlang$frostc$FixedArray* _289;
frost$core$Int _290;
frost$core$Object* _291;
org$frostlang$frostc$MethodDecl* _292;
frost$core$Object* _293;
org$frostlang$frostc$MethodDecl* _295;
frost$core$Object* _296;
frost$core$Object* _299;
frost$core$Object* _301;
frost$core$Object* _303;
org$frostlang$frostc$MethodDecl* _307;
frost$core$Bit _308;
bool _311;
bool _312;
frost$core$Bit _313;
bool _315;
org$frostlang$frostc$MethodDecl* _318;
frost$core$Object* _319;
org$frostlang$frostc$ClassDecl* _322;
frost$core$Object* _323;
frost$core$String* _326;
frost$core$Object* _327;
frost$core$Object* _330;
frost$core$Object* _332;
frost$collections$Array* _334;
frost$core$Object* _335;
org$frostlang$frostc$Compiler$AutoUnrefs* _338;
frost$core$Object* _339;
org$frostlang$frostc$MethodRef* _344;
org$frostlang$frostc$Type** _345;
org$frostlang$frostc$Type* _346;
org$frostlang$frostc$MethodDecl* _347;
frost$collections$Array* _349;
frost$collections$ListView* _350;
org$frostlang$frostc$Compiler$TypeContext* _351;
frost$core$Int _352;
org$frostlang$frostc$IR$Value* _354;
frost$core$Object* _355;
frost$core$Object* _357;
frost$core$Object* _359;
org$frostlang$frostc$MethodDecl* _361;
frost$core$Object* _362;
org$frostlang$frostc$ClassDecl* _365;
frost$core$Object* _366;
frost$core$String* _369;
frost$core$Object* _370;
frost$core$Object* _373;
frost$core$Object* _375;
frost$collections$Array* _377;
frost$core$Object* _378;
org$frostlang$frostc$Compiler$AutoUnrefs* _381;
frost$core$Object* _382;
org$frostlang$frostc$IR** _386;
org$frostlang$frostc$IR* _387;
org$frostlang$frostc$IR$Statement* _388;
frost$core$Int _389;
$fn6 _391;
org$frostlang$frostc$IR$Statement$ID _392;
frost$core$Object* _393;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:20
_2 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$AutoUnrefs), (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler(_2, param0);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
_5 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = *(&local0);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
*(&local0) = _2;
_11 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:21
_14 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_15 = _14;
frost$collections$Array$init(_15);
*(&local1) = ((frost$collections$Array*) NULL);
_18 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = *(&local1);
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
*(&local1) = _14;
_24 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_24);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:22
_27 = *(&local1);
_28 = _27;
_29 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_30 = (frost$core$Int) {40u};
_31 = &param0->currentClass;
_32 = *_31;
_33 = _32;
_34 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Assert.frost:22:68
_36 = (frost$core$Int) {0u};
_37 = _34.value;
_38 = _36.value;
_39 = _37 >= _38;
_40 = (frost$core$Bit) {_39};
_41 = _40.value;
if (_41) goto block4; else goto block3;
block4:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_45 = &_33->contents;
_46 = *_45;
_47 = ((frost$collections$CollectionView*) _46);
ITable* $tmp7 = _47->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp7 = $tmp7->next;
}
_48 = $tmp7->methods[0];
_49 = _48(_47);
_51 = _34.value;
_52 = _49.value;
_53 = _51 < _52;
_54 = (frost$core$Bit) {_53};
_55 = _54.value;
if (_55) goto block2; else goto block3;
block3:;
_57 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _57, &$s9);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_61 = &_33->contents;
_62 = *_61;
_63 = ((frost$collections$CollectionView*) _62);
ITable* $tmp10 = _63->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp10 = $tmp10->next;
}
_64 = $tmp10->methods[0];
_65 = _64(_63);
_66 = _65.value;
_67 = _34.value;
_68 = _66 > _67;
_69 = (frost$core$Bit) {_68};
_70 = _69.value;
if (_70) goto block6; else goto block7;
block7:;
_72 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s11, _72);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_76 = &_33->contents;
_77 = *_76;
_78 = _77;
_79 = &_33->contents;
_80 = *_79;
_81 = ((frost$collections$CollectionView*) _80);
ITable* $tmp12 = _81->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
_82 = $tmp12->methods[0];
_83 = _82(_81);
_84 = (frost$core$Int) {1u};
_85 = _83.value;
_86 = _84.value;
_87 = _85 - _86;
_88 = (frost$core$Int) {_87};
_89 = _88.value;
_90 = _34.value;
_91 = _89 - _90;
_92 = (frost$core$Int) {_91};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_94 = (frost$core$Int) {0u};
_95 = _92.value;
_96 = _94.value;
_97 = _95 >= _96;
_98 = (frost$core$Bit) {_97};
_99 = _98.value;
if (_99) goto block11; else goto block10;
block11:;
_101 = ((frost$collections$CollectionView*) _78);
ITable* $tmp13 = _101->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
_102 = $tmp13->methods[0];
_103 = _102(_101);
_104 = _92.value;
_105 = _103.value;
_106 = _104 < _105;
_107 = (frost$core$Bit) {_106};
_108 = _107.value;
if (_108) goto block9; else goto block10;
block10:;
_110 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _110, &$s15);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_114 = &_78->data;
_115 = *_114;
_116 = frost$core$Int64$init$frost$core$Int(_92);
_117 = _116.value;
_118 = _115[_117];
_119 = _118;
frost$core$Frost$ref$frost$core$Object$Q(_119);
_122 = _118;
_123 = _122;
frost$core$Frost$ref$frost$core$Object$Q(_123);
_125 = _118;
frost$core$Frost$unref$frost$core$Object$Q(_125);
_128 = ((org$frostlang$frostc$ClassDecl*) _122);
_129 = &_128->source;
_130 = *_129;
// begin inline call to function frost.io.File.get_name():frost.core.String from Assert.frost:22:78
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:147
_133 = &_130->path;
_134 = *_133;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:147:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
_137 = frost$core$String$get_end$R$frost$core$String$Index(_134);
_138 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_134, &$s16, _137);
*(&local3) = _138;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
_142 = *(&local3);
_143 = _142.nonnull;
_144 = (frost$core$Bit) {_143};
_145 = _144.value;
if (_145) goto block14; else goto block16;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
_148 = &_130->path;
_149 = *_148;
_150 = &_130->path;
_151 = *_150;
_152 = *(&local3);
_153 = _152.nonnull;
_154 = (frost$core$Bit) {_153};
_155 = _154.value;
if (_155) goto block17; else goto block18;
block18:;
_157 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s17, _157, &$s18);
abort(); // unreachable
block17:;
_160 = ((frost$core$String$Index) _152.value);
_161 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_151, _160);
_162 = ((frost$core$String$Index$nullable) { _161, true });
_163 = (frost$core$Bit) {false};
_164 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_162, ((frost$core$String$Index$nullable) { .nonnull = false }), _163);
_165 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_149, _164);
_166 = ((frost$core$Object*) _165);
frost$core$Frost$ref$frost$core$Object$Q(_166);
_168 = ((frost$core$Object*) _165);
frost$core$Frost$unref$frost$core$Object$Q(_168);
*(&local2) = _165;
_171 = ((frost$core$Object*) _165);
frost$core$Frost$ref$frost$core$Object$Q(_171);
goto block12;
block16:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:152
_176 = &_130->path;
_177 = *_176;
_178 = ((frost$core$Object*) _177);
frost$core$Frost$ref$frost$core$Object$Q(_178);
*(&local2) = _177;
_181 = ((frost$core$Object*) _177);
frost$core$Frost$ref$frost$core$Object$Q(_181);
goto block12;
block15:;
goto block12;
block12:;
_185 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String(_29, _30, param1, _185);
_187 = ((frost$core$Object*) _29);
frost$collections$Array$add$frost$collections$Array$T(_28, _187);
_189 = ((frost$core$Object*) _185);
frost$core$Frost$unref$frost$core$Object$Q(_189);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:23
_192 = *(&local1);
_193 = _192;
_194 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_195 = (frost$core$Int) {25u};
_196 = param1.line;
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Assert.frost:23:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
_199 = _196.value;
_200 = ((uint64_t) _199);
_201 = (frost$core$UInt64) {_200};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64(_194, _195, param1, _201);
_204 = ((frost$core$Object*) _194);
frost$collections$Array$add$frost$collections$Array$T(_193, _204);
_206 = ((frost$core$Object*) _194);
frost$core$Frost$unref$frost$core$Object$Q(_206);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:24
_209 = &param0->FROST_TYPE;
_210 = *_209;
_211 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, _210);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
_213 = ((frost$core$Object*) _211);
frost$core$Frost$ref$frost$core$Object$Q(_213);
_215 = *(&local4);
_216 = ((frost$core$Object*) _215);
frost$core$Frost$unref$frost$core$Object$Q(_216);
*(&local4) = _211;
_219 = ((frost$core$Object*) _211);
frost$core$Frost$unref$frost$core$Object$Q(_219);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:25
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:26
_224 = param2 != NULL;
_225 = (frost$core$Bit) {_224};
_226 = _225.value;
if (_226) goto block20; else goto block22;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:27
_229 = *(&local4);
_230 = _229 != NULL;
_231 = (frost$core$Bit) {_230};
_232 = _231.value;
if (_232) goto block23; else goto block24;
block24:;
_234 = (frost$core$Int) {27u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s19, _234, &$s20);
abort(); // unreachable
block23:;
_237 = _229;
_238 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, _237);
_239 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q(_238, &$s21);
_240 = ((org$frostlang$frostc$Methods*) _239);
_241 = &_240->methods;
_242 = *_241;
_243 = _242;
_244 = (frost$core$Int) {0u};
_245 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_243, _244);
_246 = ((org$frostlang$frostc$MethodDecl*) _245);
_247 = ((frost$core$Object*) _246);
frost$core$Frost$ref$frost$core$Object$Q(_247);
_249 = *(&local5);
_250 = ((frost$core$Object*) _249);
frost$core$Frost$unref$frost$core$Object$Q(_250);
*(&local5) = _246;
_253 = _245;
frost$core$Frost$unref$frost$core$Object$Q(_253);
_255 = ((frost$core$Object*) _239);
frost$core$Frost$unref$frost$core$Object$Q(_255);
_257 = ((frost$core$Object*) _238);
frost$core$Frost$unref$frost$core$Object$Q(_257);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:28
_260 = *(&local1);
_261 = _260;
_262 = param2 != NULL;
_263 = (frost$core$Bit) {_262};
_264 = _263.value;
if (_264) goto block25; else goto block26;
block26:;
_266 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _266, &$s23);
abort(); // unreachable
block25:;
_269 = param2;
_270 = ((frost$core$Object*) _269);
frost$collections$Array$add$frost$collections$Array$T(_261, _270);
goto block21;
block22:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:31
_275 = *(&local4);
_276 = _275 != NULL;
_277 = (frost$core$Bit) {_276};
_278 = _277.value;
if (_278) goto block27; else goto block28;
block28:;
_280 = (frost$core$Int) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s24, _280, &$s25);
abort(); // unreachable
block27:;
_283 = _275;
_284 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, _283);
_285 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q(_284, &$s26);
_286 = ((org$frostlang$frostc$Methods*) _285);
_287 = &_286->methods;
_288 = *_287;
_289 = _288;
_290 = (frost$core$Int) {1u};
_291 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_289, _290);
_292 = ((org$frostlang$frostc$MethodDecl*) _291);
_293 = ((frost$core$Object*) _292);
frost$core$Frost$ref$frost$core$Object$Q(_293);
_295 = *(&local5);
_296 = ((frost$core$Object*) _295);
frost$core$Frost$unref$frost$core$Object$Q(_296);
*(&local5) = _292;
_299 = _291;
frost$core$Frost$unref$frost$core$Object$Q(_299);
_301 = ((frost$core$Object*) _285);
frost$core$Frost$unref$frost$core$Object$Q(_301);
_303 = ((frost$core$Object*) _284);
frost$core$Frost$unref$frost$core$Object$Q(_303);
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:33
_307 = *(&local5);
_308 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, _307);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Assert.frost:33:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_311 = _308.value;
_312 = !_311;
_313 = (frost$core$Bit) {_312};
_315 = _313.value;
if (_315) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:34
_318 = *(&local5);
_319 = ((frost$core$Object*) _318);
frost$core$Frost$unref$frost$core$Object$Q(_319);
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
_322 = *(&local4);
_323 = ((frost$core$Object*) _322);
frost$core$Frost$unref$frost$core$Object$Q(_323);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
_326 = *(&local2);
_327 = ((frost$core$Object*) _326);
frost$core$Frost$unref$frost$core$Object$Q(_327);
*(&local2) = ((frost$core$String*) NULL);
_330 = _122;
frost$core$Frost$unref$frost$core$Object$Q(_330);
_332 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_332);
_334 = *(&local1);
_335 = ((frost$core$Object*) _334);
frost$core$Frost$unref$frost$core$Object$Q(_335);
*(&local1) = ((frost$collections$Array*) NULL);
_338 = *(&local0);
_339 = ((frost$core$Object*) _338);
frost$core$Frost$unref$frost$core$Object$Q(_339);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
return;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:36
_344 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodRef), (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
_345 = &param0->FROST_TYPE;
_346 = *_345;
_347 = *(&local5);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl(_344, param0, _346, _347);
_349 = *(&local1);
_350 = ((frost$collections$ListView*) _349);
_351 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_352 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_351, _352);
_354 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$IR$Value*) NULL), _344, _350, _351);
_355 = ((frost$core$Object*) _354);
frost$core$Frost$unref$frost$core$Object$Q(_355);
_357 = ((frost$core$Object*) _351);
frost$core$Frost$unref$frost$core$Object$Q(_357);
_359 = ((frost$core$Object*) _344);
frost$core$Frost$unref$frost$core$Object$Q(_359);
_361 = *(&local5);
_362 = ((frost$core$Object*) _361);
frost$core$Frost$unref$frost$core$Object$Q(_362);
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
_365 = *(&local4);
_366 = ((frost$core$Object*) _365);
frost$core$Frost$unref$frost$core$Object$Q(_366);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
_369 = *(&local2);
_370 = ((frost$core$Object*) _369);
frost$core$Frost$unref$frost$core$Object$Q(_370);
*(&local2) = ((frost$core$String*) NULL);
_373 = _122;
frost$core$Frost$unref$frost$core$Object$Q(_373);
_375 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_375);
_377 = *(&local1);
_378 = ((frost$core$Object*) _377);
frost$core$Frost$unref$frost$core$Object$Q(_378);
*(&local1) = ((frost$collections$Array*) NULL);
_381 = *(&local0);
_382 = ((frost$core$Object*) _381);
frost$core$Frost$unref$frost$core$Object$Q(_382);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:39
_386 = &param0->ir;
_387 = *_386;
_388 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_389 = (frost$core$Int) {28u};
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position(_388, _389, param1);
_391 = ($fn27) _387->$class->vtable[2];
_392 = _391(_387, _388);
_393 = ((frost$core$Object*) _388);
frost$core$Frost$unref$frost$core$Object$Q(_393);
return;

}
void org$frostlang$frostc$statement$Assert$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$ASTNode* param3) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$IR$Block$ID local3;
org$frostlang$frostc$IR** _1;
org$frostlang$frostc$IR* _2;
frost$core$Object* _4;
org$frostlang$frostc$IR* _6;
frost$core$Object* _7;
org$frostlang$frostc$Compiler$TypeContext* _11;
frost$core$Int _12;
org$frostlang$frostc$Type** _13;
org$frostlang$frostc$Type* _14;
frost$core$Bit _15;
org$frostlang$frostc$IR$Value* _17;
frost$core$Object* _19;
org$frostlang$frostc$IR$Value* _21;
frost$core$Object* _22;
frost$core$Object* _25;
frost$core$Object* _27;
org$frostlang$frostc$IR$Value* _30;
bool _31;
frost$core$Bit _32;
bool _33;
org$frostlang$frostc$IR$Value* _36;
frost$core$Object* _37;
org$frostlang$frostc$IR* _40;
frost$core$Object* _41;
org$frostlang$frostc$IR* _46;
$fn28 _47;
org$frostlang$frostc$IR$Block$ID _48;
org$frostlang$frostc$IR* _51;
$fn29 _52;
org$frostlang$frostc$IR$Block$ID _53;
org$frostlang$frostc$IR* _56;
org$frostlang$frostc$IR$Statement* _57;
frost$core$Int _58;
org$frostlang$frostc$IR$Value* _59;
bool _60;
frost$core$Bit _61;
bool _62;
frost$core$Int _64;
org$frostlang$frostc$IR$Value* _67;
org$frostlang$frostc$IR$Value* _68;
org$frostlang$frostc$IR$Block$ID _69;
org$frostlang$frostc$IR$Block$ID _70;
$fn30 _72;
org$frostlang$frostc$IR$Statement$ID _73;
frost$core$Object* _74;
frost$core$Object* _76;
org$frostlang$frostc$IR* _79;
org$frostlang$frostc$IR$Block$ID _80;
$fn31 _81;
org$frostlang$frostc$IR* _86;
org$frostlang$frostc$IR$Block$ID _87;
$fn32 _88;
org$frostlang$frostc$IR$Value* _90;
frost$core$Object* _91;
org$frostlang$frostc$IR* _94;
frost$core$Object* _95;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:44
_1 = &param0->ir;
_2 = *_1;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
_4 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:45
_11 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_12 = (frost$core$Int) {3u};
_13 = &param0->BIT_TYPE;
_14 = *_13;
_15 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_11, _12, _14, _15);
_17 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, _11);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
_19 = ((frost$core$Object*) _17);
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = *(&local1);
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
*(&local1) = _17;
_25 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_27);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:47
_30 = *(&local1);
_31 = _30 == NULL;
_32 = (frost$core$Bit) {_31};
_33 = _32.value;
if (_33) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:48
_36 = *(&local1);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_37);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
_40 = *(&local0);
_41 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_41);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:50
_46 = *(&local0);
_47 = ($fn33) _46->$class->vtable[3];
_48 = _47(_46, &$s34);
*(&local2) = _48;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:51
_51 = *(&local0);
_52 = ($fn35) _51->$class->vtable[3];
_53 = _52(_51, &$s36);
*(&local3) = _53;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:52
_56 = *(&local0);
_57 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_58 = (frost$core$Int) {5u};
_59 = *(&local1);
_60 = _59 != NULL;
_61 = (frost$core$Bit) {_60};
_62 = _61.value;
if (_62) goto block3; else goto block4;
block4:;
_64 = (frost$core$Int) {53u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s37, _64, &$s38);
abort(); // unreachable
block3:;
_67 = _59;
_68 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, _67);
_69 = *(&local2);
_70 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(_57, _58, param1, _68, _69, _70);
_72 = ($fn39) _56->$class->vtable[2];
_73 = _72(_56, _57);
_74 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_74);
_76 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_76);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:54
_79 = *(&local0);
_80 = *(&local3);
_81 = ($fn40) _79->$class->vtable[4];
_81(_79, _80);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:55
org$frostlang$frostc$statement$Assert$compileFail$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(param0, param1, param3);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:56
_86 = *(&local0);
_87 = *(&local2);
_88 = ($fn41) _86->$class->vtable[4];
_88(_86, _87);
_90 = *(&local1);
_91 = ((frost$core$Object*) _90);
frost$core$Frost$unref$frost$core$Object$Q(_91);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
_94 = *(&local0);
_95 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_95);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$Assert$init(void* rawSelf) {
org$frostlang$frostc$statement$Assert* param0 = (org$frostlang$frostc$statement$Assert*) rawSelf;

return;

}
void org$frostlang$frostc$statement$Assert$cleanup(void* rawSelf) {
org$frostlang$frostc$statement$Assert* param0 = (org$frostlang$frostc$statement$Assert*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:16
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

