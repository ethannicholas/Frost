#include "org/frostlang/frostc/SymbolTable.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/collections/HashMap.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/Key.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Methods.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/collections/List.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/Annotations.h"
#include "frost/collections/CollectionWriter.h"


static frost$core$String $s1;
org$frostlang$frostc$SymbolTable$class_type org$frostlang$frostc$SymbolTable$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$SymbolTable$get_asString$R$frost$core$String, org$frostlang$frostc$SymbolTable$cleanup, org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol, org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String, org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT, org$frostlang$frostc$SymbolTable$merge$org$frostlang$frostc$Symbol$Q$org$frostlang$frostc$Symbol$Q$R$org$frostlang$frostc$Symbol$Q, org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q} };

typedef frost$core$Bit (*$fn61)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn120)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn124)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn129)(frost$collections$Iterator*);
typedef void (*$fn159)(frost$collections$CollectionWriter*, frost$core$Object*);
typedef frost$core$Bit (*$fn168)(org$frostlang$frostc$Symbol*);
typedef frost$collections$Iterator* (*$fn191)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn195)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn200)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn276)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn280)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn285)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn320)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn324)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn329)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn350)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 32, -3970136074145404830, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static frost$core$String $s356 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };

void org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$Compiler(org$frostlang$frostc$SymbolTable* param0, org$frostlang$frostc$Compiler* param1) {

// line 5
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp2 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$collections$HashMap** $tmp3 = &param0->symbols;
frost$collections$HashMap* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$HashMap** $tmp5 = &param0->symbols;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// line 12
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp6 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$HashMap** $tmp7 = &param0->merged;
frost$collections$HashMap* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$HashMap** $tmp9 = &param0->merged;
*$tmp9 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
// line 15
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp10 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$collections$Array** $tmp11 = &param0->parents;
frost$collections$Array* $tmp12 = *$tmp11;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$collections$Array** $tmp13 = &param0->parents;
*$tmp13 = $tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
// line 18
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp14 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp14, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$Weak** $tmp15 = &param0->compiler;
frost$core$Weak* $tmp16 = *$tmp15;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$Weak** $tmp17 = &param0->compiler;
*$tmp17 = $tmp14;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
return;

}
void org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$SymbolTable(org$frostlang$frostc$SymbolTable* param0, org$frostlang$frostc$SymbolTable* param1) {

// line 5
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp18 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp18);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$collections$HashMap** $tmp19 = &param0->symbols;
frost$collections$HashMap* $tmp20 = *$tmp19;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
frost$collections$HashMap** $tmp21 = &param0->symbols;
*$tmp21 = $tmp18;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
// line 12
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp22 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$collections$HashMap** $tmp23 = &param0->merged;
frost$collections$HashMap* $tmp24 = *$tmp23;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$collections$HashMap** $tmp25 = &param0->merged;
*$tmp25 = $tmp22;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// line 15
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp26 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp26);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$collections$Array** $tmp27 = &param0->parents;
frost$collections$Array* $tmp28 = *$tmp27;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$collections$Array** $tmp29 = &param0->parents;
*$tmp29 = $tmp26;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// line 22
frost$core$Weak** $tmp30 = &param1->compiler;
frost$core$Weak* $tmp31 = *$tmp30;
frost$core$Object* $tmp32 = frost$core$Weak$get$R$frost$core$Weak$T($tmp31);
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp33 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp33, ((frost$core$Object*) ((org$frostlang$frostc$Compiler*) $tmp32)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Weak** $tmp34 = &param0->compiler;
frost$core$Weak* $tmp35 = *$tmp34;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Weak** $tmp36 = &param0->compiler;
*$tmp36 = $tmp33;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Frost$unref$frost$core$Object$Q($tmp32);
// line 23
frost$collections$Array** $tmp37 = &param0->parents;
frost$collections$Array* $tmp38 = *$tmp37;
frost$collections$Array$add$frost$collections$Array$T($tmp38, ((frost$core$Object*) param1));
return;

}
void org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol(org$frostlang$frostc$SymbolTable* param0, org$frostlang$frostc$Symbol* param1) {

// line 27
frost$core$String** $tmp39 = &param1->name;
frost$core$String* $tmp40 = *$tmp39;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String(param0, param1, $tmp40);
return;

}
void org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String(org$frostlang$frostc$SymbolTable* param0, org$frostlang$frostc$Symbol* param1, frost$core$String* param2) {

org$frostlang$frostc$Symbol* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$collections$Array* local2 = NULL;
// line 31
frost$collections$HashMap** $tmp41 = &param0->merged;
frost$collections$HashMap* $tmp42 = *$tmp41;
frost$collections$HashMap$remove$frost$collections$HashMap$K($tmp42, ((frost$collections$Key*) param2));
// line 32
frost$collections$HashMap** $tmp43 = &param0->symbols;
frost$collections$HashMap* $tmp44 = *$tmp43;
frost$core$Object* $tmp45 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp44, ((frost$collections$Key*) param2));
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp45)));
org$frostlang$frostc$Symbol* $tmp46 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
*(&local0) = ((org$frostlang$frostc$Symbol*) $tmp45);
frost$core$Frost$unref$frost$core$Object$Q($tmp45);
// line 33
org$frostlang$frostc$Symbol* $tmp47 = *(&local0);
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit($tmp47 == NULL);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block1; else goto block2;
block1:;
// line 34
frost$collections$HashMap** $tmp50 = &param0->symbols;
frost$collections$HashMap* $tmp51 = *$tmp50;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp51, ((frost$collections$Key*) param2), ((frost$core$Object*) param1));
// line 35
org$frostlang$frostc$Symbol* $tmp52 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return;
block2:;
// line 37
org$frostlang$frostc$Symbol$Kind* $tmp53 = &param1->kind;
org$frostlang$frostc$Symbol$Kind $tmp54 = *$tmp53;
org$frostlang$frostc$Symbol$Kind$wrapper* $tmp55;
$tmp55 = (org$frostlang$frostc$Symbol$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Symbol$Kind$wrapperclass);
$tmp55->value = $tmp54;
frost$core$Int64 $tmp56 = (frost$core$Int64) {5};
org$frostlang$frostc$Symbol$Kind $tmp57 = org$frostlang$frostc$Symbol$Kind$init$frost$core$Int64($tmp56);
org$frostlang$frostc$Symbol$Kind$wrapper* $tmp58;
$tmp58 = (org$frostlang$frostc$Symbol$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Symbol$Kind$wrapperclass);
$tmp58->value = $tmp57;
ITable* $tmp59 = ((frost$core$Equatable*) $tmp55)->$class->itable;
while ($tmp59->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp59 = $tmp59->next;
}
$fn61 $tmp60 = $tmp59->methods[0];
frost$core$Bit $tmp62 = $tmp60(((frost$core$Equatable*) $tmp55), ((frost$core$Equatable*) $tmp58));
bool $tmp63 = $tmp62.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp58)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp55)));
if ($tmp63) goto block3; else goto block4;
block3:;
// line 38
org$frostlang$frostc$Symbol* $tmp64 = *(&local0);
org$frostlang$frostc$Symbol$Kind* $tmp65 = &$tmp64->kind;
org$frostlang$frostc$Symbol$Kind $tmp66 = *$tmp65;
frost$core$Int64 $tmp67 = $tmp66.$rawValue;
frost$core$Int64 $tmp68 = (frost$core$Int64) {5};
frost$core$Bit $tmp69 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp67, $tmp68);
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block6; else goto block7;
block6:;
// line 40
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp71 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp71);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$collections$Array* $tmp72 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
*(&local1) = $tmp71;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// line 41
frost$collections$Array* $tmp73 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp73, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) param1)));
// line 42
frost$collections$Array* $tmp74 = *(&local1);
org$frostlang$frostc$Symbol* $tmp75 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp74, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp75)));
// line 43
frost$collections$HashMap** $tmp76 = &param0->symbols;
frost$collections$HashMap* $tmp77 = *$tmp76;
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Methods));
org$frostlang$frostc$Methods* $tmp78 = (org$frostlang$frostc$Methods*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp79 = *(&local1);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp78, ((frost$collections$ListView*) $tmp79));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp77, ((frost$collections$Key*) param2), ((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp78)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// line 44
frost$collections$Array* $tmp80 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp81 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return;
block7:;
frost$core$Int64 $tmp82 = (frost$core$Int64) {6};
frost$core$Bit $tmp83 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp67, $tmp82);
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block8; else goto block5;
block8:;
// line 47
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp85 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp85);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$collections$Array* $tmp86 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local2) = $tmp85;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// line 48
frost$collections$Array* $tmp87 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp87, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) param1)));
// line 49
frost$collections$Array* $tmp88 = *(&local2);
org$frostlang$frostc$Symbol* $tmp89 = *(&local0);
org$frostlang$frostc$FixedArray** $tmp90 = &((org$frostlang$frostc$Methods*) $tmp89)->methods;
org$frostlang$frostc$FixedArray* $tmp91 = *$tmp90;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp88, ((frost$collections$CollectionView*) $tmp91));
// line 50
frost$collections$HashMap** $tmp92 = &param0->symbols;
frost$collections$HashMap* $tmp93 = *$tmp92;
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Methods));
org$frostlang$frostc$Methods* $tmp94 = (org$frostlang$frostc$Methods*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp95 = *(&local2);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp94, ((frost$collections$ListView*) $tmp95));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp93, ((frost$collections$Key*) param2), ((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp94)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// line 51
frost$collections$Array* $tmp96 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp97 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return;
block5:;
goto block4;
block4:;
// line 55
frost$core$Weak** $tmp98 = &param0->compiler;
frost$core$Weak* $tmp99 = *$tmp98;
frost$core$Object* $tmp100 = frost$core$Weak$get$R$frost$core$Weak$T($tmp99);
org$frostlang$frostc$Position* $tmp101 = &param1->position;
org$frostlang$frostc$Position $tmp102 = *$tmp101;
frost$core$String* $tmp103 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s104, param2);
frost$core$String* $tmp105 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp103, &$s106);
org$frostlang$frostc$Symbol* $tmp107 = *(&local0);
org$frostlang$frostc$Position* $tmp108 = &$tmp107->position;
org$frostlang$frostc$Position $tmp109 = *$tmp108;
org$frostlang$frostc$Position$wrapper* $tmp110;
$tmp110 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp110->value = $tmp109;
frost$core$String* $tmp111 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp105, ((frost$core$Object*) $tmp110));
frost$core$String* $tmp112 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp111, &$s113);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp100), $tmp102, $tmp112);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q($tmp100);
org$frostlang$frostc$Symbol* $tmp114 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return;

}
void org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(org$frostlang$frostc$SymbolTable* param0, org$frostlang$frostc$MethodDecl* param1, frost$collections$List* param2) {

org$frostlang$frostc$MethodDecl* local0 = NULL;
org$frostlang$frostc$MethodDecl* local1 = NULL;
// line 61
frost$core$Bit $tmp115 = org$frostlang$frostc$MethodDecl$get_heritable$R$frost$core$Bit(param1);
frost$core$Bit $tmp116 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp115);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block1; else goto block2;
block1:;
// line 62
return;
block2:;
// line 64
ITable* $tmp118 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[0];
frost$collections$Iterator* $tmp121 = $tmp119(((frost$collections$Iterable*) param2));
goto block3;
block3:;
ITable* $tmp122 = $tmp121->$class->itable;
while ($tmp122->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp122 = $tmp122->next;
}
$fn124 $tmp123 = $tmp122->methods[0];
frost$core$Bit $tmp125 = $tmp123($tmp121);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block5; else goto block4;
block4:;
*(&local0) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp127 = $tmp121->$class->itable;
while ($tmp127->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp127 = $tmp127->next;
}
$fn129 $tmp128 = $tmp127->methods[1];
frost$core$Object* $tmp130 = $tmp128($tmp121);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp130)));
org$frostlang$frostc$MethodDecl* $tmp131 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
*(&local0) = ((org$frostlang$frostc$MethodDecl*) $tmp130);
// line 65
frost$core$Weak** $tmp132 = &param0->compiler;
frost$core$Weak* $tmp133 = *$tmp132;
frost$core$Object* $tmp134 = frost$core$Weak$get$R$frost$core$Weak$T($tmp133);
org$frostlang$frostc$MethodDecl* $tmp135 = *(&local0);
org$frostlang$frostc$MethodDecl* $tmp136 = org$frostlang$frostc$Compiler$getOverriddenMethod$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$MethodDecl$Q(((org$frostlang$frostc$Compiler*) $tmp134), $tmp135);
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
org$frostlang$frostc$MethodDecl* $tmp137 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
*(&local1) = $tmp136;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$unref$frost$core$Object$Q($tmp134);
// line 66
org$frostlang$frostc$MethodDecl* $tmp138 = *(&local1);
bool $tmp139 = $tmp138 == param1;
frost$core$Bit $tmp140 = frost$core$Bit$init$builtin_bit($tmp139);
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block6; else goto block7;
block6:;
// line 67
org$frostlang$frostc$MethodDecl* $tmp142 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp130);
org$frostlang$frostc$MethodDecl* $tmp143 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local0) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
return;
block7:;
// line 69
org$frostlang$frostc$Annotations** $tmp144 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp145 = *$tmp144;
frost$core$Bit $tmp146 = org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit($tmp145);
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block10; else goto block9;
block10:;
org$frostlang$frostc$MethodDecl* $tmp148 = *(&local0);
frost$core$String* $tmp149 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String($tmp148);
frost$core$String* $tmp150 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param1);
frost$core$Bit $tmp151 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp149, $tmp150);
bool $tmp152 = $tmp151.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
if ($tmp152) goto block8; else goto block9;
block8:;
// line 70
org$frostlang$frostc$MethodDecl* $tmp153 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp130);
org$frostlang$frostc$MethodDecl* $tmp154 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local0) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
return;
block9:;
org$frostlang$frostc$MethodDecl* $tmp155 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp130);
org$frostlang$frostc$MethodDecl* $tmp156 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
*(&local0) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// line 73
ITable* $tmp157 = ((frost$collections$CollectionWriter*) param2)->$class->itable;
while ($tmp157->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp157 = $tmp157->next;
}
$fn159 $tmp158 = $tmp157->methods[0];
$tmp158(((frost$collections$CollectionWriter*) param2), ((frost$core$Object*) param1));
return;

}
org$frostlang$frostc$Symbol* org$frostlang$frostc$SymbolTable$merge$org$frostlang$frostc$Symbol$Q$org$frostlang$frostc$Symbol$Q$R$org$frostlang$frostc$Symbol$Q(org$frostlang$frostc$SymbolTable* param0, org$frostlang$frostc$Symbol* param1, org$frostlang$frostc$Symbol* param2) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$MethodDecl* local1 = NULL;
org$frostlang$frostc$MethodDecl* local2 = NULL;
org$frostlang$frostc$MethodDecl* local3 = NULL;
frost$collections$Array* local4 = NULL;
frost$collections$Array* local5 = NULL;
org$frostlang$frostc$MethodDecl* local6 = NULL;
frost$collections$Array* local7 = NULL;
// line 78
frost$core$Bit $tmp160 = frost$core$Bit$init$builtin_bit(param2 == NULL);
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block1; else goto block2;
block1:;
// line 79
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block2:;
// line 81
frost$core$Bit $tmp162 = frost$core$Bit$init$builtin_bit(param1 == NULL);
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block3; else goto block4;
block3:;
// line 82
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block4:;
// line 84
bool $tmp164 = param1 == param2;
frost$core$Bit $tmp165 = frost$core$Bit$init$builtin_bit($tmp164);
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block5; else goto block6;
block5:;
// line 85
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block6:;
// line 87
$fn168 $tmp167 = ($fn168) param2->$class->vtable[2];
frost$core$Bit $tmp169 = $tmp167(param2);
frost$core$Bit $tmp170 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp169);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block7; else goto block8;
block7:;
// line 88
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block8:;
// line 90
org$frostlang$frostc$Symbol$Kind* $tmp172 = &param1->kind;
org$frostlang$frostc$Symbol$Kind $tmp173 = *$tmp172;
frost$core$Int64 $tmp174 = $tmp173.$rawValue;
frost$core$Int64 $tmp175 = (frost$core$Int64) {5};
frost$core$Bit $tmp176 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp174, $tmp175);
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block10; else goto block11;
block10:;
// line 92
org$frostlang$frostc$Symbol$Kind* $tmp178 = &param2->kind;
org$frostlang$frostc$Symbol$Kind $tmp179 = *$tmp178;
frost$core$Int64 $tmp180 = $tmp179.$rawValue;
frost$core$Int64 $tmp181 = (frost$core$Int64) {6};
frost$core$Bit $tmp182 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp180, $tmp181);
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block13; else goto block14;
block13:;
// line 94
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp184 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp184);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$collections$Array* $tmp185 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
*(&local0) = $tmp184;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
// line 95
frost$collections$Array* $tmp186 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp186, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) param1)));
// line 96
org$frostlang$frostc$FixedArray** $tmp187 = &((org$frostlang$frostc$Methods*) param2)->methods;
org$frostlang$frostc$FixedArray* $tmp188 = *$tmp187;
ITable* $tmp189 = ((frost$collections$Iterable*) $tmp188)->$class->itable;
while ($tmp189->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp189 = $tmp189->next;
}
$fn191 $tmp190 = $tmp189->methods[0];
frost$collections$Iterator* $tmp192 = $tmp190(((frost$collections$Iterable*) $tmp188));
goto block15;
block15:;
ITable* $tmp193 = $tmp192->$class->itable;
while ($tmp193->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp193 = $tmp193->next;
}
$fn195 $tmp194 = $tmp193->methods[0];
frost$core$Bit $tmp196 = $tmp194($tmp192);
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block17; else goto block16;
block16:;
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp198 = $tmp192->$class->itable;
while ($tmp198->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp198 = $tmp198->next;
}
$fn200 $tmp199 = $tmp198->methods[1];
frost$core$Object* $tmp201 = $tmp199($tmp192);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp201)));
org$frostlang$frostc$MethodDecl* $tmp202 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
*(&local1) = ((org$frostlang$frostc$MethodDecl*) $tmp201);
// line 97
org$frostlang$frostc$MethodDecl* $tmp203 = *(&local1);
frost$collections$Array* $tmp204 = *(&local0);
org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(param0, $tmp203, ((frost$collections$List*) $tmp204));
frost$core$Frost$unref$frost$core$Object$Q($tmp201);
org$frostlang$frostc$MethodDecl* $tmp205 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block15;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
// line 99
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Methods));
org$frostlang$frostc$Methods* $tmp206 = (org$frostlang$frostc$Methods*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp207 = *(&local0);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp206, ((frost$collections$ListView*) $tmp207));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp206)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
frost$collections$Array* $tmp208 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$Symbol*) $tmp206);
block14:;
frost$core$Int64 $tmp209 = (frost$core$Int64) {5};
frost$core$Bit $tmp210 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp180, $tmp209);
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block18; else goto block19;
block18:;
// line 102
frost$core$Weak** $tmp212 = &param0->compiler;
frost$core$Weak* $tmp213 = *$tmp212;
frost$core$Object* $tmp214 = frost$core$Weak$get$R$frost$core$Weak$T($tmp213);
org$frostlang$frostc$MethodDecl* $tmp215 = org$frostlang$frostc$Compiler$getOverriddenMethod$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$MethodDecl$Q(((org$frostlang$frostc$Compiler*) $tmp214), ((org$frostlang$frostc$MethodDecl*) param2));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
org$frostlang$frostc$MethodDecl* $tmp216 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
*(&local2) = $tmp215;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$Frost$unref$frost$core$Object$Q($tmp214);
// line 103
frost$core$Weak** $tmp217 = &param0->compiler;
frost$core$Weak* $tmp218 = *$tmp217;
frost$core$Object* $tmp219 = frost$core$Weak$get$R$frost$core$Weak$T($tmp218);
org$frostlang$frostc$MethodDecl* $tmp220 = org$frostlang$frostc$Compiler$getOverriddenMethod$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$MethodDecl$Q(((org$frostlang$frostc$Compiler*) $tmp219), ((org$frostlang$frostc$MethodDecl*) param1));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
org$frostlang$frostc$MethodDecl* $tmp221 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
*(&local3) = $tmp220;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
frost$core$Frost$unref$frost$core$Object$Q($tmp219);
// line 104
org$frostlang$frostc$MethodDecl* $tmp222 = *(&local2);
bool $tmp223 = $tmp222 == ((org$frostlang$frostc$MethodDecl*) param1);
frost$core$Bit $tmp224 = frost$core$Bit$init$builtin_bit($tmp223);
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block20; else goto block23;
block23:;
org$frostlang$frostc$MethodDecl* $tmp226 = *(&local3);
bool $tmp227 = $tmp226 == ((org$frostlang$frostc$MethodDecl*) param2);
frost$core$Bit $tmp228 = frost$core$Bit$init$builtin_bit($tmp227);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block20; else goto block22;
block22:;
org$frostlang$frostc$MethodDecl* $tmp230 = *(&local2);
frost$core$Bit $tmp231 = frost$core$Bit$init$builtin_bit($tmp230 != NULL);
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block24; else goto block21;
block24:;
org$frostlang$frostc$MethodDecl* $tmp233 = *(&local2);
org$frostlang$frostc$MethodDecl* $tmp234 = *(&local3);
bool $tmp235 = $tmp233 == $tmp234;
frost$core$Bit $tmp236 = frost$core$Bit$init$builtin_bit($tmp235);
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block20; else goto block21;
block20:;
// line 107
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$MethodDecl* $tmp238 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp239 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
return param1;
block21:;
// line 109
org$frostlang$frostc$Annotations** $tmp240 = &((org$frostlang$frostc$MethodDecl*) param2)->annotations;
org$frostlang$frostc$Annotations* $tmp241 = *$tmp240;
frost$core$Bit $tmp242 = org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit($tmp241);
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block27; else goto block26;
block27:;
frost$core$String* $tmp244 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(((org$frostlang$frostc$MethodDecl*) param2));
frost$core$String* $tmp245 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(((org$frostlang$frostc$MethodDecl*) param1));
frost$core$Bit $tmp246 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp244, $tmp245);
bool $tmp247 = $tmp246.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
if ($tmp247) goto block25; else goto block26;
block25:;
// line 111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$MethodDecl* $tmp248 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp249 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
return param1;
block26:;
// line 113
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp250 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp250);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
frost$collections$Array* $tmp251 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
*(&local4) = $tmp250;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
// line 114
frost$collections$Array* $tmp252 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp252, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) param1)));
// line 115
frost$collections$Array* $tmp253 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp253, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) param2)));
// line 116
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Methods));
org$frostlang$frostc$Methods* $tmp254 = (org$frostlang$frostc$Methods*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp255 = *(&local4);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp254, ((frost$collections$ListView*) $tmp255));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp254)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
frost$collections$Array* $tmp256 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$MethodDecl* $tmp257 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp258 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
return ((org$frostlang$frostc$Symbol*) $tmp254);
block19:;
// line 119
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block12:;
goto block9;
block11:;
frost$core$Int64 $tmp259 = (frost$core$Int64) {6};
frost$core$Bit $tmp260 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp174, $tmp259);
bool $tmp261 = $tmp260.value;
if ($tmp261) goto block28; else goto block29;
block28:;
// line 124
org$frostlang$frostc$Symbol$Kind* $tmp262 = &param2->kind;
org$frostlang$frostc$Symbol$Kind $tmp263 = *$tmp262;
frost$core$Int64 $tmp264 = $tmp263.$rawValue;
frost$core$Int64 $tmp265 = (frost$core$Int64) {6};
frost$core$Bit $tmp266 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp264, $tmp265);
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block31; else goto block32;
block31:;
// line 126
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp268 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
org$frostlang$frostc$FixedArray** $tmp269 = &((org$frostlang$frostc$Methods*) param1)->methods;
org$frostlang$frostc$FixedArray* $tmp270 = *$tmp269;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp268, ((frost$collections$CollectionView*) $tmp270));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$collections$Array* $tmp271 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
*(&local5) = $tmp268;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
// line 127
org$frostlang$frostc$FixedArray** $tmp272 = &((org$frostlang$frostc$Methods*) param2)->methods;
org$frostlang$frostc$FixedArray* $tmp273 = *$tmp272;
ITable* $tmp274 = ((frost$collections$Iterable*) $tmp273)->$class->itable;
while ($tmp274->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp274 = $tmp274->next;
}
$fn276 $tmp275 = $tmp274->methods[0];
frost$collections$Iterator* $tmp277 = $tmp275(((frost$collections$Iterable*) $tmp273));
goto block33;
block33:;
ITable* $tmp278 = $tmp277->$class->itable;
while ($tmp278->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp278 = $tmp278->next;
}
$fn280 $tmp279 = $tmp278->methods[0];
frost$core$Bit $tmp281 = $tmp279($tmp277);
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block35; else goto block34;
block34:;
*(&local6) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp283 = $tmp277->$class->itable;
while ($tmp283->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp283 = $tmp283->next;
}
$fn285 $tmp284 = $tmp283->methods[1];
frost$core$Object* $tmp286 = $tmp284($tmp277);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp286)));
org$frostlang$frostc$MethodDecl* $tmp287 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local6) = ((org$frostlang$frostc$MethodDecl*) $tmp286);
// line 128
org$frostlang$frostc$MethodDecl* $tmp288 = *(&local6);
frost$collections$Array* $tmp289 = *(&local5);
org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(param0, $tmp288, ((frost$collections$List*) $tmp289));
frost$core$Frost$unref$frost$core$Object$Q($tmp286);
org$frostlang$frostc$MethodDecl* $tmp290 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
*(&local6) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block33;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
// line 130
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Methods));
org$frostlang$frostc$Methods* $tmp291 = (org$frostlang$frostc$Methods*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp292 = *(&local5);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp291, ((frost$collections$ListView*) $tmp292));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp291)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$collections$Array* $tmp293 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local5) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$Symbol*) $tmp291);
block32:;
frost$core$Int64 $tmp294 = (frost$core$Int64) {5};
frost$core$Bit $tmp295 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp264, $tmp294);
bool $tmp296 = $tmp295.value;
if ($tmp296) goto block36; else goto block37;
block36:;
// line 133
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp297 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
org$frostlang$frostc$FixedArray** $tmp298 = &((org$frostlang$frostc$Methods*) param1)->methods;
org$frostlang$frostc$FixedArray* $tmp299 = *$tmp298;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp297, ((frost$collections$CollectionView*) $tmp299));
*(&local7) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$collections$Array* $tmp300 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
*(&local7) = $tmp297;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
// line 134
frost$collections$Array* $tmp301 = *(&local7);
org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(param0, ((org$frostlang$frostc$MethodDecl*) param2), ((frost$collections$List*) $tmp301));
// line 135
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Methods));
org$frostlang$frostc$Methods* $tmp302 = (org$frostlang$frostc$Methods*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp303 = *(&local7);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp302, ((frost$collections$ListView*) $tmp303));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp302)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$collections$Array* $tmp304 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
*(&local7) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$Symbol*) $tmp302);
block37:;
// line 138
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block30:;
goto block9;
block29:;
// line 143
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block9:;
goto block38;
block38:;

}
org$frostlang$frostc$Symbol* org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q(org$frostlang$frostc$SymbolTable* param0, frost$core$String* param1) {

org$frostlang$frostc$Symbol* local0 = NULL;
org$frostlang$frostc$SymbolTable* local1 = NULL;
// line 149
frost$collections$HashMap** $tmp305 = &param0->merged;
frost$collections$HashMap* $tmp306 = *$tmp305;
frost$core$Object* $tmp307 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp306, ((frost$collections$Key*) param1));
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp307)));
org$frostlang$frostc$Symbol* $tmp308 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local0) = ((org$frostlang$frostc$Symbol*) $tmp307);
frost$core$Frost$unref$frost$core$Object$Q($tmp307);
// line 150
org$frostlang$frostc$Symbol* $tmp309 = *(&local0);
frost$core$Bit $tmp310 = frost$core$Bit$init$builtin_bit($tmp309 == NULL);
bool $tmp311 = $tmp310.value;
if ($tmp311) goto block1; else goto block2;
block1:;
// line 151
frost$collections$HashMap** $tmp312 = &param0->symbols;
frost$collections$HashMap* $tmp313 = *$tmp312;
frost$core$Object* $tmp314 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp313, ((frost$collections$Key*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp314)));
org$frostlang$frostc$Symbol* $tmp315 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
*(&local0) = ((org$frostlang$frostc$Symbol*) $tmp314);
frost$core$Frost$unref$frost$core$Object$Q($tmp314);
// line 152
frost$collections$Array** $tmp316 = &param0->parents;
frost$collections$Array* $tmp317 = *$tmp316;
ITable* $tmp318 = ((frost$collections$Iterable*) $tmp317)->$class->itable;
while ($tmp318->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp318 = $tmp318->next;
}
$fn320 $tmp319 = $tmp318->methods[0];
frost$collections$Iterator* $tmp321 = $tmp319(((frost$collections$Iterable*) $tmp317));
goto block3;
block3:;
ITable* $tmp322 = $tmp321->$class->itable;
while ($tmp322->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp322 = $tmp322->next;
}
$fn324 $tmp323 = $tmp322->methods[0];
frost$core$Bit $tmp325 = $tmp323($tmp321);
bool $tmp326 = $tmp325.value;
if ($tmp326) goto block5; else goto block4;
block4:;
*(&local1) = ((org$frostlang$frostc$SymbolTable*) NULL);
ITable* $tmp327 = $tmp321->$class->itable;
while ($tmp327->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp327 = $tmp327->next;
}
$fn329 $tmp328 = $tmp327->methods[1];
frost$core$Object* $tmp330 = $tmp328($tmp321);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$SymbolTable*) $tmp330)));
org$frostlang$frostc$SymbolTable* $tmp331 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
*(&local1) = ((org$frostlang$frostc$SymbolTable*) $tmp330);
// line 153
org$frostlang$frostc$Symbol* $tmp332 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp333 = *(&local1);
org$frostlang$frostc$Symbol* $tmp334 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp333, param1);
org$frostlang$frostc$Symbol* $tmp335 = org$frostlang$frostc$SymbolTable$merge$org$frostlang$frostc$Symbol$Q$org$frostlang$frostc$Symbol$Q$R$org$frostlang$frostc$Symbol$Q(param0, $tmp332, $tmp334);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
org$frostlang$frostc$Symbol* $tmp336 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
*(&local0) = $tmp335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
frost$core$Frost$unref$frost$core$Object$Q($tmp330);
org$frostlang$frostc$SymbolTable* $tmp337 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
*(&local1) = ((org$frostlang$frostc$SymbolTable*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
// line 155
org$frostlang$frostc$Symbol* $tmp338 = *(&local0);
frost$core$Bit $tmp339 = frost$core$Bit$init$builtin_bit($tmp338 != NULL);
bool $tmp340 = $tmp339.value;
if ($tmp340) goto block6; else goto block7;
block6:;
// line 156
frost$collections$HashMap** $tmp341 = &param0->merged;
frost$collections$HashMap* $tmp342 = *$tmp341;
org$frostlang$frostc$Symbol* $tmp343 = *(&local0);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp342, ((frost$collections$Key*) param1), ((frost$core$Object*) $tmp343));
goto block7;
block7:;
goto block2;
block2:;
// line 159
org$frostlang$frostc$Symbol* $tmp344 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
org$frostlang$frostc$Symbol* $tmp345 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return $tmp344;

}
frost$core$String* org$frostlang$frostc$SymbolTable$get_asString$R$frost$core$String(org$frostlang$frostc$SymbolTable* param0) {

// line 164
frost$collections$Array** $tmp346 = &param0->parents;
frost$collections$Array* $tmp347 = *$tmp346;
ITable* $tmp348 = ((frost$collections$CollectionView*) $tmp347)->$class->itable;
while ($tmp348->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp348 = $tmp348->next;
}
$fn350 $tmp349 = $tmp348->methods[0];
frost$core$Int64 $tmp351 = $tmp349(((frost$collections$CollectionView*) $tmp347));
frost$core$Int64$wrapper* $tmp352;
$tmp352 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp352->value = $tmp351;
frost$core$String* $tmp353 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s354, ((frost$core$Object*) $tmp352));
frost$core$String* $tmp355 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp353, &$s356);
frost$collections$HashMap** $tmp357 = &param0->symbols;
frost$collections$HashMap* $tmp358 = *$tmp357;
frost$core$String* $tmp359 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp355, ((frost$core$Object*) $tmp358));
frost$core$String* $tmp360 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp359, &$s361);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
return $tmp360;

}
void org$frostlang$frostc$SymbolTable$cleanup(org$frostlang$frostc$SymbolTable* param0) {

// line 4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp362 = &param0->symbols;
frost$collections$HashMap* $tmp363 = *$tmp362;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
frost$core$Weak** $tmp364 = &param0->compiler;
frost$core$Weak* $tmp365 = *$tmp364;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
frost$collections$HashMap** $tmp366 = &param0->merged;
frost$collections$HashMap* $tmp367 = *$tmp366;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
frost$collections$Array** $tmp368 = &param0->parents;
frost$collections$Array* $tmp369 = *$tmp368;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
return;

}






