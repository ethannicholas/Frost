#include "org/frostlang/frostc/statement/Assert.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/MethodPosition.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/AutoUnrefs.h"
#include "frost/collections/Array.h"
#include "frost/core/String/Index.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Position.h"
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

void org$frostlang$frostc$statement$Assert$compileFail$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$MethodPosition param1, org$frostlang$frostc$ASTNode* param2) {

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
frost$core$Object* _17;
frost$collections$Array* _19;
frost$core$Object* _20;
frost$core$Object* _23;
frost$collections$Array* _26;
org$frostlang$frostc$ASTNode* _27;
frost$core$Int _28;
frost$core$Int _31;
frost$core$Int _32;
frost$core$Int _33;
org$frostlang$frostc$Position _34;
frost$collections$Stack** _36;
frost$collections$Stack* _37;
frost$core$Int _38;
frost$core$Int _40;
int64_t _41;
int64_t _42;
bool _43;
frost$core$Bit _44;
bool _45;
frost$collections$Array** _49;
frost$collections$Array* _50;
frost$collections$CollectionView* _51;
$fn2 _52;
frost$core$Int _53;
int64_t _55;
int64_t _56;
bool _57;
frost$core$Bit _58;
bool _59;
frost$core$Int _61;
frost$collections$Array** _65;
frost$collections$Array* _66;
frost$collections$CollectionView* _67;
$fn3 _68;
frost$core$Int _69;
int64_t _70;
int64_t _71;
bool _72;
frost$core$Bit _73;
bool _74;
frost$core$Int _76;
frost$collections$Array** _80;
frost$collections$Array* _81;
frost$collections$Array** _82;
frost$collections$Array* _83;
frost$collections$CollectionView* _84;
$fn4 _85;
frost$core$Int _86;
frost$core$Int _87;
int64_t _88;
int64_t _89;
int64_t _90;
frost$core$Int _91;
int64_t _92;
int64_t _93;
int64_t _94;
frost$core$Int _95;
frost$core$Int _97;
int64_t _98;
int64_t _99;
bool _100;
frost$core$Bit _101;
bool _102;
frost$collections$CollectionView* _104;
$fn5 _105;
frost$core$Int _106;
int64_t _107;
int64_t _108;
bool _109;
frost$core$Bit _110;
bool _111;
frost$core$Int _113;
frost$core$Object*** _117;
frost$core$Object** _118;
frost$core$Int64 _119;
int64_t _120;
frost$core$Object* _121;
frost$core$Object* _122;
frost$core$Object* _125;
frost$core$Object* _126;
frost$core$Object* _128;
org$frostlang$frostc$ClassDecl* _131;
frost$io$File** _132;
frost$io$File* _133;
frost$core$String** _136;
frost$core$String* _137;
frost$core$String$Index _140;
frost$core$String$Index$nullable _141;
frost$core$String$Index$nullable _145;
bool _146;
frost$core$Bit _147;
bool _148;
frost$core$String** _151;
frost$core$String* _152;
frost$core$String** _153;
frost$core$String* _154;
frost$core$String$Index$nullable _155;
bool _156;
frost$core$Bit _157;
bool _158;
frost$core$Int _160;
frost$core$String$Index _163;
frost$core$String$Index _164;
frost$core$String$Index$nullable _165;
frost$core$Bit _166;
frost$core$Range$LTfrost$core$String$Index$Q$GT _167;
frost$core$String* _168;
frost$core$Object* _169;
frost$core$Object* _171;
frost$core$Object* _174;
frost$core$String** _179;
frost$core$String* _180;
frost$core$Object* _181;
frost$core$Object* _184;
frost$core$String* _188;
frost$core$Object* _190;
frost$core$Object* _192;
frost$collections$Array* _195;
org$frostlang$frostc$ASTNode* _196;
frost$core$Int _197;
frost$core$Int _200;
frost$core$Int _201;
frost$core$Int _202;
org$frostlang$frostc$Position _203;
frost$core$Int _205;
int64_t _208;
uint64_t _209;
frost$core$UInt64 _210;
frost$core$Object* _213;
frost$core$Object* _215;
org$frostlang$frostc$Type** _218;
org$frostlang$frostc$Type* _219;
org$frostlang$frostc$ClassDecl* _220;
frost$core$Object* _222;
org$frostlang$frostc$ClassDecl* _224;
frost$core$Object* _225;
frost$core$Object* _228;
bool _233;
frost$core$Bit _234;
bool _235;
org$frostlang$frostc$ClassDecl* _238;
bool _239;
frost$core$Bit _240;
bool _241;
frost$core$Int _243;
org$frostlang$frostc$ClassDecl* _246;
org$frostlang$frostc$SymbolTable* _247;
org$frostlang$frostc$Symbol* _248;
org$frostlang$frostc$Methods* _249;
org$frostlang$frostc$FixedArray** _250;
org$frostlang$frostc$FixedArray* _251;
frost$core$Int _252;
frost$core$Object* _253;
org$frostlang$frostc$MethodDecl* _254;
frost$core$Object* _255;
org$frostlang$frostc$MethodDecl* _257;
frost$core$Object* _258;
frost$core$Object* _261;
frost$core$Object* _263;
frost$core$Object* _265;
frost$collections$Array* _268;
bool _269;
frost$core$Bit _270;
bool _271;
frost$core$Int _273;
org$frostlang$frostc$ASTNode* _276;
frost$core$Object* _277;
org$frostlang$frostc$ClassDecl* _282;
bool _283;
frost$core$Bit _284;
bool _285;
frost$core$Int _287;
org$frostlang$frostc$ClassDecl* _290;
org$frostlang$frostc$SymbolTable* _291;
org$frostlang$frostc$Symbol* _292;
org$frostlang$frostc$Methods* _293;
org$frostlang$frostc$FixedArray** _294;
org$frostlang$frostc$FixedArray* _295;
frost$core$Int _296;
frost$core$Object* _297;
org$frostlang$frostc$MethodDecl* _298;
frost$core$Object* _299;
org$frostlang$frostc$MethodDecl* _301;
frost$core$Object* _302;
frost$core$Object* _305;
frost$core$Object* _307;
frost$core$Object* _309;
org$frostlang$frostc$MethodDecl* _313;
frost$core$Bit _314;
bool _317;
bool _318;
frost$core$Bit _319;
bool _321;
org$frostlang$frostc$MethodDecl* _324;
frost$core$Object* _325;
org$frostlang$frostc$ClassDecl* _328;
frost$core$Object* _329;
frost$core$String* _332;
frost$core$Object* _333;
frost$core$Object* _336;
frost$core$Object* _338;
frost$collections$Array* _340;
frost$core$Object* _341;
org$frostlang$frostc$Compiler$AutoUnrefs* _344;
frost$core$Object* _345;
org$frostlang$frostc$MethodRef* _350;
org$frostlang$frostc$Type** _351;
org$frostlang$frostc$Type* _352;
org$frostlang$frostc$MethodDecl* _353;
frost$collections$Array* _355;
frost$collections$ListView* _356;
org$frostlang$frostc$Compiler$TypeContext* _357;
frost$core$Int _358;
org$frostlang$frostc$IR$Value* _360;
frost$core$Object* _361;
frost$core$Object* _363;
frost$core$Object* _365;
org$frostlang$frostc$MethodDecl* _367;
frost$core$Object* _368;
org$frostlang$frostc$ClassDecl* _371;
frost$core$Object* _372;
frost$core$String* _375;
frost$core$Object* _376;
frost$core$Object* _379;
frost$core$Object* _381;
frost$collections$Array* _383;
frost$core$Object* _384;
org$frostlang$frostc$Compiler$AutoUnrefs* _387;
frost$core$Object* _388;
org$frostlang$frostc$IR** _392;
org$frostlang$frostc$IR* _393;
org$frostlang$frostc$IR$Statement* _394;
frost$core$Int _395;
$fn6 _397;
org$frostlang$frostc$IR$Statement$ID _398;
frost$core$Object* _399;
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
frost$collections$Array$init(_14);
*(&local1) = ((frost$collections$Array*) NULL);
_17 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = *(&local1);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local1) = _14;
_23 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_23);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:22
_26 = *(&local1);
_27 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_28 = (frost$core$Int) {40u};
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Assert.frost:22:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_31 = param1.file;
_32 = param1.line;
_33 = param1.column;
_34 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_31, _32, _33);
_36 = &param0->currentClass;
_37 = *_36;
_38 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Assert.frost:22:79
_40 = (frost$core$Int) {0u};
_41 = _38.value;
_42 = _40.value;
_43 = _41 >= _42;
_44 = (frost$core$Bit) {_43};
_45 = _44.value;
if (_45) goto block5; else goto block4;
block5:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_49 = &_37->contents;
_50 = *_49;
_51 = ((frost$collections$CollectionView*) _50);
ITable* $tmp7 = _51->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp7 = $tmp7->next;
}
_52 = $tmp7->methods[0];
_53 = _52(_51);
_55 = _38.value;
_56 = _53.value;
_57 = _55 < _56;
_58 = (frost$core$Bit) {_57};
_59 = _58.value;
if (_59) goto block3; else goto block4;
block4:;
_61 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _61, &$s9);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_65 = &_37->contents;
_66 = *_65;
_67 = ((frost$collections$CollectionView*) _66);
ITable* $tmp10 = _67->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp10 = $tmp10->next;
}
_68 = $tmp10->methods[0];
_69 = _68(_67);
_70 = _69.value;
_71 = _38.value;
_72 = _70 > _71;
_73 = (frost$core$Bit) {_72};
_74 = _73.value;
if (_74) goto block7; else goto block8;
block8:;
_76 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s11, _76);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_80 = &_37->contents;
_81 = *_80;
_82 = &_37->contents;
_83 = *_82;
_84 = ((frost$collections$CollectionView*) _83);
ITable* $tmp12 = _84->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
_85 = $tmp12->methods[0];
_86 = _85(_84);
_87 = (frost$core$Int) {1u};
_88 = _86.value;
_89 = _87.value;
_90 = _88 - _89;
_91 = (frost$core$Int) {_90};
_92 = _91.value;
_93 = _38.value;
_94 = _92 - _93;
_95 = (frost$core$Int) {_94};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_97 = (frost$core$Int) {0u};
_98 = _95.value;
_99 = _97.value;
_100 = _98 >= _99;
_101 = (frost$core$Bit) {_100};
_102 = _101.value;
if (_102) goto block12; else goto block11;
block12:;
_104 = ((frost$collections$CollectionView*) _81);
ITable* $tmp13 = _104->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
_105 = $tmp13->methods[0];
_106 = _105(_104);
_107 = _95.value;
_108 = _106.value;
_109 = _107 < _108;
_110 = (frost$core$Bit) {_109};
_111 = _110.value;
if (_111) goto block10; else goto block11;
block11:;
_113 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _113, &$s15);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_117 = &_81->data;
_118 = *_117;
_119 = frost$core$Int64$init$frost$core$Int(_95);
_120 = _119.value;
_121 = _118[_120];
_122 = _121;
frost$core$Frost$ref$frost$core$Object$Q(_122);
_125 = _121;
_126 = _125;
frost$core$Frost$ref$frost$core$Object$Q(_126);
_128 = _121;
frost$core$Frost$unref$frost$core$Object$Q(_128);
_131 = ((org$frostlang$frostc$ClassDecl*) _125);
_132 = &_131->source;
_133 = *_132;
// begin inline call to function frost.io.File.get_name():frost.core.String from Assert.frost:22:89
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:147
_136 = &_133->path;
_137 = *_136;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:147:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
_140 = frost$core$String$get_end$R$frost$core$String$Index(_137);
_141 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_137, &$s16, _140);
*(&local3) = _141;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
_145 = *(&local3);
_146 = _145.nonnull;
_147 = (frost$core$Bit) {_146};
_148 = _147.value;
if (_148) goto block15; else goto block17;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
_151 = &_133->path;
_152 = *_151;
_153 = &_133->path;
_154 = *_153;
_155 = *(&local3);
_156 = _155.nonnull;
_157 = (frost$core$Bit) {_156};
_158 = _157.value;
if (_158) goto block18; else goto block19;
block19:;
_160 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s17, _160, &$s18);
abort(); // unreachable
block18:;
_163 = ((frost$core$String$Index) _155.value);
_164 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_154, _163);
_165 = ((frost$core$String$Index$nullable) { _164, true });
_166 = (frost$core$Bit) {false};
_167 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_165, ((frost$core$String$Index$nullable) { .nonnull = false }), _166);
_168 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_152, _167);
_169 = ((frost$core$Object*) _168);
frost$core$Frost$ref$frost$core$Object$Q(_169);
_171 = ((frost$core$Object*) _168);
frost$core$Frost$unref$frost$core$Object$Q(_171);
*(&local2) = _168;
_174 = ((frost$core$Object*) _168);
frost$core$Frost$ref$frost$core$Object$Q(_174);
goto block13;
block17:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:152
_179 = &_133->path;
_180 = *_179;
_181 = ((frost$core$Object*) _180);
frost$core$Frost$ref$frost$core$Object$Q(_181);
*(&local2) = _180;
_184 = ((frost$core$Object*) _180);
frost$core$Frost$ref$frost$core$Object$Q(_184);
goto block13;
block16:;
goto block13;
block13:;
_188 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String(_27, _28, _34, _188);
_190 = ((frost$core$Object*) _27);
frost$collections$Array$add$frost$collections$Array$T(_26, _190);
_192 = ((frost$core$Object*) _188);
frost$core$Frost$unref$frost$core$Object$Q(_192);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:23
_195 = *(&local1);
_196 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_197 = (frost$core$Int) {25u};
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Assert.frost:23:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_200 = param1.file;
_201 = param1.line;
_202 = param1.column;
_203 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_200, _201, _202);
_205 = param1.line;
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Assert.frost:23:68
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
_208 = _205.value;
_209 = ((uint64_t) _208);
_210 = (frost$core$UInt64) {_209};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64(_196, _197, _203, _210);
_213 = ((frost$core$Object*) _196);
frost$collections$Array$add$frost$collections$Array$T(_195, _213);
_215 = ((frost$core$Object*) _196);
frost$core$Frost$unref$frost$core$Object$Q(_215);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:24
_218 = &param0->FROST_TYPE;
_219 = *_218;
_220 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, _219);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
_222 = ((frost$core$Object*) _220);
frost$core$Frost$ref$frost$core$Object$Q(_222);
_224 = *(&local4);
_225 = ((frost$core$Object*) _224);
frost$core$Frost$unref$frost$core$Object$Q(_225);
*(&local4) = _220;
_228 = ((frost$core$Object*) _220);
frost$core$Frost$unref$frost$core$Object$Q(_228);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:25
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:26
_233 = param2 != NULL;
_234 = (frost$core$Bit) {_233};
_235 = _234.value;
if (_235) goto block22; else goto block24;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:27
_238 = *(&local4);
_239 = _238 != NULL;
_240 = (frost$core$Bit) {_239};
_241 = _240.value;
if (_241) goto block25; else goto block26;
block26:;
_243 = (frost$core$Int) {27u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s19, _243, &$s20);
abort(); // unreachable
block25:;
_246 = _238;
_247 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, _246);
_248 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q(_247, &$s21);
_249 = ((org$frostlang$frostc$Methods*) _248);
_250 = &_249->methods;
_251 = *_250;
_252 = (frost$core$Int) {0u};
_253 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_251, _252);
_254 = ((org$frostlang$frostc$MethodDecl*) _253);
_255 = ((frost$core$Object*) _254);
frost$core$Frost$ref$frost$core$Object$Q(_255);
_257 = *(&local5);
_258 = ((frost$core$Object*) _257);
frost$core$Frost$unref$frost$core$Object$Q(_258);
*(&local5) = _254;
_261 = _253;
frost$core$Frost$unref$frost$core$Object$Q(_261);
_263 = ((frost$core$Object*) _248);
frost$core$Frost$unref$frost$core$Object$Q(_263);
_265 = ((frost$core$Object*) _247);
frost$core$Frost$unref$frost$core$Object$Q(_265);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:28
_268 = *(&local1);
_269 = param2 != NULL;
_270 = (frost$core$Bit) {_269};
_271 = _270.value;
if (_271) goto block27; else goto block28;
block28:;
_273 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _273, &$s23);
abort(); // unreachable
block27:;
_276 = param2;
_277 = ((frost$core$Object*) _276);
frost$collections$Array$add$frost$collections$Array$T(_268, _277);
goto block23;
block24:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:31
_282 = *(&local4);
_283 = _282 != NULL;
_284 = (frost$core$Bit) {_283};
_285 = _284.value;
if (_285) goto block29; else goto block30;
block30:;
_287 = (frost$core$Int) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s24, _287, &$s25);
abort(); // unreachable
block29:;
_290 = _282;
_291 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, _290);
_292 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q(_291, &$s26);
_293 = ((org$frostlang$frostc$Methods*) _292);
_294 = &_293->methods;
_295 = *_294;
_296 = (frost$core$Int) {1u};
_297 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_295, _296);
_298 = ((org$frostlang$frostc$MethodDecl*) _297);
_299 = ((frost$core$Object*) _298);
frost$core$Frost$ref$frost$core$Object$Q(_299);
_301 = *(&local5);
_302 = ((frost$core$Object*) _301);
frost$core$Frost$unref$frost$core$Object$Q(_302);
*(&local5) = _298;
_305 = _297;
frost$core$Frost$unref$frost$core$Object$Q(_305);
_307 = ((frost$core$Object*) _292);
frost$core$Frost$unref$frost$core$Object$Q(_307);
_309 = ((frost$core$Object*) _291);
frost$core$Frost$unref$frost$core$Object$Q(_309);
goto block23;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:33
_313 = *(&local5);
_314 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, _313);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Assert.frost:33:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_317 = _314.value;
_318 = !_317;
_319 = (frost$core$Bit) {_318};
_321 = _319.value;
if (_321) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:34
_324 = *(&local5);
_325 = ((frost$core$Object*) _324);
frost$core$Frost$unref$frost$core$Object$Q(_325);
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
_328 = *(&local4);
_329 = ((frost$core$Object*) _328);
frost$core$Frost$unref$frost$core$Object$Q(_329);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
_332 = *(&local2);
_333 = ((frost$core$Object*) _332);
frost$core$Frost$unref$frost$core$Object$Q(_333);
*(&local2) = ((frost$core$String*) NULL);
_336 = _125;
frost$core$Frost$unref$frost$core$Object$Q(_336);
_338 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_338);
_340 = *(&local1);
_341 = ((frost$core$Object*) _340);
frost$core$Frost$unref$frost$core$Object$Q(_341);
*(&local1) = ((frost$collections$Array*) NULL);
_344 = *(&local0);
_345 = ((frost$core$Object*) _344);
frost$core$Frost$unref$frost$core$Object$Q(_345);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
return;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:36
_350 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodRef), (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
_351 = &param0->FROST_TYPE;
_352 = *_351;
_353 = *(&local5);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl(_350, param0, _352, _353);
_355 = *(&local1);
_356 = ((frost$collections$ListView*) _355);
_357 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_358 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_357, _358);
_360 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$IR$Value*) NULL), _350, _356, _357);
_361 = ((frost$core$Object*) _360);
frost$core$Frost$unref$frost$core$Object$Q(_361);
_363 = ((frost$core$Object*) _357);
frost$core$Frost$unref$frost$core$Object$Q(_363);
_365 = ((frost$core$Object*) _350);
frost$core$Frost$unref$frost$core$Object$Q(_365);
_367 = *(&local5);
_368 = ((frost$core$Object*) _367);
frost$core$Frost$unref$frost$core$Object$Q(_368);
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
_371 = *(&local4);
_372 = ((frost$core$Object*) _371);
frost$core$Frost$unref$frost$core$Object$Q(_372);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
_375 = *(&local2);
_376 = ((frost$core$Object*) _375);
frost$core$Frost$unref$frost$core$Object$Q(_376);
*(&local2) = ((frost$core$String*) NULL);
_379 = _125;
frost$core$Frost$unref$frost$core$Object$Q(_379);
_381 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_381);
_383 = *(&local1);
_384 = ((frost$core$Object*) _383);
frost$core$Frost$unref$frost$core$Object$Q(_384);
*(&local1) = ((frost$collections$Array*) NULL);
_387 = *(&local0);
_388 = ((frost$core$Object*) _387);
frost$core$Frost$unref$frost$core$Object$Q(_388);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:39
_392 = &param0->ir;
_393 = *_392;
_394 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_395 = (frost$core$Int) {28u};
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition(_394, _395, param1);
_397 = ($fn27) _393->$class->vtable[2];
_398 = _397(_393, _394);
_399 = ((frost$core$Object*) _394);
frost$core$Frost$unref$frost$core$Object$Q(_399);
return;

}
void org$frostlang$frostc$statement$Assert$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$MethodPosition param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$ASTNode* param3) {

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
_68 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, _67);
_69 = *(&local2);
_70 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(_57, _58, param1, _68, _69, _70);
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
org$frostlang$frostc$statement$Assert$compileFail$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$ASTNode$Q(param0, param1, param3);
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

