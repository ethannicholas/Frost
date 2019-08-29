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
typedef frost$collections$Iterator* (*$fn131)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn135)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn140)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn173)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn187)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn202)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn221)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn287)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn303)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn307)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn312)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn356)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn368)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn372)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn377)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn386)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn401)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn405)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn410)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn423)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn427)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn432)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn445)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn449)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn454)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 30, 472444438948626732, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, -7843772953422604045, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x69\x6e\x69\x74\x28\x73\x6f\x75\x72\x63\x65\x3a\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x61\x6c\x69\x61\x73\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x2c\x20\x64\x6f\x63\x63\x6f\x6d\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2c\x20\x6b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x64\x65\x63\x6c\x61\x72\x65\x64\x53\x75\x70\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x2c\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x2c\x20\x70\x61\x72\x65\x6e\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x29", 542, -1070127523700856878, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, -7843772953422604045, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s328 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 1485954231735473549, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x20", 3, -4370613593743840083, NULL };
static frost$core$String $s344 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x20", 3, -4370613593743840083, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s360 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s390 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, -4432762389004539022, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s439 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s461 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s464 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };

void org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable(org$frostlang$frostc$ClassDecl* param0, frost$io$File* param1, org$frostlang$frostc$Position param2, frost$collections$MapView* param3, frost$core$String* param4, org$frostlang$frostc$Annotations* param5, org$frostlang$frostc$ClassDecl$Kind param6, org$frostlang$frostc$Type* param7, frost$collections$ListView* param8, frost$collections$Array* param9, org$frostlang$frostc$SymbolTable* param10) {

frost$core$Bit local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Compiler$Resolution local3;
org$frostlang$frostc$Compiler$Resolution local4;
org$frostlang$frostc$ClassDecl$GenericParameter* local5 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:81
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL)));
org$frostlang$frostc$Type** $tmp2 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Type** $tmp4 = &param0->rawSuper;
*$tmp4 = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:86
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:90
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:92
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:94
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:96
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:99
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:104
frost$core$Bit $tmp29 = (frost$core$Bit) {false};
frost$core$Bit* $tmp30 = &param0->symbolTableResolved;
*$tmp30 = $tmp29;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:106
frost$core$Bit $tmp31 = (frost$core$Bit) {true};
frost$core$Bit* $tmp32 = &param0->external;
*$tmp32 = $tmp31;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:108
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:110
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:369
org$frostlang$frostc$Type$Kind* $tmp41 = &param7->typeKind;
org$frostlang$frostc$Type$Kind $tmp42 = *$tmp41;
org$frostlang$frostc$Type$Kind$wrapper* $tmp43;
$tmp43 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp43->value = $tmp42;
frost$core$Int $tmp44 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:369:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
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
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:369:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp54 = &param7->_subtypes;
org$frostlang$frostc$FixedArray* $tmp55 = *$tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55 != NULL};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block9; else goto block10;
block10:;
frost$core$Int $tmp58 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s59, $tmp58, &$s60);
abort(); // unreachable
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Int $tmp61 = (frost$core$Int) {0u};
frost$core$Object* $tmp62 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp55, $tmp61);
frost$core$String** $tmp63 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp62))->name;
frost$core$String* $tmp64 = *$tmp63;
frost$core$Bit $tmp65 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp64, &$s66);
frost$core$Frost$unref$frost$core$Object$Q($tmp62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
*(&local0) = $tmp65;
goto block7;
block6:;
*(&local0) = $tmp52;
goto block7;
block7:;
frost$core$Bit $tmp67 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp48)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp43)));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ClassDecl.frost:114:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp68 = $tmp67.value;
bool $tmp69 = !$tmp68;
frost$core$Bit $tmp70 = (frost$core$Bit) {$tmp69};
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block1; else goto block2;
block2:;
frost$core$Int $tmp72 = (frost$core$Int) {115u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s73, $tmp72, &$s74);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:118
org$frostlang$frostc$Position* $tmp75 = &param0->position;
*$tmp75 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:119
frost$core$String** $tmp76 = &((org$frostlang$frostc$Symbol*) param7)->name;
frost$core$String* $tmp77 = *$tmp76;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
frost$core$String** $tmp78 = &param0->name;
frost$core$String* $tmp79 = *$tmp78;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
frost$core$String** $tmp80 = &param0->name;
*$tmp80 = $tmp77;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:120
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$Type** $tmp81 = &param0->type;
org$frostlang$frostc$Type* $tmp82 = *$tmp81;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
org$frostlang$frostc$Type** $tmp83 = &param0->type;
*$tmp83 = param7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:121
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp84 = &param0->source;
frost$io$File* $tmp85 = *$tmp84;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$io$File** $tmp86 = &param0->source;
*$tmp86 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:122
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp87 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init$frost$collections$MapView$LTfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$GT($tmp87, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) $tmp87)));
frost$collections$MapView** $tmp88 = &param0->aliases;
frost$collections$MapView* $tmp89 = *$tmp88;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$collections$MapView** $tmp90 = &param0->aliases;
*$tmp90 = ((frost$collections$MapView*) $tmp87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:123
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp91 = &param0->doccomment;
frost$core$String* $tmp92 = *$tmp91;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$String** $tmp93 = &param0->doccomment;
*$tmp93 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:124
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$Annotations** $tmp94 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp95 = *$tmp94;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
org$frostlang$frostc$Annotations** $tmp96 = &param0->annotations;
*$tmp96 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:125
org$frostlang$frostc$ClassDecl$Kind* $tmp97 = &param0->classKind;
*$tmp97 = param6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:126
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp98 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp98, ((frost$collections$CollectionView*) param8));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$collections$Array** $tmp99 = &param0->declaredSupers;
frost$collections$Array* $tmp100 = *$tmp99;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$collections$Array** $tmp101 = &param0->declaredSupers;
*$tmp101 = $tmp98;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:127
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$List*) param9)));
frost$collections$List** $tmp102 = &param0->parameters;
frost$collections$List* $tmp103 = *$tmp102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$collections$List** $tmp104 = &param0->parameters;
*$tmp104 = ((frost$collections$List*) param9);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:128
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$SymbolTable));
org$frostlang$frostc$SymbolTable* $tmp105 = (org$frostlang$frostc$SymbolTable*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$SymbolTable$class);
org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$SymbolTable($tmp105, param10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
org$frostlang$frostc$SymbolTable** $tmp106 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp107 = *$tmp106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
org$frostlang$frostc$SymbolTable** $tmp108 = &param0->symbolTable;
*$tmp108 = $tmp105;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:129
frost$core$Int $tmp109 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from ClassDecl.frost:129:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
frost$core$Int* $tmp110 = &(&local4)->$rawValue;
*$tmp110 = $tmp109;
org$frostlang$frostc$Compiler$Resolution $tmp111 = *(&local4);
*(&local3) = $tmp111;
org$frostlang$frostc$Compiler$Resolution $tmp112 = *(&local3);
org$frostlang$frostc$Compiler$Resolution* $tmp113 = &param0->resolved;
*$tmp113 = $tmp112;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:130
org$frostlang$frostc$SymbolTable** $tmp114 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp115 = *$tmp114;
frost$core$Weak** $tmp116 = &$tmp115->compiler;
frost$core$Weak* $tmp117 = *$tmp116;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ClassDecl.frost:130:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp118 = &$tmp117->_valid;
frost$core$Bit $tmp119 = *$tmp118;
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block15; else goto block16;
block16:;
frost$core$Int $tmp121 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s122, $tmp121);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp123 = &$tmp117->value;
frost$core$Object* $tmp124 = *$tmp123;
frost$core$Frost$ref$frost$core$Object$Q($tmp124);
frost$collections$Stack** $tmp125 = &((org$frostlang$frostc$Compiler*) $tmp124)->currentClass;
frost$collections$Stack* $tmp126 = *$tmp125;
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from ClassDecl.frost:130:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp127 = &$tmp126->contents;
frost$collections$Array* $tmp128 = *$tmp127;
frost$collections$Array$add$frost$collections$Array$T($tmp128, ((frost$core$Object*) param0));
frost$core$Frost$unref$frost$core$Object$Q($tmp124);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:131
ITable* $tmp129 = ((frost$collections$Iterable*) param9)->$class->itable;
while ($tmp129->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp129 = $tmp129->next;
}
$fn131 $tmp130 = $tmp129->methods[0];
frost$collections$Iterator* $tmp132 = $tmp130(((frost$collections$Iterable*) param9));
goto block18;
block18:;
ITable* $tmp133 = $tmp132->$class->itable;
while ($tmp133->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp133 = $tmp133->next;
}
$fn135 $tmp134 = $tmp133->methods[0];
frost$core$Bit $tmp136 = $tmp134($tmp132);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block20; else goto block19;
block19:;
*(&local5) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
ITable* $tmp138 = $tmp132->$class->itable;
while ($tmp138->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp138 = $tmp138->next;
}
$fn140 $tmp139 = $tmp138->methods[1];
frost$core$Object* $tmp141 = $tmp139($tmp132);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp141)));
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp142 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
*(&local5) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp141);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:132
org$frostlang$frostc$SymbolTable** $tmp143 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp144 = *$tmp143;
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp145 = *(&local5);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from ClassDecl.frost:132:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp146 = &((org$frostlang$frostc$Symbol*) $tmp145)->name;
frost$core$String* $tmp147 = *$tmp146;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp144, ((org$frostlang$frostc$Symbol*) $tmp145), $tmp147);
frost$core$Frost$unref$frost$core$Object$Q($tmp141);
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp148 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
*(&local5) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
goto block18;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:134
org$frostlang$frostc$SymbolTable** $tmp149 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp150 = *$tmp149;
frost$core$Weak** $tmp151 = &$tmp150->compiler;
frost$core$Weak* $tmp152 = *$tmp151;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ClassDecl.frost:134:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp153 = &$tmp152->_valid;
frost$core$Bit $tmp154 = *$tmp153;
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block24; else goto block25;
block25:;
frost$core$Int $tmp156 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s157, $tmp156);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp158 = &$tmp152->value;
frost$core$Object* $tmp159 = *$tmp158;
frost$core$Frost$ref$frost$core$Object$Q($tmp159);
frost$collections$Stack** $tmp160 = &((org$frostlang$frostc$Compiler*) $tmp159)->currentClass;
frost$collections$Stack* $tmp161 = *$tmp160;
frost$core$Int $tmp162 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from ClassDecl.frost:134:49
frost$core$Int $tmp163 = (frost$core$Int) {0u};
int64_t $tmp164 = $tmp162.value;
int64_t $tmp165 = $tmp163.value;
bool $tmp166 = $tmp164 >= $tmp165;
frost$core$Bit $tmp167 = (frost$core$Bit) {$tmp166};
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block29; else goto block28;
block29:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp169 = &$tmp161->contents;
frost$collections$Array* $tmp170 = *$tmp169;
ITable* $tmp171 = ((frost$collections$CollectionView*) $tmp170)->$class->itable;
while ($tmp171->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp171 = $tmp171->next;
}
$fn173 $tmp172 = $tmp171->methods[0];
frost$core$Int $tmp174 = $tmp172(((frost$collections$CollectionView*) $tmp170));
int64_t $tmp175 = $tmp162.value;
int64_t $tmp176 = $tmp174.value;
bool $tmp177 = $tmp175 < $tmp176;
frost$core$Bit $tmp178 = (frost$core$Bit) {$tmp177};
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block27; else goto block28;
block28:;
frost$core$Int $tmp180 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s181, $tmp180, &$s182);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp183 = &$tmp161->contents;
frost$collections$Array* $tmp184 = *$tmp183;
ITable* $tmp185 = ((frost$collections$CollectionView*) $tmp184)->$class->itable;
while ($tmp185->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp185 = $tmp185->next;
}
$fn187 $tmp186 = $tmp185->methods[0];
frost$core$Int $tmp188 = $tmp186(((frost$collections$CollectionView*) $tmp184));
int64_t $tmp189 = $tmp188.value;
int64_t $tmp190 = $tmp162.value;
bool $tmp191 = $tmp189 > $tmp190;
frost$core$Bit $tmp192 = (frost$core$Bit) {$tmp191};
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block31; else goto block32;
block32:;
frost$core$Int $tmp194 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s195, $tmp194);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp196 = &$tmp161->contents;
frost$collections$Array* $tmp197 = *$tmp196;
frost$collections$Array** $tmp198 = &$tmp161->contents;
frost$collections$Array* $tmp199 = *$tmp198;
ITable* $tmp200 = ((frost$collections$CollectionView*) $tmp199)->$class->itable;
while ($tmp200->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp200 = $tmp200->next;
}
$fn202 $tmp201 = $tmp200->methods[0];
frost$core$Int $tmp203 = $tmp201(((frost$collections$CollectionView*) $tmp199));
frost$core$Int $tmp204 = (frost$core$Int) {1u};
int64_t $tmp205 = $tmp203.value;
int64_t $tmp206 = $tmp204.value;
int64_t $tmp207 = $tmp205 - $tmp206;
frost$core$Int $tmp208 = (frost$core$Int) {$tmp207};
int64_t $tmp209 = $tmp208.value;
int64_t $tmp210 = $tmp162.value;
int64_t $tmp211 = $tmp209 - $tmp210;
frost$core$Int $tmp212 = (frost$core$Int) {$tmp211};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp213 = (frost$core$Int) {0u};
int64_t $tmp214 = $tmp212.value;
int64_t $tmp215 = $tmp213.value;
bool $tmp216 = $tmp214 >= $tmp215;
frost$core$Bit $tmp217 = (frost$core$Bit) {$tmp216};
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block36; else goto block35;
block36:;
ITable* $tmp219 = ((frost$collections$CollectionView*) $tmp197)->$class->itable;
while ($tmp219->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp219 = $tmp219->next;
}
$fn221 $tmp220 = $tmp219->methods[0];
frost$core$Int $tmp222 = $tmp220(((frost$collections$CollectionView*) $tmp197));
int64_t $tmp223 = $tmp212.value;
int64_t $tmp224 = $tmp222.value;
bool $tmp225 = $tmp223 < $tmp224;
frost$core$Bit $tmp226 = (frost$core$Bit) {$tmp225};
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block34; else goto block35;
block35:;
frost$core$Int $tmp228 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s229, $tmp228, &$s230);
abort(); // unreachable
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp231 = &$tmp197->data;
frost$core$Object** $tmp232 = *$tmp231;
frost$core$Int64 $tmp233 = frost$core$Int64$init$frost$core$Int($tmp212);
int64_t $tmp234 = $tmp233.value;
frost$core$Object* $tmp235 = $tmp232[$tmp234];
frost$core$Frost$ref$frost$core$Object$Q($tmp235);
frost$core$Frost$ref$frost$core$Object$Q($tmp235);
frost$core$Frost$unref$frost$core$Object$Q($tmp235);
bool $tmp236 = ((org$frostlang$frostc$ClassDecl*) $tmp235) == param0;
frost$core$Bit $tmp237 = (frost$core$Bit) {$tmp236};
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block37; else goto block38;
block38:;
frost$core$Int $tmp239 = (frost$core$Int) {134u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s240, $tmp239);
abort(); // unreachable
block37:;
frost$core$Frost$unref$frost$core$Object$Q($tmp235);
frost$core$Frost$unref$frost$core$Object$Q($tmp159);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:135
org$frostlang$frostc$SymbolTable** $tmp241 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp242 = *$tmp241;
frost$core$Weak** $tmp243 = &$tmp242->compiler;
frost$core$Weak* $tmp244 = *$tmp243;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ClassDecl.frost:135:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp245 = &$tmp244->_valid;
frost$core$Bit $tmp246 = *$tmp245;
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block41; else goto block42;
block42:;
frost$core$Int $tmp248 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s249, $tmp248);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp250 = &$tmp244->value;
frost$core$Object* $tmp251 = *$tmp250;
frost$core$Frost$ref$frost$core$Object$Q($tmp251);
frost$collections$Stack** $tmp252 = &((org$frostlang$frostc$Compiler*) $tmp251)->currentClass;
frost$collections$Stack* $tmp253 = *$tmp252;
frost$core$Object* $tmp254 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp253);
frost$core$Frost$unref$frost$core$Object$Q($tmp254);
frost$core$Frost$unref$frost$core$Object$Q($tmp251);
return;

}
void org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable(org$frostlang$frostc$ClassDecl* param0, frost$io$File* param1, org$frostlang$frostc$Position param2, frost$collections$MapView* param3, frost$core$String* param4, org$frostlang$frostc$Annotations* param5, org$frostlang$frostc$ClassDecl$Kind param6, frost$core$String* param7, frost$collections$ListView* param8, frost$collections$Array* param9, org$frostlang$frostc$SymbolTable* param10) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:141
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp255 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int $tmp256 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from ClassDecl.frost:142:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp257 = &(&local1)->$rawValue;
*$tmp257 = $tmp256;
org$frostlang$frostc$Type$Kind $tmp258 = *(&local1);
*(&local0) = $tmp258;
org$frostlang$frostc$Type$Kind $tmp259 = *(&local0);
org$frostlang$frostc$Position $tmp260 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp261 = (frost$core$Bit) {true};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp255, param7, $tmp259, $tmp260, $tmp261);
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable(param0, param1, param2, param3, param4, param5, param6, $tmp255, param8, param9, param10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
return;

}
frost$core$String* org$frostlang$frostc$ClassDecl$simpleName$R$frost$core$String(org$frostlang$frostc$ClassDecl* param0) {

frost$core$String$Index$nullable local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:146
frost$core$String** $tmp262 = &param0->name;
frost$core$String* $tmp263 = *$tmp262;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from ClassDecl.frost:146:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp264 = &$tmp263->_length;
frost$core$Int $tmp265 = *$tmp264;
frost$core$String$Index $tmp266 = frost$core$String$Index$init$frost$core$Int($tmp265);
frost$core$String$Index$nullable $tmp267 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp263, &$s268, $tmp266);
*(&local0) = $tmp267;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:147
frost$core$String$Index$nullable $tmp269 = *(&local0);
frost$core$Bit $tmp270 = (frost$core$Bit) {!$tmp269.nonnull};
bool $tmp271 = $tmp270.value;
if ($tmp271) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:148
frost$core$String** $tmp272 = &param0->name;
frost$core$String* $tmp273 = *$tmp272;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
return $tmp273;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:150
frost$core$String** $tmp274 = &param0->name;
frost$core$String* $tmp275 = *$tmp274;
frost$core$String** $tmp276 = &param0->name;
frost$core$String* $tmp277 = *$tmp276;
frost$core$String$Index$nullable $tmp278 = *(&local0);
frost$core$String$Index $tmp279 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp277, ((frost$core$String$Index) $tmp278.value));
frost$core$Bit $tmp280 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp281 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp279, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp280);
frost$core$String* $tmp282 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp275, $tmp281);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
return $tmp282;

}
org$frostlang$frostc$Type* org$frostlang$frostc$ClassDecl$typeWithParameters$R$org$frostlang$frostc$Type(org$frostlang$frostc$ClassDecl* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ClassDecl$GenericParameter* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:154
frost$collections$List** $tmp283 = &param0->parameters;
frost$collections$List* $tmp284 = *$tmp283;
ITable* $tmp285 = ((frost$collections$CollectionView*) $tmp284)->$class->itable;
while ($tmp285->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp285 = $tmp285->next;
}
$fn287 $tmp286 = $tmp285->methods[0];
frost$core$Int $tmp288 = $tmp286(((frost$collections$CollectionView*) $tmp284));
frost$core$Int $tmp289 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ClassDecl.frost:154:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp290 = $tmp288.value;
int64_t $tmp291 = $tmp289.value;
bool $tmp292 = $tmp290 == $tmp291;
frost$core$Bit $tmp293 = (frost$core$Bit) {$tmp292};
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:155
org$frostlang$frostc$Type** $tmp295 = &param0->type;
org$frostlang$frostc$Type* $tmp296 = *$tmp295;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
return $tmp296;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:157
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp297 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp297);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$collections$Array* $tmp298 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local0) = $tmp297;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:158
frost$collections$List** $tmp299 = &param0->parameters;
frost$collections$List* $tmp300 = *$tmp299;
ITable* $tmp301 = ((frost$collections$Iterable*) $tmp300)->$class->itable;
while ($tmp301->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp301 = $tmp301->next;
}
$fn303 $tmp302 = $tmp301->methods[0];
frost$collections$Iterator* $tmp304 = $tmp302(((frost$collections$Iterable*) $tmp300));
goto block4;
block4:;
ITable* $tmp305 = $tmp304->$class->itable;
while ($tmp305->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp305 = $tmp305->next;
}
$fn307 $tmp306 = $tmp305->methods[0];
frost$core$Bit $tmp308 = $tmp306($tmp304);
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block6; else goto block5;
block5:;
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
ITable* $tmp310 = $tmp304->$class->itable;
while ($tmp310->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp310 = $tmp310->next;
}
$fn312 $tmp311 = $tmp310->methods[1];
frost$core$Object* $tmp313 = $tmp311($tmp304);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp313)));
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp314 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp313);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:159
frost$collections$Array* $tmp315 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp316 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp317 = *(&local1);
org$frostlang$frostc$Type$init$org$frostlang$frostc$ClassDecl$GenericParameter($tmp316, $tmp317);
frost$collections$Array$add$frost$collections$Array$T($tmp315, ((frost$core$Object*) $tmp316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
frost$core$Frost$unref$frost$core$Object$Q($tmp313);
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp318 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:161
org$frostlang$frostc$Type** $tmp319 = &param0->type;
org$frostlang$frostc$Type* $tmp320 = *$tmp319;
frost$collections$Array* $tmp321 = *(&local0);
org$frostlang$frostc$Type* $tmp322 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp320, ((frost$collections$ListView*) $tmp321));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$collections$Array* $tmp323 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp322;

}
frost$core$Bit org$frostlang$frostc$ClassDecl$isSpecialization$R$frost$core$Bit(org$frostlang$frostc$ClassDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:165
frost$core$String** $tmp324 = &param0->name;
frost$core$String* $tmp325 = *$tmp324;
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from ClassDecl.frost:165:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:967
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.frost:967:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:978
frost$core$String$Index $tmp326 = frost$core$String$get_start$R$frost$core$String$Index($tmp325);
frost$core$String$Index$nullable $tmp327 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp325, &$s328, $tmp326);
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp327.nonnull};
return $tmp329;

}
frost$core$String* org$frostlang$frostc$ClassDecl$get_asString$R$frost$core$String(org$frostlang$frostc$ClassDecl* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$ClassDecl* local3 = NULL;
org$frostlang$frostc$FieldDecl* local4 = NULL;
org$frostlang$frostc$MethodDecl* local5 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:170
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp330 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Annotations** $tmp331 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp332 = *$tmp331;
frost$core$String* $tmp333 = org$frostlang$frostc$Annotations$get_asString$R$frost$core$String($tmp332);
frost$core$String* $tmp334 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp333, &$s335);
frost$core$String** $tmp336 = &param0->name;
frost$core$String* $tmp337 = *$tmp336;
frost$core$String* $tmp338 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp334, $tmp337);
frost$core$String* $tmp339 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp338, &$s340);
frost$core$MutableString$init$frost$core$String($tmp330, $tmp339);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
frost$core$MutableString* $tmp341 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
*(&local0) = $tmp330;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:171
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s342));
frost$core$String* $tmp343 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
*(&local1) = &$s344;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:172
org$frostlang$frostc$Type** $tmp345 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp346 = *$tmp345;
frost$core$Bit $tmp347 = (frost$core$Bit) {$tmp346 != NULL};
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:173
frost$core$MutableString* $tmp349 = *(&local0);
frost$core$String* $tmp350 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ClassDecl.frost:173:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
frost$core$String* $tmp351 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp350, &$s352);
org$frostlang$frostc$Type** $tmp353 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp354 = *$tmp353;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ClassDecl.frost:173:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn356 $tmp355 = ($fn356) ((frost$core$Object*) $tmp354)->$class->vtable[0];
frost$core$String* $tmp357 = $tmp355(((frost$core$Object*) $tmp354));
frost$core$String* $tmp358 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp351, $tmp357);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
frost$core$String* $tmp359 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp358, &$s360);
frost$core$MutableString$append$frost$core$String($tmp349, $tmp359);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:174
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s361));
frost$core$String* $tmp362 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local1) = &$s363;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:176
frost$collections$Array** $tmp364 = &param0->rawInterfaces;
frost$collections$Array* $tmp365 = *$tmp364;
ITable* $tmp366 = ((frost$collections$Iterable*) $tmp365)->$class->itable;
while ($tmp366->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp366 = $tmp366->next;
}
$fn368 $tmp367 = $tmp366->methods[0];
frost$collections$Iterator* $tmp369 = $tmp367(((frost$collections$Iterable*) $tmp365));
goto block5;
block5:;
ITable* $tmp370 = $tmp369->$class->itable;
while ($tmp370->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp370 = $tmp370->next;
}
$fn372 $tmp371 = $tmp370->methods[0];
frost$core$Bit $tmp373 = $tmp371($tmp369);
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block7; else goto block6;
block6:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp375 = $tmp369->$class->itable;
while ($tmp375->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp375 = $tmp375->next;
}
$fn377 $tmp376 = $tmp375->methods[1];
frost$core$Object* $tmp378 = $tmp376($tmp369);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp378)));
org$frostlang$frostc$Type* $tmp379 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp378);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:177
frost$core$MutableString* $tmp380 = *(&local0);
frost$core$String* $tmp381 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ClassDecl.frost:177:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
frost$core$String* $tmp382 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp381, &$s383);
org$frostlang$frostc$Type* $tmp384 = *(&local2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ClassDecl.frost:177:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn386 $tmp385 = ($fn386) ((frost$core$Object*) $tmp384)->$class->vtable[0];
frost$core$String* $tmp387 = $tmp385(((frost$core$Object*) $tmp384));
frost$core$String* $tmp388 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp382, $tmp387);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$String* $tmp389 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp388, &$s390);
frost$core$MutableString$append$frost$core$String($tmp380, $tmp389);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:178
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s391));
frost$core$String* $tmp392 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local1) = &$s393;
frost$core$Frost$unref$frost$core$Object$Q($tmp378);
org$frostlang$frostc$Type* $tmp394 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:180
frost$core$MutableString* $tmp395 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp395, &$s396);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:181
frost$collections$Array** $tmp397 = &param0->classes;
frost$collections$Array* $tmp398 = *$tmp397;
ITable* $tmp399 = ((frost$collections$Iterable*) $tmp398)->$class->itable;
while ($tmp399->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp399 = $tmp399->next;
}
$fn401 $tmp400 = $tmp399->methods[0];
frost$collections$Iterator* $tmp402 = $tmp400(((frost$collections$Iterable*) $tmp398));
goto block10;
block10:;
ITable* $tmp403 = $tmp402->$class->itable;
while ($tmp403->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp403 = $tmp403->next;
}
$fn405 $tmp404 = $tmp403->methods[0];
frost$core$Bit $tmp406 = $tmp404($tmp402);
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block12; else goto block11;
block11:;
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp408 = $tmp402->$class->itable;
while ($tmp408->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp408 = $tmp408->next;
}
$fn410 $tmp409 = $tmp408->methods[1];
frost$core$Object* $tmp411 = $tmp409($tmp402);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp411)));
org$frostlang$frostc$ClassDecl* $tmp412 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
*(&local3) = ((org$frostlang$frostc$ClassDecl*) $tmp411);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:182
frost$core$MutableString* $tmp413 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp414 = *(&local3);
frost$core$String* $tmp415 = org$frostlang$frostc$ClassDecl$get_asString$R$frost$core$String($tmp414);
frost$core$String* $tmp416 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp415, &$s417);
frost$core$MutableString$append$frost$core$String($tmp413, $tmp416);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
frost$core$Frost$unref$frost$core$Object$Q($tmp411);
org$frostlang$frostc$ClassDecl* $tmp418 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block10;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:184
frost$collections$Array** $tmp419 = &param0->fields;
frost$collections$Array* $tmp420 = *$tmp419;
ITable* $tmp421 = ((frost$collections$Iterable*) $tmp420)->$class->itable;
while ($tmp421->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp421 = $tmp421->next;
}
$fn423 $tmp422 = $tmp421->methods[0];
frost$collections$Iterator* $tmp424 = $tmp422(((frost$collections$Iterable*) $tmp420));
goto block13;
block13:;
ITable* $tmp425 = $tmp424->$class->itable;
while ($tmp425->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp425 = $tmp425->next;
}
$fn427 $tmp426 = $tmp425->methods[0];
frost$core$Bit $tmp428 = $tmp426($tmp424);
bool $tmp429 = $tmp428.value;
if ($tmp429) goto block15; else goto block14;
block14:;
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp430 = $tmp424->$class->itable;
while ($tmp430->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp430 = $tmp430->next;
}
$fn432 $tmp431 = $tmp430->methods[1];
frost$core$Object* $tmp433 = $tmp431($tmp424);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp433)));
org$frostlang$frostc$FieldDecl* $tmp434 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) $tmp433);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:185
frost$core$MutableString* $tmp435 = *(&local0);
org$frostlang$frostc$FieldDecl* $tmp436 = *(&local4);
frost$core$String* $tmp437 = org$frostlang$frostc$FieldDecl$get_asString$R$frost$core$String($tmp436);
frost$core$String* $tmp438 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp437, &$s439);
frost$core$MutableString$append$frost$core$String($tmp435, $tmp438);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
frost$core$Frost$unref$frost$core$Object$Q($tmp433);
org$frostlang$frostc$FieldDecl* $tmp440 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block13;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:187
frost$collections$Array** $tmp441 = &param0->methods;
frost$collections$Array* $tmp442 = *$tmp441;
ITable* $tmp443 = ((frost$collections$Iterable*) $tmp442)->$class->itable;
while ($tmp443->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp443 = $tmp443->next;
}
$fn445 $tmp444 = $tmp443->methods[0];
frost$collections$Iterator* $tmp446 = $tmp444(((frost$collections$Iterable*) $tmp442));
goto block16;
block16:;
ITable* $tmp447 = $tmp446->$class->itable;
while ($tmp447->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp447 = $tmp447->next;
}
$fn449 $tmp448 = $tmp447->methods[0];
frost$core$Bit $tmp450 = $tmp448($tmp446);
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block18; else goto block17;
block17:;
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp452 = $tmp446->$class->itable;
while ($tmp452->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp452 = $tmp452->next;
}
$fn454 $tmp453 = $tmp452->methods[1];
frost$core$Object* $tmp455 = $tmp453($tmp446);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp455)));
org$frostlang$frostc$MethodDecl* $tmp456 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) $tmp455);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:188
frost$core$MutableString* $tmp457 = *(&local0);
org$frostlang$frostc$MethodDecl* $tmp458 = *(&local5);
frost$core$String* $tmp459 = org$frostlang$frostc$MethodDecl$get_asString$R$frost$core$String($tmp458);
frost$core$String* $tmp460 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp459, &$s461);
frost$core$MutableString$append$frost$core$String($tmp457, $tmp460);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
frost$core$Frost$unref$frost$core$Object$Q($tmp455);
org$frostlang$frostc$MethodDecl* $tmp462 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block16;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:190
frost$core$MutableString* $tmp463 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp463, &$s464);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:191
frost$core$MutableString* $tmp465 = *(&local0);
frost$core$String* $tmp466 = frost$core$MutableString$finish$R$frost$core$String($tmp465);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
frost$core$String* $tmp467 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp468 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp466;

}
void org$frostlang$frostc$ClassDecl$cleanup(org$frostlang$frostc$ClassDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp469 = &param0->source;
frost$io$File* $tmp470 = *$tmp469;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
frost$core$String** $tmp471 = &param0->name;
frost$core$String* $tmp472 = *$tmp471;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
org$frostlang$frostc$Type** $tmp473 = &param0->type;
org$frostlang$frostc$Type* $tmp474 = *$tmp473;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
frost$collections$MapView** $tmp475 = &param0->aliases;
frost$collections$MapView* $tmp476 = *$tmp475;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
frost$core$String** $tmp477 = &param0->doccomment;
frost$core$String* $tmp478 = *$tmp477;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
org$frostlang$frostc$Annotations** $tmp479 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp480 = *$tmp479;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$collections$Array** $tmp481 = &param0->declaredSupers;
frost$collections$Array* $tmp482 = *$tmp481;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
org$frostlang$frostc$Type** $tmp483 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp484 = *$tmp483;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
frost$collections$Array** $tmp485 = &param0->rawInterfaces;
frost$collections$Array* $tmp486 = *$tmp485;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
frost$collections$List** $tmp487 = &param0->parameters;
frost$collections$List* $tmp488 = *$tmp487;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
frost$collections$Array** $tmp489 = &param0->fields;
frost$collections$Array* $tmp490 = *$tmp489;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$collections$Array** $tmp491 = &param0->methods;
frost$collections$Array* $tmp492 = *$tmp491;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
frost$collections$Array** $tmp493 = &param0->classes;
frost$collections$Array* $tmp494 = *$tmp493;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$collections$Array** $tmp495 = &param0->choiceCases;
frost$collections$Array* $tmp496 = *$tmp495;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
frost$core$Weak** $tmp497 = &param0->owner;
frost$core$Weak* $tmp498 = *$tmp497;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
org$frostlang$frostc$SymbolTable** $tmp499 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp500 = *$tmp499;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
frost$collections$Array** $tmp501 = &param0->virtualMethods;
frost$collections$Array* $tmp502 = *$tmp501;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
frost$collections$HashMap** $tmp503 = &param0->classResolutionCache;
frost$collections$HashMap* $tmp504 = *$tmp503;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
return;

}

