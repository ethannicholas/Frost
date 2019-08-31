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
typedef frost$core$Int (*$fn292)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn308)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn312)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn317)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn366)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn378)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn382)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn387)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn396)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn411)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn415)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn420)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn433)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn437)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn442)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn455)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn459)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn464)(frost$collections$Iterator*);

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
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, -7843772953422604045, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 1485954231735473549, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x20", 3, -4370613593743840083, NULL };
static frost$core$String $s349 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x20", 3, -4370613593743840083, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, -7843772953422604045, NULL };
static frost$core$String $s364 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 81, -1728612804042895694, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s373 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s401 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, -4432762389004539022, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s474 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };

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
frost$core$Bit $tmp279 = (frost$core$Bit) {$tmp278.nonnull};
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block5; else goto block6;
block6:;
frost$core$Int $tmp281 = (frost$core$Int) {150u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s282, $tmp281, &$s283);
abort(); // unreachable
block5:;
frost$core$String$Index $tmp284 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp277, ((frost$core$String$Index) $tmp278.value));
frost$core$Bit $tmp285 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp286 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp284, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp285);
frost$core$String* $tmp287 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp275, $tmp286);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
return $tmp287;

}
org$frostlang$frostc$Type* org$frostlang$frostc$ClassDecl$typeWithParameters$R$org$frostlang$frostc$Type(org$frostlang$frostc$ClassDecl* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ClassDecl$GenericParameter* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:154
frost$collections$List** $tmp288 = &param0->parameters;
frost$collections$List* $tmp289 = *$tmp288;
ITable* $tmp290 = ((frost$collections$CollectionView*) $tmp289)->$class->itable;
while ($tmp290->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp290 = $tmp290->next;
}
$fn292 $tmp291 = $tmp290->methods[0];
frost$core$Int $tmp293 = $tmp291(((frost$collections$CollectionView*) $tmp289));
frost$core$Int $tmp294 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ClassDecl.frost:154:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp295 = $tmp293.value;
int64_t $tmp296 = $tmp294.value;
bool $tmp297 = $tmp295 == $tmp296;
frost$core$Bit $tmp298 = (frost$core$Bit) {$tmp297};
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:155
org$frostlang$frostc$Type** $tmp300 = &param0->type;
org$frostlang$frostc$Type* $tmp301 = *$tmp300;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
return $tmp301;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:157
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp302 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp302);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$collections$Array* $tmp303 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local0) = $tmp302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:158
frost$collections$List** $tmp304 = &param0->parameters;
frost$collections$List* $tmp305 = *$tmp304;
ITable* $tmp306 = ((frost$collections$Iterable*) $tmp305)->$class->itable;
while ($tmp306->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp306 = $tmp306->next;
}
$fn308 $tmp307 = $tmp306->methods[0];
frost$collections$Iterator* $tmp309 = $tmp307(((frost$collections$Iterable*) $tmp305));
goto block4;
block4:;
ITable* $tmp310 = $tmp309->$class->itable;
while ($tmp310->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp310 = $tmp310->next;
}
$fn312 $tmp311 = $tmp310->methods[0];
frost$core$Bit $tmp313 = $tmp311($tmp309);
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block6; else goto block5;
block5:;
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
ITable* $tmp315 = $tmp309->$class->itable;
while ($tmp315->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp315 = $tmp315->next;
}
$fn317 $tmp316 = $tmp315->methods[1];
frost$core$Object* $tmp318 = $tmp316($tmp309);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp318)));
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp319 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp318);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:159
frost$collections$Array* $tmp320 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp321 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp322 = *(&local1);
org$frostlang$frostc$Type$init$org$frostlang$frostc$ClassDecl$GenericParameter($tmp321, $tmp322);
frost$collections$Array$add$frost$collections$Array$T($tmp320, ((frost$core$Object*) $tmp321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
frost$core$Frost$unref$frost$core$Object$Q($tmp318);
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp323 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:161
org$frostlang$frostc$Type** $tmp324 = &param0->type;
org$frostlang$frostc$Type* $tmp325 = *$tmp324;
frost$collections$Array* $tmp326 = *(&local0);
org$frostlang$frostc$Type* $tmp327 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp325, ((frost$collections$ListView*) $tmp326));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$collections$Array* $tmp328 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp327;

}
frost$core$Bit org$frostlang$frostc$ClassDecl$isSpecialization$R$frost$core$Bit(org$frostlang$frostc$ClassDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:165
frost$core$String** $tmp329 = &param0->name;
frost$core$String* $tmp330 = *$tmp329;
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from ClassDecl.frost:165:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:967
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.frost:967:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:978
frost$core$String$Index $tmp331 = frost$core$String$get_start$R$frost$core$String$Index($tmp330);
frost$core$String$Index$nullable $tmp332 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp330, &$s333, $tmp331);
frost$core$Bit $tmp334 = (frost$core$Bit) {$tmp332.nonnull};
return $tmp334;

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
frost$core$MutableString* $tmp335 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Annotations** $tmp336 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp337 = *$tmp336;
frost$core$String* $tmp338 = org$frostlang$frostc$Annotations$get_asString$R$frost$core$String($tmp337);
frost$core$String* $tmp339 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp338, &$s340);
frost$core$String** $tmp341 = &param0->name;
frost$core$String* $tmp342 = *$tmp341;
frost$core$String* $tmp343 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp339, $tmp342);
frost$core$String* $tmp344 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp343, &$s345);
frost$core$MutableString$init$frost$core$String($tmp335, $tmp344);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$core$MutableString* $tmp346 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
*(&local0) = $tmp335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:171
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s347));
frost$core$String* $tmp348 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
*(&local1) = &$s349;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:172
org$frostlang$frostc$Type** $tmp350 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp351 = *$tmp350;
frost$core$Bit $tmp352 = (frost$core$Bit) {$tmp351 != NULL};
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:173
frost$core$MutableString* $tmp354 = *(&local0);
frost$core$String* $tmp355 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ClassDecl.frost:173:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
frost$core$String* $tmp356 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp355, &$s357);
org$frostlang$frostc$Type** $tmp358 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp359 = *$tmp358;
frost$core$Bit $tmp360 = (frost$core$Bit) {$tmp359 != NULL};
bool $tmp361 = $tmp360.value;
if ($tmp361) goto block4; else goto block5;
block5:;
frost$core$Int $tmp362 = (frost$core$Int) {173u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s363, $tmp362, &$s364);
abort(); // unreachable
block4:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ClassDecl.frost:173:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn366 $tmp365 = ($fn366) ((frost$core$Object*) $tmp359)->$class->vtable[0];
frost$core$String* $tmp367 = $tmp365(((frost$core$Object*) $tmp359));
frost$core$String* $tmp368 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp356, $tmp367);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
frost$core$String* $tmp369 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp368, &$s370);
frost$core$MutableString$append$frost$core$String($tmp354, $tmp369);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:174
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s371));
frost$core$String* $tmp372 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
*(&local1) = &$s373;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:176
frost$collections$Array** $tmp374 = &param0->rawInterfaces;
frost$collections$Array* $tmp375 = *$tmp374;
ITable* $tmp376 = ((frost$collections$Iterable*) $tmp375)->$class->itable;
while ($tmp376->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp376 = $tmp376->next;
}
$fn378 $tmp377 = $tmp376->methods[0];
frost$collections$Iterator* $tmp379 = $tmp377(((frost$collections$Iterable*) $tmp375));
goto block7;
block7:;
ITable* $tmp380 = $tmp379->$class->itable;
while ($tmp380->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp380 = $tmp380->next;
}
$fn382 $tmp381 = $tmp380->methods[0];
frost$core$Bit $tmp383 = $tmp381($tmp379);
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block9; else goto block8;
block8:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp385 = $tmp379->$class->itable;
while ($tmp385->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp385 = $tmp385->next;
}
$fn387 $tmp386 = $tmp385->methods[1];
frost$core$Object* $tmp388 = $tmp386($tmp379);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp388)));
org$frostlang$frostc$Type* $tmp389 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp388);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:177
frost$core$MutableString* $tmp390 = *(&local0);
frost$core$String* $tmp391 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ClassDecl.frost:177:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
frost$core$String* $tmp392 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp391, &$s393);
org$frostlang$frostc$Type* $tmp394 = *(&local2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ClassDecl.frost:177:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn396 $tmp395 = ($fn396) ((frost$core$Object*) $tmp394)->$class->vtable[0];
frost$core$String* $tmp397 = $tmp395(((frost$core$Object*) $tmp394));
frost$core$String* $tmp398 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp392, $tmp397);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$String* $tmp399 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp398, &$s400);
frost$core$MutableString$append$frost$core$String($tmp390, $tmp399);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:178
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s401));
frost$core$String* $tmp402 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
*(&local1) = &$s403;
frost$core$Frost$unref$frost$core$Object$Q($tmp388);
org$frostlang$frostc$Type* $tmp404 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block7;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:180
frost$core$MutableString* $tmp405 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp405, &$s406);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:181
frost$collections$Array** $tmp407 = &param0->classes;
frost$collections$Array* $tmp408 = *$tmp407;
ITable* $tmp409 = ((frost$collections$Iterable*) $tmp408)->$class->itable;
while ($tmp409->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp409 = $tmp409->next;
}
$fn411 $tmp410 = $tmp409->methods[0];
frost$collections$Iterator* $tmp412 = $tmp410(((frost$collections$Iterable*) $tmp408));
goto block12;
block12:;
ITable* $tmp413 = $tmp412->$class->itable;
while ($tmp413->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp413 = $tmp413->next;
}
$fn415 $tmp414 = $tmp413->methods[0];
frost$core$Bit $tmp416 = $tmp414($tmp412);
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block14; else goto block13;
block13:;
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp418 = $tmp412->$class->itable;
while ($tmp418->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp418 = $tmp418->next;
}
$fn420 $tmp419 = $tmp418->methods[1];
frost$core$Object* $tmp421 = $tmp419($tmp412);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp421)));
org$frostlang$frostc$ClassDecl* $tmp422 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
*(&local3) = ((org$frostlang$frostc$ClassDecl*) $tmp421);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:182
frost$core$MutableString* $tmp423 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp424 = *(&local3);
frost$core$String* $tmp425 = org$frostlang$frostc$ClassDecl$get_asString$R$frost$core$String($tmp424);
frost$core$String* $tmp426 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp425, &$s427);
frost$core$MutableString$append$frost$core$String($tmp423, $tmp426);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
frost$core$Frost$unref$frost$core$Object$Q($tmp421);
org$frostlang$frostc$ClassDecl* $tmp428 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:184
frost$collections$Array** $tmp429 = &param0->fields;
frost$collections$Array* $tmp430 = *$tmp429;
ITable* $tmp431 = ((frost$collections$Iterable*) $tmp430)->$class->itable;
while ($tmp431->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp431 = $tmp431->next;
}
$fn433 $tmp432 = $tmp431->methods[0];
frost$collections$Iterator* $tmp434 = $tmp432(((frost$collections$Iterable*) $tmp430));
goto block15;
block15:;
ITable* $tmp435 = $tmp434->$class->itable;
while ($tmp435->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp435 = $tmp435->next;
}
$fn437 $tmp436 = $tmp435->methods[0];
frost$core$Bit $tmp438 = $tmp436($tmp434);
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block17; else goto block16;
block16:;
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp440 = $tmp434->$class->itable;
while ($tmp440->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp440 = $tmp440->next;
}
$fn442 $tmp441 = $tmp440->methods[1];
frost$core$Object* $tmp443 = $tmp441($tmp434);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp443)));
org$frostlang$frostc$FieldDecl* $tmp444 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) $tmp443);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:185
frost$core$MutableString* $tmp445 = *(&local0);
org$frostlang$frostc$FieldDecl* $tmp446 = *(&local4);
frost$core$String* $tmp447 = org$frostlang$frostc$FieldDecl$get_asString$R$frost$core$String($tmp446);
frost$core$String* $tmp448 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp447, &$s449);
frost$core$MutableString$append$frost$core$String($tmp445, $tmp448);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
frost$core$Frost$unref$frost$core$Object$Q($tmp443);
org$frostlang$frostc$FieldDecl* $tmp450 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block15;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:187
frost$collections$Array** $tmp451 = &param0->methods;
frost$collections$Array* $tmp452 = *$tmp451;
ITable* $tmp453 = ((frost$collections$Iterable*) $tmp452)->$class->itable;
while ($tmp453->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp453 = $tmp453->next;
}
$fn455 $tmp454 = $tmp453->methods[0];
frost$collections$Iterator* $tmp456 = $tmp454(((frost$collections$Iterable*) $tmp452));
goto block18;
block18:;
ITable* $tmp457 = $tmp456->$class->itable;
while ($tmp457->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp457 = $tmp457->next;
}
$fn459 $tmp458 = $tmp457->methods[0];
frost$core$Bit $tmp460 = $tmp458($tmp456);
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block20; else goto block19;
block19:;
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp462 = $tmp456->$class->itable;
while ($tmp462->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp462 = $tmp462->next;
}
$fn464 $tmp463 = $tmp462->methods[1];
frost$core$Object* $tmp465 = $tmp463($tmp456);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp465)));
org$frostlang$frostc$MethodDecl* $tmp466 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) $tmp465);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:188
frost$core$MutableString* $tmp467 = *(&local0);
org$frostlang$frostc$MethodDecl* $tmp468 = *(&local5);
frost$core$String* $tmp469 = org$frostlang$frostc$MethodDecl$get_asString$R$frost$core$String($tmp468);
frost$core$String* $tmp470 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp469, &$s471);
frost$core$MutableString$append$frost$core$String($tmp467, $tmp470);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
frost$core$Frost$unref$frost$core$Object$Q($tmp465);
org$frostlang$frostc$MethodDecl* $tmp472 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block18;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:190
frost$core$MutableString* $tmp473 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp473, &$s474);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:191
frost$core$MutableString* $tmp475 = *(&local0);
frost$core$String* $tmp476 = frost$core$MutableString$finish$R$frost$core$String($tmp475);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
frost$core$String* $tmp477 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp478 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp476;

}
void org$frostlang$frostc$ClassDecl$cleanup(org$frostlang$frostc$ClassDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp479 = &param0->source;
frost$io$File* $tmp480 = *$tmp479;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$core$String** $tmp481 = &param0->name;
frost$core$String* $tmp482 = *$tmp481;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
org$frostlang$frostc$Type** $tmp483 = &param0->type;
org$frostlang$frostc$Type* $tmp484 = *$tmp483;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
frost$collections$MapView** $tmp485 = &param0->aliases;
frost$collections$MapView* $tmp486 = *$tmp485;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
frost$core$String** $tmp487 = &param0->doccomment;
frost$core$String* $tmp488 = *$tmp487;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
org$frostlang$frostc$Annotations** $tmp489 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp490 = *$tmp489;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$collections$Array** $tmp491 = &param0->declaredSupers;
frost$collections$Array* $tmp492 = *$tmp491;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
org$frostlang$frostc$Type** $tmp493 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp494 = *$tmp493;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$collections$Array** $tmp495 = &param0->rawInterfaces;
frost$collections$Array* $tmp496 = *$tmp495;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
frost$collections$List** $tmp497 = &param0->parameters;
frost$collections$List* $tmp498 = *$tmp497;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
frost$collections$Array** $tmp499 = &param0->fields;
frost$collections$Array* $tmp500 = *$tmp499;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
frost$collections$Array** $tmp501 = &param0->methods;
frost$collections$Array* $tmp502 = *$tmp501;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
frost$collections$Array** $tmp503 = &param0->classes;
frost$collections$Array* $tmp504 = *$tmp503;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
frost$collections$Array** $tmp505 = &param0->choiceCases;
frost$collections$Array* $tmp506 = *$tmp505;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
frost$core$Weak** $tmp507 = &param0->owner;
frost$core$Weak* $tmp508 = *$tmp507;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
org$frostlang$frostc$SymbolTable** $tmp509 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp510 = *$tmp509;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
frost$collections$Array** $tmp511 = &param0->virtualMethods;
frost$collections$Array* $tmp512 = *$tmp511;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
frost$collections$HashMap** $tmp513 = &param0->classResolutionCache;
frost$collections$HashMap* $tmp514 = *$tmp513;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
return;

}

