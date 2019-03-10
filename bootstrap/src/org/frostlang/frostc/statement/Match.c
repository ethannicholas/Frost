#include "org/frostlang/frostc/statement/Match.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Weak.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/AutoScope.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/Compiler/AutoUnrefs.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/Compiler/Target.h"
#include "org/frostlang/frostc/Variable/Kind.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Equatable.h"
#include "frost/core/Formattable.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/ClassDecl/Kind.h"
#include "org/frostlang/frostc/expression/Dot.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Match$class_type org$frostlang$frostc$statement$Match$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Match$cleanup} };

typedef frost$core$String* (*$fn8)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn15)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn18)(frost$core$Object*);
typedef frost$core$String* (*$fn37)(frost$core$Object*);
typedef frost$core$Int64 (*$fn54)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn72)(org$frostlang$frostc$IR*, frost$core$String*);
typedef frost$core$Int64 (*$fn83)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn128)(org$frostlang$frostc$IR*, frost$core$String*);
typedef frost$core$Int64 (*$fn135)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn166)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn172)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn177)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn192)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn208)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$Position (*$fn241)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Int64 (*$fn251)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn275)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn284)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn296)(frost$core$Object*);
typedef frost$core$Int64 (*$fn311)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn315)(frost$core$Object*);
typedef frost$core$Int64 (*$fn325)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn335)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Int64 (*$fn348)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn352)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn368)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn371)(frost$core$Object*);
typedef org$frostlang$frostc$Position (*$fn415)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn427)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn458)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn463)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn468)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn498)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn521)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn536)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn580)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn616)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Int64 (*$fn636)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn697)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn709)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn737)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn778)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn806)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn810)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn814)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn819)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn827)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn839)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn874)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn877)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn881)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn886)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn894)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn905)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn910)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn921)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn934)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn955)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn971)(org$frostlang$frostc$ASTNode*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x4d\x61\x74\x63\x68", 36, 1284738188429659722, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x61\x74\x63\x68\x20\x63\x68\x6f\x69\x63\x65\x20\x63\x61\x73\x65\x20\x27", 26, 6195184737882696999, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x61\x67\x61\x69\x6e\x73\x74\x20\x27", 11, 244974341930203048, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x61\x74\x63\x68\x20\x63\x68\x6f\x69\x63\x65\x20\x63\x61\x73\x65\x20\x27", 26, 6195184737882696999, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x61\x67\x61\x69\x6e\x73\x74\x20", 10, -4452765502204017249, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x4d\x61\x74\x63\x68\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x43\x68\x61\x69\x6e\x65\x64\x49\x66\x4d\x61\x74\x63\x68\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2c\x20\x63\x68\x6f\x69\x63\x65\x43\x6c\x61\x73\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x2c\x20\x63\x68\x6f\x69\x63\x65\x52\x61\x77\x56\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x77\x68\x65\x6e\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x6f\x74\x68\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x29", 438, -6978513693907537453, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x74\x63\x68\x20\x65\x6e\x64", 9, -926820894365757777, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x65\x73\x74\x20\x73\x75\x63\x63\x65\x73\x73", 12, -1909962622798097854, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x74\x63\x68", 5, -4341501217981328394, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x73\x74\x72\x75\x63\x74\x75\x72\x69\x6e\x67\x20\x63\x68\x6f\x69\x63\x65\x20\x27\x77\x68\x65\x6e\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x74\x6f\x67\x65\x74\x68\x65\x72\x20\x77\x69\x74\x68\x20", 57, -9117856006465956354, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x74\x68\x65\x72\x20\x27\x77\x68\x65\x6e\x27\x20\x63\x6f\x6d\x70\x61\x72\x69\x73\x6f\x6e\x73", 24, -6457233602356944489, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x27", 8, -1761804843643209985, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20", 2, 557168754375928562, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x71\x75\x69\x72\x65\x73\x20", 9, 3024289352992644111, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c\x73", 2, 640440267522026072, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x61\x72\x67\x75\x6d\x65\x6e\x74", 9, -7281427288413514724, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s344 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 10, 6826161892368392120, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x69\x73\x20", 5, 3952076887842184258, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 19, -1825473479368175733, NULL };
static frost$core$String $s388 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s436 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d", 1, -5808605251665550904, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s529 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s588 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s589 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s645 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s718 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d", 1, -5808605251665550904, NULL };
static frost$core$String $s748 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d", 1, -5808605251665550904, NULL };
static frost$core$String $s852 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s960 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, -2729473888161922992, NULL };
static frost$core$String $s967 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d", 1, -5808605251665550904, NULL };
static frost$core$String $s973 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27\x20\x76\x61\x6c\x75\x65\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x64\x65\x66\x69\x6e\x65\x20\x74\x68\x65\x20\x27\x3d\x27\x20\x6f\x70\x65\x72\x61\x74\x6f\x72", 46, -204752271840210608, NULL };

frost$core$Bit org$frostlang$frostc$statement$Match$checkChoiceMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ChoiceCase$Q$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$R$frost$core$Bit(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ChoiceCase* param2, org$frostlang$frostc$ClassDecl* param3, org$frostlang$frostc$IR$Value* param4) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:29
frost$core$Bit $tmp2 = (frost$core$Bit) {param2 == NULL};
bool $tmp3 = $tmp2.value;
if ($tmp3) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:30
frost$core$Bit $tmp4 = (frost$core$Bit) {false};
return $tmp4;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:32
frost$core$Bit $tmp5 = (frost$core$Bit) {param3 == NULL};
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:33
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:33:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn8 $tmp7 = ($fn8) ((frost$core$Object*) param2)->$class->vtable[0];
frost$core$String* $tmp9 = $tmp7(((frost$core$Object*) param2));
frost$core$String* $tmp10 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s11, $tmp9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$String* $tmp12 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp10, &$s13);
$fn15 $tmp14 = ($fn15) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp16 = $tmp14(param4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:33:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn18 $tmp17 = ($fn18) ((frost$core$Object*) $tmp16)->$class->vtable[0];
frost$core$String* $tmp19 = $tmp17(((frost$core$Object*) $tmp16));
frost$core$String* $tmp20 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp12, $tmp19);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$String* $tmp21 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp20, &$s22);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:34
frost$core$Bit $tmp23 = (frost$core$Bit) {false};
return $tmp23;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:36
frost$core$Weak** $tmp24 = &param2->owner;
frost$core$Weak* $tmp25 = *$tmp24;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Match.frost:36:14
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp26 = &$tmp25->_valid;
frost$core$Bit $tmp27 = *$tmp26;
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp29 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s30, $tmp29);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp31 = &$tmp25->value;
frost$core$Object* $tmp32 = *$tmp31;
frost$core$Frost$ref$frost$core$Object$Q($tmp32);
bool $tmp33 = ((org$frostlang$frostc$ClassDecl*) $tmp32) != param3;
frost$core$Bit $tmp34 = (frost$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp32);
if ($tmp35) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:37
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:37:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn37 $tmp36 = ($fn37) ((frost$core$Object*) param2)->$class->vtable[0];
frost$core$String* $tmp38 = $tmp36(((frost$core$Object*) param2));
frost$core$String* $tmp39 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s40, $tmp38);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$String* $tmp41 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp39, &$s42);
frost$core$String** $tmp43 = &param3->name;
frost$core$String* $tmp44 = *$tmp43;
frost$core$String* $tmp45 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s46, $tmp44);
frost$core$String* $tmp47 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp45, &$s48);
frost$core$String* $tmp49 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp41, $tmp47);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:39
frost$core$Bit $tmp50 = (frost$core$Bit) {false};
return $tmp50;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:41
frost$core$Bit $tmp51 = (frost$core$Bit) {true};
return $tmp51;

}
void org$frostlang$frostc$statement$Match$compileChainedIfMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$ClassDecl* param3, org$frostlang$frostc$IR$Value* param4, org$frostlang$frostc$FixedArray* param5, org$frostlang$frostc$FixedArray* param6) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
org$frostlang$frostc$IR$Block$ID local2;
frost$core$Int64 local3;
org$frostlang$frostc$ASTNode* local4 = NULL;
org$frostlang$frostc$Position local5;
org$frostlang$frostc$FixedArray* local6 = NULL;
org$frostlang$frostc$FixedArray* local7 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local8 = NULL;
org$frostlang$frostc$IR$Block$ID local9;
frost$core$Int64 local10;
org$frostlang$frostc$ASTNode* local11 = NULL;
org$frostlang$frostc$Position local12;
org$frostlang$frostc$ASTNode* local13 = NULL;
org$frostlang$frostc$FixedArray* local14 = NULL;
org$frostlang$frostc$Pair* local15 = NULL;
org$frostlang$frostc$IR$Value* local16 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local17 = NULL;
frost$collections$Array* local18 = NULL;
org$frostlang$frostc$IR$Value* local19 = NULL;
frost$core$Int64 local20;
org$frostlang$frostc$IR$Statement$ID local21;
org$frostlang$frostc$IR$Statement$ID local22;
frost$core$String* local23 = NULL;
org$frostlang$frostc$Compiler$Target* local24 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local25 = NULL;
org$frostlang$frostc$Variable$Kind local26;
org$frostlang$frostc$Variable$Kind local27;
org$frostlang$frostc$IR$Value* local28 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local29 = NULL;
org$frostlang$frostc$IR$Value* local30 = NULL;
org$frostlang$frostc$Pair* local31 = NULL;
frost$collections$Array* local32 = NULL;
org$frostlang$frostc$ASTNode* local33 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local34 = NULL;
org$frostlang$frostc$ASTNode* local35 = NULL;
ITable* $tmp52 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp52->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp52 = $tmp52->next;
}
$fn54 $tmp53 = $tmp52->methods[0];
frost$core$Int64 $tmp55 = $tmp53(((frost$collections$CollectionView*) param5));
frost$core$Int64 $tmp56 = (frost$core$Int64) {0u};
int64_t $tmp57 = $tmp55.value;
int64_t $tmp58 = $tmp56.value;
bool $tmp59 = $tmp57 > $tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block1; else goto block3;
block3:;
frost$core$Bit $tmp62 = (frost$core$Bit) {param6 != NULL};
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp64 = (frost$core$Int64) {47u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s65, $tmp64, &$s66);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:50
org$frostlang$frostc$IR** $tmp67 = &param0->ir;
org$frostlang$frostc$IR* $tmp68 = *$tmp67;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
org$frostlang$frostc$IR* $tmp69 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
*(&local0) = $tmp68;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:51
org$frostlang$frostc$IR* $tmp70 = *(&local0);
$fn72 $tmp71 = ($fn72) $tmp70->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp73 = $tmp71($tmp70, &$s74);
*(&local1) = $tmp73;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:52
org$frostlang$frostc$IR* $tmp75 = *(&local0);
org$frostlang$frostc$IR$Block** $tmp76 = &$tmp75->currentBlock;
org$frostlang$frostc$IR$Block* $tmp77 = *$tmp76;
org$frostlang$frostc$IR$Block$ID* $tmp78 = &$tmp77->id;
org$frostlang$frostc$IR$Block$ID $tmp79 = *$tmp78;
*(&local2) = $tmp79;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:53
frost$core$Int64 $tmp80 = (frost$core$Int64) {0u};
ITable* $tmp81 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp81->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp81 = $tmp81->next;
}
$fn83 $tmp82 = $tmp81->methods[0];
frost$core$Int64 $tmp84 = $tmp82(((frost$collections$CollectionView*) param5));
frost$core$Bit $tmp85 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp86 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp80, $tmp84, $tmp85);
frost$core$Int64 $tmp87 = $tmp86.min;
*(&local3) = $tmp87;
frost$core$Int64 $tmp88 = $tmp86.max;
frost$core$Bit $tmp89 = $tmp86.inclusive;
bool $tmp90 = $tmp89.value;
frost$core$Int64 $tmp91 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp92 = $tmp91.value;
frost$core$UInt64 $tmp93 = (frost$core$UInt64) {((uint64_t) $tmp92)};
if ($tmp90) goto block8; else goto block9;
block8:;
int64_t $tmp94 = $tmp87.value;
int64_t $tmp95 = $tmp88.value;
bool $tmp96 = $tmp94 <= $tmp95;
frost$core$Bit $tmp97 = (frost$core$Bit) {$tmp96};
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block5; else goto block6;
block9:;
int64_t $tmp99 = $tmp87.value;
int64_t $tmp100 = $tmp88.value;
bool $tmp101 = $tmp99 < $tmp100;
frost$core$Bit $tmp102 = (frost$core$Bit) {$tmp101};
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:54
frost$core$Int64 $tmp104 = *(&local3);
frost$core$Object* $tmp105 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T(param5, $tmp104);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp105)));
org$frostlang$frostc$ASTNode* $tmp106 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp105);
frost$core$Frost$unref$frost$core$Object$Q($tmp105);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:55
org$frostlang$frostc$ASTNode* $tmp107 = *(&local4);
frost$core$Int64* $tmp108 = &$tmp107->$rawValue;
frost$core$Int64 $tmp109 = *$tmp108;
frost$core$Int64 $tmp110 = (frost$core$Int64) {54u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Match.frost:56:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp111 = $tmp109.value;
int64_t $tmp112 = $tmp110.value;
bool $tmp113 = $tmp111 == $tmp112;
frost$core$Bit $tmp114 = (frost$core$Bit) {$tmp113};
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp116 = (org$frostlang$frostc$Position*) ($tmp107->$data + 0);
org$frostlang$frostc$Position $tmp117 = *$tmp116;
*(&local5) = $tmp117;
org$frostlang$frostc$FixedArray** $tmp118 = (org$frostlang$frostc$FixedArray**) ($tmp107->$data + 24);
org$frostlang$frostc$FixedArray* $tmp119 = *$tmp118;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
org$frostlang$frostc$FixedArray* $tmp120 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
*(&local6) = $tmp119;
org$frostlang$frostc$FixedArray** $tmp121 = (org$frostlang$frostc$FixedArray**) ($tmp107->$data + 32);
org$frostlang$frostc$FixedArray* $tmp122 = *$tmp121;
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
org$frostlang$frostc$FixedArray* $tmp123 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local7) = $tmp122;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:58
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp124 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp124, param0);
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
org$frostlang$frostc$Compiler$AutoScope* $tmp125 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
*(&local8) = $tmp124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:59
org$frostlang$frostc$IR* $tmp126 = *(&local0);
$fn128 $tmp127 = ($fn128) $tmp126->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp129 = $tmp127($tmp126, &$s130);
*(&local9) = $tmp129;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:60
frost$core$Int64 $tmp131 = (frost$core$Int64) {0u};
org$frostlang$frostc$FixedArray* $tmp132 = *(&local6);
ITable* $tmp133 = ((frost$collections$CollectionView*) $tmp132)->$class->itable;
while ($tmp133->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp133 = $tmp133->next;
}
$fn135 $tmp134 = $tmp133->methods[0];
frost$core$Int64 $tmp136 = $tmp134(((frost$collections$CollectionView*) $tmp132));
frost$core$Bit $tmp137 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp138 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp131, $tmp136, $tmp137);
frost$core$Int64 $tmp139 = $tmp138.min;
*(&local10) = $tmp139;
frost$core$Int64 $tmp140 = $tmp138.max;
frost$core$Bit $tmp141 = $tmp138.inclusive;
bool $tmp142 = $tmp141.value;
frost$core$Int64 $tmp143 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp144 = $tmp143.value;
frost$core$UInt64 $tmp145 = (frost$core$UInt64) {((uint64_t) $tmp144)};
if ($tmp142) goto block18; else goto block19;
block18:;
int64_t $tmp146 = $tmp139.value;
int64_t $tmp147 = $tmp140.value;
bool $tmp148 = $tmp146 <= $tmp147;
frost$core$Bit $tmp149 = (frost$core$Bit) {$tmp148};
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block15; else goto block16;
block19:;
int64_t $tmp151 = $tmp139.value;
int64_t $tmp152 = $tmp140.value;
bool $tmp153 = $tmp151 < $tmp152;
frost$core$Bit $tmp154 = (frost$core$Bit) {$tmp153};
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:61
org$frostlang$frostc$IR$Block$ID $tmp156 = *(&local2);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp157;
$tmp157 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp157->value = $tmp156;
org$frostlang$frostc$IR* $tmp158 = *(&local0);
org$frostlang$frostc$IR$Block** $tmp159 = &$tmp158->currentBlock;
org$frostlang$frostc$IR$Block* $tmp160 = *$tmp159;
org$frostlang$frostc$IR$Block$ID* $tmp161 = &$tmp160->id;
org$frostlang$frostc$IR$Block$ID $tmp162 = *$tmp161;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp163;
$tmp163 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp163->value = $tmp162;
ITable* $tmp164 = ((frost$core$Equatable*) $tmp157)->$class->itable;
while ($tmp164->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp164 = $tmp164->next;
}
$fn166 $tmp165 = $tmp164->methods[1];
frost$core$Bit $tmp167 = $tmp165(((frost$core$Equatable*) $tmp157), ((frost$core$Equatable*) $tmp163));
bool $tmp168 = $tmp167.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp163)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp157)));
if ($tmp168) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:62
org$frostlang$frostc$IR* $tmp169 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp170 = *(&local2);
$fn172 $tmp171 = ($fn172) $tmp169->$class->vtable[4];
$tmp171($tmp169, $tmp170);
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:64
frost$core$Int64 $tmp173 = *(&local10);
org$frostlang$frostc$FixedArray* $tmp174 = *(&local6);
ITable* $tmp175 = ((frost$collections$CollectionView*) $tmp174)->$class->itable;
while ($tmp175->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp175 = $tmp175->next;
}
$fn177 $tmp176 = $tmp175->methods[0];
frost$core$Int64 $tmp178 = $tmp176(((frost$collections$CollectionView*) $tmp174));
frost$core$Int64 $tmp179 = (frost$core$Int64) {1u};
int64_t $tmp180 = $tmp178.value;
int64_t $tmp181 = $tmp179.value;
int64_t $tmp182 = $tmp180 - $tmp181;
frost$core$Int64 $tmp183 = (frost$core$Int64) {$tmp182};
int64_t $tmp184 = $tmp173.value;
int64_t $tmp185 = $tmp183.value;
bool $tmp186 = $tmp184 < $tmp185;
frost$core$Bit $tmp187 = (frost$core$Bit) {$tmp186};
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block22; else goto block26;
block26:;
frost$core$Int64 $tmp189 = *(&local3);
ITable* $tmp190 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp190->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp190 = $tmp190->next;
}
$fn192 $tmp191 = $tmp190->methods[0];
frost$core$Int64 $tmp193 = $tmp191(((frost$collections$CollectionView*) param5));
frost$core$Int64 $tmp194 = (frost$core$Int64) {1u};
int64_t $tmp195 = $tmp193.value;
int64_t $tmp196 = $tmp194.value;
int64_t $tmp197 = $tmp195 - $tmp196;
frost$core$Int64 $tmp198 = (frost$core$Int64) {$tmp197};
int64_t $tmp199 = $tmp189.value;
int64_t $tmp200 = $tmp198.value;
bool $tmp201 = $tmp199 < $tmp200;
frost$core$Bit $tmp202 = (frost$core$Bit) {$tmp201};
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block22; else goto block25;
block25:;
frost$core$Bit $tmp204 = (frost$core$Bit) {param6 != NULL};
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block22; else goto block24;
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:65
org$frostlang$frostc$IR* $tmp206 = *(&local0);
$fn208 $tmp207 = ($fn208) $tmp206->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp209 = $tmp207($tmp206, &$s210);
*(&local2) = $tmp209;
goto block23;
block24:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:68
org$frostlang$frostc$IR$Block$ID $tmp211 = *(&local1);
*(&local2) = $tmp211;
goto block23;
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:70
org$frostlang$frostc$FixedArray* $tmp212 = *(&local6);
frost$core$Int64 $tmp213 = *(&local10);
frost$core$Object* $tmp214 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp212, $tmp213);
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp214)));
org$frostlang$frostc$ASTNode* $tmp215 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
*(&local11) = ((org$frostlang$frostc$ASTNode*) $tmp214);
frost$core$Frost$unref$frost$core$Object$Q($tmp214);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:71
org$frostlang$frostc$ASTNode* $tmp216 = *(&local11);
frost$core$Int64* $tmp217 = &$tmp216->$rawValue;
frost$core$Int64 $tmp218 = *$tmp217;
frost$core$Int64 $tmp219 = (frost$core$Int64) {9u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Match.frost:72:45
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp220 = $tmp218.value;
int64_t $tmp221 = $tmp219.value;
bool $tmp222 = $tmp220 == $tmp221;
frost$core$Bit $tmp223 = (frost$core$Bit) {$tmp222};
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block28; else goto block27;
block28:;
org$frostlang$frostc$Position* $tmp225 = (org$frostlang$frostc$Position*) ($tmp216->$data + 0);
org$frostlang$frostc$Position $tmp226 = *$tmp225;
*(&local12) = $tmp226;
org$frostlang$frostc$ASTNode** $tmp227 = (org$frostlang$frostc$ASTNode**) ($tmp216->$data + 24);
org$frostlang$frostc$ASTNode* $tmp228 = *$tmp227;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
org$frostlang$frostc$ASTNode* $tmp229 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
*(&local13) = $tmp228;
org$frostlang$frostc$FixedArray** $tmp230 = (org$frostlang$frostc$FixedArray**) ($tmp216->$data + 32);
org$frostlang$frostc$FixedArray* $tmp231 = *$tmp230;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
org$frostlang$frostc$FixedArray* $tmp232 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
*(&local14) = $tmp231;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:73
org$frostlang$frostc$ASTNode* $tmp233 = *(&local13);
org$frostlang$frostc$Pair* $tmp234 = org$frostlang$frostc$Compiler$getChoiceCase$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Corg$frostlang$frostc$ChoiceCase$GT$Q(param0, $tmp233);
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
org$frostlang$frostc$Pair* $tmp235 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
*(&local15) = $tmp234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:74
org$frostlang$frostc$Pair* $tmp236 = *(&local15);
frost$core$Bit $tmp237 = (frost$core$Bit) {$tmp236 != NULL};
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:75
org$frostlang$frostc$ASTNode* $tmp239 = *(&local13);
$fn241 $tmp240 = ($fn241) $tmp239->$class->vtable[2];
org$frostlang$frostc$Position $tmp242 = $tmp240($tmp239);
org$frostlang$frostc$Pair* $tmp243 = *(&local15);
frost$core$Object** $tmp244 = &$tmp243->second;
frost$core$Object* $tmp245 = *$tmp244;
frost$core$Bit $tmp246 = org$frostlang$frostc$statement$Match$checkChoiceMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ChoiceCase$Q$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, $tmp242, ((org$frostlang$frostc$ChoiceCase*) $tmp245), param3, param2);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:77
org$frostlang$frostc$FixedArray* $tmp248 = *(&local6);
ITable* $tmp249 = ((frost$collections$CollectionView*) $tmp248)->$class->itable;
while ($tmp249->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp249 = $tmp249->next;
}
$fn251 $tmp250 = $tmp249->methods[0];
frost$core$Int64 $tmp252 = $tmp250(((frost$collections$CollectionView*) $tmp248));
frost$core$Int64 $tmp253 = (frost$core$Int64) {1u};
int64_t $tmp254 = $tmp252.value;
int64_t $tmp255 = $tmp253.value;
bool $tmp256 = $tmp254 != $tmp255;
frost$core$Bit $tmp257 = (frost$core$Bit) {$tmp256};
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:78
org$frostlang$frostc$Position $tmp259 = *(&local12);
frost$core$String* $tmp260 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s261, &$s262);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp259, $tmp260);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:81
org$frostlang$frostc$Pair* $tmp263 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp264 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp265 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp266 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp267 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp268 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp269 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp270 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp271 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block35:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:83
org$frostlang$frostc$FixedArray* $tmp272 = *(&local14);
ITable* $tmp273 = ((frost$collections$CollectionView*) $tmp272)->$class->itable;
while ($tmp273->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp273 = $tmp273->next;
}
$fn275 $tmp274 = $tmp273->methods[0];
frost$core$Int64 $tmp276 = $tmp274(((frost$collections$CollectionView*) $tmp272));
org$frostlang$frostc$Pair* $tmp277 = *(&local15);
frost$core$Object** $tmp278 = &$tmp277->second;
frost$core$Object* $tmp279 = *$tmp278;
frost$collections$Array** $tmp280 = &((org$frostlang$frostc$ChoiceCase*) $tmp279)->fields;
frost$collections$Array* $tmp281 = *$tmp280;
ITable* $tmp282 = ((frost$collections$CollectionView*) $tmp281)->$class->itable;
while ($tmp282->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp282 = $tmp282->next;
}
$fn284 $tmp283 = $tmp282->methods[0];
frost$core$Int64 $tmp285 = $tmp283(((frost$collections$CollectionView*) $tmp281));
int64_t $tmp286 = $tmp276.value;
int64_t $tmp287 = $tmp285.value;
bool $tmp288 = $tmp286 != $tmp287;
frost$core$Bit $tmp289 = (frost$core$Bit) {$tmp288};
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:84
org$frostlang$frostc$Position $tmp291 = *(&local12);
org$frostlang$frostc$Pair* $tmp292 = *(&local15);
frost$core$Object** $tmp293 = &$tmp292->second;
frost$core$Object* $tmp294 = *$tmp293;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:84:74
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn296 $tmp295 = ($fn296) ((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp294))->$class->vtable[0];
frost$core$String* $tmp297 = $tmp295(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp294)));
frost$core$String* $tmp298 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s299, $tmp297);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$String* $tmp300 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp298, &$s301);
frost$core$String* $tmp302 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp300, &$s303);
org$frostlang$frostc$Pair* $tmp304 = *(&local15);
frost$core$Object** $tmp305 = &$tmp304->second;
frost$core$Object* $tmp306 = *$tmp305;
frost$collections$Array** $tmp307 = &((org$frostlang$frostc$ChoiceCase*) $tmp306)->fields;
frost$collections$Array* $tmp308 = *$tmp307;
ITable* $tmp309 = ((frost$collections$CollectionView*) $tmp308)->$class->itable;
while ($tmp309->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp309 = $tmp309->next;
}
$fn311 $tmp310 = $tmp309->methods[0];
frost$core$Int64 $tmp312 = $tmp310(((frost$collections$CollectionView*) $tmp308));
frost$core$Int64$wrapper* $tmp313;
$tmp313 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp313->value = $tmp312;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:85:69
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn315 $tmp314 = ($fn315) ((frost$core$Object*) $tmp313)->$class->vtable[0];
frost$core$String* $tmp316 = $tmp314(((frost$core$Object*) $tmp313));
frost$core$String* $tmp317 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp302, $tmp316);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
org$frostlang$frostc$Pair* $tmp318 = *(&local15);
frost$core$Object** $tmp319 = &$tmp318->second;
frost$core$Object* $tmp320 = *$tmp319;
frost$collections$Array** $tmp321 = &((org$frostlang$frostc$ChoiceCase*) $tmp320)->fields;
frost$collections$Array* $tmp322 = *$tmp321;
ITable* $tmp323 = ((frost$collections$CollectionView*) $tmp322)->$class->itable;
while ($tmp323->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp323 = $tmp323->next;
}
$fn325 $tmp324 = $tmp323->methods[0];
frost$core$Int64 $tmp326 = $tmp324(((frost$collections$CollectionView*) $tmp322));
frost$core$Int64 $tmp327 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Match.frost:86:92
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp328 = $tmp326.value;
int64_t $tmp329 = $tmp327.value;
bool $tmp330 = $tmp328 == $tmp329;
frost$core$Bit $tmp331 = (frost$core$Bit) {$tmp330};
frost$core$Bit$wrapper* $tmp332;
$tmp332 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp332->value = $tmp331;
ITable* $tmp333 = ((frost$core$Formattable*) $tmp332)->$class->itable;
while ($tmp333->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp333 = $tmp333->next;
}
$fn335 $tmp334 = $tmp333->methods[0];
frost$core$String* $tmp336 = $tmp334(((frost$core$Formattable*) $tmp332), &$s337);
frost$core$String* $tmp338 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s339, $tmp336);
frost$core$String* $tmp340 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp338, &$s341);
frost$core$String* $tmp342 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp317, $tmp340);
frost$core$String* $tmp343 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp342, &$s344);
org$frostlang$frostc$FixedArray* $tmp345 = *(&local14);
ITable* $tmp346 = ((frost$collections$CollectionView*) $tmp345)->$class->itable;
while ($tmp346->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp346 = $tmp346->next;
}
$fn348 $tmp347 = $tmp346->methods[0];
frost$core$Int64 $tmp349 = $tmp347(((frost$collections$CollectionView*) $tmp345));
frost$core$Int64$wrapper* $tmp350;
$tmp350 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp350->value = $tmp349;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:87:70
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn352 $tmp351 = ($fn352) ((frost$core$Object*) $tmp350)->$class->vtable[0];
frost$core$String* $tmp353 = $tmp351(((frost$core$Object*) $tmp350));
frost$core$String* $tmp354 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp343, $tmp353);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp291, $tmp354);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp332)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:88
org$frostlang$frostc$Pair* $tmp355 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp356 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp357 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp358 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp359 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp360 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp361 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp362 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp363 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block37:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:90
frost$core$Bit $tmp364 = (frost$core$Bit) {param4 == NULL};
bool $tmp365 = $tmp364.value;
if ($tmp365) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:91
org$frostlang$frostc$Position $tmp366 = *(&local12);
$fn368 $tmp367 = ($fn368) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp369 = $tmp367(param2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:91:74
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn371 $tmp370 = ($fn371) ((frost$core$Object*) $tmp369)->$class->vtable[0];
frost$core$String* $tmp372 = $tmp370(((frost$core$Object*) $tmp369));
frost$core$String* $tmp373 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s374, $tmp372);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
frost$core$String* $tmp375 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp373, &$s376);
frost$core$String* $tmp377 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp375, &$s378);
org$frostlang$frostc$Pair* $tmp379 = *(&local15);
frost$core$Object** $tmp380 = &$tmp379->second;
frost$core$Object* $tmp381 = *$tmp380;
frost$core$Weak** $tmp382 = &((org$frostlang$frostc$ChoiceCase*) $tmp381)->owner;
frost$core$Weak* $tmp383 = *$tmp382;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Match.frost:93:70
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp384 = &$tmp383->_valid;
frost$core$Bit $tmp385 = *$tmp384;
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp387 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s388, $tmp387);
abort(); // unreachable
block47:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp389 = &$tmp383->value;
frost$core$Object* $tmp390 = *$tmp389;
frost$core$Frost$ref$frost$core$Object$Q($tmp390);
frost$core$String** $tmp391 = &((org$frostlang$frostc$ClassDecl*) $tmp390)->name;
frost$core$String* $tmp392 = *$tmp391;
frost$core$String* $tmp393 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s394, $tmp392);
frost$core$String* $tmp395 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp393, &$s396);
frost$core$String* $tmp397 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp377, $tmp395);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp366, $tmp397);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
frost$core$Frost$unref$frost$core$Object$Q($tmp390);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:94
org$frostlang$frostc$Pair* $tmp398 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp399 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp400 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp401 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp402 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp403 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp404 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp405 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp406 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block43:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:96
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:98
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp407 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp407, param0);
*(&local17) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp408 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
*(&local17) = $tmp407;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:99
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp409 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp410 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp409, $tmp410);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp411 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp412 = (frost$core$Int64) {25u};
org$frostlang$frostc$ASTNode* $tmp413 = *(&local13);
$fn415 $tmp414 = ($fn415) $tmp413->$class->vtable[2];
org$frostlang$frostc$Position $tmp416 = $tmp414($tmp413);
org$frostlang$frostc$Pair* $tmp417 = *(&local15);
frost$core$Object** $tmp418 = &$tmp417->second;
frost$core$Object* $tmp419 = *$tmp418;
frost$core$Int64* $tmp420 = &((org$frostlang$frostc$ChoiceCase*) $tmp419)->rawValue;
frost$core$Int64 $tmp421 = *$tmp420;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Match.frost:100:75
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp422 = $tmp421.value;
frost$core$UInt64 $tmp423 = (frost$core$UInt64) {((uint64_t) $tmp422)};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp411, $tmp412, $tmp416, $tmp423);
frost$collections$Array$add$frost$collections$Array$T($tmp409, ((frost$core$Object*) $tmp411));
*(&local18) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
frost$collections$Array* $tmp424 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
*(&local18) = $tmp409;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:101
org$frostlang$frostc$ASTNode* $tmp425 = *(&local13);
$fn427 $tmp426 = ($fn427) $tmp425->$class->vtable[2];
org$frostlang$frostc$Position $tmp428 = $tmp426($tmp425);
frost$collections$Array* $tmp429 = *(&local18);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp430 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp431 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type** $tmp432 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp433 = *$tmp432;
frost$core$Bit $tmp434 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp430, $tmp431, $tmp433, $tmp434);
org$frostlang$frostc$IR$Value* $tmp435 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp428, param4, &$s436, ((frost$collections$ListView*) $tmp429), $tmp430);
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
org$frostlang$frostc$IR$Value* $tmp437 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
*(&local19) = $tmp435;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:104
org$frostlang$frostc$IR$Value* $tmp438 = *(&local19);
frost$core$Bit $tmp439 = (frost$core$Bit) {$tmp438 != NULL};
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block50; else goto block51;
block51:;
frost$core$Int64 $tmp441 = (frost$core$Int64) {104u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s442, $tmp441);
abort(); // unreachable
block50:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:105
org$frostlang$frostc$Position $tmp443 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp444 = *(&local19);
org$frostlang$frostc$IR$Value* $tmp445 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, $tmp443, $tmp444);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
org$frostlang$frostc$IR$Value* $tmp446 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
*(&local16) = $tmp445;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
org$frostlang$frostc$IR$Value* $tmp447 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp448 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp449 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
*(&local17) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:108
org$frostlang$frostc$IR* $tmp450 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp451 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp452 = (frost$core$Int64) {5u};
org$frostlang$frostc$Position $tmp453 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp454 = *(&local16);
org$frostlang$frostc$IR$Block$ID $tmp455 = *(&local9);
org$frostlang$frostc$IR$Block$ID $tmp456 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp451, $tmp452, $tmp453, $tmp454, $tmp455, $tmp456);
$fn458 $tmp457 = ($fn458) $tmp450->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp459 = $tmp457($tmp450, $tmp451);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:110
org$frostlang$frostc$IR* $tmp460 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp461 = *(&local9);
$fn463 $tmp462 = ($fn463) $tmp460->$class->vtable[4];
$tmp462($tmp460, $tmp461);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:111
frost$core$Int64 $tmp464 = (frost$core$Int64) {0u};
org$frostlang$frostc$FixedArray* $tmp465 = *(&local14);
ITable* $tmp466 = ((frost$collections$CollectionView*) $tmp465)->$class->itable;
while ($tmp466->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp466 = $tmp466->next;
}
$fn468 $tmp467 = $tmp466->methods[0];
frost$core$Int64 $tmp469 = $tmp467(((frost$collections$CollectionView*) $tmp465));
frost$core$Bit $tmp470 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp471 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp464, $tmp469, $tmp470);
frost$core$Int64 $tmp472 = $tmp471.min;
*(&local20) = $tmp472;
frost$core$Int64 $tmp473 = $tmp471.max;
frost$core$Bit $tmp474 = $tmp471.inclusive;
bool $tmp475 = $tmp474.value;
frost$core$Int64 $tmp476 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp477 = $tmp476.value;
frost$core$UInt64 $tmp478 = (frost$core$UInt64) {((uint64_t) $tmp477)};
if ($tmp475) goto block56; else goto block57;
block56:;
int64_t $tmp479 = $tmp472.value;
int64_t $tmp480 = $tmp473.value;
bool $tmp481 = $tmp479 <= $tmp480;
frost$core$Bit $tmp482 = (frost$core$Bit) {$tmp481};
bool $tmp483 = $tmp482.value;
if ($tmp483) goto block53; else goto block54;
block57:;
int64_t $tmp484 = $tmp472.value;
int64_t $tmp485 = $tmp473.value;
bool $tmp486 = $tmp484 < $tmp485;
frost$core$Bit $tmp487 = (frost$core$Bit) {$tmp486};
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:112
org$frostlang$frostc$IR* $tmp489 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp490 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp491 = (frost$core$Int64) {4u};
org$frostlang$frostc$Position $tmp492 = *(&local12);
org$frostlang$frostc$Pair* $tmp493 = *(&local15);
frost$core$Object** $tmp494 = &$tmp493->second;
frost$core$Object* $tmp495 = *$tmp494;
frost$core$Int64 $tmp496 = *(&local20);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64($tmp490, $tmp491, $tmp492, param2, ((org$frostlang$frostc$ChoiceCase*) $tmp495), $tmp496);
$fn498 $tmp497 = ($fn498) $tmp489->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp499 = $tmp497($tmp489, $tmp490);
*(&local21) = $tmp499;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:115
org$frostlang$frostc$IR* $tmp500 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp501 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp502 = (frost$core$Int64) {14u};
org$frostlang$frostc$Position $tmp503 = *(&local12);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp504 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp505 = (frost$core$Int64) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp506 = *(&local21);
org$frostlang$frostc$Pair* $tmp507 = *(&local15);
frost$core$Object** $tmp508 = &$tmp507->second;
frost$core$Object* $tmp509 = *$tmp508;
frost$collections$Array** $tmp510 = &((org$frostlang$frostc$ChoiceCase*) $tmp509)->fields;
frost$collections$Array* $tmp511 = *$tmp510;
frost$core$Int64 $tmp512 = *(&local20);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Match.frost:116:91
frost$core$Int64 $tmp513 = (frost$core$Int64) {0u};
int64_t $tmp514 = $tmp512.value;
int64_t $tmp515 = $tmp513.value;
bool $tmp516 = $tmp514 >= $tmp515;
frost$core$Bit $tmp517 = (frost$core$Bit) {$tmp516};
bool $tmp518 = $tmp517.value;
if ($tmp518) goto block61; else goto block60;
block61:;
ITable* $tmp519 = ((frost$collections$CollectionView*) $tmp511)->$class->itable;
while ($tmp519->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp519 = $tmp519->next;
}
$fn521 $tmp520 = $tmp519->methods[0];
frost$core$Int64 $tmp522 = $tmp520(((frost$collections$CollectionView*) $tmp511));
int64_t $tmp523 = $tmp512.value;
int64_t $tmp524 = $tmp522.value;
bool $tmp525 = $tmp523 < $tmp524;
frost$core$Bit $tmp526 = (frost$core$Bit) {$tmp525};
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp528 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s529, $tmp528, &$s530);
abort(); // unreachable
block59:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp531 = &$tmp511->data;
frost$core$Object** $tmp532 = *$tmp531;
int64_t $tmp533 = $tmp512.value;
frost$core$Object* $tmp534 = $tmp532[$tmp533];
frost$core$Frost$ref$frost$core$Object$Q($tmp534);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp504, $tmp505, $tmp506, ((org$frostlang$frostc$Type*) $tmp534));
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp501, $tmp502, $tmp503, $tmp504);
$fn536 $tmp535 = ($fn536) $tmp500->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp537 = $tmp535($tmp500, $tmp501);
*(&local22) = $tmp537;
frost$core$Frost$unref$frost$core$Object$Q($tmp534);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:117
org$frostlang$frostc$FixedArray* $tmp538 = *(&local14);
frost$core$Int64 $tmp539 = *(&local20);
frost$core$Object* $tmp540 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp538, $tmp539);
frost$core$String* $tmp541 = org$frostlang$frostc$Compiler$getText$org$frostlang$frostc$ASTNode$R$frost$core$String$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp540));
*(&local23) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
frost$core$String* $tmp542 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
*(&local23) = $tmp541;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
frost$core$Frost$unref$frost$core$Object$Q($tmp540);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:118
frost$core$String* $tmp543 = *(&local23);
frost$core$Bit $tmp544 = (frost$core$Bit) {$tmp543 != NULL};
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block64; else goto block63;
block64:;
frost$core$String* $tmp546 = *(&local23);
frost$core$Bit $tmp547 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp546, &$s548);
bool $tmp549 = $tmp547.value;
if ($tmp549) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:119
frost$core$String* $tmp550 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
*(&local23) = ((frost$core$String*) NULL);
goto block55;
block63:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:121
*(&local24) = ((org$frostlang$frostc$Compiler$Target*) NULL);
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:123
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp551 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp551, param0);
*(&local25) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp552 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
*(&local25) = $tmp551;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:124
org$frostlang$frostc$FixedArray* $tmp553 = *(&local14);
frost$core$Int64 $tmp554 = *(&local20);
frost$core$Object* $tmp555 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp553, $tmp554);
frost$core$Int64 $tmp556 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Variable.Kind from Match.frost:125:74
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int64* $tmp557 = &(&local27)->$rawValue;
*$tmp557 = $tmp556;
org$frostlang$frostc$Variable$Kind $tmp558 = *(&local27);
*(&local26) = $tmp558;
org$frostlang$frostc$Variable$Kind $tmp559 = *(&local26);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp560 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp561 = (frost$core$Int64) {26u};
org$frostlang$frostc$Position $tmp562 = *(&local12);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp563 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp564 = (frost$core$Int64) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp565 = *(&local22);
org$frostlang$frostc$Pair* $tmp566 = *(&local15);
frost$core$Object** $tmp567 = &$tmp566->second;
frost$core$Object* $tmp568 = *$tmp567;
frost$collections$Array** $tmp569 = &((org$frostlang$frostc$ChoiceCase*) $tmp568)->fields;
frost$collections$Array* $tmp570 = *$tmp569;
frost$core$Int64 $tmp571 = *(&local20);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Match.frost:128:89
frost$core$Int64 $tmp572 = (frost$core$Int64) {0u};
int64_t $tmp573 = $tmp571.value;
int64_t $tmp574 = $tmp572.value;
bool $tmp575 = $tmp573 >= $tmp574;
frost$core$Bit $tmp576 = (frost$core$Bit) {$tmp575};
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block69; else goto block68;
block69:;
ITable* $tmp578 = ((frost$collections$CollectionView*) $tmp570)->$class->itable;
while ($tmp578->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp578 = $tmp578->next;
}
$fn580 $tmp579 = $tmp578->methods[0];
frost$core$Int64 $tmp581 = $tmp579(((frost$collections$CollectionView*) $tmp570));
int64_t $tmp582 = $tmp571.value;
int64_t $tmp583 = $tmp581.value;
bool $tmp584 = $tmp582 < $tmp583;
frost$core$Bit $tmp585 = (frost$core$Bit) {$tmp584};
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block67; else goto block68;
block68:;
frost$core$Int64 $tmp587 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s588, $tmp587, &$s589);
abort(); // unreachable
block67:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp590 = &$tmp570->data;
frost$core$Object** $tmp591 = *$tmp590;
int64_t $tmp592 = $tmp571.value;
frost$core$Object* $tmp593 = $tmp591[$tmp592];
frost$core$Frost$ref$frost$core$Object$Q($tmp593);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp563, $tmp564, $tmp565, ((org$frostlang$frostc$Type*) $tmp593));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp560, $tmp561, $tmp562, $tmp563);
org$frostlang$frostc$Compiler$Target* $tmp594 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Compiler$Target$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp555), $tmp559, $tmp560, ((org$frostlang$frostc$Type*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
org$frostlang$frostc$Compiler$Target* $tmp595 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
*(&local24) = $tmp594;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$core$Frost$unref$frost$core$Object$Q($tmp593);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
frost$core$Frost$unref$frost$core$Object$Q($tmp555);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:130
org$frostlang$frostc$Compiler$Target* $tmp596 = *(&local24);
frost$core$Bit $tmp597 = (frost$core$Bit) {$tmp596 == NULL};
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block70; else goto block71;
block70:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:131
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp599 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
*(&local25) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$Compiler$Target* $tmp600 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
*(&local24) = ((org$frostlang$frostc$Compiler$Target*) NULL);
frost$core$String* $tmp601 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
*(&local23) = ((frost$core$String*) NULL);
org$frostlang$frostc$IR$Value* $tmp602 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp603 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp604 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp605 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp606 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp607 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp608 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp609 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp610 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp611 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block71:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:133
org$frostlang$frostc$FixedArray* $tmp612 = *(&local14);
frost$core$Int64 $tmp613 = *(&local20);
frost$core$Object* $tmp614 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp612, $tmp613);
$fn616 $tmp615 = ($fn616) ((org$frostlang$frostc$ASTNode*) $tmp614)->$class->vtable[2];
org$frostlang$frostc$Position $tmp617 = $tmp615(((org$frostlang$frostc$ASTNode*) $tmp614));
org$frostlang$frostc$Compiler$Target* $tmp618 = *(&local24);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp619 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp620 = (frost$core$Int64) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp621 = *(&local22);
org$frostlang$frostc$Pair* $tmp622 = *(&local15);
frost$core$Object** $tmp623 = &$tmp622->second;
frost$core$Object* $tmp624 = *$tmp623;
frost$collections$Array** $tmp625 = &((org$frostlang$frostc$ChoiceCase*) $tmp624)->fields;
frost$collections$Array* $tmp626 = *$tmp625;
frost$core$Int64 $tmp627 = *(&local20);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Match.frost:135:96
frost$core$Int64 $tmp628 = (frost$core$Int64) {0u};
int64_t $tmp629 = $tmp627.value;
int64_t $tmp630 = $tmp628.value;
bool $tmp631 = $tmp629 >= $tmp630;
frost$core$Bit $tmp632 = (frost$core$Bit) {$tmp631};
bool $tmp633 = $tmp632.value;
if ($tmp633) goto block75; else goto block74;
block75:;
ITable* $tmp634 = ((frost$collections$CollectionView*) $tmp626)->$class->itable;
while ($tmp634->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp634 = $tmp634->next;
}
$fn636 $tmp635 = $tmp634->methods[0];
frost$core$Int64 $tmp637 = $tmp635(((frost$collections$CollectionView*) $tmp626));
int64_t $tmp638 = $tmp627.value;
int64_t $tmp639 = $tmp637.value;
bool $tmp640 = $tmp638 < $tmp639;
frost$core$Bit $tmp641 = (frost$core$Bit) {$tmp640};
bool $tmp642 = $tmp641.value;
if ($tmp642) goto block73; else goto block74;
block74:;
frost$core$Int64 $tmp643 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s644, $tmp643, &$s645);
abort(); // unreachable
block73:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp646 = &$tmp626->data;
frost$core$Object** $tmp647 = *$tmp646;
int64_t $tmp648 = $tmp627.value;
frost$core$Object* $tmp649 = $tmp647[$tmp648];
frost$core$Frost$ref$frost$core$Object$Q($tmp649);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp619, $tmp620, $tmp621, ((org$frostlang$frostc$Type*) $tmp649));
org$frostlang$frostc$Compiler$compileStore$org$frostlang$frostc$Position$org$frostlang$frostc$Compiler$Target$org$frostlang$frostc$IR$Value(param0, $tmp617, $tmp618, $tmp619);
frost$core$Frost$unref$frost$core$Object$Q($tmp649);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
frost$core$Frost$unref$frost$core$Object$Q($tmp614);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp650 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
*(&local25) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:137
org$frostlang$frostc$Compiler$Target* $tmp651 = *(&local24);
org$frostlang$frostc$Compiler$createScopes$org$frostlang$frostc$Compiler$Target(param0, $tmp651);
org$frostlang$frostc$Compiler$Target* $tmp652 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
*(&local24) = ((org$frostlang$frostc$Compiler$Target*) NULL);
frost$core$String* $tmp653 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
*(&local23) = ((frost$core$String*) NULL);
goto block55;
block55:;
frost$core$Int64 $tmp654 = *(&local20);
int64_t $tmp655 = $tmp473.value;
int64_t $tmp656 = $tmp654.value;
int64_t $tmp657 = $tmp655 - $tmp656;
frost$core$Int64 $tmp658 = (frost$core$Int64) {$tmp657};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp659 = $tmp658.value;
frost$core$UInt64 $tmp660 = (frost$core$UInt64) {((uint64_t) $tmp659)};
if ($tmp475) goto block78; else goto block79;
block78:;
uint64_t $tmp661 = $tmp660.value;
uint64_t $tmp662 = $tmp478.value;
bool $tmp663 = $tmp661 >= $tmp662;
frost$core$Bit $tmp664 = (frost$core$Bit) {$tmp663};
bool $tmp665 = $tmp664.value;
if ($tmp665) goto block76; else goto block54;
block79:;
uint64_t $tmp666 = $tmp660.value;
uint64_t $tmp667 = $tmp478.value;
bool $tmp668 = $tmp666 > $tmp667;
frost$core$Bit $tmp669 = (frost$core$Bit) {$tmp668};
bool $tmp670 = $tmp669.value;
if ($tmp670) goto block76; else goto block54;
block76:;
int64_t $tmp671 = $tmp654.value;
int64_t $tmp672 = $tmp476.value;
int64_t $tmp673 = $tmp671 + $tmp672;
frost$core$Int64 $tmp674 = (frost$core$Int64) {$tmp673};
*(&local20) = $tmp674;
goto block53;
block54:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:139
org$frostlang$frostc$IR$Value* $tmp675 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp676 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp677 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp678 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp679 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block17;
block33:;
goto block31;
block31:;
org$frostlang$frostc$Pair* $tmp680 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp681 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp682 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block27;
block27:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:144
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:146
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp683 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp683, param0);
*(&local29) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp684 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
*(&local29) = $tmp683;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:147
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:148
org$frostlang$frostc$ASTNode* $tmp685 = *(&local11);
org$frostlang$frostc$Pair* $tmp686 = org$frostlang$frostc$Compiler$getChoiceCase$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Corg$frostlang$frostc$ChoiceCase$GT$Q(param0, $tmp685);
*(&local31) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
org$frostlang$frostc$Pair* $tmp687 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
*(&local31) = $tmp686;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:149
org$frostlang$frostc$Pair* $tmp688 = *(&local31);
frost$core$Bit $tmp689 = (frost$core$Bit) {$tmp688 != NULL};
bool $tmp690 = $tmp689.value;
if ($tmp690) goto block80; else goto block82;
block80:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:150
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp691 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp692 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp691, $tmp692);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp693 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp694 = (frost$core$Int64) {25u};
org$frostlang$frostc$ASTNode* $tmp695 = *(&local11);
$fn697 $tmp696 = ($fn697) $tmp695->$class->vtable[2];
org$frostlang$frostc$Position $tmp698 = $tmp696($tmp695);
org$frostlang$frostc$Pair* $tmp699 = *(&local31);
frost$core$Object** $tmp700 = &$tmp699->second;
frost$core$Object* $tmp701 = *$tmp700;
frost$core$Int64* $tmp702 = &((org$frostlang$frostc$ChoiceCase*) $tmp701)->rawValue;
frost$core$Int64 $tmp703 = *$tmp702;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Match.frost:151:63
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp704 = $tmp703.value;
frost$core$UInt64 $tmp705 = (frost$core$UInt64) {((uint64_t) $tmp704)};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp693, $tmp694, $tmp698, $tmp705);
frost$collections$Array$add$frost$collections$Array$T($tmp691, ((frost$core$Object*) $tmp693));
*(&local32) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
frost$collections$Array* $tmp706 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
*(&local32) = $tmp691;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:152
org$frostlang$frostc$ASTNode* $tmp707 = *(&local11);
$fn709 $tmp708 = ($fn709) $tmp707->$class->vtable[2];
org$frostlang$frostc$Position $tmp710 = $tmp708($tmp707);
frost$collections$Array* $tmp711 = *(&local32);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp712 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp713 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type** $tmp714 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp715 = *$tmp714;
frost$core$Bit $tmp716 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp712, $tmp713, $tmp715, $tmp716);
org$frostlang$frostc$IR$Value* $tmp717 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp710, param4, &$s718, ((frost$collections$ListView*) $tmp711), $tmp712);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
org$frostlang$frostc$IR$Value* $tmp719 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
*(&local30) = $tmp717;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:154
org$frostlang$frostc$IR$Value* $tmp720 = *(&local30);
frost$core$Bit $tmp721 = (frost$core$Bit) {$tmp720 == NULL};
bool $tmp722 = $tmp721.value;
if ($tmp722) goto block84; else goto block85;
block84:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:155
frost$collections$Array* $tmp723 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local32) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp724 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local31) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp725 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp726 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
*(&local29) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp727 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp728 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp729 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp730 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp731 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp732 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp733 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block85:;
frost$collections$Array* $tmp734 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
*(&local32) = ((frost$collections$Array*) NULL);
goto block81;
block82:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:159
org$frostlang$frostc$ASTNode* $tmp735 = *(&local11);
$fn737 $tmp736 = ($fn737) $tmp735->$class->vtable[2];
org$frostlang$frostc$Position $tmp738 = $tmp736($tmp735);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp739 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp740 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp739, $tmp740);
org$frostlang$frostc$ASTNode* $tmp741 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp739, ((frost$core$Object*) $tmp741));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp742 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp743 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type** $tmp744 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp745 = *$tmp744;
frost$core$Bit $tmp746 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp742, $tmp743, $tmp745, $tmp746);
org$frostlang$frostc$IR$Value* $tmp747 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp738, param2, &$s748, ((frost$collections$ListView*) $tmp739), $tmp742);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
org$frostlang$frostc$IR$Value* $tmp749 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
*(&local30) = $tmp747;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:161
org$frostlang$frostc$IR$Value* $tmp750 = *(&local30);
frost$core$Bit $tmp751 = (frost$core$Bit) {$tmp750 == NULL};
bool $tmp752 = $tmp751.value;
if ($tmp752) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:162
org$frostlang$frostc$Pair* $tmp753 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
*(&local31) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp754 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp755 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local29) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp756 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp757 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp758 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp759 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp760 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp761 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp762 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block87:;
goto block81;
block81:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:165
org$frostlang$frostc$Position $tmp763 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp764 = *(&local30);
org$frostlang$frostc$IR$Value* $tmp765 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, $tmp763, $tmp764);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
org$frostlang$frostc$IR$Value* $tmp766 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
*(&local28) = $tmp765;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
org$frostlang$frostc$Pair* $tmp767 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
*(&local31) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp768 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp769 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
*(&local29) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:167
org$frostlang$frostc$IR* $tmp770 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp771 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp772 = (frost$core$Int64) {5u};
org$frostlang$frostc$Position $tmp773 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp774 = *(&local28);
org$frostlang$frostc$IR$Block$ID $tmp775 = *(&local9);
org$frostlang$frostc$IR$Block$ID $tmp776 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp771, $tmp772, $tmp773, $tmp774, $tmp775, $tmp776);
$fn778 $tmp777 = ($fn778) $tmp770->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp779 = $tmp777($tmp770, $tmp771);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
org$frostlang$frostc$IR$Value* $tmp780 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp781 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block17;
block17:;
frost$core$Int64 $tmp782 = *(&local10);
int64_t $tmp783 = $tmp140.value;
int64_t $tmp784 = $tmp782.value;
int64_t $tmp785 = $tmp783 - $tmp784;
frost$core$Int64 $tmp786 = (frost$core$Int64) {$tmp785};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp787 = $tmp786.value;
frost$core$UInt64 $tmp788 = (frost$core$UInt64) {((uint64_t) $tmp787)};
if ($tmp142) goto block90; else goto block91;
block90:;
uint64_t $tmp789 = $tmp788.value;
uint64_t $tmp790 = $tmp145.value;
bool $tmp791 = $tmp789 >= $tmp790;
frost$core$Bit $tmp792 = (frost$core$Bit) {$tmp791};
bool $tmp793 = $tmp792.value;
if ($tmp793) goto block88; else goto block16;
block91:;
uint64_t $tmp794 = $tmp788.value;
uint64_t $tmp795 = $tmp145.value;
bool $tmp796 = $tmp794 > $tmp795;
frost$core$Bit $tmp797 = (frost$core$Bit) {$tmp796};
bool $tmp798 = $tmp797.value;
if ($tmp798) goto block88; else goto block16;
block88:;
int64_t $tmp799 = $tmp782.value;
int64_t $tmp800 = $tmp143.value;
int64_t $tmp801 = $tmp799 + $tmp800;
frost$core$Int64 $tmp802 = (frost$core$Int64) {$tmp801};
*(&local10) = $tmp802;
goto block15;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:170
org$frostlang$frostc$IR* $tmp803 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp804 = *(&local9);
$fn806 $tmp805 = ($fn806) $tmp803->$class->vtable[4];
$tmp805($tmp803, $tmp804);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:171
org$frostlang$frostc$FixedArray* $tmp807 = *(&local7);
ITable* $tmp808 = ((frost$collections$Iterable*) $tmp807)->$class->itable;
while ($tmp808->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp808 = $tmp808->next;
}
$fn810 $tmp809 = $tmp808->methods[0];
frost$collections$Iterator* $tmp811 = $tmp809(((frost$collections$Iterable*) $tmp807));
goto block92;
block92:;
ITable* $tmp812 = $tmp811->$class->itable;
while ($tmp812->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp812 = $tmp812->next;
}
$fn814 $tmp813 = $tmp812->methods[0];
frost$core$Bit $tmp815 = $tmp813($tmp811);
bool $tmp816 = $tmp815.value;
if ($tmp816) goto block94; else goto block93;
block93:;
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp817 = $tmp811->$class->itable;
while ($tmp817->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp817 = $tmp817->next;
}
$fn819 $tmp818 = $tmp817->methods[1];
frost$core$Object* $tmp820 = $tmp818($tmp811);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp820)));
org$frostlang$frostc$ASTNode* $tmp821 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
*(&local33) = ((org$frostlang$frostc$ASTNode*) $tmp820);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:172
org$frostlang$frostc$ASTNode* $tmp822 = *(&local33);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp822);
frost$core$Frost$unref$frost$core$Object$Q($tmp820);
org$frostlang$frostc$ASTNode* $tmp823 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block92;
block94:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
org$frostlang$frostc$Compiler$AutoScope* $tmp824 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:175
org$frostlang$frostc$IR* $tmp825 = *(&local0);
$fn827 $tmp826 = ($fn827) $tmp825->$class->vtable[5];
frost$core$Bit $tmp828 = $tmp826($tmp825);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Match.frost:175:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp829 = $tmp828.value;
bool $tmp830 = !$tmp829;
frost$core$Bit $tmp831 = (frost$core$Bit) {$tmp830};
bool $tmp832 = $tmp831.value;
if ($tmp832) goto block95; else goto block96;
block95:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:176
org$frostlang$frostc$IR* $tmp833 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp834 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp835 = (frost$core$Int64) {1u};
org$frostlang$frostc$Position $tmp836 = *(&local5);
org$frostlang$frostc$IR$Block$ID $tmp837 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp834, $tmp835, $tmp836, $tmp837);
$fn839 $tmp838 = ($fn839) $tmp833->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp840 = $tmp838($tmp833, $tmp834);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
goto block96;
block96:;
org$frostlang$frostc$FixedArray* $tmp841 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp842 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp843 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Int64 $tmp844 = *(&local3);
int64_t $tmp845 = $tmp88.value;
int64_t $tmp846 = $tmp844.value;
int64_t $tmp847 = $tmp845 - $tmp846;
frost$core$Int64 $tmp848 = (frost$core$Int64) {$tmp847};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp849 = $tmp848.value;
frost$core$UInt64 $tmp850 = (frost$core$UInt64) {((uint64_t) $tmp849)};
if ($tmp90) goto block100; else goto block101;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:180
frost$core$Int64 $tmp851 = (frost$core$Int64) {180u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s852, $tmp851);
abort(); // unreachable
block100:;
uint64_t $tmp853 = $tmp850.value;
uint64_t $tmp854 = $tmp93.value;
bool $tmp855 = $tmp853 >= $tmp854;
frost$core$Bit $tmp856 = (frost$core$Bit) {$tmp855};
bool $tmp857 = $tmp856.value;
if ($tmp857) goto block98; else goto block6;
block101:;
uint64_t $tmp858 = $tmp850.value;
uint64_t $tmp859 = $tmp93.value;
bool $tmp860 = $tmp858 > $tmp859;
frost$core$Bit $tmp861 = (frost$core$Bit) {$tmp860};
bool $tmp862 = $tmp861.value;
if ($tmp862) goto block98; else goto block6;
block98:;
int64_t $tmp863 = $tmp844.value;
int64_t $tmp864 = $tmp91.value;
int64_t $tmp865 = $tmp863 + $tmp864;
frost$core$Int64 $tmp866 = (frost$core$Int64) {$tmp865};
*(&local3) = $tmp866;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:184
frost$core$Bit $tmp867 = (frost$core$Bit) {param6 != NULL};
bool $tmp868 = $tmp867.value;
if ($tmp868) goto block102; else goto block103;
block102:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:186
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp869 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp869, param0);
*(&local34) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
org$frostlang$frostc$Compiler$AutoScope* $tmp870 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
*(&local34) = $tmp869;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:187
org$frostlang$frostc$IR* $tmp871 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp872 = *(&local2);
$fn874 $tmp873 = ($fn874) $tmp871->$class->vtable[4];
$tmp873($tmp871, $tmp872);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:188
ITable* $tmp875 = ((frost$collections$Iterable*) param6)->$class->itable;
while ($tmp875->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp875 = $tmp875->next;
}
$fn877 $tmp876 = $tmp875->methods[0];
frost$collections$Iterator* $tmp878 = $tmp876(((frost$collections$Iterable*) param6));
goto block104;
block104:;
ITable* $tmp879 = $tmp878->$class->itable;
while ($tmp879->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp879 = $tmp879->next;
}
$fn881 $tmp880 = $tmp879->methods[0];
frost$core$Bit $tmp882 = $tmp880($tmp878);
bool $tmp883 = $tmp882.value;
if ($tmp883) goto block106; else goto block105;
block105:;
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp884 = $tmp878->$class->itable;
while ($tmp884->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp884 = $tmp884->next;
}
$fn886 $tmp885 = $tmp884->methods[1];
frost$core$Object* $tmp887 = $tmp885($tmp878);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp887)));
org$frostlang$frostc$ASTNode* $tmp888 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
*(&local35) = ((org$frostlang$frostc$ASTNode*) $tmp887);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:189
org$frostlang$frostc$ASTNode* $tmp889 = *(&local35);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp889);
frost$core$Frost$unref$frost$core$Object$Q($tmp887);
org$frostlang$frostc$ASTNode* $tmp890 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block104;
block106:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
org$frostlang$frostc$Compiler$AutoScope* $tmp891 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
*(&local34) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:192
org$frostlang$frostc$IR* $tmp892 = *(&local0);
$fn894 $tmp893 = ($fn894) $tmp892->$class->vtable[5];
frost$core$Bit $tmp895 = $tmp893($tmp892);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Match.frost:192:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp896 = $tmp895.value;
bool $tmp897 = !$tmp896;
frost$core$Bit $tmp898 = (frost$core$Bit) {$tmp897};
bool $tmp899 = $tmp898.value;
if ($tmp899) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:193
org$frostlang$frostc$IR* $tmp900 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp901 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp902 = (frost$core$Int64) {1u};
org$frostlang$frostc$IR$Block$ID $tmp903 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp901, $tmp902, param1, $tmp903);
$fn905 $tmp904 = ($fn905) $tmp900->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp906 = $tmp904($tmp900, $tmp901);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
goto block108;
block108:;
goto block103;
block103:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:196
org$frostlang$frostc$IR* $tmp907 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp908 = *(&local1);
$fn910 $tmp909 = ($fn910) $tmp907->$class->vtable[4];
$tmp909($tmp907, $tmp908);
org$frostlang$frostc$IR* $tmp911 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$Match$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$FixedArray* param4) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
org$frostlang$frostc$ClassDecl* local2 = NULL;
org$frostlang$frostc$IR$Value* local3 = NULL;
org$frostlang$frostc$ClassDecl$Kind local4;
org$frostlang$frostc$ClassDecl$Kind local5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:202
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp912 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp913 = (frost$core$Int64) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp912, $tmp913);
org$frostlang$frostc$IR$Value* $tmp914 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp912);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
org$frostlang$frostc$IR$Value* $tmp915 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
*(&local0) = $tmp914;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:203
org$frostlang$frostc$IR$Value* $tmp916 = *(&local0);
frost$core$Bit $tmp917 = (frost$core$Bit) {$tmp916 == NULL};
bool $tmp918 = $tmp917.value;
if ($tmp918) goto block1; else goto block3;
block3:;
ITable* $tmp919 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp919->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp919 = $tmp919->next;
}
$fn921 $tmp920 = $tmp919->methods[0];
frost$core$Int64 $tmp922 = $tmp920(((frost$collections$CollectionView*) param3));
frost$core$Int64 $tmp923 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Match.frost:203:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp924 = $tmp922.value;
int64_t $tmp925 = $tmp923.value;
bool $tmp926 = $tmp924 == $tmp925;
frost$core$Bit $tmp927 = (frost$core$Bit) {$tmp926};
bool $tmp928 = $tmp927.value;
if ($tmp928) goto block4; else goto block2;
block4:;
frost$core$Bit $tmp929 = (frost$core$Bit) {param4 == NULL};
bool $tmp930 = $tmp929.value;
if ($tmp930) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:204
org$frostlang$frostc$IR$Value* $tmp931 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:206
org$frostlang$frostc$IR$Value* $tmp932 = *(&local0);
$fn934 $tmp933 = ($fn934) $tmp932->$class->vtable[2];
org$frostlang$frostc$Type* $tmp935 = $tmp933($tmp932);
org$frostlang$frostc$ClassDecl* $tmp936 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp935);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
org$frostlang$frostc$ClassDecl* $tmp937 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
*(&local1) = $tmp936;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:207
org$frostlang$frostc$ClassDecl* $tmp938 = *(&local1);
frost$core$Bit $tmp939 = (frost$core$Bit) {$tmp938 == NULL};
bool $tmp940 = $tmp939.value;
if ($tmp940) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:208
org$frostlang$frostc$ClassDecl* $tmp941 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp942 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:210
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp943 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:211
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:212
org$frostlang$frostc$ClassDecl* $tmp944 = *(&local1);
org$frostlang$frostc$ClassDecl$Kind* $tmp945 = &$tmp944->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp946 = *$tmp945;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp947;
$tmp947 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp947->value = $tmp946;
frost$core$Int64 $tmp948 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from Match.frost:212:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp949 = &(&local5)->$rawValue;
*$tmp949 = $tmp948;
org$frostlang$frostc$ClassDecl$Kind $tmp950 = *(&local5);
*(&local4) = $tmp950;
org$frostlang$frostc$ClassDecl$Kind $tmp951 = *(&local4);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp952;
$tmp952 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp952->value = $tmp951;
ITable* $tmp953 = ((frost$core$Equatable*) $tmp947)->$class->itable;
while ($tmp953->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp953 = $tmp953->next;
}
$fn955 $tmp954 = $tmp953->methods[0];
frost$core$Bit $tmp956 = $tmp954(((frost$core$Equatable*) $tmp947), ((frost$core$Equatable*) $tmp952));
bool $tmp957 = $tmp956.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp952)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp947)));
if ($tmp957) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:213
org$frostlang$frostc$IR$Value* $tmp958 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp959 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp958, &$s960);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
org$frostlang$frostc$IR$Value* $tmp961 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
*(&local3) = $tmp959;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:215
org$frostlang$frostc$ClassDecl* $tmp962 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
org$frostlang$frostc$ClassDecl* $tmp963 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
*(&local2) = $tmp962;
goto block9;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:217
org$frostlang$frostc$ClassDecl* $tmp964 = *(&local1);
org$frostlang$frostc$SymbolTable* $tmp965 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp964);
org$frostlang$frostc$Symbol* $tmp966 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp965, &$s967);
frost$core$Bit $tmp968 = (frost$core$Bit) {$tmp966 == NULL};
bool $tmp969 = $tmp968.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
if ($tmp969) goto block12; else goto block14;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:218
$fn971 $tmp970 = ($fn971) param2->$class->vtable[2];
org$frostlang$frostc$Position $tmp972 = $tmp970(param2);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp972, &$s973);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:219
org$frostlang$frostc$IR$Value* $tmp974 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp975 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp976 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp977 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block14:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:222
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp978 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:224
org$frostlang$frostc$IR$Value* $tmp979 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp980 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp981 = *(&local3);
org$frostlang$frostc$statement$Match$compileChainedIfMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0, param1, $tmp979, $tmp980, $tmp981, param3, param4);
org$frostlang$frostc$IR$Value* $tmp982 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp983 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp984 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp985 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$statement$Match$init(org$frostlang$frostc$statement$Match* param0) {

return;

}
void org$frostlang$frostc$statement$Match$cleanup(org$frostlang$frostc$statement$Match* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/statement/Match.frost:24
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

