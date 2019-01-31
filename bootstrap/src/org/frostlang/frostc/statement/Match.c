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
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Frost.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/AutoScope.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/Compiler/AutoUnrefs.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/Compiler/Target.h"
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
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/ClassDecl/Kind.h"
#include "org/frostlang/frostc/expression/Dot.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Match$class_type org$frostlang$frostc$statement$Match$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Match$cleanup} };

typedef org$frostlang$frostc$Type* (*$fn12)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn39)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn57)(org$frostlang$frostc$IR*, frost$core$String*);
typedef frost$core$Int64 (*$fn68)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn109)(org$frostlang$frostc$IR*, frost$core$String*);
typedef frost$core$Int64 (*$fn116)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn146)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn152)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn157)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn172)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn188)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$Position (*$fn218)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Int64 (*$fn228)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn252)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn261)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn285)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn296)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn303)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Int64 (*$fn316)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn333)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Position (*$fn371)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn382)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn412)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn417)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn422)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn451)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn468)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Position (*$fn525)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn584)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn595)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn622)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn662)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn689)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn693)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn697)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn702)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn710)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn720)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn754)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn757)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn761)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn766)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn774)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn783)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn788)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn799)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn809)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn828)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn844)(org$frostlang$frostc$ASTNode*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x4d\x61\x74\x63\x68", 36, -4868280242278132552, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x61\x74\x63\x68\x20\x63\x68\x6f\x69\x63\x65\x20\x63\x61\x73\x65\x20\x27", 26, 924211577719466455, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x61\x67\x61\x69\x6e\x73\x74\x20\x27", 11, 5504180647906747646, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x61\x74\x63\x68\x20\x63\x68\x6f\x69\x63\x65\x20\x63\x61\x73\x65\x20\x27", 26, 924211577719466455, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x61\x67\x61\x69\x6e\x73\x74\x20", 10, 5899009811946657419, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x4d\x61\x74\x63\x68\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x43\x68\x61\x69\x6e\x65\x64\x49\x66\x4d\x61\x74\x63\x68\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2c\x20\x63\x68\x6f\x69\x63\x65\x43\x6c\x61\x73\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x2c\x20\x63\x68\x6f\x69\x63\x65\x52\x61\x77\x56\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x77\x68\x65\x6e\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x6f\x74\x68\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x29", 438, 5866251470127575791, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x74\x63\x68\x20\x65\x6e\x64", 9, 2284522982428118369, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x65\x73\x74\x20\x73\x75\x63\x63\x65\x73\x73", 12, 7036109776132282178, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x74\x63\x68", 5, 21953816826, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x65\x73\x74\x72\x75\x63\x74\x75\x72\x69\x6e\x67\x20\x63\x68\x6f\x69\x63\x65\x20\x27\x77\x68\x65\x6e\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x74\x6f\x67\x65\x74\x68\x65\x72\x20\x77\x69\x74\x68\x20", 57, 7310936708811456764, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x74\x68\x65\x72\x20\x27\x77\x68\x65\x6e\x27\x20\x63\x6f\x6d\x70\x61\x72\x69\x73\x6f\x6e\x73", 24, 5365199314206252049, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x27", 8, 21554282788333791, NULL };
static frost$core$String $s275 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20", 2, 14172, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x71\x75\x69\x72\x65\x73\x20", 9, 2339091676660267913, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x61\x72\x67\x75\x6d\x65\x6e\x74", 9, 1450721239526715900, NULL };
static frost$core$String $s309 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s312 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 10, -2438145452310052756, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s338 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x69\x73\x20", 5, 14602508524, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 19, 2848546980520752179, NULL };
static frost$core$String $s350 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s390 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s480 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s603 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s632 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s725 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s833 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static frost$core$String $s840 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s846 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27\x20\x76\x61\x6c\x75\x65\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x64\x65\x66\x69\x6e\x65\x20\x74\x68\x65\x20\x27\x3d\x27\x20\x6f\x70\x65\x72\x61\x74\x6f\x72", 46, 6331121231047041348, NULL };

frost$core$Bit org$frostlang$frostc$statement$Match$checkChoiceMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ChoiceCase$Q$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$R$frost$core$Bit(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ChoiceCase* param2, org$frostlang$frostc$ClassDecl* param3, org$frostlang$frostc$IR$Value* param4) {

// line 29
frost$core$Bit $tmp2 = frost$core$Bit$init$builtin_bit(param2 == NULL);
bool $tmp3 = $tmp2.value;
if ($tmp3) goto block1; else goto block2;
block1:;
// line 30
frost$core$Bit $tmp4 = frost$core$Bit$init$builtin_bit(false);
return $tmp4;
block2:;
// line 32
frost$core$Bit $tmp5 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block3; else goto block4;
block3:;
// line 33
frost$core$String* $tmp7 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s8, ((frost$core$Object*) param2));
frost$core$String* $tmp9 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp7, &$s10);
$fn12 $tmp11 = ($fn12) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp13 = $tmp11(param4);
frost$core$String* $tmp14 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp9, ((frost$core$Object*) $tmp13));
frost$core$String* $tmp15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp14, &$s16);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
// line 34
frost$core$Bit $tmp17 = frost$core$Bit$init$builtin_bit(false);
return $tmp17;
block4:;
// line 36
frost$core$Weak** $tmp18 = &param2->owner;
frost$core$Weak* $tmp19 = *$tmp18;
frost$core$Object* $tmp20 = frost$core$Weak$get$R$frost$core$Weak$T($tmp19);
bool $tmp21 = ((org$frostlang$frostc$ClassDecl*) $tmp20) != param3;
frost$core$Bit $tmp22 = frost$core$Bit$init$builtin_bit($tmp21);
bool $tmp23 = $tmp22.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp20);
if ($tmp23) goto block5; else goto block6;
block5:;
// line 37
frost$core$String* $tmp24 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s25, ((frost$core$Object*) param2));
frost$core$String* $tmp26 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp24, &$s27);
frost$core$String** $tmp28 = &param3->name;
frost$core$String* $tmp29 = *$tmp28;
frost$core$String* $tmp30 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s31, $tmp29);
frost$core$String* $tmp32 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp30, &$s33);
frost$core$String* $tmp34 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp26, $tmp32);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// line 39
frost$core$Bit $tmp35 = frost$core$Bit$init$builtin_bit(false);
return $tmp35;
block6:;
// line 41
frost$core$Bit $tmp36 = frost$core$Bit$init$builtin_bit(true);
return $tmp36;

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
org$frostlang$frostc$IR$Value* local26 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local27 = NULL;
org$frostlang$frostc$IR$Value* local28 = NULL;
org$frostlang$frostc$Pair* local29 = NULL;
frost$collections$Array* local30 = NULL;
org$frostlang$frostc$ASTNode* local31 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local32 = NULL;
org$frostlang$frostc$ASTNode* local33 = NULL;
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
if ($tmp46) goto block1; else goto block3;
block3:;
frost$core$Bit $tmp47 = frost$core$Bit$init$builtin_bit(param6 != NULL);
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp49 = (frost$core$Int64) {47};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s50, $tmp49, &$s51);
abort(); // unreachable
block1:;
// line 50
org$frostlang$frostc$IR** $tmp52 = &param0->ir;
org$frostlang$frostc$IR* $tmp53 = *$tmp52;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
org$frostlang$frostc$IR* $tmp54 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
*(&local0) = $tmp53;
// line 51
org$frostlang$frostc$IR* $tmp55 = *(&local0);
$fn57 $tmp56 = ($fn57) $tmp55->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp58 = $tmp56($tmp55, &$s59);
*(&local1) = $tmp58;
// line 52
org$frostlang$frostc$IR* $tmp60 = *(&local0);
org$frostlang$frostc$IR$Block** $tmp61 = &$tmp60->currentBlock;
org$frostlang$frostc$IR$Block* $tmp62 = *$tmp61;
org$frostlang$frostc$IR$Block$ID* $tmp63 = &$tmp62->id;
org$frostlang$frostc$IR$Block$ID $tmp64 = *$tmp63;
*(&local2) = $tmp64;
// line 53
frost$core$Int64 $tmp65 = (frost$core$Int64) {0};
ITable* $tmp66 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp66->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp66 = $tmp66->next;
}
$fn68 $tmp67 = $tmp66->methods[0];
frost$core$Int64 $tmp69 = $tmp67(((frost$collections$CollectionView*) param5));
frost$core$Bit $tmp70 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp71 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp65, $tmp69, $tmp70);
frost$core$Int64 $tmp72 = $tmp71.min;
*(&local3) = $tmp72;
frost$core$Int64 $tmp73 = $tmp71.max;
frost$core$Bit $tmp74 = $tmp71.inclusive;
bool $tmp75 = $tmp74.value;
frost$core$Int64 $tmp76 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp77 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp76);
if ($tmp75) goto block7; else goto block8;
block7:;
int64_t $tmp78 = $tmp72.value;
int64_t $tmp79 = $tmp73.value;
bool $tmp80 = $tmp78 <= $tmp79;
frost$core$Bit $tmp81 = (frost$core$Bit) {$tmp80};
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block4; else goto block5;
block8:;
int64_t $tmp83 = $tmp72.value;
int64_t $tmp84 = $tmp73.value;
bool $tmp85 = $tmp83 < $tmp84;
frost$core$Bit $tmp86 = (frost$core$Bit) {$tmp85};
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block4; else goto block5;
block4:;
// line 54
frost$core$Int64 $tmp88 = *(&local3);
frost$core$Object* $tmp89 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T(param5, $tmp88);
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp89)));
org$frostlang$frostc$ASTNode* $tmp90 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp89);
frost$core$Frost$unref$frost$core$Object$Q($tmp89);
// line 55
org$frostlang$frostc$ASTNode* $tmp91 = *(&local4);
frost$core$Int64* $tmp92 = &$tmp91->$rawValue;
frost$core$Int64 $tmp93 = *$tmp92;
frost$core$Int64 $tmp94 = (frost$core$Int64) {54};
frost$core$Bit $tmp95 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp93, $tmp94);
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp97 = (org$frostlang$frostc$Position*) ($tmp91->$data + 0);
org$frostlang$frostc$Position $tmp98 = *$tmp97;
*(&local5) = $tmp98;
org$frostlang$frostc$FixedArray** $tmp99 = (org$frostlang$frostc$FixedArray**) ($tmp91->$data + 16);
org$frostlang$frostc$FixedArray* $tmp100 = *$tmp99;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
org$frostlang$frostc$FixedArray* $tmp101 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
*(&local6) = $tmp100;
org$frostlang$frostc$FixedArray** $tmp102 = (org$frostlang$frostc$FixedArray**) ($tmp91->$data + 24);
org$frostlang$frostc$FixedArray* $tmp103 = *$tmp102;
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
org$frostlang$frostc$FixedArray* $tmp104 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
*(&local7) = $tmp103;
// line 1
// line 58
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp105 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp105, param0);
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
org$frostlang$frostc$Compiler$AutoScope* $tmp106 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
*(&local8) = $tmp105;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// line 59
org$frostlang$frostc$IR* $tmp107 = *(&local0);
$fn109 $tmp108 = ($fn109) $tmp107->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp110 = $tmp108($tmp107, &$s111);
*(&local9) = $tmp110;
// line 60
frost$core$Int64 $tmp112 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp113 = *(&local6);
ITable* $tmp114 = ((frost$collections$CollectionView*) $tmp113)->$class->itable;
while ($tmp114->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp114 = $tmp114->next;
}
$fn116 $tmp115 = $tmp114->methods[0];
frost$core$Int64 $tmp117 = $tmp115(((frost$collections$CollectionView*) $tmp113));
frost$core$Bit $tmp118 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp119 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp112, $tmp117, $tmp118);
frost$core$Int64 $tmp120 = $tmp119.min;
*(&local10) = $tmp120;
frost$core$Int64 $tmp121 = $tmp119.max;
frost$core$Bit $tmp122 = $tmp119.inclusive;
bool $tmp123 = $tmp122.value;
frost$core$Int64 $tmp124 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp125 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp124);
if ($tmp123) goto block15; else goto block16;
block15:;
int64_t $tmp126 = $tmp120.value;
int64_t $tmp127 = $tmp121.value;
bool $tmp128 = $tmp126 <= $tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block12; else goto block13;
block16:;
int64_t $tmp131 = $tmp120.value;
int64_t $tmp132 = $tmp121.value;
bool $tmp133 = $tmp131 < $tmp132;
frost$core$Bit $tmp134 = (frost$core$Bit) {$tmp133};
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block12; else goto block13;
block12:;
// line 61
org$frostlang$frostc$IR$Block$ID $tmp136 = *(&local2);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp137;
$tmp137 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp137->value = $tmp136;
org$frostlang$frostc$IR* $tmp138 = *(&local0);
org$frostlang$frostc$IR$Block** $tmp139 = &$tmp138->currentBlock;
org$frostlang$frostc$IR$Block* $tmp140 = *$tmp139;
org$frostlang$frostc$IR$Block$ID* $tmp141 = &$tmp140->id;
org$frostlang$frostc$IR$Block$ID $tmp142 = *$tmp141;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp143;
$tmp143 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp143->value = $tmp142;
ITable* $tmp144 = ((frost$core$Equatable*) $tmp137)->$class->itable;
while ($tmp144->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp144 = $tmp144->next;
}
$fn146 $tmp145 = $tmp144->methods[1];
frost$core$Bit $tmp147 = $tmp145(((frost$core$Equatable*) $tmp137), ((frost$core$Equatable*) $tmp143));
bool $tmp148 = $tmp147.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp143)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp137)));
if ($tmp148) goto block17; else goto block18;
block17:;
// line 62
org$frostlang$frostc$IR* $tmp149 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp150 = *(&local2);
$fn152 $tmp151 = ($fn152) $tmp149->$class->vtable[4];
$tmp151($tmp149, $tmp150);
goto block18;
block18:;
// line 64
frost$core$Int64 $tmp153 = *(&local10);
org$frostlang$frostc$FixedArray* $tmp154 = *(&local6);
ITable* $tmp155 = ((frost$collections$CollectionView*) $tmp154)->$class->itable;
while ($tmp155->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp155 = $tmp155->next;
}
$fn157 $tmp156 = $tmp155->methods[0];
frost$core$Int64 $tmp158 = $tmp156(((frost$collections$CollectionView*) $tmp154));
frost$core$Int64 $tmp159 = (frost$core$Int64) {1};
int64_t $tmp160 = $tmp158.value;
int64_t $tmp161 = $tmp159.value;
int64_t $tmp162 = $tmp160 - $tmp161;
frost$core$Int64 $tmp163 = (frost$core$Int64) {$tmp162};
int64_t $tmp164 = $tmp153.value;
int64_t $tmp165 = $tmp163.value;
bool $tmp166 = $tmp164 < $tmp165;
frost$core$Bit $tmp167 = (frost$core$Bit) {$tmp166};
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block19; else goto block23;
block23:;
frost$core$Int64 $tmp169 = *(&local3);
ITable* $tmp170 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp170->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp170 = $tmp170->next;
}
$fn172 $tmp171 = $tmp170->methods[0];
frost$core$Int64 $tmp173 = $tmp171(((frost$collections$CollectionView*) param5));
frost$core$Int64 $tmp174 = (frost$core$Int64) {1};
int64_t $tmp175 = $tmp173.value;
int64_t $tmp176 = $tmp174.value;
int64_t $tmp177 = $tmp175 - $tmp176;
frost$core$Int64 $tmp178 = (frost$core$Int64) {$tmp177};
int64_t $tmp179 = $tmp169.value;
int64_t $tmp180 = $tmp178.value;
bool $tmp181 = $tmp179 < $tmp180;
frost$core$Bit $tmp182 = (frost$core$Bit) {$tmp181};
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block19; else goto block22;
block22:;
frost$core$Bit $tmp184 = frost$core$Bit$init$builtin_bit(param6 != NULL);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block19; else goto block21;
block19:;
// line 65
org$frostlang$frostc$IR* $tmp186 = *(&local0);
$fn188 $tmp187 = ($fn188) $tmp186->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp189 = $tmp187($tmp186, &$s190);
*(&local2) = $tmp189;
goto block20;
block21:;
// line 1
// line 68
org$frostlang$frostc$IR$Block$ID $tmp191 = *(&local1);
*(&local2) = $tmp191;
goto block20;
block20:;
// line 70
org$frostlang$frostc$FixedArray* $tmp192 = *(&local6);
frost$core$Int64 $tmp193 = *(&local10);
frost$core$Object* $tmp194 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp192, $tmp193);
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp194)));
org$frostlang$frostc$ASTNode* $tmp195 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
*(&local11) = ((org$frostlang$frostc$ASTNode*) $tmp194);
frost$core$Frost$unref$frost$core$Object$Q($tmp194);
// line 71
org$frostlang$frostc$ASTNode* $tmp196 = *(&local11);
frost$core$Int64* $tmp197 = &$tmp196->$rawValue;
frost$core$Int64 $tmp198 = *$tmp197;
frost$core$Int64 $tmp199 = (frost$core$Int64) {9};
frost$core$Bit $tmp200 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp198, $tmp199);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block25; else goto block24;
block25:;
org$frostlang$frostc$Position* $tmp202 = (org$frostlang$frostc$Position*) ($tmp196->$data + 0);
org$frostlang$frostc$Position $tmp203 = *$tmp202;
*(&local12) = $tmp203;
org$frostlang$frostc$ASTNode** $tmp204 = (org$frostlang$frostc$ASTNode**) ($tmp196->$data + 16);
org$frostlang$frostc$ASTNode* $tmp205 = *$tmp204;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
org$frostlang$frostc$ASTNode* $tmp206 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
*(&local13) = $tmp205;
org$frostlang$frostc$FixedArray** $tmp207 = (org$frostlang$frostc$FixedArray**) ($tmp196->$data + 24);
org$frostlang$frostc$FixedArray* $tmp208 = *$tmp207;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
org$frostlang$frostc$FixedArray* $tmp209 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
*(&local14) = $tmp208;
// line 73
org$frostlang$frostc$ASTNode* $tmp210 = *(&local13);
org$frostlang$frostc$Pair* $tmp211 = org$frostlang$frostc$Compiler$getChoiceCase$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Corg$frostlang$frostc$ChoiceCase$GT$Q(param0, $tmp210);
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
org$frostlang$frostc$Pair* $tmp212 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local15) = $tmp211;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
// line 74
org$frostlang$frostc$Pair* $tmp213 = *(&local15);
frost$core$Bit $tmp214 = frost$core$Bit$init$builtin_bit($tmp213 != NULL);
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block26; else goto block27;
block26:;
// line 75
org$frostlang$frostc$ASTNode* $tmp216 = *(&local13);
$fn218 $tmp217 = ($fn218) $tmp216->$class->vtable[2];
org$frostlang$frostc$Position $tmp219 = $tmp217($tmp216);
org$frostlang$frostc$Pair* $tmp220 = *(&local15);
frost$core$Object** $tmp221 = &$tmp220->second;
frost$core$Object* $tmp222 = *$tmp221;
frost$core$Bit $tmp223 = org$frostlang$frostc$statement$Match$checkChoiceMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ChoiceCase$Q$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, $tmp219, ((org$frostlang$frostc$ChoiceCase*) $tmp222), param3, param2);
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block28; else goto block29;
block28:;
// line 77
org$frostlang$frostc$FixedArray* $tmp225 = *(&local6);
ITable* $tmp226 = ((frost$collections$CollectionView*) $tmp225)->$class->itable;
while ($tmp226->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp226 = $tmp226->next;
}
$fn228 $tmp227 = $tmp226->methods[0];
frost$core$Int64 $tmp229 = $tmp227(((frost$collections$CollectionView*) $tmp225));
frost$core$Int64 $tmp230 = (frost$core$Int64) {1};
int64_t $tmp231 = $tmp229.value;
int64_t $tmp232 = $tmp230.value;
bool $tmp233 = $tmp231 != $tmp232;
frost$core$Bit $tmp234 = (frost$core$Bit) {$tmp233};
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block30; else goto block31;
block30:;
// line 78
org$frostlang$frostc$Position $tmp236 = *(&local12);
frost$core$String* $tmp237 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s238, &$s239);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp236, $tmp237);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// line 81
org$frostlang$frostc$Pair* $tmp240 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp241 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp242 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp243 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp244 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp245 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp246 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp247 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp248 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block31:;
// line 83
org$frostlang$frostc$FixedArray* $tmp249 = *(&local14);
ITable* $tmp250 = ((frost$collections$CollectionView*) $tmp249)->$class->itable;
while ($tmp250->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp250 = $tmp250->next;
}
$fn252 $tmp251 = $tmp250->methods[0];
frost$core$Int64 $tmp253 = $tmp251(((frost$collections$CollectionView*) $tmp249));
org$frostlang$frostc$Pair* $tmp254 = *(&local15);
frost$core$Object** $tmp255 = &$tmp254->second;
frost$core$Object* $tmp256 = *$tmp255;
frost$collections$Array** $tmp257 = &((org$frostlang$frostc$ChoiceCase*) $tmp256)->fields;
frost$collections$Array* $tmp258 = *$tmp257;
ITable* $tmp259 = ((frost$collections$CollectionView*) $tmp258)->$class->itable;
while ($tmp259->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp259 = $tmp259->next;
}
$fn261 $tmp260 = $tmp259->methods[0];
frost$core$Int64 $tmp262 = $tmp260(((frost$collections$CollectionView*) $tmp258));
int64_t $tmp263 = $tmp253.value;
int64_t $tmp264 = $tmp262.value;
bool $tmp265 = $tmp263 != $tmp264;
frost$core$Bit $tmp266 = (frost$core$Bit) {$tmp265};
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block32; else goto block33;
block32:;
// line 84
org$frostlang$frostc$Position $tmp268 = *(&local12);
org$frostlang$frostc$Pair* $tmp269 = *(&local15);
frost$core$Object** $tmp270 = &$tmp269->second;
frost$core$Object* $tmp271 = *$tmp270;
frost$core$String* $tmp272 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s273, ((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp271)));
frost$core$String* $tmp274 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp272, &$s275);
frost$core$String* $tmp276 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp274, &$s277);
org$frostlang$frostc$Pair* $tmp278 = *(&local15);
frost$core$Object** $tmp279 = &$tmp278->second;
frost$core$Object* $tmp280 = *$tmp279;
frost$collections$Array** $tmp281 = &((org$frostlang$frostc$ChoiceCase*) $tmp280)->fields;
frost$collections$Array* $tmp282 = *$tmp281;
ITable* $tmp283 = ((frost$collections$CollectionView*) $tmp282)->$class->itable;
while ($tmp283->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp283 = $tmp283->next;
}
$fn285 $tmp284 = $tmp283->methods[0];
frost$core$Int64 $tmp286 = $tmp284(((frost$collections$CollectionView*) $tmp282));
frost$core$Int64$wrapper* $tmp287;
$tmp287 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp287->value = $tmp286;
frost$core$String* $tmp288 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp276, ((frost$core$Object*) $tmp287));
org$frostlang$frostc$Pair* $tmp289 = *(&local15);
frost$core$Object** $tmp290 = &$tmp289->second;
frost$core$Object* $tmp291 = *$tmp290;
frost$collections$Array** $tmp292 = &((org$frostlang$frostc$ChoiceCase*) $tmp291)->fields;
frost$collections$Array* $tmp293 = *$tmp292;
ITable* $tmp294 = ((frost$collections$CollectionView*) $tmp293)->$class->itable;
while ($tmp294->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp294 = $tmp294->next;
}
$fn296 $tmp295 = $tmp294->methods[0];
frost$core$Int64 $tmp297 = $tmp295(((frost$collections$CollectionView*) $tmp293));
frost$core$Int64 $tmp298 = (frost$core$Int64) {1};
frost$core$Bit $tmp299 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp297, $tmp298);
frost$core$Bit$wrapper* $tmp300;
$tmp300 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp300->value = $tmp299;
ITable* $tmp301 = ((frost$core$Formattable*) $tmp300)->$class->itable;
while ($tmp301->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp301 = $tmp301->next;
}
$fn303 $tmp302 = $tmp301->methods[0];
frost$core$String* $tmp304 = $tmp302(((frost$core$Formattable*) $tmp300), &$s305);
frost$core$String* $tmp306 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s307, $tmp304);
frost$core$String* $tmp308 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp306, &$s309);
frost$core$String* $tmp310 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp288, $tmp308);
frost$core$String* $tmp311 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp310, &$s312);
org$frostlang$frostc$FixedArray* $tmp313 = *(&local14);
ITable* $tmp314 = ((frost$collections$CollectionView*) $tmp313)->$class->itable;
while ($tmp314->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp314 = $tmp314->next;
}
$fn316 $tmp315 = $tmp314->methods[0];
frost$core$Int64 $tmp317 = $tmp315(((frost$collections$CollectionView*) $tmp313));
frost$core$Int64$wrapper* $tmp318;
$tmp318 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp318->value = $tmp317;
frost$core$String* $tmp319 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp311, ((frost$core$Object*) $tmp318));
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp268, $tmp319);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp300)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
// line 88
org$frostlang$frostc$Pair* $tmp320 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp321 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp322 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp323 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp324 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp325 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp326 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp327 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp328 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block33:;
// line 90
frost$core$Bit $tmp329 = frost$core$Bit$init$builtin_bit(param4 == NULL);
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block34; else goto block35;
block34:;
// line 91
org$frostlang$frostc$Position $tmp331 = *(&local12);
$fn333 $tmp332 = ($fn333) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp334 = $tmp332(param2);
frost$core$String* $tmp335 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s336, ((frost$core$Object*) $tmp334));
frost$core$String* $tmp337 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp335, &$s338);
frost$core$String* $tmp339 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp337, &$s340);
org$frostlang$frostc$Pair* $tmp341 = *(&local15);
frost$core$Object** $tmp342 = &$tmp341->second;
frost$core$Object* $tmp343 = *$tmp342;
frost$core$Weak** $tmp344 = &((org$frostlang$frostc$ChoiceCase*) $tmp343)->owner;
frost$core$Weak* $tmp345 = *$tmp344;
frost$core$Object* $tmp346 = frost$core$Weak$get$R$frost$core$Weak$T($tmp345);
frost$core$String** $tmp347 = &((org$frostlang$frostc$ClassDecl*) $tmp346)->name;
frost$core$String* $tmp348 = *$tmp347;
frost$core$String* $tmp349 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s350, $tmp348);
frost$core$String* $tmp351 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp349, &$s352);
frost$core$String* $tmp353 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp339, $tmp351);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp331, $tmp353);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
frost$core$Frost$unref$frost$core$Object$Q($tmp346);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
// line 94
org$frostlang$frostc$Pair* $tmp354 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp355 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp356 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp357 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp358 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp359 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp360 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp361 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp362 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block35:;
// line 96
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 1
// line 98
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp363 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp363, param0);
*(&local17) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp364 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
*(&local17) = $tmp363;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
// line 99
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp365 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp366 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp365, $tmp366);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp367 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp368 = (frost$core$Int64) {25};
org$frostlang$frostc$ASTNode* $tmp369 = *(&local13);
$fn371 $tmp370 = ($fn371) $tmp369->$class->vtable[2];
org$frostlang$frostc$Position $tmp372 = $tmp370($tmp369);
org$frostlang$frostc$Pair* $tmp373 = *(&local15);
frost$core$Object** $tmp374 = &$tmp373->second;
frost$core$Object* $tmp375 = *$tmp374;
frost$core$Int64* $tmp376 = &((org$frostlang$frostc$ChoiceCase*) $tmp375)->rawValue;
frost$core$Int64 $tmp377 = *$tmp376;
frost$core$UInt64 $tmp378 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp377);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp367, $tmp368, $tmp372, $tmp378);
frost$collections$Array$add$frost$collections$Array$T($tmp365, ((frost$core$Object*) $tmp367));
*(&local18) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
frost$collections$Array* $tmp379 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local18) = $tmp365;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
// line 101
org$frostlang$frostc$ASTNode* $tmp380 = *(&local13);
$fn382 $tmp381 = ($fn382) $tmp380->$class->vtable[2];
org$frostlang$frostc$Position $tmp383 = $tmp381($tmp380);
frost$collections$Array* $tmp384 = *(&local18);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp385 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp386 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp387 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp388 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp385, $tmp386, $tmp387, $tmp388);
org$frostlang$frostc$IR$Value* $tmp389 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp383, param4, &$s390, ((frost$collections$ListView*) $tmp384), $tmp385);
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
org$frostlang$frostc$IR$Value* $tmp391 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
*(&local19) = $tmp389;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
// line 104
org$frostlang$frostc$IR$Value* $tmp392 = *(&local19);
frost$core$Bit $tmp393 = frost$core$Bit$init$builtin_bit($tmp392 != NULL);
bool $tmp394 = $tmp393.value;
if ($tmp394) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp395 = (frost$core$Int64) {104};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s396, $tmp395);
abort(); // unreachable
block36:;
// line 105
org$frostlang$frostc$Position $tmp397 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp398 = *(&local19);
org$frostlang$frostc$IR$Value* $tmp399 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, $tmp397, $tmp398);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
org$frostlang$frostc$IR$Value* $tmp400 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
*(&local16) = $tmp399;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
org$frostlang$frostc$IR$Value* $tmp401 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp402 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp403 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local17) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 108
org$frostlang$frostc$IR* $tmp404 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp405 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp406 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp407 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp408 = *(&local16);
org$frostlang$frostc$IR$Block$ID $tmp409 = *(&local9);
org$frostlang$frostc$IR$Block$ID $tmp410 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp405, $tmp406, $tmp407, $tmp408, $tmp409, $tmp410);
$fn412 $tmp411 = ($fn412) $tmp404->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp413 = $tmp411($tmp404, $tmp405);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
// line 110
org$frostlang$frostc$IR* $tmp414 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp415 = *(&local9);
$fn417 $tmp416 = ($fn417) $tmp414->$class->vtable[4];
$tmp416($tmp414, $tmp415);
// line 111
frost$core$Int64 $tmp418 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp419 = *(&local14);
ITable* $tmp420 = ((frost$collections$CollectionView*) $tmp419)->$class->itable;
while ($tmp420->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp420 = $tmp420->next;
}
$fn422 $tmp421 = $tmp420->methods[0];
frost$core$Int64 $tmp423 = $tmp421(((frost$collections$CollectionView*) $tmp419));
frost$core$Bit $tmp424 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp425 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp418, $tmp423, $tmp424);
frost$core$Int64 $tmp426 = $tmp425.min;
*(&local20) = $tmp426;
frost$core$Int64 $tmp427 = $tmp425.max;
frost$core$Bit $tmp428 = $tmp425.inclusive;
bool $tmp429 = $tmp428.value;
frost$core$Int64 $tmp430 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp431 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp430);
if ($tmp429) goto block41; else goto block42;
block41:;
int64_t $tmp432 = $tmp426.value;
int64_t $tmp433 = $tmp427.value;
bool $tmp434 = $tmp432 <= $tmp433;
frost$core$Bit $tmp435 = (frost$core$Bit) {$tmp434};
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block38; else goto block39;
block42:;
int64_t $tmp437 = $tmp426.value;
int64_t $tmp438 = $tmp427.value;
bool $tmp439 = $tmp437 < $tmp438;
frost$core$Bit $tmp440 = (frost$core$Bit) {$tmp439};
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block38; else goto block39;
block38:;
// line 112
org$frostlang$frostc$IR* $tmp442 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp443 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp444 = (frost$core$Int64) {4};
org$frostlang$frostc$Position $tmp445 = *(&local12);
org$frostlang$frostc$Pair* $tmp446 = *(&local15);
frost$core$Object** $tmp447 = &$tmp446->second;
frost$core$Object* $tmp448 = *$tmp447;
frost$core$Int64 $tmp449 = *(&local20);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64($tmp443, $tmp444, $tmp445, param2, ((org$frostlang$frostc$ChoiceCase*) $tmp448), $tmp449);
$fn451 $tmp450 = ($fn451) $tmp442->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp452 = $tmp450($tmp442, $tmp443);
*(&local21) = $tmp452;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
// line 115
org$frostlang$frostc$IR* $tmp453 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp454 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp455 = (frost$core$Int64) {14};
org$frostlang$frostc$Position $tmp456 = *(&local12);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp457 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp458 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp459 = *(&local21);
org$frostlang$frostc$Pair* $tmp460 = *(&local15);
frost$core$Object** $tmp461 = &$tmp460->second;
frost$core$Object* $tmp462 = *$tmp461;
frost$collections$Array** $tmp463 = &((org$frostlang$frostc$ChoiceCase*) $tmp462)->fields;
frost$collections$Array* $tmp464 = *$tmp463;
frost$core$Int64 $tmp465 = *(&local20);
frost$core$Object* $tmp466 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp464, $tmp465);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp457, $tmp458, $tmp459, ((org$frostlang$frostc$Type*) $tmp466));
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp454, $tmp455, $tmp456, $tmp457);
$fn468 $tmp467 = ($fn468) $tmp453->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp469 = $tmp467($tmp453, $tmp454);
*(&local22) = $tmp469;
frost$core$Frost$unref$frost$core$Object$Q($tmp466);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
// line 117
org$frostlang$frostc$FixedArray* $tmp470 = *(&local14);
frost$core$Int64 $tmp471 = *(&local20);
frost$core$Object* $tmp472 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp470, $tmp471);
frost$core$String* $tmp473 = org$frostlang$frostc$Compiler$getText$org$frostlang$frostc$ASTNode$R$frost$core$String$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp472));
*(&local23) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
frost$core$String* $tmp474 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
*(&local23) = $tmp473;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
frost$core$Frost$unref$frost$core$Object$Q($tmp472);
// line 118
frost$core$String* $tmp475 = *(&local23);
frost$core$Bit $tmp476 = frost$core$Bit$init$builtin_bit($tmp475 != NULL);
bool $tmp477 = $tmp476.value;
if ($tmp477) goto block45; else goto block44;
block45:;
frost$core$String* $tmp478 = *(&local23);
frost$core$Bit $tmp479 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp478, &$s480);
bool $tmp481 = $tmp479.value;
if ($tmp481) goto block43; else goto block44;
block43:;
// line 119
frost$core$String* $tmp482 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
*(&local23) = ((frost$core$String*) NULL);
goto block40;
block44:;
// line 121
*(&local24) = ((org$frostlang$frostc$Compiler$Target*) NULL);
// line 1
// line 123
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp483 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp483, param0);
*(&local25) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp484 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
*(&local25) = $tmp483;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
// line 124
org$frostlang$frostc$FixedArray* $tmp485 = *(&local14);
frost$core$Int64 $tmp486 = *(&local20);
frost$core$Object* $tmp487 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp485, $tmp486);
frost$core$Int64 $tmp488 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp489 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp488);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp490 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp491 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp492 = *(&local12);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp493 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp494 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp495 = *(&local22);
org$frostlang$frostc$Pair* $tmp496 = *(&local15);
frost$core$Object** $tmp497 = &$tmp496->second;
frost$core$Object* $tmp498 = *$tmp497;
frost$collections$Array** $tmp499 = &((org$frostlang$frostc$ChoiceCase*) $tmp498)->fields;
frost$collections$Array* $tmp500 = *$tmp499;
frost$core$Int64 $tmp501 = *(&local20);
frost$core$Object* $tmp502 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp500, $tmp501);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp493, $tmp494, $tmp495, ((org$frostlang$frostc$Type*) $tmp502));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp490, $tmp491, $tmp492, $tmp493);
org$frostlang$frostc$Compiler$Target* $tmp503 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Compiler$Target$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp487), $tmp489, $tmp490, ((org$frostlang$frostc$Type*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
org$frostlang$frostc$Compiler$Target* $tmp504 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local24) = $tmp503;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$Frost$unref$frost$core$Object$Q($tmp502);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$core$Frost$unref$frost$core$Object$Q($tmp487);
// line 130
org$frostlang$frostc$Compiler$Target* $tmp505 = *(&local24);
frost$core$Bit $tmp506 = frost$core$Bit$init$builtin_bit($tmp505 == NULL);
bool $tmp507 = $tmp506.value;
if ($tmp507) goto block46; else goto block47;
block46:;
// line 131
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp508 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
*(&local25) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$Compiler$Target* $tmp509 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
*(&local24) = ((org$frostlang$frostc$Compiler$Target*) NULL);
frost$core$String* $tmp510 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
*(&local23) = ((frost$core$String*) NULL);
org$frostlang$frostc$IR$Value* $tmp511 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp512 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp513 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp514 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp515 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp516 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp517 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp518 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp519 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp520 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block47:;
// line 133
org$frostlang$frostc$FixedArray* $tmp521 = *(&local14);
frost$core$Int64 $tmp522 = *(&local20);
frost$core$Object* $tmp523 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp521, $tmp522);
$fn525 $tmp524 = ($fn525) ((org$frostlang$frostc$ASTNode*) $tmp523)->$class->vtable[2];
org$frostlang$frostc$Position $tmp526 = $tmp524(((org$frostlang$frostc$ASTNode*) $tmp523));
org$frostlang$frostc$Compiler$Target* $tmp527 = *(&local24);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp528 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp529 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp530 = *(&local22);
org$frostlang$frostc$Pair* $tmp531 = *(&local15);
frost$core$Object** $tmp532 = &$tmp531->second;
frost$core$Object* $tmp533 = *$tmp532;
frost$collections$Array** $tmp534 = &((org$frostlang$frostc$ChoiceCase*) $tmp533)->fields;
frost$collections$Array* $tmp535 = *$tmp534;
frost$core$Int64 $tmp536 = *(&local20);
frost$core$Object* $tmp537 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp535, $tmp536);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp528, $tmp529, $tmp530, ((org$frostlang$frostc$Type*) $tmp537));
org$frostlang$frostc$Compiler$compileStore$org$frostlang$frostc$Position$org$frostlang$frostc$Compiler$Target$org$frostlang$frostc$IR$Value(param0, $tmp526, $tmp527, $tmp528);
frost$core$Frost$unref$frost$core$Object$Q($tmp537);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
frost$core$Frost$unref$frost$core$Object$Q($tmp523);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp538 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
*(&local25) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 137
org$frostlang$frostc$Compiler$Target* $tmp539 = *(&local24);
org$frostlang$frostc$Compiler$createScopes$org$frostlang$frostc$Compiler$Target(param0, $tmp539);
org$frostlang$frostc$Compiler$Target* $tmp540 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
*(&local24) = ((org$frostlang$frostc$Compiler$Target*) NULL);
frost$core$String* $tmp541 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
*(&local23) = ((frost$core$String*) NULL);
goto block40;
block40:;
frost$core$Int64 $tmp542 = *(&local20);
int64_t $tmp543 = $tmp427.value;
int64_t $tmp544 = $tmp542.value;
int64_t $tmp545 = $tmp543 - $tmp544;
frost$core$Int64 $tmp546 = (frost$core$Int64) {$tmp545};
frost$core$UInt64 $tmp547 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp546);
if ($tmp429) goto block49; else goto block50;
block49:;
uint64_t $tmp548 = $tmp547.value;
uint64_t $tmp549 = $tmp431.value;
bool $tmp550 = $tmp548 >= $tmp549;
frost$core$Bit $tmp551 = (frost$core$Bit) {$tmp550};
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block48; else goto block39;
block50:;
uint64_t $tmp553 = $tmp547.value;
uint64_t $tmp554 = $tmp431.value;
bool $tmp555 = $tmp553 > $tmp554;
frost$core$Bit $tmp556 = (frost$core$Bit) {$tmp555};
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block48; else goto block39;
block48:;
int64_t $tmp558 = $tmp542.value;
int64_t $tmp559 = $tmp430.value;
int64_t $tmp560 = $tmp558 + $tmp559;
frost$core$Int64 $tmp561 = (frost$core$Int64) {$tmp560};
*(&local20) = $tmp561;
goto block38;
block39:;
// line 139
org$frostlang$frostc$IR$Value* $tmp562 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp563 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp564 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp565 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp566 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block29:;
goto block27;
block27:;
org$frostlang$frostc$Pair* $tmp567 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp568 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp569 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block24;
block24:;
// line 144
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 1
// line 146
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp570 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp570, param0);
*(&local27) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp571 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
*(&local27) = $tmp570;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
// line 147
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 148
org$frostlang$frostc$ASTNode* $tmp572 = *(&local11);
org$frostlang$frostc$Pair* $tmp573 = org$frostlang$frostc$Compiler$getChoiceCase$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Corg$frostlang$frostc$ChoiceCase$GT$Q(param0, $tmp572);
*(&local29) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
org$frostlang$frostc$Pair* $tmp574 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
*(&local29) = $tmp573;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
// line 149
org$frostlang$frostc$Pair* $tmp575 = *(&local29);
frost$core$Bit $tmp576 = frost$core$Bit$init$builtin_bit($tmp575 != NULL);
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block51; else goto block53;
block51:;
// line 150
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp578 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp579 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp578, $tmp579);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp580 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp581 = (frost$core$Int64) {25};
org$frostlang$frostc$ASTNode* $tmp582 = *(&local11);
$fn584 $tmp583 = ($fn584) $tmp582->$class->vtable[2];
org$frostlang$frostc$Position $tmp585 = $tmp583($tmp582);
org$frostlang$frostc$Pair* $tmp586 = *(&local29);
frost$core$Object** $tmp587 = &$tmp586->second;
frost$core$Object* $tmp588 = *$tmp587;
frost$core$Int64* $tmp589 = &((org$frostlang$frostc$ChoiceCase*) $tmp588)->rawValue;
frost$core$Int64 $tmp590 = *$tmp589;
frost$core$UInt64 $tmp591 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp590);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp580, $tmp581, $tmp585, $tmp591);
frost$collections$Array$add$frost$collections$Array$T($tmp578, ((frost$core$Object*) $tmp580));
*(&local30) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
frost$collections$Array* $tmp592 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
*(&local30) = $tmp578;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
// line 152
org$frostlang$frostc$ASTNode* $tmp593 = *(&local11);
$fn595 $tmp594 = ($fn595) $tmp593->$class->vtable[2];
org$frostlang$frostc$Position $tmp596 = $tmp594($tmp593);
frost$collections$Array* $tmp597 = *(&local30);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp598 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp599 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp600 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp601 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp598, $tmp599, $tmp600, $tmp601);
org$frostlang$frostc$IR$Value* $tmp602 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp596, param4, &$s603, ((frost$collections$ListView*) $tmp597), $tmp598);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
org$frostlang$frostc$IR$Value* $tmp604 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
*(&local28) = $tmp602;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
// line 154
org$frostlang$frostc$IR$Value* $tmp605 = *(&local28);
frost$core$Bit $tmp606 = frost$core$Bit$init$builtin_bit($tmp605 == NULL);
bool $tmp607 = $tmp606.value;
if ($tmp607) goto block54; else goto block55;
block54:;
// line 155
frost$collections$Array* $tmp608 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
*(&local30) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp609 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
*(&local29) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp610 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp611 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
*(&local27) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp612 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp613 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp614 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp615 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp616 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp617 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp618 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block55:;
frost$collections$Array* $tmp619 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
*(&local30) = ((frost$collections$Array*) NULL);
goto block52;
block53:;
// line 1
// line 159
org$frostlang$frostc$ASTNode* $tmp620 = *(&local11);
$fn622 $tmp621 = ($fn622) $tmp620->$class->vtable[2];
org$frostlang$frostc$Position $tmp623 = $tmp621($tmp620);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp624 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp625 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp624, $tmp625);
org$frostlang$frostc$ASTNode* $tmp626 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp624, ((frost$core$Object*) $tmp626));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp627 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp628 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp629 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp630 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp627, $tmp628, $tmp629, $tmp630);
org$frostlang$frostc$IR$Value* $tmp631 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp623, param2, &$s632, ((frost$collections$ListView*) $tmp624), $tmp627);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
org$frostlang$frostc$IR$Value* $tmp633 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
*(&local28) = $tmp631;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
// line 161
org$frostlang$frostc$IR$Value* $tmp634 = *(&local28);
frost$core$Bit $tmp635 = frost$core$Bit$init$builtin_bit($tmp634 == NULL);
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block56; else goto block57;
block56:;
// line 162
org$frostlang$frostc$Pair* $tmp637 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
*(&local29) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp638 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp639 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
*(&local27) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp640 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp641 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp642 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp643 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp644 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp645 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp646 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block57:;
goto block52;
block52:;
// line 165
org$frostlang$frostc$Position $tmp647 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp648 = *(&local28);
org$frostlang$frostc$IR$Value* $tmp649 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, $tmp647, $tmp648);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
org$frostlang$frostc$IR$Value* $tmp650 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
*(&local26) = $tmp649;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
org$frostlang$frostc$Pair* $tmp651 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
*(&local29) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp652 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp653 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
*(&local27) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 167
org$frostlang$frostc$IR* $tmp654 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp655 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp656 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp657 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp658 = *(&local26);
org$frostlang$frostc$IR$Block$ID $tmp659 = *(&local9);
org$frostlang$frostc$IR$Block$ID $tmp660 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp655, $tmp656, $tmp657, $tmp658, $tmp659, $tmp660);
$fn662 $tmp661 = ($fn662) $tmp654->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp663 = $tmp661($tmp654, $tmp655);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
org$frostlang$frostc$IR$Value* $tmp664 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp665 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block14:;
frost$core$Int64 $tmp666 = *(&local10);
int64_t $tmp667 = $tmp121.value;
int64_t $tmp668 = $tmp666.value;
int64_t $tmp669 = $tmp667 - $tmp668;
frost$core$Int64 $tmp670 = (frost$core$Int64) {$tmp669};
frost$core$UInt64 $tmp671 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp670);
if ($tmp123) goto block59; else goto block60;
block59:;
uint64_t $tmp672 = $tmp671.value;
uint64_t $tmp673 = $tmp125.value;
bool $tmp674 = $tmp672 >= $tmp673;
frost$core$Bit $tmp675 = (frost$core$Bit) {$tmp674};
bool $tmp676 = $tmp675.value;
if ($tmp676) goto block58; else goto block13;
block60:;
uint64_t $tmp677 = $tmp671.value;
uint64_t $tmp678 = $tmp125.value;
bool $tmp679 = $tmp677 > $tmp678;
frost$core$Bit $tmp680 = (frost$core$Bit) {$tmp679};
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block58; else goto block13;
block58:;
int64_t $tmp682 = $tmp666.value;
int64_t $tmp683 = $tmp124.value;
int64_t $tmp684 = $tmp682 + $tmp683;
frost$core$Int64 $tmp685 = (frost$core$Int64) {$tmp684};
*(&local10) = $tmp685;
goto block12;
block13:;
// line 170
org$frostlang$frostc$IR* $tmp686 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp687 = *(&local9);
$fn689 $tmp688 = ($fn689) $tmp686->$class->vtable[4];
$tmp688($tmp686, $tmp687);
// line 171
org$frostlang$frostc$FixedArray* $tmp690 = *(&local7);
ITable* $tmp691 = ((frost$collections$Iterable*) $tmp690)->$class->itable;
while ($tmp691->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp691 = $tmp691->next;
}
$fn693 $tmp692 = $tmp691->methods[0];
frost$collections$Iterator* $tmp694 = $tmp692(((frost$collections$Iterable*) $tmp690));
goto block61;
block61:;
ITable* $tmp695 = $tmp694->$class->itable;
while ($tmp695->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp695 = $tmp695->next;
}
$fn697 $tmp696 = $tmp695->methods[0];
frost$core$Bit $tmp698 = $tmp696($tmp694);
bool $tmp699 = $tmp698.value;
if ($tmp699) goto block63; else goto block62;
block62:;
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp700 = $tmp694->$class->itable;
while ($tmp700->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp700 = $tmp700->next;
}
$fn702 $tmp701 = $tmp700->methods[1];
frost$core$Object* $tmp703 = $tmp701($tmp694);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp703)));
org$frostlang$frostc$ASTNode* $tmp704 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
*(&local31) = ((org$frostlang$frostc$ASTNode*) $tmp703);
// line 172
org$frostlang$frostc$ASTNode* $tmp705 = *(&local31);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp705);
frost$core$Frost$unref$frost$core$Object$Q($tmp703);
org$frostlang$frostc$ASTNode* $tmp706 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block61;
block63:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
org$frostlang$frostc$Compiler$AutoScope* $tmp707 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
*(&local8) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 175
org$frostlang$frostc$IR* $tmp708 = *(&local0);
$fn710 $tmp709 = ($fn710) $tmp708->$class->vtable[5];
frost$core$Bit $tmp711 = $tmp709($tmp708);
frost$core$Bit $tmp712 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp711);
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block64; else goto block65;
block64:;
// line 176
org$frostlang$frostc$IR* $tmp714 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp715 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp716 = (frost$core$Int64) {1};
org$frostlang$frostc$Position $tmp717 = *(&local5);
org$frostlang$frostc$IR$Block$ID $tmp718 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp715, $tmp716, $tmp717, $tmp718);
$fn720 $tmp719 = ($fn720) $tmp714->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp721 = $tmp719($tmp714, $tmp715);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
goto block65;
block65:;
org$frostlang$frostc$FixedArray* $tmp722 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp723 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block9;
block11:;
// line 180
frost$core$Int64 $tmp724 = (frost$core$Int64) {180};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s725, $tmp724);
abort(); // unreachable
block9:;
org$frostlang$frostc$ASTNode* $tmp726 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block6:;
frost$core$Int64 $tmp727 = *(&local3);
int64_t $tmp728 = $tmp73.value;
int64_t $tmp729 = $tmp727.value;
int64_t $tmp730 = $tmp728 - $tmp729;
frost$core$Int64 $tmp731 = (frost$core$Int64) {$tmp730};
frost$core$UInt64 $tmp732 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp731);
if ($tmp75) goto block67; else goto block68;
block67:;
uint64_t $tmp733 = $tmp732.value;
uint64_t $tmp734 = $tmp77.value;
bool $tmp735 = $tmp733 >= $tmp734;
frost$core$Bit $tmp736 = (frost$core$Bit) {$tmp735};
bool $tmp737 = $tmp736.value;
if ($tmp737) goto block66; else goto block5;
block68:;
uint64_t $tmp738 = $tmp732.value;
uint64_t $tmp739 = $tmp77.value;
bool $tmp740 = $tmp738 > $tmp739;
frost$core$Bit $tmp741 = (frost$core$Bit) {$tmp740};
bool $tmp742 = $tmp741.value;
if ($tmp742) goto block66; else goto block5;
block66:;
int64_t $tmp743 = $tmp727.value;
int64_t $tmp744 = $tmp76.value;
int64_t $tmp745 = $tmp743 + $tmp744;
frost$core$Int64 $tmp746 = (frost$core$Int64) {$tmp745};
*(&local3) = $tmp746;
goto block4;
block5:;
// line 184
frost$core$Bit $tmp747 = frost$core$Bit$init$builtin_bit(param6 != NULL);
bool $tmp748 = $tmp747.value;
if ($tmp748) goto block69; else goto block70;
block69:;
// line 1
// line 186
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp749 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp749, param0);
*(&local32) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
org$frostlang$frostc$Compiler$AutoScope* $tmp750 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
*(&local32) = $tmp749;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
// line 187
org$frostlang$frostc$IR* $tmp751 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp752 = *(&local2);
$fn754 $tmp753 = ($fn754) $tmp751->$class->vtable[4];
$tmp753($tmp751, $tmp752);
// line 188
ITable* $tmp755 = ((frost$collections$Iterable*) param6)->$class->itable;
while ($tmp755->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp755 = $tmp755->next;
}
$fn757 $tmp756 = $tmp755->methods[0];
frost$collections$Iterator* $tmp758 = $tmp756(((frost$collections$Iterable*) param6));
goto block71;
block71:;
ITable* $tmp759 = $tmp758->$class->itable;
while ($tmp759->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp759 = $tmp759->next;
}
$fn761 $tmp760 = $tmp759->methods[0];
frost$core$Bit $tmp762 = $tmp760($tmp758);
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block73; else goto block72;
block72:;
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp764 = $tmp758->$class->itable;
while ($tmp764->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp764 = $tmp764->next;
}
$fn766 $tmp765 = $tmp764->methods[1];
frost$core$Object* $tmp767 = $tmp765($tmp758);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp767)));
org$frostlang$frostc$ASTNode* $tmp768 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
*(&local33) = ((org$frostlang$frostc$ASTNode*) $tmp767);
// line 189
org$frostlang$frostc$ASTNode* $tmp769 = *(&local33);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp769);
frost$core$Frost$unref$frost$core$Object$Q($tmp767);
org$frostlang$frostc$ASTNode* $tmp770 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block71;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
org$frostlang$frostc$Compiler$AutoScope* $tmp771 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
*(&local32) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 192
org$frostlang$frostc$IR* $tmp772 = *(&local0);
$fn774 $tmp773 = ($fn774) $tmp772->$class->vtable[5];
frost$core$Bit $tmp775 = $tmp773($tmp772);
frost$core$Bit $tmp776 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp775);
bool $tmp777 = $tmp776.value;
if ($tmp777) goto block74; else goto block75;
block74:;
// line 193
org$frostlang$frostc$IR* $tmp778 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp779 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp780 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp781 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp779, $tmp780, param1, $tmp781);
$fn783 $tmp782 = ($fn783) $tmp778->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp784 = $tmp782($tmp778, $tmp779);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
goto block75;
block75:;
goto block70;
block70:;
// line 196
org$frostlang$frostc$IR* $tmp785 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp786 = *(&local1);
$fn788 $tmp787 = ($fn788) $tmp785->$class->vtable[4];
$tmp787($tmp785, $tmp786);
org$frostlang$frostc$IR* $tmp789 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$Match$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$FixedArray* param4) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
org$frostlang$frostc$ClassDecl* local2 = NULL;
org$frostlang$frostc$IR$Value* local3 = NULL;
// line 202
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp790 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp791 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp790, $tmp791);
org$frostlang$frostc$IR$Value* $tmp792 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp790);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
org$frostlang$frostc$IR$Value* $tmp793 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
*(&local0) = $tmp792;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
// line 203
org$frostlang$frostc$IR$Value* $tmp794 = *(&local0);
frost$core$Bit $tmp795 = frost$core$Bit$init$builtin_bit($tmp794 == NULL);
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block1; else goto block3;
block3:;
ITable* $tmp797 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp797->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp797 = $tmp797->next;
}
$fn799 $tmp798 = $tmp797->methods[0];
frost$core$Int64 $tmp800 = $tmp798(((frost$collections$CollectionView*) param3));
frost$core$Int64 $tmp801 = (frost$core$Int64) {0};
frost$core$Bit $tmp802 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp800, $tmp801);
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block4; else goto block2;
block4:;
frost$core$Bit $tmp804 = frost$core$Bit$init$builtin_bit(param4 == NULL);
bool $tmp805 = $tmp804.value;
if ($tmp805) goto block1; else goto block2;
block1:;
// line 204
org$frostlang$frostc$IR$Value* $tmp806 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block2:;
// line 206
org$frostlang$frostc$IR$Value* $tmp807 = *(&local0);
$fn809 $tmp808 = ($fn809) $tmp807->$class->vtable[2];
org$frostlang$frostc$Type* $tmp810 = $tmp808($tmp807);
org$frostlang$frostc$ClassDecl* $tmp811 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp810);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
org$frostlang$frostc$ClassDecl* $tmp812 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
*(&local1) = $tmp811;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
// line 207
org$frostlang$frostc$ClassDecl* $tmp813 = *(&local1);
frost$core$Bit $tmp814 = frost$core$Bit$init$builtin_bit($tmp813 == NULL);
bool $tmp815 = $tmp814.value;
if ($tmp815) goto block5; else goto block6;
block5:;
// line 208
org$frostlang$frostc$ClassDecl* $tmp816 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp817 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block6:;
// line 210
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp818 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
// line 211
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 212
org$frostlang$frostc$ClassDecl* $tmp819 = *(&local1);
org$frostlang$frostc$ClassDecl$Kind* $tmp820 = &$tmp819->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp821 = *$tmp820;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp822;
$tmp822 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp822->value = $tmp821;
frost$core$Int64 $tmp823 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp824 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp823);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp825;
$tmp825 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp825->value = $tmp824;
ITable* $tmp826 = ((frost$core$Equatable*) $tmp822)->$class->itable;
while ($tmp826->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp826 = $tmp826->next;
}
$fn828 $tmp827 = $tmp826->methods[0];
frost$core$Bit $tmp829 = $tmp827(((frost$core$Equatable*) $tmp822), ((frost$core$Equatable*) $tmp825));
bool $tmp830 = $tmp829.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp825)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp822)));
if ($tmp830) goto block7; else goto block9;
block7:;
// line 213
org$frostlang$frostc$IR$Value* $tmp831 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp832 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp831, &$s833);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
org$frostlang$frostc$IR$Value* $tmp834 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
*(&local3) = $tmp832;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
// line 215
org$frostlang$frostc$ClassDecl* $tmp835 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
org$frostlang$frostc$ClassDecl* $tmp836 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
*(&local2) = $tmp835;
goto block8;
block9:;
// line 217
org$frostlang$frostc$ClassDecl* $tmp837 = *(&local1);
org$frostlang$frostc$SymbolTable* $tmp838 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp837);
org$frostlang$frostc$Symbol* $tmp839 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp838, &$s840);
frost$core$Bit $tmp841 = frost$core$Bit$init$builtin_bit($tmp839 == NULL);
bool $tmp842 = $tmp841.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
if ($tmp842) goto block10; else goto block12;
block10:;
// line 218
$fn844 $tmp843 = ($fn844) param2->$class->vtable[2];
org$frostlang$frostc$Position $tmp845 = $tmp843(param2);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp845, &$s846);
// line 219
org$frostlang$frostc$IR$Value* $tmp847 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp848 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp849 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp850 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block12:;
// line 1
// line 222
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp851 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block11;
block11:;
goto block8;
block8:;
// line 224
org$frostlang$frostc$IR$Value* $tmp852 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp853 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp854 = *(&local3);
org$frostlang$frostc$statement$Match$compileChainedIfMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0, param1, $tmp852, $tmp853, $tmp854, param3, param4);
org$frostlang$frostc$IR$Value* $tmp855 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp856 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp857 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp858 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$statement$Match$init(org$frostlang$frostc$statement$Match* param0) {

return;

}
void org$frostlang$frostc$statement$Match$cleanup(org$frostlang$frostc$statement$Match* param0) {

// line 24
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

