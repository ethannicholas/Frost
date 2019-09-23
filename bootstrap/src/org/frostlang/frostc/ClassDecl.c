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
frost$core$Object* _20;
frost$collections$Array** _22;
frost$collections$Array* _23;
frost$core$Object* _24;
frost$collections$Array** _26;
frost$core$Object* _28;
frost$collections$Array* _31;
frost$core$Object* _33;
frost$collections$Array** _35;
frost$collections$Array* _36;
frost$core$Object* _37;
frost$collections$Array** _39;
frost$core$Object* _41;
frost$collections$Array* _44;
frost$core$Object* _46;
frost$collections$Array** _48;
frost$collections$Array* _49;
frost$core$Object* _50;
frost$collections$Array** _52;
frost$core$Object* _54;
frost$collections$Array* _57;
frost$core$Object* _59;
frost$collections$Array** _61;
frost$collections$Array* _62;
frost$core$Object* _63;
frost$collections$Array** _65;
frost$core$Object* _67;
frost$collections$Array* _70;
frost$core$Object* _72;
frost$collections$Array** _74;
frost$collections$Array* _75;
frost$core$Object* _76;
frost$collections$Array** _78;
frost$core$Object* _80;
frost$core$Weak* _83;
frost$core$Object* _84;
frost$core$Object* _86;
frost$core$Weak** _88;
frost$core$Weak* _89;
frost$core$Object* _90;
frost$core$Weak** _92;
frost$core$Object* _94;
frost$core$Bit _97;
frost$core$Bit* _98;
frost$core$Bit _101;
frost$core$Bit* _102;
frost$collections$Array* _105;
frost$core$Object* _107;
frost$collections$Array** _109;
frost$collections$Array* _110;
frost$core$Object* _111;
frost$collections$Array** _113;
frost$core$Object* _115;
frost$collections$HashMap* _118;
frost$core$Object* _120;
frost$collections$HashMap** _122;
frost$collections$HashMap* _123;
frost$core$Object* _124;
frost$collections$HashMap** _126;
frost$core$Object* _128;
org$frostlang$frostc$Type$Kind* _132;
org$frostlang$frostc$Type$Kind _133;
frost$core$Equatable* _134;
frost$core$Int _135;
frost$core$Int* _138;
org$frostlang$frostc$Type$Kind _140;
org$frostlang$frostc$Type$Kind _143;
frost$core$Equatable* _144;
$fn2 _145;
frost$core$Bit _146;
bool _147;
org$frostlang$frostc$FixedArray** _151;
org$frostlang$frostc$FixedArray* _152;
bool _153;
frost$core$Bit _154;
bool _155;
frost$core$Int _157;
org$frostlang$frostc$FixedArray* _160;
frost$core$Object* _161;
frost$core$Int _164;
frost$core$Object* _165;
org$frostlang$frostc$Type* _166;
org$frostlang$frostc$Symbol* _167;
frost$core$String** _168;
frost$core$String* _169;
frost$core$Bit _170;
frost$core$Object* _171;
frost$core$Object* _173;
frost$core$Bit _179;
frost$core$Object* _180;
frost$core$Object* _182;
bool _187;
bool _188;
frost$core$Bit _189;
bool _191;
frost$core$Int _193;
org$frostlang$frostc$Position* _197;
org$frostlang$frostc$Symbol* _200;
frost$core$String** _201;
frost$core$String* _202;
frost$core$Object* _203;
frost$core$String** _205;
frost$core$String* _206;
frost$core$Object* _207;
frost$core$String** _209;
frost$core$Object* _212;
org$frostlang$frostc$Type** _214;
org$frostlang$frostc$Type* _215;
frost$core$Object* _216;
org$frostlang$frostc$Type** _218;
frost$core$Object* _221;
frost$io$File** _223;
frost$io$File* _224;
frost$core$Object* _225;
frost$io$File** _227;
frost$collections$HashMap* _230;
frost$collections$MapView* _232;
frost$core$Object* _233;
frost$collections$MapView** _235;
frost$collections$MapView* _236;
frost$core$Object* _237;
frost$collections$MapView** _239;
frost$core$Object* _241;
frost$core$Object* _244;
frost$core$String** _246;
frost$core$String* _247;
frost$core$Object* _248;
frost$core$String** _250;
frost$core$Object* _253;
org$frostlang$frostc$Annotations** _255;
org$frostlang$frostc$Annotations* _256;
frost$core$Object* _257;
org$frostlang$frostc$Annotations** _259;
org$frostlang$frostc$ClassDecl$Kind* _262;
frost$collections$Array* _265;
frost$collections$CollectionView* _266;
frost$core$Object* _268;
frost$collections$Array** _270;
frost$collections$Array* _271;
frost$core$Object* _272;
frost$collections$Array** _274;
frost$core$Object* _276;
frost$collections$List* _279;
frost$core$Object* _280;
frost$collections$List** _282;
frost$collections$List* _283;
frost$core$Object* _284;
frost$collections$List** _286;
org$frostlang$frostc$SymbolTable* _289;
frost$core$Object* _291;
org$frostlang$frostc$SymbolTable** _293;
org$frostlang$frostc$SymbolTable* _294;
frost$core$Object* _295;
org$frostlang$frostc$SymbolTable** _297;
frost$core$Object* _299;
frost$core$Int _302;
frost$core$Int* _305;
org$frostlang$frostc$Compiler$Resolution _307;
org$frostlang$frostc$Compiler$Resolution _310;
org$frostlang$frostc$Compiler$Resolution* _311;
org$frostlang$frostc$SymbolTable** _314;
org$frostlang$frostc$SymbolTable* _315;
frost$core$Weak** _316;
frost$core$Weak* _317;
frost$core$Bit* _322;
frost$core$Bit _323;
bool _325;
frost$core$Int _327;
frost$core$Object** _331;
frost$core$Object* _332;
frost$core$Object* _333;
frost$core$Object* _334;
org$frostlang$frostc$Compiler* _337;
frost$collections$Stack** _338;
frost$collections$Stack* _339;
frost$core$Object* _340;
frost$collections$Array** _343;
frost$collections$Array* _344;
frost$core$Object* _345;
frost$core$Object* _348;
frost$collections$Iterable* _351;
$fn3 _352;
frost$collections$Iterator* _353;
$fn4 _355;
frost$core$Bit _356;
bool _357;
$fn5 _360;
frost$core$Object* _361;
org$frostlang$frostc$ClassDecl$GenericParameter* _362;
frost$core$Object* _363;
org$frostlang$frostc$ClassDecl$GenericParameter* _365;
frost$core$Object* _366;
org$frostlang$frostc$SymbolTable** _370;
org$frostlang$frostc$SymbolTable* _371;
org$frostlang$frostc$ClassDecl$GenericParameter* _372;
org$frostlang$frostc$Symbol* _373;
frost$core$String** _376;
frost$core$String* _377;
frost$core$Object* _380;
org$frostlang$frostc$ClassDecl$GenericParameter* _382;
frost$core$Object* _383;
frost$core$Object* _387;
org$frostlang$frostc$SymbolTable** _390;
org$frostlang$frostc$SymbolTable* _391;
frost$core$Weak** _392;
frost$core$Weak* _393;
frost$core$Bit* _398;
frost$core$Bit _399;
bool _401;
frost$core$Int _403;
frost$core$Object** _407;
frost$core$Object* _408;
frost$core$Object* _409;
frost$core$Object* _410;
org$frostlang$frostc$Compiler* _413;
frost$collections$Stack** _414;
frost$collections$Stack* _415;
frost$core$Int _416;
frost$core$Int _418;
int64_t _419;
int64_t _420;
bool _421;
frost$core$Bit _422;
bool _423;
frost$collections$Array** _427;
frost$collections$Array* _428;
frost$collections$CollectionView* _429;
$fn6 _430;
frost$core$Int _431;
int64_t _433;
int64_t _434;
bool _435;
frost$core$Bit _436;
bool _437;
frost$core$Int _439;
frost$collections$Array** _443;
frost$collections$Array* _444;
frost$collections$CollectionView* _445;
$fn7 _446;
frost$core$Int _447;
int64_t _448;
int64_t _449;
bool _450;
frost$core$Bit _451;
bool _452;
frost$core$Int _454;
frost$collections$Array** _458;
frost$collections$Array* _459;
frost$collections$Array** _460;
frost$collections$Array* _461;
frost$collections$CollectionView* _462;
$fn8 _463;
frost$core$Int _464;
frost$core$Int _465;
int64_t _466;
int64_t _467;
int64_t _468;
frost$core$Int _469;
int64_t _470;
int64_t _471;
int64_t _472;
frost$core$Int _473;
frost$core$Int _475;
int64_t _476;
int64_t _477;
bool _478;
frost$core$Bit _479;
bool _480;
frost$collections$CollectionView* _482;
$fn9 _483;
frost$core$Int _484;
int64_t _485;
int64_t _486;
bool _487;
frost$core$Bit _488;
bool _489;
frost$core$Int _491;
frost$core$Object*** _495;
frost$core$Object** _496;
frost$core$Int64 _497;
int64_t _498;
frost$core$Object* _499;
frost$core$Object* _500;
frost$core$Object* _503;
frost$core$Object* _504;
frost$core$Object* _506;
org$frostlang$frostc$ClassDecl* _509;
bool _510;
frost$core$Bit _511;
bool _512;
frost$core$Int _514;
frost$core$Object* _517;
frost$core$Object* _519;
org$frostlang$frostc$SymbolTable** _522;
org$frostlang$frostc$SymbolTable* _523;
frost$core$Weak** _524;
frost$core$Weak* _525;
frost$core$Bit* _530;
frost$core$Bit _531;
bool _533;
frost$core$Int _535;
frost$core$Object** _539;
frost$core$Object* _540;
frost$core$Object* _541;
frost$core$Object* _542;
org$frostlang$frostc$Compiler* _545;
frost$collections$Stack** _546;
frost$collections$Stack* _547;
frost$core$Object* _548;
org$frostlang$frostc$ClassDecl* _549;
frost$core$Object* _550;
frost$core$Object* _552;
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
frost$collections$Array$init(_18);
_20 = ((frost$core$Object*) _18);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = &param0->rawInterfaces;
_23 = *_22;
_24 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = &param0->rawInterfaces;
*_26 = _18;
_28 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_28);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:94
_31 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_31);
_33 = ((frost$core$Object*) _31);
frost$core$Frost$ref$frost$core$Object$Q(_33);
_35 = &param0->fields;
_36 = *_35;
_37 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_37);
_39 = &param0->fields;
*_39 = _31;
_41 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_41);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:96
_44 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_44);
_46 = ((frost$core$Object*) _44);
frost$core$Frost$ref$frost$core$Object$Q(_46);
_48 = &param0->methods;
_49 = *_48;
_50 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_50);
_52 = &param0->methods;
*_52 = _44;
_54 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_54);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:98
_57 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_57);
_59 = ((frost$core$Object*) _57);
frost$core$Frost$ref$frost$core$Object$Q(_59);
_61 = &param0->classes;
_62 = *_61;
_63 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_63);
_65 = &param0->classes;
*_65 = _57;
_67 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_67);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:100
_70 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_70);
_72 = ((frost$core$Object*) _70);
frost$core$Frost$ref$frost$core$Object$Q(_72);
_74 = &param0->choiceCases;
_75 = *_74;
_76 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_76);
_78 = &param0->choiceCases;
*_78 = _70;
_80 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_80);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:103
_83 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_84 = ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_83, _84);
_86 = ((frost$core$Object*) _83);
frost$core$Frost$ref$frost$core$Object$Q(_86);
_88 = &param0->owner;
_89 = *_88;
_90 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_90);
_92 = &param0->owner;
*_92 = _83;
_94 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_94);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:108
_97 = (frost$core$Bit) {false};
_98 = &param0->symbolTableResolved;
*_98 = _97;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:110
_101 = (frost$core$Bit) {true};
_102 = &param0->external;
*_102 = _101;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:112
_105 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_105);
_107 = ((frost$core$Object*) _105);
frost$core$Frost$ref$frost$core$Object$Q(_107);
_109 = &param0->virtualMethods;
_110 = *_109;
_111 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_111);
_113 = &param0->virtualMethods;
*_113 = _105;
_115 = ((frost$core$Object*) _105);
frost$core$Frost$unref$frost$core$Object$Q(_115);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:114
_118 = (frost$collections$HashMap*) frostObjectAlloc(sizeof(frost$collections$HashMap), (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init(_118);
_120 = ((frost$core$Object*) _118);
frost$core$Frost$ref$frost$core$Object$Q(_120);
_122 = &param0->classResolutionCache;
_123 = *_122;
_124 = ((frost$core$Object*) _123);
frost$core$Frost$unref$frost$core$Object$Q(_124);
_126 = &param0->classResolutionCache;
*_126 = _118;
_128 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_128);
// begin inline call to function org.frostlang.frostc.Type.get_isClassLiteral():frost.core.Bit from ClassDecl.frost:118:15
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:381
_132 = &param7->typeKind;
_133 = *_132;
org$frostlang$frostc$Type$Kind$wrapper* $tmp10;
$tmp10 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp10->value = _133;
_134 = ((frost$core$Equatable*) $tmp10);
_135 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:381:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_138 = &(&local2)->$rawValue;
*_138 = _135;
_140 = *(&local2);
*(&local1) = _140;
_143 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp11;
$tmp11 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp11->value = _143;
_144 = ((frost$core$Equatable*) $tmp11);
ITable* $tmp12 = _134->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp12 = $tmp12->next;
}
_145 = $tmp12->methods[0];
_146 = _145(_134, _144);
_147 = _146.value;
if (_147) goto block5; else goto block6;
block5:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:381:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_151 = &param7->_subtypes;
_152 = *_151;
_153 = _152 != NULL;
_154 = (frost$core$Bit) {_153};
_155 = _154.value;
if (_155) goto block9; else goto block10;
block10:;
_157 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _157, &$s14);
abort(); // unreachable
block9:;
_160 = _152;
_161 = ((frost$core$Object*) _160);
frost$core$Frost$ref$frost$core$Object$Q(_161);
_164 = (frost$core$Int) {0u};
_165 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_160, _164);
_166 = ((org$frostlang$frostc$Type*) _165);
_167 = ((org$frostlang$frostc$Symbol*) _166);
_168 = &_167->name;
_169 = *_168;
_170 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_169, &$s15);
_171 = _165;
frost$core$Frost$unref$frost$core$Object$Q(_171);
_173 = ((frost$core$Object*) _160);
frost$core$Frost$unref$frost$core$Object$Q(_173);
*(&local0) = _170;
goto block7;
block6:;
*(&local0) = _146;
goto block7;
block7:;
_179 = *(&local0);
_180 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_180);
_182 = ((frost$core$Object*) _134);
frost$core$Frost$unref$frost$core$Object$Q(_182);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ClassDecl.frost:118:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_187 = _179.value;
_188 = !_187;
_189 = (frost$core$Bit) {_188};
_191 = _189.value;
if (_191) goto block1; else goto block2;
block2:;
_193 = (frost$core$Int) {119u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s16, _193, &$s17);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:122
_197 = &param0->position;
*_197 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:123
_200 = ((org$frostlang$frostc$Symbol*) param7);
_201 = &_200->name;
_202 = *_201;
_203 = ((frost$core$Object*) _202);
frost$core$Frost$ref$frost$core$Object$Q(_203);
_205 = &param0->name;
_206 = *_205;
_207 = ((frost$core$Object*) _206);
frost$core$Frost$unref$frost$core$Object$Q(_207);
_209 = &param0->name;
*_209 = _202;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:124
_212 = ((frost$core$Object*) param7);
frost$core$Frost$ref$frost$core$Object$Q(_212);
_214 = &param0->type;
_215 = *_214;
_216 = ((frost$core$Object*) _215);
frost$core$Frost$unref$frost$core$Object$Q(_216);
_218 = &param0->type;
*_218 = param7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:125
_221 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_221);
_223 = &param0->source;
_224 = *_223;
_225 = ((frost$core$Object*) _224);
frost$core$Frost$unref$frost$core$Object$Q(_225);
_227 = &param0->source;
*_227 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:126
_230 = (frost$collections$HashMap*) frostObjectAlloc(sizeof(frost$collections$HashMap), (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init$frost$collections$MapView$LTfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$GT(_230, param3);
_232 = ((frost$collections$MapView*) _230);
_233 = ((frost$core$Object*) _232);
frost$core$Frost$ref$frost$core$Object$Q(_233);
_235 = &param0->aliases;
_236 = *_235;
_237 = ((frost$core$Object*) _236);
frost$core$Frost$unref$frost$core$Object$Q(_237);
_239 = &param0->aliases;
*_239 = _232;
_241 = ((frost$core$Object*) _230);
frost$core$Frost$unref$frost$core$Object$Q(_241);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:127
_244 = ((frost$core$Object*) param4);
frost$core$Frost$ref$frost$core$Object$Q(_244);
_246 = &param0->doccomment;
_247 = *_246;
_248 = ((frost$core$Object*) _247);
frost$core$Frost$unref$frost$core$Object$Q(_248);
_250 = &param0->doccomment;
*_250 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:128
_253 = ((frost$core$Object*) param5);
frost$core$Frost$ref$frost$core$Object$Q(_253);
_255 = &param0->annotations;
_256 = *_255;
_257 = ((frost$core$Object*) _256);
frost$core$Frost$unref$frost$core$Object$Q(_257);
_259 = &param0->annotations;
*_259 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:129
_262 = &param0->classKind;
*_262 = param6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:130
_265 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_266 = ((frost$collections$CollectionView*) param8);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_265, _266);
_268 = ((frost$core$Object*) _265);
frost$core$Frost$ref$frost$core$Object$Q(_268);
_270 = &param0->declaredSupers;
_271 = *_270;
_272 = ((frost$core$Object*) _271);
frost$core$Frost$unref$frost$core$Object$Q(_272);
_274 = &param0->declaredSupers;
*_274 = _265;
_276 = ((frost$core$Object*) _265);
frost$core$Frost$unref$frost$core$Object$Q(_276);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:131
_279 = ((frost$collections$List*) param9);
_280 = ((frost$core$Object*) _279);
frost$core$Frost$ref$frost$core$Object$Q(_280);
_282 = &param0->parameters;
_283 = *_282;
_284 = ((frost$core$Object*) _283);
frost$core$Frost$unref$frost$core$Object$Q(_284);
_286 = &param0->parameters;
*_286 = _279;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:132
_289 = (org$frostlang$frostc$SymbolTable*) frostObjectAlloc(sizeof(org$frostlang$frostc$SymbolTable), (frost$core$Class*) &org$frostlang$frostc$SymbolTable$class);
org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$SymbolTable(_289, param10);
_291 = ((frost$core$Object*) _289);
frost$core$Frost$ref$frost$core$Object$Q(_291);
_293 = &param0->symbolTable;
_294 = *_293;
_295 = ((frost$core$Object*) _294);
frost$core$Frost$unref$frost$core$Object$Q(_295);
_297 = &param0->symbolTable;
*_297 = _289;
_299 = ((frost$core$Object*) _289);
frost$core$Frost$unref$frost$core$Object$Q(_299);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:133
_302 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from ClassDecl.frost:133:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
_305 = &(&local4)->$rawValue;
*_305 = _302;
_307 = *(&local4);
*(&local3) = _307;
_310 = *(&local3);
_311 = &param0->resolved;
*_311 = _310;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:134
_314 = &param0->symbolTable;
_315 = *_314;
_316 = &_315->compiler;
_317 = *_316;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ClassDecl.frost:134:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_322 = &_317->_valid;
_323 = *_322;
_325 = _323.value;
if (_325) goto block15; else goto block16;
block16:;
_327 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _327, &$s19);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_331 = &_317->value;
_332 = *_331;
_333 = _332;
_334 = _333;
frost$core$Frost$ref$frost$core$Object$Q(_334);
_337 = ((org$frostlang$frostc$Compiler*) _333);
_338 = &_337->currentClass;
_339 = *_338;
_340 = ((frost$core$Object*) param0);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from ClassDecl.frost:134:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
_343 = &_339->contents;
_344 = *_343;
_345 = _340;
frost$collections$Array$add$frost$collections$Array$T(_344, _345);
_348 = _333;
frost$core$Frost$unref$frost$core$Object$Q(_348);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:135
_351 = ((frost$collections$Iterable*) param9);
ITable* $tmp20 = _351->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp20 = $tmp20->next;
}
_352 = $tmp20->methods[0];
_353 = _352(_351);
goto block18;
block18:;
ITable* $tmp21 = _353->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp21 = $tmp21->next;
}
_355 = $tmp21->methods[0];
_356 = _355(_353);
_357 = _356.value;
if (_357) goto block20; else goto block19;
block19:;
*(&local5) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
ITable* $tmp22 = _353->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp22 = $tmp22->next;
}
_360 = $tmp22->methods[1];
_361 = _360(_353);
_362 = ((org$frostlang$frostc$ClassDecl$GenericParameter*) _361);
_363 = ((frost$core$Object*) _362);
frost$core$Frost$ref$frost$core$Object$Q(_363);
_365 = *(&local5);
_366 = ((frost$core$Object*) _365);
frost$core$Frost$unref$frost$core$Object$Q(_366);
*(&local5) = _362;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:136
_370 = &param0->symbolTable;
_371 = *_370;
_372 = *(&local5);
_373 = ((org$frostlang$frostc$Symbol*) _372);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from ClassDecl.frost:136:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
_376 = &_373->name;
_377 = *_376;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String(_371, _373, _377);
_380 = _361;
frost$core$Frost$unref$frost$core$Object$Q(_380);
_382 = *(&local5);
_383 = ((frost$core$Object*) _382);
frost$core$Frost$unref$frost$core$Object$Q(_383);
*(&local5) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
goto block18;
block20:;
_387 = ((frost$core$Object*) _353);
frost$core$Frost$unref$frost$core$Object$Q(_387);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:138
_390 = &param0->symbolTable;
_391 = *_390;
_392 = &_391->compiler;
_393 = *_392;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ClassDecl.frost:138:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_398 = &_393->_valid;
_399 = *_398;
_401 = _399.value;
if (_401) goto block24; else goto block25;
block25:;
_403 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s23, _403, &$s24);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_407 = &_393->value;
_408 = *_407;
_409 = _408;
_410 = _409;
frost$core$Frost$ref$frost$core$Object$Q(_410);
_413 = ((org$frostlang$frostc$Compiler*) _409);
_414 = &_413->currentClass;
_415 = *_414;
_416 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from ClassDecl.frost:138:49
_418 = (frost$core$Int) {0u};
_419 = _416.value;
_420 = _418.value;
_421 = _419 >= _420;
_422 = (frost$core$Bit) {_421};
_423 = _422.value;
if (_423) goto block29; else goto block28;
block29:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_427 = &_415->contents;
_428 = *_427;
_429 = ((frost$collections$CollectionView*) _428);
ITable* $tmp25 = _429->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp25 = $tmp25->next;
}
_430 = $tmp25->methods[0];
_431 = _430(_429);
_433 = _416.value;
_434 = _431.value;
_435 = _433 < _434;
_436 = (frost$core$Bit) {_435};
_437 = _436.value;
if (_437) goto block27; else goto block28;
block28:;
_439 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s26, _439, &$s27);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_443 = &_415->contents;
_444 = *_443;
_445 = ((frost$collections$CollectionView*) _444);
ITable* $tmp28 = _445->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp28 = $tmp28->next;
}
_446 = $tmp28->methods[0];
_447 = _446(_445);
_448 = _447.value;
_449 = _416.value;
_450 = _448 > _449;
_451 = (frost$core$Bit) {_450};
_452 = _451.value;
if (_452) goto block31; else goto block32;
block32:;
_454 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s29, _454);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_458 = &_415->contents;
_459 = *_458;
_460 = &_415->contents;
_461 = *_460;
_462 = ((frost$collections$CollectionView*) _461);
ITable* $tmp30 = _462->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp30 = $tmp30->next;
}
_463 = $tmp30->methods[0];
_464 = _463(_462);
_465 = (frost$core$Int) {1u};
_466 = _464.value;
_467 = _465.value;
_468 = _466 - _467;
_469 = (frost$core$Int) {_468};
_470 = _469.value;
_471 = _416.value;
_472 = _470 - _471;
_473 = (frost$core$Int) {_472};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_475 = (frost$core$Int) {0u};
_476 = _473.value;
_477 = _475.value;
_478 = _476 >= _477;
_479 = (frost$core$Bit) {_478};
_480 = _479.value;
if (_480) goto block36; else goto block35;
block36:;
_482 = ((frost$collections$CollectionView*) _459);
ITable* $tmp31 = _482->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp31 = $tmp31->next;
}
_483 = $tmp31->methods[0];
_484 = _483(_482);
_485 = _473.value;
_486 = _484.value;
_487 = _485 < _486;
_488 = (frost$core$Bit) {_487};
_489 = _488.value;
if (_489) goto block34; else goto block35;
block35:;
_491 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s32, _491, &$s33);
abort(); // unreachable
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_495 = &_459->data;
_496 = *_495;
_497 = frost$core$Int64$init$frost$core$Int(_473);
_498 = _497.value;
_499 = _496[_498];
_500 = _499;
frost$core$Frost$ref$frost$core$Object$Q(_500);
_503 = _499;
_504 = _503;
frost$core$Frost$ref$frost$core$Object$Q(_504);
_506 = _499;
frost$core$Frost$unref$frost$core$Object$Q(_506);
_509 = ((org$frostlang$frostc$ClassDecl*) _503);
_510 = _509 == param0;
_511 = (frost$core$Bit) {_510};
_512 = _511.value;
if (_512) goto block37; else goto block38;
block38:;
_514 = (frost$core$Int) {138u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s34, _514);
abort(); // unreachable
block37:;
_517 = _503;
frost$core$Frost$unref$frost$core$Object$Q(_517);
_519 = _409;
frost$core$Frost$unref$frost$core$Object$Q(_519);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:139
_522 = &param0->symbolTable;
_523 = *_522;
_524 = &_523->compiler;
_525 = *_524;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ClassDecl.frost:139:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_530 = &_525->_valid;
_531 = *_530;
_533 = _531.value;
if (_533) goto block41; else goto block42;
block42:;
_535 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s35, _535, &$s36);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_539 = &_525->value;
_540 = *_539;
_541 = _540;
_542 = _541;
frost$core$Frost$ref$frost$core$Object$Q(_542);
_545 = ((org$frostlang$frostc$Compiler*) _541);
_546 = &_545->currentClass;
_547 = *_546;
_548 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_547);
_549 = ((org$frostlang$frostc$ClassDecl*) _548);
_550 = _548;
frost$core$Frost$unref$frost$core$Object$Q(_550);
_552 = _541;
frost$core$Frost$unref$frost$core$Object$Q(_552);
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
frost$core$Object* _26;
frost$collections$Array* _28;
frost$core$Object* _29;
frost$core$Object* _32;
frost$collections$List** _35;
frost$collections$List* _36;
frost$collections$Iterable* _37;
$fn41 _38;
frost$collections$Iterator* _39;
$fn42 _41;
frost$core$Bit _42;
bool _43;
$fn43 _46;
frost$core$Object* _47;
org$frostlang$frostc$ClassDecl$GenericParameter* _48;
frost$core$Object* _49;
org$frostlang$frostc$ClassDecl$GenericParameter* _51;
frost$core$Object* _52;
frost$collections$Array* _56;
org$frostlang$frostc$Type* _57;
org$frostlang$frostc$ClassDecl$GenericParameter* _58;
frost$core$Object* _60;
frost$core$Object* _62;
frost$core$Object* _64;
org$frostlang$frostc$ClassDecl$GenericParameter* _66;
frost$core$Object* _67;
frost$core$Object* _71;
org$frostlang$frostc$Type** _74;
org$frostlang$frostc$Type* _75;
frost$collections$Array* _76;
frost$collections$ListView* _77;
org$frostlang$frostc$Type* _78;
frost$core$Object* _79;
frost$core$Object* _81;
frost$collections$Array* _83;
frost$core$Object* _84;
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
frost$collections$Array$init(_23);
*(&local0) = ((frost$collections$Array*) NULL);
_26 = ((frost$core$Object*) _23);
frost$core$Frost$ref$frost$core$Object$Q(_26);
_28 = *(&local0);
_29 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_29);
*(&local0) = _23;
_32 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_32);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:162
_35 = &param0->parameters;
_36 = *_35;
_37 = ((frost$collections$Iterable*) _36);
ITable* $tmp45 = _37->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp45 = $tmp45->next;
}
_38 = $tmp45->methods[0];
_39 = _38(_37);
goto block4;
block4:;
ITable* $tmp46 = _39->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp46 = $tmp46->next;
}
_41 = $tmp46->methods[0];
_42 = _41(_39);
_43 = _42.value;
if (_43) goto block6; else goto block5;
block5:;
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
ITable* $tmp47 = _39->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp47 = $tmp47->next;
}
_46 = $tmp47->methods[1];
_47 = _46(_39);
_48 = ((org$frostlang$frostc$ClassDecl$GenericParameter*) _47);
_49 = ((frost$core$Object*) _48);
frost$core$Frost$ref$frost$core$Object$Q(_49);
_51 = *(&local1);
_52 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_52);
*(&local1) = _48;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:163
_56 = *(&local0);
_57 = (org$frostlang$frostc$Type*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type), (frost$core$Class*) &org$frostlang$frostc$Type$class);
_58 = *(&local1);
org$frostlang$frostc$Type$init$org$frostlang$frostc$ClassDecl$GenericParameter(_57, _58);
_60 = ((frost$core$Object*) _57);
frost$collections$Array$add$frost$collections$Array$T(_56, _60);
_62 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_62);
_64 = _47;
frost$core$Frost$unref$frost$core$Object$Q(_64);
_66 = *(&local1);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_67);
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
goto block4;
block6:;
_71 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_71);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:165
_74 = &param0->type;
_75 = *_74;
_76 = *(&local0);
_77 = ((frost$collections$ListView*) _76);
_78 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(_75, _77);
_79 = ((frost$core$Object*) _78);
frost$core$Frost$ref$frost$core$Object$Q(_79);
_81 = ((frost$core$Object*) _78);
frost$core$Frost$unref$frost$core$Object$Q(_81);
_83 = *(&local0);
_84 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_84);
*(&local0) = ((frost$collections$Array*) NULL);
return _78;

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
$fn50 _96;
frost$collections$Iterator* _97;
$fn51 _99;
frost$core$Bit _100;
bool _101;
$fn52 _104;
frost$core$Object* _105;
org$frostlang$frostc$Type* _106;
frost$core$Object* _107;
org$frostlang$frostc$Type* _109;
frost$core$Object* _110;
frost$core$MutableString* _114;
frost$core$String* _115;
frost$core$Object* _118;
frost$core$String* _121;
org$frostlang$frostc$Type* _122;
frost$core$Object* _123;
$fn53 _126;
frost$core$String* _127;
frost$core$String* _128;
frost$core$Object* _129;
frost$core$Object* _131;
frost$core$Object* _133;
frost$core$String* _136;
frost$core$Object* _138;
frost$core$Object* _140;
frost$core$Object* _142;
frost$core$Object* _144;
frost$core$Object* _147;
frost$core$String* _149;
frost$core$Object* _150;
frost$core$Object* _153;
org$frostlang$frostc$Type* _155;
frost$core$Object* _156;
frost$core$Object* _160;
frost$core$MutableString* _163;
frost$collections$Array** _166;
frost$collections$Array* _167;
frost$collections$Iterable* _168;
$fn54 _169;
frost$collections$Iterator* _170;
$fn55 _172;
frost$core$Bit _173;
bool _174;
$fn56 _177;
frost$core$Object* _178;
org$frostlang$frostc$ClassDecl* _179;
frost$core$Object* _180;
org$frostlang$frostc$ClassDecl* _182;
frost$core$Object* _183;
frost$core$MutableString* _187;
org$frostlang$frostc$ClassDecl* _188;
frost$core$String* _189;
frost$core$String* _190;
frost$core$Object* _192;
frost$core$Object* _194;
frost$core$Object* _196;
org$frostlang$frostc$ClassDecl* _198;
frost$core$Object* _199;
frost$core$Object* _203;
frost$collections$Array** _206;
frost$collections$Array* _207;
frost$collections$Iterable* _208;
$fn57 _209;
frost$collections$Iterator* _210;
$fn58 _212;
frost$core$Bit _213;
bool _214;
$fn59 _217;
frost$core$Object* _218;
org$frostlang$frostc$FieldDecl* _219;
frost$core$Object* _220;
org$frostlang$frostc$FieldDecl* _222;
frost$core$Object* _223;
frost$core$MutableString* _227;
org$frostlang$frostc$FieldDecl* _228;
frost$core$String* _229;
frost$core$String* _230;
frost$core$Object* _232;
frost$core$Object* _234;
frost$core$Object* _236;
org$frostlang$frostc$FieldDecl* _238;
frost$core$Object* _239;
frost$core$Object* _243;
frost$collections$Array** _246;
frost$collections$Array* _247;
frost$collections$Iterable* _248;
$fn60 _249;
frost$collections$Iterator* _250;
$fn61 _252;
frost$core$Bit _253;
bool _254;
$fn62 _257;
frost$core$Object* _258;
org$frostlang$frostc$MethodDecl* _259;
frost$core$Object* _260;
org$frostlang$frostc$MethodDecl* _262;
frost$core$Object* _263;
frost$core$MutableString* _267;
org$frostlang$frostc$MethodDecl* _268;
frost$core$String* _269;
frost$core$String* _270;
frost$core$Object* _272;
frost$core$Object* _274;
frost$core$Object* _276;
org$frostlang$frostc$MethodDecl* _278;
frost$core$Object* _279;
frost$core$Object* _283;
frost$core$MutableString* _286;
frost$core$MutableString* _289;
frost$core$String* _290;
frost$core$Object* _291;
frost$core$Object* _293;
frost$core$String* _295;
frost$core$Object* _296;
frost$core$MutableString* _299;
frost$core$Object* _300;
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
ITable* $tmp74 = _95->$class->itable;
while ($tmp74->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp74 = $tmp74->next;
}
_96 = $tmp74->methods[0];
_97 = _96(_95);
goto block7;
block7:;
ITable* $tmp75 = _97->$class->itable;
while ($tmp75->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp75 = $tmp75->next;
}
_99 = $tmp75->methods[0];
_100 = _99(_97);
_101 = _100.value;
if (_101) goto block9; else goto block8;
block8:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp76 = _97->$class->itable;
while ($tmp76->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp76 = $tmp76->next;
}
_104 = $tmp76->methods[1];
_105 = _104(_97);
_106 = ((org$frostlang$frostc$Type*) _105);
_107 = ((frost$core$Object*) _106);
frost$core$Frost$ref$frost$core$Object$Q(_107);
_109 = *(&local2);
_110 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_110);
*(&local2) = _106;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:181
_114 = *(&local0);
_115 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ClassDecl.frost:181:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_118 = ((frost$core$Object*) _115);
frost$core$Frost$ref$frost$core$Object$Q(_118);
_121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_115, &$s77);
_122 = *(&local2);
_123 = ((frost$core$Object*) _122);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ClassDecl.frost:181:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_126 = ($fn78) _123->$class->vtable[0];
_127 = _126(_123);
_128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_121, _127);
_129 = ((frost$core$Object*) _128);
frost$core$Frost$ref$frost$core$Object$Q(_129);
_131 = ((frost$core$Object*) _128);
frost$core$Frost$unref$frost$core$Object$Q(_131);
_133 = ((frost$core$Object*) _127);
frost$core$Frost$unref$frost$core$Object$Q(_133);
_136 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_128, &$s79);
frost$core$MutableString$append$frost$core$String(_114, _136);
_138 = ((frost$core$Object*) _136);
frost$core$Frost$unref$frost$core$Object$Q(_138);
_140 = ((frost$core$Object*) _128);
frost$core$Frost$unref$frost$core$Object$Q(_140);
_142 = ((frost$core$Object*) _121);
frost$core$Frost$unref$frost$core$Object$Q(_142);
_144 = ((frost$core$Object*) _115);
frost$core$Frost$unref$frost$core$Object$Q(_144);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:182
_147 = ((frost$core$Object*) &$s80);
frost$core$Frost$ref$frost$core$Object$Q(_147);
_149 = *(&local1);
_150 = ((frost$core$Object*) _149);
frost$core$Frost$unref$frost$core$Object$Q(_150);
*(&local1) = &$s81;
_153 = _105;
frost$core$Frost$unref$frost$core$Object$Q(_153);
_155 = *(&local2);
_156 = ((frost$core$Object*) _155);
frost$core$Frost$unref$frost$core$Object$Q(_156);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block7;
block9:;
_160 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_160);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:184
_163 = *(&local0);
frost$core$MutableString$append$frost$core$String(_163, &$s82);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:185
_166 = &param0->classes;
_167 = *_166;
_168 = ((frost$collections$Iterable*) _167);
ITable* $tmp83 = _168->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp83 = $tmp83->next;
}
_169 = $tmp83->methods[0];
_170 = _169(_168);
goto block12;
block12:;
ITable* $tmp84 = _170->$class->itable;
while ($tmp84->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp84 = $tmp84->next;
}
_172 = $tmp84->methods[0];
_173 = _172(_170);
_174 = _173.value;
if (_174) goto block14; else goto block13;
block13:;
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp85 = _170->$class->itable;
while ($tmp85->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp85 = $tmp85->next;
}
_177 = $tmp85->methods[1];
_178 = _177(_170);
_179 = ((org$frostlang$frostc$ClassDecl*) _178);
_180 = ((frost$core$Object*) _179);
frost$core$Frost$ref$frost$core$Object$Q(_180);
_182 = *(&local3);
_183 = ((frost$core$Object*) _182);
frost$core$Frost$unref$frost$core$Object$Q(_183);
*(&local3) = _179;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:186
_187 = *(&local0);
_188 = *(&local3);
_189 = org$frostlang$frostc$ClassDecl$get_asString$R$frost$core$String(_188);
_190 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_189, &$s86);
frost$core$MutableString$append$frost$core$String(_187, _190);
_192 = ((frost$core$Object*) _190);
frost$core$Frost$unref$frost$core$Object$Q(_192);
_194 = ((frost$core$Object*) _189);
frost$core$Frost$unref$frost$core$Object$Q(_194);
_196 = _178;
frost$core$Frost$unref$frost$core$Object$Q(_196);
_198 = *(&local3);
_199 = ((frost$core$Object*) _198);
frost$core$Frost$unref$frost$core$Object$Q(_199);
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block12;
block14:;
_203 = ((frost$core$Object*) _170);
frost$core$Frost$unref$frost$core$Object$Q(_203);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:188
_206 = &param0->fields;
_207 = *_206;
_208 = ((frost$collections$Iterable*) _207);
ITable* $tmp87 = _208->$class->itable;
while ($tmp87->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp87 = $tmp87->next;
}
_209 = $tmp87->methods[0];
_210 = _209(_208);
goto block15;
block15:;
ITable* $tmp88 = _210->$class->itable;
while ($tmp88->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp88 = $tmp88->next;
}
_212 = $tmp88->methods[0];
_213 = _212(_210);
_214 = _213.value;
if (_214) goto block17; else goto block16;
block16:;
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp89 = _210->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp89 = $tmp89->next;
}
_217 = $tmp89->methods[1];
_218 = _217(_210);
_219 = ((org$frostlang$frostc$FieldDecl*) _218);
_220 = ((frost$core$Object*) _219);
frost$core$Frost$ref$frost$core$Object$Q(_220);
_222 = *(&local4);
_223 = ((frost$core$Object*) _222);
frost$core$Frost$unref$frost$core$Object$Q(_223);
*(&local4) = _219;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:189
_227 = *(&local0);
_228 = *(&local4);
_229 = org$frostlang$frostc$FieldDecl$get_asString$R$frost$core$String(_228);
_230 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_229, &$s90);
frost$core$MutableString$append$frost$core$String(_227, _230);
_232 = ((frost$core$Object*) _230);
frost$core$Frost$unref$frost$core$Object$Q(_232);
_234 = ((frost$core$Object*) _229);
frost$core$Frost$unref$frost$core$Object$Q(_234);
_236 = _218;
frost$core$Frost$unref$frost$core$Object$Q(_236);
_238 = *(&local4);
_239 = ((frost$core$Object*) _238);
frost$core$Frost$unref$frost$core$Object$Q(_239);
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block15;
block17:;
_243 = ((frost$core$Object*) _210);
frost$core$Frost$unref$frost$core$Object$Q(_243);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:191
_246 = &param0->methods;
_247 = *_246;
_248 = ((frost$collections$Iterable*) _247);
ITable* $tmp91 = _248->$class->itable;
while ($tmp91->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp91 = $tmp91->next;
}
_249 = $tmp91->methods[0];
_250 = _249(_248);
goto block18;
block18:;
ITable* $tmp92 = _250->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp92 = $tmp92->next;
}
_252 = $tmp92->methods[0];
_253 = _252(_250);
_254 = _253.value;
if (_254) goto block20; else goto block19;
block19:;
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp93 = _250->$class->itable;
while ($tmp93->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp93 = $tmp93->next;
}
_257 = $tmp93->methods[1];
_258 = _257(_250);
_259 = ((org$frostlang$frostc$MethodDecl*) _258);
_260 = ((frost$core$Object*) _259);
frost$core$Frost$ref$frost$core$Object$Q(_260);
_262 = *(&local5);
_263 = ((frost$core$Object*) _262);
frost$core$Frost$unref$frost$core$Object$Q(_263);
*(&local5) = _259;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:192
_267 = *(&local0);
_268 = *(&local5);
_269 = org$frostlang$frostc$MethodDecl$get_asString$R$frost$core$String(_268);
_270 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_269, &$s94);
frost$core$MutableString$append$frost$core$String(_267, _270);
_272 = ((frost$core$Object*) _270);
frost$core$Frost$unref$frost$core$Object$Q(_272);
_274 = ((frost$core$Object*) _269);
frost$core$Frost$unref$frost$core$Object$Q(_274);
_276 = _258;
frost$core$Frost$unref$frost$core$Object$Q(_276);
_278 = *(&local5);
_279 = ((frost$core$Object*) _278);
frost$core$Frost$unref$frost$core$Object$Q(_279);
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block18;
block20:;
_283 = ((frost$core$Object*) _250);
frost$core$Frost$unref$frost$core$Object$Q(_283);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:194
_286 = *(&local0);
frost$core$MutableString$append$frost$core$String(_286, &$s95);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:195
_289 = *(&local0);
_290 = frost$core$MutableString$finish$R$frost$core$String(_289);
_291 = ((frost$core$Object*) _290);
frost$core$Frost$ref$frost$core$Object$Q(_291);
_293 = ((frost$core$Object*) _290);
frost$core$Frost$unref$frost$core$Object$Q(_293);
_295 = *(&local1);
_296 = ((frost$core$Object*) _295);
frost$core$Frost$unref$frost$core$Object$Q(_296);
*(&local1) = ((frost$core$String*) NULL);
_299 = *(&local0);
_300 = ((frost$core$Object*) _299);
frost$core$Frost$unref$frost$core$Object$Q(_300);
*(&local0) = ((frost$core$MutableString*) NULL);
return _290;

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

