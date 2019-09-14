#include "org/frostlang/frostc/statement/Try.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/AutoScope.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/Variable/Kind.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Compiler/AutoContext.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Stack.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Try$class_type org$frostlang$frostc$statement$Try$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Try$cleanup} };

typedef org$frostlang$frostc$IR$Block$ID (*$fn2)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3)(org$frostlang$frostc$IR*, frost$core$String*);
typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn5)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn6)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn7)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn8)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn9)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn10)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$collections$Iterator* (*$fn11)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn12)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn13)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn14)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn15)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn16)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn17)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn18)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn19)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn20)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn21)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn22)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn23)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn25)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn48)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn57)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn58)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn59)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn65)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn66)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn67)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x54\x72\x79", 34, -3160075893431704438, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x79\x20\x66\x61\x69\x6c", 8, -4144140211942277782, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x79\x20\x65\x6e\x64", 7, 3097653119450397847, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 95, 3949674185659309185, NULL };

void org$frostlang$frostc$statement$Try$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$FixedArray* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4) {

org$frostlang$frostc$Compiler$AutoScope* local0 = NULL;
org$frostlang$frostc$IR* local1 = NULL;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$IR$Block$ID local3;
org$frostlang$frostc$Variable* local4 = NULL;
frost$core$String* local5 = NULL;
org$frostlang$frostc$Variable$Kind local6;
org$frostlang$frostc$Variable$Kind local7;
frost$core$Bit local8;
org$frostlang$frostc$Compiler$AutoContext* local9 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local10 = NULL;
org$frostlang$frostc$ASTNode* local11 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local12 = NULL;
org$frostlang$frostc$ASTNode* local13 = NULL;
org$frostlang$frostc$Compiler$AutoScope* _1;
frost$core$Object* _4;
org$frostlang$frostc$Compiler$AutoScope* _6;
frost$core$Object* _7;
frost$core$Object* _10;
org$frostlang$frostc$IR** _13;
org$frostlang$frostc$IR* _14;
frost$core$Object* _16;
org$frostlang$frostc$IR* _18;
frost$core$Object* _19;
org$frostlang$frostc$IR* _23;
$fn2 _24;
org$frostlang$frostc$IR$Block$ID _25;
org$frostlang$frostc$IR* _28;
$fn3 _29;
org$frostlang$frostc$IR$Block$ID _30;
bool _35;
frost$core$Bit _36;
bool _37;
bool _40;
frost$core$Bit _41;
bool _42;
frost$core$Int _44;
org$frostlang$frostc$ASTNode* _47;
frost$core$Int* _48;
frost$core$Int _49;
frost$core$Int _50;
int64_t _53;
int64_t _54;
bool _55;
frost$core$Bit _56;
bool _58;
org$frostlang$frostc$Position* _60;
org$frostlang$frostc$Position _61;
frost$core$String** _62;
frost$core$String* _63;
frost$core$Object* _65;
frost$core$String* _67;
frost$core$Object* _68;
org$frostlang$frostc$Variable* _72;
frost$core$Int _73;
frost$core$Int* _76;
org$frostlang$frostc$Variable$Kind _78;
org$frostlang$frostc$Variable$Kind _81;
frost$core$String* _82;
org$frostlang$frostc$Type** _83;
org$frostlang$frostc$Type* _84;
org$frostlang$frostc$Variable$Storage* _85;
frost$core$Int _86;
org$frostlang$frostc$IR* _87;
frost$collections$Array** _88;
frost$collections$Array* _89;
frost$collections$CollectionView* _90;
$fn4 _91;
frost$core$Int _92;
org$frostlang$frostc$Variable* _95;
frost$core$Object* _96;
org$frostlang$frostc$Variable* _98;
frost$core$Object* _99;
frost$core$Object* _102;
frost$core$Object* _104;
org$frostlang$frostc$Variable* _107;
bool _108;
frost$core$Bit _109;
bool _110;
frost$core$Int _112;
org$frostlang$frostc$Variable* _115;
frost$collections$Stack** _116;
frost$collections$Stack* _117;
frost$collections$Stack* _118;
frost$core$Int _119;
frost$core$Int _121;
int64_t _122;
int64_t _123;
bool _124;
frost$core$Bit _125;
bool _126;
frost$collections$Array** _130;
frost$collections$Array* _131;
frost$collections$CollectionView* _132;
$fn5 _133;
frost$core$Int _134;
int64_t _136;
int64_t _137;
bool _138;
frost$core$Bit _139;
bool _140;
frost$core$Int _142;
frost$collections$Array** _146;
frost$collections$Array* _147;
frost$collections$CollectionView* _148;
$fn6 _149;
frost$core$Int _150;
int64_t _151;
int64_t _152;
bool _153;
frost$core$Bit _154;
bool _155;
frost$core$Int _157;
frost$collections$Array** _161;
frost$collections$Array* _162;
frost$collections$Array* _163;
frost$collections$Array** _164;
frost$collections$Array* _165;
frost$collections$CollectionView* _166;
$fn7 _167;
frost$core$Int _168;
frost$core$Int _169;
int64_t _170;
int64_t _171;
int64_t _172;
frost$core$Int _173;
int64_t _174;
int64_t _175;
int64_t _176;
frost$core$Int _177;
frost$core$Int _179;
int64_t _180;
int64_t _181;
bool _182;
frost$core$Bit _183;
bool _184;
frost$collections$CollectionView* _186;
$fn8 _187;
frost$core$Int _188;
int64_t _189;
int64_t _190;
bool _191;
frost$core$Bit _192;
bool _193;
frost$core$Int _195;
frost$core$Object*** _199;
frost$core$Object** _200;
frost$core$Int64 _201;
int64_t _202;
frost$core$Object* _203;
frost$core$Object* _204;
frost$core$Object* _207;
frost$core$Object* _208;
frost$core$Object* _210;
org$frostlang$frostc$MethodDecl* _213;
org$frostlang$frostc$MethodDecl* _214;
frost$core$Weak* _215;
frost$core$Weak* _216;
frost$core$Object* _217;
frost$core$Object* _219;
frost$core$Weak** _221;
frost$core$Weak* _222;
frost$core$Object* _223;
frost$core$Weak** _225;
frost$core$Object* _227;
frost$core$Object* _229;
org$frostlang$frostc$Variable* _232;
bool _233;
frost$core$Bit _234;
bool _235;
frost$core$Int _237;
org$frostlang$frostc$Variable* _240;
org$frostlang$frostc$Type** _241;
org$frostlang$frostc$Type* _242;
frost$core$Bit _245;
bool _248;
bool _249;
frost$core$Bit _250;
bool _252;
frost$core$Bit _255;
frost$core$Bit _259;
bool _262;
bool _263;
frost$core$Bit _264;
frost$core$Bit _268;
bool _269;
org$frostlang$frostc$IR* _272;
org$frostlang$frostc$IR$Statement* _273;
frost$core$Int _274;
org$frostlang$frostc$IR$Value* _275;
frost$core$Int _276;
org$frostlang$frostc$Variable* _277;
bool _278;
frost$core$Bit _279;
bool _280;
frost$core$Int _282;
org$frostlang$frostc$Variable* _285;
org$frostlang$frostc$Type** _286;
org$frostlang$frostc$Type* _287;
org$frostlang$frostc$Type* _288;
org$frostlang$frostc$IR$Value* _290;
frost$core$Int _291;
org$frostlang$frostc$IR* _292;
frost$collections$Array** _293;
frost$collections$Array* _294;
frost$collections$CollectionView* _295;
$fn9 _296;
frost$core$Int _297;
org$frostlang$frostc$Variable* _298;
bool _299;
frost$core$Bit _300;
bool _301;
frost$core$Int _303;
org$frostlang$frostc$Variable* _306;
org$frostlang$frostc$Type** _307;
org$frostlang$frostc$Type* _308;
$fn10 _311;
org$frostlang$frostc$IR$Statement$ID _312;
frost$core$Object* _313;
frost$core$Object* _315;
frost$core$Object* _317;
frost$core$Object* _319;
frost$collections$Stack** _322;
frost$collections$Stack* _323;
frost$collections$Stack* _324;
org$frostlang$frostc$Compiler$EnclosingContext* _325;
frost$core$Int _326;
org$frostlang$frostc$Variable* _327;
bool _328;
frost$core$Bit _329;
bool _330;
frost$core$Int _332;
org$frostlang$frostc$Variable* _335;
frost$core$Object* _337;
frost$collections$Array** _340;
frost$collections$Array* _341;
frost$collections$Array* _342;
frost$core$Object* _343;
frost$core$Object* _346;
org$frostlang$frostc$IR* _350;
frost$collections$Array** _351;
frost$collections$Array* _352;
frost$collections$Array* _353;
org$frostlang$frostc$Variable* _354;
bool _355;
frost$core$Bit _356;
bool _357;
frost$core$Int _359;
org$frostlang$frostc$Variable* _362;
org$frostlang$frostc$Type** _363;
org$frostlang$frostc$Type* _364;
frost$core$Object* _365;
frost$core$String* _367;
frost$core$Object* _368;
frost$core$Int _373;
frost$core$Object* _379;
org$frostlang$frostc$Variable* _381;
frost$core$Object* _382;
org$frostlang$frostc$Compiler$AutoContext* _388;
org$frostlang$frostc$Compiler$EnclosingContext* _389;
frost$core$Int _390;
org$frostlang$frostc$IR$Block$ID _391;
org$frostlang$frostc$IR$Block$ID$nullable _392;
org$frostlang$frostc$Variable* _393;
frost$core$Object* _397;
org$frostlang$frostc$Compiler$AutoContext* _399;
frost$core$Object* _400;
frost$core$Object* _403;
frost$core$Object* _405;
org$frostlang$frostc$Compiler$AutoScope* _408;
frost$core$Object* _411;
org$frostlang$frostc$Compiler$AutoScope* _413;
frost$core$Object* _414;
frost$core$Object* _417;
frost$collections$Iterable* _420;
frost$collections$Iterable* _421;
$fn11 _422;
frost$collections$Iterator* _423;
frost$collections$Iterator* _424;
frost$collections$Iterator* _426;
$fn12 _427;
frost$core$Bit _428;
bool _429;
frost$collections$Iterator* _432;
$fn13 _433;
frost$core$Object* _434;
org$frostlang$frostc$ASTNode* _435;
frost$core$Object* _436;
org$frostlang$frostc$ASTNode* _438;
frost$core$Object* _439;
org$frostlang$frostc$ASTNode* _443;
frost$core$Object* _445;
org$frostlang$frostc$ASTNode* _447;
frost$core$Object* _448;
frost$core$Object* _452;
org$frostlang$frostc$Compiler$AutoScope* _454;
frost$core$Object* _455;
org$frostlang$frostc$Compiler$AutoContext* _458;
frost$core$Object* _459;
org$frostlang$frostc$IR* _463;
$fn14 _464;
frost$core$Bit _465;
bool _468;
bool _469;
frost$core$Bit _470;
bool _472;
org$frostlang$frostc$IR* _475;
org$frostlang$frostc$IR$Statement* _476;
frost$core$Int _477;
org$frostlang$frostc$IR$Block$ID _478;
$fn15 _480;
org$frostlang$frostc$IR$Statement$ID _481;
frost$core$Object* _482;
org$frostlang$frostc$IR* _486;
org$frostlang$frostc$IR$Block$ID _487;
$fn16 _488;
org$frostlang$frostc$Compiler$AutoScope* _493;
frost$core$Object* _496;
org$frostlang$frostc$Compiler$AutoScope* _498;
frost$core$Object* _499;
frost$core$Object* _502;
org$frostlang$frostc$Variable* _505;
bool _506;
frost$core$Bit _507;
bool _508;
org$frostlang$frostc$SymbolTable** _511;
org$frostlang$frostc$SymbolTable* _512;
org$frostlang$frostc$Variable* _513;
bool _514;
frost$core$Bit _515;
bool _516;
frost$core$Int _518;
org$frostlang$frostc$Symbol* _521;
frost$core$String** _524;
frost$core$String* _525;
frost$collections$Iterable* _530;
frost$collections$Iterable* _531;
$fn17 _532;
frost$collections$Iterator* _533;
frost$collections$Iterator* _534;
frost$collections$Iterator* _536;
$fn18 _537;
frost$core$Bit _538;
bool _539;
frost$collections$Iterator* _542;
$fn19 _543;
frost$core$Object* _544;
org$frostlang$frostc$ASTNode* _545;
frost$core$Object* _546;
org$frostlang$frostc$ASTNode* _548;
frost$core$Object* _549;
org$frostlang$frostc$ASTNode* _553;
frost$core$Object* _555;
org$frostlang$frostc$ASTNode* _557;
frost$core$Object* _558;
frost$core$Object* _562;
org$frostlang$frostc$Compiler$AutoScope* _564;
frost$core$Object* _565;
org$frostlang$frostc$IR* _569;
$fn20 _570;
frost$core$Bit _571;
bool _574;
bool _575;
frost$core$Bit _576;
bool _578;
org$frostlang$frostc$IR* _581;
org$frostlang$frostc$IR$Statement* _582;
frost$core$Int _583;
org$frostlang$frostc$IR$Block$ID _584;
$fn21 _586;
org$frostlang$frostc$IR$Statement$ID _587;
frost$core$Object* _588;
org$frostlang$frostc$IR* _592;
org$frostlang$frostc$IR$Block$ID _593;
$fn22 _594;
org$frostlang$frostc$Variable* _596;
frost$core$Object* _597;
org$frostlang$frostc$IR* _600;
frost$core$Object* _601;
org$frostlang$frostc$Compiler$AutoScope* _604;
frost$core$Object* _605;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:18
_1 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$AutoScope), (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler(_1, param0);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:19
_13 = &param0->ir;
_14 = *_13;
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local1);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local1) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:20
_23 = *(&local1);
_24 = ($fn23) _23->$class->vtable[3];
_25 = _24(_23, &$s24);
*(&local2) = _25;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:21
_28 = *(&local1);
_29 = ($fn25) _28->$class->vtable[3];
_30 = _29(_28, &$s26);
*(&local3) = _30;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:22
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:23
_35 = param3 != NULL;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:24
_40 = param3 != NULL;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block4; else goto block5;
block5:;
_44 = (frost$core$Int) {24u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s27, _44, &$s28);
abort(); // unreachable
block4:;
_47 = param3;
_48 = &_47->$rawValue;
_49 = *_48;
_50 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Try.frost:25:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_53 = _49.value;
_54 = _50.value;
_55 = _53 == _54;
_56 = (frost$core$Bit) {_55};
_58 = _56.value;
if (_58) goto block7; else goto block8;
block7:;
_60 = &param3->$data.$IDENTIFIER.field0;
_61 = *_60;
_62 = &param3->$data.$IDENTIFIER.field1;
_63 = *_62;
*(&local5) = ((frost$core$String*) NULL);
_65 = ((frost$core$Object*) _63);
frost$core$Frost$ref$frost$core$Object$Q(_65);
_67 = *(&local5);
_68 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_68);
*(&local5) = _63;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:26
_72 = (org$frostlang$frostc$Variable*) frostObjectAlloc(sizeof(org$frostlang$frostc$Variable), (frost$core$Class*) &org$frostlang$frostc$Variable$class);
_73 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Variable.Kind from Try.frost:26:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
_76 = &(&local7)->$rawValue;
*_76 = _73;
_78 = *(&local7);
*(&local6) = _78;
_81 = *(&local6);
_82 = *(&local5);
_83 = &param0->ERROR_TYPE;
_84 = *_83;
_85 = (org$frostlang$frostc$Variable$Storage*) frostObjectAlloc(sizeof(org$frostlang$frostc$Variable$Storage), (frost$core$Class*) &org$frostlang$frostc$Variable$Storage$class);
_86 = (frost$core$Int) {0u};
_87 = *(&local1);
_88 = &_87->locals;
_89 = *_88;
_90 = ((frost$collections$CollectionView*) _89);
ITable* $tmp29 = _90->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp29 = $tmp29->next;
}
_91 = $tmp29->methods[0];
_92 = _91(_90);
org$frostlang$frostc$Variable$Storage$init$frost$core$Int$frost$core$Int(_85, _86, _92);
org$frostlang$frostc$Variable$init$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Variable$Storage(_72, param1, _81, _82, _84, _85);
_95 = _72;
_96 = ((frost$core$Object*) _95);
frost$core$Frost$ref$frost$core$Object$Q(_96);
_98 = *(&local4);
_99 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_99);
*(&local4) = _95;
_102 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_102);
_104 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_104);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:28
_107 = *(&local4);
_108 = _107 != NULL;
_109 = (frost$core$Bit) {_108};
_110 = _109.value;
if (_110) goto block11; else goto block12;
block12:;
_112 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s30, _112, &$s31);
abort(); // unreachable
block11:;
_115 = _107;
_116 = &param0->currentMethod;
_117 = *_116;
_118 = _117;
_119 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Try.frost:28:61
_121 = (frost$core$Int) {0u};
_122 = _119.value;
_123 = _121.value;
_124 = _122 >= _123;
_125 = (frost$core$Bit) {_124};
_126 = _125.value;
if (_126) goto block16; else goto block15;
block16:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_130 = &_118->contents;
_131 = *_130;
_132 = ((frost$collections$CollectionView*) _131);
ITable* $tmp32 = _132->$class->itable;
while ($tmp32->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp32 = $tmp32->next;
}
_133 = $tmp32->methods[0];
_134 = _133(_132);
_136 = _119.value;
_137 = _134.value;
_138 = _136 < _137;
_139 = (frost$core$Bit) {_138};
_140 = _139.value;
if (_140) goto block14; else goto block15;
block15:;
_142 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s33, _142, &$s34);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_146 = &_118->contents;
_147 = *_146;
_148 = ((frost$collections$CollectionView*) _147);
ITable* $tmp35 = _148->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp35 = $tmp35->next;
}
_149 = $tmp35->methods[0];
_150 = _149(_148);
_151 = _150.value;
_152 = _119.value;
_153 = _151 > _152;
_154 = (frost$core$Bit) {_153};
_155 = _154.value;
if (_155) goto block18; else goto block19;
block19:;
_157 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s36, _157);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_161 = &_118->contents;
_162 = *_161;
_163 = _162;
_164 = &_118->contents;
_165 = *_164;
_166 = ((frost$collections$CollectionView*) _165);
ITable* $tmp37 = _166->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp37 = $tmp37->next;
}
_167 = $tmp37->methods[0];
_168 = _167(_166);
_169 = (frost$core$Int) {1u};
_170 = _168.value;
_171 = _169.value;
_172 = _170 - _171;
_173 = (frost$core$Int) {_172};
_174 = _173.value;
_175 = _119.value;
_176 = _174 - _175;
_177 = (frost$core$Int) {_176};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_179 = (frost$core$Int) {0u};
_180 = _177.value;
_181 = _179.value;
_182 = _180 >= _181;
_183 = (frost$core$Bit) {_182};
_184 = _183.value;
if (_184) goto block23; else goto block22;
block23:;
_186 = ((frost$collections$CollectionView*) _163);
ITable* $tmp38 = _186->$class->itable;
while ($tmp38->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp38 = $tmp38->next;
}
_187 = $tmp38->methods[0];
_188 = _187(_186);
_189 = _177.value;
_190 = _188.value;
_191 = _189 < _190;
_192 = (frost$core$Bit) {_191};
_193 = _192.value;
if (_193) goto block21; else goto block22;
block22:;
_195 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s39, _195, &$s40);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_199 = &_163->data;
_200 = *_199;
_201 = frost$core$Int64$init$frost$core$Int(_177);
_202 = _201.value;
_203 = _200[_202];
_204 = _203;
frost$core$Frost$ref$frost$core$Object$Q(_204);
_207 = _203;
_208 = _207;
frost$core$Frost$ref$frost$core$Object$Q(_208);
_210 = _203;
frost$core$Frost$unref$frost$core$Object$Q(_210);
_213 = ((org$frostlang$frostc$MethodDecl*) _207);
_214 = _213;
_215 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_216 = _215;
_217 = ((frost$core$Object*) _214);
frost$core$Weak$init$frost$core$Weak$T$Q(_216, _217);
_219 = ((frost$core$Object*) _215);
frost$core$Frost$ref$frost$core$Object$Q(_219);
_221 = &_115->owner;
_222 = *_221;
_223 = ((frost$core$Object*) _222);
frost$core$Frost$unref$frost$core$Object$Q(_223);
_225 = &_115->owner;
*_225 = _215;
_227 = ((frost$core$Object*) _215);
frost$core$Frost$unref$frost$core$Object$Q(_227);
_229 = _207;
frost$core$Frost$unref$frost$core$Object$Q(_229);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:29
_232 = *(&local4);
_233 = _232 != NULL;
_234 = (frost$core$Bit) {_233};
_235 = _234.value;
if (_235) goto block26; else goto block27;
block27:;
_237 = (frost$core$Int) {29u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s41, _237, &$s42);
abort(); // unreachable
block26:;
_240 = _232;
_241 = &_240->type;
_242 = *_241;
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Try.frost:29:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:664
_245 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(_242);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:664:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_248 = _245.value;
_249 = !_248;
_250 = (frost$core$Bit) {_249};
_252 = _250.value;
if (_252) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:665
_255 = (frost$core$Bit) {false};
*(&local8) = _255;
goto block28;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:667
_259 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, _242);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:667:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_262 = _259.value;
_263 = !_262;
_264 = (frost$core$Bit) {_263};
*(&local8) = _264;
goto block28;
block28:;
_268 = *(&local8);
_269 = _268.value;
if (_269) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:30
_272 = *(&local1);
_273 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_274 = (frost$core$Int) {27u};
_275 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_276 = (frost$core$Int) {4u};
_277 = *(&local4);
_278 = _277 != NULL;
_279 = (frost$core$Bit) {_278};
_280 = _279.value;
if (_280) goto block33; else goto block34;
block34:;
_282 = (frost$core$Int) {30u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s43, _282, &$s44);
abort(); // unreachable
block33:;
_285 = _277;
_286 = &_285->type;
_287 = *_286;
_288 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(_287);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type(_275, _276, _288);
_290 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_291 = (frost$core$Int) {2u};
_292 = *(&local1);
_293 = &_292->locals;
_294 = *_293;
_295 = ((frost$collections$CollectionView*) _294);
ITable* $tmp45 = _295->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp45 = $tmp45->next;
}
_296 = $tmp45->methods[0];
_297 = _296(_295);
_298 = *(&local4);
_299 = _298 != NULL;
_300 = (frost$core$Bit) {_299};
_301 = _300.value;
if (_301) goto block35; else goto block36;
block36:;
_303 = (frost$core$Int) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s46, _303, &$s47);
abort(); // unreachable
block35:;
_306 = _298;
_307 = &_306->type;
_308 = *_307;
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type(_290, _291, _297, _308);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(_273, _274, param1, _275, _290);
_311 = ($fn48) _272->$class->vtable[2];
_312 = _311(_272, _273);
_313 = ((frost$core$Object*) _290);
frost$core$Frost$unref$frost$core$Object$Q(_313);
_315 = ((frost$core$Object*) _288);
frost$core$Frost$unref$frost$core$Object$Q(_315);
_317 = ((frost$core$Object*) _275);
frost$core$Frost$unref$frost$core$Object$Q(_317);
_319 = ((frost$core$Object*) _273);
frost$core$Frost$unref$frost$core$Object$Q(_319);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:32
_322 = &param0->enclosingContexts;
_323 = *_322;
_324 = _323;
_325 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$EnclosingContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
_326 = (frost$core$Int) {3u};
_327 = *(&local4);
_328 = _327 != NULL;
_329 = (frost$core$Bit) {_328};
_330 = _329.value;
if (_330) goto block37; else goto block38;
block38:;
_332 = (frost$core$Int) {32u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s49, _332, &$s50);
abort(); // unreachable
block37:;
_335 = _327;
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$org$frostlang$frostc$Variable(_325, _326, _335);
_337 = ((frost$core$Object*) _325);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Try.frost:32:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
_340 = &_324->contents;
_341 = *_340;
_342 = _341;
_343 = _337;
frost$collections$Array$add$frost$collections$Array$T(_342, _343);
_346 = ((frost$core$Object*) _325);
frost$core$Frost$unref$frost$core$Object$Q(_346);
goto block25;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:34
_350 = *(&local1);
_351 = &_350->locals;
_352 = *_351;
_353 = _352;
_354 = *(&local4);
_355 = _354 != NULL;
_356 = (frost$core$Bit) {_355};
_357 = _356.value;
if (_357) goto block40; else goto block41;
block41:;
_359 = (frost$core$Int) {34u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s51, _359, &$s52);
abort(); // unreachable
block40:;
_362 = _354;
_363 = &_362->type;
_364 = *_363;
_365 = ((frost$core$Object*) _364);
frost$collections$Array$add$frost$collections$Array$T(_353, _365);
_367 = *(&local5);
_368 = ((frost$core$Object*) _367);
frost$core$Frost$unref$frost$core$Object$Q(_368);
*(&local5) = ((frost$core$String*) NULL);
goto block2;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:37
_373 = (frost$core$Int) {37u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s53, _373);
abort(); // unreachable
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:42
_379 = ((frost$core$Object*) ((org$frostlang$frostc$Variable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_379);
_381 = *(&local4);
_382 = ((frost$core$Object*) _381);
frost$core$Frost$unref$frost$core$Object$Q(_382);
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
goto block2;
block2:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:45
_388 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$AutoContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
_389 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$EnclosingContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
_390 = (frost$core$Int) {5u};
_391 = *(&local2);
_392 = ((org$frostlang$frostc$IR$Block$ID$nullable) { _391, true });
_393 = *(&local4);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$org$frostlang$frostc$IR$Block$ID$Q$org$frostlang$frostc$Variable$Q(_389, _390, _392, _393);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext(_388, param0, _389);
*(&local9) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
_397 = ((frost$core$Object*) _388);
frost$core$Frost$ref$frost$core$Object$Q(_397);
_399 = *(&local9);
_400 = ((frost$core$Object*) _399);
frost$core$Frost$unref$frost$core$Object$Q(_400);
*(&local9) = _388;
_403 = ((frost$core$Object*) _389);
frost$core$Frost$unref$frost$core$Object$Q(_403);
_405 = ((frost$core$Object*) _388);
frost$core$Frost$unref$frost$core$Object$Q(_405);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:47
_408 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$AutoScope), (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler(_408, param0);
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
_411 = ((frost$core$Object*) _408);
frost$core$Frost$ref$frost$core$Object$Q(_411);
_413 = *(&local10);
_414 = ((frost$core$Object*) _413);
frost$core$Frost$unref$frost$core$Object$Q(_414);
*(&local10) = _408;
_417 = ((frost$core$Object*) _408);
frost$core$Frost$unref$frost$core$Object$Q(_417);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:48
_420 = ((frost$collections$Iterable*) param2);
_421 = _420;
ITable* $tmp54 = _421->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp54 = $tmp54->next;
}
_422 = $tmp54->methods[0];
_423 = _422(_421);
_424 = _423;
goto block42;
block42:;
_426 = _424;
ITable* $tmp55 = _426->$class->itable;
while ($tmp55->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp55 = $tmp55->next;
}
_427 = $tmp55->methods[0];
_428 = _427(_426);
_429 = _428.value;
if (_429) goto block44; else goto block43;
block43:;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
_432 = _424;
ITable* $tmp56 = _432->$class->itable;
while ($tmp56->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp56 = $tmp56->next;
}
_433 = $tmp56->methods[1];
_434 = _433(_432);
_435 = ((org$frostlang$frostc$ASTNode*) _434);
_436 = ((frost$core$Object*) _435);
frost$core$Frost$ref$frost$core$Object$Q(_436);
_438 = *(&local11);
_439 = ((frost$core$Object*) _438);
frost$core$Frost$unref$frost$core$Object$Q(_439);
*(&local11) = _435;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:49
_443 = *(&local11);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, _443);
_445 = _434;
frost$core$Frost$unref$frost$core$Object$Q(_445);
_447 = *(&local11);
_448 = ((frost$core$Object*) _447);
frost$core$Frost$unref$frost$core$Object$Q(_448);
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block42;
block44:;
_452 = ((frost$core$Object*) _423);
frost$core$Frost$unref$frost$core$Object$Q(_452);
_454 = *(&local10);
_455 = ((frost$core$Object*) _454);
frost$core$Frost$unref$frost$core$Object$Q(_455);
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
_458 = *(&local9);
_459 = ((frost$core$Object*) _458);
frost$core$Frost$unref$frost$core$Object$Q(_459);
*(&local9) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:52
_463 = *(&local1);
_464 = ($fn57) _463->$class->vtable[5];
_465 = _464(_463);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Try.frost:52:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_468 = _465.value;
_469 = !_468;
_470 = (frost$core$Bit) {_469};
_472 = _470.value;
if (_472) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:53
_475 = *(&local1);
_476 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_477 = (frost$core$Int) {1u};
_478 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID(_476, _477, param1, _478);
_480 = ($fn58) _475->$class->vtable[2];
_481 = _480(_475, _476);
_482 = ((frost$core$Object*) _476);
frost$core$Frost$unref$frost$core$Object$Q(_482);
goto block46;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:55
_486 = *(&local1);
_487 = *(&local2);
_488 = ($fn59) _486->$class->vtable[4];
_488(_486, _487);
// <no location>
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:58
_493 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$AutoScope), (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler(_493, param0);
*(&local12) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
_496 = ((frost$core$Object*) _493);
frost$core$Frost$ref$frost$core$Object$Q(_496);
_498 = *(&local12);
_499 = ((frost$core$Object*) _498);
frost$core$Frost$unref$frost$core$Object$Q(_499);
*(&local12) = _493;
_502 = ((frost$core$Object*) _493);
frost$core$Frost$unref$frost$core$Object$Q(_502);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:59
_505 = *(&local4);
_506 = _505 != NULL;
_507 = (frost$core$Bit) {_506};
_508 = _507.value;
if (_508) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:60
_511 = &param0->symbolTable;
_512 = *_511;
_513 = *(&local4);
_514 = _513 != NULL;
_515 = (frost$core$Bit) {_514};
_516 = _515.value;
if (_516) goto block50; else goto block51;
block51:;
_518 = (frost$core$Int) {60u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s60, _518, &$s61);
abort(); // unreachable
block50:;
_521 = ((org$frostlang$frostc$Symbol*) _513);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Try.frost:60:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
_524 = &_521->name;
_525 = *_524;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String(_512, _521, _525);
goto block49;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:62
_530 = ((frost$collections$Iterable*) param4);
_531 = _530;
ITable* $tmp62 = _531->$class->itable;
while ($tmp62->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp62 = $tmp62->next;
}
_532 = $tmp62->methods[0];
_533 = _532(_531);
_534 = _533;
goto block53;
block53:;
_536 = _534;
ITable* $tmp63 = _536->$class->itable;
while ($tmp63->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp63 = $tmp63->next;
}
_537 = $tmp63->methods[0];
_538 = _537(_536);
_539 = _538.value;
if (_539) goto block55; else goto block54;
block54:;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
_542 = _534;
ITable* $tmp64 = _542->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp64 = $tmp64->next;
}
_543 = $tmp64->methods[1];
_544 = _543(_542);
_545 = ((org$frostlang$frostc$ASTNode*) _544);
_546 = ((frost$core$Object*) _545);
frost$core$Frost$ref$frost$core$Object$Q(_546);
_548 = *(&local13);
_549 = ((frost$core$Object*) _548);
frost$core$Frost$unref$frost$core$Object$Q(_549);
*(&local13) = _545;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:63
_553 = *(&local13);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, _553);
_555 = _544;
frost$core$Frost$unref$frost$core$Object$Q(_555);
_557 = *(&local13);
_558 = ((frost$core$Object*) _557);
frost$core$Frost$unref$frost$core$Object$Q(_558);
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block53;
block55:;
_562 = ((frost$core$Object*) _533);
frost$core$Frost$unref$frost$core$Object$Q(_562);
_564 = *(&local12);
_565 = ((frost$core$Object*) _564);
frost$core$Frost$unref$frost$core$Object$Q(_565);
*(&local12) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:66
_569 = *(&local1);
_570 = ($fn65) _569->$class->vtable[5];
_571 = _570(_569);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Try.frost:66:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_574 = _571.value;
_575 = !_574;
_576 = (frost$core$Bit) {_575};
_578 = _576.value;
if (_578) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:67
_581 = *(&local1);
_582 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_583 = (frost$core$Int) {1u};
_584 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID(_582, _583, param1, _584);
_586 = ($fn66) _581->$class->vtable[2];
_587 = _586(_581, _582);
_588 = ((frost$core$Object*) _582);
frost$core$Frost$unref$frost$core$Object$Q(_588);
goto block57;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:70
_592 = *(&local1);
_593 = *(&local3);
_594 = ($fn67) _592->$class->vtable[4];
_594(_592, _593);
_596 = *(&local4);
_597 = ((frost$core$Object*) _596);
frost$core$Frost$unref$frost$core$Object$Q(_597);
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
_600 = *(&local1);
_601 = ((frost$core$Object*) _600);
frost$core$Frost$unref$frost$core$Object$Q(_601);
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
_604 = *(&local0);
_605 = ((frost$core$Object*) _604);
frost$core$Frost$unref$frost$core$Object$Q(_605);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return;

}
void org$frostlang$frostc$statement$Try$init(void* rawSelf) {
org$frostlang$frostc$statement$Try* param0 = (org$frostlang$frostc$statement$Try*) rawSelf;

return;

}
void org$frostlang$frostc$statement$Try$cleanup(void* rawSelf) {
org$frostlang$frostc$statement$Try* param0 = (org$frostlang$frostc$statement$Try*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:14
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

