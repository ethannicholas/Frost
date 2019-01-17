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
typedef frost$collections$Iterator* (*$fn130)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn134)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn139)(frost$collections$Iterator*);
typedef void (*$fn158)(frost$collections$CollectionWriter*, frost$core$Object*);
typedef frost$core$Bit (*$fn172)(org$frostlang$frostc$Symbol*);
typedef frost$collections$Iterator* (*$fn205)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn209)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn214)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn288)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn292)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn297)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn337)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn341)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn346)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn372)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 32, -3970136074145404830, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, -5109432424697330437, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x73\x79\x6d\x62\x6f\x6c\x20\x27", 18, -8206331848375117879, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x28\x70\x72\x65\x76\x69\x6f\x75\x73\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x77\x61\x73\x20\x61\x74\x20", 31, 1047353836888504095, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, -5109432424697330437, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, -5109432424697330437, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, -5109432424697330437, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, -5109432424697330437, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, -5109432424697330437, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s320 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, -5109432424697330437, NULL };
static frost$core$String $s321 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x6d\x65\x72\x67\x65\x28\x73\x79\x6d\x62\x6f\x6c\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x2c\x20\x69\x6e\x68\x65\x72\x69\x74\x65\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 178, 374210069310759224, NULL };
static frost$core$String $s364 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x2e\x66\x72\x6f\x73\x74", 17, -5109432424697330437, NULL };
static frost$core$String $s365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x3c\x70\x61\x72\x65\x6e\x74\x73\x28", 20, 4852834911121343140, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x2c\x20\x73\x79\x6d\x62\x6f\x6c\x73\x3d", 11, -957388734828816992, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };

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
frost$core$Bit $tmp65 = frost$core$Bit$init$builtin_bit($tmp64 != NULL);
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp67 = (frost$core$Int64) {38};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s68, $tmp67, &$s69);
abort(); // unreachable
block5:;
org$frostlang$frostc$Symbol$Kind* $tmp70 = &$tmp64->kind;
org$frostlang$frostc$Symbol$Kind $tmp71 = *$tmp70;
frost$core$Int64 $tmp72 = $tmp71.$rawValue;
frost$core$Int64 $tmp73 = (frost$core$Int64) {5};
frost$core$Bit $tmp74 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp72, $tmp73);
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block8; else goto block9;
block8:;
// line 40
frost$collections$Array* $tmp76 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp76);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$collections$Array* $tmp77 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local1) = $tmp76;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// unreffing REF($79:frost.collections.Array<org.frostlang.frostc.MethodDecl>)
// line 41
frost$collections$Array* $tmp78 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp78, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) param1)));
// line 42
frost$collections$Array* $tmp79 = *(&local1);
org$frostlang$frostc$Symbol* $tmp80 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp79, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp80)));
// line 43
frost$collections$HashMap** $tmp81 = &param0->symbols;
frost$collections$HashMap* $tmp82 = *$tmp81;
org$frostlang$frostc$Methods* $tmp83 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp84 = *(&local1);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp83, ((frost$collections$ListView*) $tmp84));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp82, ((frost$collections$Key*) param2), ((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp83)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// unreffing REF($110:org.frostlang.frostc.Methods)
// line 44
frost$collections$Array* $tmp85 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// unreffing methods
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp86 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
// unreffing old
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return;
block9:;
frost$core$Int64 $tmp87 = (frost$core$Int64) {6};
frost$core$Bit $tmp88 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp72, $tmp87);
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block10; else goto block7;
block10:;
// line 47
frost$collections$Array* $tmp90 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp90);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$collections$Array* $tmp91 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local2) = $tmp90;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing REF($137:frost.collections.Array<org.frostlang.frostc.MethodDecl>)
// line 48
frost$collections$Array* $tmp92 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp92, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) param1)));
// line 49
frost$collections$Array* $tmp93 = *(&local2);
org$frostlang$frostc$Symbol* $tmp94 = *(&local0);
org$frostlang$frostc$FixedArray** $tmp95 = &((org$frostlang$frostc$Methods*) $tmp94)->methods;
org$frostlang$frostc$FixedArray* $tmp96 = *$tmp95;
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp93, ((frost$collections$CollectionView*) $tmp96));
// line 50
frost$collections$HashMap** $tmp97 = &param0->symbols;
frost$collections$HashMap* $tmp98 = *$tmp97;
org$frostlang$frostc$Methods* $tmp99 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp100 = *(&local2);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp99, ((frost$collections$ListView*) $tmp100));
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp98, ((frost$collections$Key*) param2), ((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp99)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
// unreffing REF($171:org.frostlang.frostc.Methods)
// line 51
frost$collections$Array* $tmp101 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// unreffing methods
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp102 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// unreffing old
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return;
block7:;
goto block4;
block4:;
// line 55
frost$core$Weak** $tmp103 = &param0->compiler;
frost$core$Weak* $tmp104 = *$tmp103;
frost$core$Object* $tmp105 = frost$core$Weak$get$R$frost$core$Weak$T($tmp104);
org$frostlang$frostc$Position* $tmp106 = &param1->position;
org$frostlang$frostc$Position $tmp107 = *$tmp106;
frost$core$String* $tmp108 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s109, param2);
frost$core$String* $tmp110 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp108, &$s111);
org$frostlang$frostc$Symbol* $tmp112 = *(&local0);
frost$core$Bit $tmp113 = frost$core$Bit$init$builtin_bit($tmp112 != NULL);
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp115 = (frost$core$Int64) {56};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s116, $tmp115, &$s117);
abort(); // unreachable
block11:;
org$frostlang$frostc$Position* $tmp118 = &$tmp112->position;
org$frostlang$frostc$Position $tmp119 = *$tmp118;
org$frostlang$frostc$Position$wrapper* $tmp120;
$tmp120 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp120->value = $tmp119;
frost$core$String* $tmp121 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp110, ((frost$core$Object*) $tmp120));
frost$core$String* $tmp122 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp121, &$s123);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp105), $tmp107, $tmp122);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
// unreffing REF($217:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// unreffing REF($216:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
// unreffing REF($215:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// unreffing REF($203:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
// unreffing REF($202:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp105);
// unreffing REF($198:frost.core.Weak.T)
org$frostlang$frostc$Symbol* $tmp124 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
// unreffing old
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return;

}
void org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(org$frostlang$frostc$SymbolTable* param0, org$frostlang$frostc$MethodDecl* param1, frost$collections$List* param2) {

org$frostlang$frostc$MethodDecl* local0 = NULL;
org$frostlang$frostc$MethodDecl* local1 = NULL;
// line 61
frost$core$Bit $tmp125 = org$frostlang$frostc$MethodDecl$get_heritable$R$frost$core$Bit(param1);
frost$core$Bit $tmp126 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp125);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block1; else goto block2;
block1:;
// line 62
return;
block2:;
// line 64
ITable* $tmp128 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp128->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp128 = $tmp128->next;
}
$fn130 $tmp129 = $tmp128->methods[0];
frost$collections$Iterator* $tmp131 = $tmp129(((frost$collections$Iterable*) param2));
goto block3;
block3:;
ITable* $tmp132 = $tmp131->$class->itable;
while ($tmp132->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp132 = $tmp132->next;
}
$fn134 $tmp133 = $tmp132->methods[0];
frost$core$Bit $tmp135 = $tmp133($tmp131);
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block5; else goto block4;
block4:;
*(&local0) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp137 = $tmp131->$class->itable;
while ($tmp137->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp137 = $tmp137->next;
}
$fn139 $tmp138 = $tmp137->methods[1];
frost$core$Object* $tmp140 = $tmp138($tmp131);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp140)));
org$frostlang$frostc$MethodDecl* $tmp141 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local0) = ((org$frostlang$frostc$MethodDecl*) $tmp140);
// line 65
frost$core$Weak** $tmp142 = &param0->compiler;
frost$core$Weak* $tmp143 = *$tmp142;
frost$core$Object* $tmp144 = frost$core$Weak$get$R$frost$core$Weak$T($tmp143);
org$frostlang$frostc$MethodDecl* $tmp145 = *(&local0);
org$frostlang$frostc$MethodDecl* $tmp146 = org$frostlang$frostc$Compiler$getOverriddenMethod$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$MethodDecl$Q(((org$frostlang$frostc$Compiler*) $tmp144), $tmp145);
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
org$frostlang$frostc$MethodDecl* $tmp147 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
*(&local1) = $tmp146;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
// unreffing REF($37:org.frostlang.frostc.MethodDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp144);
// unreffing REF($34:frost.core.Weak.T)
// line 66
org$frostlang$frostc$MethodDecl* $tmp148 = *(&local1);
bool $tmp149 = $tmp148 == param1;
frost$core$Bit $tmp150 = frost$core$Bit$init$builtin_bit($tmp149);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block6; else goto block7;
block6:;
// line 67
org$frostlang$frostc$MethodDecl* $tmp152 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// unreffing overridden
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp140);
// unreffing REF($22:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp153 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
// unreffing test
*(&local0) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
// unreffing REF($11:frost.collections.Iterator<frost.collections.Iterable.T>)
return;
block7:;
org$frostlang$frostc$MethodDecl* $tmp154 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
// unreffing overridden
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp140);
// unreffing REF($22:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp155 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
// unreffing test
*(&local0) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
// unreffing REF($11:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 70
ITable* $tmp156 = ((frost$collections$CollectionWriter*) param2)->$class->itable;
while ($tmp156->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp156 = $tmp156->next;
}
$fn158 $tmp157 = $tmp156->methods[0];
$tmp157(((frost$collections$CollectionWriter*) param2), ((frost$core$Object*) param1));
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
frost$core$Bit $tmp159 = frost$core$Bit$init$builtin_bit(param2 == NULL);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block1; else goto block2;
block1:;
// line 76
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block2:;
// line 78
frost$core$Bit $tmp161 = frost$core$Bit$init$builtin_bit(param1 == NULL);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block3; else goto block4;
block3:;
// line 79
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block4:;
// line 81
bool $tmp163 = param1 == param2;
frost$core$Bit $tmp164 = frost$core$Bit$init$builtin_bit($tmp163);
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block5; else goto block6;
block5:;
// line 82
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block6:;
// line 84
frost$core$Bit $tmp166 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp168 = (frost$core$Int64) {84};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s169, $tmp168, &$s170);
abort(); // unreachable
block9:;
$fn172 $tmp171 = ($fn172) param2->$class->vtable[2];
frost$core$Bit $tmp173 = $tmp171(param2);
frost$core$Bit $tmp174 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp173);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block7; else goto block8;
block7:;
// line 85
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block8:;
// line 87
frost$core$Bit $tmp176 = frost$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp178 = (frost$core$Int64) {87};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s179, $tmp178, &$s180);
abort(); // unreachable
block11:;
org$frostlang$frostc$Symbol$Kind* $tmp181 = &param1->kind;
org$frostlang$frostc$Symbol$Kind $tmp182 = *$tmp181;
frost$core$Int64 $tmp183 = $tmp182.$rawValue;
frost$core$Int64 $tmp184 = (frost$core$Int64) {5};
frost$core$Bit $tmp185 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp183, $tmp184);
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block14; else goto block15;
block14:;
// line 89
frost$core$Bit $tmp187 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp189 = (frost$core$Int64) {89};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s190, $tmp189, &$s191);
abort(); // unreachable
block16:;
org$frostlang$frostc$Symbol$Kind* $tmp192 = &param2->kind;
org$frostlang$frostc$Symbol$Kind $tmp193 = *$tmp192;
frost$core$Int64 $tmp194 = $tmp193.$rawValue;
frost$core$Int64 $tmp195 = (frost$core$Int64) {6};
frost$core$Bit $tmp196 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp194, $tmp195);
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block19; else goto block20;
block19:;
// line 91
frost$collections$Array* $tmp198 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp198);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
frost$collections$Array* $tmp199 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
*(&local0) = $tmp198;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
// unreffing REF($78:frost.collections.Array<org.frostlang.frostc.MethodDecl>)
// line 92
frost$collections$Array* $tmp200 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp200, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) param1)));
// line 93
org$frostlang$frostc$FixedArray** $tmp201 = &((org$frostlang$frostc$Methods*) param2)->methods;
org$frostlang$frostc$FixedArray* $tmp202 = *$tmp201;
ITable* $tmp203 = ((frost$collections$Iterable*) $tmp202)->$class->itable;
while ($tmp203->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp203 = $tmp203->next;
}
$fn205 $tmp204 = $tmp203->methods[0];
frost$collections$Iterator* $tmp206 = $tmp204(((frost$collections$Iterable*) $tmp202));
goto block21;
block21:;
ITable* $tmp207 = $tmp206->$class->itable;
while ($tmp207->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp207 = $tmp207->next;
}
$fn209 $tmp208 = $tmp207->methods[0];
frost$core$Bit $tmp210 = $tmp208($tmp206);
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block23; else goto block22;
block22:;
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp212 = $tmp206->$class->itable;
while ($tmp212->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp212 = $tmp212->next;
}
$fn214 $tmp213 = $tmp212->methods[1];
frost$core$Object* $tmp215 = $tmp213($tmp206);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp215)));
org$frostlang$frostc$MethodDecl* $tmp216 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
*(&local1) = ((org$frostlang$frostc$MethodDecl*) $tmp215);
// line 94
org$frostlang$frostc$MethodDecl* $tmp217 = *(&local1);
frost$collections$Array* $tmp218 = *(&local0);
org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(param0, $tmp217, ((frost$collections$List*) $tmp218));
frost$core$Frost$unref$frost$core$Object$Q($tmp215);
// unreffing REF($115:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp219 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// unreffing m
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block21;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
// unreffing REF($104:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 96
org$frostlang$frostc$Methods* $tmp220 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp221 = *(&local0);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp220, ((frost$collections$ListView*) $tmp221));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp220)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
// unreffing REF($141:org.frostlang.frostc.Methods)
frost$collections$Array* $tmp222 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// unreffing methods
*(&local0) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$Symbol*) $tmp220);
block20:;
frost$core$Int64 $tmp223 = (frost$core$Int64) {5};
frost$core$Bit $tmp224 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp194, $tmp223);
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block24; else goto block25;
block24:;
// line 99
frost$core$Weak** $tmp226 = &param0->compiler;
frost$core$Weak* $tmp227 = *$tmp226;
frost$core$Object* $tmp228 = frost$core$Weak$get$R$frost$core$Weak$T($tmp227);
org$frostlang$frostc$MethodDecl* $tmp229 = org$frostlang$frostc$Compiler$getOverriddenMethod$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$MethodDecl$Q(((org$frostlang$frostc$Compiler*) $tmp228), ((org$frostlang$frostc$MethodDecl*) param2));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
org$frostlang$frostc$MethodDecl* $tmp230 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
*(&local2) = $tmp229;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
// unreffing REF($168:org.frostlang.frostc.MethodDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp228);
// unreffing REF($165:frost.core.Weak.T)
// line 100
frost$core$Weak** $tmp231 = &param0->compiler;
frost$core$Weak* $tmp232 = *$tmp231;
frost$core$Object* $tmp233 = frost$core$Weak$get$R$frost$core$Weak$T($tmp232);
org$frostlang$frostc$MethodDecl* $tmp234 = org$frostlang$frostc$Compiler$getOverriddenMethod$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$MethodDecl$Q(((org$frostlang$frostc$Compiler*) $tmp233), ((org$frostlang$frostc$MethodDecl*) param1));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
org$frostlang$frostc$MethodDecl* $tmp235 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
*(&local3) = $tmp234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// unreffing REF($189:org.frostlang.frostc.MethodDecl?)
frost$core$Frost$unref$frost$core$Object$Q($tmp233);
// unreffing REF($186:frost.core.Weak.T)
// line 101
org$frostlang$frostc$MethodDecl* $tmp236 = *(&local2);
bool $tmp237 = $tmp236 == ((org$frostlang$frostc$MethodDecl*) param1);
frost$core$Bit $tmp238 = frost$core$Bit$init$builtin_bit($tmp237);
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block28; else goto block29;
block28:;
*(&local5) = $tmp238;
goto block30;
block29:;
org$frostlang$frostc$MethodDecl* $tmp240 = *(&local3);
bool $tmp241 = $tmp240 == ((org$frostlang$frostc$MethodDecl*) param2);
frost$core$Bit $tmp242 = frost$core$Bit$init$builtin_bit($tmp241);
*(&local5) = $tmp242;
goto block30;
block30:;
frost$core$Bit $tmp243 = *(&local5);
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block31; else goto block32;
block31:;
*(&local4) = $tmp243;
goto block33;
block32:;
org$frostlang$frostc$MethodDecl* $tmp245 = *(&local2);
frost$core$Bit $tmp246 = frost$core$Bit$init$builtin_bit($tmp245 != NULL);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block34; else goto block35;
block34:;
org$frostlang$frostc$MethodDecl* $tmp248 = *(&local2);
org$frostlang$frostc$MethodDecl* $tmp249 = *(&local3);
bool $tmp250 = $tmp248 == $tmp249;
frost$core$Bit $tmp251 = frost$core$Bit$init$builtin_bit($tmp250);
*(&local6) = $tmp251;
goto block36;
block35:;
*(&local6) = $tmp246;
goto block36;
block36:;
frost$core$Bit $tmp252 = *(&local6);
*(&local4) = $tmp252;
goto block33;
block33:;
frost$core$Bit $tmp253 = *(&local4);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block26; else goto block27;
block26:;
// line 104
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$MethodDecl* $tmp255 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
// unreffing overridden2
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp256 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// unreffing overridden1
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
return param1;
block27:;
// line 106
frost$collections$Array* $tmp257 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp257);
*(&local7) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$collections$Array* $tmp258 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local7) = $tmp257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// unreffing REF($257:frost.collections.Array<org.frostlang.frostc.MethodDecl>)
// line 107
frost$collections$Array* $tmp259 = *(&local7);
frost$collections$Array$add$frost$collections$Array$T($tmp259, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) param1)));
// line 108
frost$collections$Array* $tmp260 = *(&local7);
frost$collections$Array$add$frost$collections$Array$T($tmp260, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) param2)));
// line 109
org$frostlang$frostc$Methods* $tmp261 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp262 = *(&local7);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp261, ((frost$collections$ListView*) $tmp262));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp261)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
// unreffing REF($283:org.frostlang.frostc.Methods)
frost$collections$Array* $tmp263 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
// unreffing methods
*(&local7) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$MethodDecl* $tmp264 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
// unreffing overridden2
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp265 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
// unreffing overridden1
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
return ((org$frostlang$frostc$Symbol*) $tmp261);
block25:;
// line 112
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block18:;
goto block13;
block15:;
frost$core$Int64 $tmp266 = (frost$core$Int64) {6};
frost$core$Bit $tmp267 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp183, $tmp266);
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block37; else goto block38;
block37:;
// line 117
frost$core$Bit $tmp269 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp271 = (frost$core$Int64) {117};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s272, $tmp271, &$s273);
abort(); // unreachable
block39:;
org$frostlang$frostc$Symbol$Kind* $tmp274 = &param2->kind;
org$frostlang$frostc$Symbol$Kind $tmp275 = *$tmp274;
frost$core$Int64 $tmp276 = $tmp275.$rawValue;
frost$core$Int64 $tmp277 = (frost$core$Int64) {6};
frost$core$Bit $tmp278 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp276, $tmp277);
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block42; else goto block43;
block42:;
// line 119
frost$collections$Array* $tmp280 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
org$frostlang$frostc$FixedArray** $tmp281 = &((org$frostlang$frostc$Methods*) param1)->methods;
org$frostlang$frostc$FixedArray* $tmp282 = *$tmp281;
frost$collections$Array$init$frost$collections$ListView$LTfrost$collections$Array$T$GT($tmp280, ((frost$collections$ListView*) $tmp282));
*(&local8) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$collections$Array* $tmp283 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
*(&local8) = $tmp280;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
// unreffing REF($335:frost.collections.Array<org.frostlang.frostc.MethodDecl>)
// line 120
org$frostlang$frostc$FixedArray** $tmp284 = &((org$frostlang$frostc$Methods*) param2)->methods;
org$frostlang$frostc$FixedArray* $tmp285 = *$tmp284;
ITable* $tmp286 = ((frost$collections$Iterable*) $tmp285)->$class->itable;
while ($tmp286->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp286 = $tmp286->next;
}
$fn288 $tmp287 = $tmp286->methods[0];
frost$collections$Iterator* $tmp289 = $tmp287(((frost$collections$Iterable*) $tmp285));
goto block44;
block44:;
ITable* $tmp290 = $tmp289->$class->itable;
while ($tmp290->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp290 = $tmp290->next;
}
$fn292 $tmp291 = $tmp290->methods[0];
frost$core$Bit $tmp293 = $tmp291($tmp289);
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block46; else goto block45;
block45:;
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp295 = $tmp289->$class->itable;
while ($tmp295->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp295 = $tmp295->next;
}
$fn297 $tmp296 = $tmp295->methods[1];
frost$core$Object* $tmp298 = $tmp296($tmp289);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp298)));
org$frostlang$frostc$MethodDecl* $tmp299 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) $tmp298);
// line 121
org$frostlang$frostc$MethodDecl* $tmp300 = *(&local9);
frost$collections$Array* $tmp301 = *(&local8);
org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(param0, $tmp300, ((frost$collections$List*) $tmp301));
frost$core$Frost$unref$frost$core$Object$Q($tmp298);
// unreffing REF($371:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp302 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// unreffing m
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block44;
block46:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
// unreffing REF($360:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 123
org$frostlang$frostc$Methods* $tmp303 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp304 = *(&local8);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp303, ((frost$collections$ListView*) $tmp304));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp303)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
// unreffing REF($397:org.frostlang.frostc.Methods)
frost$collections$Array* $tmp305 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
// unreffing methods
*(&local8) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$Symbol*) $tmp303);
block43:;
frost$core$Int64 $tmp306 = (frost$core$Int64) {5};
frost$core$Bit $tmp307 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp276, $tmp306);
bool $tmp308 = $tmp307.value;
if ($tmp308) goto block47; else goto block48;
block47:;
// line 126
frost$collections$Array* $tmp309 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
org$frostlang$frostc$FixedArray** $tmp310 = &((org$frostlang$frostc$Methods*) param1)->methods;
org$frostlang$frostc$FixedArray* $tmp311 = *$tmp310;
frost$collections$Array$init$frost$collections$ListView$LTfrost$collections$Array$T$GT($tmp309, ((frost$collections$ListView*) $tmp311));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
frost$collections$Array* $tmp312 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
*(&local10) = $tmp309;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
// unreffing REF($418:frost.collections.Array<org.frostlang.frostc.MethodDecl>)
// line 127
frost$collections$Array* $tmp313 = *(&local10);
org$frostlang$frostc$SymbolTable$addIfNotOverridden$org$frostlang$frostc$MethodDecl$frost$collections$List$LTorg$frostlang$frostc$MethodDecl$GT(param0, ((org$frostlang$frostc$MethodDecl*) param2), ((frost$collections$List*) $tmp313));
// line 128
org$frostlang$frostc$Methods* $tmp314 = (org$frostlang$frostc$Methods*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Methods$class);
frost$collections$Array* $tmp315 = *(&local10);
org$frostlang$frostc$Methods$init$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT($tmp314, ((frost$collections$ListView*) $tmp315));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp314)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
// unreffing REF($442:org.frostlang.frostc.Methods)
frost$collections$Array* $tmp316 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
// unreffing methods
*(&local10) = ((frost$collections$Array*) NULL);
return ((org$frostlang$frostc$Symbol*) $tmp314);
block48:;
// line 131
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block41:;
goto block13;
block38:;
// line 136
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block13:;
frost$core$Bit $tmp317 = frost$core$Bit$init$builtin_bit(false);
bool $tmp318 = $tmp317.value;
if ($tmp318) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp319 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s320, $tmp319, &$s321);
abort(); // unreachable
block49:;
abort(); // unreachable

}
org$frostlang$frostc$Symbol* org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q(org$frostlang$frostc$SymbolTable* param0, frost$core$String* param1) {

org$frostlang$frostc$Symbol* local0 = NULL;
org$frostlang$frostc$SymbolTable* local1 = NULL;
// line 142
frost$collections$HashMap** $tmp322 = &param0->merged;
frost$collections$HashMap* $tmp323 = *$tmp322;
frost$core$Object* $tmp324 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp323, ((frost$collections$Key*) param1));
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp324)));
org$frostlang$frostc$Symbol* $tmp325 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local0) = ((org$frostlang$frostc$Symbol*) $tmp324);
frost$core$Frost$unref$frost$core$Object$Q($tmp324);
// unreffing REF($5:frost.collections.HashMap.V?)
// line 143
org$frostlang$frostc$Symbol* $tmp326 = *(&local0);
frost$core$Bit $tmp327 = frost$core$Bit$init$builtin_bit($tmp326 == NULL);
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block1; else goto block2;
block1:;
// line 144
frost$collections$HashMap** $tmp329 = &param0->symbols;
frost$collections$HashMap* $tmp330 = *$tmp329;
frost$core$Object* $tmp331 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp330, ((frost$collections$Key*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Symbol*) $tmp331)));
org$frostlang$frostc$Symbol* $tmp332 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
*(&local0) = ((org$frostlang$frostc$Symbol*) $tmp331);
frost$core$Frost$unref$frost$core$Object$Q($tmp331);
// unreffing REF($28:frost.collections.HashMap.V?)
// line 145
frost$collections$Array** $tmp333 = &param0->parents;
frost$collections$Array* $tmp334 = *$tmp333;
ITable* $tmp335 = ((frost$collections$Iterable*) $tmp334)->$class->itable;
while ($tmp335->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp335 = $tmp335->next;
}
$fn337 $tmp336 = $tmp335->methods[0];
frost$collections$Iterator* $tmp338 = $tmp336(((frost$collections$Iterable*) $tmp334));
goto block3;
block3:;
ITable* $tmp339 = $tmp338->$class->itable;
while ($tmp339->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp339 = $tmp339->next;
}
$fn341 $tmp340 = $tmp339->methods[0];
frost$core$Bit $tmp342 = $tmp340($tmp338);
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block5; else goto block4;
block4:;
*(&local1) = ((org$frostlang$frostc$SymbolTable*) NULL);
ITable* $tmp344 = $tmp338->$class->itable;
while ($tmp344->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp344 = $tmp344->next;
}
$fn346 $tmp345 = $tmp344->methods[1];
frost$core$Object* $tmp347 = $tmp345($tmp338);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$SymbolTable*) $tmp347)));
org$frostlang$frostc$SymbolTable* $tmp348 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
*(&local1) = ((org$frostlang$frostc$SymbolTable*) $tmp347);
// line 146
org$frostlang$frostc$Symbol* $tmp349 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp350 = *(&local1);
org$frostlang$frostc$Symbol* $tmp351 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp350, param1);
org$frostlang$frostc$Symbol* $tmp352 = org$frostlang$frostc$SymbolTable$merge$org$frostlang$frostc$Symbol$Q$org$frostlang$frostc$Symbol$Q$R$org$frostlang$frostc$Symbol$Q(param0, $tmp349, $tmp351);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
org$frostlang$frostc$Symbol* $tmp353 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
*(&local0) = $tmp352;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
// unreffing REF($68:org.frostlang.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
// unreffing REF($67:org.frostlang.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q($tmp347);
// unreffing REF($56:frost.collections.Iterator.T)
org$frostlang$frostc$SymbolTable* $tmp354 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
// unreffing p
*(&local1) = ((org$frostlang$frostc$SymbolTable*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
// unreffing REF($45:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 148
org$frostlang$frostc$Symbol* $tmp355 = *(&local0);
frost$core$Bit $tmp356 = frost$core$Bit$init$builtin_bit($tmp355 != NULL);
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block6; else goto block7;
block6:;
// line 149
frost$collections$HashMap** $tmp358 = &param0->merged;
frost$collections$HashMap* $tmp359 = *$tmp358;
org$frostlang$frostc$Symbol* $tmp360 = *(&local0);
frost$core$Bit $tmp361 = frost$core$Bit$init$builtin_bit($tmp360 != NULL);
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp363 = (frost$core$Int64) {149};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s364, $tmp363, &$s365);
abort(); // unreachable
block8:;
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp359, ((frost$collections$Key*) param1), ((frost$core$Object*) $tmp360));
goto block7;
block7:;
goto block2;
block2:;
// line 152
org$frostlang$frostc$Symbol* $tmp366 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
org$frostlang$frostc$Symbol* $tmp367 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
// unreffing result
*(&local0) = ((org$frostlang$frostc$Symbol*) NULL);
return $tmp366;

}
frost$core$String* org$frostlang$frostc$SymbolTable$convert$R$frost$core$String(org$frostlang$frostc$SymbolTable* param0) {

// line 157
frost$collections$Array** $tmp368 = &param0->parents;
frost$collections$Array* $tmp369 = *$tmp368;
ITable* $tmp370 = ((frost$collections$CollectionView*) $tmp369)->$class->itable;
while ($tmp370->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp370 = $tmp370->next;
}
$fn372 $tmp371 = $tmp370->methods[0];
frost$core$Int64 $tmp373 = $tmp371(((frost$collections$CollectionView*) $tmp369));
frost$core$Int64$wrapper* $tmp374;
$tmp374 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp374->value = $tmp373;
frost$core$String* $tmp375 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s376, ((frost$core$Object*) $tmp374));
frost$core$String* $tmp377 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp375, &$s378);
frost$collections$HashMap** $tmp379 = &param0->symbols;
frost$collections$HashMap* $tmp380 = *$tmp379;
frost$core$String* $tmp381 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp377, ((frost$core$Object*) $tmp380));
frost$core$String* $tmp382 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp381, &$s383);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
// unreffing REF($13:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
// unreffing REF($12:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
// unreffing REF($8:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
// unreffing REF($7:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
// unreffing REF($6:frost.core.Object)
return $tmp382;

}
void org$frostlang$frostc$SymbolTable$cleanup(org$frostlang$frostc$SymbolTable* param0) {

// line 4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$HashMap** $tmp384 = &param0->symbols;
frost$collections$HashMap* $tmp385 = *$tmp384;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
frost$core$Weak** $tmp386 = &param0->compiler;
frost$core$Weak* $tmp387 = *$tmp386;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$collections$HashMap** $tmp388 = &param0->merged;
frost$collections$HashMap* $tmp389 = *$tmp388;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$collections$Array** $tmp390 = &param0->parents;
frost$collections$Array* $tmp391 = *$tmp390;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
return;

}






