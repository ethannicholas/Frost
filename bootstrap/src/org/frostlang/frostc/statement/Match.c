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
#include "frost/core/Int.h"
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

typedef frost$core$String* (*$fn13)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn20)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn23)(frost$core$Object*);
typedef frost$core$String* (*$fn52)(frost$core$Object*);
typedef frost$core$Int (*$fn74)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn92)(org$frostlang$frostc$IR*, frost$core$String*);
typedef frost$core$Int (*$fn103)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn146)(org$frostlang$frostc$IR*, frost$core$String*);
typedef frost$core$Int (*$fn153)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn182)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn188)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int (*$fn193)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn208)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn224)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$Position (*$fn257)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Int (*$fn272)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn296)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn310)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn327)(frost$core$Object*);
typedef frost$core$Int (*$fn347)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn351)(frost$core$Object*);
typedef frost$core$Int (*$fn366)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn376)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Int (*$fn389)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn393)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn409)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn412)(frost$core$Object*);
typedef org$frostlang$frostc$Position (*$fn461)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn478)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn519)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn524)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int (*$fn529)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn562)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int (*$fn590)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn606)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int (*$fn660)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn697)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Int (*$fn727)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn792)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn809)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn842)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn888)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn914)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn918)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn922)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn927)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn935)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn947)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn980)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn988)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn992)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn997)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1005)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1016)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1021)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int (*$fn1032)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn1050)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1076)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn1102)(org$frostlang$frostc$ASTNode*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x4d\x61\x74\x63\x68", 36, 1284738188429659722, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 87, -3238916355594340447, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x61\x74\x63\x68\x20\x63\x68\x6f\x69\x63\x65\x20\x63\x61\x73\x65\x20\x27", 26, 6195184737882696999, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x61\x67\x61\x69\x6e\x73\x74\x20\x27", 11, 244974341930203048, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65", 101, -5906684408583789487, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 87, -3238916355594340447, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x61\x74\x63\x68\x20\x63\x68\x6f\x69\x63\x65\x20\x63\x61\x73\x65\x20\x27", 26, 6195184737882696999, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x61\x67\x61\x69\x6e\x73\x74\x20", 10, -4452765502204017249, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x4d\x61\x74\x63\x68\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x43\x68\x61\x69\x6e\x65\x64\x49\x66\x4d\x61\x74\x63\x68\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2c\x20\x63\x68\x6f\x69\x63\x65\x43\x6c\x61\x73\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x2c\x20\x63\x68\x6f\x69\x63\x65\x52\x61\x77\x56\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x77\x68\x65\x6e\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x6f\x74\x68\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x29", 438, -6978513693907537453, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x74\x63\x68\x20\x65\x6e\x64", 9, -926820894365757777, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x65\x73\x74\x20\x73\x75\x63\x63\x65\x73\x73", 12, -1909962622798097854, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x74\x63\x68", 5, -4341501217981328394, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, -1525060961361867620, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x73\x74\x72\x75\x63\x74\x75\x72\x69\x6e\x67\x20\x63\x68\x6f\x69\x63\x65\x20\x27\x77\x68\x65\x6e\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x74\x6f\x67\x65\x74\x68\x65\x72\x20\x77\x69\x74\x68\x20", 57, -9117856006465956354, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x74\x68\x65\x72\x20\x27\x77\x68\x65\x6e\x27\x20\x63\x6f\x6d\x70\x61\x72\x69\x73\x6f\x6e\x73", 24, -6457233602356944489, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, -1525060961361867620, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, -1525060961361867620, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x27", 8, -1761804843643209985, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20", 2, 557168754375928562, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x71\x75\x69\x72\x65\x73\x20", 9, 3024289352992644111, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, -1525060961361867620, NULL };
static frost$core$String $s358 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s359 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, -1525060961361867620, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c\x73", 2, 640440267522026072, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x61\x72\x67\x75\x6d\x65\x6e\x74", 9, -7281427288413514724, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 10, 6826161892368392120, NULL };
static frost$core$String $s415 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x69\x73\x20", 5, 3952076887842184258, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 19, -1825473479368175733, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, -1525060961361867620, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s467 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s468 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, -1525060961361867620, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s492 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d", 1, -5808605251665550904, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s504 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s556 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s557 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, -1525060961361867620, NULL };
static frost$core$String $s575 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s576 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, -1525060961361867620, NULL };
static frost$core$String $s598 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s599 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s620 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s621 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s623 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s645 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s646 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, -1525060961361867620, NULL };
static frost$core$String $s668 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s669 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s703 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s704 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x61\x72\x67\x65\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x61\x72\x67\x65\x74", 111, -8947113806010787797, NULL };
static frost$core$String $s712 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s713 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, -1525060961361867620, NULL };
static frost$core$String $s735 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s736 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s747 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s748 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x61\x72\x67\x65\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x61\x72\x67\x65\x74", 111, -8947113806010787797, NULL };
static frost$core$String $s798 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s799 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, -1525060961361867620, NULL };
static frost$core$String $s814 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s815 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s823 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d", 1, -5808605251665550904, NULL };
static frost$core$String $s853 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d", 1, -5808605251665550904, NULL };
static frost$core$String $s873 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s874 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s958 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s984 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s985 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 1977603186615208662, NULL };
static frost$core$String $s1047 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s1048 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1064 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s1065 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s1083 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s1084 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s1086 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, -2729473888161922992, NULL };
static frost$core$String $s1094 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s1095 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s1098 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d", 1, -5808605251665550904, NULL };
static frost$core$String $s1104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27\x20\x76\x61\x6c\x75\x65\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x64\x65\x66\x69\x6e\x65\x20\x74\x68\x65\x20\x27\x3d\x27\x20\x6f\x70\x65\x72\x61\x74\x6f\x72", 46, -204752271840210608, NULL };
static frost$core$String $s1114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, 6682096033316184482, NULL };
static frost$core$String $s1115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };

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
frost$core$Bit $tmp7 = (frost$core$Bit) {param2 != NULL};
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block5; else goto block6;
block6:;
frost$core$Int $tmp9 = (frost$core$Int) {33u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, $tmp9, &$s11);
abort(); // unreachable
block5:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:33:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn13 $tmp12 = ($fn13) ((frost$core$Object*) param2)->$class->vtable[0];
frost$core$String* $tmp14 = $tmp12(((frost$core$Object*) param2));
frost$core$String* $tmp15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s16, $tmp14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$String* $tmp17 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp15, &$s18);
$fn20 $tmp19 = ($fn20) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp21 = $tmp19(param4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:33:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn23 $tmp22 = ($fn23) ((frost$core$Object*) $tmp21)->$class->vtable[0];
frost$core$String* $tmp24 = $tmp22(((frost$core$Object*) $tmp21));
frost$core$String* $tmp25 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp17, $tmp24);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$String* $tmp26 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp25, &$s27);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:34
frost$core$Bit $tmp28 = (frost$core$Bit) {false};
return $tmp28;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:36
frost$core$Bit $tmp29 = (frost$core$Bit) {param2 != NULL};
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block11; else goto block12;
block12:;
frost$core$Int $tmp31 = (frost$core$Int) {36u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s32, $tmp31, &$s33);
abort(); // unreachable
block11:;
frost$core$Weak** $tmp34 = &param2->owner;
frost$core$Weak* $tmp35 = *$tmp34;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Match.frost:36:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp36 = &$tmp35->_valid;
frost$core$Bit $tmp37 = *$tmp36;
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block15; else goto block16;
block16:;
frost$core$Int $tmp39 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s40, $tmp39);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp41 = &$tmp35->value;
frost$core$Object* $tmp42 = *$tmp41;
frost$core$Frost$ref$frost$core$Object$Q($tmp42);
bool $tmp43 = ((org$frostlang$frostc$ClassDecl*) $tmp42) != param3;
frost$core$Bit $tmp44 = (frost$core$Bit) {$tmp43};
bool $tmp45 = $tmp44.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp42);
if ($tmp45) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:37
frost$core$Bit $tmp46 = (frost$core$Bit) {param2 != NULL};
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block17; else goto block18;
block18:;
frost$core$Int $tmp48 = (frost$core$Int) {37u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s49, $tmp48, &$s50);
abort(); // unreachable
block17:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:37:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn52 $tmp51 = ($fn52) ((frost$core$Object*) param2)->$class->vtable[0];
frost$core$String* $tmp53 = $tmp51(((frost$core$Object*) param2));
frost$core$String* $tmp54 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s55, $tmp53);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$String* $tmp56 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp54, &$s57);
frost$core$Bit $tmp58 = (frost$core$Bit) {param3 != NULL};
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block20; else goto block21;
block21:;
frost$core$Int $tmp60 = (frost$core$Int) {38u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s61, $tmp60, &$s62);
abort(); // unreachable
block20:;
frost$core$String** $tmp63 = &param3->name;
frost$core$String* $tmp64 = *$tmp63;
frost$core$String* $tmp65 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s66, $tmp64);
frost$core$String* $tmp67 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp65, &$s68);
frost$core$String* $tmp69 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp56, $tmp67);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:39
frost$core$Bit $tmp70 = (frost$core$Bit) {false};
return $tmp70;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:41
frost$core$Bit $tmp71 = (frost$core$Bit) {true};
return $tmp71;

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
ITable* $tmp72 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp72->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp72 = $tmp72->next;
}
$fn74 $tmp73 = $tmp72->methods[0];
frost$core$Int $tmp75 = $tmp73(((frost$collections$CollectionView*) param5));
frost$core$Int $tmp76 = (frost$core$Int) {0u};
int64_t $tmp77 = $tmp75.value;
int64_t $tmp78 = $tmp76.value;
bool $tmp79 = $tmp77 > $tmp78;
frost$core$Bit $tmp80 = (frost$core$Bit) {$tmp79};
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block1; else goto block3;
block3:;
frost$core$Bit $tmp82 = (frost$core$Bit) {param6 != NULL};
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block1; else goto block2;
block2:;
frost$core$Int $tmp84 = (frost$core$Int) {47u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s85, $tmp84, &$s86);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:50
org$frostlang$frostc$IR** $tmp87 = &param0->ir;
org$frostlang$frostc$IR* $tmp88 = *$tmp87;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
org$frostlang$frostc$IR* $tmp89 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
*(&local0) = $tmp88;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:51
org$frostlang$frostc$IR* $tmp90 = *(&local0);
$fn92 $tmp91 = ($fn92) $tmp90->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp93 = $tmp91($tmp90, &$s94);
*(&local1) = $tmp93;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:52
org$frostlang$frostc$IR* $tmp95 = *(&local0);
org$frostlang$frostc$IR$Block** $tmp96 = &$tmp95->currentBlock;
org$frostlang$frostc$IR$Block* $tmp97 = *$tmp96;
org$frostlang$frostc$IR$Block$ID* $tmp98 = &$tmp97->id;
org$frostlang$frostc$IR$Block$ID $tmp99 = *$tmp98;
*(&local2) = $tmp99;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:53
frost$core$Int $tmp100 = (frost$core$Int) {0u};
ITable* $tmp101 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp101->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp101 = $tmp101->next;
}
$fn103 $tmp102 = $tmp101->methods[0];
frost$core$Int $tmp104 = $tmp102(((frost$collections$CollectionView*) param5));
frost$core$Bit $tmp105 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp106 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp100, $tmp104, $tmp105);
frost$core$Int $tmp107 = $tmp106.min;
*(&local3) = $tmp107;
frost$core$Int $tmp108 = $tmp106.max;
frost$core$Bit $tmp109 = $tmp106.inclusive;
bool $tmp110 = $tmp109.value;
frost$core$Int $tmp111 = (frost$core$Int) {1u};
if ($tmp110) goto block7; else goto block8;
block7:;
int64_t $tmp112 = $tmp107.value;
int64_t $tmp113 = $tmp108.value;
bool $tmp114 = $tmp112 <= $tmp113;
frost$core$Bit $tmp115 = (frost$core$Bit) {$tmp114};
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block4; else goto block5;
block8:;
int64_t $tmp117 = $tmp107.value;
int64_t $tmp118 = $tmp108.value;
bool $tmp119 = $tmp117 < $tmp118;
frost$core$Bit $tmp120 = (frost$core$Bit) {$tmp119};
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:54
frost$core$Int $tmp122 = *(&local3);
frost$core$Object* $tmp123 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(param5, $tmp122);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp123)));
org$frostlang$frostc$ASTNode* $tmp124 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp123);
frost$core$Frost$unref$frost$core$Object$Q($tmp123);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:55
org$frostlang$frostc$ASTNode* $tmp125 = *(&local4);
frost$core$Int* $tmp126 = &$tmp125->$rawValue;
frost$core$Int $tmp127 = *$tmp126;
frost$core$Int $tmp128 = (frost$core$Int) {54u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Match.frost:56:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp129 = $tmp127.value;
int64_t $tmp130 = $tmp128.value;
bool $tmp131 = $tmp129 == $tmp130;
frost$core$Bit $tmp132 = (frost$core$Bit) {$tmp131};
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp134 = (org$frostlang$frostc$Position*) ($tmp125->$data + 0);
org$frostlang$frostc$Position $tmp135 = *$tmp134;
*(&local5) = $tmp135;
org$frostlang$frostc$FixedArray** $tmp136 = (org$frostlang$frostc$FixedArray**) ($tmp125->$data + 24);
org$frostlang$frostc$FixedArray* $tmp137 = *$tmp136;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
org$frostlang$frostc$FixedArray* $tmp138 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local6) = $tmp137;
org$frostlang$frostc$FixedArray** $tmp139 = (org$frostlang$frostc$FixedArray**) ($tmp125->$data + 32);
org$frostlang$frostc$FixedArray* $tmp140 = *$tmp139;
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
org$frostlang$frostc$FixedArray* $tmp141 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local7) = $tmp140;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:58
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp142 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp142, param0);
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
org$frostlang$frostc$Compiler$AutoScope* $tmp143 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local8) = $tmp142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:59
org$frostlang$frostc$IR* $tmp144 = *(&local0);
$fn146 $tmp145 = ($fn146) $tmp144->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp147 = $tmp145($tmp144, &$s148);
*(&local9) = $tmp147;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:60
frost$core$Int $tmp149 = (frost$core$Int) {0u};
org$frostlang$frostc$FixedArray* $tmp150 = *(&local6);
ITable* $tmp151 = ((frost$collections$CollectionView*) $tmp150)->$class->itable;
while ($tmp151->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp151 = $tmp151->next;
}
$fn153 $tmp152 = $tmp151->methods[0];
frost$core$Int $tmp154 = $tmp152(((frost$collections$CollectionView*) $tmp150));
frost$core$Bit $tmp155 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp156 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp149, $tmp154, $tmp155);
frost$core$Int $tmp157 = $tmp156.min;
*(&local10) = $tmp157;
frost$core$Int $tmp158 = $tmp156.max;
frost$core$Bit $tmp159 = $tmp156.inclusive;
bool $tmp160 = $tmp159.value;
frost$core$Int $tmp161 = (frost$core$Int) {1u};
if ($tmp160) goto block16; else goto block17;
block16:;
int64_t $tmp162 = $tmp157.value;
int64_t $tmp163 = $tmp158.value;
bool $tmp164 = $tmp162 <= $tmp163;
frost$core$Bit $tmp165 = (frost$core$Bit) {$tmp164};
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block13; else goto block14;
block17:;
int64_t $tmp167 = $tmp157.value;
int64_t $tmp168 = $tmp158.value;
bool $tmp169 = $tmp167 < $tmp168;
frost$core$Bit $tmp170 = (frost$core$Bit) {$tmp169};
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:61
org$frostlang$frostc$IR$Block$ID $tmp172 = *(&local2);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp173;
$tmp173 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp173->value = $tmp172;
org$frostlang$frostc$IR* $tmp174 = *(&local0);
org$frostlang$frostc$IR$Block** $tmp175 = &$tmp174->currentBlock;
org$frostlang$frostc$IR$Block* $tmp176 = *$tmp175;
org$frostlang$frostc$IR$Block$ID* $tmp177 = &$tmp176->id;
org$frostlang$frostc$IR$Block$ID $tmp178 = *$tmp177;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp179;
$tmp179 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp179->value = $tmp178;
ITable* $tmp180 = ((frost$core$Equatable*) $tmp173)->$class->itable;
while ($tmp180->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp180 = $tmp180->next;
}
$fn182 $tmp181 = $tmp180->methods[1];
frost$core$Bit $tmp183 = $tmp181(((frost$core$Equatable*) $tmp173), ((frost$core$Equatable*) $tmp179));
bool $tmp184 = $tmp183.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp179)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp173)));
if ($tmp184) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:62
org$frostlang$frostc$IR* $tmp185 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp186 = *(&local2);
$fn188 $tmp187 = ($fn188) $tmp185->$class->vtable[4];
$tmp187($tmp185, $tmp186);
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:64
frost$core$Int $tmp189 = *(&local10);
org$frostlang$frostc$FixedArray* $tmp190 = *(&local6);
ITable* $tmp191 = ((frost$collections$CollectionView*) $tmp190)->$class->itable;
while ($tmp191->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp191 = $tmp191->next;
}
$fn193 $tmp192 = $tmp191->methods[0];
frost$core$Int $tmp194 = $tmp192(((frost$collections$CollectionView*) $tmp190));
frost$core$Int $tmp195 = (frost$core$Int) {1u};
int64_t $tmp196 = $tmp194.value;
int64_t $tmp197 = $tmp195.value;
int64_t $tmp198 = $tmp196 - $tmp197;
frost$core$Int $tmp199 = (frost$core$Int) {$tmp198};
int64_t $tmp200 = $tmp189.value;
int64_t $tmp201 = $tmp199.value;
bool $tmp202 = $tmp200 < $tmp201;
frost$core$Bit $tmp203 = (frost$core$Bit) {$tmp202};
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block20; else goto block24;
block24:;
frost$core$Int $tmp205 = *(&local3);
ITable* $tmp206 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp206->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp206 = $tmp206->next;
}
$fn208 $tmp207 = $tmp206->methods[0];
frost$core$Int $tmp209 = $tmp207(((frost$collections$CollectionView*) param5));
frost$core$Int $tmp210 = (frost$core$Int) {1u};
int64_t $tmp211 = $tmp209.value;
int64_t $tmp212 = $tmp210.value;
int64_t $tmp213 = $tmp211 - $tmp212;
frost$core$Int $tmp214 = (frost$core$Int) {$tmp213};
int64_t $tmp215 = $tmp205.value;
int64_t $tmp216 = $tmp214.value;
bool $tmp217 = $tmp215 < $tmp216;
frost$core$Bit $tmp218 = (frost$core$Bit) {$tmp217};
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block20; else goto block23;
block23:;
frost$core$Bit $tmp220 = (frost$core$Bit) {param6 != NULL};
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block20; else goto block22;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:65
org$frostlang$frostc$IR* $tmp222 = *(&local0);
$fn224 $tmp223 = ($fn224) $tmp222->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp225 = $tmp223($tmp222, &$s226);
*(&local2) = $tmp225;
goto block21;
block22:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:68
org$frostlang$frostc$IR$Block$ID $tmp227 = *(&local1);
*(&local2) = $tmp227;
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:70
org$frostlang$frostc$FixedArray* $tmp228 = *(&local6);
frost$core$Int $tmp229 = *(&local10);
frost$core$Object* $tmp230 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp228, $tmp229);
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp230)));
org$frostlang$frostc$ASTNode* $tmp231 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local11) = ((org$frostlang$frostc$ASTNode*) $tmp230);
frost$core$Frost$unref$frost$core$Object$Q($tmp230);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:71
org$frostlang$frostc$ASTNode* $tmp232 = *(&local11);
frost$core$Int* $tmp233 = &$tmp232->$rawValue;
frost$core$Int $tmp234 = *$tmp233;
frost$core$Int $tmp235 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Match.frost:72:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp236 = $tmp234.value;
int64_t $tmp237 = $tmp235.value;
bool $tmp238 = $tmp236 == $tmp237;
frost$core$Bit $tmp239 = (frost$core$Bit) {$tmp238};
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block26; else goto block25;
block26:;
org$frostlang$frostc$Position* $tmp241 = (org$frostlang$frostc$Position*) ($tmp232->$data + 0);
org$frostlang$frostc$Position $tmp242 = *$tmp241;
*(&local12) = $tmp242;
org$frostlang$frostc$ASTNode** $tmp243 = (org$frostlang$frostc$ASTNode**) ($tmp232->$data + 24);
org$frostlang$frostc$ASTNode* $tmp244 = *$tmp243;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
org$frostlang$frostc$ASTNode* $tmp245 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
*(&local13) = $tmp244;
org$frostlang$frostc$FixedArray** $tmp246 = (org$frostlang$frostc$FixedArray**) ($tmp232->$data + 32);
org$frostlang$frostc$FixedArray* $tmp247 = *$tmp246;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
org$frostlang$frostc$FixedArray* $tmp248 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
*(&local14) = $tmp247;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:73
org$frostlang$frostc$ASTNode* $tmp249 = *(&local13);
org$frostlang$frostc$Pair* $tmp250 = org$frostlang$frostc$Compiler$getChoiceCase$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Corg$frostlang$frostc$ChoiceCase$GT$Q(param0, $tmp249);
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
org$frostlang$frostc$Pair* $tmp251 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
*(&local15) = $tmp250;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:74
org$frostlang$frostc$Pair* $tmp252 = *(&local15);
frost$core$Bit $tmp253 = (frost$core$Bit) {$tmp252 != NULL};
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:75
org$frostlang$frostc$ASTNode* $tmp255 = *(&local13);
$fn257 $tmp256 = ($fn257) $tmp255->$class->vtable[2];
org$frostlang$frostc$Position $tmp258 = $tmp256($tmp255);
org$frostlang$frostc$Pair* $tmp259 = *(&local15);
frost$core$Bit $tmp260 = (frost$core$Bit) {$tmp259 != NULL};
bool $tmp261 = $tmp260.value;
if ($tmp261) goto block32; else goto block33;
block33:;
frost$core$Int $tmp262 = (frost$core$Int) {75u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s263, $tmp262, &$s264);
abort(); // unreachable
block32:;
frost$core$Object** $tmp265 = &$tmp259->second;
frost$core$Object* $tmp266 = *$tmp265;
frost$core$Bit $tmp267 = org$frostlang$frostc$statement$Match$checkChoiceMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ChoiceCase$Q$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, $tmp258, ((org$frostlang$frostc$ChoiceCase*) $tmp266), param3, param2);
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:77
org$frostlang$frostc$FixedArray* $tmp269 = *(&local6);
ITable* $tmp270 = ((frost$collections$CollectionView*) $tmp269)->$class->itable;
while ($tmp270->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp270 = $tmp270->next;
}
$fn272 $tmp271 = $tmp270->methods[0];
frost$core$Int $tmp273 = $tmp271(((frost$collections$CollectionView*) $tmp269));
frost$core$Int $tmp274 = (frost$core$Int) {1u};
int64_t $tmp275 = $tmp273.value;
int64_t $tmp276 = $tmp274.value;
bool $tmp277 = $tmp275 != $tmp276;
frost$core$Bit $tmp278 = (frost$core$Bit) {$tmp277};
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:78
org$frostlang$frostc$Position $tmp280 = *(&local12);
frost$core$String* $tmp281 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s282, &$s283);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp280, $tmp281);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:81
org$frostlang$frostc$Pair* $tmp284 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp285 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp286 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp287 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp288 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp289 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp290 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp291 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp292 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:83
org$frostlang$frostc$FixedArray* $tmp293 = *(&local14);
ITable* $tmp294 = ((frost$collections$CollectionView*) $tmp293)->$class->itable;
while ($tmp294->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp294 = $tmp294->next;
}
$fn296 $tmp295 = $tmp294->methods[0];
frost$core$Int $tmp297 = $tmp295(((frost$collections$CollectionView*) $tmp293));
org$frostlang$frostc$Pair* $tmp298 = *(&local15);
frost$core$Bit $tmp299 = (frost$core$Bit) {$tmp298 != NULL};
bool $tmp300 = $tmp299.value;
if ($tmp300) goto block38; else goto block39;
block39:;
frost$core$Int $tmp301 = (frost$core$Int) {83u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s302, $tmp301, &$s303);
abort(); // unreachable
block38:;
frost$core$Object** $tmp304 = &$tmp298->second;
frost$core$Object* $tmp305 = *$tmp304;
frost$collections$Array** $tmp306 = &((org$frostlang$frostc$ChoiceCase*) $tmp305)->fields;
frost$collections$Array* $tmp307 = *$tmp306;
ITable* $tmp308 = ((frost$collections$CollectionView*) $tmp307)->$class->itable;
while ($tmp308->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp308 = $tmp308->next;
}
$fn310 $tmp309 = $tmp308->methods[0];
frost$core$Int $tmp311 = $tmp309(((frost$collections$CollectionView*) $tmp307));
int64_t $tmp312 = $tmp297.value;
int64_t $tmp313 = $tmp311.value;
bool $tmp314 = $tmp312 != $tmp313;
frost$core$Bit $tmp315 = (frost$core$Bit) {$tmp314};
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:84
org$frostlang$frostc$Position $tmp317 = *(&local12);
org$frostlang$frostc$Pair* $tmp318 = *(&local15);
frost$core$Bit $tmp319 = (frost$core$Bit) {$tmp318 != NULL};
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block40; else goto block41;
block41:;
frost$core$Int $tmp321 = (frost$core$Int) {84u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s322, $tmp321, &$s323);
abort(); // unreachable
block40:;
frost$core$Object** $tmp324 = &$tmp318->second;
frost$core$Object* $tmp325 = *$tmp324;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:84:74
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn327 $tmp326 = ($fn327) ((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp325))->$class->vtable[0];
frost$core$String* $tmp328 = $tmp326(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp325)));
frost$core$String* $tmp329 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s330, $tmp328);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$core$String* $tmp331 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp329, &$s332);
frost$core$String* $tmp333 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp331, &$s334);
org$frostlang$frostc$Pair* $tmp335 = *(&local15);
frost$core$Bit $tmp336 = (frost$core$Bit) {$tmp335 != NULL};
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block43; else goto block44;
block44:;
frost$core$Int $tmp338 = (frost$core$Int) {85u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s339, $tmp338, &$s340);
abort(); // unreachable
block43:;
frost$core$Object** $tmp341 = &$tmp335->second;
frost$core$Object* $tmp342 = *$tmp341;
frost$collections$Array** $tmp343 = &((org$frostlang$frostc$ChoiceCase*) $tmp342)->fields;
frost$collections$Array* $tmp344 = *$tmp343;
ITable* $tmp345 = ((frost$collections$CollectionView*) $tmp344)->$class->itable;
while ($tmp345->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp345 = $tmp345->next;
}
$fn347 $tmp346 = $tmp345->methods[0];
frost$core$Int $tmp348 = $tmp346(((frost$collections$CollectionView*) $tmp344));
frost$core$Int$wrapper* $tmp349;
$tmp349 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp349->value = $tmp348;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:85:69
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn351 $tmp350 = ($fn351) ((frost$core$Object*) $tmp349)->$class->vtable[0];
frost$core$String* $tmp352 = $tmp350(((frost$core$Object*) $tmp349));
frost$core$String* $tmp353 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp333, $tmp352);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
org$frostlang$frostc$Pair* $tmp354 = *(&local15);
frost$core$Bit $tmp355 = (frost$core$Bit) {$tmp354 != NULL};
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block46; else goto block47;
block47:;
frost$core$Int $tmp357 = (frost$core$Int) {86u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s358, $tmp357, &$s359);
abort(); // unreachable
block46:;
frost$core$Object** $tmp360 = &$tmp354->second;
frost$core$Object* $tmp361 = *$tmp360;
frost$collections$Array** $tmp362 = &((org$frostlang$frostc$ChoiceCase*) $tmp361)->fields;
frost$collections$Array* $tmp363 = *$tmp362;
ITable* $tmp364 = ((frost$collections$CollectionView*) $tmp363)->$class->itable;
while ($tmp364->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp364 = $tmp364->next;
}
$fn366 $tmp365 = $tmp364->methods[0];
frost$core$Int $tmp367 = $tmp365(((frost$collections$CollectionView*) $tmp363));
frost$core$Int $tmp368 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Match.frost:86:92
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp369 = $tmp367.value;
int64_t $tmp370 = $tmp368.value;
bool $tmp371 = $tmp369 == $tmp370;
frost$core$Bit $tmp372 = (frost$core$Bit) {$tmp371};
frost$core$Bit$wrapper* $tmp373;
$tmp373 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp373->value = $tmp372;
ITable* $tmp374 = ((frost$core$Formattable*) $tmp373)->$class->itable;
while ($tmp374->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp374 = $tmp374->next;
}
$fn376 $tmp375 = $tmp374->methods[0];
frost$core$String* $tmp377 = $tmp375(((frost$core$Formattable*) $tmp373), &$s378);
frost$core$String* $tmp379 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s380, $tmp377);
frost$core$String* $tmp381 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp379, &$s382);
frost$core$String* $tmp383 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp353, $tmp381);
frost$core$String* $tmp384 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp383, &$s385);
org$frostlang$frostc$FixedArray* $tmp386 = *(&local14);
ITable* $tmp387 = ((frost$collections$CollectionView*) $tmp386)->$class->itable;
while ($tmp387->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp387 = $tmp387->next;
}
$fn389 $tmp388 = $tmp387->methods[0];
frost$core$Int $tmp390 = $tmp388(((frost$collections$CollectionView*) $tmp386));
frost$core$Int$wrapper* $tmp391;
$tmp391 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp391->value = $tmp390;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:87:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn393 $tmp392 = ($fn393) ((frost$core$Object*) $tmp391)->$class->vtable[0];
frost$core$String* $tmp394 = $tmp392(((frost$core$Object*) $tmp391));
frost$core$String* $tmp395 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp384, $tmp394);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp317, $tmp395);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp373)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:88
org$frostlang$frostc$Pair* $tmp396 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp397 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp398 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp399 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp400 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp401 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp402 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp403 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp404 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:90
frost$core$Bit $tmp405 = (frost$core$Bit) {param4 == NULL};
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:91
org$frostlang$frostc$Position $tmp407 = *(&local12);
$fn409 $tmp408 = ($fn409) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp410 = $tmp408(param2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Match.frost:91:74
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn412 $tmp411 = ($fn412) ((frost$core$Object*) $tmp410)->$class->vtable[0];
frost$core$String* $tmp413 = $tmp411(((frost$core$Object*) $tmp410));
frost$core$String* $tmp414 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s415, $tmp413);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
frost$core$String* $tmp416 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp414, &$s417);
frost$core$String* $tmp418 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp416, &$s419);
org$frostlang$frostc$Pair* $tmp420 = *(&local15);
frost$core$Bit $tmp421 = (frost$core$Bit) {$tmp420 != NULL};
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block53; else goto block54;
block54:;
frost$core$Int $tmp423 = (frost$core$Int) {93u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s424, $tmp423, &$s425);
abort(); // unreachable
block53:;
frost$core$Object** $tmp426 = &$tmp420->second;
frost$core$Object* $tmp427 = *$tmp426;
frost$core$Weak** $tmp428 = &((org$frostlang$frostc$ChoiceCase*) $tmp427)->owner;
frost$core$Weak* $tmp429 = *$tmp428;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Match.frost:93:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp430 = &$tmp429->_valid;
frost$core$Bit $tmp431 = *$tmp430;
bool $tmp432 = $tmp431.value;
if ($tmp432) goto block57; else goto block58;
block58:;
frost$core$Int $tmp433 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s434, $tmp433);
abort(); // unreachable
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp435 = &$tmp429->value;
frost$core$Object* $tmp436 = *$tmp435;
frost$core$Frost$ref$frost$core$Object$Q($tmp436);
frost$core$String** $tmp437 = &((org$frostlang$frostc$ClassDecl*) $tmp436)->name;
frost$core$String* $tmp438 = *$tmp437;
frost$core$String* $tmp439 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s440, $tmp438);
frost$core$String* $tmp441 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp439, &$s442);
frost$core$String* $tmp443 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp418, $tmp441);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp407, $tmp443);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q($tmp436);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:94
org$frostlang$frostc$Pair* $tmp444 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp445 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp446 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp447 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp448 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp449 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp450 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp451 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp452 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:96
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:98
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp453 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp453, param0);
*(&local17) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp454 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
*(&local17) = $tmp453;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:99
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp455 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp456 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp455, $tmp456);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp457 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp458 = (frost$core$Int) {25u};
org$frostlang$frostc$ASTNode* $tmp459 = *(&local13);
$fn461 $tmp460 = ($fn461) $tmp459->$class->vtable[2];
org$frostlang$frostc$Position $tmp462 = $tmp460($tmp459);
org$frostlang$frostc$Pair* $tmp463 = *(&local15);
frost$core$Bit $tmp464 = (frost$core$Bit) {$tmp463 != NULL};
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block59; else goto block60;
block60:;
frost$core$Int $tmp466 = (frost$core$Int) {100u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s467, $tmp466, &$s468);
abort(); // unreachable
block59:;
frost$core$Object** $tmp469 = &$tmp463->second;
frost$core$Object* $tmp470 = *$tmp469;
frost$core$Int* $tmp471 = &((org$frostlang$frostc$ChoiceCase*) $tmp470)->rawValue;
frost$core$Int $tmp472 = *$tmp471;
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Match.frost:100:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
int64_t $tmp473 = $tmp472.value;
frost$core$UInt64 $tmp474 = (frost$core$UInt64) {((uint64_t) $tmp473)};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp457, $tmp458, $tmp462, $tmp474);
frost$collections$Array$add$frost$collections$Array$T($tmp455, ((frost$core$Object*) $tmp457));
*(&local18) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
frost$collections$Array* $tmp475 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
*(&local18) = $tmp455;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:101
org$frostlang$frostc$ASTNode* $tmp476 = *(&local13);
$fn478 $tmp477 = ($fn478) $tmp476->$class->vtable[2];
org$frostlang$frostc$Position $tmp479 = $tmp477($tmp476);
frost$core$Bit $tmp480 = (frost$core$Bit) {param4 != NULL};
bool $tmp481 = $tmp480.value;
if ($tmp481) goto block62; else goto block63;
block63:;
frost$core$Int $tmp482 = (frost$core$Int) {102u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s483, $tmp482, &$s484);
abort(); // unreachable
block62:;
frost$collections$Array* $tmp485 = *(&local18);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp486 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp487 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp488 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp489 = *$tmp488;
frost$core$Bit $tmp490 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp486, $tmp487, $tmp489, $tmp490);
org$frostlang$frostc$IR$Value* $tmp491 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp479, param4, &$s492, ((frost$collections$ListView*) $tmp485), $tmp486);
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
org$frostlang$frostc$IR$Value* $tmp493 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
*(&local19) = $tmp491;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:104
org$frostlang$frostc$IR$Value* $tmp494 = *(&local19);
frost$core$Bit $tmp495 = (frost$core$Bit) {$tmp494 != NULL};
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block64; else goto block65;
block65:;
frost$core$Int $tmp497 = (frost$core$Int) {104u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s498, $tmp497);
abort(); // unreachable
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:105
org$frostlang$frostc$Position $tmp499 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp500 = *(&local19);
frost$core$Bit $tmp501 = (frost$core$Bit) {$tmp500 != NULL};
bool $tmp502 = $tmp501.value;
if ($tmp502) goto block66; else goto block67;
block67:;
frost$core$Int $tmp503 = (frost$core$Int) {106u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s504, $tmp503, &$s505);
abort(); // unreachable
block66:;
org$frostlang$frostc$IR$Value* $tmp506 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, $tmp499, $tmp500);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
org$frostlang$frostc$IR$Value* $tmp507 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
*(&local16) = $tmp506;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
org$frostlang$frostc$IR$Value* $tmp508 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp509 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp510 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
*(&local17) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:108
org$frostlang$frostc$IR* $tmp511 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp512 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp513 = (frost$core$Int) {5u};
org$frostlang$frostc$Position $tmp514 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp515 = *(&local16);
org$frostlang$frostc$IR$Block$ID $tmp516 = *(&local9);
org$frostlang$frostc$IR$Block$ID $tmp517 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp512, $tmp513, $tmp514, $tmp515, $tmp516, $tmp517);
$fn519 $tmp518 = ($fn519) $tmp511->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp520 = $tmp518($tmp511, $tmp512);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:110
org$frostlang$frostc$IR* $tmp521 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp522 = *(&local9);
$fn524 $tmp523 = ($fn524) $tmp521->$class->vtable[4];
$tmp523($tmp521, $tmp522);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:111
frost$core$Int $tmp525 = (frost$core$Int) {0u};
org$frostlang$frostc$FixedArray* $tmp526 = *(&local14);
ITable* $tmp527 = ((frost$collections$CollectionView*) $tmp526)->$class->itable;
while ($tmp527->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp527 = $tmp527->next;
}
$fn529 $tmp528 = $tmp527->methods[0];
frost$core$Int $tmp530 = $tmp528(((frost$collections$CollectionView*) $tmp526));
frost$core$Bit $tmp531 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp532 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp525, $tmp530, $tmp531);
frost$core$Int $tmp533 = $tmp532.min;
*(&local20) = $tmp533;
frost$core$Int $tmp534 = $tmp532.max;
frost$core$Bit $tmp535 = $tmp532.inclusive;
bool $tmp536 = $tmp535.value;
frost$core$Int $tmp537 = (frost$core$Int) {1u};
if ($tmp536) goto block71; else goto block72;
block71:;
int64_t $tmp538 = $tmp533.value;
int64_t $tmp539 = $tmp534.value;
bool $tmp540 = $tmp538 <= $tmp539;
frost$core$Bit $tmp541 = (frost$core$Bit) {$tmp540};
bool $tmp542 = $tmp541.value;
if ($tmp542) goto block68; else goto block69;
block72:;
int64_t $tmp543 = $tmp533.value;
int64_t $tmp544 = $tmp534.value;
bool $tmp545 = $tmp543 < $tmp544;
frost$core$Bit $tmp546 = (frost$core$Bit) {$tmp545};
bool $tmp547 = $tmp546.value;
if ($tmp547) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:112
org$frostlang$frostc$IR* $tmp548 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp549 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp550 = (frost$core$Int) {4u};
org$frostlang$frostc$Position $tmp551 = *(&local12);
org$frostlang$frostc$Pair* $tmp552 = *(&local15);
frost$core$Bit $tmp553 = (frost$core$Bit) {$tmp552 != NULL};
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block73; else goto block74;
block74:;
frost$core$Int $tmp555 = (frost$core$Int) {114u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s556, $tmp555, &$s557);
abort(); // unreachable
block73:;
frost$core$Object** $tmp558 = &$tmp552->second;
frost$core$Object* $tmp559 = *$tmp558;
frost$core$Int $tmp560 = *(&local20);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int($tmp549, $tmp550, $tmp551, param2, ((org$frostlang$frostc$ChoiceCase*) $tmp559), $tmp560);
$fn562 $tmp561 = ($fn562) $tmp548->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp563 = $tmp561($tmp548, $tmp549);
*(&local21) = $tmp563;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:115
org$frostlang$frostc$IR* $tmp564 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp565 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp566 = (frost$core$Int) {14u};
org$frostlang$frostc$Position $tmp567 = *(&local12);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp568 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp569 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp570 = *(&local21);
org$frostlang$frostc$Pair* $tmp571 = *(&local15);
frost$core$Bit $tmp572 = (frost$core$Bit) {$tmp571 != NULL};
bool $tmp573 = $tmp572.value;
if ($tmp573) goto block75; else goto block76;
block76:;
frost$core$Int $tmp574 = (frost$core$Int) {116u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s575, $tmp574, &$s576);
abort(); // unreachable
block75:;
frost$core$Object** $tmp577 = &$tmp571->second;
frost$core$Object* $tmp578 = *$tmp577;
frost$collections$Array** $tmp579 = &((org$frostlang$frostc$ChoiceCase*) $tmp578)->fields;
frost$collections$Array* $tmp580 = *$tmp579;
frost$core$Int $tmp581 = *(&local20);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Match.frost:116:91
frost$core$Int $tmp582 = (frost$core$Int) {0u};
int64_t $tmp583 = $tmp581.value;
int64_t $tmp584 = $tmp582.value;
bool $tmp585 = $tmp583 >= $tmp584;
frost$core$Bit $tmp586 = (frost$core$Bit) {$tmp585};
bool $tmp587 = $tmp586.value;
if ($tmp587) goto block80; else goto block79;
block80:;
ITable* $tmp588 = ((frost$collections$CollectionView*) $tmp580)->$class->itable;
while ($tmp588->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp588 = $tmp588->next;
}
$fn590 $tmp589 = $tmp588->methods[0];
frost$core$Int $tmp591 = $tmp589(((frost$collections$CollectionView*) $tmp580));
int64_t $tmp592 = $tmp581.value;
int64_t $tmp593 = $tmp591.value;
bool $tmp594 = $tmp592 < $tmp593;
frost$core$Bit $tmp595 = (frost$core$Bit) {$tmp594};
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block78; else goto block79;
block79:;
frost$core$Int $tmp597 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s598, $tmp597, &$s599);
abort(); // unreachable
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp600 = &$tmp580->data;
frost$core$Object** $tmp601 = *$tmp600;
frost$core$Int64 $tmp602 = frost$core$Int64$init$frost$core$Int($tmp581);
int64_t $tmp603 = $tmp602.value;
frost$core$Object* $tmp604 = $tmp601[$tmp603];
frost$core$Frost$ref$frost$core$Object$Q($tmp604);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp568, $tmp569, $tmp570, ((org$frostlang$frostc$Type*) $tmp604));
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp565, $tmp566, $tmp567, $tmp568);
$fn606 $tmp605 = ($fn606) $tmp564->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp607 = $tmp605($tmp564, $tmp565);
*(&local22) = $tmp607;
frost$core$Frost$unref$frost$core$Object$Q($tmp604);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:117
org$frostlang$frostc$FixedArray* $tmp608 = *(&local14);
frost$core$Int $tmp609 = *(&local20);
frost$core$Object* $tmp610 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp608, $tmp609);
frost$core$String* $tmp611 = org$frostlang$frostc$Compiler$getText$org$frostlang$frostc$ASTNode$R$frost$core$String$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp610));
*(&local23) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$core$String* $tmp612 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
*(&local23) = $tmp611;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$core$Frost$unref$frost$core$Object$Q($tmp610);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:118
frost$core$String* $tmp613 = *(&local23);
frost$core$Bit $tmp614 = (frost$core$Bit) {$tmp613 != NULL};
bool $tmp615 = $tmp614.value;
if ($tmp615) goto block83; else goto block82;
block83:;
frost$core$String* $tmp616 = *(&local23);
frost$core$Bit $tmp617 = (frost$core$Bit) {$tmp616 != NULL};
bool $tmp618 = $tmp617.value;
if ($tmp618) goto block84; else goto block85;
block85:;
frost$core$Int $tmp619 = (frost$core$Int) {118u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s620, $tmp619, &$s621);
abort(); // unreachable
block84:;
frost$core$Bit $tmp622 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp616, &$s623);
bool $tmp624 = $tmp622.value;
if ($tmp624) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:119
frost$core$String* $tmp625 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
*(&local23) = ((frost$core$String*) NULL);
goto block70;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:121
*(&local24) = ((org$frostlang$frostc$Compiler$Target*) NULL);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:123
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp626 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp626, param0);
*(&local25) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp627 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
*(&local25) = $tmp626;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:124
org$frostlang$frostc$FixedArray* $tmp628 = *(&local14);
frost$core$Int $tmp629 = *(&local20);
frost$core$Object* $tmp630 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp628, $tmp629);
frost$core$Int $tmp631 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Variable.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Variable.Kind from Match.frost:125:74
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Variable.frost:8
frost$core$Int* $tmp632 = &(&local27)->$rawValue;
*$tmp632 = $tmp631;
org$frostlang$frostc$Variable$Kind $tmp633 = *(&local27);
*(&local26) = $tmp633;
org$frostlang$frostc$Variable$Kind $tmp634 = *(&local26);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp635 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp636 = (frost$core$Int) {26u};
org$frostlang$frostc$Position $tmp637 = *(&local12);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp638 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp639 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp640 = *(&local22);
org$frostlang$frostc$Pair* $tmp641 = *(&local15);
frost$core$Bit $tmp642 = (frost$core$Bit) {$tmp641 != NULL};
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block87; else goto block88;
block88:;
frost$core$Int $tmp644 = (frost$core$Int) {128u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s645, $tmp644, &$s646);
abort(); // unreachable
block87:;
frost$core$Object** $tmp647 = &$tmp641->second;
frost$core$Object* $tmp648 = *$tmp647;
frost$collections$Array** $tmp649 = &((org$frostlang$frostc$ChoiceCase*) $tmp648)->fields;
frost$collections$Array* $tmp650 = *$tmp649;
frost$core$Int $tmp651 = *(&local20);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Match.frost:128:89
frost$core$Int $tmp652 = (frost$core$Int) {0u};
int64_t $tmp653 = $tmp651.value;
int64_t $tmp654 = $tmp652.value;
bool $tmp655 = $tmp653 >= $tmp654;
frost$core$Bit $tmp656 = (frost$core$Bit) {$tmp655};
bool $tmp657 = $tmp656.value;
if ($tmp657) goto block92; else goto block91;
block92:;
ITable* $tmp658 = ((frost$collections$CollectionView*) $tmp650)->$class->itable;
while ($tmp658->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp658 = $tmp658->next;
}
$fn660 $tmp659 = $tmp658->methods[0];
frost$core$Int $tmp661 = $tmp659(((frost$collections$CollectionView*) $tmp650));
int64_t $tmp662 = $tmp651.value;
int64_t $tmp663 = $tmp661.value;
bool $tmp664 = $tmp662 < $tmp663;
frost$core$Bit $tmp665 = (frost$core$Bit) {$tmp664};
bool $tmp666 = $tmp665.value;
if ($tmp666) goto block90; else goto block91;
block91:;
frost$core$Int $tmp667 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s668, $tmp667, &$s669);
abort(); // unreachable
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp670 = &$tmp650->data;
frost$core$Object** $tmp671 = *$tmp670;
frost$core$Int64 $tmp672 = frost$core$Int64$init$frost$core$Int($tmp651);
int64_t $tmp673 = $tmp672.value;
frost$core$Object* $tmp674 = $tmp671[$tmp673];
frost$core$Frost$ref$frost$core$Object$Q($tmp674);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp638, $tmp639, $tmp640, ((org$frostlang$frostc$Type*) $tmp674));
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp635, $tmp636, $tmp637, $tmp638);
org$frostlang$frostc$Compiler$Target* $tmp675 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Compiler$Target$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp630), $tmp634, $tmp635, ((org$frostlang$frostc$Type*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
org$frostlang$frostc$Compiler$Target* $tmp676 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
*(&local24) = $tmp675;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
frost$core$Frost$unref$frost$core$Object$Q($tmp674);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$core$Frost$unref$frost$core$Object$Q($tmp630);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:130
org$frostlang$frostc$Compiler$Target* $tmp677 = *(&local24);
frost$core$Bit $tmp678 = (frost$core$Bit) {$tmp677 == NULL};
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block93; else goto block94;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:131
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp680 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
*(&local25) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$Compiler$Target* $tmp681 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
*(&local24) = ((org$frostlang$frostc$Compiler$Target*) NULL);
frost$core$String* $tmp682 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
*(&local23) = ((frost$core$String*) NULL);
org$frostlang$frostc$IR$Value* $tmp683 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp684 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp685 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp686 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp687 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp688 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp689 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp690 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp691 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp692 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:133
org$frostlang$frostc$FixedArray* $tmp693 = *(&local14);
frost$core$Int $tmp694 = *(&local20);
frost$core$Object* $tmp695 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp693, $tmp694);
$fn697 $tmp696 = ($fn697) ((org$frostlang$frostc$ASTNode*) $tmp695)->$class->vtable[2];
org$frostlang$frostc$Position $tmp698 = $tmp696(((org$frostlang$frostc$ASTNode*) $tmp695));
org$frostlang$frostc$Compiler$Target* $tmp699 = *(&local24);
frost$core$Bit $tmp700 = (frost$core$Bit) {$tmp699 != NULL};
bool $tmp701 = $tmp700.value;
if ($tmp701) goto block95; else goto block96;
block96:;
frost$core$Int $tmp702 = (frost$core$Int) {134u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s703, $tmp702, &$s704);
abort(); // unreachable
block95:;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp705 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp706 = (frost$core$Int) {7u};
org$frostlang$frostc$IR$Statement$ID $tmp707 = *(&local22);
org$frostlang$frostc$Pair* $tmp708 = *(&local15);
frost$core$Bit $tmp709 = (frost$core$Bit) {$tmp708 != NULL};
bool $tmp710 = $tmp709.value;
if ($tmp710) goto block97; else goto block98;
block98:;
frost$core$Int $tmp711 = (frost$core$Int) {135u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s712, $tmp711, &$s713);
abort(); // unreachable
block97:;
frost$core$Object** $tmp714 = &$tmp708->second;
frost$core$Object* $tmp715 = *$tmp714;
frost$collections$Array** $tmp716 = &((org$frostlang$frostc$ChoiceCase*) $tmp715)->fields;
frost$collections$Array* $tmp717 = *$tmp716;
frost$core$Int $tmp718 = *(&local20);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Match.frost:135:96
frost$core$Int $tmp719 = (frost$core$Int) {0u};
int64_t $tmp720 = $tmp718.value;
int64_t $tmp721 = $tmp719.value;
bool $tmp722 = $tmp720 >= $tmp721;
frost$core$Bit $tmp723 = (frost$core$Bit) {$tmp722};
bool $tmp724 = $tmp723.value;
if ($tmp724) goto block102; else goto block101;
block102:;
ITable* $tmp725 = ((frost$collections$CollectionView*) $tmp717)->$class->itable;
while ($tmp725->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp725 = $tmp725->next;
}
$fn727 $tmp726 = $tmp725->methods[0];
frost$core$Int $tmp728 = $tmp726(((frost$collections$CollectionView*) $tmp717));
int64_t $tmp729 = $tmp718.value;
int64_t $tmp730 = $tmp728.value;
bool $tmp731 = $tmp729 < $tmp730;
frost$core$Bit $tmp732 = (frost$core$Bit) {$tmp731};
bool $tmp733 = $tmp732.value;
if ($tmp733) goto block100; else goto block101;
block101:;
frost$core$Int $tmp734 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s735, $tmp734, &$s736);
abort(); // unreachable
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp737 = &$tmp717->data;
frost$core$Object** $tmp738 = *$tmp737;
frost$core$Int64 $tmp739 = frost$core$Int64$init$frost$core$Int($tmp718);
int64_t $tmp740 = $tmp739.value;
frost$core$Object* $tmp741 = $tmp738[$tmp740];
frost$core$Frost$ref$frost$core$Object$Q($tmp741);
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp705, $tmp706, $tmp707, ((org$frostlang$frostc$Type*) $tmp741));
org$frostlang$frostc$Compiler$compileStore$org$frostlang$frostc$Position$org$frostlang$frostc$Compiler$Target$org$frostlang$frostc$IR$Value(param0, $tmp698, $tmp699, $tmp705);
frost$core$Frost$unref$frost$core$Object$Q($tmp741);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
frost$core$Frost$unref$frost$core$Object$Q($tmp695);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp742 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local25) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:137
org$frostlang$frostc$Compiler$Target* $tmp743 = *(&local24);
frost$core$Bit $tmp744 = (frost$core$Bit) {$tmp743 != NULL};
bool $tmp745 = $tmp744.value;
if ($tmp745) goto block103; else goto block104;
block104:;
frost$core$Int $tmp746 = (frost$core$Int) {137u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s747, $tmp746, &$s748);
abort(); // unreachable
block103:;
org$frostlang$frostc$Compiler$createScopes$org$frostlang$frostc$Compiler$Target(param0, $tmp743);
org$frostlang$frostc$Compiler$Target* $tmp749 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
*(&local24) = ((org$frostlang$frostc$Compiler$Target*) NULL);
frost$core$String* $tmp750 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
*(&local23) = ((frost$core$String*) NULL);
goto block70;
block70:;
frost$core$Int $tmp751 = *(&local20);
int64_t $tmp752 = $tmp534.value;
int64_t $tmp753 = $tmp751.value;
int64_t $tmp754 = $tmp752 - $tmp753;
frost$core$Int $tmp755 = (frost$core$Int) {$tmp754};
if ($tmp536) goto block106; else goto block107;
block106:;
int64_t $tmp756 = $tmp755.value;
int64_t $tmp757 = $tmp537.value;
bool $tmp758 = $tmp756 >= $tmp757;
frost$core$Bit $tmp759 = (frost$core$Bit) {$tmp758};
bool $tmp760 = $tmp759.value;
if ($tmp760) goto block105; else goto block69;
block107:;
int64_t $tmp761 = $tmp755.value;
int64_t $tmp762 = $tmp537.value;
bool $tmp763 = $tmp761 > $tmp762;
frost$core$Bit $tmp764 = (frost$core$Bit) {$tmp763};
bool $tmp765 = $tmp764.value;
if ($tmp765) goto block105; else goto block69;
block105:;
int64_t $tmp766 = $tmp751.value;
int64_t $tmp767 = $tmp537.value;
int64_t $tmp768 = $tmp766 + $tmp767;
frost$core$Int $tmp769 = (frost$core$Int) {$tmp768};
*(&local20) = $tmp769;
goto block68;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:139
org$frostlang$frostc$IR$Value* $tmp770 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp771 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp772 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp773 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp774 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block15;
block31:;
goto block29;
block29:;
org$frostlang$frostc$Pair* $tmp775 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp776 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp777 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block25;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:144
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:146
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp778 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp778, param0);
*(&local29) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp779 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
*(&local29) = $tmp778;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:147
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:148
org$frostlang$frostc$ASTNode* $tmp780 = *(&local11);
org$frostlang$frostc$Pair* $tmp781 = org$frostlang$frostc$Compiler$getChoiceCase$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Corg$frostlang$frostc$ChoiceCase$GT$Q(param0, $tmp780);
*(&local31) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
org$frostlang$frostc$Pair* $tmp782 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
*(&local31) = $tmp781;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:149
org$frostlang$frostc$Pair* $tmp783 = *(&local31);
frost$core$Bit $tmp784 = (frost$core$Bit) {$tmp783 != NULL};
bool $tmp785 = $tmp784.value;
if ($tmp785) goto block108; else goto block110;
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:150
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp786 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp787 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp786, $tmp787);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp788 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp789 = (frost$core$Int) {25u};
org$frostlang$frostc$ASTNode* $tmp790 = *(&local11);
$fn792 $tmp791 = ($fn792) $tmp790->$class->vtable[2];
org$frostlang$frostc$Position $tmp793 = $tmp791($tmp790);
org$frostlang$frostc$Pair* $tmp794 = *(&local31);
frost$core$Bit $tmp795 = (frost$core$Bit) {$tmp794 != NULL};
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block111; else goto block112;
block112:;
frost$core$Int $tmp797 = (frost$core$Int) {151u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s798, $tmp797, &$s799);
abort(); // unreachable
block111:;
frost$core$Object** $tmp800 = &$tmp794->second;
frost$core$Object* $tmp801 = *$tmp800;
frost$core$Int* $tmp802 = &((org$frostlang$frostc$ChoiceCase*) $tmp801)->rawValue;
frost$core$Int $tmp803 = *$tmp802;
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Match.frost:151:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
int64_t $tmp804 = $tmp803.value;
frost$core$UInt64 $tmp805 = (frost$core$UInt64) {((uint64_t) $tmp804)};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$UInt64($tmp788, $tmp789, $tmp793, $tmp805);
frost$collections$Array$add$frost$collections$Array$T($tmp786, ((frost$core$Object*) $tmp788));
*(&local32) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
frost$collections$Array* $tmp806 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
*(&local32) = $tmp786;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:152
org$frostlang$frostc$ASTNode* $tmp807 = *(&local11);
$fn809 $tmp808 = ($fn809) $tmp807->$class->vtable[2];
org$frostlang$frostc$Position $tmp810 = $tmp808($tmp807);
frost$core$Bit $tmp811 = (frost$core$Bit) {param4 != NULL};
bool $tmp812 = $tmp811.value;
if ($tmp812) goto block114; else goto block115;
block115:;
frost$core$Int $tmp813 = (frost$core$Int) {152u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s814, $tmp813, &$s815);
abort(); // unreachable
block114:;
frost$collections$Array* $tmp816 = *(&local32);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp817 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp818 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp819 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp820 = *$tmp819;
frost$core$Bit $tmp821 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp817, $tmp818, $tmp820, $tmp821);
org$frostlang$frostc$IR$Value* $tmp822 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp810, param4, &$s823, ((frost$collections$ListView*) $tmp816), $tmp817);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
org$frostlang$frostc$IR$Value* $tmp824 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
*(&local30) = $tmp822;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:154
org$frostlang$frostc$IR$Value* $tmp825 = *(&local30);
frost$core$Bit $tmp826 = (frost$core$Bit) {$tmp825 == NULL};
bool $tmp827 = $tmp826.value;
if ($tmp827) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:155
frost$collections$Array* $tmp828 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
*(&local32) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp829 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
*(&local31) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp830 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp831 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
*(&local29) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp832 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp833 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp834 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp835 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp836 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp837 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp838 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block117:;
frost$collections$Array* $tmp839 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
*(&local32) = ((frost$collections$Array*) NULL);
goto block109;
block110:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:159
org$frostlang$frostc$ASTNode* $tmp840 = *(&local11);
$fn842 $tmp841 = ($fn842) $tmp840->$class->vtable[2];
org$frostlang$frostc$Position $tmp843 = $tmp841($tmp840);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp844 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp845 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp844, $tmp845);
org$frostlang$frostc$ASTNode* $tmp846 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp844, ((frost$core$Object*) $tmp846));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp847 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp848 = (frost$core$Int) {3u};
org$frostlang$frostc$Type** $tmp849 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp850 = *$tmp849;
frost$core$Bit $tmp851 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp847, $tmp848, $tmp850, $tmp851);
org$frostlang$frostc$IR$Value* $tmp852 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp843, param2, &$s853, ((frost$collections$ListView*) $tmp844), $tmp847);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
org$frostlang$frostc$IR$Value* $tmp854 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
*(&local30) = $tmp852;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:161
org$frostlang$frostc$IR$Value* $tmp855 = *(&local30);
frost$core$Bit $tmp856 = (frost$core$Bit) {$tmp855 == NULL};
bool $tmp857 = $tmp856.value;
if ($tmp857) goto block118; else goto block119;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:162
org$frostlang$frostc$Pair* $tmp858 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
*(&local31) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp859 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp860 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
*(&local29) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp861 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp862 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp863 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp864 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp865 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp866 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp867 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block119:;
goto block109;
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:165
org$frostlang$frostc$Position $tmp868 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp869 = *(&local30);
frost$core$Bit $tmp870 = (frost$core$Bit) {$tmp869 != NULL};
bool $tmp871 = $tmp870.value;
if ($tmp871) goto block120; else goto block121;
block121:;
frost$core$Int $tmp872 = (frost$core$Int) {165u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s873, $tmp872, &$s874);
abort(); // unreachable
block120:;
org$frostlang$frostc$IR$Value* $tmp875 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, $tmp868, $tmp869);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
org$frostlang$frostc$IR$Value* $tmp876 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
*(&local28) = $tmp875;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
org$frostlang$frostc$Pair* $tmp877 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
*(&local31) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp878 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp879 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
*(&local29) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:167
org$frostlang$frostc$IR* $tmp880 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp881 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp882 = (frost$core$Int) {5u};
org$frostlang$frostc$Position $tmp883 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp884 = *(&local28);
org$frostlang$frostc$IR$Block$ID $tmp885 = *(&local9);
org$frostlang$frostc$IR$Block$ID $tmp886 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp881, $tmp882, $tmp883, $tmp884, $tmp885, $tmp886);
$fn888 $tmp887 = ($fn888) $tmp880->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp889 = $tmp887($tmp880, $tmp881);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
org$frostlang$frostc$IR$Value* $tmp890 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp891 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block15;
block15:;
frost$core$Int $tmp892 = *(&local10);
int64_t $tmp893 = $tmp158.value;
int64_t $tmp894 = $tmp892.value;
int64_t $tmp895 = $tmp893 - $tmp894;
frost$core$Int $tmp896 = (frost$core$Int) {$tmp895};
if ($tmp160) goto block123; else goto block124;
block123:;
int64_t $tmp897 = $tmp896.value;
int64_t $tmp898 = $tmp161.value;
bool $tmp899 = $tmp897 >= $tmp898;
frost$core$Bit $tmp900 = (frost$core$Bit) {$tmp899};
bool $tmp901 = $tmp900.value;
if ($tmp901) goto block122; else goto block14;
block124:;
int64_t $tmp902 = $tmp896.value;
int64_t $tmp903 = $tmp161.value;
bool $tmp904 = $tmp902 > $tmp903;
frost$core$Bit $tmp905 = (frost$core$Bit) {$tmp904};
bool $tmp906 = $tmp905.value;
if ($tmp906) goto block122; else goto block14;
block122:;
int64_t $tmp907 = $tmp892.value;
int64_t $tmp908 = $tmp161.value;
int64_t $tmp909 = $tmp907 + $tmp908;
frost$core$Int $tmp910 = (frost$core$Int) {$tmp909};
*(&local10) = $tmp910;
goto block13;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:170
org$frostlang$frostc$IR* $tmp911 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp912 = *(&local9);
$fn914 $tmp913 = ($fn914) $tmp911->$class->vtable[4];
$tmp913($tmp911, $tmp912);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:171
org$frostlang$frostc$FixedArray* $tmp915 = *(&local7);
ITable* $tmp916 = ((frost$collections$Iterable*) $tmp915)->$class->itable;
while ($tmp916->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp916 = $tmp916->next;
}
$fn918 $tmp917 = $tmp916->methods[0];
frost$collections$Iterator* $tmp919 = $tmp917(((frost$collections$Iterable*) $tmp915));
goto block125;
block125:;
ITable* $tmp920 = $tmp919->$class->itable;
while ($tmp920->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp920 = $tmp920->next;
}
$fn922 $tmp921 = $tmp920->methods[0];
frost$core$Bit $tmp923 = $tmp921($tmp919);
bool $tmp924 = $tmp923.value;
if ($tmp924) goto block127; else goto block126;
block126:;
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp925 = $tmp919->$class->itable;
while ($tmp925->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp925 = $tmp925->next;
}
$fn927 $tmp926 = $tmp925->methods[1];
frost$core$Object* $tmp928 = $tmp926($tmp919);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp928)));
org$frostlang$frostc$ASTNode* $tmp929 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
*(&local33) = ((org$frostlang$frostc$ASTNode*) $tmp928);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:172
org$frostlang$frostc$ASTNode* $tmp930 = *(&local33);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp930);
frost$core$Frost$unref$frost$core$Object$Q($tmp928);
org$frostlang$frostc$ASTNode* $tmp931 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block125;
block127:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
org$frostlang$frostc$Compiler$AutoScope* $tmp932 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:175
org$frostlang$frostc$IR* $tmp933 = *(&local0);
$fn935 $tmp934 = ($fn935) $tmp933->$class->vtable[5];
frost$core$Bit $tmp936 = $tmp934($tmp933);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Match.frost:175:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp937 = $tmp936.value;
bool $tmp938 = !$tmp937;
frost$core$Bit $tmp939 = (frost$core$Bit) {$tmp938};
bool $tmp940 = $tmp939.value;
if ($tmp940) goto block128; else goto block129;
block128:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:176
org$frostlang$frostc$IR* $tmp941 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp942 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp943 = (frost$core$Int) {1u};
org$frostlang$frostc$Position $tmp944 = *(&local5);
org$frostlang$frostc$IR$Block$ID $tmp945 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp942, $tmp943, $tmp944, $tmp945);
$fn947 $tmp946 = ($fn947) $tmp941->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp948 = $tmp946($tmp941, $tmp942);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
goto block129;
block129:;
org$frostlang$frostc$FixedArray* $tmp949 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp950 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp951 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Int $tmp952 = *(&local3);
int64_t $tmp953 = $tmp108.value;
int64_t $tmp954 = $tmp952.value;
int64_t $tmp955 = $tmp953 - $tmp954;
frost$core$Int $tmp956 = (frost$core$Int) {$tmp955};
if ($tmp110) goto block132; else goto block133;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:180
frost$core$Int $tmp957 = (frost$core$Int) {180u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s958, $tmp957);
abort(); // unreachable
block132:;
int64_t $tmp959 = $tmp956.value;
int64_t $tmp960 = $tmp111.value;
bool $tmp961 = $tmp959 >= $tmp960;
frost$core$Bit $tmp962 = (frost$core$Bit) {$tmp961};
bool $tmp963 = $tmp962.value;
if ($tmp963) goto block131; else goto block5;
block133:;
int64_t $tmp964 = $tmp956.value;
int64_t $tmp965 = $tmp111.value;
bool $tmp966 = $tmp964 > $tmp965;
frost$core$Bit $tmp967 = (frost$core$Bit) {$tmp966};
bool $tmp968 = $tmp967.value;
if ($tmp968) goto block131; else goto block5;
block131:;
int64_t $tmp969 = $tmp952.value;
int64_t $tmp970 = $tmp111.value;
int64_t $tmp971 = $tmp969 + $tmp970;
frost$core$Int $tmp972 = (frost$core$Int) {$tmp971};
*(&local3) = $tmp972;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:184
frost$core$Bit $tmp973 = (frost$core$Bit) {param6 != NULL};
bool $tmp974 = $tmp973.value;
if ($tmp974) goto block134; else goto block135;
block134:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:186
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp975 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp975, param0);
*(&local34) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
org$frostlang$frostc$Compiler$AutoScope* $tmp976 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
*(&local34) = $tmp975;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:187
org$frostlang$frostc$IR* $tmp977 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp978 = *(&local2);
$fn980 $tmp979 = ($fn980) $tmp977->$class->vtable[4];
$tmp979($tmp977, $tmp978);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:188
frost$core$Bit $tmp981 = (frost$core$Bit) {param6 != NULL};
bool $tmp982 = $tmp981.value;
if ($tmp982) goto block136; else goto block137;
block137:;
frost$core$Int $tmp983 = (frost$core$Int) {188u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s984, $tmp983, &$s985);
abort(); // unreachable
block136:;
ITable* $tmp986 = ((frost$collections$Iterable*) param6)->$class->itable;
while ($tmp986->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp986 = $tmp986->next;
}
$fn988 $tmp987 = $tmp986->methods[0];
frost$collections$Iterator* $tmp989 = $tmp987(((frost$collections$Iterable*) param6));
goto block138;
block138:;
ITable* $tmp990 = $tmp989->$class->itable;
while ($tmp990->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp990 = $tmp990->next;
}
$fn992 $tmp991 = $tmp990->methods[0];
frost$core$Bit $tmp993 = $tmp991($tmp989);
bool $tmp994 = $tmp993.value;
if ($tmp994) goto block140; else goto block139;
block139:;
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp995 = $tmp989->$class->itable;
while ($tmp995->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp995 = $tmp995->next;
}
$fn997 $tmp996 = $tmp995->methods[1];
frost$core$Object* $tmp998 = $tmp996($tmp989);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp998)));
org$frostlang$frostc$ASTNode* $tmp999 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
*(&local35) = ((org$frostlang$frostc$ASTNode*) $tmp998);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:189
org$frostlang$frostc$ASTNode* $tmp1000 = *(&local35);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp1000);
frost$core$Frost$unref$frost$core$Object$Q($tmp998);
org$frostlang$frostc$ASTNode* $tmp1001 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block138;
block140:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
org$frostlang$frostc$Compiler$AutoScope* $tmp1002 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
*(&local34) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:192
org$frostlang$frostc$IR* $tmp1003 = *(&local0);
$fn1005 $tmp1004 = ($fn1005) $tmp1003->$class->vtable[5];
frost$core$Bit $tmp1006 = $tmp1004($tmp1003);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Match.frost:192:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1007 = $tmp1006.value;
bool $tmp1008 = !$tmp1007;
frost$core$Bit $tmp1009 = (frost$core$Bit) {$tmp1008};
bool $tmp1010 = $tmp1009.value;
if ($tmp1010) goto block141; else goto block142;
block141:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:193
org$frostlang$frostc$IR* $tmp1011 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1012 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp1013 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp1014 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1012, $tmp1013, param1, $tmp1014);
$fn1016 $tmp1015 = ($fn1016) $tmp1011->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1017 = $tmp1015($tmp1011, $tmp1012);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
goto block142;
block142:;
goto block135;
block135:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:196
org$frostlang$frostc$IR* $tmp1018 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1019 = *(&local1);
$fn1021 $tmp1020 = ($fn1021) $tmp1018->$class->vtable[4];
$tmp1020($tmp1018, $tmp1019);
org$frostlang$frostc$IR* $tmp1022 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
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
org$frostlang$frostc$Compiler$TypeContext* $tmp1023 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp1024 = (frost$core$Int) {1u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp1023, $tmp1024);
org$frostlang$frostc$IR$Value* $tmp1025 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp1023);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
org$frostlang$frostc$IR$Value* $tmp1026 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
*(&local0) = $tmp1025;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:203
org$frostlang$frostc$IR$Value* $tmp1027 = *(&local0);
frost$core$Bit $tmp1028 = (frost$core$Bit) {$tmp1027 == NULL};
bool $tmp1029 = $tmp1028.value;
if ($tmp1029) goto block1; else goto block3;
block3:;
ITable* $tmp1030 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1030->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1030 = $tmp1030->next;
}
$fn1032 $tmp1031 = $tmp1030->methods[0];
frost$core$Int $tmp1033 = $tmp1031(((frost$collections$CollectionView*) param3));
frost$core$Int $tmp1034 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Match.frost:203:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1035 = $tmp1033.value;
int64_t $tmp1036 = $tmp1034.value;
bool $tmp1037 = $tmp1035 == $tmp1036;
frost$core$Bit $tmp1038 = (frost$core$Bit) {$tmp1037};
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block4; else goto block2;
block4:;
frost$core$Bit $tmp1040 = (frost$core$Bit) {param4 == NULL};
bool $tmp1041 = $tmp1040.value;
if ($tmp1041) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:204
org$frostlang$frostc$IR$Value* $tmp1042 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:206
org$frostlang$frostc$IR$Value* $tmp1043 = *(&local0);
frost$core$Bit $tmp1044 = (frost$core$Bit) {$tmp1043 != NULL};
bool $tmp1045 = $tmp1044.value;
if ($tmp1045) goto block6; else goto block7;
block7:;
frost$core$Int $tmp1046 = (frost$core$Int) {206u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1047, $tmp1046, &$s1048);
abort(); // unreachable
block6:;
$fn1050 $tmp1049 = ($fn1050) $tmp1043->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1051 = $tmp1049($tmp1043);
org$frostlang$frostc$ClassDecl* $tmp1052 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp1051);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
org$frostlang$frostc$ClassDecl* $tmp1053 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1053));
*(&local1) = $tmp1052;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:207
org$frostlang$frostc$ClassDecl* $tmp1054 = *(&local1);
frost$core$Bit $tmp1055 = (frost$core$Bit) {$tmp1054 == NULL};
bool $tmp1056 = $tmp1055.value;
if ($tmp1056) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:208
org$frostlang$frostc$ClassDecl* $tmp1057 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp1058 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:210
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp1059 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:211
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:212
org$frostlang$frostc$ClassDecl* $tmp1060 = *(&local1);
frost$core$Bit $tmp1061 = (frost$core$Bit) {$tmp1060 != NULL};
bool $tmp1062 = $tmp1061.value;
if ($tmp1062) goto block13; else goto block14;
block14:;
frost$core$Int $tmp1063 = (frost$core$Int) {212u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1064, $tmp1063, &$s1065);
abort(); // unreachable
block13:;
org$frostlang$frostc$ClassDecl$Kind* $tmp1066 = &$tmp1060->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp1067 = *$tmp1066;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1068;
$tmp1068 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1068->value = $tmp1067;
frost$core$Int $tmp1069 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Match.frost:212:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp1070 = &(&local5)->$rawValue;
*$tmp1070 = $tmp1069;
org$frostlang$frostc$ClassDecl$Kind $tmp1071 = *(&local5);
*(&local4) = $tmp1071;
org$frostlang$frostc$ClassDecl$Kind $tmp1072 = *(&local4);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1073;
$tmp1073 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1073->value = $tmp1072;
ITable* $tmp1074 = ((frost$core$Equatable*) $tmp1068)->$class->itable;
while ($tmp1074->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1074 = $tmp1074->next;
}
$fn1076 $tmp1075 = $tmp1074->methods[0];
frost$core$Bit $tmp1077 = $tmp1075(((frost$core$Equatable*) $tmp1068), ((frost$core$Equatable*) $tmp1073));
bool $tmp1078 = $tmp1077.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1073)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1068)));
if ($tmp1078) goto block10; else goto block12;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:213
org$frostlang$frostc$IR$Value* $tmp1079 = *(&local0);
frost$core$Bit $tmp1080 = (frost$core$Bit) {$tmp1079 != NULL};
bool $tmp1081 = $tmp1080.value;
if ($tmp1081) goto block16; else goto block17;
block17:;
frost$core$Int $tmp1082 = (frost$core$Int) {213u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1083, $tmp1082, &$s1084);
abort(); // unreachable
block16:;
org$frostlang$frostc$IR$Value* $tmp1085 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1079, &$s1086);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
org$frostlang$frostc$IR$Value* $tmp1087 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
*(&local3) = $tmp1085;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:215
org$frostlang$frostc$ClassDecl* $tmp1088 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
org$frostlang$frostc$ClassDecl* $tmp1089 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
*(&local2) = $tmp1088;
goto block11;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:217
org$frostlang$frostc$ClassDecl* $tmp1090 = *(&local1);
frost$core$Bit $tmp1091 = (frost$core$Bit) {$tmp1090 != NULL};
bool $tmp1092 = $tmp1091.value;
if ($tmp1092) goto block21; else goto block22;
block22:;
frost$core$Int $tmp1093 = (frost$core$Int) {217u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1094, $tmp1093, &$s1095);
abort(); // unreachable
block21:;
org$frostlang$frostc$SymbolTable* $tmp1096 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp1090);
org$frostlang$frostc$Symbol* $tmp1097 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp1096, &$s1098);
frost$core$Bit $tmp1099 = (frost$core$Bit) {$tmp1097 == NULL};
bool $tmp1100 = $tmp1099.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
if ($tmp1100) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:218
$fn1102 $tmp1101 = ($fn1102) param2->$class->vtable[2];
org$frostlang$frostc$Position $tmp1103 = $tmp1101(param2);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp1103, &$s1104);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:219
org$frostlang$frostc$IR$Value* $tmp1105 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1106 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1107 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp1108 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block20:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:222
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1109 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1109));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Match.frost:224
org$frostlang$frostc$IR$Value* $tmp1110 = *(&local0);
frost$core$Bit $tmp1111 = (frost$core$Bit) {$tmp1110 != NULL};
bool $tmp1112 = $tmp1111.value;
if ($tmp1112) goto block23; else goto block24;
block24:;
frost$core$Int $tmp1113 = (frost$core$Int) {224u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1114, $tmp1113, &$s1115);
abort(); // unreachable
block23:;
org$frostlang$frostc$ClassDecl* $tmp1116 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp1117 = *(&local3);
org$frostlang$frostc$statement$Match$compileChainedIfMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0, param1, $tmp1110, $tmp1116, $tmp1117, param3, param4);
org$frostlang$frostc$IR$Value* $tmp1118 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1119 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1119));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1120 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp1121 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
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

