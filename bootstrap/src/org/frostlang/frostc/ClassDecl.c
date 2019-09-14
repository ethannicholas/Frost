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
typedef frost$core$Int (*$fn37)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn38)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn39)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn40)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn46)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn47)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn48)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn49)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn50)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn51)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn52)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn53)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn54)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn55)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn56)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn57)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn58)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn59)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn67)(frost$core$Object*);
typedef frost$core$String* (*$fn75)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 30, 472444438948626732, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, -7843772953422604045, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x69\x6e\x69\x74\x28\x73\x6f\x75\x72\x63\x65\x3a\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x61\x6c\x69\x61\x73\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x2c\x20\x64\x6f\x63\x63\x6f\x6d\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2c\x20\x6b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x64\x65\x63\x6c\x61\x72\x65\x64\x53\x75\x70\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x2c\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x2c\x20\x70\x61\x72\x65\x6e\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x29", 542, -1070127523700856878, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, -7843772953422604045, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, -7843772953422604045, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 1485954231735473549, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x20", 3, -4370613593743840083, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x20", 3, -4370613593743840083, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, -7843772953422604045, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 81, -1728612804042895694, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, -4432762389004539022, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };

void org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable(void* rawSelf, frost$io$File* param1, org$frostlang$frostc$Position param2, frost$collections$MapView* param3, frost$core$String* param4, org$frostlang$frostc$Annotations* param5, org$frostlang$frostc$ClassDecl$Kind param6, org$frostlang$frostc$Type* param7, frost$collections$ListView* param8, frost$collections$Array* param9, org$frostlang$frostc$SymbolTable* param10) {
org$frostlang$frostc$ClassDecl* param0 = (org$frostlang$frostc$ClassDecl*) rawSelf;

frost$core$Bit local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Compiler$Resolution local3;
org$frostlang$frostc$Compiler$Resolution local4;
org$frostlang$frostc$ClassDecl$GenericParameter* local5 = NULL;
frost$core$Object* _1;
org$frostlang$frostc$Type** _3;
org$frostlang$frostc$Type* _4;
frost$core$Object* _5;
org$frostlang$frostc$Type** _7;
frost$collections$Array* _10;
frost$collections$Array* _11;
frost$core$Object* _13;
frost$collections$Array** _15;
frost$collections$Array* _16;
frost$core$Object* _17;
frost$collections$Array** _19;
frost$core$Object* _21;
frost$collections$Array* _24;
frost$collections$Array* _25;
frost$core$Object* _27;
frost$collections$Array** _29;
frost$collections$Array* _30;
frost$core$Object* _31;
frost$collections$Array** _33;
frost$core$Object* _35;
frost$collections$Array* _38;
frost$collections$Array* _39;
frost$core$Object* _41;
frost$collections$Array** _43;
frost$collections$Array* _44;
frost$core$Object* _45;
frost$collections$Array** _47;
frost$core$Object* _49;
frost$collections$Array* _52;
frost$collections$Array* _53;
frost$core$Object* _55;
frost$collections$Array** _57;
frost$collections$Array* _58;
frost$core$Object* _59;
frost$collections$Array** _61;
frost$core$Object* _63;
frost$collections$Array* _66;
frost$collections$Array* _67;
frost$core$Object* _69;
frost$collections$Array** _71;
frost$collections$Array* _72;
frost$core$Object* _73;
frost$collections$Array** _75;
frost$core$Object* _77;
frost$core$Weak* _80;
frost$core$Weak* _81;
frost$core$Object* _82;
frost$core$Object* _84;
frost$core$Weak** _86;
frost$core$Weak* _87;
frost$core$Object* _88;
frost$core$Weak** _90;
frost$core$Object* _92;
frost$core$Bit _95;
frost$core$Bit* _96;
frost$core$Bit _99;
frost$core$Bit* _100;
frost$collections$Array* _103;
frost$collections$Array* _104;
frost$core$Object* _106;
frost$collections$Array** _108;
frost$collections$Array* _109;
frost$core$Object* _110;
frost$collections$Array** _112;
frost$core$Object* _114;
frost$collections$HashMap* _117;
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
frost$core$Equatable* _135;
frost$core$Int _136;
frost$core$Int* _139;
org$frostlang$frostc$Type$Kind _141;
org$frostlang$frostc$Type$Kind _144;
frost$core$Equatable* _145;
$fn2 _146;
frost$core$Bit _147;
bool _148;
org$frostlang$frostc$FixedArray** _152;
org$frostlang$frostc$FixedArray* _153;
bool _154;
frost$core$Bit _155;
bool _156;
frost$core$Int _158;
org$frostlang$frostc$FixedArray* _161;
frost$core$Object* _162;
org$frostlang$frostc$FixedArray* _165;
frost$core$Int _166;
frost$core$Object* _167;
org$frostlang$frostc$Type* _168;
org$frostlang$frostc$Symbol* _169;
frost$core$String** _170;
frost$core$String* _171;
frost$core$Bit _172;
frost$core$Object* _173;
frost$core$Object* _175;
frost$core$Bit _181;
frost$core$Object* _182;
frost$core$Object* _184;
bool _189;
bool _190;
frost$core$Bit _191;
bool _193;
frost$core$Int _195;
org$frostlang$frostc$Position* _199;
org$frostlang$frostc$Symbol* _202;
frost$core$String** _203;
frost$core$String* _204;
frost$core$Object* _205;
frost$core$String** _207;
frost$core$String* _208;
frost$core$Object* _209;
frost$core$String** _211;
frost$core$Object* _214;
org$frostlang$frostc$Type** _216;
org$frostlang$frostc$Type* _217;
frost$core$Object* _218;
org$frostlang$frostc$Type** _220;
frost$core$Object* _223;
frost$io$File** _225;
frost$io$File* _226;
frost$core$Object* _227;
frost$io$File** _229;
frost$collections$HashMap* _232;
frost$collections$HashMap* _233;
frost$collections$MapView* _234;
frost$collections$MapView* _236;
frost$core$Object* _237;
frost$collections$MapView** _239;
frost$collections$MapView* _240;
frost$core$Object* _241;
frost$collections$MapView** _243;
frost$core$Object* _245;
frost$core$Object* _248;
frost$core$String** _250;
frost$core$String* _251;
frost$core$Object* _252;
frost$core$String** _254;
frost$core$Object* _257;
org$frostlang$frostc$Annotations** _259;
org$frostlang$frostc$Annotations* _260;
frost$core$Object* _261;
org$frostlang$frostc$Annotations** _263;
org$frostlang$frostc$ClassDecl$Kind* _266;
frost$collections$Array* _269;
frost$collections$Array* _270;
frost$collections$CollectionView* _271;
frost$collections$CollectionView* _272;
frost$core$Object* _274;
frost$collections$Array** _276;
frost$collections$Array* _277;
frost$core$Object* _278;
frost$collections$Array** _280;
frost$core$Object* _282;
frost$collections$List* _285;
frost$core$Object* _286;
frost$collections$List** _288;
frost$collections$List* _289;
frost$core$Object* _290;
frost$collections$List** _292;
org$frostlang$frostc$SymbolTable* _295;
frost$core$Object* _297;
org$frostlang$frostc$SymbolTable** _299;
org$frostlang$frostc$SymbolTable* _300;
frost$core$Object* _301;
org$frostlang$frostc$SymbolTable** _303;
frost$core$Object* _305;
frost$core$Int _308;
frost$core$Int* _311;
org$frostlang$frostc$Compiler$Resolution _313;
org$frostlang$frostc$Compiler$Resolution _316;
org$frostlang$frostc$Compiler$Resolution* _317;
org$frostlang$frostc$SymbolTable** _320;
org$frostlang$frostc$SymbolTable* _321;
frost$core$Weak** _322;
frost$core$Weak* _323;
frost$core$Weak* _324;
frost$core$Bit* _329;
frost$core$Bit _330;
bool _332;
frost$core$Int _334;
frost$core$Object** _338;
frost$core$Object* _339;
frost$core$Object* _340;
frost$core$Object* _341;
org$frostlang$frostc$Compiler* _344;
frost$collections$Stack** _345;
frost$collections$Stack* _346;
frost$collections$Stack* _347;
frost$core$Object* _348;
frost$collections$Array** _351;
frost$collections$Array* _352;
frost$collections$Array* _353;
frost$core$Object* _354;
frost$core$Object* _357;
frost$collections$Iterable* _360;
frost$collections$Iterable* _361;
$fn3 _362;
frost$collections$Iterator* _363;
frost$collections$Iterator* _364;
frost$collections$Iterator* _366;
$fn4 _367;
frost$core$Bit _368;
bool _369;
frost$collections$Iterator* _372;
$fn5 _373;
frost$core$Object* _374;
org$frostlang$frostc$ClassDecl$GenericParameter* _375;
frost$core$Object* _376;
org$frostlang$frostc$ClassDecl$GenericParameter* _378;
frost$core$Object* _379;
org$frostlang$frostc$SymbolTable** _383;
org$frostlang$frostc$SymbolTable* _384;
org$frostlang$frostc$ClassDecl$GenericParameter* _385;
org$frostlang$frostc$Symbol* _386;
frost$core$String** _389;
frost$core$String* _390;
frost$core$Object* _393;
org$frostlang$frostc$ClassDecl$GenericParameter* _395;
frost$core$Object* _396;
frost$core$Object* _400;
org$frostlang$frostc$SymbolTable** _403;
org$frostlang$frostc$SymbolTable* _404;
frost$core$Weak** _405;
frost$core$Weak* _406;
frost$core$Weak* _407;
frost$core$Bit* _412;
frost$core$Bit _413;
bool _415;
frost$core$Int _417;
frost$core$Object** _421;
frost$core$Object* _422;
frost$core$Object* _423;
frost$core$Object* _424;
org$frostlang$frostc$Compiler* _427;
frost$collections$Stack** _428;
frost$collections$Stack* _429;
frost$collections$Stack* _430;
frost$core$Int _431;
frost$core$Int _433;
int64_t _434;
int64_t _435;
bool _436;
frost$core$Bit _437;
bool _438;
frost$collections$Array** _442;
frost$collections$Array* _443;
frost$collections$CollectionView* _444;
$fn6 _445;
frost$core$Int _446;
int64_t _448;
int64_t _449;
bool _450;
frost$core$Bit _451;
bool _452;
frost$core$Int _454;
frost$collections$Array** _458;
frost$collections$Array* _459;
frost$collections$CollectionView* _460;
$fn7 _461;
frost$core$Int _462;
int64_t _463;
int64_t _464;
bool _465;
frost$core$Bit _466;
bool _467;
frost$core$Int _469;
frost$collections$Array** _473;
frost$collections$Array* _474;
frost$collections$Array* _475;
frost$collections$Array** _476;
frost$collections$Array* _477;
frost$collections$CollectionView* _478;
$fn8 _479;
frost$core$Int _480;
frost$core$Int _481;
int64_t _482;
int64_t _483;
int64_t _484;
frost$core$Int _485;
int64_t _486;
int64_t _487;
int64_t _488;
frost$core$Int _489;
frost$core$Int _491;
int64_t _492;
int64_t _493;
bool _494;
frost$core$Bit _495;
bool _496;
frost$collections$CollectionView* _498;
$fn9 _499;
frost$core$Int _500;
int64_t _501;
int64_t _502;
bool _503;
frost$core$Bit _504;
bool _505;
frost$core$Int _507;
frost$core$Object*** _511;
frost$core$Object** _512;
frost$core$Int64 _513;
int64_t _514;
frost$core$Object* _515;
frost$core$Object* _516;
frost$core$Object* _519;
frost$core$Object* _520;
frost$core$Object* _522;
org$frostlang$frostc$ClassDecl* _525;
bool _526;
frost$core$Bit _527;
bool _528;
frost$core$Int _530;
frost$core$Object* _533;
frost$core$Object* _535;
org$frostlang$frostc$SymbolTable** _538;
org$frostlang$frostc$SymbolTable* _539;
frost$core$Weak** _540;
frost$core$Weak* _541;
frost$core$Weak* _542;
frost$core$Bit* _547;
frost$core$Bit _548;
bool _550;
frost$core$Int _552;
frost$core$Object** _556;
frost$core$Object* _557;
frost$core$Object* _558;
frost$core$Object* _559;
org$frostlang$frostc$Compiler* _562;
frost$collections$Stack** _563;
frost$collections$Stack* _564;
frost$collections$Stack* _565;
frost$core$Object* _566;
org$frostlang$frostc$ClassDecl* _567;
frost$core$Object* _568;
frost$core$Object* _570;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:81
_1 = ((frost$core$Object*) ((org$frostlang$frostc$Type*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->rawSuper;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->rawSuper;
*_7 = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:86
_10 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_11 = _10;
frost$collections$Array$init(_11);
_13 = ((frost$core$Object*) _10);
frost$core$Frost$ref$frost$core$Object$Q(_13);
_15 = &param0->rawInterfaces;
_16 = *_15;
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = &param0->rawInterfaces;
*_19 = _10;
_21 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_21);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:90
_24 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_25 = _24;
frost$collections$Array$init(_25);
_27 = ((frost$core$Object*) _24);
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = &param0->fields;
_30 = *_29;
_31 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_31);
_33 = &param0->fields;
*_33 = _24;
_35 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_35);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:92
_38 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_39 = _38;
frost$collections$Array$init(_39);
_41 = ((frost$core$Object*) _38);
frost$core$Frost$ref$frost$core$Object$Q(_41);
_43 = &param0->methods;
_44 = *_43;
_45 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = &param0->methods;
*_47 = _38;
_49 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_49);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:94
_52 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_53 = _52;
frost$collections$Array$init(_53);
_55 = ((frost$core$Object*) _52);
frost$core$Frost$ref$frost$core$Object$Q(_55);
_57 = &param0->classes;
_58 = *_57;
_59 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_59);
_61 = &param0->classes;
*_61 = _52;
_63 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_63);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:96
_66 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_67 = _66;
frost$collections$Array$init(_67);
_69 = ((frost$core$Object*) _66);
frost$core$Frost$ref$frost$core$Object$Q(_69);
_71 = &param0->choiceCases;
_72 = *_71;
_73 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_73);
_75 = &param0->choiceCases;
*_75 = _66;
_77 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_77);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:99
_80 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_81 = _80;
_82 = ((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_81, _82);
_84 = ((frost$core$Object*) _80);
frost$core$Frost$ref$frost$core$Object$Q(_84);
_86 = &param0->owner;
_87 = *_86;
_88 = ((frost$core$Object*) _87);
frost$core$Frost$unref$frost$core$Object$Q(_88);
_90 = &param0->owner;
*_90 = _80;
_92 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_92);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:104
_95 = (frost$core$Bit) {false};
_96 = &param0->symbolTableResolved;
*_96 = _95;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:106
_99 = (frost$core$Bit) {true};
_100 = &param0->external;
*_100 = _99;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:108
_103 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_104 = _103;
frost$collections$Array$init(_104);
_106 = ((frost$core$Object*) _103);
frost$core$Frost$ref$frost$core$Object$Q(_106);
_108 = &param0->virtualMethods;
_109 = *_108;
_110 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_110);
_112 = &param0->virtualMethods;
*_112 = _103;
_114 = ((frost$core$Object*) _103);
frost$core$Frost$unref$frost$core$Object$Q(_114);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:110
_117 = (frost$collections$HashMap*) frostObjectAlloc(sizeof(frost$collections$HashMap), (frost$core$Class*) &frost$collections$HashMap$class);
_118 = _117;
frost$collections$HashMap$init(_118);
_120 = ((frost$core$Object*) _117);
frost$core$Frost$ref$frost$core$Object$Q(_120);
_122 = &param0->classResolutionCache;
_123 = *_122;
_124 = ((frost$core$Object*) _123);
frost$core$Frost$unref$frost$core$Object$Q(_124);
_126 = &param0->classResolutionCache;
*_126 = _117;
_128 = ((frost$core$Object*) _117);
frost$core$Frost$unref$frost$core$Object$Q(_128);
// begin inline call to function org.frostlang.frostc.Type.get_isClassLiteral():frost.core.Bit from ClassDecl.frost:114:15
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:371
_132 = &param7->typeKind;
_133 = *_132;
org$frostlang$frostc$Type$Kind$wrapper* $tmp10;
$tmp10 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp10->value = _133;
_134 = ((frost$core$Equatable*) $tmp10);
_135 = _134;
_136 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:371:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_139 = &(&local2)->$rawValue;
*_139 = _136;
_141 = *(&local2);
*(&local1) = _141;
_144 = *(&local1);
org$frostlang$frostc$Type$Kind$wrapper* $tmp11;
$tmp11 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp11->value = _144;
_145 = ((frost$core$Equatable*) $tmp11);
ITable* $tmp12 = _135->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp12 = $tmp12->next;
}
_146 = $tmp12->methods[0];
_147 = _146(_135, _145);
_148 = _147.value;
if (_148) goto block5; else goto block6;
block5:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:371:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:244
_152 = &param7->_subtypes;
_153 = *_152;
_154 = _153 != NULL;
_155 = (frost$core$Bit) {_154};
_156 = _155.value;
if (_156) goto block9; else goto block10;
block10:;
_158 = (frost$core$Int) {244u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _158, &$s14);
abort(); // unreachable
block9:;
_161 = _153;
_162 = ((frost$core$Object*) _161);
frost$core$Frost$ref$frost$core$Object$Q(_162);
_165 = _161;
_166 = (frost$core$Int) {0u};
_167 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_165, _166);
_168 = ((org$frostlang$frostc$Type*) _167);
_169 = ((org$frostlang$frostc$Symbol*) _168);
_170 = &_169->name;
_171 = *_170;
_172 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_171, &$s15);
_173 = _167;
frost$core$Frost$unref$frost$core$Object$Q(_173);
_175 = ((frost$core$Object*) _161);
frost$core$Frost$unref$frost$core$Object$Q(_175);
*(&local0) = _172;
goto block7;
block6:;
*(&local0) = _147;
goto block7;
block7:;
_181 = *(&local0);
_182 = ((frost$core$Object*) _145);
frost$core$Frost$unref$frost$core$Object$Q(_182);
_184 = ((frost$core$Object*) _134);
frost$core$Frost$unref$frost$core$Object$Q(_184);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ClassDecl.frost:114:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_189 = _181.value;
_190 = !_189;
_191 = (frost$core$Bit) {_190};
_193 = _191.value;
if (_193) goto block1; else goto block2;
block2:;
_195 = (frost$core$Int) {115u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s16, _195, &$s17);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:118
_199 = &param0->position;
*_199 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:119
_202 = ((org$frostlang$frostc$Symbol*) param7);
_203 = &_202->name;
_204 = *_203;
_205 = ((frost$core$Object*) _204);
frost$core$Frost$ref$frost$core$Object$Q(_205);
_207 = &param0->name;
_208 = *_207;
_209 = ((frost$core$Object*) _208);
frost$core$Frost$unref$frost$core$Object$Q(_209);
_211 = &param0->name;
*_211 = _204;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:120
_214 = ((frost$core$Object*) param7);
frost$core$Frost$ref$frost$core$Object$Q(_214);
_216 = &param0->type;
_217 = *_216;
_218 = ((frost$core$Object*) _217);
frost$core$Frost$unref$frost$core$Object$Q(_218);
_220 = &param0->type;
*_220 = param7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:121
_223 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_223);
_225 = &param0->source;
_226 = *_225;
_227 = ((frost$core$Object*) _226);
frost$core$Frost$unref$frost$core$Object$Q(_227);
_229 = &param0->source;
*_229 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:122
_232 = (frost$collections$HashMap*) frostObjectAlloc(sizeof(frost$collections$HashMap), (frost$core$Class*) &frost$collections$HashMap$class);
_233 = _232;
_234 = param3;
frost$collections$HashMap$init$frost$collections$MapView$LTfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$GT(_233, _234);
_236 = ((frost$collections$MapView*) _232);
_237 = ((frost$core$Object*) _236);
frost$core$Frost$ref$frost$core$Object$Q(_237);
_239 = &param0->aliases;
_240 = *_239;
_241 = ((frost$core$Object*) _240);
frost$core$Frost$unref$frost$core$Object$Q(_241);
_243 = &param0->aliases;
*_243 = _236;
_245 = ((frost$core$Object*) _232);
frost$core$Frost$unref$frost$core$Object$Q(_245);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:123
_248 = ((frost$core$Object*) param4);
frost$core$Frost$ref$frost$core$Object$Q(_248);
_250 = &param0->doccomment;
_251 = *_250;
_252 = ((frost$core$Object*) _251);
frost$core$Frost$unref$frost$core$Object$Q(_252);
_254 = &param0->doccomment;
*_254 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:124
_257 = ((frost$core$Object*) param5);
frost$core$Frost$ref$frost$core$Object$Q(_257);
_259 = &param0->annotations;
_260 = *_259;
_261 = ((frost$core$Object*) _260);
frost$core$Frost$unref$frost$core$Object$Q(_261);
_263 = &param0->annotations;
*_263 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:125
_266 = &param0->classKind;
*_266 = param6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:126
_269 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_270 = _269;
_271 = ((frost$collections$CollectionView*) param8);
_272 = _271;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_270, _272);
_274 = ((frost$core$Object*) _269);
frost$core$Frost$ref$frost$core$Object$Q(_274);
_276 = &param0->declaredSupers;
_277 = *_276;
_278 = ((frost$core$Object*) _277);
frost$core$Frost$unref$frost$core$Object$Q(_278);
_280 = &param0->declaredSupers;
*_280 = _269;
_282 = ((frost$core$Object*) _269);
frost$core$Frost$unref$frost$core$Object$Q(_282);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:127
_285 = ((frost$collections$List*) param9);
_286 = ((frost$core$Object*) _285);
frost$core$Frost$ref$frost$core$Object$Q(_286);
_288 = &param0->parameters;
_289 = *_288;
_290 = ((frost$core$Object*) _289);
frost$core$Frost$unref$frost$core$Object$Q(_290);
_292 = &param0->parameters;
*_292 = _285;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:128
_295 = (org$frostlang$frostc$SymbolTable*) frostObjectAlloc(sizeof(org$frostlang$frostc$SymbolTable), (frost$core$Class*) &org$frostlang$frostc$SymbolTable$class);
org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$SymbolTable(_295, param10);
_297 = ((frost$core$Object*) _295);
frost$core$Frost$ref$frost$core$Object$Q(_297);
_299 = &param0->symbolTable;
_300 = *_299;
_301 = ((frost$core$Object*) _300);
frost$core$Frost$unref$frost$core$Object$Q(_301);
_303 = &param0->symbolTable;
*_303 = _295;
_305 = ((frost$core$Object*) _295);
frost$core$Frost$unref$frost$core$Object$Q(_305);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:129
_308 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from ClassDecl.frost:129:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
_311 = &(&local4)->$rawValue;
*_311 = _308;
_313 = *(&local4);
*(&local3) = _313;
_316 = *(&local3);
_317 = &param0->resolved;
*_317 = _316;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:130
_320 = &param0->symbolTable;
_321 = *_320;
_322 = &_321->compiler;
_323 = *_322;
_324 = _323;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ClassDecl.frost:130:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_329 = &_324->_valid;
_330 = *_329;
_332 = _330.value;
if (_332) goto block15; else goto block16;
block16:;
_334 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s18, _334);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_338 = &_324->value;
_339 = *_338;
_340 = _339;
_341 = _340;
frost$core$Frost$ref$frost$core$Object$Q(_341);
_344 = ((org$frostlang$frostc$Compiler*) _340);
_345 = &_344->currentClass;
_346 = *_345;
_347 = _346;
_348 = ((frost$core$Object*) param0);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from ClassDecl.frost:130:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
_351 = &_347->contents;
_352 = *_351;
_353 = _352;
_354 = _348;
frost$collections$Array$add$frost$collections$Array$T(_353, _354);
_357 = _340;
frost$core$Frost$unref$frost$core$Object$Q(_357);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:131
_360 = ((frost$collections$Iterable*) param9);
_361 = _360;
ITable* $tmp19 = _361->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp19 = $tmp19->next;
}
_362 = $tmp19->methods[0];
_363 = _362(_361);
_364 = _363;
goto block18;
block18:;
_366 = _364;
ITable* $tmp20 = _366->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp20 = $tmp20->next;
}
_367 = $tmp20->methods[0];
_368 = _367(_366);
_369 = _368.value;
if (_369) goto block20; else goto block19;
block19:;
*(&local5) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
_372 = _364;
ITable* $tmp21 = _372->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp21 = $tmp21->next;
}
_373 = $tmp21->methods[1];
_374 = _373(_372);
_375 = ((org$frostlang$frostc$ClassDecl$GenericParameter*) _374);
_376 = ((frost$core$Object*) _375);
frost$core$Frost$ref$frost$core$Object$Q(_376);
_378 = *(&local5);
_379 = ((frost$core$Object*) _378);
frost$core$Frost$unref$frost$core$Object$Q(_379);
*(&local5) = _375;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:132
_383 = &param0->symbolTable;
_384 = *_383;
_385 = *(&local5);
_386 = ((org$frostlang$frostc$Symbol*) _385);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from ClassDecl.frost:132:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
_389 = &_386->name;
_390 = *_389;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String(_384, _386, _390);
_393 = _374;
frost$core$Frost$unref$frost$core$Object$Q(_393);
_395 = *(&local5);
_396 = ((frost$core$Object*) _395);
frost$core$Frost$unref$frost$core$Object$Q(_396);
*(&local5) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
goto block18;
block20:;
_400 = ((frost$core$Object*) _363);
frost$core$Frost$unref$frost$core$Object$Q(_400);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:134
_403 = &param0->symbolTable;
_404 = *_403;
_405 = &_404->compiler;
_406 = *_405;
_407 = _406;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ClassDecl.frost:134:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_412 = &_407->_valid;
_413 = *_412;
_415 = _413.value;
if (_415) goto block24; else goto block25;
block25:;
_417 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s22, _417);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_421 = &_407->value;
_422 = *_421;
_423 = _422;
_424 = _423;
frost$core$Frost$ref$frost$core$Object$Q(_424);
_427 = ((org$frostlang$frostc$Compiler*) _423);
_428 = &_427->currentClass;
_429 = *_428;
_430 = _429;
_431 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from ClassDecl.frost:134:49
_433 = (frost$core$Int) {0u};
_434 = _431.value;
_435 = _433.value;
_436 = _434 >= _435;
_437 = (frost$core$Bit) {_436};
_438 = _437.value;
if (_438) goto block29; else goto block28;
block29:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_442 = &_430->contents;
_443 = *_442;
_444 = ((frost$collections$CollectionView*) _443);
ITable* $tmp23 = _444->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp23 = $tmp23->next;
}
_445 = $tmp23->methods[0];
_446 = _445(_444);
_448 = _431.value;
_449 = _446.value;
_450 = _448 < _449;
_451 = (frost$core$Bit) {_450};
_452 = _451.value;
if (_452) goto block27; else goto block28;
block28:;
_454 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s24, _454, &$s25);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_458 = &_430->contents;
_459 = *_458;
_460 = ((frost$collections$CollectionView*) _459);
ITable* $tmp26 = _460->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp26 = $tmp26->next;
}
_461 = $tmp26->methods[0];
_462 = _461(_460);
_463 = _462.value;
_464 = _431.value;
_465 = _463 > _464;
_466 = (frost$core$Bit) {_465};
_467 = _466.value;
if (_467) goto block31; else goto block32;
block32:;
_469 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s27, _469);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_473 = &_430->contents;
_474 = *_473;
_475 = _474;
_476 = &_430->contents;
_477 = *_476;
_478 = ((frost$collections$CollectionView*) _477);
ITable* $tmp28 = _478->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp28 = $tmp28->next;
}
_479 = $tmp28->methods[0];
_480 = _479(_478);
_481 = (frost$core$Int) {1u};
_482 = _480.value;
_483 = _481.value;
_484 = _482 - _483;
_485 = (frost$core$Int) {_484};
_486 = _485.value;
_487 = _431.value;
_488 = _486 - _487;
_489 = (frost$core$Int) {_488};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_491 = (frost$core$Int) {0u};
_492 = _489.value;
_493 = _491.value;
_494 = _492 >= _493;
_495 = (frost$core$Bit) {_494};
_496 = _495.value;
if (_496) goto block36; else goto block35;
block36:;
_498 = ((frost$collections$CollectionView*) _475);
ITable* $tmp29 = _498->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp29 = $tmp29->next;
}
_499 = $tmp29->methods[0];
_500 = _499(_498);
_501 = _489.value;
_502 = _500.value;
_503 = _501 < _502;
_504 = (frost$core$Bit) {_503};
_505 = _504.value;
if (_505) goto block34; else goto block35;
block35:;
_507 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s30, _507, &$s31);
abort(); // unreachable
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_511 = &_475->data;
_512 = *_511;
_513 = frost$core$Int64$init$frost$core$Int(_489);
_514 = _513.value;
_515 = _512[_514];
_516 = _515;
frost$core$Frost$ref$frost$core$Object$Q(_516);
_519 = _515;
_520 = _519;
frost$core$Frost$ref$frost$core$Object$Q(_520);
_522 = _515;
frost$core$Frost$unref$frost$core$Object$Q(_522);
_525 = ((org$frostlang$frostc$ClassDecl*) _519);
_526 = _525 == param0;
_527 = (frost$core$Bit) {_526};
_528 = _527.value;
if (_528) goto block37; else goto block38;
block38:;
_530 = (frost$core$Int) {134u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s32, _530);
abort(); // unreachable
block37:;
_533 = _519;
frost$core$Frost$unref$frost$core$Object$Q(_533);
_535 = _423;
frost$core$Frost$unref$frost$core$Object$Q(_535);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:135
_538 = &param0->symbolTable;
_539 = *_538;
_540 = &_539->compiler;
_541 = *_540;
_542 = _541;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ClassDecl.frost:135:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_547 = &_542->_valid;
_548 = *_547;
_550 = _548.value;
if (_550) goto block41; else goto block42;
block42:;
_552 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s33, _552);
abort(); // unreachable
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_556 = &_542->value;
_557 = *_556;
_558 = _557;
_559 = _558;
frost$core$Frost$ref$frost$core$Object$Q(_559);
_562 = ((org$frostlang$frostc$Compiler*) _558);
_563 = &_562->currentClass;
_564 = *_563;
_565 = _564;
_566 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_565);
_567 = ((org$frostlang$frostc$ClassDecl*) _566);
_568 = _566;
frost$core$Frost$unref$frost$core$Object$Q(_568);
_570 = _558;
frost$core$Frost$unref$frost$core$Object$Q(_570);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:141
_1 = (org$frostlang$frostc$Type*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type), (frost$core$Class*) &org$frostlang$frostc$Type$class);
_2 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from ClassDecl.frost:142:37
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:146
_1 = &param0->name;
_2 = *_1;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from ClassDecl.frost:146:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_7 = &_2->_length;
_8 = *_7;
_9 = frost$core$String$Index$init$frost$core$Int(_8);
_11 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_2, &$s34, _9);
*(&local0) = _11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:147
_15 = *(&local0);
_16 = !_15.nonnull;
_17 = (frost$core$Bit) {_16};
_18 = _17.value;
if (_18) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:148
_21 = &param0->name;
_22 = *_21;
_23 = ((frost$core$Object*) _22);
frost$core$Frost$ref$frost$core$Object$Q(_23);
return _22;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:150
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
_36 = (frost$core$Int) {150u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s35, _36, &$s36);
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
$fn37 _4;
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
$fn38 _40;
frost$collections$Iterator* _41;
frost$collections$Iterator* _42;
frost$collections$Iterator* _44;
$fn39 _45;
frost$core$Bit _46;
bool _47;
frost$collections$Iterator* _50;
$fn40 _51;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:154
_1 = &param0->parameters;
_2 = *_1;
_3 = ((frost$collections$CollectionView*) _2);
ITable* $tmp41 = _3->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp41 = $tmp41->next;
}
_4 = $tmp41->methods[0];
_5 = _4(_3);
_6 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ClassDecl.frost:154:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_9 = _5.value;
_10 = _6.value;
_11 = _9 == _10;
_12 = (frost$core$Bit) {_11};
_14 = _12.value;
if (_14) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:155
_17 = &param0->type;
_18 = *_17;
_19 = ((frost$core$Object*) _18);
frost$core$Frost$ref$frost$core$Object$Q(_19);
return _18;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:157
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:158
_36 = &param0->parameters;
_37 = *_36;
_38 = ((frost$collections$Iterable*) _37);
_39 = _38;
ITable* $tmp42 = _39->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp42 = $tmp42->next;
}
_40 = $tmp42->methods[0];
_41 = _40(_39);
_42 = _41;
goto block4;
block4:;
_44 = _42;
ITable* $tmp43 = _44->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp43 = $tmp43->next;
}
_45 = $tmp43->methods[0];
_46 = _45(_44);
_47 = _46.value;
if (_47) goto block6; else goto block5;
block5:;
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
_50 = _42;
ITable* $tmp44 = _50->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp44 = $tmp44->next;
}
_51 = $tmp44->methods[1];
_52 = _51(_50);
_53 = ((org$frostlang$frostc$ClassDecl$GenericParameter*) _52);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$ref$frost$core$Object$Q(_54);
_56 = *(&local1);
_57 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_57);
*(&local1) = _53;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:159
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:161
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:165
_1 = &param0->name;
_2 = *_1;
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from ClassDecl.frost:165:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:967
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.frost:967:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:978
_7 = frost$core$String$get_start$R$frost$core$String$Index(_2);
_8 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_2, &$s45, _7);
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
$fn46 _64;
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
$fn47 _97;
frost$collections$Iterator* _98;
frost$collections$Iterator* _99;
frost$collections$Iterator* _101;
$fn48 _102;
frost$core$Bit _103;
bool _104;
frost$collections$Iterator* _107;
$fn49 _108;
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
$fn50 _130;
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
$fn51 _174;
frost$collections$Iterator* _175;
frost$collections$Iterator* _176;
frost$collections$Iterator* _178;
$fn52 _179;
frost$core$Bit _180;
bool _181;
frost$collections$Iterator* _184;
$fn53 _185;
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
$fn54 _218;
frost$collections$Iterator* _219;
frost$collections$Iterator* _220;
frost$collections$Iterator* _222;
$fn55 _223;
frost$core$Bit _224;
bool _225;
frost$collections$Iterator* _228;
$fn56 _229;
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
$fn57 _262;
frost$collections$Iterator* _263;
frost$collections$Iterator* _264;
frost$collections$Iterator* _266;
$fn58 _267;
frost$core$Bit _268;
bool _269;
frost$collections$Iterator* _272;
$fn59 _273;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:170
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
_2 = &param0->annotations;
_3 = *_2;
_4 = org$frostlang$frostc$Annotations$get_asString$R$frost$core$String(_3);
_5 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_4, &$s60);
_6 = &param0->name;
_7 = *_6;
_8 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_5, _7);
_9 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_8, &$s61);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:171
*(&local1) = ((frost$core$String*) NULL);
_30 = ((frost$core$Object*) &$s62);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = *(&local1);
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
*(&local1) = &$s63;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:172
_37 = &param0->rawSuper;
_38 = *_37;
_39 = _38 != NULL;
_40 = (frost$core$Bit) {_39};
_41 = _40.value;
if (_41) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:173
_44 = *(&local0);
_45 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ClassDecl.frost:173:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_48 = ((frost$core$Object*) _45);
frost$core$Frost$ref$frost$core$Object$Q(_48);
_51 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_45, &$s64);
_52 = &param0->rawSuper;
_53 = *_52;
_54 = _53 != NULL;
_55 = (frost$core$Bit) {_54};
_56 = _55.value;
if (_56) goto block4; else goto block5;
block5:;
_58 = (frost$core$Int) {173u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s65, _58, &$s66);
abort(); // unreachable
block4:;
_61 = ((frost$core$Object*) _53);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ClassDecl.frost:173:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_64 = ($fn67) _61->$class->vtable[0];
_65 = _64(_61);
_66 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_51, _65);
_67 = ((frost$core$Object*) _66);
frost$core$Frost$ref$frost$core$Object$Q(_67);
_69 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_69);
_71 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_71);
_74 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_66, &$s68);
frost$core$MutableString$append$frost$core$String(_44, _74);
_76 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_76);
_78 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_78);
_80 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_80);
_82 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_82);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:174
_85 = ((frost$core$Object*) &$s69);
frost$core$Frost$ref$frost$core$Object$Q(_85);
_87 = *(&local1);
_88 = ((frost$core$Object*) _87);
frost$core$Frost$unref$frost$core$Object$Q(_88);
*(&local1) = &$s70;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:176
_93 = &param0->rawInterfaces;
_94 = *_93;
_95 = ((frost$collections$Iterable*) _94);
_96 = _95;
ITable* $tmp71 = _96->$class->itable;
while ($tmp71->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp71 = $tmp71->next;
}
_97 = $tmp71->methods[0];
_98 = _97(_96);
_99 = _98;
goto block7;
block7:;
_101 = _99;
ITable* $tmp72 = _101->$class->itable;
while ($tmp72->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp72 = $tmp72->next;
}
_102 = $tmp72->methods[0];
_103 = _102(_101);
_104 = _103.value;
if (_104) goto block9; else goto block8;
block8:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
_107 = _99;
ITable* $tmp73 = _107->$class->itable;
while ($tmp73->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp73 = $tmp73->next;
}
_108 = $tmp73->methods[1];
_109 = _108(_107);
_110 = ((org$frostlang$frostc$Type*) _109);
_111 = ((frost$core$Object*) _110);
frost$core$Frost$ref$frost$core$Object$Q(_111);
_113 = *(&local2);
_114 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_114);
*(&local2) = _110;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:177
_118 = *(&local0);
_119 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ClassDecl.frost:177:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_122 = ((frost$core$Object*) _119);
frost$core$Frost$ref$frost$core$Object$Q(_122);
_125 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_119, &$s74);
_126 = *(&local2);
_127 = ((frost$core$Object*) _126);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ClassDecl.frost:177:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_130 = ($fn75) _127->$class->vtable[0];
_131 = _130(_127);
_132 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_125, _131);
_133 = ((frost$core$Object*) _132);
frost$core$Frost$ref$frost$core$Object$Q(_133);
_135 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_135);
_137 = ((frost$core$Object*) _131);
frost$core$Frost$unref$frost$core$Object$Q(_137);
_140 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_132, &$s76);
frost$core$MutableString$append$frost$core$String(_118, _140);
_142 = ((frost$core$Object*) _140);
frost$core$Frost$unref$frost$core$Object$Q(_142);
_144 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_144);
_146 = ((frost$core$Object*) _125);
frost$core$Frost$unref$frost$core$Object$Q(_146);
_148 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_148);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:178
_151 = ((frost$core$Object*) &$s77);
frost$core$Frost$ref$frost$core$Object$Q(_151);
_153 = *(&local1);
_154 = ((frost$core$Object*) _153);
frost$core$Frost$unref$frost$core$Object$Q(_154);
*(&local1) = &$s78;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:180
_167 = *(&local0);
frost$core$MutableString$append$frost$core$String(_167, &$s79);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:181
_170 = &param0->classes;
_171 = *_170;
_172 = ((frost$collections$Iterable*) _171);
_173 = _172;
ITable* $tmp80 = _173->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp80 = $tmp80->next;
}
_174 = $tmp80->methods[0];
_175 = _174(_173);
_176 = _175;
goto block12;
block12:;
_178 = _176;
ITable* $tmp81 = _178->$class->itable;
while ($tmp81->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp81 = $tmp81->next;
}
_179 = $tmp81->methods[0];
_180 = _179(_178);
_181 = _180.value;
if (_181) goto block14; else goto block13;
block13:;
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
_184 = _176;
ITable* $tmp82 = _184->$class->itable;
while ($tmp82->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp82 = $tmp82->next;
}
_185 = $tmp82->methods[1];
_186 = _185(_184);
_187 = ((org$frostlang$frostc$ClassDecl*) _186);
_188 = ((frost$core$Object*) _187);
frost$core$Frost$ref$frost$core$Object$Q(_188);
_190 = *(&local3);
_191 = ((frost$core$Object*) _190);
frost$core$Frost$unref$frost$core$Object$Q(_191);
*(&local3) = _187;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:182
_195 = *(&local0);
_196 = *(&local3);
_197 = org$frostlang$frostc$ClassDecl$get_asString$R$frost$core$String(_196);
_198 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_197, &$s83);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:184
_214 = &param0->fields;
_215 = *_214;
_216 = ((frost$collections$Iterable*) _215);
_217 = _216;
ITable* $tmp84 = _217->$class->itable;
while ($tmp84->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp84 = $tmp84->next;
}
_218 = $tmp84->methods[0];
_219 = _218(_217);
_220 = _219;
goto block15;
block15:;
_222 = _220;
ITable* $tmp85 = _222->$class->itable;
while ($tmp85->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp85 = $tmp85->next;
}
_223 = $tmp85->methods[0];
_224 = _223(_222);
_225 = _224.value;
if (_225) goto block17; else goto block16;
block16:;
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
_228 = _220;
ITable* $tmp86 = _228->$class->itable;
while ($tmp86->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp86 = $tmp86->next;
}
_229 = $tmp86->methods[1];
_230 = _229(_228);
_231 = ((org$frostlang$frostc$FieldDecl*) _230);
_232 = ((frost$core$Object*) _231);
frost$core$Frost$ref$frost$core$Object$Q(_232);
_234 = *(&local4);
_235 = ((frost$core$Object*) _234);
frost$core$Frost$unref$frost$core$Object$Q(_235);
*(&local4) = _231;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:185
_239 = *(&local0);
_240 = *(&local4);
_241 = org$frostlang$frostc$FieldDecl$get_asString$R$frost$core$String(_240);
_242 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_241, &$s87);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:187
_258 = &param0->methods;
_259 = *_258;
_260 = ((frost$collections$Iterable*) _259);
_261 = _260;
ITable* $tmp88 = _261->$class->itable;
while ($tmp88->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp88 = $tmp88->next;
}
_262 = $tmp88->methods[0];
_263 = _262(_261);
_264 = _263;
goto block18;
block18:;
_266 = _264;
ITable* $tmp89 = _266->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp89 = $tmp89->next;
}
_267 = $tmp89->methods[0];
_268 = _267(_266);
_269 = _268.value;
if (_269) goto block20; else goto block19;
block19:;
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
_272 = _264;
ITable* $tmp90 = _272->$class->itable;
while ($tmp90->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp90 = $tmp90->next;
}
_273 = $tmp90->methods[1];
_274 = _273(_272);
_275 = ((org$frostlang$frostc$MethodDecl*) _274);
_276 = ((frost$core$Object*) _275);
frost$core$Frost$ref$frost$core$Object$Q(_276);
_278 = *(&local5);
_279 = ((frost$core$Object*) _278);
frost$core$Frost$unref$frost$core$Object$Q(_279);
*(&local5) = _275;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:188
_283 = *(&local0);
_284 = *(&local5);
_285 = org$frostlang$frostc$MethodDecl$get_asString$R$frost$core$String(_284);
_286 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_285, &$s91);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:190
_302 = *(&local0);
frost$core$MutableString$append$frost$core$String(_302, &$s92);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:191
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

