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
#include "frost/collections/CollectionWriter.h"


static frost$core$String $s1;
org$frostlang$frostc$SymbolTable$class_type org$frostlang$frostc$SymbolTable$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$SymbolTable$convert$R$frost$core$String, org$frostlang$frostc$SymbolTable$cleanup, org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol, org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String, org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT, org$frostlang$frostc$SymbolTable$merge$org$frostlang$frostc$Symbol$Q$org$frostlang$frostc$Symbol$Q$R$org$frostlang$frostc$Symbol$Q, org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q} };

typedef frost$core$Bit (*$fn61)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn120)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn124)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn129)(frost$collections$Iterator*);
typedef void (*$fn148)(frost$collections$CollectionWriter*, frost$core$Object*);
typedef frost$core$Bit (*$fn157)(org$frostlang$frostc$Symbol*);
typedef frost$collections$Iterator* (*$fn180)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn184)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn189)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn258)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn262)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn267)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn307)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn311)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn316)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn337)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 32, -3970136074145404830, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, -5109432424697330437, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x6d\x65\x72\x67\x65\x28\x73\x79\x6d\x62\x6f\x6c\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x2c\x20\x69\x6e\x68\x65\x72\x69\x74\x65\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 178, 374210069310759224, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static frost$core$String $s348 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };

void org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$Compiler(org$frostlang$frostc$SymbolTable* param0, org$frostlang$frostc$Compiler* param1) {

// line 5
frost$collections$HashMap* $tmp2 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$collections$HashMap** $tmp3 = &param0->symbols;
frost$collections$HashMap* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$HashMap** $tmp5 = &param0->symbols;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// unreffing REF($1:frost.collections.HashMap<frost.core.String, org.frostlang.frostc.Symbol>)
// line 12
frost$collections$HashMap* $tmp6 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$HashMap** $tmp7 = &param0->merged;
frost$collections$HashMap* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$HashMap** $tmp9 = &param0->merged;
*$tmp9 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
// unreffing REF($16:frost.collections.HashMap<frost.core.String, org.frostlang.frostc.Symbol>)
// line 15
frost$collections$Array* $tmp10 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$collections$Array** $tmp11 = &param0->parents;
frost$collections$Array* $tmp12 = *$tmp11;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
frost$collections$Array** $tmp13 = &param0->parents;
*$tmp13 = $tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
// unreffing REF($31:frost.collections.Array<org.frostlang.frostc.SymbolTable>)
// line 18
frost$core$Weak* $tmp14 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp14, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$Weak** $tmp15 = &param0->compiler;
frost$core$Weak* $tmp16 = *$tmp15;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$Weak** $tmp17 = &param0->compiler;
*$tmp17 = $tmp14;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// unreffing REF($46:frost.core.Weak<org.frostlang.frostc.Compiler>)
return;

}
void org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$SymbolTable(org$frostlang$frostc$SymbolTable* param0, org$frostlang$frostc$SymbolTable* param1) {

// line 5
frost$collections$HashMap* $tmp18 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp18);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$collections$HashMap** $tmp19 = &param0->symbols;
frost$collections$HashMap* $tmp20 = *$tmp19;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
frost$collections$HashMap** $tmp21 = &param0->symbols;
*$tmp21 = $tmp18;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
// unreffing REF($1:frost.collections.HashMap<frost.core.String, org.frostlang.frostc.Symbol>)
// line 12
frost$collections$HashMap* $tmp22 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$collections$HashMap** $tmp23 = &param0->merged;
frost$collections$HashMap* $tmp24 = *$tmp23;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$collections$HashMap** $tmp25 = &param0->merged;
*$tmp25 = $tmp22;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// unreffing REF($16:frost.collections.HashMap<frost.core.String, org.frostlang.frostc.Symbol>)
// line 15
frost$collections$Array* $tmp26 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp26);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$collections$Array** $tmp27 = &param0->parents;
frost$collections$Array* $tmp28 = *$tmp27;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$collections$Array** $tmp29 = &param0->parents;
*$tmp29 = $tmp26;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// unreffing REF($31:frost.collections.Array<org.frostlang.frostc.SymbolTable>)
// line 22
frost$core$Weak** $tmp30 = &param1->compiler;
frost$core$Weak* $tmp31 = *$tmp30;
frost$core$Object* $tmp32 = frost$core$Weak$get$R$frost$core$Weak$T($tmp31);
frost$core$Weak* $tmp33 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp33, ((frost$core$Object*) ((org$frostlang$frostc$Compiler*) $tmp32)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Weak** $tmp34 = &param0->compiler;
frost$core$Weak* $tmp35 = *$tmp34;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Weak** $tmp36 = &param0->compiler;
*$tmp36 = $tmp33;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// unreffing REF($51:frost.core.Weak<org.frostlang.frostc.Compiler>)
frost$core$Frost$unref$frost$core$Object$Q($tmp32);
// unreffing REF($49:frost.core.Weak.T)
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
// unreffing REF($11:frost.collections.HashMap.V?)
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
// unreffing old
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
// unreffing REF($50:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp55)));
// unreffing REF($46:frost.core.Equatable<org.frostlang.frostc.Symbol.Kind>)
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
frost$collections$Array* $tmp71 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp71);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$collections$Array* $tmp72 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
*(&local1) = $tmp71;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// unreffing REF($72:frost.collections.Array<org.frostlang.frostc.MethodDecl>)
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
org$frostlang$frostc$Methods* $tmp78 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp79 = *(&local1);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp78, ((frost$collections$ListView*) $tmp79));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp77, ((frost$collections$Key*) param2), ((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp78)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// unreffing REF($103:org.frostlang.frostc.Methods)
// line 44
frost$collections$Array* $tmp80 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
// unreffing methods
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp81 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// unreffing old
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return;
block7:;
frost$core$Int64 $tmp82 = (frost$core$Int64) {6};
frost$core$Bit $tmp83 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp67, $tmp82);
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block8; else goto block5;
block8:;
// line 47
frost$collections$Array* $tmp85 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp85);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$collections$Array* $tmp86 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local2) = $tmp85;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// unreffing REF($130:frost.collections.Array<org.frostlang.frostc.MethodDecl>)
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
org$frostlang$frostc$Methods* $tmp94 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp95 = *(&local2);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp94, ((frost$collections$ListView*) $tmp95));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp93, ((frost$collections$Key*) param2), ((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp94)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// unreffing REF($164:org.frostlang.frostc.Methods)
// line 51
frost$collections$Array* $tmp96 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
// unreffing methods
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp97 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
// unreffing old
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
// unreffing REF($203:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
// unreffing REF($202:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// unreffing REF($201:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// unreffing REF($196:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// unreffing REF($195:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp100);
// unreffing REF($191:frost.core.Weak.T)
org$frostlang$frostc$Symbol* $tmp114 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
// unreffing old
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
// unreffing REF($37:org.frostlang.frostc.MethodDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp134);
// unreffing REF($34:frost.core.Weak.T)
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
// unreffing overridden
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp130);
// unreffing REF($22:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp143 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
// unreffing test
*(&local0) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// unreffing REF($11:frost.collections.Iterator<frost.collections.Iterable.T>)
return;
block7:;
org$frostlang$frostc$MethodDecl* $tmp144 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
// unreffing overridden
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp130);
// unreffing REF($22:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp145 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// unreffing test
*(&local0) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// unreffing REF($11:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 70
ITable* $tmp146 = ((frost$collections$CollectionWriter*) param2)->$class->itable;
while ($tmp146->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp146 = $tmp146->next;
}
$fn148 $tmp147 = $tmp146->methods[0];
$tmp147(((frost$collections$CollectionWriter*) param2), ((frost$core$Object*) param1));
return;

}
org$frostlang$frostc$Symbol* org$frostlang$frostc$SymbolTable$merge$org$frostlang$frostc$Symbol$Q$org$frostlang$frostc$Symbol$Q$R$org$frostlang$frostc$Symbol$Q(org$frostlang$frostc$SymbolTable* param0, org$frostlang$frostc$Symbol* param1, org$frostlang$frostc$Symbol* param2) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$MethodDecl* local1 = NULL;
org$frostlang$frostc$MethodDecl* local2 = NULL;
org$frostlang$frostc$MethodDecl* local3 = NULL;
frost$core$Bit local4;
frost$core$Bit local5;
frost$core$Bit local6;
frost$collections$Array* local7 = NULL;
frost$collections$Array* local8 = NULL;
org$frostlang$frostc$MethodDecl* local9 = NULL;
frost$collections$Array* local10 = NULL;
// line 75
frost$core$Bit $tmp149 = frost$core$Bit$init$builtin_bit(param2 == NULL);
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block1; else goto block2;
block1:;
// line 76
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block2:;
// line 78
frost$core$Bit $tmp151 = frost$core$Bit$init$builtin_bit(param1 == NULL);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block3; else goto block4;
block3:;
// line 79
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block4:;
// line 81
bool $tmp153 = param1 == param2;
frost$core$Bit $tmp154 = frost$core$Bit$init$builtin_bit($tmp153);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block5; else goto block6;
block5:;
// line 82
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block6:;
// line 84
$fn157 $tmp156 = ($fn157) param2->$class->vtable[2];
frost$core$Bit $tmp158 = $tmp156(param2);
frost$core$Bit $tmp159 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp158);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block7; else goto block8;
block7:;
// line 85
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block8:;
// line 87
org$frostlang$frostc$Symbol$Kind* $tmp161 = &param1->kind;
org$frostlang$frostc$Symbol$Kind $tmp162 = *$tmp161;
frost$core$Int64 $tmp163 = $tmp162.$rawValue;
frost$core$Int64 $tmp164 = (frost$core$Int64) {5};
frost$core$Bit $tmp165 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp163, $tmp164);
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block10; else goto block11;
block10:;
// line 89
org$frostlang$frostc$Symbol$Kind* $tmp167 = &param2->kind;
org$frostlang$frostc$Symbol$Kind $tmp168 = *$tmp167;
frost$core$Int64 $tmp169 = $tmp168.$rawValue;
frost$core$Int64 $tmp170 = (frost$core$Int64) {6};
frost$core$Bit $tmp171 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp169, $tmp170);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block13; else goto block14;
block13:;
// line 91
frost$collections$Array* $tmp173 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp173);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$collections$Array* $tmp174 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
*(&local0) = $tmp173;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
// unreffing REF($57:frost.collections.Array<org.frostlang.frostc.MethodDecl>)
// line 92
frost$collections$Array* $tmp175 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp175, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) param1)));
// line 93
org$frostlang$frostc$FixedArray** $tmp176 = &((org$frostlang$frostc$Methods*) param2)->methods;
org$frostlang$frostc$FixedArray* $tmp177 = *$tmp176;
ITable* $tmp178 = ((frost$collections$Iterable*) $tmp177)->$class->itable;
while ($tmp178->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp178 = $tmp178->next;
}
$fn180 $tmp179 = $tmp178->methods[0];
frost$collections$Iterator* $tmp181 = $tmp179(((frost$collections$Iterable*) $tmp177));
goto block15;
block15:;
ITable* $tmp182 = $tmp181->$class->itable;
while ($tmp182->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp182 = $tmp182->next;
}
$fn184 $tmp183 = $tmp182->methods[0];
frost$core$Bit $tmp185 = $tmp183($tmp181);
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block17; else goto block16;
block16:;
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp187 = $tmp181->$class->itable;
while ($tmp187->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp187 = $tmp187->next;
}
$fn189 $tmp188 = $tmp187->methods[1];
frost$core$Object* $tmp190 = $tmp188($tmp181);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp190)));
org$frostlang$frostc$MethodDecl* $tmp191 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
*(&local1) = ((org$frostlang$frostc$MethodDecl*) $tmp190);
// line 94
org$frostlang$frostc$MethodDecl* $tmp192 = *(&local1);
frost$collections$Array* $tmp193 = *(&local0);
org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(param0, $tmp192, ((frost$collections$List*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q($tmp190);
// unreffing REF($94:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp194 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// unreffing m
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block15;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
// unreffing REF($83:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 96
org$frostlang$frostc$Methods* $tmp195 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp196 = *(&local0);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp195, ((frost$collections$ListView*) $tmp196));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp195)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
// unreffing REF($120:org.frostlang.frostc.Methods)
frost$collections$Array* $tmp197 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
// unreffing methods
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$Symbol*) $tmp195);
block14:;
frost$core$Int64 $tmp198 = (frost$core$Int64) {5};
frost$core$Bit $tmp199 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp169, $tmp198);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block18; else goto block19;
block18:;
// line 99
frost$core$Weak** $tmp201 = &param0->compiler;
frost$core$Weak* $tmp202 = *$tmp201;
frost$core$Object* $tmp203 = frost$core$Weak$get$R$frost$core$Weak$T($tmp202);
org$frostlang$frostc$MethodDecl* $tmp204 = org$frostlang$frostc$Compiler$getOverriddenMethod$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$MethodDecl$Q(((org$frostlang$frostc$Compiler*) $tmp203), ((org$frostlang$frostc$MethodDecl*) param2));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
org$frostlang$frostc$MethodDecl* $tmp205 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
*(&local2) = $tmp204;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
// unreffing REF($147:org.frostlang.frostc.MethodDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp203);
// unreffing REF($144:frost.core.Weak.T)
// line 100
frost$core$Weak** $tmp206 = &param0->compiler;
frost$core$Weak* $tmp207 = *$tmp206;
frost$core$Object* $tmp208 = frost$core$Weak$get$R$frost$core$Weak$T($tmp207);
org$frostlang$frostc$MethodDecl* $tmp209 = org$frostlang$frostc$Compiler$getOverriddenMethod$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$MethodDecl$Q(((org$frostlang$frostc$Compiler*) $tmp208), ((org$frostlang$frostc$MethodDecl*) param1));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
org$frostlang$frostc$MethodDecl* $tmp210 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
*(&local3) = $tmp209;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
// unreffing REF($168:org.frostlang.frostc.MethodDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp208);
// unreffing REF($165:frost.core.Weak.T)
// line 101
org$frostlang$frostc$MethodDecl* $tmp211 = *(&local2);
bool $tmp212 = $tmp211 == ((org$frostlang$frostc$MethodDecl*) param1);
frost$core$Bit $tmp213 = frost$core$Bit$init$builtin_bit($tmp212);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block22; else goto block23;
block22:;
*(&local5) = $tmp213;
goto block24;
block23:;
org$frostlang$frostc$MethodDecl* $tmp215 = *(&local3);
bool $tmp216 = $tmp215 == ((org$frostlang$frostc$MethodDecl*) param2);
frost$core$Bit $tmp217 = frost$core$Bit$init$builtin_bit($tmp216);
*(&local5) = $tmp217;
goto block24;
block24:;
frost$core$Bit $tmp218 = *(&local5);
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block25; else goto block26;
block25:;
*(&local4) = $tmp218;
goto block27;
block26:;
org$frostlang$frostc$MethodDecl* $tmp220 = *(&local2);
frost$core$Bit $tmp221 = frost$core$Bit$init$builtin_bit($tmp220 != NULL);
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block28; else goto block29;
block28:;
org$frostlang$frostc$MethodDecl* $tmp223 = *(&local2);
org$frostlang$frostc$MethodDecl* $tmp224 = *(&local3);
bool $tmp225 = $tmp223 == $tmp224;
frost$core$Bit $tmp226 = frost$core$Bit$init$builtin_bit($tmp225);
*(&local6) = $tmp226;
goto block30;
block29:;
*(&local6) = $tmp221;
goto block30;
block30:;
frost$core$Bit $tmp227 = *(&local6);
*(&local4) = $tmp227;
goto block27;
block27:;
frost$core$Bit $tmp228 = *(&local4);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block20; else goto block21;
block20:;
// line 104
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$MethodDecl* $tmp230 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
// unreffing overridden2
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp231 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
// unreffing overridden1
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
return param1;
block21:;
// line 106
frost$collections$Array* $tmp232 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp232);
*(&local7) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$collections$Array* $tmp233 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
*(&local7) = $tmp232;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
// unreffing REF($236:frost.collections.Array<org.frostlang.frostc.MethodDecl>)
// line 107
frost$collections$Array* $tmp234 = *(&local7);
frost$collections$Array$add$frost$collections$Array$T($tmp234, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) param1)));
// line 108
frost$collections$Array* $tmp235 = *(&local7);
frost$collections$Array$add$frost$collections$Array$T($tmp235, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) param2)));
// line 109
org$frostlang$frostc$Methods* $tmp236 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp237 = *(&local7);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp236, ((frost$collections$ListView*) $tmp237));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp236)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
// unreffing REF($262:org.frostlang.frostc.Methods)
frost$collections$Array* $tmp238 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
// unreffing methods
*(&local7) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$MethodDecl* $tmp239 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// unreffing overridden2
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp240 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// unreffing overridden1
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
return ((org$frostlang$frostc$Symbol*) $tmp236);
block19:;
// line 112
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block12:;
goto block9;
block11:;
frost$core$Int64 $tmp241 = (frost$core$Int64) {6};
frost$core$Bit $tmp242 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp163, $tmp241);
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block31; else goto block32;
block31:;
// line 117
org$frostlang$frostc$Symbol$Kind* $tmp244 = &param2->kind;
org$frostlang$frostc$Symbol$Kind $tmp245 = *$tmp244;
frost$core$Int64 $tmp246 = $tmp245.$rawValue;
frost$core$Int64 $tmp247 = (frost$core$Int64) {6};
frost$core$Bit $tmp248 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp246, $tmp247);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block34; else goto block35;
block34:;
// line 119
frost$collections$Array* $tmp250 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
org$frostlang$frostc$FixedArray** $tmp251 = &((org$frostlang$frostc$Methods*) param1)->methods;
org$frostlang$frostc$FixedArray* $tmp252 = *$tmp251;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp250, ((frost$collections$CollectionView*) $tmp252));
*(&local8) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
frost$collections$Array* $tmp253 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
*(&local8) = $tmp250;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
// unreffing REF($307:frost.collections.Array<org.frostlang.frostc.MethodDecl>)
// line 120
org$frostlang$frostc$FixedArray** $tmp254 = &((org$frostlang$frostc$Methods*) param2)->methods;
org$frostlang$frostc$FixedArray* $tmp255 = *$tmp254;
ITable* $tmp256 = ((frost$collections$Iterable*) $tmp255)->$class->itable;
while ($tmp256->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp256 = $tmp256->next;
}
$fn258 $tmp257 = $tmp256->methods[0];
frost$collections$Iterator* $tmp259 = $tmp257(((frost$collections$Iterable*) $tmp255));
goto block36;
block36:;
ITable* $tmp260 = $tmp259->$class->itable;
while ($tmp260->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp260 = $tmp260->next;
}
$fn262 $tmp261 = $tmp260->methods[0];
frost$core$Bit $tmp263 = $tmp261($tmp259);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block38; else goto block37;
block37:;
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp265 = $tmp259->$class->itable;
while ($tmp265->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp265 = $tmp265->next;
}
$fn267 $tmp266 = $tmp265->methods[1];
frost$core$Object* $tmp268 = $tmp266($tmp259);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp268)));
org$frostlang$frostc$MethodDecl* $tmp269 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) $tmp268);
// line 121
org$frostlang$frostc$MethodDecl* $tmp270 = *(&local9);
frost$collections$Array* $tmp271 = *(&local8);
org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(param0, $tmp270, ((frost$collections$List*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q($tmp268);
// unreffing REF($343:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp272 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
// unreffing m
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block36;
block38:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
// unreffing REF($332:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 123
org$frostlang$frostc$Methods* $tmp273 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp274 = *(&local8);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp273, ((frost$collections$ListView*) $tmp274));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp273)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
// unreffing REF($369:org.frostlang.frostc.Methods)
frost$collections$Array* $tmp275 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
// unreffing methods
*(&local8) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$Symbol*) $tmp273);
block35:;
frost$core$Int64 $tmp276 = (frost$core$Int64) {5};
frost$core$Bit $tmp277 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp246, $tmp276);
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block39; else goto block40;
block39:;
// line 126
frost$collections$Array* $tmp279 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
org$frostlang$frostc$FixedArray** $tmp280 = &((org$frostlang$frostc$Methods*) param1)->methods;
org$frostlang$frostc$FixedArray* $tmp281 = *$tmp280;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp279, ((frost$collections$CollectionView*) $tmp281));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
frost$collections$Array* $tmp282 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
*(&local10) = $tmp279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
// unreffing REF($390:frost.collections.Array<org.frostlang.frostc.MethodDecl>)
// line 127
frost$collections$Array* $tmp283 = *(&local10);
org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(param0, ((org$frostlang$frostc$MethodDecl*) param2), ((frost$collections$List*) $tmp283));
// line 128
org$frostlang$frostc$Methods* $tmp284 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp285 = *(&local10);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp284, ((frost$collections$ListView*) $tmp285));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp284)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
// unreffing REF($414:org.frostlang.frostc.Methods)
frost$collections$Array* $tmp286 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
// unreffing methods
*(&local10) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$Symbol*) $tmp284);
block40:;
// line 131
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block33:;
goto block9;
block32:;
// line 136
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block9:;
frost$core$Bit $tmp287 = frost$core$Bit$init$builtin_bit(false);
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp289 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s290, $tmp289, &$s291);
abort(); // unreachable
block41:;
abort(); // unreachable

}
org$frostlang$frostc$Symbol* org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q(org$frostlang$frostc$SymbolTable* param0, frost$core$String* param1) {

org$frostlang$frostc$Symbol* local0 = NULL;
org$frostlang$frostc$SymbolTable* local1 = NULL;
// line 142
frost$collections$HashMap** $tmp292 = &param0->merged;
frost$collections$HashMap* $tmp293 = *$tmp292;
frost$core$Object* $tmp294 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp293, ((frost$collections$Key*) param1));
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp294)));
org$frostlang$frostc$Symbol* $tmp295 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local0) = ((org$frostlang$frostc$Symbol*) $tmp294);
frost$core$Frost$unref$frost$core$Object$Q($tmp294);
// unreffing REF($5:frost.collections.HashMap.V?)
// line 143
org$frostlang$frostc$Symbol* $tmp296 = *(&local0);
frost$core$Bit $tmp297 = frost$core$Bit$init$builtin_bit($tmp296 == NULL);
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block1; else goto block2;
block1:;
// line 144
frost$collections$HashMap** $tmp299 = &param0->symbols;
frost$collections$HashMap* $tmp300 = *$tmp299;
frost$core$Object* $tmp301 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp300, ((frost$collections$Key*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp301)));
org$frostlang$frostc$Symbol* $tmp302 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
*(&local0) = ((org$frostlang$frostc$Symbol*) $tmp301);
frost$core$Frost$unref$frost$core$Object$Q($tmp301);
// unreffing REF($28:frost.collections.HashMap.V?)
// line 145
frost$collections$Array** $tmp303 = &param0->parents;
frost$collections$Array* $tmp304 = *$tmp303;
ITable* $tmp305 = ((frost$collections$Iterable*) $tmp304)->$class->itable;
while ($tmp305->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp305 = $tmp305->next;
}
$fn307 $tmp306 = $tmp305->methods[0];
frost$collections$Iterator* $tmp308 = $tmp306(((frost$collections$Iterable*) $tmp304));
goto block3;
block3:;
ITable* $tmp309 = $tmp308->$class->itable;
while ($tmp309->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp309 = $tmp309->next;
}
$fn311 $tmp310 = $tmp309->methods[0];
frost$core$Bit $tmp312 = $tmp310($tmp308);
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block5; else goto block4;
block4:;
*(&local1) = ((org$frostlang$frostc$SymbolTable*) NULL);
ITable* $tmp314 = $tmp308->$class->itable;
while ($tmp314->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp314 = $tmp314->next;
}
$fn316 $tmp315 = $tmp314->methods[1];
frost$core$Object* $tmp317 = $tmp315($tmp308);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$SymbolTable*) $tmp317)));
org$frostlang$frostc$SymbolTable* $tmp318 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local1) = ((org$frostlang$frostc$SymbolTable*) $tmp317);
// line 146
org$frostlang$frostc$Symbol* $tmp319 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp320 = *(&local1);
org$frostlang$frostc$Symbol* $tmp321 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp320, param1);
org$frostlang$frostc$Symbol* $tmp322 = org$frostlang$frostc$SymbolTable$merge$org$frostlang$frostc$Symbol$Q$org$frostlang$frostc$Symbol$Q$R$org$frostlang$frostc$Symbol$Q(param0, $tmp319, $tmp321);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
org$frostlang$frostc$Symbol* $tmp323 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local0) = $tmp322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
// unreffing REF($68:org.frostlang.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
// unreffing REF($67:org.frostlang.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q($tmp317);
// unreffing REF($56:frost.collections.Iterator.T)
org$frostlang$frostc$SymbolTable* $tmp324 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
// unreffing p
*(&local1) = ((org$frostlang$frostc$SymbolTable*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// unreffing REF($45:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 148
org$frostlang$frostc$Symbol* $tmp325 = *(&local0);
frost$core$Bit $tmp326 = frost$core$Bit$init$builtin_bit($tmp325 != NULL);
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block6; else goto block7;
block6:;
// line 149
frost$collections$HashMap** $tmp328 = &param0->merged;
frost$collections$HashMap* $tmp329 = *$tmp328;
org$frostlang$frostc$Symbol* $tmp330 = *(&local0);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp329, ((frost$collections$Key*) param1), ((frost$core$Object*) $tmp330));
goto block7;
block7:;
goto block2;
block2:;
// line 152
org$frostlang$frostc$Symbol* $tmp331 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
org$frostlang$frostc$Symbol* $tmp332 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
// unreffing result
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return $tmp331;

}
frost$core$String* org$frostlang$frostc$SymbolTable$convert$R$frost$core$String(org$frostlang$frostc$SymbolTable* param0) {

// line 157
frost$collections$Array** $tmp333 = &param0->parents;
frost$collections$Array* $tmp334 = *$tmp333;
ITable* $tmp335 = ((frost$collections$CollectionView*) $tmp334)->$class->itable;
while ($tmp335->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp335 = $tmp335->next;
}
$fn337 $tmp336 = $tmp335->methods[0];
frost$core$Int64 $tmp338 = $tmp336(((frost$collections$CollectionView*) $tmp334));
frost$core$Int64$wrapper* $tmp339;
$tmp339 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp339->value = $tmp338;
frost$core$String* $tmp340 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s341, ((frost$core$Object*) $tmp339));
frost$core$String* $tmp342 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp340, &$s343);
frost$collections$HashMap** $tmp344 = &param0->symbols;
frost$collections$HashMap* $tmp345 = *$tmp344;
frost$core$String* $tmp346 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp342, ((frost$core$Object*) $tmp345));
frost$core$String* $tmp347 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp346, &$s348);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
// unreffing REF($13:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
// unreffing REF($12:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// unreffing REF($8:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
// unreffing REF($7:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
// unreffing REF($6:frost.core.Object)
return $tmp347;

}
void org$frostlang$frostc$SymbolTable$cleanup(org$frostlang$frostc$SymbolTable* param0) {

// line 4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp349 = &param0->symbols;
frost$collections$HashMap* $tmp350 = *$tmp349;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
frost$core$Weak** $tmp351 = &param0->compiler;
frost$core$Weak* $tmp352 = *$tmp351;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$collections$HashMap** $tmp353 = &param0->merged;
frost$collections$HashMap* $tmp354 = *$tmp353;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
frost$collections$Array** $tmp355 = &param0->parents;
frost$collections$Array* $tmp356 = *$tmp355;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
return;

}






