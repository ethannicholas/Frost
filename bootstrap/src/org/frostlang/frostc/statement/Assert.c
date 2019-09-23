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
#include "frost/unsafe/NewPointer.h"
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
frost$unsafe$NewPointer* _117;
frost$unsafe$NewPointer _118;
int64_t _119;
frost$core$Int64 _120;
int64_t _121;
frost$core$Object* _122;
frost$core$Object* _123;
frost$core$Object* _126;
frost$core$Object* _127;
frost$core$Object* _129;
org$frostlang$frostc$ClassDecl* _132;
frost$io$File** _133;
frost$io$File* _134;
frost$core$String** _137;
frost$core$String* _138;
frost$core$String$Index _141;
frost$core$String$Index$nullable _142;
frost$core$String$Index$nullable _146;
bool _147;
frost$core$Bit _148;
bool _149;
frost$core$String** _152;
frost$core$String* _153;
frost$core$String** _154;
frost$core$String* _155;
frost$core$String$Index$nullable _156;
bool _157;
frost$core$Bit _158;
bool _159;
frost$core$Int _161;
frost$core$String$Index _164;
frost$core$String$Index _165;
frost$core$String$Index$nullable _166;
frost$core$Bit _167;
frost$core$Range$LTfrost$core$String$Index$Q$GT _168;
frost$core$String* _169;
frost$core$Object* _170;
frost$core$Object* _172;
frost$core$Object* _175;
frost$core$String** _180;
frost$core$String* _181;
frost$core$Object* _182;
frost$core$Object* _185;
frost$core$String* _189;
frost$core$Object* _191;
frost$core$Object* _193;
frost$collections$Array* _196;
org$frostlang$frostc$ASTNode* _197;
frost$core$Int _198;
frost$core$Int _201;
frost$core$Int _202;
frost$core$Int _203;
org$frostlang$frostc$Position _204;
frost$core$Int _206;
int64_t _209;
uint64_t _210;
frost$core$UInt64 _211;
frost$core$Object* _214;
frost$core$Object* _216;
org$frostlang$frostc$Type** _219;
org$frostlang$frostc$Type* _220;
org$frostlang$frostc$ClassDecl* _221;
frost$core$Object* _223;
org$frostlang$frostc$ClassDecl* _225;
frost$core$Object* _226;
frost$core$Object* _229;
bool _234;
frost$core$Bit _235;
bool _236;
org$frostlang$frostc$ClassDecl* _239;
bool _240;
frost$core$Bit _241;
bool _242;
frost$core$Int _244;
org$frostlang$frostc$ClassDecl* _247;
org$frostlang$frostc$SymbolTable* _248;
org$frostlang$frostc$Symbol* _249;
org$frostlang$frostc$Methods* _250;
org$frostlang$frostc$FixedArray** _251;
org$frostlang$frostc$FixedArray* _252;
frost$core$Int _253;
frost$core$Object* _254;
org$frostlang$frostc$MethodDecl* _255;
frost$core$Object* _256;
org$frostlang$frostc$MethodDecl* _258;
frost$core$Object* _259;
frost$core$Object* _262;
frost$core$Object* _264;
frost$core$Object* _266;
frost$collections$Array* _269;
bool _270;
frost$core$Bit _271;
bool _272;
frost$core$Int _274;
org$frostlang$frostc$ASTNode* _277;
frost$core$Object* _278;
org$frostlang$frostc$ClassDecl* _283;
bool _284;
frost$core$Bit _285;
bool _286;
frost$core$Int _288;
org$frostlang$frostc$ClassDecl* _291;
org$frostlang$frostc$SymbolTable* _292;
org$frostlang$frostc$Symbol* _293;
org$frostlang$frostc$Methods* _294;
org$frostlang$frostc$FixedArray** _295;
org$frostlang$frostc$FixedArray* _296;
frost$core$Int _297;
frost$core$Object* _298;
org$frostlang$frostc$MethodDecl* _299;
frost$core$Object* _300;
org$frostlang$frostc$MethodDecl* _302;
frost$core$Object* _303;
frost$core$Object* _306;
frost$core$Object* _308;
frost$core$Object* _310;
org$frostlang$frostc$MethodDecl* _314;
frost$core$Bit _315;
bool _318;
bool _319;
frost$core$Bit _320;
bool _322;
org$frostlang$frostc$MethodDecl* _325;
frost$core$Object* _326;
org$frostlang$frostc$ClassDecl* _329;
frost$core$Object* _330;
frost$core$String* _333;
frost$core$Object* _334;
frost$core$Object* _337;
frost$core$Object* _339;
frost$collections$Array* _341;
frost$core$Object* _342;
org$frostlang$frostc$Compiler$AutoUnrefs* _345;
frost$core$Object* _346;
org$frostlang$frostc$MethodRef* _351;
org$frostlang$frostc$Type** _352;
org$frostlang$frostc$Type* _353;
org$frostlang$frostc$MethodDecl* _354;
frost$collections$Array* _356;
frost$collections$ListView* _357;
org$frostlang$frostc$Compiler$TypeContext* _358;
frost$core$Int _359;
org$frostlang$frostc$IR$Value* _361;
frost$core$Object* _362;
frost$core$Object* _364;
frost$core$Object* _366;
org$frostlang$frostc$MethodDecl* _368;
frost$core$Object* _369;
org$frostlang$frostc$ClassDecl* _372;
frost$core$Object* _373;
frost$core$String* _376;
frost$core$Object* _377;
frost$core$Object* _380;
frost$core$Object* _382;
frost$collections$Array* _384;
frost$core$Object* _385;
org$frostlang$frostc$Compiler$AutoUnrefs* _388;
frost$core$Object* _389;
org$frostlang$frostc$IR** _393;
org$frostlang$frostc$IR* _394;
org$frostlang$frostc$IR$Statement* _395;
frost$core$Int _396;
$fn6 _398;
org$frostlang$frostc$IR$Statement$ID _399;
frost$core$Object* _400;
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
_119 = _118.value;
_120 = frost$core$Int64$init$frost$core$Int(_95);
_121 = _120.value;
_122 = ((frost$core$Object**)_119)[_121];
_123 = _122;
frost$core$Frost$ref$frost$core$Object$Q(_123);
_126 = _122;
_127 = _126;
frost$core$Frost$ref$frost$core$Object$Q(_127);
_129 = _122;
frost$core$Frost$unref$frost$core$Object$Q(_129);
_132 = ((org$frostlang$frostc$ClassDecl*) _126);
_133 = &_132->source;
_134 = *_133;
// begin inline call to function frost.io.File.get_name():frost.core.String from Assert.frost:22:89
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:147
_137 = &_134->path;
_138 = *_137;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:147:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
_141 = frost$core$String$get_end$R$frost$core$String$Index(_138);
_142 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_138, &$s16, _141);
*(&local3) = _142;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
_146 = *(&local3);
_147 = _146.nonnull;
_148 = (frost$core$Bit) {_147};
_149 = _148.value;
if (_149) goto block15; else goto block17;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
_152 = &_134->path;
_153 = *_152;
_154 = &_134->path;
_155 = *_154;
_156 = *(&local3);
_157 = _156.nonnull;
_158 = (frost$core$Bit) {_157};
_159 = _158.value;
if (_159) goto block18; else goto block19;
block19:;
_161 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s17, _161, &$s18);
abort(); // unreachable
block18:;
_164 = ((frost$core$String$Index) _156.value);
_165 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_155, _164);
_166 = ((frost$core$String$Index$nullable) { _165, true });
_167 = (frost$core$Bit) {false};
_168 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_166, ((frost$core$String$Index$nullable) { .nonnull = false }), _167);
_169 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_153, _168);
_170 = ((frost$core$Object*) _169);
frost$core$Frost$ref$frost$core$Object$Q(_170);
_172 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_172);
*(&local2) = _169;
_175 = ((frost$core$Object*) _169);
frost$core$Frost$ref$frost$core$Object$Q(_175);
goto block13;
block17:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:152
_180 = &_134->path;
_181 = *_180;
_182 = ((frost$core$Object*) _181);
frost$core$Frost$ref$frost$core$Object$Q(_182);
*(&local2) = _181;
_185 = ((frost$core$Object*) _181);
frost$core$Frost$ref$frost$core$Object$Q(_185);
goto block13;
block16:;
goto block13;
block13:;
_189 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String(_27, _28, _34, _189);
_191 = ((frost$core$Object*) _27);
frost$collections$Array$add$frost$collections$Array$T(_26, _191);
_193 = ((frost$core$Object*) _189);
frost$core$Frost$unref$frost$core$Object$Q(_193);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:23
_196 = *(&local1);
_197 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_198 = (frost$core$Int) {25u};
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Assert.frost:23:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_201 = param1.file;
_202 = param1.line;
_203 = param1.column;
_204 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_201, _202, _203);
_206 = param1.line;
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Assert.frost:23:68
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
_209 = _206.value;
_210 = ((uint64_t) _209);
_211 = (frost$core$UInt64) {_210};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64(_197, _198, _204, _211);
_214 = ((frost$core$Object*) _197);
frost$collections$Array$add$frost$collections$Array$T(_196, _214);
_216 = ((frost$core$Object*) _197);
frost$core$Frost$unref$frost$core$Object$Q(_216);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:24
_219 = &param0->FROST_TYPE;
_220 = *_219;
_221 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, _220);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
_223 = ((frost$core$Object*) _221);
frost$core$Frost$ref$frost$core$Object$Q(_223);
_225 = *(&local4);
_226 = ((frost$core$Object*) _225);
frost$core$Frost$unref$frost$core$Object$Q(_226);
*(&local4) = _221;
_229 = ((frost$core$Object*) _221);
frost$core$Frost$unref$frost$core$Object$Q(_229);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:25
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:26
_234 = param2 != NULL;
_235 = (frost$core$Bit) {_234};
_236 = _235.value;
if (_236) goto block22; else goto block24;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:27
_239 = *(&local4);
_240 = _239 != NULL;
_241 = (frost$core$Bit) {_240};
_242 = _241.value;
if (_242) goto block25; else goto block26;
block26:;
_244 = (frost$core$Int) {27u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s19, _244, &$s20);
abort(); // unreachable
block25:;
_247 = _239;
_248 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, _247);
_249 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q(_248, &$s21);
_250 = ((org$frostlang$frostc$Methods*) _249);
_251 = &_250->methods;
_252 = *_251;
_253 = (frost$core$Int) {0u};
_254 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_252, _253);
_255 = ((org$frostlang$frostc$MethodDecl*) _254);
_256 = ((frost$core$Object*) _255);
frost$core$Frost$ref$frost$core$Object$Q(_256);
_258 = *(&local5);
_259 = ((frost$core$Object*) _258);
frost$core$Frost$unref$frost$core$Object$Q(_259);
*(&local5) = _255;
_262 = _254;
frost$core$Frost$unref$frost$core$Object$Q(_262);
_264 = ((frost$core$Object*) _249);
frost$core$Frost$unref$frost$core$Object$Q(_264);
_266 = ((frost$core$Object*) _248);
frost$core$Frost$unref$frost$core$Object$Q(_266);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:28
_269 = *(&local1);
_270 = param2 != NULL;
_271 = (frost$core$Bit) {_270};
_272 = _271.value;
if (_272) goto block27; else goto block28;
block28:;
_274 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _274, &$s23);
abort(); // unreachable
block27:;
_277 = param2;
_278 = ((frost$core$Object*) _277);
frost$collections$Array$add$frost$collections$Array$T(_269, _278);
goto block23;
block24:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:31
_283 = *(&local4);
_284 = _283 != NULL;
_285 = (frost$core$Bit) {_284};
_286 = _285.value;
if (_286) goto block29; else goto block30;
block30:;
_288 = (frost$core$Int) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s24, _288, &$s25);
abort(); // unreachable
block29:;
_291 = _283;
_292 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, _291);
_293 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q(_292, &$s26);
_294 = ((org$frostlang$frostc$Methods*) _293);
_295 = &_294->methods;
_296 = *_295;
_297 = (frost$core$Int) {1u};
_298 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_296, _297);
_299 = ((org$frostlang$frostc$MethodDecl*) _298);
_300 = ((frost$core$Object*) _299);
frost$core$Frost$ref$frost$core$Object$Q(_300);
_302 = *(&local5);
_303 = ((frost$core$Object*) _302);
frost$core$Frost$unref$frost$core$Object$Q(_303);
*(&local5) = _299;
_306 = _298;
frost$core$Frost$unref$frost$core$Object$Q(_306);
_308 = ((frost$core$Object*) _293);
frost$core$Frost$unref$frost$core$Object$Q(_308);
_310 = ((frost$core$Object*) _292);
frost$core$Frost$unref$frost$core$Object$Q(_310);
goto block23;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:33
_314 = *(&local5);
_315 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, _314);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Assert.frost:33:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_318 = _315.value;
_319 = !_318;
_320 = (frost$core$Bit) {_319};
_322 = _320.value;
if (_322) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:34
_325 = *(&local5);
_326 = ((frost$core$Object*) _325);
frost$core$Frost$unref$frost$core$Object$Q(_326);
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
_329 = *(&local4);
_330 = ((frost$core$Object*) _329);
frost$core$Frost$unref$frost$core$Object$Q(_330);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
_333 = *(&local2);
_334 = ((frost$core$Object*) _333);
frost$core$Frost$unref$frost$core$Object$Q(_334);
*(&local2) = ((frost$core$String*) NULL);
_337 = _126;
frost$core$Frost$unref$frost$core$Object$Q(_337);
_339 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_339);
_341 = *(&local1);
_342 = ((frost$core$Object*) _341);
frost$core$Frost$unref$frost$core$Object$Q(_342);
*(&local1) = ((frost$collections$Array*) NULL);
_345 = *(&local0);
_346 = ((frost$core$Object*) _345);
frost$core$Frost$unref$frost$core$Object$Q(_346);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
return;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:36
_351 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodRef), (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
_352 = &param0->FROST_TYPE;
_353 = *_352;
_354 = *(&local5);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl(_351, param0, _353, _354);
_356 = *(&local1);
_357 = ((frost$collections$ListView*) _356);
_358 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_359 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int(_358, _359);
_361 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$IR$Value*) NULL), _351, _357, _358);
_362 = ((frost$core$Object*) _361);
frost$core$Frost$unref$frost$core$Object$Q(_362);
_364 = ((frost$core$Object*) _358);
frost$core$Frost$unref$frost$core$Object$Q(_364);
_366 = ((frost$core$Object*) _351);
frost$core$Frost$unref$frost$core$Object$Q(_366);
_368 = *(&local5);
_369 = ((frost$core$Object*) _368);
frost$core$Frost$unref$frost$core$Object$Q(_369);
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
_372 = *(&local4);
_373 = ((frost$core$Object*) _372);
frost$core$Frost$unref$frost$core$Object$Q(_373);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
_376 = *(&local2);
_377 = ((frost$core$Object*) _376);
frost$core$Frost$unref$frost$core$Object$Q(_377);
*(&local2) = ((frost$core$String*) NULL);
_380 = _126;
frost$core$Frost$unref$frost$core$Object$Q(_380);
_382 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_382);
_384 = *(&local1);
_385 = ((frost$core$Object*) _384);
frost$core$Frost$unref$frost$core$Object$Q(_385);
*(&local1) = ((frost$collections$Array*) NULL);
_388 = *(&local0);
_389 = ((frost$core$Object*) _388);
frost$core$Frost$unref$frost$core$Object$Q(_389);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:39
_393 = &param0->ir;
_394 = *_393;
_395 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_396 = (frost$core$Int) {28u};
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition(_395, _396, param1);
_398 = ($fn27) _394->$class->vtable[2];
_399 = _398(_394, _395);
_400 = ((frost$core$Object*) _395);
frost$core$Frost$unref$frost$core$Object$Q(_400);
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

