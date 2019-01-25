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
typedef org$frostlang$frostc$IR$Block$ID (*$fn189)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$Position (*$fn219)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Int64 (*$fn229)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn253)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn262)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn286)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn297)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn304)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Int64 (*$fn317)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn334)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Position (*$fn372)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn383)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn413)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn418)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn423)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn452)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn469)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn522)(org$frostlang$frostc$lvalue$VariableLValue*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Position (*$fn582)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn593)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn620)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn660)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn687)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn691)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn695)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn700)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn708)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn718)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn752)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn755)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn759)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn764)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn772)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn781)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn786)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn797)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn807)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn826)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn842)(org$frostlang$frostc$ASTNode*);

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
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x74\x63\x68", 5, 21953816826, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x65\x73\x74\x72\x75\x63\x74\x75\x72\x69\x6e\x67\x20\x63\x68\x6f\x69\x63\x65\x20\x27\x77\x68\x65\x6e\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x74\x6f\x67\x65\x74\x68\x65\x72\x20\x77\x69\x74\x68\x20", 57, 7310936708811456764, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x74\x68\x65\x72\x20\x27\x77\x68\x65\x6e\x27\x20\x63\x6f\x6d\x70\x61\x72\x69\x73\x6f\x6e\x73", 24, 5365199314206252049, NULL };
static frost$core$String $s274 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x27", 8, 21554282788333791, NULL };
static frost$core$String $s276 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20", 2, 14172, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x71\x75\x69\x72\x65\x73\x20", 9, 2339091676660267913, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x61\x72\x67\x75\x6d\x65\x6e\x74", 9, 1450721239526715900, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 10, -2438145452310052756, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x69\x73\x20", 5, 14602508524, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 19, 2848546980520752179, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s353 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s397 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5f", 1, 196, NULL };
static frost$core$String $s601 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s630 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s723 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x74\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -5281504436008569654, NULL };
static frost$core$String $s831 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static frost$core$String $s838 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s844 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27\x20\x76\x61\x6c\x75\x65\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x64\x65\x66\x69\x6e\x65\x20\x74\x68\x65\x20\x27\x3d\x27\x20\x6f\x70\x65\x72\x61\x74\x6f\x72", 46, 6331121231047041348, NULL };

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
org$frostlang$frostc$ASTNode* local12 = NULL;
org$frostlang$frostc$Position local13;
org$frostlang$frostc$ASTNode* local14 = NULL;
org$frostlang$frostc$FixedArray* local15 = NULL;
org$frostlang$frostc$Pair* local16 = NULL;
org$frostlang$frostc$IR$Value* local17 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local18 = NULL;
frost$collections$Array* local19 = NULL;
org$frostlang$frostc$IR$Value* local20 = NULL;
frost$core$Int64 local21;
org$frostlang$frostc$IR$Statement$ID local22;
org$frostlang$frostc$IR$Statement$ID local23;
frost$core$String* local24 = NULL;
org$frostlang$frostc$Pair* local25 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local26 = NULL;
org$frostlang$frostc$IR$Value* local27 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local28 = NULL;
org$frostlang$frostc$IR$Value* local29 = NULL;
org$frostlang$frostc$Pair* local30 = NULL;
frost$collections$Array* local31 = NULL;
org$frostlang$frostc$ASTNode* local32 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local33 = NULL;
org$frostlang$frostc$ASTNode* local34 = NULL;
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
if ($tmp169) goto block21; else goto block25;
block25:;
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
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block21; else goto block24;
block24:;
frost$core$Bit $tmp185 = frost$core$Bit$init$builtin_bit(param6 != NULL);
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block21; else goto block23;
block21:;
// line 64
org$frostlang$frostc$IR* $tmp187 = *(&local1);
$fn189 $tmp188 = ($fn189) $tmp187->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp190 = $tmp188($tmp187, &$s191);
*(&local3) = $tmp190;
goto block22;
block23:;
// line 1
// line 67
org$frostlang$frostc$IR$Block$ID $tmp192 = *(&local2);
*(&local3) = $tmp192;
goto block22;
block22:;
// line 69
org$frostlang$frostc$FixedArray* $tmp193 = *(&local7);
frost$core$Int64 $tmp194 = *(&local11);
frost$core$Object* $tmp195 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp193, $tmp194);
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp195)));
org$frostlang$frostc$ASTNode* $tmp196 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local12) = ((org$frostlang$frostc$ASTNode*) $tmp195);
frost$core$Frost$unref$frost$core$Object$Q($tmp195);
// line 70
org$frostlang$frostc$ASTNode* $tmp197 = *(&local12);
frost$core$Int64* $tmp198 = &$tmp197->$rawValue;
frost$core$Int64 $tmp199 = *$tmp198;
frost$core$Int64 $tmp200 = (frost$core$Int64) {9};
frost$core$Bit $tmp201 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp199, $tmp200);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block27; else goto block26;
block27:;
org$frostlang$frostc$Position* $tmp203 = (org$frostlang$frostc$Position*) ($tmp197->$data + 0);
org$frostlang$frostc$Position $tmp204 = *$tmp203;
*(&local13) = $tmp204;
org$frostlang$frostc$ASTNode** $tmp205 = (org$frostlang$frostc$ASTNode**) ($tmp197->$data + 16);
org$frostlang$frostc$ASTNode* $tmp206 = *$tmp205;
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
org$frostlang$frostc$ASTNode* $tmp207 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
*(&local14) = $tmp206;
org$frostlang$frostc$FixedArray** $tmp208 = (org$frostlang$frostc$FixedArray**) ($tmp197->$data + 24);
org$frostlang$frostc$FixedArray* $tmp209 = *$tmp208;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
org$frostlang$frostc$FixedArray* $tmp210 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
*(&local15) = $tmp209;
// line 72
org$frostlang$frostc$ASTNode* $tmp211 = *(&local14);
org$frostlang$frostc$Pair* $tmp212 = org$frostlang$frostc$Compiler$getChoiceCase$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Corg$frostlang$frostc$ChoiceCase$GT$Q(param0, $tmp211);
*(&local16) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
org$frostlang$frostc$Pair* $tmp213 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
*(&local16) = $tmp212;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
// line 73
org$frostlang$frostc$Pair* $tmp214 = *(&local16);
frost$core$Bit $tmp215 = frost$core$Bit$init$builtin_bit($tmp214 != NULL);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block28; else goto block29;
block28:;
// line 74
org$frostlang$frostc$ASTNode* $tmp217 = *(&local14);
$fn219 $tmp218 = ($fn219) $tmp217->$class->vtable[2];
org$frostlang$frostc$Position $tmp220 = $tmp218($tmp217);
org$frostlang$frostc$Pair* $tmp221 = *(&local16);
frost$core$Object** $tmp222 = &$tmp221->second;
frost$core$Object* $tmp223 = *$tmp222;
frost$core$Bit $tmp224 = org$frostlang$frostc$statement$Match$checkChoiceMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ChoiceCase$Q$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, $tmp220, ((org$frostlang$frostc$ChoiceCase*) $tmp223), param3, param2);
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block30; else goto block31;
block30:;
// line 76
org$frostlang$frostc$FixedArray* $tmp226 = *(&local7);
ITable* $tmp227 = ((frost$collections$CollectionView*) $tmp226)->$class->itable;
while ($tmp227->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp227 = $tmp227->next;
}
$fn229 $tmp228 = $tmp227->methods[0];
frost$core$Int64 $tmp230 = $tmp228(((frost$collections$CollectionView*) $tmp226));
frost$core$Int64 $tmp231 = (frost$core$Int64) {1};
int64_t $tmp232 = $tmp230.value;
int64_t $tmp233 = $tmp231.value;
bool $tmp234 = $tmp232 != $tmp233;
frost$core$Bit $tmp235 = (frost$core$Bit) {$tmp234};
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block32; else goto block33;
block32:;
// line 77
org$frostlang$frostc$Position $tmp237 = *(&local13);
frost$core$String* $tmp238 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s239, &$s240);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp237, $tmp238);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
// line 80
org$frostlang$frostc$Pair* $tmp241 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local16) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp242 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp243 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp244 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp245 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp246 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp247 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp248 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp249 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
return;
block33:;
// line 82
org$frostlang$frostc$FixedArray* $tmp250 = *(&local15);
ITable* $tmp251 = ((frost$collections$CollectionView*) $tmp250)->$class->itable;
while ($tmp251->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp251 = $tmp251->next;
}
$fn253 $tmp252 = $tmp251->methods[0];
frost$core$Int64 $tmp254 = $tmp252(((frost$collections$CollectionView*) $tmp250));
org$frostlang$frostc$Pair* $tmp255 = *(&local16);
frost$core$Object** $tmp256 = &$tmp255->second;
frost$core$Object* $tmp257 = *$tmp256;
frost$collections$Array** $tmp258 = &((org$frostlang$frostc$ChoiceCase*) $tmp257)->fields;
frost$collections$Array* $tmp259 = *$tmp258;
ITable* $tmp260 = ((frost$collections$CollectionView*) $tmp259)->$class->itable;
while ($tmp260->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp260 = $tmp260->next;
}
$fn262 $tmp261 = $tmp260->methods[0];
frost$core$Int64 $tmp263 = $tmp261(((frost$collections$CollectionView*) $tmp259));
int64_t $tmp264 = $tmp254.value;
int64_t $tmp265 = $tmp263.value;
bool $tmp266 = $tmp264 != $tmp265;
frost$core$Bit $tmp267 = (frost$core$Bit) {$tmp266};
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block34; else goto block35;
block34:;
// line 83
org$frostlang$frostc$Position $tmp269 = *(&local13);
org$frostlang$frostc$Pair* $tmp270 = *(&local16);
frost$core$Object** $tmp271 = &$tmp270->second;
frost$core$Object* $tmp272 = *$tmp271;
frost$core$String* $tmp273 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s274, ((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp272)));
frost$core$String* $tmp275 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp273, &$s276);
frost$core$String* $tmp277 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp275, &$s278);
org$frostlang$frostc$Pair* $tmp279 = *(&local16);
frost$core$Object** $tmp280 = &$tmp279->second;
frost$core$Object* $tmp281 = *$tmp280;
frost$collections$Array** $tmp282 = &((org$frostlang$frostc$ChoiceCase*) $tmp281)->fields;
frost$collections$Array* $tmp283 = *$tmp282;
ITable* $tmp284 = ((frost$collections$CollectionView*) $tmp283)->$class->itable;
while ($tmp284->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp284 = $tmp284->next;
}
$fn286 $tmp285 = $tmp284->methods[0];
frost$core$Int64 $tmp287 = $tmp285(((frost$collections$CollectionView*) $tmp283));
frost$core$Int64$wrapper* $tmp288;
$tmp288 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp288->value = $tmp287;
frost$core$String* $tmp289 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp277, ((frost$core$Object*) $tmp288));
org$frostlang$frostc$Pair* $tmp290 = *(&local16);
frost$core$Object** $tmp291 = &$tmp290->second;
frost$core$Object* $tmp292 = *$tmp291;
frost$collections$Array** $tmp293 = &((org$frostlang$frostc$ChoiceCase*) $tmp292)->fields;
frost$collections$Array* $tmp294 = *$tmp293;
ITable* $tmp295 = ((frost$collections$CollectionView*) $tmp294)->$class->itable;
while ($tmp295->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp295 = $tmp295->next;
}
$fn297 $tmp296 = $tmp295->methods[0];
frost$core$Int64 $tmp298 = $tmp296(((frost$collections$CollectionView*) $tmp294));
frost$core$Int64 $tmp299 = (frost$core$Int64) {1};
frost$core$Bit $tmp300 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp298, $tmp299);
frost$core$Bit$wrapper* $tmp301;
$tmp301 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp301->value = $tmp300;
ITable* $tmp302 = ((frost$core$Formattable*) $tmp301)->$class->itable;
while ($tmp302->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp302 = $tmp302->next;
}
$fn304 $tmp303 = $tmp302->methods[0];
frost$core$String* $tmp305 = $tmp303(((frost$core$Formattable*) $tmp301), &$s306);
frost$core$String* $tmp307 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s308, $tmp305);
frost$core$String* $tmp309 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp307, &$s310);
frost$core$String* $tmp311 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp289, $tmp309);
frost$core$String* $tmp312 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp311, &$s313);
org$frostlang$frostc$FixedArray* $tmp314 = *(&local15);
ITable* $tmp315 = ((frost$collections$CollectionView*) $tmp314)->$class->itable;
while ($tmp315->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp315 = $tmp315->next;
}
$fn317 $tmp316 = $tmp315->methods[0];
frost$core$Int64 $tmp318 = $tmp316(((frost$collections$CollectionView*) $tmp314));
frost$core$Int64$wrapper* $tmp319;
$tmp319 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp319->value = $tmp318;
frost$core$String* $tmp320 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp312, ((frost$core$Object*) $tmp319));
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp269, $tmp320);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp301)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
// line 87
org$frostlang$frostc$Pair* $tmp321 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
*(&local16) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp322 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp323 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp324 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp325 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp326 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp327 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp328 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp329 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
return;
block35:;
// line 89
frost$core$Bit $tmp330 = frost$core$Bit$init$builtin_bit(param4 == NULL);
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block36; else goto block37;
block36:;
// line 90
org$frostlang$frostc$Position $tmp332 = *(&local13);
$fn334 $tmp333 = ($fn334) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp335 = $tmp333(param2);
frost$core$String* $tmp336 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s337, ((frost$core$Object*) $tmp335));
frost$core$String* $tmp338 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp336, &$s339);
frost$core$String* $tmp340 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp338, &$s341);
org$frostlang$frostc$Pair* $tmp342 = *(&local16);
frost$core$Object** $tmp343 = &$tmp342->second;
frost$core$Object* $tmp344 = *$tmp343;
frost$core$Weak** $tmp345 = &((org$frostlang$frostc$ChoiceCase*) $tmp344)->owner;
frost$core$Weak* $tmp346 = *$tmp345;
frost$core$Object* $tmp347 = frost$core$Weak$get$R$frost$core$Weak$T($tmp346);
frost$core$String** $tmp348 = &((org$frostlang$frostc$ClassDecl*) $tmp347)->name;
frost$core$String* $tmp349 = *$tmp348;
frost$core$String* $tmp350 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s351, $tmp349);
frost$core$String* $tmp352 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp350, &$s353);
frost$core$String* $tmp354 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp340, $tmp352);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp332, $tmp354);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
frost$core$Frost$unref$frost$core$Object$Q($tmp347);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
// line 93
org$frostlang$frostc$Pair* $tmp355 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
*(&local16) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp356 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp357 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp358 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp359 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp360 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp361 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp362 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp363 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
return;
block37:;
// line 95
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 1
// line 97
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp364 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp364, param0);
*(&local18) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp365 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
*(&local18) = $tmp364;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
// line 98
frost$collections$Array* $tmp366 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp367 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp366, $tmp367);
org$frostlang$frostc$ASTNode* $tmp368 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp369 = (frost$core$Int64) {25};
org$frostlang$frostc$ASTNode* $tmp370 = *(&local14);
$fn372 $tmp371 = ($fn372) $tmp370->$class->vtable[2];
org$frostlang$frostc$Position $tmp373 = $tmp371($tmp370);
org$frostlang$frostc$Pair* $tmp374 = *(&local16);
frost$core$Object** $tmp375 = &$tmp374->second;
frost$core$Object* $tmp376 = *$tmp375;
frost$core$Int64* $tmp377 = &((org$frostlang$frostc$ChoiceCase*) $tmp376)->rawValue;
frost$core$Int64 $tmp378 = *$tmp377;
frost$core$UInt64 $tmp379 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp378);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp368, $tmp369, $tmp373, $tmp379);
frost$collections$Array$add$frost$collections$Array$T($tmp366, ((frost$core$Object*) $tmp368));
*(&local19) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$collections$Array* $tmp380 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
*(&local19) = $tmp366;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
// line 100
org$frostlang$frostc$ASTNode* $tmp381 = *(&local14);
$fn383 $tmp382 = ($fn383) $tmp381->$class->vtable[2];
org$frostlang$frostc$Position $tmp384 = $tmp382($tmp381);
frost$collections$Array* $tmp385 = *(&local19);
org$frostlang$frostc$Compiler$TypeContext* $tmp386 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp387 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp388 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp389 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp386, $tmp387, $tmp388, $tmp389);
org$frostlang$frostc$IR$Value* $tmp390 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp384, param4, &$s391, ((frost$collections$ListView*) $tmp385), $tmp386);
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
org$frostlang$frostc$IR$Value* $tmp392 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local20) = $tmp390;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
// line 103
org$frostlang$frostc$IR$Value* $tmp393 = *(&local20);
frost$core$Bit $tmp394 = frost$core$Bit$init$builtin_bit($tmp393 != NULL);
bool $tmp395 = $tmp394.value;
if ($tmp395) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp396 = (frost$core$Int64) {103};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s397, $tmp396);
abort(); // unreachable
block38:;
// line 104
org$frostlang$frostc$Position $tmp398 = *(&local13);
org$frostlang$frostc$IR$Value* $tmp399 = *(&local20);
org$frostlang$frostc$IR$Value* $tmp400 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, $tmp398, $tmp399);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
org$frostlang$frostc$IR$Value* $tmp401 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local17) = $tmp400;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
org$frostlang$frostc$IR$Value* $tmp402 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp403 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local19) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp404 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local18) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 107
org$frostlang$frostc$IR* $tmp405 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp406 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp407 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp408 = *(&local13);
org$frostlang$frostc$IR$Value* $tmp409 = *(&local17);
org$frostlang$frostc$IR$Block$ID $tmp410 = *(&local10);
org$frostlang$frostc$IR$Block$ID $tmp411 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp406, $tmp407, $tmp408, $tmp409, $tmp410, $tmp411);
$fn413 $tmp412 = ($fn413) $tmp405->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp414 = $tmp412($tmp405, $tmp406);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
// line 109
org$frostlang$frostc$IR* $tmp415 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp416 = *(&local10);
$fn418 $tmp417 = ($fn418) $tmp415->$class->vtable[4];
$tmp417($tmp415, $tmp416);
// line 110
frost$core$Int64 $tmp419 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp420 = *(&local15);
ITable* $tmp421 = ((frost$collections$CollectionView*) $tmp420)->$class->itable;
while ($tmp421->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp421 = $tmp421->next;
}
$fn423 $tmp422 = $tmp421->methods[0];
frost$core$Int64 $tmp424 = $tmp422(((frost$collections$CollectionView*) $tmp420));
frost$core$Bit $tmp425 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp426 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp419, $tmp424, $tmp425);
frost$core$Int64 $tmp427 = $tmp426.min;
*(&local21) = $tmp427;
frost$core$Int64 $tmp428 = $tmp426.max;
frost$core$Bit $tmp429 = $tmp426.inclusive;
bool $tmp430 = $tmp429.value;
frost$core$Int64 $tmp431 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp432 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp431);
if ($tmp430) goto block43; else goto block44;
block43:;
int64_t $tmp433 = $tmp427.value;
int64_t $tmp434 = $tmp428.value;
bool $tmp435 = $tmp433 <= $tmp434;
frost$core$Bit $tmp436 = (frost$core$Bit) {$tmp435};
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block40; else goto block41;
block44:;
int64_t $tmp438 = $tmp427.value;
int64_t $tmp439 = $tmp428.value;
bool $tmp440 = $tmp438 < $tmp439;
frost$core$Bit $tmp441 = (frost$core$Bit) {$tmp440};
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block40; else goto block41;
block40:;
// line 111
org$frostlang$frostc$IR* $tmp443 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp444 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp445 = (frost$core$Int64) {4};
org$frostlang$frostc$Position $tmp446 = *(&local13);
org$frostlang$frostc$Pair* $tmp447 = *(&local16);
frost$core$Object** $tmp448 = &$tmp447->second;
frost$core$Object* $tmp449 = *$tmp448;
frost$core$Int64 $tmp450 = *(&local21);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64($tmp444, $tmp445, $tmp446, param2, ((org$frostlang$frostc$ChoiceCase*) $tmp449), $tmp450);
$fn452 $tmp451 = ($fn452) $tmp443->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp453 = $tmp451($tmp443, $tmp444);
*(&local22) = $tmp453;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
// line 114
org$frostlang$frostc$IR* $tmp454 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp455 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp456 = (frost$core$Int64) {14};
org$frostlang$frostc$Position $tmp457 = *(&local13);
org$frostlang$frostc$IR$Value* $tmp458 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp459 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp460 = *(&local22);
org$frostlang$frostc$Pair* $tmp461 = *(&local16);
frost$core$Object** $tmp462 = &$tmp461->second;
frost$core$Object* $tmp463 = *$tmp462;
frost$collections$Array** $tmp464 = &((org$frostlang$frostc$ChoiceCase*) $tmp463)->fields;
frost$collections$Array* $tmp465 = *$tmp464;
frost$core$Int64 $tmp466 = *(&local21);
frost$core$Object* $tmp467 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp465, $tmp466);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp458, $tmp459, $tmp460, ((org$frostlang$frostc$Type*) $tmp467));
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp455, $tmp456, $tmp457, $tmp458);
$fn469 $tmp468 = ($fn469) $tmp454->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp470 = $tmp468($tmp454, $tmp455);
*(&local23) = $tmp470;
frost$core$Frost$unref$frost$core$Object$Q($tmp467);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
// line 116
org$frostlang$frostc$FixedArray* $tmp471 = *(&local15);
frost$core$Int64 $tmp472 = *(&local21);
frost$core$Object* $tmp473 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp471, $tmp472);
frost$core$String* $tmp474 = org$frostlang$frostc$Compiler$getText$org$frostlang$frostc$ASTNode$R$frost$core$String$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp473));
*(&local24) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
frost$core$String* $tmp475 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
*(&local24) = $tmp474;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
frost$core$Frost$unref$frost$core$Object$Q($tmp473);
// line 117
frost$core$String* $tmp476 = *(&local24);
frost$core$Bit $tmp477 = frost$core$Bit$init$builtin_bit($tmp476 != NULL);
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block47; else goto block46;
block47:;
frost$core$String* $tmp479 = *(&local24);
frost$core$Bit $tmp480 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp479, &$s481);
bool $tmp482 = $tmp480.value;
if ($tmp482) goto block45; else goto block46;
block45:;
// line 118
frost$core$String* $tmp483 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
*(&local24) = ((frost$core$String*) NULL);
goto block42;
block46:;
// line 120
*(&local25) = ((org$frostlang$frostc$Pair*) NULL);
// line 1
// line 122
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp484 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp484, param0);
*(&local26) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp485 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
*(&local26) = $tmp484;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
// line 123
org$frostlang$frostc$FixedArray* $tmp486 = *(&local15);
frost$core$Int64 $tmp487 = *(&local21);
frost$core$Object* $tmp488 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp486, $tmp487);
frost$core$Int64 $tmp489 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp490 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp489);
org$frostlang$frostc$ASTNode* $tmp491 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp492 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp493 = *(&local13);
org$frostlang$frostc$IR$Value* $tmp494 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp495 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp496 = *(&local23);
org$frostlang$frostc$Pair* $tmp497 = *(&local16);
frost$core$Object** $tmp498 = &$tmp497->second;
frost$core$Object* $tmp499 = *$tmp498;
frost$collections$Array** $tmp500 = &((org$frostlang$frostc$ChoiceCase*) $tmp499)->fields;
frost$collections$Array* $tmp501 = *$tmp500;
frost$core$Int64 $tmp502 = *(&local21);
frost$core$Object* $tmp503 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp501, $tmp502);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp494, $tmp495, $tmp496, ((org$frostlang$frostc$Type*) $tmp503));
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp491, $tmp492, $tmp493, $tmp494);
org$frostlang$frostc$Pair* $tmp504 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Variable$Corg$frostlang$frostc$IR$Value$Q$GT$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp488), $tmp490, $tmp491, ((org$frostlang$frostc$Type*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
org$frostlang$frostc$Pair* $tmp505 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
*(&local25) = $tmp504;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
frost$core$Frost$unref$frost$core$Object$Q($tmp503);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
frost$core$Frost$unref$frost$core$Object$Q($tmp488);
// line 130
org$frostlang$frostc$lvalue$VariableLValue* $tmp506 = (org$frostlang$frostc$lvalue$VariableLValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$lvalue$VariableLValue$class);
org$frostlang$frostc$Position $tmp507 = *(&local13);
org$frostlang$frostc$Pair* $tmp508 = *(&local25);
frost$core$Object** $tmp509 = &$tmp508->first;
frost$core$Object* $tmp510 = *$tmp509;
org$frostlang$frostc$lvalue$VariableLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Variable($tmp506, param0, $tmp507, ((org$frostlang$frostc$Variable*) $tmp510));
org$frostlang$frostc$IR$Value* $tmp511 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp512 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp513 = *(&local23);
org$frostlang$frostc$Pair* $tmp514 = *(&local16);
frost$core$Object** $tmp515 = &$tmp514->second;
frost$core$Object* $tmp516 = *$tmp515;
frost$collections$Array** $tmp517 = &((org$frostlang$frostc$ChoiceCase*) $tmp516)->fields;
frost$collections$Array* $tmp518 = *$tmp517;
frost$core$Int64 $tmp519 = *(&local21);
frost$core$Object* $tmp520 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp518, $tmp519);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp511, $tmp512, $tmp513, ((org$frostlang$frostc$Type*) $tmp520));
$fn522 $tmp521 = ($fn522) $tmp506->$class->vtable[4];
$tmp521($tmp506, $tmp511);
frost$core$Frost$unref$frost$core$Object$Q($tmp520);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp523 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
*(&local26) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 134
org$frostlang$frostc$Pair* $tmp524 = *(&local25);
frost$core$Object** $tmp525 = &$tmp524->first;
frost$core$Object* $tmp526 = *$tmp525;
org$frostlang$frostc$Type** $tmp527 = &((org$frostlang$frostc$Variable*) $tmp526)->type;
org$frostlang$frostc$Type* $tmp528 = *$tmp527;
frost$core$Bit $tmp529 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp528);
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block48; else goto block49;
block48:;
// line 135
frost$collections$Stack** $tmp531 = &param0->enclosingContexts;
frost$collections$Stack* $tmp532 = *$tmp531;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp533 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp534 = (frost$core$Int64) {2};
org$frostlang$frostc$Pair* $tmp535 = *(&local25);
frost$core$Object** $tmp536 = &$tmp535->first;
frost$core$Object* $tmp537 = *$tmp536;
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$Variable($tmp533, $tmp534, ((org$frostlang$frostc$Variable*) $tmp537));
frost$collections$Stack$push$frost$collections$Stack$T($tmp532, ((frost$core$Object*) $tmp533));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
goto block49;
block49:;
org$frostlang$frostc$Pair* $tmp538 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
*(&local25) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$String* $tmp539 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
*(&local24) = ((frost$core$String*) NULL);
goto block42;
block42:;
frost$core$Int64 $tmp540 = *(&local21);
int64_t $tmp541 = $tmp428.value;
int64_t $tmp542 = $tmp540.value;
int64_t $tmp543 = $tmp541 - $tmp542;
frost$core$Int64 $tmp544 = (frost$core$Int64) {$tmp543};
frost$core$UInt64 $tmp545 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp544);
if ($tmp430) goto block51; else goto block52;
block51:;
uint64_t $tmp546 = $tmp545.value;
uint64_t $tmp547 = $tmp432.value;
bool $tmp548 = $tmp546 >= $tmp547;
frost$core$Bit $tmp549 = (frost$core$Bit) {$tmp548};
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block50; else goto block41;
block52:;
uint64_t $tmp551 = $tmp545.value;
uint64_t $tmp552 = $tmp432.value;
bool $tmp553 = $tmp551 > $tmp552;
frost$core$Bit $tmp554 = (frost$core$Bit) {$tmp553};
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block50; else goto block41;
block50:;
int64_t $tmp556 = $tmp540.value;
int64_t $tmp557 = $tmp431.value;
int64_t $tmp558 = $tmp556 + $tmp557;
frost$core$Int64 $tmp559 = (frost$core$Int64) {$tmp558};
*(&local21) = $tmp559;
goto block40;
block41:;
// line 140
org$frostlang$frostc$IR$Value* $tmp560 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp561 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
*(&local16) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp562 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp563 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp564 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block16;
block31:;
goto block29;
block29:;
org$frostlang$frostc$Pair* $tmp565 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
*(&local16) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp566 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp567 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block26;
block26:;
// line 145
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 1
// line 147
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp568 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp568, param0);
*(&local28) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp569 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
*(&local28) = $tmp568;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
// line 148
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 149
org$frostlang$frostc$ASTNode* $tmp570 = *(&local12);
org$frostlang$frostc$Pair* $tmp571 = org$frostlang$frostc$Compiler$getChoiceCase$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Corg$frostlang$frostc$ChoiceCase$GT$Q(param0, $tmp570);
*(&local30) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
org$frostlang$frostc$Pair* $tmp572 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
*(&local30) = $tmp571;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
// line 150
org$frostlang$frostc$Pair* $tmp573 = *(&local30);
frost$core$Bit $tmp574 = frost$core$Bit$init$builtin_bit($tmp573 != NULL);
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block53; else goto block55;
block53:;
// line 151
frost$collections$Array* $tmp576 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp577 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp576, $tmp577);
org$frostlang$frostc$ASTNode* $tmp578 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp579 = (frost$core$Int64) {25};
org$frostlang$frostc$ASTNode* $tmp580 = *(&local12);
$fn582 $tmp581 = ($fn582) $tmp580->$class->vtable[2];
org$frostlang$frostc$Position $tmp583 = $tmp581($tmp580);
org$frostlang$frostc$Pair* $tmp584 = *(&local30);
frost$core$Object** $tmp585 = &$tmp584->second;
frost$core$Object* $tmp586 = *$tmp585;
frost$core$Int64* $tmp587 = &((org$frostlang$frostc$ChoiceCase*) $tmp586)->rawValue;
frost$core$Int64 $tmp588 = *$tmp587;
frost$core$UInt64 $tmp589 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp588);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp578, $tmp579, $tmp583, $tmp589);
frost$collections$Array$add$frost$collections$Array$T($tmp576, ((frost$core$Object*) $tmp578));
*(&local31) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$collections$Array* $tmp590 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
*(&local31) = $tmp576;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
// line 153
org$frostlang$frostc$ASTNode* $tmp591 = *(&local12);
$fn593 $tmp592 = ($fn593) $tmp591->$class->vtable[2];
org$frostlang$frostc$Position $tmp594 = $tmp592($tmp591);
frost$collections$Array* $tmp595 = *(&local31);
org$frostlang$frostc$Compiler$TypeContext* $tmp596 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp597 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp598 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp599 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp596, $tmp597, $tmp598, $tmp599);
org$frostlang$frostc$IR$Value* $tmp600 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp594, param4, &$s601, ((frost$collections$ListView*) $tmp595), $tmp596);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
org$frostlang$frostc$IR$Value* $tmp602 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
*(&local29) = $tmp600;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
// line 155
org$frostlang$frostc$IR$Value* $tmp603 = *(&local29);
frost$core$Bit $tmp604 = frost$core$Bit$init$builtin_bit($tmp603 == NULL);
bool $tmp605 = $tmp604.value;
if ($tmp605) goto block56; else goto block57;
block56:;
// line 156
frost$collections$Array* $tmp606 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local31) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp607 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
*(&local30) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp608 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp609 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
*(&local28) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp610 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp611 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp612 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp613 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp614 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp615 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp616 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
return;
block57:;
frost$collections$Array* $tmp617 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
*(&local31) = ((frost$collections$Array*) NULL);
goto block54;
block55:;
// line 1
// line 160
org$frostlang$frostc$ASTNode* $tmp618 = *(&local12);
$fn620 $tmp619 = ($fn620) $tmp618->$class->vtable[2];
org$frostlang$frostc$Position $tmp621 = $tmp619($tmp618);
frost$collections$Array* $tmp622 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp623 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp622, $tmp623);
org$frostlang$frostc$ASTNode* $tmp624 = *(&local12);
frost$collections$Array$add$frost$collections$Array$T($tmp622, ((frost$core$Object*) $tmp624));
org$frostlang$frostc$Compiler$TypeContext* $tmp625 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp626 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp627 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp628 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp625, $tmp626, $tmp627, $tmp628);
org$frostlang$frostc$IR$Value* $tmp629 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp621, param2, &$s630, ((frost$collections$ListView*) $tmp622), $tmp625);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
org$frostlang$frostc$IR$Value* $tmp631 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
*(&local29) = $tmp629;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
// line 162
org$frostlang$frostc$IR$Value* $tmp632 = *(&local29);
frost$core$Bit $tmp633 = frost$core$Bit$init$builtin_bit($tmp632 == NULL);
bool $tmp634 = $tmp633.value;
if ($tmp634) goto block58; else goto block59;
block58:;
// line 163
org$frostlang$frostc$Pair* $tmp635 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
*(&local30) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp636 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp637 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
*(&local28) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp638 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp639 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp640 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$FixedArray* $tmp641 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp642 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp643 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR* $tmp644 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
return;
block59:;
goto block54;
block54:;
// line 166
org$frostlang$frostc$Position $tmp645 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp646 = *(&local29);
org$frostlang$frostc$IR$Value* $tmp647 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, $tmp645, $tmp646);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
org$frostlang$frostc$IR$Value* $tmp648 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
*(&local27) = $tmp647;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
org$frostlang$frostc$Pair* $tmp649 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
*(&local30) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$IR$Value* $tmp650 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp651 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
*(&local28) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 168
org$frostlang$frostc$IR* $tmp652 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp653 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp654 = (frost$core$Int64) {5};
org$frostlang$frostc$Position $tmp655 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp656 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp657 = *(&local10);
org$frostlang$frostc$IR$Block$ID $tmp658 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp653, $tmp654, $tmp655, $tmp656, $tmp657, $tmp658);
$fn660 $tmp659 = ($fn660) $tmp652->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp661 = $tmp659($tmp652, $tmp653);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
org$frostlang$frostc$IR$Value* $tmp662 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ASTNode* $tmp663 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block16;
block16:;
frost$core$Int64 $tmp664 = *(&local11);
int64_t $tmp665 = $tmp122.value;
int64_t $tmp666 = $tmp664.value;
int64_t $tmp667 = $tmp665 - $tmp666;
frost$core$Int64 $tmp668 = (frost$core$Int64) {$tmp667};
frost$core$UInt64 $tmp669 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp668);
if ($tmp124) goto block61; else goto block62;
block61:;
uint64_t $tmp670 = $tmp669.value;
uint64_t $tmp671 = $tmp126.value;
bool $tmp672 = $tmp670 >= $tmp671;
frost$core$Bit $tmp673 = (frost$core$Bit) {$tmp672};
bool $tmp674 = $tmp673.value;
if ($tmp674) goto block60; else goto block15;
block62:;
uint64_t $tmp675 = $tmp669.value;
uint64_t $tmp676 = $tmp126.value;
bool $tmp677 = $tmp675 > $tmp676;
frost$core$Bit $tmp678 = (frost$core$Bit) {$tmp677};
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block60; else goto block15;
block60:;
int64_t $tmp680 = $tmp664.value;
int64_t $tmp681 = $tmp125.value;
int64_t $tmp682 = $tmp680 + $tmp681;
frost$core$Int64 $tmp683 = (frost$core$Int64) {$tmp682};
*(&local11) = $tmp683;
goto block14;
block15:;
// line 171
org$frostlang$frostc$IR* $tmp684 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp685 = *(&local10);
$fn687 $tmp686 = ($fn687) $tmp684->$class->vtable[4];
$tmp686($tmp684, $tmp685);
// line 172
org$frostlang$frostc$FixedArray* $tmp688 = *(&local8);
ITable* $tmp689 = ((frost$collections$Iterable*) $tmp688)->$class->itable;
while ($tmp689->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp689 = $tmp689->next;
}
$fn691 $tmp690 = $tmp689->methods[0];
frost$collections$Iterator* $tmp692 = $tmp690(((frost$collections$Iterable*) $tmp688));
goto block63;
block63:;
ITable* $tmp693 = $tmp692->$class->itable;
while ($tmp693->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp693 = $tmp693->next;
}
$fn695 $tmp694 = $tmp693->methods[0];
frost$core$Bit $tmp696 = $tmp694($tmp692);
bool $tmp697 = $tmp696.value;
if ($tmp697) goto block65; else goto block64;
block64:;
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp698 = $tmp692->$class->itable;
while ($tmp698->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp698 = $tmp698->next;
}
$fn700 $tmp699 = $tmp698->methods[1];
frost$core$Object* $tmp701 = $tmp699($tmp692);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp701)));
org$frostlang$frostc$ASTNode* $tmp702 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
*(&local32) = ((org$frostlang$frostc$ASTNode*) $tmp701);
// line 173
org$frostlang$frostc$ASTNode* $tmp703 = *(&local32);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp703);
frost$core$Frost$unref$frost$core$Object$Q($tmp701);
org$frostlang$frostc$ASTNode* $tmp704 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block63;
block65:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
org$frostlang$frostc$Compiler$AutoScope* $tmp705 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 176
org$frostlang$frostc$IR* $tmp706 = *(&local1);
$fn708 $tmp707 = ($fn708) $tmp706->$class->vtable[5];
frost$core$Bit $tmp709 = $tmp707($tmp706);
frost$core$Bit $tmp710 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp709);
bool $tmp711 = $tmp710.value;
if ($tmp711) goto block66; else goto block67;
block66:;
// line 177
org$frostlang$frostc$IR* $tmp712 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp713 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp714 = (frost$core$Int64) {1};
org$frostlang$frostc$Position $tmp715 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp716 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp713, $tmp714, $tmp715, $tmp716);
$fn718 $tmp717 = ($fn718) $tmp712->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp719 = $tmp717($tmp712, $tmp713);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
goto block67;
block67:;
org$frostlang$frostc$FixedArray* $tmp720 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp721 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block11;
block13:;
// line 181
frost$core$Int64 $tmp722 = (frost$core$Int64) {181};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s723, $tmp722);
abort(); // unreachable
block11:;
org$frostlang$frostc$ASTNode* $tmp724 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block8:;
frost$core$Int64 $tmp725 = *(&local4);
int64_t $tmp726 = $tmp74.value;
int64_t $tmp727 = $tmp725.value;
int64_t $tmp728 = $tmp726 - $tmp727;
frost$core$Int64 $tmp729 = (frost$core$Int64) {$tmp728};
frost$core$UInt64 $tmp730 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp729);
if ($tmp76) goto block69; else goto block70;
block69:;
uint64_t $tmp731 = $tmp730.value;
uint64_t $tmp732 = $tmp78.value;
bool $tmp733 = $tmp731 >= $tmp732;
frost$core$Bit $tmp734 = (frost$core$Bit) {$tmp733};
bool $tmp735 = $tmp734.value;
if ($tmp735) goto block68; else goto block7;
block70:;
uint64_t $tmp736 = $tmp730.value;
uint64_t $tmp737 = $tmp78.value;
bool $tmp738 = $tmp736 > $tmp737;
frost$core$Bit $tmp739 = (frost$core$Bit) {$tmp738};
bool $tmp740 = $tmp739.value;
if ($tmp740) goto block68; else goto block7;
block68:;
int64_t $tmp741 = $tmp725.value;
int64_t $tmp742 = $tmp77.value;
int64_t $tmp743 = $tmp741 + $tmp742;
frost$core$Int64 $tmp744 = (frost$core$Int64) {$tmp743};
*(&local4) = $tmp744;
goto block6;
block7:;
// line 185
frost$core$Bit $tmp745 = frost$core$Bit$init$builtin_bit(param6 != NULL);
bool $tmp746 = $tmp745.value;
if ($tmp746) goto block71; else goto block72;
block71:;
// line 1
// line 187
org$frostlang$frostc$Compiler$AutoScope* $tmp747 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp747, param0);
*(&local33) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
org$frostlang$frostc$Compiler$AutoScope* $tmp748 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
*(&local33) = $tmp747;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
// line 188
org$frostlang$frostc$IR* $tmp749 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp750 = *(&local3);
$fn752 $tmp751 = ($fn752) $tmp749->$class->vtable[4];
$tmp751($tmp749, $tmp750);
// line 189
ITable* $tmp753 = ((frost$collections$Iterable*) param6)->$class->itable;
while ($tmp753->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp753 = $tmp753->next;
}
$fn755 $tmp754 = $tmp753->methods[0];
frost$collections$Iterator* $tmp756 = $tmp754(((frost$collections$Iterable*) param6));
goto block73;
block73:;
ITable* $tmp757 = $tmp756->$class->itable;
while ($tmp757->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp757 = $tmp757->next;
}
$fn759 $tmp758 = $tmp757->methods[0];
frost$core$Bit $tmp760 = $tmp758($tmp756);
bool $tmp761 = $tmp760.value;
if ($tmp761) goto block75; else goto block74;
block74:;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp762 = $tmp756->$class->itable;
while ($tmp762->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp762 = $tmp762->next;
}
$fn764 $tmp763 = $tmp762->methods[1];
frost$core$Object* $tmp765 = $tmp763($tmp756);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp765)));
org$frostlang$frostc$ASTNode* $tmp766 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
*(&local34) = ((org$frostlang$frostc$ASTNode*) $tmp765);
// line 190
org$frostlang$frostc$ASTNode* $tmp767 = *(&local34);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp767);
frost$core$Frost$unref$frost$core$Object$Q($tmp765);
org$frostlang$frostc$ASTNode* $tmp768 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block73;
block75:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
org$frostlang$frostc$Compiler$AutoScope* $tmp769 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
*(&local33) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 193
org$frostlang$frostc$IR* $tmp770 = *(&local1);
$fn772 $tmp771 = ($fn772) $tmp770->$class->vtable[5];
frost$core$Bit $tmp773 = $tmp771($tmp770);
frost$core$Bit $tmp774 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp773);
bool $tmp775 = $tmp774.value;
if ($tmp775) goto block76; else goto block77;
block76:;
// line 194
org$frostlang$frostc$IR* $tmp776 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp777 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp778 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp779 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp777, $tmp778, param1, $tmp779);
$fn781 $tmp780 = ($fn781) $tmp776->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp782 = $tmp780($tmp776, $tmp777);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
goto block77;
block77:;
goto block72;
block72:;
// line 197
org$frostlang$frostc$IR* $tmp783 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp784 = *(&local2);
$fn786 $tmp785 = ($fn786) $tmp783->$class->vtable[4];
$tmp785($tmp783, $tmp784);
org$frostlang$frostc$IR* $tmp787 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$Match$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$FixedArray* param4) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
org$frostlang$frostc$ClassDecl* local2 = NULL;
org$frostlang$frostc$IR$Value* local3 = NULL;
// line 203
org$frostlang$frostc$Compiler$TypeContext* $tmp788 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp789 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp788, $tmp789);
org$frostlang$frostc$IR$Value* $tmp790 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp788);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
org$frostlang$frostc$IR$Value* $tmp791 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
*(&local0) = $tmp790;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
// line 204
org$frostlang$frostc$IR$Value* $tmp792 = *(&local0);
frost$core$Bit $tmp793 = frost$core$Bit$init$builtin_bit($tmp792 == NULL);
bool $tmp794 = $tmp793.value;
if ($tmp794) goto block1; else goto block3;
block3:;
ITable* $tmp795 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp795->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp795 = $tmp795->next;
}
$fn797 $tmp796 = $tmp795->methods[0];
frost$core$Int64 $tmp798 = $tmp796(((frost$collections$CollectionView*) param3));
frost$core$Int64 $tmp799 = (frost$core$Int64) {0};
frost$core$Bit $tmp800 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp798, $tmp799);
bool $tmp801 = $tmp800.value;
if ($tmp801) goto block4; else goto block2;
block4:;
frost$core$Bit $tmp802 = frost$core$Bit$init$builtin_bit(param4 == NULL);
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block1; else goto block2;
block1:;
// line 205
org$frostlang$frostc$IR$Value* $tmp804 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block2:;
// line 207
org$frostlang$frostc$IR$Value* $tmp805 = *(&local0);
$fn807 $tmp806 = ($fn807) $tmp805->$class->vtable[2];
org$frostlang$frostc$Type* $tmp808 = $tmp806($tmp805);
org$frostlang$frostc$ClassDecl* $tmp809 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp808);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
org$frostlang$frostc$ClassDecl* $tmp810 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
*(&local1) = $tmp809;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
// line 208
org$frostlang$frostc$ClassDecl* $tmp811 = *(&local1);
frost$core$Bit $tmp812 = frost$core$Bit$init$builtin_bit($tmp811 == NULL);
bool $tmp813 = $tmp812.value;
if ($tmp813) goto block5; else goto block6;
block5:;
// line 209
org$frostlang$frostc$ClassDecl* $tmp814 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp815 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block6:;
// line 211
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp816 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
// line 212
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 213
org$frostlang$frostc$ClassDecl* $tmp817 = *(&local1);
org$frostlang$frostc$ClassDecl$Kind* $tmp818 = &$tmp817->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp819 = *$tmp818;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp820;
$tmp820 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp820->value = $tmp819;
frost$core$Int64 $tmp821 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp822 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp821);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp823;
$tmp823 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp823->value = $tmp822;
ITable* $tmp824 = ((frost$core$Equatable*) $tmp820)->$class->itable;
while ($tmp824->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp824 = $tmp824->next;
}
$fn826 $tmp825 = $tmp824->methods[0];
frost$core$Bit $tmp827 = $tmp825(((frost$core$Equatable*) $tmp820), ((frost$core$Equatable*) $tmp823));
bool $tmp828 = $tmp827.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp823)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp820)));
if ($tmp828) goto block7; else goto block9;
block7:;
// line 214
org$frostlang$frostc$IR$Value* $tmp829 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp830 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp829, &$s831);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
org$frostlang$frostc$IR$Value* $tmp832 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
*(&local3) = $tmp830;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
// line 216
org$frostlang$frostc$ClassDecl* $tmp833 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
org$frostlang$frostc$ClassDecl* $tmp834 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
*(&local2) = $tmp833;
goto block8;
block9:;
// line 218
org$frostlang$frostc$ClassDecl* $tmp835 = *(&local1);
org$frostlang$frostc$SymbolTable* $tmp836 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp835);
org$frostlang$frostc$Symbol* $tmp837 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp836, &$s838);
frost$core$Bit $tmp839 = frost$core$Bit$init$builtin_bit($tmp837 == NULL);
bool $tmp840 = $tmp839.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
if ($tmp840) goto block10; else goto block12;
block10:;
// line 219
$fn842 $tmp841 = ($fn842) param2->$class->vtable[2];
org$frostlang$frostc$Position $tmp843 = $tmp841(param2);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp843, &$s844);
// line 220
org$frostlang$frostc$IR$Value* $tmp845 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp846 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp847 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp848 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block12:;
// line 1
// line 223
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp849 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block11;
block11:;
goto block8;
block8:;
// line 225
org$frostlang$frostc$IR$Value* $tmp850 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp851 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp852 = *(&local3);
org$frostlang$frostc$statement$Match$compileChainedIfMatch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$Q$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0, param1, $tmp850, $tmp851, $tmp852, param3, param4);
org$frostlang$frostc$IR$Value* $tmp853 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp854 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp855 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp856 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
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

