#include "org/frostlang/frostc/statement/Try.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/MethodPosition.h"
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
#include "org/frostlang/frostc/Position.h"
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

void org$frostlang$frostc$statement$Try$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$MethodPosition param1, org$frostlang$frostc$FixedArray* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4) {

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
frost$core$Int _75;
frost$core$Int _76;
frost$core$Int _77;
org$frostlang$frostc$Position _78;
frost$core$Int _80;
frost$core$Int* _83;
org$frostlang$frostc$Variable$Kind _85;
org$frostlang$frostc$Variable$Kind _88;
frost$core$String* _89;
org$frostlang$frostc$Type** _90;
org$frostlang$frostc$Type* _91;
org$frostlang$frostc$Variable$Storage* _92;
frost$core$Int _93;
org$frostlang$frostc$IR* _94;
frost$collections$Array** _95;
frost$collections$Array* _96;
frost$collections$CollectionView* _97;
$fn4 _98;
frost$core$Int _99;
org$frostlang$frostc$Variable* _102;
frost$core$Object* _103;
org$frostlang$frostc$Variable* _105;
frost$core$Object* _106;
frost$core$Object* _109;
frost$core$Object* _111;
org$frostlang$frostc$Variable* _114;
bool _115;
frost$core$Bit _116;
bool _117;
frost$core$Int _119;
org$frostlang$frostc$Variable* _122;
frost$collections$Stack** _123;
frost$collections$Stack* _124;
frost$core$Int _125;
frost$core$Int _127;
int64_t _128;
int64_t _129;
bool _130;
frost$core$Bit _131;
bool _132;
frost$collections$Array** _136;
frost$collections$Array* _137;
frost$collections$CollectionView* _138;
$fn5 _139;
frost$core$Int _140;
int64_t _142;
int64_t _143;
bool _144;
frost$core$Bit _145;
bool _146;
frost$core$Int _148;
frost$collections$Array** _152;
frost$collections$Array* _153;
frost$collections$CollectionView* _154;
$fn6 _155;
frost$core$Int _156;
int64_t _157;
int64_t _158;
bool _159;
frost$core$Bit _160;
bool _161;
frost$core$Int _163;
frost$collections$Array** _167;
frost$collections$Array* _168;
frost$collections$Array** _169;
frost$collections$Array* _170;
frost$collections$CollectionView* _171;
$fn7 _172;
frost$core$Int _173;
frost$core$Int _174;
int64_t _175;
int64_t _176;
int64_t _177;
frost$core$Int _178;
int64_t _179;
int64_t _180;
int64_t _181;
frost$core$Int _182;
frost$core$Int _184;
int64_t _185;
int64_t _186;
bool _187;
frost$core$Bit _188;
bool _189;
frost$collections$CollectionView* _191;
$fn8 _192;
frost$core$Int _193;
int64_t _194;
int64_t _195;
bool _196;
frost$core$Bit _197;
bool _198;
frost$core$Int _200;
frost$core$Object*** _204;
frost$core$Object** _205;
frost$core$Int64 _206;
int64_t _207;
frost$core$Object* _208;
frost$core$Object* _209;
frost$core$Object* _212;
frost$core$Object* _213;
frost$core$Object* _215;
org$frostlang$frostc$MethodDecl* _218;
org$frostlang$frostc$MethodDecl* _219;
frost$core$Weak* _220;
frost$core$Object* _221;
frost$core$Object* _223;
frost$core$Weak** _225;
frost$core$Weak* _226;
frost$core$Object* _227;
frost$core$Weak** _229;
frost$core$Object* _231;
frost$core$Object* _233;
org$frostlang$frostc$Variable* _236;
bool _237;
frost$core$Bit _238;
bool _239;
frost$core$Int _241;
org$frostlang$frostc$Variable* _244;
org$frostlang$frostc$Type** _245;
org$frostlang$frostc$Type* _246;
frost$core$Bit _249;
bool _252;
bool _253;
frost$core$Bit _254;
bool _256;
frost$core$Bit _259;
frost$core$Bit _263;
bool _266;
bool _267;
frost$core$Bit _268;
frost$core$Bit _272;
bool _273;
org$frostlang$frostc$IR* _276;
org$frostlang$frostc$IR$Statement* _277;
frost$core$Int _278;
org$frostlang$frostc$IR$Value* _279;
frost$core$Int _280;
org$frostlang$frostc$Variable* _281;
bool _282;
frost$core$Bit _283;
bool _284;
frost$core$Int _286;
org$frostlang$frostc$Variable* _289;
org$frostlang$frostc$Type** _290;
org$frostlang$frostc$Type* _291;
org$frostlang$frostc$Type* _292;
org$frostlang$frostc$IR$Value* _294;
frost$core$Int _295;
org$frostlang$frostc$IR* _296;
frost$collections$Array** _297;
frost$collections$Array* _298;
frost$collections$CollectionView* _299;
$fn9 _300;
frost$core$Int _301;
org$frostlang$frostc$Variable* _302;
bool _303;
frost$core$Bit _304;
bool _305;
frost$core$Int _307;
org$frostlang$frostc$Variable* _310;
org$frostlang$frostc$Type** _311;
org$frostlang$frostc$Type* _312;
$fn10 _315;
org$frostlang$frostc$IR$Statement$ID _316;
frost$core$Object* _317;
frost$core$Object* _319;
frost$core$Object* _321;
frost$core$Object* _323;
frost$collections$Stack** _326;
frost$collections$Stack* _327;
org$frostlang$frostc$Compiler$EnclosingContext* _328;
frost$core$Int _329;
org$frostlang$frostc$Variable* _330;
bool _331;
frost$core$Bit _332;
bool _333;
frost$core$Int _335;
org$frostlang$frostc$Variable* _338;
frost$core$Object* _340;
frost$collections$Array** _343;
frost$collections$Array* _344;
frost$core$Object* _345;
frost$core$Object* _348;
org$frostlang$frostc$IR* _352;
frost$collections$Array** _353;
frost$collections$Array* _354;
org$frostlang$frostc$Variable* _355;
bool _356;
frost$core$Bit _357;
bool _358;
frost$core$Int _360;
org$frostlang$frostc$Variable* _363;
org$frostlang$frostc$Type** _364;
org$frostlang$frostc$Type* _365;
frost$core$Object* _366;
frost$core$String* _368;
frost$core$Object* _369;
frost$core$Int _374;
frost$core$Object* _380;
org$frostlang$frostc$Variable* _382;
frost$core$Object* _383;
org$frostlang$frostc$Compiler$AutoContext* _389;
org$frostlang$frostc$Compiler$EnclosingContext* _390;
frost$core$Int _391;
org$frostlang$frostc$IR$Block$ID _392;
org$frostlang$frostc$IR$Block$ID$nullable _393;
org$frostlang$frostc$Variable* _394;
frost$core$Object* _398;
org$frostlang$frostc$Compiler$AutoContext* _400;
frost$core$Object* _401;
frost$core$Object* _404;
frost$core$Object* _406;
org$frostlang$frostc$Compiler$AutoScope* _409;
frost$core$Object* _412;
org$frostlang$frostc$Compiler$AutoScope* _414;
frost$core$Object* _415;
frost$core$Object* _418;
frost$collections$Iterable* _421;
$fn11 _422;
frost$collections$Iterator* _423;
$fn12 _425;
frost$core$Bit _426;
bool _427;
$fn13 _430;
frost$core$Object* _431;
org$frostlang$frostc$ASTNode* _432;
frost$core$Object* _433;
org$frostlang$frostc$ASTNode* _435;
frost$core$Object* _436;
org$frostlang$frostc$ASTNode* _440;
frost$core$Object* _442;
org$frostlang$frostc$ASTNode* _444;
frost$core$Object* _445;
frost$core$Object* _449;
org$frostlang$frostc$Compiler$AutoScope* _451;
frost$core$Object* _452;
org$frostlang$frostc$Compiler$AutoContext* _455;
frost$core$Object* _456;
org$frostlang$frostc$IR* _460;
$fn14 _461;
frost$core$Bit _462;
bool _465;
bool _466;
frost$core$Bit _467;
bool _469;
org$frostlang$frostc$IR* _472;
org$frostlang$frostc$IR$Statement* _473;
frost$core$Int _474;
org$frostlang$frostc$IR$Block$ID _475;
$fn15 _477;
org$frostlang$frostc$IR$Statement$ID _478;
frost$core$Object* _479;
org$frostlang$frostc$IR* _483;
org$frostlang$frostc$IR$Block$ID _484;
$fn16 _485;
org$frostlang$frostc$Compiler$AutoScope* _490;
frost$core$Object* _493;
org$frostlang$frostc$Compiler$AutoScope* _495;
frost$core$Object* _496;
frost$core$Object* _499;
org$frostlang$frostc$Variable* _502;
bool _503;
frost$core$Bit _504;
bool _505;
org$frostlang$frostc$SymbolTable** _508;
org$frostlang$frostc$SymbolTable* _509;
org$frostlang$frostc$Variable* _510;
bool _511;
frost$core$Bit _512;
bool _513;
frost$core$Int _515;
org$frostlang$frostc$Symbol* _518;
frost$core$String** _521;
frost$core$String* _522;
frost$collections$Iterable* _527;
$fn17 _528;
frost$collections$Iterator* _529;
$fn18 _531;
frost$core$Bit _532;
bool _533;
$fn19 _536;
frost$core$Object* _537;
org$frostlang$frostc$ASTNode* _538;
frost$core$Object* _539;
org$frostlang$frostc$ASTNode* _541;
frost$core$Object* _542;
org$frostlang$frostc$ASTNode* _546;
frost$core$Object* _548;
org$frostlang$frostc$ASTNode* _550;
frost$core$Object* _551;
frost$core$Object* _555;
org$frostlang$frostc$Compiler$AutoScope* _557;
frost$core$Object* _558;
org$frostlang$frostc$IR* _562;
$fn20 _563;
frost$core$Bit _564;
bool _567;
bool _568;
frost$core$Bit _569;
bool _571;
org$frostlang$frostc$IR* _574;
org$frostlang$frostc$IR$Statement* _575;
frost$core$Int _576;
org$frostlang$frostc$IR$Block$ID _577;
$fn21 _579;
org$frostlang$frostc$IR$Statement$ID _580;
frost$core$Object* _581;
org$frostlang$frostc$IR* _585;
org$frostlang$frostc$IR$Block$ID _586;
$fn22 _587;
org$frostlang$frostc$Variable* _589;
frost$core$Object* _590;
org$frostlang$frostc$IR* _593;
frost$core$Object* _594;
org$frostlang$frostc$Compiler$AutoScope* _597;
frost$core$Object* _598;
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
// begin inline call to function org.frostlang.frostc.MethodPosition.get_asPosition():org.frostlang.frostc.Position from Try.frost:26:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodPosition.frost:40
_75 = param1.file;
_76 = param1.line;
_77 = param1.column;
_78 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_75, _76, _77);
_80 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Variable.Kind from Try.frost:26:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
_83 = &(&local7)->$rawValue;
*_83 = _80;
_85 = *(&local7);
*(&local6) = _85;
_88 = *(&local6);
_89 = *(&local5);
_90 = &param0->ERROR_TYPE;
_91 = *_90;
_92 = (org$frostlang$frostc$Variable$Storage*) frostObjectAlloc(sizeof(org$frostlang$frostc$Variable$Storage), (frost$core$Class*) &org$frostlang$frostc$Variable$Storage$class);
_93 = (frost$core$Int) {0u};
_94 = *(&local1);
_95 = &_94->locals;
_96 = *_95;
_97 = ((frost$collections$CollectionView*) _96);
ITable* $tmp29 = _97->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp29 = $tmp29->next;
}
_98 = $tmp29->methods[0];
_99 = _98(_97);
org$frostlang$frostc$Variable$Storage$init$frost$core$Int$frost$core$Int(_92, _93, _99);
org$frostlang$frostc$Variable$init$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Variable$Storage(_72, _78, _88, _89, _91, _92);
_102 = _72;
_103 = ((frost$core$Object*) _102);
frost$core$Frost$ref$frost$core$Object$Q(_103);
_105 = *(&local4);
_106 = ((frost$core$Object*) _105);
frost$core$Frost$unref$frost$core$Object$Q(_106);
*(&local4) = _102;
_109 = ((frost$core$Object*) _92);
frost$core$Frost$unref$frost$core$Object$Q(_109);
_111 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_111);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:28
_114 = *(&local4);
_115 = _114 != NULL;
_116 = (frost$core$Bit) {_115};
_117 = _116.value;
if (_117) goto block12; else goto block13;
block13:;
_119 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s30, _119, &$s31);
abort(); // unreachable
block12:;
_122 = _114;
_123 = &param0->currentMethod;
_124 = *_123;
_125 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Try.frost:28:61
_127 = (frost$core$Int) {0u};
_128 = _125.value;
_129 = _127.value;
_130 = _128 >= _129;
_131 = (frost$core$Bit) {_130};
_132 = _131.value;
if (_132) goto block17; else goto block16;
block17:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_136 = &_124->contents;
_137 = *_136;
_138 = ((frost$collections$CollectionView*) _137);
ITable* $tmp32 = _138->$class->itable;
while ($tmp32->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp32 = $tmp32->next;
}
_139 = $tmp32->methods[0];
_140 = _139(_138);
_142 = _125.value;
_143 = _140.value;
_144 = _142 < _143;
_145 = (frost$core$Bit) {_144};
_146 = _145.value;
if (_146) goto block15; else goto block16;
block16:;
_148 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s33, _148, &$s34);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_152 = &_124->contents;
_153 = *_152;
_154 = ((frost$collections$CollectionView*) _153);
ITable* $tmp35 = _154->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp35 = $tmp35->next;
}
_155 = $tmp35->methods[0];
_156 = _155(_154);
_157 = _156.value;
_158 = _125.value;
_159 = _157 > _158;
_160 = (frost$core$Bit) {_159};
_161 = _160.value;
if (_161) goto block19; else goto block20;
block20:;
_163 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s36, _163);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_167 = &_124->contents;
_168 = *_167;
_169 = &_124->contents;
_170 = *_169;
_171 = ((frost$collections$CollectionView*) _170);
ITable* $tmp37 = _171->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp37 = $tmp37->next;
}
_172 = $tmp37->methods[0];
_173 = _172(_171);
_174 = (frost$core$Int) {1u};
_175 = _173.value;
_176 = _174.value;
_177 = _175 - _176;
_178 = (frost$core$Int) {_177};
_179 = _178.value;
_180 = _125.value;
_181 = _179 - _180;
_182 = (frost$core$Int) {_181};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_184 = (frost$core$Int) {0u};
_185 = _182.value;
_186 = _184.value;
_187 = _185 >= _186;
_188 = (frost$core$Bit) {_187};
_189 = _188.value;
if (_189) goto block24; else goto block23;
block24:;
_191 = ((frost$collections$CollectionView*) _168);
ITable* $tmp38 = _191->$class->itable;
while ($tmp38->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp38 = $tmp38->next;
}
_192 = $tmp38->methods[0];
_193 = _192(_191);
_194 = _182.value;
_195 = _193.value;
_196 = _194 < _195;
_197 = (frost$core$Bit) {_196};
_198 = _197.value;
if (_198) goto block22; else goto block23;
block23:;
_200 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s39, _200, &$s40);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_204 = &_168->data;
_205 = *_204;
_206 = frost$core$Int64$init$frost$core$Int(_182);
_207 = _206.value;
_208 = _205[_207];
_209 = _208;
frost$core$Frost$ref$frost$core$Object$Q(_209);
_212 = _208;
_213 = _212;
frost$core$Frost$ref$frost$core$Object$Q(_213);
_215 = _208;
frost$core$Frost$unref$frost$core$Object$Q(_215);
_218 = ((org$frostlang$frostc$MethodDecl*) _212);
_219 = _218;
_220 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_221 = ((frost$core$Object*) _219);
frost$core$Weak$init$frost$core$Weak$T$Q(_220, _221);
_223 = ((frost$core$Object*) _220);
frost$core$Frost$ref$frost$core$Object$Q(_223);
_225 = &_122->owner;
_226 = *_225;
_227 = ((frost$core$Object*) _226);
frost$core$Frost$unref$frost$core$Object$Q(_227);
_229 = &_122->owner;
*_229 = _220;
_231 = ((frost$core$Object*) _220);
frost$core$Frost$unref$frost$core$Object$Q(_231);
_233 = _212;
frost$core$Frost$unref$frost$core$Object$Q(_233);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:29
_236 = *(&local4);
_237 = _236 != NULL;
_238 = (frost$core$Bit) {_237};
_239 = _238.value;
if (_239) goto block27; else goto block28;
block28:;
_241 = (frost$core$Int) {29u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s41, _241, &$s42);
abort(); // unreachable
block27:;
_244 = _236;
_245 = &_244->type;
_246 = *_245;
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Try.frost:29:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:668
_249 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(_246);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:668:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_252 = _249.value;
_253 = !_252;
_254 = (frost$core$Bit) {_253};
_256 = _254.value;
if (_256) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:669
_259 = (frost$core$Bit) {false};
*(&local8) = _259;
goto block29;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:671
_263 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, _246);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:671:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_266 = _263.value;
_267 = !_266;
_268 = (frost$core$Bit) {_267};
*(&local8) = _268;
goto block29;
block29:;
_272 = *(&local8);
_273 = _272.value;
if (_273) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:30
_276 = *(&local1);
_277 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_278 = (frost$core$Int) {27u};
_279 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_280 = (frost$core$Int) {4u};
_281 = *(&local4);
_282 = _281 != NULL;
_283 = (frost$core$Bit) {_282};
_284 = _283.value;
if (_284) goto block34; else goto block35;
block35:;
_286 = (frost$core$Int) {30u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s43, _286, &$s44);
abort(); // unreachable
block34:;
_289 = _281;
_290 = &_289->type;
_291 = *_290;
_292 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(_291);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type(_279, _280, _292);
_294 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_295 = (frost$core$Int) {2u};
_296 = *(&local1);
_297 = &_296->locals;
_298 = *_297;
_299 = ((frost$collections$CollectionView*) _298);
ITable* $tmp45 = _299->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp45 = $tmp45->next;
}
_300 = $tmp45->methods[0];
_301 = _300(_299);
_302 = *(&local4);
_303 = _302 != NULL;
_304 = (frost$core$Bit) {_303};
_305 = _304.value;
if (_305) goto block36; else goto block37;
block37:;
_307 = (frost$core$Int) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s46, _307, &$s47);
abort(); // unreachable
block36:;
_310 = _302;
_311 = &_310->type;
_312 = *_311;
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type(_294, _295, _301, _312);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(_277, _278, param1, _279, _294);
_315 = ($fn48) _276->$class->vtable[2];
_316 = _315(_276, _277);
_317 = ((frost$core$Object*) _294);
frost$core$Frost$unref$frost$core$Object$Q(_317);
_319 = ((frost$core$Object*) _292);
frost$core$Frost$unref$frost$core$Object$Q(_319);
_321 = ((frost$core$Object*) _279);
frost$core$Frost$unref$frost$core$Object$Q(_321);
_323 = ((frost$core$Object*) _277);
frost$core$Frost$unref$frost$core$Object$Q(_323);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:32
_326 = &param0->enclosingContexts;
_327 = *_326;
_328 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$EnclosingContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
_329 = (frost$core$Int) {3u};
_330 = *(&local4);
_331 = _330 != NULL;
_332 = (frost$core$Bit) {_331};
_333 = _332.value;
if (_333) goto block38; else goto block39;
block39:;
_335 = (frost$core$Int) {32u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s49, _335, &$s50);
abort(); // unreachable
block38:;
_338 = _330;
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$org$frostlang$frostc$Variable(_328, _329, _338);
_340 = ((frost$core$Object*) _328);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Try.frost:32:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
_343 = &_327->contents;
_344 = *_343;
_345 = _340;
frost$collections$Array$add$frost$collections$Array$T(_344, _345);
_348 = ((frost$core$Object*) _328);
frost$core$Frost$unref$frost$core$Object$Q(_348);
goto block26;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:34
_352 = *(&local1);
_353 = &_352->locals;
_354 = *_353;
_355 = *(&local4);
_356 = _355 != NULL;
_357 = (frost$core$Bit) {_356};
_358 = _357.value;
if (_358) goto block41; else goto block42;
block42:;
_360 = (frost$core$Int) {34u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s51, _360, &$s52);
abort(); // unreachable
block41:;
_363 = _355;
_364 = &_363->type;
_365 = *_364;
_366 = ((frost$core$Object*) _365);
frost$collections$Array$add$frost$collections$Array$T(_354, _366);
_368 = *(&local5);
_369 = ((frost$core$Object*) _368);
frost$core$Frost$unref$frost$core$Object$Q(_369);
*(&local5) = ((frost$core$String*) NULL);
goto block2;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:37
_374 = (frost$core$Int) {37u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s53, _374);
abort(); // unreachable
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:42
_380 = ((frost$core$Object*) ((org$frostlang$frostc$Variable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_380);
_382 = *(&local4);
_383 = ((frost$core$Object*) _382);
frost$core$Frost$unref$frost$core$Object$Q(_383);
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
goto block2;
block2:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:45
_389 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$AutoContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
_390 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$EnclosingContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
_391 = (frost$core$Int) {5u};
_392 = *(&local2);
_393 = ((org$frostlang$frostc$IR$Block$ID$nullable) { _392, true });
_394 = *(&local4);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$org$frostlang$frostc$IR$Block$ID$Q$org$frostlang$frostc$Variable$Q(_390, _391, _393, _394);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext(_389, param0, _390);
*(&local9) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
_398 = ((frost$core$Object*) _389);
frost$core$Frost$ref$frost$core$Object$Q(_398);
_400 = *(&local9);
_401 = ((frost$core$Object*) _400);
frost$core$Frost$unref$frost$core$Object$Q(_401);
*(&local9) = _389;
_404 = ((frost$core$Object*) _390);
frost$core$Frost$unref$frost$core$Object$Q(_404);
_406 = ((frost$core$Object*) _389);
frost$core$Frost$unref$frost$core$Object$Q(_406);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:47
_409 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$AutoScope), (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler(_409, param0);
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
_412 = ((frost$core$Object*) _409);
frost$core$Frost$ref$frost$core$Object$Q(_412);
_414 = *(&local10);
_415 = ((frost$core$Object*) _414);
frost$core$Frost$unref$frost$core$Object$Q(_415);
*(&local10) = _409;
_418 = ((frost$core$Object*) _409);
frost$core$Frost$unref$frost$core$Object$Q(_418);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:48
_421 = ((frost$collections$Iterable*) param2);
ITable* $tmp54 = _421->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp54 = $tmp54->next;
}
_422 = $tmp54->methods[0];
_423 = _422(_421);
goto block43;
block43:;
ITable* $tmp55 = _423->$class->itable;
while ($tmp55->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp55 = $tmp55->next;
}
_425 = $tmp55->methods[0];
_426 = _425(_423);
_427 = _426.value;
if (_427) goto block45; else goto block44;
block44:;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp56 = _423->$class->itable;
while ($tmp56->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp56 = $tmp56->next;
}
_430 = $tmp56->methods[1];
_431 = _430(_423);
_432 = ((org$frostlang$frostc$ASTNode*) _431);
_433 = ((frost$core$Object*) _432);
frost$core$Frost$ref$frost$core$Object$Q(_433);
_435 = *(&local11);
_436 = ((frost$core$Object*) _435);
frost$core$Frost$unref$frost$core$Object$Q(_436);
*(&local11) = _432;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:49
_440 = *(&local11);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, _440);
_442 = _431;
frost$core$Frost$unref$frost$core$Object$Q(_442);
_444 = *(&local11);
_445 = ((frost$core$Object*) _444);
frost$core$Frost$unref$frost$core$Object$Q(_445);
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block43;
block45:;
_449 = ((frost$core$Object*) _423);
frost$core$Frost$unref$frost$core$Object$Q(_449);
_451 = *(&local10);
_452 = ((frost$core$Object*) _451);
frost$core$Frost$unref$frost$core$Object$Q(_452);
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
_455 = *(&local9);
_456 = ((frost$core$Object*) _455);
frost$core$Frost$unref$frost$core$Object$Q(_456);
*(&local9) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:52
_460 = *(&local1);
_461 = ($fn57) _460->$class->vtable[5];
_462 = _461(_460);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Try.frost:52:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_465 = _462.value;
_466 = !_465;
_467 = (frost$core$Bit) {_466};
_469 = _467.value;
if (_469) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:53
_472 = *(&local1);
_473 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_474 = (frost$core$Int) {1u};
_475 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Block$ID(_473, _474, param1, _475);
_477 = ($fn58) _472->$class->vtable[2];
_478 = _477(_472, _473);
_479 = ((frost$core$Object*) _473);
frost$core$Frost$unref$frost$core$Object$Q(_479);
goto block47;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:55
_483 = *(&local1);
_484 = *(&local2);
_485 = ($fn59) _483->$class->vtable[4];
_485(_483, _484);
// <no location>
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:58
_490 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$AutoScope), (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler(_490, param0);
*(&local12) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
_493 = ((frost$core$Object*) _490);
frost$core$Frost$ref$frost$core$Object$Q(_493);
_495 = *(&local12);
_496 = ((frost$core$Object*) _495);
frost$core$Frost$unref$frost$core$Object$Q(_496);
*(&local12) = _490;
_499 = ((frost$core$Object*) _490);
frost$core$Frost$unref$frost$core$Object$Q(_499);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:59
_502 = *(&local4);
_503 = _502 != NULL;
_504 = (frost$core$Bit) {_503};
_505 = _504.value;
if (_505) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:60
_508 = &param0->symbolTable;
_509 = *_508;
_510 = *(&local4);
_511 = _510 != NULL;
_512 = (frost$core$Bit) {_511};
_513 = _512.value;
if (_513) goto block51; else goto block52;
block52:;
_515 = (frost$core$Int) {60u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s60, _515, &$s61);
abort(); // unreachable
block51:;
_518 = ((org$frostlang$frostc$Symbol*) _510);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Try.frost:60:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
_521 = &_518->name;
_522 = *_521;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String(_509, _518, _522);
goto block50;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:62
_527 = ((frost$collections$Iterable*) param4);
ITable* $tmp62 = _527->$class->itable;
while ($tmp62->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp62 = $tmp62->next;
}
_528 = $tmp62->methods[0];
_529 = _528(_527);
goto block54;
block54:;
ITable* $tmp63 = _529->$class->itable;
while ($tmp63->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp63 = $tmp63->next;
}
_531 = $tmp63->methods[0];
_532 = _531(_529);
_533 = _532.value;
if (_533) goto block56; else goto block55;
block55:;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp64 = _529->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp64 = $tmp64->next;
}
_536 = $tmp64->methods[1];
_537 = _536(_529);
_538 = ((org$frostlang$frostc$ASTNode*) _537);
_539 = ((frost$core$Object*) _538);
frost$core$Frost$ref$frost$core$Object$Q(_539);
_541 = *(&local13);
_542 = ((frost$core$Object*) _541);
frost$core$Frost$unref$frost$core$Object$Q(_542);
*(&local13) = _538;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:63
_546 = *(&local13);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, _546);
_548 = _537;
frost$core$Frost$unref$frost$core$Object$Q(_548);
_550 = *(&local13);
_551 = ((frost$core$Object*) _550);
frost$core$Frost$unref$frost$core$Object$Q(_551);
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block54;
block56:;
_555 = ((frost$core$Object*) _529);
frost$core$Frost$unref$frost$core$Object$Q(_555);
_557 = *(&local12);
_558 = ((frost$core$Object*) _557);
frost$core$Frost$unref$frost$core$Object$Q(_558);
*(&local12) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:66
_562 = *(&local1);
_563 = ($fn65) _562->$class->vtable[5];
_564 = _563(_562);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Try.frost:66:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_567 = _564.value;
_568 = !_567;
_569 = (frost$core$Bit) {_568};
_571 = _569.value;
if (_571) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:67
_574 = *(&local1);
_575 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_576 = (frost$core$Int) {1u};
_577 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Block$ID(_575, _576, param1, _577);
_579 = ($fn66) _574->$class->vtable[2];
_580 = _579(_574, _575);
_581 = ((frost$core$Object*) _575);
frost$core$Frost$unref$frost$core$Object$Q(_581);
goto block58;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:70
_585 = *(&local1);
_586 = *(&local3);
_587 = ($fn67) _585->$class->vtable[4];
_587(_585, _586);
_589 = *(&local4);
_590 = ((frost$core$Object*) _589);
frost$core$Frost$unref$frost$core$Object$Q(_590);
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
_593 = *(&local1);
_594 = ((frost$core$Object*) _593);
frost$core$Frost$unref$frost$core$Object$Q(_594);
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
_597 = *(&local0);
_598 = ((frost$core$Object*) _597);
frost$core$Frost$unref$frost$core$Object$Q(_598);
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

