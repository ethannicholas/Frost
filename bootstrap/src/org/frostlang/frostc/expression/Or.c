#include "org/frostlang/frostc/expression/Or.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Compiler/AutoUnrefs.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Int.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Or$class_type org$frostlang$frostc$expression$Or$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Or$cleanup} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn4)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn5)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn6)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn7)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn8)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn9)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn10)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn11)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn12)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn13)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn14)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn16)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn18)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn20)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn24)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn25)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn28)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn29)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn30)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn33)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn34)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn35)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn36)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn37)(org$frostlang$frostc$IR*, frost$core$String*);
typedef void (*$fn38)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn39)(org$frostlang$frostc$IR*, frost$core$String*);
typedef void (*$fn41)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x4f\x72", 34, -6187280755570729343, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x20\x74\x72\x75\x65", 7, -6395620655955628852, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x20\x66\x61\x6c\x73\x65", 8, 2528390819850383103, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x20\x6d\x65\x72\x67\x65", 8, -3473729090985111120, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x72\x2e\x66\x72\x6f\x73\x74", 8, -8298227944462356644, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x72\x2e\x66\x72\x6f\x73\x74", 8, -8298227944462356644, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x72\x2e\x66\x72\x6f\x73\x74", 8, -8298227944462356644, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x20\x6c\x65\x66\x74\x20\x66\x61\x6c\x73\x65", 13, -8489645149640048250, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Or$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$IR$Block$ID local3;
org$frostlang$frostc$IR$Block$ID local4;
org$frostlang$frostc$IR$Block$ID local5;
org$frostlang$frostc$IR$Value* local6 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local7 = NULL;
org$frostlang$frostc$IR$Statement$ID local8;
org$frostlang$frostc$IR** _1;
org$frostlang$frostc$IR* _2;
frost$core$Object* _4;
org$frostlang$frostc$IR* _6;
frost$core$Object* _7;
org$frostlang$frostc$IR$Value* _11;
frost$core$Int _12;
org$frostlang$frostc$IR* _13;
frost$collections$Array** _14;
frost$collections$Array* _15;
frost$collections$CollectionView* _16;
$fn2 _17;
frost$core$Int _18;
org$frostlang$frostc$Type** _19;
org$frostlang$frostc$Type* _20;
frost$core$Object* _23;
org$frostlang$frostc$IR$Value* _25;
frost$core$Object* _26;
frost$core$Object* _29;
org$frostlang$frostc$IR* _32;
frost$collections$Array** _33;
frost$collections$Array* _34;
frost$collections$Array* _35;
org$frostlang$frostc$Type** _36;
org$frostlang$frostc$Type* _37;
frost$core$Object* _38;
org$frostlang$frostc$Compiler$TypeContext* _43;
frost$core$Int _44;
org$frostlang$frostc$Type** _45;
org$frostlang$frostc$Type* _46;
frost$core$Bit _47;
org$frostlang$frostc$IR$Value* _49;
frost$core$Object* _50;
org$frostlang$frostc$IR$Value* _52;
frost$core$Object* _53;
frost$core$Object* _56;
frost$core$Object* _58;
org$frostlang$frostc$IR$Value* _61;
bool _62;
frost$core$Bit _63;
bool _64;
frost$core$Object* _67;
org$frostlang$frostc$IR$Value* _69;
frost$core$Object* _70;
org$frostlang$frostc$IR$Value* _73;
frost$core$Object* _74;
org$frostlang$frostc$IR* _77;
frost$core$Object* _78;
org$frostlang$frostc$IR* _83;
$fn3 _84;
org$frostlang$frostc$IR$Block$ID _85;
org$frostlang$frostc$IR* _88;
$fn4 _89;
org$frostlang$frostc$IR$Block$ID _90;
org$frostlang$frostc$IR* _93;
$fn5 _94;
org$frostlang$frostc$IR$Block$ID _95;
org$frostlang$frostc$IR* _98;
org$frostlang$frostc$IR$Statement* _99;
frost$core$Int _100;
org$frostlang$frostc$IR$Value* _101;
bool _102;
frost$core$Bit _103;
bool _104;
frost$core$Int _106;
org$frostlang$frostc$IR$Value* _109;
org$frostlang$frostc$IR$Value* _110;
org$frostlang$frostc$IR$Block$ID _111;
org$frostlang$frostc$IR$Block$ID _112;
$fn6 _114;
org$frostlang$frostc$IR$Statement$ID _115;
frost$core$Object* _116;
frost$core$Object* _118;
org$frostlang$frostc$IR* _121;
org$frostlang$frostc$IR$Block$ID _122;
$fn7 _123;
org$frostlang$frostc$IR* _126;
org$frostlang$frostc$IR$Statement* _127;
frost$core$Int _128;
org$frostlang$frostc$IR$Value* _129;
bool _130;
frost$core$Bit _131;
bool _132;
frost$core$Int _134;
org$frostlang$frostc$IR$Value* _137;
org$frostlang$frostc$IR$Value* _138;
$fn8 _140;
org$frostlang$frostc$IR$Statement$ID _141;
frost$core$Object* _142;
org$frostlang$frostc$IR* _145;
org$frostlang$frostc$IR$Statement* _146;
frost$core$Int _147;
org$frostlang$frostc$IR$Block$ID _148;
$fn9 _150;
org$frostlang$frostc$IR$Statement$ID _151;
frost$core$Object* _152;
org$frostlang$frostc$IR* _155;
org$frostlang$frostc$IR$Block$ID _156;
$fn10 _157;
org$frostlang$frostc$Compiler$AutoUnrefs* _163;
frost$core$Object* _166;
org$frostlang$frostc$Compiler$AutoUnrefs* _168;
frost$core$Object* _169;
frost$core$Object* _172;
org$frostlang$frostc$Compiler$TypeContext* _175;
frost$core$Int _176;
org$frostlang$frostc$Type** _177;
org$frostlang$frostc$Type* _178;
frost$core$Bit _179;
org$frostlang$frostc$IR$Value* _181;
frost$core$Object* _182;
org$frostlang$frostc$IR$Value* _184;
frost$core$Object* _185;
frost$core$Object* _188;
frost$core$Object* _190;
org$frostlang$frostc$IR$Value* _193;
bool _194;
frost$core$Bit _195;
bool _196;
frost$core$Object* _199;
org$frostlang$frostc$Compiler$AutoUnrefs* _201;
frost$core$Object* _202;
org$frostlang$frostc$IR$Value* _205;
frost$core$Object* _206;
org$frostlang$frostc$IR$Value* _209;
frost$core$Object* _210;
org$frostlang$frostc$IR$Value* _213;
frost$core$Object* _214;
org$frostlang$frostc$IR* _217;
frost$core$Object* _218;
org$frostlang$frostc$Compiler$AutoUnrefs* _222;
frost$core$Object* _223;
org$frostlang$frostc$IR* _227;
org$frostlang$frostc$IR$Statement* _228;
frost$core$Int _229;
org$frostlang$frostc$IR$Value* _230;
bool _231;
frost$core$Bit _232;
bool _233;
frost$core$Int _235;
org$frostlang$frostc$IR$Value* _238;
org$frostlang$frostc$IR$Value* _239;
$fn11 _241;
org$frostlang$frostc$IR$Statement$ID _242;
frost$core$Object* _243;
org$frostlang$frostc$IR* _246;
org$frostlang$frostc$IR$Statement* _247;
frost$core$Int _248;
org$frostlang$frostc$IR$Block$ID _249;
$fn12 _251;
org$frostlang$frostc$IR$Statement$ID _252;
frost$core$Object* _253;
org$frostlang$frostc$IR* _256;
org$frostlang$frostc$IR$Block$ID _257;
$fn13 _258;
org$frostlang$frostc$IR* _261;
org$frostlang$frostc$IR$Statement* _262;
frost$core$Int _263;
org$frostlang$frostc$IR$Value* _264;
$fn14 _266;
org$frostlang$frostc$IR$Statement$ID _267;
frost$core$Object* _269;
org$frostlang$frostc$IR$Value* _272;
frost$core$Int _273;
org$frostlang$frostc$IR$Statement$ID _274;
org$frostlang$frostc$Type** _275;
org$frostlang$frostc$Type* _276;
org$frostlang$frostc$IR$Value* _278;
frost$core$Object* _279;
frost$core$Object* _281;
org$frostlang$frostc$IR$Value* _283;
frost$core$Object* _284;
org$frostlang$frostc$IR$Value* _287;
frost$core$Object* _288;
org$frostlang$frostc$IR$Value* _291;
frost$core$Object* _292;
org$frostlang$frostc$IR* _295;
frost$core$Object* _296;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:15
_1 = &param0->ir;
_2 = *_1;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
_4 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:17
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
_11 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_12 = (frost$core$Int) {2u};
_13 = *(&local0);
_14 = &_13->locals;
_15 = *_14;
_16 = ((frost$collections$CollectionView*) _15);
ITable* $tmp15 = _16->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp15 = $tmp15->next;
}
_17 = $tmp15->methods[0];
_18 = _17(_16);
_19 = &param0->BIT_TYPE;
_20 = *_19;
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type(_11, _12, _18, _20);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
_23 = ((frost$core$Object*) _11);
frost$core$Frost$ref$frost$core$Object$Q(_23);
_25 = *(&local1);
_26 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_26);
*(&local1) = _11;
_29 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_29);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:18
_32 = *(&local0);
_33 = &_32->locals;
_34 = *_33;
_35 = _34;
_36 = &param0->BIT_TYPE;
_37 = *_36;
_38 = ((frost$core$Object*) _37);
frost$collections$Array$add$frost$collections$Array$T(_35, _38);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:19
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:20
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
_43 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_44 = (frost$core$Int) {3u};
_45 = &param0->BIT_TYPE;
_46 = *_45;
_47 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_43, _44, _46, _47);
_49 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, _43);
_50 = ((frost$core$Object*) _49);
frost$core$Frost$ref$frost$core$Object$Q(_50);
_52 = *(&local2);
_53 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_53);
*(&local2) = _49;
_56 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_56);
_58 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_58);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:21
_61 = *(&local2);
_62 = _61 == NULL;
_63 = (frost$core$Bit) {_62};
_64 = _63.value;
if (_64) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:22
_67 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_67);
_69 = *(&local2);
_70 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_70);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
_73 = *(&local1);
_74 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_74);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
_77 = *(&local0);
_78 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_78);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:24
_83 = *(&local0);
_84 = ($fn16) _83->$class->vtable[3];
_85 = _84(_83, &$s17);
*(&local3) = _85;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:25
_88 = *(&local0);
_89 = ($fn18) _88->$class->vtable[3];
_90 = _89(_88, &$s19);
*(&local4) = _90;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:26
_93 = *(&local0);
_94 = ($fn20) _93->$class->vtable[3];
_95 = _94(_93, &$s21);
*(&local5) = _95;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:27
_98 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
_99 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_100 = (frost$core$Int) {5u};
_101 = *(&local2);
_102 = _101 != NULL;
_103 = (frost$core$Bit) {_102};
_104 = _103.value;
if (_104) goto block3; else goto block4;
block4:;
_106 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _106, &$s23);
abort(); // unreachable
block3:;
_109 = _101;
_110 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, _109);
_111 = *(&local3);
_112 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(_99, _100, param1, _110, _111, _112);
_114 = ($fn24) _98->$class->vtable[2];
_115 = _114(_98, _99);
_116 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_116);
_118 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_118);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:29
_121 = *(&local0);
_122 = *(&local3);
_123 = ($fn25) _121->$class->vtable[4];
_123(_121, _122);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:30
_126 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
_127 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_128 = (frost$core$Int) {27u};
_129 = *(&local2);
_130 = _129 != NULL;
_131 = (frost$core$Bit) {_130};
_132 = _131.value;
if (_132) goto block5; else goto block6;
block6:;
_134 = (frost$core$Int) {30u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s26, _134, &$s27);
abort(); // unreachable
block5:;
_137 = _129;
_138 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(_127, _128, param1, _137, _138);
_140 = ($fn28) _126->$class->vtable[2];
_141 = _140(_126, _127);
_142 = ((frost$core$Object*) _127);
frost$core$Frost$unref$frost$core$Object$Q(_142);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:31
_145 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
_146 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_147 = (frost$core$Int) {1u};
_148 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID(_146, _147, param1, _148);
_150 = ($fn29) _145->$class->vtable[2];
_151 = _150(_145, _146);
_152 = ((frost$core$Object*) _146);
frost$core$Frost$unref$frost$core$Object$Q(_152);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:32
_155 = *(&local0);
_156 = *(&local4);
_157 = ($fn30) _155->$class->vtable[4];
_157(_155, _156);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:33
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:35
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
_163 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler(_163, param0);
*(&local7) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
_166 = ((frost$core$Object*) _163);
frost$core$Frost$ref$frost$core$Object$Q(_166);
_168 = *(&local7);
_169 = ((frost$core$Object*) _168);
frost$core$Frost$unref$frost$core$Object$Q(_169);
*(&local7) = _163;
_172 = ((frost$core$Object*) _163);
frost$core$Frost$unref$frost$core$Object$Q(_172);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:36
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
_175 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_176 = (frost$core$Int) {3u};
_177 = &param0->BIT_TYPE;
_178 = *_177;
_179 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_175, _176, _178, _179);
_181 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, _175);
_182 = ((frost$core$Object*) _181);
frost$core$Frost$ref$frost$core$Object$Q(_182);
_184 = *(&local6);
_185 = ((frost$core$Object*) _184);
frost$core$Frost$unref$frost$core$Object$Q(_185);
*(&local6) = _181;
_188 = ((frost$core$Object*) _181);
frost$core$Frost$unref$frost$core$Object$Q(_188);
_190 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_190);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:38
_193 = *(&local6);
_194 = _193 == NULL;
_195 = (frost$core$Bit) {_194};
_196 = _195.value;
if (_196) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:39
_199 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_199);
_201 = *(&local7);
_202 = ((frost$core$Object*) _201);
frost$core$Frost$unref$frost$core$Object$Q(_202);
*(&local7) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
_205 = *(&local6);
_206 = ((frost$core$Object*) _205);
frost$core$Frost$unref$frost$core$Object$Q(_206);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
_209 = *(&local2);
_210 = ((frost$core$Object*) _209);
frost$core$Frost$unref$frost$core$Object$Q(_210);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
_213 = *(&local1);
_214 = ((frost$core$Object*) _213);
frost$core$Frost$unref$frost$core$Object$Q(_214);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
_217 = *(&local0);
_218 = ((frost$core$Object*) _217);
frost$core$Frost$unref$frost$core$Object$Q(_218);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block8:;
_222 = *(&local7);
_223 = ((frost$core$Object*) _222);
frost$core$Frost$unref$frost$core$Object$Q(_223);
*(&local7) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:42
_227 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
_228 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_229 = (frost$core$Int) {27u};
_230 = *(&local6);
_231 = _230 != NULL;
_232 = (frost$core$Bit) {_231};
_233 = _232.value;
if (_233) goto block9; else goto block10;
block10:;
_235 = (frost$core$Int) {42u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s31, _235, &$s32);
abort(); // unreachable
block9:;
_238 = _230;
_239 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(_228, _229, param1, _238, _239);
_241 = ($fn33) _227->$class->vtable[2];
_242 = _241(_227, _228);
_243 = ((frost$core$Object*) _228);
frost$core$Frost$unref$frost$core$Object$Q(_243);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:43
_246 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
_247 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_248 = (frost$core$Int) {1u};
_249 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID(_247, _248, param1, _249);
_251 = ($fn34) _246->$class->vtable[2];
_252 = _251(_246, _247);
_253 = ((frost$core$Object*) _247);
frost$core$Frost$unref$frost$core$Object$Q(_253);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:44
_256 = *(&local0);
_257 = *(&local5);
_258 = ($fn35) _256->$class->vtable[4];
_258(_256, _257);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:45
_261 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
_262 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_263 = (frost$core$Int) {14u};
_264 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(_262, _263, param1, _264);
_266 = ($fn36) _261->$class->vtable[2];
_267 = _266(_261, _262);
*(&local8) = _267;
_269 = ((frost$core$Object*) _262);
frost$core$Frost$unref$frost$core$Object$Q(_269);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:46
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
_272 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_273 = (frost$core$Int) {7u};
_274 = *(&local8);
_275 = &param0->BIT_TYPE;
_276 = *_275;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(_272, _273, _274, _276);
_278 = _272;
_279 = ((frost$core$Object*) _278);
frost$core$Frost$ref$frost$core$Object$Q(_279);
_281 = ((frost$core$Object*) _272);
frost$core$Frost$unref$frost$core$Object$Q(_281);
_283 = *(&local6);
_284 = ((frost$core$Object*) _283);
frost$core$Frost$unref$frost$core$Object$Q(_284);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
_287 = *(&local2);
_288 = ((frost$core$Object*) _287);
frost$core$Frost$unref$frost$core$Object$Q(_288);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
_291 = *(&local1);
_292 = ((frost$core$Object*) _291);
frost$core$Frost$unref$frost$core$Object$Q(_292);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
_295 = *(&local0);
_296 = ((frost$core$Object*) _295);
frost$core$Frost$unref$frost$core$Object$Q(_296);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return _278;

}
void org$frostlang$frostc$expression$Or$compileConditionalBranch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$IR$Block$ID param4, org$frostlang$frostc$IR$Block$ID param5) {

org$frostlang$frostc$IR$Block$ID local0;
org$frostlang$frostc$IR** _1;
org$frostlang$frostc$IR* _2;
$fn37 _3;
org$frostlang$frostc$IR$Block$ID _4;
org$frostlang$frostc$IR$Block$ID _7;
org$frostlang$frostc$IR** _10;
org$frostlang$frostc$IR* _11;
org$frostlang$frostc$IR$Block$ID _12;
$fn38 _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:52
_1 = &param0->ir;
_2 = *_1;
_3 = ($fn39) _2->$class->vtable[3];
_4 = _3(_2, &$s40);
*(&local0) = _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:53
_7 = *(&local0);
org$frostlang$frostc$Compiler$compileConditionalBranch$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, param2, param4, _7);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:54
_10 = &param0->ir;
_11 = *_10;
_12 = *(&local0);
_13 = ($fn41) _11->$class->vtable[4];
_13(_11, _12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:55
org$frostlang$frostc$Compiler$compileConditionalBranch$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, param3, param4, param5);
return;

}
void org$frostlang$frostc$expression$Or$init(org$frostlang$frostc$expression$Or* param0) {

return;

}
void org$frostlang$frostc$expression$Or$cleanup(org$frostlang$frostc$expression$Or* param0) {

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:11
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}






