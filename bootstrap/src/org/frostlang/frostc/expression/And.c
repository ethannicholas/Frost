#include "org/frostlang/frostc/expression/And.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/MethodPosition.h"
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
org$frostlang$frostc$expression$And$class_type org$frostlang$frostc$expression$And$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$And$cleanup} };

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

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x6e\x64", 35, 534377468572104957, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x64\x20\x74\x72\x75\x65", 8, 6551506118492247358, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x64\x20\x66\x61\x6c\x73\x65", 9, 59802535508334937, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x64\x20\x6d\x65\x72\x67\x65", 9, 3577556354573257594, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x64\x2e\x66\x72\x6f\x73\x74", 9, -7231675374248336750, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x64\x2e\x66\x72\x6f\x73\x74", 9, -7231675374248336750, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x64\x2e\x66\x72\x6f\x73\x74", 9, -7231675374248336750, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x64\x20\x6c\x65\x66\x74\x20\x74\x72\x75\x65", 13, 3687610413917854125, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$And$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$MethodPosition param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

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
org$frostlang$frostc$Type** _35;
org$frostlang$frostc$Type* _36;
frost$core$Object* _37;
org$frostlang$frostc$Compiler$TypeContext* _42;
frost$core$Int _43;
org$frostlang$frostc$Type** _44;
org$frostlang$frostc$Type* _45;
frost$core$Bit _46;
org$frostlang$frostc$IR$Value* _48;
frost$core$Object* _49;
org$frostlang$frostc$IR$Value* _51;
frost$core$Object* _52;
frost$core$Object* _55;
frost$core$Object* _57;
org$frostlang$frostc$IR$Value* _60;
bool _61;
frost$core$Bit _62;
bool _63;
frost$core$Object* _66;
org$frostlang$frostc$IR$Value* _68;
frost$core$Object* _69;
org$frostlang$frostc$IR$Value* _72;
frost$core$Object* _73;
org$frostlang$frostc$IR* _76;
frost$core$Object* _77;
org$frostlang$frostc$IR* _82;
$fn3 _83;
org$frostlang$frostc$IR$Block$ID _84;
org$frostlang$frostc$IR* _87;
$fn4 _88;
org$frostlang$frostc$IR$Block$ID _89;
org$frostlang$frostc$IR* _92;
$fn5 _93;
org$frostlang$frostc$IR$Block$ID _94;
org$frostlang$frostc$IR* _97;
org$frostlang$frostc$IR$Statement* _98;
frost$core$Int _99;
org$frostlang$frostc$IR$Value* _100;
bool _101;
frost$core$Bit _102;
bool _103;
frost$core$Int _105;
org$frostlang$frostc$IR$Value* _108;
org$frostlang$frostc$IR$Value* _109;
org$frostlang$frostc$IR$Block$ID _110;
org$frostlang$frostc$IR$Block$ID _111;
$fn6 _113;
org$frostlang$frostc$IR$Statement$ID _114;
frost$core$Object* _115;
frost$core$Object* _117;
org$frostlang$frostc$IR* _120;
org$frostlang$frostc$IR$Block$ID _121;
$fn7 _122;
org$frostlang$frostc$Compiler$AutoUnrefs* _128;
frost$core$Object* _131;
org$frostlang$frostc$Compiler$AutoUnrefs* _133;
frost$core$Object* _134;
frost$core$Object* _137;
org$frostlang$frostc$Compiler$TypeContext* _140;
frost$core$Int _141;
org$frostlang$frostc$Type** _142;
org$frostlang$frostc$Type* _143;
frost$core$Bit _144;
org$frostlang$frostc$IR$Value* _146;
frost$core$Object* _147;
org$frostlang$frostc$IR$Value* _149;
frost$core$Object* _150;
frost$core$Object* _153;
frost$core$Object* _155;
org$frostlang$frostc$IR$Value* _158;
bool _159;
frost$core$Bit _160;
bool _161;
frost$core$Object* _164;
org$frostlang$frostc$Compiler$AutoUnrefs* _166;
frost$core$Object* _167;
org$frostlang$frostc$IR$Value* _170;
frost$core$Object* _171;
org$frostlang$frostc$IR$Value* _174;
frost$core$Object* _175;
org$frostlang$frostc$IR$Value* _178;
frost$core$Object* _179;
org$frostlang$frostc$IR* _182;
frost$core$Object* _183;
org$frostlang$frostc$Compiler$AutoUnrefs* _187;
frost$core$Object* _188;
org$frostlang$frostc$IR* _192;
org$frostlang$frostc$IR$Statement* _193;
frost$core$Int _194;
org$frostlang$frostc$IR$Value* _195;
bool _196;
frost$core$Bit _197;
bool _198;
frost$core$Int _200;
org$frostlang$frostc$IR$Value* _203;
org$frostlang$frostc$IR$Value* _204;
$fn8 _206;
org$frostlang$frostc$IR$Statement$ID _207;
frost$core$Object* _208;
org$frostlang$frostc$IR* _211;
org$frostlang$frostc$IR$Statement* _212;
frost$core$Int _213;
org$frostlang$frostc$IR$Block$ID _214;
$fn9 _216;
org$frostlang$frostc$IR$Statement$ID _217;
frost$core$Object* _218;
org$frostlang$frostc$IR* _221;
org$frostlang$frostc$IR$Block$ID _222;
$fn10 _223;
org$frostlang$frostc$IR* _226;
org$frostlang$frostc$IR$Statement* _227;
frost$core$Int _228;
org$frostlang$frostc$IR$Value* _229;
bool _230;
frost$core$Bit _231;
bool _232;
frost$core$Int _234;
org$frostlang$frostc$IR$Value* _237;
org$frostlang$frostc$IR$Value* _238;
$fn11 _240;
org$frostlang$frostc$IR$Statement$ID _241;
frost$core$Object* _242;
org$frostlang$frostc$IR* _245;
org$frostlang$frostc$IR$Statement* _246;
frost$core$Int _247;
org$frostlang$frostc$IR$Block$ID _248;
$fn12 _250;
org$frostlang$frostc$IR$Statement$ID _251;
frost$core$Object* _252;
org$frostlang$frostc$IR* _255;
org$frostlang$frostc$IR$Block$ID _256;
$fn13 _257;
org$frostlang$frostc$IR* _260;
org$frostlang$frostc$IR$Statement* _261;
frost$core$Int _262;
org$frostlang$frostc$IR$Value* _263;
$fn14 _265;
org$frostlang$frostc$IR$Statement$ID _266;
frost$core$Object* _268;
org$frostlang$frostc$IR$Value* _271;
frost$core$Int _272;
org$frostlang$frostc$IR$Statement$ID _273;
org$frostlang$frostc$Type** _274;
org$frostlang$frostc$Type* _275;
org$frostlang$frostc$IR$Value* _277;
frost$core$Object* _278;
frost$core$Object* _280;
org$frostlang$frostc$IR$Value* _282;
frost$core$Object* _283;
org$frostlang$frostc$IR$Value* _286;
frost$core$Object* _287;
org$frostlang$frostc$IR$Value* _290;
frost$core$Object* _291;
org$frostlang$frostc$IR* _294;
frost$core$Object* _295;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:15
_1 = &param0->ir;
_2 = *_1;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
_4 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:17
_11 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:18
_32 = *(&local0);
_33 = &_32->locals;
_34 = *_33;
_35 = &param0->BIT_TYPE;
_36 = *_35;
_37 = ((frost$core$Object*) _36);
frost$collections$Array$add$frost$collections$Array$T(_34, _37);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:19
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:20
_42 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_43 = (frost$core$Int) {3u};
_44 = &param0->BIT_TYPE;
_45 = *_44;
_46 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_42, _43, _45, _46);
_48 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, _42);
_49 = ((frost$core$Object*) _48);
frost$core$Frost$ref$frost$core$Object$Q(_49);
_51 = *(&local2);
_52 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_52);
*(&local2) = _48;
_55 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_55);
_57 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_57);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:21
_60 = *(&local2);
_61 = _60 == NULL;
_62 = (frost$core$Bit) {_61};
_63 = _62.value;
if (_63) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:22
_66 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_66);
_68 = *(&local2);
_69 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_69);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
_72 = *(&local1);
_73 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_73);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
_76 = *(&local0);
_77 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_77);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:24
_82 = *(&local0);
_83 = ($fn16) _82->$class->vtable[3];
_84 = _83(_82, &$s17);
*(&local3) = _84;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:25
_87 = *(&local0);
_88 = ($fn18) _87->$class->vtable[3];
_89 = _88(_87, &$s19);
*(&local4) = _89;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:26
_92 = *(&local0);
_93 = ($fn20) _92->$class->vtable[3];
_94 = _93(_92, &$s21);
*(&local5) = _94;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:27
_97 = *(&local0);
_98 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_99 = (frost$core$Int) {5u};
_100 = *(&local2);
_101 = _100 != NULL;
_102 = (frost$core$Bit) {_101};
_103 = _102.value;
if (_103) goto block3; else goto block4;
block4:;
_105 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _105, &$s23);
abort(); // unreachable
block3:;
_108 = _100;
_109 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, _108);
_110 = *(&local3);
_111 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(_98, _99, param1, _109, _110, _111);
_113 = ($fn24) _97->$class->vtable[2];
_114 = _113(_97, _98);
_115 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_115);
_117 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_117);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:29
_120 = *(&local0);
_121 = *(&local3);
_122 = ($fn25) _120->$class->vtable[4];
_122(_120, _121);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:30
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:32
_128 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$AutoUnrefs), (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler(_128, param0);
*(&local7) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
_131 = ((frost$core$Object*) _128);
frost$core$Frost$ref$frost$core$Object$Q(_131);
_133 = *(&local7);
_134 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_134);
*(&local7) = _128;
_137 = ((frost$core$Object*) _128);
frost$core$Frost$unref$frost$core$Object$Q(_137);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:33
_140 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$TypeContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
_141 = (frost$core$Int) {3u};
_142 = &param0->BIT_TYPE;
_143 = *_142;
_144 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit(_140, _141, _143, _144);
_146 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, _140);
_147 = ((frost$core$Object*) _146);
frost$core$Frost$ref$frost$core$Object$Q(_147);
_149 = *(&local6);
_150 = ((frost$core$Object*) _149);
frost$core$Frost$unref$frost$core$Object$Q(_150);
*(&local6) = _146;
_153 = ((frost$core$Object*) _146);
frost$core$Frost$unref$frost$core$Object$Q(_153);
_155 = ((frost$core$Object*) _140);
frost$core$Frost$unref$frost$core$Object$Q(_155);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:35
_158 = *(&local6);
_159 = _158 == NULL;
_160 = (frost$core$Bit) {_159};
_161 = _160.value;
if (_161) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:36
_164 = ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_164);
_166 = *(&local7);
_167 = ((frost$core$Object*) _166);
frost$core$Frost$unref$frost$core$Object$Q(_167);
*(&local7) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
_170 = *(&local6);
_171 = ((frost$core$Object*) _170);
frost$core$Frost$unref$frost$core$Object$Q(_171);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
_174 = *(&local2);
_175 = ((frost$core$Object*) _174);
frost$core$Frost$unref$frost$core$Object$Q(_175);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
_178 = *(&local1);
_179 = ((frost$core$Object*) _178);
frost$core$Frost$unref$frost$core$Object$Q(_179);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
_182 = *(&local0);
_183 = ((frost$core$Object*) _182);
frost$core$Frost$unref$frost$core$Object$Q(_183);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block6:;
_187 = *(&local7);
_188 = ((frost$core$Object*) _187);
frost$core$Frost$unref$frost$core$Object$Q(_188);
*(&local7) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:39
_192 = *(&local0);
_193 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_194 = (frost$core$Int) {27u};
_195 = *(&local6);
_196 = _195 != NULL;
_197 = (frost$core$Bit) {_196};
_198 = _197.value;
if (_198) goto block7; else goto block8;
block8:;
_200 = (frost$core$Int) {39u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s26, _200, &$s27);
abort(); // unreachable
block7:;
_203 = _195;
_204 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(_193, _194, param1, _203, _204);
_206 = ($fn28) _192->$class->vtable[2];
_207 = _206(_192, _193);
_208 = ((frost$core$Object*) _193);
frost$core$Frost$unref$frost$core$Object$Q(_208);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:40
_211 = *(&local0);
_212 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_213 = (frost$core$Int) {1u};
_214 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Block$ID(_212, _213, param1, _214);
_216 = ($fn29) _211->$class->vtable[2];
_217 = _216(_211, _212);
_218 = ((frost$core$Object*) _212);
frost$core$Frost$unref$frost$core$Object$Q(_218);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:41
_221 = *(&local0);
_222 = *(&local4);
_223 = ($fn30) _221->$class->vtable[4];
_223(_221, _222);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:42
_226 = *(&local0);
_227 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_228 = (frost$core$Int) {27u};
_229 = *(&local2);
_230 = _229 != NULL;
_231 = (frost$core$Bit) {_230};
_232 = _231.value;
if (_232) goto block9; else goto block10;
block10:;
_234 = (frost$core$Int) {42u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s31, _234, &$s32);
abort(); // unreachable
block9:;
_237 = _229;
_238 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(_227, _228, param1, _237, _238);
_240 = ($fn33) _226->$class->vtable[2];
_241 = _240(_226, _227);
_242 = ((frost$core$Object*) _227);
frost$core$Frost$unref$frost$core$Object$Q(_242);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:43
_245 = *(&local0);
_246 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_247 = (frost$core$Int) {1u};
_248 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Block$ID(_246, _247, param1, _248);
_250 = ($fn34) _245->$class->vtable[2];
_251 = _250(_245, _246);
_252 = ((frost$core$Object*) _246);
frost$core$Frost$unref$frost$core$Object$Q(_252);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:44
_255 = *(&local0);
_256 = *(&local5);
_257 = ($fn35) _255->$class->vtable[4];
_257(_255, _256);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:45
_260 = *(&local0);
_261 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_262 = (frost$core$Int) {14u};
_263 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value(_261, _262, param1, _263);
_265 = ($fn36) _260->$class->vtable[2];
_266 = _265(_260, _261);
*(&local8) = _266;
_268 = ((frost$core$Object*) _261);
frost$core$Frost$unref$frost$core$Object$Q(_268);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:46
_271 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_272 = (frost$core$Int) {7u};
_273 = *(&local8);
_274 = &param0->BIT_TYPE;
_275 = *_274;
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(_271, _272, _273, _275);
_277 = _271;
_278 = ((frost$core$Object*) _277);
frost$core$Frost$ref$frost$core$Object$Q(_278);
_280 = ((frost$core$Object*) _271);
frost$core$Frost$unref$frost$core$Object$Q(_280);
_282 = *(&local6);
_283 = ((frost$core$Object*) _282);
frost$core$Frost$unref$frost$core$Object$Q(_283);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
_286 = *(&local2);
_287 = ((frost$core$Object*) _286);
frost$core$Frost$unref$frost$core$Object$Q(_287);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
_290 = *(&local1);
_291 = ((frost$core$Object*) _290);
frost$core$Frost$unref$frost$core$Object$Q(_291);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
_294 = *(&local0);
_295 = ((frost$core$Object*) _294);
frost$core$Frost$unref$frost$core$Object$Q(_295);
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return _277;

}
void org$frostlang$frostc$expression$And$compileConditionalBranch$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$ASTNode* param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$IR$Block$ID param3, org$frostlang$frostc$IR$Block$ID param4) {

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:52
_1 = &param0->ir;
_2 = *_1;
_3 = ($fn39) _2->$class->vtable[3];
_4 = _3(_2, &$s40);
*(&local0) = _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:53
_7 = *(&local0);
org$frostlang$frostc$Compiler$compileConditionalBranch$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, param1, _7, param4);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:54
_10 = &param0->ir;
_11 = *_10;
_12 = *(&local0);
_13 = ($fn41) _11->$class->vtable[4];
_13(_11, _12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:55
org$frostlang$frostc$Compiler$compileConditionalBranch$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, param2, param3, param4);
return;

}
void org$frostlang$frostc$expression$And$init(void* rawSelf) {
org$frostlang$frostc$expression$And* param0 = (org$frostlang$frostc$expression$And*) rawSelf;

return;

}
void org$frostlang$frostc$expression$And$cleanup(void* rawSelf) {
org$frostlang$frostc$expression$And* param0 = (org$frostlang$frostc$expression$And*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/And.frost:11
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}






