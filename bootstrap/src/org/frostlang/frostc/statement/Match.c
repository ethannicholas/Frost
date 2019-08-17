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
#include "frost/core/Int.h"
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
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Equatable.h"
#include "frost/core/Formattable.h"
#include "frost/core/UInt64.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/core/Int64.h"
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
typedef frost$core$Int (*$fn54)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn72)(org$frostlang$frostc$IR*, frost$core$String*);
typedef frost$core$Int (*$fn83)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn126)(org$frostlang$frostc$IR*, frost$core$String*);
typedef frost$core$Int (*$fn133)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn162)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn168)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int (*$fn173)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn188)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn204)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$Position (*$fn237)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Int (*$fn247)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn271)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn280)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn292)(frost$core$Object*);
typedef frost$core$Int (*$fn307)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn311)(frost$core$Object*);
typedef frost$core$Int (*$fn321)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn331)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Int (*$fn344)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn348)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn364)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn367)(frost$core$Object*);
typedef org$frostlang$frostc$Position (*$fn411)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn423)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn454)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn459)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int (*$fn464)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn492)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int (*$fn515)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn531)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int (*$fn575)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn612)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Int (*$fn632)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn692)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn704)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn732)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn773)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn799)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn803)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn807)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn812)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn820)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn832)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn865)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn868)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn872)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn877)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn885)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn896)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn901)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int (*$fn912)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn925)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn946)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn962)(org$frostlang$frostc$ASTNode*);

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
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x65\x73\x74\x20\x73\x75\x63\x63\x65\x73\x73", 12, -1909962622798097854, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x74\x63\x68", 5, -4341501217981328394, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x73\x74\x72\x75\x63\x74\x75\x72\x69\x6e\x67\x20\x63\x68\x6f\x69\x63\x65\x20\x27\x77\x68\x65\x6e\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x74\x6f\x67\x65\x74\x68\x65\x72\x20\x77\x69\x74\x68\x20", 57, -9117856006465956354, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x74\x68\x65\x72\x20\x27\x77\x68\x65\x6e\x27\x20\x63\x6f\x6d\x70\x61\x72\x69\x73\x6f\x6e\x73", 24, -6457233602356944489, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x27", 8, -1761804843643209985, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20", 2, 557168754375928562, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x71\x75\x69\x72\x65\x73\x20", 9, 3024289352992644111, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c\x73", 2, 640440267522026072, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x61\x72\x67\x75\x6d\x65\x6e\x74", 9, -7281427288413514724, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 10, 6826161892368392120, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s372 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x69\x73\x20", 5, 3952076887842184258, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 19, -1825473479368175733, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s390 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s392 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d", 1, -5808605251665550904, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s524 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s543 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s583 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s640 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s713 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d", 1, -5808605251665550904, NULL };
static frost$core$String $s743 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d", 1, -5808605251665550904, NULL };
static frost$core$String $s843 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s951 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, -2729473888161922992, NULL };
static frost$core$String $s958 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d", 1, -5808605251665550904, NULL };
static frost$core$String $s964 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27\x20\x76\x61\x6c\x75\x65\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x64\x65\x66\x69\x6e\x65\x20\x74\x68\x65\x20\x27\x3d\x27\x20\x6f\x70\x65\x72\x61\x74\x6f\x72", 46, -204752271840210608, NULL };

frost$core$Bit org$frostlang$frostc$statement$Match$checkChoiceMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ChoiceCase$Q$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$R$frost$core$Bit(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ChoiceCase* param2, org$frostlang$frostc$ClassDecl* param3, org$frostlang$frostc$IR$Value* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:29
frost$core$Bit $tmp2 = (frost$core$Bit) {param2 == NULL};
bool $tmp3 = $tmp2.value;
if ($tmp3) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:30
frost$core$Bit $tmp4 = (frost$core$Bit) {false};
return $tmp4;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:32
frost$core$Bit $tmp5 = (frost$core$Bit) {param3 == NULL};
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:33
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:33:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:34
frost$core$Bit $tmp23 = (frost$core$Bit) {false};
return $tmp23;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:36
frost$core$Weak** $tmp24 = &param2->owner;
frost$core$Weak* $tmp25 = *$tmp24;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Match.frost:36:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp26 = &$tmp25->_valid;
frost$core$Bit $tmp27 = *$tmp26;
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block11; else goto block12;
block12:;
frost$core$Int $tmp29 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s30, $tmp29);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp31 = &$tmp25->value;
frost$core$Object* $tmp32 = *$tmp31;
frost$core$Frost$ref$frost$core$Object$Q($tmp32);
bool $tmp33 = ((org$frostlang$frostc$ClassDecl*) $tmp32) != param3;
frost$core$Bit $tmp34 = (frost$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp32);
if ($tmp35) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:37
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:37:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:39
frost$core$Bit $tmp50 = (frost$core$Bit) {false};
return $tmp50;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:41
frost$core$Bit $tmp51 = (frost$core$Bit) {true};
return $tmp51;

}
void org$frostlang$frostc$statement$Match$compileChainedIfMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$ClassDecl* param3, org$frostlang$frostc$IR$Value* param4, org$frostlang$frostc$FixedArray* param5, org$frostlang$frostc$FixedArray* param6) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
org$frostlang$frostc$IR$Block$ID local2;
frost$core$Int local3;
org$frostlang$frostc$ASTNode* local4 = NULL;
org$frostlang$frostc$Position local5;
org$frostlang$frostc$FixedArray* local6 = NULL;
org$frostlang$frostc$FixedArray* local7 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local8 = NULL;
org$frostlang$frostc$IR$Block$ID local9;
frost$core$Int local10;
org$frostlang$frostc$ASTNode* local11 = NULL;
org$frostlang$frostc$Position local12;
org$frostlang$frostc$ASTNode* local13 = NULL;
org$frostlang$frostc$FixedArray* local14 = NULL;
org$frostlang$frostc$Pair* local15 = NULL;
org$frostlang$frostc$IR$Value* local16 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local17 = NULL;
frost$collections$Array* local18 = NULL;
org$frostlang$frostc$IR$Value* local19 = NULL;
frost$core$Int local20;
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
frost$core$Int $tmp55 = $tmp53(((frost$collections$CollectionView*) param5));
frost$core$Int $tmp56 = (frost$core$Int) {0u};
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
frost$core$Int $tmp64 = (frost$core$Int) {47u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s65, $tmp64, &$s66);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:50
org$frostlang$frostc$IR** $tmp67 = &param0->ir;
org$frostlang$frostc$IR* $tmp68 = *$tmp67;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
org$frostlang$frostc$IR* $tmp69 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
*(&local0) = $tmp68;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:51
org$frostlang$frostc$IR* $tmp70 = *(&local0);
$fn72 $tmp71 = ($fn72) $tmp70->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp73 = $tmp71($tmp70, &$s74);
*(&local1) = $tmp73;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:52
org$frostlang$frostc$IR* $tmp75 = *(&local0);
org$frostlang$frostc$IR$Block** $tmp76 = &$tmp75->currentBlock;
org$frostlang$frostc$IR$Block* $tmp77 = *$tmp76;
org$frostlang$frostc$IR$Block$ID* $tmp78 = &$tmp77->id;
org$frostlang$frostc$IR$Block$ID $tmp79 = *$tmp78;
*(&local2) = $tmp79;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:53
frost$core$Int $tmp80 = (frost$core$Int) {0u};
ITable* $tmp81 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp81->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp81 = $tmp81->next;
}
$fn83 $tmp82 = $tmp81->methods[0];
frost$core$Int $tmp84 = $tmp82(((frost$collections$CollectionView*) param5));
frost$core$Bit $tmp85 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp86 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp80, $tmp84, $tmp85);
frost$core$Int $tmp87 = $tmp86.min;
*(&local3) = $tmp87;
frost$core$Int $tmp88 = $tmp86.max;
frost$core$Bit $tmp89 = $tmp86.inclusive;
bool $tmp90 = $tmp89.value;
frost$core$Int $tmp91 = (frost$core$Int) {1u};
if ($tmp90) goto block7; else goto block8;
block7:;
int64_t $tmp92 = $tmp87.value;
int64_t $tmp93 = $tmp88.value;
bool $tmp94 = $tmp92 <= $tmp93;
frost$core$Bit $tmp95 = (frost$core$Bit) {$tmp94};
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block4; else goto block5;
block8:;
int64_t $tmp97 = $tmp87.value;
int64_t $tmp98 = $tmp88.value;
bool $tmp99 = $tmp97 < $tmp98;
frost$core$Bit $tmp100 = (frost$core$Bit) {$tmp99};
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:54
frost$core$Int $tmp102 = *(&local3);
frost$core$Object* $tmp103 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(param5, $tmp102);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp103)));
org$frostlang$frostc$ASTNode* $tmp104 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp103);
frost$core$Frost$unref$frost$core$Object$Q($tmp103);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:55
org$frostlang$frostc$ASTNode* $tmp105 = *(&local4);
frost$core$Int* $tmp106 = &$tmp105->$rawValue;
frost$core$Int $tmp107 = *$tmp106;
frost$core$Int $tmp108 = (frost$core$Int) {54u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Match.frost:56:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp109 = $tmp107.value;
int64_t $tmp110 = $tmp108.value;
bool $tmp111 = $tmp109 == $tmp110;
frost$core$Bit $tmp112 = (frost$core$Bit) {$tmp111};
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp114 = (org$frostlang$frostc$Position*) ($tmp105->$data + 0);
org$frostlang$frostc$Position $tmp115 = *$tmp114;
*(&local5) = $tmp115;
org$frostlang$frostc$FixedArray** $tmp116 = (org$frostlang$frostc$FixedArray**) ($tmp105->$data + 24);
org$frostlang$frostc$FixedArray* $tmp117 = *$tmp116;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
org$frostlang$frostc$FixedArray* $tmp118 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
*(&local6) = $tmp117;
org$frostlang$frostc$FixedArray** $tmp119 = (org$frostlang$frostc$FixedArray**) ($tmp105->$data + 32);
org$frostlang$frostc$FixedArray* $tmp120 = *$tmp119;
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
org$frostlang$frostc$FixedArray* $tmp121 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
*(&local7) = $tmp120;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:58
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp122 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp122, param0);
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
org$frostlang$frostc$Compiler$AutoScope* $tmp123 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local8) = $tmp122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:59
org$frostlang$frostc$IR* $tmp124 = *(&local0);
$fn126 $tmp125 = ($fn126) $tmp124->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp127 = $tmp125($tmp124, &$s128);
*(&local9) = $tmp127;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:60
frost$core$Int $tmp129 = (frost$core$Int) {0u};
org$frostlang$frostc$FixedArray* $tmp130 = *(&local6);
ITable* $tmp131 = ((frost$collections$CollectionView*) $tmp130)->$class->itable;
while ($tmp131->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp131 = $tmp131->next;
}
$fn133 $tmp132 = $tmp131->methods[0];
frost$core$Int $tmp134 = $tmp132(((frost$collections$CollectionView*) $tmp130));
frost$core$Bit $tmp135 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp136 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp129, $tmp134, $tmp135);
frost$core$Int $tmp137 = $tmp136.min;
*(&local10) = $tmp137;
frost$core$Int $tmp138 = $tmp136.max;
frost$core$Bit $tmp139 = $tmp136.inclusive;
bool $tmp140 = $tmp139.value;
frost$core$Int $tmp141 = (frost$core$Int) {1u};
if ($tmp140) goto block16; else goto block17;
block16:;
int64_t $tmp142 = $tmp137.value;
int64_t $tmp143 = $tmp138.value;
bool $tmp144 = $tmp142 <= $tmp143;
frost$core$Bit $tmp145 = (frost$core$Bit) {$tmp144};
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block13; else goto block14;
block17:;
int64_t $tmp147 = $tmp137.value;
int64_t $tmp148 = $tmp138.value;
bool $tmp149 = $tmp147 < $tmp148;
frost$core$Bit $tmp150 = (frost$core$Bit) {$tmp149};
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:61
org$frostlang$frostc$IR$Block$ID $tmp152 = *(&local2);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp153;
$tmp153 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp153->value = $tmp152;
org$frostlang$frostc$IR* $tmp154 = *(&local0);
org$frostlang$frostc$IR$Block** $tmp155 = &$tmp154->currentBlock;
org$frostlang$frostc$IR$Block* $tmp156 = *$tmp155;
org$frostlang$frostc$IR$Block$ID* $tmp157 = &$tmp156->id;
org$frostlang$frostc$IR$Block$ID $tmp158 = *$tmp157;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp159;
$tmp159 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp159->value = $tmp158;
ITable* $tmp160 = ((frost$core$Equatable*) $tmp153)->$class->itable;
while ($tmp160->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp160 = $tmp160->next;
}
$fn162 $tmp161 = $tmp160->methods[1];
frost$core$Bit $tmp163 = $tmp161(((frost$core$Equatable*) $tmp153), ((frost$core$Equatable*) $tmp159));
bool $tmp164 = $tmp163.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp159)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp153)));
if ($tmp164) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:62
org$frostlang$frostc$IR* $tmp165 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp166 = *(&local2);
$fn168 $tmp167 = ($fn168) $tmp165->$class->vtable[4];
$tmp167($tmp165, $tmp166);
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:64
frost$core$Int $tmp169 = *(&local10);
org$frostlang$frostc$FixedArray* $tmp170 = *(&local6);
ITable* $tmp171 = ((frost$collections$CollectionView*) $tmp170)->$class->itable;
while ($tmp171->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp171 = $tmp171->next;
}
$fn173 $tmp172 = $tmp171->methods[0];
frost$core$Int $tmp174 = $tmp172(((frost$collections$CollectionView*) $tmp170));
frost$core$Int $tmp175 = (frost$core$Int) {1u};
int64_t $tmp176 = $tmp174.value;
int64_t $tmp177 = $tmp175.value;
int64_t $tmp178 = $tmp176 - $tmp177;
frost$core$Int $tmp179 = (frost$core$Int) {$tmp178};
int64_t $tmp180 = $tmp169.value;
int64_t $tmp181 = $tmp179.value;
bool $tmp182 = $tmp180 < $tmp181;
frost$core$Bit $tmp183 = (frost$core$Bit) {$tmp182};
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block20; else goto block24;
block24:;
frost$core$Int $tmp185 = *(&local3);
ITable* $tmp186 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp186->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp186 = $tmp186->next;
}
$fn188 $tmp187 = $tmp186->methods[0];
frost$core$Int $tmp189 = $tmp187(((frost$collections$CollectionView*) param5));
frost$core$Int $tmp190 = (frost$core$Int) {1u};
int64_t $tmp191 = $tmp189.value;
int64_t $tmp192 = $tmp190.value;
int64_t $tmp193 = $tmp191 - $tmp192;
frost$core$Int $tmp194 = (frost$core$Int) {$tmp193};
int64_t $tmp195 = $tmp185.value;
int64_t $tmp196 = $tmp194.value;
bool $tmp197 = $tmp195 < $tmp196;
frost$core$Bit $tmp198 = (frost$core$Bit) {$tmp197};
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block20; else goto block23;
block23:;
frost$core$Bit $tmp200 = (frost$core$Bit) {param6 != NULL};
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block20; else goto block22;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:65
org$frostlang$frostc$IR* $tmp202 = *(&local0);
$fn204 $tmp203 = ($fn204) $tmp202->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp205 = $tmp203($tmp202, &$s206);
*(&local2) = $tmp205;
goto block21;
block22:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:68
org$frostlang$frostc$IR$Block$ID $tmp207 = *(&local1);
*(&local2) = $tmp207;
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:70
org$frostlang$frostc$FixedArray* $tmp208 = *(&local6);
frost$core$Int $tmp209 = *(&local10);
frost$core$Object* $tmp210 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp208, $tmp209);
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp210)));
org$frostlang$frostc$ASTNode* $tmp211 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
*(&local11) = ((org$frostlang$frostc$ASTNode*) $tmp210);
frost$core$Frost$unref$frost$core$Object$Q($tmp210);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:71
org$frostlang$frostc$ASTNode* $tmp212 = *(&local11);
frost$core$Int* $tmp213 = &$tmp212->$rawValue;
frost$core$Int $tmp214 = *$tmp213;
frost$core$Int $tmp215 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Match.frost:72:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp216 = $tmp214.value;
int64_t $tmp217 = $tmp215.value;
bool $tmp218 = $tmp216 == $tmp217;
frost$core$Bit $tmp219 = (frost$core$Bit) {$tmp218};
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block26; else goto block25;
block26:;
org$frostlang$frostc$Position* $tmp221 = (org$frostlang$frostc$Position*) ($tmp212->$data + 0);
org$frostlang$frostc$Position $tmp222 = *$tmp221;
*(&local12) = $tmp222;
org$frostlang$frostc$ASTNode** $tmp223 = (org$frostlang$frostc$ASTNode**) ($tmp212->$data + 24);
org$frostlang$frostc$ASTNode* $tmp224 = *$tmp223;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
org$frostlang$frostc$ASTNode* $tmp225 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
*(&local13) = $tmp224;
org$frostlang$frostc$FixedArray** $tmp226 = (org$frostlang$frostc$FixedArray**) ($tmp212->$data + 32);
org$frostlang$frostc$FixedArray* $tmp227 = *$tmp226;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
org$frostlang$frostc$FixedArray* $tmp228 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
*(&local14) = $tmp227;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:73
org$frostlang$frostc$ASTNode* $tmp229 = *(&local13);
org$frostlang$frostc$Pair* $tmp230 = org$frostlang$frostc$Compiler$getChoiceCase$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Corg$frostlang$frostc$ChoiceCase$GT$Q(param0, $tmp229);
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
org$frostlang$frostc$Pair* $tmp231 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local15) = $tmp230;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:74
org$frostlang$frostc$Pair* $tmp232 = *(&local15);
frost$core$Bit $tmp233 = (frost$core$Bit) {$tmp232 != NULL};
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:75
org$frostlang$frostc$ASTNode* $tmp235 = *(&local13);
$fn237 $tmp236 = ($fn237) $tmp235->$class->vtable[2];
org$frostlang$frostc$Position $tmp238 = $tmp236($tmp235);
org$frostlang$frostc$Pair* $tmp239 = *(&local15);
frost$core$Object** $tmp240 = &$tmp239->second;
frost$core$Object* $tmp241 = *$tmp240;
frost$core$Bit $tmp242 = org$frostlang$frostc$statement$Match$checkChoiceMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ChoiceCase$Q$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, $tmp238, ((org$frostlang$frostc$ChoiceCase*) $tmp241), param3, param2);
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:77
org$frostlang$frostc$FixedArray* $tmp244 = *(&local6);
ITable* $tmp245 = ((frost$collections$CollectionView*) $tmp244)->$class->itable;
while ($tmp245->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp245 = $tmp245->next;
}
$fn247 $tmp246 = $tmp245->methods[0];
frost$core$Int $tmp248 = $tmp246(((frost$collections$CollectionView*) $tmp244));
frost$core$Int $tmp249 = (frost$core$Int) {1u};
int64_t $tmp250 = $tmp248.value;
int64_t $tmp251 = $tmp249.value;
bool $tmp252 = $tmp250 != $tmp251;
frost$core$Bit $tmp253 = (frost$core$Bit) {$tmp252};
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:78
org$frostlang$frostc$Position $tmp255 = *(&local12);
frost$core$String* $tmp256 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s257, &$s258);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp255, $tmp256);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:81
org$frostlang$frostc$Pair* $tmp259 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp260 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp261 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp262 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp263 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp264 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp265 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp266 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp267 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:83
org$frostlang$frostc$FixedArray* $tmp268 = *(&local14);
ITable* $tmp269 = ((frost$collections$CollectionView*) $tmp268)->$class->itable;
while ($tmp269->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp269 = $tmp269->next;
}
$fn271 $tmp270 = $tmp269->methods[0];
frost$core$Int $tmp272 = $tmp270(((frost$collections$CollectionView*) $tmp268));
org$frostlang$frostc$Pair* $tmp273 = *(&local15);
frost$core$Object** $tmp274 = &$tmp273->second;
frost$core$Object* $tmp275 = *$tmp274;
frost$collections$Array** $tmp276 = &((org$frostlang$frostc$ChoiceCase*) $tmp275)->fields;
frost$collections$Array* $tmp277 = *$tmp276;
ITable* $tmp278 = ((frost$collections$CollectionView*) $tmp277)->$class->itable;
while ($tmp278->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp278 = $tmp278->next;
}
$fn280 $tmp279 = $tmp278->methods[0];
frost$core$Int $tmp281 = $tmp279(((frost$collections$CollectionView*) $tmp277));
int64_t $tmp282 = $tmp272.value;
int64_t $tmp283 = $tmp281.value;
bool $tmp284 = $tmp282 != $tmp283;
frost$core$Bit $tmp285 = (frost$core$Bit) {$tmp284};
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:84
org$frostlang$frostc$Position $tmp287 = *(&local12);
org$frostlang$frostc$Pair* $tmp288 = *(&local15);
frost$core$Object** $tmp289 = &$tmp288->second;
frost$core$Object* $tmp290 = *$tmp289;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:84:74
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn292 $tmp291 = ($fn292) ((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp290))->$class->vtable[0];
frost$core$String* $tmp293 = $tmp291(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp290)));
frost$core$String* $tmp294 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s295, $tmp293);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$String* $tmp296 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp294, &$s297);
frost$core$String* $tmp298 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp296, &$s299);
org$frostlang$frostc$Pair* $tmp300 = *(&local15);
frost$core$Object** $tmp301 = &$tmp300->second;
frost$core$Object* $tmp302 = *$tmp301;
frost$collections$Array** $tmp303 = &((org$frostlang$frostc$ChoiceCase*) $tmp302)->fields;
frost$collections$Array* $tmp304 = *$tmp303;
ITable* $tmp305 = ((frost$collections$CollectionView*) $tmp304)->$class->itable;
while ($tmp305->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp305 = $tmp305->next;
}
$fn307 $tmp306 = $tmp305->methods[0];
frost$core$Int $tmp308 = $tmp306(((frost$collections$CollectionView*) $tmp304));
frost$core$Int$wrapper* $tmp309;
$tmp309 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp309->value = $tmp308;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:85:69
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn311 $tmp310 = ($fn311) ((frost$core$Object*) $tmp309)->$class->vtable[0];
frost$core$String* $tmp312 = $tmp310(((frost$core$Object*) $tmp309));
frost$core$String* $tmp313 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp298, $tmp312);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
org$frostlang$frostc$Pair* $tmp314 = *(&local15);
frost$core$Object** $tmp315 = &$tmp314->second;
frost$core$Object* $tmp316 = *$tmp315;
frost$collections$Array** $tmp317 = &((org$frostlang$frostc$ChoiceCase*) $tmp316)->fields;
frost$collections$Array* $tmp318 = *$tmp317;
ITable* $tmp319 = ((frost$collections$CollectionView*) $tmp318)->$class->itable;
while ($tmp319->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp319 = $tmp319->next;
}
$fn321 $tmp320 = $tmp319->methods[0];
frost$core$Int $tmp322 = $tmp320(((frost$collections$CollectionView*) $tmp318));
frost$core$Int $tmp323 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Match.frost:86:92
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp324 = $tmp322.value;
int64_t $tmp325 = $tmp323.value;
bool $tmp326 = $tmp324 == $tmp325;
frost$core$Bit $tmp327 = (frost$core$Bit) {$tmp326};
frost$core$Bit$wrapper* $tmp328;
$tmp328 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp328->value = $tmp327;
ITable* $tmp329 = ((frost$core$Formattable*) $tmp328)->$class->itable;
while ($tmp329->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp329 = $tmp329->next;
}
$fn331 $tmp330 = $tmp329->methods[0];
frost$core$String* $tmp332 = $tmp330(((frost$core$Formattable*) $tmp328), &$s333);
frost$core$String* $tmp334 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s335, $tmp332);
frost$core$String* $tmp336 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp334, &$s337);
frost$core$String* $tmp338 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp313, $tmp336);
frost$core$String* $tmp339 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp338, &$s340);
org$frostlang$frostc$FixedArray* $tmp341 = *(&local14);
ITable* $tmp342 = ((frost$collections$CollectionView*) $tmp341)->$class->itable;
while ($tmp342->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp342 = $tmp342->next;
}
$fn344 $tmp343 = $tmp342->methods[0];
frost$core$Int $tmp345 = $tmp343(((frost$collections$CollectionView*) $tmp341));
frost$core$Int$wrapper* $tmp346;
$tmp346 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp346->value = $tmp345;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:87:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn348 $tmp347 = ($fn348) ((frost$core$Object*) $tmp346)->$class->vtable[0];
frost$core$String* $tmp349 = $tmp347(((frost$core$Object*) $tmp346));
frost$core$String* $tmp350 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp339, $tmp349);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp287, $tmp350);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp328)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:88
org$frostlang$frostc$Pair* $tmp351 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp352 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp353 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp354 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp355 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp356 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp357 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp358 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp359 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:90
frost$core$Bit $tmp360 = (frost$core$Bit) {param4 == NULL};
bool $tmp361 = $tmp360.value;
if ($tmp361) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:91
org$frostlang$frostc$Position $tmp362 = *(&local12);
$fn364 $tmp363 = ($fn364) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp365 = $tmp363(param2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:91:74
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn367 $tmp366 = ($fn367) ((frost$core$Object*) $tmp365)->$class->vtable[0];
frost$core$String* $tmp368 = $tmp366(((frost$core$Object*) $tmp365));
frost$core$String* $tmp369 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s370, $tmp368);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
frost$core$String* $tmp371 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp369, &$s372);
frost$core$String* $tmp373 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp371, &$s374);
org$frostlang$frostc$Pair* $tmp375 = *(&local15);
frost$core$Object** $tmp376 = &$tmp375->second;
frost$core$Object* $tmp377 = *$tmp376;
frost$core$Weak** $tmp378 = &((org$frostlang$frostc$ChoiceCase*) $tmp377)->owner;
frost$core$Weak* $tmp379 = *$tmp378;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Match.frost:93:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp380 = &$tmp379->_valid;
frost$core$Bit $tmp381 = *$tmp380;
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block45; else goto block46;
block46:;
frost$core$Int $tmp383 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s384, $tmp383);
abort(); // unreachable
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp385 = &$tmp379->value;
frost$core$Object* $tmp386 = *$tmp385;
frost$core$Frost$ref$frost$core$Object$Q($tmp386);
frost$core$String** $tmp387 = &((org$frostlang$frostc$ClassDecl*) $tmp386)->name;
frost$core$String* $tmp388 = *$tmp387;
frost$core$String* $tmp389 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s390, $tmp388);
frost$core$String* $tmp391 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp389, &$s392);
frost$core$String* $tmp393 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp373, $tmp391);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp362, $tmp393);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$core$Frost$unref$frost$core$Object$Q($tmp386);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:94
org$frostlang$frostc$Pair* $tmp394 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp395 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp396 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp397 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp398 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp399 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp400 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp401 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp402 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:96
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:98
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp403 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp403, param0);
*(&local17) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp404 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local17) = $tmp403;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:99
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp405 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp406 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp405, $tmp406);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp407 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp408 = (frost$core$Int) {25u};
org$frostlang$frostc$ASTNode* $tmp409 = *(&local13);
$fn411 $tmp410 = ($fn411) $tmp409->$class->vtable[2];
org$frostlang$frostc$Position $tmp412 = $tmp410($tmp409);
org$frostlang$frostc$Pair* $tmp413 = *(&local15);
frost$core$Object** $tmp414 = &$tmp413->second;
frost$core$Object* $tmp415 = *$tmp414;
frost$core$Int* $tmp416 = &((org$frostlang$frostc$ChoiceCase*) $tmp415)->rawValue;
frost$core$Int $tmp417 = *$tmp416;
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Match.frost:100:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
int64_t $tmp418 = $tmp417.value;
frost$core$UInt64 $tmp419 = (frost$core$UInt64) {((uint64_t) $tmp418)};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp407, $tmp408, $tmp412, $tmp419);
frost$collections$Array$add$frost$collections$Array$T($tmp405, ((frost$core$Object*) $tmp407));
*(&local18) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
frost$collections$Array* $tmp420 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
*(&local18) = $tmp405;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:101
org$frostlang$frostc$ASTNode* $tmp421 = *(&local13);
$fn423 $tmp422 = ($fn423) $tmp421->$class->vtable[2];
org$frostlang$frostc$Position $tmp424 = $tmp422($tmp421);
frost$collections$Array* $tmp425 = *(&local18);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp426 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp427 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp428 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp429 = *$tmp428;
frost$core$Bit $tmp430 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp426, $tmp427, $tmp429, $tmp430);
org$frostlang$frostc$IR$Value* $tmp431 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp424, param4, &$s432, ((frost$collections$ListView*) $tmp425), $tmp426);
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
org$frostlang$frostc$IR$Value* $tmp433 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
*(&local19) = $tmp431;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:104
org$frostlang$frostc$IR$Value* $tmp434 = *(&local19);
frost$core$Bit $tmp435 = (frost$core$Bit) {$tmp434 != NULL};
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block48; else goto block49;
block49:;
frost$core$Int $tmp437 = (frost$core$Int) {104u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s438, $tmp437);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:105
org$frostlang$frostc$Position $tmp439 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp440 = *(&local19);
org$frostlang$frostc$IR$Value* $tmp441 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, $tmp439, $tmp440);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
org$frostlang$frostc$IR$Value* $tmp442 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
*(&local16) = $tmp441;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
org$frostlang$frostc$IR$Value* $tmp443 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp444 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp445 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
*(&local17) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:108
org$frostlang$frostc$IR* $tmp446 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp447 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp448 = (frost$core$Int) {5u};
org$frostlang$frostc$Position $tmp449 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp450 = *(&local16);
org$frostlang$frostc$IR$Block$ID $tmp451 = *(&local9);
org$frostlang$frostc$IR$Block$ID $tmp452 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp447, $tmp448, $tmp449, $tmp450, $tmp451, $tmp452);
$fn454 $tmp453 = ($fn454) $tmp446->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp455 = $tmp453($tmp446, $tmp447);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:110
org$frostlang$frostc$IR* $tmp456 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp457 = *(&local9);
$fn459 $tmp458 = ($fn459) $tmp456->$class->vtable[4];
$tmp458($tmp456, $tmp457);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:111
frost$core$Int $tmp460 = (frost$core$Int) {0u};
org$frostlang$frostc$FixedArray* $tmp461 = *(&local14);
ITable* $tmp462 = ((frost$collections$CollectionView*) $tmp461)->$class->itable;
while ($tmp462->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp462 = $tmp462->next;
}
$fn464 $tmp463 = $tmp462->methods[0];
frost$core$Int $tmp465 = $tmp463(((frost$collections$CollectionView*) $tmp461));
frost$core$Bit $tmp466 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp467 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp460, $tmp465, $tmp466);
frost$core$Int $tmp468 = $tmp467.min;
*(&local20) = $tmp468;
frost$core$Int $tmp469 = $tmp467.max;
frost$core$Bit $tmp470 = $tmp467.inclusive;
bool $tmp471 = $tmp470.value;
frost$core$Int $tmp472 = (frost$core$Int) {1u};
if ($tmp471) goto block53; else goto block54;
block53:;
int64_t $tmp473 = $tmp468.value;
int64_t $tmp474 = $tmp469.value;
bool $tmp475 = $tmp473 <= $tmp474;
frost$core$Bit $tmp476 = (frost$core$Bit) {$tmp475};
bool $tmp477 = $tmp476.value;
if ($tmp477) goto block50; else goto block51;
block54:;
int64_t $tmp478 = $tmp468.value;
int64_t $tmp479 = $tmp469.value;
bool $tmp480 = $tmp478 < $tmp479;
frost$core$Bit $tmp481 = (frost$core$Bit) {$tmp480};
bool $tmp482 = $tmp481.value;
if ($tmp482) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:112
org$frostlang$frostc$IR* $tmp483 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp484 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp485 = (frost$core$Int) {4u};
org$frostlang$frostc$Position $tmp486 = *(&local12);
org$frostlang$frostc$Pair* $tmp487 = *(&local15);
frost$core$Object** $tmp488 = &$tmp487->second;
frost$core$Object* $tmp489 = *$tmp488;
frost$core$Int $tmp490 = *(&local20);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int($tmp484, $tmp485, $tmp486, param2, ((org$frostlang$frostc$ChoiceCase*) $tmp489), $tmp490);
$fn492 $tmp491 = ($fn492) $tmp483->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp493 = $tmp491($tmp483, $tmp484);
*(&local21) = $tmp493;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:115
org$frostlang$frostc$IR* $tmp494 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp495 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp496 = (frost$core$Int) {14u};
org$frostlang$frostc$Position $tmp497 = *(&local12);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp498 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp499 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp500 = *(&local21);
org$frostlang$frostc$Pair* $tmp501 = *(&local15);
frost$core$Object** $tmp502 = &$tmp501->second;
frost$core$Object* $tmp503 = *$tmp502;
frost$collections$Array** $tmp504 = &((org$frostlang$frostc$ChoiceCase*) $tmp503)->fields;
frost$collections$Array* $tmp505 = *$tmp504;
frost$core$Int $tmp506 = *(&local20);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Match.frost:116:91
frost$core$Int $tmp507 = (frost$core$Int) {0u};
int64_t $tmp508 = $tmp506.value;
int64_t $tmp509 = $tmp507.value;
bool $tmp510 = $tmp508 >= $tmp509;
frost$core$Bit $tmp511 = (frost$core$Bit) {$tmp510};
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block58; else goto block57;
block58:;
ITable* $tmp513 = ((frost$collections$CollectionView*) $tmp505)->$class->itable;
while ($tmp513->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp513 = $tmp513->next;
}
$fn515 $tmp514 = $tmp513->methods[0];
frost$core$Int $tmp516 = $tmp514(((frost$collections$CollectionView*) $tmp505));
int64_t $tmp517 = $tmp506.value;
int64_t $tmp518 = $tmp516.value;
bool $tmp519 = $tmp517 < $tmp518;
frost$core$Bit $tmp520 = (frost$core$Bit) {$tmp519};
bool $tmp521 = $tmp520.value;
if ($tmp521) goto block56; else goto block57;
block57:;
frost$core$Int $tmp522 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s523, $tmp522, &$s524);
abort(); // unreachable
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp525 = &$tmp505->data;
frost$core$Object** $tmp526 = *$tmp525;
frost$core$Int64 $tmp527 = frost$core$Int64$init$frost$core$Int($tmp506);
int64_t $tmp528 = $tmp527.value;
frost$core$Object* $tmp529 = $tmp526[$tmp528];
frost$core$Frost$ref$frost$core$Object$Q($tmp529);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp498, $tmp499, $tmp500, ((org$frostlang$frostc$Type*) $tmp529));
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp495, $tmp496, $tmp497, $tmp498);
$fn531 $tmp530 = ($fn531) $tmp494->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp532 = $tmp530($tmp494, $tmp495);
*(&local22) = $tmp532;
frost$core$Frost$unref$frost$core$Object$Q($tmp529);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:117
org$frostlang$frostc$FixedArray* $tmp533 = *(&local14);
frost$core$Int $tmp534 = *(&local20);
frost$core$Object* $tmp535 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp533, $tmp534);
frost$core$String* $tmp536 = org$frostlang$frostc$Compiler$getText$org$frostlang$frostc$ASTNode$R$frost$core$String$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp535));
*(&local23) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
frost$core$String* $tmp537 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
*(&local23) = $tmp536;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
frost$core$Frost$unref$frost$core$Object$Q($tmp535);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:118
frost$core$String* $tmp538 = *(&local23);
frost$core$Bit $tmp539 = (frost$core$Bit) {$tmp538 != NULL};
bool $tmp540 = $tmp539.value;
if ($tmp540) goto block61; else goto block60;
block61:;
frost$core$String* $tmp541 = *(&local23);
frost$core$Bit $tmp542 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp541, &$s543);
bool $tmp544 = $tmp542.value;
if ($tmp544) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:119
frost$core$String* $tmp545 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
*(&local23) = ((frost$core$String*) NULL);
goto block52;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:121
*(&local24) = ((org$frostlang$frostc$Compiler$Target*) NULL);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:123
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp546 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp546, param0);
*(&local25) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp547 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
*(&local25) = $tmp546;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:124
org$frostlang$frostc$FixedArray* $tmp548 = *(&local14);
frost$core$Int $tmp549 = *(&local20);
frost$core$Object* $tmp550 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp548, $tmp549);
frost$core$Int $tmp551 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Variable.Kind from Match.frost:125:74
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int* $tmp552 = &(&local27)->$rawValue;
*$tmp552 = $tmp551;
org$frostlang$frostc$Variable$Kind $tmp553 = *(&local27);
*(&local26) = $tmp553;
org$frostlang$frostc$Variable$Kind $tmp554 = *(&local26);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp555 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp556 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp557 = *(&local12);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp558 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp559 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp560 = *(&local22);
org$frostlang$frostc$Pair* $tmp561 = *(&local15);
frost$core$Object** $tmp562 = &$tmp561->second;
frost$core$Object* $tmp563 = *$tmp562;
frost$collections$Array** $tmp564 = &((org$frostlang$frostc$ChoiceCase*) $tmp563)->fields;
frost$collections$Array* $tmp565 = *$tmp564;
frost$core$Int $tmp566 = *(&local20);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Match.frost:128:89
frost$core$Int $tmp567 = (frost$core$Int) {0u};
int64_t $tmp568 = $tmp566.value;
int64_t $tmp569 = $tmp567.value;
bool $tmp570 = $tmp568 >= $tmp569;
frost$core$Bit $tmp571 = (frost$core$Bit) {$tmp570};
bool $tmp572 = $tmp571.value;
if ($tmp572) goto block66; else goto block65;
block66:;
ITable* $tmp573 = ((frost$collections$CollectionView*) $tmp565)->$class->itable;
while ($tmp573->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp573 = $tmp573->next;
}
$fn575 $tmp574 = $tmp573->methods[0];
frost$core$Int $tmp576 = $tmp574(((frost$collections$CollectionView*) $tmp565));
int64_t $tmp577 = $tmp566.value;
int64_t $tmp578 = $tmp576.value;
bool $tmp579 = $tmp577 < $tmp578;
frost$core$Bit $tmp580 = (frost$core$Bit) {$tmp579};
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block64; else goto block65;
block65:;
frost$core$Int $tmp582 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s583, $tmp582, &$s584);
abort(); // unreachable
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp585 = &$tmp565->data;
frost$core$Object** $tmp586 = *$tmp585;
frost$core$Int64 $tmp587 = frost$core$Int64$init$frost$core$Int($tmp566);
int64_t $tmp588 = $tmp587.value;
frost$core$Object* $tmp589 = $tmp586[$tmp588];
frost$core$Frost$ref$frost$core$Object$Q($tmp589);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp558, $tmp559, $tmp560, ((org$frostlang$frostc$Type*) $tmp589));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp555, $tmp556, $tmp557, $tmp558);
org$frostlang$frostc$Compiler$Target* $tmp590 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Compiler$Target$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp550), $tmp554, $tmp555, ((org$frostlang$frostc$Type*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
org$frostlang$frostc$Compiler$Target* $tmp591 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
*(&local24) = $tmp590;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
frost$core$Frost$unref$frost$core$Object$Q($tmp589);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
frost$core$Frost$unref$frost$core$Object$Q($tmp550);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:130
org$frostlang$frostc$Compiler$Target* $tmp592 = *(&local24);
frost$core$Bit $tmp593 = (frost$core$Bit) {$tmp592 == NULL};
bool $tmp594 = $tmp593.value;
if ($tmp594) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:131
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp595 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
*(&local25) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$Compiler$Target* $tmp596 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
*(&local24) = ((org$frostlang$frostc$Compiler$Target*) NULL);
frost$core$String* $tmp597 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
*(&local23) = ((frost$core$String*) NULL);
org$frostlang$frostc$IR$Value* $tmp598 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp599 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp600 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp601 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp602 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp603 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp604 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp605 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp606 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp607 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:133
org$frostlang$frostc$FixedArray* $tmp608 = *(&local14);
frost$core$Int $tmp609 = *(&local20);
frost$core$Object* $tmp610 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp608, $tmp609);
$fn612 $tmp611 = ($fn612) ((org$frostlang$frostc$ASTNode*) $tmp610)->$class->vtable[2];
org$frostlang$frostc$Position $tmp613 = $tmp611(((org$frostlang$frostc$ASTNode*) $tmp610));
org$frostlang$frostc$Compiler$Target* $tmp614 = *(&local24);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp615 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp616 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp617 = *(&local22);
org$frostlang$frostc$Pair* $tmp618 = *(&local15);
frost$core$Object** $tmp619 = &$tmp618->second;
frost$core$Object* $tmp620 = *$tmp619;
frost$collections$Array** $tmp621 = &((org$frostlang$frostc$ChoiceCase*) $tmp620)->fields;
frost$collections$Array* $tmp622 = *$tmp621;
frost$core$Int $tmp623 = *(&local20);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Match.frost:135:96
frost$core$Int $tmp624 = (frost$core$Int) {0u};
int64_t $tmp625 = $tmp623.value;
int64_t $tmp626 = $tmp624.value;
bool $tmp627 = $tmp625 >= $tmp626;
frost$core$Bit $tmp628 = (frost$core$Bit) {$tmp627};
bool $tmp629 = $tmp628.value;
if ($tmp629) goto block72; else goto block71;
block72:;
ITable* $tmp630 = ((frost$collections$CollectionView*) $tmp622)->$class->itable;
while ($tmp630->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp630 = $tmp630->next;
}
$fn632 $tmp631 = $tmp630->methods[0];
frost$core$Int $tmp633 = $tmp631(((frost$collections$CollectionView*) $tmp622));
int64_t $tmp634 = $tmp623.value;
int64_t $tmp635 = $tmp633.value;
bool $tmp636 = $tmp634 < $tmp635;
frost$core$Bit $tmp637 = (frost$core$Bit) {$tmp636};
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block70; else goto block71;
block71:;
frost$core$Int $tmp639 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s640, $tmp639, &$s641);
abort(); // unreachable
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp642 = &$tmp622->data;
frost$core$Object** $tmp643 = *$tmp642;
frost$core$Int64 $tmp644 = frost$core$Int64$init$frost$core$Int($tmp623);
int64_t $tmp645 = $tmp644.value;
frost$core$Object* $tmp646 = $tmp643[$tmp645];
frost$core$Frost$ref$frost$core$Object$Q($tmp646);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp615, $tmp616, $tmp617, ((org$frostlang$frostc$Type*) $tmp646));
org$frostlang$frostc$Compiler$compileStore$org$frostlang$frostc$Position$org$frostlang$frostc$Compiler$Target$org$frostlang$frostc$IR$Value(param0, $tmp613, $tmp614, $tmp615);
frost$core$Frost$unref$frost$core$Object$Q($tmp646);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
frost$core$Frost$unref$frost$core$Object$Q($tmp610);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp647 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
*(&local25) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:137
org$frostlang$frostc$Compiler$Target* $tmp648 = *(&local24);
org$frostlang$frostc$Compiler$createScopes$org$frostlang$frostc$Compiler$Target(param0, $tmp648);
org$frostlang$frostc$Compiler$Target* $tmp649 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
*(&local24) = ((org$frostlang$frostc$Compiler$Target*) NULL);
frost$core$String* $tmp650 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
*(&local23) = ((frost$core$String*) NULL);
goto block52;
block52:;
frost$core$Int $tmp651 = *(&local20);
int64_t $tmp652 = $tmp469.value;
int64_t $tmp653 = $tmp651.value;
int64_t $tmp654 = $tmp652 - $tmp653;
frost$core$Int $tmp655 = (frost$core$Int) {$tmp654};
if ($tmp471) goto block74; else goto block75;
block74:;
int64_t $tmp656 = $tmp655.value;
int64_t $tmp657 = $tmp472.value;
bool $tmp658 = $tmp656 >= $tmp657;
frost$core$Bit $tmp659 = (frost$core$Bit) {$tmp658};
bool $tmp660 = $tmp659.value;
if ($tmp660) goto block73; else goto block51;
block75:;
int64_t $tmp661 = $tmp655.value;
int64_t $tmp662 = $tmp472.value;
bool $tmp663 = $tmp661 > $tmp662;
frost$core$Bit $tmp664 = (frost$core$Bit) {$tmp663};
bool $tmp665 = $tmp664.value;
if ($tmp665) goto block73; else goto block51;
block73:;
int64_t $tmp666 = $tmp651.value;
int64_t $tmp667 = $tmp472.value;
int64_t $tmp668 = $tmp666 + $tmp667;
frost$core$Int $tmp669 = (frost$core$Int) {$tmp668};
*(&local20) = $tmp669;
goto block50;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:139
org$frostlang$frostc$IR$Value* $tmp670 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp671 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp672 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp673 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp674 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block15;
block31:;
goto block29;
block29:;
org$frostlang$frostc$Pair* $tmp675 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp676 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp677 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block25;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:144
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:146
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp678 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp678, param0);
*(&local29) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp679 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
*(&local29) = $tmp678;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:147
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:148
org$frostlang$frostc$ASTNode* $tmp680 = *(&local11);
org$frostlang$frostc$Pair* $tmp681 = org$frostlang$frostc$Compiler$getChoiceCase$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Corg$frostlang$frostc$ChoiceCase$GT$Q(param0, $tmp680);
*(&local31) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
org$frostlang$frostc$Pair* $tmp682 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
*(&local31) = $tmp681;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:149
org$frostlang$frostc$Pair* $tmp683 = *(&local31);
frost$core$Bit $tmp684 = (frost$core$Bit) {$tmp683 != NULL};
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block76; else goto block78;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:150
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp686 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp687 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp686, $tmp687);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp688 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp689 = (frost$core$Int) {25u};
org$frostlang$frostc$ASTNode* $tmp690 = *(&local11);
$fn692 $tmp691 = ($fn692) $tmp690->$class->vtable[2];
org$frostlang$frostc$Position $tmp693 = $tmp691($tmp690);
org$frostlang$frostc$Pair* $tmp694 = *(&local31);
frost$core$Object** $tmp695 = &$tmp694->second;
frost$core$Object* $tmp696 = *$tmp695;
frost$core$Int* $tmp697 = &((org$frostlang$frostc$ChoiceCase*) $tmp696)->rawValue;
frost$core$Int $tmp698 = *$tmp697;
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Match.frost:151:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
int64_t $tmp699 = $tmp698.value;
frost$core$UInt64 $tmp700 = (frost$core$UInt64) {((uint64_t) $tmp699)};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp688, $tmp689, $tmp693, $tmp700);
frost$collections$Array$add$frost$collections$Array$T($tmp686, ((frost$core$Object*) $tmp688));
*(&local32) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
frost$collections$Array* $tmp701 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
*(&local32) = $tmp686;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:152
org$frostlang$frostc$ASTNode* $tmp702 = *(&local11);
$fn704 $tmp703 = ($fn704) $tmp702->$class->vtable[2];
org$frostlang$frostc$Position $tmp705 = $tmp703($tmp702);
frost$collections$Array* $tmp706 = *(&local32);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp707 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp708 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp709 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp710 = *$tmp709;
frost$core$Bit $tmp711 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp707, $tmp708, $tmp710, $tmp711);
org$frostlang$frostc$IR$Value* $tmp712 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp705, param4, &$s713, ((frost$collections$ListView*) $tmp706), $tmp707);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
org$frostlang$frostc$IR$Value* $tmp714 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
*(&local30) = $tmp712;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:154
org$frostlang$frostc$IR$Value* $tmp715 = *(&local30);
frost$core$Bit $tmp716 = (frost$core$Bit) {$tmp715 == NULL};
bool $tmp717 = $tmp716.value;
if ($tmp717) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:155
frost$collections$Array* $tmp718 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
*(&local32) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp719 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
*(&local31) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp720 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp721 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
*(&local29) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp722 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp723 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp724 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp725 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp726 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp727 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp728 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block81:;
frost$collections$Array* $tmp729 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
*(&local32) = ((frost$collections$Array*) NULL);
goto block77;
block78:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:159
org$frostlang$frostc$ASTNode* $tmp730 = *(&local11);
$fn732 $tmp731 = ($fn732) $tmp730->$class->vtable[2];
org$frostlang$frostc$Position $tmp733 = $tmp731($tmp730);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp734 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp735 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp734, $tmp735);
org$frostlang$frostc$ASTNode* $tmp736 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp734, ((frost$core$Object*) $tmp736));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp737 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp738 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp739 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp740 = *$tmp739;
frost$core$Bit $tmp741 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp737, $tmp738, $tmp740, $tmp741);
org$frostlang$frostc$IR$Value* $tmp742 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp733, param2, &$s743, ((frost$collections$ListView*) $tmp734), $tmp737);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
org$frostlang$frostc$IR$Value* $tmp744 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
*(&local30) = $tmp742;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:161
org$frostlang$frostc$IR$Value* $tmp745 = *(&local30);
frost$core$Bit $tmp746 = (frost$core$Bit) {$tmp745 == NULL};
bool $tmp747 = $tmp746.value;
if ($tmp747) goto block82; else goto block83;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:162
org$frostlang$frostc$Pair* $tmp748 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
*(&local31) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp749 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp750 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
*(&local29) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp751 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp752 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp753 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp754 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp755 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp756 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp757 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block83:;
goto block77;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:165
org$frostlang$frostc$Position $tmp758 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp759 = *(&local30);
org$frostlang$frostc$IR$Value* $tmp760 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, $tmp758, $tmp759);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
org$frostlang$frostc$IR$Value* $tmp761 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
*(&local28) = $tmp760;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
org$frostlang$frostc$Pair* $tmp762 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
*(&local31) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp763 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp764 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
*(&local29) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:167
org$frostlang$frostc$IR* $tmp765 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp766 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp767 = (frost$core$Int) {5u};
org$frostlang$frostc$Position $tmp768 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp769 = *(&local28);
org$frostlang$frostc$IR$Block$ID $tmp770 = *(&local9);
org$frostlang$frostc$IR$Block$ID $tmp771 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp766, $tmp767, $tmp768, $tmp769, $tmp770, $tmp771);
$fn773 $tmp772 = ($fn773) $tmp765->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp774 = $tmp772($tmp765, $tmp766);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
org$frostlang$frostc$IR$Value* $tmp775 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp776 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block15;
block15:;
frost$core$Int $tmp777 = *(&local10);
int64_t $tmp778 = $tmp138.value;
int64_t $tmp779 = $tmp777.value;
int64_t $tmp780 = $tmp778 - $tmp779;
frost$core$Int $tmp781 = (frost$core$Int) {$tmp780};
if ($tmp140) goto block85; else goto block86;
block85:;
int64_t $tmp782 = $tmp781.value;
int64_t $tmp783 = $tmp141.value;
bool $tmp784 = $tmp782 >= $tmp783;
frost$core$Bit $tmp785 = (frost$core$Bit) {$tmp784};
bool $tmp786 = $tmp785.value;
if ($tmp786) goto block84; else goto block14;
block86:;
int64_t $tmp787 = $tmp781.value;
int64_t $tmp788 = $tmp141.value;
bool $tmp789 = $tmp787 > $tmp788;
frost$core$Bit $tmp790 = (frost$core$Bit) {$tmp789};
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block84; else goto block14;
block84:;
int64_t $tmp792 = $tmp777.value;
int64_t $tmp793 = $tmp141.value;
int64_t $tmp794 = $tmp792 + $tmp793;
frost$core$Int $tmp795 = (frost$core$Int) {$tmp794};
*(&local10) = $tmp795;
goto block13;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:170
org$frostlang$frostc$IR* $tmp796 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp797 = *(&local9);
$fn799 $tmp798 = ($fn799) $tmp796->$class->vtable[4];
$tmp798($tmp796, $tmp797);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:171
org$frostlang$frostc$FixedArray* $tmp800 = *(&local7);
ITable* $tmp801 = ((frost$collections$Iterable*) $tmp800)->$class->itable;
while ($tmp801->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp801 = $tmp801->next;
}
$fn803 $tmp802 = $tmp801->methods[0];
frost$collections$Iterator* $tmp804 = $tmp802(((frost$collections$Iterable*) $tmp800));
goto block87;
block87:;
ITable* $tmp805 = $tmp804->$class->itable;
while ($tmp805->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp805 = $tmp805->next;
}
$fn807 $tmp806 = $tmp805->methods[0];
frost$core$Bit $tmp808 = $tmp806($tmp804);
bool $tmp809 = $tmp808.value;
if ($tmp809) goto block89; else goto block88;
block88:;
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp810 = $tmp804->$class->itable;
while ($tmp810->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp810 = $tmp810->next;
}
$fn812 $tmp811 = $tmp810->methods[1];
frost$core$Object* $tmp813 = $tmp811($tmp804);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp813)));
org$frostlang$frostc$ASTNode* $tmp814 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
*(&local33) = ((org$frostlang$frostc$ASTNode*) $tmp813);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:172
org$frostlang$frostc$ASTNode* $tmp815 = *(&local33);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp815);
frost$core$Frost$unref$frost$core$Object$Q($tmp813);
org$frostlang$frostc$ASTNode* $tmp816 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block87;
block89:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
org$frostlang$frostc$Compiler$AutoScope* $tmp817 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:175
org$frostlang$frostc$IR* $tmp818 = *(&local0);
$fn820 $tmp819 = ($fn820) $tmp818->$class->vtable[5];
frost$core$Bit $tmp821 = $tmp819($tmp818);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Match.frost:175:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp822 = $tmp821.value;
bool $tmp823 = !$tmp822;
frost$core$Bit $tmp824 = (frost$core$Bit) {$tmp823};
bool $tmp825 = $tmp824.value;
if ($tmp825) goto block90; else goto block91;
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:176
org$frostlang$frostc$IR* $tmp826 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp827 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp828 = (frost$core$Int) {1u};
org$frostlang$frostc$Position $tmp829 = *(&local5);
org$frostlang$frostc$IR$Block$ID $tmp830 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp827, $tmp828, $tmp829, $tmp830);
$fn832 $tmp831 = ($fn832) $tmp826->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp833 = $tmp831($tmp826, $tmp827);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
goto block91;
block91:;
org$frostlang$frostc$FixedArray* $tmp834 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp835 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp836 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Int $tmp837 = *(&local3);
int64_t $tmp838 = $tmp88.value;
int64_t $tmp839 = $tmp837.value;
int64_t $tmp840 = $tmp838 - $tmp839;
frost$core$Int $tmp841 = (frost$core$Int) {$tmp840};
if ($tmp90) goto block94; else goto block95;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:180
frost$core$Int $tmp842 = (frost$core$Int) {180u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s843, $tmp842);
abort(); // unreachable
block94:;
int64_t $tmp844 = $tmp841.value;
int64_t $tmp845 = $tmp91.value;
bool $tmp846 = $tmp844 >= $tmp845;
frost$core$Bit $tmp847 = (frost$core$Bit) {$tmp846};
bool $tmp848 = $tmp847.value;
if ($tmp848) goto block93; else goto block5;
block95:;
int64_t $tmp849 = $tmp841.value;
int64_t $tmp850 = $tmp91.value;
bool $tmp851 = $tmp849 > $tmp850;
frost$core$Bit $tmp852 = (frost$core$Bit) {$tmp851};
bool $tmp853 = $tmp852.value;
if ($tmp853) goto block93; else goto block5;
block93:;
int64_t $tmp854 = $tmp837.value;
int64_t $tmp855 = $tmp91.value;
int64_t $tmp856 = $tmp854 + $tmp855;
frost$core$Int $tmp857 = (frost$core$Int) {$tmp856};
*(&local3) = $tmp857;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:184
frost$core$Bit $tmp858 = (frost$core$Bit) {param6 != NULL};
bool $tmp859 = $tmp858.value;
if ($tmp859) goto block96; else goto block97;
block96:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:186
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp860 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp860, param0);
*(&local34) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
org$frostlang$frostc$Compiler$AutoScope* $tmp861 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
*(&local34) = $tmp860;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:187
org$frostlang$frostc$IR* $tmp862 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp863 = *(&local2);
$fn865 $tmp864 = ($fn865) $tmp862->$class->vtable[4];
$tmp864($tmp862, $tmp863);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:188
ITable* $tmp866 = ((frost$collections$Iterable*) param6)->$class->itable;
while ($tmp866->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp866 = $tmp866->next;
}
$fn868 $tmp867 = $tmp866->methods[0];
frost$collections$Iterator* $tmp869 = $tmp867(((frost$collections$Iterable*) param6));
goto block98;
block98:;
ITable* $tmp870 = $tmp869->$class->itable;
while ($tmp870->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp870 = $tmp870->next;
}
$fn872 $tmp871 = $tmp870->methods[0];
frost$core$Bit $tmp873 = $tmp871($tmp869);
bool $tmp874 = $tmp873.value;
if ($tmp874) goto block100; else goto block99;
block99:;
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp875 = $tmp869->$class->itable;
while ($tmp875->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp875 = $tmp875->next;
}
$fn877 $tmp876 = $tmp875->methods[1];
frost$core$Object* $tmp878 = $tmp876($tmp869);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp878)));
org$frostlang$frostc$ASTNode* $tmp879 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
*(&local35) = ((org$frostlang$frostc$ASTNode*) $tmp878);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:189
org$frostlang$frostc$ASTNode* $tmp880 = *(&local35);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp880);
frost$core$Frost$unref$frost$core$Object$Q($tmp878);
org$frostlang$frostc$ASTNode* $tmp881 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block98;
block100:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
org$frostlang$frostc$Compiler$AutoScope* $tmp882 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
*(&local34) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:192
org$frostlang$frostc$IR* $tmp883 = *(&local0);
$fn885 $tmp884 = ($fn885) $tmp883->$class->vtable[5];
frost$core$Bit $tmp886 = $tmp884($tmp883);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Match.frost:192:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp887 = $tmp886.value;
bool $tmp888 = !$tmp887;
frost$core$Bit $tmp889 = (frost$core$Bit) {$tmp888};
bool $tmp890 = $tmp889.value;
if ($tmp890) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:193
org$frostlang$frostc$IR* $tmp891 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp892 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp893 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp894 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp892, $tmp893, param1, $tmp894);
$fn896 $tmp895 = ($fn896) $tmp891->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp897 = $tmp895($tmp891, $tmp892);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
goto block102;
block102:;
goto block97;
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:196
org$frostlang$frostc$IR* $tmp898 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp899 = *(&local1);
$fn901 $tmp900 = ($fn901) $tmp898->$class->vtable[4];
$tmp900($tmp898, $tmp899);
org$frostlang$frostc$IR* $tmp902 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:202
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp903 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp904 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp903, $tmp904);
org$frostlang$frostc$IR$Value* $tmp905 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp903);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
org$frostlang$frostc$IR$Value* $tmp906 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
*(&local0) = $tmp905;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:203
org$frostlang$frostc$IR$Value* $tmp907 = *(&local0);
frost$core$Bit $tmp908 = (frost$core$Bit) {$tmp907 == NULL};
bool $tmp909 = $tmp908.value;
if ($tmp909) goto block1; else goto block3;
block3:;
ITable* $tmp910 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp910->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp910 = $tmp910->next;
}
$fn912 $tmp911 = $tmp910->methods[0];
frost$core$Int $tmp913 = $tmp911(((frost$collections$CollectionView*) param3));
frost$core$Int $tmp914 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Match.frost:203:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp915 = $tmp913.value;
int64_t $tmp916 = $tmp914.value;
bool $tmp917 = $tmp915 == $tmp916;
frost$core$Bit $tmp918 = (frost$core$Bit) {$tmp917};
bool $tmp919 = $tmp918.value;
if ($tmp919) goto block4; else goto block2;
block4:;
frost$core$Bit $tmp920 = (frost$core$Bit) {param4 == NULL};
bool $tmp921 = $tmp920.value;
if ($tmp921) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:204
org$frostlang$frostc$IR$Value* $tmp922 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:206
org$frostlang$frostc$IR$Value* $tmp923 = *(&local0);
$fn925 $tmp924 = ($fn925) $tmp923->$class->vtable[2];
org$frostlang$frostc$Type* $tmp926 = $tmp924($tmp923);
org$frostlang$frostc$ClassDecl* $tmp927 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp926);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
org$frostlang$frostc$ClassDecl* $tmp928 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
*(&local1) = $tmp927;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:207
org$frostlang$frostc$ClassDecl* $tmp929 = *(&local1);
frost$core$Bit $tmp930 = (frost$core$Bit) {$tmp929 == NULL};
bool $tmp931 = $tmp930.value;
if ($tmp931) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:208
org$frostlang$frostc$ClassDecl* $tmp932 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp933 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:210
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp934 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:211
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:212
org$frostlang$frostc$ClassDecl* $tmp935 = *(&local1);
org$frostlang$frostc$ClassDecl$Kind* $tmp936 = &$tmp935->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp937 = *$tmp936;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp938;
$tmp938 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp938->value = $tmp937;
frost$core$Int $tmp939 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Match.frost:212:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp940 = &(&local5)->$rawValue;
*$tmp940 = $tmp939;
org$frostlang$frostc$ClassDecl$Kind $tmp941 = *(&local5);
*(&local4) = $tmp941;
org$frostlang$frostc$ClassDecl$Kind $tmp942 = *(&local4);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp943;
$tmp943 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp943->value = $tmp942;
ITable* $tmp944 = ((frost$core$Equatable*) $tmp938)->$class->itable;
while ($tmp944->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp944 = $tmp944->next;
}
$fn946 $tmp945 = $tmp944->methods[0];
frost$core$Bit $tmp947 = $tmp945(((frost$core$Equatable*) $tmp938), ((frost$core$Equatable*) $tmp943));
bool $tmp948 = $tmp947.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp943)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp938)));
if ($tmp948) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:213
org$frostlang$frostc$IR$Value* $tmp949 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp950 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp949, &$s951);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
org$frostlang$frostc$IR$Value* $tmp952 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
*(&local3) = $tmp950;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:215
org$frostlang$frostc$ClassDecl* $tmp953 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
org$frostlang$frostc$ClassDecl* $tmp954 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
*(&local2) = $tmp953;
goto block9;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:217
org$frostlang$frostc$ClassDecl* $tmp955 = *(&local1);
org$frostlang$frostc$SymbolTable* $tmp956 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp955);
org$frostlang$frostc$Symbol* $tmp957 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp956, &$s958);
frost$core$Bit $tmp959 = (frost$core$Bit) {$tmp957 == NULL};
bool $tmp960 = $tmp959.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
if ($tmp960) goto block12; else goto block14;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:218
$fn962 $tmp961 = ($fn962) param2->$class->vtable[2];
org$frostlang$frostc$Position $tmp963 = $tmp961(param2);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp963, &$s964);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:219
org$frostlang$frostc$IR$Value* $tmp965 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp966 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp967 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp968 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block14:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:222
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp969 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:224
org$frostlang$frostc$IR$Value* $tmp970 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp971 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp972 = *(&local3);
org$frostlang$frostc$statement$Match$compileChainedIfMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0, param1, $tmp970, $tmp971, $tmp972, param3, param4);
org$frostlang$frostc$IR$Value* $tmp973 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp974 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp975 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp976 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$statement$Match$init(org$frostlang$frostc$statement$Match* param0) {

return;

}
void org$frostlang$frostc$statement$Match$cleanup(org$frostlang$frostc$statement$Match* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:24
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

