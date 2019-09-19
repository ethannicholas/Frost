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
#include "frost/core/Int.h"
#include "frost/core/Weak.h"
#include "frost/collections/HashMap.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/List.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/collections/Stack.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/String/Index.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/core/MutableString.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/MethodDecl.h"


static frost$core$String $s1;
org$frostlang$frostc$ClassDecl$class_type org$frostlang$frostc$ClassDecl$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$ClassDecl$get_asString$R$frost$core$String, org$frostlang$frostc$ClassDecl$cleanup, org$frostlang$frostc$ClassDecl$simpleName$R$frost$core$String, org$frostlang$frostc$ClassDecl$typeWithParameters$R$org$frostlang$frostc$Type, org$frostlang$frostc$ClassDecl$isSpecialization$R$frost$core$Bit} };

typedef frost$core$Bit (*$fn2)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn3)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn5)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn6)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn7)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn8)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn9)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn40)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn41)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn42)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn43)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn49)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn50)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn51)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn52)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn53)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn54)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn55)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn56)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn57)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn58)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn59)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn60)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn61)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn62)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn70)(frost$core$Object*);
typedef frost$core$String* (*$fn78)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 30, 472444438948626732, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, -7843772953422604045, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x69\x6e\x69\x74\x28\x73\x6f\x75\x72\x63\x65\x3a\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x61\x6c\x69\x61\x73\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x2c\x20\x64\x6f\x63\x63\x6f\x6d\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2c\x20\x6b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x64\x65\x63\x6c\x61\x72\x65\x64\x53\x75\x70\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x2c\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x2c\x20\x70\x61\x72\x65\x6e\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x29", 542, -1070127523700856878, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, -7843772953422604045, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, -7843772953422604045, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 1485954231735473549, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x20", 3, -4370613593743840083, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x20", 3, -4370613593743840083, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, -7843772953422604045, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 81, -1728612804042895694, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, -4432762389004539022, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };

void org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable(void* rawSelf, frost$io$File* param1, org$frostlang$frostc$Position param2, frost$collections$MapView* param3, frost$core$String* param4, org$frostlang$frostc$Annotations* param5, org$frostlang$frostc$ClassDecl$Kind param6, org$frostlang$frostc$Type* param7, frost$collections$ListView* param8, frost$collections$Array* param9, org$frostlang$frostc$SymbolTable* param10) {
org$frostlang$frostc$ClassDecl* param0 = (org$frostlang$frostc$ClassDecl*) rawSelf;

frost$core$Bit local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Compiler$Resolution local3;
org$frostlang$frostc$Compiler$Resolution local4;
org$frostlang$frostc$ClassDecl$GenericParameter* local5 = NULL;
frost$core$Int _1;
frost$core$Int* _2;
frost$core$Int _5;
frost$core$Int* _6;
frost$core$Object* _9;
org$frostlang$frostc$Type** _11;
org$frostlang$frostc$Type* _12;
frost$core$Object* _13;
org$frostlang$frostc$Type** _15;
frost$collections$Array* _18;
frost$collections$Array* _19;
frost$core$Object* _21;
frost$collections$Array** _23;
frost$collections$Array* _24;
frost$core$Object* _25;
frost$collections$Array** _27;
frost$core$Object* _29;
frost$collections$Array* _32;
frost$collections$Array* _33;
frost$core$Object* _35;
frost$collections$Array** _37;
frost$collections$Array* _38;
frost$core$Object* _39;
frost$collections$Array** _41;
frost$core$Object* _43;
frost$collections$Array* _46;
frost$collections$Array* _47;
frost$core$Object* _49;
frost$collections$Array** _51;
frost$collections$Array* _52;
frost$core$Object* _53;
frost$collections$Array** _55;
frost$core$Object* _57;
frost$collections$Array* _60;
frost$collections$Array* _61;
frost$core$Object* _63;
frost$collections$Array** _65;
frost$collections$Array* _66;
frost$core$Object* _67;
frost$collections$Array** _69;
frost$core$Object* _71;
frost$collections$Array* _74;
frost$collections$Array* _75;
frost$core$Object* _77;
frost$collections$Array** _79;
frost$collections$Array* _80;
frost$core$Object* _81;
frost$collections$Array** _83;
frost$core$Object* _85;
frost$core$Weak* _88;
frost$core$Weak* _89;
frost$core$Object* _90;
frost$core$Object* _92;
frost$core$Weak** _94;
frost$core$Weak* _95;
frost$core$Object* _96;
frost$core$Weak** _98;
frost$core$Object* _100;
frost$core$Bit _103;
frost$core$Bit* _104;
frost$core$Bit _107;
frost$core$Bit* _108;
frost$collections$Array* _111;
frost$collections$Array* _112;
frost$core$Object* _114;
frost$collections$Array** _116;
frost$collections$Array* _117;
frost$core$Object* _118;
frost$collections$Array** _120;
frost$core$Object* _122;
frost$collections$HashMap* _125;
frost$collections$HashMap* _126;
frost$core$Object* _128;
frost$collections$HashMap** _130;
frost$collections$HashMap* _131;
frost$core$Object* _132;
frost$collections$HashMap** _134;
frost$core$Object* _136;
org$frostlang$frostc$Type$Kind* _140;
org$frostlang$frostc$Type$Kind _141;
frost$core$Equatable* _142;
frost$core$Equatable* _143;
frost$core$Int _144;
frost$core$Int* _147;
org$frostlang$frostc$Type$Kind _149;
org$frostlang$frostc$Type$Kind _152;
frost$core$Equatable* _153;
$fn2 _154;
frost$core$Bit _155;
bool _156;
org$frostlang$frostc$FixedArray** _160;
org$frostlang$frostc$FixedArray* _161;
bool _162;
frost$core$Bit _163;
bool _164;
frost$core$Int _166;
org$frostlang$frostc$FixedArray* _169;
frost$core$Object* _170;
org$frostlang$frostc$FixedArray* _173;
frost$core$Int _174;
frost$core$Object* _175;
org$frostlang$frostc$Type* _176;
org$frostlang$frostc$Symbol* _177;
frost$core$String** _178;
frost$core$String* _179;
frost$core$Bit _180;
frost$core$Object* _181;
frost$core$Object* _183;
frost$core$Bit _189;
frost$core$Object* _190;
frost$core$Object* _192;
bool _197;
bool _198;
frost$core$Bit _199;
bool _201;
frost$core$Int _203;
org$frostlang$frostc$Position* _207;
org$frostlang$frostc$Symbol* _210;
frost$core$String** _211;
frost$core$String* _212;
frost$core$Object* _213;
frost$core$String** _215;
frost$core$String* _216;
frost$core$Object* _217;
frost$core$String** _219;
frost$core$Object* _222;
org$frostlang$frostc$Type** _224;
org$frostlang$frostc$Type* _225;
frost$core$Object* _226;
org$frostlang$frostc$Type** _228;
frost$core$Object* _231;
frost$io$File** _233;
frost$io$File* _234;
frost$core$Object* _235;
frost$io$File** _237;
frost$collections$HashMap* _240;
frost$collections$HashMap* _241;
frost$collections$MapView* _242;
frost$collections$MapView* _244;
frost$core$Object* _245;
frost$collections$MapView** _247;
frost$collections$MapView* _248;
frost$core$Object* _249;
frost$collections$MapView** _251;
frost$core$Object* _253;
frost$core$Object* _256;
frost$core$String** _258;
frost$core$String* _259;
frost$core$Object* _260;
frost$core$String** _262;
frost$core$Object* _265;
org$frostlang$frostc$Annotations** _267;
org$frostlang$frostc$Annotations* _268;
frost$core$Object* _269;
org$frostlang$frostc$Annotations** _271;
org$frostlang$frostc$ClassDecl$Kind* _274;
frost$collections$Array* _277;
frost$collections$Array* _278;
frost$collections$CollectionView* _279;
frost$collections$CollectionView* _280;
frost$core$Object* _282;
frost$collections$Array** _284;
frost$collections$Array* _285;
frost$core$Object* _286;
frost$collections$Array** _288;
frost$core$Object* _290;
frost$collections$List* _293;
frost$core$Object* _294;
frost$collections$List** _296;
frost$collections$List* _297;
frost$core$Object* _298;
frost$collections$List** _300;
org$frostlang$frostc$SymbolTable* _303;
frost$core$Object* _305;
org$frostlang$frostc$SymbolTable** _307;
org$frostlang$frostc$SymbolTable* _308;
frost$core$Object* _309;
org$frostlang$frostc$SymbolTable** _311;
frost$core$Object* _313;
frost$core$Int _316;
frost$core$Int* _319;
org$frostlang$frostc$Compiler$Resolution _321;
org$frostlang$frostc$Compiler$Resolution _324;
org$frostlang$frostc$Compiler$Resolution* _325;
org$frostlang$frostc$SymbolTable** _328;
org$frostlang$frostc$SymbolTable* _329;
frost$core$Weak** _330;
frost$core$Weak* _331;
frost$core$Weak* _332;
frost$core$Bit* _337;
frost$core$Bit _338;
bool _340;
frost$core$Int _342;
frost$core$Object** _346;
frost$core$Object* _347;
frost$core$Object* _348;
frost$core$Object* _349;
org$frostlang$frostc$Compiler* _352;
frost$collections$Stack** _353;
frost$collections$Stack* _354;
frost$collections$Stack* _355;
frost$core$Object* _356;
frost$collections$Array** _359;
frost$collections$Array* _360;
frost$collections$Array* _361;
frost$core$Object* _362;
frost$core$Object* _365;
frost$collections$Iterable* _368;
frost$collections$Iterable* _369;
$fn3 _370;
frost$collections$Iterator* _371;
frost$collections$Iterator* _372;
frost$collections$Iterator* _374;
$fn4 _375;
frost$core$Bit _376;
bool _377;
frost$collections$Iterator* _380;
$fn5 _381;
frost$core$Object* _382;
org$frostlang$frostc$ClassDecl$GenericParameter* _383;
frost$core$Object* _384;
org$frostlang$frostc$ClassDecl$GenericParameter* _386;
frost$core$Object* _387;
org$frostlang$frostc$SymbolTable** _391;
org$frostlang$frostc$SymbolTable* _392;
org$frostlang$frostc$ClassDecl$GenericParameter* _393;
org$frostlang$frostc$Symbol* _394;
frost$core$String** _397;
frost$core$String* _398;
frost$core$Object* _401;
org$frostlang$frostc$ClassDecl$GenericParameter* _403;
frost$core$Object* _404;
frost$core$Object* _408;
org$frostlang$frostc$SymbolTable** _411;
org$frostlang$frostc$SymbolTable* _412;
frost$core$Weak** _413;
frost$core$Weak* _414;
frost$core$Weak* _415;
frost$core$Bit* _420;
frost$core$Bit _421;
bool _423;
frost$core$Int _425;
frost$core$Object** _429;
frost$core$Object* _430;
frost$core$Object* _431;
frost$core$Object* _432;
org$frostlang$frostc$Compiler* _435;
frost$collections$Stack** _436;
frost$collections$Stack* _437;
frost$collections$Stack* _438;
frost$core$Int _439;
frost$core$Int _441;
int64_t _442;
int64_t _443;
bool _444;
frost$core$Bit _445;
bool _446;
frost$collections$Array** _450;
frost$collections$Array* _451;
frost$collections$CollectionView* _452;
$fn6 _453;
frost$core$Int _454;
int64_t _456;
int64_t _457;
bool _458;
frost$core$Bit _459;
bool _460;
frost$core$Int _462;
frost$collections$Array** _466;
frost$collections$Array* _467;
frost$collections$CollectionView* _468;
$fn7 _469;
frost$core$Int _470;
int64_t _471;
int64_t _472;
bool _473;
frost$core$Bit _474;
bool _475;
frost$core$Int _477;
frost$collections$Array** _481;
frost$collections$Array* _482;
frost$collections$Array* _483;
frost$collections$Array** _484;
frost$collections$Array* _485;
frost$collections$CollectionView* _486;
$fn8 _487;
frost$core$Int _488;
frost$core$Int _489;
int64_t _490;
int64_t _491;
int64_t _492;
frost$core$Int _493;
int64_t _494;
int64_t _495;
int64_t _496;
frost$core$Int _497;
frost$core$Int _499;
int64_t _500;
int64_t _501;
bool _502;
frost$core$Bit _503;
bool _504;
frost$collections$CollectionView* _506;
$fn9 _507;
frost$core$Int _508;
int64_t _509;
int64_t _510;
bool _511;
frost$core$Bit _512;
bool _513;
frost$core$Int _515;
frost$core$Object*** _519;
frost$core$Object** _520;
frost$core$Int64 _521;
int64_t _522;
frost$core$Object* _523;
frost$core$Object* _524;
frost$core$Object* _527;
frost$core$Object* _528;
frost$core$Object* _530;
org$frostlang$frostc$ClassDecl* _533;
bool _534;
frost$core$Bit _535;
bool _536;
frost$core$Int _538;
frost$core$Object* _541;
frost$core$Object* _543;
org$frostlang$frostc$SymbolTable** _546;
org$frostlang$frostc$SymbolTable* _547;
frost$core$Weak** _548;
frost$core$Weak* _549;
frost$core$Weak* _550;
frost$core$Bit* _555;
frost$core$Bit _556;
bool _558;
frost$core$Int _560;
frost$core$Object** _564;
frost$core$Object* _565;
frost$core$Object* _566;
frost$core$Object* _567;
org$frostlang$frostc$Compiler* _570;
frost$collections$Stack** _571;
frost$collections$Stack* _572;
frost$collections$Stack* _573;
frost$core$Object* _574;
org$frostlang$frostc$ClassDecl* _575;
frost$core$Object* _576;
frost$core$Object* _578;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:52
_1 = (frost$core$Int) {72623859790382856u};
_2 = &param0->TEST1;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:56
_5 = (frost$core$Int) {578437695752307201u};
_6 = &param0->TEST2;
*_6 = _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:85
_9 = ((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = &param0->rawSuper;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = &param0->rawSuper;
*_15 = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:90
_18 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_19 = _18;
frost$collections$Array$init(_19);
_21 = ((frost$core$Object*) _18);
frost$core$Frost$ref$frost$core$Object$Q(_21);
_23 = &param0->rawInterfaces;
_24 = *_23;
_25 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = &param0->rawInterfaces;
*_27 = _18;
_29 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_29);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:94
_32 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_33 = _32;
frost$collections$Array$init(_33);
_35 = ((frost$core$Object*) _32);
frost$core$Frost$ref$frost$core$Object$Q(_35);
_37 = &param0->fields;
_38 = *_37;
_39 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_39);
_41 = &param0->fields;
*_41 = _32;
_43 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_43);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:96
_46 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_47 = _46;
frost$collections$Array$init(_47);
_49 = ((frost$core$Object*) _46);
frost$core$Frost$ref$frost$core$Object$Q(_49);
_51 = &param0->methods;
_52 = *_51;
_53 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_53);
_55 = &param0->methods;
*_55 = _46;
_57 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_57);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:98
_60 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_61 = _60;
frost$collections$Array$init(_61);
_63 = ((frost$core$Object*) _60);
frost$core$Frost$ref$frost$core$Object$Q(_63);
_65 = &param0->classes;
_66 = *_65;
_67 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_67);
_69 = &param0->classes;
*_69 = _60;
_71 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_71);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:100
_74 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_75 = _74;
frost$collections$Array$init(_75);
_77 = ((frost$core$Object*) _74);
frost$core$Frost$ref$frost$core$Object$Q(_77);
_79 = &param0->choiceCases;
_80 = *_79;
_81 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_81);
_83 = &param0->choiceCases;
*_83 = _74;
_85 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_85);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:103
_88 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_89 = _88;
_90 = ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_89, _90);
_92 = ((frost$core$Object*) _88);
frost$core$Frost$ref$frost$core$Object$Q(_92);
_94 = &param0->owner;
_95 = *_94;
_96 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_96);
_98 = &param0->owner;
*_98 = _88;
_100 = ((frost$core$Object*) _88);
frost$core$Frost$unref$frost$core$Object$Q(_100);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:108
_103 = (frost$core$Bit) {false};
_104 = &param0->symbolTableResolved;
*_104 = _103;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:110
_107 = (frost$core$Bit) {true};
_108 = &param0->external;
*_108 = _107;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:112
_111 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_112 = _111;
frost$collections$Array$init(_112);
_114 = ((frost$core$Object*) _111);
frost$core$Frost$ref$frost$core$Object$Q(_114);
_116 = &param0->virtualMethods;
_117 = *_116;
_118 = ((frost$core$Object*) _117);
frost$core$Frost$unref$frost$core$Object$Q(_118);
_120 = &param0->virtualMethods;
*_120 = _111;
_122 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_122);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:114
_125 = (frost$collections$HashMap*) frostObjectAlloc(sizeof(frost$collections$HashMap), (frost$core$Class*) &frost$collections$HashMap$class);
_126 = _125;
frost$collections$HashMap$init(_126);
_128 = ((frost$core$Object*) _125);
frost$core$Frost$ref$frost$core$Object$Q(_128);
_130 = &param0->classResolutionCache;
_131 = *_130;
_132 = ((frost$core$Object*) _131);
frost$core$Frost$unref$frost$core$Object$Q(_132);
_134 = &param0->classResolutionCache;
*_134 = _125;
_136 = ((frost$core$Object*) _125);
frost$core$Frost$unref$frost$core$Object$Q(_136);
// begin inline call to function org.frostlang.frostc.Type.get_isClassLiteral():frost.core.Bit from ClassDecl.frost:118:15
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:379
_140 = &param7->typeKind;
_141 = *_140;
org$frostlang$frostc$Type$Kind$wrapper* $tmp10;
$tmp10 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp10->value = _141;
_142 = ((frost$core$Equatable*) $tmp10);
_143 = _142;
_144 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:379:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_147 = &(&local2)->$rawValue;
*_147 = _144;
_149 = *(&local2);
*(&local1) = _149;
_152 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp11;
$tmp11 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp11->value = _152;
_153 = ((frost$core$Equatable*) $tmp11);
ITable* $tmp12 = _143->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp12 = $tmp12->next;
}
_154 = $tmp12->methods[0];
_155 = _154(_143, _153);
_156 = _155.value;
if (_156) goto block5; else goto block6;
block5:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:379:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_160 = &param7->_subtypes;
_161 = *_160;
_162 = _161 != NULL;
_163 = (frost$core$Bit) {_162};
_164 = _163.value;
if (_164) goto block9; else goto block10;
block10:;
_166 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _166, &$s14);
abort(); // unreachable
block9:;
_169 = _161;
_170 = ((frost$core$Object*) _169);
frost$core$Frost$ref$frost$core$Object$Q(_170);
_173 = _169;
_174 = (frost$core$Int) {0u};
_175 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_173, _174);
_176 = ((org$frostlang$frostc$Type*) _175);
_177 = ((org$frostlang$frostc$Symbol*) _176);
_178 = &_177->name;
_179 = *_178;
_180 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_179, &$s15);
_181 = _175;
frost$core$Frost$unref$frost$core$Object$Q(_181);
_183 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_183);
*(&local0) = _180;
goto block7;
block6:;
*(&local0) = _155;
goto block7;
block7:;
_189 = *(&local0);
_190 = ((frost$core$Object*) _153);
frost$core$Frost$unref$frost$core$Object$Q(_190);
_192 = ((frost$core$Object*) _142);
frost$core$Frost$unref$frost$core$Object$Q(_192);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ClassDecl.frost:118:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_197 = _189.value;
_198 = !_197;
_199 = (frost$core$Bit) {_198};
_201 = _199.value;
if (_201) goto block1; else goto block2;
block2:;
_203 = (frost$core$Int) {119u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s16, _203, &$s17);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:122
_207 = &param0->position;
*_207 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:123
_210 = ((org$frostlang$frostc$Symbol*) param7);
_211 = &_210->name;
_212 = *_211;
_213 = ((frost$core$Object*) _212);
frost$core$Frost$ref$frost$core$Object$Q(_213);
_215 = &param0->name;
_216 = *_215;
_217 = ((frost$core$Object*) _216);
frost$core$Frost$unref$frost$core$Object$Q(_217);
_219 = &param0->name;
*_219 = _212;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:124
_222 = ((frost$core$Object*) param7);
frost$core$Frost$ref$frost$core$Object$Q(_222);
_224 = &param0->type;
_225 = *_224;
_226 = ((frost$core$Object*) _225);
frost$core$Frost$unref$frost$core$Object$Q(_226);
_228 = &param0->type;
*_228 = param7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:125
_231 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_231);
_233 = &param0->source;
_234 = *_233;
_235 = ((frost$core$Object*) _234);
frost$core$Frost$unref$frost$core$Object$Q(_235);
_237 = &param0->source;
*_237 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:126
_240 = (frost$collections$HashMap*) frostObjectAlloc(sizeof(frost$collections$HashMap), (frost$core$Class*) &frost$collections$HashMap$class);
_241 = _240;
_242 = param3;
frost$collections$HashMap$init$frost$collections$MapView$LTfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$GT(_241, _242);
_244 = ((frost$collections$MapView*) _240);
_245 = ((frost$core$Object*) _244);
frost$core$Frost$ref$frost$core$Object$Q(_245);
_247 = &param0->aliases;
_248 = *_247;
_249 = ((frost$core$Object*) _248);
frost$core$Frost$unref$frost$core$Object$Q(_249);
_251 = &param0->aliases;
*_251 = _244;
_253 = ((frost$core$Object*) _240);
frost$core$Frost$unref$frost$core$Object$Q(_253);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:127
_256 = ((frost$core$Object*) param4);
frost$core$Frost$ref$frost$core$Object$Q(_256);
_258 = &param0->doccomment;
_259 = *_258;
_260 = ((frost$core$Object*) _259);
frost$core$Frost$unref$frost$core$Object$Q(_260);
_262 = &param0->doccomment;
*_262 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:128
_265 = ((frost$core$Object*) param5);
frost$core$Frost$ref$frost$core$Object$Q(_265);
_267 = &param0->annotations;
_268 = *_267;
_269 = ((frost$core$Object*) _268);
frost$core$Frost$unref$frost$core$Object$Q(_269);
_271 = &param0->annotations;
*_271 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:129
_274 = &param0->classKind;
*_274 = param6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:130
_277 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_278 = _277;
_279 = ((frost$collections$CollectionView*) param8);
_280 = _279;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_278, _280);
_282 = ((frost$core$Object*) _277);
frost$core$Frost$ref$frost$core$Object$Q(_282);
_284 = &param0->declaredSupers;
_285 = *_284;
_286 = ((frost$core$Object*) _285);
frost$core$Frost$unref$frost$core$Object$Q(_286);
_288 = &param0->declaredSupers;
*_288 = _277;
_290 = ((frost$core$Object*) _277);
frost$core$Frost$unref$frost$core$Object$Q(_290);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:131
_293 = ((frost$collections$List*) param9);
_294 = ((frost$core$Object*) _293);
frost$core$Frost$ref$frost$core$Object$Q(_294);
_296 = &param0->parameters;
_297 = *_296;
_298 = ((frost$core$Object*) _297);
frost$core$Frost$unref$frost$core$Object$Q(_298);
_300 = &param0->parameters;
*_300 = _293;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:132
_303 = (org$frostlang$frostc$SymbolTable*) frostObjectAlloc(sizeof(org$frostlang$frostc$SymbolTable), (frost$core$Class*) &org$frostlang$frostc$SymbolTable$class);
org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$SymbolTable(_303, param10);
_305 = ((frost$core$Object*) _303);
frost$core$Frost$ref$frost$core$Object$Q(_305);
_307 = &param0->symbolTable;
_308 = *_307;
_309 = ((frost$core$Object*) _308);
frost$core$Frost$unref$frost$core$Object$Q(_309);
_311 = &param0->symbolTable;
*_311 = _303;
_313 = ((frost$core$Object*) _303);
frost$core$Frost$unref$frost$core$Object$Q(_313);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:133
_316 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from ClassDecl.frost:133:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
_319 = &(&local4)->$rawValue;
*_319 = _316;
_321 = *(&local4);
*(&local3) = _321;
_324 = *(&local3);
_325 = &param0->resolved;
*_325 = _324;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:134
_328 = &param0->symbolTable;
_329 = *_328;
_330 = &_329->compiler;
_331 = *_330;
_332 = _331;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ClassDecl.frost:134:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_337 = &_332->_valid;
_338 = *_337;
_340 = _338.value;
if (_340) goto block15; else goto block16;
block16:;
_342 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _342, &$s19);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_346 = &_332->value;
_347 = *_346;
_348 = _347;
_349 = _348;
frost$core$Frost$ref$frost$core$Object$Q(_349);
_352 = ((org$frostlang$frostc$Compiler*) _348);
_353 = &_352->currentClass;
_354 = *_353;
_355 = _354;
_356 = ((frost$core$Object*) param0);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from ClassDecl.frost:134:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
_359 = &_355->contents;
_360 = *_359;
_361 = _360;
_362 = _356;
frost$collections$Array$add$frost$collections$Array$T(_361, _362);
_365 = _348;
frost$core$Frost$unref$frost$core$Object$Q(_365);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:135
_368 = ((frost$collections$Iterable*) param9);
_369 = _368;
ITable* $tmp20 = _369->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp20 = $tmp20->next;
}
_370 = $tmp20->methods[0];
_371 = _370(_369);
_372 = _371;
goto block18;
block18:;
_374 = _372;
ITable* $tmp21 = _374->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp21 = $tmp21->next;
}
_375 = $tmp21->methods[0];
_376 = _375(_374);
_377 = _376.value;
if (_377) goto block20; else goto block19;
block19:;
*(&local5) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
_380 = _372;
ITable* $tmp22 = _380->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp22 = $tmp22->next;
}
_381 = $tmp22->methods[1];
_382 = _381(_380);
_383 = ((org$frostlang$frostc$ClassDecl$GenericParameter*) _382);
_384 = ((frost$core$Object*) _383);
frost$core$Frost$ref$frost$core$Object$Q(_384);
_386 = *(&local5);
_387 = ((frost$core$Object*) _386);
frost$core$Frost$unref$frost$core$Object$Q(_387);
*(&local5) = _383;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:136
_391 = &param0->symbolTable;
_392 = *_391;
_393 = *(&local5);
_394 = ((org$frostlang$frostc$Symbol*) _393);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from ClassDecl.frost:136:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
_397 = &_394->name;
_398 = *_397;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String(_392, _394, _398);
_401 = _382;
frost$core$Frost$unref$frost$core$Object$Q(_401);
_403 = *(&local5);
_404 = ((frost$core$Object*) _403);
frost$core$Frost$unref$frost$core$Object$Q(_404);
*(&local5) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
goto block18;
block20:;
_408 = ((frost$core$Object*) _371);
frost$core$Frost$unref$frost$core$Object$Q(_408);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:138
_411 = &param0->symbolTable;
_412 = *_411;
_413 = &_412->compiler;
_414 = *_413;
_415 = _414;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ClassDecl.frost:138:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_420 = &_415->_valid;
_421 = *_420;
_423 = _421.value;
if (_423) goto block24; else goto block25;
block25:;
_425 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s23, _425, &$s24);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_429 = &_415->value;
_430 = *_429;
_431 = _430;
_432 = _431;
frost$core$Frost$ref$frost$core$Object$Q(_432);
_435 = ((org$frostlang$frostc$Compiler*) _431);
_436 = &_435->currentClass;
_437 = *_436;
_438 = _437;
_439 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from ClassDecl.frost:138:49
_441 = (frost$core$Int) {0u};
_442 = _439.value;
_443 = _441.value;
_444 = _442 >= _443;
_445 = (frost$core$Bit) {_444};
_446 = _445.value;
if (_446) goto block29; else goto block28;
block29:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_450 = &_438->contents;
_451 = *_450;
_452 = ((frost$collections$CollectionView*) _451);
ITable* $tmp25 = _452->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp25 = $tmp25->next;
}
_453 = $tmp25->methods[0];
_454 = _453(_452);
_456 = _439.value;
_457 = _454.value;
_458 = _456 < _457;
_459 = (frost$core$Bit) {_458};
_460 = _459.value;
if (_460) goto block27; else goto block28;
block28:;
_462 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s26, _462, &$s27);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_466 = &_438->contents;
_467 = *_466;
_468 = ((frost$collections$CollectionView*) _467);
ITable* $tmp28 = _468->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp28 = $tmp28->next;
}
_469 = $tmp28->methods[0];
_470 = _469(_468);
_471 = _470.value;
_472 = _439.value;
_473 = _471 > _472;
_474 = (frost$core$Bit) {_473};
_475 = _474.value;
if (_475) goto block31; else goto block32;
block32:;
_477 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s29, _477);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_481 = &_438->contents;
_482 = *_481;
_483 = _482;
_484 = &_438->contents;
_485 = *_484;
_486 = ((frost$collections$CollectionView*) _485);
ITable* $tmp30 = _486->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp30 = $tmp30->next;
}
_487 = $tmp30->methods[0];
_488 = _487(_486);
_489 = (frost$core$Int) {1u};
_490 = _488.value;
_491 = _489.value;
_492 = _490 - _491;
_493 = (frost$core$Int) {_492};
_494 = _493.value;
_495 = _439.value;
_496 = _494 - _495;
_497 = (frost$core$Int) {_496};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_499 = (frost$core$Int) {0u};
_500 = _497.value;
_501 = _499.value;
_502 = _500 >= _501;
_503 = (frost$core$Bit) {_502};
_504 = _503.value;
if (_504) goto block36; else goto block35;
block36:;
_506 = ((frost$collections$CollectionView*) _483);
ITable* $tmp31 = _506->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp31 = $tmp31->next;
}
_507 = $tmp31->methods[0];
_508 = _507(_506);
_509 = _497.value;
_510 = _508.value;
_511 = _509 < _510;
_512 = (frost$core$Bit) {_511};
_513 = _512.value;
if (_513) goto block34; else goto block35;
block35:;
_515 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s32, _515, &$s33);
abort(); // unreachable
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_519 = &_483->data;
_520 = *_519;
_521 = frost$core$Int64$init$frost$core$Int(_497);
_522 = _521.value;
_523 = _520[_522];
_524 = _523;
frost$core$Frost$ref$frost$core$Object$Q(_524);
_527 = _523;
_528 = _527;
frost$core$Frost$ref$frost$core$Object$Q(_528);
_530 = _523;
frost$core$Frost$unref$frost$core$Object$Q(_530);
_533 = ((org$frostlang$frostc$ClassDecl*) _527);
_534 = _533 == param0;
_535 = (frost$core$Bit) {_534};
_536 = _535.value;
if (_536) goto block37; else goto block38;
block38:;
_538 = (frost$core$Int) {138u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s34, _538);
abort(); // unreachable
block37:;
_541 = _527;
frost$core$Frost$unref$frost$core$Object$Q(_541);
_543 = _431;
frost$core$Frost$unref$frost$core$Object$Q(_543);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:139
_546 = &param0->symbolTable;
_547 = *_546;
_548 = &_547->compiler;
_549 = *_548;
_550 = _549;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ClassDecl.frost:139:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_555 = &_550->_valid;
_556 = *_555;
_558 = _556.value;
if (_558) goto block41; else goto block42;
block42:;
_560 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s35, _560, &$s36);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_564 = &_550->value;
_565 = *_564;
_566 = _565;
_567 = _566;
frost$core$Frost$ref$frost$core$Object$Q(_567);
_570 = ((org$frostlang$frostc$Compiler*) _566);
_571 = &_570->currentClass;
_572 = *_571;
_573 = _572;
_574 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_573);
_575 = ((org$frostlang$frostc$ClassDecl*) _574);
_576 = _574;
frost$core$Frost$unref$frost$core$Object$Q(_576);
_578 = _566;
frost$core$Frost$unref$frost$core$Object$Q(_578);
return;

}
void org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable(void* rawSelf, frost$io$File* param1, org$frostlang$frostc$Position param2, frost$collections$MapView* param3, frost$core$String* param4, org$frostlang$frostc$Annotations* param5, org$frostlang$frostc$ClassDecl$Kind param6, frost$core$String* param7, frost$collections$ListView* param8, frost$collections$Array* param9, org$frostlang$frostc$SymbolTable* param10) {
org$frostlang$frostc$ClassDecl* param0 = (org$frostlang$frostc$ClassDecl*) rawSelf;

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type* _1;
frost$core$Int _2;
frost$core$Int* _5;
org$frostlang$frostc$Type$Kind _7;
org$frostlang$frostc$Type$Kind _10;
org$frostlang$frostc$Position _11;
frost$core$Bit _12;
frost$core$Object* _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:145
_1 = (org$frostlang$frostc$Type*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type), (frost$core$Class*) &org$frostlang$frostc$Type$class);
_2 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from ClassDecl.frost:146:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_5 = &(&local1)->$rawValue;
*_5 = _2;
_7 = *(&local1);
*(&local0) = _7;
_10 = *(&local0);
_11 = org$frostlang$frostc$Position$init();
_12 = (frost$core$Bit) {true};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit(_1, param7, _10, _11, _12);
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable(param0, param1, param2, param3, param4, param5, param6, _1, param8, param9, param10);
_15 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_15);
return;

}
frost$core$String* org$frostlang$frostc$ClassDecl$simpleName$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$ClassDecl* param0 = (org$frostlang$frostc$ClassDecl*) rawSelf;

frost$core$String$Index$nullable local0;
frost$core$String** _1;
frost$core$String* _2;
frost$core$Int* _7;
frost$core$Int _8;
frost$core$String$Index _9;
frost$core$String$Index$nullable _11;
frost$core$String$Index$nullable _15;
bool _16;
frost$core$Bit _17;
bool _18;
frost$core$String** _21;
frost$core$String* _22;
frost$core$Object* _23;
frost$core$String** _27;
frost$core$String* _28;
frost$core$String** _29;
frost$core$String* _30;
frost$core$String$Index$nullable _31;
bool _32;
frost$core$Bit _33;
bool _34;
frost$core$Int _36;
frost$core$String$Index _39;
frost$core$String$Index _40;
frost$core$String$Index$nullable _41;
frost$core$Bit _42;
frost$core$Range$LTfrost$core$String$Index$Q$GT _43;
frost$core$String* _44;
frost$core$Object* _45;
frost$core$Object* _47;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:150
_1 = &param0->name;
_2 = *_1;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from ClassDecl.frost:150:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_7 = &_2->_length;
_8 = *_7;
_9 = frost$core$String$Index$init$frost$core$Int(_8);
_11 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_2, &$s37, _9);
*(&local0) = _11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:151
_15 = *(&local0);
_16 = !_15.nonnull;
_17 = (frost$core$Bit) {_16};
_18 = _17.value;
if (_18) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:152
_21 = &param0->name;
_22 = *_21;
_23 = ((frost$core$Object*) _22);
frost$core$Frost$ref$frost$core$Object$Q(_23);
return _22;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:154
_27 = &param0->name;
_28 = *_27;
_29 = &param0->name;
_30 = *_29;
_31 = *(&local0);
_32 = _31.nonnull;
_33 = (frost$core$Bit) {_32};
_34 = _33.value;
if (_34) goto block5; else goto block6;
block6:;
_36 = (frost$core$Int) {154u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s38, _36, &$s39);
abort(); // unreachable
block5:;
_39 = ((frost$core$String$Index) _31.value);
_40 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_30, _39);
_41 = ((frost$core$String$Index$nullable) { _40, true });
_42 = (frost$core$Bit) {false};
_43 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_41, ((frost$core$String$Index$nullable) { .nonnull = false }), _42);
_44 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_28, _43);
_45 = ((frost$core$Object*) _44);
frost$core$Frost$ref$frost$core$Object$Q(_45);
_47 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_47);
return _44;

}
org$frostlang$frostc$Type* org$frostlang$frostc$ClassDecl$typeWithParameters$R$org$frostlang$frostc$Type(void* rawSelf) {
org$frostlang$frostc$ClassDecl* param0 = (org$frostlang$frostc$ClassDecl*) rawSelf;

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ClassDecl$GenericParameter* local1 = NULL;
frost$collections$List** _1;
frost$collections$List* _2;
frost$collections$CollectionView* _3;
$fn40 _4;
frost$core$Int _5;
frost$core$Int _6;
int64_t _9;
int64_t _10;
bool _11;
frost$core$Bit _12;
bool _14;
org$frostlang$frostc$Type** _17;
org$frostlang$frostc$Type* _18;
frost$core$Object* _19;
frost$collections$Array* _23;
frost$collections$Array* _24;
frost$core$Object* _27;
frost$collections$Array* _29;
frost$core$Object* _30;
frost$core$Object* _33;
frost$collections$List** _36;
frost$collections$List* _37;
frost$collections$Iterable* _38;
frost$collections$Iterable* _39;
$fn41 _40;
frost$collections$Iterator* _41;
frost$collections$Iterator* _42;
frost$collections$Iterator* _44;
$fn42 _45;
frost$core$Bit _46;
bool _47;
frost$collections$Iterator* _50;
$fn43 _51;
frost$core$Object* _52;
org$frostlang$frostc$ClassDecl$GenericParameter* _53;
frost$core$Object* _54;
org$frostlang$frostc$ClassDecl$GenericParameter* _56;
frost$core$Object* _57;
frost$collections$Array* _61;
frost$collections$Array* _62;
org$frostlang$frostc$Type* _63;
org$frostlang$frostc$ClassDecl$GenericParameter* _64;
frost$core$Object* _66;
frost$core$Object* _68;
frost$core$Object* _70;
org$frostlang$frostc$ClassDecl$GenericParameter* _72;
frost$core$Object* _73;
frost$core$Object* _77;
org$frostlang$frostc$Type** _80;
org$frostlang$frostc$Type* _81;
frost$collections$Array* _82;
frost$collections$ListView* _83;
org$frostlang$frostc$Type* _84;
frost$core$Object* _85;
frost$core$Object* _87;
frost$collections$Array* _89;
frost$core$Object* _90;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:158
_1 = &param0->parameters;
_2 = *_1;
_3 = ((frost$collections$CollectionView*) _2);
ITable* $tmp44 = _3->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp44 = $tmp44->next;
}
_4 = $tmp44->methods[0];
_5 = _4(_3);
_6 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ClassDecl.frost:158:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_9 = _5.value;
_10 = _6.value;
_11 = _9 == _10;
_12 = (frost$core$Bit) {_11};
_14 = _12.value;
if (_14) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:159
_17 = &param0->type;
_18 = *_17;
_19 = ((frost$core$Object*) _18);
frost$core$Frost$ref$frost$core$Object$Q(_19);
return _18;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:161
_23 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_24 = _23;
frost$collections$Array$init(_24);
*(&local0) = ((frost$collections$Array*) NULL);
_27 = ((frost$core$Object*) _23);
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = *(&local0);
_30 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_30);
*(&local0) = _23;
_33 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_33);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:162
_36 = &param0->parameters;
_37 = *_36;
_38 = ((frost$collections$Iterable*) _37);
_39 = _38;
ITable* $tmp45 = _39->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp45 = $tmp45->next;
}
_40 = $tmp45->methods[0];
_41 = _40(_39);
_42 = _41;
goto block4;
block4:;
_44 = _42;
ITable* $tmp46 = _44->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp46 = $tmp46->next;
}
_45 = $tmp46->methods[0];
_46 = _45(_44);
_47 = _46.value;
if (_47) goto block6; else goto block5;
block5:;
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
_50 = _42;
ITable* $tmp47 = _50->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp47 = $tmp47->next;
}
_51 = $tmp47->methods[1];
_52 = _51(_50);
_53 = ((org$frostlang$frostc$ClassDecl$GenericParameter*) _52);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$ref$frost$core$Object$Q(_54);
_56 = *(&local1);
_57 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_57);
*(&local1) = _53;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:163
_61 = *(&local0);
_62 = _61;
_63 = (org$frostlang$frostc$Type*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type), (frost$core$Class*) &org$frostlang$frostc$Type$class);
_64 = *(&local1);
org$frostlang$frostc$Type$init$org$frostlang$frostc$ClassDecl$GenericParameter(_63, _64);
_66 = ((frost$core$Object*) _63);
frost$collections$Array$add$frost$collections$Array$T(_62, _66);
_68 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_68);
_70 = _52;
frost$core$Frost$unref$frost$core$Object$Q(_70);
_72 = *(&local1);
_73 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_73);
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
goto block4;
block6:;
_77 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_77);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:165
_80 = &param0->type;
_81 = *_80;
_82 = *(&local0);
_83 = ((frost$collections$ListView*) _82);
_84 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_81, _83);
_85 = ((frost$core$Object*) _84);
frost$core$Frost$ref$frost$core$Object$Q(_85);
_87 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_87);
_89 = *(&local0);
_90 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_90);
*(&local0) = ((frost$collections$Array*) NULL);
return _84;

}
frost$core$Bit org$frostlang$frostc$ClassDecl$isSpecialization$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$ClassDecl* param0 = (org$frostlang$frostc$ClassDecl*) rawSelf;

frost$core$String** _1;
frost$core$String* _2;
frost$core$String$Index _7;
frost$core$String$Index$nullable _8;
bool _10;
frost$core$Bit _11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:169
_1 = &param0->name;
_2 = *_1;
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from ClassDecl.frost:169:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:967
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.frost:967:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:978
_7 = frost$core$String$get_start$R$frost$core$String$Index(_2);
_8 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_2, &$s48, _7);
_10 = _8.nonnull;
_11 = (frost$core$Bit) {_10};
return _11;

}
frost$core$String* org$frostlang$frostc$ClassDecl$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$ClassDecl* param0 = (org$frostlang$frostc$ClassDecl*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$ClassDecl* local3 = NULL;
org$frostlang$frostc$FieldDecl* local4 = NULL;
org$frostlang$frostc$MethodDecl* local5 = NULL;
frost$core$MutableString* _1;
org$frostlang$frostc$Annotations** _2;
org$frostlang$frostc$Annotations* _3;
frost$core$String* _4;
frost$core$String* _5;
frost$core$String** _6;
frost$core$String* _7;
frost$core$String* _8;
frost$core$String* _9;
frost$core$Object* _12;
frost$core$MutableString* _14;
frost$core$Object* _15;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$Object* _22;
frost$core$Object* _24;
frost$core$Object* _26;
frost$core$Object* _30;
frost$core$String* _32;
frost$core$Object* _33;
org$frostlang$frostc$Type** _37;
org$frostlang$frostc$Type* _38;
bool _39;
frost$core$Bit _40;
bool _41;
frost$core$MutableString* _44;
frost$core$String* _45;
frost$core$Object* _48;
frost$core$String* _51;
org$frostlang$frostc$Type** _52;
org$frostlang$frostc$Type* _53;
bool _54;
frost$core$Bit _55;
bool _56;
frost$core$Int _58;
frost$core$Object* _61;
$fn49 _64;
frost$core$String* _65;
frost$core$String* _66;
frost$core$Object* _67;
frost$core$Object* _69;
frost$core$Object* _71;
frost$core$String* _74;
frost$core$Object* _76;
frost$core$Object* _78;
frost$core$Object* _80;
frost$core$Object* _82;
frost$core$Object* _85;
frost$core$String* _87;
frost$core$Object* _88;
frost$collections$Array** _93;
frost$collections$Array* _94;
frost$collections$Iterable* _95;
frost$collections$Iterable* _96;
$fn50 _97;
frost$collections$Iterator* _98;
frost$collections$Iterator* _99;
frost$collections$Iterator* _101;
$fn51 _102;
frost$core$Bit _103;
bool _104;
frost$collections$Iterator* _107;
$fn52 _108;
frost$core$Object* _109;
org$frostlang$frostc$Type* _110;
frost$core$Object* _111;
org$frostlang$frostc$Type* _113;
frost$core$Object* _114;
frost$core$MutableString* _118;
frost$core$String* _119;
frost$core$Object* _122;
frost$core$String* _125;
org$frostlang$frostc$Type* _126;
frost$core$Object* _127;
$fn53 _130;
frost$core$String* _131;
frost$core$String* _132;
frost$core$Object* _133;
frost$core$Object* _135;
frost$core$Object* _137;
frost$core$String* _140;
frost$core$Object* _142;
frost$core$Object* _144;
frost$core$Object* _146;
frost$core$Object* _148;
frost$core$Object* _151;
frost$core$String* _153;
frost$core$Object* _154;
frost$core$Object* _157;
org$frostlang$frostc$Type* _159;
frost$core$Object* _160;
frost$core$Object* _164;
frost$core$MutableString* _167;
frost$collections$Array** _170;
frost$collections$Array* _171;
frost$collections$Iterable* _172;
frost$collections$Iterable* _173;
$fn54 _174;
frost$collections$Iterator* _175;
frost$collections$Iterator* _176;
frost$collections$Iterator* _178;
$fn55 _179;
frost$core$Bit _180;
bool _181;
frost$collections$Iterator* _184;
$fn56 _185;
frost$core$Object* _186;
org$frostlang$frostc$ClassDecl* _187;
frost$core$Object* _188;
org$frostlang$frostc$ClassDecl* _190;
frost$core$Object* _191;
frost$core$MutableString* _195;
org$frostlang$frostc$ClassDecl* _196;
frost$core$String* _197;
frost$core$String* _198;
frost$core$Object* _200;
frost$core$Object* _202;
frost$core$Object* _204;
org$frostlang$frostc$ClassDecl* _206;
frost$core$Object* _207;
frost$core$Object* _211;
frost$collections$Array** _214;
frost$collections$Array* _215;
frost$collections$Iterable* _216;
frost$collections$Iterable* _217;
$fn57 _218;
frost$collections$Iterator* _219;
frost$collections$Iterator* _220;
frost$collections$Iterator* _222;
$fn58 _223;
frost$core$Bit _224;
bool _225;
frost$collections$Iterator* _228;
$fn59 _229;
frost$core$Object* _230;
org$frostlang$frostc$FieldDecl* _231;
frost$core$Object* _232;
org$frostlang$frostc$FieldDecl* _234;
frost$core$Object* _235;
frost$core$MutableString* _239;
org$frostlang$frostc$FieldDecl* _240;
frost$core$String* _241;
frost$core$String* _242;
frost$core$Object* _244;
frost$core$Object* _246;
frost$core$Object* _248;
org$frostlang$frostc$FieldDecl* _250;
frost$core$Object* _251;
frost$core$Object* _255;
frost$collections$Array** _258;
frost$collections$Array* _259;
frost$collections$Iterable* _260;
frost$collections$Iterable* _261;
$fn60 _262;
frost$collections$Iterator* _263;
frost$collections$Iterator* _264;
frost$collections$Iterator* _266;
$fn61 _267;
frost$core$Bit _268;
bool _269;
frost$collections$Iterator* _272;
$fn62 _273;
frost$core$Object* _274;
org$frostlang$frostc$MethodDecl* _275;
frost$core$Object* _276;
org$frostlang$frostc$MethodDecl* _278;
frost$core$Object* _279;
frost$core$MutableString* _283;
org$frostlang$frostc$MethodDecl* _284;
frost$core$String* _285;
frost$core$String* _286;
frost$core$Object* _288;
frost$core$Object* _290;
frost$core$Object* _292;
org$frostlang$frostc$MethodDecl* _294;
frost$core$Object* _295;
frost$core$Object* _299;
frost$core$MutableString* _302;
frost$core$MutableString* _305;
frost$core$String* _306;
frost$core$Object* _307;
frost$core$Object* _309;
frost$core$String* _311;
frost$core$Object* _312;
frost$core$MutableString* _315;
frost$core$Object* _316;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:174
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
_2 = &param0->annotations;
_3 = *_2;
_4 = org$frostlang$frostc$Annotations$get_asString$R$frost$core$String(_3);
_5 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_4, &$s63);
_6 = &param0->name;
_7 = *_6;
_8 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_5, _7);
_9 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_8, &$s64);
frost$core$MutableString$init$frost$core$String(_1, _9);
*(&local0) = ((frost$core$MutableString*) NULL);
_12 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = *(&local0);
_15 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_15);
*(&local0) = _1;
_18 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_20 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_22 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_26);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:175
*(&local1) = ((frost$core$String*) NULL);
_30 = ((frost$core$Object*) &$s65);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = *(&local1);
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
*(&local1) = &$s66;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:176
_37 = &param0->rawSuper;
_38 = *_37;
_39 = _38 != NULL;
_40 = (frost$core$Bit) {_39};
_41 = _40.value;
if (_41) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:177
_44 = *(&local0);
_45 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ClassDecl.frost:177:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_48 = ((frost$core$Object*) _45);
frost$core$Frost$ref$frost$core$Object$Q(_48);
_51 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_45, &$s67);
_52 = &param0->rawSuper;
_53 = *_52;
_54 = _53 != NULL;
_55 = (frost$core$Bit) {_54};
_56 = _55.value;
if (_56) goto block4; else goto block5;
block5:;
_58 = (frost$core$Int) {177u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s68, _58, &$s69);
abort(); // unreachable
block4:;
_61 = ((frost$core$Object*) _53);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ClassDecl.frost:177:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_64 = ($fn70) _61->$class->vtable[0];
_65 = _64(_61);
_66 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_51, _65);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$ref$frost$core$Object$Q(_67);
_69 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_69);
_71 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_71);
_74 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_66, &$s71);
frost$core$MutableString$append$frost$core$String(_44, _74);
_76 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_76);
_78 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_78);
_80 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_80);
_82 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_82);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:178
_85 = ((frost$core$Object*) &$s72);
frost$core$Frost$ref$frost$core$Object$Q(_85);
_87 = *(&local1);
_88 = ((frost$core$Object*) _87);
frost$core$Frost$unref$frost$core$Object$Q(_88);
*(&local1) = &$s73;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:180
_93 = &param0->rawInterfaces;
_94 = *_93;
_95 = ((frost$collections$Iterable*) _94);
_96 = _95;
ITable* $tmp74 = _96->$class->itable;
while ($tmp74->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp74 = $tmp74->next;
}
_97 = $tmp74->methods[0];
_98 = _97(_96);
_99 = _98;
goto block7;
block7:;
_101 = _99;
ITable* $tmp75 = _101->$class->itable;
while ($tmp75->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp75 = $tmp75->next;
}
_102 = $tmp75->methods[0];
_103 = _102(_101);
_104 = _103.value;
if (_104) goto block9; else goto block8;
block8:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
_107 = _99;
ITable* $tmp76 = _107->$class->itable;
while ($tmp76->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp76 = $tmp76->next;
}
_108 = $tmp76->methods[1];
_109 = _108(_107);
_110 = ((org$frostlang$frostc$Type*) _109);
_111 = ((frost$core$Object*) _110);
frost$core$Frost$ref$frost$core$Object$Q(_111);
_113 = *(&local2);
_114 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_114);
*(&local2) = _110;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:181
_118 = *(&local0);
_119 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ClassDecl.frost:181:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_122 = ((frost$core$Object*) _119);
frost$core$Frost$ref$frost$core$Object$Q(_122);
_125 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_119, &$s77);
_126 = *(&local2);
_127 = ((frost$core$Object*) _126);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ClassDecl.frost:181:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_130 = ($fn78) _127->$class->vtable[0];
_131 = _130(_127);
_132 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_125, _131);
_133 = ((frost$core$Object*) _132);
frost$core$Frost$ref$frost$core$Object$Q(_133);
_135 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_135);
_137 = ((frost$core$Object*) _131);
frost$core$Frost$unref$frost$core$Object$Q(_137);
_140 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_132, &$s79);
frost$core$MutableString$append$frost$core$String(_118, _140);
_142 = ((frost$core$Object*) _140);
frost$core$Frost$unref$frost$core$Object$Q(_142);
_144 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_144);
_146 = ((frost$core$Object*) _125);
frost$core$Frost$unref$frost$core$Object$Q(_146);
_148 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_148);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:182
_151 = ((frost$core$Object*) &$s80);
frost$core$Frost$ref$frost$core$Object$Q(_151);
_153 = *(&local1);
_154 = ((frost$core$Object*) _153);
frost$core$Frost$unref$frost$core$Object$Q(_154);
*(&local1) = &$s81;
_157 = _109;
frost$core$Frost$unref$frost$core$Object$Q(_157);
_159 = *(&local2);
_160 = ((frost$core$Object*) _159);
frost$core$Frost$unref$frost$core$Object$Q(_160);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block7;
block9:;
_164 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_164);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:184
_167 = *(&local0);
frost$core$MutableString$append$frost$core$String(_167, &$s82);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:185
_170 = &param0->classes;
_171 = *_170;
_172 = ((frost$collections$Iterable*) _171);
_173 = _172;
ITable* $tmp83 = _173->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp83 = $tmp83->next;
}
_174 = $tmp83->methods[0];
_175 = _174(_173);
_176 = _175;
goto block12;
block12:;
_178 = _176;
ITable* $tmp84 = _178->$class->itable;
while ($tmp84->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp84 = $tmp84->next;
}
_179 = $tmp84->methods[0];
_180 = _179(_178);
_181 = _180.value;
if (_181) goto block14; else goto block13;
block13:;
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
_184 = _176;
ITable* $tmp85 = _184->$class->itable;
while ($tmp85->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp85 = $tmp85->next;
}
_185 = $tmp85->methods[1];
_186 = _185(_184);
_187 = ((org$frostlang$frostc$ClassDecl*) _186);
_188 = ((frost$core$Object*) _187);
frost$core$Frost$ref$frost$core$Object$Q(_188);
_190 = *(&local3);
_191 = ((frost$core$Object*) _190);
frost$core$Frost$unref$frost$core$Object$Q(_191);
*(&local3) = _187;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:186
_195 = *(&local0);
_196 = *(&local3);
_197 = org$frostlang$frostc$ClassDecl$get_asString$R$frost$core$String(_196);
_198 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_197, &$s86);
frost$core$MutableString$append$frost$core$String(_195, _198);
_200 = ((frost$core$Object*) _198);
frost$core$Frost$unref$frost$core$Object$Q(_200);
_202 = ((frost$core$Object*) _197);
frost$core$Frost$unref$frost$core$Object$Q(_202);
_204 = _186;
frost$core$Frost$unref$frost$core$Object$Q(_204);
_206 = *(&local3);
_207 = ((frost$core$Object*) _206);
frost$core$Frost$unref$frost$core$Object$Q(_207);
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block12;
block14:;
_211 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_211);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:188
_214 = &param0->fields;
_215 = *_214;
_216 = ((frost$collections$Iterable*) _215);
_217 = _216;
ITable* $tmp87 = _217->$class->itable;
while ($tmp87->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp87 = $tmp87->next;
}
_218 = $tmp87->methods[0];
_219 = _218(_217);
_220 = _219;
goto block15;
block15:;
_222 = _220;
ITable* $tmp88 = _222->$class->itable;
while ($tmp88->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp88 = $tmp88->next;
}
_223 = $tmp88->methods[0];
_224 = _223(_222);
_225 = _224.value;
if (_225) goto block17; else goto block16;
block16:;
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
_228 = _220;
ITable* $tmp89 = _228->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp89 = $tmp89->next;
}
_229 = $tmp89->methods[1];
_230 = _229(_228);
_231 = ((org$frostlang$frostc$FieldDecl*) _230);
_232 = ((frost$core$Object*) _231);
frost$core$Frost$ref$frost$core$Object$Q(_232);
_234 = *(&local4);
_235 = ((frost$core$Object*) _234);
frost$core$Frost$unref$frost$core$Object$Q(_235);
*(&local4) = _231;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:189
_239 = *(&local0);
_240 = *(&local4);
_241 = org$frostlang$frostc$FieldDecl$get_asString$R$frost$core$String(_240);
_242 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_241, &$s90);
frost$core$MutableString$append$frost$core$String(_239, _242);
_244 = ((frost$core$Object*) _242);
frost$core$Frost$unref$frost$core$Object$Q(_244);
_246 = ((frost$core$Object*) _241);
frost$core$Frost$unref$frost$core$Object$Q(_246);
_248 = _230;
frost$core$Frost$unref$frost$core$Object$Q(_248);
_250 = *(&local4);
_251 = ((frost$core$Object*) _250);
frost$core$Frost$unref$frost$core$Object$Q(_251);
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block15;
block17:;
_255 = ((frost$core$Object*) _219);
frost$core$Frost$unref$frost$core$Object$Q(_255);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:191
_258 = &param0->methods;
_259 = *_258;
_260 = ((frost$collections$Iterable*) _259);
_261 = _260;
ITable* $tmp91 = _261->$class->itable;
while ($tmp91->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp91 = $tmp91->next;
}
_262 = $tmp91->methods[0];
_263 = _262(_261);
_264 = _263;
goto block18;
block18:;
_266 = _264;
ITable* $tmp92 = _266->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp92 = $tmp92->next;
}
_267 = $tmp92->methods[0];
_268 = _267(_266);
_269 = _268.value;
if (_269) goto block20; else goto block19;
block19:;
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
_272 = _264;
ITable* $tmp93 = _272->$class->itable;
while ($tmp93->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp93 = $tmp93->next;
}
_273 = $tmp93->methods[1];
_274 = _273(_272);
_275 = ((org$frostlang$frostc$MethodDecl*) _274);
_276 = ((frost$core$Object*) _275);
frost$core$Frost$ref$frost$core$Object$Q(_276);
_278 = *(&local5);
_279 = ((frost$core$Object*) _278);
frost$core$Frost$unref$frost$core$Object$Q(_279);
*(&local5) = _275;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:192
_283 = *(&local0);
_284 = *(&local5);
_285 = org$frostlang$frostc$MethodDecl$get_asString$R$frost$core$String(_284);
_286 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_285, &$s94);
frost$core$MutableString$append$frost$core$String(_283, _286);
_288 = ((frost$core$Object*) _286);
frost$core$Frost$unref$frost$core$Object$Q(_288);
_290 = ((frost$core$Object*) _285);
frost$core$Frost$unref$frost$core$Object$Q(_290);
_292 = _274;
frost$core$Frost$unref$frost$core$Object$Q(_292);
_294 = *(&local5);
_295 = ((frost$core$Object*) _294);
frost$core$Frost$unref$frost$core$Object$Q(_295);
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block18;
block20:;
_299 = ((frost$core$Object*) _263);
frost$core$Frost$unref$frost$core$Object$Q(_299);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:194
_302 = *(&local0);
frost$core$MutableString$append$frost$core$String(_302, &$s95);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:195
_305 = *(&local0);
_306 = frost$core$MutableString$finish$R$frost$core$String(_305);
_307 = ((frost$core$Object*) _306);
frost$core$Frost$ref$frost$core$Object$Q(_307);
_309 = ((frost$core$Object*) _306);
frost$core$Frost$unref$frost$core$Object$Q(_309);
_311 = *(&local1);
_312 = ((frost$core$Object*) _311);
frost$core$Frost$unref$frost$core$Object$Q(_312);
*(&local1) = ((frost$core$String*) NULL);
_315 = *(&local0);
_316 = ((frost$core$Object*) _315);
frost$core$Frost$unref$frost$core$Object$Q(_316);
*(&local0) = ((frost$core$MutableString*) NULL);
return _306;

}
void org$frostlang$frostc$ClassDecl$cleanup(void* rawSelf) {
org$frostlang$frostc$ClassDecl* param0 = (org$frostlang$frostc$ClassDecl*) rawSelf;

frost$core$Object* _1;
frost$io$File** _3;
frost$io$File* _4;
frost$core$Object* _5;
frost$core$String** _7;
frost$core$String* _8;
frost$core$Object* _9;
org$frostlang$frostc$Type** _11;
org$frostlang$frostc$Type* _12;
frost$core$Object* _13;
frost$collections$MapView** _15;
frost$collections$MapView* _16;
frost$core$Object* _17;
frost$core$String** _19;
frost$core$String* _20;
frost$core$Object* _21;
org$frostlang$frostc$Annotations** _23;
org$frostlang$frostc$Annotations* _24;
frost$core$Object* _25;
frost$collections$Array** _27;
frost$collections$Array* _28;
frost$core$Object* _29;
org$frostlang$frostc$Type** _31;
org$frostlang$frostc$Type* _32;
frost$core$Object* _33;
frost$collections$Array** _35;
frost$collections$Array* _36;
frost$core$Object* _37;
frost$collections$List** _39;
frost$collections$List* _40;
frost$core$Object* _41;
frost$collections$Array** _43;
frost$collections$Array* _44;
frost$core$Object* _45;
frost$collections$Array** _47;
frost$collections$Array* _48;
frost$core$Object* _49;
frost$collections$Array** _51;
frost$collections$Array* _52;
frost$core$Object* _53;
frost$collections$Array** _55;
frost$collections$Array* _56;
frost$core$Object* _57;
frost$core$Weak** _59;
frost$core$Weak* _60;
frost$core$Object* _61;
org$frostlang$frostc$SymbolTable** _63;
org$frostlang$frostc$SymbolTable* _64;
frost$core$Object* _65;
frost$collections$Array** _67;
frost$collections$Array* _68;
frost$core$Object* _69;
frost$collections$HashMap** _71;
frost$collections$HashMap* _72;
frost$core$Object* _73;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:4
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->source;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->name;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->type;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = &param0->aliases;
_16 = *_15;
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = &param0->doccomment;
_20 = *_19;
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_23 = &param0->annotations;
_24 = *_23;
_25 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = &param0->declaredSupers;
_28 = *_27;
_29 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_29);
_31 = &param0->rawSuper;
_32 = *_31;
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
_35 = &param0->rawInterfaces;
_36 = *_35;
_37 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_37);
_39 = &param0->parameters;
_40 = *_39;
_41 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = &param0->fields;
_44 = *_43;
_45 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = &param0->methods;
_48 = *_47;
_49 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_49);
_51 = &param0->classes;
_52 = *_51;
_53 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_53);
_55 = &param0->choiceCases;
_56 = *_55;
_57 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_57);
_59 = &param0->owner;
_60 = *_59;
_61 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_61);
_63 = &param0->symbolTable;
_64 = *_63;
_65 = ((frost$core$Object*) _64);
frost$core$Frost$unref$frost$core$Object$Q(_65);
_67 = &param0->virtualMethods;
_68 = *_67;
_69 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_69);
_71 = &param0->classResolutionCache;
_72 = *_71;
_73 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_73);
return;

}

