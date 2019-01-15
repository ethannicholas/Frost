#include "org/frostlanguage/frostc/statement/Match.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "org/frostlanguage/frostc/Position.h"
#include "org/frostlanguage/frostc/ChoiceCase.h"
#include "org/frostlanguage/frostc/ClassDecl.h"
#include "org/frostlanguage/frostc/IR/Value.h"
#include "org/frostlanguage/frostc/Type.h"
#include "frost/core/Frost.h"
#include "frost/core/Weak.h"
#include "org/frostlanguage/frostc/FixedArray.h"
#include "org/frostlanguage/frostc/IR.h"
#include "org/frostlanguage/frostc/IR/Block/ID.h"
#include "frost/core/Int64.h"
#include "org/frostlanguage/frostc/ASTNode.h"
#include "org/frostlanguage/frostc/Compiler/AutoScope.h"
#include "org/frostlanguage/frostc/Pair.h"
#include "org/frostlanguage/frostc/Compiler/AutoUnrefs.h"
#include "frost/collections/Array.h"
#include "org/frostlanguage/frostc/IR/Statement/ID.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlanguage/frostc/IR/Block.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Equatable.h"
#include "frost/core/Formattable.h"
#include "frost/collections/ListView.h"
#include "org/frostlanguage/frostc/Compiler/TypeContext.h"
#include "org/frostlanguage/frostc/expression/Call.h"
#include "org/frostlanguage/frostc/IR/Statement.h"
#include "org/frostlanguage/frostc/Variable/Kind.h"
#include "org/frostlanguage/frostc/lvalue/VariableLValue.h"
#include "org/frostlanguage/frostc/Variable.h"
#include "frost/collections/Stack.h"
#include "org/frostlanguage/frostc/Compiler/EnclosingContext.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlanguage/frostc/ClassDecl/Kind.h"
#include "org/frostlanguage/frostc/expression/Dot.h"
#include "org/frostlanguage/frostc/SymbolTable.h"
#include "org/frostlanguage/frostc/Symbol.h"


static frost$core$String $s1;
org$frostlanguage$frostc$statement$Match$class_type org$frostlanguage$frostc$statement$Match$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$statement$Match$cleanup} };

typedef org$frostlanguage$frostc$Type* (*$fn12)(org$frostlanguage$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn39)(frost$collections$CollectionView*);
typedef org$frostlanguage$frostc$IR$Block$ID (*$fn58)(org$frostlanguage$frostc$IR*, frost$core$String*);
typedef frost$core$Int64 (*$fn69)(frost$collections$CollectionView*);
typedef org$frostlanguage$frostc$IR$Block$ID (*$fn110)(org$frostlanguage$frostc$IR*, frost$core$String*);
typedef frost$core$Int64 (*$fn117)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn147)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn153)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn158)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn173)(frost$collections$CollectionView*);
typedef org$frostlanguage$frostc$IR$Block$ID (*$fn191)(org$frostlanguage$frostc$IR*, frost$core$String*);
typedef org$frostlanguage$frostc$Position (*$fn221)(org$frostlanguage$frostc$ASTNode*);
typedef frost$core$Int64 (*$fn231)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn255)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn264)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn288)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn299)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn306)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Int64 (*$fn319)(frost$collections$CollectionView*);
typedef org$frostlanguage$frostc$Type* (*$fn336)(org$frostlanguage$frostc$IR$Value*);
typedef org$frostlanguage$frostc$Position (*$fn374)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn385)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn414)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);
typedef void (*$fn419)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn424)(frost$collections$CollectionView*);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn453)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn470)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);
typedef void (*$fn517)(org$frostlanguage$frostc$lvalue$VariableLValue*, org$frostlanguage$frostc$IR$Value*);
typedef org$frostlanguage$frostc$Position (*$fn576)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn587)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$Position (*$fn613)(org$frostlanguage$frostc$ASTNode*);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn652)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);
typedef void (*$fn679)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn683)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn687)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn692)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn700)(org$frostlanguage$frostc$IR*);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn710)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);
typedef void (*$fn746)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn749)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn753)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn758)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn766)(org$frostlanguage$frostc$IR*);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn775)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);
typedef void (*$fn780)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn791)(frost$collections$CollectionView*);
typedef org$frostlanguage$frostc$Type* (*$fn803)(org$frostlanguage$frostc$IR$Value*);
typedef frost$core$Bit (*$fn822)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlanguage$frostc$Position (*$fn838)(org$frostlanguage$frostc$ASTNode*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x4d\x61\x74\x63\x68", 40, -9043700213969040478, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x61\x74\x63\x68\x20\x63\x68\x6f\x69\x63\x65\x20\x63\x61\x73\x65\x20\x27", 26, 924211577719466455, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x61\x67\x61\x69\x6e\x73\x74\x20\x27", 11, 5504180647906747646, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x61\x74\x63\x68\x20\x63\x68\x6f\x69\x63\x65\x20\x63\x61\x73\x65\x20\x27", 26, 924211577719466455, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x61\x67\x61\x69\x6e\x73\x74\x20", 10, 5899009811946657419, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x4d\x61\x74\x63\x68\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x43\x68\x61\x69\x6e\x65\x64\x49\x66\x4d\x61\x74\x63\x68\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2c\x20\x63\x68\x6f\x69\x63\x65\x43\x6c\x61\x73\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x2c\x20\x63\x68\x6f\x69\x63\x65\x52\x61\x77\x56\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x77\x68\x65\x6e\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x6f\x74\x68\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x29", 478, -8668186242941198245, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x74\x63\x68\x20\x65\x6e\x64", 9, 2284522982428118369, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x65\x73\x74\x20\x73\x75\x63\x63\x65\x73\x73", 12, 7036109776132282178, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x74\x63\x68", 5, 21953816826, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x65\x73\x74\x72\x75\x63\x74\x75\x72\x69\x6e\x67\x20\x63\x68\x6f\x69\x63\x65\x20\x27\x77\x68\x65\x6e\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x74\x6f\x67\x65\x74\x68\x65\x72\x20\x77\x69\x74\x68\x20", 57, 7310936708811456764, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x74\x68\x65\x72\x20\x27\x77\x68\x65\x6e\x27\x20\x63\x6f\x6d\x70\x61\x72\x69\x73\x6f\x6e\x73", 24, 5365199314206252049, NULL };
static frost$core$String $s276 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x27", 8, 21554282788333791, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20", 2, 14172, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x71\x75\x69\x72\x65\x73\x20", 9, 2339091676660267913, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x61\x72\x67\x75\x6d\x65\x6e\x74", 9, 1450721239526715900, NULL };
static frost$core$String $s312 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 10, -2438145452310052756, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x69\x73\x20", 5, 14602508524, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 19, 2848546980520752179, NULL };
static frost$core$String $s353 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s392 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s594 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s622 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s717 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s827 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static frost$core$String $s834 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s840 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27\x20\x76\x61\x6c\x75\x65\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x64\x65\x66\x69\x6e\x65\x20\x74\x68\x65\x20\x27\x3d\x27\x20\x6f\x70\x65\x72\x61\x74\x6f\x72", 46, 6331121231047041348, NULL };

frost$core$Bit org$frostlanguage$frostc$statement$Match$checkChoiceMatch$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ChoiceCase$Q$org$frostlanguage$frostc$ClassDecl$Q$org$frostlanguage$frostc$IR$Value$R$frost$core$Bit(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$Position param1, org$frostlanguage$frostc$ChoiceCase* param2, org$frostlanguage$frostc$ClassDecl* param3, org$frostlanguage$frostc$IR$Value* param4) {

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
frost$core$String* $tmp7 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s8, ((frost$core$Object*) param2));
frost$core$String* $tmp9 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp7, &$s10);
$fn12 $tmp11 = ($fn12) param4->$class->vtable[2];
org$frostlanguage$frostc$Type* $tmp13 = $tmp11(param4);
frost$core$String* $tmp14 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp9, ((frost$core$Object*) $tmp13));
frost$core$String* $tmp15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp14, &$s16);
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param1, $tmp15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
// unreffing REF($21:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// unreffing REF($20:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// unreffing REF($18:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
// unreffing REF($16:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
// unreffing REF($15:frost.core.String)
// line 33
frost$core$Bit $tmp17 = frost$core$Bit$init$builtin_bit(false);
return $tmp17;
block4:;
// line 35
frost$core$Weak** $tmp18 = &param2->owner;
frost$core$Weak* $tmp19 = *$tmp18;
frost$core$Object* $tmp20 = frost$core$Weak$get$R$frost$core$Weak$T($tmp19);
bool $tmp21 = ((org$frostlanguage$frostc$ClassDecl*) $tmp20) != param3;
frost$core$Bit $tmp22 = frost$core$Bit$init$builtin_bit($tmp21);
bool $tmp23 = $tmp22.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp20);
// unreffing REF($46:frost.core.Weak.T)
if ($tmp23) goto block5; else goto block6;
block5:;
// line 36
frost$core$String* $tmp24 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s25, ((frost$core$Object*) param2));
frost$core$String* $tmp26 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp24, &$s27);
frost$core$String** $tmp28 = &param3->name;
frost$core$String* $tmp29 = *$tmp28;
frost$core$String* $tmp30 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s31, $tmp29);
frost$core$String* $tmp32 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp30, &$s33);
frost$core$String* $tmp34 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp26, $tmp32);
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param1, $tmp34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// unreffing REF($64:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
// unreffing REF($63:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// unreffing REF($62:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// unreffing REF($58:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// unreffing REF($57:frost.core.String)
// line 38
frost$core$Bit $tmp35 = frost$core$Bit$init$builtin_bit(false);
return $tmp35;
block6:;
// line 40
frost$core$Bit $tmp36 = frost$core$Bit$init$builtin_bit(true);
return $tmp36;

}
void org$frostlanguage$frostc$statement$Match$compileChainedIfMatch$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$org$frostlanguage$frostc$ClassDecl$Q$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$Position param1, org$frostlanguage$frostc$IR$Value* param2, org$frostlanguage$frostc$ClassDecl* param3, org$frostlanguage$frostc$IR$Value* param4, org$frostlanguage$frostc$FixedArray* param5, org$frostlanguage$frostc$FixedArray* param6) {

frost$core$Bit local0;
org$frostlanguage$frostc$IR* local1 = NULL;
org$frostlanguage$frostc$IR$Block$ID local2;
org$frostlanguage$frostc$IR$Block$ID local3;
frost$core$Int64 local4;
org$frostlanguage$frostc$ASTNode* local5 = NULL;
org$frostlanguage$frostc$Position local6;
org$frostlanguage$frostc$FixedArray* local7 = NULL;
org$frostlanguage$frostc$FixedArray* local8 = NULL;
org$frostlanguage$frostc$Compiler$AutoScope* local9 = NULL;
org$frostlanguage$frostc$IR$Block$ID local10;
frost$core$Int64 local11;
frost$core$Bit local12;
frost$core$Bit local13;
org$frostlanguage$frostc$ASTNode* local14 = NULL;
org$frostlanguage$frostc$Position local15;
org$frostlanguage$frostc$ASTNode* local16 = NULL;
org$frostlanguage$frostc$FixedArray* local17 = NULL;
org$frostlanguage$frostc$Pair* local18 = NULL;
org$frostlanguage$frostc$IR$Value* local19 = NULL;
org$frostlanguage$frostc$Compiler$AutoUnrefs* local20 = NULL;
frost$collections$Array* local21 = NULL;
org$frostlanguage$frostc$IR$Value* local22 = NULL;
frost$core$Int64 local23;
org$frostlanguage$frostc$IR$Statement$ID local24;
org$frostlanguage$frostc$IR$Statement$ID local25;
org$frostlanguage$frostc$Pair* local26 = NULL;
org$frostlanguage$frostc$Compiler$AutoUnrefs* local27 = NULL;
org$frostlanguage$frostc$IR$Value* local28 = NULL;
org$frostlanguage$frostc$Compiler$AutoUnrefs* local29 = NULL;
org$frostlanguage$frostc$IR$Value* local30 = NULL;
org$frostlanguage$frostc$Pair* local31 = NULL;
frost$collections$Array* local32 = NULL;
org$frostlanguage$frostc$ASTNode* local33 = NULL;
org$frostlanguage$frostc$Compiler$AutoScope* local34 = NULL;
org$frostlanguage$frostc$ASTNode* local35 = NULL;
ITable* $tmp37 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp37 = $tmp37->next;
}
$fn39 $tmp38 = $tmp37->methods[0];
frost$core$Int64 $tmp40 = $tmp38(((frost$collections$CollectionView*) param5));
frost$core$Int64 $tmp41 = (frost$core$Int64) {0};
int64_t $tmp42 = $tmp40.value;
int64_t $tmp43 = $tmp41.value;
bool $tmp44 = $tmp42 > $tmp43;
frost$core$Bit $tmp45 = (frost$core$Bit) {$tmp44};
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block1; else goto block2;
block1:;
*(&local0) = $tmp45;
goto block3;
block2:;
frost$core$Bit $tmp47 = frost$core$Bit$init$builtin_bit(param6 != NULL);
*(&local0) = $tmp47;
goto block3;
block3:;
frost$core$Bit $tmp48 = *(&local0);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp50 = (frost$core$Int64) {46};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s51, $tmp50, &$s52);
abort(); // unreachable
block4:;
// line 49
org$frostlanguage$frostc$IR** $tmp53 = &param0->ir;
org$frostlanguage$frostc$IR* $tmp54 = *$tmp53;
*(&local1) = ((org$frostlanguage$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
org$frostlanguage$frostc$IR* $tmp55 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
*(&local1) = $tmp54;
// line 50
org$frostlanguage$frostc$IR* $tmp56 = *(&local1);
$fn58 $tmp57 = ($fn58) $tmp56->$class->vtable[3];
org$frostlanguage$frostc$IR$Block$ID $tmp59 = $tmp57($tmp56, &$s60);
*(&local2) = $tmp59;
// line 51
org$frostlanguage$frostc$IR* $tmp61 = *(&local1);
org$frostlanguage$frostc$IR$Block** $tmp62 = &$tmp61->currentBlock;
org$frostlanguage$frostc$IR$Block* $tmp63 = *$tmp62;
org$frostlanguage$frostc$IR$Block$ID* $tmp64 = &$tmp63->id;
org$frostlanguage$frostc$IR$Block$ID $tmp65 = *$tmp64;
*(&local3) = $tmp65;
// line 52
frost$core$Int64 $tmp66 = (frost$core$Int64) {0};
ITable* $tmp67 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp67->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp67 = $tmp67->next;
}
$fn69 $tmp68 = $tmp67->methods[0];
frost$core$Int64 $tmp70 = $tmp68(((frost$collections$CollectionView*) param5));
frost$core$Bit $tmp71 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp72 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp66, $tmp70, $tmp71);
frost$core$Int64 $tmp73 = $tmp72.min;
*(&local4) = $tmp73;
frost$core$Int64 $tmp74 = $tmp72.max;
frost$core$Bit $tmp75 = $tmp72.inclusive;
bool $tmp76 = $tmp75.value;
frost$core$Int64 $tmp77 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp78 = frost$core$Int64$convert$R$frost$core$UInt64($tmp77);
if ($tmp76) goto block9; else goto block10;
block9:;
int64_t $tmp79 = $tmp73.value;
int64_t $tmp80 = $tmp74.value;
bool $tmp81 = $tmp79 <= $tmp80;
frost$core$Bit $tmp82 = (frost$core$Bit) {$tmp81};
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block6; else goto block7;
block10:;
int64_t $tmp84 = $tmp73.value;
int64_t $tmp85 = $tmp74.value;
bool $tmp86 = $tmp84 < $tmp85;
frost$core$Bit $tmp87 = (frost$core$Bit) {$tmp86};
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block6; else goto block7;
block6:;
// line 53
frost$core$Int64 $tmp89 = *(&local4);
frost$core$Object* $tmp90 = org$frostlanguage$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlanguage$frostc$FixedArray$T(param5, $tmp89);
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp90)));
org$frostlanguage$frostc$ASTNode* $tmp91 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) $tmp90);
frost$core$Frost$unref$frost$core$Object$Q($tmp90);
// unreffing REF($74:org.frostlanguage.frostc.FixedArray.T)
// line 54
org$frostlanguage$frostc$ASTNode* $tmp92 = *(&local5);
frost$core$Int64* $tmp93 = &$tmp92->$rawValue;
frost$core$Int64 $tmp94 = *$tmp93;
frost$core$Int64 $tmp95 = (frost$core$Int64) {51};
frost$core$Bit $tmp96 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp94, $tmp95);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block12; else goto block13;
block12:;
org$frostlanguage$frostc$Position* $tmp98 = (org$frostlanguage$frostc$Position*) ($tmp92->$data + 0);
org$frostlanguage$frostc$Position $tmp99 = *$tmp98;
*(&local6) = $tmp99;
org$frostlanguage$frostc$FixedArray** $tmp100 = (org$frostlanguage$frostc$FixedArray**) ($tmp92->$data + 16);
org$frostlanguage$frostc$FixedArray* $tmp101 = *$tmp100;
*(&local7) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
org$frostlanguage$frostc$FixedArray* $tmp102 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
*(&local7) = $tmp101;
org$frostlanguage$frostc$FixedArray** $tmp103 = (org$frostlanguage$frostc$FixedArray**) ($tmp92->$data + 24);
org$frostlanguage$frostc$FixedArray* $tmp104 = *$tmp103;
*(&local8) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
org$frostlanguage$frostc$FixedArray* $tmp105 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
*(&local8) = $tmp104;
// line 1
// line 57
org$frostlanguage$frostc$Compiler$AutoScope* $tmp106 = (org$frostlanguage$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$AutoScope$class);
org$frostlanguage$frostc$Compiler$AutoScope$init$org$frostlanguage$frostc$Compiler($tmp106, param0);
*(&local9) = ((org$frostlanguage$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
org$frostlanguage$frostc$Compiler$AutoScope* $tmp107 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
*(&local9) = $tmp106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
// unreffing REF($117:org.frostlanguage.frostc.Compiler.AutoScope)
// line 58
org$frostlanguage$frostc$IR* $tmp108 = *(&local1);
$fn110 $tmp109 = ($fn110) $tmp108->$class->vtable[3];
org$frostlanguage$frostc$IR$Block$ID $tmp111 = $tmp109($tmp108, &$s112);
*(&local10) = $tmp111;
// line 59
frost$core$Int64 $tmp113 = (frost$core$Int64) {0};
org$frostlanguage$frostc$FixedArray* $tmp114 = *(&local7);
ITable* $tmp115 = ((frost$collections$CollectionView*) $tmp114)->$class->itable;
while ($tmp115->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp115 = $tmp115->next;
}
$fn117 $tmp116 = $tmp115->methods[0];
frost$core$Int64 $tmp118 = $tmp116(((frost$collections$CollectionView*) $tmp114));
frost$core$Bit $tmp119 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp120 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp113, $tmp118, $tmp119);
frost$core$Int64 $tmp121 = $tmp120.min;
*(&local11) = $tmp121;
frost$core$Int64 $tmp122 = $tmp120.max;
frost$core$Bit $tmp123 = $tmp120.inclusive;
bool $tmp124 = $tmp123.value;
frost$core$Int64 $tmp125 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp126 = frost$core$Int64$convert$R$frost$core$UInt64($tmp125);
if ($tmp124) goto block17; else goto block18;
block17:;
int64_t $tmp127 = $tmp121.value;
int64_t $tmp128 = $tmp122.value;
bool $tmp129 = $tmp127 <= $tmp128;
frost$core$Bit $tmp130 = (frost$core$Bit) {$tmp129};
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block14; else goto block15;
block18:;
int64_t $tmp132 = $tmp121.value;
int64_t $tmp133 = $tmp122.value;
bool $tmp134 = $tmp132 < $tmp133;
frost$core$Bit $tmp135 = (frost$core$Bit) {$tmp134};
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block14; else goto block15;
block14:;
// line 60
org$frostlanguage$frostc$IR$Block$ID $tmp137 = *(&local3);
org$frostlanguage$frostc$IR$Block$ID$wrapper* $tmp138;
$tmp138 = (org$frostlanguage$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$IR$Block$ID$wrapperclass);
$tmp138->value = $tmp137;
org$frostlanguage$frostc$IR* $tmp139 = *(&local1);
org$frostlanguage$frostc$IR$Block** $tmp140 = &$tmp139->currentBlock;
org$frostlanguage$frostc$IR$Block* $tmp141 = *$tmp140;
org$frostlanguage$frostc$IR$Block$ID* $tmp142 = &$tmp141->id;
org$frostlanguage$frostc$IR$Block$ID $tmp143 = *$tmp142;
org$frostlanguage$frostc$IR$Block$ID$wrapper* $tmp144;
$tmp144 = (org$frostlanguage$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$IR$Block$ID$wrapperclass);
$tmp144->value = $tmp143;
ITable* $tmp145 = ((frost$core$Equatable*) $tmp138)->$class->itable;
while ($tmp145->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp145 = $tmp145->next;
}
$fn147 $tmp146 = $tmp145->methods[1];
frost$core$Bit $tmp148 = $tmp146(((frost$core$Equatable*) $tmp138), ((frost$core$Equatable*) $tmp144));
bool $tmp149 = $tmp148.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp144)));
// unreffing REF($171:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp138)));
// unreffing REF($164:frost.core.Equatable<org.frostlanguage.frostc.IR.Block.ID>)
if ($tmp149) goto block19; else goto block20;
block19:;
// line 61
org$frostlanguage$frostc$IR* $tmp150 = *(&local1);
org$frostlanguage$frostc$IR$Block$ID $tmp151 = *(&local3);
$fn153 $tmp152 = ($fn153) $tmp150->$class->vtable[4];
$tmp152($tmp150, $tmp151);
goto block20;
block20:;
// line 63
frost$core$Int64 $tmp154 = *(&local11);
org$frostlanguage$frostc$FixedArray* $tmp155 = *(&local7);
ITable* $tmp156 = ((frost$collections$CollectionView*) $tmp155)->$class->itable;
while ($tmp156->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp156 = $tmp156->next;
}
$fn158 $tmp157 = $tmp156->methods[0];
frost$core$Int64 $tmp159 = $tmp157(((frost$collections$CollectionView*) $tmp155));
frost$core$Int64 $tmp160 = (frost$core$Int64) {1};
int64_t $tmp161 = $tmp159.value;
int64_t $tmp162 = $tmp160.value;
int64_t $tmp163 = $tmp161 - $tmp162;
frost$core$Int64 $tmp164 = (frost$core$Int64) {$tmp163};
int64_t $tmp165 = $tmp154.value;
int64_t $tmp166 = $tmp164.value;
bool $tmp167 = $tmp165 < $tmp166;
frost$core$Bit $tmp168 = (frost$core$Bit) {$tmp167};
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block23; else goto block24;
block23:;
*(&local13) = $tmp168;
goto block25;
block24:;
frost$core$Int64 $tmp170 = *(&local4);
ITable* $tmp171 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp171->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp171 = $tmp171->next;
}
$fn173 $tmp172 = $tmp171->methods[0];
frost$core$Int64 $tmp174 = $tmp172(((frost$collections$CollectionView*) param5));
frost$core$Int64 $tmp175 = (frost$core$Int64) {1};
int64_t $tmp176 = $tmp174.value;
int64_t $tmp177 = $tmp175.value;
int64_t $tmp178 = $tmp176 - $tmp177;
frost$core$Int64 $tmp179 = (frost$core$Int64) {$tmp178};
int64_t $tmp180 = $tmp170.value;
int64_t $tmp181 = $tmp179.value;
bool $tmp182 = $tmp180 < $tmp181;
frost$core$Bit $tmp183 = (frost$core$Bit) {$tmp182};
*(&local13) = $tmp183;
goto block25;
block25:;
frost$core$Bit $tmp184 = *(&local13);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block26; else goto block27;
block26:;
*(&local12) = $tmp184;
goto block28;
block27:;
frost$core$Bit $tmp186 = frost$core$Bit$init$builtin_bit(param6 != NULL);
*(&local12) = $tmp186;
goto block28;
block28:;
frost$core$Bit $tmp187 = *(&local12);
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block21; else goto block29;
block21:;
// line 64
org$frostlanguage$frostc$IR* $tmp189 = *(&local1);
$fn191 $tmp190 = ($fn191) $tmp189->$class->vtable[3];
org$frostlanguage$frostc$IR$Block$ID $tmp192 = $tmp190($tmp189, &$s193);
*(&local3) = $tmp192;
goto block22;
block29:;
// line 1
// line 67
org$frostlanguage$frostc$IR$Block$ID $tmp194 = *(&local2);
*(&local3) = $tmp194;
goto block22;
block22:;
// line 69
org$frostlanguage$frostc$FixedArray* $tmp195 = *(&local7);
frost$core$Int64 $tmp196 = *(&local11);
frost$core$Object* $tmp197 = org$frostlanguage$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlanguage$frostc$FixedArray$T($tmp195, $tmp196);
*(&local14) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp197)));
org$frostlanguage$frostc$ASTNode* $tmp198 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
*(&local14) = ((org$frostlanguage$frostc$ASTNode*) $tmp197);
frost$core$Frost$unref$frost$core$Object$Q($tmp197);
// unreffing REF($249:org.frostlanguage.frostc.FixedArray.T)
// line 70
org$frostlanguage$frostc$ASTNode* $tmp199 = *(&local14);
frost$core$Int64* $tmp200 = &$tmp199->$rawValue;
frost$core$Int64 $tmp201 = *$tmp200;
frost$core$Int64 $tmp202 = (frost$core$Int64) {9};
frost$core$Bit $tmp203 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp201, $tmp202);
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block31; else goto block30;
block31:;
org$frostlanguage$frostc$Position* $tmp205 = (org$frostlanguage$frostc$Position*) ($tmp199->$data + 0);
org$frostlanguage$frostc$Position $tmp206 = *$tmp205;
*(&local15) = $tmp206;
org$frostlanguage$frostc$ASTNode** $tmp207 = (org$frostlanguage$frostc$ASTNode**) ($tmp199->$data + 16);
org$frostlanguage$frostc$ASTNode* $tmp208 = *$tmp207;
*(&local16) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
org$frostlanguage$frostc$ASTNode* $tmp209 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
*(&local16) = $tmp208;
org$frostlanguage$frostc$FixedArray** $tmp210 = (org$frostlanguage$frostc$FixedArray**) ($tmp199->$data + 24);
org$frostlanguage$frostc$FixedArray* $tmp211 = *$tmp210;
*(&local17) = ((org$frostlanguage$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
org$frostlanguage$frostc$FixedArray* $tmp212 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local17) = $tmp211;
// line 72
org$frostlanguage$frostc$ASTNode* $tmp213 = *(&local16);
org$frostlanguage$frostc$Pair* $tmp214 = org$frostlanguage$frostc$Compiler$getChoiceCase$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Pair$LTorg$frostlanguage$frostc$Type$Corg$frostlanguage$frostc$ChoiceCase$GT$Q(param0, $tmp213);
*(&local18) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
org$frostlanguage$frostc$Pair* $tmp215 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
*(&local18) = $tmp214;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
// unreffing REF($292:org.frostlanguage.frostc.Pair<org.frostlanguage.frostc.Type, org.frostlanguage.frostc.ChoiceCase>?)
// line 73
org$frostlanguage$frostc$Pair* $tmp216 = *(&local18);
frost$core$Bit $tmp217 = frost$core$Bit$init$builtin_bit($tmp216 != NULL);
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block32; else goto block33;
block32:;
// line 74
org$frostlanguage$frostc$ASTNode* $tmp219 = *(&local16);
$fn221 $tmp220 = ($fn221) $tmp219->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp222 = $tmp220($tmp219);
org$frostlanguage$frostc$Pair* $tmp223 = *(&local18);
frost$core$Object** $tmp224 = &$tmp223->second;
frost$core$Object* $tmp225 = *$tmp224;
frost$core$Bit $tmp226 = org$frostlanguage$frostc$statement$Match$checkChoiceMatch$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ChoiceCase$Q$org$frostlanguage$frostc$ClassDecl$Q$org$frostlanguage$frostc$IR$Value$R$frost$core$Bit(param0, $tmp222, ((org$frostlanguage$frostc$ChoiceCase*) $tmp225), param3, param2);
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block34; else goto block35;
block34:;
// line 76
org$frostlanguage$frostc$FixedArray* $tmp228 = *(&local7);
ITable* $tmp229 = ((frost$collections$CollectionView*) $tmp228)->$class->itable;
while ($tmp229->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp229 = $tmp229->next;
}
$fn231 $tmp230 = $tmp229->methods[0];
frost$core$Int64 $tmp232 = $tmp230(((frost$collections$CollectionView*) $tmp228));
frost$core$Int64 $tmp233 = (frost$core$Int64) {1};
int64_t $tmp234 = $tmp232.value;
int64_t $tmp235 = $tmp233.value;
bool $tmp236 = $tmp234 != $tmp235;
frost$core$Bit $tmp237 = (frost$core$Bit) {$tmp236};
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block36; else goto block37;
block36:;
// line 77
org$frostlanguage$frostc$Position $tmp239 = *(&local15);
frost$core$String* $tmp240 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s241, &$s242);
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, $tmp239, $tmp240);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// unreffing REF($336:frost.core.String)
// line 80
org$frostlanguage$frostc$Pair* $tmp243 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
// unreffing cc
*(&local18) = ((org$frostlanguage$frostc$Pair*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp244 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
// unreffing args
*(&local17) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp245 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
// unreffing base
*(&local16) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp246 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
// unreffing t
*(&local14) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$Compiler$AutoScope* $tmp247 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// unreffing auto
*(&local9) = ((org$frostlanguage$frostc$Compiler$AutoScope*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp248 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
// unreffing statements
*(&local8) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp249 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
// unreffing tests
*(&local7) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp250 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
// unreffing w
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$IR* $tmp251 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
// unreffing ir
*(&local1) = ((org$frostlanguage$frostc$IR*) NULL);
return;
block37:;
// line 82
org$frostlanguage$frostc$FixedArray* $tmp252 = *(&local17);
ITable* $tmp253 = ((frost$collections$CollectionView*) $tmp252)->$class->itable;
while ($tmp253->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp253 = $tmp253->next;
}
$fn255 $tmp254 = $tmp253->methods[0];
frost$core$Int64 $tmp256 = $tmp254(((frost$collections$CollectionView*) $tmp252));
org$frostlanguage$frostc$Pair* $tmp257 = *(&local18);
frost$core$Object** $tmp258 = &$tmp257->second;
frost$core$Object* $tmp259 = *$tmp258;
frost$collections$Array** $tmp260 = &((org$frostlanguage$frostc$ChoiceCase*) $tmp259)->fields;
frost$collections$Array* $tmp261 = *$tmp260;
ITable* $tmp262 = ((frost$collections$CollectionView*) $tmp261)->$class->itable;
while ($tmp262->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp262 = $tmp262->next;
}
$fn264 $tmp263 = $tmp262->methods[0];
frost$core$Int64 $tmp265 = $tmp263(((frost$collections$CollectionView*) $tmp261));
int64_t $tmp266 = $tmp256.value;
int64_t $tmp267 = $tmp265.value;
bool $tmp268 = $tmp266 != $tmp267;
frost$core$Bit $tmp269 = (frost$core$Bit) {$tmp268};
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block38; else goto block39;
block38:;
// line 83
org$frostlanguage$frostc$Position $tmp271 = *(&local15);
org$frostlanguage$frostc$Pair* $tmp272 = *(&local18);
frost$core$Object** $tmp273 = &$tmp272->second;
frost$core$Object* $tmp274 = *$tmp273;
frost$core$String* $tmp275 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s276, ((frost$core$Object*) ((org$frostlanguage$frostc$ChoiceCase*) $tmp274)));
frost$core$String* $tmp277 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp275, &$s278);
frost$core$String* $tmp279 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp277, &$s280);
org$frostlanguage$frostc$Pair* $tmp281 = *(&local18);
frost$core$Object** $tmp282 = &$tmp281->second;
frost$core$Object* $tmp283 = *$tmp282;
frost$collections$Array** $tmp284 = &((org$frostlanguage$frostc$ChoiceCase*) $tmp283)->fields;
frost$collections$Array* $tmp285 = *$tmp284;
ITable* $tmp286 = ((frost$collections$CollectionView*) $tmp285)->$class->itable;
while ($tmp286->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp286 = $tmp286->next;
}
$fn288 $tmp287 = $tmp286->methods[0];
frost$core$Int64 $tmp289 = $tmp287(((frost$collections$CollectionView*) $tmp285));
frost$core$Int64$wrapper* $tmp290;
$tmp290 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp290->value = $tmp289;
frost$core$String* $tmp291 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp279, ((frost$core$Object*) $tmp290));
org$frostlanguage$frostc$Pair* $tmp292 = *(&local18);
frost$core$Object** $tmp293 = &$tmp292->second;
frost$core$Object* $tmp294 = *$tmp293;
frost$collections$Array** $tmp295 = &((org$frostlanguage$frostc$ChoiceCase*) $tmp294)->fields;
frost$collections$Array* $tmp296 = *$tmp295;
ITable* $tmp297 = ((frost$collections$CollectionView*) $tmp296)->$class->itable;
while ($tmp297->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp297 = $tmp297->next;
}
$fn299 $tmp298 = $tmp297->methods[0];
frost$core$Int64 $tmp300 = $tmp298(((frost$collections$CollectionView*) $tmp296));
frost$core$Int64 $tmp301 = (frost$core$Int64) {1};
frost$core$Bit $tmp302 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp300, $tmp301);
frost$core$Bit$wrapper* $tmp303;
$tmp303 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp303->value = $tmp302;
ITable* $tmp304 = ((frost$core$Formattable*) $tmp303)->$class->itable;
while ($tmp304->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp304 = $tmp304->next;
}
$fn306 $tmp305 = $tmp304->methods[0];
frost$core$String* $tmp307 = $tmp305(((frost$core$Formattable*) $tmp303), &$s308);
frost$core$String* $tmp309 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s310, $tmp307);
frost$core$String* $tmp311 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp309, &$s312);
frost$core$String* $tmp313 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp291, $tmp311);
frost$core$String* $tmp314 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp313, &$s315);
org$frostlanguage$frostc$FixedArray* $tmp316 = *(&local17);
ITable* $tmp317 = ((frost$collections$CollectionView*) $tmp316)->$class->itable;
while ($tmp317->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp317 = $tmp317->next;
}
$fn319 $tmp318 = $tmp317->methods[0];
frost$core$Int64 $tmp320 = $tmp318(((frost$collections$CollectionView*) $tmp316));
frost$core$Int64$wrapper* $tmp321;
$tmp321 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp321->value = $tmp320;
frost$core$String* $tmp322 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp314, ((frost$core$Object*) $tmp321));
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, $tmp271, $tmp322);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
// unreffing REF($456:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
// unreffing REF($455:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
// unreffing REF($450:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
// unreffing REF($449:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
// unreffing REF($448:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
// unreffing REF($447:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
// unreffing REF($446:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp303)));
// unreffing REF($444:frost.core.Formattable)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
// unreffing REF($431:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
// unreffing REF($430:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
// unreffing REF($419:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
// unreffing REF($418:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
// unreffing REF($417:frost.core.String)
// line 87
org$frostlanguage$frostc$Pair* $tmp323 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
// unreffing cc
*(&local18) = ((org$frostlanguage$frostc$Pair*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp324 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
// unreffing args
*(&local17) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp325 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
// unreffing base
*(&local16) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp326 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
// unreffing t
*(&local14) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$Compiler$AutoScope* $tmp327 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
// unreffing auto
*(&local9) = ((org$frostlanguage$frostc$Compiler$AutoScope*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp328 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
// unreffing statements
*(&local8) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp329 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
// unreffing tests
*(&local7) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp330 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
// unreffing w
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$IR* $tmp331 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// unreffing ir
*(&local1) = ((org$frostlanguage$frostc$IR*) NULL);
return;
block39:;
// line 89
frost$core$Bit $tmp332 = frost$core$Bit$init$builtin_bit(param4 == NULL);
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block40; else goto block41;
block40:;
// line 90
org$frostlanguage$frostc$Position $tmp334 = *(&local15);
$fn336 $tmp335 = ($fn336) param2->$class->vtable[2];
org$frostlanguage$frostc$Type* $tmp337 = $tmp335(param2);
frost$core$String* $tmp338 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s339, ((frost$core$Object*) $tmp337));
frost$core$String* $tmp340 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp338, &$s341);
frost$core$String* $tmp342 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp340, &$s343);
org$frostlanguage$frostc$Pair* $tmp344 = *(&local18);
frost$core$Object** $tmp345 = &$tmp344->second;
frost$core$Object* $tmp346 = *$tmp345;
frost$core$Weak** $tmp347 = &((org$frostlanguage$frostc$ChoiceCase*) $tmp346)->owner;
frost$core$Weak* $tmp348 = *$tmp347;
frost$core$Object* $tmp349 = frost$core$Weak$get$R$frost$core$Weak$T($tmp348);
frost$core$String** $tmp350 = &((org$frostlanguage$frostc$ClassDecl*) $tmp349)->name;
frost$core$String* $tmp351 = *$tmp350;
frost$core$String* $tmp352 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s353, $tmp351);
frost$core$String* $tmp354 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp352, &$s355);
frost$core$String* $tmp356 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp342, $tmp354);
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, $tmp334, $tmp356);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
// unreffing REF($571:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
// unreffing REF($570:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
// unreffing REF($569:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp349);
// unreffing REF($565:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// unreffing REF($556:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
// unreffing REF($555:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
// unreffing REF($554:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// unreffing REF($552:org.frostlanguage.frostc.Type)
// line 93
org$frostlanguage$frostc$Pair* $tmp357 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
// unreffing cc
*(&local18) = ((org$frostlanguage$frostc$Pair*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp358 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
// unreffing args
*(&local17) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp359 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
// unreffing base
*(&local16) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp360 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
// unreffing t
*(&local14) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$Compiler$AutoScope* $tmp361 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
// unreffing auto
*(&local9) = ((org$frostlanguage$frostc$Compiler$AutoScope*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp362 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
// unreffing statements
*(&local8) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp363 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
// unreffing tests
*(&local7) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp364 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
// unreffing w
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$IR* $tmp365 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
// unreffing ir
*(&local1) = ((org$frostlanguage$frostc$IR*) NULL);
return;
block41:;
// line 95
*(&local19) = ((org$frostlanguage$frostc$IR$Value*) NULL);
// line 1
// line 97
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp366 = (org$frostlanguage$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$AutoUnrefs$class);
org$frostlanguage$frostc$Compiler$AutoUnrefs$init$org$frostlanguage$frostc$Compiler($tmp366, param0);
*(&local20) = ((org$frostlanguage$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp367 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
*(&local20) = $tmp366;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
// unreffing REF($648:org.frostlanguage.frostc.Compiler.AutoUnrefs)
// line 98
frost$collections$Array* $tmp368 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp369 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp368, $tmp369);
org$frostlanguage$frostc$ASTNode* $tmp370 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp371 = (frost$core$Int64) {25};
org$frostlanguage$frostc$ASTNode* $tmp372 = *(&local16);
$fn374 $tmp373 = ($fn374) $tmp372->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp375 = $tmp373($tmp372);
org$frostlanguage$frostc$Pair* $tmp376 = *(&local18);
frost$core$Object** $tmp377 = &$tmp376->second;
frost$core$Object* $tmp378 = *$tmp377;
frost$core$Int64* $tmp379 = &((org$frostlanguage$frostc$ChoiceCase*) $tmp378)->rawValue;
frost$core$Int64 $tmp380 = *$tmp379;
frost$core$UInt64 $tmp381 = frost$core$Int64$convert$R$frost$core$UInt64($tmp380);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$UInt64($tmp370, $tmp371, $tmp375, $tmp381);
frost$collections$Array$add$frost$collections$Array$T($tmp368, ((frost$core$Object*) $tmp370));
*(&local21) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
frost$collections$Array* $tmp382 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
*(&local21) = $tmp368;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
// unreffing REF($666:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
// unreffing REF($661:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 100
org$frostlanguage$frostc$ASTNode* $tmp383 = *(&local16);
$fn385 $tmp384 = ($fn385) $tmp383->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp386 = $tmp384($tmp383);
frost$collections$Array* $tmp387 = *(&local21);
org$frostlanguage$frostc$Compiler$TypeContext* $tmp388 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp389 = (frost$core$Int64) {3};
org$frostlanguage$frostc$Type* $tmp390 = org$frostlanguage$frostc$Type$Bit$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp388, $tmp389, $tmp390);
org$frostlanguage$frostc$IR$Value* $tmp391 = org$frostlanguage$frostc$expression$Call$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, $tmp386, param4, &$s392, ((frost$collections$ListView*) $tmp387), $tmp388);
*(&local22) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
org$frostlanguage$frostc$IR$Value* $tmp393 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
*(&local22) = $tmp391;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
// unreffing REF($706:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
// unreffing REF($704:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
// unreffing REF($702:org.frostlanguage.frostc.Compiler.TypeContext)
// line 103
org$frostlanguage$frostc$IR$Value* $tmp394 = *(&local22);
frost$core$Bit $tmp395 = frost$core$Bit$init$builtin_bit($tmp394 != NULL);
bool $tmp396 = $tmp395.value;
if ($tmp396) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp397 = (frost$core$Int64) {103};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s398, $tmp397);
abort(); // unreachable
block42:;
// line 104
org$frostlanguage$frostc$Position $tmp399 = *(&local15);
org$frostlanguage$frostc$IR$Value* $tmp400 = *(&local22);
org$frostlanguage$frostc$IR$Value* $tmp401 = org$frostlanguage$frostc$Compiler$extractBuiltinBit$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$R$org$frostlanguage$frostc$IR$Value(param0, $tmp399, $tmp400);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
org$frostlanguage$frostc$IR$Value* $tmp402 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
*(&local19) = $tmp401;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
// unreffing REF($736:org.frostlanguage.frostc.IR.Value)
org$frostlanguage$frostc$IR$Value* $tmp403 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// unreffing test
*(&local22) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp404 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
// unreffing eqArgs
*(&local21) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp405 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
// unreffing unrefs
*(&local20) = ((org$frostlanguage$frostc$Compiler$AutoUnrefs*) NULL);
// line 107
org$frostlanguage$frostc$IR* $tmp406 = *(&local1);
org$frostlanguage$frostc$IR$Statement* $tmp407 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp408 = (frost$core$Int64) {5};
org$frostlanguage$frostc$Position $tmp409 = *(&local15);
org$frostlanguage$frostc$IR$Value* $tmp410 = *(&local19);
org$frostlanguage$frostc$IR$Block$ID $tmp411 = *(&local10);
org$frostlanguage$frostc$IR$Block$ID $tmp412 = *(&local3);
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$org$frostlanguage$frostc$IR$Block$ID$org$frostlanguage$frostc$IR$Block$ID($tmp407, $tmp408, $tmp409, $tmp410, $tmp411, $tmp412);
$fn414 $tmp413 = ($fn414) $tmp406->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp415 = $tmp413($tmp406, $tmp407);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
// unreffing REF($763:org.frostlanguage.frostc.IR.Statement)
// line 109
org$frostlanguage$frostc$IR* $tmp416 = *(&local1);
org$frostlanguage$frostc$IR$Block$ID $tmp417 = *(&local10);
$fn419 $tmp418 = ($fn419) $tmp416->$class->vtable[4];
$tmp418($tmp416, $tmp417);
// line 110
frost$core$Int64 $tmp420 = (frost$core$Int64) {0};
org$frostlanguage$frostc$FixedArray* $tmp421 = *(&local17);
ITable* $tmp422 = ((frost$collections$CollectionView*) $tmp421)->$class->itable;
while ($tmp422->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp422 = $tmp422->next;
}
$fn424 $tmp423 = $tmp422->methods[0];
frost$core$Int64 $tmp425 = $tmp423(((frost$collections$CollectionView*) $tmp421));
frost$core$Bit $tmp426 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp427 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp420, $tmp425, $tmp426);
frost$core$Int64 $tmp428 = $tmp427.min;
*(&local23) = $tmp428;
frost$core$Int64 $tmp429 = $tmp427.max;
frost$core$Bit $tmp430 = $tmp427.inclusive;
bool $tmp431 = $tmp430.value;
frost$core$Int64 $tmp432 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp433 = frost$core$Int64$convert$R$frost$core$UInt64($tmp432);
if ($tmp431) goto block47; else goto block48;
block47:;
int64_t $tmp434 = $tmp428.value;
int64_t $tmp435 = $tmp429.value;
bool $tmp436 = $tmp434 <= $tmp435;
frost$core$Bit $tmp437 = (frost$core$Bit) {$tmp436};
bool $tmp438 = $tmp437.value;
if ($tmp438) goto block44; else goto block45;
block48:;
int64_t $tmp439 = $tmp428.value;
int64_t $tmp440 = $tmp429.value;
bool $tmp441 = $tmp439 < $tmp440;
frost$core$Bit $tmp442 = (frost$core$Bit) {$tmp441};
bool $tmp443 = $tmp442.value;
if ($tmp443) goto block44; else goto block45;
block44:;
// line 111
org$frostlanguage$frostc$IR* $tmp444 = *(&local1);
org$frostlanguage$frostc$IR$Statement* $tmp445 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp446 = (frost$core$Int64) {4};
org$frostlanguage$frostc$Position $tmp447 = *(&local15);
org$frostlanguage$frostc$Pair* $tmp448 = *(&local18);
frost$core$Object** $tmp449 = &$tmp448->second;
frost$core$Object* $tmp450 = *$tmp449;
frost$core$Int64 $tmp451 = *(&local23);
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$org$frostlanguage$frostc$ChoiceCase$frost$core$Int64($tmp445, $tmp446, $tmp447, param2, ((org$frostlanguage$frostc$ChoiceCase*) $tmp450), $tmp451);
$fn453 $tmp452 = ($fn453) $tmp444->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp454 = $tmp452($tmp444, $tmp445);
*(&local24) = $tmp454;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
// unreffing REF($810:org.frostlanguage.frostc.IR.Statement)
// line 114
org$frostlanguage$frostc$IR* $tmp455 = *(&local1);
org$frostlanguage$frostc$IR$Statement* $tmp456 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp457 = (frost$core$Int64) {13};
org$frostlanguage$frostc$Position $tmp458 = *(&local15);
org$frostlanguage$frostc$IR$Value* $tmp459 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp460 = (frost$core$Int64) {7};
org$frostlanguage$frostc$IR$Statement$ID $tmp461 = *(&local24);
org$frostlanguage$frostc$Pair* $tmp462 = *(&local18);
frost$core$Object** $tmp463 = &$tmp462->second;
frost$core$Object* $tmp464 = *$tmp463;
frost$collections$Array** $tmp465 = &((org$frostlanguage$frostc$ChoiceCase*) $tmp464)->fields;
frost$collections$Array* $tmp466 = *$tmp465;
frost$core$Int64 $tmp467 = *(&local23);
frost$core$Object* $tmp468 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp466, $tmp467);
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$IR$Statement$ID$org$frostlanguage$frostc$Type($tmp459, $tmp460, $tmp461, ((org$frostlanguage$frostc$Type*) $tmp468));
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value($tmp456, $tmp457, $tmp458, $tmp459);
$fn470 $tmp469 = ($fn470) $tmp455->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp471 = $tmp469($tmp455, $tmp456);
*(&local25) = $tmp471;
frost$core$Frost$unref$frost$core$Object$Q($tmp468);
// unreffing REF($843:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
// unreffing REF($831:org.frostlanguage.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
// unreffing REF($828:org.frostlanguage.frostc.IR.Statement)
// line 116
org$frostlanguage$frostc$FixedArray* $tmp472 = *(&local17);
frost$core$Int64 $tmp473 = *(&local23);
frost$core$Object* $tmp474 = org$frostlanguage$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlanguage$frostc$FixedArray$T($tmp472, $tmp473);
frost$core$String* $tmp475 = org$frostlanguage$frostc$Compiler$getText$org$frostlanguage$frostc$ASTNode$R$frost$core$String$Q(param0, ((org$frostlanguage$frostc$ASTNode*) $tmp474));
frost$core$Bit $tmp476 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp475, &$s477);
bool $tmp478 = $tmp476.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
// unreffing REF($865:frost.core.String?)
frost$core$Frost$unref$frost$core$Object$Q($tmp474);
// unreffing REF($863:org.frostlanguage.frostc.FixedArray.T)
if ($tmp478) goto block49; else goto block50;
block49:;
// line 117
goto block46;
block50:;
// line 119
*(&local26) = ((org$frostlanguage$frostc$Pair*) NULL);
// line 1
// line 121
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp479 = (org$frostlanguage$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$AutoUnrefs$class);
org$frostlanguage$frostc$Compiler$AutoUnrefs$init$org$frostlanguage$frostc$Compiler($tmp479, param0);
*(&local27) = ((org$frostlanguage$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp480 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
*(&local27) = $tmp479;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
// unreffing REF($882:org.frostlanguage.frostc.Compiler.AutoUnrefs)
// line 122
org$frostlanguage$frostc$FixedArray* $tmp481 = *(&local17);
frost$core$Int64 $tmp482 = *(&local23);
frost$core$Object* $tmp483 = org$frostlanguage$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlanguage$frostc$FixedArray$T($tmp481, $tmp482);
frost$core$Int64 $tmp484 = (frost$core$Int64) {1};
org$frostlanguage$frostc$Variable$Kind $tmp485 = org$frostlanguage$frostc$Variable$Kind$init$frost$core$Int64($tmp484);
org$frostlanguage$frostc$ASTNode* $tmp486 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp487 = (frost$core$Int64) {26};
org$frostlanguage$frostc$Position $tmp488 = *(&local15);
org$frostlanguage$frostc$IR$Value* $tmp489 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp490 = (frost$core$Int64) {7};
org$frostlanguage$frostc$IR$Statement$ID $tmp491 = *(&local25);
org$frostlanguage$frostc$Pair* $tmp492 = *(&local18);
frost$core$Object** $tmp493 = &$tmp492->second;
frost$core$Object* $tmp494 = *$tmp493;
frost$collections$Array** $tmp495 = &((org$frostlanguage$frostc$ChoiceCase*) $tmp494)->fields;
frost$collections$Array* $tmp496 = *$tmp495;
frost$core$Int64 $tmp497 = *(&local23);
frost$core$Object* $tmp498 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp496, $tmp497);
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$IR$Statement$ID$org$frostlanguage$frostc$Type($tmp489, $tmp490, $tmp491, ((org$frostlanguage$frostc$Type*) $tmp498));
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value($tmp486, $tmp487, $tmp488, $tmp489);
org$frostlanguage$frostc$Pair* $tmp499 = org$frostlanguage$frostc$Compiler$compileTarget$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Variable$Kind$org$frostlanguage$frostc$ASTNode$Q$org$frostlanguage$frostc$Type$Q$R$org$frostlanguage$frostc$Pair$LTorg$frostlanguage$frostc$Variable$Corg$frostlanguage$frostc$IR$Value$Q$GT$Q(param0, ((org$frostlanguage$frostc$ASTNode*) $tmp483), $tmp485, $tmp486, ((org$frostlanguage$frostc$Type*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
org$frostlanguage$frostc$Pair* $tmp500 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
*(&local26) = $tmp499;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
// unreffing REF($922:org.frostlanguage.frostc.Pair<org.frostlanguage.frostc.Variable, org.frostlanguage.frostc.IR.Value?>?)
frost$core$Frost$unref$frost$core$Object$Q($tmp498);
// unreffing REF($917:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
// unreffing REF($905:org.frostlanguage.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
// unreffing REF($902:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q($tmp483);
// unreffing REF($898:org.frostlanguage.frostc.FixedArray.T)
// line 129
org$frostlanguage$frostc$lvalue$VariableLValue* $tmp501 = (org$frostlanguage$frostc$lvalue$VariableLValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlanguage$frostc$lvalue$VariableLValue$class);
org$frostlanguage$frostc$Position $tmp502 = *(&local15);
org$frostlanguage$frostc$Pair* $tmp503 = *(&local26);
frost$core$Object** $tmp504 = &$tmp503->first;
frost$core$Object* $tmp505 = *$tmp504;
org$frostlanguage$frostc$lvalue$VariableLValue$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$Variable($tmp501, param0, $tmp502, ((org$frostlanguage$frostc$Variable*) $tmp505));
org$frostlanguage$frostc$IR$Value* $tmp506 = (org$frostlanguage$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$IR$Value$class);
frost$core$Int64 $tmp507 = (frost$core$Int64) {7};
org$frostlanguage$frostc$IR$Statement$ID $tmp508 = *(&local25);
org$frostlanguage$frostc$Pair* $tmp509 = *(&local18);
frost$core$Object** $tmp510 = &$tmp509->second;
frost$core$Object* $tmp511 = *$tmp510;
frost$collections$Array** $tmp512 = &((org$frostlanguage$frostc$ChoiceCase*) $tmp511)->fields;
frost$collections$Array* $tmp513 = *$tmp512;
frost$core$Int64 $tmp514 = *(&local23);
frost$core$Object* $tmp515 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp513, $tmp514);
org$frostlanguage$frostc$IR$Value$init$frost$core$Int64$org$frostlanguage$frostc$IR$Statement$ID$org$frostlanguage$frostc$Type($tmp506, $tmp507, $tmp508, ((org$frostlanguage$frostc$Type*) $tmp515));
$fn517 $tmp516 = ($fn517) $tmp501->$class->vtable[4];
$tmp516($tmp501, $tmp506);
frost$core$Frost$unref$frost$core$Object$Q($tmp515);
// unreffing REF($965:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
// unreffing REF($953:org.frostlanguage.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
// unreffing REF($945:org.frostlanguage.frostc.lvalue.VariableLValue)
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp518 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
// unreffing unrefs
*(&local27) = ((org$frostlanguage$frostc$Compiler$AutoUnrefs*) NULL);
// line 133
org$frostlanguage$frostc$Pair* $tmp519 = *(&local26);
frost$core$Object** $tmp520 = &$tmp519->first;
frost$core$Object* $tmp521 = *$tmp520;
org$frostlanguage$frostc$Type** $tmp522 = &((org$frostlanguage$frostc$Variable*) $tmp521)->type;
org$frostlanguage$frostc$Type* $tmp523 = *$tmp522;
frost$core$Bit $tmp524 = org$frostlanguage$frostc$Compiler$isRefCounted$org$frostlanguage$frostc$Type$R$frost$core$Bit(param0, $tmp523);
bool $tmp525 = $tmp524.value;
if ($tmp525) goto block51; else goto block52;
block51:;
// line 134
frost$collections$Stack** $tmp526 = &param0->enclosingContexts;
frost$collections$Stack* $tmp527 = *$tmp526;
org$frostlanguage$frostc$Compiler$EnclosingContext* $tmp528 = (org$frostlanguage$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp529 = (frost$core$Int64) {2};
org$frostlanguage$frostc$Pair* $tmp530 = *(&local26);
frost$core$Object** $tmp531 = &$tmp530->first;
frost$core$Object* $tmp532 = *$tmp531;
org$frostlanguage$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlanguage$frostc$Variable($tmp528, $tmp529, ((org$frostlanguage$frostc$Variable*) $tmp532));
frost$collections$Stack$push$frost$collections$Stack$T($tmp527, ((frost$core$Object*) $tmp528));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
// unreffing REF($999:org.frostlanguage.frostc.Compiler.EnclosingContext)
goto block52;
block52:;
org$frostlanguage$frostc$Pair* $tmp533 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
// unreffing target
*(&local26) = ((org$frostlanguage$frostc$Pair*) NULL);
goto block46;
block46:;
frost$core$Int64 $tmp534 = *(&local23);
int64_t $tmp535 = $tmp429.value;
int64_t $tmp536 = $tmp534.value;
int64_t $tmp537 = $tmp535 - $tmp536;
frost$core$Int64 $tmp538 = (frost$core$Int64) {$tmp537};
frost$core$UInt64 $tmp539 = frost$core$Int64$convert$R$frost$core$UInt64($tmp538);
if ($tmp431) goto block54; else goto block55;
block54:;
uint64_t $tmp540 = $tmp539.value;
uint64_t $tmp541 = $tmp433.value;
bool $tmp542 = $tmp540 >= $tmp541;
frost$core$Bit $tmp543 = (frost$core$Bit) {$tmp542};
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block53; else goto block45;
block55:;
uint64_t $tmp545 = $tmp539.value;
uint64_t $tmp546 = $tmp433.value;
bool $tmp547 = $tmp545 > $tmp546;
frost$core$Bit $tmp548 = (frost$core$Bit) {$tmp547};
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block53; else goto block45;
block53:;
int64_t $tmp550 = $tmp534.value;
int64_t $tmp551 = $tmp432.value;
int64_t $tmp552 = $tmp550 + $tmp551;
frost$core$Int64 $tmp553 = (frost$core$Int64) {$tmp552};
*(&local23) = $tmp553;
goto block44;
block45:;
// line 139
org$frostlanguage$frostc$IR$Value* $tmp554 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
// unreffing testBit
*(&local19) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$Pair* $tmp555 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
// unreffing cc
*(&local18) = ((org$frostlanguage$frostc$Pair*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp556 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
// unreffing args
*(&local17) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp557 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
// unreffing base
*(&local16) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp558 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
// unreffing t
*(&local14) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block16;
block35:;
goto block33;
block33:;
org$frostlanguage$frostc$Pair* $tmp559 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
// unreffing cc
*(&local18) = ((org$frostlanguage$frostc$Pair*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp560 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
// unreffing args
*(&local17) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp561 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
// unreffing base
*(&local16) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block30;
block30:;
// line 144
*(&local28) = ((org$frostlanguage$frostc$IR$Value*) NULL);
// line 1
// line 146
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp562 = (org$frostlanguage$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$AutoUnrefs$class);
org$frostlanguage$frostc$Compiler$AutoUnrefs$init$org$frostlanguage$frostc$Compiler($tmp562, param0);
*(&local29) = ((org$frostlanguage$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp563 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
*(&local29) = $tmp562;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
// unreffing REF($1092:org.frostlanguage.frostc.Compiler.AutoUnrefs)
// line 147
*(&local30) = ((org$frostlanguage$frostc$IR$Value*) NULL);
// line 148
org$frostlanguage$frostc$ASTNode* $tmp564 = *(&local14);
org$frostlanguage$frostc$Pair* $tmp565 = org$frostlanguage$frostc$Compiler$getChoiceCase$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Pair$LTorg$frostlanguage$frostc$Type$Corg$frostlanguage$frostc$ChoiceCase$GT$Q(param0, $tmp564);
*(&local31) = ((org$frostlanguage$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
org$frostlanguage$frostc$Pair* $tmp566 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
*(&local31) = $tmp565;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
// unreffing REF($1108:org.frostlanguage.frostc.Pair<org.frostlanguage.frostc.Type, org.frostlanguage.frostc.ChoiceCase>?)
// line 149
org$frostlanguage$frostc$Pair* $tmp567 = *(&local31);
frost$core$Bit $tmp568 = frost$core$Bit$init$builtin_bit($tmp567 != NULL);
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block56; else goto block58;
block56:;
// line 150
frost$collections$Array* $tmp570 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp571 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp570, $tmp571);
org$frostlanguage$frostc$ASTNode* $tmp572 = (org$frostlanguage$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlanguage$frostc$ASTNode$class);
frost$core$Int64 $tmp573 = (frost$core$Int64) {25};
org$frostlanguage$frostc$ASTNode* $tmp574 = *(&local14);
$fn576 $tmp575 = ($fn576) $tmp574->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp577 = $tmp575($tmp574);
org$frostlanguage$frostc$Pair* $tmp578 = *(&local31);
frost$core$Object** $tmp579 = &$tmp578->second;
frost$core$Object* $tmp580 = *$tmp579;
frost$core$Int64* $tmp581 = &((org$frostlanguage$frostc$ChoiceCase*) $tmp580)->rawValue;
frost$core$Int64 $tmp582 = *$tmp581;
frost$core$UInt64 $tmp583 = frost$core$Int64$convert$R$frost$core$UInt64($tmp582);
org$frostlanguage$frostc$ASTNode$init$frost$core$Int64$org$frostlanguage$frostc$Position$frost$core$UInt64($tmp572, $tmp573, $tmp577, $tmp583);
frost$collections$Array$add$frost$collections$Array$T($tmp570, ((frost$core$Object*) $tmp572));
*(&local32) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
frost$collections$Array* $tmp584 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
*(&local32) = $tmp570;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
// unreffing REF($1131:org.frostlanguage.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
// unreffing REF($1126:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 152
org$frostlanguage$frostc$ASTNode* $tmp585 = *(&local14);
$fn587 $tmp586 = ($fn587) $tmp585->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp588 = $tmp586($tmp585);
frost$collections$Array* $tmp589 = *(&local32);
org$frostlanguage$frostc$Compiler$TypeContext* $tmp590 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp591 = (frost$core$Int64) {3};
org$frostlanguage$frostc$Type* $tmp592 = org$frostlanguage$frostc$Type$Bit$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp590, $tmp591, $tmp592);
org$frostlanguage$frostc$IR$Value* $tmp593 = org$frostlanguage$frostc$expression$Call$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, $tmp588, param4, &$s594, ((frost$collections$ListView*) $tmp589), $tmp590);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
org$frostlanguage$frostc$IR$Value* $tmp595 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
*(&local30) = $tmp593;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
// unreffing REF($1171:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
// unreffing REF($1169:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
// unreffing REF($1167:org.frostlanguage.frostc.Compiler.TypeContext)
// line 154
org$frostlanguage$frostc$IR$Value* $tmp596 = *(&local30);
frost$core$Bit $tmp597 = frost$core$Bit$init$builtin_bit($tmp596 == NULL);
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block59; else goto block60;
block59:;
// line 155
frost$collections$Array* $tmp599 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
// unreffing args
*(&local32) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$Pair* $tmp600 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
// unreffing cc
*(&local31) = ((org$frostlanguage$frostc$Pair*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp601 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
// unreffing test
*(&local30) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp602 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
// unreffing unrefs
*(&local29) = ((org$frostlanguage$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp603 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
// unreffing testBit
*(&local28) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp604 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
// unreffing t
*(&local14) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$Compiler$AutoScope* $tmp605 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
// unreffing auto
*(&local9) = ((org$frostlanguage$frostc$Compiler$AutoScope*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp606 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
// unreffing statements
*(&local8) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp607 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
// unreffing tests
*(&local7) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp608 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
// unreffing w
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$IR* $tmp609 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
// unreffing ir
*(&local1) = ((org$frostlanguage$frostc$IR*) NULL);
return;
block60:;
frost$collections$Array* $tmp610 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
// unreffing args
*(&local32) = ((frost$collections$Array*) NULL);
goto block57;
block58:;
// line 1
// line 159
org$frostlanguage$frostc$ASTNode* $tmp611 = *(&local14);
$fn613 $tmp612 = ($fn613) $tmp611->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp614 = $tmp612($tmp611);
frost$collections$Array* $tmp615 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp616 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp615, $tmp616);
org$frostlanguage$frostc$ASTNode* $tmp617 = *(&local14);
frost$collections$Array$add$frost$collections$Array$T($tmp615, ((frost$core$Object*) $tmp617));
org$frostlanguage$frostc$Compiler$TypeContext* $tmp618 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp619 = (frost$core$Int64) {3};
org$frostlanguage$frostc$Type* $tmp620 = org$frostlanguage$frostc$Type$Bit$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp618, $tmp619, $tmp620);
org$frostlanguage$frostc$IR$Value* $tmp621 = org$frostlanguage$frostc$expression$Call$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, $tmp614, param2, &$s622, ((frost$collections$ListView*) $tmp615), $tmp618);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
org$frostlanguage$frostc$IR$Value* $tmp623 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
*(&local30) = $tmp621;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
// unreffing REF($1274:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
// unreffing REF($1272:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
// unreffing REF($1270:org.frostlanguage.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
// unreffing REF($1261:frost.collections.Array<org.frostlanguage.frostc.ASTNode>)
// line 161
org$frostlanguage$frostc$IR$Value* $tmp624 = *(&local30);
frost$core$Bit $tmp625 = frost$core$Bit$init$builtin_bit($tmp624 == NULL);
bool $tmp626 = $tmp625.value;
if ($tmp626) goto block61; else goto block62;
block61:;
// line 162
org$frostlanguage$frostc$Pair* $tmp627 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
// unreffing cc
*(&local31) = ((org$frostlanguage$frostc$Pair*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp628 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
// unreffing test
*(&local30) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp629 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
// unreffing unrefs
*(&local29) = ((org$frostlanguage$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp630 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
// unreffing testBit
*(&local28) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp631 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
// unreffing t
*(&local14) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$Compiler$AutoScope* $tmp632 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
// unreffing auto
*(&local9) = ((org$frostlanguage$frostc$Compiler$AutoScope*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp633 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
// unreffing statements
*(&local8) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp634 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
// unreffing tests
*(&local7) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp635 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
// unreffing w
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
org$frostlanguage$frostc$IR* $tmp636 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
// unreffing ir
*(&local1) = ((org$frostlanguage$frostc$IR*) NULL);
return;
block62:;
goto block57;
block57:;
// line 165
org$frostlanguage$frostc$Position $tmp637 = *(&local6);
org$frostlanguage$frostc$IR$Value* $tmp638 = *(&local30);
org$frostlanguage$frostc$IR$Value* $tmp639 = org$frostlanguage$frostc$Compiler$extractBuiltinBit$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$R$org$frostlanguage$frostc$IR$Value(param0, $tmp637, $tmp638);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
org$frostlanguage$frostc$IR$Value* $tmp640 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
*(&local28) = $tmp639;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
// unreffing REF($1356:org.frostlanguage.frostc.IR.Value)
org$frostlanguage$frostc$Pair* $tmp641 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
// unreffing cc
*(&local31) = ((org$frostlanguage$frostc$Pair*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp642 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
// unreffing test
*(&local30) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp643 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
// unreffing unrefs
*(&local29) = ((org$frostlanguage$frostc$Compiler$AutoUnrefs*) NULL);
// line 167
org$frostlanguage$frostc$IR* $tmp644 = *(&local1);
org$frostlanguage$frostc$IR$Statement* $tmp645 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp646 = (frost$core$Int64) {5};
org$frostlanguage$frostc$Position $tmp647 = *(&local6);
org$frostlanguage$frostc$IR$Value* $tmp648 = *(&local28);
org$frostlanguage$frostc$IR$Block$ID $tmp649 = *(&local10);
org$frostlanguage$frostc$IR$Block$ID $tmp650 = *(&local3);
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$org$frostlanguage$frostc$IR$Block$ID$org$frostlanguage$frostc$IR$Block$ID($tmp645, $tmp646, $tmp647, $tmp648, $tmp649, $tmp650);
$fn652 $tmp651 = ($fn652) $tmp644->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp653 = $tmp651($tmp644, $tmp645);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
// unreffing REF($1383:org.frostlanguage.frostc.IR.Statement)
org$frostlanguage$frostc$IR$Value* $tmp654 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
// unreffing testBit
*(&local28) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp655 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
// unreffing t
*(&local14) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block16;
block16:;
frost$core$Int64 $tmp656 = *(&local11);
int64_t $tmp657 = $tmp122.value;
int64_t $tmp658 = $tmp656.value;
int64_t $tmp659 = $tmp657 - $tmp658;
frost$core$Int64 $tmp660 = (frost$core$Int64) {$tmp659};
frost$core$UInt64 $tmp661 = frost$core$Int64$convert$R$frost$core$UInt64($tmp660);
if ($tmp124) goto block64; else goto block65;
block64:;
uint64_t $tmp662 = $tmp661.value;
uint64_t $tmp663 = $tmp126.value;
bool $tmp664 = $tmp662 >= $tmp663;
frost$core$Bit $tmp665 = (frost$core$Bit) {$tmp664};
bool $tmp666 = $tmp665.value;
if ($tmp666) goto block63; else goto block15;
block65:;
uint64_t $tmp667 = $tmp661.value;
uint64_t $tmp668 = $tmp126.value;
bool $tmp669 = $tmp667 > $tmp668;
frost$core$Bit $tmp670 = (frost$core$Bit) {$tmp669};
bool $tmp671 = $tmp670.value;
if ($tmp671) goto block63; else goto block15;
block63:;
int64_t $tmp672 = $tmp656.value;
int64_t $tmp673 = $tmp125.value;
int64_t $tmp674 = $tmp672 + $tmp673;
frost$core$Int64 $tmp675 = (frost$core$Int64) {$tmp674};
*(&local11) = $tmp675;
goto block14;
block15:;
// line 170
org$frostlanguage$frostc$IR* $tmp676 = *(&local1);
org$frostlanguage$frostc$IR$Block$ID $tmp677 = *(&local10);
$fn679 $tmp678 = ($fn679) $tmp676->$class->vtable[4];
$tmp678($tmp676, $tmp677);
// line 171
org$frostlanguage$frostc$FixedArray* $tmp680 = *(&local8);
ITable* $tmp681 = ((frost$collections$Iterable*) $tmp680)->$class->itable;
while ($tmp681->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp681 = $tmp681->next;
}
$fn683 $tmp682 = $tmp681->methods[0];
frost$collections$Iterator* $tmp684 = $tmp682(((frost$collections$Iterable*) $tmp680));
goto block66;
block66:;
ITable* $tmp685 = $tmp684->$class->itable;
while ($tmp685->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp685 = $tmp685->next;
}
$fn687 $tmp686 = $tmp685->methods[0];
frost$core$Bit $tmp688 = $tmp686($tmp684);
bool $tmp689 = $tmp688.value;
if ($tmp689) goto block68; else goto block67;
block67:;
*(&local33) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp690 = $tmp684->$class->itable;
while ($tmp690->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp690 = $tmp690->next;
}
$fn692 $tmp691 = $tmp690->methods[1];
frost$core$Object* $tmp693 = $tmp691($tmp684);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp693)));
org$frostlanguage$frostc$ASTNode* $tmp694 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
*(&local33) = ((org$frostlanguage$frostc$ASTNode*) $tmp693);
// line 172
org$frostlanguage$frostc$ASTNode* $tmp695 = *(&local33);
org$frostlanguage$frostc$Compiler$compileStatement$org$frostlanguage$frostc$ASTNode(param0, $tmp695);
frost$core$Frost$unref$frost$core$Object$Q($tmp693);
// unreffing REF($1452:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp696 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
// unreffing s
*(&local33) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block66;
block68:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
// unreffing REF($1441:frost.collections.Iterator<frost.collections.Iterable.T>)
org$frostlanguage$frostc$Compiler$AutoScope* $tmp697 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
// unreffing auto
*(&local9) = ((org$frostlanguage$frostc$Compiler$AutoScope*) NULL);
// line 175
org$frostlanguage$frostc$IR* $tmp698 = *(&local1);
$fn700 $tmp699 = ($fn700) $tmp698->$class->vtable[5];
frost$core$Bit $tmp701 = $tmp699($tmp698);
frost$core$Bit $tmp702 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp701);
bool $tmp703 = $tmp702.value;
if ($tmp703) goto block69; else goto block70;
block69:;
// line 176
org$frostlanguage$frostc$IR* $tmp704 = *(&local1);
org$frostlanguage$frostc$IR$Statement* $tmp705 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp706 = (frost$core$Int64) {1};
org$frostlanguage$frostc$Position $tmp707 = *(&local6);
org$frostlanguage$frostc$IR$Block$ID $tmp708 = *(&local2);
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Block$ID($tmp705, $tmp706, $tmp707, $tmp708);
$fn710 $tmp709 = ($fn710) $tmp704->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp711 = $tmp709($tmp704, $tmp705);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
// unreffing REF($1489:org.frostlanguage.frostc.IR.Statement)
goto block70;
block70:;
org$frostlanguage$frostc$FixedArray* $tmp712 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
// unreffing statements
*(&local8) = ((org$frostlanguage$frostc$FixedArray*) NULL);
org$frostlanguage$frostc$FixedArray* $tmp713 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
// unreffing tests
*(&local7) = ((org$frostlanguage$frostc$FixedArray*) NULL);
goto block11;
block13:;
// line 180
frost$core$Bit $tmp714 = frost$core$Bit$init$builtin_bit(false);
bool $tmp715 = $tmp714.value;
if ($tmp715) goto block71; else goto block72;
block72:;
frost$core$Int64 $tmp716 = (frost$core$Int64) {180};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s717, $tmp716);
abort(); // unreachable
block71:;
goto block11;
block11:;
org$frostlanguage$frostc$ASTNode* $tmp718 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
// unreffing w
*(&local5) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block8;
block8:;
frost$core$Int64 $tmp719 = *(&local4);
int64_t $tmp720 = $tmp74.value;
int64_t $tmp721 = $tmp719.value;
int64_t $tmp722 = $tmp720 - $tmp721;
frost$core$Int64 $tmp723 = (frost$core$Int64) {$tmp722};
frost$core$UInt64 $tmp724 = frost$core$Int64$convert$R$frost$core$UInt64($tmp723);
if ($tmp76) goto block74; else goto block75;
block74:;
uint64_t $tmp725 = $tmp724.value;
uint64_t $tmp726 = $tmp78.value;
bool $tmp727 = $tmp725 >= $tmp726;
frost$core$Bit $tmp728 = (frost$core$Bit) {$tmp727};
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block73; else goto block7;
block75:;
uint64_t $tmp730 = $tmp724.value;
uint64_t $tmp731 = $tmp78.value;
bool $tmp732 = $tmp730 > $tmp731;
frost$core$Bit $tmp733 = (frost$core$Bit) {$tmp732};
bool $tmp734 = $tmp733.value;
if ($tmp734) goto block73; else goto block7;
block73:;
int64_t $tmp735 = $tmp719.value;
int64_t $tmp736 = $tmp77.value;
int64_t $tmp737 = $tmp735 + $tmp736;
frost$core$Int64 $tmp738 = (frost$core$Int64) {$tmp737};
*(&local4) = $tmp738;
goto block6;
block7:;
// line 184
frost$core$Bit $tmp739 = frost$core$Bit$init$builtin_bit(param6 != NULL);
bool $tmp740 = $tmp739.value;
if ($tmp740) goto block76; else goto block77;
block76:;
// line 1
// line 186
org$frostlanguage$frostc$Compiler$AutoScope* $tmp741 = (org$frostlanguage$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$AutoScope$class);
org$frostlanguage$frostc$Compiler$AutoScope$init$org$frostlanguage$frostc$Compiler($tmp741, param0);
*(&local34) = ((org$frostlanguage$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
org$frostlanguage$frostc$Compiler$AutoScope* $tmp742 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local34) = $tmp741;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
// unreffing REF($1557:org.frostlanguage.frostc.Compiler.AutoScope)
// line 187
org$frostlanguage$frostc$IR* $tmp743 = *(&local1);
org$frostlanguage$frostc$IR$Block$ID $tmp744 = *(&local3);
$fn746 $tmp745 = ($fn746) $tmp743->$class->vtable[4];
$tmp745($tmp743, $tmp744);
// line 188
ITable* $tmp747 = ((frost$collections$Iterable*) param6)->$class->itable;
while ($tmp747->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp747 = $tmp747->next;
}
$fn749 $tmp748 = $tmp747->methods[0];
frost$collections$Iterator* $tmp750 = $tmp748(((frost$collections$Iterable*) param6));
goto block78;
block78:;
ITable* $tmp751 = $tmp750->$class->itable;
while ($tmp751->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp751 = $tmp751->next;
}
$fn753 $tmp752 = $tmp751->methods[0];
frost$core$Bit $tmp754 = $tmp752($tmp750);
bool $tmp755 = $tmp754.value;
if ($tmp755) goto block80; else goto block79;
block79:;
*(&local35) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp756 = $tmp750->$class->itable;
while ($tmp756->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp756 = $tmp756->next;
}
$fn758 $tmp757 = $tmp756->methods[1];
frost$core$Object* $tmp759 = $tmp757($tmp750);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp759)));
org$frostlanguage$frostc$ASTNode* $tmp760 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
*(&local35) = ((org$frostlanguage$frostc$ASTNode*) $tmp759);
// line 189
org$frostlanguage$frostc$ASTNode* $tmp761 = *(&local35);
org$frostlanguage$frostc$Compiler$compileStatement$org$frostlanguage$frostc$ASTNode(param0, $tmp761);
frost$core$Frost$unref$frost$core$Object$Q($tmp759);
// unreffing REF($1589:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp762 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
// unreffing s
*(&local35) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block78;
block80:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
// unreffing REF($1578:frost.collections.Iterator<frost.collections.Iterable.T>)
org$frostlanguage$frostc$Compiler$AutoScope* $tmp763 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
// unreffing scope
*(&local34) = ((org$frostlanguage$frostc$Compiler$AutoScope*) NULL);
// line 192
org$frostlanguage$frostc$IR* $tmp764 = *(&local1);
$fn766 $tmp765 = ($fn766) $tmp764->$class->vtable[5];
frost$core$Bit $tmp767 = $tmp765($tmp764);
frost$core$Bit $tmp768 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp767);
bool $tmp769 = $tmp768.value;
if ($tmp769) goto block81; else goto block82;
block81:;
// line 193
org$frostlanguage$frostc$IR* $tmp770 = *(&local1);
org$frostlanguage$frostc$IR$Statement* $tmp771 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp772 = (frost$core$Int64) {1};
org$frostlanguage$frostc$IR$Block$ID $tmp773 = *(&local2);
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Block$ID($tmp771, $tmp772, param1, $tmp773);
$fn775 $tmp774 = ($fn775) $tmp770->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp776 = $tmp774($tmp770, $tmp771);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
// unreffing REF($1626:org.frostlanguage.frostc.IR.Statement)
goto block82;
block82:;
goto block77;
block77:;
// line 196
org$frostlanguage$frostc$IR* $tmp777 = *(&local1);
org$frostlanguage$frostc$IR$Block$ID $tmp778 = *(&local2);
$fn780 $tmp779 = ($fn780) $tmp777->$class->vtable[4];
$tmp779($tmp777, $tmp778);
org$frostlanguage$frostc$IR* $tmp781 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
// unreffing ir
*(&local1) = ((org$frostlanguage$frostc$IR*) NULL);
return;

}
void org$frostlanguage$frostc$statement$Match$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$Position param1, org$frostlanguage$frostc$ASTNode* param2, org$frostlanguage$frostc$FixedArray* param3, org$frostlanguage$frostc$FixedArray* param4) {

org$frostlanguage$frostc$IR$Value* local0 = NULL;
frost$core$Bit local1;
frost$core$Bit local2;
org$frostlanguage$frostc$ClassDecl* local3 = NULL;
org$frostlanguage$frostc$ClassDecl* local4 = NULL;
org$frostlanguage$frostc$IR$Value* local5 = NULL;
// line 202
org$frostlanguage$frostc$Compiler$TypeContext* $tmp782 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp783 = (frost$core$Int64) {1};
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp782, $tmp783);
org$frostlanguage$frostc$IR$Value* $tmp784 = org$frostlanguage$frostc$Compiler$compileExpression$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param2, $tmp782);
*(&local0) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
org$frostlanguage$frostc$IR$Value* $tmp785 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
*(&local0) = $tmp784;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
// unreffing REF($4:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
// unreffing REF($1:org.frostlanguage.frostc.Compiler.TypeContext)
// line 203
org$frostlanguage$frostc$IR$Value* $tmp786 = *(&local0);
frost$core$Bit $tmp787 = frost$core$Bit$init$builtin_bit($tmp786 == NULL);
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block3; else goto block4;
block3:;
*(&local1) = $tmp787;
goto block5;
block4:;
ITable* $tmp789 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp789->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp789 = $tmp789->next;
}
$fn791 $tmp790 = $tmp789->methods[0];
frost$core$Int64 $tmp792 = $tmp790(((frost$collections$CollectionView*) param3));
frost$core$Int64 $tmp793 = (frost$core$Int64) {0};
frost$core$Bit $tmp794 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp792, $tmp793);
bool $tmp795 = $tmp794.value;
if ($tmp795) goto block6; else goto block7;
block6:;
frost$core$Bit $tmp796 = frost$core$Bit$init$builtin_bit(param4 == NULL);
*(&local2) = $tmp796;
goto block8;
block7:;
*(&local2) = $tmp794;
goto block8;
block8:;
frost$core$Bit $tmp797 = *(&local2);
*(&local1) = $tmp797;
goto block5;
block5:;
frost$core$Bit $tmp798 = *(&local1);
bool $tmp799 = $tmp798.value;
if ($tmp799) goto block1; else goto block2;
block1:;
// line 204
org$frostlanguage$frostc$IR$Value* $tmp800 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
// unreffing compiledValue
*(&local0) = ((org$frostlanguage$frostc$IR$Value*) NULL);
return;
block2:;
// line 206
org$frostlanguage$frostc$IR$Value* $tmp801 = *(&local0);
$fn803 $tmp802 = ($fn803) $tmp801->$class->vtable[2];
org$frostlanguage$frostc$Type* $tmp804 = $tmp802($tmp801);
org$frostlanguage$frostc$ClassDecl* $tmp805 = org$frostlanguage$frostc$Compiler$getClass$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$ClassDecl$Q(param0, $tmp804);
*(&local3) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
org$frostlanguage$frostc$ClassDecl* $tmp806 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
*(&local3) = $tmp805;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
// unreffing REF($57:org.frostlanguage.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
// unreffing REF($56:org.frostlanguage.frostc.Type)
// line 207
org$frostlanguage$frostc$ClassDecl* $tmp807 = *(&local3);
frost$core$Bit $tmp808 = frost$core$Bit$init$builtin_bit($tmp807 == NULL);
bool $tmp809 = $tmp808.value;
if ($tmp809) goto block9; else goto block10;
block9:;
// line 208
org$frostlanguage$frostc$ClassDecl* $tmp810 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
// unreffing cl
*(&local3) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp811 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
// unreffing compiledValue
*(&local0) = ((org$frostlanguage$frostc$IR$Value*) NULL);
return;
block10:;
// line 210
*(&local4) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ClassDecl*) NULL)));
org$frostlanguage$frostc$ClassDecl* $tmp812 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
*(&local4) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
// line 211
*(&local5) = ((org$frostlanguage$frostc$IR$Value*) NULL);
// line 212
org$frostlanguage$frostc$ClassDecl* $tmp813 = *(&local3);
org$frostlanguage$frostc$ClassDecl$Kind* $tmp814 = &$tmp813->classKind;
org$frostlanguage$frostc$ClassDecl$Kind $tmp815 = *$tmp814;
org$frostlanguage$frostc$ClassDecl$Kind$wrapper* $tmp816;
$tmp816 = (org$frostlanguage$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$ClassDecl$Kind$wrapperclass);
$tmp816->value = $tmp815;
frost$core$Int64 $tmp817 = (frost$core$Int64) {2};
org$frostlanguage$frostc$ClassDecl$Kind $tmp818 = org$frostlanguage$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp817);
org$frostlanguage$frostc$ClassDecl$Kind$wrapper* $tmp819;
$tmp819 = (org$frostlanguage$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$ClassDecl$Kind$wrapperclass);
$tmp819->value = $tmp818;
ITable* $tmp820 = ((frost$core$Equatable*) $tmp816)->$class->itable;
while ($tmp820->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp820 = $tmp820->next;
}
$fn822 $tmp821 = $tmp820->methods[0];
frost$core$Bit $tmp823 = $tmp821(((frost$core$Equatable*) $tmp816), ((frost$core$Equatable*) $tmp819));
bool $tmp824 = $tmp823.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp819)));
// unreffing REF($108:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp816)));
// unreffing REF($104:frost.core.Equatable<org.frostlanguage.frostc.ClassDecl.Kind>)
if ($tmp824) goto block11; else goto block13;
block11:;
// line 213
org$frostlanguage$frostc$IR$Value* $tmp825 = *(&local0);
org$frostlanguage$frostc$IR$Value* $tmp826 = org$frostlanguage$frostc$expression$Dot$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$frost$core$String$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, $tmp825, &$s827);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
org$frostlanguage$frostc$IR$Value* $tmp828 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
*(&local5) = $tmp826;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
// unreffing REF($122:org.frostlanguage.frostc.IR.Value?)
// line 215
org$frostlanguage$frostc$ClassDecl* $tmp829 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
org$frostlanguage$frostc$ClassDecl* $tmp830 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
*(&local4) = $tmp829;
goto block12;
block13:;
// line 217
org$frostlanguage$frostc$ClassDecl* $tmp831 = *(&local3);
org$frostlanguage$frostc$SymbolTable* $tmp832 = org$frostlanguage$frostc$Compiler$getSymbolTable$org$frostlanguage$frostc$ClassDecl$R$org$frostlanguage$frostc$SymbolTable(param0, $tmp831);
org$frostlanguage$frostc$Symbol* $tmp833 = org$frostlanguage$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlanguage$frostc$Symbol$Q($tmp832, &$s834);
frost$core$Bit $tmp835 = frost$core$Bit$init$builtin_bit($tmp833 == NULL);
bool $tmp836 = $tmp835.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
// unreffing REF($145:org.frostlanguage.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
// unreffing REF($144:org.frostlanguage.frostc.SymbolTable)
if ($tmp836) goto block14; else goto block16;
block14:;
// line 218
$fn838 $tmp837 = ($fn838) param2->$class->vtable[2];
org$frostlanguage$frostc$Position $tmp839 = $tmp837(param2);
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, $tmp839, &$s840);
// line 219
org$frostlanguage$frostc$IR$Value* $tmp841 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
// unreffing choiceRawValue
*(&local5) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp842 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
// unreffing choiceClass
*(&local4) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp843 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
// unreffing cl
*(&local3) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp844 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
// unreffing compiledValue
*(&local0) = ((org$frostlanguage$frostc$IR$Value*) NULL);
return;
block16:;
// line 1
// line 222
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$IR$Value* $tmp845 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
*(&local5) = ((org$frostlanguage$frostc$IR$Value*) NULL);
goto block15;
block15:;
goto block12;
block12:;
// line 224
org$frostlanguage$frostc$IR$Value* $tmp846 = *(&local0);
org$frostlanguage$frostc$ClassDecl* $tmp847 = *(&local4);
org$frostlanguage$frostc$IR$Value* $tmp848 = *(&local5);
org$frostlanguage$frostc$statement$Match$compileChainedIfMatch$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$org$frostlanguage$frostc$ClassDecl$Q$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$Q(param0, param1, $tmp846, $tmp847, $tmp848, param3, param4);
org$frostlanguage$frostc$IR$Value* $tmp849 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
// unreffing choiceRawValue
*(&local5) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp850 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
// unreffing choiceClass
*(&local4) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp851 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
// unreffing cl
*(&local3) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp852 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
// unreffing compiledValue
*(&local0) = ((org$frostlanguage$frostc$IR$Value*) NULL);
return;

}
void org$frostlanguage$frostc$statement$Match$init(org$frostlanguage$frostc$statement$Match* param0) {

return;

}
void org$frostlanguage$frostc$statement$Match$cleanup(org$frostlanguage$frostc$statement$Match* param0) {

// line 23
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

