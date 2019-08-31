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
#include "frost/collections/HashKey.h"
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
typedef frost$core$String* (*$fn142)(frost$core$Object*);
typedef frost$core$Bit (*$fn158)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn166)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn170)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn175)(frost$collections$Iterator*);
typedef void (*$fn222)(frost$collections$CollectionWriter*, frost$core$Object*);
typedef frost$core$Bit (*$fn236)(org$frostlang$frostc$Symbol*);
typedef frost$collections$Iterator* (*$fn277)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn281)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn286)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn399)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn403)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn408)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn446)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn450)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn455)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn481)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn485)(frost$core$Object*);
typedef frost$core$String* (*$fn494)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 32, 8199553873176202496, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, 2603826108937223355, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -4567382734304966013, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, -294577661570171599, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, 2603826108937223355, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, 2603826108937223355, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, 2603826108937223355, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, 2603826108937223355, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, 2603826108937223355, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, 2603826108937223355, NULL };
static frost$core$String $s474 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -1793708938165963595, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, -2209595055148192426, NULL };
static frost$core$String $s490 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -4986810529602041312, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };

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
frost$collections$HashMap$remove$frost$collections$HashMap$K($tmp48, ((frost$collections$HashKey*) param2));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:32
frost$collections$HashMap** $tmp49 = &param0->symbols;
frost$collections$HashMap* $tmp50 = *$tmp49;
frost$core$Object* $tmp51 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp50, ((frost$collections$HashKey*) param2));
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
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp57, ((frost$collections$HashKey*) param2), ((frost$core$Object*) param1));
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
frost$core$Bit $tmp73 = (frost$core$Bit) {$tmp72 != NULL};
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block6; else goto block7;
block7:;
frost$core$Int $tmp75 = (frost$core$Int) {38u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s76, $tmp75, &$s77);
abort(); // unreachable
block6:;
org$frostlang$frostc$Symbol$Kind* $tmp78 = &$tmp72->kind;
org$frostlang$frostc$Symbol$Kind $tmp79 = *$tmp78;
frost$core$Int $tmp80 = $tmp79.$rawValue;
frost$core$Int $tmp81 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:39:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp82 = $tmp80.value;
int64_t $tmp83 = $tmp81.value;
bool $tmp84 = $tmp82 == $tmp83;
frost$core$Bit $tmp85 = (frost$core$Bit) {$tmp84};
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:40
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp87 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp87);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$collections$Array* $tmp88 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local3) = $tmp87;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:41
frost$collections$Array* $tmp89 = *(&local3);
frost$collections$Array$add$frost$collections$Array$T($tmp89, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) param1)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:42
frost$collections$Array* $tmp90 = *(&local3);
org$frostlang$frostc$Symbol* $tmp91 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp90, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp91)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:43
frost$collections$HashMap** $tmp92 = &param0->symbols;
frost$collections$HashMap* $tmp93 = *$tmp92;
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Methods));
org$frostlang$frostc$Methods* $tmp94 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp95 = *(&local3);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp94, ((frost$collections$ListView*) $tmp95));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp93, ((frost$collections$HashKey*) param2), ((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp94)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:44
frost$collections$Array* $tmp96 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp97 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return;
block10:;
frost$core$Int $tmp98 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:46:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp99 = $tmp80.value;
int64_t $tmp100 = $tmp98.value;
bool $tmp101 = $tmp99 == $tmp100;
frost$core$Bit $tmp102 = (frost$core$Bit) {$tmp101};
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block12; else goto block8;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:47
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp104 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp104);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$collections$Array* $tmp105 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
*(&local4) = $tmp104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:48
frost$collections$Array* $tmp106 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp106, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) param1)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:49
frost$collections$Array* $tmp107 = *(&local4);
org$frostlang$frostc$Symbol* $tmp108 = *(&local0);
org$frostlang$frostc$FixedArray** $tmp109 = &((org$frostlang$frostc$Methods*) $tmp108)->methods;
org$frostlang$frostc$FixedArray* $tmp110 = *$tmp109;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp107, ((frost$collections$CollectionView*) $tmp110));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:50
frost$collections$HashMap** $tmp111 = &param0->symbols;
frost$collections$HashMap* $tmp112 = *$tmp111;
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Methods));
org$frostlang$frostc$Methods* $tmp113 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp114 = *(&local4);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp113, ((frost$collections$ListView*) $tmp114));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp112, ((frost$collections$HashKey*) param2), ((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp113)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:51
frost$collections$Array* $tmp115 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp116 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return;
block8:;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:55
frost$core$Weak** $tmp117 = &param0->compiler;
frost$core$Weak* $tmp118 = *$tmp117;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from SymbolTable.frost:55:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp119 = &$tmp118->_valid;
frost$core$Bit $tmp120 = *$tmp119;
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block16; else goto block17;
block17:;
frost$core$Int $tmp122 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s123, $tmp122);
abort(); // unreachable
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp124 = &$tmp118->value;
frost$core$Object* $tmp125 = *$tmp124;
frost$core$Frost$ref$frost$core$Object$Q($tmp125);
org$frostlang$frostc$Position* $tmp126 = &param1->position;
org$frostlang$frostc$Position $tmp127 = *$tmp126;
frost$core$String* $tmp128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s129, param2);
frost$core$String* $tmp130 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp128, &$s131);
org$frostlang$frostc$Symbol* $tmp132 = *(&local0);
frost$core$Bit $tmp133 = (frost$core$Bit) {$tmp132 != NULL};
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block18; else goto block19;
block19:;
frost$core$Int $tmp135 = (frost$core$Int) {56u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s136, $tmp135, &$s137);
abort(); // unreachable
block18:;
org$frostlang$frostc$Position* $tmp138 = &$tmp132->position;
org$frostlang$frostc$Position $tmp139 = *$tmp138;
org$frostlang$frostc$Position$wrapper* $tmp140;
$tmp140 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp140->value = $tmp139;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from SymbolTable.frost:55:95
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn142 $tmp141 = ($fn142) ((frost$core$Object*) $tmp140)->$class->vtable[0];
frost$core$String* $tmp143 = $tmp141(((frost$core$Object*) $tmp140));
frost$core$String* $tmp144 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp130, $tmp143);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$core$String* $tmp145 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp144, &$s146);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp125), $tmp127, $tmp145);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$Frost$unref$frost$core$Object$Q($tmp125);
org$frostlang$frostc$Symbol* $tmp147 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
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
org$frostlang$frostc$MethodDecl$Kind* $tmp148 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp149 = *$tmp148;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp150;
$tmp150 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp150->value = $tmp149;
frost$core$Int $tmp151 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodDecl.frost:104:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp152 = &(&local1)->$rawValue;
*$tmp152 = $tmp151;
org$frostlang$frostc$MethodDecl$Kind $tmp153 = *(&local1);
*(&local0) = $tmp153;
org$frostlang$frostc$MethodDecl$Kind $tmp154 = *(&local0);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp155;
$tmp155 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp155->value = $tmp154;
ITable* $tmp156 = ((frost$core$Equatable*) $tmp150)->$class->itable;
while ($tmp156->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp156 = $tmp156->next;
}
$fn158 $tmp157 = $tmp156->methods[1];
frost$core$Bit $tmp159 = $tmp157(((frost$core$Equatable*) $tmp150), ((frost$core$Equatable*) $tmp155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp155)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp150)));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from SymbolTable.frost:61:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp160 = $tmp159.value;
bool $tmp161 = !$tmp160;
frost$core$Bit $tmp162 = (frost$core$Bit) {$tmp161};
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:62
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:64
ITable* $tmp164 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp164->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp164 = $tmp164->next;
}
$fn166 $tmp165 = $tmp164->methods[0];
frost$collections$Iterator* $tmp167 = $tmp165(((frost$collections$Iterable*) param2));
goto block6;
block6:;
ITable* $tmp168 = $tmp167->$class->itable;
while ($tmp168->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[0];
frost$core$Bit $tmp171 = $tmp169($tmp167);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block8; else goto block7;
block7:;
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp173 = $tmp167->$class->itable;
while ($tmp173->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp173 = $tmp173->next;
}
$fn175 $tmp174 = $tmp173->methods[1];
frost$core$Object* $tmp176 = $tmp174($tmp167);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp176)));
org$frostlang$frostc$MethodDecl* $tmp177 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) $tmp176);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:65
frost$core$Weak** $tmp178 = &param0->compiler;
frost$core$Weak* $tmp179 = *$tmp178;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from SymbolTable.frost:65:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp180 = &$tmp179->_valid;
frost$core$Bit $tmp181 = *$tmp180;
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block11; else goto block12;
block12:;
frost$core$Int $tmp183 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s184, $tmp183);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp185 = &$tmp179->value;
frost$core$Object* $tmp186 = *$tmp185;
frost$core$Frost$ref$frost$core$Object$Q($tmp186);
org$frostlang$frostc$MethodDecl* $tmp187 = *(&local2);
org$frostlang$frostc$MethodDecl* $tmp188 = org$frostlang$frostc$Compiler$getOverriddenMethod$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$MethodDecl$Q(((org$frostlang$frostc$Compiler*) $tmp186), $tmp187);
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
org$frostlang$frostc$MethodDecl* $tmp189 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local3) = $tmp188;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$Frost$unref$frost$core$Object$Q($tmp186);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:66
org$frostlang$frostc$MethodDecl* $tmp190 = *(&local3);
bool $tmp191 = $tmp190 == param1;
frost$core$Bit $tmp192 = (frost$core$Bit) {$tmp191};
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:67
org$frostlang$frostc$MethodDecl* $tmp194 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp176);
org$frostlang$frostc$MethodDecl* $tmp195 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
return;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:69
org$frostlang$frostc$Annotations** $tmp196 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp197 = *$tmp196;
// begin inline call to function org.frostlang.frostc.Annotations.get_isDefault():frost.core.Bit from SymbolTable.frost:69:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:166
frost$core$Int* $tmp198 = &$tmp197->flags;
frost$core$Int $tmp199 = *$tmp198;
frost$core$Int $tmp200 = (frost$core$Int) {32768u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:166:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp201 = $tmp199.value;
int64_t $tmp202 = $tmp200.value;
int64_t $tmp203 = $tmp201 & $tmp202;
frost$core$Int $tmp204 = (frost$core$Int) {$tmp203};
frost$core$Int $tmp205 = (frost$core$Int) {0u};
int64_t $tmp206 = $tmp204.value;
int64_t $tmp207 = $tmp205.value;
bool $tmp208 = $tmp206 != $tmp207;
frost$core$Bit $tmp209 = (frost$core$Bit) {$tmp208};
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block17; else goto block16;
block17:;
org$frostlang$frostc$MethodDecl* $tmp211 = *(&local2);
frost$core$String* $tmp212 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String($tmp211);
frost$core$String* $tmp213 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param1);
frost$core$Bit $tmp214 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp212, $tmp213);
bool $tmp215 = $tmp214.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
if ($tmp215) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:70
org$frostlang$frostc$MethodDecl* $tmp216 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp176);
org$frostlang$frostc$MethodDecl* $tmp217 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
return;
block16:;
org$frostlang$frostc$MethodDecl* $tmp218 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp176);
org$frostlang$frostc$MethodDecl* $tmp219 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:73
ITable* $tmp220 = ((frost$collections$CollectionWriter*) param2)->$class->itable;
while ($tmp220->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp220 = $tmp220->next;
}
$fn222 $tmp221 = $tmp220->methods[1];
$tmp221(((frost$collections$CollectionWriter*) param2), ((frost$core$Object*) param1));
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
frost$core$Bit $tmp223 = (frost$core$Bit) {param2 == NULL};
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:79
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:81
frost$core$Bit $tmp225 = (frost$core$Bit) {param1 == NULL};
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:82
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:84
bool $tmp227 = param1 == param2;
frost$core$Bit $tmp228 = (frost$core$Bit) {$tmp227};
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:85
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:87
frost$core$Bit $tmp230 = (frost$core$Bit) {param2 != NULL};
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block9; else goto block10;
block10:;
frost$core$Int $tmp232 = (frost$core$Int) {87u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s233, $tmp232, &$s234);
abort(); // unreachable
block9:;
$fn236 $tmp235 = ($fn236) param2->$class->vtable[2];
frost$core$Bit $tmp237 = $tmp235(param2);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from SymbolTable.frost:87:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp238 = $tmp237.value;
bool $tmp239 = !$tmp238;
frost$core$Bit $tmp240 = (frost$core$Bit) {$tmp239};
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:88
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:90
frost$core$Bit $tmp242 = (frost$core$Bit) {param1 != NULL};
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block12; else goto block13;
block13:;
frost$core$Int $tmp244 = (frost$core$Int) {90u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s245, $tmp244, &$s246);
abort(); // unreachable
block12:;
org$frostlang$frostc$Symbol$Kind* $tmp247 = &param1->kind;
org$frostlang$frostc$Symbol$Kind $tmp248 = *$tmp247;
frost$core$Int $tmp249 = $tmp248.$rawValue;
frost$core$Int $tmp250 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:91:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp251 = $tmp249.value;
int64_t $tmp252 = $tmp250.value;
bool $tmp253 = $tmp251 == $tmp252;
frost$core$Bit $tmp254 = (frost$core$Bit) {$tmp253};
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:92
frost$core$Bit $tmp256 = (frost$core$Bit) {param2 != NULL};
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block18; else goto block19;
block19:;
frost$core$Int $tmp258 = (frost$core$Int) {92u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s259, $tmp258, &$s260);
abort(); // unreachable
block18:;
org$frostlang$frostc$Symbol$Kind* $tmp261 = &param2->kind;
org$frostlang$frostc$Symbol$Kind $tmp262 = *$tmp261;
frost$core$Int $tmp263 = $tmp262.$rawValue;
frost$core$Int $tmp264 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:93:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp265 = $tmp263.value;
int64_t $tmp266 = $tmp264.value;
bool $tmp267 = $tmp265 == $tmp266;
frost$core$Bit $tmp268 = (frost$core$Bit) {$tmp267};
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:94
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp270 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp270);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$collections$Array* $tmp271 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
*(&local0) = $tmp270;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:95
frost$collections$Array* $tmp272 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp272, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) param1)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:96
org$frostlang$frostc$FixedArray** $tmp273 = &((org$frostlang$frostc$Methods*) param2)->methods;
org$frostlang$frostc$FixedArray* $tmp274 = *$tmp273;
ITable* $tmp275 = ((frost$collections$Iterable*) $tmp274)->$class->itable;
while ($tmp275->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp275 = $tmp275->next;
}
$fn277 $tmp276 = $tmp275->methods[0];
frost$collections$Iterator* $tmp278 = $tmp276(((frost$collections$Iterable*) $tmp274));
goto block24;
block24:;
ITable* $tmp279 = $tmp278->$class->itable;
while ($tmp279->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp279 = $tmp279->next;
}
$fn281 $tmp280 = $tmp279->methods[0];
frost$core$Bit $tmp282 = $tmp280($tmp278);
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block26; else goto block25;
block25:;
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp284 = $tmp278->$class->itable;
while ($tmp284->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp284 = $tmp284->next;
}
$fn286 $tmp285 = $tmp284->methods[1];
frost$core$Object* $tmp287 = $tmp285($tmp278);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp287)));
org$frostlang$frostc$MethodDecl* $tmp288 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
*(&local1) = ((org$frostlang$frostc$MethodDecl*) $tmp287);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:97
org$frostlang$frostc$MethodDecl* $tmp289 = *(&local1);
frost$collections$Array* $tmp290 = *(&local0);
org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(param0, $tmp289, ((frost$collections$List*) $tmp290));
frost$core$Frost$unref$frost$core$Object$Q($tmp287);
org$frostlang$frostc$MethodDecl* $tmp291 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block24;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:99
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Methods));
org$frostlang$frostc$Methods* $tmp292 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp293 = *(&local0);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp292, ((frost$collections$ListView*) $tmp293));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp292)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
frost$collections$Array* $tmp294 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$Symbol*) $tmp292);
block22:;
frost$core$Int $tmp295 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:101:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp296 = $tmp263.value;
int64_t $tmp297 = $tmp295.value;
bool $tmp298 = $tmp296 == $tmp297;
frost$core$Bit $tmp299 = (frost$core$Bit) {$tmp298};
bool $tmp300 = $tmp299.value;
if ($tmp300) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:102
frost$core$Weak** $tmp301 = &param0->compiler;
frost$core$Weak* $tmp302 = *$tmp301;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from SymbolTable.frost:102:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp303 = &$tmp302->_valid;
frost$core$Bit $tmp304 = *$tmp303;
bool $tmp305 = $tmp304.value;
if ($tmp305) goto block32; else goto block33;
block33:;
frost$core$Int $tmp306 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s307, $tmp306);
abort(); // unreachable
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp308 = &$tmp302->value;
frost$core$Object* $tmp309 = *$tmp308;
frost$core$Frost$ref$frost$core$Object$Q($tmp309);
org$frostlang$frostc$MethodDecl* $tmp310 = org$frostlang$frostc$Compiler$getOverriddenMethod$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$MethodDecl$Q(((org$frostlang$frostc$Compiler*) $tmp309), ((org$frostlang$frostc$MethodDecl*) param2));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
org$frostlang$frostc$MethodDecl* $tmp311 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
*(&local2) = $tmp310;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
frost$core$Frost$unref$frost$core$Object$Q($tmp309);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:103
frost$core$Weak** $tmp312 = &param0->compiler;
frost$core$Weak* $tmp313 = *$tmp312;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from SymbolTable.frost:103:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp314 = &$tmp313->_valid;
frost$core$Bit $tmp315 = *$tmp314;
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block36; else goto block37;
block37:;
frost$core$Int $tmp317 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s318, $tmp317);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp319 = &$tmp313->value;
frost$core$Object* $tmp320 = *$tmp319;
frost$core$Frost$ref$frost$core$Object$Q($tmp320);
org$frostlang$frostc$MethodDecl* $tmp321 = org$frostlang$frostc$Compiler$getOverriddenMethod$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$MethodDecl$Q(((org$frostlang$frostc$Compiler*) $tmp320), ((org$frostlang$frostc$MethodDecl*) param1));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
org$frostlang$frostc$MethodDecl* $tmp322 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local3) = $tmp321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
frost$core$Frost$unref$frost$core$Object$Q($tmp320);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:104
org$frostlang$frostc$MethodDecl* $tmp323 = *(&local2);
bool $tmp324 = $tmp323 == ((org$frostlang$frostc$MethodDecl*) param1);
frost$core$Bit $tmp325 = (frost$core$Bit) {$tmp324};
bool $tmp326 = $tmp325.value;
if ($tmp326) goto block38; else goto block41;
block41:;
org$frostlang$frostc$MethodDecl* $tmp327 = *(&local3);
bool $tmp328 = $tmp327 == ((org$frostlang$frostc$MethodDecl*) param2);
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328};
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block38; else goto block40;
block40:;
org$frostlang$frostc$MethodDecl* $tmp331 = *(&local2);
frost$core$Bit $tmp332 = (frost$core$Bit) {$tmp331 != NULL};
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block42; else goto block39;
block42:;
org$frostlang$frostc$MethodDecl* $tmp334 = *(&local2);
org$frostlang$frostc$MethodDecl* $tmp335 = *(&local3);
bool $tmp336 = $tmp334 == $tmp335;
frost$core$Bit $tmp337 = (frost$core$Bit) {$tmp336};
bool $tmp338 = $tmp337.value;
if ($tmp338) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:107
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$MethodDecl* $tmp339 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp340 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
return param1;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:109
org$frostlang$frostc$Annotations** $tmp341 = &((org$frostlang$frostc$MethodDecl*) param2)->annotations;
org$frostlang$frostc$Annotations* $tmp342 = *$tmp341;
// begin inline call to function org.frostlang.frostc.Annotations.get_isDefault():frost.core.Bit from SymbolTable.frost:109:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:166
frost$core$Int* $tmp343 = &$tmp342->flags;
frost$core$Int $tmp344 = *$tmp343;
frost$core$Int $tmp345 = (frost$core$Int) {32768u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:166:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp346 = $tmp344.value;
int64_t $tmp347 = $tmp345.value;
int64_t $tmp348 = $tmp346 & $tmp347;
frost$core$Int $tmp349 = (frost$core$Int) {$tmp348};
frost$core$Int $tmp350 = (frost$core$Int) {0u};
int64_t $tmp351 = $tmp349.value;
int64_t $tmp352 = $tmp350.value;
bool $tmp353 = $tmp351 != $tmp352;
frost$core$Bit $tmp354 = (frost$core$Bit) {$tmp353};
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block45; else goto block44;
block45:;
frost$core$String* $tmp356 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(((org$frostlang$frostc$MethodDecl*) param2));
frost$core$String* $tmp357 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(((org$frostlang$frostc$MethodDecl*) param1));
frost$core$Bit $tmp358 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp356, $tmp357);
bool $tmp359 = $tmp358.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
if ($tmp359) goto block43; else goto block44;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$MethodDecl* $tmp360 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp361 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
return param1;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:113
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp362 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp362);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
frost$collections$Array* $tmp363 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local4) = $tmp362;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:114
frost$collections$Array* $tmp364 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp364, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) param1)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:115
frost$collections$Array* $tmp365 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp365, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) param2)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:116
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Methods));
org$frostlang$frostc$Methods* $tmp366 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp367 = *(&local4);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp366, ((frost$collections$ListView*) $tmp367));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp366)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$collections$Array* $tmp368 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$MethodDecl* $tmp369 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp370 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
return ((org$frostlang$frostc$Symbol*) $tmp366);
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:119
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block20:;
goto block14;
block16:;
frost$core$Int $tmp371 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:123:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp372 = $tmp249.value;
int64_t $tmp373 = $tmp371.value;
bool $tmp374 = $tmp372 == $tmp373;
frost$core$Bit $tmp375 = (frost$core$Bit) {$tmp374};
bool $tmp376 = $tmp375.value;
if ($tmp376) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:124
frost$core$Bit $tmp377 = (frost$core$Bit) {param2 != NULL};
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block51; else goto block52;
block52:;
frost$core$Int $tmp379 = (frost$core$Int) {124u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s380, $tmp379, &$s381);
abort(); // unreachable
block51:;
org$frostlang$frostc$Symbol$Kind* $tmp382 = &param2->kind;
org$frostlang$frostc$Symbol$Kind $tmp383 = *$tmp382;
frost$core$Int $tmp384 = $tmp383.$rawValue;
frost$core$Int $tmp385 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:125:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp386 = $tmp384.value;
int64_t $tmp387 = $tmp385.value;
bool $tmp388 = $tmp386 == $tmp387;
frost$core$Bit $tmp389 = (frost$core$Bit) {$tmp388};
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:126
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp391 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
org$frostlang$frostc$FixedArray** $tmp392 = &((org$frostlang$frostc$Methods*) param1)->methods;
org$frostlang$frostc$FixedArray* $tmp393 = *$tmp392;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp391, ((frost$collections$CollectionView*) $tmp393));
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
frost$collections$Array* $tmp394 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
*(&local5) = $tmp391;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:127
org$frostlang$frostc$FixedArray** $tmp395 = &((org$frostlang$frostc$Methods*) param2)->methods;
org$frostlang$frostc$FixedArray* $tmp396 = *$tmp395;
ITable* $tmp397 = ((frost$collections$Iterable*) $tmp396)->$class->itable;
while ($tmp397->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp397 = $tmp397->next;
}
$fn399 $tmp398 = $tmp397->methods[0];
frost$collections$Iterator* $tmp400 = $tmp398(((frost$collections$Iterable*) $tmp396));
goto block57;
block57:;
ITable* $tmp401 = $tmp400->$class->itable;
while ($tmp401->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp401 = $tmp401->next;
}
$fn403 $tmp402 = $tmp401->methods[0];
frost$core$Bit $tmp404 = $tmp402($tmp400);
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block59; else goto block58;
block58:;
*(&local6) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp406 = $tmp400->$class->itable;
while ($tmp406->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp406 = $tmp406->next;
}
$fn408 $tmp407 = $tmp406->methods[1];
frost$core$Object* $tmp409 = $tmp407($tmp400);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp409)));
org$frostlang$frostc$MethodDecl* $tmp410 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
*(&local6) = ((org$frostlang$frostc$MethodDecl*) $tmp409);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:128
org$frostlang$frostc$MethodDecl* $tmp411 = *(&local6);
frost$collections$Array* $tmp412 = *(&local5);
org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(param0, $tmp411, ((frost$collections$List*) $tmp412));
frost$core$Frost$unref$frost$core$Object$Q($tmp409);
org$frostlang$frostc$MethodDecl* $tmp413 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
*(&local6) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block57;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:130
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Methods));
org$frostlang$frostc$Methods* $tmp414 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp415 = *(&local5);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp414, ((frost$collections$ListView*) $tmp415));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp414)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
frost$collections$Array* $tmp416 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
*(&local5) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$Symbol*) $tmp414);
block55:;
frost$core$Int $tmp417 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SymbolTable.frost:132:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp418 = $tmp384.value;
int64_t $tmp419 = $tmp417.value;
bool $tmp420 = $tmp418 == $tmp419;
frost$core$Bit $tmp421 = (frost$core$Bit) {$tmp420};
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block60; else goto block61;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:133
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp423 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
org$frostlang$frostc$FixedArray** $tmp424 = &((org$frostlang$frostc$Methods*) param1)->methods;
org$frostlang$frostc$FixedArray* $tmp425 = *$tmp424;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp423, ((frost$collections$CollectionView*) $tmp425));
*(&local7) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
frost$collections$Array* $tmp426 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
*(&local7) = $tmp423;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:134
frost$collections$Array* $tmp427 = *(&local7);
org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(param0, ((org$frostlang$frostc$MethodDecl*) param2), ((frost$collections$List*) $tmp427));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:135
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Methods));
org$frostlang$frostc$Methods* $tmp428 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp429 = *(&local7);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp428, ((frost$collections$ListView*) $tmp429));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp428)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
frost$collections$Array* $tmp430 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
*(&local7) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$Symbol*) $tmp428);
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:138
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block53:;
goto block14;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:143
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block14:;
goto block63;
block63:;

}
org$frostlang$frostc$Symbol* org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q(org$frostlang$frostc$SymbolTable* param0, frost$core$String* param1) {

org$frostlang$frostc$Symbol* local0 = NULL;
org$frostlang$frostc$SymbolTable* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:149
frost$collections$HashMap** $tmp431 = &param0->merged;
frost$collections$HashMap* $tmp432 = *$tmp431;
frost$core$Object* $tmp433 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp432, ((frost$collections$HashKey*) param1));
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp433)));
org$frostlang$frostc$Symbol* $tmp434 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
*(&local0) = ((org$frostlang$frostc$Symbol*) $tmp433);
frost$core$Frost$unref$frost$core$Object$Q($tmp433);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:150
org$frostlang$frostc$Symbol* $tmp435 = *(&local0);
frost$core$Bit $tmp436 = (frost$core$Bit) {$tmp435 == NULL};
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:151
frost$collections$HashMap** $tmp438 = &param0->symbols;
frost$collections$HashMap* $tmp439 = *$tmp438;
frost$core$Object* $tmp440 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp439, ((frost$collections$HashKey*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp440)));
org$frostlang$frostc$Symbol* $tmp441 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
*(&local0) = ((org$frostlang$frostc$Symbol*) $tmp440);
frost$core$Frost$unref$frost$core$Object$Q($tmp440);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:152
frost$collections$Array** $tmp442 = &param0->parents;
frost$collections$Array* $tmp443 = *$tmp442;
ITable* $tmp444 = ((frost$collections$Iterable*) $tmp443)->$class->itable;
while ($tmp444->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp444 = $tmp444->next;
}
$fn446 $tmp445 = $tmp444->methods[0];
frost$collections$Iterator* $tmp447 = $tmp445(((frost$collections$Iterable*) $tmp443));
goto block3;
block3:;
ITable* $tmp448 = $tmp447->$class->itable;
while ($tmp448->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp448 = $tmp448->next;
}
$fn450 $tmp449 = $tmp448->methods[0];
frost$core$Bit $tmp451 = $tmp449($tmp447);
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block5; else goto block4;
block4:;
*(&local1) = ((org$frostlang$frostc$SymbolTable*) NULL);
ITable* $tmp453 = $tmp447->$class->itable;
while ($tmp453->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp453 = $tmp453->next;
}
$fn455 $tmp454 = $tmp453->methods[1];
frost$core$Object* $tmp456 = $tmp454($tmp447);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$SymbolTable*) $tmp456)));
org$frostlang$frostc$SymbolTable* $tmp457 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local1) = ((org$frostlang$frostc$SymbolTable*) $tmp456);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:153
org$frostlang$frostc$Symbol* $tmp458 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp459 = *(&local1);
org$frostlang$frostc$Symbol* $tmp460 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp459, param1);
org$frostlang$frostc$Symbol* $tmp461 = org$frostlang$frostc$SymbolTable$merge$org$frostlang$frostc$Symbol$Q$org$frostlang$frostc$Symbol$Q$R$org$frostlang$frostc$Symbol$Q(param0, $tmp458, $tmp460);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
org$frostlang$frostc$Symbol* $tmp462 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
*(&local0) = $tmp461;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
frost$core$Frost$unref$frost$core$Object$Q($tmp456);
org$frostlang$frostc$SymbolTable* $tmp463 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
*(&local1) = ((org$frostlang$frostc$SymbolTable*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:155
org$frostlang$frostc$Symbol* $tmp464 = *(&local0);
frost$core$Bit $tmp465 = (frost$core$Bit) {$tmp464 != NULL};
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:156
frost$collections$HashMap** $tmp467 = &param0->merged;
frost$collections$HashMap* $tmp468 = *$tmp467;
org$frostlang$frostc$Symbol* $tmp469 = *(&local0);
frost$core$Bit $tmp470 = (frost$core$Bit) {$tmp469 != NULL};
bool $tmp471 = $tmp470.value;
if ($tmp471) goto block8; else goto block9;
block9:;
frost$core$Int $tmp472 = (frost$core$Int) {156u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s473, $tmp472, &$s474);
abort(); // unreachable
block8:;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp468, ((frost$collections$HashKey*) param1), ((frost$core$Object*) $tmp469));
goto block7;
block7:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:159
org$frostlang$frostc$Symbol* $tmp475 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
org$frostlang$frostc$Symbol* $tmp476 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return $tmp475;

}
frost$core$String* org$frostlang$frostc$SymbolTable$get_asString$R$frost$core$String(org$frostlang$frostc$SymbolTable* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:164
frost$collections$Array** $tmp477 = &param0->parents;
frost$collections$Array* $tmp478 = *$tmp477;
ITable* $tmp479 = ((frost$collections$CollectionView*) $tmp478)->$class->itable;
while ($tmp479->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp479 = $tmp479->next;
}
$fn481 $tmp480 = $tmp479->methods[0];
frost$core$Int $tmp482 = $tmp480(((frost$collections$CollectionView*) $tmp478));
frost$core$Int$wrapper* $tmp483;
$tmp483 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp483->value = $tmp482;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from SymbolTable.frost:164:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn485 $tmp484 = ($fn485) ((frost$core$Object*) $tmp483)->$class->vtable[0];
frost$core$String* $tmp486 = $tmp484(((frost$core$Object*) $tmp483));
frost$core$String* $tmp487 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s488, $tmp486);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
frost$core$String* $tmp489 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp487, &$s490);
frost$collections$HashMap** $tmp491 = &param0->symbols;
frost$collections$HashMap* $tmp492 = *$tmp491;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from SymbolTable.frost:164:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn494 $tmp493 = ($fn494) ((frost$core$Object*) $tmp492)->$class->vtable[0];
frost$core$String* $tmp495 = $tmp493(((frost$core$Object*) $tmp492));
frost$core$String* $tmp496 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp489, $tmp495);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
frost$core$String* $tmp497 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp496, &$s498);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
return $tmp497;

}
void org$frostlang$frostc$SymbolTable$cleanup(org$frostlang$frostc$SymbolTable* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp499 = &param0->symbols;
frost$collections$HashMap* $tmp500 = *$tmp499;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
frost$core$Weak** $tmp501 = &param0->compiler;
frost$core$Weak* $tmp502 = *$tmp501;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
frost$collections$HashMap** $tmp503 = &param0->merged;
frost$collections$HashMap* $tmp504 = *$tmp503;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
frost$collections$Array** $tmp505 = &param0->parents;
frost$collections$Array* $tmp506 = *$tmp505;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
return;

}






