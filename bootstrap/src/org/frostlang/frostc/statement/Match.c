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
#include "org/frostlang/frostc/Type/Kind.h"
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
typedef org$frostlang$frostc$IR$Statement$ID (*$fn464)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn469)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn474)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn504)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn527)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn542)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn586)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn622)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Int64 (*$fn642)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn703)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn715)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn749)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn796)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn824)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn828)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn832)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn837)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn845)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn857)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn892)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn895)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn899)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn904)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn912)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn923)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn928)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn939)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn952)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn973)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn989)(org$frostlang$frostc$ASTNode*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x4d\x61\x74\x63\x68", 36, -4868280242278132552, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x61\x74\x63\x68\x20\x63\x68\x6f\x69\x63\x65\x20\x63\x61\x73\x65\x20\x27", 26, 924211577719466455, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x61\x67\x61\x69\x6e\x73\x74\x20\x27", 11, 5504180647906747646, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x61\x74\x63\x68\x20\x63\x68\x6f\x69\x63\x65\x20\x63\x61\x73\x65\x20\x27", 26, 924211577719466455, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x61\x67\x61\x69\x6e\x73\x74\x20", 10, 5899009811946657419, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x4d\x61\x74\x63\x68\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x43\x68\x61\x69\x6e\x65\x64\x49\x66\x4d\x61\x74\x63\x68\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2c\x20\x63\x68\x6f\x69\x63\x65\x43\x6c\x61\x73\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x2c\x20\x63\x68\x6f\x69\x63\x65\x52\x61\x77\x56\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x77\x68\x65\x6e\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x6f\x74\x68\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x29", 438, 5866251470127575791, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x74\x63\x68\x20\x65\x6e\x64", 9, 2284522982428118369, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x65\x73\x74\x20\x73\x75\x63\x63\x65\x73\x73", 12, 7036109776132282178, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x74\x63\x68", 5, 21953816826, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x73\x74\x72\x75\x63\x74\x75\x72\x69\x6e\x67\x20\x63\x68\x6f\x69\x63\x65\x20\x27\x77\x68\x65\x6e\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x74\x6f\x67\x65\x74\x68\x65\x72\x20\x77\x69\x74\x68\x20", 57, 7310936708811456764, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x74\x68\x65\x72\x20\x27\x77\x68\x65\x6e\x27\x20\x63\x6f\x6d\x70\x61\x72\x69\x73\x6f\x6e\x73", 24, 5365199314206252049, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x27", 8, 21554282788333791, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20", 2, 14172, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x71\x75\x69\x72\x65\x73\x20", 9, 2339091676660267913, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x61\x72\x67\x75\x6d\x65\x6e\x74", 9, 1450721239526715900, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s344 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 10, -2438145452310052756, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x69\x73\x20", 5, 14602508524, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 19, 2848546980520752179, NULL };
static frost$core$String $s388 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s439 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s535 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s536 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s554 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s595 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s650 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s651 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s727 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s730 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s763 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s766 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s870 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s978 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static frost$core$String $s985 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s991 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27\x20\x76\x61\x6c\x75\x65\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x64\x65\x66\x69\x6e\x65\x20\x74\x68\x65\x20\x27\x3d\x27\x20\x6f\x70\x65\x72\x61\x74\x6f\x72", 46, 6331121231047041348, NULL };

frost$core$Bit org$frostlang$frostc$statement$Match$checkChoiceMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ChoiceCase$Q$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$R$frost$core$Bit(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ChoiceCase* param2, org$frostlang$frostc$ClassDecl* param3, org$frostlang$frostc$IR$Value* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:29
frost$core$Bit $tmp2 = frost$core$Bit$init$builtin_bit(param2 == NULL);
bool $tmp3 = $tmp2.value;
if ($tmp3) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:30
frost$core$Bit $tmp4 = frost$core$Bit$init$builtin_bit(false);
return $tmp4;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:32
frost$core$Bit $tmp5 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:33
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:33:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
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
frost$core$Bit $tmp23 = frost$core$Bit$init$builtin_bit(false);
return $tmp23;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:36
frost$core$Weak** $tmp24 = &param2->owner;
frost$core$Weak* $tmp25 = *$tmp24;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Match.frost:36:14
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp26 = &$tmp25->_valid;
frost$core$Bit $tmp27 = *$tmp26;
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp29 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s30, $tmp29);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp31 = &$tmp25->value;
frost$core$Object* $tmp32 = *$tmp31;
frost$core$Frost$ref$frost$core$Object$Q($tmp32);
bool $tmp33 = ((org$frostlang$frostc$ClassDecl*) $tmp32) != param3;
frost$core$Bit $tmp34 = frost$core$Bit$init$builtin_bit($tmp33);
bool $tmp35 = $tmp34.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp32);
if ($tmp35) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:37
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:37:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
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
frost$core$Bit $tmp50 = frost$core$Bit$init$builtin_bit(false);
return $tmp50;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:41
frost$core$Bit $tmp51 = frost$core$Bit$init$builtin_bit(true);
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
org$frostlang$frostc$Type$Kind local19;
org$frostlang$frostc$Type$Kind local20;
org$frostlang$frostc$IR$Value* local21 = NULL;
frost$core$Int64 local22;
org$frostlang$frostc$IR$Statement$ID local23;
org$frostlang$frostc$IR$Statement$ID local24;
frost$core$String* local25 = NULL;
org$frostlang$frostc$Compiler$Target* local26 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local27 = NULL;
org$frostlang$frostc$Variable$Kind local28;
org$frostlang$frostc$Variable$Kind local29;
org$frostlang$frostc$IR$Value* local30 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local31 = NULL;
org$frostlang$frostc$IR$Value* local32 = NULL;
org$frostlang$frostc$Pair* local33 = NULL;
frost$collections$Array* local34 = NULL;
org$frostlang$frostc$Type$Kind local35;
org$frostlang$frostc$Type$Kind local36;
org$frostlang$frostc$Type$Kind local37;
org$frostlang$frostc$Type$Kind local38;
org$frostlang$frostc$ASTNode* local39 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local40 = NULL;
org$frostlang$frostc$ASTNode* local41 = NULL;
ITable* $tmp52 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp52->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp52 = $tmp52->next;
}
$fn54 $tmp53 = $tmp52->methods[0];
frost$core$Int64 $tmp55 = $tmp53(((frost$collections$CollectionView*) param5));
frost$core$Int64 $tmp56 = (frost$core$Int64) {0};
int64_t $tmp57 = $tmp55.value;
int64_t $tmp58 = $tmp56.value;
bool $tmp59 = $tmp57 > $tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block1; else goto block3;
block3:;
frost$core$Bit $tmp62 = frost$core$Bit$init$builtin_bit(param6 != NULL);
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp64 = (frost$core$Int64) {47};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s65, $tmp64, &$s66);
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
frost$core$Int64 $tmp80 = (frost$core$Int64) {0};
ITable* $tmp81 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp81->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp81 = $tmp81->next;
}
$fn83 $tmp82 = $tmp81->methods[0];
frost$core$Int64 $tmp84 = $tmp82(((frost$collections$CollectionView*) param5));
frost$core$Bit $tmp85 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp86 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp80, $tmp84, $tmp85);
frost$core$Int64 $tmp87 = $tmp86.min;
*(&local3) = $tmp87;
frost$core$Int64 $tmp88 = $tmp86.max;
frost$core$Bit $tmp89 = $tmp86.inclusive;
bool $tmp90 = $tmp89.value;
frost$core$Int64 $tmp91 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:54
frost$core$Int64 $tmp104 = *(&local3);
frost$core$Object* $tmp105 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T(param5, $tmp104);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp105)));
org$frostlang$frostc$ASTNode* $tmp106 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp105);
frost$core$Frost$unref$frost$core$Object$Q($tmp105);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:55
org$frostlang$frostc$ASTNode* $tmp107 = *(&local4);
frost$core$Int64* $tmp108 = &$tmp107->$rawValue;
frost$core$Int64 $tmp109 = *$tmp108;
frost$core$Int64 $tmp110 = (frost$core$Int64) {54};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Match.frost:56:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp111 = $tmp109.value;
int64_t $tmp112 = $tmp110.value;
bool $tmp113 = $tmp111 == $tmp112;
frost$core$Bit $tmp114 = frost$core$Bit$init$builtin_bit($tmp113);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:58
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp124 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp124, param0);
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
org$frostlang$frostc$Compiler$AutoScope* $tmp125 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
*(&local8) = $tmp124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:59
org$frostlang$frostc$IR* $tmp126 = *(&local0);
$fn128 $tmp127 = ($fn128) $tmp126->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp129 = $tmp127($tmp126, &$s130);
*(&local9) = $tmp129;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:60
frost$core$Int64 $tmp131 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp132 = *(&local6);
ITable* $tmp133 = ((frost$collections$CollectionView*) $tmp132)->$class->itable;
while ($tmp133->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp133 = $tmp133->next;
}
$fn135 $tmp134 = $tmp133->methods[0];
frost$core$Int64 $tmp136 = $tmp134(((frost$collections$CollectionView*) $tmp132));
frost$core$Bit $tmp137 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp138 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp131, $tmp136, $tmp137);
frost$core$Int64 $tmp139 = $tmp138.min;
*(&local10) = $tmp139;
frost$core$Int64 $tmp140 = $tmp138.max;
frost$core$Bit $tmp141 = $tmp138.inclusive;
bool $tmp142 = $tmp141.value;
frost$core$Int64 $tmp143 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:61
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:62
org$frostlang$frostc$IR* $tmp169 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp170 = *(&local2);
$fn172 $tmp171 = ($fn172) $tmp169->$class->vtable[4];
$tmp171($tmp169, $tmp170);
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:64
frost$core$Int64 $tmp173 = *(&local10);
org$frostlang$frostc$FixedArray* $tmp174 = *(&local6);
ITable* $tmp175 = ((frost$collections$CollectionView*) $tmp174)->$class->itable;
while ($tmp175->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp175 = $tmp175->next;
}
$fn177 $tmp176 = $tmp175->methods[0];
frost$core$Int64 $tmp178 = $tmp176(((frost$collections$CollectionView*) $tmp174));
frost$core$Int64 $tmp179 = (frost$core$Int64) {1};
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
frost$core$Int64 $tmp194 = (frost$core$Int64) {1};
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
frost$core$Bit $tmp204 = frost$core$Bit$init$builtin_bit(param6 != NULL);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block22; else goto block24;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:65
org$frostlang$frostc$IR* $tmp206 = *(&local0);
$fn208 $tmp207 = ($fn208) $tmp206->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp209 = $tmp207($tmp206, &$s210);
*(&local2) = $tmp209;
goto block23;
block24:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:68
org$frostlang$frostc$IR$Block$ID $tmp211 = *(&local1);
*(&local2) = $tmp211;
goto block23;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:70
org$frostlang$frostc$FixedArray* $tmp212 = *(&local6);
frost$core$Int64 $tmp213 = *(&local10);
frost$core$Object* $tmp214 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp212, $tmp213);
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp214)));
org$frostlang$frostc$ASTNode* $tmp215 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
*(&local11) = ((org$frostlang$frostc$ASTNode*) $tmp214);
frost$core$Frost$unref$frost$core$Object$Q($tmp214);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:71
org$frostlang$frostc$ASTNode* $tmp216 = *(&local11);
frost$core$Int64* $tmp217 = &$tmp216->$rawValue;
frost$core$Int64 $tmp218 = *$tmp217;
frost$core$Int64 $tmp219 = (frost$core$Int64) {9};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Match.frost:72:45
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp220 = $tmp218.value;
int64_t $tmp221 = $tmp219.value;
bool $tmp222 = $tmp220 == $tmp221;
frost$core$Bit $tmp223 = frost$core$Bit$init$builtin_bit($tmp222);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:73
org$frostlang$frostc$ASTNode* $tmp233 = *(&local13);
org$frostlang$frostc$Pair* $tmp234 = org$frostlang$frostc$Compiler$getChoiceCase$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Corg$frostlang$frostc$ChoiceCase$GT$Q(param0, $tmp233);
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
org$frostlang$frostc$Pair* $tmp235 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
*(&local15) = $tmp234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:74
org$frostlang$frostc$Pair* $tmp236 = *(&local15);
frost$core$Bit $tmp237 = frost$core$Bit$init$builtin_bit($tmp236 != NULL);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:75
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:77
org$frostlang$frostc$FixedArray* $tmp248 = *(&local6);
ITable* $tmp249 = ((frost$collections$CollectionView*) $tmp248)->$class->itable;
while ($tmp249->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp249 = $tmp249->next;
}
$fn251 $tmp250 = $tmp249->methods[0];
frost$core$Int64 $tmp252 = $tmp250(((frost$collections$CollectionView*) $tmp248));
frost$core$Int64 $tmp253 = (frost$core$Int64) {1};
int64_t $tmp254 = $tmp252.value;
int64_t $tmp255 = $tmp253.value;
bool $tmp256 = $tmp254 != $tmp255;
frost$core$Bit $tmp257 = (frost$core$Bit) {$tmp256};
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:78
org$frostlang$frostc$Position $tmp259 = *(&local12);
frost$core$String* $tmp260 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s261, &$s262);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp259, $tmp260);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:81
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:83
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:84
org$frostlang$frostc$Position $tmp291 = *(&local12);
org$frostlang$frostc$Pair* $tmp292 = *(&local15);
frost$core$Object** $tmp293 = &$tmp292->second;
frost$core$Object* $tmp294 = *$tmp293;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:84:74
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
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
frost$core$Int64 $tmp327 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Match.frost:86:92
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp328 = $tmp326.value;
int64_t $tmp329 = $tmp327.value;
bool $tmp330 = $tmp328 == $tmp329;
frost$core$Bit $tmp331 = frost$core$Bit$init$builtin_bit($tmp330);
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:88
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:90
frost$core$Bit $tmp364 = frost$core$Bit$init$builtin_bit(param4 == NULL);
bool $tmp365 = $tmp364.value;
if ($tmp365) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:91
org$frostlang$frostc$Position $tmp366 = *(&local12);
$fn368 $tmp367 = ($fn368) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp369 = $tmp367(param2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:91:74
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp384 = &$tmp383->_valid;
frost$core$Bit $tmp385 = *$tmp384;
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp387 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s388, $tmp387);
abort(); // unreachable
block47:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:94
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:96
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:98
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp407 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp407, param0);
*(&local17) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp408 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
*(&local17) = $tmp407;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:99
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp409 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp410 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp409, $tmp410);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp411 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp412 = (frost$core$Int64) {25};
org$frostlang$frostc$ASTNode* $tmp413 = *(&local13);
$fn415 $tmp414 = ($fn415) $tmp413->$class->vtable[2];
org$frostlang$frostc$Position $tmp416 = $tmp414($tmp413);
org$frostlang$frostc$Pair* $tmp417 = *(&local15);
frost$core$Object** $tmp418 = &$tmp417->second;
frost$core$Object* $tmp419 = *$tmp418;
frost$core$Int64* $tmp420 = &((org$frostlang$frostc$ChoiceCase*) $tmp419)->rawValue;
frost$core$Int64 $tmp421 = *$tmp420;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Match.frost:100:75
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:101
org$frostlang$frostc$ASTNode* $tmp425 = *(&local13);
$fn427 $tmp426 = ($fn427) $tmp425->$class->vtable[2];
org$frostlang$frostc$Position $tmp428 = $tmp426($tmp425);
frost$collections$Array* $tmp429 = *(&local18);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp430 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp431 = (frost$core$Int64) {3};
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from Match.frost:103:82
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp432 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp433 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp434 = &(&local20)->$rawValue;
*$tmp434 = $tmp433;
org$frostlang$frostc$Type$Kind $tmp435 = *(&local20);
*(&local19) = $tmp435;
org$frostlang$frostc$Type$Kind $tmp436 = *(&local19);
org$frostlang$frostc$Position $tmp437 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp438 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp432, &$s439, $tmp436, $tmp437, $tmp438);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
frost$core$Bit $tmp440 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp430, $tmp431, $tmp432, $tmp440);
org$frostlang$frostc$IR$Value* $tmp441 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp428, param4, &$s442, ((frost$collections$ListView*) $tmp429), $tmp430);
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
org$frostlang$frostc$IR$Value* $tmp443 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
*(&local21) = $tmp441;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:104
org$frostlang$frostc$IR$Value* $tmp444 = *(&local21);
frost$core$Bit $tmp445 = frost$core$Bit$init$builtin_bit($tmp444 != NULL);
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block52; else goto block53;
block53:;
frost$core$Int64 $tmp447 = (frost$core$Int64) {104};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s448, $tmp447);
abort(); // unreachable
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:105
org$frostlang$frostc$Position $tmp449 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp450 = *(&local21);
org$frostlang$frostc$IR$Value* $tmp451 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, $tmp449, $tmp450);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
org$frostlang$frostc$IR$Value* $tmp452 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
*(&local16) = $tmp451;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
org$frostlang$frostc$IR$Value* $tmp453 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp454 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp455 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
*(&local17) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:108
org$frostlang$frostc$IR* $tmp456 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp457 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp458 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp459 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp460 = *(&local16);
org$frostlang$frostc$IR$Block$ID $tmp461 = *(&local9);
org$frostlang$frostc$IR$Block$ID $tmp462 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp457, $tmp458, $tmp459, $tmp460, $tmp461, $tmp462);
$fn464 $tmp463 = ($fn464) $tmp456->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp465 = $tmp463($tmp456, $tmp457);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:110
org$frostlang$frostc$IR* $tmp466 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp467 = *(&local9);
$fn469 $tmp468 = ($fn469) $tmp466->$class->vtable[4];
$tmp468($tmp466, $tmp467);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:111
frost$core$Int64 $tmp470 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp471 = *(&local14);
ITable* $tmp472 = ((frost$collections$CollectionView*) $tmp471)->$class->itable;
while ($tmp472->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp472 = $tmp472->next;
}
$fn474 $tmp473 = $tmp472->methods[0];
frost$core$Int64 $tmp475 = $tmp473(((frost$collections$CollectionView*) $tmp471));
frost$core$Bit $tmp476 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp477 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp470, $tmp475, $tmp476);
frost$core$Int64 $tmp478 = $tmp477.min;
*(&local22) = $tmp478;
frost$core$Int64 $tmp479 = $tmp477.max;
frost$core$Bit $tmp480 = $tmp477.inclusive;
bool $tmp481 = $tmp480.value;
frost$core$Int64 $tmp482 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp483 = $tmp482.value;
frost$core$UInt64 $tmp484 = (frost$core$UInt64) {((uint64_t) $tmp483)};
if ($tmp481) goto block58; else goto block59;
block58:;
int64_t $tmp485 = $tmp478.value;
int64_t $tmp486 = $tmp479.value;
bool $tmp487 = $tmp485 <= $tmp486;
frost$core$Bit $tmp488 = (frost$core$Bit) {$tmp487};
bool $tmp489 = $tmp488.value;
if ($tmp489) goto block55; else goto block56;
block59:;
int64_t $tmp490 = $tmp478.value;
int64_t $tmp491 = $tmp479.value;
bool $tmp492 = $tmp490 < $tmp491;
frost$core$Bit $tmp493 = (frost$core$Bit) {$tmp492};
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block55; else goto block56;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:112
org$frostlang$frostc$IR* $tmp495 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp496 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp497 = (frost$core$Int64) {4};
org$frostlang$frostc$Position $tmp498 = *(&local12);
org$frostlang$frostc$Pair* $tmp499 = *(&local15);
frost$core$Object** $tmp500 = &$tmp499->second;
frost$core$Object* $tmp501 = *$tmp500;
frost$core$Int64 $tmp502 = *(&local22);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64($tmp496, $tmp497, $tmp498, param2, ((org$frostlang$frostc$ChoiceCase*) $tmp501), $tmp502);
$fn504 $tmp503 = ($fn504) $tmp495->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp505 = $tmp503($tmp495, $tmp496);
*(&local23) = $tmp505;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:115
org$frostlang$frostc$IR* $tmp506 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp507 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp508 = (frost$core$Int64) {14};
org$frostlang$frostc$Position $tmp509 = *(&local12);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp510 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp511 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp512 = *(&local23);
org$frostlang$frostc$Pair* $tmp513 = *(&local15);
frost$core$Object** $tmp514 = &$tmp513->second;
frost$core$Object* $tmp515 = *$tmp514;
frost$collections$Array** $tmp516 = &((org$frostlang$frostc$ChoiceCase*) $tmp515)->fields;
frost$collections$Array* $tmp517 = *$tmp516;
frost$core$Int64 $tmp518 = *(&local22);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Match.frost:116:91
frost$core$Int64 $tmp519 = (frost$core$Int64) {0};
int64_t $tmp520 = $tmp518.value;
int64_t $tmp521 = $tmp519.value;
bool $tmp522 = $tmp520 >= $tmp521;
frost$core$Bit $tmp523 = (frost$core$Bit) {$tmp522};
bool $tmp524 = $tmp523.value;
if ($tmp524) goto block63; else goto block62;
block63:;
ITable* $tmp525 = ((frost$collections$CollectionView*) $tmp517)->$class->itable;
while ($tmp525->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp525 = $tmp525->next;
}
$fn527 $tmp526 = $tmp525->methods[0];
frost$core$Int64 $tmp528 = $tmp526(((frost$collections$CollectionView*) $tmp517));
int64_t $tmp529 = $tmp518.value;
int64_t $tmp530 = $tmp528.value;
bool $tmp531 = $tmp529 < $tmp530;
frost$core$Bit $tmp532 = (frost$core$Bit) {$tmp531};
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp534 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s535, $tmp534, &$s536);
abort(); // unreachable
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp537 = &$tmp517->data;
frost$core$Object** $tmp538 = *$tmp537;
int64_t $tmp539 = $tmp518.value;
frost$core$Object* $tmp540 = $tmp538[$tmp539];
frost$core$Frost$ref$frost$core$Object$Q($tmp540);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp510, $tmp511, $tmp512, ((org$frostlang$frostc$Type*) $tmp540));
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp507, $tmp508, $tmp509, $tmp510);
$fn542 $tmp541 = ($fn542) $tmp506->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp543 = $tmp541($tmp506, $tmp507);
*(&local24) = $tmp543;
frost$core$Frost$unref$frost$core$Object$Q($tmp540);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:117
org$frostlang$frostc$FixedArray* $tmp544 = *(&local14);
frost$core$Int64 $tmp545 = *(&local22);
frost$core$Object* $tmp546 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp544, $tmp545);
frost$core$String* $tmp547 = org$frostlang$frostc$Compiler$getText$org$frostlang$frostc$ASTNode$R$frost$core$String$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp546));
*(&local25) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
frost$core$String* $tmp548 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
*(&local25) = $tmp547;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
frost$core$Frost$unref$frost$core$Object$Q($tmp546);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:118
frost$core$String* $tmp549 = *(&local25);
frost$core$Bit $tmp550 = frost$core$Bit$init$builtin_bit($tmp549 != NULL);
bool $tmp551 = $tmp550.value;
if ($tmp551) goto block66; else goto block65;
block66:;
frost$core$String* $tmp552 = *(&local25);
frost$core$Bit $tmp553 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp552, &$s554);
bool $tmp555 = $tmp553.value;
if ($tmp555) goto block64; else goto block65;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:119
frost$core$String* $tmp556 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
*(&local25) = ((frost$core$String*) NULL);
goto block57;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:121
*(&local26) = ((org$frostlang$frostc$Compiler$Target*) NULL);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:123
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp557 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp557, param0);
*(&local27) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp558 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local27) = $tmp557;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:124
org$frostlang$frostc$FixedArray* $tmp559 = *(&local14);
frost$core$Int64 $tmp560 = *(&local22);
frost$core$Object* $tmp561 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp559, $tmp560);
frost$core$Int64 $tmp562 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Variable.Kind from Match.frost:125:74
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int64* $tmp563 = &(&local29)->$rawValue;
*$tmp563 = $tmp562;
org$frostlang$frostc$Variable$Kind $tmp564 = *(&local29);
*(&local28) = $tmp564;
org$frostlang$frostc$Variable$Kind $tmp565 = *(&local28);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp566 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp567 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp568 = *(&local12);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp569 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp570 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp571 = *(&local24);
org$frostlang$frostc$Pair* $tmp572 = *(&local15);
frost$core$Object** $tmp573 = &$tmp572->second;
frost$core$Object* $tmp574 = *$tmp573;
frost$collections$Array** $tmp575 = &((org$frostlang$frostc$ChoiceCase*) $tmp574)->fields;
frost$collections$Array* $tmp576 = *$tmp575;
frost$core$Int64 $tmp577 = *(&local22);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Match.frost:128:89
frost$core$Int64 $tmp578 = (frost$core$Int64) {0};
int64_t $tmp579 = $tmp577.value;
int64_t $tmp580 = $tmp578.value;
bool $tmp581 = $tmp579 >= $tmp580;
frost$core$Bit $tmp582 = (frost$core$Bit) {$tmp581};
bool $tmp583 = $tmp582.value;
if ($tmp583) goto block71; else goto block70;
block71:;
ITable* $tmp584 = ((frost$collections$CollectionView*) $tmp576)->$class->itable;
while ($tmp584->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp584 = $tmp584->next;
}
$fn586 $tmp585 = $tmp584->methods[0];
frost$core$Int64 $tmp587 = $tmp585(((frost$collections$CollectionView*) $tmp576));
int64_t $tmp588 = $tmp577.value;
int64_t $tmp589 = $tmp587.value;
bool $tmp590 = $tmp588 < $tmp589;
frost$core$Bit $tmp591 = (frost$core$Bit) {$tmp590};
bool $tmp592 = $tmp591.value;
if ($tmp592) goto block69; else goto block70;
block70:;
frost$core$Int64 $tmp593 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s594, $tmp593, &$s595);
abort(); // unreachable
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp596 = &$tmp576->data;
frost$core$Object** $tmp597 = *$tmp596;
int64_t $tmp598 = $tmp577.value;
frost$core$Object* $tmp599 = $tmp597[$tmp598];
frost$core$Frost$ref$frost$core$Object$Q($tmp599);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp569, $tmp570, $tmp571, ((org$frostlang$frostc$Type*) $tmp599));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp566, $tmp567, $tmp568, $tmp569);
org$frostlang$frostc$Compiler$Target* $tmp600 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Compiler$Target$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp561), $tmp565, $tmp566, ((org$frostlang$frostc$Type*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
org$frostlang$frostc$Compiler$Target* $tmp601 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
*(&local26) = $tmp600;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
frost$core$Frost$unref$frost$core$Object$Q($tmp599);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
frost$core$Frost$unref$frost$core$Object$Q($tmp561);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:130
org$frostlang$frostc$Compiler$Target* $tmp602 = *(&local26);
frost$core$Bit $tmp603 = frost$core$Bit$init$builtin_bit($tmp602 == NULL);
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block72; else goto block73;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:131
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp605 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
*(&local27) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$Compiler$Target* $tmp606 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local26) = ((org$frostlang$frostc$Compiler$Target*) NULL);
frost$core$String* $tmp607 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
*(&local25) = ((frost$core$String*) NULL);
org$frostlang$frostc$IR$Value* $tmp608 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp609 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp610 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp611 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp612 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp613 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp614 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp615 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp616 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp617 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:133
org$frostlang$frostc$FixedArray* $tmp618 = *(&local14);
frost$core$Int64 $tmp619 = *(&local22);
frost$core$Object* $tmp620 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp618, $tmp619);
$fn622 $tmp621 = ($fn622) ((org$frostlang$frostc$ASTNode*) $tmp620)->$class->vtable[2];
org$frostlang$frostc$Position $tmp623 = $tmp621(((org$frostlang$frostc$ASTNode*) $tmp620));
org$frostlang$frostc$Compiler$Target* $tmp624 = *(&local26);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp625 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp626 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp627 = *(&local24);
org$frostlang$frostc$Pair* $tmp628 = *(&local15);
frost$core$Object** $tmp629 = &$tmp628->second;
frost$core$Object* $tmp630 = *$tmp629;
frost$collections$Array** $tmp631 = &((org$frostlang$frostc$ChoiceCase*) $tmp630)->fields;
frost$collections$Array* $tmp632 = *$tmp631;
frost$core$Int64 $tmp633 = *(&local22);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Match.frost:135:96
frost$core$Int64 $tmp634 = (frost$core$Int64) {0};
int64_t $tmp635 = $tmp633.value;
int64_t $tmp636 = $tmp634.value;
bool $tmp637 = $tmp635 >= $tmp636;
frost$core$Bit $tmp638 = (frost$core$Bit) {$tmp637};
bool $tmp639 = $tmp638.value;
if ($tmp639) goto block77; else goto block76;
block77:;
ITable* $tmp640 = ((frost$collections$CollectionView*) $tmp632)->$class->itable;
while ($tmp640->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp640 = $tmp640->next;
}
$fn642 $tmp641 = $tmp640->methods[0];
frost$core$Int64 $tmp643 = $tmp641(((frost$collections$CollectionView*) $tmp632));
int64_t $tmp644 = $tmp633.value;
int64_t $tmp645 = $tmp643.value;
bool $tmp646 = $tmp644 < $tmp645;
frost$core$Bit $tmp647 = (frost$core$Bit) {$tmp646};
bool $tmp648 = $tmp647.value;
if ($tmp648) goto block75; else goto block76;
block76:;
frost$core$Int64 $tmp649 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s650, $tmp649, &$s651);
abort(); // unreachable
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp652 = &$tmp632->data;
frost$core$Object** $tmp653 = *$tmp652;
int64_t $tmp654 = $tmp633.value;
frost$core$Object* $tmp655 = $tmp653[$tmp654];
frost$core$Frost$ref$frost$core$Object$Q($tmp655);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp625, $tmp626, $tmp627, ((org$frostlang$frostc$Type*) $tmp655));
org$frostlang$frostc$Compiler$compileStore$org$frostlang$frostc$Position$org$frostlang$frostc$Compiler$Target$org$frostlang$frostc$IR$Value(param0, $tmp623, $tmp624, $tmp625);
frost$core$Frost$unref$frost$core$Object$Q($tmp655);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
frost$core$Frost$unref$frost$core$Object$Q($tmp620);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp656 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
*(&local27) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:137
org$frostlang$frostc$Compiler$Target* $tmp657 = *(&local26);
org$frostlang$frostc$Compiler$createScopes$org$frostlang$frostc$Compiler$Target(param0, $tmp657);
org$frostlang$frostc$Compiler$Target* $tmp658 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
*(&local26) = ((org$frostlang$frostc$Compiler$Target*) NULL);
frost$core$String* $tmp659 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
*(&local25) = ((frost$core$String*) NULL);
goto block57;
block57:;
frost$core$Int64 $tmp660 = *(&local22);
int64_t $tmp661 = $tmp479.value;
int64_t $tmp662 = $tmp660.value;
int64_t $tmp663 = $tmp661 - $tmp662;
frost$core$Int64 $tmp664 = (frost$core$Int64) {$tmp663};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp665 = $tmp664.value;
frost$core$UInt64 $tmp666 = (frost$core$UInt64) {((uint64_t) $tmp665)};
if ($tmp481) goto block80; else goto block81;
block80:;
uint64_t $tmp667 = $tmp666.value;
uint64_t $tmp668 = $tmp484.value;
bool $tmp669 = $tmp667 >= $tmp668;
frost$core$Bit $tmp670 = (frost$core$Bit) {$tmp669};
bool $tmp671 = $tmp670.value;
if ($tmp671) goto block78; else goto block56;
block81:;
uint64_t $tmp672 = $tmp666.value;
uint64_t $tmp673 = $tmp484.value;
bool $tmp674 = $tmp672 > $tmp673;
frost$core$Bit $tmp675 = (frost$core$Bit) {$tmp674};
bool $tmp676 = $tmp675.value;
if ($tmp676) goto block78; else goto block56;
block78:;
int64_t $tmp677 = $tmp660.value;
int64_t $tmp678 = $tmp482.value;
int64_t $tmp679 = $tmp677 + $tmp678;
frost$core$Int64 $tmp680 = (frost$core$Int64) {$tmp679};
*(&local22) = $tmp680;
goto block55;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:139
org$frostlang$frostc$IR$Value* $tmp681 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp682 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp683 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp684 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp685 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block17;
block33:;
goto block31;
block31:;
org$frostlang$frostc$Pair* $tmp686 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp687 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp688 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block27;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:144
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:146
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp689 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp689, param0);
*(&local31) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp690 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
*(&local31) = $tmp689;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:147
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:148
org$frostlang$frostc$ASTNode* $tmp691 = *(&local11);
org$frostlang$frostc$Pair* $tmp692 = org$frostlang$frostc$Compiler$getChoiceCase$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Corg$frostlang$frostc$ChoiceCase$GT$Q(param0, $tmp691);
*(&local33) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
org$frostlang$frostc$Pair* $tmp693 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
*(&local33) = $tmp692;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:149
org$frostlang$frostc$Pair* $tmp694 = *(&local33);
frost$core$Bit $tmp695 = frost$core$Bit$init$builtin_bit($tmp694 != NULL);
bool $tmp696 = $tmp695.value;
if ($tmp696) goto block82; else goto block84;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:150
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp697 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp698 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp697, $tmp698);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp699 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp700 = (frost$core$Int64) {25};
org$frostlang$frostc$ASTNode* $tmp701 = *(&local11);
$fn703 $tmp702 = ($fn703) $tmp701->$class->vtable[2];
org$frostlang$frostc$Position $tmp704 = $tmp702($tmp701);
org$frostlang$frostc$Pair* $tmp705 = *(&local33);
frost$core$Object** $tmp706 = &$tmp705->second;
frost$core$Object* $tmp707 = *$tmp706;
frost$core$Int64* $tmp708 = &((org$frostlang$frostc$ChoiceCase*) $tmp707)->rawValue;
frost$core$Int64 $tmp709 = *$tmp708;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Match.frost:151:63
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp710 = $tmp709.value;
frost$core$UInt64 $tmp711 = (frost$core$UInt64) {((uint64_t) $tmp710)};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp699, $tmp700, $tmp704, $tmp711);
frost$collections$Array$add$frost$collections$Array$T($tmp697, ((frost$core$Object*) $tmp699));
*(&local34) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
frost$collections$Array* $tmp712 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
*(&local34) = $tmp697;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:152
org$frostlang$frostc$ASTNode* $tmp713 = *(&local11);
$fn715 $tmp714 = ($fn715) $tmp713->$class->vtable[2];
org$frostlang$frostc$Position $tmp716 = $tmp714($tmp713);
frost$collections$Array* $tmp717 = *(&local34);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp718 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp719 = (frost$core$Int64) {3};
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from Match.frost:153:81
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp720 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp721 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp722 = &(&local36)->$rawValue;
*$tmp722 = $tmp721;
org$frostlang$frostc$Type$Kind $tmp723 = *(&local36);
*(&local35) = $tmp723;
org$frostlang$frostc$Type$Kind $tmp724 = *(&local35);
org$frostlang$frostc$Position $tmp725 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp726 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp720, &$s727, $tmp724, $tmp725, $tmp726);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$Bit $tmp728 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp718, $tmp719, $tmp720, $tmp728);
org$frostlang$frostc$IR$Value* $tmp729 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp716, param4, &$s730, ((frost$collections$ListView*) $tmp717), $tmp718);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
org$frostlang$frostc$IR$Value* $tmp731 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
*(&local32) = $tmp729;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:154
org$frostlang$frostc$IR$Value* $tmp732 = *(&local32);
frost$core$Bit $tmp733 = frost$core$Bit$init$builtin_bit($tmp732 == NULL);
bool $tmp734 = $tmp733.value;
if ($tmp734) goto block88; else goto block89;
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:155
frost$collections$Array* $tmp735 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
*(&local34) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp736 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
*(&local33) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp737 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp738 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
*(&local31) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp739 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp740 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp741 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp742 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp743 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp744 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp745 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block89:;
frost$collections$Array* $tmp746 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
*(&local34) = ((frost$collections$Array*) NULL);
goto block83;
block84:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:159
org$frostlang$frostc$ASTNode* $tmp747 = *(&local11);
$fn749 $tmp748 = ($fn749) $tmp747->$class->vtable[2];
org$frostlang$frostc$Position $tmp750 = $tmp748($tmp747);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp751 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp752 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp751, $tmp752);
org$frostlang$frostc$ASTNode* $tmp753 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp751, ((frost$core$Object*) $tmp753));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp754 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp755 = (frost$core$Int64) {3};
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from Match.frost:160:70
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp756 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp757 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp758 = &(&local38)->$rawValue;
*$tmp758 = $tmp757;
org$frostlang$frostc$Type$Kind $tmp759 = *(&local38);
*(&local37) = $tmp759;
org$frostlang$frostc$Type$Kind $tmp760 = *(&local37);
org$frostlang$frostc$Position $tmp761 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp762 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp756, &$s763, $tmp760, $tmp761, $tmp762);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
frost$core$Bit $tmp764 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp754, $tmp755, $tmp756, $tmp764);
org$frostlang$frostc$IR$Value* $tmp765 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp750, param2, &$s766, ((frost$collections$ListView*) $tmp751), $tmp754);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
org$frostlang$frostc$IR$Value* $tmp767 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
*(&local32) = $tmp765;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:161
org$frostlang$frostc$IR$Value* $tmp768 = *(&local32);
frost$core$Bit $tmp769 = frost$core$Bit$init$builtin_bit($tmp768 == NULL);
bool $tmp770 = $tmp769.value;
if ($tmp770) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:162
org$frostlang$frostc$Pair* $tmp771 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
*(&local33) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp772 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp773 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
*(&local31) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp774 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp775 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp776 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp777 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp778 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp779 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp780 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block93:;
goto block83;
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:165
org$frostlang$frostc$Position $tmp781 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp782 = *(&local32);
org$frostlang$frostc$IR$Value* $tmp783 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, $tmp781, $tmp782);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
org$frostlang$frostc$IR$Value* $tmp784 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
*(&local30) = $tmp783;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
org$frostlang$frostc$Pair* $tmp785 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
*(&local33) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp786 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp787 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
*(&local31) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:167
org$frostlang$frostc$IR* $tmp788 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp789 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp790 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp791 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp792 = *(&local30);
org$frostlang$frostc$IR$Block$ID $tmp793 = *(&local9);
org$frostlang$frostc$IR$Block$ID $tmp794 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp789, $tmp790, $tmp791, $tmp792, $tmp793, $tmp794);
$fn796 $tmp795 = ($fn796) $tmp788->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp797 = $tmp795($tmp788, $tmp789);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
org$frostlang$frostc$IR$Value* $tmp798 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp799 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block17;
block17:;
frost$core$Int64 $tmp800 = *(&local10);
int64_t $tmp801 = $tmp140.value;
int64_t $tmp802 = $tmp800.value;
int64_t $tmp803 = $tmp801 - $tmp802;
frost$core$Int64 $tmp804 = (frost$core$Int64) {$tmp803};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp805 = $tmp804.value;
frost$core$UInt64 $tmp806 = (frost$core$UInt64) {((uint64_t) $tmp805)};
if ($tmp142) goto block96; else goto block97;
block96:;
uint64_t $tmp807 = $tmp806.value;
uint64_t $tmp808 = $tmp145.value;
bool $tmp809 = $tmp807 >= $tmp808;
frost$core$Bit $tmp810 = (frost$core$Bit) {$tmp809};
bool $tmp811 = $tmp810.value;
if ($tmp811) goto block94; else goto block16;
block97:;
uint64_t $tmp812 = $tmp806.value;
uint64_t $tmp813 = $tmp145.value;
bool $tmp814 = $tmp812 > $tmp813;
frost$core$Bit $tmp815 = (frost$core$Bit) {$tmp814};
bool $tmp816 = $tmp815.value;
if ($tmp816) goto block94; else goto block16;
block94:;
int64_t $tmp817 = $tmp800.value;
int64_t $tmp818 = $tmp143.value;
int64_t $tmp819 = $tmp817 + $tmp818;
frost$core$Int64 $tmp820 = (frost$core$Int64) {$tmp819};
*(&local10) = $tmp820;
goto block15;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:170
org$frostlang$frostc$IR* $tmp821 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp822 = *(&local9);
$fn824 $tmp823 = ($fn824) $tmp821->$class->vtable[4];
$tmp823($tmp821, $tmp822);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:171
org$frostlang$frostc$FixedArray* $tmp825 = *(&local7);
ITable* $tmp826 = ((frost$collections$Iterable*) $tmp825)->$class->itable;
while ($tmp826->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp826 = $tmp826->next;
}
$fn828 $tmp827 = $tmp826->methods[0];
frost$collections$Iterator* $tmp829 = $tmp827(((frost$collections$Iterable*) $tmp825));
goto block98;
block98:;
ITable* $tmp830 = $tmp829->$class->itable;
while ($tmp830->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp830 = $tmp830->next;
}
$fn832 $tmp831 = $tmp830->methods[0];
frost$core$Bit $tmp833 = $tmp831($tmp829);
bool $tmp834 = $tmp833.value;
if ($tmp834) goto block100; else goto block99;
block99:;
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp835 = $tmp829->$class->itable;
while ($tmp835->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp835 = $tmp835->next;
}
$fn837 $tmp836 = $tmp835->methods[1];
frost$core$Object* $tmp838 = $tmp836($tmp829);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp838)));
org$frostlang$frostc$ASTNode* $tmp839 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
*(&local39) = ((org$frostlang$frostc$ASTNode*) $tmp838);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:172
org$frostlang$frostc$ASTNode* $tmp840 = *(&local39);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp840);
frost$core$Frost$unref$frost$core$Object$Q($tmp838);
org$frostlang$frostc$ASTNode* $tmp841 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block98;
block100:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
org$frostlang$frostc$Compiler$AutoScope* $tmp842 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:175
org$frostlang$frostc$IR* $tmp843 = *(&local0);
$fn845 $tmp844 = ($fn845) $tmp843->$class->vtable[5];
frost$core$Bit $tmp846 = $tmp844($tmp843);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Match.frost:175:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp847 = $tmp846.value;
bool $tmp848 = !$tmp847;
frost$core$Bit $tmp849 = (frost$core$Bit) {$tmp848};
bool $tmp850 = $tmp849.value;
if ($tmp850) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:176
org$frostlang$frostc$IR* $tmp851 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp852 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp853 = (frost$core$Int64) {1};
org$frostlang$frostc$Position $tmp854 = *(&local5);
org$frostlang$frostc$IR$Block$ID $tmp855 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp852, $tmp853, $tmp854, $tmp855);
$fn857 $tmp856 = ($fn857) $tmp851->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp858 = $tmp856($tmp851, $tmp852);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
goto block102;
block102:;
org$frostlang$frostc$FixedArray* $tmp859 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp860 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp861 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Int64 $tmp862 = *(&local3);
int64_t $tmp863 = $tmp88.value;
int64_t $tmp864 = $tmp862.value;
int64_t $tmp865 = $tmp863 - $tmp864;
frost$core$Int64 $tmp866 = (frost$core$Int64) {$tmp865};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp867 = $tmp866.value;
frost$core$UInt64 $tmp868 = (frost$core$UInt64) {((uint64_t) $tmp867)};
if ($tmp90) goto block106; else goto block107;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:180
frost$core$Int64 $tmp869 = (frost$core$Int64) {180};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s870, $tmp869);
abort(); // unreachable
block106:;
uint64_t $tmp871 = $tmp868.value;
uint64_t $tmp872 = $tmp93.value;
bool $tmp873 = $tmp871 >= $tmp872;
frost$core$Bit $tmp874 = (frost$core$Bit) {$tmp873};
bool $tmp875 = $tmp874.value;
if ($tmp875) goto block104; else goto block6;
block107:;
uint64_t $tmp876 = $tmp868.value;
uint64_t $tmp877 = $tmp93.value;
bool $tmp878 = $tmp876 > $tmp877;
frost$core$Bit $tmp879 = (frost$core$Bit) {$tmp878};
bool $tmp880 = $tmp879.value;
if ($tmp880) goto block104; else goto block6;
block104:;
int64_t $tmp881 = $tmp862.value;
int64_t $tmp882 = $tmp91.value;
int64_t $tmp883 = $tmp881 + $tmp882;
frost$core$Int64 $tmp884 = (frost$core$Int64) {$tmp883};
*(&local3) = $tmp884;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:184
frost$core$Bit $tmp885 = frost$core$Bit$init$builtin_bit(param6 != NULL);
bool $tmp886 = $tmp885.value;
if ($tmp886) goto block108; else goto block109;
block108:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:186
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp887 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp887, param0);
*(&local40) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
org$frostlang$frostc$Compiler$AutoScope* $tmp888 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
*(&local40) = $tmp887;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:187
org$frostlang$frostc$IR* $tmp889 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp890 = *(&local2);
$fn892 $tmp891 = ($fn892) $tmp889->$class->vtable[4];
$tmp891($tmp889, $tmp890);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:188
ITable* $tmp893 = ((frost$collections$Iterable*) param6)->$class->itable;
while ($tmp893->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp893 = $tmp893->next;
}
$fn895 $tmp894 = $tmp893->methods[0];
frost$collections$Iterator* $tmp896 = $tmp894(((frost$collections$Iterable*) param6));
goto block110;
block110:;
ITable* $tmp897 = $tmp896->$class->itable;
while ($tmp897->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp897 = $tmp897->next;
}
$fn899 $tmp898 = $tmp897->methods[0];
frost$core$Bit $tmp900 = $tmp898($tmp896);
bool $tmp901 = $tmp900.value;
if ($tmp901) goto block112; else goto block111;
block111:;
*(&local41) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp902 = $tmp896->$class->itable;
while ($tmp902->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp902 = $tmp902->next;
}
$fn904 $tmp903 = $tmp902->methods[1];
frost$core$Object* $tmp905 = $tmp903($tmp896);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp905)));
org$frostlang$frostc$ASTNode* $tmp906 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
*(&local41) = ((org$frostlang$frostc$ASTNode*) $tmp905);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:189
org$frostlang$frostc$ASTNode* $tmp907 = *(&local41);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp907);
frost$core$Frost$unref$frost$core$Object$Q($tmp905);
org$frostlang$frostc$ASTNode* $tmp908 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
*(&local41) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block110;
block112:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
org$frostlang$frostc$Compiler$AutoScope* $tmp909 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
*(&local40) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:192
org$frostlang$frostc$IR* $tmp910 = *(&local0);
$fn912 $tmp911 = ($fn912) $tmp910->$class->vtable[5];
frost$core$Bit $tmp913 = $tmp911($tmp910);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Match.frost:192:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp914 = $tmp913.value;
bool $tmp915 = !$tmp914;
frost$core$Bit $tmp916 = (frost$core$Bit) {$tmp915};
bool $tmp917 = $tmp916.value;
if ($tmp917) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:193
org$frostlang$frostc$IR* $tmp918 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp919 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp920 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp921 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp919, $tmp920, param1, $tmp921);
$fn923 $tmp922 = ($fn923) $tmp918->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp924 = $tmp922($tmp918, $tmp919);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
goto block114;
block114:;
goto block109;
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:196
org$frostlang$frostc$IR* $tmp925 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp926 = *(&local1);
$fn928 $tmp927 = ($fn928) $tmp925->$class->vtable[4];
$tmp927($tmp925, $tmp926);
org$frostlang$frostc$IR* $tmp929 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
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
org$frostlang$frostc$Compiler$TypeContext* $tmp930 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp931 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp930, $tmp931);
org$frostlang$frostc$IR$Value* $tmp932 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp930);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
org$frostlang$frostc$IR$Value* $tmp933 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
*(&local0) = $tmp932;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:203
org$frostlang$frostc$IR$Value* $tmp934 = *(&local0);
frost$core$Bit $tmp935 = frost$core$Bit$init$builtin_bit($tmp934 == NULL);
bool $tmp936 = $tmp935.value;
if ($tmp936) goto block1; else goto block3;
block3:;
ITable* $tmp937 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp937->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp937 = $tmp937->next;
}
$fn939 $tmp938 = $tmp937->methods[0];
frost$core$Int64 $tmp940 = $tmp938(((frost$collections$CollectionView*) param3));
frost$core$Int64 $tmp941 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Match.frost:203:49
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp942 = $tmp940.value;
int64_t $tmp943 = $tmp941.value;
bool $tmp944 = $tmp942 == $tmp943;
frost$core$Bit $tmp945 = frost$core$Bit$init$builtin_bit($tmp944);
bool $tmp946 = $tmp945.value;
if ($tmp946) goto block4; else goto block2;
block4:;
frost$core$Bit $tmp947 = frost$core$Bit$init$builtin_bit(param4 == NULL);
bool $tmp948 = $tmp947.value;
if ($tmp948) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:204
org$frostlang$frostc$IR$Value* $tmp949 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:206
org$frostlang$frostc$IR$Value* $tmp950 = *(&local0);
$fn952 $tmp951 = ($fn952) $tmp950->$class->vtable[2];
org$frostlang$frostc$Type* $tmp953 = $tmp951($tmp950);
org$frostlang$frostc$ClassDecl* $tmp954 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp953);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
org$frostlang$frostc$ClassDecl* $tmp955 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
*(&local1) = $tmp954;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:207
org$frostlang$frostc$ClassDecl* $tmp956 = *(&local1);
frost$core$Bit $tmp957 = frost$core$Bit$init$builtin_bit($tmp956 == NULL);
bool $tmp958 = $tmp957.value;
if ($tmp958) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:208
org$frostlang$frostc$ClassDecl* $tmp959 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp960 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:210
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp961 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:211
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:212
org$frostlang$frostc$ClassDecl* $tmp962 = *(&local1);
org$frostlang$frostc$ClassDecl$Kind* $tmp963 = &$tmp962->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp964 = *$tmp963;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp965;
$tmp965 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp965->value = $tmp964;
frost$core$Int64 $tmp966 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from Match.frost:212:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp967 = &(&local5)->$rawValue;
*$tmp967 = $tmp966;
org$frostlang$frostc$ClassDecl$Kind $tmp968 = *(&local5);
*(&local4) = $tmp968;
org$frostlang$frostc$ClassDecl$Kind $tmp969 = *(&local4);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp970;
$tmp970 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp970->value = $tmp969;
ITable* $tmp971 = ((frost$core$Equatable*) $tmp965)->$class->itable;
while ($tmp971->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp971 = $tmp971->next;
}
$fn973 $tmp972 = $tmp971->methods[0];
frost$core$Bit $tmp974 = $tmp972(((frost$core$Equatable*) $tmp965), ((frost$core$Equatable*) $tmp970));
bool $tmp975 = $tmp974.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp970)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp965)));
if ($tmp975) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:213
org$frostlang$frostc$IR$Value* $tmp976 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp977 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp976, &$s978);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
org$frostlang$frostc$IR$Value* $tmp979 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
*(&local3) = $tmp977;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:215
org$frostlang$frostc$ClassDecl* $tmp980 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
org$frostlang$frostc$ClassDecl* $tmp981 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
*(&local2) = $tmp980;
goto block9;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:217
org$frostlang$frostc$ClassDecl* $tmp982 = *(&local1);
org$frostlang$frostc$SymbolTable* $tmp983 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp982);
org$frostlang$frostc$Symbol* $tmp984 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp983, &$s985);
frost$core$Bit $tmp986 = frost$core$Bit$init$builtin_bit($tmp984 == NULL);
bool $tmp987 = $tmp986.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
if ($tmp987) goto block12; else goto block14;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:218
$fn989 $tmp988 = ($fn989) param2->$class->vtable[2];
org$frostlang$frostc$Position $tmp990 = $tmp988(param2);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp990, &$s991);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:219
org$frostlang$frostc$IR$Value* $tmp992 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp993 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp994 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp995 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block14:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:222
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp996 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:224
org$frostlang$frostc$IR$Value* $tmp997 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp998 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp999 = *(&local3);
org$frostlang$frostc$statement$Match$compileChainedIfMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0, param1, $tmp997, $tmp998, $tmp999, param3, param4);
org$frostlang$frostc$IR$Value* $tmp1000 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1001 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1002 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp1003 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
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

