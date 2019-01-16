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
org$frostlang$frostc$ClassDecl$class_type org$frostlang$frostc$ClassDecl$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$ClassDecl$convert$R$frost$core$String, org$frostlang$frostc$ClassDecl$cleanup, org$frostlang$frostc$ClassDecl$simpleName$R$frost$core$String, org$frostlang$frostc$ClassDecl$typeWithParameters$R$org$frostlang$frostc$Type, org$frostlang$frostc$ClassDecl$isSpecialization$R$frost$core$Bit} };

typedef frost$collections$Iterator* (*$fn93)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn97)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn102)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn163)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn176)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn180)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn185)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn242)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn246)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn251)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn273)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn277)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn282)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn295)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn299)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn304)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn317)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn321)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn326)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 30, 3316826903706405826, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, 8593454616919477763, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x69\x6e\x69\x74\x28\x73\x6f\x75\x72\x63\x65\x3a\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x61\x6c\x69\x61\x73\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x2c\x20\x64\x6f\x63\x63\x6f\x6d\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2c\x20\x6b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x64\x65\x63\x6c\x61\x72\x65\x64\x53\x75\x70\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x2c\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x2c\x20\x70\x61\x72\x65\x6e\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x29", 542, 2920230446552599862, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, 8593454616919477763, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, 8593454616919477763, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, 8593454616919477763, NULL };
static frost$core$String $s231 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 81, 7848791883756835730, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s237 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s289 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };

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
frost$collections$Array* $tmp5 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$collections$Array** $tmp6 = &param0->rawInterfaces;
frost$collections$Array* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$collections$Array** $tmp8 = &param0->rawInterfaces;
*$tmp8 = $tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
// unreffing REF($10:frost.collections.Array<org.frostlang.frostc.Type>)
// line 90
frost$collections$Array* $tmp9 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$collections$Array** $tmp10 = &param0->fields;
frost$collections$Array* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$collections$Array** $tmp12 = &param0->fields;
*$tmp12 = $tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
// unreffing REF($25:frost.collections.Array<org.frostlang.frostc.FieldDecl>)
// line 92
frost$collections$Array* $tmp13 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp13);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$collections$Array** $tmp14 = &param0->methods;
frost$collections$Array* $tmp15 = *$tmp14;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$collections$Array** $tmp16 = &param0->methods;
*$tmp16 = $tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// unreffing REF($40:frost.collections.Array<org.frostlang.frostc.MethodDecl>)
// line 94
frost$collections$Array* $tmp17 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp17);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$collections$Array** $tmp18 = &param0->classes;
frost$collections$Array* $tmp19 = *$tmp18;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$collections$Array** $tmp20 = &param0->classes;
*$tmp20 = $tmp17;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
// unreffing REF($55:frost.collections.Array<org.frostlang.frostc.ClassDecl>)
// line 96
frost$collections$Array* $tmp21 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp21);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$collections$Array** $tmp22 = &param0->choiceCases;
frost$collections$Array* $tmp23 = *$tmp22;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$collections$Array** $tmp24 = &param0->choiceCases;
*$tmp24 = $tmp21;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// unreffing REF($70:frost.collections.Array<org.frostlang.frostc.ChoiceCase>)
// line 99
frost$core$Weak* $tmp25 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp25, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Weak** $tmp26 = &param0->owner;
frost$core$Weak* $tmp27 = *$tmp26;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Weak** $tmp28 = &param0->owner;
*$tmp28 = $tmp25;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
// unreffing REF($85:frost.core.Weak<org.frostlang.frostc.ClassDecl?>)
// line 104
frost$core$Bit $tmp29 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp30 = &param0->symbolTableResolved;
*$tmp30 = $tmp29;
// line 106
frost$core$Bit $tmp31 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp32 = &param0->external;
*$tmp32 = $tmp31;
// line 108
frost$collections$Array* $tmp33 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp33);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$collections$Array** $tmp34 = &param0->virtualMethods;
frost$collections$Array* $tmp35 = *$tmp34;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$collections$Array** $tmp36 = &param0->virtualMethods;
*$tmp36 = $tmp33;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// unreffing REF($109:frost.collections.Array<org.frostlang.frostc.MethodDecl>)
// line 110
frost$collections$HashMap* $tmp37 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp37);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$collections$HashMap** $tmp38 = &param0->classResolutionCache;
frost$collections$HashMap* $tmp39 = *$tmp38;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$collections$HashMap** $tmp40 = &param0->classResolutionCache;
*$tmp40 = $tmp37;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
// unreffing REF($124:frost.collections.HashMap<frost.core.String, org.frostlang.frostc.ClassDecl.Resolution>)
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
frost$collections$HashMap* $tmp59 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init$frost$collections$MapView$LTfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$GT($tmp59, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) $tmp59)));
frost$collections$MapView** $tmp60 = &param0->aliases;
frost$collections$MapView* $tmp61 = *$tmp60;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$collections$MapView** $tmp62 = &param0->aliases;
*$tmp62 = ((frost$collections$MapView*) $tmp59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// unreffing REF($179:frost.collections.HashMap<frost.core.String, frost.core.String>)
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
frost$collections$Array* $tmp70 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp70, ((frost$collections$CollectionView*) param8));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$collections$Array** $tmp71 = &param0->declaredSupers;
frost$collections$Array* $tmp72 = *$tmp71;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$collections$Array** $tmp73 = &param0->declaredSupers;
*$tmp73 = $tmp70;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
// unreffing REF($217:frost.collections.Array<org.frostlang.frostc.Type>)
// line 127
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$List*) param9)));
frost$collections$List** $tmp74 = &param0->parameters;
frost$collections$List* $tmp75 = *$tmp74;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$collections$List** $tmp76 = &param0->parameters;
*$tmp76 = ((frost$collections$List*) param9);
// line 128
org$frostlang$frostc$SymbolTable* $tmp77 = (org$frostlang$frostc$SymbolTable*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$SymbolTable$class);
org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$SymbolTable($tmp77, param10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
org$frostlang$frostc$SymbolTable** $tmp78 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp79 = *$tmp78;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
org$frostlang$frostc$SymbolTable** $tmp80 = &param0->symbolTable;
*$tmp80 = $tmp77;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// unreffing REF($244:org.frostlang.frostc.SymbolTable)
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
// unreffing REF($268:frost.core.Weak.T)
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
// unreffing REF($293:frost.collections.Iterator.T)
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp108 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
// unreffing p
*(&local0) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// unreffing REF($282:frost.collections.Iterator<frost.collections.Iterable.T>)
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
// unreffing REF($331:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp113);
// unreffing REF($325:frost.core.Weak.T)
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
// unreffing REF($357:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp127);
// unreffing REF($352:frost.core.Weak.T)
return;

}
void org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable(org$frostlang$frostc$ClassDecl* param0, frost$io$File* param1, org$frostlang$frostc$Position param2, frost$collections$MapView* param3, frost$core$String* param4, org$frostlang$frostc$Annotations* param5, org$frostlang$frostc$ClassDecl$Kind param6, frost$core$String* param7, frost$collections$ListView* param8, frost$collections$Array* param9, org$frostlang$frostc$SymbolTable* param10) {

// line 141
org$frostlang$frostc$Type* $tmp131 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp132 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp133 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp132);
org$frostlang$frostc$Position $tmp134 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp135 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp131, param7, $tmp133, $tmp134, $tmp135);
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable(param0, param1, param2, param3, param4, param5, param6, $tmp131, param8, param9, param10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
// unreffing REF($1:org.frostlang.frostc.Type)
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
frost$core$Bit $tmp150 = frost$core$Bit$init$builtin_bit($tmp149.nonnull);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp152 = (frost$core$Int64) {150};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s153, $tmp152, &$s154);
abort(); // unreachable
block3:;
frost$core$String$Index $tmp155 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp148, ((frost$core$String$Index) $tmp149.value));
frost$core$Bit $tmp156 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp157 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp155, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp156);
frost$core$String* $tmp158 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp146, $tmp157);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
// unreffing REF($35:frost.core.String)
return $tmp158;

}
org$frostlang$frostc$Type* org$frostlang$frostc$ClassDecl$typeWithParameters$R$org$frostlang$frostc$Type(org$frostlang$frostc$ClassDecl* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ClassDecl$GenericParameter* local1 = NULL;
// line 154
frost$collections$List** $tmp159 = &param0->parameters;
frost$collections$List* $tmp160 = *$tmp159;
ITable* $tmp161 = ((frost$collections$CollectionView*) $tmp160)->$class->itable;
while ($tmp161->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp161 = $tmp161->next;
}
$fn163 $tmp162 = $tmp161->methods[0];
frost$core$Int64 $tmp164 = $tmp162(((frost$collections$CollectionView*) $tmp160));
frost$core$Int64 $tmp165 = (frost$core$Int64) {0};
frost$core$Bit $tmp166 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp164, $tmp165);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block1; else goto block2;
block1:;
// line 155
org$frostlang$frostc$Type** $tmp168 = &param0->type;
org$frostlang$frostc$Type* $tmp169 = *$tmp168;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
return $tmp169;
block2:;
// line 157
frost$collections$Array* $tmp170 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp170);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$collections$Array* $tmp171 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
*(&local0) = $tmp170;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
// unreffing REF($17:frost.collections.Array<org.frostlang.frostc.Type>)
// line 158
frost$collections$List** $tmp172 = &param0->parameters;
frost$collections$List* $tmp173 = *$tmp172;
ITable* $tmp174 = ((frost$collections$Iterable*) $tmp173)->$class->itable;
while ($tmp174->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp174 = $tmp174->next;
}
$fn176 $tmp175 = $tmp174->methods[0];
frost$collections$Iterator* $tmp177 = $tmp175(((frost$collections$Iterable*) $tmp173));
goto block3;
block3:;
ITable* $tmp178 = $tmp177->$class->itable;
while ($tmp178->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp178 = $tmp178->next;
}
$fn180 $tmp179 = $tmp178->methods[0];
frost$core$Bit $tmp181 = $tmp179($tmp177);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block5; else goto block4;
block4:;
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
ITable* $tmp183 = $tmp177->$class->itable;
while ($tmp183->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp183 = $tmp183->next;
}
$fn185 $tmp184 = $tmp183->methods[1];
frost$core$Object* $tmp186 = $tmp184($tmp177);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp186)));
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp187 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp186);
// line 159
frost$collections$Array* $tmp188 = *(&local0);
org$frostlang$frostc$Type* $tmp189 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp190 = *(&local1);
org$frostlang$frostc$Type$init$org$frostlang$frostc$ClassDecl$GenericParameter($tmp189, $tmp190);
frost$collections$Array$add$frost$collections$Array$T($tmp188, ((frost$core$Object*) $tmp189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
// unreffing REF($58:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp186);
// unreffing REF($47:frost.collections.Iterator.T)
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp191 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
// unreffing p
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
// unreffing REF($36:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 161
org$frostlang$frostc$Type** $tmp192 = &param0->type;
org$frostlang$frostc$Type* $tmp193 = *$tmp192;
frost$collections$Array* $tmp194 = *(&local0);
org$frostlang$frostc$Type* $tmp195 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp193, ((frost$collections$ListView*) $tmp194));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
// unreffing REF($83:org.frostlang.frostc.Type)
frost$collections$Array* $tmp196 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// unreffing finalParameters
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp195;

}
frost$core$Bit org$frostlang$frostc$ClassDecl$isSpecialization$R$frost$core$Bit(org$frostlang$frostc$ClassDecl* param0) {

// line 165
frost$core$String** $tmp197 = &param0->name;
frost$core$String* $tmp198 = *$tmp197;
frost$core$Bit $tmp199 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp198, &$s200);
return $tmp199;

}
frost$core$String* org$frostlang$frostc$ClassDecl$convert$R$frost$core$String(org$frostlang$frostc$ClassDecl* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$ClassDecl* local3 = NULL;
org$frostlang$frostc$FieldDecl* local4 = NULL;
org$frostlang$frostc$MethodDecl* local5 = NULL;
// line 170
frost$core$MutableString* $tmp201 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Annotations** $tmp202 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp203 = *$tmp202;
frost$core$String* $tmp204 = org$frostlang$frostc$Annotations$convert$R$frost$core$String($tmp203);
frost$core$String* $tmp205 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp204, &$s206);
frost$core$String** $tmp207 = &param0->name;
frost$core$String* $tmp208 = *$tmp207;
frost$core$String* $tmp209 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp205, $tmp208);
frost$core$String* $tmp210 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp209, &$s211);
frost$core$MutableString$init$frost$core$String($tmp201, $tmp210);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
frost$core$MutableString* $tmp212 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local0) = $tmp201;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
// unreffing REF($9:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
// unreffing REF($8:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
// unreffing REF($5:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
// unreffing REF($4:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
// unreffing REF($1:frost.core.MutableString)
// line 171
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s213));
frost$core$String* $tmp214 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
*(&local1) = &$s215;
// line 172
org$frostlang$frostc$Type** $tmp216 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp217 = *$tmp216;
frost$core$Bit $tmp218 = frost$core$Bit$init$builtin_bit($tmp217 != NULL);
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block1; else goto block2;
block1:;
// line 173
frost$core$MutableString* $tmp220 = *(&local0);
frost$core$String* $tmp221 = *(&local1);
frost$core$String* $tmp222 = frost$core$String$convert$R$frost$core$String($tmp221);
frost$core$String* $tmp223 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp222, &$s224);
org$frostlang$frostc$Type** $tmp225 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp226 = *$tmp225;
frost$core$Bit $tmp227 = frost$core$Bit$init$builtin_bit($tmp226 != NULL);
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp229 = (frost$core$Int64) {173};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s230, $tmp229, &$s231);
abort(); // unreachable
block3:;
frost$core$String* $tmp232 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp223, ((frost$core$Object*) $tmp226));
frost$core$String* $tmp233 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp232, &$s234);
frost$core$MutableString$append$frost$core$String($tmp220, $tmp233);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
// unreffing REF($64:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
// unreffing REF($63:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
// unreffing REF($52:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// unreffing REF($51:frost.core.String)
// line 174
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s235));
frost$core$String* $tmp236 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
*(&local1) = &$s237;
goto block2;
block2:;
// line 176
frost$collections$Array** $tmp238 = &param0->rawInterfaces;
frost$collections$Array* $tmp239 = *$tmp238;
ITable* $tmp240 = ((frost$collections$Iterable*) $tmp239)->$class->itable;
while ($tmp240->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp240 = $tmp240->next;
}
$fn242 $tmp241 = $tmp240->methods[0];
frost$collections$Iterator* $tmp243 = $tmp241(((frost$collections$Iterable*) $tmp239));
goto block5;
block5:;
ITable* $tmp244 = $tmp243->$class->itable;
while ($tmp244->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp244 = $tmp244->next;
}
$fn246 $tmp245 = $tmp244->methods[0];
frost$core$Bit $tmp247 = $tmp245($tmp243);
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block7; else goto block6;
block6:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp249 = $tmp243->$class->itable;
while ($tmp249->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp249 = $tmp249->next;
}
$fn251 $tmp250 = $tmp249->methods[1];
frost$core$Object* $tmp252 = $tmp250($tmp243);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp252)));
org$frostlang$frostc$Type* $tmp253 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp252);
// line 177
frost$core$MutableString* $tmp254 = *(&local0);
frost$core$String* $tmp255 = *(&local1);
frost$core$String* $tmp256 = frost$core$String$convert$R$frost$core$String($tmp255);
frost$core$String* $tmp257 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp256, &$s258);
org$frostlang$frostc$Type* $tmp259 = *(&local2);
frost$core$String* $tmp260 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp257, ((frost$core$Object*) $tmp259));
frost$core$String* $tmp261 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp260, &$s262);
frost$core$MutableString$append$frost$core$String($tmp254, $tmp261);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
// unreffing REF($119:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// unreffing REF($118:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// unreffing REF($115:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// unreffing REF($114:frost.core.String)
// line 178
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s263));
frost$core$String* $tmp264 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local1) = &$s265;
frost$core$Frost$unref$frost$core$Object$Q($tmp252);
// unreffing REF($103:frost.collections.Iterator.T)
org$frostlang$frostc$Type* $tmp266 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
// unreffing intf
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
// unreffing REF($92:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 180
frost$core$MutableString* $tmp267 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp267, &$s268);
// line 181
frost$collections$Array** $tmp269 = &param0->classes;
frost$collections$Array* $tmp270 = *$tmp269;
ITable* $tmp271 = ((frost$collections$Iterable*) $tmp270)->$class->itable;
while ($tmp271->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp271 = $tmp271->next;
}
$fn273 $tmp272 = $tmp271->methods[0];
frost$collections$Iterator* $tmp274 = $tmp272(((frost$collections$Iterable*) $tmp270));
goto block8;
block8:;
ITable* $tmp275 = $tmp274->$class->itable;
while ($tmp275->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp275 = $tmp275->next;
}
$fn277 $tmp276 = $tmp275->methods[0];
frost$core$Bit $tmp278 = $tmp276($tmp274);
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block10; else goto block9;
block9:;
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp280 = $tmp274->$class->itable;
while ($tmp280->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp280 = $tmp280->next;
}
$fn282 $tmp281 = $tmp280->methods[1];
frost$core$Object* $tmp283 = $tmp281($tmp274);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp283)));
org$frostlang$frostc$ClassDecl* $tmp284 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
*(&local3) = ((org$frostlang$frostc$ClassDecl*) $tmp283);
// line 182
frost$core$MutableString* $tmp285 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp286 = *(&local3);
frost$core$String* $tmp287 = org$frostlang$frostc$ClassDecl$convert$R$frost$core$String($tmp286);
frost$core$String* $tmp288 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp287, &$s289);
frost$core$MutableString$append$frost$core$String($tmp285, $tmp288);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
// unreffing REF($184:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
// unreffing REF($183:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp283);
// unreffing REF($172:frost.collections.Iterator.T)
org$frostlang$frostc$ClassDecl* $tmp290 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
// unreffing cl
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block8;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
// unreffing REF($161:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 184
frost$collections$Array** $tmp291 = &param0->fields;
frost$collections$Array* $tmp292 = *$tmp291;
ITable* $tmp293 = ((frost$collections$Iterable*) $tmp292)->$class->itable;
while ($tmp293->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp293 = $tmp293->next;
}
$fn295 $tmp294 = $tmp293->methods[0];
frost$collections$Iterator* $tmp296 = $tmp294(((frost$collections$Iterable*) $tmp292));
goto block11;
block11:;
ITable* $tmp297 = $tmp296->$class->itable;
while ($tmp297->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp297 = $tmp297->next;
}
$fn299 $tmp298 = $tmp297->methods[0];
frost$core$Bit $tmp300 = $tmp298($tmp296);
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block13; else goto block12;
block12:;
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp302 = $tmp296->$class->itable;
while ($tmp302->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp302 = $tmp302->next;
}
$fn304 $tmp303 = $tmp302->methods[1];
frost$core$Object* $tmp305 = $tmp303($tmp296);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp305)));
org$frostlang$frostc$FieldDecl* $tmp306 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) $tmp305);
// line 185
frost$core$MutableString* $tmp307 = *(&local0);
org$frostlang$frostc$FieldDecl* $tmp308 = *(&local4);
frost$core$String* $tmp309 = org$frostlang$frostc$FieldDecl$convert$R$frost$core$String($tmp308);
frost$core$String* $tmp310 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp309, &$s311);
frost$core$MutableString$append$frost$core$String($tmp307, $tmp310);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
// unreffing REF($233:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
// unreffing REF($232:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp305);
// unreffing REF($221:frost.collections.Iterator.T)
org$frostlang$frostc$FieldDecl* $tmp312 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
// unreffing f
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block11;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
// unreffing REF($210:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 187
frost$collections$Array** $tmp313 = &param0->methods;
frost$collections$Array* $tmp314 = *$tmp313;
ITable* $tmp315 = ((frost$collections$Iterable*) $tmp314)->$class->itable;
while ($tmp315->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp315 = $tmp315->next;
}
$fn317 $tmp316 = $tmp315->methods[0];
frost$collections$Iterator* $tmp318 = $tmp316(((frost$collections$Iterable*) $tmp314));
goto block14;
block14:;
ITable* $tmp319 = $tmp318->$class->itable;
while ($tmp319->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp319 = $tmp319->next;
}
$fn321 $tmp320 = $tmp319->methods[0];
frost$core$Bit $tmp322 = $tmp320($tmp318);
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block16; else goto block15;
block15:;
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp324 = $tmp318->$class->itable;
while ($tmp324->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp324 = $tmp324->next;
}
$fn326 $tmp325 = $tmp324->methods[1];
frost$core$Object* $tmp327 = $tmp325($tmp318);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp327)));
org$frostlang$frostc$MethodDecl* $tmp328 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) $tmp327);
// line 188
frost$core$MutableString* $tmp329 = *(&local0);
org$frostlang$frostc$MethodDecl* $tmp330 = *(&local5);
frost$core$String* $tmp331 = org$frostlang$frostc$MethodDecl$convert$R$frost$core$String($tmp330);
frost$core$String* $tmp332 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp331, &$s333);
frost$core$MutableString$append$frost$core$String($tmp329, $tmp332);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
// unreffing REF($282:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// unreffing REF($281:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp327);
// unreffing REF($270:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp334 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
// unreffing m
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
// unreffing REF($259:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 190
frost$core$MutableString* $tmp335 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp335, &$s336);
// line 191
frost$core$MutableString* $tmp337 = *(&local0);
frost$core$String* $tmp338 = frost$core$MutableString$finish$R$frost$core$String($tmp337);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
// unreffing REF($307:frost.core.String)
frost$core$String* $tmp339 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp340 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp338;

}
void org$frostlang$frostc$ClassDecl$cleanup(org$frostlang$frostc$ClassDecl* param0) {

// line 4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp341 = &param0->source;
frost$io$File* $tmp342 = *$tmp341;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$String** $tmp343 = &param0->name;
frost$core$String* $tmp344 = *$tmp343;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
org$frostlang$frostc$Type** $tmp345 = &param0->type;
org$frostlang$frostc$Type* $tmp346 = *$tmp345;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$collections$MapView** $tmp347 = &param0->aliases;
frost$collections$MapView* $tmp348 = *$tmp347;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
frost$core$String** $tmp349 = &param0->doccomment;
frost$core$String* $tmp350 = *$tmp349;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
org$frostlang$frostc$Annotations** $tmp351 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp352 = *$tmp351;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$collections$Array** $tmp353 = &param0->declaredSupers;
frost$collections$Array* $tmp354 = *$tmp353;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
org$frostlang$frostc$Type** $tmp355 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp356 = *$tmp355;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$collections$Array** $tmp357 = &param0->rawInterfaces;
frost$collections$Array* $tmp358 = *$tmp357;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
frost$collections$List** $tmp359 = &param0->parameters;
frost$collections$List* $tmp360 = *$tmp359;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
frost$collections$Array** $tmp361 = &param0->fields;
frost$collections$Array* $tmp362 = *$tmp361;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
frost$collections$Array** $tmp363 = &param0->methods;
frost$collections$Array* $tmp364 = *$tmp363;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
frost$collections$Array** $tmp365 = &param0->classes;
frost$collections$Array* $tmp366 = *$tmp365;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$collections$Array** $tmp367 = &param0->choiceCases;
frost$collections$Array* $tmp368 = *$tmp367;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
frost$core$Weak** $tmp369 = &param0->owner;
frost$core$Weak* $tmp370 = *$tmp369;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
org$frostlang$frostc$SymbolTable** $tmp371 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp372 = *$tmp371;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
frost$collections$Array** $tmp373 = &param0->virtualMethods;
frost$collections$Array* $tmp374 = *$tmp373;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
frost$collections$HashMap** $tmp375 = &param0->classResolutionCache;
frost$collections$HashMap* $tmp376 = *$tmp375;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
return;

}

