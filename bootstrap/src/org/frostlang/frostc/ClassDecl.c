#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/io/File.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/collections/MapView.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/ClassDecl/Kind.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/ClassDecl/GenericParameter.h"
#include "frost/core/Frost.h"
#include "frost/core/Weak.h"
#include "frost/core/Bit.h"
#include "frost/collections/HashMap.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/List.h"
#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/collections/Stack.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/String/Index.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/core/MutableString.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/MethodDecl.h"


static frost$core$String $s1;
org$frostlang$frostc$ClassDecl$class_type org$frostlang$frostc$ClassDecl$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$ClassDecl$get_asString$R$frost$core$String, org$frostlang$frostc$ClassDecl$cleanup, org$frostlang$frostc$ClassDecl$simpleName$R$frost$core$String, org$frostlang$frostc$ClassDecl$typeWithParameters$R$org$frostlang$frostc$Type, org$frostlang$frostc$ClassDecl$isSpecialization$R$frost$core$Bit} };

typedef frost$collections$Iterator* (*$fn93)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn97)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn102)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn158)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn171)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn175)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn180)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn232)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn236)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn241)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn263)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn267)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn272)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn285)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn289)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn294)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn307)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn311)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn316)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 30, 3316826903706405826, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, 8593454616919477763, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x69\x6e\x69\x74\x28\x73\x6f\x75\x72\x63\x65\x3a\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x61\x6c\x69\x61\x73\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x2c\x20\x64\x6f\x63\x63\x6f\x6d\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2c\x20\x6b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x64\x65\x63\x6c\x61\x72\x65\x64\x53\x75\x70\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x2c\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x2c\x20\x70\x61\x72\x65\x6e\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x29", 542, 2920230446552599862, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, 8593454616919477763, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s248 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };

void org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable(org$frostlang$frostc$ClassDecl* param0, frost$io$File* param1, org$frostlang$frostc$Position param2, frost$collections$MapView* param3, frost$core$String* param4, org$frostlang$frostc$Annotations* param5, org$frostlang$frostc$ClassDecl$Kind param6, org$frostlang$frostc$Type* param7, frost$collections$ListView* param8, frost$collections$Array* param9, org$frostlang$frostc$SymbolTable* param10) {

org$frostlang$frostc$ClassDecl$GenericParameter* local0 = NULL;
// line 81
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type** $tmp2 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Type** $tmp4 = &param0->rawSuper;
*$tmp4 = ((org$frostlang$frostc$Type*) NULL);
// line 86
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp5 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$collections$Array** $tmp6 = &param0->rawInterfaces;
frost$collections$Array* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$collections$Array** $tmp8 = &param0->rawInterfaces;
*$tmp8 = $tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
// line 90
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp9 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$collections$Array** $tmp10 = &param0->fields;
frost$collections$Array* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$collections$Array** $tmp12 = &param0->fields;
*$tmp12 = $tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
// line 92
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp13 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp13);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$collections$Array** $tmp14 = &param0->methods;
frost$collections$Array* $tmp15 = *$tmp14;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$collections$Array** $tmp16 = &param0->methods;
*$tmp16 = $tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// line 94
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp17 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp17);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$collections$Array** $tmp18 = &param0->classes;
frost$collections$Array* $tmp19 = *$tmp18;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$collections$Array** $tmp20 = &param0->classes;
*$tmp20 = $tmp17;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
// line 96
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp21 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp21);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$collections$Array** $tmp22 = &param0->choiceCases;
frost$collections$Array* $tmp23 = *$tmp22;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$collections$Array** $tmp24 = &param0->choiceCases;
*$tmp24 = $tmp21;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// line 99
FROST_ASSERT(24 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp25 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp25, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Weak** $tmp26 = &param0->owner;
frost$core$Weak* $tmp27 = *$tmp26;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Weak** $tmp28 = &param0->owner;
*$tmp28 = $tmp25;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
// line 104
frost$core$Bit $tmp29 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp30 = &param0->symbolTableResolved;
*$tmp30 = $tmp29;
// line 106
frost$core$Bit $tmp31 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp32 = &param0->external;
*$tmp32 = $tmp31;
// line 108
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp33 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp33);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$collections$Array** $tmp34 = &param0->virtualMethods;
frost$collections$Array* $tmp35 = *$tmp34;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$collections$Array** $tmp36 = &param0->virtualMethods;
*$tmp36 = $tmp33;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// line 110
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp37 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp37);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$collections$HashMap** $tmp38 = &param0->classResolutionCache;
frost$collections$HashMap* $tmp39 = *$tmp38;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$collections$HashMap** $tmp40 = &param0->classResolutionCache;
*$tmp40 = $tmp37;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$Bit $tmp41 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit(param7);
frost$core$Bit $tmp42 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp41);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp44 = (frost$core$Int64) {115};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s45, $tmp44, &$s46);
abort(); // unreachable
block1:;
// line 118
org$frostlang$frostc$Position* $tmp47 = &param0->position;
*$tmp47 = param2;
// line 119
frost$core$String** $tmp48 = &((org$frostlang$frostc$Symbol*) param7)->name;
frost$core$String* $tmp49 = *$tmp48;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$String** $tmp50 = &param0->name;
frost$core$String* $tmp51 = *$tmp50;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$core$String** $tmp52 = &param0->name;
*$tmp52 = $tmp49;
// line 120
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$Type** $tmp53 = &param0->type;
org$frostlang$frostc$Type* $tmp54 = *$tmp53;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
org$frostlang$frostc$Type** $tmp55 = &param0->type;
*$tmp55 = param7;
// line 121
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp56 = &param0->source;
frost$io$File* $tmp57 = *$tmp56;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$io$File** $tmp58 = &param0->source;
*$tmp58 = param1;
// line 122
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp59 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init$frost$collections$MapView$LTfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$GT($tmp59, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) $tmp59)));
frost$collections$MapView** $tmp60 = &param0->aliases;
frost$collections$MapView* $tmp61 = *$tmp60;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$collections$MapView** $tmp62 = &param0->aliases;
*$tmp62 = ((frost$collections$MapView*) $tmp59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// line 123
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp63 = &param0->doccomment;
frost$core$String* $tmp64 = *$tmp63;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$String** $tmp65 = &param0->doccomment;
*$tmp65 = param4;
// line 124
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$Annotations** $tmp66 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp67 = *$tmp66;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
org$frostlang$frostc$Annotations** $tmp68 = &param0->annotations;
*$tmp68 = param5;
// line 125
org$frostlang$frostc$ClassDecl$Kind* $tmp69 = &param0->classKind;
*$tmp69 = param6;
// line 126
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp70 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp70, ((frost$collections$CollectionView*) param8));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$collections$Array** $tmp71 = &param0->declaredSupers;
frost$collections$Array* $tmp72 = *$tmp71;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$collections$Array** $tmp73 = &param0->declaredSupers;
*$tmp73 = $tmp70;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
// line 127
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$List*) param9)));
frost$collections$List** $tmp74 = &param0->parameters;
frost$collections$List* $tmp75 = *$tmp74;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$collections$List** $tmp76 = &param0->parameters;
*$tmp76 = ((frost$collections$List*) param9);
// line 128
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$SymbolTable));
org$frostlang$frostc$SymbolTable* $tmp77 = (org$frostlang$frostc$SymbolTable*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$SymbolTable$class);
org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$SymbolTable($tmp77, param10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
org$frostlang$frostc$SymbolTable** $tmp78 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp79 = *$tmp78;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
org$frostlang$frostc$SymbolTable** $tmp80 = &param0->symbolTable;
*$tmp80 = $tmp77;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// line 129
frost$core$Int64 $tmp81 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$Resolution $tmp82 = org$frostlang$frostc$Compiler$Resolution$init$frost$core$Int64($tmp81);
org$frostlang$frostc$Compiler$Resolution* $tmp83 = &param0->resolved;
*$tmp83 = $tmp82;
// line 130
org$frostlang$frostc$SymbolTable** $tmp84 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp85 = *$tmp84;
frost$core$Weak** $tmp86 = &$tmp85->compiler;
frost$core$Weak* $tmp87 = *$tmp86;
frost$core$Object* $tmp88 = frost$core$Weak$get$R$frost$core$Weak$T($tmp87);
frost$collections$Stack** $tmp89 = &((org$frostlang$frostc$Compiler*) $tmp88)->currentClass;
frost$collections$Stack* $tmp90 = *$tmp89;
frost$collections$Stack$push$frost$collections$Stack$T($tmp90, ((frost$core$Object*) param0));
frost$core$Frost$unref$frost$core$Object$Q($tmp88);
// line 131
ITable* $tmp91 = ((frost$collections$Iterable*) param9)->$class->itable;
while ($tmp91->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp91 = $tmp91->next;
}
$fn93 $tmp92 = $tmp91->methods[0];
frost$collections$Iterator* $tmp94 = $tmp92(((frost$collections$Iterable*) param9));
goto block3;
block3:;
ITable* $tmp95 = $tmp94->$class->itable;
while ($tmp95->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp95 = $tmp95->next;
}
$fn97 $tmp96 = $tmp95->methods[0];
frost$core$Bit $tmp98 = $tmp96($tmp94);
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block5; else goto block4;
block4:;
*(&local0) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
ITable* $tmp100 = $tmp94->$class->itable;
while ($tmp100->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp100 = $tmp100->next;
}
$fn102 $tmp101 = $tmp100->methods[1];
frost$core$Object* $tmp103 = $tmp101($tmp94);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp103)));
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp104 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
*(&local0) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp103);
// line 132
org$frostlang$frostc$SymbolTable** $tmp105 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp106 = *$tmp105;
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp107 = *(&local0);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp106, ((org$frostlang$frostc$Symbol*) $tmp107));
frost$core$Frost$unref$frost$core$Object$Q($tmp103);
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp108 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
*(&local0) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// line 134
org$frostlang$frostc$SymbolTable** $tmp109 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp110 = *$tmp109;
frost$core$Weak** $tmp111 = &$tmp110->compiler;
frost$core$Weak* $tmp112 = *$tmp111;
frost$core$Object* $tmp113 = frost$core$Weak$get$R$frost$core$Weak$T($tmp112);
frost$collections$Stack** $tmp114 = &((org$frostlang$frostc$Compiler*) $tmp113)->currentClass;
frost$collections$Stack* $tmp115 = *$tmp114;
frost$core$Int64 $tmp116 = (frost$core$Int64) {0};
frost$core$Object* $tmp117 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp115, $tmp116);
bool $tmp118 = ((org$frostlang$frostc$ClassDecl*) $tmp117) == param0;
frost$core$Bit $tmp119 = frost$core$Bit$init$builtin_bit($tmp118);
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp121 = (frost$core$Int64) {134};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s122, $tmp121);
abort(); // unreachable
block6:;
frost$core$Frost$unref$frost$core$Object$Q($tmp117);
frost$core$Frost$unref$frost$core$Object$Q($tmp113);
// line 135
org$frostlang$frostc$SymbolTable** $tmp123 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp124 = *$tmp123;
frost$core$Weak** $tmp125 = &$tmp124->compiler;
frost$core$Weak* $tmp126 = *$tmp125;
frost$core$Object* $tmp127 = frost$core$Weak$get$R$frost$core$Weak$T($tmp126);
frost$collections$Stack** $tmp128 = &((org$frostlang$frostc$Compiler*) $tmp127)->currentClass;
frost$collections$Stack* $tmp129 = *$tmp128;
frost$core$Object* $tmp130 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp129);
frost$core$Frost$unref$frost$core$Object$Q($tmp130);
frost$core$Frost$unref$frost$core$Object$Q($tmp127);
return;

}
void org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable(org$frostlang$frostc$ClassDecl* param0, frost$io$File* param1, org$frostlang$frostc$Position param2, frost$collections$MapView* param3, frost$core$String* param4, org$frostlang$frostc$Annotations* param5, org$frostlang$frostc$ClassDecl$Kind param6, frost$core$String* param7, frost$collections$ListView* param8, frost$collections$Array* param9, org$frostlang$frostc$SymbolTable* param10) {

// line 141
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp131 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp132 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp133 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp132);
org$frostlang$frostc$Position $tmp134 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp135 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp131, param7, $tmp133, $tmp134, $tmp135);
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable(param0, param1, param2, param3, param4, param5, param6, $tmp131, param8, param9, param10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
return;

}
frost$core$String* org$frostlang$frostc$ClassDecl$simpleName$R$frost$core$String(org$frostlang$frostc$ClassDecl* param0) {

frost$core$String$Index$nullable local0;
// line 146
frost$core$String** $tmp136 = &param0->name;
frost$core$String* $tmp137 = *$tmp136;
frost$core$String$Index$nullable $tmp138 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp137, &$s139);
*(&local0) = $tmp138;
// line 147
frost$core$String$Index$nullable $tmp140 = *(&local0);
frost$core$Bit $tmp141 = frost$core$Bit$init$builtin_bit(!$tmp140.nonnull);
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block1; else goto block2;
block1:;
// line 148
frost$core$String** $tmp143 = &param0->name;
frost$core$String* $tmp144 = *$tmp143;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
return $tmp144;
block2:;
// line 150
frost$core$String** $tmp145 = &param0->name;
frost$core$String* $tmp146 = *$tmp145;
frost$core$String** $tmp147 = &param0->name;
frost$core$String* $tmp148 = *$tmp147;
frost$core$String$Index$nullable $tmp149 = *(&local0);
frost$core$String$Index $tmp150 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp148, ((frost$core$String$Index) $tmp149.value));
frost$core$Bit $tmp151 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp152 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp150, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp151);
frost$core$String* $tmp153 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp146, $tmp152);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
return $tmp153;

}
org$frostlang$frostc$Type* org$frostlang$frostc$ClassDecl$typeWithParameters$R$org$frostlang$frostc$Type(org$frostlang$frostc$ClassDecl* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ClassDecl$GenericParameter* local1 = NULL;
// line 154
frost$collections$List** $tmp154 = &param0->parameters;
frost$collections$List* $tmp155 = *$tmp154;
ITable* $tmp156 = ((frost$collections$CollectionView*) $tmp155)->$class->itable;
while ($tmp156->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp156 = $tmp156->next;
}
$fn158 $tmp157 = $tmp156->methods[0];
frost$core$Int64 $tmp159 = $tmp157(((frost$collections$CollectionView*) $tmp155));
frost$core$Int64 $tmp160 = (frost$core$Int64) {0};
frost$core$Bit $tmp161 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp159, $tmp160);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block1; else goto block2;
block1:;
// line 155
org$frostlang$frostc$Type** $tmp163 = &param0->type;
org$frostlang$frostc$Type* $tmp164 = *$tmp163;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
return $tmp164;
block2:;
// line 157
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp165 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp165);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
frost$collections$Array* $tmp166 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
*(&local0) = $tmp165;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
// line 158
frost$collections$List** $tmp167 = &param0->parameters;
frost$collections$List* $tmp168 = *$tmp167;
ITable* $tmp169 = ((frost$collections$Iterable*) $tmp168)->$class->itable;
while ($tmp169->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp169 = $tmp169->next;
}
$fn171 $tmp170 = $tmp169->methods[0];
frost$collections$Iterator* $tmp172 = $tmp170(((frost$collections$Iterable*) $tmp168));
goto block3;
block3:;
ITable* $tmp173 = $tmp172->$class->itable;
while ($tmp173->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp173 = $tmp173->next;
}
$fn175 $tmp174 = $tmp173->methods[0];
frost$core$Bit $tmp176 = $tmp174($tmp172);
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block5; else goto block4;
block4:;
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
ITable* $tmp178 = $tmp172->$class->itable;
while ($tmp178->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp178 = $tmp178->next;
}
$fn180 $tmp179 = $tmp178->methods[1];
frost$core$Object* $tmp181 = $tmp179($tmp172);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp181)));
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp182 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp181);
// line 159
frost$collections$Array* $tmp183 = *(&local0);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp184 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp185 = *(&local1);
org$frostlang$frostc$Type$init$org$frostlang$frostc$ClassDecl$GenericParameter($tmp184, $tmp185);
frost$collections$Array$add$frost$collections$Array$T($tmp183, ((frost$core$Object*) $tmp184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$core$Frost$unref$frost$core$Object$Q($tmp181);
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp186 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
// line 161
org$frostlang$frostc$Type** $tmp187 = &param0->type;
org$frostlang$frostc$Type* $tmp188 = *$tmp187;
frost$collections$Array* $tmp189 = *(&local0);
org$frostlang$frostc$Type* $tmp190 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp188, ((frost$collections$ListView*) $tmp189));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
frost$collections$Array* $tmp191 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp190;

}
frost$core$Bit org$frostlang$frostc$ClassDecl$isSpecialization$R$frost$core$Bit(org$frostlang$frostc$ClassDecl* param0) {

// line 165
frost$core$String** $tmp192 = &param0->name;
frost$core$String* $tmp193 = *$tmp192;
frost$core$Bit $tmp194 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp193, &$s195);
return $tmp194;

}
frost$core$String* org$frostlang$frostc$ClassDecl$get_asString$R$frost$core$String(org$frostlang$frostc$ClassDecl* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$ClassDecl* local3 = NULL;
org$frostlang$frostc$FieldDecl* local4 = NULL;
org$frostlang$frostc$MethodDecl* local5 = NULL;
// line 170
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp196 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Annotations** $tmp197 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp198 = *$tmp197;
frost$core$String* $tmp199 = org$frostlang$frostc$Annotations$get_asString$R$frost$core$String($tmp198);
frost$core$String* $tmp200 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp199, &$s201);
frost$core$String** $tmp202 = &param0->name;
frost$core$String* $tmp203 = *$tmp202;
frost$core$String* $tmp204 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp200, $tmp203);
frost$core$String* $tmp205 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp204, &$s206);
frost$core$MutableString$init$frost$core$String($tmp196, $tmp205);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$MutableString* $tmp207 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
*(&local0) = $tmp196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// line 171
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s208));
frost$core$String* $tmp209 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
*(&local1) = &$s210;
// line 172
org$frostlang$frostc$Type** $tmp211 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp212 = *$tmp211;
frost$core$Bit $tmp213 = frost$core$Bit$init$builtin_bit($tmp212 != NULL);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block1; else goto block2;
block1:;
// line 173
frost$core$MutableString* $tmp215 = *(&local0);
frost$core$String* $tmp216 = *(&local1);
frost$core$String* $tmp217 = frost$core$String$get_asString$R$frost$core$String($tmp216);
frost$core$String* $tmp218 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp217, &$s219);
org$frostlang$frostc$Type** $tmp220 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp221 = *$tmp220;
frost$core$String* $tmp222 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp218, ((frost$core$Object*) $tmp221));
frost$core$String* $tmp223 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp222, &$s224);
frost$core$MutableString$append$frost$core$String($tmp215, $tmp223);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
// line 174
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s225));
frost$core$String* $tmp226 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
*(&local1) = &$s227;
goto block2;
block2:;
// line 176
frost$collections$Array** $tmp228 = &param0->rawInterfaces;
frost$collections$Array* $tmp229 = *$tmp228;
ITable* $tmp230 = ((frost$collections$Iterable*) $tmp229)->$class->itable;
while ($tmp230->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp230 = $tmp230->next;
}
$fn232 $tmp231 = $tmp230->methods[0];
frost$collections$Iterator* $tmp233 = $tmp231(((frost$collections$Iterable*) $tmp229));
goto block3;
block3:;
ITable* $tmp234 = $tmp233->$class->itable;
while ($tmp234->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp234 = $tmp234->next;
}
$fn236 $tmp235 = $tmp234->methods[0];
frost$core$Bit $tmp237 = $tmp235($tmp233);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block5; else goto block4;
block4:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp239 = $tmp233->$class->itable;
while ($tmp239->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp239 = $tmp239->next;
}
$fn241 $tmp240 = $tmp239->methods[1];
frost$core$Object* $tmp242 = $tmp240($tmp233);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp242)));
org$frostlang$frostc$Type* $tmp243 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp242);
// line 177
frost$core$MutableString* $tmp244 = *(&local0);
frost$core$String* $tmp245 = *(&local1);
frost$core$String* $tmp246 = frost$core$String$get_asString$R$frost$core$String($tmp245);
frost$core$String* $tmp247 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp246, &$s248);
org$frostlang$frostc$Type* $tmp249 = *(&local2);
frost$core$String* $tmp250 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp247, ((frost$core$Object*) $tmp249));
frost$core$String* $tmp251 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp250, &$s252);
frost$core$MutableString$append$frost$core$String($tmp244, $tmp251);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
// line 178
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s253));
frost$core$String* $tmp254 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
*(&local1) = &$s255;
frost$core$Frost$unref$frost$core$Object$Q($tmp242);
org$frostlang$frostc$Type* $tmp256 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
// line 180
frost$core$MutableString* $tmp257 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp257, &$s258);
// line 181
frost$collections$Array** $tmp259 = &param0->classes;
frost$collections$Array* $tmp260 = *$tmp259;
ITable* $tmp261 = ((frost$collections$Iterable*) $tmp260)->$class->itable;
while ($tmp261->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp261 = $tmp261->next;
}
$fn263 $tmp262 = $tmp261->methods[0];
frost$collections$Iterator* $tmp264 = $tmp262(((frost$collections$Iterable*) $tmp260));
goto block6;
block6:;
ITable* $tmp265 = $tmp264->$class->itable;
while ($tmp265->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp265 = $tmp265->next;
}
$fn267 $tmp266 = $tmp265->methods[0];
frost$core$Bit $tmp268 = $tmp266($tmp264);
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block8; else goto block7;
block7:;
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp270 = $tmp264->$class->itable;
while ($tmp270->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp270 = $tmp270->next;
}
$fn272 $tmp271 = $tmp270->methods[1];
frost$core$Object* $tmp273 = $tmp271($tmp264);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp273)));
org$frostlang$frostc$ClassDecl* $tmp274 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
*(&local3) = ((org$frostlang$frostc$ClassDecl*) $tmp273);
// line 182
frost$core$MutableString* $tmp275 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp276 = *(&local3);
frost$core$String* $tmp277 = org$frostlang$frostc$ClassDecl$get_asString$R$frost$core$String($tmp276);
frost$core$String* $tmp278 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp277, &$s279);
frost$core$MutableString$append$frost$core$String($tmp275, $tmp278);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
frost$core$Frost$unref$frost$core$Object$Q($tmp273);
org$frostlang$frostc$ClassDecl* $tmp280 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
// line 184
frost$collections$Array** $tmp281 = &param0->fields;
frost$collections$Array* $tmp282 = *$tmp281;
ITable* $tmp283 = ((frost$collections$Iterable*) $tmp282)->$class->itable;
while ($tmp283->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp283 = $tmp283->next;
}
$fn285 $tmp284 = $tmp283->methods[0];
frost$collections$Iterator* $tmp286 = $tmp284(((frost$collections$Iterable*) $tmp282));
goto block9;
block9:;
ITable* $tmp287 = $tmp286->$class->itable;
while ($tmp287->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp287 = $tmp287->next;
}
$fn289 $tmp288 = $tmp287->methods[0];
frost$core$Bit $tmp290 = $tmp288($tmp286);
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block11; else goto block10;
block10:;
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp292 = $tmp286->$class->itable;
while ($tmp292->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp292 = $tmp292->next;
}
$fn294 $tmp293 = $tmp292->methods[1];
frost$core$Object* $tmp295 = $tmp293($tmp286);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp295)));
org$frostlang$frostc$FieldDecl* $tmp296 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) $tmp295);
// line 185
frost$core$MutableString* $tmp297 = *(&local0);
org$frostlang$frostc$FieldDecl* $tmp298 = *(&local4);
frost$core$String* $tmp299 = org$frostlang$frostc$FieldDecl$get_asString$R$frost$core$String($tmp298);
frost$core$String* $tmp300 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp299, &$s301);
frost$core$MutableString$append$frost$core$String($tmp297, $tmp300);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$Frost$unref$frost$core$Object$Q($tmp295);
org$frostlang$frostc$FieldDecl* $tmp302 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
// line 187
frost$collections$Array** $tmp303 = &param0->methods;
frost$collections$Array* $tmp304 = *$tmp303;
ITable* $tmp305 = ((frost$collections$Iterable*) $tmp304)->$class->itable;
while ($tmp305->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp305 = $tmp305->next;
}
$fn307 $tmp306 = $tmp305->methods[0];
frost$collections$Iterator* $tmp308 = $tmp306(((frost$collections$Iterable*) $tmp304));
goto block12;
block12:;
ITable* $tmp309 = $tmp308->$class->itable;
while ($tmp309->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp309 = $tmp309->next;
}
$fn311 $tmp310 = $tmp309->methods[0];
frost$core$Bit $tmp312 = $tmp310($tmp308);
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block14; else goto block13;
block13:;
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp314 = $tmp308->$class->itable;
while ($tmp314->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp314 = $tmp314->next;
}
$fn316 $tmp315 = $tmp314->methods[1];
frost$core$Object* $tmp317 = $tmp315($tmp308);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp317)));
org$frostlang$frostc$MethodDecl* $tmp318 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) $tmp317);
// line 188
frost$core$MutableString* $tmp319 = *(&local0);
org$frostlang$frostc$MethodDecl* $tmp320 = *(&local5);
frost$core$String* $tmp321 = org$frostlang$frostc$MethodDecl$get_asString$R$frost$core$String($tmp320);
frost$core$String* $tmp322 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp321, &$s323);
frost$core$MutableString$append$frost$core$String($tmp319, $tmp322);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
frost$core$Frost$unref$frost$core$Object$Q($tmp317);
org$frostlang$frostc$MethodDecl* $tmp324 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// line 190
frost$core$MutableString* $tmp325 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp325, &$s326);
// line 191
frost$core$MutableString* $tmp327 = *(&local0);
frost$core$String* $tmp328 = frost$core$MutableString$finish$R$frost$core$String($tmp327);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$core$String* $tmp329 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp330 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp328;

}
void org$frostlang$frostc$ClassDecl$cleanup(org$frostlang$frostc$ClassDecl* param0) {

// line 4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp331 = &param0->source;
frost$io$File* $tmp332 = *$tmp331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$core$String** $tmp333 = &param0->name;
frost$core$String* $tmp334 = *$tmp333;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
org$frostlang$frostc$Type** $tmp335 = &param0->type;
org$frostlang$frostc$Type* $tmp336 = *$tmp335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$collections$MapView** $tmp337 = &param0->aliases;
frost$collections$MapView* $tmp338 = *$tmp337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$String** $tmp339 = &param0->doccomment;
frost$core$String* $tmp340 = *$tmp339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
org$frostlang$frostc$Annotations** $tmp341 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp342 = *$tmp341;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$collections$Array** $tmp343 = &param0->declaredSupers;
frost$collections$Array* $tmp344 = *$tmp343;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
org$frostlang$frostc$Type** $tmp345 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp346 = *$tmp345;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$collections$Array** $tmp347 = &param0->rawInterfaces;
frost$collections$Array* $tmp348 = *$tmp347;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
frost$collections$List** $tmp349 = &param0->parameters;
frost$collections$List* $tmp350 = *$tmp349;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
frost$collections$Array** $tmp351 = &param0->fields;
frost$collections$Array* $tmp352 = *$tmp351;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$collections$Array** $tmp353 = &param0->methods;
frost$collections$Array* $tmp354 = *$tmp353;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
frost$collections$Array** $tmp355 = &param0->classes;
frost$collections$Array* $tmp356 = *$tmp355;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$collections$Array** $tmp357 = &param0->choiceCases;
frost$collections$Array* $tmp358 = *$tmp357;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
frost$core$Weak** $tmp359 = &param0->owner;
frost$core$Weak* $tmp360 = *$tmp359;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
org$frostlang$frostc$SymbolTable** $tmp361 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp362 = *$tmp361;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
frost$collections$Array** $tmp363 = &param0->virtualMethods;
frost$collections$Array* $tmp364 = *$tmp363;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
frost$collections$HashMap** $tmp365 = &param0->classResolutionCache;
frost$collections$HashMap* $tmp366 = *$tmp365;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
return;

}

