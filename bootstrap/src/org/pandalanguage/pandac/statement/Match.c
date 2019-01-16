#include "org/pandalanguage/pandac/statement/Match.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/ChoiceCase.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "org/pandalanguage/pandac/IR.h"
#include "org/pandalanguage/pandac/IR/Block/ID.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/Compiler/AutoScope.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "org/pandalanguage/pandac/Compiler/AutoUnrefs.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/IR/Block.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "panda/core/Equatable.h"
#include "panda/core/Formattable.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "org/pandalanguage/pandac/expression/Call.h"
#include "org/pandalanguage/pandac/IR/Statement.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/lvalue/VariableLValue.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/collections/Stack.h"
#include "org/pandalanguage/pandac/Compiler/EnclosingContext.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "org/pandalanguage/pandac/expression/Dot.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/Symbol.h"


static panda$core$String $s1;
org$pandalanguage$pandac$statement$Match$class_type org$pandalanguage$pandac$statement$Match$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$statement$Match$cleanup} };

typedef org$pandalanguage$pandac$Type* (*$fn17)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Int64 (*$fn59)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn78)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef panda$core$Int64 (*$fn89)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn130)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef panda$core$Int64 (*$fn137)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn167)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn173)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef panda$core$Int64 (*$fn178)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn193)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn211)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$Position (*$fn241)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Int64 (*$fn256)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn280)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn294)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn328)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn344)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn351)(panda$core$Formattable*, panda$core$String*);
typedef panda$core$Int64 (*$fn364)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn381)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Position (*$fn424)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn440)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn479)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn484)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef panda$core$Int64 (*$fn489)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn523)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn545)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn612)(org$pandalanguage$pandac$lvalue$VariableLValue*, org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Position (*$fn681)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn697)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn728)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn772)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn799)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef panda$collections$Iterator* (*$fn803)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn807)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn812)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn820)(org$pandalanguage$pandac$IR*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn830)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn866)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef panda$collections$Iterator* (*$fn874)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn878)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn883)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn891)(org$pandalanguage$pandac$IR*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn900)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn905)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef panda$core$Int64 (*$fn916)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn933)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn957)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn983)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x4d\x61\x74\x63\x68", 40, 6442015050544237646, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 91, -4280960947714798719, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x61\x74\x63\x68\x20\x63\x68\x6f\x69\x63\x65\x20\x63\x61\x73\x65\x20\x27", 26, 924211577719466455, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x61\x67\x61\x69\x6e\x73\x74\x20\x27", 11, 5504180647906747646, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x27", 109, -7674976693983370043, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 91, -4280960947714798719, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x61\x74\x63\x68\x20\x63\x68\x6f\x69\x63\x65\x20\x63\x61\x73\x65\x20\x27", 26, 924211577719466455, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x61\x67\x61\x69\x6e\x73\x74\x20", 10, 5899009811946657419, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x4d\x61\x74\x63\x68\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x43\x68\x61\x69\x6e\x65\x64\x49\x66\x4d\x61\x74\x63\x68\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2c\x20\x63\x68\x6f\x69\x63\x65\x43\x6c\x61\x73\x73\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x2c\x20\x63\x68\x6f\x69\x63\x65\x52\x61\x77\x56\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x77\x68\x65\x6e\x73\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x6f\x74\x68\x65\x72\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x29", 478, -5098724978463859389, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20\x65\x6e\x64", 9, 2284522982428118369, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x65\x73\x74\x20\x73\x75\x63\x63\x65\x73\x73", 12, 7036109776132282178, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68", 5, 21953816826, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 165, 7847896738279505016, NULL };
static panda$core$String $s266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x75\x63\x74\x75\x72\x69\x6e\x67\x20\x63\x68\x6f\x69\x63\x65\x20\x27\x77\x68\x65\x6e\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x74\x6f\x67\x65\x74\x68\x65\x72\x20\x77\x69\x74\x68\x20", 57, 7310936708811456764, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x20\x27\x77\x68\x65\x6e\x27\x20\x63\x6f\x6d\x70\x61\x72\x69\x73\x6f\x6e\x73", 24, 5365199314206252049, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 165, 7847896738279505016, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 165, 7847896738279505016, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x27", 8, 21554282788333791, NULL };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20", 2, 14172, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x71\x75\x69\x72\x65\x73\x20", 9, 2339091676660267913, NULL };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 165, 7847896738279505016, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 165, 7847896738279505016, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6d\x65\x6e\x74", 9, 1450721239526715900, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 10, -2438145452310052756, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x69\x73\x20", 5, 14602508524, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x74\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 19, 2848546980520752179, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 165, 7847896738279505016, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 165, 7847896738279505016, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 165, 7847896738279505016, NULL };
static panda$core$String $s536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 165, 7847896738279505016, NULL };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 165, 7847896738279505016, NULL };
static panda$core$String $s592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 168, -8836935949835456374, NULL };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 165, 7847896738279505016, NULL };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 168, -8836935949835456374, NULL };
static panda$core$String $s634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 168, -8836935949835456374, NULL };
static panda$core$String $s687 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 165, 7847896738279505016, NULL };
static panda$core$String $s702 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s737 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s871 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x27", 168, 565827917388174030, NULL };
static panda$core$String $s930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s931 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s947 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s948 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s964 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s965 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27\x20\x76\x61\x6c\x75\x65\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x64\x65\x66\x69\x6e\x65\x20\x74\x68\x65\x20\x27\x3d\x27\x20\x6f\x70\x65\x72\x61\x74\x6f\x72", 46, 6331121231047041348, NULL };
static panda$core$String $s995 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static panda$core$String $s996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };

panda$core$Bit org$pandalanguage$pandac$statement$Match$checkChoiceMatch$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceCase$Q$org$pandalanguage$pandac$ClassDecl$Q$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$ChoiceCase* param2, org$pandalanguage$pandac$ClassDecl* param3, org$pandalanguage$pandac$IR$Value* param4) {

// line 28
panda$core$Bit $tmp2 = panda$core$Bit$init$builtin_bit(param2 == NULL);
bool $tmp3 = $tmp2.value;
if ($tmp3) goto block1; else goto block2;
block1:;
// line 29
panda$core$Bit $tmp4 = panda$core$Bit$init$builtin_bit(false);
return $tmp4;
block2:;
// line 31
panda$core$Bit $tmp5 = panda$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block3; else goto block4;
block3:;
// line 32
panda$core$Bit $tmp7 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp9 = (panda$core$Int64) {32};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s10, $tmp9, &$s11);
abort(); // unreachable
block5:;
panda$core$String* $tmp12 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s13, ((panda$core$Object*) param2));
panda$core$String* $tmp14 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp12, &$s15);
$fn17 $tmp16 = ($fn17) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp18 = $tmp16(param4);
panda$core$String* $tmp19 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp14, ((panda$core$Object*) $tmp18));
panda$core$String* $tmp20 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp19, &$s21);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
// unreffing REF($28:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
// unreffing REF($27:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
// unreffing REF($25:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
// unreffing REF($23:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
// unreffing REF($22:panda.core.String)
// line 33
panda$core$Bit $tmp22 = panda$core$Bit$init$builtin_bit(false);
return $tmp22;
block4:;
// line 35
panda$core$Bit $tmp23 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp25 = (panda$core$Int64) {35};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s26, $tmp25, &$s27);
abort(); // unreachable
block9:;
panda$core$Weak** $tmp28 = &param2->owner;
panda$core$Weak* $tmp29 = *$tmp28;
panda$core$Object* $tmp30 = panda$core$Weak$get$R$panda$core$Weak$T($tmp29);
bool $tmp31 = ((org$pandalanguage$pandac$ClassDecl*) $tmp30) != param3;
panda$core$Bit $tmp32 = panda$core$Bit$init$builtin_bit($tmp31);
bool $tmp33 = $tmp32.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp30);
// unreffing REF($60:panda.core.Weak.T)
if ($tmp33) goto block7; else goto block8;
block7:;
// line 36
panda$core$Bit $tmp34 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp36 = (panda$core$Int64) {36};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s37, $tmp36, &$s38);
abort(); // unreachable
block11:;
panda$core$String* $tmp39 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s40, ((panda$core$Object*) param2));
panda$core$String* $tmp41 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp39, &$s42);
panda$core$Bit $tmp43 = panda$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block13; else goto block14;
block14:;
panda$core$Int64 $tmp45 = (panda$core$Int64) {37};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s46, $tmp45, &$s47);
abort(); // unreachable
block13:;
panda$core$String** $tmp48 = &param3->name;
panda$core$String* $tmp49 = *$tmp48;
panda$core$String* $tmp50 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s51, $tmp49);
panda$core$String* $tmp52 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp50, &$s53);
panda$core$String* $tmp54 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp41, $tmp52);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
// unreffing REF($92:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
// unreffing REF($91:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
// unreffing REF($90:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// unreffing REF($79:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
// unreffing REF($78:panda.core.String)
// line 38
panda$core$Bit $tmp55 = panda$core$Bit$init$builtin_bit(false);
return $tmp55;
block8:;
// line 40
panda$core$Bit $tmp56 = panda$core$Bit$init$builtin_bit(true);
return $tmp56;

}
void org$pandalanguage$pandac$statement$Match$compileChainedIfMatch$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ClassDecl$Q$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$ClassDecl* param3, org$pandalanguage$pandac$IR$Value* param4, org$pandalanguage$pandac$FixedArray* param5, org$pandalanguage$pandac$FixedArray* param6) {

panda$core$Bit local0;
org$pandalanguage$pandac$IR* local1 = NULL;
org$pandalanguage$pandac$IR$Block$ID local2;
org$pandalanguage$pandac$IR$Block$ID local3;
panda$core$Int64 local4;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
org$pandalanguage$pandac$Position local6;
org$pandalanguage$pandac$FixedArray* local7 = NULL;
org$pandalanguage$pandac$FixedArray* local8 = NULL;
org$pandalanguage$pandac$Compiler$AutoScope* local9 = NULL;
org$pandalanguage$pandac$IR$Block$ID local10;
panda$core$Int64 local11;
panda$core$Bit local12;
panda$core$Bit local13;
org$pandalanguage$pandac$ASTNode* local14 = NULL;
org$pandalanguage$pandac$Position local15;
org$pandalanguage$pandac$ASTNode* local16 = NULL;
org$pandalanguage$pandac$FixedArray* local17 = NULL;
org$pandalanguage$pandac$Pair* local18 = NULL;
org$pandalanguage$pandac$IR$Value* local19 = NULL;
org$pandalanguage$pandac$Compiler$AutoUnrefs* local20 = NULL;
panda$collections$Array* local21 = NULL;
org$pandalanguage$pandac$IR$Value* local22 = NULL;
panda$core$Int64 local23;
org$pandalanguage$pandac$IR$Statement$ID local24;
org$pandalanguage$pandac$IR$Statement$ID local25;
org$pandalanguage$pandac$Pair* local26 = NULL;
org$pandalanguage$pandac$Compiler$AutoUnrefs* local27 = NULL;
org$pandalanguage$pandac$IR$Value* local28 = NULL;
org$pandalanguage$pandac$Compiler$AutoUnrefs* local29 = NULL;
org$pandalanguage$pandac$IR$Value* local30 = NULL;
org$pandalanguage$pandac$Pair* local31 = NULL;
panda$collections$Array* local32 = NULL;
org$pandalanguage$pandac$ASTNode* local33 = NULL;
org$pandalanguage$pandac$Compiler$AutoScope* local34 = NULL;
org$pandalanguage$pandac$ASTNode* local35 = NULL;
ITable* $tmp57 = ((panda$collections$CollectionView*) param5)->$class->itable;
while ($tmp57->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp57 = $tmp57->next;
}
$fn59 $tmp58 = $tmp57->methods[0];
panda$core$Int64 $tmp60 = $tmp58(((panda$collections$CollectionView*) param5));
panda$core$Int64 $tmp61 = (panda$core$Int64) {0};
int64_t $tmp62 = $tmp60.value;
int64_t $tmp63 = $tmp61.value;
bool $tmp64 = $tmp62 > $tmp63;
panda$core$Bit $tmp65 = (panda$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block1; else goto block2;
block1:;
*(&local0) = $tmp65;
goto block3;
block2:;
panda$core$Bit $tmp67 = panda$core$Bit$init$builtin_bit(param6 != NULL);
*(&local0) = $tmp67;
goto block3;
block3:;
panda$core$Bit $tmp68 = *(&local0);
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp70 = (panda$core$Int64) {46};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s71, $tmp70, &$s72);
abort(); // unreachable
block4:;
// line 49
org$pandalanguage$pandac$IR** $tmp73 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp74 = *$tmp73;
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
org$pandalanguage$pandac$IR* $tmp75 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
*(&local1) = $tmp74;
// line 50
org$pandalanguage$pandac$IR* $tmp76 = *(&local1);
$fn78 $tmp77 = ($fn78) $tmp76->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp79 = $tmp77($tmp76, &$s80);
*(&local2) = $tmp79;
// line 51
org$pandalanguage$pandac$IR* $tmp81 = *(&local1);
org$pandalanguage$pandac$IR$Block** $tmp82 = &$tmp81->currentBlock;
org$pandalanguage$pandac$IR$Block* $tmp83 = *$tmp82;
org$pandalanguage$pandac$IR$Block$ID* $tmp84 = &$tmp83->id;
org$pandalanguage$pandac$IR$Block$ID $tmp85 = *$tmp84;
*(&local3) = $tmp85;
// line 52
panda$core$Int64 $tmp86 = (panda$core$Int64) {0};
ITable* $tmp87 = ((panda$collections$CollectionView*) param5)->$class->itable;
while ($tmp87->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp87 = $tmp87->next;
}
$fn89 $tmp88 = $tmp87->methods[0];
panda$core$Int64 $tmp90 = $tmp88(((panda$collections$CollectionView*) param5));
panda$core$Bit $tmp91 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp92 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp86, $tmp90, $tmp91);
panda$core$Int64 $tmp93 = $tmp92.min;
*(&local4) = $tmp93;
panda$core$Int64 $tmp94 = $tmp92.max;
panda$core$Bit $tmp95 = $tmp92.inclusive;
bool $tmp96 = $tmp95.value;
panda$core$Int64 $tmp97 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp98 = panda$core$Int64$convert$R$panda$core$UInt64($tmp97);
if ($tmp96) goto block9; else goto block10;
block9:;
int64_t $tmp99 = $tmp93.value;
int64_t $tmp100 = $tmp94.value;
bool $tmp101 = $tmp99 <= $tmp100;
panda$core$Bit $tmp102 = (panda$core$Bit) {$tmp101};
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block6; else goto block7;
block10:;
int64_t $tmp104 = $tmp93.value;
int64_t $tmp105 = $tmp94.value;
bool $tmp106 = $tmp104 < $tmp105;
panda$core$Bit $tmp107 = (panda$core$Bit) {$tmp106};
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block6; else goto block7;
block6:;
// line 53
panda$core$Int64 $tmp109 = *(&local4);
panda$core$Object* $tmp110 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T(param5, $tmp109);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp110)));
org$pandalanguage$pandac$ASTNode* $tmp111 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) $tmp110);
panda$core$Panda$unref$panda$core$Object$Q($tmp110);
// unreffing REF($74:org.pandalanguage.pandac.FixedArray.T)
// line 54
org$pandalanguage$pandac$ASTNode* $tmp112 = *(&local5);
panda$core$Int64* $tmp113 = &$tmp112->$rawValue;
panda$core$Int64 $tmp114 = *$tmp113;
panda$core$Int64 $tmp115 = (panda$core$Int64) {51};
panda$core$Bit $tmp116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp114, $tmp115);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp118 = (org$pandalanguage$pandac$Position*) ($tmp112->$data + 0);
org$pandalanguage$pandac$Position $tmp119 = *$tmp118;
*(&local6) = $tmp119;
org$pandalanguage$pandac$FixedArray** $tmp120 = (org$pandalanguage$pandac$FixedArray**) ($tmp112->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp121 = *$tmp120;
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
org$pandalanguage$pandac$FixedArray* $tmp122 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
*(&local7) = $tmp121;
org$pandalanguage$pandac$FixedArray** $tmp123 = (org$pandalanguage$pandac$FixedArray**) ($tmp112->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp124 = *$tmp123;
*(&local8) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
org$pandalanguage$pandac$FixedArray* $tmp125 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
*(&local8) = $tmp124;
// line 1
// line 57
org$pandalanguage$pandac$Compiler$AutoScope* $tmp126 = (org$pandalanguage$pandac$Compiler$AutoScope*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoScope$class);
org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler($tmp126, param0);
*(&local9) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
org$pandalanguage$pandac$Compiler$AutoScope* $tmp127 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
*(&local9) = $tmp126;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
// unreffing REF($117:org.pandalanguage.pandac.Compiler.AutoScope)
// line 58
org$pandalanguage$pandac$IR* $tmp128 = *(&local1);
$fn130 $tmp129 = ($fn130) $tmp128->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp131 = $tmp129($tmp128, &$s132);
*(&local10) = $tmp131;
// line 59
panda$core$Int64 $tmp133 = (panda$core$Int64) {0};
org$pandalanguage$pandac$FixedArray* $tmp134 = *(&local7);
ITable* $tmp135 = ((panda$collections$CollectionView*) $tmp134)->$class->itable;
while ($tmp135->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp135 = $tmp135->next;
}
$fn137 $tmp136 = $tmp135->methods[0];
panda$core$Int64 $tmp138 = $tmp136(((panda$collections$CollectionView*) $tmp134));
panda$core$Bit $tmp139 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp140 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp133, $tmp138, $tmp139);
panda$core$Int64 $tmp141 = $tmp140.min;
*(&local11) = $tmp141;
panda$core$Int64 $tmp142 = $tmp140.max;
panda$core$Bit $tmp143 = $tmp140.inclusive;
bool $tmp144 = $tmp143.value;
panda$core$Int64 $tmp145 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp146 = panda$core$Int64$convert$R$panda$core$UInt64($tmp145);
if ($tmp144) goto block17; else goto block18;
block17:;
int64_t $tmp147 = $tmp141.value;
int64_t $tmp148 = $tmp142.value;
bool $tmp149 = $tmp147 <= $tmp148;
panda$core$Bit $tmp150 = (panda$core$Bit) {$tmp149};
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block14; else goto block15;
block18:;
int64_t $tmp152 = $tmp141.value;
int64_t $tmp153 = $tmp142.value;
bool $tmp154 = $tmp152 < $tmp153;
panda$core$Bit $tmp155 = (panda$core$Bit) {$tmp154};
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block14; else goto block15;
block14:;
// line 60
org$pandalanguage$pandac$IR$Block$ID $tmp157 = *(&local3);
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp158;
$tmp158 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp158->value = $tmp157;
org$pandalanguage$pandac$IR* $tmp159 = *(&local1);
org$pandalanguage$pandac$IR$Block** $tmp160 = &$tmp159->currentBlock;
org$pandalanguage$pandac$IR$Block* $tmp161 = *$tmp160;
org$pandalanguage$pandac$IR$Block$ID* $tmp162 = &$tmp161->id;
org$pandalanguage$pandac$IR$Block$ID $tmp163 = *$tmp162;
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp164;
$tmp164 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp164->value = $tmp163;
ITable* $tmp165 = ((panda$core$Equatable*) $tmp158)->$class->itable;
while ($tmp165->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp165 = $tmp165->next;
}
$fn167 $tmp166 = $tmp165->methods[1];
panda$core$Bit $tmp168 = $tmp166(((panda$core$Equatable*) $tmp158), ((panda$core$Equatable*) $tmp164));
bool $tmp169 = $tmp168.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp164)));
// unreffing REF($171:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp158)));
// unreffing REF($164:panda.core.Equatable<org.pandalanguage.pandac.IR.Block.ID>)
if ($tmp169) goto block19; else goto block20;
block19:;
// line 61
org$pandalanguage$pandac$IR* $tmp170 = *(&local1);
org$pandalanguage$pandac$IR$Block$ID $tmp171 = *(&local3);
$fn173 $tmp172 = ($fn173) $tmp170->$class->vtable[4];
$tmp172($tmp170, $tmp171);
goto block20;
block20:;
// line 63
panda$core$Int64 $tmp174 = *(&local11);
org$pandalanguage$pandac$FixedArray* $tmp175 = *(&local7);
ITable* $tmp176 = ((panda$collections$CollectionView*) $tmp175)->$class->itable;
while ($tmp176->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp176 = $tmp176->next;
}
$fn178 $tmp177 = $tmp176->methods[0];
panda$core$Int64 $tmp179 = $tmp177(((panda$collections$CollectionView*) $tmp175));
panda$core$Int64 $tmp180 = (panda$core$Int64) {1};
int64_t $tmp181 = $tmp179.value;
int64_t $tmp182 = $tmp180.value;
int64_t $tmp183 = $tmp181 - $tmp182;
panda$core$Int64 $tmp184 = (panda$core$Int64) {$tmp183};
int64_t $tmp185 = $tmp174.value;
int64_t $tmp186 = $tmp184.value;
bool $tmp187 = $tmp185 < $tmp186;
panda$core$Bit $tmp188 = (panda$core$Bit) {$tmp187};
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block23; else goto block24;
block23:;
*(&local13) = $tmp188;
goto block25;
block24:;
panda$core$Int64 $tmp190 = *(&local4);
ITable* $tmp191 = ((panda$collections$CollectionView*) param5)->$class->itable;
while ($tmp191->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp191 = $tmp191->next;
}
$fn193 $tmp192 = $tmp191->methods[0];
panda$core$Int64 $tmp194 = $tmp192(((panda$collections$CollectionView*) param5));
panda$core$Int64 $tmp195 = (panda$core$Int64) {1};
int64_t $tmp196 = $tmp194.value;
int64_t $tmp197 = $tmp195.value;
int64_t $tmp198 = $tmp196 - $tmp197;
panda$core$Int64 $tmp199 = (panda$core$Int64) {$tmp198};
int64_t $tmp200 = $tmp190.value;
int64_t $tmp201 = $tmp199.value;
bool $tmp202 = $tmp200 < $tmp201;
panda$core$Bit $tmp203 = (panda$core$Bit) {$tmp202};
*(&local13) = $tmp203;
goto block25;
block25:;
panda$core$Bit $tmp204 = *(&local13);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block26; else goto block27;
block26:;
*(&local12) = $tmp204;
goto block28;
block27:;
panda$core$Bit $tmp206 = panda$core$Bit$init$builtin_bit(param6 != NULL);
*(&local12) = $tmp206;
goto block28;
block28:;
panda$core$Bit $tmp207 = *(&local12);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block21; else goto block29;
block21:;
// line 64
org$pandalanguage$pandac$IR* $tmp209 = *(&local1);
$fn211 $tmp210 = ($fn211) $tmp209->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp212 = $tmp210($tmp209, &$s213);
*(&local3) = $tmp212;
goto block22;
block29:;
// line 1
// line 67
org$pandalanguage$pandac$IR$Block$ID $tmp214 = *(&local2);
*(&local3) = $tmp214;
goto block22;
block22:;
// line 69
org$pandalanguage$pandac$FixedArray* $tmp215 = *(&local7);
panda$core$Int64 $tmp216 = *(&local11);
panda$core$Object* $tmp217 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp215, $tmp216);
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp217)));
org$pandalanguage$pandac$ASTNode* $tmp218 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) $tmp217);
panda$core$Panda$unref$panda$core$Object$Q($tmp217);
// unreffing REF($249:org.pandalanguage.pandac.FixedArray.T)
// line 70
org$pandalanguage$pandac$ASTNode* $tmp219 = *(&local14);
panda$core$Int64* $tmp220 = &$tmp219->$rawValue;
panda$core$Int64 $tmp221 = *$tmp220;
panda$core$Int64 $tmp222 = (panda$core$Int64) {9};
panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp221, $tmp222);
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block31; else goto block30;
block31:;
org$pandalanguage$pandac$Position* $tmp225 = (org$pandalanguage$pandac$Position*) ($tmp219->$data + 0);
org$pandalanguage$pandac$Position $tmp226 = *$tmp225;
*(&local15) = $tmp226;
org$pandalanguage$pandac$ASTNode** $tmp227 = (org$pandalanguage$pandac$ASTNode**) ($tmp219->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp228 = *$tmp227;
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp228));
org$pandalanguage$pandac$ASTNode* $tmp229 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
*(&local16) = $tmp228;
org$pandalanguage$pandac$FixedArray** $tmp230 = (org$pandalanguage$pandac$FixedArray**) ($tmp219->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp231 = *$tmp230;
*(&local17) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
org$pandalanguage$pandac$FixedArray* $tmp232 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
*(&local17) = $tmp231;
// line 72
org$pandalanguage$pandac$ASTNode* $tmp233 = *(&local16);
org$pandalanguage$pandac$Pair* $tmp234 = org$pandalanguage$pandac$Compiler$getChoiceCase$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$Type$Corg$pandalanguage$pandac$ChoiceCase$GT$Q(param0, $tmp233);
*(&local18) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
org$pandalanguage$pandac$Pair* $tmp235 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
*(&local18) = $tmp234;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
// unreffing REF($292:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.Type, org.pandalanguage.pandac.ChoiceCase>?)
// line 73
org$pandalanguage$pandac$Pair* $tmp236 = *(&local18);
panda$core$Bit $tmp237 = panda$core$Bit$init$builtin_bit($tmp236 != NULL);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block32; else goto block33;
block32:;
// line 74
org$pandalanguage$pandac$ASTNode* $tmp239 = *(&local16);
$fn241 $tmp240 = ($fn241) $tmp239->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp242 = $tmp240($tmp239);
org$pandalanguage$pandac$Pair* $tmp243 = *(&local18);
panda$core$Bit $tmp244 = panda$core$Bit$init$builtin_bit($tmp243 != NULL);
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp246 = (panda$core$Int64) {74};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s247, $tmp246, &$s248);
abort(); // unreachable
block36:;
panda$core$Object** $tmp249 = &$tmp243->second;
panda$core$Object* $tmp250 = *$tmp249;
panda$core$Bit $tmp251 = org$pandalanguage$pandac$statement$Match$checkChoiceMatch$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceCase$Q$org$pandalanguage$pandac$ClassDecl$Q$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(param0, $tmp242, ((org$pandalanguage$pandac$ChoiceCase*) $tmp250), param3, param2);
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block34; else goto block35;
block34:;
// line 76
org$pandalanguage$pandac$FixedArray* $tmp253 = *(&local7);
ITable* $tmp254 = ((panda$collections$CollectionView*) $tmp253)->$class->itable;
while ($tmp254->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp254 = $tmp254->next;
}
$fn256 $tmp255 = $tmp254->methods[0];
panda$core$Int64 $tmp257 = $tmp255(((panda$collections$CollectionView*) $tmp253));
panda$core$Int64 $tmp258 = (panda$core$Int64) {1};
int64_t $tmp259 = $tmp257.value;
int64_t $tmp260 = $tmp258.value;
bool $tmp261 = $tmp259 != $tmp260;
panda$core$Bit $tmp262 = (panda$core$Bit) {$tmp261};
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block38; else goto block39;
block38:;
// line 77
org$pandalanguage$pandac$Position $tmp264 = *(&local15);
panda$core$String* $tmp265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s266, &$s267);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp264, $tmp265);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
// unreffing REF($343:panda.core.String)
// line 80
org$pandalanguage$pandac$Pair* $tmp268 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
// unreffing cc
*(&local18) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp269 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
// unreffing args
*(&local17) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp270 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
// unreffing base
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp271 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp271));
// unreffing t
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp272 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp272));
// unreffing auto
*(&local9) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp273 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
// unreffing statements
*(&local8) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp274 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp274));
// unreffing tests
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp275 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$IR* $tmp276 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp276));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block39:;
// line 82
org$pandalanguage$pandac$FixedArray* $tmp277 = *(&local17);
ITable* $tmp278 = ((panda$collections$CollectionView*) $tmp277)->$class->itable;
while ($tmp278->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp278 = $tmp278->next;
}
$fn280 $tmp279 = $tmp278->methods[0];
panda$core$Int64 $tmp281 = $tmp279(((panda$collections$CollectionView*) $tmp277));
org$pandalanguage$pandac$Pair* $tmp282 = *(&local18);
panda$core$Bit $tmp283 = panda$core$Bit$init$builtin_bit($tmp282 != NULL);
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block42; else goto block43;
block43:;
panda$core$Int64 $tmp285 = (panda$core$Int64) {82};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s286, $tmp285, &$s287);
abort(); // unreachable
block42:;
panda$core$Object** $tmp288 = &$tmp282->second;
panda$core$Object* $tmp289 = *$tmp288;
panda$collections$Array** $tmp290 = &((org$pandalanguage$pandac$ChoiceCase*) $tmp289)->fields;
panda$collections$Array* $tmp291 = *$tmp290;
ITable* $tmp292 = ((panda$collections$CollectionView*) $tmp291)->$class->itable;
while ($tmp292->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp292 = $tmp292->next;
}
$fn294 $tmp293 = $tmp292->methods[0];
panda$core$Int64 $tmp295 = $tmp293(((panda$collections$CollectionView*) $tmp291));
int64_t $tmp296 = $tmp281.value;
int64_t $tmp297 = $tmp295.value;
bool $tmp298 = $tmp296 != $tmp297;
panda$core$Bit $tmp299 = (panda$core$Bit) {$tmp298};
bool $tmp300 = $tmp299.value;
if ($tmp300) goto block40; else goto block41;
block40:;
// line 83
org$pandalanguage$pandac$Position $tmp301 = *(&local15);
org$pandalanguage$pandac$Pair* $tmp302 = *(&local18);
panda$core$Bit $tmp303 = panda$core$Bit$init$builtin_bit($tmp302 != NULL);
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block44; else goto block45;
block45:;
panda$core$Int64 $tmp305 = (panda$core$Int64) {83};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s306, $tmp305, &$s307);
abort(); // unreachable
block44:;
panda$core$Object** $tmp308 = &$tmp302->second;
panda$core$Object* $tmp309 = *$tmp308;
panda$core$String* $tmp310 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s311, ((panda$core$Object*) ((org$pandalanguage$pandac$ChoiceCase*) $tmp309)));
panda$core$String* $tmp312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp310, &$s313);
panda$core$String* $tmp314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp312, &$s315);
org$pandalanguage$pandac$Pair* $tmp316 = *(&local18);
panda$core$Bit $tmp317 = panda$core$Bit$init$builtin_bit($tmp316 != NULL);
bool $tmp318 = $tmp317.value;
if ($tmp318) goto block46; else goto block47;
block47:;
panda$core$Int64 $tmp319 = (panda$core$Int64) {84};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s320, $tmp319, &$s321);
abort(); // unreachable
block46:;
panda$core$Object** $tmp322 = &$tmp316->second;
panda$core$Object* $tmp323 = *$tmp322;
panda$collections$Array** $tmp324 = &((org$pandalanguage$pandac$ChoiceCase*) $tmp323)->fields;
panda$collections$Array* $tmp325 = *$tmp324;
ITable* $tmp326 = ((panda$collections$CollectionView*) $tmp325)->$class->itable;
while ($tmp326->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp326 = $tmp326->next;
}
$fn328 $tmp327 = $tmp326->methods[0];
panda$core$Int64 $tmp329 = $tmp327(((panda$collections$CollectionView*) $tmp325));
panda$core$Int64$wrapper* $tmp330;
$tmp330 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp330->value = $tmp329;
panda$core$String* $tmp331 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp314, ((panda$core$Object*) $tmp330));
org$pandalanguage$pandac$Pair* $tmp332 = *(&local18);
panda$core$Bit $tmp333 = panda$core$Bit$init$builtin_bit($tmp332 != NULL);
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block48; else goto block49;
block49:;
panda$core$Int64 $tmp335 = (panda$core$Int64) {85};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s336, $tmp335, &$s337);
abort(); // unreachable
block48:;
panda$core$Object** $tmp338 = &$tmp332->second;
panda$core$Object* $tmp339 = *$tmp338;
panda$collections$Array** $tmp340 = &((org$pandalanguage$pandac$ChoiceCase*) $tmp339)->fields;
panda$collections$Array* $tmp341 = *$tmp340;
ITable* $tmp342 = ((panda$collections$CollectionView*) $tmp341)->$class->itable;
while ($tmp342->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp342 = $tmp342->next;
}
$fn344 $tmp343 = $tmp342->methods[0];
panda$core$Int64 $tmp345 = $tmp343(((panda$collections$CollectionView*) $tmp341));
panda$core$Int64 $tmp346 = (panda$core$Int64) {1};
panda$core$Bit $tmp347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp345, $tmp346);
panda$core$Bit$wrapper* $tmp348;
$tmp348 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp348->value = $tmp347;
ITable* $tmp349 = ((panda$core$Formattable*) $tmp348)->$class->itable;
while ($tmp349->$class != (panda$core$Class*) &panda$core$Formattable$class) {
    $tmp349 = $tmp349->next;
}
$fn351 $tmp350 = $tmp349->methods[0];
panda$core$String* $tmp352 = $tmp350(((panda$core$Formattable*) $tmp348), &$s353);
panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s355, $tmp352);
panda$core$String* $tmp356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp354, &$s357);
panda$core$String* $tmp358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp331, $tmp356);
panda$core$String* $tmp359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp358, &$s360);
org$pandalanguage$pandac$FixedArray* $tmp361 = *(&local17);
ITable* $tmp362 = ((panda$collections$CollectionView*) $tmp361)->$class->itable;
while ($tmp362->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp362 = $tmp362->next;
}
$fn364 $tmp363 = $tmp362->methods[0];
panda$core$Int64 $tmp365 = $tmp363(((panda$collections$CollectionView*) $tmp361));
panda$core$Int64$wrapper* $tmp366;
$tmp366 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp366->value = $tmp365;
panda$core$String* $tmp367 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp359, ((panda$core$Object*) $tmp366));
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp301, $tmp367);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp367));
// unreffing REF($491:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
// unreffing REF($490:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
// unreffing REF($485:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
// unreffing REF($484:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp356));
// unreffing REF($483:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp354));
// unreffing REF($482:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
// unreffing REF($481:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Formattable*) $tmp348)));
// unreffing REF($479:panda.core.Formattable)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
// unreffing REF($459:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
// unreffing REF($458:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
// unreffing REF($440:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
// unreffing REF($439:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp310));
// unreffing REF($438:panda.core.String)
// line 87
org$pandalanguage$pandac$Pair* $tmp368 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp368));
// unreffing cc
*(&local18) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp369 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp369));
// unreffing args
*(&local17) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp370 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp370));
// unreffing base
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp371 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp371));
// unreffing t
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp372 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp372));
// unreffing auto
*(&local9) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp373 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp373));
// unreffing statements
*(&local8) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp374 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp374));
// unreffing tests
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp375 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp375));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$IR* $tmp376 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block41:;
// line 89
panda$core$Bit $tmp377 = panda$core$Bit$init$builtin_bit(param4 == NULL);
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block50; else goto block51;
block50:;
// line 90
org$pandalanguage$pandac$Position $tmp379 = *(&local15);
$fn381 $tmp380 = ($fn381) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp382 = $tmp380(param2);
panda$core$String* $tmp383 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s384, ((panda$core$Object*) $tmp382));
panda$core$String* $tmp385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp383, &$s386);
panda$core$String* $tmp387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp385, &$s388);
org$pandalanguage$pandac$Pair* $tmp389 = *(&local18);
panda$core$Bit $tmp390 = panda$core$Bit$init$builtin_bit($tmp389 != NULL);
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block52; else goto block53;
block53:;
panda$core$Int64 $tmp392 = (panda$core$Int64) {92};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s393, $tmp392, &$s394);
abort(); // unreachable
block52:;
panda$core$Object** $tmp395 = &$tmp389->second;
panda$core$Object* $tmp396 = *$tmp395;
panda$core$Weak** $tmp397 = &((org$pandalanguage$pandac$ChoiceCase*) $tmp396)->owner;
panda$core$Weak* $tmp398 = *$tmp397;
panda$core$Object* $tmp399 = panda$core$Weak$get$R$panda$core$Weak$T($tmp398);
panda$core$String** $tmp400 = &((org$pandalanguage$pandac$ClassDecl*) $tmp399)->name;
panda$core$String* $tmp401 = *$tmp400;
panda$core$String* $tmp402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s403, $tmp401);
panda$core$String* $tmp404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp402, &$s405);
panda$core$String* $tmp406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp387, $tmp404);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp379, $tmp406);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
// unreffing REF($613:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp404));
// unreffing REF($612:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
// unreffing REF($611:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp399);
// unreffing REF($607:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp387));
// unreffing REF($591:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp385));
// unreffing REF($590:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp383));
// unreffing REF($589:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp382));
// unreffing REF($587:org.pandalanguage.pandac.Type)
// line 93
org$pandalanguage$pandac$Pair* $tmp407 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
// unreffing cc
*(&local18) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp408 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
// unreffing args
*(&local17) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp409 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp409));
// unreffing base
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp410 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp410));
// unreffing t
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp411 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp411));
// unreffing auto
*(&local9) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp412 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp412));
// unreffing statements
*(&local8) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp413 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp413));
// unreffing tests
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp414 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp414));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$IR* $tmp415 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp415));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block51:;
// line 95
*(&local19) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 1
// line 97
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp416 = (org$pandalanguage$pandac$Compiler$AutoUnrefs*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoUnrefs$class);
org$pandalanguage$pandac$Compiler$AutoUnrefs$init$org$pandalanguage$pandac$Compiler($tmp416, param0);
*(&local20) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp416));
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp417 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp417));
*(&local20) = $tmp416;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp416));
// unreffing REF($690:org.pandalanguage.pandac.Compiler.AutoUnrefs)
// line 98
panda$collections$Array* $tmp418 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp419 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp418, $tmp419);
org$pandalanguage$pandac$ASTNode* $tmp420 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp421 = (panda$core$Int64) {25};
org$pandalanguage$pandac$ASTNode* $tmp422 = *(&local16);
$fn424 $tmp423 = ($fn424) $tmp422->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp425 = $tmp423($tmp422);
org$pandalanguage$pandac$Pair* $tmp426 = *(&local18);
panda$core$Bit $tmp427 = panda$core$Bit$init$builtin_bit($tmp426 != NULL);
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block54; else goto block55;
block55:;
panda$core$Int64 $tmp429 = (panda$core$Int64) {99};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s430, $tmp429, &$s431);
abort(); // unreachable
block54:;
panda$core$Object** $tmp432 = &$tmp426->second;
panda$core$Object* $tmp433 = *$tmp432;
panda$core$Int64* $tmp434 = &((org$pandalanguage$pandac$ChoiceCase*) $tmp433)->rawValue;
panda$core$Int64 $tmp435 = *$tmp434;
panda$core$UInt64 $tmp436 = panda$core$Int64$convert$R$panda$core$UInt64($tmp435);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp420, $tmp421, $tmp425, $tmp436);
panda$collections$Array$add$panda$collections$Array$T($tmp418, ((panda$core$Object*) $tmp420));
*(&local21) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp418));
panda$collections$Array* $tmp437 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp437));
*(&local21) = $tmp418;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp420));
// unreffing REF($708:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp418));
// unreffing REF($703:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 100
org$pandalanguage$pandac$ASTNode* $tmp438 = *(&local16);
$fn440 $tmp439 = ($fn440) $tmp438->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp441 = $tmp439($tmp438);
panda$core$Bit $tmp442 = panda$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp443 = $tmp442.value;
if ($tmp443) goto block56; else goto block57;
block57:;
panda$core$Int64 $tmp444 = (panda$core$Int64) {101};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s445, $tmp444, &$s446);
abort(); // unreachable
block56:;
panda$collections$Array* $tmp447 = *(&local21);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp448 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp449 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp450 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp448, $tmp449, $tmp450);
org$pandalanguage$pandac$IR$Value* $tmp451 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp441, param4, &$s452, ((panda$collections$ListView*) $tmp447), $tmp448);
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp451));
org$pandalanguage$pandac$IR$Value* $tmp453 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp453));
*(&local22) = $tmp451;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp451));
// unreffing REF($762:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp450));
// unreffing REF($760:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp448));
// unreffing REF($758:org.pandalanguage.pandac.Compiler.TypeContext)
// line 103
org$pandalanguage$pandac$IR$Value* $tmp454 = *(&local22);
panda$core$Bit $tmp455 = panda$core$Bit$init$builtin_bit($tmp454 != NULL);
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block58; else goto block59;
block59:;
panda$core$Int64 $tmp457 = (panda$core$Int64) {103};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s458, $tmp457);
abort(); // unreachable
block58:;
// line 104
org$pandalanguage$pandac$Position $tmp459 = *(&local15);
org$pandalanguage$pandac$IR$Value* $tmp460 = *(&local22);
panda$core$Bit $tmp461 = panda$core$Bit$init$builtin_bit($tmp460 != NULL);
bool $tmp462 = $tmp461.value;
if ($tmp462) goto block60; else goto block61;
block61:;
panda$core$Int64 $tmp463 = (panda$core$Int64) {105};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s464, $tmp463, &$s465);
abort(); // unreachable
block60:;
org$pandalanguage$pandac$IR$Value* $tmp466 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, $tmp459, $tmp460);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp466));
org$pandalanguage$pandac$IR$Value* $tmp467 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
*(&local19) = $tmp466;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp466));
// unreffing REF($799:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$IR$Value* $tmp468 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp468));
// unreffing test
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp469 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp469));
// unreffing eqArgs
*(&local21) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp470 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp470));
// unreffing unrefs
*(&local20) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
// line 107
org$pandalanguage$pandac$IR* $tmp471 = *(&local1);
org$pandalanguage$pandac$IR$Statement* $tmp472 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp473 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Position $tmp474 = *(&local15);
org$pandalanguage$pandac$IR$Value* $tmp475 = *(&local19);
org$pandalanguage$pandac$IR$Block$ID $tmp476 = *(&local10);
org$pandalanguage$pandac$IR$Block$ID $tmp477 = *(&local3);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp472, $tmp473, $tmp474, $tmp475, $tmp476, $tmp477);
$fn479 $tmp478 = ($fn479) $tmp471->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp480 = $tmp478($tmp471, $tmp472);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp472));
// unreffing REF($826:org.pandalanguage.pandac.IR.Statement)
// line 109
org$pandalanguage$pandac$IR* $tmp481 = *(&local1);
org$pandalanguage$pandac$IR$Block$ID $tmp482 = *(&local10);
$fn484 $tmp483 = ($fn484) $tmp481->$class->vtable[4];
$tmp483($tmp481, $tmp482);
// line 110
panda$core$Int64 $tmp485 = (panda$core$Int64) {0};
org$pandalanguage$pandac$FixedArray* $tmp486 = *(&local17);
ITable* $tmp487 = ((panda$collections$CollectionView*) $tmp486)->$class->itable;
while ($tmp487->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp487 = $tmp487->next;
}
$fn489 $tmp488 = $tmp487->methods[0];
panda$core$Int64 $tmp490 = $tmp488(((panda$collections$CollectionView*) $tmp486));
panda$core$Bit $tmp491 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp492 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp485, $tmp490, $tmp491);
panda$core$Int64 $tmp493 = $tmp492.min;
*(&local23) = $tmp493;
panda$core$Int64 $tmp494 = $tmp492.max;
panda$core$Bit $tmp495 = $tmp492.inclusive;
bool $tmp496 = $tmp495.value;
panda$core$Int64 $tmp497 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp498 = panda$core$Int64$convert$R$panda$core$UInt64($tmp497);
if ($tmp496) goto block65; else goto block66;
block65:;
int64_t $tmp499 = $tmp493.value;
int64_t $tmp500 = $tmp494.value;
bool $tmp501 = $tmp499 <= $tmp500;
panda$core$Bit $tmp502 = (panda$core$Bit) {$tmp501};
bool $tmp503 = $tmp502.value;
if ($tmp503) goto block62; else goto block63;
block66:;
int64_t $tmp504 = $tmp493.value;
int64_t $tmp505 = $tmp494.value;
bool $tmp506 = $tmp504 < $tmp505;
panda$core$Bit $tmp507 = (panda$core$Bit) {$tmp506};
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block62; else goto block63;
block62:;
// line 111
org$pandalanguage$pandac$IR* $tmp509 = *(&local1);
org$pandalanguage$pandac$IR$Statement* $tmp510 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp511 = (panda$core$Int64) {4};
org$pandalanguage$pandac$Position $tmp512 = *(&local15);
org$pandalanguage$pandac$Pair* $tmp513 = *(&local18);
panda$core$Bit $tmp514 = panda$core$Bit$init$builtin_bit($tmp513 != NULL);
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block67; else goto block68;
block68:;
panda$core$Int64 $tmp516 = (panda$core$Int64) {113};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s517, $tmp516, &$s518);
abort(); // unreachable
block67:;
panda$core$Object** $tmp519 = &$tmp513->second;
panda$core$Object* $tmp520 = *$tmp519;
panda$core$Int64 $tmp521 = *(&local23);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64($tmp510, $tmp511, $tmp512, param2, ((org$pandalanguage$pandac$ChoiceCase*) $tmp520), $tmp521);
$fn523 $tmp522 = ($fn523) $tmp509->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp524 = $tmp522($tmp509, $tmp510);
*(&local24) = $tmp524;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp510));
// unreffing REF($873:org.pandalanguage.pandac.IR.Statement)
// line 114
org$pandalanguage$pandac$IR* $tmp525 = *(&local1);
org$pandalanguage$pandac$IR$Statement* $tmp526 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp527 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Position $tmp528 = *(&local15);
org$pandalanguage$pandac$IR$Value* $tmp529 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp530 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp531 = *(&local24);
org$pandalanguage$pandac$Pair* $tmp532 = *(&local18);
panda$core$Bit $tmp533 = panda$core$Bit$init$builtin_bit($tmp532 != NULL);
bool $tmp534 = $tmp533.value;
if ($tmp534) goto block69; else goto block70;
block70:;
panda$core$Int64 $tmp535 = (panda$core$Int64) {115};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s536, $tmp535, &$s537);
abort(); // unreachable
block69:;
panda$core$Object** $tmp538 = &$tmp532->second;
panda$core$Object* $tmp539 = *$tmp538;
panda$collections$Array** $tmp540 = &((org$pandalanguage$pandac$ChoiceCase*) $tmp539)->fields;
panda$collections$Array* $tmp541 = *$tmp540;
panda$core$Int64 $tmp542 = *(&local23);
panda$core$Object* $tmp543 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp541, $tmp542);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp529, $tmp530, $tmp531, ((org$pandalanguage$pandac$Type*) $tmp543));
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp526, $tmp527, $tmp528, $tmp529);
$fn545 $tmp544 = ($fn545) $tmp525->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp546 = $tmp544($tmp525, $tmp526);
*(&local25) = $tmp546;
panda$core$Panda$unref$panda$core$Object$Q($tmp543);
// unreffing REF($920:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp529));
// unreffing REF($901:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp526));
// unreffing REF($898:org.pandalanguage.pandac.IR.Statement)
// line 116
org$pandalanguage$pandac$FixedArray* $tmp547 = *(&local17);
panda$core$Int64 $tmp548 = *(&local23);
panda$core$Object* $tmp549 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp547, $tmp548);
panda$core$String* $tmp550 = org$pandalanguage$pandac$Compiler$getText$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp549));
panda$core$Bit $tmp551 = panda$core$Bit$init$builtin_bit($tmp550 != NULL);
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block73; else goto block74;
block74:;
panda$core$Int64 $tmp553 = (panda$core$Int64) {116};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s554, $tmp553, &$s555);
abort(); // unreachable
block73:;
panda$core$Bit $tmp556 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp550, &$s557);
bool $tmp558 = $tmp556.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp550));
// unreffing REF($942:panda.core.String?)
panda$core$Panda$unref$panda$core$Object$Q($tmp549);
// unreffing REF($940:org.pandalanguage.pandac.FixedArray.T)
if ($tmp558) goto block71; else goto block72;
block71:;
// line 117
goto block64;
block72:;
// line 119
*(&local26) = ((org$pandalanguage$pandac$Pair*) NULL);
// line 1
// line 121
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp559 = (org$pandalanguage$pandac$Compiler$AutoUnrefs*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoUnrefs$class);
org$pandalanguage$pandac$Compiler$AutoUnrefs$init$org$pandalanguage$pandac$Compiler($tmp559, param0);
*(&local27) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp559));
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp560 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp560));
*(&local27) = $tmp559;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp559));
// unreffing REF($966:org.pandalanguage.pandac.Compiler.AutoUnrefs)
// line 122
org$pandalanguage$pandac$FixedArray* $tmp561 = *(&local17);
panda$core$Int64 $tmp562 = *(&local23);
panda$core$Object* $tmp563 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp561, $tmp562);
panda$core$Int64 $tmp564 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Variable$Kind $tmp565 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp564);
org$pandalanguage$pandac$ASTNode* $tmp566 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp567 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position $tmp568 = *(&local15);
org$pandalanguage$pandac$IR$Value* $tmp569 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp570 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp571 = *(&local25);
org$pandalanguage$pandac$Pair* $tmp572 = *(&local18);
panda$core$Bit $tmp573 = panda$core$Bit$init$builtin_bit($tmp572 != NULL);
bool $tmp574 = $tmp573.value;
if ($tmp574) goto block75; else goto block76;
block76:;
panda$core$Int64 $tmp575 = (panda$core$Int64) {126};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s576, $tmp575, &$s577);
abort(); // unreachable
block75:;
panda$core$Object** $tmp578 = &$tmp572->second;
panda$core$Object* $tmp579 = *$tmp578;
panda$collections$Array** $tmp580 = &((org$pandalanguage$pandac$ChoiceCase*) $tmp579)->fields;
panda$collections$Array* $tmp581 = *$tmp580;
panda$core$Int64 $tmp582 = *(&local23);
panda$core$Object* $tmp583 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp581, $tmp582);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp569, $tmp570, $tmp571, ((org$pandalanguage$pandac$Type*) $tmp583));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp566, $tmp567, $tmp568, $tmp569);
org$pandalanguage$pandac$Pair* $tmp584 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$Variable$Corg$pandalanguage$pandac$IR$Value$Q$GT$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp563), $tmp565, $tmp566, ((org$pandalanguage$pandac$Type*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp584));
org$pandalanguage$pandac$Pair* $tmp585 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp585));
*(&local26) = $tmp584;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp584));
// unreffing REF($1013:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.Variable, org.pandalanguage.pandac.IR.Value?>?)
panda$core$Panda$unref$panda$core$Object$Q($tmp583);
// unreffing REF($1008:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp569));
// unreffing REF($989:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp566));
// unreffing REF($986:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q($tmp563);
// unreffing REF($982:org.pandalanguage.pandac.FixedArray.T)
// line 129
org$pandalanguage$pandac$lvalue$VariableLValue* $tmp586 = (org$pandalanguage$pandac$lvalue$VariableLValue*) frostObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$lvalue$VariableLValue$class);
org$pandalanguage$pandac$Position $tmp587 = *(&local15);
org$pandalanguage$pandac$Pair* $tmp588 = *(&local26);
panda$core$Bit $tmp589 = panda$core$Bit$init$builtin_bit($tmp588 != NULL);
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block77; else goto block78;
block78:;
panda$core$Int64 $tmp591 = (panda$core$Int64) {129};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s592, $tmp591, &$s593);
abort(); // unreachable
block77:;
panda$core$Object** $tmp594 = &$tmp588->first;
panda$core$Object* $tmp595 = *$tmp594;
org$pandalanguage$pandac$lvalue$VariableLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable($tmp586, param0, $tmp587, ((org$pandalanguage$pandac$Variable*) $tmp595));
org$pandalanguage$pandac$IR$Value* $tmp596 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp597 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp598 = *(&local25);
org$pandalanguage$pandac$Pair* $tmp599 = *(&local18);
panda$core$Bit $tmp600 = panda$core$Bit$init$builtin_bit($tmp599 != NULL);
bool $tmp601 = $tmp600.value;
if ($tmp601) goto block79; else goto block80;
block80:;
panda$core$Int64 $tmp602 = (panda$core$Int64) {131};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s603, $tmp602, &$s604);
abort(); // unreachable
block79:;
panda$core$Object** $tmp605 = &$tmp599->second;
panda$core$Object* $tmp606 = *$tmp605;
panda$collections$Array** $tmp607 = &((org$pandalanguage$pandac$ChoiceCase*) $tmp606)->fields;
panda$collections$Array* $tmp608 = *$tmp607;
panda$core$Int64 $tmp609 = *(&local23);
panda$core$Object* $tmp610 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp608, $tmp609);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp596, $tmp597, $tmp598, ((org$pandalanguage$pandac$Type*) $tmp610));
$fn612 $tmp611 = ($fn612) $tmp586->$class->vtable[4];
$tmp611($tmp586, $tmp596);
panda$core$Panda$unref$panda$core$Object$Q($tmp610);
// unreffing REF($1070:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp596));
// unreffing REF($1051:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp586));
// unreffing REF($1036:org.pandalanguage.pandac.lvalue.VariableLValue)
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp613 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp613));
// unreffing unrefs
*(&local27) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
// line 133
org$pandalanguage$pandac$Pair* $tmp614 = *(&local26);
panda$core$Bit $tmp615 = panda$core$Bit$init$builtin_bit($tmp614 != NULL);
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block83; else goto block84;
block84:;
panda$core$Int64 $tmp617 = (panda$core$Int64) {133};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s618, $tmp617, &$s619);
abort(); // unreachable
block83:;
panda$core$Object** $tmp620 = &$tmp614->first;
panda$core$Object* $tmp621 = *$tmp620;
org$pandalanguage$pandac$Type** $tmp622 = &((org$pandalanguage$pandac$Variable*) $tmp621)->type;
org$pandalanguage$pandac$Type* $tmp623 = *$tmp622;
panda$core$Bit $tmp624 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp623);
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block81; else goto block82;
block81:;
// line 134
panda$collections$Stack** $tmp626 = &param0->enclosingContexts;
panda$collections$Stack* $tmp627 = *$tmp626;
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp628 = (org$pandalanguage$pandac$Compiler$EnclosingContext*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$EnclosingContext$class);
panda$core$Int64 $tmp629 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Pair* $tmp630 = *(&local26);
panda$core$Bit $tmp631 = panda$core$Bit$init$builtin_bit($tmp630 != NULL);
bool $tmp632 = $tmp631.value;
if ($tmp632) goto block85; else goto block86;
block86:;
panda$core$Int64 $tmp633 = (panda$core$Int64) {136};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s634, $tmp633, &$s635);
abort(); // unreachable
block85:;
panda$core$Object** $tmp636 = &$tmp630->first;
panda$core$Object* $tmp637 = *$tmp636;
org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$Variable($tmp628, $tmp629, ((org$pandalanguage$pandac$Variable*) $tmp637));
panda$collections$Stack$push$panda$collections$Stack$T($tmp627, ((panda$core$Object*) $tmp628));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp628));
// unreffing REF($1111:org.pandalanguage.pandac.Compiler.EnclosingContext)
goto block82;
block82:;
org$pandalanguage$pandac$Pair* $tmp638 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp638));
// unreffing target
*(&local26) = ((org$pandalanguage$pandac$Pair*) NULL);
goto block64;
block64:;
panda$core$Int64 $tmp639 = *(&local23);
int64_t $tmp640 = $tmp494.value;
int64_t $tmp641 = $tmp639.value;
int64_t $tmp642 = $tmp640 - $tmp641;
panda$core$Int64 $tmp643 = (panda$core$Int64) {$tmp642};
panda$core$UInt64 $tmp644 = panda$core$Int64$convert$R$panda$core$UInt64($tmp643);
if ($tmp496) goto block88; else goto block89;
block88:;
uint64_t $tmp645 = $tmp644.value;
uint64_t $tmp646 = $tmp498.value;
bool $tmp647 = $tmp645 >= $tmp646;
panda$core$Bit $tmp648 = (panda$core$Bit) {$tmp647};
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block87; else goto block63;
block89:;
uint64_t $tmp650 = $tmp644.value;
uint64_t $tmp651 = $tmp498.value;
bool $tmp652 = $tmp650 > $tmp651;
panda$core$Bit $tmp653 = (panda$core$Bit) {$tmp652};
bool $tmp654 = $tmp653.value;
if ($tmp654) goto block87; else goto block63;
block87:;
int64_t $tmp655 = $tmp639.value;
int64_t $tmp656 = $tmp497.value;
int64_t $tmp657 = $tmp655 + $tmp656;
panda$core$Int64 $tmp658 = (panda$core$Int64) {$tmp657};
*(&local23) = $tmp658;
goto block62;
block63:;
// line 139
org$pandalanguage$pandac$IR$Value* $tmp659 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
// unreffing testBit
*(&local19) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Pair* $tmp660 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp660));
// unreffing cc
*(&local18) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp661 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp661));
// unreffing args
*(&local17) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp662 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp662));
// unreffing base
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp663 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp663));
// unreffing t
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block16;
block35:;
goto block33;
block33:;
org$pandalanguage$pandac$Pair* $tmp664 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp664));
// unreffing cc
*(&local18) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp665 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp665));
// unreffing args
*(&local17) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp666 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp666));
// unreffing base
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block30;
block30:;
// line 144
*(&local28) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 1
// line 146
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp667 = (org$pandalanguage$pandac$Compiler$AutoUnrefs*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoUnrefs$class);
org$pandalanguage$pandac$Compiler$AutoUnrefs$init$org$pandalanguage$pandac$Compiler($tmp667, param0);
*(&local29) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp667));
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp668 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp668));
*(&local29) = $tmp667;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp667));
// unreffing REF($1211:org.pandalanguage.pandac.Compiler.AutoUnrefs)
// line 147
*(&local30) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 148
org$pandalanguage$pandac$ASTNode* $tmp669 = *(&local14);
org$pandalanguage$pandac$Pair* $tmp670 = org$pandalanguage$pandac$Compiler$getChoiceCase$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$Type$Corg$pandalanguage$pandac$ChoiceCase$GT$Q(param0, $tmp669);
*(&local31) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
org$pandalanguage$pandac$Pair* $tmp671 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
*(&local31) = $tmp670;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
// unreffing REF($1227:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.Type, org.pandalanguage.pandac.ChoiceCase>?)
// line 149
org$pandalanguage$pandac$Pair* $tmp672 = *(&local31);
panda$core$Bit $tmp673 = panda$core$Bit$init$builtin_bit($tmp672 != NULL);
bool $tmp674 = $tmp673.value;
if ($tmp674) goto block90; else goto block92;
block90:;
// line 150
panda$collections$Array* $tmp675 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp676 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp675, $tmp676);
org$pandalanguage$pandac$ASTNode* $tmp677 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp678 = (panda$core$Int64) {25};
org$pandalanguage$pandac$ASTNode* $tmp679 = *(&local14);
$fn681 $tmp680 = ($fn681) $tmp679->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp682 = $tmp680($tmp679);
org$pandalanguage$pandac$Pair* $tmp683 = *(&local31);
panda$core$Bit $tmp684 = panda$core$Bit$init$builtin_bit($tmp683 != NULL);
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block93; else goto block94;
block94:;
panda$core$Int64 $tmp686 = (panda$core$Int64) {151};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s687, $tmp686, &$s688);
abort(); // unreachable
block93:;
panda$core$Object** $tmp689 = &$tmp683->second;
panda$core$Object* $tmp690 = *$tmp689;
panda$core$Int64* $tmp691 = &((org$pandalanguage$pandac$ChoiceCase*) $tmp690)->rawValue;
panda$core$Int64 $tmp692 = *$tmp691;
panda$core$UInt64 $tmp693 = panda$core$Int64$convert$R$panda$core$UInt64($tmp692);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp677, $tmp678, $tmp682, $tmp693);
panda$collections$Array$add$panda$collections$Array$T($tmp675, ((panda$core$Object*) $tmp677));
*(&local32) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp675));
panda$collections$Array* $tmp694 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp694));
*(&local32) = $tmp675;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp677));
// unreffing REF($1250:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp675));
// unreffing REF($1245:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 152
org$pandalanguage$pandac$ASTNode* $tmp695 = *(&local14);
$fn697 $tmp696 = ($fn697) $tmp695->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp698 = $tmp696($tmp695);
panda$core$Bit $tmp699 = panda$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp700 = $tmp699.value;
if ($tmp700) goto block95; else goto block96;
block96:;
panda$core$Int64 $tmp701 = (panda$core$Int64) {152};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s702, $tmp701, &$s703);
abort(); // unreachable
block95:;
panda$collections$Array* $tmp704 = *(&local32);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp705 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp706 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp707 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp705, $tmp706, $tmp707);
org$pandalanguage$pandac$IR$Value* $tmp708 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp698, param4, &$s709, ((panda$collections$ListView*) $tmp704), $tmp705);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp708));
org$pandalanguage$pandac$IR$Value* $tmp710 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp710));
*(&local30) = $tmp708;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp708));
// unreffing REF($1304:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp707));
// unreffing REF($1302:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp705));
// unreffing REF($1300:org.pandalanguage.pandac.Compiler.TypeContext)
// line 154
org$pandalanguage$pandac$IR$Value* $tmp711 = *(&local30);
panda$core$Bit $tmp712 = panda$core$Bit$init$builtin_bit($tmp711 == NULL);
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block97; else goto block98;
block97:;
// line 155
panda$collections$Array* $tmp714 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp714));
// unreffing args
*(&local32) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Pair* $tmp715 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp715));
// unreffing cc
*(&local31) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp716 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp716));
// unreffing test
*(&local30) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp717 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp717));
// unreffing unrefs
*(&local29) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp718 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp718));
// unreffing testBit
*(&local28) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp719 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp719));
// unreffing t
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp720 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp720));
// unreffing auto
*(&local9) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp721 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp721));
// unreffing statements
*(&local8) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp722 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp722));
// unreffing tests
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp723 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp723));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$IR* $tmp724 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp724));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block98:;
panda$collections$Array* $tmp725 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp725));
// unreffing args
*(&local32) = ((panda$collections$Array*) NULL);
goto block91;
block92:;
// line 1
// line 159
org$pandalanguage$pandac$ASTNode* $tmp726 = *(&local14);
$fn728 $tmp727 = ($fn728) $tmp726->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp729 = $tmp727($tmp726);
panda$collections$Array* $tmp730 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp731 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp730, $tmp731);
org$pandalanguage$pandac$ASTNode* $tmp732 = *(&local14);
panda$collections$Array$add$panda$collections$Array$T($tmp730, ((panda$core$Object*) $tmp732));
org$pandalanguage$pandac$Compiler$TypeContext* $tmp733 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp734 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp735 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp733, $tmp734, $tmp735);
org$pandalanguage$pandac$IR$Value* $tmp736 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp729, param2, &$s737, ((panda$collections$ListView*) $tmp730), $tmp733);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp736));
org$pandalanguage$pandac$IR$Value* $tmp738 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp738));
*(&local30) = $tmp736;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp736));
// unreffing REF($1407:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp735));
// unreffing REF($1405:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp733));
// unreffing REF($1403:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp730));
// unreffing REF($1394:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 161
org$pandalanguage$pandac$IR$Value* $tmp739 = *(&local30);
panda$core$Bit $tmp740 = panda$core$Bit$init$builtin_bit($tmp739 == NULL);
bool $tmp741 = $tmp740.value;
if ($tmp741) goto block99; else goto block100;
block99:;
// line 162
org$pandalanguage$pandac$Pair* $tmp742 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp742));
// unreffing cc
*(&local31) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp743 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp743));
// unreffing test
*(&local30) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp744 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp744));
// unreffing unrefs
*(&local29) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp745 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp745));
// unreffing testBit
*(&local28) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp746 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp746));
// unreffing t
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp747 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp747));
// unreffing auto
*(&local9) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp748 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp748));
// unreffing statements
*(&local8) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp749 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp749));
// unreffing tests
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp750 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp750));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$IR* $tmp751 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp751));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block100:;
goto block91;
block91:;
// line 165
org$pandalanguage$pandac$Position $tmp752 = *(&local6);
org$pandalanguage$pandac$IR$Value* $tmp753 = *(&local30);
panda$core$Bit $tmp754 = panda$core$Bit$init$builtin_bit($tmp753 != NULL);
bool $tmp755 = $tmp754.value;
if ($tmp755) goto block101; else goto block102;
block102:;
panda$core$Int64 $tmp756 = (panda$core$Int64) {165};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s757, $tmp756, &$s758);
abort(); // unreachable
block101:;
org$pandalanguage$pandac$IR$Value* $tmp759 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, $tmp752, $tmp753);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp759));
org$pandalanguage$pandac$IR$Value* $tmp760 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp760));
*(&local28) = $tmp759;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp759));
// unreffing REF($1496:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$Pair* $tmp761 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp761));
// unreffing cc
*(&local31) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp762 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp762));
// unreffing test
*(&local30) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp763 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp763));
// unreffing unrefs
*(&local29) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
// line 167
org$pandalanguage$pandac$IR* $tmp764 = *(&local1);
org$pandalanguage$pandac$IR$Statement* $tmp765 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp766 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Position $tmp767 = *(&local6);
org$pandalanguage$pandac$IR$Value* $tmp768 = *(&local28);
org$pandalanguage$pandac$IR$Block$ID $tmp769 = *(&local10);
org$pandalanguage$pandac$IR$Block$ID $tmp770 = *(&local3);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp765, $tmp766, $tmp767, $tmp768, $tmp769, $tmp770);
$fn772 $tmp771 = ($fn772) $tmp764->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp773 = $tmp771($tmp764, $tmp765);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp765));
// unreffing REF($1523:org.pandalanguage.pandac.IR.Statement)
org$pandalanguage$pandac$IR$Value* $tmp774 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp774));
// unreffing testBit
*(&local28) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp775 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp775));
// unreffing t
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block16;
block16:;
panda$core$Int64 $tmp776 = *(&local11);
int64_t $tmp777 = $tmp142.value;
int64_t $tmp778 = $tmp776.value;
int64_t $tmp779 = $tmp777 - $tmp778;
panda$core$Int64 $tmp780 = (panda$core$Int64) {$tmp779};
panda$core$UInt64 $tmp781 = panda$core$Int64$convert$R$panda$core$UInt64($tmp780);
if ($tmp144) goto block104; else goto block105;
block104:;
uint64_t $tmp782 = $tmp781.value;
uint64_t $tmp783 = $tmp146.value;
bool $tmp784 = $tmp782 >= $tmp783;
panda$core$Bit $tmp785 = (panda$core$Bit) {$tmp784};
bool $tmp786 = $tmp785.value;
if ($tmp786) goto block103; else goto block15;
block105:;
uint64_t $tmp787 = $tmp781.value;
uint64_t $tmp788 = $tmp146.value;
bool $tmp789 = $tmp787 > $tmp788;
panda$core$Bit $tmp790 = (panda$core$Bit) {$tmp789};
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block103; else goto block15;
block103:;
int64_t $tmp792 = $tmp776.value;
int64_t $tmp793 = $tmp145.value;
int64_t $tmp794 = $tmp792 + $tmp793;
panda$core$Int64 $tmp795 = (panda$core$Int64) {$tmp794};
*(&local11) = $tmp795;
goto block14;
block15:;
// line 170
org$pandalanguage$pandac$IR* $tmp796 = *(&local1);
org$pandalanguage$pandac$IR$Block$ID $tmp797 = *(&local10);
$fn799 $tmp798 = ($fn799) $tmp796->$class->vtable[4];
$tmp798($tmp796, $tmp797);
// line 171
org$pandalanguage$pandac$FixedArray* $tmp800 = *(&local8);
ITable* $tmp801 = ((panda$collections$Iterable*) $tmp800)->$class->itable;
while ($tmp801->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp801 = $tmp801->next;
}
$fn803 $tmp802 = $tmp801->methods[0];
panda$collections$Iterator* $tmp804 = $tmp802(((panda$collections$Iterable*) $tmp800));
goto block106;
block106:;
ITable* $tmp805 = $tmp804->$class->itable;
while ($tmp805->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp805 = $tmp805->next;
}
$fn807 $tmp806 = $tmp805->methods[0];
panda$core$Bit $tmp808 = $tmp806($tmp804);
bool $tmp809 = $tmp808.value;
if ($tmp809) goto block108; else goto block107;
block107:;
*(&local33) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp810 = $tmp804->$class->itable;
while ($tmp810->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp810 = $tmp810->next;
}
$fn812 $tmp811 = $tmp810->methods[1];
panda$core$Object* $tmp813 = $tmp811($tmp804);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp813)));
org$pandalanguage$pandac$ASTNode* $tmp814 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp814));
*(&local33) = ((org$pandalanguage$pandac$ASTNode*) $tmp813);
// line 172
org$pandalanguage$pandac$ASTNode* $tmp815 = *(&local33);
org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode(param0, $tmp815);
panda$core$Panda$unref$panda$core$Object$Q($tmp813);
// unreffing REF($1592:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp816 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp816));
// unreffing s
*(&local33) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block106;
block108:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp804));
// unreffing REF($1581:panda.collections.Iterator<panda.collections.Iterable.T>)
org$pandalanguage$pandac$Compiler$AutoScope* $tmp817 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp817));
// unreffing auto
*(&local9) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
// line 175
org$pandalanguage$pandac$IR* $tmp818 = *(&local1);
$fn820 $tmp819 = ($fn820) $tmp818->$class->vtable[5];
panda$core$Bit $tmp821 = $tmp819($tmp818);
panda$core$Bit $tmp822 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp821);
bool $tmp823 = $tmp822.value;
if ($tmp823) goto block109; else goto block110;
block109:;
// line 176
org$pandalanguage$pandac$IR* $tmp824 = *(&local1);
org$pandalanguage$pandac$IR$Statement* $tmp825 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp826 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Position $tmp827 = *(&local6);
org$pandalanguage$pandac$IR$Block$ID $tmp828 = *(&local2);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp825, $tmp826, $tmp827, $tmp828);
$fn830 $tmp829 = ($fn830) $tmp824->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp831 = $tmp829($tmp824, $tmp825);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp825));
// unreffing REF($1629:org.pandalanguage.pandac.IR.Statement)
goto block110;
block110:;
org$pandalanguage$pandac$FixedArray* $tmp832 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp832));
// unreffing statements
*(&local8) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp833 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp833));
// unreffing tests
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block11;
block13:;
// line 180
panda$core$Bit $tmp834 = panda$core$Bit$init$builtin_bit(false);
bool $tmp835 = $tmp834.value;
if ($tmp835) goto block111; else goto block112;
block112:;
panda$core$Int64 $tmp836 = (panda$core$Int64) {180};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s837, $tmp836);
abort(); // unreachable
block111:;
goto block11;
block11:;
org$pandalanguage$pandac$ASTNode* $tmp838 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp838));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block8;
block8:;
panda$core$Int64 $tmp839 = *(&local4);
int64_t $tmp840 = $tmp94.value;
int64_t $tmp841 = $tmp839.value;
int64_t $tmp842 = $tmp840 - $tmp841;
panda$core$Int64 $tmp843 = (panda$core$Int64) {$tmp842};
panda$core$UInt64 $tmp844 = panda$core$Int64$convert$R$panda$core$UInt64($tmp843);
if ($tmp96) goto block114; else goto block115;
block114:;
uint64_t $tmp845 = $tmp844.value;
uint64_t $tmp846 = $tmp98.value;
bool $tmp847 = $tmp845 >= $tmp846;
panda$core$Bit $tmp848 = (panda$core$Bit) {$tmp847};
bool $tmp849 = $tmp848.value;
if ($tmp849) goto block113; else goto block7;
block115:;
uint64_t $tmp850 = $tmp844.value;
uint64_t $tmp851 = $tmp98.value;
bool $tmp852 = $tmp850 > $tmp851;
panda$core$Bit $tmp853 = (panda$core$Bit) {$tmp852};
bool $tmp854 = $tmp853.value;
if ($tmp854) goto block113; else goto block7;
block113:;
int64_t $tmp855 = $tmp839.value;
int64_t $tmp856 = $tmp97.value;
int64_t $tmp857 = $tmp855 + $tmp856;
panda$core$Int64 $tmp858 = (panda$core$Int64) {$tmp857};
*(&local4) = $tmp858;
goto block6;
block7:;
// line 184
panda$core$Bit $tmp859 = panda$core$Bit$init$builtin_bit(param6 != NULL);
bool $tmp860 = $tmp859.value;
if ($tmp860) goto block116; else goto block117;
block116:;
// line 1
// line 186
org$pandalanguage$pandac$Compiler$AutoScope* $tmp861 = (org$pandalanguage$pandac$Compiler$AutoScope*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoScope$class);
org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler($tmp861, param0);
*(&local34) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
org$pandalanguage$pandac$Compiler$AutoScope* $tmp862 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp862));
*(&local34) = $tmp861;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
// unreffing REF($1697:org.pandalanguage.pandac.Compiler.AutoScope)
// line 187
org$pandalanguage$pandac$IR* $tmp863 = *(&local1);
org$pandalanguage$pandac$IR$Block$ID $tmp864 = *(&local3);
$fn866 $tmp865 = ($fn866) $tmp863->$class->vtable[4];
$tmp865($tmp863, $tmp864);
// line 188
panda$core$Bit $tmp867 = panda$core$Bit$init$builtin_bit(param6 != NULL);
bool $tmp868 = $tmp867.value;
if ($tmp868) goto block118; else goto block119;
block119:;
panda$core$Int64 $tmp869 = (panda$core$Int64) {188};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s870, $tmp869, &$s871);
abort(); // unreachable
block118:;
ITable* $tmp872 = ((panda$collections$Iterable*) param6)->$class->itable;
while ($tmp872->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp872 = $tmp872->next;
}
$fn874 $tmp873 = $tmp872->methods[0];
panda$collections$Iterator* $tmp875 = $tmp873(((panda$collections$Iterable*) param6));
goto block120;
block120:;
ITable* $tmp876 = $tmp875->$class->itable;
while ($tmp876->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp876 = $tmp876->next;
}
$fn878 $tmp877 = $tmp876->methods[0];
panda$core$Bit $tmp879 = $tmp877($tmp875);
bool $tmp880 = $tmp879.value;
if ($tmp880) goto block122; else goto block121;
block121:;
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp881 = $tmp875->$class->itable;
while ($tmp881->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp881 = $tmp881->next;
}
$fn883 $tmp882 = $tmp881->methods[1];
panda$core$Object* $tmp884 = $tmp882($tmp875);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp884)));
org$pandalanguage$pandac$ASTNode* $tmp885 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp885));
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) $tmp884);
// line 189
org$pandalanguage$pandac$ASTNode* $tmp886 = *(&local35);
org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode(param0, $tmp886);
panda$core$Panda$unref$panda$core$Object$Q($tmp884);
// unreffing REF($1736:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp887 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp887));
// unreffing s
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block120;
block122:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp875));
// unreffing REF($1725:panda.collections.Iterator<panda.collections.Iterable.T>)
org$pandalanguage$pandac$Compiler$AutoScope* $tmp888 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp888));
// unreffing scope
*(&local34) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
// line 192
org$pandalanguage$pandac$IR* $tmp889 = *(&local1);
$fn891 $tmp890 = ($fn891) $tmp889->$class->vtable[5];
panda$core$Bit $tmp892 = $tmp890($tmp889);
panda$core$Bit $tmp893 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp892);
bool $tmp894 = $tmp893.value;
if ($tmp894) goto block123; else goto block124;
block123:;
// line 193
org$pandalanguage$pandac$IR* $tmp895 = *(&local1);
org$pandalanguage$pandac$IR$Statement* $tmp896 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp897 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp898 = *(&local2);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp896, $tmp897, param1, $tmp898);
$fn900 $tmp899 = ($fn900) $tmp895->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp901 = $tmp899($tmp895, $tmp896);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp896));
// unreffing REF($1773:org.pandalanguage.pandac.IR.Statement)
goto block124;
block124:;
goto block117;
block117:;
// line 196
org$pandalanguage$pandac$IR* $tmp902 = *(&local1);
org$pandalanguage$pandac$IR$Block$ID $tmp903 = *(&local2);
$fn905 $tmp904 = ($fn905) $tmp902->$class->vtable[4];
$tmp904($tmp902, $tmp903);
org$pandalanguage$pandac$IR* $tmp906 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp906));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
return;

}
void org$pandalanguage$pandac$statement$Match$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$ASTNode* param2, org$pandalanguage$pandac$FixedArray* param3, org$pandalanguage$pandac$FixedArray* param4) {

org$pandalanguage$pandac$IR$Value* local0 = NULL;
panda$core$Bit local1;
panda$core$Bit local2;
org$pandalanguage$pandac$ClassDecl* local3 = NULL;
org$pandalanguage$pandac$ClassDecl* local4 = NULL;
org$pandalanguage$pandac$IR$Value* local5 = NULL;
// line 202
org$pandalanguage$pandac$Compiler$TypeContext* $tmp907 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp908 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp907, $tmp908);
org$pandalanguage$pandac$IR$Value* $tmp909 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param2, $tmp907);
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp909));
org$pandalanguage$pandac$IR$Value* $tmp910 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp910));
*(&local0) = $tmp909;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp909));
// unreffing REF($4:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp907));
// unreffing REF($1:org.pandalanguage.pandac.Compiler.TypeContext)
// line 203
org$pandalanguage$pandac$IR$Value* $tmp911 = *(&local0);
panda$core$Bit $tmp912 = panda$core$Bit$init$builtin_bit($tmp911 == NULL);
bool $tmp913 = $tmp912.value;
if ($tmp913) goto block3; else goto block4;
block3:;
*(&local1) = $tmp912;
goto block5;
block4:;
ITable* $tmp914 = ((panda$collections$CollectionView*) param3)->$class->itable;
while ($tmp914->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp914 = $tmp914->next;
}
$fn916 $tmp915 = $tmp914->methods[0];
panda$core$Int64 $tmp917 = $tmp915(((panda$collections$CollectionView*) param3));
panda$core$Int64 $tmp918 = (panda$core$Int64) {0};
panda$core$Bit $tmp919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp917, $tmp918);
bool $tmp920 = $tmp919.value;
if ($tmp920) goto block6; else goto block7;
block6:;
panda$core$Bit $tmp921 = panda$core$Bit$init$builtin_bit(param4 == NULL);
*(&local2) = $tmp921;
goto block8;
block7:;
*(&local2) = $tmp919;
goto block8;
block8:;
panda$core$Bit $tmp922 = *(&local2);
*(&local1) = $tmp922;
goto block5;
block5:;
panda$core$Bit $tmp923 = *(&local1);
bool $tmp924 = $tmp923.value;
if ($tmp924) goto block1; else goto block2;
block1:;
// line 204
org$pandalanguage$pandac$IR$Value* $tmp925 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp925));
// unreffing compiledValue
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;
block2:;
// line 206
org$pandalanguage$pandac$IR$Value* $tmp926 = *(&local0);
panda$core$Bit $tmp927 = panda$core$Bit$init$builtin_bit($tmp926 != NULL);
bool $tmp928 = $tmp927.value;
if ($tmp928) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp929 = (panda$core$Int64) {206};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s930, $tmp929, &$s931);
abort(); // unreachable
block9:;
$fn933 $tmp932 = ($fn933) $tmp926->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp934 = $tmp932($tmp926);
org$pandalanguage$pandac$ClassDecl* $tmp935 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp934);
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp935));
org$pandalanguage$pandac$ClassDecl* $tmp936 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp936));
*(&local3) = $tmp935;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp935));
// unreffing REF($64:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp934));
// unreffing REF($63:org.pandalanguage.pandac.Type)
// line 207
org$pandalanguage$pandac$ClassDecl* $tmp937 = *(&local3);
panda$core$Bit $tmp938 = panda$core$Bit$init$builtin_bit($tmp937 == NULL);
bool $tmp939 = $tmp938.value;
if ($tmp939) goto block11; else goto block12;
block11:;
// line 208
org$pandalanguage$pandac$ClassDecl* $tmp940 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp940));
// unreffing cl
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp941 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp941));
// unreffing compiledValue
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;
block12:;
// line 210
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp942 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp942));
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
// line 211
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 212
org$pandalanguage$pandac$ClassDecl* $tmp943 = *(&local3);
panda$core$Bit $tmp944 = panda$core$Bit$init$builtin_bit($tmp943 != NULL);
bool $tmp945 = $tmp944.value;
if ($tmp945) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp946 = (panda$core$Int64) {212};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s947, $tmp946, &$s948);
abort(); // unreachable
block15:;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp949 = &$tmp943->classKind;
org$pandalanguage$pandac$ClassDecl$Kind $tmp950 = *$tmp949;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp951;
$tmp951 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp951->value = $tmp950;
panda$core$Int64 $tmp952 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp953 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp952);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp954;
$tmp954 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp954->value = $tmp953;
ITable* $tmp955 = ((panda$core$Equatable*) $tmp951)->$class->itable;
while ($tmp955->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp955 = $tmp955->next;
}
$fn957 $tmp956 = $tmp955->methods[0];
panda$core$Bit $tmp958 = $tmp956(((panda$core$Equatable*) $tmp951), ((panda$core$Equatable*) $tmp954));
bool $tmp959 = $tmp958.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp954)));
// unreffing REF($122:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp951)));
// unreffing REF($118:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
if ($tmp959) goto block13; else goto block17;
block13:;
// line 213
org$pandalanguage$pandac$IR$Value* $tmp960 = *(&local0);
panda$core$Bit $tmp961 = panda$core$Bit$init$builtin_bit($tmp960 != NULL);
bool $tmp962 = $tmp961.value;
if ($tmp962) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp963 = (panda$core$Int64) {213};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s964, $tmp963, &$s965);
abort(); // unreachable
block18:;
org$pandalanguage$pandac$IR$Value* $tmp966 = org$pandalanguage$pandac$expression$Dot$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp960, &$s967);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp966));
org$pandalanguage$pandac$IR$Value* $tmp968 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp968));
*(&local5) = $tmp966;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp966));
// unreffing REF($143:org.pandalanguage.pandac.IR.Value?)
// line 215
org$pandalanguage$pandac$ClassDecl* $tmp969 = *(&local3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp969));
org$pandalanguage$pandac$ClassDecl* $tmp970 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp970));
*(&local4) = $tmp969;
goto block14;
block17:;
// line 217
org$pandalanguage$pandac$ClassDecl* $tmp971 = *(&local3);
panda$core$Bit $tmp972 = panda$core$Bit$init$builtin_bit($tmp971 != NULL);
bool $tmp973 = $tmp972.value;
if ($tmp973) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp974 = (panda$core$Int64) {217};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s975, $tmp974, &$s976);
abort(); // unreachable
block22:;
org$pandalanguage$pandac$SymbolTable* $tmp977 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(param0, $tmp971);
org$pandalanguage$pandac$Symbol* $tmp978 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp977, &$s979);
panda$core$Bit $tmp980 = panda$core$Bit$init$builtin_bit($tmp978 == NULL);
bool $tmp981 = $tmp980.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp978));
// unreffing REF($173:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp977));
// unreffing REF($172:org.pandalanguage.pandac.SymbolTable)
if ($tmp981) goto block20; else goto block24;
block20:;
// line 218
$fn983 $tmp982 = ($fn983) param2->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp984 = $tmp982(param2);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp984, &$s985);
// line 219
org$pandalanguage$pandac$IR$Value* $tmp986 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp986));
// unreffing choiceRawValue
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp987 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp987));
// unreffing choiceClass
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp988 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp988));
// unreffing cl
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp989 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp989));
// unreffing compiledValue
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;
block24:;
// line 1
// line 222
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp990 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp990));
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block21;
block21:;
goto block14;
block14:;
// line 224
org$pandalanguage$pandac$IR$Value* $tmp991 = *(&local0);
panda$core$Bit $tmp992 = panda$core$Bit$init$builtin_bit($tmp991 != NULL);
bool $tmp993 = $tmp992.value;
if ($tmp993) goto block25; else goto block26;
block26:;
panda$core$Int64 $tmp994 = (panda$core$Int64) {224};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s995, $tmp994, &$s996);
abort(); // unreachable
block25:;
org$pandalanguage$pandac$ClassDecl* $tmp997 = *(&local4);
org$pandalanguage$pandac$IR$Value* $tmp998 = *(&local5);
org$pandalanguage$pandac$statement$Match$compileChainedIfMatch$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ClassDecl$Q$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0, param1, $tmp991, $tmp997, $tmp998, param3, param4);
org$pandalanguage$pandac$IR$Value* $tmp999 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp999));
// unreffing choiceRawValue
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp1000 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1000));
// unreffing choiceClass
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp1001 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1001));
// unreffing cl
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1002 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1002));
// unreffing compiledValue
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;

}
void org$pandalanguage$pandac$statement$Match$init(org$pandalanguage$pandac$statement$Match* param0) {

return;

}
void org$pandalanguage$pandac$statement$Match$cleanup(org$pandalanguage$pandac$statement$Match* param0) {

// line 23
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}

