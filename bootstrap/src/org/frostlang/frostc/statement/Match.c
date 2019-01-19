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
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/AutoScope.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/Compiler/AutoUnrefs.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
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
#include "org/frostlang/frostc/Variable/Kind.h"
#include "org/frostlang/frostc/lvalue/VariableLValue.h"
#include "org/frostlang/frostc/Variable.h"
#include "frost/collections/Stack.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/ClassDecl/Kind.h"
#include "org/frostlang/frostc/expression/Dot.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Match$class_type org$frostlang$frostc$statement$Match$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Match$cleanup} };

typedef org$frostlang$frostc$Type* (*$fn17)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn59)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn78)(org$frostlang$frostc$IR*, frost$core$String*);
typedef frost$core$Int64 (*$fn89)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn130)(org$frostlang$frostc$IR*, frost$core$String*);
typedef frost$core$Int64 (*$fn137)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn167)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn173)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn178)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn193)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn211)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$Position (*$fn241)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Int64 (*$fn256)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn280)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn294)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn328)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn344)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn351)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Int64 (*$fn364)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn381)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Position (*$fn424)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn440)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn479)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn484)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn489)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn523)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn545)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn612)(org$frostlang$frostc$lvalue$VariableLValue*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Position (*$fn681)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn697)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn728)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn772)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn799)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn803)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn807)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn812)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn820)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn830)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn866)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn874)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn878)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn883)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn891)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn900)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn905)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn916)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn933)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn957)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn983)(org$frostlang$frostc$ASTNode*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x4d\x61\x74\x63\x68", 36, -4868280242278132552, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 87, -2032492218824522205, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x61\x74\x63\x68\x20\x63\x68\x6f\x69\x63\x65\x20\x63\x61\x73\x65\x20\x27", 26, 924211577719466455, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x61\x67\x61\x69\x6e\x73\x74\x20\x27", 11, 5504180647906747646, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65", 101, -1397686394145453433, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 87, -2032492218824522205, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x61\x74\x63\x68\x20\x63\x68\x6f\x69\x63\x65\x20\x63\x61\x73\x65\x20\x27", 26, 924211577719466455, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x61\x67\x61\x69\x6e\x73\x74\x20", 10, 5899009811946657419, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x4d\x61\x74\x63\x68\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x43\x68\x61\x69\x6e\x65\x64\x49\x66\x4d\x61\x74\x63\x68\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2c\x20\x63\x68\x6f\x69\x63\x65\x43\x6c\x61\x73\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x2c\x20\x63\x68\x6f\x69\x63\x65\x52\x61\x77\x56\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x77\x68\x65\x6e\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x6f\x74\x68\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x29", 438, 5866251470127575791, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x74\x63\x68\x20\x65\x6e\x64", 9, 2284522982428118369, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x65\x73\x74\x20\x73\x75\x63\x63\x65\x73\x73", 12, 7036109776132282178, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x74\x63\x68", 5, 21953816826, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s248 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, 634663051022967754, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x65\x73\x74\x72\x75\x63\x74\x75\x72\x69\x6e\x67\x20\x63\x68\x6f\x69\x63\x65\x20\x27\x77\x68\x65\x6e\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x74\x6f\x67\x65\x74\x68\x65\x72\x20\x77\x69\x74\x68\x20", 57, 7310936708811456764, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x74\x68\x65\x72\x20\x27\x77\x68\x65\x6e\x27\x20\x63\x6f\x6d\x70\x61\x72\x69\x73\x6f\x6e\x73", 24, 5365199314206252049, NULL };
static frost$core$String $s286 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, 634663051022967754, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, 634663051022967754, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x27", 8, 21554282788333791, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20", 2, 14172, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x71\x75\x69\x72\x65\x73\x20", 9, 2339091676660267913, NULL };
static frost$core$String $s320 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s321 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, 634663051022967754, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, 634663051022967754, NULL };
static frost$core$String $s353 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x61\x72\x67\x75\x6d\x65\x6e\x74", 9, 1450721239526715900, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s360 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 10, -2438145452310052756, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x69\x73\x20", 5, 14602508524, NULL };
static frost$core$String $s388 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 19, 2848546980520752179, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, 634663051022967754, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s431 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, 634663051022967754, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s446 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s452 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s464 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s465 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s517 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s518 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, 634663051022967754, NULL };
static frost$core$String $s536 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s537 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, 634663051022967754, NULL };
static frost$core$String $s554 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s555 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s557 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s576 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s577 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, 634663051022967754, NULL };
static frost$core$String $s592 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s593 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 152, 6301997373933244768, NULL };
static frost$core$String $s603 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s604 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, 634663051022967754, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s619 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 152, 6301997373933244768, NULL };
static frost$core$String $s634 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s635 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 152, 6301997373933244768, NULL };
static frost$core$String $s687 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s688 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, 634663051022967754, NULL };
static frost$core$String $s702 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s703 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s709 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s737 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s757 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s758 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s837 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s870 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s871 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 8545549524367827092, NULL };
static frost$core$String $s930 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s931 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s947 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s948 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s964 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s965 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s967 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static frost$core$String $s975 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s976 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s979 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s985 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27\x20\x76\x61\x6c\x75\x65\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x64\x65\x66\x69\x6e\x65\x20\x74\x68\x65\x20\x27\x3d\x27\x20\x6f\x70\x65\x72\x61\x74\x6f\x72", 46, 6331121231047041348, NULL };
static frost$core$String $s995 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s996 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };

frost$core$Bit org$frostlang$frostc$statement$Match$checkChoiceMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ChoiceCase$Q$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$R$frost$core$Bit(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ChoiceCase* param2, org$frostlang$frostc$ClassDecl* param3, org$frostlang$frostc$IR$Value* param4) {

// line 28
frost$core$Bit $tmp2 = frost$core$Bit$init$builtin_bit(param2 == NULL);
bool $tmp3 = $tmp2.value;
if ($tmp3) goto block1; else goto block2;
block1:;
// line 29
frost$core$Bit $tmp4 = frost$core$Bit$init$builtin_bit(false);
return $tmp4;
block2:;
// line 31
frost$core$Bit $tmp5 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block3; else goto block4;
block3:;
// line 32
frost$core$Bit $tmp7 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp9 = (frost$core$Int64) {32};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s10, $tmp9, &$s11);
abort(); // unreachable
block5:;
frost$core$String* $tmp12 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s13, ((frost$core$Object*) param2));
frost$core$String* $tmp14 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp12, &$s15);
$fn17 $tmp16 = ($fn17) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp18 = $tmp16(param4);
frost$core$String* $tmp19 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp14, ((frost$core$Object*) $tmp18));
frost$core$String* $tmp20 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp19, &$s21);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// unreffing REF($28:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
// unreffing REF($27:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
// unreffing REF($25:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// unreffing REF($23:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
// unreffing REF($22:frost.core.String)
// line 33
frost$core$Bit $tmp22 = frost$core$Bit$init$builtin_bit(false);
return $tmp22;
block4:;
// line 35
frost$core$Bit $tmp23 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp25 = (frost$core$Int64) {35};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s26, $tmp25, &$s27);
abort(); // unreachable
block9:;
frost$core$Weak** $tmp28 = &param2->owner;
frost$core$Weak* $tmp29 = *$tmp28;
frost$core$Object* $tmp30 = frost$core$Weak$get$R$frost$core$Weak$T($tmp29);
bool $tmp31 = ((org$frostlang$frostc$ClassDecl*) $tmp30) != param3;
frost$core$Bit $tmp32 = frost$core$Bit$init$builtin_bit($tmp31);
bool $tmp33 = $tmp32.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp30);
// unreffing REF($60:frost.core.Weak.T)
if ($tmp33) goto block7; else goto block8;
block7:;
// line 36
frost$core$Bit $tmp34 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp36 = (frost$core$Int64) {36};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s37, $tmp36, &$s38);
abort(); // unreachable
block11:;
frost$core$String* $tmp39 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s40, ((frost$core$Object*) param2));
frost$core$String* $tmp41 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp39, &$s42);
frost$core$Bit $tmp43 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp45 = (frost$core$Int64) {37};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s46, $tmp45, &$s47);
abort(); // unreachable
block13:;
frost$core$String** $tmp48 = &param3->name;
frost$core$String* $tmp49 = *$tmp48;
frost$core$String* $tmp50 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s51, $tmp49);
frost$core$String* $tmp52 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp50, &$s53);
frost$core$String* $tmp54 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp41, $tmp52);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
// unreffing REF($92:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
// unreffing REF($91:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// unreffing REF($90:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
// unreffing REF($79:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
// unreffing REF($78:frost.core.String)
// line 38
frost$core$Bit $tmp55 = frost$core$Bit$init$builtin_bit(false);
return $tmp55;
block8:;
// line 40
frost$core$Bit $tmp56 = frost$core$Bit$init$builtin_bit(true);
return $tmp56;

}
void org$frostlang$frostc$statement$Match$compileChainedIfMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$ClassDecl* param3, org$frostlang$frostc$IR$Value* param4, org$frostlang$frostc$FixedArray* param5, org$frostlang$frostc$FixedArray* param6) {

frost$core$Bit local0;
org$frostlang$frostc$IR* local1 = NULL;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$IR$Block$ID local3;
frost$core$Int64 local4;
org$frostlang$frostc$ASTNode* local5 = NULL;
org$frostlang$frostc$Position local6;
org$frostlang$frostc$FixedArray* local7 = NULL;
org$frostlang$frostc$FixedArray* local8 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local9 = NULL;
org$frostlang$frostc$IR$Block$ID local10;
frost$core$Int64 local11;
frost$core$Bit local12;
frost$core$Bit local13;
org$frostlang$frostc$ASTNode* local14 = NULL;
org$frostlang$frostc$Position local15;
org$frostlang$frostc$ASTNode* local16 = NULL;
org$frostlang$frostc$FixedArray* local17 = NULL;
org$frostlang$frostc$Pair* local18 = NULL;
org$frostlang$frostc$IR$Value* local19 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local20 = NULL;
frost$collections$Array* local21 = NULL;
org$frostlang$frostc$IR$Value* local22 = NULL;
frost$core$Int64 local23;
org$frostlang$frostc$IR$Statement$ID local24;
org$frostlang$frostc$IR$Statement$ID local25;
org$frostlang$frostc$Pair* local26 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local27 = NULL;
org$frostlang$frostc$IR$Value* local28 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local29 = NULL;
org$frostlang$frostc$IR$Value* local30 = NULL;
org$frostlang$frostc$Pair* local31 = NULL;
frost$collections$Array* local32 = NULL;
org$frostlang$frostc$ASTNode* local33 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local34 = NULL;
org$frostlang$frostc$ASTNode* local35 = NULL;
ITable* $tmp57 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp57 = $tmp57->next;
}
$fn59 $tmp58 = $tmp57->methods[0];
frost$core$Int64 $tmp60 = $tmp58(((frost$collections$CollectionView*) param5));
frost$core$Int64 $tmp61 = (frost$core$Int64) {0};
int64_t $tmp62 = $tmp60.value;
int64_t $tmp63 = $tmp61.value;
bool $tmp64 = $tmp62 > $tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block1; else goto block2;
block1:;
*(&local0) = $tmp65;
goto block3;
block2:;
frost$core$Bit $tmp67 = frost$core$Bit$init$builtin_bit(param6 != NULL);
*(&local0) = $tmp67;
goto block3;
block3:;
frost$core$Bit $tmp68 = *(&local0);
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp70 = (frost$core$Int64) {46};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s71, $tmp70, &$s72);
abort(); // unreachable
block4:;
// line 49
org$frostlang$frostc$IR** $tmp73 = &param0->ir;
org$frostlang$frostc$IR* $tmp74 = *$tmp73;
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
org$frostlang$frostc$IR* $tmp75 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
*(&local1) = $tmp74;
// line 50
org$frostlang$frostc$IR* $tmp76 = *(&local1);
$fn78 $tmp77 = ($fn78) $tmp76->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp79 = $tmp77($tmp76, &$s80);
*(&local2) = $tmp79;
// line 51
org$frostlang$frostc$IR* $tmp81 = *(&local1);
org$frostlang$frostc$IR$Block** $tmp82 = &$tmp81->currentBlock;
org$frostlang$frostc$IR$Block* $tmp83 = *$tmp82;
org$frostlang$frostc$IR$Block$ID* $tmp84 = &$tmp83->id;
org$frostlang$frostc$IR$Block$ID $tmp85 = *$tmp84;
*(&local3) = $tmp85;
// line 52
frost$core$Int64 $tmp86 = (frost$core$Int64) {0};
ITable* $tmp87 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp87->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp87 = $tmp87->next;
}
$fn89 $tmp88 = $tmp87->methods[0];
frost$core$Int64 $tmp90 = $tmp88(((frost$collections$CollectionView*) param5));
frost$core$Bit $tmp91 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp92 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp86, $tmp90, $tmp91);
frost$core$Int64 $tmp93 = $tmp92.min;
*(&local4) = $tmp93;
frost$core$Int64 $tmp94 = $tmp92.max;
frost$core$Bit $tmp95 = $tmp92.inclusive;
bool $tmp96 = $tmp95.value;
frost$core$Int64 $tmp97 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp98 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp97);
if ($tmp96) goto block9; else goto block10;
block9:;
int64_t $tmp99 = $tmp93.value;
int64_t $tmp100 = $tmp94.value;
bool $tmp101 = $tmp99 <= $tmp100;
frost$core$Bit $tmp102 = (frost$core$Bit) {$tmp101};
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block6; else goto block7;
block10:;
int64_t $tmp104 = $tmp93.value;
int64_t $tmp105 = $tmp94.value;
bool $tmp106 = $tmp104 < $tmp105;
frost$core$Bit $tmp107 = (frost$core$Bit) {$tmp106};
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block6; else goto block7;
block6:;
// line 53
frost$core$Int64 $tmp109 = *(&local4);
frost$core$Object* $tmp110 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T(param5, $tmp109);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp110)));
org$frostlang$frostc$ASTNode* $tmp111 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
*(&local5) = ((org$frostlang$frostc$ASTNode*) $tmp110);
frost$core$Frost$unref$frost$core$Object$Q($tmp110);
// unreffing REF($74:org.frostlang.frostc.FixedArray.T)
// line 54
org$frostlang$frostc$ASTNode* $tmp112 = *(&local5);
frost$core$Int64* $tmp113 = &$tmp112->$rawValue;
frost$core$Int64 $tmp114 = *$tmp113;
frost$core$Int64 $tmp115 = (frost$core$Int64) {52};
frost$core$Bit $tmp116 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp114, $tmp115);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp118 = (org$frostlang$frostc$Position*) ($tmp112->$data + 0);
org$frostlang$frostc$Position $tmp119 = *$tmp118;
*(&local6) = $tmp119;
org$frostlang$frostc$FixedArray** $tmp120 = (org$frostlang$frostc$FixedArray**) ($tmp112->$data + 16);
org$frostlang$frostc$FixedArray* $tmp121 = *$tmp120;
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
org$frostlang$frostc$FixedArray* $tmp122 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
*(&local7) = $tmp121;
org$frostlang$frostc$FixedArray** $tmp123 = (org$frostlang$frostc$FixedArray**) ($tmp112->$data + 24);
org$frostlang$frostc$FixedArray* $tmp124 = *$tmp123;
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
org$frostlang$frostc$FixedArray* $tmp125 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
*(&local8) = $tmp124;
// line 1
// line 57
org$frostlang$frostc$Compiler$AutoScope* $tmp126 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp126, param0);
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
org$frostlang$frostc$Compiler$AutoScope* $tmp127 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
*(&local9) = $tmp126;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
// unreffing REF($117:org.frostlang.frostc.Compiler.AutoScope)
// line 58
org$frostlang$frostc$IR* $tmp128 = *(&local1);
$fn130 $tmp129 = ($fn130) $tmp128->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp131 = $tmp129($tmp128, &$s132);
*(&local10) = $tmp131;
// line 59
frost$core$Int64 $tmp133 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp134 = *(&local7);
ITable* $tmp135 = ((frost$collections$CollectionView*) $tmp134)->$class->itable;
while ($tmp135->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp135 = $tmp135->next;
}
$fn137 $tmp136 = $tmp135->methods[0];
frost$core$Int64 $tmp138 = $tmp136(((frost$collections$CollectionView*) $tmp134));
frost$core$Bit $tmp139 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp140 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp133, $tmp138, $tmp139);
frost$core$Int64 $tmp141 = $tmp140.min;
*(&local11) = $tmp141;
frost$core$Int64 $tmp142 = $tmp140.max;
frost$core$Bit $tmp143 = $tmp140.inclusive;
bool $tmp144 = $tmp143.value;
frost$core$Int64 $tmp145 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp146 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp145);
if ($tmp144) goto block17; else goto block18;
block17:;
int64_t $tmp147 = $tmp141.value;
int64_t $tmp148 = $tmp142.value;
bool $tmp149 = $tmp147 <= $tmp148;
frost$core$Bit $tmp150 = (frost$core$Bit) {$tmp149};
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block14; else goto block15;
block18:;
int64_t $tmp152 = $tmp141.value;
int64_t $tmp153 = $tmp142.value;
bool $tmp154 = $tmp152 < $tmp153;
frost$core$Bit $tmp155 = (frost$core$Bit) {$tmp154};
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block14; else goto block15;
block14:;
// line 60
org$frostlang$frostc$IR$Block$ID $tmp157 = *(&local3);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp158;
$tmp158 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp158->value = $tmp157;
org$frostlang$frostc$IR* $tmp159 = *(&local1);
org$frostlang$frostc$IR$Block** $tmp160 = &$tmp159->currentBlock;
org$frostlang$frostc$IR$Block* $tmp161 = *$tmp160;
org$frostlang$frostc$IR$Block$ID* $tmp162 = &$tmp161->id;
org$frostlang$frostc$IR$Block$ID $tmp163 = *$tmp162;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp164;
$tmp164 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp164->value = $tmp163;
ITable* $tmp165 = ((frost$core$Equatable*) $tmp158)->$class->itable;
while ($tmp165->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp165 = $tmp165->next;
}
$fn167 $tmp166 = $tmp165->methods[1];
frost$core$Bit $tmp168 = $tmp166(((frost$core$Equatable*) $tmp158), ((frost$core$Equatable*) $tmp164));
bool $tmp169 = $tmp168.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp164)));
// unreffing REF($171:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp158)));
// unreffing REF($164:frost.core.Equatable<org.frostlang.frostc.IR.Block.ID>)
if ($tmp169) goto block19; else goto block20;
block19:;
// line 61
org$frostlang$frostc$IR* $tmp170 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp171 = *(&local3);
$fn173 $tmp172 = ($fn173) $tmp170->$class->vtable[4];
$tmp172($tmp170, $tmp171);
goto block20;
block20:;
// line 63
frost$core$Int64 $tmp174 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp175 = *(&local7);
ITable* $tmp176 = ((frost$collections$CollectionView*) $tmp175)->$class->itable;
while ($tmp176->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp176 = $tmp176->next;
}
$fn178 $tmp177 = $tmp176->methods[0];
frost$core$Int64 $tmp179 = $tmp177(((frost$collections$CollectionView*) $tmp175));
frost$core$Int64 $tmp180 = (frost$core$Int64) {1};
int64_t $tmp181 = $tmp179.value;
int64_t $tmp182 = $tmp180.value;
int64_t $tmp183 = $tmp181 - $tmp182;
frost$core$Int64 $tmp184 = (frost$core$Int64) {$tmp183};
int64_t $tmp185 = $tmp174.value;
int64_t $tmp186 = $tmp184.value;
bool $tmp187 = $tmp185 < $tmp186;
frost$core$Bit $tmp188 = (frost$core$Bit) {$tmp187};
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block23; else goto block24;
block23:;
*(&local13) = $tmp188;
goto block25;
block24:;
frost$core$Int64 $tmp190 = *(&local4);
ITable* $tmp191 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp191->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp191 = $tmp191->next;
}
$fn193 $tmp192 = $tmp191->methods[0];
frost$core$Int64 $tmp194 = $tmp192(((frost$collections$CollectionView*) param5));
frost$core$Int64 $tmp195 = (frost$core$Int64) {1};
int64_t $tmp196 = $tmp194.value;
int64_t $tmp197 = $tmp195.value;
int64_t $tmp198 = $tmp196 - $tmp197;
frost$core$Int64 $tmp199 = (frost$core$Int64) {$tmp198};
int64_t $tmp200 = $tmp190.value;
int64_t $tmp201 = $tmp199.value;
bool $tmp202 = $tmp200 < $tmp201;
frost$core$Bit $tmp203 = (frost$core$Bit) {$tmp202};
*(&local13) = $tmp203;
goto block25;
block25:;
frost$core$Bit $tmp204 = *(&local13);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block26; else goto block27;
block26:;
*(&local12) = $tmp204;
goto block28;
block27:;
frost$core$Bit $tmp206 = frost$core$Bit$init$builtin_bit(param6 != NULL);
*(&local12) = $tmp206;
goto block28;
block28:;
frost$core$Bit $tmp207 = *(&local12);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block21; else goto block29;
block21:;
// line 64
org$frostlang$frostc$IR* $tmp209 = *(&local1);
$fn211 $tmp210 = ($fn211) $tmp209->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp212 = $tmp210($tmp209, &$s213);
*(&local3) = $tmp212;
goto block22;
block29:;
// line 1
// line 67
org$frostlang$frostc$IR$Block$ID $tmp214 = *(&local2);
*(&local3) = $tmp214;
goto block22;
block22:;
// line 69
org$frostlang$frostc$FixedArray* $tmp215 = *(&local7);
frost$core$Int64 $tmp216 = *(&local11);
frost$core$Object* $tmp217 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp215, $tmp216);
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp217)));
org$frostlang$frostc$ASTNode* $tmp218 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
*(&local14) = ((org$frostlang$frostc$ASTNode*) $tmp217);
frost$core$Frost$unref$frost$core$Object$Q($tmp217);
// unreffing REF($249:org.frostlang.frostc.FixedArray.T)
// line 70
org$frostlang$frostc$ASTNode* $tmp219 = *(&local14);
frost$core$Int64* $tmp220 = &$tmp219->$rawValue;
frost$core$Int64 $tmp221 = *$tmp220;
frost$core$Int64 $tmp222 = (frost$core$Int64) {9};
frost$core$Bit $tmp223 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp221, $tmp222);
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block31; else goto block30;
block31:;
org$frostlang$frostc$Position* $tmp225 = (org$frostlang$frostc$Position*) ($tmp219->$data + 0);
org$frostlang$frostc$Position $tmp226 = *$tmp225;
*(&local15) = $tmp226;
org$frostlang$frostc$ASTNode** $tmp227 = (org$frostlang$frostc$ASTNode**) ($tmp219->$data + 16);
org$frostlang$frostc$ASTNode* $tmp228 = *$tmp227;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
org$frostlang$frostc$ASTNode* $tmp229 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
*(&local16) = $tmp228;
org$frostlang$frostc$FixedArray** $tmp230 = (org$frostlang$frostc$FixedArray**) ($tmp219->$data + 24);
org$frostlang$frostc$FixedArray* $tmp231 = *$tmp230;
*(&local17) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
org$frostlang$frostc$FixedArray* $tmp232 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
*(&local17) = $tmp231;
// line 72
org$frostlang$frostc$ASTNode* $tmp233 = *(&local16);
org$frostlang$frostc$Pair* $tmp234 = org$frostlang$frostc$Compiler$getChoiceCase$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Corg$frostlang$frostc$ChoiceCase$GT$Q(param0, $tmp233);
*(&local18) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
org$frostlang$frostc$Pair* $tmp235 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
*(&local18) = $tmp234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// unreffing REF($292:org.frostlang.frostc.Pair<org.frostlang.frostc.Type, org.frostlang.frostc.ChoiceCase>?)
// line 73
org$frostlang$frostc$Pair* $tmp236 = *(&local18);
frost$core$Bit $tmp237 = frost$core$Bit$init$builtin_bit($tmp236 != NULL);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block32; else goto block33;
block32:;
// line 74
org$frostlang$frostc$ASTNode* $tmp239 = *(&local16);
$fn241 $tmp240 = ($fn241) $tmp239->$class->vtable[2];
org$frostlang$frostc$Position $tmp242 = $tmp240($tmp239);
org$frostlang$frostc$Pair* $tmp243 = *(&local18);
frost$core$Bit $tmp244 = frost$core$Bit$init$builtin_bit($tmp243 != NULL);
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp246 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s247, $tmp246, &$s248);
abort(); // unreachable
block36:;
frost$core$Object** $tmp249 = &$tmp243->second;
frost$core$Object* $tmp250 = *$tmp249;
frost$core$Bit $tmp251 = org$frostlang$frostc$statement$Match$checkChoiceMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ChoiceCase$Q$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, $tmp242, ((org$frostlang$frostc$ChoiceCase*) $tmp250), param3, param2);
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block34; else goto block35;
block34:;
// line 76
org$frostlang$frostc$FixedArray* $tmp253 = *(&local7);
ITable* $tmp254 = ((frost$collections$CollectionView*) $tmp253)->$class->itable;
while ($tmp254->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp254 = $tmp254->next;
}
$fn256 $tmp255 = $tmp254->methods[0];
frost$core$Int64 $tmp257 = $tmp255(((frost$collections$CollectionView*) $tmp253));
frost$core$Int64 $tmp258 = (frost$core$Int64) {1};
int64_t $tmp259 = $tmp257.value;
int64_t $tmp260 = $tmp258.value;
bool $tmp261 = $tmp259 != $tmp260;
frost$core$Bit $tmp262 = (frost$core$Bit) {$tmp261};
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block38; else goto block39;
block38:;
// line 77
org$frostlang$frostc$Position $tmp264 = *(&local15);
frost$core$String* $tmp265 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s266, &$s267);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp264, $tmp265);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
// unreffing REF($343:frost.core.String)
// line 80
org$frostlang$frostc$Pair* $tmp268 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
// unreffing cc
*(&local18) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp269 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
// unreffing args
*(&local17) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp270 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// unreffing base
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp271 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
// unreffing t
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp272 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
// unreffing auto
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp273 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
// unreffing statements
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp274 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
// unreffing tests
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp275 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
// unreffing w
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp276 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
return;
block39:;
// line 82
org$frostlang$frostc$FixedArray* $tmp277 = *(&local17);
ITable* $tmp278 = ((frost$collections$CollectionView*) $tmp277)->$class->itable;
while ($tmp278->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp278 = $tmp278->next;
}
$fn280 $tmp279 = $tmp278->methods[0];
frost$core$Int64 $tmp281 = $tmp279(((frost$collections$CollectionView*) $tmp277));
org$frostlang$frostc$Pair* $tmp282 = *(&local18);
frost$core$Bit $tmp283 = frost$core$Bit$init$builtin_bit($tmp282 != NULL);
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp285 = (frost$core$Int64) {82};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s286, $tmp285, &$s287);
abort(); // unreachable
block42:;
frost$core$Object** $tmp288 = &$tmp282->second;
frost$core$Object* $tmp289 = *$tmp288;
frost$collections$Array** $tmp290 = &((org$frostlang$frostc$ChoiceCase*) $tmp289)->fields;
frost$collections$Array* $tmp291 = *$tmp290;
ITable* $tmp292 = ((frost$collections$CollectionView*) $tmp291)->$class->itable;
while ($tmp292->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp292 = $tmp292->next;
}
$fn294 $tmp293 = $tmp292->methods[0];
frost$core$Int64 $tmp295 = $tmp293(((frost$collections$CollectionView*) $tmp291));
int64_t $tmp296 = $tmp281.value;
int64_t $tmp297 = $tmp295.value;
bool $tmp298 = $tmp296 != $tmp297;
frost$core$Bit $tmp299 = (frost$core$Bit) {$tmp298};
bool $tmp300 = $tmp299.value;
if ($tmp300) goto block40; else goto block41;
block40:;
// line 83
org$frostlang$frostc$Position $tmp301 = *(&local15);
org$frostlang$frostc$Pair* $tmp302 = *(&local18);
frost$core$Bit $tmp303 = frost$core$Bit$init$builtin_bit($tmp302 != NULL);
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block44; else goto block45;
block45:;
frost$core$Int64 $tmp305 = (frost$core$Int64) {83};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s306, $tmp305, &$s307);
abort(); // unreachable
block44:;
frost$core$Object** $tmp308 = &$tmp302->second;
frost$core$Object* $tmp309 = *$tmp308;
frost$core$String* $tmp310 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s311, ((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp309)));
frost$core$String* $tmp312 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp310, &$s313);
frost$core$String* $tmp314 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp312, &$s315);
org$frostlang$frostc$Pair* $tmp316 = *(&local18);
frost$core$Bit $tmp317 = frost$core$Bit$init$builtin_bit($tmp316 != NULL);
bool $tmp318 = $tmp317.value;
if ($tmp318) goto block46; else goto block47;
block47:;
frost$core$Int64 $tmp319 = (frost$core$Int64) {84};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s320, $tmp319, &$s321);
abort(); // unreachable
block46:;
frost$core$Object** $tmp322 = &$tmp316->second;
frost$core$Object* $tmp323 = *$tmp322;
frost$collections$Array** $tmp324 = &((org$frostlang$frostc$ChoiceCase*) $tmp323)->fields;
frost$collections$Array* $tmp325 = *$tmp324;
ITable* $tmp326 = ((frost$collections$CollectionView*) $tmp325)->$class->itable;
while ($tmp326->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp326 = $tmp326->next;
}
$fn328 $tmp327 = $tmp326->methods[0];
frost$core$Int64 $tmp329 = $tmp327(((frost$collections$CollectionView*) $tmp325));
frost$core$Int64$wrapper* $tmp330;
$tmp330 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp330->value = $tmp329;
frost$core$String* $tmp331 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp314, ((frost$core$Object*) $tmp330));
org$frostlang$frostc$Pair* $tmp332 = *(&local18);
frost$core$Bit $tmp333 = frost$core$Bit$init$builtin_bit($tmp332 != NULL);
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block48; else goto block49;
block49:;
frost$core$Int64 $tmp335 = (frost$core$Int64) {85};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s336, $tmp335, &$s337);
abort(); // unreachable
block48:;
frost$core$Object** $tmp338 = &$tmp332->second;
frost$core$Object* $tmp339 = *$tmp338;
frost$collections$Array** $tmp340 = &((org$frostlang$frostc$ChoiceCase*) $tmp339)->fields;
frost$collections$Array* $tmp341 = *$tmp340;
ITable* $tmp342 = ((frost$collections$CollectionView*) $tmp341)->$class->itable;
while ($tmp342->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp342 = $tmp342->next;
}
$fn344 $tmp343 = $tmp342->methods[0];
frost$core$Int64 $tmp345 = $tmp343(((frost$collections$CollectionView*) $tmp341));
frost$core$Int64 $tmp346 = (frost$core$Int64) {1};
frost$core$Bit $tmp347 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp345, $tmp346);
frost$core$Bit$wrapper* $tmp348;
$tmp348 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp348->value = $tmp347;
ITable* $tmp349 = ((frost$core$Formattable*) $tmp348)->$class->itable;
while ($tmp349->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp349 = $tmp349->next;
}
$fn351 $tmp350 = $tmp349->methods[0];
frost$core$String* $tmp352 = $tmp350(((frost$core$Formattable*) $tmp348), &$s353);
frost$core$String* $tmp354 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s355, $tmp352);
frost$core$String* $tmp356 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp354, &$s357);
frost$core$String* $tmp358 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp331, $tmp356);
frost$core$String* $tmp359 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp358, &$s360);
org$frostlang$frostc$FixedArray* $tmp361 = *(&local17);
ITable* $tmp362 = ((frost$collections$CollectionView*) $tmp361)->$class->itable;
while ($tmp362->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp362 = $tmp362->next;
}
$fn364 $tmp363 = $tmp362->methods[0];
frost$core$Int64 $tmp365 = $tmp363(((frost$collections$CollectionView*) $tmp361));
frost$core$Int64$wrapper* $tmp366;
$tmp366 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp366->value = $tmp365;
frost$core$String* $tmp367 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp359, ((frost$core$Object*) $tmp366));
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp301, $tmp367);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
// unreffing REF($491:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
// unreffing REF($490:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
// unreffing REF($485:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
// unreffing REF($484:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
// unreffing REF($483:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
// unreffing REF($482:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
// unreffing REF($481:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp348)));
// unreffing REF($479:frost.core.Formattable)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// unreffing REF($459:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
// unreffing REF($458:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
// unreffing REF($440:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
// unreffing REF($439:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
// unreffing REF($438:frost.core.String)
// line 87
org$frostlang$frostc$Pair* $tmp368 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
// unreffing cc
*(&local18) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp369 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
// unreffing args
*(&local17) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp370 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
// unreffing base
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp371 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
// unreffing t
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp372 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
// unreffing auto
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp373 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
// unreffing statements
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp374 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
// unreffing tests
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp375 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
// unreffing w
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp376 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
return;
block41:;
// line 89
frost$core$Bit $tmp377 = frost$core$Bit$init$builtin_bit(param4 == NULL);
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block50; else goto block51;
block50:;
// line 90
org$frostlang$frostc$Position $tmp379 = *(&local15);
$fn381 $tmp380 = ($fn381) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp382 = $tmp380(param2);
frost$core$String* $tmp383 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s384, ((frost$core$Object*) $tmp382));
frost$core$String* $tmp385 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp383, &$s386);
frost$core$String* $tmp387 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp385, &$s388);
org$frostlang$frostc$Pair* $tmp389 = *(&local18);
frost$core$Bit $tmp390 = frost$core$Bit$init$builtin_bit($tmp389 != NULL);
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block52; else goto block53;
block53:;
frost$core$Int64 $tmp392 = (frost$core$Int64) {92};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s393, $tmp392, &$s394);
abort(); // unreachable
block52:;
frost$core$Object** $tmp395 = &$tmp389->second;
frost$core$Object* $tmp396 = *$tmp395;
frost$core$Weak** $tmp397 = &((org$frostlang$frostc$ChoiceCase*) $tmp396)->owner;
frost$core$Weak* $tmp398 = *$tmp397;
frost$core$Object* $tmp399 = frost$core$Weak$get$R$frost$core$Weak$T($tmp398);
frost$core$String** $tmp400 = &((org$frostlang$frostc$ClassDecl*) $tmp399)->name;
frost$core$String* $tmp401 = *$tmp400;
frost$core$String* $tmp402 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s403, $tmp401);
frost$core$String* $tmp404 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp402, &$s405);
frost$core$String* $tmp406 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp387, $tmp404);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp379, $tmp406);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
// unreffing REF($613:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
// unreffing REF($612:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
// unreffing REF($611:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp399);
// unreffing REF($607:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
// unreffing REF($591:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
// unreffing REF($590:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
// unreffing REF($589:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
// unreffing REF($587:org.frostlang.frostc.Type)
// line 93
org$frostlang$frostc$Pair* $tmp407 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
// unreffing cc
*(&local18) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp408 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
// unreffing args
*(&local17) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp409 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
// unreffing base
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp410 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
// unreffing t
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp411 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
// unreffing auto
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp412 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
// unreffing statements
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp413 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
// unreffing tests
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp414 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
// unreffing w
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp415 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
return;
block51:;
// line 95
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 1
// line 97
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp416 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp416, param0);
*(&local20) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp417 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
*(&local20) = $tmp416;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
// unreffing REF($690:org.frostlang.frostc.Compiler.AutoUnrefs)
// line 98
frost$collections$Array* $tmp418 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp419 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp418, $tmp419);
org$frostlang$frostc$ASTNode* $tmp420 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp421 = (frost$core$Int64) {25};
org$frostlang$frostc$ASTNode* $tmp422 = *(&local16);
$fn424 $tmp423 = ($fn424) $tmp422->$class->vtable[2];
org$frostlang$frostc$Position $tmp425 = $tmp423($tmp422);
org$frostlang$frostc$Pair* $tmp426 = *(&local18);
frost$core$Bit $tmp427 = frost$core$Bit$init$builtin_bit($tmp426 != NULL);
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block54; else goto block55;
block55:;
frost$core$Int64 $tmp429 = (frost$core$Int64) {99};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s430, $tmp429, &$s431);
abort(); // unreachable
block54:;
frost$core$Object** $tmp432 = &$tmp426->second;
frost$core$Object* $tmp433 = *$tmp432;
frost$core$Int64* $tmp434 = &((org$frostlang$frostc$ChoiceCase*) $tmp433)->rawValue;
frost$core$Int64 $tmp435 = *$tmp434;
frost$core$UInt64 $tmp436 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp435);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp420, $tmp421, $tmp425, $tmp436);
frost$collections$Array$add$frost$collections$Array$T($tmp418, ((frost$core$Object*) $tmp420));
*(&local21) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
frost$collections$Array* $tmp437 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
*(&local21) = $tmp418;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
// unreffing REF($708:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
// unreffing REF($703:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 100
org$frostlang$frostc$ASTNode* $tmp438 = *(&local16);
$fn440 $tmp439 = ($fn440) $tmp438->$class->vtable[2];
org$frostlang$frostc$Position $tmp441 = $tmp439($tmp438);
frost$core$Bit $tmp442 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp443 = $tmp442.value;
if ($tmp443) goto block56; else goto block57;
block57:;
frost$core$Int64 $tmp444 = (frost$core$Int64) {101};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s445, $tmp444, &$s446);
abort(); // unreachable
block56:;
frost$collections$Array* $tmp447 = *(&local21);
org$frostlang$frostc$Compiler$TypeContext* $tmp448 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp449 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp450 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp448, $tmp449, $tmp450);
org$frostlang$frostc$IR$Value* $tmp451 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp441, param4, &$s452, ((frost$collections$ListView*) $tmp447), $tmp448);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
org$frostlang$frostc$IR$Value* $tmp453 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
*(&local22) = $tmp451;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
// unreffing REF($762:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
// unreffing REF($760:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
// unreffing REF($758:org.frostlang.frostc.Compiler.TypeContext)
// line 103
org$frostlang$frostc$IR$Value* $tmp454 = *(&local22);
frost$core$Bit $tmp455 = frost$core$Bit$init$builtin_bit($tmp454 != NULL);
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp457 = (frost$core$Int64) {103};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s458, $tmp457);
abort(); // unreachable
block58:;
// line 104
org$frostlang$frostc$Position $tmp459 = *(&local15);
org$frostlang$frostc$IR$Value* $tmp460 = *(&local22);
frost$core$Bit $tmp461 = frost$core$Bit$init$builtin_bit($tmp460 != NULL);
bool $tmp462 = $tmp461.value;
if ($tmp462) goto block60; else goto block61;
block61:;
frost$core$Int64 $tmp463 = (frost$core$Int64) {105};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s464, $tmp463, &$s465);
abort(); // unreachable
block60:;
org$frostlang$frostc$IR$Value* $tmp466 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, $tmp459, $tmp460);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
org$frostlang$frostc$IR$Value* $tmp467 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local19) = $tmp466;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
// unreffing REF($799:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$IR$Value* $tmp468 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
// unreffing test
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp469 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
// unreffing eqArgs
*(&local21) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp470 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
// unreffing unrefs
*(&local20) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 107
org$frostlang$frostc$IR* $tmp471 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp472 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp473 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp474 = *(&local15);
org$frostlang$frostc$IR$Value* $tmp475 = *(&local19);
org$frostlang$frostc$IR$Block$ID $tmp476 = *(&local10);
org$frostlang$frostc$IR$Block$ID $tmp477 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp472, $tmp473, $tmp474, $tmp475, $tmp476, $tmp477);
$fn479 $tmp478 = ($fn479) $tmp471->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp480 = $tmp478($tmp471, $tmp472);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
// unreffing REF($826:org.frostlang.frostc.IR.Statement)
// line 109
org$frostlang$frostc$IR* $tmp481 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp482 = *(&local10);
$fn484 $tmp483 = ($fn484) $tmp481->$class->vtable[4];
$tmp483($tmp481, $tmp482);
// line 110
frost$core$Int64 $tmp485 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp486 = *(&local17);
ITable* $tmp487 = ((frost$collections$CollectionView*) $tmp486)->$class->itable;
while ($tmp487->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp487 = $tmp487->next;
}
$fn489 $tmp488 = $tmp487->methods[0];
frost$core$Int64 $tmp490 = $tmp488(((frost$collections$CollectionView*) $tmp486));
frost$core$Bit $tmp491 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp492 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp485, $tmp490, $tmp491);
frost$core$Int64 $tmp493 = $tmp492.min;
*(&local23) = $tmp493;
frost$core$Int64 $tmp494 = $tmp492.max;
frost$core$Bit $tmp495 = $tmp492.inclusive;
bool $tmp496 = $tmp495.value;
frost$core$Int64 $tmp497 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp498 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp497);
if ($tmp496) goto block65; else goto block66;
block65:;
int64_t $tmp499 = $tmp493.value;
int64_t $tmp500 = $tmp494.value;
bool $tmp501 = $tmp499 <= $tmp500;
frost$core$Bit $tmp502 = (frost$core$Bit) {$tmp501};
bool $tmp503 = $tmp502.value;
if ($tmp503) goto block62; else goto block63;
block66:;
int64_t $tmp504 = $tmp493.value;
int64_t $tmp505 = $tmp494.value;
bool $tmp506 = $tmp504 < $tmp505;
frost$core$Bit $tmp507 = (frost$core$Bit) {$tmp506};
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block62; else goto block63;
block62:;
// line 111
org$frostlang$frostc$IR* $tmp509 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp510 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp511 = (frost$core$Int64) {4};
org$frostlang$frostc$Position $tmp512 = *(&local15);
org$frostlang$frostc$Pair* $tmp513 = *(&local18);
frost$core$Bit $tmp514 = frost$core$Bit$init$builtin_bit($tmp513 != NULL);
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block67; else goto block68;
block68:;
frost$core$Int64 $tmp516 = (frost$core$Int64) {113};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s517, $tmp516, &$s518);
abort(); // unreachable
block67:;
frost$core$Object** $tmp519 = &$tmp513->second;
frost$core$Object* $tmp520 = *$tmp519;
frost$core$Int64 $tmp521 = *(&local23);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64($tmp510, $tmp511, $tmp512, param2, ((org$frostlang$frostc$ChoiceCase*) $tmp520), $tmp521);
$fn523 $tmp522 = ($fn523) $tmp509->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp524 = $tmp522($tmp509, $tmp510);
*(&local24) = $tmp524;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
// unreffing REF($873:org.frostlang.frostc.IR.Statement)
// line 114
org$frostlang$frostc$IR* $tmp525 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp526 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp527 = (frost$core$Int64) {13};
org$frostlang$frostc$Position $tmp528 = *(&local15);
org$frostlang$frostc$IR$Value* $tmp529 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp530 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp531 = *(&local24);
org$frostlang$frostc$Pair* $tmp532 = *(&local18);
frost$core$Bit $tmp533 = frost$core$Bit$init$builtin_bit($tmp532 != NULL);
bool $tmp534 = $tmp533.value;
if ($tmp534) goto block69; else goto block70;
block70:;
frost$core$Int64 $tmp535 = (frost$core$Int64) {115};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s536, $tmp535, &$s537);
abort(); // unreachable
block69:;
frost$core$Object** $tmp538 = &$tmp532->second;
frost$core$Object* $tmp539 = *$tmp538;
frost$collections$Array** $tmp540 = &((org$frostlang$frostc$ChoiceCase*) $tmp539)->fields;
frost$collections$Array* $tmp541 = *$tmp540;
frost$core$Int64 $tmp542 = *(&local23);
frost$core$Object* $tmp543 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp541, $tmp542);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp529, $tmp530, $tmp531, ((org$frostlang$frostc$Type*) $tmp543));
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp526, $tmp527, $tmp528, $tmp529);
$fn545 $tmp544 = ($fn545) $tmp525->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp546 = $tmp544($tmp525, $tmp526);
*(&local25) = $tmp546;
frost$core$Frost$unref$frost$core$Object$Q($tmp543);
// unreffing REF($920:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
// unreffing REF($901:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
// unreffing REF($898:org.frostlang.frostc.IR.Statement)
// line 116
org$frostlang$frostc$FixedArray* $tmp547 = *(&local17);
frost$core$Int64 $tmp548 = *(&local23);
frost$core$Object* $tmp549 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp547, $tmp548);
frost$core$String* $tmp550 = org$frostlang$frostc$Compiler$getText$org$frostlang$frostc$ASTNode$R$frost$core$String$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp549));
frost$core$Bit $tmp551 = frost$core$Bit$init$builtin_bit($tmp550 != NULL);
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block73; else goto block74;
block74:;
frost$core$Int64 $tmp553 = (frost$core$Int64) {116};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s554, $tmp553, &$s555);
abort(); // unreachable
block73:;
frost$core$Bit $tmp556 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp550, &$s557);
bool $tmp558 = $tmp556.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
// unreffing REF($942:frost.core.String?)
frost$core$Frost$unref$frost$core$Object$Q($tmp549);
// unreffing REF($940:org.frostlang.frostc.FixedArray.T)
if ($tmp558) goto block71; else goto block72;
block71:;
// line 117
goto block64;
block72:;
// line 119
*(&local26) = ((org$frostlang$frostc$Pair*) NULL);
// line 1
// line 121
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp559 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp559, param0);
*(&local27) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp560 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
*(&local27) = $tmp559;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
// unreffing REF($966:org.frostlang.frostc.Compiler.AutoUnrefs)
// line 122
org$frostlang$frostc$FixedArray* $tmp561 = *(&local17);
frost$core$Int64 $tmp562 = *(&local23);
frost$core$Object* $tmp563 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp561, $tmp562);
frost$core$Int64 $tmp564 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp565 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp564);
org$frostlang$frostc$ASTNode* $tmp566 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp567 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp568 = *(&local15);
org$frostlang$frostc$IR$Value* $tmp569 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp570 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp571 = *(&local25);
org$frostlang$frostc$Pair* $tmp572 = *(&local18);
frost$core$Bit $tmp573 = frost$core$Bit$init$builtin_bit($tmp572 != NULL);
bool $tmp574 = $tmp573.value;
if ($tmp574) goto block75; else goto block76;
block76:;
frost$core$Int64 $tmp575 = (frost$core$Int64) {126};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s576, $tmp575, &$s577);
abort(); // unreachable
block75:;
frost$core$Object** $tmp578 = &$tmp572->second;
frost$core$Object* $tmp579 = *$tmp578;
frost$collections$Array** $tmp580 = &((org$frostlang$frostc$ChoiceCase*) $tmp579)->fields;
frost$collections$Array* $tmp581 = *$tmp580;
frost$core$Int64 $tmp582 = *(&local23);
frost$core$Object* $tmp583 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp581, $tmp582);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp569, $tmp570, $tmp571, ((org$frostlang$frostc$Type*) $tmp583));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp566, $tmp567, $tmp568, $tmp569);
org$frostlang$frostc$Pair* $tmp584 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Variable$Corg$frostlang$frostc$IR$Value$Q$GT$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp563), $tmp565, $tmp566, ((org$frostlang$frostc$Type*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
org$frostlang$frostc$Pair* $tmp585 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
*(&local26) = $tmp584;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
// unreffing REF($1013:org.frostlang.frostc.Pair<org.frostlang.frostc.Variable, org.frostlang.frostc.IR.Value?>?)
frost$core$Frost$unref$frost$core$Object$Q($tmp583);
// unreffing REF($1008:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
// unreffing REF($989:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
// unreffing REF($986:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q($tmp563);
// unreffing REF($982:org.frostlang.frostc.FixedArray.T)
// line 129
org$frostlang$frostc$lvalue$VariableLValue* $tmp586 = (org$frostlang$frostc$lvalue$VariableLValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$lvalue$VariableLValue$class);
org$frostlang$frostc$Position $tmp587 = *(&local15);
org$frostlang$frostc$Pair* $tmp588 = *(&local26);
frost$core$Bit $tmp589 = frost$core$Bit$init$builtin_bit($tmp588 != NULL);
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block77; else goto block78;
block78:;
frost$core$Int64 $tmp591 = (frost$core$Int64) {129};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s592, $tmp591, &$s593);
abort(); // unreachable
block77:;
frost$core$Object** $tmp594 = &$tmp588->first;
frost$core$Object* $tmp595 = *$tmp594;
org$frostlang$frostc$lvalue$VariableLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Variable($tmp586, param0, $tmp587, ((org$frostlang$frostc$Variable*) $tmp595));
org$frostlang$frostc$IR$Value* $tmp596 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp597 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp598 = *(&local25);
org$frostlang$frostc$Pair* $tmp599 = *(&local18);
frost$core$Bit $tmp600 = frost$core$Bit$init$builtin_bit($tmp599 != NULL);
bool $tmp601 = $tmp600.value;
if ($tmp601) goto block79; else goto block80;
block80:;
frost$core$Int64 $tmp602 = (frost$core$Int64) {131};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s603, $tmp602, &$s604);
abort(); // unreachable
block79:;
frost$core$Object** $tmp605 = &$tmp599->second;
frost$core$Object* $tmp606 = *$tmp605;
frost$collections$Array** $tmp607 = &((org$frostlang$frostc$ChoiceCase*) $tmp606)->fields;
frost$collections$Array* $tmp608 = *$tmp607;
frost$core$Int64 $tmp609 = *(&local23);
frost$core$Object* $tmp610 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp608, $tmp609);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp596, $tmp597, $tmp598, ((org$frostlang$frostc$Type*) $tmp610));
$fn612 $tmp611 = ($fn612) $tmp586->$class->vtable[4];
$tmp611($tmp586, $tmp596);
frost$core$Frost$unref$frost$core$Object$Q($tmp610);
// unreffing REF($1070:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
// unreffing REF($1051:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
// unreffing REF($1036:org.frostlang.frostc.lvalue.VariableLValue)
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp613 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
// unreffing unrefs
*(&local27) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 133
org$frostlang$frostc$Pair* $tmp614 = *(&local26);
frost$core$Bit $tmp615 = frost$core$Bit$init$builtin_bit($tmp614 != NULL);
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block83; else goto block84;
block84:;
frost$core$Int64 $tmp617 = (frost$core$Int64) {133};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s618, $tmp617, &$s619);
abort(); // unreachable
block83:;
frost$core$Object** $tmp620 = &$tmp614->first;
frost$core$Object* $tmp621 = *$tmp620;
org$frostlang$frostc$Type** $tmp622 = &((org$frostlang$frostc$Variable*) $tmp621)->type;
org$frostlang$frostc$Type* $tmp623 = *$tmp622;
frost$core$Bit $tmp624 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp623);
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block81; else goto block82;
block81:;
// line 134
frost$collections$Stack** $tmp626 = &param0->enclosingContexts;
frost$collections$Stack* $tmp627 = *$tmp626;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp628 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp629 = (frost$core$Int64) {2};
org$frostlang$frostc$Pair* $tmp630 = *(&local26);
frost$core$Bit $tmp631 = frost$core$Bit$init$builtin_bit($tmp630 != NULL);
bool $tmp632 = $tmp631.value;
if ($tmp632) goto block85; else goto block86;
block86:;
frost$core$Int64 $tmp633 = (frost$core$Int64) {136};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s634, $tmp633, &$s635);
abort(); // unreachable
block85:;
frost$core$Object** $tmp636 = &$tmp630->first;
frost$core$Object* $tmp637 = *$tmp636;
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$Variable($tmp628, $tmp629, ((org$frostlang$frostc$Variable*) $tmp637));
frost$collections$Stack$push$frost$collections$Stack$T($tmp627, ((frost$core$Object*) $tmp628));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
// unreffing REF($1111:org.frostlang.frostc.Compiler.EnclosingContext)
goto block82;
block82:;
org$frostlang$frostc$Pair* $tmp638 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
// unreffing target
*(&local26) = ((org$frostlang$frostc$Pair*) NULL);
goto block64;
block64:;
frost$core$Int64 $tmp639 = *(&local23);
int64_t $tmp640 = $tmp494.value;
int64_t $tmp641 = $tmp639.value;
int64_t $tmp642 = $tmp640 - $tmp641;
frost$core$Int64 $tmp643 = (frost$core$Int64) {$tmp642};
frost$core$UInt64 $tmp644 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp643);
if ($tmp496) goto block88; else goto block89;
block88:;
uint64_t $tmp645 = $tmp644.value;
uint64_t $tmp646 = $tmp498.value;
bool $tmp647 = $tmp645 >= $tmp646;
frost$core$Bit $tmp648 = (frost$core$Bit) {$tmp647};
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block87; else goto block63;
block89:;
uint64_t $tmp650 = $tmp644.value;
uint64_t $tmp651 = $tmp498.value;
bool $tmp652 = $tmp650 > $tmp651;
frost$core$Bit $tmp653 = (frost$core$Bit) {$tmp652};
bool $tmp654 = $tmp653.value;
if ($tmp654) goto block87; else goto block63;
block87:;
int64_t $tmp655 = $tmp639.value;
int64_t $tmp656 = $tmp497.value;
int64_t $tmp657 = $tmp655 + $tmp656;
frost$core$Int64 $tmp658 = (frost$core$Int64) {$tmp657};
*(&local23) = $tmp658;
goto block62;
block63:;
// line 139
org$frostlang$frostc$IR$Value* $tmp659 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
// unreffing testBit
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp660 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
// unreffing cc
*(&local18) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp661 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
// unreffing args
*(&local17) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp662 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
// unreffing base
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp663 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
// unreffing t
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block16;
block35:;
goto block33;
block33:;
org$frostlang$frostc$Pair* $tmp664 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
// unreffing cc
*(&local18) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp665 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
// unreffing args
*(&local17) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp666 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
// unreffing base
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block30;
block30:;
// line 144
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 1
// line 146
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp667 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp667, param0);
*(&local29) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp668 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
*(&local29) = $tmp667;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
// unreffing REF($1211:org.frostlang.frostc.Compiler.AutoUnrefs)
// line 147
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 148
org$frostlang$frostc$ASTNode* $tmp669 = *(&local14);
org$frostlang$frostc$Pair* $tmp670 = org$frostlang$frostc$Compiler$getChoiceCase$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Corg$frostlang$frostc$ChoiceCase$GT$Q(param0, $tmp669);
*(&local31) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
org$frostlang$frostc$Pair* $tmp671 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
*(&local31) = $tmp670;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
// unreffing REF($1227:org.frostlang.frostc.Pair<org.frostlang.frostc.Type, org.frostlang.frostc.ChoiceCase>?)
// line 149
org$frostlang$frostc$Pair* $tmp672 = *(&local31);
frost$core$Bit $tmp673 = frost$core$Bit$init$builtin_bit($tmp672 != NULL);
bool $tmp674 = $tmp673.value;
if ($tmp674) goto block90; else goto block92;
block90:;
// line 150
frost$collections$Array* $tmp675 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp676 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp675, $tmp676);
org$frostlang$frostc$ASTNode* $tmp677 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp678 = (frost$core$Int64) {25};
org$frostlang$frostc$ASTNode* $tmp679 = *(&local14);
$fn681 $tmp680 = ($fn681) $tmp679->$class->vtable[2];
org$frostlang$frostc$Position $tmp682 = $tmp680($tmp679);
org$frostlang$frostc$Pair* $tmp683 = *(&local31);
frost$core$Bit $tmp684 = frost$core$Bit$init$builtin_bit($tmp683 != NULL);
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block93; else goto block94;
block94:;
frost$core$Int64 $tmp686 = (frost$core$Int64) {151};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s687, $tmp686, &$s688);
abort(); // unreachable
block93:;
frost$core$Object** $tmp689 = &$tmp683->second;
frost$core$Object* $tmp690 = *$tmp689;
frost$core$Int64* $tmp691 = &((org$frostlang$frostc$ChoiceCase*) $tmp690)->rawValue;
frost$core$Int64 $tmp692 = *$tmp691;
frost$core$UInt64 $tmp693 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp692);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp677, $tmp678, $tmp682, $tmp693);
frost$collections$Array$add$frost$collections$Array$T($tmp675, ((frost$core$Object*) $tmp677));
*(&local32) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
frost$collections$Array* $tmp694 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
*(&local32) = $tmp675;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
// unreffing REF($1250:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
// unreffing REF($1245:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 152
org$frostlang$frostc$ASTNode* $tmp695 = *(&local14);
$fn697 $tmp696 = ($fn697) $tmp695->$class->vtable[2];
org$frostlang$frostc$Position $tmp698 = $tmp696($tmp695);
frost$core$Bit $tmp699 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp700 = $tmp699.value;
if ($tmp700) goto block95; else goto block96;
block96:;
frost$core$Int64 $tmp701 = (frost$core$Int64) {152};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s702, $tmp701, &$s703);
abort(); // unreachable
block95:;
frost$collections$Array* $tmp704 = *(&local32);
org$frostlang$frostc$Compiler$TypeContext* $tmp705 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp706 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp707 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp705, $tmp706, $tmp707);
org$frostlang$frostc$IR$Value* $tmp708 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp698, param4, &$s709, ((frost$collections$ListView*) $tmp704), $tmp705);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
org$frostlang$frostc$IR$Value* $tmp710 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
*(&local30) = $tmp708;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
// unreffing REF($1304:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
// unreffing REF($1302:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
// unreffing REF($1300:org.frostlang.frostc.Compiler.TypeContext)
// line 154
org$frostlang$frostc$IR$Value* $tmp711 = *(&local30);
frost$core$Bit $tmp712 = frost$core$Bit$init$builtin_bit($tmp711 == NULL);
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block97; else goto block98;
block97:;
// line 155
frost$collections$Array* $tmp714 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
// unreffing args
*(&local32) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp715 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
// unreffing cc
*(&local31) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp716 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
// unreffing test
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp717 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
// unreffing unrefs
*(&local29) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp718 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
// unreffing testBit
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp719 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
// unreffing t
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp720 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
// unreffing auto
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp721 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
// unreffing statements
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp722 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
// unreffing tests
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp723 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
// unreffing w
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp724 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
return;
block98:;
frost$collections$Array* $tmp725 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
// unreffing args
*(&local32) = ((frost$collections$Array*) NULL);
goto block91;
block92:;
// line 1
// line 159
org$frostlang$frostc$ASTNode* $tmp726 = *(&local14);
$fn728 $tmp727 = ($fn728) $tmp726->$class->vtable[2];
org$frostlang$frostc$Position $tmp729 = $tmp727($tmp726);
frost$collections$Array* $tmp730 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp731 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp730, $tmp731);
org$frostlang$frostc$ASTNode* $tmp732 = *(&local14);
frost$collections$Array$add$frost$collections$Array$T($tmp730, ((frost$core$Object*) $tmp732));
org$frostlang$frostc$Compiler$TypeContext* $tmp733 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp734 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp735 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp733, $tmp734, $tmp735);
org$frostlang$frostc$IR$Value* $tmp736 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp729, param2, &$s737, ((frost$collections$ListView*) $tmp730), $tmp733);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
org$frostlang$frostc$IR$Value* $tmp738 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
*(&local30) = $tmp736;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
// unreffing REF($1407:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
// unreffing REF($1405:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
// unreffing REF($1403:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
// unreffing REF($1394:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 161
org$frostlang$frostc$IR$Value* $tmp739 = *(&local30);
frost$core$Bit $tmp740 = frost$core$Bit$init$builtin_bit($tmp739 == NULL);
bool $tmp741 = $tmp740.value;
if ($tmp741) goto block99; else goto block100;
block99:;
// line 162
org$frostlang$frostc$Pair* $tmp742 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
// unreffing cc
*(&local31) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp743 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
// unreffing test
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp744 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
// unreffing unrefs
*(&local29) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp745 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
// unreffing testBit
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp746 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
// unreffing t
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp747 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
// unreffing auto
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp748 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
// unreffing statements
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp749 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
// unreffing tests
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp750 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
// unreffing w
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp751 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
return;
block100:;
goto block91;
block91:;
// line 165
org$frostlang$frostc$Position $tmp752 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp753 = *(&local30);
frost$core$Bit $tmp754 = frost$core$Bit$init$builtin_bit($tmp753 != NULL);
bool $tmp755 = $tmp754.value;
if ($tmp755) goto block101; else goto block102;
block102:;
frost$core$Int64 $tmp756 = (frost$core$Int64) {165};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s757, $tmp756, &$s758);
abort(); // unreachable
block101:;
org$frostlang$frostc$IR$Value* $tmp759 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, $tmp752, $tmp753);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
org$frostlang$frostc$IR$Value* $tmp760 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
*(&local28) = $tmp759;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
// unreffing REF($1496:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$Pair* $tmp761 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
// unreffing cc
*(&local31) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp762 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
// unreffing test
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp763 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
// unreffing unrefs
*(&local29) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 167
org$frostlang$frostc$IR* $tmp764 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp765 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp766 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp767 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp768 = *(&local28);
org$frostlang$frostc$IR$Block$ID $tmp769 = *(&local10);
org$frostlang$frostc$IR$Block$ID $tmp770 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp765, $tmp766, $tmp767, $tmp768, $tmp769, $tmp770);
$fn772 $tmp771 = ($fn772) $tmp764->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp773 = $tmp771($tmp764, $tmp765);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
// unreffing REF($1523:org.frostlang.frostc.IR.Statement)
org$frostlang$frostc$IR$Value* $tmp774 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
// unreffing testBit
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp775 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
// unreffing t
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block16;
block16:;
frost$core$Int64 $tmp776 = *(&local11);
int64_t $tmp777 = $tmp142.value;
int64_t $tmp778 = $tmp776.value;
int64_t $tmp779 = $tmp777 - $tmp778;
frost$core$Int64 $tmp780 = (frost$core$Int64) {$tmp779};
frost$core$UInt64 $tmp781 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp780);
if ($tmp144) goto block104; else goto block105;
block104:;
uint64_t $tmp782 = $tmp781.value;
uint64_t $tmp783 = $tmp146.value;
bool $tmp784 = $tmp782 >= $tmp783;
frost$core$Bit $tmp785 = (frost$core$Bit) {$tmp784};
bool $tmp786 = $tmp785.value;
if ($tmp786) goto block103; else goto block15;
block105:;
uint64_t $tmp787 = $tmp781.value;
uint64_t $tmp788 = $tmp146.value;
bool $tmp789 = $tmp787 > $tmp788;
frost$core$Bit $tmp790 = (frost$core$Bit) {$tmp789};
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block103; else goto block15;
block103:;
int64_t $tmp792 = $tmp776.value;
int64_t $tmp793 = $tmp145.value;
int64_t $tmp794 = $tmp792 + $tmp793;
frost$core$Int64 $tmp795 = (frost$core$Int64) {$tmp794};
*(&local11) = $tmp795;
goto block14;
block15:;
// line 170
org$frostlang$frostc$IR* $tmp796 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp797 = *(&local10);
$fn799 $tmp798 = ($fn799) $tmp796->$class->vtable[4];
$tmp798($tmp796, $tmp797);
// line 171
org$frostlang$frostc$FixedArray* $tmp800 = *(&local8);
ITable* $tmp801 = ((frost$collections$Iterable*) $tmp800)->$class->itable;
while ($tmp801->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp801 = $tmp801->next;
}
$fn803 $tmp802 = $tmp801->methods[0];
frost$collections$Iterator* $tmp804 = $tmp802(((frost$collections$Iterable*) $tmp800));
goto block106;
block106:;
ITable* $tmp805 = $tmp804->$class->itable;
while ($tmp805->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp805 = $tmp805->next;
}
$fn807 $tmp806 = $tmp805->methods[0];
frost$core$Bit $tmp808 = $tmp806($tmp804);
bool $tmp809 = $tmp808.value;
if ($tmp809) goto block108; else goto block107;
block107:;
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
// line 172
org$frostlang$frostc$ASTNode* $tmp815 = *(&local33);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp815);
frost$core$Frost$unref$frost$core$Object$Q($tmp813);
// unreffing REF($1592:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp816 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
// unreffing s
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block106;
block108:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
// unreffing REF($1581:frost.collections.Iterator<frost.collections.Iterable.T>)
org$frostlang$frostc$Compiler$AutoScope* $tmp817 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
// unreffing auto
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 175
org$frostlang$frostc$IR* $tmp818 = *(&local1);
$fn820 $tmp819 = ($fn820) $tmp818->$class->vtable[5];
frost$core$Bit $tmp821 = $tmp819($tmp818);
frost$core$Bit $tmp822 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp821);
bool $tmp823 = $tmp822.value;
if ($tmp823) goto block109; else goto block110;
block109:;
// line 176
org$frostlang$frostc$IR* $tmp824 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp825 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp826 = (frost$core$Int64) {1};
org$frostlang$frostc$Position $tmp827 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp828 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp825, $tmp826, $tmp827, $tmp828);
$fn830 $tmp829 = ($fn830) $tmp824->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp831 = $tmp829($tmp824, $tmp825);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
// unreffing REF($1629:org.frostlang.frostc.IR.Statement)
goto block110;
block110:;
org$frostlang$frostc$FixedArray* $tmp832 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
// unreffing statements
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp833 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
// unreffing tests
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block11;
block13:;
// line 180
frost$core$Bit $tmp834 = frost$core$Bit$init$builtin_bit(false);
bool $tmp835 = $tmp834.value;
if ($tmp835) goto block111; else goto block112;
block112:;
frost$core$Int64 $tmp836 = (frost$core$Int64) {180};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s837, $tmp836);
abort(); // unreachable
block111:;
goto block11;
block11:;
org$frostlang$frostc$ASTNode* $tmp838 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
// unreffing w
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block8:;
frost$core$Int64 $tmp839 = *(&local4);
int64_t $tmp840 = $tmp94.value;
int64_t $tmp841 = $tmp839.value;
int64_t $tmp842 = $tmp840 - $tmp841;
frost$core$Int64 $tmp843 = (frost$core$Int64) {$tmp842};
frost$core$UInt64 $tmp844 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp843);
if ($tmp96) goto block114; else goto block115;
block114:;
uint64_t $tmp845 = $tmp844.value;
uint64_t $tmp846 = $tmp98.value;
bool $tmp847 = $tmp845 >= $tmp846;
frost$core$Bit $tmp848 = (frost$core$Bit) {$tmp847};
bool $tmp849 = $tmp848.value;
if ($tmp849) goto block113; else goto block7;
block115:;
uint64_t $tmp850 = $tmp844.value;
uint64_t $tmp851 = $tmp98.value;
bool $tmp852 = $tmp850 > $tmp851;
frost$core$Bit $tmp853 = (frost$core$Bit) {$tmp852};
bool $tmp854 = $tmp853.value;
if ($tmp854) goto block113; else goto block7;
block113:;
int64_t $tmp855 = $tmp839.value;
int64_t $tmp856 = $tmp97.value;
int64_t $tmp857 = $tmp855 + $tmp856;
frost$core$Int64 $tmp858 = (frost$core$Int64) {$tmp857};
*(&local4) = $tmp858;
goto block6;
block7:;
// line 184
frost$core$Bit $tmp859 = frost$core$Bit$init$builtin_bit(param6 != NULL);
bool $tmp860 = $tmp859.value;
if ($tmp860) goto block116; else goto block117;
block116:;
// line 1
// line 186
org$frostlang$frostc$Compiler$AutoScope* $tmp861 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp861, param0);
*(&local34) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
org$frostlang$frostc$Compiler$AutoScope* $tmp862 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
*(&local34) = $tmp861;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
// unreffing REF($1697:org.frostlang.frostc.Compiler.AutoScope)
// line 187
org$frostlang$frostc$IR* $tmp863 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp864 = *(&local3);
$fn866 $tmp865 = ($fn866) $tmp863->$class->vtable[4];
$tmp865($tmp863, $tmp864);
// line 188
frost$core$Bit $tmp867 = frost$core$Bit$init$builtin_bit(param6 != NULL);
bool $tmp868 = $tmp867.value;
if ($tmp868) goto block118; else goto block119;
block119:;
frost$core$Int64 $tmp869 = (frost$core$Int64) {188};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s870, $tmp869, &$s871);
abort(); // unreachable
block118:;
ITable* $tmp872 = ((frost$collections$Iterable*) param6)->$class->itable;
while ($tmp872->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp872 = $tmp872->next;
}
$fn874 $tmp873 = $tmp872->methods[0];
frost$collections$Iterator* $tmp875 = $tmp873(((frost$collections$Iterable*) param6));
goto block120;
block120:;
ITable* $tmp876 = $tmp875->$class->itable;
while ($tmp876->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp876 = $tmp876->next;
}
$fn878 $tmp877 = $tmp876->methods[0];
frost$core$Bit $tmp879 = $tmp877($tmp875);
bool $tmp880 = $tmp879.value;
if ($tmp880) goto block122; else goto block121;
block121:;
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp881 = $tmp875->$class->itable;
while ($tmp881->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp881 = $tmp881->next;
}
$fn883 $tmp882 = $tmp881->methods[1];
frost$core$Object* $tmp884 = $tmp882($tmp875);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp884)));
org$frostlang$frostc$ASTNode* $tmp885 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
*(&local35) = ((org$frostlang$frostc$ASTNode*) $tmp884);
// line 189
org$frostlang$frostc$ASTNode* $tmp886 = *(&local35);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp886);
frost$core$Frost$unref$frost$core$Object$Q($tmp884);
// unreffing REF($1736:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp887 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
// unreffing s
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block120;
block122:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
// unreffing REF($1725:frost.collections.Iterator<frost.collections.Iterable.T>)
org$frostlang$frostc$Compiler$AutoScope* $tmp888 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
// unreffing scope
*(&local34) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 192
org$frostlang$frostc$IR* $tmp889 = *(&local1);
$fn891 $tmp890 = ($fn891) $tmp889->$class->vtable[5];
frost$core$Bit $tmp892 = $tmp890($tmp889);
frost$core$Bit $tmp893 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp892);
bool $tmp894 = $tmp893.value;
if ($tmp894) goto block123; else goto block124;
block123:;
// line 193
org$frostlang$frostc$IR* $tmp895 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp896 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp897 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp898 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp896, $tmp897, param1, $tmp898);
$fn900 $tmp899 = ($fn900) $tmp895->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp901 = $tmp899($tmp895, $tmp896);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
// unreffing REF($1773:org.frostlang.frostc.IR.Statement)
goto block124;
block124:;
goto block117;
block117:;
// line 196
org$frostlang$frostc$IR* $tmp902 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp903 = *(&local2);
$fn905 $tmp904 = ($fn905) $tmp902->$class->vtable[4];
$tmp904($tmp902, $tmp903);
org$frostlang$frostc$IR* $tmp906 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$Match$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$FixedArray* param4) {

org$frostlang$frostc$IR$Value* local0 = NULL;
frost$core$Bit local1;
frost$core$Bit local2;
org$frostlang$frostc$ClassDecl* local3 = NULL;
org$frostlang$frostc$ClassDecl* local4 = NULL;
org$frostlang$frostc$IR$Value* local5 = NULL;
// line 202
org$frostlang$frostc$Compiler$TypeContext* $tmp907 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp908 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp907, $tmp908);
org$frostlang$frostc$IR$Value* $tmp909 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp907);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
org$frostlang$frostc$IR$Value* $tmp910 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
*(&local0) = $tmp909;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
// unreffing REF($4:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
// unreffing REF($1:org.frostlang.frostc.Compiler.TypeContext)
// line 203
org$frostlang$frostc$IR$Value* $tmp911 = *(&local0);
frost$core$Bit $tmp912 = frost$core$Bit$init$builtin_bit($tmp911 == NULL);
bool $tmp913 = $tmp912.value;
if ($tmp913) goto block3; else goto block4;
block3:;
*(&local1) = $tmp912;
goto block5;
block4:;
ITable* $tmp914 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp914->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp914 = $tmp914->next;
}
$fn916 $tmp915 = $tmp914->methods[0];
frost$core$Int64 $tmp917 = $tmp915(((frost$collections$CollectionView*) param3));
frost$core$Int64 $tmp918 = (frost$core$Int64) {0};
frost$core$Bit $tmp919 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp917, $tmp918);
bool $tmp920 = $tmp919.value;
if ($tmp920) goto block6; else goto block7;
block6:;
frost$core$Bit $tmp921 = frost$core$Bit$init$builtin_bit(param4 == NULL);
*(&local2) = $tmp921;
goto block8;
block7:;
*(&local2) = $tmp919;
goto block8;
block8:;
frost$core$Bit $tmp922 = *(&local2);
*(&local1) = $tmp922;
goto block5;
block5:;
frost$core$Bit $tmp923 = *(&local1);
bool $tmp924 = $tmp923.value;
if ($tmp924) goto block1; else goto block2;
block1:;
// line 204
org$frostlang$frostc$IR$Value* $tmp925 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
// unreffing compiledValue
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block2:;
// line 206
org$frostlang$frostc$IR$Value* $tmp926 = *(&local0);
frost$core$Bit $tmp927 = frost$core$Bit$init$builtin_bit($tmp926 != NULL);
bool $tmp928 = $tmp927.value;
if ($tmp928) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp929 = (frost$core$Int64) {206};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s930, $tmp929, &$s931);
abort(); // unreachable
block9:;
$fn933 $tmp932 = ($fn933) $tmp926->$class->vtable[2];
org$frostlang$frostc$Type* $tmp934 = $tmp932($tmp926);
org$frostlang$frostc$ClassDecl* $tmp935 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp934);
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
org$frostlang$frostc$ClassDecl* $tmp936 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
*(&local3) = $tmp935;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
// unreffing REF($64:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
// unreffing REF($63:org.frostlang.frostc.Type)
// line 207
org$frostlang$frostc$ClassDecl* $tmp937 = *(&local3);
frost$core$Bit $tmp938 = frost$core$Bit$init$builtin_bit($tmp937 == NULL);
bool $tmp939 = $tmp938.value;
if ($tmp939) goto block11; else goto block12;
block11:;
// line 208
org$frostlang$frostc$ClassDecl* $tmp940 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
// unreffing cl
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp941 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
// unreffing compiledValue
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block12:;
// line 210
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp942 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
// line 211
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 212
org$frostlang$frostc$ClassDecl* $tmp943 = *(&local3);
frost$core$Bit $tmp944 = frost$core$Bit$init$builtin_bit($tmp943 != NULL);
bool $tmp945 = $tmp944.value;
if ($tmp945) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp946 = (frost$core$Int64) {212};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s947, $tmp946, &$s948);
abort(); // unreachable
block15:;
org$frostlang$frostc$ClassDecl$Kind* $tmp949 = &$tmp943->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp950 = *$tmp949;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp951;
$tmp951 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp951->value = $tmp950;
frost$core$Int64 $tmp952 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp953 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp952);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp954;
$tmp954 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp954->value = $tmp953;
ITable* $tmp955 = ((frost$core$Equatable*) $tmp951)->$class->itable;
while ($tmp955->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp955 = $tmp955->next;
}
$fn957 $tmp956 = $tmp955->methods[0];
frost$core$Bit $tmp958 = $tmp956(((frost$core$Equatable*) $tmp951), ((frost$core$Equatable*) $tmp954));
bool $tmp959 = $tmp958.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp954)));
// unreffing REF($122:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp951)));
// unreffing REF($118:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
if ($tmp959) goto block13; else goto block17;
block13:;
// line 213
org$frostlang$frostc$IR$Value* $tmp960 = *(&local0);
frost$core$Bit $tmp961 = frost$core$Bit$init$builtin_bit($tmp960 != NULL);
bool $tmp962 = $tmp961.value;
if ($tmp962) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp963 = (frost$core$Int64) {213};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s964, $tmp963, &$s965);
abort(); // unreachable
block18:;
org$frostlang$frostc$IR$Value* $tmp966 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp960, &$s967);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
org$frostlang$frostc$IR$Value* $tmp968 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
*(&local5) = $tmp966;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
// unreffing REF($143:org.frostlang.frostc.IR.Value?)
// line 215
org$frostlang$frostc$ClassDecl* $tmp969 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
org$frostlang$frostc$ClassDecl* $tmp970 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
*(&local4) = $tmp969;
goto block14;
block17:;
// line 217
org$frostlang$frostc$ClassDecl* $tmp971 = *(&local3);
frost$core$Bit $tmp972 = frost$core$Bit$init$builtin_bit($tmp971 != NULL);
bool $tmp973 = $tmp972.value;
if ($tmp973) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp974 = (frost$core$Int64) {217};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s975, $tmp974, &$s976);
abort(); // unreachable
block22:;
org$frostlang$frostc$SymbolTable* $tmp977 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp971);
org$frostlang$frostc$Symbol* $tmp978 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp977, &$s979);
frost$core$Bit $tmp980 = frost$core$Bit$init$builtin_bit($tmp978 == NULL);
bool $tmp981 = $tmp980.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
// unreffing REF($173:org.frostlang.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
// unreffing REF($172:org.frostlang.frostc.SymbolTable)
if ($tmp981) goto block20; else goto block24;
block20:;
// line 218
$fn983 $tmp982 = ($fn983) param2->$class->vtable[2];
org$frostlang$frostc$Position $tmp984 = $tmp982(param2);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp984, &$s985);
// line 219
org$frostlang$frostc$IR$Value* $tmp986 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
// unreffing choiceRawValue
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp987 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
// unreffing choiceClass
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp988 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
// unreffing cl
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp989 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
// unreffing compiledValue
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block24:;
// line 1
// line 222
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp990 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block21;
block21:;
goto block14;
block14:;
// line 224
org$frostlang$frostc$IR$Value* $tmp991 = *(&local0);
frost$core$Bit $tmp992 = frost$core$Bit$init$builtin_bit($tmp991 != NULL);
bool $tmp993 = $tmp992.value;
if ($tmp993) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp994 = (frost$core$Int64) {224};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s995, $tmp994, &$s996);
abort(); // unreachable
block25:;
org$frostlang$frostc$ClassDecl* $tmp997 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp998 = *(&local5);
org$frostlang$frostc$statement$Match$compileChainedIfMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0, param1, $tmp991, $tmp997, $tmp998, param3, param4);
org$frostlang$frostc$IR$Value* $tmp999 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
// unreffing choiceRawValue
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1000 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
// unreffing choiceClass
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1001 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
// unreffing cl
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp1002 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
// unreffing compiledValue
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$statement$Match$init(org$frostlang$frostc$statement$Match* param0) {

return;

}
void org$frostlang$frostc$statement$Match$cleanup(org$frostlang$frostc$statement$Match* param0) {

// line 23
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

