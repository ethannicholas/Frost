#include "org/frostlang/frostc/SymbolTable.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/collections/HashMap.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "frost/core/Weak.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/collections/Key.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Methods.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/collections/List.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/Annotations.h"
#include "frost/collections/CollectionWriter.h"


static frost$core$String $s1;
org$frostlang$frostc$SymbolTable$class_type org$frostlang$frostc$SymbolTable$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$SymbolTable$get_asString$R$frost$core$String, org$frostlang$frostc$SymbolTable$cleanup, org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol, org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String, org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT, org$frostlang$frostc$SymbolTable$merge$org$frostlang$frostc$Symbol$Q$org$frostlang$frostc$Symbol$Q$R$org$frostlang$frostc$Symbol$Q, org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q} };

typedef frost$core$Bit (*$fn69)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn132)(frost$core$Object*);
typedef frost$core$Bit (*$fn148)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn156)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn160)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn165)(frost$collections$Iterator*);
typedef void (*$fn212)(frost$collections$CollectionWriter*, frost$core$Object*);
typedef frost$core$Bit (*$fn221)(org$frostlang$frostc$Symbol*);
typedef frost$collections$Iterator* (*$fn252)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn256)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn261)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn369)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn373)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn378)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn416)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn420)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn425)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn446)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn450)(frost$core$Object*);
typedef frost$core$String* (*$fn459)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 32, 8199553873176202496, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -4567382734304966013, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, -294577661570171599, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, -2209595055148192426, NULL };
static frost$core$String $s455 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -4986810529602041312, NULL };
static frost$core$String $s463 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };

void org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$Compiler(org$frostlang$frostc$SymbolTable* param0, org$frostlang$frostc$Compiler* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:5
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:12
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:15
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:18
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

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:5
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:12
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:15
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:22
frost$core$Weak** $tmp30 = &param1->compiler;
frost$core$Weak* $tmp31 = *$tmp30;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from SymbolTable.frost:22:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp32 = &$tmp31->_valid;
frost$core$Bit $tmp33 = *$tmp32;
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block3; else goto block4;
block4:;
frost$core$Int $tmp35 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s36, $tmp35);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp37 = &$tmp31->value;
frost$core$Object* $tmp38 = *$tmp37;
frost$core$Frost$ref$frost$core$Object$Q($tmp38);
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp39 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp39, ((frost$core$Object*) ((org$frostlang$frostc$Compiler*) $tmp38)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$Weak** $tmp40 = &param0->compiler;
frost$core$Weak* $tmp41 = *$tmp40;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$Weak** $tmp42 = &param0->compiler;
*$tmp42 = $tmp39;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$Frost$unref$frost$core$Object$Q($tmp38);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:23
frost$collections$Array** $tmp43 = &param0->parents;
frost$collections$Array* $tmp44 = *$tmp43;
frost$collections$Array$add$frost$collections$Array$T($tmp44, ((frost$core$Object*) param1));
return;

}
void org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol(org$frostlang$frostc$SymbolTable* param0, org$frostlang$frostc$Symbol* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp45 = &param1->name;
frost$core$String* $tmp46 = *$tmp45;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String(param0, param1, $tmp46);
return;

}
void org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String(org$frostlang$frostc$SymbolTable* param0, org$frostlang$frostc$Symbol* param1, frost$core$String* param2) {

org$frostlang$frostc$Symbol* local0 = NULL;
org$frostlang$frostc$Symbol$Kind local1;
org$frostlang$frostc$Symbol$Kind local2;
frost$collections$Array* local3 = NULL;
frost$collections$Array* local4 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:31
frost$collections$HashMap** $tmp47 = &param0->merged;
frost$collections$HashMap* $tmp48 = *$tmp47;
frost$collections$HashMap$remove$frost$collections$HashMap$K($tmp48, ((frost$collections$Key*) param2));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:32
frost$collections$HashMap** $tmp49 = &param0->symbols;
frost$collections$HashMap* $tmp50 = *$tmp49;
frost$core$Object* $tmp51 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp50, ((frost$collections$Key*) param2));
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp51)));
org$frostlang$frostc$Symbol* $tmp52 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
*(&local0) = ((org$frostlang$frostc$Symbol*) $tmp51);
frost$core$Frost$unref$frost$core$Object$Q($tmp51);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:33
org$frostlang$frostc$Symbol* $tmp53 = *(&local0);
frost$core$Bit $tmp54 = (frost$core$Bit) {$tmp53 == NULL};
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:34
frost$collections$HashMap** $tmp56 = &param0->symbols;
frost$collections$HashMap* $tmp57 = *$tmp56;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp57, ((frost$collections$Key*) param2), ((frost$core$Object*) param1));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:35
org$frostlang$frostc$Symbol* $tmp58 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:37
org$frostlang$frostc$Symbol$Kind* $tmp59 = &param1->kind;
org$frostlang$frostc$Symbol$Kind $tmp60 = *$tmp59;
org$frostlang$frostc$Symbol$Kind$wrapper* $tmp61;
$tmp61 = (org$frostlang$frostc$Symbol$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Symbol$Kind$wrapperclass);
$tmp61->value = $tmp60;
frost$core$Int $tmp62 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from SymbolTable.frost:37:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int* $tmp63 = &(&local2)->$rawValue;
*$tmp63 = $tmp62;
org$frostlang$frostc$Symbol$Kind $tmp64 = *(&local2);
*(&local1) = $tmp64;
org$frostlang$frostc$Symbol$Kind $tmp65 = *(&local1);
org$frostlang$frostc$Symbol$Kind$wrapper* $tmp66;
$tmp66 = (org$frostlang$frostc$Symbol$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Symbol$Kind$wrapperclass);
$tmp66->value = $tmp65;
ITable* $tmp67 = ((frost$core$Equatable*) $tmp61)->$class->itable;
while ($tmp67->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp67 = $tmp67->next;
}
$fn69 $tmp68 = $tmp67->methods[0];
frost$core$Bit $tmp70 = $tmp68(((frost$core$Equatable*) $tmp61), ((frost$core$Equatable*) $tmp66));
bool $tmp71 = $tmp70.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp66)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp61)));
if ($tmp71) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:38
org$frostlang$frostc$Symbol* $tmp72 = *(&local0);
org$frostlang$frostc$Symbol$Kind* $tmp73 = &$tmp72->kind;
org$frostlang$frostc$Symbol$Kind $tmp74 = *$tmp73;
frost$core$Int $tmp75 = $tmp74.$rawValue;
frost$core$Int $tmp76 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:39:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp77 = $tmp75.value;
int64_t $tmp78 = $tmp76.value;
bool $tmp79 = $tmp77 == $tmp78;
frost$core$Bit $tmp80 = (frost$core$Bit) {$tmp79};
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:40
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp82 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp82);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$collections$Array* $tmp83 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
*(&local3) = $tmp82;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:41
frost$collections$Array* $tmp84 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp84, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) param1)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:42
frost$collections$Array* $tmp85 = *(&local3);
org$frostlang$frostc$Symbol* $tmp86 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp85, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp86)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:43
frost$collections$HashMap** $tmp87 = &param0->symbols;
frost$collections$HashMap* $tmp88 = *$tmp87;
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Methods));
org$frostlang$frostc$Methods* $tmp89 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp90 = *(&local3);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp89, ((frost$collections$ListView*) $tmp90));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp88, ((frost$collections$Key*) param2), ((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp89)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:44
frost$collections$Array* $tmp91 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp92 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return;
block8:;
frost$core$Int $tmp93 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:46:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp94 = $tmp75.value;
int64_t $tmp95 = $tmp93.value;
bool $tmp96 = $tmp94 == $tmp95;
frost$core$Bit $tmp97 = (frost$core$Bit) {$tmp96};
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block10; else goto block6;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:47
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp99 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp99);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$collections$Array* $tmp100 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
*(&local4) = $tmp99;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:48
frost$collections$Array* $tmp101 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp101, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) param1)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:49
frost$collections$Array* $tmp102 = *(&local4);
org$frostlang$frostc$Symbol* $tmp103 = *(&local0);
org$frostlang$frostc$FixedArray** $tmp104 = &((org$frostlang$frostc$Methods*) $tmp103)->methods;
org$frostlang$frostc$FixedArray* $tmp105 = *$tmp104;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp102, ((frost$collections$CollectionView*) $tmp105));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:50
frost$collections$HashMap** $tmp106 = &param0->symbols;
frost$collections$HashMap* $tmp107 = *$tmp106;
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Methods));
org$frostlang$frostc$Methods* $tmp108 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp109 = *(&local4);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp108, ((frost$collections$ListView*) $tmp109));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp107, ((frost$collections$Key*) param2), ((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp108)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:51
frost$collections$Array* $tmp110 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp111 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return;
block6:;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:55
frost$core$Weak** $tmp112 = &param0->compiler;
frost$core$Weak* $tmp113 = *$tmp112;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from SymbolTable.frost:55:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp114 = &$tmp113->_valid;
frost$core$Bit $tmp115 = *$tmp114;
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block14; else goto block15;
block15:;
frost$core$Int $tmp117 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s118, $tmp117);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp119 = &$tmp113->value;
frost$core$Object* $tmp120 = *$tmp119;
frost$core$Frost$ref$frost$core$Object$Q($tmp120);
org$frostlang$frostc$Position* $tmp121 = &param1->position;
org$frostlang$frostc$Position $tmp122 = *$tmp121;
frost$core$String* $tmp123 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s124, param2);
frost$core$String* $tmp125 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp123, &$s126);
org$frostlang$frostc$Symbol* $tmp127 = *(&local0);
org$frostlang$frostc$Position* $tmp128 = &$tmp127->position;
org$frostlang$frostc$Position $tmp129 = *$tmp128;
org$frostlang$frostc$Position$wrapper* $tmp130;
$tmp130 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp130->value = $tmp129;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from SymbolTable.frost:55:95
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn132 $tmp131 = ($fn132) ((frost$core$Object*) $tmp130)->$class->vtable[0];
frost$core$String* $tmp133 = $tmp131(((frost$core$Object*) $tmp130));
frost$core$String* $tmp134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp125, $tmp133);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$String* $tmp135 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp134, &$s136);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp120), $tmp122, $tmp135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q($tmp120);
org$frostlang$frostc$Symbol* $tmp137 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return;

}
void org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(org$frostlang$frostc$SymbolTable* param0, org$frostlang$frostc$MethodDecl* param1, frost$collections$List* param2) {

org$frostlang$frostc$MethodDecl$Kind local0;
org$frostlang$frostc$MethodDecl$Kind local1;
org$frostlang$frostc$MethodDecl* local2 = NULL;
org$frostlang$frostc$MethodDecl* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:61
// begin inline call to function org.frostlang.frostc.MethodDecl.get_heritable():frost.core.Bit from SymbolTable.frost:61:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:104
org$frostlang$frostc$MethodDecl$Kind* $tmp138 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp139 = *$tmp138;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp140;
$tmp140 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp140->value = $tmp139;
frost$core$Int $tmp141 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodDecl.frost:104:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp142 = &(&local1)->$rawValue;
*$tmp142 = $tmp141;
org$frostlang$frostc$MethodDecl$Kind $tmp143 = *(&local1);
*(&local0) = $tmp143;
org$frostlang$frostc$MethodDecl$Kind $tmp144 = *(&local0);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp145;
$tmp145 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp145->value = $tmp144;
ITable* $tmp146 = ((frost$core$Equatable*) $tmp140)->$class->itable;
while ($tmp146->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp146 = $tmp146->next;
}
$fn148 $tmp147 = $tmp146->methods[1];
frost$core$Bit $tmp149 = $tmp147(((frost$core$Equatable*) $tmp140), ((frost$core$Equatable*) $tmp145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp145)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp140)));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from SymbolTable.frost:61:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp150 = $tmp149.value;
bool $tmp151 = !$tmp150;
frost$core$Bit $tmp152 = (frost$core$Bit) {$tmp151};
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:62
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:64
ITable* $tmp154 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp154->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp154 = $tmp154->next;
}
$fn156 $tmp155 = $tmp154->methods[0];
frost$collections$Iterator* $tmp157 = $tmp155(((frost$collections$Iterable*) param2));
goto block6;
block6:;
ITable* $tmp158 = $tmp157->$class->itable;
while ($tmp158->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp158 = $tmp158->next;
}
$fn160 $tmp159 = $tmp158->methods[0];
frost$core$Bit $tmp161 = $tmp159($tmp157);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block8; else goto block7;
block7:;
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp163 = $tmp157->$class->itable;
while ($tmp163->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp163 = $tmp163->next;
}
$fn165 $tmp164 = $tmp163->methods[1];
frost$core$Object* $tmp166 = $tmp164($tmp157);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp166)));
org$frostlang$frostc$MethodDecl* $tmp167 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) $tmp166);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:65
frost$core$Weak** $tmp168 = &param0->compiler;
frost$core$Weak* $tmp169 = *$tmp168;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from SymbolTable.frost:65:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp170 = &$tmp169->_valid;
frost$core$Bit $tmp171 = *$tmp170;
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block11; else goto block12;
block12:;
frost$core$Int $tmp173 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s174, $tmp173);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp175 = &$tmp169->value;
frost$core$Object* $tmp176 = *$tmp175;
frost$core$Frost$ref$frost$core$Object$Q($tmp176);
org$frostlang$frostc$MethodDecl* $tmp177 = *(&local2);
org$frostlang$frostc$MethodDecl* $tmp178 = org$frostlang$frostc$Compiler$getOverriddenMethod$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$MethodDecl$Q(((org$frostlang$frostc$Compiler*) $tmp176), $tmp177);
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
org$frostlang$frostc$MethodDecl* $tmp179 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
*(&local3) = $tmp178;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$Frost$unref$frost$core$Object$Q($tmp176);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:66
org$frostlang$frostc$MethodDecl* $tmp180 = *(&local3);
bool $tmp181 = $tmp180 == param1;
frost$core$Bit $tmp182 = (frost$core$Bit) {$tmp181};
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:67
org$frostlang$frostc$MethodDecl* $tmp184 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp166);
org$frostlang$frostc$MethodDecl* $tmp185 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
return;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:69
org$frostlang$frostc$Annotations** $tmp186 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp187 = *$tmp186;
// begin inline call to function org.frostlang.frostc.Annotations.get_isDefault():frost.core.Bit from SymbolTable.frost:69:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:166
frost$core$Int* $tmp188 = &$tmp187->flags;
frost$core$Int $tmp189 = *$tmp188;
frost$core$Int $tmp190 = (frost$core$Int) {32768u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:166:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp191 = $tmp189.value;
int64_t $tmp192 = $tmp190.value;
int64_t $tmp193 = $tmp191 & $tmp192;
frost$core$Int $tmp194 = (frost$core$Int) {$tmp193};
frost$core$Int $tmp195 = (frost$core$Int) {0u};
int64_t $tmp196 = $tmp194.value;
int64_t $tmp197 = $tmp195.value;
bool $tmp198 = $tmp196 != $tmp197;
frost$core$Bit $tmp199 = (frost$core$Bit) {$tmp198};
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block17; else goto block16;
block17:;
org$frostlang$frostc$MethodDecl* $tmp201 = *(&local2);
frost$core$String* $tmp202 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String($tmp201);
frost$core$String* $tmp203 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param1);
frost$core$Bit $tmp204 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp202, $tmp203);
bool $tmp205 = $tmp204.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
if ($tmp205) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:70
org$frostlang$frostc$MethodDecl* $tmp206 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp166);
org$frostlang$frostc$MethodDecl* $tmp207 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
return;
block16:;
org$frostlang$frostc$MethodDecl* $tmp208 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp166);
org$frostlang$frostc$MethodDecl* $tmp209 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:73
ITable* $tmp210 = ((frost$collections$CollectionWriter*) param2)->$class->itable;
while ($tmp210->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp210 = $tmp210->next;
}
$fn212 $tmp211 = $tmp210->methods[1];
$tmp211(((frost$collections$CollectionWriter*) param2), ((frost$core$Object*) param1));
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:78
frost$core$Bit $tmp213 = (frost$core$Bit) {param2 == NULL};
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:79
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:81
frost$core$Bit $tmp215 = (frost$core$Bit) {param1 == NULL};
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:82
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:84
bool $tmp217 = param1 == param2;
frost$core$Bit $tmp218 = (frost$core$Bit) {$tmp217};
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:85
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:87
$fn221 $tmp220 = ($fn221) param2->$class->vtable[2];
frost$core$Bit $tmp222 = $tmp220(param2);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from SymbolTable.frost:87:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp223 = $tmp222.value;
bool $tmp224 = !$tmp223;
frost$core$Bit $tmp225 = (frost$core$Bit) {$tmp224};
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:88
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:90
org$frostlang$frostc$Symbol$Kind* $tmp227 = &param1->kind;
org$frostlang$frostc$Symbol$Kind $tmp228 = *$tmp227;
frost$core$Int $tmp229 = $tmp228.$rawValue;
frost$core$Int $tmp230 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:91:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp231 = $tmp229.value;
int64_t $tmp232 = $tmp230.value;
bool $tmp233 = $tmp231 == $tmp232;
frost$core$Bit $tmp234 = (frost$core$Bit) {$tmp233};
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:92
org$frostlang$frostc$Symbol$Kind* $tmp236 = &param2->kind;
org$frostlang$frostc$Symbol$Kind $tmp237 = *$tmp236;
frost$core$Int $tmp238 = $tmp237.$rawValue;
frost$core$Int $tmp239 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:93:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp240 = $tmp238.value;
int64_t $tmp241 = $tmp239.value;
bool $tmp242 = $tmp240 == $tmp241;
frost$core$Bit $tmp243 = (frost$core$Bit) {$tmp242};
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:94
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp245 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp245);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
frost$collections$Array* $tmp246 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
*(&local0) = $tmp245;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:95
frost$collections$Array* $tmp247 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp247, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) param1)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:96
org$frostlang$frostc$FixedArray** $tmp248 = &((org$frostlang$frostc$Methods*) param2)->methods;
org$frostlang$frostc$FixedArray* $tmp249 = *$tmp248;
ITable* $tmp250 = ((frost$collections$Iterable*) $tmp249)->$class->itable;
while ($tmp250->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp250 = $tmp250->next;
}
$fn252 $tmp251 = $tmp250->methods[0];
frost$collections$Iterator* $tmp253 = $tmp251(((frost$collections$Iterable*) $tmp249));
goto block18;
block18:;
ITable* $tmp254 = $tmp253->$class->itable;
while ($tmp254->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp254 = $tmp254->next;
}
$fn256 $tmp255 = $tmp254->methods[0];
frost$core$Bit $tmp257 = $tmp255($tmp253);
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block20; else goto block19;
block19:;
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp259 = $tmp253->$class->itable;
while ($tmp259->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp259 = $tmp259->next;
}
$fn261 $tmp260 = $tmp259->methods[1];
frost$core$Object* $tmp262 = $tmp260($tmp253);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp262)));
org$frostlang$frostc$MethodDecl* $tmp263 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local1) = ((org$frostlang$frostc$MethodDecl*) $tmp262);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:97
org$frostlang$frostc$MethodDecl* $tmp264 = *(&local1);
frost$collections$Array* $tmp265 = *(&local0);
org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(param0, $tmp264, ((frost$collections$List*) $tmp265));
frost$core$Frost$unref$frost$core$Object$Q($tmp262);
org$frostlang$frostc$MethodDecl* $tmp266 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block18;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:99
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Methods));
org$frostlang$frostc$Methods* $tmp267 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp268 = *(&local0);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp267, ((frost$collections$ListView*) $tmp268));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp267)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
frost$collections$Array* $tmp269 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$Symbol*) $tmp267);
block16:;
frost$core$Int $tmp270 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:101:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp271 = $tmp238.value;
int64_t $tmp272 = $tmp270.value;
bool $tmp273 = $tmp271 == $tmp272;
frost$core$Bit $tmp274 = (frost$core$Bit) {$tmp273};
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:102
frost$core$Weak** $tmp276 = &param0->compiler;
frost$core$Weak* $tmp277 = *$tmp276;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from SymbolTable.frost:102:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp278 = &$tmp277->_valid;
frost$core$Bit $tmp279 = *$tmp278;
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block26; else goto block27;
block27:;
frost$core$Int $tmp281 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s282, $tmp281);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp283 = &$tmp277->value;
frost$core$Object* $tmp284 = *$tmp283;
frost$core$Frost$ref$frost$core$Object$Q($tmp284);
org$frostlang$frostc$MethodDecl* $tmp285 = org$frostlang$frostc$Compiler$getOverriddenMethod$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$MethodDecl$Q(((org$frostlang$frostc$Compiler*) $tmp284), ((org$frostlang$frostc$MethodDecl*) param2));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
org$frostlang$frostc$MethodDecl* $tmp286 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
*(&local2) = $tmp285;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
frost$core$Frost$unref$frost$core$Object$Q($tmp284);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:103
frost$core$Weak** $tmp287 = &param0->compiler;
frost$core$Weak* $tmp288 = *$tmp287;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from SymbolTable.frost:103:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp289 = &$tmp288->_valid;
frost$core$Bit $tmp290 = *$tmp289;
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block30; else goto block31;
block31:;
frost$core$Int $tmp292 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s293, $tmp292);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp294 = &$tmp288->value;
frost$core$Object* $tmp295 = *$tmp294;
frost$core$Frost$ref$frost$core$Object$Q($tmp295);
org$frostlang$frostc$MethodDecl* $tmp296 = org$frostlang$frostc$Compiler$getOverriddenMethod$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$MethodDecl$Q(((org$frostlang$frostc$Compiler*) $tmp295), ((org$frostlang$frostc$MethodDecl*) param1));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
org$frostlang$frostc$MethodDecl* $tmp297 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local3) = $tmp296;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$core$Frost$unref$frost$core$Object$Q($tmp295);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:104
org$frostlang$frostc$MethodDecl* $tmp298 = *(&local2);
bool $tmp299 = $tmp298 == ((org$frostlang$frostc$MethodDecl*) param1);
frost$core$Bit $tmp300 = (frost$core$Bit) {$tmp299};
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block32; else goto block35;
block35:;
org$frostlang$frostc$MethodDecl* $tmp302 = *(&local3);
bool $tmp303 = $tmp302 == ((org$frostlang$frostc$MethodDecl*) param2);
frost$core$Bit $tmp304 = (frost$core$Bit) {$tmp303};
bool $tmp305 = $tmp304.value;
if ($tmp305) goto block32; else goto block34;
block34:;
org$frostlang$frostc$MethodDecl* $tmp306 = *(&local2);
frost$core$Bit $tmp307 = (frost$core$Bit) {$tmp306 != NULL};
bool $tmp308 = $tmp307.value;
if ($tmp308) goto block36; else goto block33;
block36:;
org$frostlang$frostc$MethodDecl* $tmp309 = *(&local2);
org$frostlang$frostc$MethodDecl* $tmp310 = *(&local3);
bool $tmp311 = $tmp309 == $tmp310;
frost$core$Bit $tmp312 = (frost$core$Bit) {$tmp311};
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:107
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$MethodDecl* $tmp314 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp315 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
return param1;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:109
org$frostlang$frostc$Annotations** $tmp316 = &((org$frostlang$frostc$MethodDecl*) param2)->annotations;
org$frostlang$frostc$Annotations* $tmp317 = *$tmp316;
// begin inline call to function org.frostlang.frostc.Annotations.get_isDefault():frost.core.Bit from SymbolTable.frost:109:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:166
frost$core$Int* $tmp318 = &$tmp317->flags;
frost$core$Int $tmp319 = *$tmp318;
frost$core$Int $tmp320 = (frost$core$Int) {32768u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:166:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp321 = $tmp319.value;
int64_t $tmp322 = $tmp320.value;
int64_t $tmp323 = $tmp321 & $tmp322;
frost$core$Int $tmp324 = (frost$core$Int) {$tmp323};
frost$core$Int $tmp325 = (frost$core$Int) {0u};
int64_t $tmp326 = $tmp324.value;
int64_t $tmp327 = $tmp325.value;
bool $tmp328 = $tmp326 != $tmp327;
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328};
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block39; else goto block38;
block39:;
frost$core$String* $tmp331 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(((org$frostlang$frostc$MethodDecl*) param2));
frost$core$String* $tmp332 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(((org$frostlang$frostc$MethodDecl*) param1));
frost$core$Bit $tmp333 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp331, $tmp332);
bool $tmp334 = $tmp333.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
if ($tmp334) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$MethodDecl* $tmp335 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp336 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
return param1;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:113
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp337 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp337);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
frost$collections$Array* $tmp338 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
*(&local4) = $tmp337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:114
frost$collections$Array* $tmp339 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp339, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) param1)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:115
frost$collections$Array* $tmp340 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp340, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) param2)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:116
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Methods));
org$frostlang$frostc$Methods* $tmp341 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp342 = *(&local4);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp341, ((frost$collections$ListView*) $tmp342));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp341)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
frost$collections$Array* $tmp343 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$MethodDecl* $tmp344 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp345 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
return ((org$frostlang$frostc$Symbol*) $tmp341);
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:119
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block14:;
goto block10;
block12:;
frost$core$Int $tmp346 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:123:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp347 = $tmp229.value;
int64_t $tmp348 = $tmp346.value;
bool $tmp349 = $tmp347 == $tmp348;
frost$core$Bit $tmp350 = (frost$core$Bit) {$tmp349};
bool $tmp351 = $tmp350.value;
if ($tmp351) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:124
org$frostlang$frostc$Symbol$Kind* $tmp352 = &param2->kind;
org$frostlang$frostc$Symbol$Kind $tmp353 = *$tmp352;
frost$core$Int $tmp354 = $tmp353.$rawValue;
frost$core$Int $tmp355 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:125:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp356 = $tmp354.value;
int64_t $tmp357 = $tmp355.value;
bool $tmp358 = $tmp356 == $tmp357;
frost$core$Bit $tmp359 = (frost$core$Bit) {$tmp358};
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:126
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp361 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
org$frostlang$frostc$FixedArray** $tmp362 = &((org$frostlang$frostc$Methods*) param1)->methods;
org$frostlang$frostc$FixedArray* $tmp363 = *$tmp362;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp361, ((frost$collections$CollectionView*) $tmp363));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
frost$collections$Array* $tmp364 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
*(&local5) = $tmp361;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:127
org$frostlang$frostc$FixedArray** $tmp365 = &((org$frostlang$frostc$Methods*) param2)->methods;
org$frostlang$frostc$FixedArray* $tmp366 = *$tmp365;
ITable* $tmp367 = ((frost$collections$Iterable*) $tmp366)->$class->itable;
while ($tmp367->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp367 = $tmp367->next;
}
$fn369 $tmp368 = $tmp367->methods[0];
frost$collections$Iterator* $tmp370 = $tmp368(((frost$collections$Iterable*) $tmp366));
goto block49;
block49:;
ITable* $tmp371 = $tmp370->$class->itable;
while ($tmp371->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp371 = $tmp371->next;
}
$fn373 $tmp372 = $tmp371->methods[0];
frost$core$Bit $tmp374 = $tmp372($tmp370);
bool $tmp375 = $tmp374.value;
if ($tmp375) goto block51; else goto block50;
block50:;
*(&local6) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp376 = $tmp370->$class->itable;
while ($tmp376->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp376 = $tmp376->next;
}
$fn378 $tmp377 = $tmp376->methods[1];
frost$core$Object* $tmp379 = $tmp377($tmp370);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp379)));
org$frostlang$frostc$MethodDecl* $tmp380 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
*(&local6) = ((org$frostlang$frostc$MethodDecl*) $tmp379);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:128
org$frostlang$frostc$MethodDecl* $tmp381 = *(&local6);
frost$collections$Array* $tmp382 = *(&local5);
org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(param0, $tmp381, ((frost$collections$List*) $tmp382));
frost$core$Frost$unref$frost$core$Object$Q($tmp379);
org$frostlang$frostc$MethodDecl* $tmp383 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
*(&local6) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block49;
block51:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:130
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Methods));
org$frostlang$frostc$Methods* $tmp384 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp385 = *(&local5);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp384, ((frost$collections$ListView*) $tmp385));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp384)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
frost$collections$Array* $tmp386 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
*(&local5) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$Symbol*) $tmp384);
block47:;
frost$core$Int $tmp387 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:132:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp388 = $tmp354.value;
int64_t $tmp389 = $tmp387.value;
bool $tmp390 = $tmp388 == $tmp389;
frost$core$Bit $tmp391 = (frost$core$Bit) {$tmp390};
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:133
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp393 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
org$frostlang$frostc$FixedArray** $tmp394 = &((org$frostlang$frostc$Methods*) param1)->methods;
org$frostlang$frostc$FixedArray* $tmp395 = *$tmp394;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp393, ((frost$collections$CollectionView*) $tmp395));
*(&local7) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
frost$collections$Array* $tmp396 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
*(&local7) = $tmp393;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:134
frost$collections$Array* $tmp397 = *(&local7);
org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(param0, ((org$frostlang$frostc$MethodDecl*) param2), ((frost$collections$List*) $tmp397));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:135
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Methods));
org$frostlang$frostc$Methods* $tmp398 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp399 = *(&local7);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp398, ((frost$collections$ListView*) $tmp399));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp398)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$collections$Array* $tmp400 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
*(&local7) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$Symbol*) $tmp398);
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:138
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block45:;
goto block10;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:143
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block10:;
goto block55;
block55:;

}
org$frostlang$frostc$Symbol* org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q(org$frostlang$frostc$SymbolTable* param0, frost$core$String* param1) {

org$frostlang$frostc$Symbol* local0 = NULL;
org$frostlang$frostc$SymbolTable* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:149
frost$collections$HashMap** $tmp401 = &param0->merged;
frost$collections$HashMap* $tmp402 = *$tmp401;
frost$core$Object* $tmp403 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp402, ((frost$collections$Key*) param1));
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp403)));
org$frostlang$frostc$Symbol* $tmp404 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local0) = ((org$frostlang$frostc$Symbol*) $tmp403);
frost$core$Frost$unref$frost$core$Object$Q($tmp403);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:150
org$frostlang$frostc$Symbol* $tmp405 = *(&local0);
frost$core$Bit $tmp406 = (frost$core$Bit) {$tmp405 == NULL};
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:151
frost$collections$HashMap** $tmp408 = &param0->symbols;
frost$collections$HashMap* $tmp409 = *$tmp408;
frost$core$Object* $tmp410 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp409, ((frost$collections$Key*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp410)));
org$frostlang$frostc$Symbol* $tmp411 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
*(&local0) = ((org$frostlang$frostc$Symbol*) $tmp410);
frost$core$Frost$unref$frost$core$Object$Q($tmp410);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:152
frost$collections$Array** $tmp412 = &param0->parents;
frost$collections$Array* $tmp413 = *$tmp412;
ITable* $tmp414 = ((frost$collections$Iterable*) $tmp413)->$class->itable;
while ($tmp414->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp414 = $tmp414->next;
}
$fn416 $tmp415 = $tmp414->methods[0];
frost$collections$Iterator* $tmp417 = $tmp415(((frost$collections$Iterable*) $tmp413));
goto block3;
block3:;
ITable* $tmp418 = $tmp417->$class->itable;
while ($tmp418->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp418 = $tmp418->next;
}
$fn420 $tmp419 = $tmp418->methods[0];
frost$core$Bit $tmp421 = $tmp419($tmp417);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block5; else goto block4;
block4:;
*(&local1) = ((org$frostlang$frostc$SymbolTable*) NULL);
ITable* $tmp423 = $tmp417->$class->itable;
while ($tmp423->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp423 = $tmp423->next;
}
$fn425 $tmp424 = $tmp423->methods[1];
frost$core$Object* $tmp426 = $tmp424($tmp417);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$SymbolTable*) $tmp426)));
org$frostlang$frostc$SymbolTable* $tmp427 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local1) = ((org$frostlang$frostc$SymbolTable*) $tmp426);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:153
org$frostlang$frostc$Symbol* $tmp428 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp429 = *(&local1);
org$frostlang$frostc$Symbol* $tmp430 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp429, param1);
org$frostlang$frostc$Symbol* $tmp431 = org$frostlang$frostc$SymbolTable$merge$org$frostlang$frostc$Symbol$Q$org$frostlang$frostc$Symbol$Q$R$org$frostlang$frostc$Symbol$Q(param0, $tmp428, $tmp430);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
org$frostlang$frostc$Symbol* $tmp432 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
*(&local0) = $tmp431;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
frost$core$Frost$unref$frost$core$Object$Q($tmp426);
org$frostlang$frostc$SymbolTable* $tmp433 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
*(&local1) = ((org$frostlang$frostc$SymbolTable*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:155
org$frostlang$frostc$Symbol* $tmp434 = *(&local0);
frost$core$Bit $tmp435 = (frost$core$Bit) {$tmp434 != NULL};
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:156
frost$collections$HashMap** $tmp437 = &param0->merged;
frost$collections$HashMap* $tmp438 = *$tmp437;
org$frostlang$frostc$Symbol* $tmp439 = *(&local0);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp438, ((frost$collections$Key*) param1), ((frost$core$Object*) $tmp439));
goto block7;
block7:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:159
org$frostlang$frostc$Symbol* $tmp440 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
org$frostlang$frostc$Symbol* $tmp441 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return $tmp440;

}
frost$core$String* org$frostlang$frostc$SymbolTable$get_asString$R$frost$core$String(org$frostlang$frostc$SymbolTable* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:164
frost$collections$Array** $tmp442 = &param0->parents;
frost$collections$Array* $tmp443 = *$tmp442;
ITable* $tmp444 = ((frost$collections$CollectionView*) $tmp443)->$class->itable;
while ($tmp444->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp444 = $tmp444->next;
}
$fn446 $tmp445 = $tmp444->methods[0];
frost$core$Int $tmp447 = $tmp445(((frost$collections$CollectionView*) $tmp443));
frost$core$Int$wrapper* $tmp448;
$tmp448 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp448->value = $tmp447;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from SymbolTable.frost:164:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn450 $tmp449 = ($fn450) ((frost$core$Object*) $tmp448)->$class->vtable[0];
frost$core$String* $tmp451 = $tmp449(((frost$core$Object*) $tmp448));
frost$core$String* $tmp452 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s453, $tmp451);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
frost$core$String* $tmp454 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp452, &$s455);
frost$collections$HashMap** $tmp456 = &param0->symbols;
frost$collections$HashMap* $tmp457 = *$tmp456;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from SymbolTable.frost:164:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn459 $tmp458 = ($fn459) ((frost$core$Object*) $tmp457)->$class->vtable[0];
frost$core$String* $tmp460 = $tmp458(((frost$core$Object*) $tmp457));
frost$core$String* $tmp461 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp454, $tmp460);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
frost$core$String* $tmp462 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp461, &$s463);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
return $tmp462;

}
void org$frostlang$frostc$SymbolTable$cleanup(org$frostlang$frostc$SymbolTable* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp464 = &param0->symbols;
frost$collections$HashMap* $tmp465 = *$tmp464;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
frost$core$Weak** $tmp466 = &param0->compiler;
frost$core$Weak* $tmp467 = *$tmp466;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
frost$collections$HashMap** $tmp468 = &param0->merged;
frost$collections$HashMap* $tmp469 = *$tmp468;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
frost$collections$Array** $tmp470 = &param0->parents;
frost$collections$Array* $tmp471 = *$tmp470;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
return;

}






