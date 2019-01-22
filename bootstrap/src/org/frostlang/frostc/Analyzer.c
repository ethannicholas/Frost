#include "org/frostlang/frostc/Analyzer.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/IR.h"
#include "frost/collections/HashMap.h"
#include "frost/core/Frost.h"
#include "frost/collections/HashSet.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Analyzer/State.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/io/Console.h"
#include "frost/core/UInt64.h"
#include "frost/core/Real64.h"
#include "frost/collections/Key.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/Symbol.h"


static frost$core$String $s1;
org$frostlang$frostc$Analyzer$class_type org$frostlang$frostc$Analyzer$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Analyzer$cleanup, org$frostlang$frostc$Analyzer$getType$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Analyzer$State$R$org$frostlang$frostc$Type, org$frostlang$frostc$Analyzer$propagate$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$Analyzer$getBlock$org$frostlang$frostc$IR$Block$ID$R$org$frostlang$frostc$IR$Block, org$frostlang$frostc$Analyzer$computeExitState$org$frostlang$frostc$IR$Block$ID$frost$core$Bit$R$org$frostlang$frostc$Analyzer$State, org$frostlang$frostc$Analyzer$process$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$Analyzer$analyze} };

typedef frost$core$Int64 (*$fn37)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn125)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn148)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn162)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Analyzer$State* (*$fn166)(org$frostlang$frostc$Analyzer*, org$frostlang$frostc$IR$Block$ID, frost$core$Bit);
typedef frost$core$Bit (*$fn177)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn182)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Analyzer$State* (*$fn192)(org$frostlang$frostc$Analyzer*, org$frostlang$frostc$IR$Block$ID, frost$core$Bit);
typedef frost$core$Bit (*$fn195)(org$frostlang$frostc$Analyzer$State*, org$frostlang$frostc$Compiler*, org$frostlang$frostc$Analyzer$State*);
typedef frost$collections$Iterator* (*$fn212)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn216)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn221)(frost$collections$Iterator*);
typedef org$frostlang$frostc$IR$Block* (*$fn239)(org$frostlang$frostc$Analyzer*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn248)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn335)(org$frostlang$frostc$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$Analyzer$State*);
typedef org$frostlang$frostc$Type* (*$fn349)(org$frostlang$frostc$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$Analyzer$State*);
typedef org$frostlang$frostc$Type* (*$fn385)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn460)(org$frostlang$frostc$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$Analyzer$State*);
typedef org$frostlang$frostc$Type* (*$fn492)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn510)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn542)(org$frostlang$frostc$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$Analyzer$State*);
typedef org$frostlang$frostc$Type* (*$fn575)(org$frostlang$frostc$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$Analyzer$State*);
typedef frost$core$String* (*$fn584)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn617)(org$frostlang$frostc$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$Analyzer$State*);
typedef org$frostlang$frostc$Type* (*$fn640)(org$frostlang$frostc$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$Analyzer$State*);
typedef org$frostlang$frostc$Type* (*$fn690)(org$frostlang$frostc$Analyzer*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$Analyzer$State*);
typedef org$frostlang$frostc$IR$Block* (*$fn718)(org$frostlang$frostc$Analyzer*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn729)(frost$collections$CollectionView*);
typedef void (*$fn751)(org$frostlang$frostc$Analyzer*, org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn768)(org$frostlang$frostc$Analyzer*, org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn774)(org$frostlang$frostc$Analyzer*, org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Int64 (*$fn795)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn818)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn889)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn901)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn905)(frost$collections$Iterator*);
typedef void (*$fn913)(org$frostlang$frostc$Analyzer*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn920)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn924)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn929)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn961)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn971)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Analyzer$State* (*$fn987)(org$frostlang$frostc$Analyzer*, org$frostlang$frostc$IR$Block$ID, frost$core$Bit);
typedef org$frostlang$frostc$Position (*$fn1001)(org$frostlang$frostc$IR$Statement*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72", 29, -7273013651728797054, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x45\x52\x52\x4f\x52\x3a\x20\x67\x65\x74\x74\x69\x6e\x67\x20", 15, -1598551398388155101, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x66\x72\x6f\x6d\x20", 6, 1408576125201, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -4050164034945853713, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -4050164034945853713, NULL };
static frost$core$String $s586 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -4050164034945853713, NULL };
static frost$core$String $s804 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6c\x6f\x63\x6b\x20\x65\x6e\x64\x65\x64\x20\x69\x6e\x20\x6e\x6f\x6e\x74\x65\x72\x6d\x69\x6e\x61\x6c\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x20", 37, 1996004463200850147, NULL };
static frost$core$String $s805 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -4050164034945853713, NULL };
static frost$core$String $s981 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x20\x65\x78\x69\x74\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 33, 7071984735217758420, NULL };
static frost$core$String $s1003 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 11, 184878482956378755, NULL };

void org$frostlang$frostc$Analyzer$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$Analyzer* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$MethodDecl* param2, org$frostlang$frostc$IR* param3) {

// line 10
frost$collections$HashMap* $tmp2 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$collections$HashMap** $tmp3 = &param0->predecessors;
frost$collections$HashMap* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$HashMap** $tmp5 = &param0->predecessors;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// line 61
frost$collections$HashMap* $tmp6 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$HashMap** $tmp7 = &param0->entryStates;
frost$collections$HashMap* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$HashMap** $tmp9 = &param0->entryStates;
*$tmp9 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
// line 63
frost$collections$HashSet* $tmp10 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$collections$HashSet** $tmp11 = &param0->worklist;
frost$collections$HashSet* $tmp12 = *$tmp11;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$collections$HashSet** $tmp13 = &param0->worklist;
*$tmp13 = $tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
// line 66
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp14 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp15 = *$tmp14;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
org$frostlang$frostc$Compiler** $tmp16 = &param0->compiler;
*$tmp16 = param1;
// line 67
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$MethodDecl** $tmp17 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp18 = *$tmp17;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
org$frostlang$frostc$MethodDecl** $tmp19 = &param0->m;
*$tmp19 = param2;
// line 68
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$IR** $tmp20 = &param0->ir;
org$frostlang$frostc$IR* $tmp21 = *$tmp20;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
org$frostlang$frostc$IR** $tmp22 = &param0->ir;
*$tmp22 = param3;
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Analyzer$getType$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Analyzer$State$R$org$frostlang$frostc$Type(org$frostlang$frostc$Analyzer* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$Analyzer$State* param2) {

frost$core$Int64 local0;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$IR$Statement$ID local5;
org$frostlang$frostc$Type* local6 = NULL;
// line 72
frost$core$Int64* $tmp23 = &param1->$rawValue;
frost$core$Int64 $tmp24 = *$tmp23;
frost$core$Int64 $tmp25 = (frost$core$Int64) {2};
frost$core$Bit $tmp26 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp24, $tmp25);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block2; else goto block3;
block2:;
frost$core$Int64* $tmp28 = (frost$core$Int64*) (param1->$data + 0);
frost$core$Int64 $tmp29 = *$tmp28;
*(&local0) = $tmp29;
org$frostlang$frostc$Type** $tmp30 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp31 = *$tmp30;
// line 74
frost$core$Int64 $tmp32 = *(&local0);
frost$collections$Array** $tmp33 = &param2->locals;
frost$collections$Array* $tmp34 = *$tmp33;
ITable* $tmp35 = ((frost$collections$CollectionView*) $tmp34)->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp35 = $tmp35->next;
}
$fn37 $tmp36 = $tmp35->methods[0];
frost$core$Int64 $tmp38 = $tmp36(((frost$collections$CollectionView*) $tmp34));
int64_t $tmp39 = $tmp32.value;
int64_t $tmp40 = $tmp38.value;
bool $tmp41 = $tmp39 > $tmp40;
frost$core$Bit $tmp42 = (frost$core$Bit) {$tmp41};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block4; else goto block5;
block4:;
// line 75
frost$core$Int64 $tmp44 = *(&local0);
frost$core$Int64$wrapper* $tmp45;
$tmp45 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp45->value = $tmp44;
frost$core$String* $tmp46 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s47, ((frost$core$Object*) $tmp45));
frost$core$String* $tmp48 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp46, &$s49);
org$frostlang$frostc$IR** $tmp50 = &param0->ir;
org$frostlang$frostc$IR* $tmp51 = *$tmp50;
frost$core$String* $tmp52 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp48, ((frost$core$Object*) $tmp51));
frost$core$String* $tmp53 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp52, &$s54);
frost$io$Console$printLine$frost$core$String($tmp53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
goto block5;
block5:;
// line 77
frost$collections$Array** $tmp55 = &param2->locals;
frost$collections$Array* $tmp56 = *$tmp55;
frost$core$Int64 $tmp57 = *(&local0);
frost$core$Object* $tmp58 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp56, $tmp57);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp58)));
frost$core$Frost$unref$frost$core$Object$Q($tmp58);
return ((org$frostlang$frostc$Type*) $tmp58);
block3:;
frost$core$Int64 $tmp59 = (frost$core$Int64) {1};
frost$core$Bit $tmp60 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp24, $tmp59);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block6; else goto block7;
block6:;
frost$core$UInt64* $tmp62 = (frost$core$UInt64*) (param1->$data + 0);
frost$core$UInt64 $tmp63 = *$tmp62;
org$frostlang$frostc$Type** $tmp64 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp65 = *$tmp64;
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
org$frostlang$frostc$Type* $tmp66 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local1) = $tmp65;
// line 80
org$frostlang$frostc$Type* $tmp67 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
org$frostlang$frostc$Type* $tmp68 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return $tmp67;
block7:;
frost$core$Int64 $tmp69 = (frost$core$Int64) {4};
frost$core$Bit $tmp70 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp24, $tmp69);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Type** $tmp72 = (org$frostlang$frostc$Type**) (param1->$data + 0);
org$frostlang$frostc$Type* $tmp73 = *$tmp72;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
org$frostlang$frostc$Type* $tmp74 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
*(&local2) = $tmp73;
// line 83
org$frostlang$frostc$Type* $tmp75 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
org$frostlang$frostc$Type* $tmp76 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return $tmp75;
block9:;
frost$core$Int64 $tmp77 = (frost$core$Int64) {5};
frost$core$Bit $tmp78 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp24, $tmp77);
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block10; else goto block11;
block10:;
frost$core$Int64* $tmp80 = (frost$core$Int64*) (param1->$data + 0);
frost$core$Int64 $tmp81 = *$tmp80;
org$frostlang$frostc$Type** $tmp82 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp83 = *$tmp82;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
org$frostlang$frostc$Type* $tmp84 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
*(&local3) = $tmp83;
// line 86
org$frostlang$frostc$Type* $tmp85 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
org$frostlang$frostc$Type* $tmp86 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return $tmp85;
block11:;
frost$core$Int64 $tmp87 = (frost$core$Int64) {6};
frost$core$Bit $tmp88 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp24, $tmp87);
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block12; else goto block13;
block12:;
frost$core$Real64* $tmp90 = (frost$core$Real64*) (param1->$data + 0);
frost$core$Real64 $tmp91 = *$tmp90;
org$frostlang$frostc$Type** $tmp92 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp93 = *$tmp92;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
org$frostlang$frostc$Type* $tmp94 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local4) = $tmp93;
// line 89
org$frostlang$frostc$Type* $tmp95 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
org$frostlang$frostc$Type* $tmp96 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp95;
block13:;
frost$core$Int64 $tmp97 = (frost$core$Int64) {7};
frost$core$Bit $tmp98 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp24, $tmp97);
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block14; else goto block15;
block14:;
org$frostlang$frostc$IR$Statement$ID* $tmp100 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp101 = *$tmp100;
*(&local5) = $tmp101;
org$frostlang$frostc$Type** $tmp102 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp103 = *$tmp102;
// line 92
frost$collections$HashMap** $tmp104 = &param2->statements;
frost$collections$HashMap* $tmp105 = *$tmp104;
org$frostlang$frostc$IR$Statement$ID $tmp106 = *(&local5);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp107;
$tmp107 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp107->value = $tmp106;
frost$core$Object* $tmp108 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp105, ((frost$collections$Key*) $tmp107));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp108)));
org$frostlang$frostc$Type* $tmp109 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
*(&local6) = ((org$frostlang$frostc$Type*) $tmp108);
frost$core$Frost$unref$frost$core$Object$Q($tmp108);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp107)));
// line 93
org$frostlang$frostc$Type* $tmp110 = *(&local6);
frost$core$Bit $tmp111 = frost$core$Bit$init$builtin_bit($tmp110 != NULL);
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block16; else goto block17;
block16:;
// line 94
org$frostlang$frostc$Type* $tmp113 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
org$frostlang$frostc$Type* $tmp114 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
return $tmp113;
block17:;
// line 96
org$frostlang$frostc$Type* $tmp115 = org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
org$frostlang$frostc$Type* $tmp116 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
return $tmp115;
block15:;
frost$core$Int64 $tmp117 = (frost$core$Int64) {8};
frost$core$Bit $tmp118 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp24, $tmp117);
bool $tmp119 = $tmp118.value;
if ($tmp119) goto block18; else goto block19;
block18:;
// line 99
org$frostlang$frostc$Type* $tmp120 = org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
return $tmp120;
block19:;
// line 102
frost$core$Bit $tmp121 = frost$core$Bit$init$builtin_bit(false);
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp123 = (frost$core$Int64) {102};
$fn125 $tmp124 = ($fn125) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp126 = $tmp124(((frost$core$Object*) param1));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s127, $tmp123, $tmp126);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
abort(); // unreachable
block20:;
// line 103
goto block22;
block22:;
goto block22;
block23:;
goto block1;
block1:;
goto block24;
block24:;

}
void org$frostlang$frostc$Analyzer$propagate$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Analyzer* param0, org$frostlang$frostc$IR$Block$ID param1, org$frostlang$frostc$IR$Block$ID param2) {

frost$collections$HashSet* local0 = NULL;
frost$core$Bit local1;
frost$collections$Iterator* local2 = NULL;
org$frostlang$frostc$Analyzer$State* local3 = NULL;
org$frostlang$frostc$IR$Block$ID local4;
frost$core$Bit local5;
// line 109
frost$collections$HashMap** $tmp128 = &param0->predecessors;
frost$collections$HashMap* $tmp129 = *$tmp128;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp130;
$tmp130 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp130->value = param2;
frost$core$Object* $tmp131 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp129, ((frost$collections$Key*) $tmp130));
*(&local0) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$HashSet*) $tmp131)));
frost$collections$HashSet* $tmp132 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local0) = ((frost$collections$HashSet*) $tmp131);
frost$core$Frost$unref$frost$core$Object$Q($tmp131);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp130)));
// line 110
frost$collections$HashSet* $tmp133 = *(&local0);
frost$core$Bit $tmp134 = frost$core$Bit$init$builtin_bit($tmp133 == NULL);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block1; else goto block2;
block1:;
// line 111
frost$collections$HashSet* $tmp136 = (frost$collections$HashSet*) frostObjectAlloc(24, (frost$core$Class*) &frost$collections$HashSet$class);
frost$collections$HashSet$init($tmp136);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$collections$HashSet* $tmp137 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
*(&local0) = $tmp136;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
// line 112
frost$collections$HashMap** $tmp138 = &param0->predecessors;
frost$collections$HashMap* $tmp139 = *$tmp138;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp140;
$tmp140 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp140->value = param2;
frost$collections$HashSet* $tmp141 = *(&local0);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp139, ((frost$collections$Key*) $tmp140), ((frost$core$Object*) $tmp141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp140)));
goto block2;
block2:;
// line 114
frost$collections$HashSet* $tmp142 = *(&local0);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp143;
$tmp143 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp143->value = param1;
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp142, ((frost$collections$Key*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp143)));
// line 115
frost$core$Bit $tmp144 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp144;
// line 116
frost$collections$HashSet* $tmp145 = *(&local0);
ITable* $tmp146 = ((frost$collections$Iterable*) $tmp145)->$class->itable;
while ($tmp146->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp146 = $tmp146->next;
}
$fn148 $tmp147 = $tmp146->methods[0];
frost$collections$Iterator* $tmp149 = $tmp147(((frost$collections$Iterable*) $tmp145));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$collections$Iterator* $tmp150 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
*(&local2) = $tmp149;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
// line 117
frost$collections$HashMap** $tmp151 = &param0->entryStates;
frost$collections$HashMap* $tmp152 = *$tmp151;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp153;
$tmp153 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp153->value = param2;
frost$core$Object* $tmp154 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp152, ((frost$collections$Key*) $tmp153));
*(&local3) = ((org$frostlang$frostc$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Analyzer$State*) $tmp154)));
org$frostlang$frostc$Analyzer$State* $tmp155 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local3) = ((org$frostlang$frostc$Analyzer$State*) $tmp154);
frost$core$Frost$unref$frost$core$Object$Q($tmp154);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp153)));
// line 118
org$frostlang$frostc$Analyzer$State* $tmp156 = *(&local3);
frost$core$Bit $tmp157 = frost$core$Bit$init$builtin_bit($tmp156 == NULL);
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block3; else goto block4;
block3:;
// line 119
frost$collections$Iterator* $tmp159 = *(&local2);
ITable* $tmp160 = $tmp159->$class->itable;
while ($tmp160->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp160 = $tmp160->next;
}
$fn162 $tmp161 = $tmp160->methods[1];
frost$core$Object* $tmp163 = $tmp161($tmp159);
frost$core$Bit $tmp164 = frost$core$Bit$init$builtin_bit(false);
$fn166 $tmp165 = ($fn166) param0->$class->vtable[5];
org$frostlang$frostc$Analyzer$State* $tmp167 = $tmp165(param0, ((org$frostlang$frostc$IR$Block$ID$wrapper*) $tmp163)->value, $tmp164);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
org$frostlang$frostc$Analyzer$State* $tmp168 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local3) = $tmp167;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
frost$core$Frost$unref$frost$core$Object$Q($tmp163);
// line 120
frost$collections$HashMap** $tmp169 = &param0->entryStates;
frost$collections$HashMap* $tmp170 = *$tmp169;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp171;
$tmp171 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp171->value = param2;
org$frostlang$frostc$Analyzer$State* $tmp172 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp170, ((frost$collections$Key*) $tmp171), ((frost$core$Object*) $tmp172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp171)));
// line 121
frost$core$Bit $tmp173 = frost$core$Bit$init$builtin_bit(true);
*(&local1) = $tmp173;
goto block4;
block4:;
// line 123
frost$collections$Iterator* $tmp174 = *(&local2);
goto block5;
block5:;
ITable* $tmp175 = $tmp174->$class->itable;
while ($tmp175->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp175 = $tmp175->next;
}
$fn177 $tmp176 = $tmp175->methods[0];
frost$core$Bit $tmp178 = $tmp176($tmp174);
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block7; else goto block6;
block6:;
ITable* $tmp180 = $tmp174->$class->itable;
while ($tmp180->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp180 = $tmp180->next;
}
$fn182 $tmp181 = $tmp180->methods[1];
frost$core$Object* $tmp183 = $tmp181($tmp174);
*(&local4) = ((org$frostlang$frostc$IR$Block$ID$wrapper*) $tmp183)->value;
// line 124
frost$core$Bit $tmp184 = *(&local1);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block8; else goto block9;
block8:;
*(&local5) = $tmp184;
goto block10;
block9:;
org$frostlang$frostc$Analyzer$State* $tmp186 = *(&local3);
org$frostlang$frostc$Compiler** $tmp187 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp188 = *$tmp187;
org$frostlang$frostc$IR$Block$ID $tmp189 = *(&local4);
frost$core$Bit $tmp190 = frost$core$Bit$init$builtin_bit(false);
$fn192 $tmp191 = ($fn192) param0->$class->vtable[5];
org$frostlang$frostc$Analyzer$State* $tmp193 = $tmp191(param0, $tmp189, $tmp190);
$fn195 $tmp194 = ($fn195) $tmp186->$class->vtable[2];
frost$core$Bit $tmp196 = $tmp194($tmp186, $tmp188, $tmp193);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
*(&local5) = $tmp196;
goto block10;
block10:;
frost$core$Bit $tmp197 = *(&local5);
*(&local1) = $tmp197;
frost$core$Frost$unref$frost$core$Object$Q($tmp183);
goto block5;
block7:;
// line 126
frost$core$Bit $tmp198 = *(&local1);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block11; else goto block12;
block11:;
// line 127
frost$collections$HashSet** $tmp200 = &param0->worklist;
frost$collections$HashSet* $tmp201 = *$tmp200;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp202;
$tmp202 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp202->value = param2;
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp201, ((frost$collections$Key*) $tmp202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp202)));
goto block12;
block12:;
org$frostlang$frostc$Analyzer$State* $tmp203 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
*(&local3) = ((org$frostlang$frostc$Analyzer$State*) NULL);
frost$collections$Iterator* $tmp204 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
*(&local2) = ((frost$collections$Iterator*) NULL);
frost$collections$HashSet* $tmp205 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
*(&local0) = ((frost$collections$HashSet*) NULL);
return;

}
org$frostlang$frostc$IR$Block* org$frostlang$frostc$Analyzer$getBlock$org$frostlang$frostc$IR$Block$ID$R$org$frostlang$frostc$IR$Block(org$frostlang$frostc$Analyzer* param0, org$frostlang$frostc$IR$Block$ID param1) {

org$frostlang$frostc$IR$Block* local0 = NULL;
// line 132
org$frostlang$frostc$IR** $tmp206 = &param0->ir;
org$frostlang$frostc$IR* $tmp207 = *$tmp206;
frost$collections$Array** $tmp208 = &$tmp207->blocks;
frost$collections$Array* $tmp209 = *$tmp208;
ITable* $tmp210 = ((frost$collections$Iterable*) $tmp209)->$class->itable;
while ($tmp210->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp210 = $tmp210->next;
}
$fn212 $tmp211 = $tmp210->methods[0];
frost$collections$Iterator* $tmp213 = $tmp211(((frost$collections$Iterable*) $tmp209));
goto block1;
block1:;
ITable* $tmp214 = $tmp213->$class->itable;
while ($tmp214->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp214 = $tmp214->next;
}
$fn216 $tmp215 = $tmp214->methods[0];
frost$core$Bit $tmp217 = $tmp215($tmp213);
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block3; else goto block2;
block2:;
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp219 = $tmp213->$class->itable;
while ($tmp219->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp219 = $tmp219->next;
}
$fn221 $tmp220 = $tmp219->methods[1];
frost$core$Object* $tmp222 = $tmp220($tmp213);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp222)));
org$frostlang$frostc$IR$Block* $tmp223 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
*(&local0) = ((org$frostlang$frostc$IR$Block*) $tmp222);
// line 133
org$frostlang$frostc$IR$Block* $tmp224 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp225 = &$tmp224->id;
org$frostlang$frostc$IR$Block$ID $tmp226 = *$tmp225;
frost$core$Bit $tmp227 = org$frostlang$frostc$IR$Block$ID$$EQ$org$frostlang$frostc$IR$Block$ID$R$frost$core$Bit($tmp226, param1);
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block4; else goto block5;
block4:;
// line 134
org$frostlang$frostc$IR$Block* $tmp229 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$core$Frost$unref$frost$core$Object$Q($tmp222);
org$frostlang$frostc$IR$Block* $tmp230 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
return $tmp229;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp222);
org$frostlang$frostc$IR$Block* $tmp231 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
// line 137
goto block6;
block6:;
goto block6;
block7:;
goto block8;
block8:;

}
org$frostlang$frostc$Analyzer$State* org$frostlang$frostc$Analyzer$computeExitState$org$frostlang$frostc$IR$Block$ID$frost$core$Bit$R$org$frostlang$frostc$Analyzer$State(org$frostlang$frostc$Analyzer* param0, org$frostlang$frostc$IR$Block$ID param1, frost$core$Bit param2) {

org$frostlang$frostc$Analyzer$State* local0 = NULL;
org$frostlang$frostc$IR$Block* local1 = NULL;
frost$core$Int64 local2;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$Position local5;
org$frostlang$frostc$IR$Value* local6 = NULL;
org$frostlang$frostc$Type* local7 = NULL;
frost$core$Bit local8;
frost$core$Bit local9;
frost$core$Bit local10;
org$frostlang$frostc$ClassDecl* local11 = NULL;
org$frostlang$frostc$IR$Value* local12 = NULL;
org$frostlang$frostc$Type* local13 = NULL;
org$frostlang$frostc$FieldDecl* local14 = NULL;
org$frostlang$frostc$FieldDecl* local15 = NULL;
org$frostlang$frostc$Position local16;
org$frostlang$frostc$IR$Value* local17 = NULL;
org$frostlang$frostc$Type* local18 = NULL;
frost$core$Bit local19;
org$frostlang$frostc$IR$Value* local20 = NULL;
org$frostlang$frostc$IR$Value* local21 = NULL;
org$frostlang$frostc$Type* local22 = NULL;
org$frostlang$frostc$IR$Value* local23 = NULL;
org$frostlang$frostc$Type* local24 = NULL;
org$frostlang$frostc$IR$Value* local25 = NULL;
org$frostlang$frostc$Type* local26 = NULL;
org$frostlang$frostc$IR$Value* local27 = NULL;
org$frostlang$frostc$IR$Value* local28 = NULL;
org$frostlang$frostc$MethodDecl* local29 = NULL;
org$frostlang$frostc$IR$Value* local30 = NULL;
org$frostlang$frostc$IR$Value* local31 = NULL;
frost$core$Int64 local32;
// line 141
org$frostlang$frostc$Analyzer$State* $tmp232 = (org$frostlang$frostc$Analyzer$State*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Analyzer$State$class);
frost$collections$HashMap** $tmp233 = &param0->entryStates;
frost$collections$HashMap* $tmp234 = *$tmp233;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp235;
$tmp235 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp235->value = param1;
frost$core$Object* $tmp236 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp234, ((frost$collections$Key*) $tmp235));
org$frostlang$frostc$Analyzer$State$init$org$frostlang$frostc$Analyzer$State($tmp232, ((org$frostlang$frostc$Analyzer$State*) $tmp236));
*(&local0) = ((org$frostlang$frostc$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
org$frostlang$frostc$Analyzer$State* $tmp237 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
*(&local0) = $tmp232;
frost$core$Frost$unref$frost$core$Object$Q($tmp236);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp235)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
// line 142
$fn239 $tmp238 = ($fn239) param0->$class->vtable[4];
org$frostlang$frostc$IR$Block* $tmp240 = $tmp238(param0, param1);
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
org$frostlang$frostc$IR$Block* $tmp241 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local1) = $tmp240;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// line 143
frost$core$Int64 $tmp242 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block* $tmp243 = *(&local1);
frost$collections$Array** $tmp244 = &$tmp243->statements;
frost$collections$Array* $tmp245 = *$tmp244;
ITable* $tmp246 = ((frost$collections$CollectionView*) $tmp245)->$class->itable;
while ($tmp246->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp246 = $tmp246->next;
}
$fn248 $tmp247 = $tmp246->methods[0];
frost$core$Int64 $tmp249 = $tmp247(((frost$collections$CollectionView*) $tmp245));
frost$core$Int64 $tmp250 = (frost$core$Int64) {1};
int64_t $tmp251 = $tmp249.value;
int64_t $tmp252 = $tmp250.value;
int64_t $tmp253 = $tmp251 - $tmp252;
frost$core$Int64 $tmp254 = (frost$core$Int64) {$tmp253};
frost$core$Bit $tmp255 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp256 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp242, $tmp254, $tmp255);
frost$core$Int64 $tmp257 = $tmp256.min;
*(&local2) = $tmp257;
frost$core$Int64 $tmp258 = $tmp256.max;
frost$core$Bit $tmp259 = $tmp256.inclusive;
bool $tmp260 = $tmp259.value;
frost$core$Int64 $tmp261 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp262 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp261);
if ($tmp260) goto block4; else goto block5;
block4:;
int64_t $tmp263 = $tmp257.value;
int64_t $tmp264 = $tmp258.value;
bool $tmp265 = $tmp263 <= $tmp264;
frost$core$Bit $tmp266 = (frost$core$Bit) {$tmp265};
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block1; else goto block2;
block5:;
int64_t $tmp268 = $tmp257.value;
int64_t $tmp269 = $tmp258.value;
bool $tmp270 = $tmp268 < $tmp269;
frost$core$Bit $tmp271 = (frost$core$Bit) {$tmp270};
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block1; else goto block2;
block1:;
// line 144
org$frostlang$frostc$IR$Block* $tmp273 = *(&local1);
frost$collections$Array** $tmp274 = &$tmp273->ids;
frost$collections$Array* $tmp275 = *$tmp274;
frost$core$Int64 $tmp276 = *(&local2);
frost$core$Object* $tmp277 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp275, $tmp276);
*(&local3) = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp277)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp277);
// line 145
org$frostlang$frostc$IR$Block* $tmp278 = *(&local1);
frost$collections$Array** $tmp279 = &$tmp278->statements;
frost$collections$Array* $tmp280 = *$tmp279;
frost$core$Int64 $tmp281 = *(&local2);
frost$core$Object* $tmp282 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp280, $tmp281);
frost$core$Int64* $tmp283 = &((org$frostlang$frostc$IR$Statement*) $tmp282)->$rawValue;
frost$core$Int64 $tmp284 = *$tmp283;
frost$core$Int64 $tmp285 = (frost$core$Int64) {0};
frost$core$Bit $tmp286 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp284, $tmp285);
bool $tmp287 = $tmp286.value;
if ($tmp287) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp288 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 0);
org$frostlang$frostc$Position $tmp289 = *$tmp288;
org$frostlang$frostc$IR$Value** $tmp290 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 16);
org$frostlang$frostc$IR$Value* $tmp291 = *$tmp290;
org$frostlang$frostc$expression$Binary$Operator* $tmp292 = (org$frostlang$frostc$expression$Binary$Operator*) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp293 = *$tmp292;
org$frostlang$frostc$IR$Value** $tmp294 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp295 = *$tmp294;
org$frostlang$frostc$Type** $tmp296 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 40);
org$frostlang$frostc$Type* $tmp297 = *$tmp296;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
org$frostlang$frostc$Type* $tmp298 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local4) = $tmp297;
// line 147
org$frostlang$frostc$Analyzer$State* $tmp299 = *(&local0);
frost$collections$HashMap** $tmp300 = &$tmp299->statements;
frost$collections$HashMap* $tmp301 = *$tmp300;
org$frostlang$frostc$IR$Statement$ID $tmp302 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp303;
$tmp303 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp303->value = $tmp302;
org$frostlang$frostc$Type* $tmp304 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp301, ((frost$collections$Key*) $tmp303), ((frost$core$Object*) $tmp304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp303)));
org$frostlang$frostc$Type* $tmp305 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
goto block6;
block8:;
frost$core$Int64 $tmp306 = (frost$core$Int64) {2};
frost$core$Bit $tmp307 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp284, $tmp306);
bool $tmp308 = $tmp307.value;
if ($tmp308) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Position* $tmp309 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 0);
org$frostlang$frostc$Position $tmp310 = *$tmp309;
*(&local5) = $tmp310;
org$frostlang$frostc$IR$Value** $tmp311 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 16);
org$frostlang$frostc$IR$Value* $tmp312 = *$tmp311;
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
org$frostlang$frostc$IR$Value* $tmp313 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
*(&local6) = $tmp312;
org$frostlang$frostc$Type** $tmp314 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 24);
org$frostlang$frostc$Type* $tmp315 = *$tmp314;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
org$frostlang$frostc$Type* $tmp316 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
*(&local7) = $tmp315;
frost$core$Bit* $tmp317 = (frost$core$Bit*) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 32);
frost$core$Bit $tmp318 = *$tmp317;
*(&local8) = $tmp318;
// line 150
frost$core$Bit $tmp319 = *(&local8);
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block11; else goto block13;
block11:;
// line 151
org$frostlang$frostc$Analyzer$State* $tmp321 = *(&local0);
frost$collections$HashMap** $tmp322 = &$tmp321->statements;
frost$collections$HashMap* $tmp323 = *$tmp322;
org$frostlang$frostc$IR$Statement$ID $tmp324 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp325;
$tmp325 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp325->value = $tmp324;
org$frostlang$frostc$Type* $tmp326 = *(&local7);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp323, ((frost$collections$Key*) $tmp325), ((frost$core$Object*) $tmp326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp325)));
goto block12;
block13:;
// line 1
// line 154
org$frostlang$frostc$Analyzer$State* $tmp327 = *(&local0);
frost$collections$HashMap** $tmp328 = &$tmp327->statements;
frost$collections$HashMap* $tmp329 = *$tmp328;
org$frostlang$frostc$IR$Statement$ID $tmp330 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp331;
$tmp331 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp331->value = $tmp330;
org$frostlang$frostc$IR$Value* $tmp332 = *(&local6);
org$frostlang$frostc$Analyzer$State* $tmp333 = *(&local0);
$fn335 $tmp334 = ($fn335) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp336 = $tmp334(param0, $tmp332, $tmp333);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp329, ((frost$collections$Key*) $tmp331), ((frost$core$Object*) $tmp336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp331)));
goto block12;
block12:;
// line 156
frost$core$Bit $tmp337 = *(&local8);
frost$core$Bit $tmp338 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp337);
bool $tmp339 = $tmp338.value;
if ($tmp339) goto block16; else goto block17;
block16:;
*(&local9) = param2;
goto block18;
block17:;
*(&local9) = $tmp338;
goto block18;
block18:;
frost$core$Bit $tmp340 = *(&local9);
bool $tmp341 = $tmp340.value;
if ($tmp341) goto block14; else goto block15;
block14:;
// line 157
org$frostlang$frostc$Type* $tmp342 = *(&local7);
frost$core$Bit $tmp343 = org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit($tmp342);
frost$core$Bit $tmp344 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp343);
bool $tmp345 = $tmp344.value;
if ($tmp345) goto block21; else goto block22;
block21:;
org$frostlang$frostc$IR$Value* $tmp346 = *(&local6);
org$frostlang$frostc$Analyzer$State* $tmp347 = *(&local0);
$fn349 $tmp348 = ($fn349) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp350 = $tmp348(param0, $tmp346, $tmp347);
frost$core$Bit $tmp351 = org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit($tmp350);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
*(&local10) = $tmp351;
goto block23;
block22:;
*(&local10) = $tmp344;
goto block23;
block23:;
frost$core$Bit $tmp352 = *(&local10);
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block19; else goto block20;
block19:;
goto block20;
block20:;
goto block15;
block15:;
org$frostlang$frostc$Type* $tmp354 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp355 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block6;
block10:;
frost$core$Int64 $tmp356 = (frost$core$Int64) {6};
frost$core$Bit $tmp357 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp284, $tmp356);
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp359 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 0);
org$frostlang$frostc$Position $tmp360 = *$tmp359;
org$frostlang$frostc$ClassDecl** $tmp361 = (org$frostlang$frostc$ClassDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 16);
org$frostlang$frostc$ClassDecl* $tmp362 = *$tmp361;
*(&local11) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
org$frostlang$frostc$ClassDecl* $tmp363 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local11) = $tmp362;
// line 163
org$frostlang$frostc$Analyzer$State* $tmp364 = *(&local0);
frost$collections$HashMap** $tmp365 = &$tmp364->statements;
frost$collections$HashMap* $tmp366 = *$tmp365;
org$frostlang$frostc$IR$Statement$ID $tmp367 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp368;
$tmp368 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp368->value = $tmp367;
org$frostlang$frostc$ClassDecl* $tmp369 = *(&local11);
org$frostlang$frostc$Type** $tmp370 = &$tmp369->type;
org$frostlang$frostc$Type* $tmp371 = *$tmp370;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp366, ((frost$collections$Key*) $tmp368), ((frost$core$Object*) $tmp371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp368)));
org$frostlang$frostc$ClassDecl* $tmp372 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
*(&local11) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block6;
block25:;
frost$core$Int64 $tmp373 = (frost$core$Int64) {8};
frost$core$Bit $tmp374 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp284, $tmp373);
bool $tmp375 = $tmp374.value;
if ($tmp375) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp376 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 0);
org$frostlang$frostc$Position $tmp377 = *$tmp376;
org$frostlang$frostc$IR$Value** $tmp378 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 16);
org$frostlang$frostc$IR$Value* $tmp379 = *$tmp378;
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
org$frostlang$frostc$IR$Value* $tmp380 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
*(&local12) = $tmp379;
org$frostlang$frostc$FixedArray** $tmp381 = (org$frostlang$frostc$FixedArray**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 24);
org$frostlang$frostc$FixedArray* $tmp382 = *$tmp381;
// line 166
org$frostlang$frostc$IR$Value* $tmp383 = *(&local12);
$fn385 $tmp384 = ($fn385) $tmp383->$class->vtable[2];
org$frostlang$frostc$Type* $tmp386 = $tmp384($tmp383);
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
org$frostlang$frostc$Type* $tmp387 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
*(&local13) = $tmp386;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
// line 167
org$frostlang$frostc$Type* $tmp388 = *(&local13);
frost$core$Bit $tmp389 = org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit($tmp388);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block28; else goto block30;
block28:;
// line 168
org$frostlang$frostc$Analyzer$State* $tmp391 = *(&local0);
frost$collections$HashMap** $tmp392 = &$tmp391->statements;
frost$collections$HashMap* $tmp393 = *$tmp392;
org$frostlang$frostc$IR$Statement$ID $tmp394 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp395;
$tmp395 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp395->value = $tmp394;
org$frostlang$frostc$Type* $tmp396 = *(&local13);
org$frostlang$frostc$FixedArray** $tmp397 = &$tmp396->subtypes;
org$frostlang$frostc$FixedArray* $tmp398 = *$tmp397;
frost$core$Int64 $tmp399 = (frost$core$Int64) {1};
frost$core$Object* $tmp400 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp398, $tmp399);
org$frostlang$frostc$Type* $tmp401 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp400));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp393, ((frost$collections$Key*) $tmp395), ((frost$core$Object*) $tmp401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
frost$core$Frost$unref$frost$core$Object$Q($tmp400);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp395)));
goto block29;
block30:;
// line 1
// line 171
org$frostlang$frostc$Analyzer$State* $tmp402 = *(&local0);
frost$collections$HashMap** $tmp403 = &$tmp402->statements;
frost$collections$HashMap* $tmp404 = *$tmp403;
org$frostlang$frostc$IR$Statement$ID $tmp405 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp406;
$tmp406 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp406->value = $tmp405;
org$frostlang$frostc$Type* $tmp407 = *(&local13);
org$frostlang$frostc$Type* $tmp408 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp407);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp404, ((frost$collections$Key*) $tmp406), ((frost$core$Object*) $tmp408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp406)));
goto block29;
block29:;
org$frostlang$frostc$Type* $tmp409 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp410 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block6;
block27:;
frost$core$Int64 $tmp411 = (frost$core$Int64) {10};
frost$core$Bit $tmp412 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp284, $tmp411);
bool $tmp413 = $tmp412.value;
if ($tmp413) goto block31; else goto block32;
block31:;
org$frostlang$frostc$Position* $tmp414 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 0);
org$frostlang$frostc$Position $tmp415 = *$tmp414;
org$frostlang$frostc$IR$Value** $tmp416 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 16);
org$frostlang$frostc$IR$Value* $tmp417 = *$tmp416;
org$frostlang$frostc$FieldDecl** $tmp418 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 24);
org$frostlang$frostc$FieldDecl* $tmp419 = *$tmp418;
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
org$frostlang$frostc$FieldDecl* $tmp420 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
*(&local14) = $tmp419;
// line 175
org$frostlang$frostc$Analyzer$State* $tmp421 = *(&local0);
frost$collections$HashMap** $tmp422 = &$tmp421->statements;
frost$collections$HashMap* $tmp423 = *$tmp422;
org$frostlang$frostc$IR$Statement$ID $tmp424 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp425;
$tmp425 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp425->value = $tmp424;
org$frostlang$frostc$FieldDecl* $tmp426 = *(&local14);
org$frostlang$frostc$Type** $tmp427 = &$tmp426->type;
org$frostlang$frostc$Type* $tmp428 = *$tmp427;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp423, ((frost$collections$Key*) $tmp425), ((frost$core$Object*) $tmp428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp425)));
org$frostlang$frostc$FieldDecl* $tmp429 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block6;
block32:;
frost$core$Int64 $tmp430 = (frost$core$Int64) {11};
frost$core$Bit $tmp431 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp284, $tmp430);
bool $tmp432 = $tmp431.value;
if ($tmp432) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Position* $tmp433 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 0);
org$frostlang$frostc$Position $tmp434 = *$tmp433;
org$frostlang$frostc$IR$Value** $tmp435 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 16);
org$frostlang$frostc$IR$Value* $tmp436 = *$tmp435;
org$frostlang$frostc$FieldDecl** $tmp437 = (org$frostlang$frostc$FieldDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 24);
org$frostlang$frostc$FieldDecl* $tmp438 = *$tmp437;
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
org$frostlang$frostc$FieldDecl* $tmp439 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
*(&local15) = $tmp438;
// line 178
org$frostlang$frostc$Analyzer$State* $tmp440 = *(&local0);
frost$collections$HashMap** $tmp441 = &$tmp440->statements;
frost$collections$HashMap* $tmp442 = *$tmp441;
org$frostlang$frostc$IR$Statement$ID $tmp443 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp444;
$tmp444 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp444->value = $tmp443;
org$frostlang$frostc$FieldDecl* $tmp445 = *(&local15);
org$frostlang$frostc$Type** $tmp446 = &$tmp445->type;
org$frostlang$frostc$Type* $tmp447 = *$tmp446;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp442, ((frost$collections$Key*) $tmp444), ((frost$core$Object*) $tmp447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp444)));
org$frostlang$frostc$FieldDecl* $tmp448 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block6;
block34:;
frost$core$Int64 $tmp449 = (frost$core$Int64) {14};
frost$core$Bit $tmp450 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp284, $tmp449);
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block35; else goto block36;
block35:;
org$frostlang$frostc$Position* $tmp452 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 0);
org$frostlang$frostc$Position $tmp453 = *$tmp452;
*(&local16) = $tmp453;
org$frostlang$frostc$IR$Value** $tmp454 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 16);
org$frostlang$frostc$IR$Value* $tmp455 = *$tmp454;
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
org$frostlang$frostc$IR$Value* $tmp456 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local17) = $tmp455;
// line 181
org$frostlang$frostc$IR$Value* $tmp457 = *(&local17);
org$frostlang$frostc$Analyzer$State* $tmp458 = *(&local0);
$fn460 $tmp459 = ($fn460) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp461 = $tmp459(param0, $tmp457, $tmp458);
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
org$frostlang$frostc$Type* $tmp462 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
*(&local18) = $tmp461;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
// line 182
org$frostlang$frostc$Analyzer$State* $tmp463 = *(&local0);
frost$collections$HashMap** $tmp464 = &$tmp463->statements;
frost$collections$HashMap* $tmp465 = *$tmp464;
org$frostlang$frostc$IR$Statement$ID $tmp466 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp467;
$tmp467 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp467->value = $tmp466;
org$frostlang$frostc$Type* $tmp468 = *(&local18);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp465, ((frost$collections$Key*) $tmp467), ((frost$core$Object*) $tmp468));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp467)));
// line 183
bool $tmp469 = param2.value;
if ($tmp469) goto block39; else goto block40;
block39:;
org$frostlang$frostc$Type* $tmp470 = *(&local18);
org$frostlang$frostc$Type* $tmp471 = org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp472 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp470, $tmp471);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
*(&local19) = $tmp472;
goto block41;
block40:;
*(&local19) = param2;
goto block41;
block41:;
frost$core$Bit $tmp473 = *(&local19);
bool $tmp474 = $tmp473.value;
if ($tmp474) goto block37; else goto block38;
block37:;
goto block38;
block38:;
org$frostlang$frostc$Type* $tmp475 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp476 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block6;
block36:;
frost$core$Int64 $tmp477 = (frost$core$Int64) {15};
frost$core$Bit $tmp478 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp284, $tmp477);
bool $tmp479 = $tmp478.value;
if ($tmp479) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp480 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 0);
org$frostlang$frostc$Position $tmp481 = *$tmp480;
org$frostlang$frostc$IR$Value** $tmp482 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 16);
org$frostlang$frostc$IR$Value* $tmp483 = *$tmp482;
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
org$frostlang$frostc$IR$Value* $tmp484 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
*(&local20) = $tmp483;
// line 188
org$frostlang$frostc$Analyzer$State* $tmp485 = *(&local0);
frost$collections$HashMap** $tmp486 = &$tmp485->statements;
frost$collections$HashMap* $tmp487 = *$tmp486;
org$frostlang$frostc$IR$Statement$ID $tmp488 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp489;
$tmp489 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp489->value = $tmp488;
org$frostlang$frostc$IR$Value* $tmp490 = *(&local20);
$fn492 $tmp491 = ($fn492) $tmp490->$class->vtable[2];
org$frostlang$frostc$Type* $tmp493 = $tmp491($tmp490);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp487, ((frost$collections$Key*) $tmp489), ((frost$core$Object*) $tmp493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp489)));
org$frostlang$frostc$IR$Value* $tmp494 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block6;
block43:;
frost$core$Int64 $tmp495 = (frost$core$Int64) {16};
frost$core$Bit $tmp496 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp284, $tmp495);
bool $tmp497 = $tmp496.value;
if ($tmp497) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp498 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 0);
org$frostlang$frostc$Position $tmp499 = *$tmp498;
org$frostlang$frostc$IR$Value** $tmp500 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 16);
org$frostlang$frostc$IR$Value* $tmp501 = *$tmp500;
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
org$frostlang$frostc$IR$Value* $tmp502 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
*(&local21) = $tmp501;
// line 191
org$frostlang$frostc$Analyzer$State* $tmp503 = *(&local0);
frost$collections$HashMap** $tmp504 = &$tmp503->statements;
frost$collections$HashMap* $tmp505 = *$tmp504;
org$frostlang$frostc$IR$Statement$ID $tmp506 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp507;
$tmp507 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp507->value = $tmp506;
org$frostlang$frostc$IR$Value* $tmp508 = *(&local21);
$fn510 $tmp509 = ($fn510) $tmp508->$class->vtable[2];
org$frostlang$frostc$Type* $tmp511 = $tmp509($tmp508);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp505, ((frost$collections$Key*) $tmp507), ((frost$core$Object*) $tmp511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp507)));
org$frostlang$frostc$IR$Value* $tmp512 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block6;
block45:;
frost$core$Int64 $tmp513 = (frost$core$Int64) {17};
frost$core$Bit $tmp514 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp284, $tmp513);
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp516 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 0);
org$frostlang$frostc$Position $tmp517 = *$tmp516;
org$frostlang$frostc$IR$Value** $tmp518 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 16);
org$frostlang$frostc$IR$Value* $tmp519 = *$tmp518;
org$frostlang$frostc$Type** $tmp520 = (org$frostlang$frostc$Type**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 24);
org$frostlang$frostc$Type* $tmp521 = *$tmp520;
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
org$frostlang$frostc$Type* $tmp522 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
*(&local22) = $tmp521;
// line 194
org$frostlang$frostc$Analyzer$State* $tmp523 = *(&local0);
frost$collections$HashMap** $tmp524 = &$tmp523->statements;
frost$collections$HashMap* $tmp525 = *$tmp524;
org$frostlang$frostc$IR$Statement$ID $tmp526 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp527;
$tmp527 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp527->value = $tmp526;
org$frostlang$frostc$Type* $tmp528 = *(&local22);
org$frostlang$frostc$Type* $tmp529 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp528);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp525, ((frost$collections$Key*) $tmp527), ((frost$core$Object*) $tmp529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp527)));
org$frostlang$frostc$Type* $tmp530 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
goto block6;
block47:;
frost$core$Int64 $tmp531 = (frost$core$Int64) {19};
frost$core$Bit $tmp532 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp284, $tmp531);
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Position* $tmp534 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 0);
org$frostlang$frostc$Position $tmp535 = *$tmp534;
org$frostlang$frostc$IR$Value** $tmp536 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 16);
org$frostlang$frostc$IR$Value* $tmp537 = *$tmp536;
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
org$frostlang$frostc$IR$Value* $tmp538 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
*(&local23) = $tmp537;
// line 197
org$frostlang$frostc$IR$Value* $tmp539 = *(&local23);
org$frostlang$frostc$Analyzer$State* $tmp540 = *(&local0);
$fn542 $tmp541 = ($fn542) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp543 = $tmp541(param0, $tmp539, $tmp540);
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
org$frostlang$frostc$Type* $tmp544 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
*(&local24) = $tmp543;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
// line 198
org$frostlang$frostc$Type* $tmp545 = *(&local24);
frost$core$Bit $tmp546 = org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit($tmp545);
bool $tmp547 = $tmp546.value;
if ($tmp547) goto block50; else goto block51;
block51:;
frost$core$Int64 $tmp548 = (frost$core$Int64) {198};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s549, $tmp548);
abort(); // unreachable
block50:;
// line 199
org$frostlang$frostc$Analyzer$State* $tmp550 = *(&local0);
frost$collections$HashMap** $tmp551 = &$tmp550->statements;
frost$collections$HashMap* $tmp552 = *$tmp551;
org$frostlang$frostc$IR$Statement$ID $tmp553 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp554;
$tmp554 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp554->value = $tmp553;
org$frostlang$frostc$Type* $tmp555 = *(&local24);
org$frostlang$frostc$FixedArray** $tmp556 = &$tmp555->subtypes;
org$frostlang$frostc$FixedArray* $tmp557 = *$tmp556;
frost$core$Int64 $tmp558 = (frost$core$Int64) {1};
frost$core$Object* $tmp559 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp557, $tmp558);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp552, ((frost$collections$Key*) $tmp554), ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp559)));
frost$core$Frost$unref$frost$core$Object$Q($tmp559);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp554)));
org$frostlang$frostc$Type* $tmp560 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp561 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block6;
block49:;
frost$core$Int64 $tmp562 = (frost$core$Int64) {20};
frost$core$Bit $tmp563 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp284, $tmp562);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block52; else goto block53;
block52:;
org$frostlang$frostc$Position* $tmp565 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 0);
org$frostlang$frostc$Position $tmp566 = *$tmp565;
org$frostlang$frostc$IR$Value** $tmp567 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 16);
org$frostlang$frostc$IR$Value* $tmp568 = *$tmp567;
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
org$frostlang$frostc$IR$Value* $tmp569 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
*(&local25) = $tmp568;
org$frostlang$frostc$IR$Value** $tmp570 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp571 = *$tmp570;
// line 202
org$frostlang$frostc$IR$Value* $tmp572 = *(&local25);
org$frostlang$frostc$Analyzer$State* $tmp573 = *(&local0);
$fn575 $tmp574 = ($fn575) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp576 = $tmp574(param0, $tmp572, $tmp573);
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
org$frostlang$frostc$Type* $tmp577 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
*(&local26) = $tmp576;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
// line 203
org$frostlang$frostc$Type* $tmp578 = *(&local26);
frost$core$Bit $tmp579 = org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit($tmp578);
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block54; else goto block55;
block55:;
frost$core$Int64 $tmp581 = (frost$core$Int64) {203};
org$frostlang$frostc$Type* $tmp582 = *(&local26);
$fn584 $tmp583 = ($fn584) ((frost$core$Object*) $tmp582)->$class->vtable[0];
frost$core$String* $tmp585 = $tmp583(((frost$core$Object*) $tmp582));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s586, $tmp581, $tmp585);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
abort(); // unreachable
block54:;
// line 204
org$frostlang$frostc$Analyzer$State* $tmp587 = *(&local0);
frost$collections$HashMap** $tmp588 = &$tmp587->statements;
frost$collections$HashMap* $tmp589 = *$tmp588;
org$frostlang$frostc$IR$Statement$ID $tmp590 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp591;
$tmp591 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp591->value = $tmp590;
org$frostlang$frostc$Type* $tmp592 = *(&local26);
org$frostlang$frostc$FixedArray** $tmp593 = &$tmp592->subtypes;
org$frostlang$frostc$FixedArray* $tmp594 = *$tmp593;
frost$core$Int64 $tmp595 = (frost$core$Int64) {1};
frost$core$Object* $tmp596 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp594, $tmp595);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp589, ((frost$collections$Key*) $tmp591), ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp596)));
frost$core$Frost$unref$frost$core$Object$Q($tmp596);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp591)));
org$frostlang$frostc$Type* $tmp597 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp598 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block6;
block53:;
frost$core$Int64 $tmp599 = (frost$core$Int64) {21};
frost$core$Bit $tmp600 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp284, $tmp599);
bool $tmp601 = $tmp600.value;
if ($tmp601) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp602 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 0);
org$frostlang$frostc$Position $tmp603 = *$tmp602;
org$frostlang$frostc$IR$Value** $tmp604 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 16);
org$frostlang$frostc$IR$Value* $tmp605 = *$tmp604;
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
org$frostlang$frostc$IR$Value* $tmp606 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local27) = $tmp605;
org$frostlang$frostc$IR$Value** $tmp607 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp608 = *$tmp607;
// line 207
org$frostlang$frostc$Analyzer$State* $tmp609 = *(&local0);
frost$collections$HashMap** $tmp610 = &$tmp609->statements;
frost$collections$HashMap* $tmp611 = *$tmp610;
org$frostlang$frostc$IR$Statement$ID $tmp612 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp613;
$tmp613 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp613->value = $tmp612;
org$frostlang$frostc$IR$Value* $tmp614 = *(&local27);
org$frostlang$frostc$Analyzer$State* $tmp615 = *(&local0);
$fn617 $tmp616 = ($fn617) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp618 = $tmp616(param0, $tmp614, $tmp615);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp611, ((frost$collections$Key*) $tmp613), ((frost$core$Object*) $tmp618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp613)));
org$frostlang$frostc$IR$Value* $tmp619 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block6;
block57:;
frost$core$Int64 $tmp620 = (frost$core$Int64) {22};
frost$core$Bit $tmp621 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp284, $tmp620);
bool $tmp622 = $tmp621.value;
if ($tmp622) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Position* $tmp623 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 0);
org$frostlang$frostc$Position $tmp624 = *$tmp623;
org$frostlang$frostc$IR$Value** $tmp625 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 16);
org$frostlang$frostc$IR$Value* $tmp626 = *$tmp625;
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
org$frostlang$frostc$IR$Value* $tmp627 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
*(&local28) = $tmp626;
org$frostlang$frostc$IR$Value** $tmp628 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp629 = *$tmp628;
org$frostlang$frostc$IR$Value** $tmp630 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 32);
org$frostlang$frostc$IR$Value* $tmp631 = *$tmp630;
// line 210
org$frostlang$frostc$Analyzer$State* $tmp632 = *(&local0);
frost$collections$HashMap** $tmp633 = &$tmp632->statements;
frost$collections$HashMap* $tmp634 = *$tmp633;
org$frostlang$frostc$IR$Statement$ID $tmp635 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp636;
$tmp636 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp636->value = $tmp635;
org$frostlang$frostc$IR$Value* $tmp637 = *(&local28);
org$frostlang$frostc$Analyzer$State* $tmp638 = *(&local0);
$fn640 $tmp639 = ($fn640) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp641 = $tmp639(param0, $tmp637, $tmp638);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp634, ((frost$collections$Key*) $tmp636), ((frost$core$Object*) $tmp641));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp636)));
org$frostlang$frostc$IR$Value* $tmp642 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block6;
block59:;
frost$core$Int64 $tmp643 = (frost$core$Int64) {26};
frost$core$Bit $tmp644 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp284, $tmp643);
bool $tmp645 = $tmp644.value;
if ($tmp645) goto block60; else goto block61;
block60:;
org$frostlang$frostc$Position* $tmp646 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 0);
org$frostlang$frostc$Position $tmp647 = *$tmp646;
org$frostlang$frostc$MethodDecl** $tmp648 = (org$frostlang$frostc$MethodDecl**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 16);
org$frostlang$frostc$MethodDecl* $tmp649 = *$tmp648;
*(&local29) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
org$frostlang$frostc$MethodDecl* $tmp650 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
*(&local29) = $tmp649;
org$frostlang$frostc$FixedArray** $tmp651 = (org$frostlang$frostc$FixedArray**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 24);
org$frostlang$frostc$FixedArray* $tmp652 = *$tmp651;
// line 213
org$frostlang$frostc$Analyzer$State* $tmp653 = *(&local0);
frost$collections$HashMap** $tmp654 = &$tmp653->statements;
frost$collections$HashMap* $tmp655 = *$tmp654;
org$frostlang$frostc$IR$Statement$ID $tmp656 = *(&local3);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp657;
$tmp657 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp657->value = $tmp656;
org$frostlang$frostc$MethodDecl* $tmp658 = *(&local29);
org$frostlang$frostc$Type** $tmp659 = &$tmp658->returnType;
org$frostlang$frostc$Type* $tmp660 = *$tmp659;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp655, ((frost$collections$Key*) $tmp657), ((frost$core$Object*) $tmp660));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp657)));
org$frostlang$frostc$MethodDecl* $tmp661 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
*(&local29) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block6;
block61:;
frost$core$Int64 $tmp662 = (frost$core$Int64) {27};
frost$core$Bit $tmp663 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp284, $tmp662);
bool $tmp664 = $tmp663.value;
if ($tmp664) goto block62; else goto block6;
block62:;
org$frostlang$frostc$Position* $tmp665 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 0);
org$frostlang$frostc$Position $tmp666 = *$tmp665;
org$frostlang$frostc$IR$Value** $tmp667 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 16);
org$frostlang$frostc$IR$Value* $tmp668 = *$tmp667;
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
org$frostlang$frostc$IR$Value* $tmp669 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
*(&local30) = $tmp668;
org$frostlang$frostc$IR$Value** $tmp670 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp282)->$data + 24);
org$frostlang$frostc$IR$Value* $tmp671 = *$tmp670;
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
org$frostlang$frostc$IR$Value* $tmp672 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
*(&local31) = $tmp671;
// line 216
org$frostlang$frostc$IR$Value* $tmp673 = *(&local31);
frost$core$Int64* $tmp674 = &$tmp673->$rawValue;
frost$core$Int64 $tmp675 = *$tmp674;
frost$core$Int64 $tmp676 = (frost$core$Int64) {2};
frost$core$Bit $tmp677 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp675, $tmp676);
bool $tmp678 = $tmp677.value;
if ($tmp678) goto block64; else goto block63;
block64:;
frost$core$Int64* $tmp679 = (frost$core$Int64*) ($tmp673->$data + 0);
frost$core$Int64 $tmp680 = *$tmp679;
*(&local32) = $tmp680;
org$frostlang$frostc$Type** $tmp681 = (org$frostlang$frostc$Type**) ($tmp673->$data + 8);
org$frostlang$frostc$Type* $tmp682 = *$tmp681;
// line 218
org$frostlang$frostc$Analyzer$State* $tmp683 = *(&local0);
frost$collections$Array** $tmp684 = &$tmp683->locals;
frost$collections$Array* $tmp685 = *$tmp684;
frost$core$Int64 $tmp686 = *(&local32);
org$frostlang$frostc$IR$Value* $tmp687 = *(&local30);
org$frostlang$frostc$Analyzer$State* $tmp688 = *(&local0);
$fn690 $tmp689 = ($fn690) param0->$class->vtable[2];
org$frostlang$frostc$Type* $tmp691 = $tmp689(param0, $tmp687, $tmp688);
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T($tmp685, $tmp686, ((frost$core$Object*) $tmp691));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
goto block63;
block63:;
org$frostlang$frostc$IR$Value* $tmp692 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp693 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block6;
block6:;
frost$core$Frost$unref$frost$core$Object$Q($tmp282);
goto block3;
block3:;
frost$core$Int64 $tmp694 = *(&local2);
int64_t $tmp695 = $tmp258.value;
int64_t $tmp696 = $tmp694.value;
int64_t $tmp697 = $tmp695 - $tmp696;
frost$core$Int64 $tmp698 = (frost$core$Int64) {$tmp697};
frost$core$UInt64 $tmp699 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp698);
if ($tmp260) goto block66; else goto block67;
block66:;
uint64_t $tmp700 = $tmp699.value;
uint64_t $tmp701 = $tmp262.value;
bool $tmp702 = $tmp700 >= $tmp701;
frost$core$Bit $tmp703 = (frost$core$Bit) {$tmp702};
bool $tmp704 = $tmp703.value;
if ($tmp704) goto block65; else goto block2;
block67:;
uint64_t $tmp705 = $tmp699.value;
uint64_t $tmp706 = $tmp262.value;
bool $tmp707 = $tmp705 > $tmp706;
frost$core$Bit $tmp708 = (frost$core$Bit) {$tmp707};
bool $tmp709 = $tmp708.value;
if ($tmp709) goto block65; else goto block2;
block65:;
int64_t $tmp710 = $tmp694.value;
int64_t $tmp711 = $tmp261.value;
int64_t $tmp712 = $tmp710 + $tmp711;
frost$core$Int64 $tmp713 = (frost$core$Int64) {$tmp712};
*(&local2) = $tmp713;
goto block1;
block2:;
// line 224
org$frostlang$frostc$Analyzer$State* $tmp714 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
org$frostlang$frostc$IR$Block* $tmp715 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
*(&local1) = ((org$frostlang$frostc$IR$Block*) NULL);
org$frostlang$frostc$Analyzer$State* $tmp716 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
*(&local0) = ((org$frostlang$frostc$Analyzer$State*) NULL);
return $tmp714;

}
void org$frostlang$frostc$Analyzer$process$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Analyzer* param0, org$frostlang$frostc$IR$Block$ID param1) {

org$frostlang$frostc$IR$Block* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$IR$Block$ID local3;
// line 228
$fn718 $tmp717 = ($fn718) param0->$class->vtable[4];
org$frostlang$frostc$IR$Block* $tmp719 = $tmp717(param0, param1);
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
org$frostlang$frostc$IR$Block* $tmp720 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
*(&local0) = $tmp719;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
// line 229
org$frostlang$frostc$IR$Block* $tmp721 = *(&local0);
frost$collections$Array** $tmp722 = &$tmp721->statements;
frost$collections$Array* $tmp723 = *$tmp722;
org$frostlang$frostc$IR$Block* $tmp724 = *(&local0);
frost$collections$Array** $tmp725 = &$tmp724->statements;
frost$collections$Array* $tmp726 = *$tmp725;
ITable* $tmp727 = ((frost$collections$CollectionView*) $tmp726)->$class->itable;
while ($tmp727->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp727 = $tmp727->next;
}
$fn729 $tmp728 = $tmp727->methods[0];
frost$core$Int64 $tmp730 = $tmp728(((frost$collections$CollectionView*) $tmp726));
frost$core$Int64 $tmp731 = (frost$core$Int64) {1};
int64_t $tmp732 = $tmp730.value;
int64_t $tmp733 = $tmp731.value;
int64_t $tmp734 = $tmp732 - $tmp733;
frost$core$Int64 $tmp735 = (frost$core$Int64) {$tmp734};
frost$core$Object* $tmp736 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp723, $tmp735);
frost$core$Int64* $tmp737 = &((org$frostlang$frostc$IR$Statement*) $tmp736)->$rawValue;
frost$core$Int64 $tmp738 = *$tmp737;
frost$core$Int64 $tmp739 = (frost$core$Int64) {1};
frost$core$Bit $tmp740 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp738, $tmp739);
bool $tmp741 = $tmp740.value;
if ($tmp741) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp742 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp736)->$data + 0);
org$frostlang$frostc$Position $tmp743 = *$tmp742;
org$frostlang$frostc$IR$Block$ID* $tmp744 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp736)->$data + 16);
org$frostlang$frostc$IR$Block$ID $tmp745 = *$tmp744;
*(&local1) = $tmp745;
// line 231
org$frostlang$frostc$IR$Block* $tmp746 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp747 = &$tmp746->id;
org$frostlang$frostc$IR$Block$ID $tmp748 = *$tmp747;
org$frostlang$frostc$IR$Block$ID $tmp749 = *(&local1);
$fn751 $tmp750 = ($fn751) param0->$class->vtable[3];
$tmp750(param0, $tmp748, $tmp749);
goto block1;
block3:;
frost$core$Int64 $tmp752 = (frost$core$Int64) {5};
frost$core$Bit $tmp753 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp738, $tmp752);
bool $tmp754 = $tmp753.value;
if ($tmp754) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp755 = (org$frostlang$frostc$Position*) (((org$frostlang$frostc$IR$Statement*) $tmp736)->$data + 0);
org$frostlang$frostc$Position $tmp756 = *$tmp755;
org$frostlang$frostc$IR$Value** $tmp757 = (org$frostlang$frostc$IR$Value**) (((org$frostlang$frostc$IR$Statement*) $tmp736)->$data + 16);
org$frostlang$frostc$IR$Value* $tmp758 = *$tmp757;
org$frostlang$frostc$IR$Block$ID* $tmp759 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp736)->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp760 = *$tmp759;
*(&local2) = $tmp760;
org$frostlang$frostc$IR$Block$ID* $tmp761 = (org$frostlang$frostc$IR$Block$ID*) (((org$frostlang$frostc$IR$Statement*) $tmp736)->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp762 = *$tmp761;
*(&local3) = $tmp762;
// line 234
org$frostlang$frostc$IR$Block* $tmp763 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp764 = &$tmp763->id;
org$frostlang$frostc$IR$Block$ID $tmp765 = *$tmp764;
org$frostlang$frostc$IR$Block$ID $tmp766 = *(&local2);
$fn768 $tmp767 = ($fn768) param0->$class->vtable[3];
$tmp767(param0, $tmp765, $tmp766);
// line 235
org$frostlang$frostc$IR$Block* $tmp769 = *(&local0);
org$frostlang$frostc$IR$Block$ID* $tmp770 = &$tmp769->id;
org$frostlang$frostc$IR$Block$ID $tmp771 = *$tmp770;
org$frostlang$frostc$IR$Block$ID $tmp772 = *(&local3);
$fn774 $tmp773 = ($fn774) param0->$class->vtable[3];
$tmp773(param0, $tmp771, $tmp772);
goto block1;
block5:;
frost$core$Int64 $tmp775 = (frost$core$Int64) {9};
frost$core$Bit $tmp776 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp738, $tmp775);
bool $tmp777 = $tmp776.value;
if ($tmp777) goto block6; else goto block7;
block6:;
goto block1;
block7:;
frost$core$Int64 $tmp778 = (frost$core$Int64) {25};
frost$core$Bit $tmp779 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp738, $tmp778);
bool $tmp780 = $tmp779.value;
if ($tmp780) goto block8; else goto block9;
block8:;
goto block1;
block9:;
frost$core$Int64 $tmp781 = (frost$core$Int64) {28};
frost$core$Bit $tmp782 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp738, $tmp781);
bool $tmp783 = $tmp782.value;
if ($tmp783) goto block10; else goto block11;
block10:;
goto block1;
block11:;
// line 244
frost$core$Bit $tmp784 = frost$core$Bit$init$builtin_bit(false);
bool $tmp785 = $tmp784.value;
if ($tmp785) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp786 = (frost$core$Int64) {244};
org$frostlang$frostc$IR$Block* $tmp787 = *(&local0);
frost$collections$Array** $tmp788 = &$tmp787->statements;
frost$collections$Array* $tmp789 = *$tmp788;
org$frostlang$frostc$IR$Block* $tmp790 = *(&local0);
frost$collections$Array** $tmp791 = &$tmp790->statements;
frost$collections$Array* $tmp792 = *$tmp791;
ITable* $tmp793 = ((frost$collections$CollectionView*) $tmp792)->$class->itable;
while ($tmp793->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp793 = $tmp793->next;
}
$fn795 $tmp794 = $tmp793->methods[0];
frost$core$Int64 $tmp796 = $tmp794(((frost$collections$CollectionView*) $tmp792));
frost$core$Int64 $tmp797 = (frost$core$Int64) {1};
int64_t $tmp798 = $tmp796.value;
int64_t $tmp799 = $tmp797.value;
int64_t $tmp800 = $tmp798 - $tmp799;
frost$core$Int64 $tmp801 = (frost$core$Int64) {$tmp800};
frost$core$Object* $tmp802 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp789, $tmp801);
frost$core$String* $tmp803 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s804, ((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp802)));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s805, $tmp786, $tmp803);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
frost$core$Frost$unref$frost$core$Object$Q($tmp802);
abort(); // unreachable
block12:;
goto block1;
block1:;
frost$core$Frost$unref$frost$core$Object$Q($tmp736);
org$frostlang$frostc$IR$Block* $tmp806 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
*(&local0) = ((org$frostlang$frostc$IR$Block*) NULL);
return;

}
void org$frostlang$frostc$Analyzer$analyze(org$frostlang$frostc$Analyzer* param0) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Analyzer$State* local1 = NULL;
frost$core$Int64 local2;
org$frostlang$frostc$IR$Block$ID local3;
org$frostlang$frostc$IR$Block* local4 = NULL;
frost$core$Bit local5;
// line 251
org$frostlang$frostc$Type* $tmp807 = org$frostlang$frostc$Type$Invalid$R$org$frostlang$frostc$Type();
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
org$frostlang$frostc$Type* $tmp808 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
*(&local0) = $tmp807;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
// line 252
org$frostlang$frostc$Analyzer$State* $tmp809 = (org$frostlang$frostc$Analyzer$State*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Analyzer$State$class);
org$frostlang$frostc$Analyzer$State$init($tmp809);
*(&local1) = ((org$frostlang$frostc$Analyzer$State*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
org$frostlang$frostc$Analyzer$State* $tmp810 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
*(&local1) = $tmp809;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
// line 253
frost$core$Int64 $tmp811 = (frost$core$Int64) {0};
org$frostlang$frostc$IR** $tmp812 = &param0->ir;
org$frostlang$frostc$IR* $tmp813 = *$tmp812;
frost$collections$Array** $tmp814 = &$tmp813->locals;
frost$collections$Array* $tmp815 = *$tmp814;
ITable* $tmp816 = ((frost$collections$CollectionView*) $tmp815)->$class->itable;
while ($tmp816->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp816 = $tmp816->next;
}
$fn818 $tmp817 = $tmp816->methods[0];
frost$core$Int64 $tmp819 = $tmp817(((frost$collections$CollectionView*) $tmp815));
frost$core$Bit $tmp820 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp821 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp811, $tmp819, $tmp820);
frost$core$Int64 $tmp822 = $tmp821.min;
*(&local2) = $tmp822;
frost$core$Int64 $tmp823 = $tmp821.max;
frost$core$Bit $tmp824 = $tmp821.inclusive;
bool $tmp825 = $tmp824.value;
frost$core$Int64 $tmp826 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp827 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp826);
if ($tmp825) goto block4; else goto block5;
block4:;
int64_t $tmp828 = $tmp822.value;
int64_t $tmp829 = $tmp823.value;
bool $tmp830 = $tmp828 <= $tmp829;
frost$core$Bit $tmp831 = (frost$core$Bit) {$tmp830};
bool $tmp832 = $tmp831.value;
if ($tmp832) goto block1; else goto block2;
block5:;
int64_t $tmp833 = $tmp822.value;
int64_t $tmp834 = $tmp823.value;
bool $tmp835 = $tmp833 < $tmp834;
frost$core$Bit $tmp836 = (frost$core$Bit) {$tmp835};
bool $tmp837 = $tmp836.value;
if ($tmp837) goto block1; else goto block2;
block1:;
// line 254
org$frostlang$frostc$Analyzer$State* $tmp838 = *(&local1);
frost$collections$Array** $tmp839 = &$tmp838->locals;
frost$collections$Array* $tmp840 = *$tmp839;
org$frostlang$frostc$Type* $tmp841 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp840, ((frost$core$Object*) $tmp841));
goto block3;
block3:;
frost$core$Int64 $tmp842 = *(&local2);
int64_t $tmp843 = $tmp823.value;
int64_t $tmp844 = $tmp842.value;
int64_t $tmp845 = $tmp843 - $tmp844;
frost$core$Int64 $tmp846 = (frost$core$Int64) {$tmp845};
frost$core$UInt64 $tmp847 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp846);
if ($tmp825) goto block7; else goto block8;
block7:;
uint64_t $tmp848 = $tmp847.value;
uint64_t $tmp849 = $tmp827.value;
bool $tmp850 = $tmp848 >= $tmp849;
frost$core$Bit $tmp851 = (frost$core$Bit) {$tmp850};
bool $tmp852 = $tmp851.value;
if ($tmp852) goto block6; else goto block2;
block8:;
uint64_t $tmp853 = $tmp847.value;
uint64_t $tmp854 = $tmp827.value;
bool $tmp855 = $tmp853 > $tmp854;
frost$core$Bit $tmp856 = (frost$core$Bit) {$tmp855};
bool $tmp857 = $tmp856.value;
if ($tmp857) goto block6; else goto block2;
block6:;
int64_t $tmp858 = $tmp842.value;
int64_t $tmp859 = $tmp826.value;
int64_t $tmp860 = $tmp858 + $tmp859;
frost$core$Int64 $tmp861 = (frost$core$Int64) {$tmp860};
*(&local2) = $tmp861;
goto block1;
block2:;
// line 256
frost$collections$HashMap** $tmp862 = &param0->entryStates;
frost$collections$HashMap* $tmp863 = *$tmp862;
org$frostlang$frostc$IR** $tmp864 = &param0->ir;
org$frostlang$frostc$IR* $tmp865 = *$tmp864;
frost$collections$Array** $tmp866 = &$tmp865->blocks;
frost$collections$Array* $tmp867 = *$tmp866;
frost$core$Int64 $tmp868 = (frost$core$Int64) {0};
frost$core$Object* $tmp869 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp867, $tmp868);
org$frostlang$frostc$IR$Block$ID* $tmp870 = &((org$frostlang$frostc$IR$Block*) $tmp869)->id;
org$frostlang$frostc$IR$Block$ID $tmp871 = *$tmp870;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp872;
$tmp872 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp872->value = $tmp871;
org$frostlang$frostc$Analyzer$State* $tmp873 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp863, ((frost$collections$Key*) $tmp872), ((frost$core$Object*) $tmp873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp872)));
frost$core$Frost$unref$frost$core$Object$Q($tmp869);
// line 257
frost$collections$HashSet** $tmp874 = &param0->worklist;
frost$collections$HashSet* $tmp875 = *$tmp874;
org$frostlang$frostc$IR** $tmp876 = &param0->ir;
org$frostlang$frostc$IR* $tmp877 = *$tmp876;
frost$collections$Array** $tmp878 = &$tmp877->blocks;
frost$collections$Array* $tmp879 = *$tmp878;
frost$core$Int64 $tmp880 = (frost$core$Int64) {0};
frost$core$Object* $tmp881 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp879, $tmp880);
org$frostlang$frostc$IR$Block$ID* $tmp882 = &((org$frostlang$frostc$IR$Block*) $tmp881)->id;
org$frostlang$frostc$IR$Block$ID $tmp883 = *$tmp882;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp884;
$tmp884 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp884->value = $tmp883;
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp875, ((frost$collections$Key*) $tmp884));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp884)));
frost$core$Frost$unref$frost$core$Object$Q($tmp881);
// line 258
goto block9;
block9:;
frost$collections$HashSet** $tmp885 = &param0->worklist;
frost$collections$HashSet* $tmp886 = *$tmp885;
ITable* $tmp887 = ((frost$collections$CollectionView*) $tmp886)->$class->itable;
while ($tmp887->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp887 = $tmp887->next;
}
$fn889 $tmp888 = $tmp887->methods[0];
frost$core$Int64 $tmp890 = $tmp888(((frost$collections$CollectionView*) $tmp886));
frost$core$Int64 $tmp891 = (frost$core$Int64) {0};
int64_t $tmp892 = $tmp890.value;
int64_t $tmp893 = $tmp891.value;
bool $tmp894 = $tmp892 > $tmp893;
frost$core$Bit $tmp895 = (frost$core$Bit) {$tmp894};
bool $tmp896 = $tmp895.value;
if ($tmp896) goto block10; else goto block11;
block10:;
// line 259
frost$collections$HashSet** $tmp897 = &param0->worklist;
frost$collections$HashSet* $tmp898 = *$tmp897;
ITable* $tmp899 = ((frost$collections$Iterable*) $tmp898)->$class->itable;
while ($tmp899->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp899 = $tmp899->next;
}
$fn901 $tmp900 = $tmp899->methods[0];
frost$collections$Iterator* $tmp902 = $tmp900(((frost$collections$Iterable*) $tmp898));
ITable* $tmp903 = $tmp902->$class->itable;
while ($tmp903->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp903 = $tmp903->next;
}
$fn905 $tmp904 = $tmp903->methods[1];
frost$core$Object* $tmp906 = $tmp904($tmp902);
*(&local3) = ((org$frostlang$frostc$IR$Block$ID$wrapper*) $tmp906)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp906);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
// line 260
frost$collections$HashSet** $tmp907 = &param0->worklist;
frost$collections$HashSet* $tmp908 = *$tmp907;
org$frostlang$frostc$IR$Block$ID $tmp909 = *(&local3);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp910;
$tmp910 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp910->value = $tmp909;
frost$collections$HashSet$remove$frost$collections$HashSet$T($tmp908, ((frost$collections$Key*) $tmp910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp910)));
// line 261
org$frostlang$frostc$IR$Block$ID $tmp911 = *(&local3);
$fn913 $tmp912 = ($fn913) param0->$class->vtable[6];
$tmp912(param0, $tmp911);
goto block9;
block11:;
// line 263
org$frostlang$frostc$IR** $tmp914 = &param0->ir;
org$frostlang$frostc$IR* $tmp915 = *$tmp914;
frost$collections$Array** $tmp916 = &$tmp915->blocks;
frost$collections$Array* $tmp917 = *$tmp916;
ITable* $tmp918 = ((frost$collections$Iterable*) $tmp917)->$class->itable;
while ($tmp918->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp918 = $tmp918->next;
}
$fn920 $tmp919 = $tmp918->methods[0];
frost$collections$Iterator* $tmp921 = $tmp919(((frost$collections$Iterable*) $tmp917));
goto block12;
block12:;
ITable* $tmp922 = $tmp921->$class->itable;
while ($tmp922->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp922 = $tmp922->next;
}
$fn924 $tmp923 = $tmp922->methods[0];
frost$core$Bit $tmp925 = $tmp923($tmp921);
bool $tmp926 = $tmp925.value;
if ($tmp926) goto block14; else goto block13;
block13:;
*(&local4) = ((org$frostlang$frostc$IR$Block*) NULL);
ITable* $tmp927 = $tmp921->$class->itable;
while ($tmp927->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp927 = $tmp927->next;
}
$fn929 $tmp928 = $tmp927->methods[1];
frost$core$Object* $tmp930 = $tmp928($tmp921);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp930)));
org$frostlang$frostc$IR$Block* $tmp931 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
*(&local4) = ((org$frostlang$frostc$IR$Block*) $tmp930);
// line 264
frost$collections$HashMap** $tmp932 = &param0->entryStates;
frost$collections$HashMap* $tmp933 = *$tmp932;
org$frostlang$frostc$IR$Block* $tmp934 = *(&local4);
org$frostlang$frostc$IR$Block$ID* $tmp935 = &$tmp934->id;
org$frostlang$frostc$IR$Block$ID $tmp936 = *$tmp935;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp937;
$tmp937 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp937->value = $tmp936;
frost$core$Object* $tmp938 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp933, ((frost$collections$Key*) $tmp937));
frost$core$Bit $tmp939 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Analyzer$State*) $tmp938) != NULL);
bool $tmp940 = $tmp939.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp938);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp937)));
if ($tmp940) goto block15; else goto block17;
block15:;
// line 265
org$frostlang$frostc$IR$Block* $tmp941 = *(&local4);
frost$collections$Array** $tmp942 = &$tmp941->statements;
frost$collections$Array* $tmp943 = *$tmp942;
frost$core$Int64 $tmp944 = (frost$core$Int64) {0};
frost$core$Object* $tmp945 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp943, $tmp944);
frost$core$Int64* $tmp946 = &((org$frostlang$frostc$IR$Statement*) $tmp945)->$rawValue;
frost$core$Int64 $tmp947 = *$tmp946;
frost$core$Int64 $tmp948 = (frost$core$Int64) {9};
frost$core$Bit $tmp949 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp947, $tmp948);
bool $tmp950 = $tmp949.value;
if ($tmp950) goto block19; else goto block20;
block19:;
// line 267
org$frostlang$frostc$MethodDecl** $tmp951 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp952 = *$tmp951;
org$frostlang$frostc$MethodDecl$Kind* $tmp953 = &$tmp952->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp954 = *$tmp953;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp955;
$tmp955 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp955->value = $tmp954;
frost$core$Int64 $tmp956 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp957 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp956);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp958;
$tmp958 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp958->value = $tmp957;
ITable* $tmp959 = ((frost$core$Equatable*) $tmp955)->$class->itable;
while ($tmp959->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp959 = $tmp959->next;
}
$fn961 $tmp960 = $tmp959->methods[1];
frost$core$Bit $tmp962 = $tmp960(((frost$core$Equatable*) $tmp955), ((frost$core$Equatable*) $tmp958));
bool $tmp963 = $tmp962.value;
if ($tmp963) goto block23; else goto block24;
block23:;
org$frostlang$frostc$MethodDecl** $tmp964 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp965 = *$tmp964;
org$frostlang$frostc$Type** $tmp966 = &$tmp965->returnType;
org$frostlang$frostc$Type* $tmp967 = *$tmp966;
org$frostlang$frostc$Type* $tmp968 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp969 = ((frost$core$Equatable*) $tmp967)->$class->itable;
while ($tmp969->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp969 = $tmp969->next;
}
$fn971 $tmp970 = $tmp969->methods[1];
frost$core$Bit $tmp972 = $tmp970(((frost$core$Equatable*) $tmp967), ((frost$core$Equatable*) $tmp968));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
*(&local5) = $tmp972;
goto block25;
block24:;
*(&local5) = $tmp962;
goto block25;
block25:;
frost$core$Bit $tmp973 = *(&local5);
bool $tmp974 = $tmp973.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp958)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp955)));
if ($tmp974) goto block21; else goto block22;
block21:;
// line 268
org$frostlang$frostc$Compiler** $tmp975 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp976 = *$tmp975;
org$frostlang$frostc$MethodDecl** $tmp977 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp978 = *$tmp977;
org$frostlang$frostc$Position* $tmp979 = &((org$frostlang$frostc$Symbol*) $tmp978)->position;
org$frostlang$frostc$Position $tmp980 = *$tmp979;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp976, $tmp980, &$s981);
goto block22;
block22:;
goto block18;
block20:;
// line 272
org$frostlang$frostc$IR$Block* $tmp982 = *(&local4);
org$frostlang$frostc$IR$Block$ID* $tmp983 = &$tmp982->id;
org$frostlang$frostc$IR$Block$ID $tmp984 = *$tmp983;
frost$core$Bit $tmp985 = frost$core$Bit$init$builtin_bit(true);
$fn987 $tmp986 = ($fn987) param0->$class->vtable[5];
org$frostlang$frostc$Analyzer$State* $tmp988 = $tmp986(param0, $tmp984, $tmp985);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
goto block18;
block18:;
frost$core$Frost$unref$frost$core$Object$Q($tmp945);
goto block16;
block17:;
// line 276
org$frostlang$frostc$IR$Block* $tmp989 = *(&local4);
frost$core$Bit* $tmp990 = &$tmp989->containsExplicitCode;
frost$core$Bit $tmp991 = *$tmp990;
bool $tmp992 = $tmp991.value;
if ($tmp992) goto block26; else goto block27;
block26:;
// line 277
org$frostlang$frostc$Compiler** $tmp993 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp994 = *$tmp993;
org$frostlang$frostc$IR$Block* $tmp995 = *(&local4);
frost$collections$Array** $tmp996 = &$tmp995->statements;
frost$collections$Array* $tmp997 = *$tmp996;
frost$core$Int64 $tmp998 = (frost$core$Int64) {0};
frost$core$Object* $tmp999 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp997, $tmp998);
$fn1001 $tmp1000 = ($fn1001) ((org$frostlang$frostc$IR$Statement*) $tmp999)->$class->vtable[2];
org$frostlang$frostc$Position $tmp1002 = $tmp1000(((org$frostlang$frostc$IR$Statement*) $tmp999));
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String($tmp994, $tmp1002, &$s1003);
frost$core$Frost$unref$frost$core$Object$Q($tmp999);
goto block27;
block27:;
goto block16;
block16:;
frost$core$Frost$unref$frost$core$Object$Q($tmp930);
org$frostlang$frostc$IR$Block* $tmp1004 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
*(&local4) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
org$frostlang$frostc$Analyzer$State* $tmp1005 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
*(&local1) = ((org$frostlang$frostc$Analyzer$State*) NULL);
org$frostlang$frostc$Type* $tmp1006 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return;

}
void org$frostlang$frostc$Analyzer$cleanup(org$frostlang$frostc$Analyzer* param0) {

// line 3
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp1007 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp1008 = *$tmp1007;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
org$frostlang$frostc$MethodDecl** $tmp1009 = &param0->m;
org$frostlang$frostc$MethodDecl* $tmp1010 = *$tmp1009;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
org$frostlang$frostc$IR** $tmp1011 = &param0->ir;
org$frostlang$frostc$IR* $tmp1012 = *$tmp1011;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
frost$collections$HashMap** $tmp1013 = &param0->predecessors;
frost$collections$HashMap* $tmp1014 = *$tmp1013;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
frost$collections$HashMap** $tmp1015 = &param0->entryStates;
frost$collections$HashMap* $tmp1016 = *$tmp1015;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
frost$collections$HashSet** $tmp1017 = &param0->worklist;
frost$collections$HashSet* $tmp1018 = *$tmp1017;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
return;

}

