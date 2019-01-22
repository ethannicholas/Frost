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

typedef org$frostlang$frostc$Type* (*$fn12)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn39)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn58)(org$frostlang$frostc$IR*, frost$core$String*);
typedef frost$core$Int64 (*$fn69)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn110)(org$frostlang$frostc$IR*, frost$core$String*);
typedef frost$core$Int64 (*$fn117)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn147)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn153)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn158)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn173)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn191)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$Position (*$fn221)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Int64 (*$fn231)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn255)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn264)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn288)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn299)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn306)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Int64 (*$fn319)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn336)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Position (*$fn374)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn385)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn415)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn420)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn425)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn454)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn471)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn525)(org$frostlang$frostc$lvalue$VariableLValue*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Position (*$fn585)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn596)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn623)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn663)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn690)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn694)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn698)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn703)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn711)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn721)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn757)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn760)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn764)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn769)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn777)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn786)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn791)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn802)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn814)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn833)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn849)(org$frostlang$frostc$ASTNode*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x4d\x61\x74\x63\x68", 36, -4868280242278132552, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x61\x74\x63\x68\x20\x63\x68\x6f\x69\x63\x65\x20\x63\x61\x73\x65\x20\x27", 26, 924211577719466455, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x61\x67\x61\x69\x6e\x73\x74\x20\x27", 11, 5504180647906747646, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x61\x74\x63\x68\x20\x63\x68\x6f\x69\x63\x65\x20\x63\x61\x73\x65\x20\x27", 26, 924211577719466455, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x61\x67\x61\x69\x6e\x73\x74\x20", 10, 5899009811946657419, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x4d\x61\x74\x63\x68\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x43\x68\x61\x69\x6e\x65\x64\x49\x66\x4d\x61\x74\x63\x68\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x76\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2c\x20\x63\x68\x6f\x69\x63\x65\x43\x6c\x61\x73\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x2c\x20\x63\x68\x6f\x69\x63\x65\x52\x61\x77\x56\x61\x6c\x75\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x77\x68\x65\x6e\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x6f\x74\x68\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x29", 438, 5866251470127575791, NULL };
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
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s604 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s633 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s728 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s838 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static frost$core$String $s845 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s851 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27\x20\x76\x61\x6c\x75\x65\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x64\x65\x66\x69\x6e\x65\x20\x74\x68\x65\x20\x27\x3d\x27\x20\x6f\x70\x65\x72\x61\x74\x6f\x72", 46, 6331121231047041348, NULL };

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
// line 33
frost$core$Bit $tmp17 = frost$core$Bit$init$builtin_bit(false);
return $tmp17;
block4:;
// line 35
frost$core$Weak** $tmp18 = &param2->owner;
frost$core$Weak* $tmp19 = *$tmp18;
frost$core$Object* $tmp20 = frost$core$Weak$get$R$frost$core$Weak$T($tmp19);
bool $tmp21 = ((org$frostlang$frostc$ClassDecl*) $tmp20) != param3;
frost$core$Bit $tmp22 = frost$core$Bit$init$builtin_bit($tmp21);
bool $tmp23 = $tmp22.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp20);
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
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// line 38
frost$core$Bit $tmp35 = frost$core$Bit$init$builtin_bit(false);
return $tmp35;
block6:;
// line 40
frost$core$Bit $tmp36 = frost$core$Bit$init$builtin_bit(true);
return $tmp36;

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
frost$core$String* local26 = NULL;
frost$core$Bit local27;
org$frostlang$frostc$Pair* local28 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local29 = NULL;
org$frostlang$frostc$IR$Value* local30 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local31 = NULL;
org$frostlang$frostc$IR$Value* local32 = NULL;
org$frostlang$frostc$Pair* local33 = NULL;
frost$collections$Array* local34 = NULL;
org$frostlang$frostc$ASTNode* local35 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local36 = NULL;
org$frostlang$frostc$ASTNode* local37 = NULL;
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
org$frostlang$frostc$IR** $tmp53 = &param0->ir;
org$frostlang$frostc$IR* $tmp54 = *$tmp53;
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
org$frostlang$frostc$IR* $tmp55 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
*(&local1) = $tmp54;
// line 50
org$frostlang$frostc$IR* $tmp56 = *(&local1);
$fn58 $tmp57 = ($fn58) $tmp56->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp59 = $tmp57($tmp56, &$s60);
*(&local2) = $tmp59;
// line 51
org$frostlang$frostc$IR* $tmp61 = *(&local1);
org$frostlang$frostc$IR$Block** $tmp62 = &$tmp61->currentBlock;
org$frostlang$frostc$IR$Block* $tmp63 = *$tmp62;
org$frostlang$frostc$IR$Block$ID* $tmp64 = &$tmp63->id;
org$frostlang$frostc$IR$Block$ID $tmp65 = *$tmp64;
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
frost$core$UInt64 $tmp78 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp77);
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
frost$core$Object* $tmp90 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T(param5, $tmp89);
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp90)));
org$frostlang$frostc$ASTNode* $tmp91 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local5) = ((org$frostlang$frostc$ASTNode*) $tmp90);
frost$core$Frost$unref$frost$core$Object$Q($tmp90);
// line 54
org$frostlang$frostc$ASTNode* $tmp92 = *(&local5);
frost$core$Int64* $tmp93 = &$tmp92->$rawValue;
frost$core$Int64 $tmp94 = *$tmp93;
frost$core$Int64 $tmp95 = (frost$core$Int64) {53};
frost$core$Bit $tmp96 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp94, $tmp95);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp98 = (org$frostlang$frostc$Position*) ($tmp92->$data + 0);
org$frostlang$frostc$Position $tmp99 = *$tmp98;
*(&local6) = $tmp99;
org$frostlang$frostc$FixedArray** $tmp100 = (org$frostlang$frostc$FixedArray**) ($tmp92->$data + 16);
org$frostlang$frostc$FixedArray* $tmp101 = *$tmp100;
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
org$frostlang$frostc$FixedArray* $tmp102 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
*(&local7) = $tmp101;
org$frostlang$frostc$FixedArray** $tmp103 = (org$frostlang$frostc$FixedArray**) ($tmp92->$data + 24);
org$frostlang$frostc$FixedArray* $tmp104 = *$tmp103;
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
org$frostlang$frostc$FixedArray* $tmp105 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
*(&local8) = $tmp104;
// line 1
// line 57
org$frostlang$frostc$Compiler$AutoScope* $tmp106 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp106, param0);
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
org$frostlang$frostc$Compiler$AutoScope* $tmp107 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
*(&local9) = $tmp106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
// line 58
org$frostlang$frostc$IR* $tmp108 = *(&local1);
$fn110 $tmp109 = ($fn110) $tmp108->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp111 = $tmp109($tmp108, &$s112);
*(&local10) = $tmp111;
// line 59
frost$core$Int64 $tmp113 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp114 = *(&local7);
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
frost$core$UInt64 $tmp126 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp125);
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
org$frostlang$frostc$IR$Block$ID $tmp137 = *(&local3);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp138;
$tmp138 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp138->value = $tmp137;
org$frostlang$frostc$IR* $tmp139 = *(&local1);
org$frostlang$frostc$IR$Block** $tmp140 = &$tmp139->currentBlock;
org$frostlang$frostc$IR$Block* $tmp141 = *$tmp140;
org$frostlang$frostc$IR$Block$ID* $tmp142 = &$tmp141->id;
org$frostlang$frostc$IR$Block$ID $tmp143 = *$tmp142;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp144;
$tmp144 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp144->value = $tmp143;
ITable* $tmp145 = ((frost$core$Equatable*) $tmp138)->$class->itable;
while ($tmp145->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp145 = $tmp145->next;
}
$fn147 $tmp146 = $tmp145->methods[1];
frost$core$Bit $tmp148 = $tmp146(((frost$core$Equatable*) $tmp138), ((frost$core$Equatable*) $tmp144));
bool $tmp149 = $tmp148.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp144)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp138)));
if ($tmp149) goto block19; else goto block20;
block19:;
// line 61
org$frostlang$frostc$IR* $tmp150 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp151 = *(&local3);
$fn153 $tmp152 = ($fn153) $tmp150->$class->vtable[4];
$tmp152($tmp150, $tmp151);
goto block20;
block20:;
// line 63
frost$core$Int64 $tmp154 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp155 = *(&local7);
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
org$frostlang$frostc$IR* $tmp189 = *(&local1);
$fn191 $tmp190 = ($fn191) $tmp189->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp192 = $tmp190($tmp189, &$s193);
*(&local3) = $tmp192;
goto block22;
block29:;
// line 1
// line 67
org$frostlang$frostc$IR$Block$ID $tmp194 = *(&local2);
*(&local3) = $tmp194;
goto block22;
block22:;
// line 69
org$frostlang$frostc$FixedArray* $tmp195 = *(&local7);
frost$core$Int64 $tmp196 = *(&local11);
frost$core$Object* $tmp197 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp195, $tmp196);
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp197)));
org$frostlang$frostc$ASTNode* $tmp198 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
*(&local14) = ((org$frostlang$frostc$ASTNode*) $tmp197);
frost$core$Frost$unref$frost$core$Object$Q($tmp197);
// line 70
org$frostlang$frostc$ASTNode* $tmp199 = *(&local14);
frost$core$Int64* $tmp200 = &$tmp199->$rawValue;
frost$core$Int64 $tmp201 = *$tmp200;
frost$core$Int64 $tmp202 = (frost$core$Int64) {9};
frost$core$Bit $tmp203 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp201, $tmp202);
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block31; else goto block30;
block31:;
org$frostlang$frostc$Position* $tmp205 = (org$frostlang$frostc$Position*) ($tmp199->$data + 0);
org$frostlang$frostc$Position $tmp206 = *$tmp205;
*(&local15) = $tmp206;
org$frostlang$frostc$ASTNode** $tmp207 = (org$frostlang$frostc$ASTNode**) ($tmp199->$data + 16);
org$frostlang$frostc$ASTNode* $tmp208 = *$tmp207;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
org$frostlang$frostc$ASTNode* $tmp209 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
*(&local16) = $tmp208;
org$frostlang$frostc$FixedArray** $tmp210 = (org$frostlang$frostc$FixedArray**) ($tmp199->$data + 24);
org$frostlang$frostc$FixedArray* $tmp211 = *$tmp210;
*(&local17) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
org$frostlang$frostc$FixedArray* $tmp212 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local17) = $tmp211;
// line 72
org$frostlang$frostc$ASTNode* $tmp213 = *(&local16);
org$frostlang$frostc$Pair* $tmp214 = org$frostlang$frostc$Compiler$getChoiceCase$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Corg$frostlang$frostc$ChoiceCase$GT$Q(param0, $tmp213);
*(&local18) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
org$frostlang$frostc$Pair* $tmp215 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
*(&local18) = $tmp214;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
// line 73
org$frostlang$frostc$Pair* $tmp216 = *(&local18);
frost$core$Bit $tmp217 = frost$core$Bit$init$builtin_bit($tmp216 != NULL);
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block32; else goto block33;
block32:;
// line 74
org$frostlang$frostc$ASTNode* $tmp219 = *(&local16);
$fn221 $tmp220 = ($fn221) $tmp219->$class->vtable[2];
org$frostlang$frostc$Position $tmp222 = $tmp220($tmp219);
org$frostlang$frostc$Pair* $tmp223 = *(&local18);
frost$core$Object** $tmp224 = &$tmp223->second;
frost$core$Object* $tmp225 = *$tmp224;
frost$core$Bit $tmp226 = org$frostlang$frostc$statement$Match$checkChoiceMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ChoiceCase$Q$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, $tmp222, ((org$frostlang$frostc$ChoiceCase*) $tmp225), param3, param2);
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block34; else goto block35;
block34:;
// line 76
org$frostlang$frostc$FixedArray* $tmp228 = *(&local7);
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
org$frostlang$frostc$Position $tmp239 = *(&local15);
frost$core$String* $tmp240 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s241, &$s242);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp239, $tmp240);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// line 80
org$frostlang$frostc$Pair* $tmp243 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local18) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp244 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local17) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp245 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp246 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp247 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp248 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp249 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp250 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp251 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
return;
block37:;
// line 82
org$frostlang$frostc$FixedArray* $tmp252 = *(&local17);
ITable* $tmp253 = ((frost$collections$CollectionView*) $tmp252)->$class->itable;
while ($tmp253->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp253 = $tmp253->next;
}
$fn255 $tmp254 = $tmp253->methods[0];
frost$core$Int64 $tmp256 = $tmp254(((frost$collections$CollectionView*) $tmp252));
org$frostlang$frostc$Pair* $tmp257 = *(&local18);
frost$core$Object** $tmp258 = &$tmp257->second;
frost$core$Object* $tmp259 = *$tmp258;
frost$collections$Array** $tmp260 = &((org$frostlang$frostc$ChoiceCase*) $tmp259)->fields;
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
org$frostlang$frostc$Position $tmp271 = *(&local15);
org$frostlang$frostc$Pair* $tmp272 = *(&local18);
frost$core$Object** $tmp273 = &$tmp272->second;
frost$core$Object* $tmp274 = *$tmp273;
frost$core$String* $tmp275 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s276, ((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp274)));
frost$core$String* $tmp277 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp275, &$s278);
frost$core$String* $tmp279 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp277, &$s280);
org$frostlang$frostc$Pair* $tmp281 = *(&local18);
frost$core$Object** $tmp282 = &$tmp281->second;
frost$core$Object* $tmp283 = *$tmp282;
frost$collections$Array** $tmp284 = &((org$frostlang$frostc$ChoiceCase*) $tmp283)->fields;
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
org$frostlang$frostc$Pair* $tmp292 = *(&local18);
frost$core$Object** $tmp293 = &$tmp292->second;
frost$core$Object* $tmp294 = *$tmp293;
frost$collections$Array** $tmp295 = &((org$frostlang$frostc$ChoiceCase*) $tmp294)->fields;
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
org$frostlang$frostc$FixedArray* $tmp316 = *(&local17);
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
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp271, $tmp322);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp303)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
// line 87
org$frostlang$frostc$Pair* $tmp323 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local18) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp324 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
*(&local17) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp325 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp326 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp327 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp328 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp329 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp330 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp331 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
return;
block39:;
// line 89
frost$core$Bit $tmp332 = frost$core$Bit$init$builtin_bit(param4 == NULL);
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block40; else goto block41;
block40:;
// line 90
org$frostlang$frostc$Position $tmp334 = *(&local15);
$fn336 $tmp335 = ($fn336) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp337 = $tmp335(param2);
frost$core$String* $tmp338 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s339, ((frost$core$Object*) $tmp337));
frost$core$String* $tmp340 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp338, &$s341);
frost$core$String* $tmp342 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp340, &$s343);
org$frostlang$frostc$Pair* $tmp344 = *(&local18);
frost$core$Object** $tmp345 = &$tmp344->second;
frost$core$Object* $tmp346 = *$tmp345;
frost$core$Weak** $tmp347 = &((org$frostlang$frostc$ChoiceCase*) $tmp346)->owner;
frost$core$Weak* $tmp348 = *$tmp347;
frost$core$Object* $tmp349 = frost$core$Weak$get$R$frost$core$Weak$T($tmp348);
frost$core$String** $tmp350 = &((org$frostlang$frostc$ClassDecl*) $tmp349)->name;
frost$core$String* $tmp351 = *$tmp350;
frost$core$String* $tmp352 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s353, $tmp351);
frost$core$String* $tmp354 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp352, &$s355);
frost$core$String* $tmp356 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp342, $tmp354);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp334, $tmp356);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$core$Frost$unref$frost$core$Object$Q($tmp349);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// line 93
org$frostlang$frostc$Pair* $tmp357 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local18) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp358 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local17) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp359 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp360 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp361 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp362 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp363 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp364 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp365 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
return;
block41:;
// line 95
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 1
// line 97
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp366 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp366, param0);
*(&local20) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp367 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
*(&local20) = $tmp366;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
// line 98
frost$collections$Array* $tmp368 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp369 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp368, $tmp369);
org$frostlang$frostc$ASTNode* $tmp370 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp371 = (frost$core$Int64) {25};
org$frostlang$frostc$ASTNode* $tmp372 = *(&local16);
$fn374 $tmp373 = ($fn374) $tmp372->$class->vtable[2];
org$frostlang$frostc$Position $tmp375 = $tmp373($tmp372);
org$frostlang$frostc$Pair* $tmp376 = *(&local18);
frost$core$Object** $tmp377 = &$tmp376->second;
frost$core$Object* $tmp378 = *$tmp377;
frost$core$Int64* $tmp379 = &((org$frostlang$frostc$ChoiceCase*) $tmp378)->rawValue;
frost$core$Int64 $tmp380 = *$tmp379;
frost$core$UInt64 $tmp381 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp380);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp370, $tmp371, $tmp375, $tmp381);
frost$collections$Array$add$frost$collections$Array$T($tmp368, ((frost$core$Object*) $tmp370));
*(&local21) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
frost$collections$Array* $tmp382 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
*(&local21) = $tmp368;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
// line 100
org$frostlang$frostc$ASTNode* $tmp383 = *(&local16);
$fn385 $tmp384 = ($fn385) $tmp383->$class->vtable[2];
org$frostlang$frostc$Position $tmp386 = $tmp384($tmp383);
frost$collections$Array* $tmp387 = *(&local21);
org$frostlang$frostc$Compiler$TypeContext* $tmp388 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp389 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp390 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp391 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp388, $tmp389, $tmp390, $tmp391);
org$frostlang$frostc$IR$Value* $tmp392 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp386, param4, &$s393, ((frost$collections$ListView*) $tmp387), $tmp388);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
org$frostlang$frostc$IR$Value* $tmp394 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
*(&local22) = $tmp392;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
// line 103
org$frostlang$frostc$IR$Value* $tmp395 = *(&local22);
frost$core$Bit $tmp396 = frost$core$Bit$init$builtin_bit($tmp395 != NULL);
bool $tmp397 = $tmp396.value;
if ($tmp397) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp398 = (frost$core$Int64) {103};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s399, $tmp398);
abort(); // unreachable
block42:;
// line 104
org$frostlang$frostc$Position $tmp400 = *(&local15);
org$frostlang$frostc$IR$Value* $tmp401 = *(&local22);
org$frostlang$frostc$IR$Value* $tmp402 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, $tmp400, $tmp401);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
org$frostlang$frostc$IR$Value* $tmp403 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local19) = $tmp402;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
org$frostlang$frostc$IR$Value* $tmp404 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp405 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
*(&local21) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp406 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
*(&local20) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 107
org$frostlang$frostc$IR* $tmp407 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp408 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp409 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp410 = *(&local15);
org$frostlang$frostc$IR$Value* $tmp411 = *(&local19);
org$frostlang$frostc$IR$Block$ID $tmp412 = *(&local10);
org$frostlang$frostc$IR$Block$ID $tmp413 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp408, $tmp409, $tmp410, $tmp411, $tmp412, $tmp413);
$fn415 $tmp414 = ($fn415) $tmp407->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp416 = $tmp414($tmp407, $tmp408);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
// line 109
org$frostlang$frostc$IR* $tmp417 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp418 = *(&local10);
$fn420 $tmp419 = ($fn420) $tmp417->$class->vtable[4];
$tmp419($tmp417, $tmp418);
// line 110
frost$core$Int64 $tmp421 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp422 = *(&local17);
ITable* $tmp423 = ((frost$collections$CollectionView*) $tmp422)->$class->itable;
while ($tmp423->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp423 = $tmp423->next;
}
$fn425 $tmp424 = $tmp423->methods[0];
frost$core$Int64 $tmp426 = $tmp424(((frost$collections$CollectionView*) $tmp422));
frost$core$Bit $tmp427 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp428 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp421, $tmp426, $tmp427);
frost$core$Int64 $tmp429 = $tmp428.min;
*(&local23) = $tmp429;
frost$core$Int64 $tmp430 = $tmp428.max;
frost$core$Bit $tmp431 = $tmp428.inclusive;
bool $tmp432 = $tmp431.value;
frost$core$Int64 $tmp433 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp434 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp433);
if ($tmp432) goto block47; else goto block48;
block47:;
int64_t $tmp435 = $tmp429.value;
int64_t $tmp436 = $tmp430.value;
bool $tmp437 = $tmp435 <= $tmp436;
frost$core$Bit $tmp438 = (frost$core$Bit) {$tmp437};
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block44; else goto block45;
block48:;
int64_t $tmp440 = $tmp429.value;
int64_t $tmp441 = $tmp430.value;
bool $tmp442 = $tmp440 < $tmp441;
frost$core$Bit $tmp443 = (frost$core$Bit) {$tmp442};
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block44; else goto block45;
block44:;
// line 111
org$frostlang$frostc$IR* $tmp445 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp446 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp447 = (frost$core$Int64) {4};
org$frostlang$frostc$Position $tmp448 = *(&local15);
org$frostlang$frostc$Pair* $tmp449 = *(&local18);
frost$core$Object** $tmp450 = &$tmp449->second;
frost$core$Object* $tmp451 = *$tmp450;
frost$core$Int64 $tmp452 = *(&local23);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64($tmp446, $tmp447, $tmp448, param2, ((org$frostlang$frostc$ChoiceCase*) $tmp451), $tmp452);
$fn454 $tmp453 = ($fn454) $tmp445->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp455 = $tmp453($tmp445, $tmp446);
*(&local24) = $tmp455;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
// line 114
org$frostlang$frostc$IR* $tmp456 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp457 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp458 = (frost$core$Int64) {14};
org$frostlang$frostc$Position $tmp459 = *(&local15);
org$frostlang$frostc$IR$Value* $tmp460 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp461 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp462 = *(&local24);
org$frostlang$frostc$Pair* $tmp463 = *(&local18);
frost$core$Object** $tmp464 = &$tmp463->second;
frost$core$Object* $tmp465 = *$tmp464;
frost$collections$Array** $tmp466 = &((org$frostlang$frostc$ChoiceCase*) $tmp465)->fields;
frost$collections$Array* $tmp467 = *$tmp466;
frost$core$Int64 $tmp468 = *(&local23);
frost$core$Object* $tmp469 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp467, $tmp468);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp460, $tmp461, $tmp462, ((org$frostlang$frostc$Type*) $tmp469));
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp457, $tmp458, $tmp459, $tmp460);
$fn471 $tmp470 = ($fn471) $tmp456->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp472 = $tmp470($tmp456, $tmp457);
*(&local25) = $tmp472;
frost$core$Frost$unref$frost$core$Object$Q($tmp469);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
// line 116
org$frostlang$frostc$FixedArray* $tmp473 = *(&local17);
frost$core$Int64 $tmp474 = *(&local23);
frost$core$Object* $tmp475 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp473, $tmp474);
frost$core$String* $tmp476 = org$frostlang$frostc$Compiler$getText$org$frostlang$frostc$ASTNode$R$frost$core$String$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp475));
*(&local26) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
frost$core$String* $tmp477 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
*(&local26) = $tmp476;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
frost$core$Frost$unref$frost$core$Object$Q($tmp475);
// line 117
frost$core$String* $tmp478 = *(&local26);
frost$core$Bit $tmp479 = frost$core$Bit$init$builtin_bit($tmp478 != NULL);
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block51; else goto block52;
block51:;
frost$core$String* $tmp481 = *(&local26);
frost$core$Bit $tmp482 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp481, &$s483);
*(&local27) = $tmp482;
goto block53;
block52:;
*(&local27) = $tmp479;
goto block53;
block53:;
frost$core$Bit $tmp484 = *(&local27);
bool $tmp485 = $tmp484.value;
if ($tmp485) goto block49; else goto block50;
block49:;
// line 118
frost$core$String* $tmp486 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
*(&local26) = ((frost$core$String*) NULL);
goto block46;
block50:;
// line 120
*(&local28) = ((org$frostlang$frostc$Pair*) NULL);
// line 1
// line 122
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp487 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp487, param0);
*(&local29) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp488 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
*(&local29) = $tmp487;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
// line 123
org$frostlang$frostc$FixedArray* $tmp489 = *(&local17);
frost$core$Int64 $tmp490 = *(&local23);
frost$core$Object* $tmp491 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp489, $tmp490);
frost$core$Int64 $tmp492 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp493 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp492);
org$frostlang$frostc$ASTNode* $tmp494 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp495 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp496 = *(&local15);
org$frostlang$frostc$IR$Value* $tmp497 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp498 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp499 = *(&local25);
org$frostlang$frostc$Pair* $tmp500 = *(&local18);
frost$core$Object** $tmp501 = &$tmp500->second;
frost$core$Object* $tmp502 = *$tmp501;
frost$collections$Array** $tmp503 = &((org$frostlang$frostc$ChoiceCase*) $tmp502)->fields;
frost$collections$Array* $tmp504 = *$tmp503;
frost$core$Int64 $tmp505 = *(&local23);
frost$core$Object* $tmp506 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp504, $tmp505);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp497, $tmp498, $tmp499, ((org$frostlang$frostc$Type*) $tmp506));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp494, $tmp495, $tmp496, $tmp497);
org$frostlang$frostc$Pair* $tmp507 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Variable$Corg$frostlang$frostc$IR$Value$Q$GT$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp491), $tmp493, $tmp494, ((org$frostlang$frostc$Type*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
org$frostlang$frostc$Pair* $tmp508 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
*(&local28) = $tmp507;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
frost$core$Frost$unref$frost$core$Object$Q($tmp506);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$core$Frost$unref$frost$core$Object$Q($tmp491);
// line 130
org$frostlang$frostc$lvalue$VariableLValue* $tmp509 = (org$frostlang$frostc$lvalue$VariableLValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$lvalue$VariableLValue$class);
org$frostlang$frostc$Position $tmp510 = *(&local15);
org$frostlang$frostc$Pair* $tmp511 = *(&local28);
frost$core$Object** $tmp512 = &$tmp511->first;
frost$core$Object* $tmp513 = *$tmp512;
org$frostlang$frostc$lvalue$VariableLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Variable($tmp509, param0, $tmp510, ((org$frostlang$frostc$Variable*) $tmp513));
org$frostlang$frostc$IR$Value* $tmp514 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp515 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp516 = *(&local25);
org$frostlang$frostc$Pair* $tmp517 = *(&local18);
frost$core$Object** $tmp518 = &$tmp517->second;
frost$core$Object* $tmp519 = *$tmp518;
frost$collections$Array** $tmp520 = &((org$frostlang$frostc$ChoiceCase*) $tmp519)->fields;
frost$collections$Array* $tmp521 = *$tmp520;
frost$core$Int64 $tmp522 = *(&local23);
frost$core$Object* $tmp523 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp521, $tmp522);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp514, $tmp515, $tmp516, ((org$frostlang$frostc$Type*) $tmp523));
$fn525 $tmp524 = ($fn525) $tmp509->$class->vtable[4];
$tmp524($tmp509, $tmp514);
frost$core$Frost$unref$frost$core$Object$Q($tmp523);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp526 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
*(&local29) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 134
org$frostlang$frostc$Pair* $tmp527 = *(&local28);
frost$core$Object** $tmp528 = &$tmp527->first;
frost$core$Object* $tmp529 = *$tmp528;
org$frostlang$frostc$Type** $tmp530 = &((org$frostlang$frostc$Variable*) $tmp529)->type;
org$frostlang$frostc$Type* $tmp531 = *$tmp530;
frost$core$Bit $tmp532 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp531);
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block54; else goto block55;
block54:;
// line 135
frost$collections$Stack** $tmp534 = &param0->enclosingContexts;
frost$collections$Stack* $tmp535 = *$tmp534;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp536 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp537 = (frost$core$Int64) {2};
org$frostlang$frostc$Pair* $tmp538 = *(&local28);
frost$core$Object** $tmp539 = &$tmp538->first;
frost$core$Object* $tmp540 = *$tmp539;
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$Variable($tmp536, $tmp537, ((org$frostlang$frostc$Variable*) $tmp540));
frost$collections$Stack$push$frost$collections$Stack$T($tmp535, ((frost$core$Object*) $tmp536));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
goto block55;
block55:;
org$frostlang$frostc$Pair* $tmp541 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
*(&local28) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$String* $tmp542 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
*(&local26) = ((frost$core$String*) NULL);
goto block46;
block46:;
frost$core$Int64 $tmp543 = *(&local23);
int64_t $tmp544 = $tmp430.value;
int64_t $tmp545 = $tmp543.value;
int64_t $tmp546 = $tmp544 - $tmp545;
frost$core$Int64 $tmp547 = (frost$core$Int64) {$tmp546};
frost$core$UInt64 $tmp548 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp547);
if ($tmp432) goto block57; else goto block58;
block57:;
uint64_t $tmp549 = $tmp548.value;
uint64_t $tmp550 = $tmp434.value;
bool $tmp551 = $tmp549 >= $tmp550;
frost$core$Bit $tmp552 = (frost$core$Bit) {$tmp551};
bool $tmp553 = $tmp552.value;
if ($tmp553) goto block56; else goto block45;
block58:;
uint64_t $tmp554 = $tmp548.value;
uint64_t $tmp555 = $tmp434.value;
bool $tmp556 = $tmp554 > $tmp555;
frost$core$Bit $tmp557 = (frost$core$Bit) {$tmp556};
bool $tmp558 = $tmp557.value;
if ($tmp558) goto block56; else goto block45;
block56:;
int64_t $tmp559 = $tmp543.value;
int64_t $tmp560 = $tmp433.value;
int64_t $tmp561 = $tmp559 + $tmp560;
frost$core$Int64 $tmp562 = (frost$core$Int64) {$tmp561};
*(&local23) = $tmp562;
goto block44;
block45:;
// line 140
org$frostlang$frostc$IR$Value* $tmp563 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp564 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
*(&local18) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp565 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
*(&local17) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp566 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp567 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block16;
block35:;
goto block33;
block33:;
org$frostlang$frostc$Pair* $tmp568 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
*(&local18) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp569 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
*(&local17) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp570 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block30;
block30:;
// line 145
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 1
// line 147
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp571 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp571, param0);
*(&local31) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp572 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
*(&local31) = $tmp571;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
// line 148
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 149
org$frostlang$frostc$ASTNode* $tmp573 = *(&local14);
org$frostlang$frostc$Pair* $tmp574 = org$frostlang$frostc$Compiler$getChoiceCase$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Corg$frostlang$frostc$ChoiceCase$GT$Q(param0, $tmp573);
*(&local33) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
org$frostlang$frostc$Pair* $tmp575 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
*(&local33) = $tmp574;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
// line 150
org$frostlang$frostc$Pair* $tmp576 = *(&local33);
frost$core$Bit $tmp577 = frost$core$Bit$init$builtin_bit($tmp576 != NULL);
bool $tmp578 = $tmp577.value;
if ($tmp578) goto block59; else goto block61;
block59:;
// line 151
frost$collections$Array* $tmp579 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp580 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp579, $tmp580);
org$frostlang$frostc$ASTNode* $tmp581 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp582 = (frost$core$Int64) {25};
org$frostlang$frostc$ASTNode* $tmp583 = *(&local14);
$fn585 $tmp584 = ($fn585) $tmp583->$class->vtable[2];
org$frostlang$frostc$Position $tmp586 = $tmp584($tmp583);
org$frostlang$frostc$Pair* $tmp587 = *(&local33);
frost$core$Object** $tmp588 = &$tmp587->second;
frost$core$Object* $tmp589 = *$tmp588;
frost$core$Int64* $tmp590 = &((org$frostlang$frostc$ChoiceCase*) $tmp589)->rawValue;
frost$core$Int64 $tmp591 = *$tmp590;
frost$core$UInt64 $tmp592 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp591);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp581, $tmp582, $tmp586, $tmp592);
frost$collections$Array$add$frost$collections$Array$T($tmp579, ((frost$core$Object*) $tmp581));
*(&local34) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$collections$Array* $tmp593 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
*(&local34) = $tmp579;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
// line 153
org$frostlang$frostc$ASTNode* $tmp594 = *(&local14);
$fn596 $tmp595 = ($fn596) $tmp594->$class->vtable[2];
org$frostlang$frostc$Position $tmp597 = $tmp595($tmp594);
frost$collections$Array* $tmp598 = *(&local34);
org$frostlang$frostc$Compiler$TypeContext* $tmp599 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp600 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp601 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp602 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp599, $tmp600, $tmp601, $tmp602);
org$frostlang$frostc$IR$Value* $tmp603 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp597, param4, &$s604, ((frost$collections$ListView*) $tmp598), $tmp599);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
org$frostlang$frostc$IR$Value* $tmp605 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
*(&local32) = $tmp603;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
// line 155
org$frostlang$frostc$IR$Value* $tmp606 = *(&local32);
frost$core$Bit $tmp607 = frost$core$Bit$init$builtin_bit($tmp606 == NULL);
bool $tmp608 = $tmp607.value;
if ($tmp608) goto block62; else goto block63;
block62:;
// line 156
frost$collections$Array* $tmp609 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
*(&local34) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp610 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
*(&local33) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp611 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp612 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
*(&local31) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp613 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp614 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp615 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp616 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp617 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp618 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp619 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
return;
block63:;
frost$collections$Array* $tmp620 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
*(&local34) = ((frost$collections$Array*) NULL);
goto block60;
block61:;
// line 1
// line 160
org$frostlang$frostc$ASTNode* $tmp621 = *(&local14);
$fn623 $tmp622 = ($fn623) $tmp621->$class->vtable[2];
org$frostlang$frostc$Position $tmp624 = $tmp622($tmp621);
frost$collections$Array* $tmp625 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp626 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp625, $tmp626);
org$frostlang$frostc$ASTNode* $tmp627 = *(&local14);
frost$collections$Array$add$frost$collections$Array$T($tmp625, ((frost$core$Object*) $tmp627));
org$frostlang$frostc$Compiler$TypeContext* $tmp628 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp629 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp630 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp631 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp628, $tmp629, $tmp630, $tmp631);
org$frostlang$frostc$IR$Value* $tmp632 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp624, param2, &$s633, ((frost$collections$ListView*) $tmp625), $tmp628);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
org$frostlang$frostc$IR$Value* $tmp634 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
*(&local32) = $tmp632;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
// line 162
org$frostlang$frostc$IR$Value* $tmp635 = *(&local32);
frost$core$Bit $tmp636 = frost$core$Bit$init$builtin_bit($tmp635 == NULL);
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block64; else goto block65;
block64:;
// line 163
org$frostlang$frostc$Pair* $tmp638 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
*(&local33) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp639 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp640 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
*(&local31) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp641 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp642 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp643 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp644 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp645 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp646 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp647 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
return;
block65:;
goto block60;
block60:;
// line 166
org$frostlang$frostc$Position $tmp648 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp649 = *(&local32);
org$frostlang$frostc$IR$Value* $tmp650 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, $tmp648, $tmp649);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
org$frostlang$frostc$IR$Value* $tmp651 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
*(&local30) = $tmp650;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
org$frostlang$frostc$Pair* $tmp652 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
*(&local33) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp653 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp654 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
*(&local31) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 168
org$frostlang$frostc$IR* $tmp655 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp656 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp657 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp658 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp659 = *(&local30);
org$frostlang$frostc$IR$Block$ID $tmp660 = *(&local10);
org$frostlang$frostc$IR$Block$ID $tmp661 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp656, $tmp657, $tmp658, $tmp659, $tmp660, $tmp661);
$fn663 $tmp662 = ($fn663) $tmp655->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp664 = $tmp662($tmp655, $tmp656);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
org$frostlang$frostc$IR$Value* $tmp665 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp666 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block16;
block16:;
frost$core$Int64 $tmp667 = *(&local11);
int64_t $tmp668 = $tmp122.value;
int64_t $tmp669 = $tmp667.value;
int64_t $tmp670 = $tmp668 - $tmp669;
frost$core$Int64 $tmp671 = (frost$core$Int64) {$tmp670};
frost$core$UInt64 $tmp672 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp671);
if ($tmp124) goto block67; else goto block68;
block67:;
uint64_t $tmp673 = $tmp672.value;
uint64_t $tmp674 = $tmp126.value;
bool $tmp675 = $tmp673 >= $tmp674;
frost$core$Bit $tmp676 = (frost$core$Bit) {$tmp675};
bool $tmp677 = $tmp676.value;
if ($tmp677) goto block66; else goto block15;
block68:;
uint64_t $tmp678 = $tmp672.value;
uint64_t $tmp679 = $tmp126.value;
bool $tmp680 = $tmp678 > $tmp679;
frost$core$Bit $tmp681 = (frost$core$Bit) {$tmp680};
bool $tmp682 = $tmp681.value;
if ($tmp682) goto block66; else goto block15;
block66:;
int64_t $tmp683 = $tmp667.value;
int64_t $tmp684 = $tmp125.value;
int64_t $tmp685 = $tmp683 + $tmp684;
frost$core$Int64 $tmp686 = (frost$core$Int64) {$tmp685};
*(&local11) = $tmp686;
goto block14;
block15:;
// line 171
org$frostlang$frostc$IR* $tmp687 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp688 = *(&local10);
$fn690 $tmp689 = ($fn690) $tmp687->$class->vtable[4];
$tmp689($tmp687, $tmp688);
// line 172
org$frostlang$frostc$FixedArray* $tmp691 = *(&local8);
ITable* $tmp692 = ((frost$collections$Iterable*) $tmp691)->$class->itable;
while ($tmp692->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp692 = $tmp692->next;
}
$fn694 $tmp693 = $tmp692->methods[0];
frost$collections$Iterator* $tmp695 = $tmp693(((frost$collections$Iterable*) $tmp691));
goto block69;
block69:;
ITable* $tmp696 = $tmp695->$class->itable;
while ($tmp696->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp696 = $tmp696->next;
}
$fn698 $tmp697 = $tmp696->methods[0];
frost$core$Bit $tmp699 = $tmp697($tmp695);
bool $tmp700 = $tmp699.value;
if ($tmp700) goto block71; else goto block70;
block70:;
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp701 = $tmp695->$class->itable;
while ($tmp701->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp701 = $tmp701->next;
}
$fn703 $tmp702 = $tmp701->methods[1];
frost$core$Object* $tmp704 = $tmp702($tmp695);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp704)));
org$frostlang$frostc$ASTNode* $tmp705 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
*(&local35) = ((org$frostlang$frostc$ASTNode*) $tmp704);
// line 173
org$frostlang$frostc$ASTNode* $tmp706 = *(&local35);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp706);
frost$core$Frost$unref$frost$core$Object$Q($tmp704);
org$frostlang$frostc$ASTNode* $tmp707 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block69;
block71:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
org$frostlang$frostc$Compiler$AutoScope* $tmp708 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 176
org$frostlang$frostc$IR* $tmp709 = *(&local1);
$fn711 $tmp710 = ($fn711) $tmp709->$class->vtable[5];
frost$core$Bit $tmp712 = $tmp710($tmp709);
frost$core$Bit $tmp713 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp712);
bool $tmp714 = $tmp713.value;
if ($tmp714) goto block72; else goto block73;
block72:;
// line 177
org$frostlang$frostc$IR* $tmp715 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp716 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp717 = (frost$core$Int64) {1};
org$frostlang$frostc$Position $tmp718 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp719 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp716, $tmp717, $tmp718, $tmp719);
$fn721 $tmp720 = ($fn721) $tmp715->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp722 = $tmp720($tmp715, $tmp716);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
goto block73;
block73:;
org$frostlang$frostc$FixedArray* $tmp723 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp724 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block11;
block13:;
// line 181
frost$core$Bit $tmp725 = frost$core$Bit$init$builtin_bit(false);
bool $tmp726 = $tmp725.value;
if ($tmp726) goto block74; else goto block75;
block75:;
frost$core$Int64 $tmp727 = (frost$core$Int64) {181};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s728, $tmp727);
abort(); // unreachable
block74:;
goto block11;
block11:;
org$frostlang$frostc$ASTNode* $tmp729 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block8:;
frost$core$Int64 $tmp730 = *(&local4);
int64_t $tmp731 = $tmp74.value;
int64_t $tmp732 = $tmp730.value;
int64_t $tmp733 = $tmp731 - $tmp732;
frost$core$Int64 $tmp734 = (frost$core$Int64) {$tmp733};
frost$core$UInt64 $tmp735 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp734);
if ($tmp76) goto block77; else goto block78;
block77:;
uint64_t $tmp736 = $tmp735.value;
uint64_t $tmp737 = $tmp78.value;
bool $tmp738 = $tmp736 >= $tmp737;
frost$core$Bit $tmp739 = (frost$core$Bit) {$tmp738};
bool $tmp740 = $tmp739.value;
if ($tmp740) goto block76; else goto block7;
block78:;
uint64_t $tmp741 = $tmp735.value;
uint64_t $tmp742 = $tmp78.value;
bool $tmp743 = $tmp741 > $tmp742;
frost$core$Bit $tmp744 = (frost$core$Bit) {$tmp743};
bool $tmp745 = $tmp744.value;
if ($tmp745) goto block76; else goto block7;
block76:;
int64_t $tmp746 = $tmp730.value;
int64_t $tmp747 = $tmp77.value;
int64_t $tmp748 = $tmp746 + $tmp747;
frost$core$Int64 $tmp749 = (frost$core$Int64) {$tmp748};
*(&local4) = $tmp749;
goto block6;
block7:;
// line 185
frost$core$Bit $tmp750 = frost$core$Bit$init$builtin_bit(param6 != NULL);
bool $tmp751 = $tmp750.value;
if ($tmp751) goto block79; else goto block80;
block79:;
// line 1
// line 187
org$frostlang$frostc$Compiler$AutoScope* $tmp752 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp752, param0);
*(&local36) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
org$frostlang$frostc$Compiler$AutoScope* $tmp753 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
*(&local36) = $tmp752;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
// line 188
org$frostlang$frostc$IR* $tmp754 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp755 = *(&local3);
$fn757 $tmp756 = ($fn757) $tmp754->$class->vtable[4];
$tmp756($tmp754, $tmp755);
// line 189
ITable* $tmp758 = ((frost$collections$Iterable*) param6)->$class->itable;
while ($tmp758->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp758 = $tmp758->next;
}
$fn760 $tmp759 = $tmp758->methods[0];
frost$collections$Iterator* $tmp761 = $tmp759(((frost$collections$Iterable*) param6));
goto block81;
block81:;
ITable* $tmp762 = $tmp761->$class->itable;
while ($tmp762->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp762 = $tmp762->next;
}
$fn764 $tmp763 = $tmp762->methods[0];
frost$core$Bit $tmp765 = $tmp763($tmp761);
bool $tmp766 = $tmp765.value;
if ($tmp766) goto block83; else goto block82;
block82:;
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp767 = $tmp761->$class->itable;
while ($tmp767->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp767 = $tmp767->next;
}
$fn769 $tmp768 = $tmp767->methods[1];
frost$core$Object* $tmp770 = $tmp768($tmp761);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp770)));
org$frostlang$frostc$ASTNode* $tmp771 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
*(&local37) = ((org$frostlang$frostc$ASTNode*) $tmp770);
// line 190
org$frostlang$frostc$ASTNode* $tmp772 = *(&local37);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp772);
frost$core$Frost$unref$frost$core$Object$Q($tmp770);
org$frostlang$frostc$ASTNode* $tmp773 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block81;
block83:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
org$frostlang$frostc$Compiler$AutoScope* $tmp774 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
*(&local36) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 193
org$frostlang$frostc$IR* $tmp775 = *(&local1);
$fn777 $tmp776 = ($fn777) $tmp775->$class->vtable[5];
frost$core$Bit $tmp778 = $tmp776($tmp775);
frost$core$Bit $tmp779 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp778);
bool $tmp780 = $tmp779.value;
if ($tmp780) goto block84; else goto block85;
block84:;
// line 194
org$frostlang$frostc$IR* $tmp781 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp782 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp783 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp784 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp782, $tmp783, param1, $tmp784);
$fn786 $tmp785 = ($fn786) $tmp781->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp787 = $tmp785($tmp781, $tmp782);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
goto block85;
block85:;
goto block80;
block80:;
// line 197
org$frostlang$frostc$IR* $tmp788 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp789 = *(&local2);
$fn791 $tmp790 = ($fn791) $tmp788->$class->vtable[4];
$tmp790($tmp788, $tmp789);
org$frostlang$frostc$IR* $tmp792 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
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
// line 203
org$frostlang$frostc$Compiler$TypeContext* $tmp793 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp794 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp793, $tmp794);
org$frostlang$frostc$IR$Value* $tmp795 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp793);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
org$frostlang$frostc$IR$Value* $tmp796 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
*(&local0) = $tmp795;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
// line 204
org$frostlang$frostc$IR$Value* $tmp797 = *(&local0);
frost$core$Bit $tmp798 = frost$core$Bit$init$builtin_bit($tmp797 == NULL);
bool $tmp799 = $tmp798.value;
if ($tmp799) goto block3; else goto block4;
block3:;
*(&local1) = $tmp798;
goto block5;
block4:;
ITable* $tmp800 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp800->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp800 = $tmp800->next;
}
$fn802 $tmp801 = $tmp800->methods[0];
frost$core$Int64 $tmp803 = $tmp801(((frost$collections$CollectionView*) param3));
frost$core$Int64 $tmp804 = (frost$core$Int64) {0};
frost$core$Bit $tmp805 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp803, $tmp804);
bool $tmp806 = $tmp805.value;
if ($tmp806) goto block6; else goto block7;
block6:;
frost$core$Bit $tmp807 = frost$core$Bit$init$builtin_bit(param4 == NULL);
*(&local2) = $tmp807;
goto block8;
block7:;
*(&local2) = $tmp805;
goto block8;
block8:;
frost$core$Bit $tmp808 = *(&local2);
*(&local1) = $tmp808;
goto block5;
block5:;
frost$core$Bit $tmp809 = *(&local1);
bool $tmp810 = $tmp809.value;
if ($tmp810) goto block1; else goto block2;
block1:;
// line 205
org$frostlang$frostc$IR$Value* $tmp811 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block2:;
// line 207
org$frostlang$frostc$IR$Value* $tmp812 = *(&local0);
$fn814 $tmp813 = ($fn814) $tmp812->$class->vtable[2];
org$frostlang$frostc$Type* $tmp815 = $tmp813($tmp812);
org$frostlang$frostc$ClassDecl* $tmp816 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp815);
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
org$frostlang$frostc$ClassDecl* $tmp817 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
*(&local3) = $tmp816;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
// line 208
org$frostlang$frostc$ClassDecl* $tmp818 = *(&local3);
frost$core$Bit $tmp819 = frost$core$Bit$init$builtin_bit($tmp818 == NULL);
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block9; else goto block10;
block9:;
// line 209
org$frostlang$frostc$ClassDecl* $tmp821 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp822 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block10:;
// line 211
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp823 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
// line 212
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 213
org$frostlang$frostc$ClassDecl* $tmp824 = *(&local3);
org$frostlang$frostc$ClassDecl$Kind* $tmp825 = &$tmp824->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp826 = *$tmp825;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp827;
$tmp827 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp827->value = $tmp826;
frost$core$Int64 $tmp828 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp829 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp828);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp830;
$tmp830 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp830->value = $tmp829;
ITable* $tmp831 = ((frost$core$Equatable*) $tmp827)->$class->itable;
while ($tmp831->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp831 = $tmp831->next;
}
$fn833 $tmp832 = $tmp831->methods[0];
frost$core$Bit $tmp834 = $tmp832(((frost$core$Equatable*) $tmp827), ((frost$core$Equatable*) $tmp830));
bool $tmp835 = $tmp834.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp830)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp827)));
if ($tmp835) goto block11; else goto block13;
block11:;
// line 214
org$frostlang$frostc$IR$Value* $tmp836 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp837 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp836, &$s838);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
org$frostlang$frostc$IR$Value* $tmp839 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
*(&local5) = $tmp837;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
// line 216
org$frostlang$frostc$ClassDecl* $tmp840 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
org$frostlang$frostc$ClassDecl* $tmp841 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
*(&local4) = $tmp840;
goto block12;
block13:;
// line 218
org$frostlang$frostc$ClassDecl* $tmp842 = *(&local3);
org$frostlang$frostc$SymbolTable* $tmp843 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp842);
org$frostlang$frostc$Symbol* $tmp844 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp843, &$s845);
frost$core$Bit $tmp846 = frost$core$Bit$init$builtin_bit($tmp844 == NULL);
bool $tmp847 = $tmp846.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
if ($tmp847) goto block14; else goto block16;
block14:;
// line 219
$fn849 $tmp848 = ($fn849) param2->$class->vtable[2];
org$frostlang$frostc$Position $tmp850 = $tmp848(param2);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp850, &$s851);
// line 220
org$frostlang$frostc$IR$Value* $tmp852 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp853 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp854 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp855 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block16:;
// line 1
// line 223
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp856 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block15;
block15:;
goto block12;
block12:;
// line 225
org$frostlang$frostc$IR$Value* $tmp857 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp858 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp859 = *(&local5);
org$frostlang$frostc$statement$Match$compileChainedIfMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0, param1, $tmp857, $tmp858, $tmp859, param3, param4);
org$frostlang$frostc$IR$Value* $tmp860 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp861 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp862 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp863 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
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

