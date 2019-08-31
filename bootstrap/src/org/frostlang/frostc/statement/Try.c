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
#include "frost/core/Frost.h"
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


static frost$core$String $s1;
org$frostlang$frostc$statement$Try$class_type org$frostlang$frostc$statement$Try$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Try$cleanup} };

typedef org$frostlang$frostc$IR$Block$ID (*$fn9)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn14)(org$frostlang$frostc$IR*, frost$core$String*);
typedef frost$core$Int (*$fn52)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn74)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn88)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn103)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn122)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn182)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn193)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$collections$Iterator* (*$fn232)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn236)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn241)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn250)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn261)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn266)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn284)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn288)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn293)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn301)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn312)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn317)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x54\x72\x79", 34, -3160075893431704438, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x79\x20\x66\x61\x69\x6c", 8, -4144140211942277782, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x79\x20\x65\x6e\x64", 7, 3097653119450397847, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 1999526331694083253, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x72\x79\x2e\x66\x72\x6f\x73\x74", 9, -7194988175281446278, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 95, 3949674185659309185, NULL };

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:18
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp2 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp2, param0);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
org$frostlang$frostc$Compiler$AutoScope* $tmp3 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
*(&local0) = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:19
org$frostlang$frostc$IR** $tmp4 = &param0->ir;
org$frostlang$frostc$IR* $tmp5 = *$tmp4;
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
org$frostlang$frostc$IR* $tmp6 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
*(&local1) = $tmp5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:20
org$frostlang$frostc$IR* $tmp7 = *(&local1);
$fn9 $tmp8 = ($fn9) $tmp7->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp10 = $tmp8($tmp7, &$s11);
*(&local2) = $tmp10;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:21
org$frostlang$frostc$IR* $tmp12 = *(&local1);
$fn14 $tmp13 = ($fn14) $tmp12->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp15 = $tmp13($tmp12, &$s16);
*(&local3) = $tmp15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:22
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:23
frost$core$Bit $tmp17 = (frost$core$Bit) {param3 != NULL};
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:24
frost$core$Bit $tmp19 = (frost$core$Bit) {param3 != NULL};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block4; else goto block5;
block5:;
frost$core$Int $tmp21 = (frost$core$Int) {24u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, $tmp21, &$s23);
abort(); // unreachable
block4:;
frost$core$Int* $tmp24 = &param3->$rawValue;
frost$core$Int $tmp25 = *$tmp24;
frost$core$Int $tmp26 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Try.frost:25:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp27 = $tmp25.value;
int64_t $tmp28 = $tmp26.value;
bool $tmp29 = $tmp27 == $tmp28;
frost$core$Bit $tmp30 = (frost$core$Bit) {$tmp29};
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp32 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp33 = *$tmp32;
frost$core$String** $tmp34 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp35 = *$tmp34;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$String* $tmp36 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
*(&local5) = $tmp35;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:26
FROST_ASSERT(88 == sizeof(org$frostlang$frostc$Variable));
org$frostlang$frostc$Variable* $tmp37 = (org$frostlang$frostc$Variable*) frostObjectAlloc(88, (frost$core$Class*) &org$frostlang$frostc$Variable$class);
frost$core$Int $tmp38 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Variable.Kind from Try.frost:26:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int* $tmp39 = &(&local7)->$rawValue;
*$tmp39 = $tmp38;
org$frostlang$frostc$Variable$Kind $tmp40 = *(&local7);
*(&local6) = $tmp40;
org$frostlang$frostc$Variable$Kind $tmp41 = *(&local6);
frost$core$String* $tmp42 = *(&local5);
org$frostlang$frostc$Type** $tmp43 = &param0->ERROR_TYPE;
org$frostlang$frostc$Type* $tmp44 = *$tmp43;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Variable$Storage));
org$frostlang$frostc$Variable$Storage* $tmp45 = (org$frostlang$frostc$Variable$Storage*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Variable$Storage$class);
frost$core$Int $tmp46 = (frost$core$Int) {0u};
org$frostlang$frostc$IR* $tmp47 = *(&local1);
frost$collections$Array** $tmp48 = &$tmp47->locals;
frost$collections$Array* $tmp49 = *$tmp48;
ITable* $tmp50 = ((frost$collections$CollectionView*) $tmp49)->$class->itable;
while ($tmp50->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp50 = $tmp50->next;
}
$fn52 $tmp51 = $tmp50->methods[0];
frost$core$Int $tmp53 = $tmp51(((frost$collections$CollectionView*) $tmp49));
org$frostlang$frostc$Variable$Storage$init$frost$core$Int$frost$core$Int($tmp45, $tmp46, $tmp53);
org$frostlang$frostc$Variable$init$org$frostlang$frostc$Position$org$frostlang$frostc$Variable$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Variable$Storage($tmp37, param1, $tmp41, $tmp42, $tmp44, $tmp45);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
org$frostlang$frostc$Variable* $tmp54 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
*(&local4) = $tmp37;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:28
org$frostlang$frostc$Variable* $tmp55 = *(&local4);
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55 != NULL};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block11; else goto block12;
block12:;
frost$core$Int $tmp58 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s59, $tmp58, &$s60);
abort(); // unreachable
block11:;
frost$collections$Stack** $tmp61 = &param0->currentMethod;
frost$collections$Stack* $tmp62 = *$tmp61;
frost$core$Int $tmp63 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Try.frost:28:61
frost$core$Int $tmp64 = (frost$core$Int) {0u};
int64_t $tmp65 = $tmp63.value;
int64_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 >= $tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block16; else goto block15;
block16:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp70 = &$tmp62->contents;
frost$collections$Array* $tmp71 = *$tmp70;
ITable* $tmp72 = ((frost$collections$CollectionView*) $tmp71)->$class->itable;
while ($tmp72->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp72 = $tmp72->next;
}
$fn74 $tmp73 = $tmp72->methods[0];
frost$core$Int $tmp75 = $tmp73(((frost$collections$CollectionView*) $tmp71));
int64_t $tmp76 = $tmp63.value;
int64_t $tmp77 = $tmp75.value;
bool $tmp78 = $tmp76 < $tmp77;
frost$core$Bit $tmp79 = (frost$core$Bit) {$tmp78};
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block14; else goto block15;
block15:;
frost$core$Int $tmp81 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s82, $tmp81, &$s83);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp84 = &$tmp62->contents;
frost$collections$Array* $tmp85 = *$tmp84;
ITable* $tmp86 = ((frost$collections$CollectionView*) $tmp85)->$class->itable;
while ($tmp86->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp86 = $tmp86->next;
}
$fn88 $tmp87 = $tmp86->methods[0];
frost$core$Int $tmp89 = $tmp87(((frost$collections$CollectionView*) $tmp85));
int64_t $tmp90 = $tmp89.value;
int64_t $tmp91 = $tmp63.value;
bool $tmp92 = $tmp90 > $tmp91;
frost$core$Bit $tmp93 = (frost$core$Bit) {$tmp92};
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block18; else goto block19;
block19:;
frost$core$Int $tmp95 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s96, $tmp95);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp97 = &$tmp62->contents;
frost$collections$Array* $tmp98 = *$tmp97;
frost$collections$Array** $tmp99 = &$tmp62->contents;
frost$collections$Array* $tmp100 = *$tmp99;
ITable* $tmp101 = ((frost$collections$CollectionView*) $tmp100)->$class->itable;
while ($tmp101->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp101 = $tmp101->next;
}
$fn103 $tmp102 = $tmp101->methods[0];
frost$core$Int $tmp104 = $tmp102(((frost$collections$CollectionView*) $tmp100));
frost$core$Int $tmp105 = (frost$core$Int) {1u};
int64_t $tmp106 = $tmp104.value;
int64_t $tmp107 = $tmp105.value;
int64_t $tmp108 = $tmp106 - $tmp107;
frost$core$Int $tmp109 = (frost$core$Int) {$tmp108};
int64_t $tmp110 = $tmp109.value;
int64_t $tmp111 = $tmp63.value;
int64_t $tmp112 = $tmp110 - $tmp111;
frost$core$Int $tmp113 = (frost$core$Int) {$tmp112};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp114 = (frost$core$Int) {0u};
int64_t $tmp115 = $tmp113.value;
int64_t $tmp116 = $tmp114.value;
bool $tmp117 = $tmp115 >= $tmp116;
frost$core$Bit $tmp118 = (frost$core$Bit) {$tmp117};
bool $tmp119 = $tmp118.value;
if ($tmp119) goto block23; else goto block22;
block23:;
ITable* $tmp120 = ((frost$collections$CollectionView*) $tmp98)->$class->itable;
while ($tmp120->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp120 = $tmp120->next;
}
$fn122 $tmp121 = $tmp120->methods[0];
frost$core$Int $tmp123 = $tmp121(((frost$collections$CollectionView*) $tmp98));
int64_t $tmp124 = $tmp113.value;
int64_t $tmp125 = $tmp123.value;
bool $tmp126 = $tmp124 < $tmp125;
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block21; else goto block22;
block22:;
frost$core$Int $tmp129 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s130, $tmp129, &$s131);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp132 = &$tmp98->data;
frost$core$Object** $tmp133 = *$tmp132;
frost$core$Int64 $tmp134 = frost$core$Int64$init$frost$core$Int($tmp113);
int64_t $tmp135 = $tmp134.value;
frost$core$Object* $tmp136 = $tmp133[$tmp135];
frost$core$Frost$ref$frost$core$Object$Q($tmp136);
frost$core$Frost$ref$frost$core$Object$Q($tmp136);
frost$core$Frost$unref$frost$core$Object$Q($tmp136);
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp137 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp137, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp136)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$Weak** $tmp138 = &$tmp55->owner;
frost$core$Weak* $tmp139 = *$tmp138;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
frost$core$Weak** $tmp140 = &$tmp55->owner;
*$tmp140 = $tmp137;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$Frost$unref$frost$core$Object$Q($tmp136);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:29
org$frostlang$frostc$Variable* $tmp141 = *(&local4);
frost$core$Bit $tmp142 = (frost$core$Bit) {$tmp141 != NULL};
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block26; else goto block27;
block27:;
frost$core$Int $tmp144 = (frost$core$Int) {29u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s145, $tmp144, &$s146);
abort(); // unreachable
block26:;
org$frostlang$frostc$Type** $tmp147 = &$tmp141->type;
org$frostlang$frostc$Type* $tmp148 = *$tmp147;
// begin inline call to method org.frostlang.frostc.Compiler.isRefCounted(type:org.frostlang.frostc.Type):frost.core.Bit from Try.frost:29:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:661
frost$core$Bit $tmp149 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit($tmp148);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:661:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp150 = $tmp149.value;
bool $tmp151 = !$tmp150;
frost$core$Bit $tmp152 = (frost$core$Bit) {$tmp151};
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:662
frost$core$Bit $tmp154 = (frost$core$Bit) {false};
*(&local8) = $tmp154;
goto block28;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:664
frost$core$Bit $tmp155 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp148);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Compiler.frost:664:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp156 = $tmp155.value;
bool $tmp157 = !$tmp156;
frost$core$Bit $tmp158 = (frost$core$Bit) {$tmp157};
*(&local8) = $tmp158;
goto block28;
block28:;
frost$core$Bit $tmp159 = *(&local8);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:30
org$frostlang$frostc$IR* $tmp161 = *(&local1);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp162 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp163 = (frost$core$Int) {27u};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp164 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp165 = (frost$core$Int) {4u};
org$frostlang$frostc$Variable* $tmp166 = *(&local4);
frost$core$Bit $tmp167 = (frost$core$Bit) {$tmp166 != NULL};
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block33; else goto block34;
block34:;
frost$core$Int $tmp169 = (frost$core$Int) {30u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s170, $tmp169, &$s171);
abort(); // unreachable
block33:;
org$frostlang$frostc$Type** $tmp172 = &$tmp166->type;
org$frostlang$frostc$Type* $tmp173 = *$tmp172;
org$frostlang$frostc$Type* $tmp174 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp173);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type($tmp164, $tmp165, $tmp174);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp175 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp176 = (frost$core$Int) {2u};
org$frostlang$frostc$IR* $tmp177 = *(&local1);
frost$collections$Array** $tmp178 = &$tmp177->locals;
frost$collections$Array* $tmp179 = *$tmp178;
ITable* $tmp180 = ((frost$collections$CollectionView*) $tmp179)->$class->itable;
while ($tmp180->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp180 = $tmp180->next;
}
$fn182 $tmp181 = $tmp180->methods[0];
frost$core$Int $tmp183 = $tmp181(((frost$collections$CollectionView*) $tmp179));
org$frostlang$frostc$Variable* $tmp184 = *(&local4);
frost$core$Bit $tmp185 = (frost$core$Bit) {$tmp184 != NULL};
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block35; else goto block36;
block36:;
frost$core$Int $tmp187 = (frost$core$Int) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s188, $tmp187, &$s189);
abort(); // unreachable
block35:;
org$frostlang$frostc$Type** $tmp190 = &$tmp184->type;
org$frostlang$frostc$Type* $tmp191 = *$tmp190;
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type($tmp175, $tmp176, $tmp183, $tmp191);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp162, $tmp163, param1, $tmp164, $tmp175);
$fn193 $tmp192 = ($fn193) $tmp161->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp194 = $tmp192($tmp161, $tmp162);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:32
frost$collections$Stack** $tmp195 = &param0->enclosingContexts;
frost$collections$Stack* $tmp196 = *$tmp195;
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp197 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int $tmp198 = (frost$core$Int) {3u};
org$frostlang$frostc$Variable* $tmp199 = *(&local4);
frost$core$Bit $tmp200 = (frost$core$Bit) {$tmp199 != NULL};
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block37; else goto block38;
block38:;
frost$core$Int $tmp202 = (frost$core$Int) {32u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s203, $tmp202, &$s204);
abort(); // unreachable
block37:;
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$org$frostlang$frostc$Variable($tmp197, $tmp198, $tmp199);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Try.frost:32:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp205 = &$tmp196->contents;
frost$collections$Array* $tmp206 = *$tmp205;
frost$collections$Array$add$frost$collections$Array$T($tmp206, ((frost$core$Object*) $tmp197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
goto block25;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:34
org$frostlang$frostc$IR* $tmp207 = *(&local1);
frost$collections$Array** $tmp208 = &$tmp207->locals;
frost$collections$Array* $tmp209 = *$tmp208;
org$frostlang$frostc$Variable* $tmp210 = *(&local4);
frost$core$Bit $tmp211 = (frost$core$Bit) {$tmp210 != NULL};
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block40; else goto block41;
block41:;
frost$core$Int $tmp213 = (frost$core$Int) {34u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s214, $tmp213, &$s215);
abort(); // unreachable
block40:;
org$frostlang$frostc$Type** $tmp216 = &$tmp210->type;
org$frostlang$frostc$Type* $tmp217 = *$tmp216;
frost$collections$Array$add$frost$collections$Array$T($tmp209, ((frost$core$Object*) $tmp217));
frost$core$String* $tmp218 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
*(&local5) = ((frost$core$String*) NULL);
goto block2;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:37
frost$core$Int $tmp219 = (frost$core$Int) {37u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s220, $tmp219);
abort(); // unreachable
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:42
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Variable*) NULL)));
org$frostlang$frostc$Variable* $tmp221 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
goto block2;
block2:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:45
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp222 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp223 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int $tmp224 = (frost$core$Int) {5u};
org$frostlang$frostc$IR$Block$ID $tmp225 = *(&local2);
org$frostlang$frostc$Variable* $tmp226 = *(&local4);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int$org$frostlang$frostc$IR$Block$ID$Q$org$frostlang$frostc$Variable$Q($tmp223, $tmp224, ((org$frostlang$frostc$IR$Block$ID$nullable) { $tmp225, true }), $tmp226);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp222, param0, $tmp223);
*(&local9) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
org$frostlang$frostc$Compiler$AutoContext* $tmp227 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
*(&local9) = $tmp222;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:47
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp228 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp228, param0);
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
org$frostlang$frostc$Compiler$AutoScope* $tmp229 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
*(&local10) = $tmp228;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:48
ITable* $tmp230 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp230->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp230 = $tmp230->next;
}
$fn232 $tmp231 = $tmp230->methods[0];
frost$collections$Iterator* $tmp233 = $tmp231(((frost$collections$Iterable*) param2));
goto block42;
block42:;
ITable* $tmp234 = $tmp233->$class->itable;
while ($tmp234->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp234 = $tmp234->next;
}
$fn236 $tmp235 = $tmp234->methods[0];
frost$core$Bit $tmp237 = $tmp235($tmp233);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block44; else goto block43;
block43:;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp239 = $tmp233->$class->itable;
while ($tmp239->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp239 = $tmp239->next;
}
$fn241 $tmp240 = $tmp239->methods[1];
frost$core$Object* $tmp242 = $tmp240($tmp233);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp242)));
org$frostlang$frostc$ASTNode* $tmp243 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local11) = ((org$frostlang$frostc$ASTNode*) $tmp242);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:49
org$frostlang$frostc$ASTNode* $tmp244 = *(&local11);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp244);
frost$core$Frost$unref$frost$core$Object$Q($tmp242);
org$frostlang$frostc$ASTNode* $tmp245 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block42;
block44:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
org$frostlang$frostc$Compiler$AutoScope* $tmp246 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
*(&local10) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp247 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:52
org$frostlang$frostc$IR* $tmp248 = *(&local1);
$fn250 $tmp249 = ($fn250) $tmp248->$class->vtable[5];
frost$core$Bit $tmp251 = $tmp249($tmp248);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Try.frost:52:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp252 = $tmp251.value;
bool $tmp253 = !$tmp252;
frost$core$Bit $tmp254 = (frost$core$Bit) {$tmp253};
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:53
org$frostlang$frostc$IR* $tmp256 = *(&local1);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp257 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp258 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp259 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp257, $tmp258, param1, $tmp259);
$fn261 $tmp260 = ($fn261) $tmp256->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp262 = $tmp260($tmp256, $tmp257);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
goto block46;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:55
org$frostlang$frostc$IR* $tmp263 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp264 = *(&local2);
$fn266 $tmp265 = ($fn266) $tmp263->$class->vtable[4];
$tmp265($tmp263, $tmp264);
// <no location>
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:58
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp267 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp267, param0);
*(&local12) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
org$frostlang$frostc$Compiler$AutoScope* $tmp268 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local12) = $tmp267;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:59
org$frostlang$frostc$Variable* $tmp269 = *(&local4);
frost$core$Bit $tmp270 = (frost$core$Bit) {$tmp269 != NULL};
bool $tmp271 = $tmp270.value;
if ($tmp271) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:60
org$frostlang$frostc$SymbolTable** $tmp272 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp273 = *$tmp272;
org$frostlang$frostc$Variable* $tmp274 = *(&local4);
frost$core$Bit $tmp275 = (frost$core$Bit) {$tmp274 != NULL};
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block50; else goto block51;
block51:;
frost$core$Int $tmp277 = (frost$core$Int) {60u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s278, $tmp277, &$s279);
abort(); // unreachable
block50:;
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Try.frost:60:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp280 = &((org$frostlang$frostc$Symbol*) $tmp274)->name;
frost$core$String* $tmp281 = *$tmp280;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp273, ((org$frostlang$frostc$Symbol*) $tmp274), $tmp281);
goto block49;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:62
ITable* $tmp282 = ((frost$collections$Iterable*) param4)->$class->itable;
while ($tmp282->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp282 = $tmp282->next;
}
$fn284 $tmp283 = $tmp282->methods[0];
frost$collections$Iterator* $tmp285 = $tmp283(((frost$collections$Iterable*) param4));
goto block53;
block53:;
ITable* $tmp286 = $tmp285->$class->itable;
while ($tmp286->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp286 = $tmp286->next;
}
$fn288 $tmp287 = $tmp286->methods[0];
frost$core$Bit $tmp289 = $tmp287($tmp285);
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block55; else goto block54;
block54:;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp291 = $tmp285->$class->itable;
while ($tmp291->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp291 = $tmp291->next;
}
$fn293 $tmp292 = $tmp291->methods[1];
frost$core$Object* $tmp294 = $tmp292($tmp285);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp294)));
org$frostlang$frostc$ASTNode* $tmp295 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local13) = ((org$frostlang$frostc$ASTNode*) $tmp294);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:63
org$frostlang$frostc$ASTNode* $tmp296 = *(&local13);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp296);
frost$core$Frost$unref$frost$core$Object$Q($tmp294);
org$frostlang$frostc$ASTNode* $tmp297 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block53;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
org$frostlang$frostc$Compiler$AutoScope* $tmp298 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local12) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:66
org$frostlang$frostc$IR* $tmp299 = *(&local1);
$fn301 $tmp300 = ($fn301) $tmp299->$class->vtable[5];
frost$core$Bit $tmp302 = $tmp300($tmp299);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Try.frost:66:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp303 = $tmp302.value;
bool $tmp304 = !$tmp303;
frost$core$Bit $tmp305 = (frost$core$Bit) {$tmp304};
bool $tmp306 = $tmp305.value;
if ($tmp306) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:67
org$frostlang$frostc$IR* $tmp307 = *(&local1);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp308 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp309 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp310 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp308, $tmp309, param1, $tmp310);
$fn312 $tmp311 = ($fn312) $tmp307->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp313 = $tmp311($tmp307, $tmp308);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
goto block57;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:70
org$frostlang$frostc$IR* $tmp314 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp315 = *(&local3);
$fn317 $tmp316 = ($fn317) $tmp314->$class->vtable[4];
$tmp316($tmp314, $tmp315);
org$frostlang$frostc$Variable* $tmp318 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local4) = ((org$frostlang$frostc$Variable*) NULL);
org$frostlang$frostc$IR* $tmp319 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp320 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
return;

}
void org$frostlang$frostc$statement$Try$init(org$frostlang$frostc$statement$Try* param0) {

return;

}
void org$frostlang$frostc$statement$Try$cleanup(org$frostlang$frostc$statement$Try* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Try.frost:14
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

