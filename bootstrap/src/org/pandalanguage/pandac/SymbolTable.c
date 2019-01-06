#include "org/pandalanguage/pandac/SymbolTable.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Panda.h"
#include "panda/collections/Array.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/Key.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "panda/core/Equatable.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "panda/collections/ListView.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/List.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionWriter.h"


static panda$core$String $s1;
org$pandalanguage$pandac$SymbolTable$class_type org$pandalanguage$pandac$SymbolTable$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String, org$pandalanguage$pandac$SymbolTable$cleanup, org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol, org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String, org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q, org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q} };

typedef panda$core$Bit (*$fn61)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn120)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn124)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn129)(panda$collections$Iterator*);
typedef void (*$fn148)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Bit (*$fn157)(org$pandalanguage$pandac$Symbol*);
typedef panda$collections$Iterator* (*$fn180)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn184)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn189)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn258)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn262)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn267)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn307)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn311)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn316)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn337)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 36, 889716259314019160, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x70\x61\x6e\x64\x61", 17, -5109432423674253279, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x6d\x65\x72\x67\x65\x28\x73\x79\x6d\x62\x6f\x6c\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x2c\x20\x69\x6e\x68\x65\x72\x69\x74\x65\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 194, 6407275719991587696, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$SymbolTable* param0, org$pandalanguage$pandac$Compiler* param1) {

// line 5
panda$collections$HashMap* $tmp2 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$collections$HashMap** $tmp3 = &param0->symbols;
panda$collections$HashMap* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$collections$HashMap** $tmp5 = &param0->symbols;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($1:panda.collections.HashMap<panda.core.String, org.pandalanguage.pandac.Symbol>)
// line 12
panda$collections$HashMap* $tmp6 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp6);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$collections$HashMap** $tmp7 = &param0->merged;
panda$collections$HashMap* $tmp8 = *$tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$collections$HashMap** $tmp9 = &param0->merged;
*$tmp9 = $tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
// unreffing REF($16:panda.collections.HashMap<panda.core.String, org.pandalanguage.pandac.Symbol>)
// line 15
panda$collections$Array* $tmp10 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp10);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$collections$Array** $tmp11 = &param0->parents;
panda$collections$Array* $tmp12 = *$tmp11;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$collections$Array** $tmp13 = &param0->parents;
*$tmp13 = $tmp10;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
// unreffing REF($31:panda.collections.Array<org.pandalanguage.pandac.SymbolTable>)
// line 18
panda$core$Weak* $tmp14 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp14, ((panda$core$Object*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$core$Weak** $tmp15 = &param0->compiler;
panda$core$Weak* $tmp16 = *$tmp15;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
panda$core$Weak** $tmp17 = &param0->compiler;
*$tmp17 = $tmp14;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
// unreffing REF($46:panda.core.Weak<org.pandalanguage.pandac.Compiler>)
return;

}
void org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$SymbolTable* param0, org$pandalanguage$pandac$SymbolTable* param1) {

// line 5
panda$collections$HashMap* $tmp18 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp18);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$collections$HashMap** $tmp19 = &param0->symbols;
panda$collections$HashMap* $tmp20 = *$tmp19;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
panda$collections$HashMap** $tmp21 = &param0->symbols;
*$tmp21 = $tmp18;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
// unreffing REF($1:panda.collections.HashMap<panda.core.String, org.pandalanguage.pandac.Symbol>)
// line 12
panda$collections$HashMap* $tmp22 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp22);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
panda$collections$HashMap** $tmp23 = &param0->merged;
panda$collections$HashMap* $tmp24 = *$tmp23;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
panda$collections$HashMap** $tmp25 = &param0->merged;
*$tmp25 = $tmp22;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
// unreffing REF($16:panda.collections.HashMap<panda.core.String, org.pandalanguage.pandac.Symbol>)
// line 15
panda$collections$Array* $tmp26 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp26);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
panda$collections$Array** $tmp27 = &param0->parents;
panda$collections$Array* $tmp28 = *$tmp27;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
panda$collections$Array** $tmp29 = &param0->parents;
*$tmp29 = $tmp26;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
// unreffing REF($31:panda.collections.Array<org.pandalanguage.pandac.SymbolTable>)
// line 22
panda$core$Weak** $tmp30 = &param1->compiler;
panda$core$Weak* $tmp31 = *$tmp30;
panda$core$Object* $tmp32 = panda$core$Weak$get$R$panda$core$Weak$T($tmp31);
panda$core$Weak* $tmp33 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp33, ((panda$core$Object*) ((org$pandalanguage$pandac$Compiler*) $tmp32)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
panda$core$Weak** $tmp34 = &param0->compiler;
panda$core$Weak* $tmp35 = *$tmp34;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
panda$core$Weak** $tmp36 = &param0->compiler;
*$tmp36 = $tmp33;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
// unreffing REF($51:panda.core.Weak<org.pandalanguage.pandac.Compiler>)
panda$core$Panda$unref$panda$core$Object$Q($tmp32);
// unreffing REF($49:panda.core.Weak.T)
// line 23
panda$collections$Array** $tmp37 = &param0->parents;
panda$collections$Array* $tmp38 = *$tmp37;
panda$collections$Array$add$panda$collections$Array$T($tmp38, ((panda$core$Object*) param1));
return;

}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(org$pandalanguage$pandac$SymbolTable* param0, org$pandalanguage$pandac$Symbol* param1) {

// line 27
panda$core$String** $tmp39 = &param1->name;
panda$core$String* $tmp40 = *$tmp39;
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(param0, param1, $tmp40);
return;

}
void org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(org$pandalanguage$pandac$SymbolTable* param0, org$pandalanguage$pandac$Symbol* param1, panda$core$String* param2) {

org$pandalanguage$pandac$Symbol* local0 = NULL;
panda$collections$Array* local1 = NULL;
panda$collections$Array* local2 = NULL;
// line 31
panda$collections$HashMap** $tmp41 = &param0->merged;
panda$collections$HashMap* $tmp42 = *$tmp41;
panda$collections$HashMap$remove$panda$collections$HashMap$K($tmp42, ((panda$collections$Key*) param2));
// line 32
panda$collections$HashMap** $tmp43 = &param0->symbols;
panda$collections$HashMap* $tmp44 = *$tmp43;
panda$core$Object* $tmp45 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp44, ((panda$collections$Key*) param2));
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp45)));
org$pandalanguage$pandac$Symbol* $tmp46 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
*(&local0) = ((org$pandalanguage$pandac$Symbol*) $tmp45);
panda$core$Panda$unref$panda$core$Object$Q($tmp45);
// unreffing REF($11:panda.collections.HashMap.V?)
// line 33
org$pandalanguage$pandac$Symbol* $tmp47 = *(&local0);
panda$core$Bit $tmp48 = panda$core$Bit$init$builtin_bit($tmp47 == NULL);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block1; else goto block2;
block1:;
// line 34
panda$collections$HashMap** $tmp50 = &param0->symbols;
panda$collections$HashMap* $tmp51 = *$tmp50;
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp51, ((panda$collections$Key*) param2), ((panda$core$Object*) param1));
// line 35
org$pandalanguage$pandac$Symbol* $tmp52 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
// unreffing old
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
return;
block2:;
// line 37
org$pandalanguage$pandac$Symbol$Kind* $tmp53 = &param1->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp54 = *$tmp53;
org$pandalanguage$pandac$Symbol$Kind$wrapper* $tmp55;
$tmp55 = (org$pandalanguage$pandac$Symbol$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$Kind$wrapperclass);
$tmp55->value = $tmp54;
panda$core$Int64 $tmp56 = (panda$core$Int64) {4};
org$pandalanguage$pandac$Symbol$Kind $tmp57 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp56);
org$pandalanguage$pandac$Symbol$Kind$wrapper* $tmp58;
$tmp58 = (org$pandalanguage$pandac$Symbol$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$Kind$wrapperclass);
$tmp58->value = $tmp57;
ITable* $tmp59 = ((panda$core$Equatable*) $tmp55)->$class->itable;
while ($tmp59->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp59 = $tmp59->next;
}
$fn61 $tmp60 = $tmp59->methods[0];
panda$core$Bit $tmp62 = $tmp60(((panda$core$Equatable*) $tmp55), ((panda$core$Equatable*) $tmp58));
bool $tmp63 = $tmp62.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp58)));
// unreffing REF($50:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp55)));
// unreffing REF($46:panda.core.Equatable<org.pandalanguage.pandac.Symbol.Kind>)
if ($tmp63) goto block3; else goto block4;
block3:;
// line 38
org$pandalanguage$pandac$Symbol* $tmp64 = *(&local0);
org$pandalanguage$pandac$Symbol$Kind* $tmp65 = &$tmp64->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp66 = *$tmp65;
panda$core$Int64 $tmp67 = $tmp66.$rawValue;
panda$core$Int64 $tmp68 = (panda$core$Int64) {4};
panda$core$Bit $tmp69 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp67, $tmp68);
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block6; else goto block7;
block6:;
// line 40
panda$collections$Array* $tmp71 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp71);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
panda$collections$Array* $tmp72 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
*(&local1) = $tmp71;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
// unreffing REF($72:panda.collections.Array<org.pandalanguage.pandac.MethodDecl>)
// line 41
panda$collections$Array* $tmp73 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp73, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) param1)));
// line 42
panda$collections$Array* $tmp74 = *(&local1);
org$pandalanguage$pandac$Symbol* $tmp75 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp74, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp75)));
// line 43
panda$collections$HashMap** $tmp76 = &param0->symbols;
panda$collections$HashMap* $tmp77 = *$tmp76;
org$pandalanguage$pandac$Methods* $tmp78 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
panda$collections$Array* $tmp79 = *(&local1);
org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp78, ((panda$collections$ListView*) $tmp79));
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp77, ((panda$collections$Key*) param2), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp78)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp78));
// unreffing REF($103:org.pandalanguage.pandac.Methods)
// line 44
panda$collections$Array* $tmp80 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
// unreffing methods
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Symbol* $tmp81 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
// unreffing old
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
return;
block7:;
panda$core$Int64 $tmp82 = (panda$core$Int64) {5};
panda$core$Bit $tmp83 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp67, $tmp82);
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block8; else goto block5;
block8:;
// line 47
panda$collections$Array* $tmp85 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp85);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
panda$collections$Array* $tmp86 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
*(&local2) = $tmp85;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
// unreffing REF($130:panda.collections.Array<org.pandalanguage.pandac.MethodDecl>)
// line 48
panda$collections$Array* $tmp87 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp87, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) param1)));
// line 49
panda$collections$Array* $tmp88 = *(&local2);
org$pandalanguage$pandac$Symbol* $tmp89 = *(&local0);
panda$collections$ImmutableArray** $tmp90 = &((org$pandalanguage$pandac$Methods*) $tmp89)->methods;
panda$collections$ImmutableArray* $tmp91 = *$tmp90;
panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp88, ((panda$collections$CollectionView*) $tmp91));
// line 50
panda$collections$HashMap** $tmp92 = &param0->symbols;
panda$collections$HashMap* $tmp93 = *$tmp92;
org$pandalanguage$pandac$Methods* $tmp94 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
panda$collections$Array* $tmp95 = *(&local2);
org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp94, ((panda$collections$ListView*) $tmp95));
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp93, ((panda$collections$Key*) param2), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp94)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
// unreffing REF($164:org.pandalanguage.pandac.Methods)
// line 51
panda$collections$Array* $tmp96 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
// unreffing methods
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Symbol* $tmp97 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
// unreffing old
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
return;
block5:;
goto block4;
block4:;
// line 55
panda$core$Weak** $tmp98 = &param0->compiler;
panda$core$Weak* $tmp99 = *$tmp98;
panda$core$Object* $tmp100 = panda$core$Weak$get$R$panda$core$Weak$T($tmp99);
org$pandalanguage$pandac$Position* $tmp101 = &param1->position;
org$pandalanguage$pandac$Position $tmp102 = *$tmp101;
panda$core$String* $tmp103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s104, param2);
panda$core$String* $tmp105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp103, &$s106);
org$pandalanguage$pandac$Symbol* $tmp107 = *(&local0);
org$pandalanguage$pandac$Position* $tmp108 = &$tmp107->position;
org$pandalanguage$pandac$Position $tmp109 = *$tmp108;
org$pandalanguage$pandac$Position$wrapper* $tmp110;
$tmp110 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
$tmp110->value = $tmp109;
panda$core$String* $tmp111 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp105, ((panda$core$Object*) $tmp110));
panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp111, &$s113);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp100), $tmp102, $tmp112);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
// unreffing REF($203:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
// unreffing REF($202:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
// unreffing REF($201:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
// unreffing REF($196:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
// unreffing REF($195:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp100);
// unreffing REF($191:panda.core.Weak.T)
org$pandalanguage$pandac$Symbol* $tmp114 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
// unreffing old
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
return;

}
void org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$SymbolTable* param0, org$pandalanguage$pandac$MethodDecl* param1, panda$collections$List* param2) {

org$pandalanguage$pandac$MethodDecl* local0 = NULL;
org$pandalanguage$pandac$MethodDecl* local1 = NULL;
// line 61
panda$core$Bit $tmp115 = org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(param1);
panda$core$Bit $tmp116 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp115);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block1; else goto block2;
block1:;
// line 62
return;
block2:;
// line 64
ITable* $tmp118 = ((panda$collections$Iterable*) param2)->$class->itable;
while ($tmp118->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[0];
panda$collections$Iterator* $tmp121 = $tmp119(((panda$collections$Iterable*) param2));
goto block3;
block3:;
ITable* $tmp122 = $tmp121->$class->itable;
while ($tmp122->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp122 = $tmp122->next;
}
$fn124 $tmp123 = $tmp122->methods[0];
panda$core$Bit $tmp125 = $tmp123($tmp121);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block5; else goto block4;
block4:;
*(&local0) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp127 = $tmp121->$class->itable;
while ($tmp127->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp127 = $tmp127->next;
}
$fn129 $tmp128 = $tmp127->methods[1];
panda$core$Object* $tmp130 = $tmp128($tmp121);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp130)));
org$pandalanguage$pandac$MethodDecl* $tmp131 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
*(&local0) = ((org$pandalanguage$pandac$MethodDecl*) $tmp130);
// line 65
panda$core$Weak** $tmp132 = &param0->compiler;
panda$core$Weak* $tmp133 = *$tmp132;
panda$core$Object* $tmp134 = panda$core$Weak$get$R$panda$core$Weak$T($tmp133);
org$pandalanguage$pandac$MethodDecl* $tmp135 = *(&local0);
org$pandalanguage$pandac$MethodDecl* $tmp136 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp134), $tmp135);
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
org$pandalanguage$pandac$MethodDecl* $tmp137 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
*(&local1) = $tmp136;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
// unreffing REF($37:org.pandalanguage.pandac.MethodDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp134);
// unreffing REF($34:panda.core.Weak.T)
// line 66
org$pandalanguage$pandac$MethodDecl* $tmp138 = *(&local1);
bool $tmp139 = $tmp138 == param1;
panda$core$Bit $tmp140 = panda$core$Bit$init$builtin_bit($tmp139);
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block6; else goto block7;
block6:;
// line 67
org$pandalanguage$pandac$MethodDecl* $tmp142 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
// unreffing overridden
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp130);
// unreffing REF($22:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp143 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp143));
// unreffing test
*(&local0) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
// unreffing REF($11:panda.collections.Iterator<panda.collections.Iterable.T>)
return;
block7:;
org$pandalanguage$pandac$MethodDecl* $tmp144 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
// unreffing overridden
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp130);
// unreffing REF($22:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp145 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
// unreffing test
*(&local0) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
// unreffing REF($11:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 70
ITable* $tmp146 = ((panda$collections$CollectionWriter*) param2)->$class->itable;
while ($tmp146->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
    $tmp146 = $tmp146->next;
}
$fn148 $tmp147 = $tmp146->methods[0];
$tmp147(((panda$collections$CollectionWriter*) param2), ((panda$core$Object*) param1));
return;

}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* param0, org$pandalanguage$pandac$Symbol* param1, org$pandalanguage$pandac$Symbol* param2) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$MethodDecl* local1 = NULL;
org$pandalanguage$pandac$MethodDecl* local2 = NULL;
org$pandalanguage$pandac$MethodDecl* local3 = NULL;
panda$core$Bit local4;
panda$core$Bit local5;
panda$core$Bit local6;
panda$collections$Array* local7 = NULL;
panda$collections$Array* local8 = NULL;
org$pandalanguage$pandac$MethodDecl* local9 = NULL;
panda$collections$Array* local10 = NULL;
// line 75
panda$core$Bit $tmp149 = panda$core$Bit$init$builtin_bit(param2 == NULL);
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block1; else goto block2;
block1:;
// line 76
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
return param1;
block2:;
// line 78
panda$core$Bit $tmp151 = panda$core$Bit$init$builtin_bit(param1 == NULL);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block3; else goto block4;
block3:;
// line 79
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;
block4:;
// line 81
bool $tmp153 = param1 == param2;
panda$core$Bit $tmp154 = panda$core$Bit$init$builtin_bit($tmp153);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block5; else goto block6;
block5:;
// line 82
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
return param1;
block6:;
// line 84
$fn157 $tmp156 = ($fn157) param2->$class->vtable[2];
panda$core$Bit $tmp158 = $tmp156(param2);
panda$core$Bit $tmp159 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp158);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block7; else goto block8;
block7:;
// line 85
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
return param1;
block8:;
// line 87
org$pandalanguage$pandac$Symbol$Kind* $tmp161 = &param1->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp162 = *$tmp161;
panda$core$Int64 $tmp163 = $tmp162.$rawValue;
panda$core$Int64 $tmp164 = (panda$core$Int64) {4};
panda$core$Bit $tmp165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp163, $tmp164);
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block10; else goto block11;
block10:;
// line 89
org$pandalanguage$pandac$Symbol$Kind* $tmp167 = &param2->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp168 = *$tmp167;
panda$core$Int64 $tmp169 = $tmp168.$rawValue;
panda$core$Int64 $tmp170 = (panda$core$Int64) {5};
panda$core$Bit $tmp171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp169, $tmp170);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block13; else goto block14;
block13:;
// line 91
panda$collections$Array* $tmp173 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp173);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
panda$collections$Array* $tmp174 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
*(&local0) = $tmp173;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
// unreffing REF($57:panda.collections.Array<org.pandalanguage.pandac.MethodDecl>)
// line 92
panda$collections$Array* $tmp175 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp175, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) param1)));
// line 93
panda$collections$ImmutableArray** $tmp176 = &((org$pandalanguage$pandac$Methods*) param2)->methods;
panda$collections$ImmutableArray* $tmp177 = *$tmp176;
ITable* $tmp178 = ((panda$collections$Iterable*) $tmp177)->$class->itable;
while ($tmp178->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp178 = $tmp178->next;
}
$fn180 $tmp179 = $tmp178->methods[0];
panda$collections$Iterator* $tmp181 = $tmp179(((panda$collections$Iterable*) $tmp177));
goto block15;
block15:;
ITable* $tmp182 = $tmp181->$class->itable;
while ($tmp182->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp182 = $tmp182->next;
}
$fn184 $tmp183 = $tmp182->methods[0];
panda$core$Bit $tmp185 = $tmp183($tmp181);
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block17; else goto block16;
block16:;
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp187 = $tmp181->$class->itable;
while ($tmp187->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp187 = $tmp187->next;
}
$fn189 $tmp188 = $tmp187->methods[1];
panda$core$Object* $tmp190 = $tmp188($tmp181);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp190)));
org$pandalanguage$pandac$MethodDecl* $tmp191 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) $tmp190);
// line 94
org$pandalanguage$pandac$MethodDecl* $tmp192 = *(&local1);
panda$collections$Array* $tmp193 = *(&local0);
org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(param0, $tmp192, ((panda$collections$List*) $tmp193));
panda$core$Panda$unref$panda$core$Object$Q($tmp190);
// unreffing REF($94:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp194 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block15;
block17:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
// unreffing REF($83:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 96
org$pandalanguage$pandac$Methods* $tmp195 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
panda$collections$Array* $tmp196 = *(&local0);
org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp195, ((panda$collections$ListView*) $tmp196));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp195)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
// unreffing REF($120:org.pandalanguage.pandac.Methods)
panda$collections$Array* $tmp197 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
// unreffing methods
*(&local0) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$Symbol*) $tmp195);
block14:;
panda$core$Int64 $tmp198 = (panda$core$Int64) {4};
panda$core$Bit $tmp199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp169, $tmp198);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block18; else goto block19;
block18:;
// line 99
panda$core$Weak** $tmp201 = &param0->compiler;
panda$core$Weak* $tmp202 = *$tmp201;
panda$core$Object* $tmp203 = panda$core$Weak$get$R$panda$core$Weak$T($tmp202);
org$pandalanguage$pandac$MethodDecl* $tmp204 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp203), ((org$pandalanguage$pandac$MethodDecl*) param2));
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
org$pandalanguage$pandac$MethodDecl* $tmp205 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
*(&local2) = $tmp204;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
// unreffing REF($147:org.pandalanguage.pandac.MethodDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp203);
// unreffing REF($144:panda.core.Weak.T)
// line 100
panda$core$Weak** $tmp206 = &param0->compiler;
panda$core$Weak* $tmp207 = *$tmp206;
panda$core$Object* $tmp208 = panda$core$Weak$get$R$panda$core$Weak$T($tmp207);
org$pandalanguage$pandac$MethodDecl* $tmp209 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp208), ((org$pandalanguage$pandac$MethodDecl*) param1));
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp209));
org$pandalanguage$pandac$MethodDecl* $tmp210 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
*(&local3) = $tmp209;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp209));
// unreffing REF($168:org.pandalanguage.pandac.MethodDecl?)
panda$core$Panda$unref$panda$core$Object$Q($tmp208);
// unreffing REF($165:panda.core.Weak.T)
// line 101
org$pandalanguage$pandac$MethodDecl* $tmp211 = *(&local2);
bool $tmp212 = $tmp211 == ((org$pandalanguage$pandac$MethodDecl*) param1);
panda$core$Bit $tmp213 = panda$core$Bit$init$builtin_bit($tmp212);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block22; else goto block23;
block22:;
*(&local5) = $tmp213;
goto block24;
block23:;
org$pandalanguage$pandac$MethodDecl* $tmp215 = *(&local3);
bool $tmp216 = $tmp215 == ((org$pandalanguage$pandac$MethodDecl*) param2);
panda$core$Bit $tmp217 = panda$core$Bit$init$builtin_bit($tmp216);
*(&local5) = $tmp217;
goto block24;
block24:;
panda$core$Bit $tmp218 = *(&local5);
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block25; else goto block26;
block25:;
*(&local4) = $tmp218;
goto block27;
block26:;
org$pandalanguage$pandac$MethodDecl* $tmp220 = *(&local2);
panda$core$Bit $tmp221 = panda$core$Bit$init$builtin_bit($tmp220 != NULL);
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$MethodDecl* $tmp223 = *(&local2);
org$pandalanguage$pandac$MethodDecl* $tmp224 = *(&local3);
bool $tmp225 = $tmp223 == $tmp224;
panda$core$Bit $tmp226 = panda$core$Bit$init$builtin_bit($tmp225);
*(&local6) = $tmp226;
goto block30;
block29:;
*(&local6) = $tmp221;
goto block30;
block30:;
panda$core$Bit $tmp227 = *(&local6);
*(&local4) = $tmp227;
goto block27;
block27:;
panda$core$Bit $tmp228 = *(&local4);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block20; else goto block21;
block20:;
// line 104
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$MethodDecl* $tmp230 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp230));
// unreffing overridden2
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp231 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
// unreffing overridden1
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
return param1;
block21:;
// line 106
panda$collections$Array* $tmp232 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp232);
*(&local7) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
panda$collections$Array* $tmp233 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
*(&local7) = $tmp232;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
// unreffing REF($236:panda.collections.Array<org.pandalanguage.pandac.MethodDecl>)
// line 107
panda$collections$Array* $tmp234 = *(&local7);
panda$collections$Array$add$panda$collections$Array$T($tmp234, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) param1)));
// line 108
panda$collections$Array* $tmp235 = *(&local7);
panda$collections$Array$add$panda$collections$Array$T($tmp235, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) param2)));
// line 109
org$pandalanguage$pandac$Methods* $tmp236 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
panda$collections$Array* $tmp237 = *(&local7);
org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp236, ((panda$collections$ListView*) $tmp237));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp236)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
// unreffing REF($262:org.pandalanguage.pandac.Methods)
panda$collections$Array* $tmp238 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
// unreffing methods
*(&local7) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp239 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
// unreffing overridden2
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp240 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
// unreffing overridden1
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
return ((org$pandalanguage$pandac$Symbol*) $tmp236);
block19:;
// line 112
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
return param1;
block12:;
goto block9;
block11:;
panda$core$Int64 $tmp241 = (panda$core$Int64) {5};
panda$core$Bit $tmp242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp163, $tmp241);
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block31; else goto block32;
block31:;
// line 117
org$pandalanguage$pandac$Symbol$Kind* $tmp244 = &param2->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp245 = *$tmp244;
panda$core$Int64 $tmp246 = $tmp245.$rawValue;
panda$core$Int64 $tmp247 = (panda$core$Int64) {5};
panda$core$Bit $tmp248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp246, $tmp247);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block34; else goto block35;
block34:;
// line 119
panda$collections$Array* $tmp250 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$ImmutableArray** $tmp251 = &((org$pandalanguage$pandac$Methods*) param1)->methods;
panda$collections$ImmutableArray* $tmp252 = *$tmp251;
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp250, ((panda$collections$CollectionView*) $tmp252));
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
panda$collections$Array* $tmp253 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
*(&local8) = $tmp250;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
// unreffing REF($307:panda.collections.Array<org.pandalanguage.pandac.MethodDecl>)
// line 120
panda$collections$ImmutableArray** $tmp254 = &((org$pandalanguage$pandac$Methods*) param2)->methods;
panda$collections$ImmutableArray* $tmp255 = *$tmp254;
ITable* $tmp256 = ((panda$collections$Iterable*) $tmp255)->$class->itable;
while ($tmp256->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp256 = $tmp256->next;
}
$fn258 $tmp257 = $tmp256->methods[0];
panda$collections$Iterator* $tmp259 = $tmp257(((panda$collections$Iterable*) $tmp255));
goto block36;
block36:;
ITable* $tmp260 = $tmp259->$class->itable;
while ($tmp260->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp260 = $tmp260->next;
}
$fn262 $tmp261 = $tmp260->methods[0];
panda$core$Bit $tmp263 = $tmp261($tmp259);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block38; else goto block37;
block37:;
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp265 = $tmp259->$class->itable;
while ($tmp265->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp265 = $tmp265->next;
}
$fn267 $tmp266 = $tmp265->methods[1];
panda$core$Object* $tmp268 = $tmp266($tmp259);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp268)));
org$pandalanguage$pandac$MethodDecl* $tmp269 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) $tmp268);
// line 121
org$pandalanguage$pandac$MethodDecl* $tmp270 = *(&local9);
panda$collections$Array* $tmp271 = *(&local8);
org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(param0, $tmp270, ((panda$collections$List*) $tmp271));
panda$core$Panda$unref$panda$core$Object$Q($tmp268);
// unreffing REF($343:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp272 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp272));
// unreffing m
*(&local9) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block36;
block38:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp259));
// unreffing REF($332:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 123
org$pandalanguage$pandac$Methods* $tmp273 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
panda$collections$Array* $tmp274 = *(&local8);
org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp273, ((panda$collections$ListView*) $tmp274));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp273)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
// unreffing REF($369:org.pandalanguage.pandac.Methods)
panda$collections$Array* $tmp275 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
// unreffing methods
*(&local8) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$Symbol*) $tmp273);
block35:;
panda$core$Int64 $tmp276 = (panda$core$Int64) {4};
panda$core$Bit $tmp277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp246, $tmp276);
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block39; else goto block40;
block39:;
// line 126
panda$collections$Array* $tmp279 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$ImmutableArray** $tmp280 = &((org$pandalanguage$pandac$Methods*) param1)->methods;
panda$collections$ImmutableArray* $tmp281 = *$tmp280;
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp279, ((panda$collections$CollectionView*) $tmp281));
*(&local10) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
panda$collections$Array* $tmp282 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp282));
*(&local10) = $tmp279;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
// unreffing REF($390:panda.collections.Array<org.pandalanguage.pandac.MethodDecl>)
// line 127
panda$collections$Array* $tmp283 = *(&local10);
org$pandalanguage$pandac$SymbolTable$addIfNotOverridden$org$pandalanguage$pandac$MethodDecl$panda$collections$List$LTorg$pandalanguage$pandac$MethodDecl$GT(param0, ((org$pandalanguage$pandac$MethodDecl*) param2), ((panda$collections$List*) $tmp283));
// line 128
org$pandalanguage$pandac$Methods* $tmp284 = (org$pandalanguage$pandac$Methods*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Methods$class);
panda$collections$Array* $tmp285 = *(&local10);
org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT($tmp284, ((panda$collections$ListView*) $tmp285));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp284)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
// unreffing REF($414:org.pandalanguage.pandac.Methods)
panda$collections$Array* $tmp286 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp286));
// unreffing methods
*(&local10) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$Symbol*) $tmp284);
block40:;
// line 131
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
return param1;
block33:;
goto block9;
block32:;
// line 136
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
return param1;
block9:;
panda$core$Bit $tmp287 = panda$core$Bit$init$builtin_bit(false);
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block41; else goto block42;
block42:;
panda$core$Int64 $tmp289 = (panda$core$Int64) {74};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s290, $tmp289, &$s291);
abort(); // unreachable
block41:;
abort(); // unreachable

}
org$pandalanguage$pandac$Symbol* org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(org$pandalanguage$pandac$SymbolTable* param0, panda$core$String* param1) {

org$pandalanguage$pandac$Symbol* local0 = NULL;
org$pandalanguage$pandac$SymbolTable* local1 = NULL;
// line 142
panda$collections$HashMap** $tmp292 = &param0->merged;
panda$collections$HashMap* $tmp293 = *$tmp292;
panda$core$Object* $tmp294 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp293, ((panda$collections$Key*) param1));
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp294)));
org$pandalanguage$pandac$Symbol* $tmp295 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
*(&local0) = ((org$pandalanguage$pandac$Symbol*) $tmp294);
panda$core$Panda$unref$panda$core$Object$Q($tmp294);
// unreffing REF($5:panda.collections.HashMap.V?)
// line 143
org$pandalanguage$pandac$Symbol* $tmp296 = *(&local0);
panda$core$Bit $tmp297 = panda$core$Bit$init$builtin_bit($tmp296 == NULL);
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block1; else goto block2;
block1:;
// line 144
panda$collections$HashMap** $tmp299 = &param0->symbols;
panda$collections$HashMap* $tmp300 = *$tmp299;
panda$core$Object* $tmp301 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q($tmp300, ((panda$collections$Key*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) $tmp301)));
org$pandalanguage$pandac$Symbol* $tmp302 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
*(&local0) = ((org$pandalanguage$pandac$Symbol*) $tmp301);
panda$core$Panda$unref$panda$core$Object$Q($tmp301);
// unreffing REF($28:panda.collections.HashMap.V?)
// line 145
panda$collections$Array** $tmp303 = &param0->parents;
panda$collections$Array* $tmp304 = *$tmp303;
ITable* $tmp305 = ((panda$collections$Iterable*) $tmp304)->$class->itable;
while ($tmp305->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp305 = $tmp305->next;
}
$fn307 $tmp306 = $tmp305->methods[0];
panda$collections$Iterator* $tmp308 = $tmp306(((panda$collections$Iterable*) $tmp304));
goto block3;
block3:;
ITable* $tmp309 = $tmp308->$class->itable;
while ($tmp309->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp309 = $tmp309->next;
}
$fn311 $tmp310 = $tmp309->methods[0];
panda$core$Bit $tmp312 = $tmp310($tmp308);
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block5; else goto block4;
block4:;
*(&local1) = ((org$pandalanguage$pandac$SymbolTable*) NULL);
ITable* $tmp314 = $tmp308->$class->itable;
while ($tmp314->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp314 = $tmp314->next;
}
$fn316 $tmp315 = $tmp314->methods[1];
panda$core$Object* $tmp317 = $tmp315($tmp308);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$SymbolTable*) $tmp317)));
org$pandalanguage$pandac$SymbolTable* $tmp318 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
*(&local1) = ((org$pandalanguage$pandac$SymbolTable*) $tmp317);
// line 146
org$pandalanguage$pandac$Symbol* $tmp319 = *(&local0);
org$pandalanguage$pandac$SymbolTable* $tmp320 = *(&local1);
org$pandalanguage$pandac$Symbol* $tmp321 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp320, param1);
org$pandalanguage$pandac$Symbol* $tmp322 = org$pandalanguage$pandac$SymbolTable$merge$org$pandalanguage$pandac$Symbol$Q$org$pandalanguage$pandac$Symbol$Q$R$org$pandalanguage$pandac$Symbol$Q(param0, $tmp319, $tmp321);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
org$pandalanguage$pandac$Symbol* $tmp323 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp323));
*(&local0) = $tmp322;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
// unreffing REF($68:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp321));
// unreffing REF($67:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q($tmp317);
// unreffing REF($56:panda.collections.Iterator.T)
org$pandalanguage$pandac$SymbolTable* $tmp324 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp324));
// unreffing p
*(&local1) = ((org$pandalanguage$pandac$SymbolTable*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp308));
// unreffing REF($45:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 148
org$pandalanguage$pandac$Symbol* $tmp325 = *(&local0);
panda$core$Bit $tmp326 = panda$core$Bit$init$builtin_bit($tmp325 != NULL);
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block6; else goto block7;
block6:;
// line 149
panda$collections$HashMap** $tmp328 = &param0->merged;
panda$collections$HashMap* $tmp329 = *$tmp328;
org$pandalanguage$pandac$Symbol* $tmp330 = *(&local0);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp329, ((panda$collections$Key*) param1), ((panda$core$Object*) $tmp330));
goto block7;
block7:;
goto block2;
block2:;
// line 152
org$pandalanguage$pandac$Symbol* $tmp331 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
org$pandalanguage$pandac$Symbol* $tmp332 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp332));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$Symbol*) NULL);
return $tmp331;

}
panda$core$String* org$pandalanguage$pandac$SymbolTable$convert$R$panda$core$String(org$pandalanguage$pandac$SymbolTable* param0) {

// line 157
panda$collections$Array** $tmp333 = &param0->parents;
panda$collections$Array* $tmp334 = *$tmp333;
ITable* $tmp335 = ((panda$collections$CollectionView*) $tmp334)->$class->itable;
while ($tmp335->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp335 = $tmp335->next;
}
$fn337 $tmp336 = $tmp335->methods[0];
panda$core$Int64 $tmp338 = $tmp336(((panda$collections$CollectionView*) $tmp334));
panda$core$Int64$wrapper* $tmp339;
$tmp339 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp339->value = $tmp338;
panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s341, ((panda$core$Object*) $tmp339));
panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp340, &$s343);
panda$collections$HashMap** $tmp344 = &param0->symbols;
panda$collections$HashMap* $tmp345 = *$tmp344;
panda$core$String* $tmp346 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp342, ((panda$core$Object*) $tmp345));
panda$core$String* $tmp347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp346, &$s348);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp347));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp347));
// unreffing REF($13:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
// unreffing REF($12:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
// unreffing REF($8:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
// unreffing REF($7:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
// unreffing REF($6:panda.core.Object)
return $tmp347;

}
void org$pandalanguage$pandac$SymbolTable$cleanup(org$pandalanguage$pandac$SymbolTable* param0) {

// line 4
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$collections$HashMap** $tmp349 = &param0->symbols;
panda$collections$HashMap* $tmp350 = *$tmp349;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp350));
panda$core$Weak** $tmp351 = &param0->compiler;
panda$core$Weak* $tmp352 = *$tmp351;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
panda$collections$HashMap** $tmp353 = &param0->merged;
panda$collections$HashMap* $tmp354 = *$tmp353;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp354));
panda$collections$Array** $tmp355 = &param0->parents;
panda$collections$Array* $tmp356 = *$tmp355;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp356));
return;

}






