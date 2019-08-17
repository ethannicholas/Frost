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
typedef frost$collections$Iterator* (*$fn126)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn130)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn135)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn168)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn182)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn197)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn216)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn282)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn298)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn302)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn307)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn351)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn363)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn367)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn372)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn381)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn396)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn400)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn405)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn418)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn422)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn427)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn440)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn444)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn449)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 30, 472444438948626732, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, -7843772953422604045, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x69\x6e\x69\x74\x28\x73\x6f\x75\x72\x63\x65\x3a\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x61\x6c\x69\x61\x73\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x2c\x20\x64\x6f\x63\x63\x6f\x6d\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2c\x20\x6b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x64\x65\x63\x6c\x61\x72\x65\x64\x53\x75\x70\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x2c\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x2c\x20\x70\x61\x72\x65\x6e\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x29", 542, -1070127523700856878, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, -7843772953422604045, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 1485954231735473549, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x20", 3, -4370613593743840083, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x20", 3, -4370613593743840083, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s356 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s358 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s388 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, -4432762389004539022, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s456 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s459 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };

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
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
frost$core$Int $tmp56 = (frost$core$Int) {0u};
frost$core$Object* $tmp57 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp55, $tmp56);
frost$core$String** $tmp58 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp57))->name;
frost$core$String* $tmp59 = *$tmp58;
frost$core$Bit $tmp60 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp59, &$s61);
frost$core$Frost$unref$frost$core$Object$Q($tmp57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
*(&local0) = $tmp60;
goto block7;
block6:;
*(&local0) = $tmp52;
goto block7;
block7:;
frost$core$Bit $tmp62 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp48)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp43)));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ClassDecl.frost:114:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp63 = $tmp62.value;
bool $tmp64 = !$tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block1; else goto block2;
block2:;
frost$core$Int $tmp67 = (frost$core$Int) {115u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s68, $tmp67, &$s69);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:118
org$frostlang$frostc$Position* $tmp70 = &param0->position;
*$tmp70 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:119
frost$core$String** $tmp71 = &((org$frostlang$frostc$Symbol*) param7)->name;
frost$core$String* $tmp72 = *$tmp71;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$String** $tmp73 = &param0->name;
frost$core$String* $tmp74 = *$tmp73;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
frost$core$String** $tmp75 = &param0->name;
*$tmp75 = $tmp72;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:120
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$Type** $tmp76 = &param0->type;
org$frostlang$frostc$Type* $tmp77 = *$tmp76;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
org$frostlang$frostc$Type** $tmp78 = &param0->type;
*$tmp78 = param7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:121
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp79 = &param0->source;
frost$io$File* $tmp80 = *$tmp79;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$io$File** $tmp81 = &param0->source;
*$tmp81 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:122
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp82 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init$frost$collections$MapView$LTfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$GT($tmp82, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) $tmp82)));
frost$collections$MapView** $tmp83 = &param0->aliases;
frost$collections$MapView* $tmp84 = *$tmp83;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$collections$MapView** $tmp85 = &param0->aliases;
*$tmp85 = ((frost$collections$MapView*) $tmp82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:123
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp86 = &param0->doccomment;
frost$core$String* $tmp87 = *$tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$String** $tmp88 = &param0->doccomment;
*$tmp88 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:124
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$Annotations** $tmp89 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp90 = *$tmp89;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
org$frostlang$frostc$Annotations** $tmp91 = &param0->annotations;
*$tmp91 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:125
org$frostlang$frostc$ClassDecl$Kind* $tmp92 = &param0->classKind;
*$tmp92 = param6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:126
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp93 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp93, ((frost$collections$CollectionView*) param8));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$collections$Array** $tmp94 = &param0->declaredSupers;
frost$collections$Array* $tmp95 = *$tmp94;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$collections$Array** $tmp96 = &param0->declaredSupers;
*$tmp96 = $tmp93;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:127
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$List*) param9)));
frost$collections$List** $tmp97 = &param0->parameters;
frost$collections$List* $tmp98 = *$tmp97;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$collections$List** $tmp99 = &param0->parameters;
*$tmp99 = ((frost$collections$List*) param9);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:128
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$SymbolTable));
org$frostlang$frostc$SymbolTable* $tmp100 = (org$frostlang$frostc$SymbolTable*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$SymbolTable$class);
org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$SymbolTable($tmp100, param10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
org$frostlang$frostc$SymbolTable** $tmp101 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp102 = *$tmp101;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
org$frostlang$frostc$SymbolTable** $tmp103 = &param0->symbolTable;
*$tmp103 = $tmp100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:129
frost$core$Int $tmp104 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from ClassDecl.frost:129:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
frost$core$Int* $tmp105 = &(&local4)->$rawValue;
*$tmp105 = $tmp104;
org$frostlang$frostc$Compiler$Resolution $tmp106 = *(&local4);
*(&local3) = $tmp106;
org$frostlang$frostc$Compiler$Resolution $tmp107 = *(&local3);
org$frostlang$frostc$Compiler$Resolution* $tmp108 = &param0->resolved;
*$tmp108 = $tmp107;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:130
org$frostlang$frostc$SymbolTable** $tmp109 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp110 = *$tmp109;
frost$core$Weak** $tmp111 = &$tmp110->compiler;
frost$core$Weak* $tmp112 = *$tmp111;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ClassDecl.frost:130:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp113 = &$tmp112->_valid;
frost$core$Bit $tmp114 = *$tmp113;
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block13; else goto block14;
block14:;
frost$core$Int $tmp116 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s117, $tmp116);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp118 = &$tmp112->value;
frost$core$Object* $tmp119 = *$tmp118;
frost$core$Frost$ref$frost$core$Object$Q($tmp119);
frost$collections$Stack** $tmp120 = &((org$frostlang$frostc$Compiler*) $tmp119)->currentClass;
frost$collections$Stack* $tmp121 = *$tmp120;
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from ClassDecl.frost:130:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp122 = &$tmp121->contents;
frost$collections$Array* $tmp123 = *$tmp122;
frost$collections$Array$add$frost$collections$Array$T($tmp123, ((frost$core$Object*) param0));
frost$core$Frost$unref$frost$core$Object$Q($tmp119);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:131
ITable* $tmp124 = ((frost$collections$Iterable*) param9)->$class->itable;
while ($tmp124->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp124 = $tmp124->next;
}
$fn126 $tmp125 = $tmp124->methods[0];
frost$collections$Iterator* $tmp127 = $tmp125(((frost$collections$Iterable*) param9));
goto block16;
block16:;
ITable* $tmp128 = $tmp127->$class->itable;
while ($tmp128->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp128 = $tmp128->next;
}
$fn130 $tmp129 = $tmp128->methods[0];
frost$core$Bit $tmp131 = $tmp129($tmp127);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block18; else goto block17;
block17:;
*(&local5) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
ITable* $tmp133 = $tmp127->$class->itable;
while ($tmp133->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp133 = $tmp133->next;
}
$fn135 $tmp134 = $tmp133->methods[1];
frost$core$Object* $tmp136 = $tmp134($tmp127);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp136)));
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp137 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
*(&local5) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp136);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:132
org$frostlang$frostc$SymbolTable** $tmp138 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp139 = *$tmp138;
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp140 = *(&local5);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from ClassDecl.frost:132:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp141 = &((org$frostlang$frostc$Symbol*) $tmp140)->name;
frost$core$String* $tmp142 = *$tmp141;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp139, ((org$frostlang$frostc$Symbol*) $tmp140), $tmp142);
frost$core$Frost$unref$frost$core$Object$Q($tmp136);
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp143 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local5) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
goto block16;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:134
org$frostlang$frostc$SymbolTable** $tmp144 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp145 = *$tmp144;
frost$core$Weak** $tmp146 = &$tmp145->compiler;
frost$core$Weak* $tmp147 = *$tmp146;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ClassDecl.frost:134:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp148 = &$tmp147->_valid;
frost$core$Bit $tmp149 = *$tmp148;
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block22; else goto block23;
block23:;
frost$core$Int $tmp151 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s152, $tmp151);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp153 = &$tmp147->value;
frost$core$Object* $tmp154 = *$tmp153;
frost$core$Frost$ref$frost$core$Object$Q($tmp154);
frost$collections$Stack** $tmp155 = &((org$frostlang$frostc$Compiler*) $tmp154)->currentClass;
frost$collections$Stack* $tmp156 = *$tmp155;
frost$core$Int $tmp157 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from ClassDecl.frost:134:49
frost$core$Int $tmp158 = (frost$core$Int) {0u};
int64_t $tmp159 = $tmp157.value;
int64_t $tmp160 = $tmp158.value;
bool $tmp161 = $tmp159 >= $tmp160;
frost$core$Bit $tmp162 = (frost$core$Bit) {$tmp161};
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block27; else goto block26;
block27:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp164 = &$tmp156->contents;
frost$collections$Array* $tmp165 = *$tmp164;
ITable* $tmp166 = ((frost$collections$CollectionView*) $tmp165)->$class->itable;
while ($tmp166->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp166 = $tmp166->next;
}
$fn168 $tmp167 = $tmp166->methods[0];
frost$core$Int $tmp169 = $tmp167(((frost$collections$CollectionView*) $tmp165));
int64_t $tmp170 = $tmp157.value;
int64_t $tmp171 = $tmp169.value;
bool $tmp172 = $tmp170 < $tmp171;
frost$core$Bit $tmp173 = (frost$core$Bit) {$tmp172};
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block25; else goto block26;
block26:;
frost$core$Int $tmp175 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s176, $tmp175, &$s177);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp178 = &$tmp156->contents;
frost$collections$Array* $tmp179 = *$tmp178;
ITable* $tmp180 = ((frost$collections$CollectionView*) $tmp179)->$class->itable;
while ($tmp180->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp180 = $tmp180->next;
}
$fn182 $tmp181 = $tmp180->methods[0];
frost$core$Int $tmp183 = $tmp181(((frost$collections$CollectionView*) $tmp179));
int64_t $tmp184 = $tmp183.value;
int64_t $tmp185 = $tmp157.value;
bool $tmp186 = $tmp184 > $tmp185;
frost$core$Bit $tmp187 = (frost$core$Bit) {$tmp186};
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block29; else goto block30;
block30:;
frost$core$Int $tmp189 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s190, $tmp189);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp191 = &$tmp156->contents;
frost$collections$Array* $tmp192 = *$tmp191;
frost$collections$Array** $tmp193 = &$tmp156->contents;
frost$collections$Array* $tmp194 = *$tmp193;
ITable* $tmp195 = ((frost$collections$CollectionView*) $tmp194)->$class->itable;
while ($tmp195->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp195 = $tmp195->next;
}
$fn197 $tmp196 = $tmp195->methods[0];
frost$core$Int $tmp198 = $tmp196(((frost$collections$CollectionView*) $tmp194));
frost$core$Int $tmp199 = (frost$core$Int) {1u};
int64_t $tmp200 = $tmp198.value;
int64_t $tmp201 = $tmp199.value;
int64_t $tmp202 = $tmp200 - $tmp201;
frost$core$Int $tmp203 = (frost$core$Int) {$tmp202};
int64_t $tmp204 = $tmp203.value;
int64_t $tmp205 = $tmp157.value;
int64_t $tmp206 = $tmp204 - $tmp205;
frost$core$Int $tmp207 = (frost$core$Int) {$tmp206};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp208 = (frost$core$Int) {0u};
int64_t $tmp209 = $tmp207.value;
int64_t $tmp210 = $tmp208.value;
bool $tmp211 = $tmp209 >= $tmp210;
frost$core$Bit $tmp212 = (frost$core$Bit) {$tmp211};
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block34; else goto block33;
block34:;
ITable* $tmp214 = ((frost$collections$CollectionView*) $tmp192)->$class->itable;
while ($tmp214->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp214 = $tmp214->next;
}
$fn216 $tmp215 = $tmp214->methods[0];
frost$core$Int $tmp217 = $tmp215(((frost$collections$CollectionView*) $tmp192));
int64_t $tmp218 = $tmp207.value;
int64_t $tmp219 = $tmp217.value;
bool $tmp220 = $tmp218 < $tmp219;
frost$core$Bit $tmp221 = (frost$core$Bit) {$tmp220};
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block32; else goto block33;
block33:;
frost$core$Int $tmp223 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s224, $tmp223, &$s225);
abort(); // unreachable
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp226 = &$tmp192->data;
frost$core$Object** $tmp227 = *$tmp226;
frost$core$Int64 $tmp228 = frost$core$Int64$init$frost$core$Int($tmp207);
int64_t $tmp229 = $tmp228.value;
frost$core$Object* $tmp230 = $tmp227[$tmp229];
frost$core$Frost$ref$frost$core$Object$Q($tmp230);
frost$core$Frost$ref$frost$core$Object$Q($tmp230);
frost$core$Frost$unref$frost$core$Object$Q($tmp230);
bool $tmp231 = ((org$frostlang$frostc$ClassDecl*) $tmp230) == param0;
frost$core$Bit $tmp232 = (frost$core$Bit) {$tmp231};
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block35; else goto block36;
block36:;
frost$core$Int $tmp234 = (frost$core$Int) {134u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s235, $tmp234);
abort(); // unreachable
block35:;
frost$core$Frost$unref$frost$core$Object$Q($tmp230);
frost$core$Frost$unref$frost$core$Object$Q($tmp154);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:135
org$frostlang$frostc$SymbolTable** $tmp236 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp237 = *$tmp236;
frost$core$Weak** $tmp238 = &$tmp237->compiler;
frost$core$Weak* $tmp239 = *$tmp238;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ClassDecl.frost:135:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp240 = &$tmp239->_valid;
frost$core$Bit $tmp241 = *$tmp240;
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block39; else goto block40;
block40:;
frost$core$Int $tmp243 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s244, $tmp243);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp245 = &$tmp239->value;
frost$core$Object* $tmp246 = *$tmp245;
frost$core$Frost$ref$frost$core$Object$Q($tmp246);
frost$collections$Stack** $tmp247 = &((org$frostlang$frostc$Compiler*) $tmp246)->currentClass;
frost$collections$Stack* $tmp248 = *$tmp247;
frost$core$Object* $tmp249 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp248);
frost$core$Frost$unref$frost$core$Object$Q($tmp249);
frost$core$Frost$unref$frost$core$Object$Q($tmp246);
return;

}
void org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable(org$frostlang$frostc$ClassDecl* param0, frost$io$File* param1, org$frostlang$frostc$Position param2, frost$collections$MapView* param3, frost$core$String* param4, org$frostlang$frostc$Annotations* param5, org$frostlang$frostc$ClassDecl$Kind param6, frost$core$String* param7, frost$collections$ListView* param8, frost$collections$Array* param9, org$frostlang$frostc$SymbolTable* param10) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:141
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp250 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int $tmp251 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from ClassDecl.frost:142:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp252 = &(&local1)->$rawValue;
*$tmp252 = $tmp251;
org$frostlang$frostc$Type$Kind $tmp253 = *(&local1);
*(&local0) = $tmp253;
org$frostlang$frostc$Type$Kind $tmp254 = *(&local0);
org$frostlang$frostc$Position $tmp255 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp256 = (frost$core$Bit) {true};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp250, param7, $tmp254, $tmp255, $tmp256);
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable(param0, param1, param2, param3, param4, param5, param6, $tmp250, param8, param9, param10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
return;

}
frost$core$String* org$frostlang$frostc$ClassDecl$simpleName$R$frost$core$String(org$frostlang$frostc$ClassDecl* param0) {

frost$core$String$Index$nullable local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:146
frost$core$String** $tmp257 = &param0->name;
frost$core$String* $tmp258 = *$tmp257;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from ClassDecl.frost:146:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp259 = &$tmp258->_length;
frost$core$Int $tmp260 = *$tmp259;
frost$core$String$Index $tmp261 = frost$core$String$Index$init$frost$core$Int($tmp260);
frost$core$String$Index$nullable $tmp262 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp258, &$s263, $tmp261);
*(&local0) = $tmp262;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:147
frost$core$String$Index$nullable $tmp264 = *(&local0);
frost$core$Bit $tmp265 = (frost$core$Bit) {!$tmp264.nonnull};
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:148
frost$core$String** $tmp267 = &param0->name;
frost$core$String* $tmp268 = *$tmp267;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
return $tmp268;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:150
frost$core$String** $tmp269 = &param0->name;
frost$core$String* $tmp270 = *$tmp269;
frost$core$String** $tmp271 = &param0->name;
frost$core$String* $tmp272 = *$tmp271;
frost$core$String$Index$nullable $tmp273 = *(&local0);
frost$core$String$Index $tmp274 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp272, ((frost$core$String$Index) $tmp273.value));
frost$core$Bit $tmp275 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp276 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp274, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp275);
frost$core$String* $tmp277 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp270, $tmp276);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
return $tmp277;

}
org$frostlang$frostc$Type* org$frostlang$frostc$ClassDecl$typeWithParameters$R$org$frostlang$frostc$Type(org$frostlang$frostc$ClassDecl* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ClassDecl$GenericParameter* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:154
frost$collections$List** $tmp278 = &param0->parameters;
frost$collections$List* $tmp279 = *$tmp278;
ITable* $tmp280 = ((frost$collections$CollectionView*) $tmp279)->$class->itable;
while ($tmp280->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp280 = $tmp280->next;
}
$fn282 $tmp281 = $tmp280->methods[0];
frost$core$Int $tmp283 = $tmp281(((frost$collections$CollectionView*) $tmp279));
frost$core$Int $tmp284 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ClassDecl.frost:154:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp285 = $tmp283.value;
int64_t $tmp286 = $tmp284.value;
bool $tmp287 = $tmp285 == $tmp286;
frost$core$Bit $tmp288 = (frost$core$Bit) {$tmp287};
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:155
org$frostlang$frostc$Type** $tmp290 = &param0->type;
org$frostlang$frostc$Type* $tmp291 = *$tmp290;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
return $tmp291;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:157
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp292 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp292);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
frost$collections$Array* $tmp293 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local0) = $tmp292;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:158
frost$collections$List** $tmp294 = &param0->parameters;
frost$collections$List* $tmp295 = *$tmp294;
ITable* $tmp296 = ((frost$collections$Iterable*) $tmp295)->$class->itable;
while ($tmp296->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp296 = $tmp296->next;
}
$fn298 $tmp297 = $tmp296->methods[0];
frost$collections$Iterator* $tmp299 = $tmp297(((frost$collections$Iterable*) $tmp295));
goto block4;
block4:;
ITable* $tmp300 = $tmp299->$class->itable;
while ($tmp300->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp300 = $tmp300->next;
}
$fn302 $tmp301 = $tmp300->methods[0];
frost$core$Bit $tmp303 = $tmp301($tmp299);
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block6; else goto block5;
block5:;
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
ITable* $tmp305 = $tmp299->$class->itable;
while ($tmp305->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp305 = $tmp305->next;
}
$fn307 $tmp306 = $tmp305->methods[1];
frost$core$Object* $tmp308 = $tmp306($tmp299);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp308)));
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp309 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp308);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:159
frost$collections$Array* $tmp310 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp311 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp312 = *(&local1);
org$frostlang$frostc$Type$init$org$frostlang$frostc$ClassDecl$GenericParameter($tmp311, $tmp312);
frost$collections$Array$add$frost$collections$Array$T($tmp310, ((frost$core$Object*) $tmp311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
frost$core$Frost$unref$frost$core$Object$Q($tmp308);
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp313 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:161
org$frostlang$frostc$Type** $tmp314 = &param0->type;
org$frostlang$frostc$Type* $tmp315 = *$tmp314;
frost$collections$Array* $tmp316 = *(&local0);
org$frostlang$frostc$Type* $tmp317 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp315, ((frost$collections$ListView*) $tmp316));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$collections$Array* $tmp318 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp317;

}
frost$core$Bit org$frostlang$frostc$ClassDecl$isSpecialization$R$frost$core$Bit(org$frostlang$frostc$ClassDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:165
frost$core$String** $tmp319 = &param0->name;
frost$core$String* $tmp320 = *$tmp319;
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from ClassDecl.frost:165:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:967
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.frost:967:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:978
frost$core$String$Index $tmp321 = frost$core$String$get_start$R$frost$core$String$Index($tmp320);
frost$core$String$Index$nullable $tmp322 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp320, &$s323, $tmp321);
frost$core$Bit $tmp324 = (frost$core$Bit) {$tmp322.nonnull};
return $tmp324;

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
frost$core$MutableString* $tmp325 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Annotations** $tmp326 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp327 = *$tmp326;
frost$core$String* $tmp328 = org$frostlang$frostc$Annotations$get_asString$R$frost$core$String($tmp327);
frost$core$String* $tmp329 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp328, &$s330);
frost$core$String** $tmp331 = &param0->name;
frost$core$String* $tmp332 = *$tmp331;
frost$core$String* $tmp333 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp329, $tmp332);
frost$core$String* $tmp334 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp333, &$s335);
frost$core$MutableString$init$frost$core$String($tmp325, $tmp334);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
frost$core$MutableString* $tmp336 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
*(&local0) = $tmp325;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:171
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s337));
frost$core$String* $tmp338 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
*(&local1) = &$s339;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:172
org$frostlang$frostc$Type** $tmp340 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp341 = *$tmp340;
frost$core$Bit $tmp342 = (frost$core$Bit) {$tmp341 != NULL};
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:173
frost$core$MutableString* $tmp344 = *(&local0);
frost$core$String* $tmp345 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ClassDecl.frost:173:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$String* $tmp346 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp345, &$s347);
org$frostlang$frostc$Type** $tmp348 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp349 = *$tmp348;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ClassDecl.frost:173:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn351 $tmp350 = ($fn351) ((frost$core$Object*) $tmp349)->$class->vtable[0];
frost$core$String* $tmp352 = $tmp350(((frost$core$Object*) $tmp349));
frost$core$String* $tmp353 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp346, $tmp352);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$core$String* $tmp354 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp353, &$s355);
frost$core$MutableString$append$frost$core$String($tmp344, $tmp354);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:174
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s356));
frost$core$String* $tmp357 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local1) = &$s358;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:176
frost$collections$Array** $tmp359 = &param0->rawInterfaces;
frost$collections$Array* $tmp360 = *$tmp359;
ITable* $tmp361 = ((frost$collections$Iterable*) $tmp360)->$class->itable;
while ($tmp361->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp361 = $tmp361->next;
}
$fn363 $tmp362 = $tmp361->methods[0];
frost$collections$Iterator* $tmp364 = $tmp362(((frost$collections$Iterable*) $tmp360));
goto block5;
block5:;
ITable* $tmp365 = $tmp364->$class->itable;
while ($tmp365->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp365 = $tmp365->next;
}
$fn367 $tmp366 = $tmp365->methods[0];
frost$core$Bit $tmp368 = $tmp366($tmp364);
bool $tmp369 = $tmp368.value;
if ($tmp369) goto block7; else goto block6;
block6:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp370 = $tmp364->$class->itable;
while ($tmp370->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp370 = $tmp370->next;
}
$fn372 $tmp371 = $tmp370->methods[1];
frost$core$Object* $tmp373 = $tmp371($tmp364);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp373)));
org$frostlang$frostc$Type* $tmp374 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp373);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:177
frost$core$MutableString* $tmp375 = *(&local0);
frost$core$String* $tmp376 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ClassDecl.frost:177:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$core$String* $tmp377 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp376, &$s378);
org$frostlang$frostc$Type* $tmp379 = *(&local2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ClassDecl.frost:177:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn381 $tmp380 = ($fn381) ((frost$core$Object*) $tmp379)->$class->vtable[0];
frost$core$String* $tmp382 = $tmp380(((frost$core$Object*) $tmp379));
frost$core$String* $tmp383 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp377, $tmp382);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$String* $tmp384 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp383, &$s385);
frost$core$MutableString$append$frost$core$String($tmp375, $tmp384);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:178
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s386));
frost$core$String* $tmp387 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
*(&local1) = &$s388;
frost$core$Frost$unref$frost$core$Object$Q($tmp373);
org$frostlang$frostc$Type* $tmp389 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:180
frost$core$MutableString* $tmp390 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp390, &$s391);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:181
frost$collections$Array** $tmp392 = &param0->classes;
frost$collections$Array* $tmp393 = *$tmp392;
ITable* $tmp394 = ((frost$collections$Iterable*) $tmp393)->$class->itable;
while ($tmp394->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp394 = $tmp394->next;
}
$fn396 $tmp395 = $tmp394->methods[0];
frost$collections$Iterator* $tmp397 = $tmp395(((frost$collections$Iterable*) $tmp393));
goto block10;
block10:;
ITable* $tmp398 = $tmp397->$class->itable;
while ($tmp398->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp398 = $tmp398->next;
}
$fn400 $tmp399 = $tmp398->methods[0];
frost$core$Bit $tmp401 = $tmp399($tmp397);
bool $tmp402 = $tmp401.value;
if ($tmp402) goto block12; else goto block11;
block11:;
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp403 = $tmp397->$class->itable;
while ($tmp403->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp403 = $tmp403->next;
}
$fn405 $tmp404 = $tmp403->methods[1];
frost$core$Object* $tmp406 = $tmp404($tmp397);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp406)));
org$frostlang$frostc$ClassDecl* $tmp407 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
*(&local3) = ((org$frostlang$frostc$ClassDecl*) $tmp406);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:182
frost$core$MutableString* $tmp408 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp409 = *(&local3);
frost$core$String* $tmp410 = org$frostlang$frostc$ClassDecl$get_asString$R$frost$core$String($tmp409);
frost$core$String* $tmp411 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp410, &$s412);
frost$core$MutableString$append$frost$core$String($tmp408, $tmp411);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$core$Frost$unref$frost$core$Object$Q($tmp406);
org$frostlang$frostc$ClassDecl* $tmp413 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block10;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:184
frost$collections$Array** $tmp414 = &param0->fields;
frost$collections$Array* $tmp415 = *$tmp414;
ITable* $tmp416 = ((frost$collections$Iterable*) $tmp415)->$class->itable;
while ($tmp416->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp416 = $tmp416->next;
}
$fn418 $tmp417 = $tmp416->methods[0];
frost$collections$Iterator* $tmp419 = $tmp417(((frost$collections$Iterable*) $tmp415));
goto block13;
block13:;
ITable* $tmp420 = $tmp419->$class->itable;
while ($tmp420->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp420 = $tmp420->next;
}
$fn422 $tmp421 = $tmp420->methods[0];
frost$core$Bit $tmp423 = $tmp421($tmp419);
bool $tmp424 = $tmp423.value;
if ($tmp424) goto block15; else goto block14;
block14:;
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp425 = $tmp419->$class->itable;
while ($tmp425->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp425 = $tmp425->next;
}
$fn427 $tmp426 = $tmp425->methods[1];
frost$core$Object* $tmp428 = $tmp426($tmp419);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp428)));
org$frostlang$frostc$FieldDecl* $tmp429 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) $tmp428);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:185
frost$core$MutableString* $tmp430 = *(&local0);
org$frostlang$frostc$FieldDecl* $tmp431 = *(&local4);
frost$core$String* $tmp432 = org$frostlang$frostc$FieldDecl$get_asString$R$frost$core$String($tmp431);
frost$core$String* $tmp433 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp432, &$s434);
frost$core$MutableString$append$frost$core$String($tmp430, $tmp433);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
frost$core$Frost$unref$frost$core$Object$Q($tmp428);
org$frostlang$frostc$FieldDecl* $tmp435 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block13;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:187
frost$collections$Array** $tmp436 = &param0->methods;
frost$collections$Array* $tmp437 = *$tmp436;
ITable* $tmp438 = ((frost$collections$Iterable*) $tmp437)->$class->itable;
while ($tmp438->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp438 = $tmp438->next;
}
$fn440 $tmp439 = $tmp438->methods[0];
frost$collections$Iterator* $tmp441 = $tmp439(((frost$collections$Iterable*) $tmp437));
goto block16;
block16:;
ITable* $tmp442 = $tmp441->$class->itable;
while ($tmp442->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp442 = $tmp442->next;
}
$fn444 $tmp443 = $tmp442->methods[0];
frost$core$Bit $tmp445 = $tmp443($tmp441);
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block18; else goto block17;
block17:;
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp447 = $tmp441->$class->itable;
while ($tmp447->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp447 = $tmp447->next;
}
$fn449 $tmp448 = $tmp447->methods[1];
frost$core$Object* $tmp450 = $tmp448($tmp441);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp450)));
org$frostlang$frostc$MethodDecl* $tmp451 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) $tmp450);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:188
frost$core$MutableString* $tmp452 = *(&local0);
org$frostlang$frostc$MethodDecl* $tmp453 = *(&local5);
frost$core$String* $tmp454 = org$frostlang$frostc$MethodDecl$get_asString$R$frost$core$String($tmp453);
frost$core$String* $tmp455 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp454, &$s456);
frost$core$MutableString$append$frost$core$String($tmp452, $tmp455);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$core$Frost$unref$frost$core$Object$Q($tmp450);
org$frostlang$frostc$MethodDecl* $tmp457 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block16;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:190
frost$core$MutableString* $tmp458 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp458, &$s459);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:191
frost$core$MutableString* $tmp460 = *(&local0);
frost$core$String* $tmp461 = frost$core$MutableString$finish$R$frost$core$String($tmp460);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
frost$core$String* $tmp462 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp463 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp461;

}
void org$frostlang$frostc$ClassDecl$cleanup(org$frostlang$frostc$ClassDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp464 = &param0->source;
frost$io$File* $tmp465 = *$tmp464;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
frost$core$String** $tmp466 = &param0->name;
frost$core$String* $tmp467 = *$tmp466;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
org$frostlang$frostc$Type** $tmp468 = &param0->type;
org$frostlang$frostc$Type* $tmp469 = *$tmp468;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
frost$collections$MapView** $tmp470 = &param0->aliases;
frost$collections$MapView* $tmp471 = *$tmp470;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
frost$core$String** $tmp472 = &param0->doccomment;
frost$core$String* $tmp473 = *$tmp472;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
org$frostlang$frostc$Annotations** $tmp474 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp475 = *$tmp474;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
frost$collections$Array** $tmp476 = &param0->declaredSupers;
frost$collections$Array* $tmp477 = *$tmp476;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
org$frostlang$frostc$Type** $tmp478 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp479 = *$tmp478;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
frost$collections$Array** $tmp480 = &param0->rawInterfaces;
frost$collections$Array* $tmp481 = *$tmp480;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
frost$collections$List** $tmp482 = &param0->parameters;
frost$collections$List* $tmp483 = *$tmp482;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
frost$collections$Array** $tmp484 = &param0->fields;
frost$collections$Array* $tmp485 = *$tmp484;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
frost$collections$Array** $tmp486 = &param0->methods;
frost$collections$Array* $tmp487 = *$tmp486;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$collections$Array** $tmp488 = &param0->classes;
frost$collections$Array* $tmp489 = *$tmp488;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
frost$collections$Array** $tmp490 = &param0->choiceCases;
frost$collections$Array* $tmp491 = *$tmp490;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
frost$core$Weak** $tmp492 = &param0->owner;
frost$core$Weak* $tmp493 = *$tmp492;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
org$frostlang$frostc$SymbolTable** $tmp494 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp495 = *$tmp494;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
frost$collections$Array** $tmp496 = &param0->virtualMethods;
frost$collections$Array* $tmp497 = *$tmp496;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$collections$HashMap** $tmp498 = &param0->classResolutionCache;
frost$collections$HashMap* $tmp499 = *$tmp498;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
return;

}

