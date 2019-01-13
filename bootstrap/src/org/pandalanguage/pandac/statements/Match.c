#include "org/pandalanguage/pandac/statements/Match.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/ChoiceCase.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Panda.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "org/pandalanguage/pandac/IR.h"
#include "org/pandalanguage/pandac/IR/Block/ID.h"
#include "panda/core/Int64.h"
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
#include "org/pandalanguage/pandac/statements/Call.h"
#include "org/pandalanguage/pandac/IR/Statement.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/Compiler/VariableLValue.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/collections/Stack.h"
#include "org/pandalanguage/pandac/Compiler/EnclosingContext.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/Symbol.h"


static panda$core$String $s1;
org$pandalanguage$pandac$statements$Match$class_type org$pandalanguage$pandac$statements$Match$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$statements$Match$cleanup} };

typedef org$pandalanguage$pandac$Type* (*$fn12)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Int64 (*$fn39)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn58)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef panda$core$Int64 (*$fn69)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn110)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef panda$core$Int64 (*$fn117)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn147)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn153)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef panda$core$Int64 (*$fn158)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn173)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn191)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$Position (*$fn221)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Int64 (*$fn231)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn255)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn264)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn288)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn299)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn306)(panda$core$Formattable*, panda$core$String*);
typedef panda$core$Int64 (*$fn319)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn336)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Position (*$fn375)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn385)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn414)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn419)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef panda$core$Int64 (*$fn424)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn453)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn470)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn517)(org$pandalanguage$pandac$Compiler$VariableLValue*, org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Position (*$fn577)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn587)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn617)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn656)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn683)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef panda$collections$Iterator* (*$fn687)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn691)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn696)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn704)(org$pandalanguage$pandac$IR*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn714)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn750)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef panda$collections$Iterator* (*$fn753)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn757)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn762)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn770)(org$pandalanguage$pandac$IR*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn779)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn784)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef panda$core$Int64 (*$fn795)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn807)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn826)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn842)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x73\x2e\x4d\x61\x74\x63\x68", 41, 5007550442110360901, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x61\x74\x63\x68\x20\x63\x68\x6f\x69\x63\x65\x20\x63\x61\x73\x65\x20\x27", 26, 924211577719466455, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x61\x67\x61\x69\x6e\x73\x74\x20\x27", 11, 5504180647906747646, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x61\x74\x63\x68\x20\x63\x68\x6f\x69\x63\x65\x20\x63\x61\x73\x65\x20\x27", 26, 924211577719466455, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x61\x67\x61\x69\x6e\x73\x74\x20", 10, 5899009811946657419, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x70\x61\x6e\x64\x61", 11, -5281504434985492496, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x73\x2e\x4d\x61\x74\x63\x68\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x43\x68\x61\x69\x6e\x65\x64\x49\x66\x4d\x61\x74\x63\x68\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2c\x20\x63\x68\x6f\x69\x63\x65\x43\x6c\x61\x73\x73\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x2c\x20\x63\x68\x6f\x69\x63\x65\x52\x61\x77\x56\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x77\x68\x65\x6e\x73\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x6f\x74\x68\x65\x72\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x29", 479, -4755106415953340438, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20\x65\x6e\x64", 9, 2284522982428118369, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x65\x73\x74\x20\x73\x75\x63\x63\x65\x73\x73", 12, 7036109776132282178, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68", 5, 21953816826, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x75\x63\x74\x75\x72\x69\x6e\x67\x20\x63\x68\x6f\x69\x63\x65\x20\x27\x77\x68\x65\x6e\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x74\x6f\x67\x65\x74\x68\x65\x72\x20\x77\x69\x74\x68\x20", 57, 7310936708811456764, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x20\x27\x77\x68\x65\x6e\x27\x20\x63\x6f\x6d\x70\x61\x72\x69\x73\x6f\x6e\x73", 24, 5365199314206252049, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x27", 8, 21554282788333791, NULL };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20", 2, 14172, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x71\x75\x69\x72\x65\x73\x20", 9, 2339091676660267913, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6d\x65\x6e\x74", 9, 1450721239526715900, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 10, -2438145452310052756, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x69\x73\x20", 5, 14602508524, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x74\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 19, 2848546980520752179, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x70\x61\x6e\x64\x61", 11, -5281504434985492496, NULL };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s721 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x70\x61\x6e\x64\x61", 11, -5281504434985492496, NULL };
static panda$core$String $s831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27\x20\x76\x61\x6c\x75\x65\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x64\x65\x66\x69\x6e\x65\x20\x74\x68\x65\x20\x27\x3d\x27\x20\x6f\x70\x65\x72\x61\x74\x6f\x72", 46, 6331121231047041348, NULL };

panda$core$Bit org$pandalanguage$pandac$statements$Match$checkChoiceMatch$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceCase$Q$org$pandalanguage$pandac$ClassDecl$Q$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$ChoiceCase* param2, org$pandalanguage$pandac$ClassDecl* param3, org$pandalanguage$pandac$IR$Value* param4) {

// line 25
panda$core$Bit $tmp2 = panda$core$Bit$init$builtin_bit(param2 == NULL);
bool $tmp3 = $tmp2.value;
if ($tmp3) goto block1; else goto block2;
block1:;
// line 26
panda$core$Bit $tmp4 = panda$core$Bit$init$builtin_bit(false);
return $tmp4;
block2:;
// line 28
panda$core$Bit $tmp5 = panda$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block3; else goto block4;
block3:;
// line 29
panda$core$String* $tmp7 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s8, ((panda$core$Object*) param2));
panda$core$String* $tmp9 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp7, &$s10);
$fn12 $tmp11 = ($fn12) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp13 = $tmp11(param4);
panda$core$String* $tmp14 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp9, ((panda$core$Object*) $tmp13));
panda$core$String* $tmp15 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp14, &$s16);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
// unreffing REF($21:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
// unreffing REF($20:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
// unreffing REF($18:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
// unreffing REF($16:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
// unreffing REF($15:panda.core.String)
// line 30
panda$core$Bit $tmp17 = panda$core$Bit$init$builtin_bit(false);
return $tmp17;
block4:;
// line 32
panda$core$Weak** $tmp18 = &param2->owner;
panda$core$Weak* $tmp19 = *$tmp18;
panda$core$Object* $tmp20 = panda$core$Weak$get$R$panda$core$Weak$T($tmp19);
bool $tmp21 = ((org$pandalanguage$pandac$ClassDecl*) $tmp20) != param3;
panda$core$Bit $tmp22 = panda$core$Bit$init$builtin_bit($tmp21);
bool $tmp23 = $tmp22.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp20);
// unreffing REF($46:panda.core.Weak.T)
if ($tmp23) goto block5; else goto block6;
block5:;
// line 33
panda$core$String* $tmp24 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s25, ((panda$core$Object*) param2));
panda$core$String* $tmp26 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp24, &$s27);
panda$core$String** $tmp28 = &param3->name;
panda$core$String* $tmp29 = *$tmp28;
panda$core$String* $tmp30 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s31, $tmp29);
panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp30, &$s33);
panda$core$String* $tmp34 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp26, $tmp32);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// unreffing REF($64:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
// unreffing REF($63:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// unreffing REF($62:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
// unreffing REF($58:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
// unreffing REF($57:panda.core.String)
// line 35
panda$core$Bit $tmp35 = panda$core$Bit$init$builtin_bit(false);
return $tmp35;
block6:;
// line 37
panda$core$Bit $tmp36 = panda$core$Bit$init$builtin_bit(true);
return $tmp36;

}
void org$pandalanguage$pandac$statements$Match$compileChainedIfMatch$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ClassDecl$Q$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$ClassDecl* param3, org$pandalanguage$pandac$IR$Value* param4, org$pandalanguage$pandac$FixedArray* param5, org$pandalanguage$pandac$FixedArray* param6) {

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
panda$collections$Array* local33 = NULL;
org$pandalanguage$pandac$ASTNode* local34 = NULL;
org$pandalanguage$pandac$Compiler$AutoScope* local35 = NULL;
org$pandalanguage$pandac$ASTNode* local36 = NULL;
ITable* $tmp37 = ((panda$collections$CollectionView*) param5)->$class->itable;
while ($tmp37->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp37 = $tmp37->next;
}
$fn39 $tmp38 = $tmp37->methods[0];
panda$core$Int64 $tmp40 = $tmp38(((panda$collections$CollectionView*) param5));
panda$core$Int64 $tmp41 = (panda$core$Int64) {0};
int64_t $tmp42 = $tmp40.value;
int64_t $tmp43 = $tmp41.value;
bool $tmp44 = $tmp42 > $tmp43;
panda$core$Bit $tmp45 = (panda$core$Bit) {$tmp44};
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block1; else goto block2;
block1:;
*(&local0) = $tmp45;
goto block3;
block2:;
panda$core$Bit $tmp47 = panda$core$Bit$init$builtin_bit(param6 != NULL);
*(&local0) = $tmp47;
goto block3;
block3:;
panda$core$Bit $tmp48 = *(&local0);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp50 = (panda$core$Int64) {43};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s51, $tmp50, &$s52);
abort(); // unreachable
block4:;
// line 46
org$pandalanguage$pandac$IR** $tmp53 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp54 = *$tmp53;
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
org$pandalanguage$pandac$IR* $tmp55 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
*(&local1) = $tmp54;
// line 47
org$pandalanguage$pandac$IR* $tmp56 = *(&local1);
$fn58 $tmp57 = ($fn58) $tmp56->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp59 = $tmp57($tmp56, &$s60);
*(&local2) = $tmp59;
// line 48
org$pandalanguage$pandac$IR* $tmp61 = *(&local1);
org$pandalanguage$pandac$IR$Block** $tmp62 = &$tmp61->currentBlock;
org$pandalanguage$pandac$IR$Block* $tmp63 = *$tmp62;
org$pandalanguage$pandac$IR$Block$ID* $tmp64 = &$tmp63->id;
org$pandalanguage$pandac$IR$Block$ID $tmp65 = *$tmp64;
*(&local3) = $tmp65;
// line 49
panda$core$Int64 $tmp66 = (panda$core$Int64) {0};
ITable* $tmp67 = ((panda$collections$CollectionView*) param5)->$class->itable;
while ($tmp67->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp67 = $tmp67->next;
}
$fn69 $tmp68 = $tmp67->methods[0];
panda$core$Int64 $tmp70 = $tmp68(((panda$collections$CollectionView*) param5));
panda$core$Bit $tmp71 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp72 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp66, $tmp70, $tmp71);
panda$core$Int64 $tmp73 = $tmp72.min;
*(&local4) = $tmp73;
panda$core$Int64 $tmp74 = $tmp72.max;
panda$core$Bit $tmp75 = $tmp72.inclusive;
bool $tmp76 = $tmp75.value;
panda$core$Int64 $tmp77 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp78 = panda$core$Int64$convert$R$panda$core$UInt64($tmp77);
if ($tmp76) goto block9; else goto block10;
block9:;
int64_t $tmp79 = $tmp73.value;
int64_t $tmp80 = $tmp74.value;
bool $tmp81 = $tmp79 <= $tmp80;
panda$core$Bit $tmp82 = (panda$core$Bit) {$tmp81};
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block6; else goto block7;
block10:;
int64_t $tmp84 = $tmp73.value;
int64_t $tmp85 = $tmp74.value;
bool $tmp86 = $tmp84 < $tmp85;
panda$core$Bit $tmp87 = (panda$core$Bit) {$tmp86};
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block6; else goto block7;
block6:;
// line 50
panda$core$Int64 $tmp89 = *(&local4);
panda$core$Object* $tmp90 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T(param5, $tmp89);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp90)));
org$pandalanguage$pandac$ASTNode* $tmp91 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) $tmp90);
panda$core$Panda$unref$panda$core$Object$Q($tmp90);
// unreffing REF($74:org.pandalanguage.pandac.FixedArray.T)
// line 51
org$pandalanguage$pandac$ASTNode* $tmp92 = *(&local5);
panda$core$Int64* $tmp93 = &$tmp92->$rawValue;
panda$core$Int64 $tmp94 = *$tmp93;
panda$core$Int64 $tmp95 = (panda$core$Int64) {51};
panda$core$Bit $tmp96 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp94, $tmp95);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp98 = (org$pandalanguage$pandac$Position*) ($tmp92->$data + 0);
org$pandalanguage$pandac$Position $tmp99 = *$tmp98;
*(&local6) = $tmp99;
org$pandalanguage$pandac$FixedArray** $tmp100 = (org$pandalanguage$pandac$FixedArray**) ($tmp92->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp101 = *$tmp100;
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
org$pandalanguage$pandac$FixedArray* $tmp102 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
*(&local7) = $tmp101;
org$pandalanguage$pandac$FixedArray** $tmp103 = (org$pandalanguage$pandac$FixedArray**) ($tmp92->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp104 = *$tmp103;
*(&local8) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
org$pandalanguage$pandac$FixedArray* $tmp105 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
*(&local8) = $tmp104;
// line 1
// line 54
org$pandalanguage$pandac$Compiler$AutoScope* $tmp106 = (org$pandalanguage$pandac$Compiler$AutoScope*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoScope$class);
org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler($tmp106, param0);
*(&local9) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
org$pandalanguage$pandac$Compiler$AutoScope* $tmp107 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
*(&local9) = $tmp106;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
// unreffing REF($117:org.pandalanguage.pandac.Compiler.AutoScope)
// line 55
org$pandalanguage$pandac$IR* $tmp108 = *(&local1);
$fn110 $tmp109 = ($fn110) $tmp108->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp111 = $tmp109($tmp108, &$s112);
*(&local10) = $tmp111;
// line 56
panda$core$Int64 $tmp113 = (panda$core$Int64) {0};
org$pandalanguage$pandac$FixedArray* $tmp114 = *(&local7);
ITable* $tmp115 = ((panda$collections$CollectionView*) $tmp114)->$class->itable;
while ($tmp115->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp115 = $tmp115->next;
}
$fn117 $tmp116 = $tmp115->methods[0];
panda$core$Int64 $tmp118 = $tmp116(((panda$collections$CollectionView*) $tmp114));
panda$core$Bit $tmp119 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp120 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp113, $tmp118, $tmp119);
panda$core$Int64 $tmp121 = $tmp120.min;
*(&local11) = $tmp121;
panda$core$Int64 $tmp122 = $tmp120.max;
panda$core$Bit $tmp123 = $tmp120.inclusive;
bool $tmp124 = $tmp123.value;
panda$core$Int64 $tmp125 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp126 = panda$core$Int64$convert$R$panda$core$UInt64($tmp125);
if ($tmp124) goto block17; else goto block18;
block17:;
int64_t $tmp127 = $tmp121.value;
int64_t $tmp128 = $tmp122.value;
bool $tmp129 = $tmp127 <= $tmp128;
panda$core$Bit $tmp130 = (panda$core$Bit) {$tmp129};
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block14; else goto block15;
block18:;
int64_t $tmp132 = $tmp121.value;
int64_t $tmp133 = $tmp122.value;
bool $tmp134 = $tmp132 < $tmp133;
panda$core$Bit $tmp135 = (panda$core$Bit) {$tmp134};
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block14; else goto block15;
block14:;
// line 57
org$pandalanguage$pandac$IR$Block$ID $tmp137 = *(&local3);
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp138;
$tmp138 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp138->value = $tmp137;
org$pandalanguage$pandac$IR* $tmp139 = *(&local1);
org$pandalanguage$pandac$IR$Block** $tmp140 = &$tmp139->currentBlock;
org$pandalanguage$pandac$IR$Block* $tmp141 = *$tmp140;
org$pandalanguage$pandac$IR$Block$ID* $tmp142 = &$tmp141->id;
org$pandalanguage$pandac$IR$Block$ID $tmp143 = *$tmp142;
org$pandalanguage$pandac$IR$Block$ID$wrapper* $tmp144;
$tmp144 = (org$pandalanguage$pandac$IR$Block$ID$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$IR$Block$ID$wrapperclass);
$tmp144->value = $tmp143;
ITable* $tmp145 = ((panda$core$Equatable*) $tmp138)->$class->itable;
while ($tmp145->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp145 = $tmp145->next;
}
$fn147 $tmp146 = $tmp145->methods[1];
panda$core$Bit $tmp148 = $tmp146(((panda$core$Equatable*) $tmp138), ((panda$core$Equatable*) $tmp144));
bool $tmp149 = $tmp148.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp144)));
// unreffing REF($171:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp138)));
// unreffing REF($164:panda.core.Equatable<org.pandalanguage.pandac.IR.Block.ID>)
if ($tmp149) goto block19; else goto block20;
block19:;
// line 58
org$pandalanguage$pandac$IR* $tmp150 = *(&local1);
org$pandalanguage$pandac$IR$Block$ID $tmp151 = *(&local3);
$fn153 $tmp152 = ($fn153) $tmp150->$class->vtable[4];
$tmp152($tmp150, $tmp151);
goto block20;
block20:;
// line 60
panda$core$Int64 $tmp154 = *(&local11);
org$pandalanguage$pandac$FixedArray* $tmp155 = *(&local7);
ITable* $tmp156 = ((panda$collections$CollectionView*) $tmp155)->$class->itable;
while ($tmp156->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp156 = $tmp156->next;
}
$fn158 $tmp157 = $tmp156->methods[0];
panda$core$Int64 $tmp159 = $tmp157(((panda$collections$CollectionView*) $tmp155));
panda$core$Int64 $tmp160 = (panda$core$Int64) {1};
int64_t $tmp161 = $tmp159.value;
int64_t $tmp162 = $tmp160.value;
int64_t $tmp163 = $tmp161 - $tmp162;
panda$core$Int64 $tmp164 = (panda$core$Int64) {$tmp163};
int64_t $tmp165 = $tmp154.value;
int64_t $tmp166 = $tmp164.value;
bool $tmp167 = $tmp165 < $tmp166;
panda$core$Bit $tmp168 = (panda$core$Bit) {$tmp167};
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block23; else goto block24;
block23:;
*(&local13) = $tmp168;
goto block25;
block24:;
panda$core$Int64 $tmp170 = *(&local4);
ITable* $tmp171 = ((panda$collections$CollectionView*) param5)->$class->itable;
while ($tmp171->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp171 = $tmp171->next;
}
$fn173 $tmp172 = $tmp171->methods[0];
panda$core$Int64 $tmp174 = $tmp172(((panda$collections$CollectionView*) param5));
panda$core$Int64 $tmp175 = (panda$core$Int64) {1};
int64_t $tmp176 = $tmp174.value;
int64_t $tmp177 = $tmp175.value;
int64_t $tmp178 = $tmp176 - $tmp177;
panda$core$Int64 $tmp179 = (panda$core$Int64) {$tmp178};
int64_t $tmp180 = $tmp170.value;
int64_t $tmp181 = $tmp179.value;
bool $tmp182 = $tmp180 < $tmp181;
panda$core$Bit $tmp183 = (panda$core$Bit) {$tmp182};
*(&local13) = $tmp183;
goto block25;
block25:;
panda$core$Bit $tmp184 = *(&local13);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block26; else goto block27;
block26:;
*(&local12) = $tmp184;
goto block28;
block27:;
panda$core$Bit $tmp186 = panda$core$Bit$init$builtin_bit(param6 != NULL);
*(&local12) = $tmp186;
goto block28;
block28:;
panda$core$Bit $tmp187 = *(&local12);
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block21; else goto block29;
block21:;
// line 61
org$pandalanguage$pandac$IR* $tmp189 = *(&local1);
$fn191 $tmp190 = ($fn191) $tmp189->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp192 = $tmp190($tmp189, &$s193);
*(&local3) = $tmp192;
goto block22;
block29:;
// line 1
// line 64
org$pandalanguage$pandac$IR$Block$ID $tmp194 = *(&local2);
*(&local3) = $tmp194;
goto block22;
block22:;
// line 66
org$pandalanguage$pandac$FixedArray* $tmp195 = *(&local7);
panda$core$Int64 $tmp196 = *(&local11);
panda$core$Object* $tmp197 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp195, $tmp196);
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp197)));
org$pandalanguage$pandac$ASTNode* $tmp198 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) $tmp197);
panda$core$Panda$unref$panda$core$Object$Q($tmp197);
// unreffing REF($249:org.pandalanguage.pandac.FixedArray.T)
// line 67
org$pandalanguage$pandac$ASTNode* $tmp199 = *(&local14);
panda$core$Int64* $tmp200 = &$tmp199->$rawValue;
panda$core$Int64 $tmp201 = *$tmp200;
panda$core$Int64 $tmp202 = (panda$core$Int64) {9};
panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp201, $tmp202);
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block31; else goto block30;
block31:;
org$pandalanguage$pandac$Position* $tmp205 = (org$pandalanguage$pandac$Position*) ($tmp199->$data + 0);
org$pandalanguage$pandac$Position $tmp206 = *$tmp205;
*(&local15) = $tmp206;
org$pandalanguage$pandac$ASTNode** $tmp207 = (org$pandalanguage$pandac$ASTNode**) ($tmp199->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp208 = *$tmp207;
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
org$pandalanguage$pandac$ASTNode* $tmp209 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp209));
*(&local16) = $tmp208;
org$pandalanguage$pandac$FixedArray** $tmp210 = (org$pandalanguage$pandac$FixedArray**) ($tmp199->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp211 = *$tmp210;
*(&local17) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
org$pandalanguage$pandac$FixedArray* $tmp212 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp212));
*(&local17) = $tmp211;
// line 69
org$pandalanguage$pandac$ASTNode* $tmp213 = *(&local16);
org$pandalanguage$pandac$Pair* $tmp214 = org$pandalanguage$pandac$Compiler$getChoiceCase$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$Type$Corg$pandalanguage$pandac$ChoiceCase$GT$Q(param0, $tmp213);
*(&local18) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
org$pandalanguage$pandac$Pair* $tmp215 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp215));
*(&local18) = $tmp214;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
// unreffing REF($292:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.Type, org.pandalanguage.pandac.ChoiceCase>?)
// line 70
org$pandalanguage$pandac$Pair* $tmp216 = *(&local18);
panda$core$Bit $tmp217 = panda$core$Bit$init$builtin_bit($tmp216 != NULL);
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block32; else goto block33;
block32:;
// line 71
org$pandalanguage$pandac$ASTNode* $tmp219 = *(&local16);
$fn221 $tmp220 = ($fn221) $tmp219->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp222 = $tmp220($tmp219);
org$pandalanguage$pandac$Pair* $tmp223 = *(&local18);
panda$core$Object** $tmp224 = &$tmp223->second;
panda$core$Object* $tmp225 = *$tmp224;
panda$core$Bit $tmp226 = org$pandalanguage$pandac$statements$Match$checkChoiceMatch$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceCase$Q$org$pandalanguage$pandac$ClassDecl$Q$org$pandalanguage$pandac$IR$Value$R$panda$core$Bit(param0, $tmp222, ((org$pandalanguage$pandac$ChoiceCase*) $tmp225), param3, param2);
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block34; else goto block35;
block34:;
// line 73
org$pandalanguage$pandac$FixedArray* $tmp228 = *(&local7);
ITable* $tmp229 = ((panda$collections$CollectionView*) $tmp228)->$class->itable;
while ($tmp229->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp229 = $tmp229->next;
}
$fn231 $tmp230 = $tmp229->methods[0];
panda$core$Int64 $tmp232 = $tmp230(((panda$collections$CollectionView*) $tmp228));
panda$core$Int64 $tmp233 = (panda$core$Int64) {1};
int64_t $tmp234 = $tmp232.value;
int64_t $tmp235 = $tmp233.value;
bool $tmp236 = $tmp234 != $tmp235;
panda$core$Bit $tmp237 = (panda$core$Bit) {$tmp236};
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block36; else goto block37;
block36:;
// line 74
org$pandalanguage$pandac$Position $tmp239 = *(&local15);
panda$core$String* $tmp240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s241, &$s242);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp239, $tmp240);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
// unreffing REF($336:panda.core.String)
// line 77
org$pandalanguage$pandac$Pair* $tmp243 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
// unreffing cc
*(&local18) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp244 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp244));
// unreffing args
*(&local17) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp245 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
// unreffing base
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp246 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp246));
// unreffing t
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp247 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
// unreffing auto
*(&local9) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp248 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp248));
// unreffing statements
*(&local8) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp249 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp249));
// unreffing tests
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp250 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$IR* $tmp251 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp251));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block37:;
// line 79
org$pandalanguage$pandac$FixedArray* $tmp252 = *(&local17);
ITable* $tmp253 = ((panda$collections$CollectionView*) $tmp252)->$class->itable;
while ($tmp253->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp253 = $tmp253->next;
}
$fn255 $tmp254 = $tmp253->methods[0];
panda$core$Int64 $tmp256 = $tmp254(((panda$collections$CollectionView*) $tmp252));
org$pandalanguage$pandac$Pair* $tmp257 = *(&local18);
panda$core$Object** $tmp258 = &$tmp257->second;
panda$core$Object* $tmp259 = *$tmp258;
panda$collections$Array** $tmp260 = &((org$pandalanguage$pandac$ChoiceCase*) $tmp259)->fields;
panda$collections$Array* $tmp261 = *$tmp260;
ITable* $tmp262 = ((panda$collections$CollectionView*) $tmp261)->$class->itable;
while ($tmp262->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp262 = $tmp262->next;
}
$fn264 $tmp263 = $tmp262->methods[0];
panda$core$Int64 $tmp265 = $tmp263(((panda$collections$CollectionView*) $tmp261));
int64_t $tmp266 = $tmp256.value;
int64_t $tmp267 = $tmp265.value;
bool $tmp268 = $tmp266 != $tmp267;
panda$core$Bit $tmp269 = (panda$core$Bit) {$tmp268};
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block38; else goto block39;
block38:;
// line 80
org$pandalanguage$pandac$Position $tmp271 = *(&local15);
org$pandalanguage$pandac$Pair* $tmp272 = *(&local18);
panda$core$Object** $tmp273 = &$tmp272->second;
panda$core$Object* $tmp274 = *$tmp273;
panda$core$String* $tmp275 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s276, ((panda$core$Object*) ((org$pandalanguage$pandac$ChoiceCase*) $tmp274)));
panda$core$String* $tmp277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp275, &$s278);
panda$core$String* $tmp279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp277, &$s280);
org$pandalanguage$pandac$Pair* $tmp281 = *(&local18);
panda$core$Object** $tmp282 = &$tmp281->second;
panda$core$Object* $tmp283 = *$tmp282;
panda$collections$Array** $tmp284 = &((org$pandalanguage$pandac$ChoiceCase*) $tmp283)->fields;
panda$collections$Array* $tmp285 = *$tmp284;
ITable* $tmp286 = ((panda$collections$CollectionView*) $tmp285)->$class->itable;
while ($tmp286->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp286 = $tmp286->next;
}
$fn288 $tmp287 = $tmp286->methods[0];
panda$core$Int64 $tmp289 = $tmp287(((panda$collections$CollectionView*) $tmp285));
panda$core$Int64$wrapper* $tmp290;
$tmp290 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp290->value = $tmp289;
panda$core$String* $tmp291 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp279, ((panda$core$Object*) $tmp290));
org$pandalanguage$pandac$Pair* $tmp292 = *(&local18);
panda$core$Object** $tmp293 = &$tmp292->second;
panda$core$Object* $tmp294 = *$tmp293;
panda$collections$Array** $tmp295 = &((org$pandalanguage$pandac$ChoiceCase*) $tmp294)->fields;
panda$collections$Array* $tmp296 = *$tmp295;
ITable* $tmp297 = ((panda$collections$CollectionView*) $tmp296)->$class->itable;
while ($tmp297->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp297 = $tmp297->next;
}
$fn299 $tmp298 = $tmp297->methods[0];
panda$core$Int64 $tmp300 = $tmp298(((panda$collections$CollectionView*) $tmp296));
panda$core$Int64 $tmp301 = (panda$core$Int64) {1};
panda$core$Bit $tmp302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp300, $tmp301);
panda$core$Bit$wrapper* $tmp303;
$tmp303 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp303->value = $tmp302;
ITable* $tmp304 = ((panda$core$Formattable*) $tmp303)->$class->itable;
while ($tmp304->$class != (panda$core$Class*) &panda$core$Formattable$class) {
    $tmp304 = $tmp304->next;
}
$fn306 $tmp305 = $tmp304->methods[0];
panda$core$String* $tmp307 = $tmp305(((panda$core$Formattable*) $tmp303), &$s308);
panda$core$String* $tmp309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s310, $tmp307);
panda$core$String* $tmp311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp309, &$s312);
panda$core$String* $tmp313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp291, $tmp311);
panda$core$String* $tmp314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp313, &$s315);
org$pandalanguage$pandac$FixedArray* $tmp316 = *(&local17);
ITable* $tmp317 = ((panda$collections$CollectionView*) $tmp316)->$class->itable;
while ($tmp317->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp317 = $tmp317->next;
}
$fn319 $tmp318 = $tmp317->methods[0];
panda$core$Int64 $tmp320 = $tmp318(((panda$collections$CollectionView*) $tmp316));
panda$core$Int64$wrapper* $tmp321;
$tmp321 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp321->value = $tmp320;
panda$core$String* $tmp322 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp314, ((panda$core$Object*) $tmp321));
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp271, $tmp322);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
// unreffing REF($456:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp321));
// unreffing REF($455:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
// unreffing REF($450:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp313));
// unreffing REF($449:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
// unreffing REF($448:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
// unreffing REF($447:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
// unreffing REF($446:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Formattable*) $tmp303)));
// unreffing REF($444:panda.core.Formattable)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp291));
// unreffing REF($431:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp290));
// unreffing REF($430:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
// unreffing REF($419:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp277));
// unreffing REF($418:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
// unreffing REF($417:panda.core.String)
// line 84
org$pandalanguage$pandac$Pair* $tmp323 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp323));
// unreffing cc
*(&local18) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp324 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp324));
// unreffing args
*(&local17) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp325 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
// unreffing base
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp326 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp326));
// unreffing t
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp327 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
// unreffing auto
*(&local9) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp328 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp328));
// unreffing statements
*(&local8) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp329 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp329));
// unreffing tests
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp330 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$IR* $tmp331 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block39:;
// line 86
panda$core$Bit $tmp332 = panda$core$Bit$init$builtin_bit(param4 == NULL);
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block40; else goto block41;
block40:;
// line 87
org$pandalanguage$pandac$Position $tmp334 = *(&local15);
$fn336 $tmp335 = ($fn336) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp337 = $tmp335(param2);
panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s339, ((panda$core$Object*) $tmp337));
panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp338, &$s341);
panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp340, &$s343);
org$pandalanguage$pandac$Pair* $tmp344 = *(&local18);
panda$core$Object** $tmp345 = &$tmp344->second;
panda$core$Object* $tmp346 = *$tmp345;
panda$core$Weak** $tmp347 = &((org$pandalanguage$pandac$ChoiceCase*) $tmp346)->owner;
panda$core$Weak* $tmp348 = *$tmp347;
panda$core$Object* $tmp349 = panda$core$Weak$get$R$panda$core$Weak$T($tmp348);
panda$core$String** $tmp350 = &((org$pandalanguage$pandac$ClassDecl*) $tmp349)->name;
panda$core$String* $tmp351 = *$tmp350;
panda$core$String* $tmp352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s353, $tmp351);
panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp352, &$s355);
panda$core$String* $tmp356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp342, $tmp354);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp334, $tmp356);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp356));
// unreffing REF($571:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp354));
// unreffing REF($570:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
// unreffing REF($569:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp349);
// unreffing REF($565:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
// unreffing REF($556:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
// unreffing REF($555:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp338));
// unreffing REF($554:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
// unreffing REF($552:org.pandalanguage.pandac.Type)
// line 90
org$pandalanguage$pandac$Pair* $tmp357 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp357));
// unreffing cc
*(&local18) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp358 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
// unreffing args
*(&local17) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp359 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
// unreffing base
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp360 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp360));
// unreffing t
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp361 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp361));
// unreffing auto
*(&local9) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp362 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
// unreffing statements
*(&local8) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp363 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp363));
// unreffing tests
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp364 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$IR* $tmp365 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp365));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block41:;
// line 92
*(&local19) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 1
// line 94
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp366 = (org$pandalanguage$pandac$Compiler$AutoUnrefs*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoUnrefs$class);
org$pandalanguage$pandac$Compiler$AutoUnrefs$init$org$pandalanguage$pandac$Compiler($tmp366, param0);
*(&local20) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp367 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp367));
*(&local20) = $tmp366;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
// unreffing REF($648:org.pandalanguage.pandac.Compiler.AutoUnrefs)
// line 95
panda$collections$Array* $tmp368 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp368);
*(&local21) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp368));
panda$collections$Array* $tmp369 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp369));
*(&local21) = $tmp368;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp368));
// unreffing REF($661:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 96
panda$collections$Array* $tmp370 = *(&local21);
org$pandalanguage$pandac$ASTNode* $tmp371 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp372 = (panda$core$Int64) {25};
org$pandalanguage$pandac$ASTNode* $tmp373 = *(&local16);
$fn375 $tmp374 = ($fn375) $tmp373->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp376 = $tmp374($tmp373);
org$pandalanguage$pandac$Pair* $tmp377 = *(&local18);
panda$core$Object** $tmp378 = &$tmp377->second;
panda$core$Object* $tmp379 = *$tmp378;
panda$core$Int64* $tmp380 = &((org$pandalanguage$pandac$ChoiceCase*) $tmp379)->rawValue;
panda$core$Int64 $tmp381 = *$tmp380;
panda$core$UInt64 $tmp382 = panda$core$Int64$convert$R$panda$core$UInt64($tmp381);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp371, $tmp372, $tmp376, $tmp382);
panda$collections$Array$add$panda$collections$Array$T($tmp370, ((panda$core$Object*) $tmp371));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp371));
// unreffing REF($677:org.pandalanguage.pandac.ASTNode)
// line 98
org$pandalanguage$pandac$ASTNode* $tmp383 = *(&local16);
$fn385 $tmp384 = ($fn385) $tmp383->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp386 = $tmp384($tmp383);
panda$collections$Array* $tmp387 = *(&local21);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp388 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp389 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp390 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp388, $tmp389, $tmp390);
org$pandalanguage$pandac$IR$Value* $tmp391 = org$pandalanguage$pandac$statements$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp386, param4, &$s392, ((panda$collections$ListView*) $tmp387), $tmp388);
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp391));
org$pandalanguage$pandac$IR$Value* $tmp393 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp393));
*(&local22) = $tmp391;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp391));
// unreffing REF($707:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp390));
// unreffing REF($705:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp388));
// unreffing REF($703:org.pandalanguage.pandac.Compiler.TypeContext)
// line 101
org$pandalanguage$pandac$IR$Value* $tmp394 = *(&local22);
panda$core$Bit $tmp395 = panda$core$Bit$init$builtin_bit($tmp394 != NULL);
bool $tmp396 = $tmp395.value;
if ($tmp396) goto block42; else goto block43;
block43:;
panda$core$Int64 $tmp397 = (panda$core$Int64) {101};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s398, $tmp397);
abort(); // unreachable
block42:;
// line 102
org$pandalanguage$pandac$Position $tmp399 = *(&local15);
org$pandalanguage$pandac$IR$Value* $tmp400 = *(&local22);
org$pandalanguage$pandac$IR$Value* $tmp401 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, $tmp399, $tmp400);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
org$pandalanguage$pandac$IR$Value* $tmp402 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
*(&local19) = $tmp401;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
// unreffing REF($737:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$IR$Value* $tmp403 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
// unreffing test
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp404 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp404));
// unreffing eqArgs
*(&local21) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp405 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
// unreffing unrefs
*(&local20) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
// line 105
org$pandalanguage$pandac$IR* $tmp406 = *(&local1);
org$pandalanguage$pandac$IR$Statement* $tmp407 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp408 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Position $tmp409 = *(&local15);
org$pandalanguage$pandac$IR$Value* $tmp410 = *(&local19);
org$pandalanguage$pandac$IR$Block$ID $tmp411 = *(&local10);
org$pandalanguage$pandac$IR$Block$ID $tmp412 = *(&local3);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp407, $tmp408, $tmp409, $tmp410, $tmp411, $tmp412);
$fn414 $tmp413 = ($fn414) $tmp406->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp415 = $tmp413($tmp406, $tmp407);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
// unreffing REF($764:org.pandalanguage.pandac.IR.Statement)
// line 107
org$pandalanguage$pandac$IR* $tmp416 = *(&local1);
org$pandalanguage$pandac$IR$Block$ID $tmp417 = *(&local10);
$fn419 $tmp418 = ($fn419) $tmp416->$class->vtable[4];
$tmp418($tmp416, $tmp417);
// line 108
panda$core$Int64 $tmp420 = (panda$core$Int64) {0};
org$pandalanguage$pandac$FixedArray* $tmp421 = *(&local17);
ITable* $tmp422 = ((panda$collections$CollectionView*) $tmp421)->$class->itable;
while ($tmp422->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp422 = $tmp422->next;
}
$fn424 $tmp423 = $tmp422->methods[0];
panda$core$Int64 $tmp425 = $tmp423(((panda$collections$CollectionView*) $tmp421));
panda$core$Bit $tmp426 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp427 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp420, $tmp425, $tmp426);
panda$core$Int64 $tmp428 = $tmp427.min;
*(&local23) = $tmp428;
panda$core$Int64 $tmp429 = $tmp427.max;
panda$core$Bit $tmp430 = $tmp427.inclusive;
bool $tmp431 = $tmp430.value;
panda$core$Int64 $tmp432 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp433 = panda$core$Int64$convert$R$panda$core$UInt64($tmp432);
if ($tmp431) goto block47; else goto block48;
block47:;
int64_t $tmp434 = $tmp428.value;
int64_t $tmp435 = $tmp429.value;
bool $tmp436 = $tmp434 <= $tmp435;
panda$core$Bit $tmp437 = (panda$core$Bit) {$tmp436};
bool $tmp438 = $tmp437.value;
if ($tmp438) goto block44; else goto block45;
block48:;
int64_t $tmp439 = $tmp428.value;
int64_t $tmp440 = $tmp429.value;
bool $tmp441 = $tmp439 < $tmp440;
panda$core$Bit $tmp442 = (panda$core$Bit) {$tmp441};
bool $tmp443 = $tmp442.value;
if ($tmp443) goto block44; else goto block45;
block44:;
// line 109
org$pandalanguage$pandac$IR* $tmp444 = *(&local1);
org$pandalanguage$pandac$IR$Statement* $tmp445 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp446 = (panda$core$Int64) {4};
org$pandalanguage$pandac$Position $tmp447 = *(&local15);
org$pandalanguage$pandac$Pair* $tmp448 = *(&local18);
panda$core$Object** $tmp449 = &$tmp448->second;
panda$core$Object* $tmp450 = *$tmp449;
panda$core$Int64 $tmp451 = *(&local23);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64($tmp445, $tmp446, $tmp447, param2, ((org$pandalanguage$pandac$ChoiceCase*) $tmp450), $tmp451);
$fn453 $tmp452 = ($fn453) $tmp444->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp454 = $tmp452($tmp444, $tmp445);
*(&local24) = $tmp454;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp445));
// unreffing REF($811:org.pandalanguage.pandac.IR.Statement)
// line 112
org$pandalanguage$pandac$IR* $tmp455 = *(&local1);
org$pandalanguage$pandac$IR$Statement* $tmp456 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp457 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Position $tmp458 = *(&local15);
org$pandalanguage$pandac$IR$Value* $tmp459 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp460 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp461 = *(&local24);
org$pandalanguage$pandac$Pair* $tmp462 = *(&local18);
panda$core$Object** $tmp463 = &$tmp462->second;
panda$core$Object* $tmp464 = *$tmp463;
panda$collections$Array** $tmp465 = &((org$pandalanguage$pandac$ChoiceCase*) $tmp464)->fields;
panda$collections$Array* $tmp466 = *$tmp465;
panda$core$Int64 $tmp467 = *(&local23);
panda$core$Object* $tmp468 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp466, $tmp467);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp459, $tmp460, $tmp461, ((org$pandalanguage$pandac$Type*) $tmp468));
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp456, $tmp457, $tmp458, $tmp459);
$fn470 $tmp469 = ($fn470) $tmp455->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp471 = $tmp469($tmp455, $tmp456);
*(&local25) = $tmp471;
panda$core$Panda$unref$panda$core$Object$Q($tmp468);
// unreffing REF($844:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
// unreffing REF($832:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp456));
// unreffing REF($829:org.pandalanguage.pandac.IR.Statement)
// line 114
org$pandalanguage$pandac$FixedArray* $tmp472 = *(&local17);
panda$core$Int64 $tmp473 = *(&local23);
panda$core$Object* $tmp474 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp472, $tmp473);
panda$core$String* $tmp475 = org$pandalanguage$pandac$Compiler$getText$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp474));
panda$core$Bit $tmp476 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp475, &$s477);
bool $tmp478 = $tmp476.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp475));
// unreffing REF($866:panda.core.String?)
panda$core$Panda$unref$panda$core$Object$Q($tmp474);
// unreffing REF($864:org.pandalanguage.pandac.FixedArray.T)
if ($tmp478) goto block49; else goto block50;
block49:;
// line 115
goto block46;
block50:;
// line 117
*(&local26) = ((org$pandalanguage$pandac$Pair*) NULL);
// line 1
// line 119
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp479 = (org$pandalanguage$pandac$Compiler$AutoUnrefs*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoUnrefs$class);
org$pandalanguage$pandac$Compiler$AutoUnrefs$init$org$pandalanguage$pandac$Compiler($tmp479, param0);
*(&local27) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp479));
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp480 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp480));
*(&local27) = $tmp479;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp479));
// unreffing REF($883:org.pandalanguage.pandac.Compiler.AutoUnrefs)
// line 120
org$pandalanguage$pandac$FixedArray* $tmp481 = *(&local17);
panda$core$Int64 $tmp482 = *(&local23);
panda$core$Object* $tmp483 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp481, $tmp482);
panda$core$Int64 $tmp484 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Variable$Kind $tmp485 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp484);
org$pandalanguage$pandac$ASTNode* $tmp486 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp487 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position $tmp488 = *(&local15);
org$pandalanguage$pandac$IR$Value* $tmp489 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp490 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp491 = *(&local25);
org$pandalanguage$pandac$Pair* $tmp492 = *(&local18);
panda$core$Object** $tmp493 = &$tmp492->second;
panda$core$Object* $tmp494 = *$tmp493;
panda$collections$Array** $tmp495 = &((org$pandalanguage$pandac$ChoiceCase*) $tmp494)->fields;
panda$collections$Array* $tmp496 = *$tmp495;
panda$core$Int64 $tmp497 = *(&local23);
panda$core$Object* $tmp498 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp496, $tmp497);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp489, $tmp490, $tmp491, ((org$pandalanguage$pandac$Type*) $tmp498));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp486, $tmp487, $tmp488, $tmp489);
org$pandalanguage$pandac$Pair* $tmp499 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$Variable$Corg$pandalanguage$pandac$IR$Value$Q$GT$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp483), $tmp485, $tmp486, ((org$pandalanguage$pandac$Type*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp499));
org$pandalanguage$pandac$Pair* $tmp500 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp500));
*(&local26) = $tmp499;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp499));
// unreffing REF($923:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.Variable, org.pandalanguage.pandac.IR.Value?>?)
panda$core$Panda$unref$panda$core$Object$Q($tmp498);
// unreffing REF($918:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp489));
// unreffing REF($906:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp486));
// unreffing REF($903:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q($tmp483);
// unreffing REF($899:org.pandalanguage.pandac.FixedArray.T)
// line 127
org$pandalanguage$pandac$Compiler$VariableLValue* $tmp501 = (org$pandalanguage$pandac$Compiler$VariableLValue*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$VariableLValue$class);
org$pandalanguage$pandac$Position $tmp502 = *(&local15);
org$pandalanguage$pandac$Pair* $tmp503 = *(&local26);
panda$core$Object** $tmp504 = &$tmp503->first;
panda$core$Object* $tmp505 = *$tmp504;
org$pandalanguage$pandac$Compiler$VariableLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable($tmp501, param0, $tmp502, ((org$pandalanguage$pandac$Variable*) $tmp505));
org$pandalanguage$pandac$IR$Value* $tmp506 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp507 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp508 = *(&local25);
org$pandalanguage$pandac$Pair* $tmp509 = *(&local18);
panda$core$Object** $tmp510 = &$tmp509->second;
panda$core$Object* $tmp511 = *$tmp510;
panda$collections$Array** $tmp512 = &((org$pandalanguage$pandac$ChoiceCase*) $tmp511)->fields;
panda$collections$Array* $tmp513 = *$tmp512;
panda$core$Int64 $tmp514 = *(&local23);
panda$core$Object* $tmp515 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp513, $tmp514);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp506, $tmp507, $tmp508, ((org$pandalanguage$pandac$Type*) $tmp515));
$fn517 $tmp516 = ($fn517) $tmp501->$class->vtable[4];
$tmp516($tmp501, $tmp506);
panda$core$Panda$unref$panda$core$Object$Q($tmp515);
// unreffing REF($966:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp506));
// unreffing REF($954:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
// unreffing REF($946:org.pandalanguage.pandac.Compiler.VariableLValue)
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp518 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp518));
// unreffing unrefs
*(&local27) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
// line 131
org$pandalanguage$pandac$Pair* $tmp519 = *(&local26);
panda$core$Object** $tmp520 = &$tmp519->first;
panda$core$Object* $tmp521 = *$tmp520;
org$pandalanguage$pandac$Type** $tmp522 = &((org$pandalanguage$pandac$Variable*) $tmp521)->type;
org$pandalanguage$pandac$Type* $tmp523 = *$tmp522;
panda$core$Bit $tmp524 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp523);
bool $tmp525 = $tmp524.value;
if ($tmp525) goto block51; else goto block52;
block51:;
// line 132
panda$collections$Stack** $tmp526 = &param0->enclosingContexts;
panda$collections$Stack* $tmp527 = *$tmp526;
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp528 = (org$pandalanguage$pandac$Compiler$EnclosingContext*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$EnclosingContext$class);
panda$core$Int64 $tmp529 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Pair* $tmp530 = *(&local26);
panda$core$Object** $tmp531 = &$tmp530->first;
panda$core$Object* $tmp532 = *$tmp531;
org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$Variable($tmp528, $tmp529, ((org$pandalanguage$pandac$Variable*) $tmp532));
panda$collections$Stack$push$panda$collections$Stack$T($tmp527, ((panda$core$Object*) $tmp528));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp528));
// unreffing REF($1000:org.pandalanguage.pandac.Compiler.EnclosingContext)
goto block52;
block52:;
org$pandalanguage$pandac$Pair* $tmp533 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp533));
// unreffing target
*(&local26) = ((org$pandalanguage$pandac$Pair*) NULL);
goto block46;
block46:;
panda$core$Int64 $tmp534 = *(&local23);
int64_t $tmp535 = $tmp429.value;
int64_t $tmp536 = $tmp534.value;
int64_t $tmp537 = $tmp535 - $tmp536;
panda$core$Int64 $tmp538 = (panda$core$Int64) {$tmp537};
panda$core$UInt64 $tmp539 = panda$core$Int64$convert$R$panda$core$UInt64($tmp538);
if ($tmp431) goto block54; else goto block55;
block54:;
uint64_t $tmp540 = $tmp539.value;
uint64_t $tmp541 = $tmp433.value;
bool $tmp542 = $tmp540 >= $tmp541;
panda$core$Bit $tmp543 = (panda$core$Bit) {$tmp542};
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block53; else goto block45;
block55:;
uint64_t $tmp545 = $tmp539.value;
uint64_t $tmp546 = $tmp433.value;
bool $tmp547 = $tmp545 > $tmp546;
panda$core$Bit $tmp548 = (panda$core$Bit) {$tmp547};
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block53; else goto block45;
block53:;
int64_t $tmp550 = $tmp534.value;
int64_t $tmp551 = $tmp432.value;
int64_t $tmp552 = $tmp550 + $tmp551;
panda$core$Int64 $tmp553 = (panda$core$Int64) {$tmp552};
*(&local23) = $tmp553;
goto block44;
block45:;
// line 137
org$pandalanguage$pandac$IR$Value* $tmp554 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp554));
// unreffing testBit
*(&local19) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Pair* $tmp555 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp555));
// unreffing cc
*(&local18) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp556 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
// unreffing args
*(&local17) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp557 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp557));
// unreffing base
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp558 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp558));
// unreffing t
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block16;
block35:;
goto block33;
block33:;
org$pandalanguage$pandac$Pair* $tmp559 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp559));
// unreffing cc
*(&local18) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp560 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp560));
// unreffing args
*(&local17) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp561 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp561));
// unreffing base
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block30;
block30:;
// line 142
*(&local28) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 1
// line 144
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp562 = (org$pandalanguage$pandac$Compiler$AutoUnrefs*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoUnrefs$class);
org$pandalanguage$pandac$Compiler$AutoUnrefs$init$org$pandalanguage$pandac$Compiler($tmp562, param0);
*(&local29) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp562));
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp563 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp563));
*(&local29) = $tmp562;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp562));
// unreffing REF($1093:org.pandalanguage.pandac.Compiler.AutoUnrefs)
// line 145
*(&local30) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 146
org$pandalanguage$pandac$ASTNode* $tmp564 = *(&local14);
org$pandalanguage$pandac$Pair* $tmp565 = org$pandalanguage$pandac$Compiler$getChoiceCase$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$Type$Corg$pandalanguage$pandac$ChoiceCase$GT$Q(param0, $tmp564);
*(&local31) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp565));
org$pandalanguage$pandac$Pair* $tmp566 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp566));
*(&local31) = $tmp565;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp565));
// unreffing REF($1109:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.Type, org.pandalanguage.pandac.ChoiceCase>?)
// line 147
org$pandalanguage$pandac$Pair* $tmp567 = *(&local31);
panda$core$Bit $tmp568 = panda$core$Bit$init$builtin_bit($tmp567 != NULL);
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block56; else goto block58;
block56:;
// line 148
panda$collections$Array* $tmp570 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp570);
*(&local32) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp570));
panda$collections$Array* $tmp571 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp571));
*(&local32) = $tmp570;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp570));
// unreffing REF($1127:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 149
panda$collections$Array* $tmp572 = *(&local32);
org$pandalanguage$pandac$ASTNode* $tmp573 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp574 = (panda$core$Int64) {25};
org$pandalanguage$pandac$ASTNode* $tmp575 = *(&local14);
$fn577 $tmp576 = ($fn577) $tmp575->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp578 = $tmp576($tmp575);
org$pandalanguage$pandac$Pair* $tmp579 = *(&local31);
panda$core$Object** $tmp580 = &$tmp579->second;
panda$core$Object* $tmp581 = *$tmp580;
panda$core$Int64* $tmp582 = &((org$pandalanguage$pandac$ChoiceCase*) $tmp581)->rawValue;
panda$core$Int64 $tmp583 = *$tmp582;
panda$core$UInt64 $tmp584 = panda$core$Int64$convert$R$panda$core$UInt64($tmp583);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp573, $tmp574, $tmp578, $tmp584);
panda$collections$Array$add$panda$collections$Array$T($tmp572, ((panda$core$Object*) $tmp573));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
// unreffing REF($1143:org.pandalanguage.pandac.ASTNode)
// line 151
org$pandalanguage$pandac$ASTNode* $tmp585 = *(&local14);
$fn587 $tmp586 = ($fn587) $tmp585->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp588 = $tmp586($tmp585);
panda$collections$Array* $tmp589 = *(&local32);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp590 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp591 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp592 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp590, $tmp591, $tmp592);
org$pandalanguage$pandac$IR$Value* $tmp593 = org$pandalanguage$pandac$statements$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp588, param4, &$s594, ((panda$collections$ListView*) $tmp589), $tmp590);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp593));
org$pandalanguage$pandac$IR$Value* $tmp595 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp595));
*(&local30) = $tmp593;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp593));
// unreffing REF($1173:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp592));
// unreffing REF($1171:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp590));
// unreffing REF($1169:org.pandalanguage.pandac.Compiler.TypeContext)
// line 153
org$pandalanguage$pandac$IR$Value* $tmp596 = *(&local30);
panda$core$Bit $tmp597 = panda$core$Bit$init$builtin_bit($tmp596 == NULL);
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block59; else goto block60;
block59:;
// line 154
panda$collections$Array* $tmp599 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp599));
// unreffing args
*(&local32) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Pair* $tmp600 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp600));
// unreffing cc
*(&local31) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp601 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp601));
// unreffing test
*(&local30) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp602 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp602));
// unreffing unrefs
*(&local29) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp603 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp603));
// unreffing testBit
*(&local28) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp604 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp604));
// unreffing t
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp605 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp605));
// unreffing auto
*(&local9) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp606 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp606));
// unreffing statements
*(&local8) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp607 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
// unreffing tests
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp608 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp608));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$IR* $tmp609 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp609));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block60:;
panda$collections$Array* $tmp610 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp610));
// unreffing args
*(&local32) = ((panda$collections$Array*) NULL);
goto block57;
block58:;
// line 1
// line 158
panda$collections$Array* $tmp611 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp611);
*(&local33) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp611));
panda$collections$Array* $tmp612 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp612));
*(&local33) = $tmp611;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp611));
// unreffing REF($1260:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 159
panda$collections$Array* $tmp613 = *(&local33);
org$pandalanguage$pandac$ASTNode* $tmp614 = *(&local14);
panda$collections$Array$add$panda$collections$Array$T($tmp613, ((panda$core$Object*) $tmp614));
// line 160
org$pandalanguage$pandac$ASTNode* $tmp615 = *(&local14);
$fn617 $tmp616 = ($fn617) $tmp615->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp618 = $tmp616($tmp615);
panda$collections$Array* $tmp619 = *(&local33);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp620 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp621 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp622 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp620, $tmp621, $tmp622);
org$pandalanguage$pandac$IR$Value* $tmp623 = org$pandalanguage$pandac$statements$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp618, param2, &$s624, ((panda$collections$ListView*) $tmp619), $tmp620);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp623));
org$pandalanguage$pandac$IR$Value* $tmp625 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp625));
*(&local30) = $tmp623;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp623));
// unreffing REF($1289:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp622));
// unreffing REF($1287:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp620));
// unreffing REF($1285:org.pandalanguage.pandac.Compiler.TypeContext)
// line 162
org$pandalanguage$pandac$IR$Value* $tmp626 = *(&local30);
panda$core$Bit $tmp627 = panda$core$Bit$init$builtin_bit($tmp626 == NULL);
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block61; else goto block62;
block61:;
// line 163
panda$collections$Array* $tmp629 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp629));
// unreffing args
*(&local33) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Pair* $tmp630 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp630));
// unreffing cc
*(&local31) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp631 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp631));
// unreffing test
*(&local30) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp632 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
// unreffing unrefs
*(&local29) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp633 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp633));
// unreffing testBit
*(&local28) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp634 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp634));
// unreffing t
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp635 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp635));
// unreffing auto
*(&local9) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp636 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp636));
// unreffing statements
*(&local8) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp637 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp637));
// unreffing tests
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp638 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp638));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$IR* $tmp639 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp639));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block62:;
panda$collections$Array* $tmp640 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp640));
// unreffing args
*(&local33) = ((panda$collections$Array*) NULL);
goto block57;
block57:;
// line 166
org$pandalanguage$pandac$Position $tmp641 = *(&local6);
org$pandalanguage$pandac$IR$Value* $tmp642 = *(&local30);
org$pandalanguage$pandac$IR$Value* $tmp643 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, $tmp641, $tmp642);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp643));
org$pandalanguage$pandac$IR$Value* $tmp644 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp644));
*(&local28) = $tmp643;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp643));
// unreffing REF($1378:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$Pair* $tmp645 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp645));
// unreffing cc
*(&local31) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp646 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp646));
// unreffing test
*(&local30) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp647 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp647));
// unreffing unrefs
*(&local29) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
// line 168
org$pandalanguage$pandac$IR* $tmp648 = *(&local1);
org$pandalanguage$pandac$IR$Statement* $tmp649 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp650 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Position $tmp651 = *(&local6);
org$pandalanguage$pandac$IR$Value* $tmp652 = *(&local28);
org$pandalanguage$pandac$IR$Block$ID $tmp653 = *(&local10);
org$pandalanguage$pandac$IR$Block$ID $tmp654 = *(&local3);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp649, $tmp650, $tmp651, $tmp652, $tmp653, $tmp654);
$fn656 $tmp655 = ($fn656) $tmp648->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp657 = $tmp655($tmp648, $tmp649);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp649));
// unreffing REF($1405:org.pandalanguage.pandac.IR.Statement)
org$pandalanguage$pandac$IR$Value* $tmp658 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp658));
// unreffing testBit
*(&local28) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp659 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
// unreffing t
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block16;
block16:;
panda$core$Int64 $tmp660 = *(&local11);
int64_t $tmp661 = $tmp122.value;
int64_t $tmp662 = $tmp660.value;
int64_t $tmp663 = $tmp661 - $tmp662;
panda$core$Int64 $tmp664 = (panda$core$Int64) {$tmp663};
panda$core$UInt64 $tmp665 = panda$core$Int64$convert$R$panda$core$UInt64($tmp664);
if ($tmp124) goto block64; else goto block65;
block64:;
uint64_t $tmp666 = $tmp665.value;
uint64_t $tmp667 = $tmp126.value;
bool $tmp668 = $tmp666 >= $tmp667;
panda$core$Bit $tmp669 = (panda$core$Bit) {$tmp668};
bool $tmp670 = $tmp669.value;
if ($tmp670) goto block63; else goto block15;
block65:;
uint64_t $tmp671 = $tmp665.value;
uint64_t $tmp672 = $tmp126.value;
bool $tmp673 = $tmp671 > $tmp672;
panda$core$Bit $tmp674 = (panda$core$Bit) {$tmp673};
bool $tmp675 = $tmp674.value;
if ($tmp675) goto block63; else goto block15;
block63:;
int64_t $tmp676 = $tmp660.value;
int64_t $tmp677 = $tmp125.value;
int64_t $tmp678 = $tmp676 + $tmp677;
panda$core$Int64 $tmp679 = (panda$core$Int64) {$tmp678};
*(&local11) = $tmp679;
goto block14;
block15:;
// line 171
org$pandalanguage$pandac$IR* $tmp680 = *(&local1);
org$pandalanguage$pandac$IR$Block$ID $tmp681 = *(&local10);
$fn683 $tmp682 = ($fn683) $tmp680->$class->vtable[4];
$tmp682($tmp680, $tmp681);
// line 172
org$pandalanguage$pandac$FixedArray* $tmp684 = *(&local8);
ITable* $tmp685 = ((panda$collections$Iterable*) $tmp684)->$class->itable;
while ($tmp685->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp685 = $tmp685->next;
}
$fn687 $tmp686 = $tmp685->methods[0];
panda$collections$Iterator* $tmp688 = $tmp686(((panda$collections$Iterable*) $tmp684));
goto block66;
block66:;
ITable* $tmp689 = $tmp688->$class->itable;
while ($tmp689->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp689 = $tmp689->next;
}
$fn691 $tmp690 = $tmp689->methods[0];
panda$core$Bit $tmp692 = $tmp690($tmp688);
bool $tmp693 = $tmp692.value;
if ($tmp693) goto block68; else goto block67;
block67:;
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp694 = $tmp688->$class->itable;
while ($tmp694->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp694 = $tmp694->next;
}
$fn696 $tmp695 = $tmp694->methods[1];
panda$core$Object* $tmp697 = $tmp695($tmp688);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp697)));
org$pandalanguage$pandac$ASTNode* $tmp698 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp698));
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) $tmp697);
// line 173
org$pandalanguage$pandac$ASTNode* $tmp699 = *(&local34);
org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode(param0, $tmp699);
panda$core$Panda$unref$panda$core$Object$Q($tmp697);
// unreffing REF($1474:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp700 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp700));
// unreffing s
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block66;
block68:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp688));
// unreffing REF($1463:panda.collections.Iterator<panda.collections.Iterable.T>)
org$pandalanguage$pandac$Compiler$AutoScope* $tmp701 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
// unreffing auto
*(&local9) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
// line 176
org$pandalanguage$pandac$IR* $tmp702 = *(&local1);
$fn704 $tmp703 = ($fn704) $tmp702->$class->vtable[5];
panda$core$Bit $tmp705 = $tmp703($tmp702);
panda$core$Bit $tmp706 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp705);
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block69; else goto block70;
block69:;
// line 177
org$pandalanguage$pandac$IR* $tmp708 = *(&local1);
org$pandalanguage$pandac$IR$Statement* $tmp709 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp710 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Position $tmp711 = *(&local6);
org$pandalanguage$pandac$IR$Block$ID $tmp712 = *(&local2);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp709, $tmp710, $tmp711, $tmp712);
$fn714 $tmp713 = ($fn714) $tmp708->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp715 = $tmp713($tmp708, $tmp709);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp709));
// unreffing REF($1511:org.pandalanguage.pandac.IR.Statement)
goto block70;
block70:;
org$pandalanguage$pandac$FixedArray* $tmp716 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp716));
// unreffing statements
*(&local8) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp717 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp717));
// unreffing tests
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block11;
block13:;
// line 181
panda$core$Bit $tmp718 = panda$core$Bit$init$builtin_bit(false);
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block71; else goto block72;
block72:;
panda$core$Int64 $tmp720 = (panda$core$Int64) {181};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s721, $tmp720);
abort(); // unreachable
block71:;
goto block11;
block11:;
org$pandalanguage$pandac$ASTNode* $tmp722 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp722));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block8;
block8:;
panda$core$Int64 $tmp723 = *(&local4);
int64_t $tmp724 = $tmp74.value;
int64_t $tmp725 = $tmp723.value;
int64_t $tmp726 = $tmp724 - $tmp725;
panda$core$Int64 $tmp727 = (panda$core$Int64) {$tmp726};
panda$core$UInt64 $tmp728 = panda$core$Int64$convert$R$panda$core$UInt64($tmp727);
if ($tmp76) goto block74; else goto block75;
block74:;
uint64_t $tmp729 = $tmp728.value;
uint64_t $tmp730 = $tmp78.value;
bool $tmp731 = $tmp729 >= $tmp730;
panda$core$Bit $tmp732 = (panda$core$Bit) {$tmp731};
bool $tmp733 = $tmp732.value;
if ($tmp733) goto block73; else goto block7;
block75:;
uint64_t $tmp734 = $tmp728.value;
uint64_t $tmp735 = $tmp78.value;
bool $tmp736 = $tmp734 > $tmp735;
panda$core$Bit $tmp737 = (panda$core$Bit) {$tmp736};
bool $tmp738 = $tmp737.value;
if ($tmp738) goto block73; else goto block7;
block73:;
int64_t $tmp739 = $tmp723.value;
int64_t $tmp740 = $tmp77.value;
int64_t $tmp741 = $tmp739 + $tmp740;
panda$core$Int64 $tmp742 = (panda$core$Int64) {$tmp741};
*(&local4) = $tmp742;
goto block6;
block7:;
// line 185
panda$core$Bit $tmp743 = panda$core$Bit$init$builtin_bit(param6 != NULL);
bool $tmp744 = $tmp743.value;
if ($tmp744) goto block76; else goto block77;
block76:;
// line 1
// line 187
org$pandalanguage$pandac$Compiler$AutoScope* $tmp745 = (org$pandalanguage$pandac$Compiler$AutoScope*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoScope$class);
org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler($tmp745, param0);
*(&local35) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp745));
org$pandalanguage$pandac$Compiler$AutoScope* $tmp746 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp746));
*(&local35) = $tmp745;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp745));
// unreffing REF($1579:org.pandalanguage.pandac.Compiler.AutoScope)
// line 188
org$pandalanguage$pandac$IR* $tmp747 = *(&local1);
org$pandalanguage$pandac$IR$Block$ID $tmp748 = *(&local3);
$fn750 $tmp749 = ($fn750) $tmp747->$class->vtable[4];
$tmp749($tmp747, $tmp748);
// line 189
ITable* $tmp751 = ((panda$collections$Iterable*) param6)->$class->itable;
while ($tmp751->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp751 = $tmp751->next;
}
$fn753 $tmp752 = $tmp751->methods[0];
panda$collections$Iterator* $tmp754 = $tmp752(((panda$collections$Iterable*) param6));
goto block78;
block78:;
ITable* $tmp755 = $tmp754->$class->itable;
while ($tmp755->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp755 = $tmp755->next;
}
$fn757 $tmp756 = $tmp755->methods[0];
panda$core$Bit $tmp758 = $tmp756($tmp754);
bool $tmp759 = $tmp758.value;
if ($tmp759) goto block80; else goto block79;
block79:;
*(&local36) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp760 = $tmp754->$class->itable;
while ($tmp760->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp760 = $tmp760->next;
}
$fn762 $tmp761 = $tmp760->methods[1];
panda$core$Object* $tmp763 = $tmp761($tmp754);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp763)));
org$pandalanguage$pandac$ASTNode* $tmp764 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp764));
*(&local36) = ((org$pandalanguage$pandac$ASTNode*) $tmp763);
// line 190
org$pandalanguage$pandac$ASTNode* $tmp765 = *(&local36);
org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode(param0, $tmp765);
panda$core$Panda$unref$panda$core$Object$Q($tmp763);
// unreffing REF($1611:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp766 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp766));
// unreffing s
*(&local36) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block78;
block80:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp754));
// unreffing REF($1600:panda.collections.Iterator<panda.collections.Iterable.T>)
org$pandalanguage$pandac$Compiler$AutoScope* $tmp767 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp767));
// unreffing scope
*(&local35) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
// line 193
org$pandalanguage$pandac$IR* $tmp768 = *(&local1);
$fn770 $tmp769 = ($fn770) $tmp768->$class->vtable[5];
panda$core$Bit $tmp771 = $tmp769($tmp768);
panda$core$Bit $tmp772 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp771);
bool $tmp773 = $tmp772.value;
if ($tmp773) goto block81; else goto block82;
block81:;
// line 194
org$pandalanguage$pandac$IR* $tmp774 = *(&local1);
org$pandalanguage$pandac$IR$Statement* $tmp775 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp776 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp777 = *(&local2);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp775, $tmp776, param1, $tmp777);
$fn779 $tmp778 = ($fn779) $tmp774->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp780 = $tmp778($tmp774, $tmp775);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp775));
// unreffing REF($1648:org.pandalanguage.pandac.IR.Statement)
goto block82;
block82:;
goto block77;
block77:;
// line 197
org$pandalanguage$pandac$IR* $tmp781 = *(&local1);
org$pandalanguage$pandac$IR$Block$ID $tmp782 = *(&local2);
$fn784 $tmp783 = ($fn784) $tmp781->$class->vtable[4];
$tmp783($tmp781, $tmp782);
org$pandalanguage$pandac$IR* $tmp785 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp785));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
return;

}
void org$pandalanguage$pandac$statements$Match$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$ASTNode* param2, org$pandalanguage$pandac$FixedArray* param3, org$pandalanguage$pandac$FixedArray* param4) {

org$pandalanguage$pandac$IR$Value* local0 = NULL;
panda$core$Bit local1;
panda$core$Bit local2;
org$pandalanguage$pandac$ClassDecl* local3 = NULL;
org$pandalanguage$pandac$ClassDecl* local4 = NULL;
org$pandalanguage$pandac$IR$Value* local5 = NULL;
// line 203
org$pandalanguage$pandac$Compiler$TypeContext* $tmp786 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp787 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp786, $tmp787);
org$pandalanguage$pandac$IR$Value* $tmp788 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param2, $tmp786);
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp788));
org$pandalanguage$pandac$IR$Value* $tmp789 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp789));
*(&local0) = $tmp788;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp788));
// unreffing REF($4:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp786));
// unreffing REF($1:org.pandalanguage.pandac.Compiler.TypeContext)
// line 204
org$pandalanguage$pandac$IR$Value* $tmp790 = *(&local0);
panda$core$Bit $tmp791 = panda$core$Bit$init$builtin_bit($tmp790 == NULL);
bool $tmp792 = $tmp791.value;
if ($tmp792) goto block3; else goto block4;
block3:;
*(&local1) = $tmp791;
goto block5;
block4:;
ITable* $tmp793 = ((panda$collections$CollectionView*) param3)->$class->itable;
while ($tmp793->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp793 = $tmp793->next;
}
$fn795 $tmp794 = $tmp793->methods[0];
panda$core$Int64 $tmp796 = $tmp794(((panda$collections$CollectionView*) param3));
panda$core$Int64 $tmp797 = (panda$core$Int64) {0};
panda$core$Bit $tmp798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp796, $tmp797);
bool $tmp799 = $tmp798.value;
if ($tmp799) goto block6; else goto block7;
block6:;
panda$core$Bit $tmp800 = panda$core$Bit$init$builtin_bit(param4 == NULL);
*(&local2) = $tmp800;
goto block8;
block7:;
*(&local2) = $tmp798;
goto block8;
block8:;
panda$core$Bit $tmp801 = *(&local2);
*(&local1) = $tmp801;
goto block5;
block5:;
panda$core$Bit $tmp802 = *(&local1);
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block1; else goto block2;
block1:;
// line 205
org$pandalanguage$pandac$IR$Value* $tmp804 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp804));
// unreffing compiledValue
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;
block2:;
// line 207
org$pandalanguage$pandac$IR$Value* $tmp805 = *(&local0);
$fn807 $tmp806 = ($fn807) $tmp805->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp808 = $tmp806($tmp805);
org$pandalanguage$pandac$ClassDecl* $tmp809 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp808);
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp809));
org$pandalanguage$pandac$ClassDecl* $tmp810 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp810));
*(&local3) = $tmp809;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp809));
// unreffing REF($57:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp808));
// unreffing REF($56:org.pandalanguage.pandac.Type)
// line 208
org$pandalanguage$pandac$ClassDecl* $tmp811 = *(&local3);
panda$core$Bit $tmp812 = panda$core$Bit$init$builtin_bit($tmp811 == NULL);
bool $tmp813 = $tmp812.value;
if ($tmp813) goto block9; else goto block10;
block9:;
// line 209
org$pandalanguage$pandac$ClassDecl* $tmp814 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp814));
// unreffing cl
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp815 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp815));
// unreffing compiledValue
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;
block10:;
// line 211
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp816 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp816));
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
// line 212
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 213
org$pandalanguage$pandac$ClassDecl* $tmp817 = *(&local3);
org$pandalanguage$pandac$ClassDecl$Kind* $tmp818 = &$tmp817->classKind;
org$pandalanguage$pandac$ClassDecl$Kind $tmp819 = *$tmp818;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp820;
$tmp820 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp820->value = $tmp819;
panda$core$Int64 $tmp821 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp822 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp821);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp823;
$tmp823 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp823->value = $tmp822;
ITable* $tmp824 = ((panda$core$Equatable*) $tmp820)->$class->itable;
while ($tmp824->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp824 = $tmp824->next;
}
$fn826 $tmp825 = $tmp824->methods[0];
panda$core$Bit $tmp827 = $tmp825(((panda$core$Equatable*) $tmp820), ((panda$core$Equatable*) $tmp823));
bool $tmp828 = $tmp827.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp823)));
// unreffing REF($108:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp820)));
// unreffing REF($104:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
if ($tmp828) goto block11; else goto block13;
block11:;
// line 214
org$pandalanguage$pandac$IR$Value* $tmp829 = *(&local0);
org$pandalanguage$pandac$IR$Value* $tmp830 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp829, &$s831);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp830));
org$pandalanguage$pandac$IR$Value* $tmp832 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp832));
*(&local5) = $tmp830;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp830));
// unreffing REF($122:org.pandalanguage.pandac.IR.Value?)
// line 215
org$pandalanguage$pandac$ClassDecl* $tmp833 = *(&local3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp833));
org$pandalanguage$pandac$ClassDecl* $tmp834 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp834));
*(&local4) = $tmp833;
goto block12;
block13:;
// line 217
org$pandalanguage$pandac$ClassDecl* $tmp835 = *(&local3);
org$pandalanguage$pandac$SymbolTable* $tmp836 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(param0, $tmp835);
org$pandalanguage$pandac$Symbol* $tmp837 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp836, &$s838);
panda$core$Bit $tmp839 = panda$core$Bit$init$builtin_bit($tmp837 == NULL);
bool $tmp840 = $tmp839.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp837));
// unreffing REF($145:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
// unreffing REF($144:org.pandalanguage.pandac.SymbolTable)
if ($tmp840) goto block14; else goto block16;
block14:;
// line 218
$fn842 $tmp841 = ($fn842) param2->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp843 = $tmp841(param2);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp843, &$s844);
// line 219
org$pandalanguage$pandac$IR$Value* $tmp845 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp845));
// unreffing choiceRawValue
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp846 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp846));
// unreffing choiceClass
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp847 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp847));
// unreffing cl
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp848 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp848));
// unreffing compiledValue
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;
block16:;
// line 1
// line 222
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp849 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp849));
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block15;
block15:;
goto block12;
block12:;
// line 224
org$pandalanguage$pandac$IR$Value* $tmp850 = *(&local0);
org$pandalanguage$pandac$ClassDecl* $tmp851 = *(&local4);
org$pandalanguage$pandac$IR$Value* $tmp852 = *(&local5);
org$pandalanguage$pandac$statements$Match$compileChainedIfMatch$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ClassDecl$Q$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0, param1, $tmp850, $tmp851, $tmp852, param3, param4);
org$pandalanguage$pandac$IR$Value* $tmp853 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp853));
// unreffing choiceRawValue
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp854 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp854));
// unreffing choiceClass
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp855 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp855));
// unreffing cl
*(&local3) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp856 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp856));
// unreffing compiledValue
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;

}
void org$pandalanguage$pandac$statements$Match$init(org$pandalanguage$pandac$statements$Match* param0) {

return;

}
void org$pandalanguage$pandac$statements$Match$cleanup(org$pandalanguage$pandac$statements$Match* param0) {

// line 20
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}

