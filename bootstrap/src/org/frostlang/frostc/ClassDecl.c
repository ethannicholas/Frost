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
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/List.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/collections/Stack.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/String/Index.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/core/MutableString.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/MethodDecl.h"


static frost$core$String $s1;
org$frostlang$frostc$ClassDecl$class_type org$frostlang$frostc$ClassDecl$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$ClassDecl$get_asString$R$frost$core$String, org$frostlang$frostc$ClassDecl$cleanup, org$frostlang$frostc$ClassDecl$simpleName$R$frost$core$String, org$frostlang$frostc$ClassDecl$typeWithParameters$R$org$frostlang$frostc$Type, org$frostlang$frostc$ClassDecl$isSpecialization$R$frost$core$Bit} };

typedef frost$core$Bit (*$fn51)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn84)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn151)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn155)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn160)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn193)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn207)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn222)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn241)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn306)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn322)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn326)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn331)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn375)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn387)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn391)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn396)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn405)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn420)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn424)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn429)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn442)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn446)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn451)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn464)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn468)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn473)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 30, 3316826903706405826, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, 8593454616919477763, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x69\x6e\x69\x74\x28\x73\x6f\x75\x72\x63\x65\x3a\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x61\x6c\x69\x61\x73\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e\x2c\x20\x64\x6f\x63\x63\x6f\x6d\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2c\x20\x6b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x64\x65\x63\x6c\x61\x72\x65\x64\x53\x75\x70\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x2c\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x2c\x20\x70\x61\x72\x65\x6e\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65\x29", 542, 2920230446552599862, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, 8593454616919477763, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static frost$core$String $s359 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s402 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s415 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static frost$core$String $s436 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s480 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };

void org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable(org$frostlang$frostc$ClassDecl* param0, frost$io$File* param1, org$frostlang$frostc$Position param2, frost$collections$MapView* param3, frost$core$String* param4, org$frostlang$frostc$Annotations* param5, org$frostlang$frostc$ClassDecl$Kind param6, org$frostlang$frostc$Type* param7, frost$collections$ListView* param8, frost$collections$Array* param9, org$frostlang$frostc$SymbolTable* param10) {

frost$core$Bit local0;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
frost$core$Bit local3;
org$frostlang$frostc$Compiler$Resolution local4;
org$frostlang$frostc$Compiler$Resolution local5;
org$frostlang$frostc$ClassDecl$GenericParameter* local6 = NULL;
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
frost$core$Bit $tmp29 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp30 = &param0->symbolTableResolved;
*$tmp30 = $tmp29;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:106
frost$core$Bit $tmp31 = frost$core$Bit$init$builtin_bit(true);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:599
org$frostlang$frostc$Type$Kind* $tmp41 = &param7->typeKind;
org$frostlang$frostc$Type$Kind $tmp42 = *$tmp41;
org$frostlang$frostc$Type$Kind$wrapper* $tmp43;
$tmp43 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp43->value = $tmp42;
frost$core$Int64 $tmp44 = (frost$core$Int64) {11};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:599:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp45 = &(&local2)->$rawValue;
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
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Type.frost:599:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp54 = &param7->_subtypes;
org$frostlang$frostc$FixedArray* $tmp55 = *$tmp54;
frost$core$Bit $tmp56 = frost$core$Bit$init$builtin_bit($tmp55 != NULL);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp58 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s59, $tmp58);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp60 = &param7->_subtypes;
org$frostlang$frostc$FixedArray* $tmp61 = *$tmp60;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$core$Int64 $tmp62 = (frost$core$Int64) {0};
frost$core$Object* $tmp63 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp61, $tmp62);
// begin inline call to method org.frostlang.frostc.Type.Class():org.frostlang.frostc.Type from Type.frost:599:61
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:280
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp64 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp65 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp66 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp65);
org$frostlang$frostc$Position $tmp67 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp68 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp64, &$s69, $tmp66, $tmp67, $tmp68);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Type.frost:599:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp70 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp63))->name;
frost$core$String* $tmp71 = *$tmp70;
frost$core$String** $tmp72 = &((org$frostlang$frostc$Symbol*) $tmp64)->name;
frost$core$String* $tmp73 = *$tmp72;
frost$core$Bit $tmp74 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp71, $tmp73);
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Type$Kind* $tmp76 = &((org$frostlang$frostc$Type*) $tmp63)->typeKind;
org$frostlang$frostc$Type$Kind $tmp77 = *$tmp76;
org$frostlang$frostc$Type$Kind$wrapper* $tmp78;
$tmp78 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp78->value = $tmp77;
org$frostlang$frostc$Type$Kind* $tmp79 = &$tmp64->typeKind;
org$frostlang$frostc$Type$Kind $tmp80 = *$tmp79;
org$frostlang$frostc$Type$Kind$wrapper* $tmp81;
$tmp81 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp81->value = $tmp80;
ITable* $tmp82 = ((frost$core$Equatable*) $tmp78)->$class->itable;
while ($tmp82->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp82 = $tmp82->next;
}
$fn84 $tmp83 = $tmp82->methods[0];
frost$core$Bit $tmp85 = $tmp83(((frost$core$Equatable*) $tmp78), ((frost$core$Equatable*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp81)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp78)));
*(&local3) = $tmp85;
goto block15;
block14:;
*(&local3) = $tmp74;
goto block15;
block15:;
frost$core$Bit $tmp86 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Frost$unref$frost$core$Object$Q($tmp63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local0) = $tmp86;
goto block7;
block6:;
*(&local0) = $tmp52;
goto block7;
block7:;
frost$core$Bit $tmp87 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp48)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp43)));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from ClassDecl.frost:114:10
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp88 = $tmp87.value;
bool $tmp89 = !$tmp88;
frost$core$Bit $tmp90 = (frost$core$Bit) {$tmp89};
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp92 = (frost$core$Int64) {115};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s93, $tmp92, &$s94);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:118
org$frostlang$frostc$Position* $tmp95 = &param0->position;
*$tmp95 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:119
frost$core$String** $tmp96 = &((org$frostlang$frostc$Symbol*) param7)->name;
frost$core$String* $tmp97 = *$tmp96;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$core$String** $tmp98 = &param0->name;
frost$core$String* $tmp99 = *$tmp98;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$String** $tmp100 = &param0->name;
*$tmp100 = $tmp97;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:120
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
org$frostlang$frostc$Type** $tmp101 = &param0->type;
org$frostlang$frostc$Type* $tmp102 = *$tmp101;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
org$frostlang$frostc$Type** $tmp103 = &param0->type;
*$tmp103 = param7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:121
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp104 = &param0->source;
frost$io$File* $tmp105 = *$tmp104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$io$File** $tmp106 = &param0->source;
*$tmp106 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:122
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp107 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init$frost$collections$MapView$LTfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$GT($tmp107, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$MapView*) $tmp107)));
frost$collections$MapView** $tmp108 = &param0->aliases;
frost$collections$MapView* $tmp109 = *$tmp108;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$collections$MapView** $tmp110 = &param0->aliases;
*$tmp110 = ((frost$collections$MapView*) $tmp107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:123
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
frost$core$String** $tmp111 = &param0->doccomment;
frost$core$String* $tmp112 = *$tmp111;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$String** $tmp113 = &param0->doccomment;
*$tmp113 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:124
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param5));
org$frostlang$frostc$Annotations** $tmp114 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp115 = *$tmp114;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
org$frostlang$frostc$Annotations** $tmp116 = &param0->annotations;
*$tmp116 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:125
org$frostlang$frostc$ClassDecl$Kind* $tmp117 = &param0->classKind;
*$tmp117 = param6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:126
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp118 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp118, ((frost$collections$CollectionView*) param8));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$collections$Array** $tmp119 = &param0->declaredSupers;
frost$collections$Array* $tmp120 = *$tmp119;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$collections$Array** $tmp121 = &param0->declaredSupers;
*$tmp121 = $tmp118;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:127
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$List*) param9)));
frost$collections$List** $tmp122 = &param0->parameters;
frost$collections$List* $tmp123 = *$tmp122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$collections$List** $tmp124 = &param0->parameters;
*$tmp124 = ((frost$collections$List*) param9);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:128
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$SymbolTable));
org$frostlang$frostc$SymbolTable* $tmp125 = (org$frostlang$frostc$SymbolTable*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$SymbolTable$class);
org$frostlang$frostc$SymbolTable$init$org$frostlang$frostc$SymbolTable($tmp125, param10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
org$frostlang$frostc$SymbolTable** $tmp126 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp127 = *$tmp126;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
org$frostlang$frostc$SymbolTable** $tmp128 = &param0->symbolTable;
*$tmp128 = $tmp125;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:129
frost$core$Int64 $tmp129 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int64):org.frostlang.frostc.Compiler.Resolution from ClassDecl.frost:129:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
frost$core$Int64* $tmp130 = &(&local5)->$rawValue;
*$tmp130 = $tmp129;
org$frostlang$frostc$Compiler$Resolution $tmp131 = *(&local5);
*(&local4) = $tmp131;
org$frostlang$frostc$Compiler$Resolution $tmp132 = *(&local4);
org$frostlang$frostc$Compiler$Resolution* $tmp133 = &param0->resolved;
*$tmp133 = $tmp132;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:130
org$frostlang$frostc$SymbolTable** $tmp134 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp135 = *$tmp134;
frost$core$Weak** $tmp136 = &$tmp135->compiler;
frost$core$Weak* $tmp137 = *$tmp136;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ClassDecl.frost:130:20
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp138 = &$tmp137->_valid;
frost$core$Bit $tmp139 = *$tmp138;
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp141 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s142, $tmp141);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp143 = &$tmp137->value;
frost$core$Object* $tmp144 = *$tmp143;
frost$core$Frost$ref$frost$core$Object$Q($tmp144);
frost$collections$Stack** $tmp145 = &((org$frostlang$frostc$Compiler*) $tmp144)->currentClass;
frost$collections$Stack* $tmp146 = *$tmp145;
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from ClassDecl.frost:130:47
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:16
frost$collections$Array** $tmp147 = &$tmp146->contents;
frost$collections$Array* $tmp148 = *$tmp147;
frost$collections$Array$add$frost$collections$Array$T($tmp148, ((frost$core$Object*) param0));
frost$core$Frost$unref$frost$core$Object$Q($tmp144);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:131
ITable* $tmp149 = ((frost$collections$Iterable*) param9)->$class->itable;
while ($tmp149->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp149 = $tmp149->next;
}
$fn151 $tmp150 = $tmp149->methods[0];
frost$collections$Iterator* $tmp152 = $tmp150(((frost$collections$Iterable*) param9));
goto block23;
block23:;
ITable* $tmp153 = $tmp152->$class->itable;
while ($tmp153->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp153 = $tmp153->next;
}
$fn155 $tmp154 = $tmp153->methods[0];
frost$core$Bit $tmp156 = $tmp154($tmp152);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block25; else goto block24;
block24:;
*(&local6) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
ITable* $tmp158 = $tmp152->$class->itable;
while ($tmp158->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp158 = $tmp158->next;
}
$fn160 $tmp159 = $tmp158->methods[1];
frost$core$Object* $tmp161 = $tmp159($tmp152);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp161)));
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp162 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local6) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp161);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:132
org$frostlang$frostc$SymbolTable** $tmp163 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp164 = *$tmp163;
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp165 = *(&local6);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from ClassDecl.frost:132:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp166 = &((org$frostlang$frostc$Symbol*) $tmp165)->name;
frost$core$String* $tmp167 = *$tmp166;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp164, ((org$frostlang$frostc$Symbol*) $tmp165), $tmp167);
frost$core$Frost$unref$frost$core$Object$Q($tmp161);
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp168 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local6) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
goto block23;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:134
org$frostlang$frostc$SymbolTable** $tmp169 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp170 = *$tmp169;
frost$core$Weak** $tmp171 = &$tmp170->compiler;
frost$core$Weak* $tmp172 = *$tmp171;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ClassDecl.frost:134:27
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp173 = &$tmp172->_valid;
frost$core$Bit $tmp174 = *$tmp173;
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block29; else goto block30;
block30:;
frost$core$Int64 $tmp176 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s177, $tmp176);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp178 = &$tmp172->value;
frost$core$Object* $tmp179 = *$tmp178;
frost$core$Frost$ref$frost$core$Object$Q($tmp179);
frost$collections$Stack** $tmp180 = &((org$frostlang$frostc$Compiler*) $tmp179)->currentClass;
frost$collections$Stack* $tmp181 = *$tmp180;
frost$core$Int64 $tmp182 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from ClassDecl.frost:134:49
frost$core$Int64 $tmp183 = (frost$core$Int64) {0};
int64_t $tmp184 = $tmp182.value;
int64_t $tmp185 = $tmp183.value;
bool $tmp186 = $tmp184 >= $tmp185;
frost$core$Bit $tmp187 = (frost$core$Bit) {$tmp186};
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block34; else goto block33;
block34:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp189 = &$tmp181->contents;
frost$collections$Array* $tmp190 = *$tmp189;
ITable* $tmp191 = ((frost$collections$CollectionView*) $tmp190)->$class->itable;
while ($tmp191->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp191 = $tmp191->next;
}
$fn193 $tmp192 = $tmp191->methods[0];
frost$core$Int64 $tmp194 = $tmp192(((frost$collections$CollectionView*) $tmp190));
int64_t $tmp195 = $tmp182.value;
int64_t $tmp196 = $tmp194.value;
bool $tmp197 = $tmp195 < $tmp196;
frost$core$Bit $tmp198 = (frost$core$Bit) {$tmp197};
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp200 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s201, $tmp200, &$s202);
abort(); // unreachable
block32:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp203 = &$tmp181->contents;
frost$collections$Array* $tmp204 = *$tmp203;
ITable* $tmp205 = ((frost$collections$CollectionView*) $tmp204)->$class->itable;
while ($tmp205->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp205 = $tmp205->next;
}
$fn207 $tmp206 = $tmp205->methods[0];
frost$core$Int64 $tmp208 = $tmp206(((frost$collections$CollectionView*) $tmp204));
int64_t $tmp209 = $tmp208.value;
int64_t $tmp210 = $tmp182.value;
bool $tmp211 = $tmp209 > $tmp210;
frost$core$Bit $tmp212 = (frost$core$Bit) {$tmp211};
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp214 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s215, $tmp214);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp216 = &$tmp181->contents;
frost$collections$Array* $tmp217 = *$tmp216;
frost$collections$Array** $tmp218 = &$tmp181->contents;
frost$collections$Array* $tmp219 = *$tmp218;
ITable* $tmp220 = ((frost$collections$CollectionView*) $tmp219)->$class->itable;
while ($tmp220->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp220 = $tmp220->next;
}
$fn222 $tmp221 = $tmp220->methods[0];
frost$core$Int64 $tmp223 = $tmp221(((frost$collections$CollectionView*) $tmp219));
frost$core$Int64 $tmp224 = (frost$core$Int64) {1};
int64_t $tmp225 = $tmp223.value;
int64_t $tmp226 = $tmp224.value;
int64_t $tmp227 = $tmp225 - $tmp226;
frost$core$Int64 $tmp228 = (frost$core$Int64) {$tmp227};
int64_t $tmp229 = $tmp228.value;
int64_t $tmp230 = $tmp182.value;
int64_t $tmp231 = $tmp229 - $tmp230;
frost$core$Int64 $tmp232 = (frost$core$Int64) {$tmp231};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp233 = (frost$core$Int64) {0};
int64_t $tmp234 = $tmp232.value;
int64_t $tmp235 = $tmp233.value;
bool $tmp236 = $tmp234 >= $tmp235;
frost$core$Bit $tmp237 = (frost$core$Bit) {$tmp236};
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block41; else goto block40;
block41:;
ITable* $tmp239 = ((frost$collections$CollectionView*) $tmp217)->$class->itable;
while ($tmp239->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp239 = $tmp239->next;
}
$fn241 $tmp240 = $tmp239->methods[0];
frost$core$Int64 $tmp242 = $tmp240(((frost$collections$CollectionView*) $tmp217));
int64_t $tmp243 = $tmp232.value;
int64_t $tmp244 = $tmp242.value;
bool $tmp245 = $tmp243 < $tmp244;
frost$core$Bit $tmp246 = (frost$core$Bit) {$tmp245};
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp248 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s249, $tmp248, &$s250);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp251 = &$tmp217->data;
frost$core$Object** $tmp252 = *$tmp251;
int64_t $tmp253 = $tmp232.value;
frost$core$Object* $tmp254 = $tmp252[$tmp253];
frost$core$Frost$ref$frost$core$Object$Q($tmp254);
frost$core$Frost$ref$frost$core$Object$Q($tmp254);
frost$core$Frost$unref$frost$core$Object$Q($tmp254);
bool $tmp255 = ((org$frostlang$frostc$ClassDecl*) $tmp254) == param0;
frost$core$Bit $tmp256 = frost$core$Bit$init$builtin_bit($tmp255);
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp258 = (frost$core$Int64) {134};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s259, $tmp258);
abort(); // unreachable
block42:;
frost$core$Frost$unref$frost$core$Object$Q($tmp254);
frost$core$Frost$unref$frost$core$Object$Q($tmp179);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:135
org$frostlang$frostc$SymbolTable** $tmp260 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp261 = *$tmp260;
frost$core$Weak** $tmp262 = &$tmp261->compiler;
frost$core$Weak* $tmp263 = *$tmp262;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from ClassDecl.frost:135:20
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp264 = &$tmp263->_valid;
frost$core$Bit $tmp265 = *$tmp264;
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block46; else goto block47;
block47:;
frost$core$Int64 $tmp267 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s268, $tmp267);
abort(); // unreachable
block46:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp269 = &$tmp263->value;
frost$core$Object* $tmp270 = *$tmp269;
frost$core$Frost$ref$frost$core$Object$Q($tmp270);
frost$collections$Stack** $tmp271 = &((org$frostlang$frostc$Compiler*) $tmp270)->currentClass;
frost$collections$Stack* $tmp272 = *$tmp271;
frost$core$Object* $tmp273 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp272);
frost$core$Frost$unref$frost$core$Object$Q($tmp273);
frost$core$Frost$unref$frost$core$Object$Q($tmp270);
return;

}
void org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable(org$frostlang$frostc$ClassDecl* param0, frost$io$File* param1, org$frostlang$frostc$Position param2, frost$collections$MapView* param3, frost$core$String* param4, org$frostlang$frostc$Annotations* param5, org$frostlang$frostc$ClassDecl$Kind param6, frost$core$String* param7, frost$collections$ListView* param8, frost$collections$Array* param9, org$frostlang$frostc$SymbolTable* param10) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:141
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp274 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp275 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from ClassDecl.frost:142:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp276 = &(&local1)->$rawValue;
*$tmp276 = $tmp275;
org$frostlang$frostc$Type$Kind $tmp277 = *(&local1);
*(&local0) = $tmp277;
org$frostlang$frostc$Type$Kind $tmp278 = *(&local0);
org$frostlang$frostc$Position $tmp279 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp280 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp274, param7, $tmp278, $tmp279, $tmp280);
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable(param0, param1, param2, param3, param4, param5, param6, $tmp274, param8, param9, param10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
return;

}
frost$core$String* org$frostlang$frostc$ClassDecl$simpleName$R$frost$core$String(org$frostlang$frostc$ClassDecl* param0) {

frost$core$String$Index$nullable local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:146
frost$core$String** $tmp281 = &param0->name;
frost$core$String* $tmp282 = *$tmp281;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from ClassDecl.frost:146:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:229
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.stub:229:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:287
frost$core$Int64* $tmp283 = &$tmp282->_length;
frost$core$Int64 $tmp284 = *$tmp283;
frost$core$String$Index $tmp285 = frost$core$String$Index$init$frost$core$Int64($tmp284);
frost$core$String$Index$nullable $tmp286 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp282, &$s287, $tmp285);
*(&local0) = $tmp286;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:147
frost$core$String$Index$nullable $tmp288 = *(&local0);
frost$core$Bit $tmp289 = frost$core$Bit$init$builtin_bit(!$tmp288.nonnull);
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:148
frost$core$String** $tmp291 = &param0->name;
frost$core$String* $tmp292 = *$tmp291;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
return $tmp292;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:150
frost$core$String** $tmp293 = &param0->name;
frost$core$String* $tmp294 = *$tmp293;
frost$core$String** $tmp295 = &param0->name;
frost$core$String* $tmp296 = *$tmp295;
frost$core$String$Index$nullable $tmp297 = *(&local0);
frost$core$String$Index $tmp298 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp296, ((frost$core$String$Index) $tmp297.value));
frost$core$Bit $tmp299 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp300 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp298, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp299);
frost$core$String* $tmp301 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp294, $tmp300);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
return $tmp301;

}
org$frostlang$frostc$Type* org$frostlang$frostc$ClassDecl$typeWithParameters$R$org$frostlang$frostc$Type(org$frostlang$frostc$ClassDecl* param0) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ClassDecl$GenericParameter* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:154
frost$collections$List** $tmp302 = &param0->parameters;
frost$collections$List* $tmp303 = *$tmp302;
ITable* $tmp304 = ((frost$collections$CollectionView*) $tmp303)->$class->itable;
while ($tmp304->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp304 = $tmp304->next;
}
$fn306 $tmp305 = $tmp304->methods[0];
frost$core$Int64 $tmp307 = $tmp305(((frost$collections$CollectionView*) $tmp303));
frost$core$Int64 $tmp308 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from ClassDecl.frost:154:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp309 = $tmp307.value;
int64_t $tmp310 = $tmp308.value;
bool $tmp311 = $tmp309 == $tmp310;
frost$core$Bit $tmp312 = frost$core$Bit$init$builtin_bit($tmp311);
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:155
org$frostlang$frostc$Type** $tmp314 = &param0->type;
org$frostlang$frostc$Type* $tmp315 = *$tmp314;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
return $tmp315;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:157
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp316 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp316);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
frost$collections$Array* $tmp317 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
*(&local0) = $tmp316;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:158
frost$collections$List** $tmp318 = &param0->parameters;
frost$collections$List* $tmp319 = *$tmp318;
ITable* $tmp320 = ((frost$collections$Iterable*) $tmp319)->$class->itable;
while ($tmp320->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp320 = $tmp320->next;
}
$fn322 $tmp321 = $tmp320->methods[0];
frost$collections$Iterator* $tmp323 = $tmp321(((frost$collections$Iterable*) $tmp319));
goto block4;
block4:;
ITable* $tmp324 = $tmp323->$class->itable;
while ($tmp324->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp324 = $tmp324->next;
}
$fn326 $tmp325 = $tmp324->methods[0];
frost$core$Bit $tmp327 = $tmp325($tmp323);
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block6; else goto block5;
block5:;
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
ITable* $tmp329 = $tmp323->$class->itable;
while ($tmp329->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp329 = $tmp329->next;
}
$fn331 $tmp330 = $tmp329->methods[1];
frost$core$Object* $tmp332 = $tmp330($tmp323);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp332)));
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp333 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) $tmp332);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:159
frost$collections$Array* $tmp334 = *(&local0);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp335 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp336 = *(&local1);
org$frostlang$frostc$Type$init$org$frostlang$frostc$ClassDecl$GenericParameter($tmp335, $tmp336);
frost$collections$Array$add$frost$collections$Array$T($tmp334, ((frost$core$Object*) $tmp335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$core$Frost$unref$frost$core$Object$Q($tmp332);
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp337 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
*(&local1) = ((org$frostlang$frostc$ClassDecl$GenericParameter*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:161
org$frostlang$frostc$Type** $tmp338 = &param0->type;
org$frostlang$frostc$Type* $tmp339 = *$tmp338;
frost$collections$Array* $tmp340 = *(&local0);
org$frostlang$frostc$Type* $tmp341 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp339, ((frost$collections$ListView*) $tmp340));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
frost$collections$Array* $tmp342 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp341;

}
frost$core$Bit org$frostlang$frostc$ClassDecl$isSpecialization$R$frost$core$Bit(org$frostlang$frostc$ClassDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:165
frost$core$String** $tmp343 = &param0->name;
frost$core$String* $tmp344 = *$tmp343;
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from ClassDecl.frost:165:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:219
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.stub:219:17
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:223
frost$core$String$Index $tmp345 = frost$core$String$get_start$R$frost$core$String$Index($tmp344);
frost$core$String$Index$nullable $tmp346 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp344, &$s347, $tmp345);
frost$core$Bit $tmp348 = frost$core$Bit$init$builtin_bit($tmp346.nonnull);
return $tmp348;

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
frost$core$MutableString* $tmp349 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Annotations** $tmp350 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp351 = *$tmp350;
frost$core$String* $tmp352 = org$frostlang$frostc$Annotations$get_asString$R$frost$core$String($tmp351);
frost$core$String* $tmp353 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp352, &$s354);
frost$core$String** $tmp355 = &param0->name;
frost$core$String* $tmp356 = *$tmp355;
frost$core$String* $tmp357 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp353, $tmp356);
frost$core$String* $tmp358 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp357, &$s359);
frost$core$MutableString$init$frost$core$String($tmp349, $tmp358);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
frost$core$MutableString* $tmp360 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local0) = $tmp349;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:171
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s361));
frost$core$String* $tmp362 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local1) = &$s363;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:172
org$frostlang$frostc$Type** $tmp364 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp365 = *$tmp364;
frost$core$Bit $tmp366 = frost$core$Bit$init$builtin_bit($tmp365 != NULL);
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:173
frost$core$MutableString* $tmp368 = *(&local0);
frost$core$String* $tmp369 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ClassDecl.frost:173:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
frost$core$String* $tmp370 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp369, &$s371);
org$frostlang$frostc$Type** $tmp372 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp373 = *$tmp372;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ClassDecl.frost:173:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn375 $tmp374 = ($fn375) ((frost$core$Object*) $tmp373)->$class->vtable[0];
frost$core$String* $tmp376 = $tmp374(((frost$core$Object*) $tmp373));
frost$core$String* $tmp377 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp370, $tmp376);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$core$String* $tmp378 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp377, &$s379);
frost$core$MutableString$append$frost$core$String($tmp368, $tmp378);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:174
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s380));
frost$core$String* $tmp381 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local1) = &$s382;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:176
frost$collections$Array** $tmp383 = &param0->rawInterfaces;
frost$collections$Array* $tmp384 = *$tmp383;
ITable* $tmp385 = ((frost$collections$Iterable*) $tmp384)->$class->itable;
while ($tmp385->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp385 = $tmp385->next;
}
$fn387 $tmp386 = $tmp385->methods[0];
frost$collections$Iterator* $tmp388 = $tmp386(((frost$collections$Iterable*) $tmp384));
goto block5;
block5:;
ITable* $tmp389 = $tmp388->$class->itable;
while ($tmp389->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp389 = $tmp389->next;
}
$fn391 $tmp390 = $tmp389->methods[0];
frost$core$Bit $tmp392 = $tmp390($tmp388);
bool $tmp393 = $tmp392.value;
if ($tmp393) goto block7; else goto block6;
block6:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp394 = $tmp388->$class->itable;
while ($tmp394->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp394 = $tmp394->next;
}
$fn396 $tmp395 = $tmp394->methods[1];
frost$core$Object* $tmp397 = $tmp395($tmp388);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp397)));
org$frostlang$frostc$Type* $tmp398 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp397);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:177
frost$core$MutableString* $tmp399 = *(&local0);
frost$core$String* $tmp400 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from ClassDecl.frost:177:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
frost$core$String* $tmp401 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp400, &$s402);
org$frostlang$frostc$Type* $tmp403 = *(&local2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from ClassDecl.frost:177:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn405 $tmp404 = ($fn405) ((frost$core$Object*) $tmp403)->$class->vtable[0];
frost$core$String* $tmp406 = $tmp404(((frost$core$Object*) $tmp403));
frost$core$String* $tmp407 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp401, $tmp406);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
frost$core$String* $tmp408 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp407, &$s409);
frost$core$MutableString$append$frost$core$String($tmp399, $tmp408);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:178
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s410));
frost$core$String* $tmp411 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
*(&local1) = &$s412;
frost$core$Frost$unref$frost$core$Object$Q($tmp397);
org$frostlang$frostc$Type* $tmp413 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:180
frost$core$MutableString* $tmp414 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp414, &$s415);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:181
frost$collections$Array** $tmp416 = &param0->classes;
frost$collections$Array* $tmp417 = *$tmp416;
ITable* $tmp418 = ((frost$collections$Iterable*) $tmp417)->$class->itable;
while ($tmp418->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp418 = $tmp418->next;
}
$fn420 $tmp419 = $tmp418->methods[0];
frost$collections$Iterator* $tmp421 = $tmp419(((frost$collections$Iterable*) $tmp417));
goto block10;
block10:;
ITable* $tmp422 = $tmp421->$class->itable;
while ($tmp422->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp422 = $tmp422->next;
}
$fn424 $tmp423 = $tmp422->methods[0];
frost$core$Bit $tmp425 = $tmp423($tmp421);
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block12; else goto block11;
block11:;
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp427 = $tmp421->$class->itable;
while ($tmp427->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp427 = $tmp427->next;
}
$fn429 $tmp428 = $tmp427->methods[1];
frost$core$Object* $tmp430 = $tmp428($tmp421);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp430)));
org$frostlang$frostc$ClassDecl* $tmp431 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
*(&local3) = ((org$frostlang$frostc$ClassDecl*) $tmp430);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:182
frost$core$MutableString* $tmp432 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp433 = *(&local3);
frost$core$String* $tmp434 = org$frostlang$frostc$ClassDecl$get_asString$R$frost$core$String($tmp433);
frost$core$String* $tmp435 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp434, &$s436);
frost$core$MutableString$append$frost$core$String($tmp432, $tmp435);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
frost$core$Frost$unref$frost$core$Object$Q($tmp430);
org$frostlang$frostc$ClassDecl* $tmp437 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block10;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:184
frost$collections$Array** $tmp438 = &param0->fields;
frost$collections$Array* $tmp439 = *$tmp438;
ITable* $tmp440 = ((frost$collections$Iterable*) $tmp439)->$class->itable;
while ($tmp440->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp440 = $tmp440->next;
}
$fn442 $tmp441 = $tmp440->methods[0];
frost$collections$Iterator* $tmp443 = $tmp441(((frost$collections$Iterable*) $tmp439));
goto block13;
block13:;
ITable* $tmp444 = $tmp443->$class->itable;
while ($tmp444->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp444 = $tmp444->next;
}
$fn446 $tmp445 = $tmp444->methods[0];
frost$core$Bit $tmp447 = $tmp445($tmp443);
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block15; else goto block14;
block14:;
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp449 = $tmp443->$class->itable;
while ($tmp449->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp449 = $tmp449->next;
}
$fn451 $tmp450 = $tmp449->methods[1];
frost$core$Object* $tmp452 = $tmp450($tmp443);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp452)));
org$frostlang$frostc$FieldDecl* $tmp453 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) $tmp452);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:185
frost$core$MutableString* $tmp454 = *(&local0);
org$frostlang$frostc$FieldDecl* $tmp455 = *(&local4);
frost$core$String* $tmp456 = org$frostlang$frostc$FieldDecl$get_asString$R$frost$core$String($tmp455);
frost$core$String* $tmp457 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp456, &$s458);
frost$core$MutableString$append$frost$core$String($tmp454, $tmp457);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
frost$core$Frost$unref$frost$core$Object$Q($tmp452);
org$frostlang$frostc$FieldDecl* $tmp459 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
*(&local4) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block13;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:187
frost$collections$Array** $tmp460 = &param0->methods;
frost$collections$Array* $tmp461 = *$tmp460;
ITable* $tmp462 = ((frost$collections$Iterable*) $tmp461)->$class->itable;
while ($tmp462->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp462 = $tmp462->next;
}
$fn464 $tmp463 = $tmp462->methods[0];
frost$collections$Iterator* $tmp465 = $tmp463(((frost$collections$Iterable*) $tmp461));
goto block16;
block16:;
ITable* $tmp466 = $tmp465->$class->itable;
while ($tmp466->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp466 = $tmp466->next;
}
$fn468 $tmp467 = $tmp466->methods[0];
frost$core$Bit $tmp469 = $tmp467($tmp465);
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block18; else goto block17;
block17:;
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp471 = $tmp465->$class->itable;
while ($tmp471->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp471 = $tmp471->next;
}
$fn473 $tmp472 = $tmp471->methods[1];
frost$core$Object* $tmp474 = $tmp472($tmp465);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp474)));
org$frostlang$frostc$MethodDecl* $tmp475 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) $tmp474);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:188
frost$core$MutableString* $tmp476 = *(&local0);
org$frostlang$frostc$MethodDecl* $tmp477 = *(&local5);
frost$core$String* $tmp478 = org$frostlang$frostc$MethodDecl$get_asString$R$frost$core$String($tmp477);
frost$core$String* $tmp479 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp478, &$s480);
frost$core$MutableString$append$frost$core$String($tmp476, $tmp479);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
frost$core$Frost$unref$frost$core$Object$Q($tmp474);
org$frostlang$frostc$MethodDecl* $tmp481 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block16;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:190
frost$core$MutableString* $tmp482 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp482, &$s483);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:191
frost$core$MutableString* $tmp484 = *(&local0);
frost$core$String* $tmp485 = frost$core$MutableString$finish$R$frost$core$String($tmp484);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
frost$core$String* $tmp486 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp487 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp485;

}
void org$frostlang$frostc$ClassDecl$cleanup(org$frostlang$frostc$ClassDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp488 = &param0->source;
frost$io$File* $tmp489 = *$tmp488;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
frost$core$String** $tmp490 = &param0->name;
frost$core$String* $tmp491 = *$tmp490;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
org$frostlang$frostc$Type** $tmp492 = &param0->type;
org$frostlang$frostc$Type* $tmp493 = *$tmp492;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
frost$collections$MapView** $tmp494 = &param0->aliases;
frost$collections$MapView* $tmp495 = *$tmp494;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
frost$core$String** $tmp496 = &param0->doccomment;
frost$core$String* $tmp497 = *$tmp496;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
org$frostlang$frostc$Annotations** $tmp498 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp499 = *$tmp498;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
frost$collections$Array** $tmp500 = &param0->declaredSupers;
frost$collections$Array* $tmp501 = *$tmp500;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
org$frostlang$frostc$Type** $tmp502 = &param0->rawSuper;
org$frostlang$frostc$Type* $tmp503 = *$tmp502;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$collections$Array** $tmp504 = &param0->rawInterfaces;
frost$collections$Array* $tmp505 = *$tmp504;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
frost$collections$List** $tmp506 = &param0->parameters;
frost$collections$List* $tmp507 = *$tmp506;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
frost$collections$Array** $tmp508 = &param0->fields;
frost$collections$Array* $tmp509 = *$tmp508;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
frost$collections$Array** $tmp510 = &param0->methods;
frost$collections$Array* $tmp511 = *$tmp510;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
frost$collections$Array** $tmp512 = &param0->classes;
frost$collections$Array* $tmp513 = *$tmp512;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
frost$collections$Array** $tmp514 = &param0->choiceCases;
frost$collections$Array* $tmp515 = *$tmp514;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
frost$core$Weak** $tmp516 = &param0->owner;
frost$core$Weak* $tmp517 = *$tmp516;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
org$frostlang$frostc$SymbolTable** $tmp518 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp519 = *$tmp518;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
frost$collections$Array** $tmp520 = &param0->virtualMethods;
frost$collections$Array* $tmp521 = *$tmp520;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
frost$collections$HashMap** $tmp522 = &param0->classResolutionCache;
frost$collections$HashMap* $tmp523 = *$tmp522;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
return;

}

