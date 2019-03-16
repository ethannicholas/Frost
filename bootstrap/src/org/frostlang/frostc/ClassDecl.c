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
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "org/frostlang/frostc/ClassDecl/GenericParameter.h"
#include "frost/core/Frost.h"
#include "frost/core/Weak.h"
#include "frost/collections/HashMap.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/List.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/collections/Stack.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int64.h"
#include "frost/core/String/Index.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/core/MutableString.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/MethodDecl.h"


static frost$core$String $s1;
org$frostlang$frostc$ClassDecl$class_type org$frostlang$frostc$ClassDecl$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$ClassDecl$get_asString$R$frost$core$String, org$frostlang$frostc$ClassDecl$cleanup, org$frostlang$frostc$ClassDecl$simpleName$R$frost$core$String, org$frostlang$frostc$ClassDecl$typeWithParameters$R$org$frostlang$frostc$Type, org$frostlang$frostc$ClassDecl$isSpecialization$R$frost$core$Bit} };

typedef frost$core$Bit (*$fn51)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn132)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn136)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn141)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn174)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn188)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn203)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn222)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn288)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn304)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn308)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn313)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn357)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn369)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn373)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn378)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn387)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn402)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn406)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn411)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn424)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn428)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn433)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn446)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn450)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn455)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 30, 472444438948626732, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, -7843772953422604045, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x69\x6e\x69\x74\x28\x73\x6f\x75\x72\x63\x65\x3a\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x61\x6c\x69\x61\x73\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x2c\x20\x64\x6f\x63\x63\x6f\x6d\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2c\x20\x6b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x64\x65\x63\x6c\x61\x72\x65\x64\x53\x75\x70\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x2c\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x2c\x20\x70\x61\x72\x65\x6e\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x29", 542, -1070127523700856878, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s231 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, -7843772953422604045, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 1485954231735473549, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x20", 3, -4370613593743840083, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x20", 3, -4370613593743840083, NULL };
static frost$core$String $s353 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s364 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s392 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s397 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, -4432762389004539022, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s462 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s465 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };

void org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable(org$frostlang$frostc$ClassDecl* param0, frost$io$File* param1, org$frostlang$frostc$Position param2, frost$collections$MapView* param3, frost$core$String* param4, org$frostlang$frostc$Annotations* param5, org$frostlang$frostc$ClassDecl$Kind param6, org$frostlang$frostc$Type* param7, frost$collections$ListView* param8, frost$collections$Array* param9, org$frostlang$frostc$SymbolTable* param10) {

frost$core$Bit local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Compiler$Resolution local3;
org$frostlang$frostc$Compiler$Resolution local4;
org$frostlang$frostc$ClassDecl$GenericParameter* local5 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:81
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type** $tmp2 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Type** $tmp4 = &param0->rawSuper;
*$tmp4 = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:86
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:90
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:92
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:94
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:96
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:99
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp25 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp25, ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Weak** $tmp26 = &param0->owner;
frost$core$Weak* $tmp27 = *$tmp26;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Weak** $tmp28 = &param0->owner;
*$tmp28 = $tmp25;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:104
frost$core$Bit $tmp29 = (frost$core$Bit) {false};
frost$core$Bit* $tmp30 = &param0->symbolTableResolved;
*$tmp30 = $tmp29;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:106
frost$core$Bit $tmp31 = (frost$core$Bit) {true};
frost$core$Bit* $tmp32 = &param0->external;
*$tmp32 = $tmp31;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:108
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:110
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
// begin inline call to function org.frostlang.frostc.Type.get_isClassLiteral():frost.core.Bit from ClassDecl.frost:114:15
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:370
org$frostlang$frostc$Type$Kind* $tmp41 = &param7->typeKind;
org$frostlang$frostc$Type$Kind $tmp42 = *$tmp41;
org$frostlang$frostc$Type$Kind$wrapper* $tmp43;
$tmp43 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp43->value = $tmp42;
frost$core$Int $tmp44 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:370:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp45 = &(&local2)->$rawValue;
*$tmp45 = $tmp44;
org$frostlang$frostc$Type$Kind $tmp46 = *(&local2);
*(&local1) = $tmp46;
org$frostlang$frostc$Type$Kind $tmp47 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp48;
$tmp48 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp48->value = $tmp47;
ITable* $tmp49 = ((frost$core$Equatable*) $tmp43)->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp49 = $tmp49->next;
}
$fn51 $tmp50 = $tmp49->methods[0];
frost$core$Bit $tmp52 = $tmp50(((frost$core$Equatable*) $tmp43), ((frost$core$Equatable*) $tmp48));
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block5; else goto block6;
block5:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:370:42
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp54 = &param7->_subtypes;
org$frostlang$frostc$FixedArray* $tmp55 = *$tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55 != NULL};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block9; else goto block10;
block10:;
frost$core$Int $tmp58 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s59, $tmp58);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp60 = &param7->_subtypes;
org$frostlang$frostc$FixedArray* $tmp61 = *$tmp60;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$core$Int $tmp62 = (frost$core$Int) {0u};
frost$core$Object* $tmp63 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp61, $tmp62);
frost$core$String** $tmp64 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp63))->name;
frost$core$String* $tmp65 = *$tmp64;
frost$core$Bit $tmp66 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp65, &$s67);
frost$core$Frost$unref$frost$core$Object$Q($tmp63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local0) = $tmp66;
goto block7;
block6:;
*(&local0) = $tmp52;
goto block7;
block7:;
frost$core$Bit $tmp68 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp48)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp43)));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ClassDecl.frost:114:10
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp69 = $tmp68.value;
bool $tmp70 = !$tmp69;
frost$core$Bit $tmp71 = (frost$core$Bit) {$tmp70};
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block1; else goto block2;
block2:;
frost$core$Int $tmp73 = (frost$core$Int) {115u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s74, $tmp73, &$s75);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:118
org$frostlang$frostc$Position* $tmp76 = &param0->position;
*$tmp76 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:119
frost$core$String** $tmp77 = &((org$frostlang$frostc$Symbol*) param7)->name;
frost$core$String* $tmp78 = *$tmp77;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
frost$core$String** $tmp79 = &param0->name;
frost$core$String* $tmp80 = *$tmp79;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$String** $tmp81 = &param0->name;
*$tmp81 = $tmp78;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:120
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$Type** $tmp82 = &param0->type;
org$frostlang$frostc$Type* $tmp83 = *$tmp82;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
org$frostlang$frostc$Type** $tmp84 = &param0->type;
*$tmp84 = param7;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:121
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp85 = &param0->source;
frost$io$File* $tmp86 = *$tmp85;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$io$File** $tmp87 = &param0->source;
*$tmp87 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:122
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp88 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init$frost$collections$MapView$LTfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$GT($tmp88, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) $tmp88)));
frost$collections$MapView** $tmp89 = &param0->aliases;
frost$collections$MapView* $tmp90 = *$tmp89;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$collections$MapView** $tmp91 = &param0->aliases;
*$tmp91 = ((frost$collections$MapView*) $tmp88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:123
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp92 = &param0->doccomment;
frost$core$String* $tmp93 = *$tmp92;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$core$String** $tmp94 = &param0->doccomment;
*$tmp94 = param4;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:124
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$Annotations** $tmp95 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp96 = *$tmp95;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
org$frostlang$frostc$Annotations** $tmp97 = &param0->annotations;
*$tmp97 = param5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:125
org$frostlang$frostc$ClassDecl$Kind* $tmp98 = &param0->classKind;
*$tmp98 = param6;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:126
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp99 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp99, ((frost$collections$CollectionView*) param8));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$collections$Array** $tmp100 = &param0->declaredSupers;
frost$collections$Array* $tmp101 = *$tmp100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$collections$Array** $tmp102 = &param0->declaredSupers;
*$tmp102 = $tmp99;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:127
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$List*) param9)));
frost$collections$List** $tmp103 = &param0->parameters;
frost$collections$List* $tmp104 = *$tmp103;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$collections$List** $tmp105 = &param0->parameters;
*$tmp105 = ((frost$collections$List*) param9);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:128
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$SymbolTable));
org$frostlang$frostc$SymbolTable* $tmp106 = (org$frostlang$frostc$SymbolTable*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$SymbolTable$class);
org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$SymbolTable($tmp106, param10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
org$frostlang$frostc$SymbolTable** $tmp107 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp108 = *$tmp107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
org$frostlang$frostc$SymbolTable** $tmp109 = &param0->symbolTable;
*$tmp109 = $tmp106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:129
frost$core$Int $tmp110 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from ClassDecl.frost:129:45
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:47
frost$core$Int* $tmp111 = &(&local4)->$rawValue;
*$tmp111 = $tmp110;
org$frostlang$frostc$Compiler$Resolution $tmp112 = *(&local4);
*(&local3) = $tmp112;
org$frostlang$frostc$Compiler$Resolution $tmp113 = *(&local3);
org$frostlang$frostc$Compiler$Resolution* $tmp114 = &param0->resolved;
*$tmp114 = $tmp113;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:130
org$frostlang$frostc$SymbolTable** $tmp115 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp116 = *$tmp115;
frost$core$Weak** $tmp117 = &$tmp116->compiler;
frost$core$Weak* $tmp118 = *$tmp117;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ClassDecl.frost:130:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp119 = &$tmp118->_valid;
frost$core$Bit $tmp120 = *$tmp119;
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block15; else goto block16;
block16:;
frost$core$Int $tmp122 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s123, $tmp122);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp124 = &$tmp118->value;
frost$core$Object* $tmp125 = *$tmp124;
frost$core$Frost$ref$frost$core$Object$Q($tmp125);
frost$collections$Stack** $tmp126 = &((org$frostlang$frostc$Compiler*) $tmp125)->currentClass;
frost$collections$Stack* $tmp127 = *$tmp126;
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from ClassDecl.frost:130:47
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp128 = &$tmp127->contents;
frost$collections$Array* $tmp129 = *$tmp128;
frost$collections$Array$add$frost$collections$Array$T($tmp129, ((frost$core$Object*) param0));
frost$core$Frost$unref$frost$core$Object$Q($tmp125);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:131
ITable* $tmp130 = ((frost$collections$Iterable*) param9)->$class->itable;
while ($tmp130->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp130 = $tmp130->next;
}
$fn132 $tmp131 = $tmp130->methods[0];
frost$collections$Iterator* $tmp133 = $tmp131(((frost$collections$Iterable*) param9));
goto block18;
block18:;
ITable* $tmp134 = $tmp133->$class->itable;
while ($tmp134->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp134 = $tmp134->next;
}
$fn136 $tmp135 = $tmp134->methods[0];
frost$core$Bit $tmp137 = $tmp135($tmp133);
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block20; else goto block19;
block19:;
*(&local5) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
ITable* $tmp139 = $tmp133->$class->itable;
while ($tmp139->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp139 = $tmp139->next;
}
$fn141 $tmp140 = $tmp139->methods[1];
frost$core$Object* $tmp142 = $tmp140($tmp133);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp142)));
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp143 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local5) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp142);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:132
org$frostlang$frostc$SymbolTable** $tmp144 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp145 = *$tmp144;
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp146 = *(&local5);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from ClassDecl.frost:132:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp147 = &((org$frostlang$frostc$Symbol*) $tmp146)->name;
frost$core$String* $tmp148 = *$tmp147;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp145, ((org$frostlang$frostc$Symbol*) $tmp146), $tmp148);
frost$core$Frost$unref$frost$core$Object$Q($tmp142);
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp149 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
*(&local5) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
goto block18;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:134
org$frostlang$frostc$SymbolTable** $tmp150 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp151 = *$tmp150;
frost$core$Weak** $tmp152 = &$tmp151->compiler;
frost$core$Weak* $tmp153 = *$tmp152;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ClassDecl.frost:134:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp154 = &$tmp153->_valid;
frost$core$Bit $tmp155 = *$tmp154;
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block24; else goto block25;
block25:;
frost$core$Int $tmp157 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s158, $tmp157);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp159 = &$tmp153->value;
frost$core$Object* $tmp160 = *$tmp159;
frost$core$Frost$ref$frost$core$Object$Q($tmp160);
frost$collections$Stack** $tmp161 = &((org$frostlang$frostc$Compiler*) $tmp160)->currentClass;
frost$collections$Stack* $tmp162 = *$tmp161;
frost$core$Int $tmp163 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from ClassDecl.frost:134:49
frost$core$Int $tmp164 = (frost$core$Int) {0u};
int64_t $tmp165 = $tmp163.value;
int64_t $tmp166 = $tmp164.value;
bool $tmp167 = $tmp165 >= $tmp166;
frost$core$Bit $tmp168 = (frost$core$Bit) {$tmp167};
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block29; else goto block28;
block29:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp170 = &$tmp162->contents;
frost$collections$Array* $tmp171 = *$tmp170;
ITable* $tmp172 = ((frost$collections$CollectionView*) $tmp171)->$class->itable;
while ($tmp172->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp172 = $tmp172->next;
}
$fn174 $tmp173 = $tmp172->methods[0];
frost$core$Int $tmp175 = $tmp173(((frost$collections$CollectionView*) $tmp171));
int64_t $tmp176 = $tmp163.value;
int64_t $tmp177 = $tmp175.value;
bool $tmp178 = $tmp176 < $tmp177;
frost$core$Bit $tmp179 = (frost$core$Bit) {$tmp178};
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block27; else goto block28;
block28:;
frost$core$Int $tmp181 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s182, $tmp181, &$s183);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp184 = &$tmp162->contents;
frost$collections$Array* $tmp185 = *$tmp184;
ITable* $tmp186 = ((frost$collections$CollectionView*) $tmp185)->$class->itable;
while ($tmp186->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp186 = $tmp186->next;
}
$fn188 $tmp187 = $tmp186->methods[0];
frost$core$Int $tmp189 = $tmp187(((frost$collections$CollectionView*) $tmp185));
int64_t $tmp190 = $tmp189.value;
int64_t $tmp191 = $tmp163.value;
bool $tmp192 = $tmp190 > $tmp191;
frost$core$Bit $tmp193 = (frost$core$Bit) {$tmp192};
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block31; else goto block32;
block32:;
frost$core$Int $tmp195 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s196, $tmp195);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp197 = &$tmp162->contents;
frost$collections$Array* $tmp198 = *$tmp197;
frost$collections$Array** $tmp199 = &$tmp162->contents;
frost$collections$Array* $tmp200 = *$tmp199;
ITable* $tmp201 = ((frost$collections$CollectionView*) $tmp200)->$class->itable;
while ($tmp201->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp201 = $tmp201->next;
}
$fn203 $tmp202 = $tmp201->methods[0];
frost$core$Int $tmp204 = $tmp202(((frost$collections$CollectionView*) $tmp200));
frost$core$Int $tmp205 = (frost$core$Int) {1u};
int64_t $tmp206 = $tmp204.value;
int64_t $tmp207 = $tmp205.value;
int64_t $tmp208 = $tmp206 - $tmp207;
frost$core$Int $tmp209 = (frost$core$Int) {$tmp208};
int64_t $tmp210 = $tmp209.value;
int64_t $tmp211 = $tmp163.value;
int64_t $tmp212 = $tmp210 - $tmp211;
frost$core$Int $tmp213 = (frost$core$Int) {$tmp212};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp214 = (frost$core$Int) {0u};
int64_t $tmp215 = $tmp213.value;
int64_t $tmp216 = $tmp214.value;
bool $tmp217 = $tmp215 >= $tmp216;
frost$core$Bit $tmp218 = (frost$core$Bit) {$tmp217};
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block36; else goto block35;
block36:;
ITable* $tmp220 = ((frost$collections$CollectionView*) $tmp198)->$class->itable;
while ($tmp220->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp220 = $tmp220->next;
}
$fn222 $tmp221 = $tmp220->methods[0];
frost$core$Int $tmp223 = $tmp221(((frost$collections$CollectionView*) $tmp198));
int64_t $tmp224 = $tmp213.value;
int64_t $tmp225 = $tmp223.value;
bool $tmp226 = $tmp224 < $tmp225;
frost$core$Bit $tmp227 = (frost$core$Bit) {$tmp226};
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block34; else goto block35;
block35:;
frost$core$Int $tmp229 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s230, $tmp229, &$s231);
abort(); // unreachable
block34:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp232 = &$tmp198->data;
frost$core$Object** $tmp233 = *$tmp232;
frost$core$Int64 $tmp234 = frost$core$Int64$init$frost$core$Int($tmp213);
int64_t $tmp235 = $tmp234.value;
frost$core$Object* $tmp236 = $tmp233[$tmp235];
frost$core$Frost$ref$frost$core$Object$Q($tmp236);
frost$core$Frost$ref$frost$core$Object$Q($tmp236);
frost$core$Frost$unref$frost$core$Object$Q($tmp236);
bool $tmp237 = ((org$frostlang$frostc$ClassDecl*) $tmp236) == param0;
frost$core$Bit $tmp238 = (frost$core$Bit) {$tmp237};
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block37; else goto block38;
block38:;
frost$core$Int $tmp240 = (frost$core$Int) {134u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s241, $tmp240);
abort(); // unreachable
block37:;
frost$core$Frost$unref$frost$core$Object$Q($tmp236);
frost$core$Frost$unref$frost$core$Object$Q($tmp160);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:135
org$frostlang$frostc$SymbolTable** $tmp242 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp243 = *$tmp242;
frost$core$Weak** $tmp244 = &$tmp243->compiler;
frost$core$Weak* $tmp245 = *$tmp244;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ClassDecl.frost:135:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp246 = &$tmp245->_valid;
frost$core$Bit $tmp247 = *$tmp246;
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block41; else goto block42;
block42:;
frost$core$Int $tmp249 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s250, $tmp249);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp251 = &$tmp245->value;
frost$core$Object* $tmp252 = *$tmp251;
frost$core$Frost$ref$frost$core$Object$Q($tmp252);
frost$collections$Stack** $tmp253 = &((org$frostlang$frostc$Compiler*) $tmp252)->currentClass;
frost$collections$Stack* $tmp254 = *$tmp253;
frost$core$Object* $tmp255 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp254);
frost$core$Frost$unref$frost$core$Object$Q($tmp255);
frost$core$Frost$unref$frost$core$Object$Q($tmp252);
return;

}
void org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable(org$frostlang$frostc$ClassDecl* param0, frost$io$File* param1, org$frostlang$frostc$Position param2, frost$collections$MapView* param3, frost$core$String* param4, org$frostlang$frostc$Annotations* param5, org$frostlang$frostc$ClassDecl$Kind param6, frost$core$String* param7, frost$collections$ListView* param8, frost$collections$Array* param9, org$frostlang$frostc$SymbolTable* param10) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:141
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp256 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int $tmp257 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from ClassDecl.frost:142:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp258 = &(&local1)->$rawValue;
*$tmp258 = $tmp257;
org$frostlang$frostc$Type$Kind $tmp259 = *(&local1);
*(&local0) = $tmp259;
org$frostlang$frostc$Type$Kind $tmp260 = *(&local0);
org$frostlang$frostc$Position $tmp261 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp262 = (frost$core$Bit) {true};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp256, param7, $tmp260, $tmp261, $tmp262);
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable(param0, param1, param2, param3, param4, param5, param6, $tmp256, param8, param9, param10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
return;

}
frost$core$String* org$frostlang$frostc$ClassDecl$simpleName$R$frost$core$String(org$frostlang$frostc$ClassDecl* param0) {

frost$core$String$Index$nullable local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:146
frost$core$String** $tmp263 = &param0->name;
frost$core$String* $tmp264 = *$tmp263;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from ClassDecl.frost:146:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int* $tmp265 = &$tmp264->_length;
frost$core$Int $tmp266 = *$tmp265;
frost$core$String$Index $tmp267 = frost$core$String$Index$init$frost$core$Int($tmp266);
frost$core$String$Index$nullable $tmp268 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp264, &$s269, $tmp267);
*(&local0) = $tmp268;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:147
frost$core$String$Index$nullable $tmp270 = *(&local0);
frost$core$Bit $tmp271 = (frost$core$Bit) {!$tmp270.nonnull};
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:148
frost$core$String** $tmp273 = &param0->name;
frost$core$String* $tmp274 = *$tmp273;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
return $tmp274;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:150
frost$core$String** $tmp275 = &param0->name;
frost$core$String* $tmp276 = *$tmp275;
frost$core$String** $tmp277 = &param0->name;
frost$core$String* $tmp278 = *$tmp277;
frost$core$String$Index$nullable $tmp279 = *(&local0);
frost$core$String$Index $tmp280 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp278, ((frost$core$String$Index) $tmp279.value));
frost$core$Bit $tmp281 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp282 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp280, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp281);
frost$core$String* $tmp283 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp276, $tmp282);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
return $tmp283;

}
org$frostlang$frostc$Type* org$frostlang$frostc$ClassDecl$typeWithParameters$R$org$frostlang$frostc$Type(org$frostlang$frostc$ClassDecl* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ClassDecl$GenericParameter* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:154
frost$collections$List** $tmp284 = &param0->parameters;
frost$collections$List* $tmp285 = *$tmp284;
ITable* $tmp286 = ((frost$collections$CollectionView*) $tmp285)->$class->itable;
while ($tmp286->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp286 = $tmp286->next;
}
$fn288 $tmp287 = $tmp286->methods[0];
frost$core$Int $tmp289 = $tmp287(((frost$collections$CollectionView*) $tmp285));
frost$core$Int $tmp290 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ClassDecl.frost:154:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp291 = $tmp289.value;
int64_t $tmp292 = $tmp290.value;
bool $tmp293 = $tmp291 == $tmp292;
frost$core$Bit $tmp294 = (frost$core$Bit) {$tmp293};
bool $tmp295 = $tmp294.value;
if ($tmp295) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:155
org$frostlang$frostc$Type** $tmp296 = &param0->type;
org$frostlang$frostc$Type* $tmp297 = *$tmp296;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
return $tmp297;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:157
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp298 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp298);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$collections$Array* $tmp299 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
*(&local0) = $tmp298;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:158
frost$collections$List** $tmp300 = &param0->parameters;
frost$collections$List* $tmp301 = *$tmp300;
ITable* $tmp302 = ((frost$collections$Iterable*) $tmp301)->$class->itable;
while ($tmp302->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp302 = $tmp302->next;
}
$fn304 $tmp303 = $tmp302->methods[0];
frost$collections$Iterator* $tmp305 = $tmp303(((frost$collections$Iterable*) $tmp301));
goto block4;
block4:;
ITable* $tmp306 = $tmp305->$class->itable;
while ($tmp306->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp306 = $tmp306->next;
}
$fn308 $tmp307 = $tmp306->methods[0];
frost$core$Bit $tmp309 = $tmp307($tmp305);
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block6; else goto block5;
block5:;
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
ITable* $tmp311 = $tmp305->$class->itable;
while ($tmp311->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp311 = $tmp311->next;
}
$fn313 $tmp312 = $tmp311->methods[1];
frost$core$Object* $tmp314 = $tmp312($tmp305);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp314)));
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp315 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp314);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:159
frost$collections$Array* $tmp316 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp317 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp318 = *(&local1);
org$frostlang$frostc$Type$init$org$frostlang$frostc$ClassDecl$GenericParameter($tmp317, $tmp318);
frost$collections$Array$add$frost$collections$Array$T($tmp316, ((frost$core$Object*) $tmp317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$core$Frost$unref$frost$core$Object$Q($tmp314);
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp319 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:161
org$frostlang$frostc$Type** $tmp320 = &param0->type;
org$frostlang$frostc$Type* $tmp321 = *$tmp320;
frost$collections$Array* $tmp322 = *(&local0);
org$frostlang$frostc$Type* $tmp323 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp321, ((frost$collections$ListView*) $tmp322));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
frost$collections$Array* $tmp324 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp323;

}
frost$core$Bit org$frostlang$frostc$ClassDecl$isSpecialization$R$frost$core$Bit(org$frostlang$frostc$ClassDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:165
frost$core$String** $tmp325 = &param0->name;
frost$core$String* $tmp326 = *$tmp325;
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from ClassDecl.frost:165:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:967
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.frost:967:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:978
frost$core$String$Index $tmp327 = frost$core$String$get_start$R$frost$core$String$Index($tmp326);
frost$core$String$Index$nullable $tmp328 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp326, &$s329, $tmp327);
frost$core$Bit $tmp330 = (frost$core$Bit) {$tmp328.nonnull};
return $tmp330;

}
frost$core$String* org$frostlang$frostc$ClassDecl$get_asString$R$frost$core$String(org$frostlang$frostc$ClassDecl* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$ClassDecl* local3 = NULL;
org$frostlang$frostc$FieldDecl* local4 = NULL;
org$frostlang$frostc$MethodDecl* local5 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:170
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp331 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Annotations** $tmp332 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp333 = *$tmp332;
frost$core$String* $tmp334 = org$frostlang$frostc$Annotations$get_asString$R$frost$core$String($tmp333);
frost$core$String* $tmp335 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp334, &$s336);
frost$core$String** $tmp337 = &param0->name;
frost$core$String* $tmp338 = *$tmp337;
frost$core$String* $tmp339 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp335, $tmp338);
frost$core$String* $tmp340 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp339, &$s341);
frost$core$MutableString$init$frost$core$String($tmp331, $tmp340);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$MutableString* $tmp342 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
*(&local0) = $tmp331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:171
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s343));
frost$core$String* $tmp344 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
*(&local1) = &$s345;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:172
org$frostlang$frostc$Type** $tmp346 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp347 = *$tmp346;
frost$core$Bit $tmp348 = (frost$core$Bit) {$tmp347 != NULL};
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:173
frost$core$MutableString* $tmp350 = *(&local0);
frost$core$String* $tmp351 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ClassDecl.frost:173:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
frost$core$String* $tmp352 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp351, &$s353);
org$frostlang$frostc$Type** $tmp354 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp355 = *$tmp354;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ClassDecl.frost:173:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn357 $tmp356 = ($fn357) ((frost$core$Object*) $tmp355)->$class->vtable[0];
frost$core$String* $tmp358 = $tmp356(((frost$core$Object*) $tmp355));
frost$core$String* $tmp359 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp352, $tmp358);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
frost$core$String* $tmp360 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp359, &$s361);
frost$core$MutableString$append$frost$core$String($tmp350, $tmp360);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:174
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s362));
frost$core$String* $tmp363 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local1) = &$s364;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:176
frost$collections$Array** $tmp365 = &param0->rawInterfaces;
frost$collections$Array* $tmp366 = *$tmp365;
ITable* $tmp367 = ((frost$collections$Iterable*) $tmp366)->$class->itable;
while ($tmp367->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp367 = $tmp367->next;
}
$fn369 $tmp368 = $tmp367->methods[0];
frost$collections$Iterator* $tmp370 = $tmp368(((frost$collections$Iterable*) $tmp366));
goto block5;
block5:;
ITable* $tmp371 = $tmp370->$class->itable;
while ($tmp371->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp371 = $tmp371->next;
}
$fn373 $tmp372 = $tmp371->methods[0];
frost$core$Bit $tmp374 = $tmp372($tmp370);
bool $tmp375 = $tmp374.value;
if ($tmp375) goto block7; else goto block6;
block6:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp376 = $tmp370->$class->itable;
while ($tmp376->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp376 = $tmp376->next;
}
$fn378 $tmp377 = $tmp376->methods[1];
frost$core$Object* $tmp379 = $tmp377($tmp370);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp379)));
org$frostlang$frostc$Type* $tmp380 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp379);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:177
frost$core$MutableString* $tmp381 = *(&local0);
frost$core$String* $tmp382 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ClassDecl.frost:177:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$String* $tmp383 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp382, &$s384);
org$frostlang$frostc$Type* $tmp385 = *(&local2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ClassDecl.frost:177:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn387 $tmp386 = ($fn387) ((frost$core$Object*) $tmp385)->$class->vtable[0];
frost$core$String* $tmp388 = $tmp386(((frost$core$Object*) $tmp385));
frost$core$String* $tmp389 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp383, $tmp388);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
frost$core$String* $tmp390 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp389, &$s391);
frost$core$MutableString$append$frost$core$String($tmp381, $tmp390);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:178
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s392));
frost$core$String* $tmp393 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
*(&local1) = &$s394;
frost$core$Frost$unref$frost$core$Object$Q($tmp379);
org$frostlang$frostc$Type* $tmp395 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:180
frost$core$MutableString* $tmp396 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp396, &$s397);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:181
frost$collections$Array** $tmp398 = &param0->classes;
frost$collections$Array* $tmp399 = *$tmp398;
ITable* $tmp400 = ((frost$collections$Iterable*) $tmp399)->$class->itable;
while ($tmp400->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp400 = $tmp400->next;
}
$fn402 $tmp401 = $tmp400->methods[0];
frost$collections$Iterator* $tmp403 = $tmp401(((frost$collections$Iterable*) $tmp399));
goto block10;
block10:;
ITable* $tmp404 = $tmp403->$class->itable;
while ($tmp404->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp404 = $tmp404->next;
}
$fn406 $tmp405 = $tmp404->methods[0];
frost$core$Bit $tmp407 = $tmp405($tmp403);
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block12; else goto block11;
block11:;
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp409 = $tmp403->$class->itable;
while ($tmp409->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp409 = $tmp409->next;
}
$fn411 $tmp410 = $tmp409->methods[1];
frost$core$Object* $tmp412 = $tmp410($tmp403);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp412)));
org$frostlang$frostc$ClassDecl* $tmp413 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
*(&local3) = ((org$frostlang$frostc$ClassDecl*) $tmp412);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:182
frost$core$MutableString* $tmp414 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp415 = *(&local3);
frost$core$String* $tmp416 = org$frostlang$frostc$ClassDecl$get_asString$R$frost$core$String($tmp415);
frost$core$String* $tmp417 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp416, &$s418);
frost$core$MutableString$append$frost$core$String($tmp414, $tmp417);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
frost$core$Frost$unref$frost$core$Object$Q($tmp412);
org$frostlang$frostc$ClassDecl* $tmp419 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block10;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:184
frost$collections$Array** $tmp420 = &param0->fields;
frost$collections$Array* $tmp421 = *$tmp420;
ITable* $tmp422 = ((frost$collections$Iterable*) $tmp421)->$class->itable;
while ($tmp422->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp422 = $tmp422->next;
}
$fn424 $tmp423 = $tmp422->methods[0];
frost$collections$Iterator* $tmp425 = $tmp423(((frost$collections$Iterable*) $tmp421));
goto block13;
block13:;
ITable* $tmp426 = $tmp425->$class->itable;
while ($tmp426->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp426 = $tmp426->next;
}
$fn428 $tmp427 = $tmp426->methods[0];
frost$core$Bit $tmp429 = $tmp427($tmp425);
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block15; else goto block14;
block14:;
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp431 = $tmp425->$class->itable;
while ($tmp431->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp431 = $tmp431->next;
}
$fn433 $tmp432 = $tmp431->methods[1];
frost$core$Object* $tmp434 = $tmp432($tmp425);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp434)));
org$frostlang$frostc$FieldDecl* $tmp435 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) $tmp434);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:185
frost$core$MutableString* $tmp436 = *(&local0);
org$frostlang$frostc$FieldDecl* $tmp437 = *(&local4);
frost$core$String* $tmp438 = org$frostlang$frostc$FieldDecl$get_asString$R$frost$core$String($tmp437);
frost$core$String* $tmp439 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp438, &$s440);
frost$core$MutableString$append$frost$core$String($tmp436, $tmp439);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
frost$core$Frost$unref$frost$core$Object$Q($tmp434);
org$frostlang$frostc$FieldDecl* $tmp441 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block13;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:187
frost$collections$Array** $tmp442 = &param0->methods;
frost$collections$Array* $tmp443 = *$tmp442;
ITable* $tmp444 = ((frost$collections$Iterable*) $tmp443)->$class->itable;
while ($tmp444->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp444 = $tmp444->next;
}
$fn446 $tmp445 = $tmp444->methods[0];
frost$collections$Iterator* $tmp447 = $tmp445(((frost$collections$Iterable*) $tmp443));
goto block16;
block16:;
ITable* $tmp448 = $tmp447->$class->itable;
while ($tmp448->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp448 = $tmp448->next;
}
$fn450 $tmp449 = $tmp448->methods[0];
frost$core$Bit $tmp451 = $tmp449($tmp447);
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block18; else goto block17;
block17:;
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp453 = $tmp447->$class->itable;
while ($tmp453->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp453 = $tmp453->next;
}
$fn455 $tmp454 = $tmp453->methods[1];
frost$core$Object* $tmp456 = $tmp454($tmp447);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp456)));
org$frostlang$frostc$MethodDecl* $tmp457 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) $tmp456);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:188
frost$core$MutableString* $tmp458 = *(&local0);
org$frostlang$frostc$MethodDecl* $tmp459 = *(&local5);
frost$core$String* $tmp460 = org$frostlang$frostc$MethodDecl$get_asString$R$frost$core$String($tmp459);
frost$core$String* $tmp461 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp460, &$s462);
frost$core$MutableString$append$frost$core$String($tmp458, $tmp461);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
frost$core$Frost$unref$frost$core$Object$Q($tmp456);
org$frostlang$frostc$MethodDecl* $tmp463 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block16;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:190
frost$core$MutableString* $tmp464 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp464, &$s465);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:191
frost$core$MutableString* $tmp466 = *(&local0);
frost$core$String* $tmp467 = frost$core$MutableString$finish$R$frost$core$String($tmp466);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
frost$core$String* $tmp468 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp469 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp467;

}
void org$frostlang$frostc$ClassDecl$cleanup(org$frostlang$frostc$ClassDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/ClassDecl.frost:4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp470 = &param0->source;
frost$io$File* $tmp471 = *$tmp470;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
frost$core$String** $tmp472 = &param0->name;
frost$core$String* $tmp473 = *$tmp472;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
org$frostlang$frostc$Type** $tmp474 = &param0->type;
org$frostlang$frostc$Type* $tmp475 = *$tmp474;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
frost$collections$MapView** $tmp476 = &param0->aliases;
frost$collections$MapView* $tmp477 = *$tmp476;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
frost$core$String** $tmp478 = &param0->doccomment;
frost$core$String* $tmp479 = *$tmp478;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
org$frostlang$frostc$Annotations** $tmp480 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp481 = *$tmp480;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
frost$collections$Array** $tmp482 = &param0->declaredSupers;
frost$collections$Array* $tmp483 = *$tmp482;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
org$frostlang$frostc$Type** $tmp484 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp485 = *$tmp484;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
frost$collections$Array** $tmp486 = &param0->rawInterfaces;
frost$collections$Array* $tmp487 = *$tmp486;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$collections$List** $tmp488 = &param0->parameters;
frost$collections$List* $tmp489 = *$tmp488;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
frost$collections$Array** $tmp490 = &param0->fields;
frost$collections$Array* $tmp491 = *$tmp490;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
frost$collections$Array** $tmp492 = &param0->methods;
frost$collections$Array* $tmp493 = *$tmp492;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
frost$collections$Array** $tmp494 = &param0->classes;
frost$collections$Array* $tmp495 = *$tmp494;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
frost$collections$Array** $tmp496 = &param0->choiceCases;
frost$collections$Array* $tmp497 = *$tmp496;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$core$Weak** $tmp498 = &param0->owner;
frost$core$Weak* $tmp499 = *$tmp498;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
org$frostlang$frostc$SymbolTable** $tmp500 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp501 = *$tmp500;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
frost$collections$Array** $tmp502 = &param0->virtualMethods;
frost$collections$Array* $tmp503 = *$tmp502;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$collections$HashMap** $tmp504 = &param0->classResolutionCache;
frost$collections$HashMap* $tmp505 = *$tmp504;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
return;

}

