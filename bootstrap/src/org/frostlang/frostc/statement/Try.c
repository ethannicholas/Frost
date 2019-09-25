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
#include "frost/unsafe/Pointer.h"
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

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

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

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x54\x72\x79", 34, -3160075893431704438, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x74\x72\x79\x20\x66\x61\x69\x6c", 8, -4144140211942277782, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x74\x72\x79\x20\x65\x6e\x64", 7, 3097653119450397847, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 95, 3949674185659309185, NULL };

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
frost$unsafe$Pointer* _204;
frost$unsafe$Pointer _205;
int64_t _206;
frost$core$Int64 _207;
int64_t _208;
frost$core$Object* _209;
frost$core$Object* _210;
frost$core$Object* _213;
frost$core$Object* _214;
frost$core$Object* _216;
org$frostlang$frostc$MethodDecl* _219;
org$frostlang$frostc$MethodDecl* _220;
frost$core$Weak* _221;
frost$core$Object* _222;
frost$core$Object* _224;
frost$core$Weak** _226;
frost$core$Weak* _227;
frost$core$Object* _228;
frost$core$Weak** _230;
frost$core$Object* _232;
frost$core$Object* _234;
org$frostlang$frostc$Variable* _237;
bool _238;
frost$core$Bit _239;
bool _240;
frost$core$Int _242;
org$frostlang$frostc$Variable* _245;
org$frostlang$frostc$Type** _246;
org$frostlang$frostc$Type* _247;
frost$core$Bit _250;
bool _253;
bool _254;
frost$core$Bit _255;
bool _257;
frost$core$Bit _260;
frost$core$Bit _264;
bool _267;
bool _268;
frost$core$Bit _269;
frost$core$Bit _273;
bool _274;
org$frostlang$frostc$IR* _277;
org$frostlang$frostc$IR$Statement* _278;
frost$core$Int _279;
org$frostlang$frostc$IR$Value* _280;
frost$core$Int _281;
org$frostlang$frostc$Variable* _282;
bool _283;
frost$core$Bit _284;
bool _285;
frost$core$Int _287;
org$frostlang$frostc$Variable* _290;
org$frostlang$frostc$Type** _291;
org$frostlang$frostc$Type* _292;
org$frostlang$frostc$Type* _293;
org$frostlang$frostc$IR$Value* _295;
frost$core$Int _296;
org$frostlang$frostc$IR* _297;
frost$collections$Array** _298;
frost$collections$Array* _299;
frost$collections$CollectionView* _300;
$fn9 _301;
frost$core$Int _302;
org$frostlang$frostc$Variable* _303;
bool _304;
frost$core$Bit _305;
bool _306;
frost$core$Int _308;
org$frostlang$frostc$Variable* _311;
org$frostlang$frostc$Type** _312;
org$frostlang$frostc$Type* _313;
$fn10 _316;
org$frostlang$frostc$IR$Statement$ID _317;
frost$core$Object* _318;
frost$core$Object* _320;
frost$core$Object* _322;
frost$core$Object* _324;
frost$collections$Stack** _327;
frost$collections$Stack* _328;
org$frostlang$frostc$Compiler$EnclosingContext* _329;
frost$core$Int _330;
org$frostlang$frostc$Variable* _331;
bool _332;
frost$core$Bit _333;
bool _334;
frost$core$Int _336;
org$frostlang$frostc$Variable* _339;
frost$core$Object* _341;
frost$collections$Array** _344;
frost$collections$Array* _345;
frost$core$Object* _346;
frost$core$Object* _349;
org$frostlang$frostc$IR* _353;
frost$collections$Array** _354;
frost$collections$Array* _355;
org$frostlang$frostc$Variable* _356;
bool _357;
frost$core$Bit _358;
bool _359;
frost$core$Int _361;
org$frostlang$frostc$Variable* _364;
org$frostlang$frostc$Type** _365;
org$frostlang$frostc$Type* _366;
frost$core$Object* _367;
frost$core$String* _369;
frost$core$Object* _370;
frost$core$Int _375;
frost$core$Object* _381;
org$frostlang$frostc$Variable* _383;
frost$core$Object* _384;
org$frostlang$frostc$Compiler$AutoContext* _390;
org$frostlang$frostc$Compiler$EnclosingContext* _391;
frost$core$Int _392;
org$frostlang$frostc$IR$Block$ID _393;
org$frostlang$frostc$IR$Block$ID$nullable _394;
org$frostlang$frostc$Variable* _395;
frost$core$Object* _399;
org$frostlang$frostc$Compiler$AutoContext* _401;
frost$core$Object* _402;
frost$core$Object* _405;
frost$core$Object* _407;
org$frostlang$frostc$Compiler$AutoScope* _410;
frost$core$Object* _413;
org$frostlang$frostc$Compiler$AutoScope* _415;
frost$core$Object* _416;
frost$core$Object* _419;
frost$collections$Iterable* _422;
$fn11 _423;
frost$collections$Iterator* _424;
$fn12 _426;
frost$core$Bit _427;
bool _428;
$fn13 _431;
frost$core$Object* _432;
org$frostlang$frostc$ASTNode* _433;
frost$core$Object* _434;
org$frostlang$frostc$ASTNode* _436;
frost$core$Object* _437;
org$frostlang$frostc$ASTNode* _441;
frost$core$Object* _443;
org$frostlang$frostc$ASTNode* _445;
frost$core$Object* _446;
frost$core$Object* _450;
org$frostlang$frostc$Compiler$AutoScope* _452;
frost$core$Object* _453;
org$frostlang$frostc$Compiler$AutoContext* _456;
frost$core$Object* _457;
org$frostlang$frostc$IR* _461;
$fn14 _462;
frost$core$Bit _463;
bool _466;
bool _467;
frost$core$Bit _468;
bool _470;
org$frostlang$frostc$IR* _473;
org$frostlang$frostc$IR$Statement* _474;
frost$core$Int _475;
org$frostlang$frostc$IR$Block$ID _476;
$fn15 _478;
org$frostlang$frostc$IR$Statement$ID _479;
frost$core$Object* _480;
org$frostlang$frostc$IR* _484;
org$frostlang$frostc$IR$Block$ID _485;
$fn16 _486;
org$frostlang$frostc$Compiler$AutoScope* _491;
frost$core$Object* _494;
org$frostlang$frostc$Compiler$AutoScope* _496;
frost$core$Object* _497;
frost$core$Object* _500;
org$frostlang$frostc$Variable* _503;
bool _504;
frost$core$Bit _505;
bool _506;
org$frostlang$frostc$SymbolTable** _509;
org$frostlang$frostc$SymbolTable* _510;
org$frostlang$frostc$Variable* _511;
bool _512;
frost$core$Bit _513;
bool _514;
frost$core$Int _516;
org$frostlang$frostc$Symbol* _519;
frost$core$String** _522;
frost$core$String* _523;
frost$collections$Iterable* _528;
$fn17 _529;
frost$collections$Iterator* _530;
$fn18 _532;
frost$core$Bit _533;
bool _534;
$fn19 _537;
frost$core$Object* _538;
org$frostlang$frostc$ASTNode* _539;
frost$core$Object* _540;
org$frostlang$frostc$ASTNode* _542;
frost$core$Object* _543;
org$frostlang$frostc$ASTNode* _547;
frost$core$Object* _549;
org$frostlang$frostc$ASTNode* _551;
frost$core$Object* _552;
frost$core$Object* _556;
org$frostlang$frostc$Compiler$AutoScope* _558;
frost$core$Object* _559;
org$frostlang$frostc$IR* _563;
$fn20 _564;
frost$core$Bit _565;
bool _568;
bool _569;
frost$core$Bit _570;
bool _572;
org$frostlang$frostc$IR* _575;
org$frostlang$frostc$IR$Statement* _576;
frost$core$Int _577;
org$frostlang$frostc$IR$Block$ID _578;
$fn21 _580;
org$frostlang$frostc$IR$Statement$ID _581;
frost$core$Object* _582;
org$frostlang$frostc$IR* _586;
org$frostlang$frostc$IR$Block$ID _587;
$fn22 _588;
org$frostlang$frostc$Variable* _590;
frost$core$Object* _591;
org$frostlang$frostc$IR* _594;
frost$core$Object* _595;
org$frostlang$frostc$Compiler$AutoScope* _598;
frost$core$Object* _599;
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
_206 = _205.value;
_207 = frost$core$Int64$init$frost$core$Int(_182);
_208 = _207.value;
_209 = ((frost$core$Object**)_206)[_208];
_210 = _209;
frost$core$Frost$ref$frost$core$Object$Q(_210);
_213 = _209;
_214 = _213;
frost$core$Frost$ref$frost$core$Object$Q(_214);
_216 = _209;
frost$core$Frost$unref$frost$core$Object$Q(_216);
_219 = ((org$frostlang$frostc$MethodDecl*) _213);
_220 = _219;
_221 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_222 = ((frost$core$Object*) _220);
frost$core$Weak$init$frost$core$Weak$T$Q(_221, _222);
_224 = ((frost$core$Object*) _221);
frost$core$Frost$ref$frost$core$Object$Q(_224);
_226 = &_122->owner;
_227 = *_226;
_228 = ((frost$core$Object*) _227);
frost$core$Frost$unref$frost$core$Object$Q(_228);
_230 = &_122->owner;
*_230 = _221;
_232 = ((frost$core$Object*) _221);
frost$core$Frost$unref$frost$core$Object$Q(_232);
_234 = _213;
frost$core$Frost$unref$frost$core$Object$Q(_234);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:29
_237 = *(&local4);
_238 = _237 != NULL;
_239 = (frost$core$Bit) {_238};
_240 = _239.value;
if (_240) goto block27; else goto block28;
block28:;
_242 = (frost$core$Int) {29u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s41, _242, &$s42);
abort(); // unreachable
block27:;
_245 = _237;
_246 = &_245->type;
_247 = *_246;
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Try.frost:29:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:668
_250 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(_247);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:668:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_253 = _250.value;
_254 = !_253;
_255 = (frost$core$Bit) {_254};
_257 = _255.value;
if (_257) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:669
_260 = (frost$core$Bit) {false};
*(&local8) = _260;
goto block29;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:671
_264 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, _247);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:671:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_267 = _264.value;
_268 = !_267;
_269 = (frost$core$Bit) {_268};
*(&local8) = _269;
goto block29;
block29:;
_273 = *(&local8);
_274 = _273.value;
if (_274) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:30
_277 = *(&local1);
_278 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_279 = (frost$core$Int) {23u};
_280 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_281 = (frost$core$Int) {4u};
_282 = *(&local4);
_283 = _282 != NULL;
_284 = (frost$core$Bit) {_283};
_285 = _284.value;
if (_285) goto block34; else goto block35;
block35:;
_287 = (frost$core$Int) {30u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s43, _287, &$s44);
abort(); // unreachable
block34:;
_290 = _282;
_291 = &_290->type;
_292 = *_291;
_293 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type(_292);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type(_280, _281, _293);
_295 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_296 = (frost$core$Int) {2u};
_297 = *(&local1);
_298 = &_297->locals;
_299 = *_298;
_300 = ((frost$collections$CollectionView*) _299);
ITable* $tmp45 = _300->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp45 = $tmp45->next;
}
_301 = $tmp45->methods[0];
_302 = _301(_300);
_303 = *(&local4);
_304 = _303 != NULL;
_305 = (frost$core$Bit) {_304};
_306 = _305.value;
if (_306) goto block36; else goto block37;
block37:;
_308 = (frost$core$Int) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s46, _308, &$s47);
abort(); // unreachable
block36:;
_311 = _303;
_312 = &_311->type;
_313 = *_312;
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type(_295, _296, _302, _313);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(_278, _279, param1, _280, _295);
_316 = ($fn48) _277->$class->vtable[2];
_317 = _316(_277, _278);
_318 = ((frost$core$Object*) _295);
frost$core$Frost$unref$frost$core$Object$Q(_318);
_320 = ((frost$core$Object*) _293);
frost$core$Frost$unref$frost$core$Object$Q(_320);
_322 = ((frost$core$Object*) _280);
frost$core$Frost$unref$frost$core$Object$Q(_322);
_324 = ((frost$core$Object*) _278);
frost$core$Frost$unref$frost$core$Object$Q(_324);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:32
_327 = &param0->enclosingContexts;
_328 = *_327;
_329 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$EnclosingContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
_330 = (frost$core$Int) {3u};
_331 = *(&local4);
_332 = _331 != NULL;
_333 = (frost$core$Bit) {_332};
_334 = _333.value;
if (_334) goto block38; else goto block39;
block39:;
_336 = (frost$core$Int) {32u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s49, _336, &$s50);
abort(); // unreachable
block38:;
_339 = _331;
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$org$frostlang$frostc$Variable(_329, _330, _339);
_341 = ((frost$core$Object*) _329);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Try.frost:32:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
_344 = &_328->contents;
_345 = *_344;
_346 = _341;
frost$collections$Array$add$frost$collections$Array$T(_345, _346);
_349 = ((frost$core$Object*) _329);
frost$core$Frost$unref$frost$core$Object$Q(_349);
goto block26;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:34
_353 = *(&local1);
_354 = &_353->locals;
_355 = *_354;
_356 = *(&local4);
_357 = _356 != NULL;
_358 = (frost$core$Bit) {_357};
_359 = _358.value;
if (_359) goto block41; else goto block42;
block42:;
_361 = (frost$core$Int) {34u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s51, _361, &$s52);
abort(); // unreachable
block41:;
_364 = _356;
_365 = &_364->type;
_366 = *_365;
_367 = ((frost$core$Object*) _366);
frost$collections$Array$add$frost$collections$Array$T(_355, _367);
_369 = *(&local5);
_370 = ((frost$core$Object*) _369);
frost$core$Frost$unref$frost$core$Object$Q(_370);
*(&local5) = ((frost$core$String*) NULL);
goto block2;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:37
_375 = (frost$core$Int) {37u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s53, _375);
abort(); // unreachable
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:42
_381 = ((frost$core$Object*) ((org$frostlang$frostc$Variable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_381);
_383 = *(&local4);
_384 = ((frost$core$Object*) _383);
frost$core$Frost$unref$frost$core$Object$Q(_384);
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
goto block2;
block2:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:45
_390 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$AutoContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
_391 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$EnclosingContext), (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
_392 = (frost$core$Int) {5u};
_393 = *(&local2);
_394 = ((org$frostlang$frostc$IR$Block$ID$nullable) { _393, true });
_395 = *(&local4);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$org$frostlang$frostc$IR$Block$ID$Q$org$frostlang$frostc$Variable$Q(_391, _392, _394, _395);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext(_390, param0, _391);
*(&local9) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
_399 = ((frost$core$Object*) _390);
frost$core$Frost$ref$frost$core$Object$Q(_399);
_401 = *(&local9);
_402 = ((frost$core$Object*) _401);
frost$core$Frost$unref$frost$core$Object$Q(_402);
*(&local9) = _390;
_405 = ((frost$core$Object*) _391);
frost$core$Frost$unref$frost$core$Object$Q(_405);
_407 = ((frost$core$Object*) _390);
frost$core$Frost$unref$frost$core$Object$Q(_407);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:47
_410 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$AutoScope), (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler(_410, param0);
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
_413 = ((frost$core$Object*) _410);
frost$core$Frost$ref$frost$core$Object$Q(_413);
_415 = *(&local10);
_416 = ((frost$core$Object*) _415);
frost$core$Frost$unref$frost$core$Object$Q(_416);
*(&local10) = _410;
_419 = ((frost$core$Object*) _410);
frost$core$Frost$unref$frost$core$Object$Q(_419);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:48
_422 = ((frost$collections$Iterable*) param2);
ITable* $tmp54 = _422->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp54 = $tmp54->next;
}
_423 = $tmp54->methods[0];
_424 = _423(_422);
goto block43;
block43:;
ITable* $tmp55 = _424->$class->itable;
while ($tmp55->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp55 = $tmp55->next;
}
_426 = $tmp55->methods[0];
_427 = _426(_424);
_428 = _427.value;
if (_428) goto block45; else goto block44;
block44:;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp56 = _424->$class->itable;
while ($tmp56->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp56 = $tmp56->next;
}
_431 = $tmp56->methods[1];
_432 = _431(_424);
_433 = ((org$frostlang$frostc$ASTNode*) _432);
_434 = ((frost$core$Object*) _433);
frost$core$Frost$ref$frost$core$Object$Q(_434);
_436 = *(&local11);
_437 = ((frost$core$Object*) _436);
frost$core$Frost$unref$frost$core$Object$Q(_437);
*(&local11) = _433;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:49
_441 = *(&local11);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, _441);
_443 = _432;
frost$core$Frost$unref$frost$core$Object$Q(_443);
_445 = *(&local11);
_446 = ((frost$core$Object*) _445);
frost$core$Frost$unref$frost$core$Object$Q(_446);
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block43;
block45:;
_450 = ((frost$core$Object*) _424);
frost$core$Frost$unref$frost$core$Object$Q(_450);
_452 = *(&local10);
_453 = ((frost$core$Object*) _452);
frost$core$Frost$unref$frost$core$Object$Q(_453);
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
_456 = *(&local9);
_457 = ((frost$core$Object*) _456);
frost$core$Frost$unref$frost$core$Object$Q(_457);
*(&local9) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:52
_461 = *(&local1);
_462 = ($fn57) _461->$class->vtable[5];
_463 = _462(_461);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Try.frost:52:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_466 = _463.value;
_467 = !_466;
_468 = (frost$core$Bit) {_467};
_470 = _468.value;
if (_470) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:53
_473 = *(&local1);
_474 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_475 = (frost$core$Int) {1u};
_476 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Block$ID(_474, _475, param1, _476);
_478 = ($fn58) _473->$class->vtable[2];
_479 = _478(_473, _474);
_480 = ((frost$core$Object*) _474);
frost$core$Frost$unref$frost$core$Object$Q(_480);
goto block47;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:55
_484 = *(&local1);
_485 = *(&local2);
_486 = ($fn59) _484->$class->vtable[4];
_486(_484, _485);
// <no location>
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:58
_491 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$AutoScope), (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler(_491, param0);
*(&local12) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
_494 = ((frost$core$Object*) _491);
frost$core$Frost$ref$frost$core$Object$Q(_494);
_496 = *(&local12);
_497 = ((frost$core$Object*) _496);
frost$core$Frost$unref$frost$core$Object$Q(_497);
*(&local12) = _491;
_500 = ((frost$core$Object*) _491);
frost$core$Frost$unref$frost$core$Object$Q(_500);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:59
_503 = *(&local4);
_504 = _503 != NULL;
_505 = (frost$core$Bit) {_504};
_506 = _505.value;
if (_506) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:60
_509 = &param0->symbolTable;
_510 = *_509;
_511 = *(&local4);
_512 = _511 != NULL;
_513 = (frost$core$Bit) {_512};
_514 = _513.value;
if (_514) goto block51; else goto block52;
block52:;
_516 = (frost$core$Int) {60u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s60, _516, &$s61);
abort(); // unreachable
block51:;
_519 = ((org$frostlang$frostc$Symbol*) _511);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Try.frost:60:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
_522 = &_519->name;
_523 = *_522;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String(_510, _519, _523);
goto block50;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:62
_528 = ((frost$collections$Iterable*) param4);
ITable* $tmp62 = _528->$class->itable;
while ($tmp62->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp62 = $tmp62->next;
}
_529 = $tmp62->methods[0];
_530 = _529(_528);
goto block54;
block54:;
ITable* $tmp63 = _530->$class->itable;
while ($tmp63->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp63 = $tmp63->next;
}
_532 = $tmp63->methods[0];
_533 = _532(_530);
_534 = _533.value;
if (_534) goto block56; else goto block55;
block55:;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp64 = _530->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp64 = $tmp64->next;
}
_537 = $tmp64->methods[1];
_538 = _537(_530);
_539 = ((org$frostlang$frostc$ASTNode*) _538);
_540 = ((frost$core$Object*) _539);
frost$core$Frost$ref$frost$core$Object$Q(_540);
_542 = *(&local13);
_543 = ((frost$core$Object*) _542);
frost$core$Frost$unref$frost$core$Object$Q(_543);
*(&local13) = _539;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:63
_547 = *(&local13);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, _547);
_549 = _538;
frost$core$Frost$unref$frost$core$Object$Q(_549);
_551 = *(&local13);
_552 = ((frost$core$Object*) _551);
frost$core$Frost$unref$frost$core$Object$Q(_552);
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block54;
block56:;
_556 = ((frost$core$Object*) _530);
frost$core$Frost$unref$frost$core$Object$Q(_556);
_558 = *(&local12);
_559 = ((frost$core$Object*) _558);
frost$core$Frost$unref$frost$core$Object$Q(_559);
*(&local12) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:66
_563 = *(&local1);
_564 = ($fn65) _563->$class->vtable[5];
_565 = _564(_563);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Try.frost:66:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_568 = _565.value;
_569 = !_568;
_570 = (frost$core$Bit) {_569};
_572 = _570.value;
if (_572) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:67
_575 = *(&local1);
_576 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Statement), (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
_577 = (frost$core$Int) {1u};
_578 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$IR$Block$ID(_576, _577, param1, _578);
_580 = ($fn66) _575->$class->vtable[2];
_581 = _580(_575, _576);
_582 = ((frost$core$Object*) _576);
frost$core$Frost$unref$frost$core$Object$Q(_582);
goto block58;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:70
_586 = *(&local1);
_587 = *(&local3);
_588 = ($fn67) _586->$class->vtable[4];
_588(_586, _587);
_590 = *(&local4);
_591 = ((frost$core$Object*) _590);
frost$core$Frost$unref$frost$core$Object$Q(_591);
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
_594 = *(&local1);
_595 = ((frost$core$Object*) _594);
frost$core$Frost$unref$frost$core$Object$Q(_595);
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
_598 = *(&local0);
_599 = ((frost$core$Object*) _598);
frost$core$Frost$unref$frost$core$Object$Q(_599);
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

