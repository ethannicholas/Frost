#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Compiler/Resolution.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Weak.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Equatable.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/Annotations/Expression.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/expression/Unary/Operator.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"


static frost$core$String $s1;
org$frostlang$frostc$MethodDecl$class_type org$frostlang$frostc$MethodDecl$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { org$frostlang$frostc$MethodDecl$get_asString$R$frost$core$String, org$frostlang$frostc$MethodDecl$cleanup, org$frostlang$frostc$MethodDecl$get_heritable$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$isInstance$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$matches$org$frostlang$frostc$MethodDecl$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int64, org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type, org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String, org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String} };

typedef frost$core$Int64 (*$fn17)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn48)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn52)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn57)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn85)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn115)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn164)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn177)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn189)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn199)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn207)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn213)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn226)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn258)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn285)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn303)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn341)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn345)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn350)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn407)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn441)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn448)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn452)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn457)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn475)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn508)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn512)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn517)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn525)(frost$core$Object*);
typedef frost$core$Bit (*$fn540)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn547)(frost$core$Object*);
typedef frost$core$String* (*$fn651)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 31, -660996163121683783, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -8677435737112033532, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x69\x6e\x69\x74\x28\x6f\x77\x6e\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x64\x6f\x63\x63\x6f\x6d\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2c\x20\x6d\x65\x74\x68\x6f\x64\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64\x2c\x20\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x2c\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x2c\x20\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x62\x6f\x64\x79\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x29", 569, -1725580904474273109, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -8677435737112033532, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s499 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s501 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s503 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s527 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s529 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s537 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 3563412735833858527, NULL };
static frost$core$String $s550 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s552 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s578 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, -7952910774154584656, NULL };
static frost$core$String $s580 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s597 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s603 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 7226600790104464427, NULL };
static frost$core$String $s605 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s609 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s622 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s628 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s632 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s634 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -8677435737112033532, NULL };
static frost$core$String $s643 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s647 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s655 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };

void org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$MethodDecl* param0, org$frostlang$frostc$ClassDecl* param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$Annotations* param4, org$frostlang$frostc$MethodDecl$Kind param5, frost$core$String* param6, frost$collections$Array* param7, frost$collections$Array* param8, org$frostlang$frostc$Type* param9, org$frostlang$frostc$FixedArray* param10) {

org$frostlang$frostc$Compiler$Resolution local0;
org$frostlang$frostc$Compiler$Resolution local1;
org$frostlang$frostc$Symbol$Kind local2;
org$frostlang$frostc$Symbol$Kind local3;
org$frostlang$frostc$MethodDecl$Parameter* local4 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:66
frost$core$Int64 $tmp2 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int64):org.frostlang.frostc.Compiler.Resolution from MethodDecl.frost:66:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:47
frost$core$Int64* $tmp3 = &(&local1)->$rawValue;
*$tmp3 = $tmp2;
org$frostlang$frostc$Compiler$Resolution $tmp4 = *(&local1);
*(&local0) = $tmp4;
org$frostlang$frostc$Compiler$Resolution $tmp5 = *(&local0);
org$frostlang$frostc$Compiler$Resolution* $tmp6 = &param0->resolved;
*$tmp6 = $tmp5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:68
frost$core$Bit $tmp7 = (frost$core$Bit) {false};
frost$core$Bit* $tmp8 = &param0->overrideKnown;
*$tmp8 = $tmp7;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:71
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp9 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp9, ((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$Weak** $tmp10 = &param0->overridden;
frost$core$Weak* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$core$Weak** $tmp12 = &param0->overridden;
*$tmp12 = $tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$Bit $tmp13 = (frost$core$Bit) {param7 == NULL};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block2; else goto block4;
block4:;
ITable* $tmp15 = ((frost$collections$CollectionView*) param7)->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp15 = $tmp15->next;
}
$fn17 $tmp16 = $tmp15->methods[0];
frost$core$Int64 $tmp18 = $tmp16(((frost$collections$CollectionView*) param7));
frost$core$Int64 $tmp19 = (frost$core$Int64) {0u};
int64_t $tmp20 = $tmp18.value;
int64_t $tmp21 = $tmp19.value;
bool $tmp22 = $tmp20 > $tmp21;
frost$core$Bit $tmp23 = (frost$core$Bit) {$tmp22};
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp25 = (frost$core$Int64) {82u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s26, $tmp25, &$s27);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:86
frost$core$Int64 $tmp28 = (frost$core$Int64) {5u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Symbol.Kind from MethodDecl.frost:86:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int64* $tmp29 = &(&local3)->$rawValue;
*$tmp29 = $tmp28;
org$frostlang$frostc$Symbol$Kind $tmp30 = *(&local3);
*(&local2) = $tmp30;
org$frostlang$frostc$Symbol$Kind $tmp31 = *(&local2);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp31, param2, param6);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:87
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp32 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp32, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$Weak** $tmp33 = &param0->owner;
frost$core$Weak* $tmp34 = *$tmp33;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$Weak** $tmp35 = &param0->owner;
*$tmp35 = $tmp32;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:88
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp36 = &param0->doccomment;
frost$core$String* $tmp37 = *$tmp36;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$String** $tmp38 = &param0->doccomment;
*$tmp38 = param3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:89
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$Annotations** $tmp39 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp40 = *$tmp39;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
org$frostlang$frostc$Annotations** $tmp41 = &param0->annotations;
*$tmp41 = param4;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:90
org$frostlang$frostc$MethodDecl$Kind* $tmp42 = &param0->methodKind;
*$tmp42 = param5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:91
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
frost$collections$Array** $tmp43 = &param0->genericParameters;
frost$collections$Array* $tmp44 = *$tmp43;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$collections$Array** $tmp45 = &param0->genericParameters;
*$tmp45 = param7;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:92
ITable* $tmp46 = ((frost$collections$Iterable*) param8)->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp46 = $tmp46->next;
}
$fn48 $tmp47 = $tmp46->methods[0];
frost$collections$Iterator* $tmp49 = $tmp47(((frost$collections$Iterable*) param8));
goto block6;
block6:;
ITable* $tmp50 = $tmp49->$class->itable;
while ($tmp50->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp50 = $tmp50->next;
}
$fn52 $tmp51 = $tmp50->methods[0];
frost$core$Bit $tmp53 = $tmp51($tmp49);
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block8; else goto block7;
block7:;
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp55 = $tmp49->$class->itable;
while ($tmp55->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp55 = $tmp55->next;
}
$fn57 $tmp56 = $tmp55->methods[1];
frost$core$Object* $tmp58 = $tmp56($tmp49);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp58)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp59 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp58);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:93
org$frostlang$frostc$MethodDecl$Parameter* $tmp60 = *(&local4);
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp61 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp61, ((frost$core$Object*) param0));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$core$Weak** $tmp62 = &$tmp60->owner;
frost$core$Weak* $tmp63 = *$tmp62;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$Weak** $tmp64 = &$tmp60->owner;
*$tmp64 = $tmp61;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$core$Frost$unref$frost$core$Object$Q($tmp58);
org$frostlang$frostc$MethodDecl$Parameter* $tmp65 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:95
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
frost$collections$Array** $tmp66 = &param0->parameters;
frost$collections$Array* $tmp67 = *$tmp66;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$collections$Array** $tmp68 = &param0->parameters;
*$tmp68 = param8;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:96
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$Type** $tmp69 = &param0->returnType;
org$frostlang$frostc$Type* $tmp70 = *$tmp69;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
org$frostlang$frostc$Type** $tmp71 = &param0->returnType;
*$tmp71 = param9;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:97
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param10));
org$frostlang$frostc$FixedArray** $tmp72 = &param0->body;
org$frostlang$frostc$FixedArray* $tmp73 = *$tmp72;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
org$frostlang$frostc$FixedArray** $tmp74 = &param0->body;
*$tmp74 = param10;
return;

}
frost$core$Bit org$frostlang$frostc$MethodDecl$get_heritable$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* param0) {

org$frostlang$frostc$MethodDecl$Kind local0;
org$frostlang$frostc$MethodDecl$Kind local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:102
org$frostlang$frostc$MethodDecl$Kind* $tmp75 = &param0->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp76 = *$tmp75;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp77;
$tmp77 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp77->value = $tmp76;
frost$core$Int64 $tmp78 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from MethodDecl.frost:102:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp79 = &(&local1)->$rawValue;
*$tmp79 = $tmp78;
org$frostlang$frostc$MethodDecl$Kind $tmp80 = *(&local1);
*(&local0) = $tmp80;
org$frostlang$frostc$MethodDecl$Kind $tmp81 = *(&local0);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp82;
$tmp82 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp82->value = $tmp81;
ITable* $tmp83 = ((frost$core$Equatable*) $tmp77)->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp83 = $tmp83->next;
}
$fn85 $tmp84 = $tmp83->methods[1];
frost$core$Bit $tmp86 = $tmp84(((frost$core$Equatable*) $tmp77), ((frost$core$Equatable*) $tmp82));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp82)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp77)));
return $tmp86;

}
frost$core$Bit org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
org$frostlang$frostc$MethodDecl$Kind local2;
org$frostlang$frostc$MethodDecl$Kind local3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:106
org$frostlang$frostc$Annotations** $tmp87 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp88 = *$tmp87;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from MethodDecl.frost:106:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp89 = &$tmp88->flags;
frost$core$Int64 $tmp90 = *$tmp89;
frost$core$Int64 $tmp91 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:173
int64_t $tmp92 = $tmp90.value;
int64_t $tmp93 = $tmp91.value;
int64_t $tmp94 = $tmp92 & $tmp93;
frost$core$Int64 $tmp95 = (frost$core$Int64) {$tmp94};
frost$core$Int64 $tmp96 = (frost$core$Int64) {0u};
int64_t $tmp97 = $tmp95.value;
int64_t $tmp98 = $tmp96.value;
bool $tmp99 = $tmp97 != $tmp98;
frost$core$Bit $tmp100 = (frost$core$Bit) {$tmp99};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodDecl.frost:106:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp101 = $tmp100.value;
bool $tmp102 = !$tmp101;
frost$core$Bit $tmp103 = (frost$core$Bit) {$tmp102};
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block4; else goto block5;
block4:;
org$frostlang$frostc$MethodDecl$Kind* $tmp105 = &param0->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp106 = *$tmp105;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp107;
$tmp107 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp107->value = $tmp106;
frost$core$Int64 $tmp108 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from MethodDecl.frost:106:57
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp109 = &(&local3)->$rawValue;
*$tmp109 = $tmp108;
org$frostlang$frostc$MethodDecl$Kind $tmp110 = *(&local3);
*(&local2) = $tmp110;
org$frostlang$frostc$MethodDecl$Kind $tmp111 = *(&local2);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp112;
$tmp112 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp112->value = $tmp111;
ITable* $tmp113 = ((frost$core$Equatable*) $tmp107)->$class->itable;
while ($tmp113->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp113 = $tmp113->next;
}
$fn115 $tmp114 = $tmp113->methods[1];
frost$core$Bit $tmp116 = $tmp114(((frost$core$Equatable*) $tmp107), ((frost$core$Equatable*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp112)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp107)));
*(&local1) = $tmp116;
goto block6;
block5:;
*(&local1) = $tmp103;
goto block6;
block6:;
frost$core$Bit $tmp117 = *(&local1);
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Annotations** $tmp119 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp120 = *$tmp119;
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from MethodDecl.frost:106:77
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Annotations.frost:135
frost$core$Int64* $tmp121 = &$tmp120->flags;
frost$core$Int64 $tmp122 = *$tmp121;
frost$core$Int64 $tmp123 = (frost$core$Int64) {256u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:135:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:173
int64_t $tmp124 = $tmp122.value;
int64_t $tmp125 = $tmp123.value;
int64_t $tmp126 = $tmp124 & $tmp125;
frost$core$Int64 $tmp127 = (frost$core$Int64) {$tmp126};
frost$core$Int64 $tmp128 = (frost$core$Int64) {0u};
int64_t $tmp129 = $tmp127.value;
int64_t $tmp130 = $tmp128.value;
bool $tmp131 = $tmp129 != $tmp130;
frost$core$Bit $tmp132 = (frost$core$Bit) {$tmp131};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodDecl.frost:106:65
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp133 = $tmp132.value;
bool $tmp134 = !$tmp133;
frost$core$Bit $tmp135 = (frost$core$Bit) {$tmp134};
*(&local0) = $tmp135;
goto block10;
block9:;
*(&local0) = $tmp117;
goto block10;
block10:;
frost$core$Bit $tmp136 = *(&local0);
return $tmp136;

}
frost$core$Bit org$frostlang$frostc$MethodDecl$isInstance$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:110
org$frostlang$frostc$Annotations** $tmp137 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp138 = *$tmp137;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from MethodDecl.frost:110:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp139 = &$tmp138->flags;
frost$core$Int64 $tmp140 = *$tmp139;
frost$core$Int64 $tmp141 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:173
int64_t $tmp142 = $tmp140.value;
int64_t $tmp143 = $tmp141.value;
int64_t $tmp144 = $tmp142 & $tmp143;
frost$core$Int64 $tmp145 = (frost$core$Int64) {$tmp144};
frost$core$Int64 $tmp146 = (frost$core$Int64) {0u};
int64_t $tmp147 = $tmp145.value;
int64_t $tmp148 = $tmp146.value;
bool $tmp149 = $tmp147 != $tmp148;
frost$core$Bit $tmp150 = (frost$core$Bit) {$tmp149};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodDecl.frost:110:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp151 = $tmp150.value;
bool $tmp152 = !$tmp151;
frost$core$Bit $tmp153 = (frost$core$Bit) {$tmp152};
return $tmp153;

}
frost$core$Bit org$frostlang$frostc$MethodDecl$matches$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Bit local0;
org$frostlang$frostc$Compiler$Resolution local1;
org$frostlang$frostc$Compiler$Resolution local2;
org$frostlang$frostc$Compiler$Resolution local3;
org$frostlang$frostc$Compiler$Resolution local4;
frost$core$Int64 local5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:114
org$frostlang$frostc$Compiler$Resolution* $tmp154 = &param0->resolved;
org$frostlang$frostc$Compiler$Resolution $tmp155 = *$tmp154;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp156;
$tmp156 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp156->value = $tmp155;
frost$core$Int64 $tmp157 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int64):org.frostlang.frostc.Compiler.Resolution from MethodDecl.frost:114:47
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:47
frost$core$Int64* $tmp158 = &(&local2)->$rawValue;
*$tmp158 = $tmp157;
org$frostlang$frostc$Compiler$Resolution $tmp159 = *(&local2);
*(&local1) = $tmp159;
org$frostlang$frostc$Compiler$Resolution $tmp160 = *(&local1);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp161;
$tmp161 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp161->value = $tmp160;
ITable* $tmp162 = ((frost$core$Equatable*) $tmp156)->$class->itable;
while ($tmp162->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp162 = $tmp162->next;
}
$fn164 $tmp163 = $tmp162->methods[1];
frost$core$Bit $tmp165 = $tmp163(((frost$core$Equatable*) $tmp156), ((frost$core$Equatable*) $tmp161));
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Compiler$Resolution* $tmp167 = &param1->resolved;
org$frostlang$frostc$Compiler$Resolution $tmp168 = *$tmp167;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp169;
$tmp169 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp169->value = $tmp168;
frost$core$Int64 $tmp170 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int64):org.frostlang.frostc.Compiler.Resolution from MethodDecl.frost:115:54
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:47
frost$core$Int64* $tmp171 = &(&local4)->$rawValue;
*$tmp171 = $tmp170;
org$frostlang$frostc$Compiler$Resolution $tmp172 = *(&local4);
*(&local3) = $tmp172;
org$frostlang$frostc$Compiler$Resolution $tmp173 = *(&local3);
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp174;
$tmp174 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp174->value = $tmp173;
ITable* $tmp175 = ((frost$core$Equatable*) $tmp169)->$class->itable;
while ($tmp175->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp175 = $tmp175->next;
}
$fn177 $tmp176 = $tmp175->methods[1];
frost$core$Bit $tmp178 = $tmp176(((frost$core$Equatable*) $tmp169), ((frost$core$Equatable*) $tmp174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp174)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp169)));
*(&local0) = $tmp178;
goto block4;
block3:;
*(&local0) = $tmp165;
goto block4;
block4:;
frost$core$Bit $tmp179 = *(&local0);
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp181 = (frost$core$Int64) {114u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s182, $tmp181);
abort(); // unreachable
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp161)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp156)));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:116
frost$core$String** $tmp183 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp184 = *$tmp183;
frost$core$String** $tmp185 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp186 = *$tmp185;
ITable* $tmp187 = ((frost$core$Equatable*) $tmp184)->$class->itable;
while ($tmp187->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp187 = $tmp187->next;
}
$fn189 $tmp188 = $tmp187->methods[1];
frost$core$Bit $tmp190 = $tmp188(((frost$core$Equatable*) $tmp184), ((frost$core$Equatable*) $tmp186));
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:117
frost$core$Bit $tmp192 = (frost$core$Bit) {false};
return $tmp192;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:119
org$frostlang$frostc$Type** $tmp193 = &param0->returnType;
org$frostlang$frostc$Type* $tmp194 = *$tmp193;
org$frostlang$frostc$Type** $tmp195 = &param1->returnType;
org$frostlang$frostc$Type* $tmp196 = *$tmp195;
ITable* $tmp197 = ((frost$core$Equatable*) $tmp194)->$class->itable;
while ($tmp197->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp197 = $tmp197->next;
}
$fn199 $tmp198 = $tmp197->methods[1];
frost$core$Bit $tmp200 = $tmp198(((frost$core$Equatable*) $tmp194), ((frost$core$Equatable*) $tmp196));
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:120
frost$core$Bit $tmp202 = (frost$core$Bit) {false};
return $tmp202;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:122
frost$collections$Array** $tmp203 = &param0->parameters;
frost$collections$Array* $tmp204 = *$tmp203;
ITable* $tmp205 = ((frost$collections$CollectionView*) $tmp204)->$class->itable;
while ($tmp205->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp205 = $tmp205->next;
}
$fn207 $tmp206 = $tmp205->methods[0];
frost$core$Int64 $tmp208 = $tmp206(((frost$collections$CollectionView*) $tmp204));
frost$collections$Array** $tmp209 = &param1->parameters;
frost$collections$Array* $tmp210 = *$tmp209;
ITable* $tmp211 = ((frost$collections$CollectionView*) $tmp210)->$class->itable;
while ($tmp211->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp211 = $tmp211->next;
}
$fn213 $tmp212 = $tmp211->methods[0];
frost$core$Int64 $tmp214 = $tmp212(((frost$collections$CollectionView*) $tmp210));
int64_t $tmp215 = $tmp208.value;
int64_t $tmp216 = $tmp214.value;
bool $tmp217 = $tmp215 != $tmp216;
frost$core$Bit $tmp218 = (frost$core$Bit) {$tmp217};
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:123
frost$core$Bit $tmp220 = (frost$core$Bit) {false};
return $tmp220;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:125
frost$core$Int64 $tmp221 = (frost$core$Int64) {0u};
frost$collections$Array** $tmp222 = &param0->parameters;
frost$collections$Array* $tmp223 = *$tmp222;
ITable* $tmp224 = ((frost$collections$CollectionView*) $tmp223)->$class->itable;
while ($tmp224->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp224 = $tmp224->next;
}
$fn226 $tmp225 = $tmp224->methods[0];
frost$core$Int64 $tmp227 = $tmp225(((frost$collections$CollectionView*) $tmp223));
frost$core$Bit $tmp228 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp229 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp221, $tmp227, $tmp228);
frost$core$Int64 $tmp230 = $tmp229.min;
*(&local5) = $tmp230;
frost$core$Int64 $tmp231 = $tmp229.max;
frost$core$Bit $tmp232 = $tmp229.inclusive;
bool $tmp233 = $tmp232.value;
frost$core$Int64 $tmp234 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp235 = $tmp234.value;
frost$core$UInt64 $tmp236 = (frost$core$UInt64) {((uint64_t) $tmp235)};
if ($tmp233) goto block18; else goto block19;
block18:;
int64_t $tmp237 = $tmp230.value;
int64_t $tmp238 = $tmp231.value;
bool $tmp239 = $tmp237 <= $tmp238;
frost$core$Bit $tmp240 = (frost$core$Bit) {$tmp239};
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block15; else goto block16;
block19:;
int64_t $tmp242 = $tmp230.value;
int64_t $tmp243 = $tmp231.value;
bool $tmp244 = $tmp242 < $tmp243;
frost$core$Bit $tmp245 = (frost$core$Bit) {$tmp244};
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:126
frost$collections$Array** $tmp247 = &param0->parameters;
frost$collections$Array* $tmp248 = *$tmp247;
frost$core$Int64 $tmp249 = *(&local5);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from MethodDecl.frost:126:26
frost$core$Int64 $tmp250 = (frost$core$Int64) {0u};
int64_t $tmp251 = $tmp249.value;
int64_t $tmp252 = $tmp250.value;
bool $tmp253 = $tmp251 >= $tmp252;
frost$core$Bit $tmp254 = (frost$core$Bit) {$tmp253};
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block25; else goto block24;
block25:;
ITable* $tmp256 = ((frost$collections$CollectionView*) $tmp248)->$class->itable;
while ($tmp256->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp256 = $tmp256->next;
}
$fn258 $tmp257 = $tmp256->methods[0];
frost$core$Int64 $tmp259 = $tmp257(((frost$collections$CollectionView*) $tmp248));
int64_t $tmp260 = $tmp249.value;
int64_t $tmp261 = $tmp259.value;
bool $tmp262 = $tmp260 < $tmp261;
frost$core$Bit $tmp263 = (frost$core$Bit) {$tmp262};
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp265 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s266, $tmp265, &$s267);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp268 = &$tmp248->data;
frost$core$Object** $tmp269 = *$tmp268;
int64_t $tmp270 = $tmp249.value;
frost$core$Object* $tmp271 = $tmp269[$tmp270];
frost$core$Frost$ref$frost$core$Object$Q($tmp271);
org$frostlang$frostc$Type** $tmp272 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp271)->type;
org$frostlang$frostc$Type* $tmp273 = *$tmp272;
frost$collections$Array** $tmp274 = &param1->parameters;
frost$collections$Array* $tmp275 = *$tmp274;
frost$core$Int64 $tmp276 = *(&local5);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from MethodDecl.frost:126:54
frost$core$Int64 $tmp277 = (frost$core$Int64) {0u};
int64_t $tmp278 = $tmp276.value;
int64_t $tmp279 = $tmp277.value;
bool $tmp280 = $tmp278 >= $tmp279;
frost$core$Bit $tmp281 = (frost$core$Bit) {$tmp280};
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block29; else goto block28;
block29:;
ITable* $tmp283 = ((frost$collections$CollectionView*) $tmp275)->$class->itable;
while ($tmp283->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp283 = $tmp283->next;
}
$fn285 $tmp284 = $tmp283->methods[0];
frost$core$Int64 $tmp286 = $tmp284(((frost$collections$CollectionView*) $tmp275));
int64_t $tmp287 = $tmp276.value;
int64_t $tmp288 = $tmp286.value;
bool $tmp289 = $tmp287 < $tmp288;
frost$core$Bit $tmp290 = (frost$core$Bit) {$tmp289};
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp292 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s293, $tmp292, &$s294);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp295 = &$tmp275->data;
frost$core$Object** $tmp296 = *$tmp295;
int64_t $tmp297 = $tmp276.value;
frost$core$Object* $tmp298 = $tmp296[$tmp297];
frost$core$Frost$ref$frost$core$Object$Q($tmp298);
org$frostlang$frostc$Type** $tmp299 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp298)->type;
org$frostlang$frostc$Type* $tmp300 = *$tmp299;
ITable* $tmp301 = ((frost$core$Equatable*) $tmp273)->$class->itable;
while ($tmp301->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp301 = $tmp301->next;
}
$fn303 $tmp302 = $tmp301->methods[1];
frost$core$Bit $tmp304 = $tmp302(((frost$core$Equatable*) $tmp273), ((frost$core$Equatable*) $tmp300));
bool $tmp305 = $tmp304.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp298);
frost$core$Frost$unref$frost$core$Object$Q($tmp271);
if ($tmp305) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:127
frost$core$Bit $tmp306 = (frost$core$Bit) {false};
return $tmp306;
block21:;
frost$core$Int64 $tmp307 = *(&local5);
int64_t $tmp308 = $tmp231.value;
int64_t $tmp309 = $tmp307.value;
int64_t $tmp310 = $tmp308 - $tmp309;
frost$core$Int64 $tmp311 = (frost$core$Int64) {$tmp310};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp312 = $tmp311.value;
frost$core$UInt64 $tmp313 = (frost$core$UInt64) {((uint64_t) $tmp312)};
if ($tmp233) goto block32; else goto block33;
block32:;
uint64_t $tmp314 = $tmp313.value;
uint64_t $tmp315 = $tmp236.value;
bool $tmp316 = $tmp314 >= $tmp315;
frost$core$Bit $tmp317 = (frost$core$Bit) {$tmp316};
bool $tmp318 = $tmp317.value;
if ($tmp318) goto block30; else goto block16;
block33:;
uint64_t $tmp319 = $tmp313.value;
uint64_t $tmp320 = $tmp236.value;
bool $tmp321 = $tmp319 > $tmp320;
frost$core$Bit $tmp322 = (frost$core$Bit) {$tmp321};
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block30; else goto block16;
block30:;
int64_t $tmp324 = $tmp307.value;
int64_t $tmp325 = $tmp234.value;
int64_t $tmp326 = $tmp324 + $tmp325;
frost$core$Int64 $tmp327 = (frost$core$Int64) {$tmp326};
*(&local5) = $tmp327;
goto block15;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:130
frost$core$Bit $tmp328 = (frost$core$Bit) {true};
return $tmp328;

}
frost$core$Int64 org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int64(org$frostlang$frostc$MethodDecl* param0) {

org$frostlang$frostc$Annotations$Expression* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$core$UInt64 local2;
org$frostlang$frostc$expression$Unary$Operator local3;
org$frostlang$frostc$ASTNode* local4 = NULL;
org$frostlang$frostc$expression$Unary$Operator local5;
org$frostlang$frostc$expression$Unary$Operator local6;
frost$core$UInt64 local7;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:134
org$frostlang$frostc$Annotations** $tmp329 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp330 = *$tmp329;
frost$collections$Array** $tmp331 = &$tmp330->expressions;
frost$collections$Array* $tmp332 = *$tmp331;
frost$core$Bit $tmp333 = (frost$core$Bit) {$tmp332 != NULL};
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:135
org$frostlang$frostc$Annotations** $tmp335 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp336 = *$tmp335;
frost$collections$Array** $tmp337 = &$tmp336->expressions;
frost$collections$Array* $tmp338 = *$tmp337;
ITable* $tmp339 = ((frost$collections$Iterable*) $tmp338)->$class->itable;
while ($tmp339->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp339 = $tmp339->next;
}
$fn341 $tmp340 = $tmp339->methods[0];
frost$collections$Iterator* $tmp342 = $tmp340(((frost$collections$Iterable*) $tmp338));
goto block3;
block3:;
ITable* $tmp343 = $tmp342->$class->itable;
while ($tmp343->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp343 = $tmp343->next;
}
$fn345 $tmp344 = $tmp343->methods[0];
frost$core$Bit $tmp346 = $tmp344($tmp342);
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block5; else goto block4;
block4:;
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
ITable* $tmp348 = $tmp342->$class->itable;
while ($tmp348->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp348 = $tmp348->next;
}
$fn350 $tmp349 = $tmp348->methods[1];
frost$core$Object* $tmp351 = $tmp349($tmp342);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Annotations$Expression*) $tmp351)));
org$frostlang$frostc$Annotations$Expression* $tmp352 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) $tmp351);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:136
org$frostlang$frostc$Annotations$Expression* $tmp353 = *(&local0);
frost$core$Int64* $tmp354 = &$tmp353->$rawValue;
frost$core$Int64 $tmp355 = *$tmp354;
frost$core$Int64 $tmp356 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from MethodDecl.frost:137:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp357 = $tmp355.value;
int64_t $tmp358 = $tmp356.value;
bool $tmp359 = $tmp357 == $tmp358;
frost$core$Bit $tmp360 = (frost$core$Bit) {$tmp359};
bool $tmp361 = $tmp360.value;
if ($tmp361) goto block7; else goto block6;
block7:;
frost$core$String** $tmp362 = (frost$core$String**) ($tmp353->$data + 0);
frost$core$String* $tmp363 = *$tmp362;
org$frostlang$frostc$ASTNode** $tmp364 = (org$frostlang$frostc$ASTNode**) ($tmp353->$data + 8);
org$frostlang$frostc$ASTNode* $tmp365 = *$tmp364;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
org$frostlang$frostc$ASTNode* $tmp366 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
*(&local1) = $tmp365;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:138
org$frostlang$frostc$ASTNode* $tmp367 = *(&local1);
frost$core$Int64* $tmp368 = &$tmp367->$rawValue;
frost$core$Int64 $tmp369 = *$tmp368;
frost$core$Int64 $tmp370 = (frost$core$Int64) {25u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from MethodDecl.frost:139:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp371 = $tmp369.value;
int64_t $tmp372 = $tmp370.value;
bool $tmp373 = $tmp371 == $tmp372;
frost$core$Bit $tmp374 = (frost$core$Bit) {$tmp373};
bool $tmp375 = $tmp374.value;
if ($tmp375) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp376 = (org$frostlang$frostc$Position*) ($tmp367->$data + 0);
org$frostlang$frostc$Position $tmp377 = *$tmp376;
frost$core$UInt64* $tmp378 = (frost$core$UInt64*) ($tmp367->$data + 24);
frost$core$UInt64 $tmp379 = *$tmp378;
*(&local2) = $tmp379;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:140
frost$core$UInt64 $tmp380 = *(&local2);
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from MethodDecl.frost:140:45
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:500
uint64_t $tmp381 = $tmp380.value;
frost$core$Int64 $tmp382 = (frost$core$Int64) {((int64_t) $tmp381)};
org$frostlang$frostc$ASTNode* $tmp383 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp351);
org$frostlang$frostc$Annotations$Expression* $tmp384 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
return $tmp382;
block11:;
frost$core$Int64 $tmp385 = (frost$core$Int64) {49u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from MethodDecl.frost:142:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp386 = $tmp369.value;
int64_t $tmp387 = $tmp385.value;
bool $tmp388 = $tmp386 == $tmp387;
frost$core$Bit $tmp389 = (frost$core$Bit) {$tmp388};
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block14; else goto block9;
block14:;
org$frostlang$frostc$Position* $tmp391 = (org$frostlang$frostc$Position*) ($tmp367->$data + 0);
org$frostlang$frostc$Position $tmp392 = *$tmp391;
org$frostlang$frostc$expression$Unary$Operator* $tmp393 = (org$frostlang$frostc$expression$Unary$Operator*) ($tmp367->$data + 24);
org$frostlang$frostc$expression$Unary$Operator $tmp394 = *$tmp393;
*(&local3) = $tmp394;
org$frostlang$frostc$ASTNode** $tmp395 = (org$frostlang$frostc$ASTNode**) ($tmp367->$data + 32);
org$frostlang$frostc$ASTNode* $tmp396 = *$tmp395;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
org$frostlang$frostc$ASTNode* $tmp397 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local4) = $tmp396;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:143
org$frostlang$frostc$expression$Unary$Operator $tmp398 = *(&local3);
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp399;
$tmp399 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp399->value = $tmp398;
frost$core$Int64 $tmp400 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.expression.Unary.Operator.init(rv:frost.core.Int64):org.frostlang.frostc.expression.Unary.Operator from MethodDecl.frost:143:55
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Unary.frost:17
frost$core$Int64* $tmp401 = &(&local6)->$rawValue;
*$tmp401 = $tmp400;
org$frostlang$frostc$expression$Unary$Operator $tmp402 = *(&local6);
*(&local5) = $tmp402;
org$frostlang$frostc$expression$Unary$Operator $tmp403 = *(&local5);
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp404;
$tmp404 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp404->value = $tmp403;
ITable* $tmp405 = ((frost$core$Equatable*) $tmp399)->$class->itable;
while ($tmp405->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp405 = $tmp405->next;
}
$fn407 $tmp406 = $tmp405->methods[0];
frost$core$Bit $tmp408 = $tmp406(((frost$core$Equatable*) $tmp399), ((frost$core$Equatable*) $tmp404));
bool $tmp409 = $tmp408.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp404)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp399)));
if ($tmp409) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:144
org$frostlang$frostc$ASTNode* $tmp410 = *(&local4);
frost$core$Int64* $tmp411 = &$tmp410->$rawValue;
frost$core$Int64 $tmp412 = *$tmp411;
frost$core$Int64 $tmp413 = (frost$core$Int64) {25u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from MethodDecl.frost:145:53
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp414 = $tmp412.value;
int64_t $tmp415 = $tmp413.value;
bool $tmp416 = $tmp414 == $tmp415;
frost$core$Bit $tmp417 = (frost$core$Bit) {$tmp416};
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block20; else goto block19;
block20:;
org$frostlang$frostc$Position* $tmp419 = (org$frostlang$frostc$Position*) ($tmp410->$data + 0);
org$frostlang$frostc$Position $tmp420 = *$tmp419;
frost$core$UInt64* $tmp421 = (frost$core$UInt64*) ($tmp410->$data + 24);
frost$core$UInt64 $tmp422 = *$tmp421;
*(&local7) = $tmp422;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:146
frost$core$UInt64 $tmp423 = *(&local7);
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from MethodDecl.frost:146:59
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:500
uint64_t $tmp424 = $tmp423.value;
frost$core$Int64 $tmp425 = (frost$core$Int64) {((int64_t) $tmp424)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from MethodDecl.frost:146:52
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:84
int64_t $tmp426 = $tmp425.value;
int64_t $tmp427 = -$tmp426;
frost$core$Int64 $tmp428 = (frost$core$Int64) {$tmp427};
org$frostlang$frostc$ASTNode* $tmp429 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp430 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp351);
org$frostlang$frostc$Annotations$Expression* $tmp431 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
return $tmp428;
block19:;
goto block17;
block17:;
org$frostlang$frostc$ASTNode* $tmp432 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block9:;
org$frostlang$frostc$ASTNode* $tmp433 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block6:;
frost$core$Frost$unref$frost$core$Object$Q($tmp351);
org$frostlang$frostc$Annotations$Expression* $tmp434 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:156
frost$core$Int64 $tmp435 = (frost$core$Int64) {0u};
return $tmp435;

}
org$frostlang$frostc$Type* org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodDecl* param0, org$frostlang$frostc$Compiler* param1) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local1 = NULL;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$MethodDecl$Kind local3;
org$frostlang$frostc$MethodDecl$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:160
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp436 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array** $tmp437 = &param0->parameters;
frost$collections$Array* $tmp438 = *$tmp437;
ITable* $tmp439 = ((frost$collections$CollectionView*) $tmp438)->$class->itable;
while ($tmp439->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp439 = $tmp439->next;
}
$fn441 $tmp440 = $tmp439->methods[0];
frost$core$Int64 $tmp442 = $tmp440(((frost$collections$CollectionView*) $tmp438));
frost$collections$Array$init$frost$core$Int64($tmp436, $tmp442);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
frost$collections$Array* $tmp443 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
*(&local0) = $tmp436;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:161
frost$collections$Array** $tmp444 = &param0->parameters;
frost$collections$Array* $tmp445 = *$tmp444;
ITable* $tmp446 = ((frost$collections$Iterable*) $tmp445)->$class->itable;
while ($tmp446->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp446 = $tmp446->next;
}
$fn448 $tmp447 = $tmp446->methods[0];
frost$collections$Iterator* $tmp449 = $tmp447(((frost$collections$Iterable*) $tmp445));
goto block1;
block1:;
ITable* $tmp450 = $tmp449->$class->itable;
while ($tmp450->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp450 = $tmp450->next;
}
$fn452 $tmp451 = $tmp450->methods[0];
frost$core$Bit $tmp453 = $tmp451($tmp449);
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp455 = $tmp449->$class->itable;
while ($tmp455->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp455 = $tmp455->next;
}
$fn457 $tmp456 = $tmp455->methods[1];
frost$core$Object* $tmp458 = $tmp456($tmp449);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp458)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp459 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
*(&local1) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp458);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:162
frost$collections$Array* $tmp460 = *(&local0);
org$frostlang$frostc$MethodDecl$Parameter* $tmp461 = *(&local1);
org$frostlang$frostc$Type** $tmp462 = &$tmp461->type;
org$frostlang$frostc$Type* $tmp463 = *$tmp462;
frost$collections$Array$add$frost$collections$Array$T($tmp460, ((frost$core$Object*) $tmp463));
frost$core$Frost$unref$frost$core$Object$Q($tmp458);
org$frostlang$frostc$MethodDecl$Parameter* $tmp464 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
*(&local1) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:164
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:165
org$frostlang$frostc$MethodDecl$Kind* $tmp465 = &param0->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp466 = *$tmp465;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp467;
$tmp467 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp467->value = $tmp466;
frost$core$Int64 $tmp468 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from MethodDecl.frost:165:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp469 = &(&local4)->$rawValue;
*$tmp469 = $tmp468;
org$frostlang$frostc$MethodDecl$Kind $tmp470 = *(&local4);
*(&local3) = $tmp470;
org$frostlang$frostc$MethodDecl$Kind $tmp471 = *(&local3);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp472;
$tmp472 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp472->value = $tmp471;
ITable* $tmp473 = ((frost$core$Equatable*) $tmp467)->$class->itable;
while ($tmp473->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp473 = $tmp473->next;
}
$fn475 $tmp474 = $tmp473->methods[0];
frost$core$Bit $tmp476 = $tmp474(((frost$core$Equatable*) $tmp467), ((frost$core$Equatable*) $tmp472));
bool $tmp477 = $tmp476.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp472)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp467)));
if ($tmp477) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:166
frost$core$Int64 $tmp478 = (frost$core$Int64) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from MethodDecl.frost:166:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp479 = &(&local6)->$rawValue;
*$tmp479 = $tmp478;
org$frostlang$frostc$Type$Kind $tmp480 = *(&local6);
*(&local5) = $tmp480;
org$frostlang$frostc$Type$Kind $tmp481 = *(&local5);
*(&local2) = $tmp481;
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:169
frost$core$Int64 $tmp482 = (frost$core$Int64) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from MethodDecl.frost:169:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp483 = &(&local8)->$rawValue;
*$tmp483 = $tmp482;
org$frostlang$frostc$Type$Kind $tmp484 = *(&local8);
*(&local7) = $tmp484;
org$frostlang$frostc$Type$Kind $tmp485 = *(&local7);
*(&local2) = $tmp485;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:171
org$frostlang$frostc$Position* $tmp486 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp487 = *$tmp486;
org$frostlang$frostc$Type$Kind $tmp488 = *(&local2);
frost$collections$Array* $tmp489 = *(&local0);
org$frostlang$frostc$Type** $tmp490 = &param0->returnType;
org$frostlang$frostc$Type* $tmp491 = *$tmp490;
frost$core$Int64 $tmp492 = org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int64(param0);
org$frostlang$frostc$Type* $tmp493 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type(param1, $tmp487, $tmp488, ((frost$collections$ListView*) $tmp489), $tmp491, $tmp492);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
frost$collections$Array* $tmp494 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp493;

}
frost$core$String* org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(org$frostlang$frostc$MethodDecl* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:175
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp495 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String** $tmp496 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp497 = *$tmp496;
// begin inline call to function frost.core.String.get_asString():frost.core.String from MethodDecl.frost:175:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$core$String* $tmp498 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp497, &$s499);
frost$core$MutableString$init$frost$core$String($tmp495, $tmp498);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
frost$core$MutableString* $tmp500 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
*(&local0) = $tmp495;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:176
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s501));
frost$core$String* $tmp502 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
*(&local1) = &$s503;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:177
frost$collections$Array** $tmp504 = &param0->parameters;
frost$collections$Array* $tmp505 = *$tmp504;
ITable* $tmp506 = ((frost$collections$Iterable*) $tmp505)->$class->itable;
while ($tmp506->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp506 = $tmp506->next;
}
$fn508 $tmp507 = $tmp506->methods[0];
frost$collections$Iterator* $tmp509 = $tmp507(((frost$collections$Iterable*) $tmp505));
goto block2;
block2:;
ITable* $tmp510 = $tmp509->$class->itable;
while ($tmp510->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp510 = $tmp510->next;
}
$fn512 $tmp511 = $tmp510->methods[0];
frost$core$Bit $tmp513 = $tmp511($tmp509);
bool $tmp514 = $tmp513.value;
if ($tmp514) goto block4; else goto block3;
block3:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp515 = $tmp509->$class->itable;
while ($tmp515->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp515 = $tmp515->next;
}
$fn517 $tmp516 = $tmp515->methods[1];
frost$core$Object* $tmp518 = $tmp516($tmp509);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp518)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp519 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp518);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:178
frost$core$MutableString* $tmp520 = *(&local0);
frost$core$String* $tmp521 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp520, $tmp521);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:179
frost$core$MutableString* $tmp522 = *(&local0);
org$frostlang$frostc$MethodDecl$Parameter* $tmp523 = *(&local2);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from MethodDecl.frost:179:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:150
$fn525 $tmp524 = ($fn525) ((frost$core$Object*) $tmp523)->$class->vtable[0];
frost$core$String* $tmp526 = $tmp524(((frost$core$Object*) $tmp523));
frost$core$MutableString$append$frost$core$String($tmp522, $tmp526);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:180
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s527));
frost$core$String* $tmp528 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
*(&local1) = &$s529;
frost$core$Frost$unref$frost$core$Object$Q($tmp518);
org$frostlang$frostc$MethodDecl$Parameter* $tmp530 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block2;
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:182
frost$core$MutableString* $tmp531 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp531, &$s532);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:183
org$frostlang$frostc$Type** $tmp533 = &param0->returnType;
org$frostlang$frostc$Type* $tmp534 = *$tmp533;
frost$core$String** $tmp535 = &((org$frostlang$frostc$Symbol*) $tmp534)->name;
frost$core$String* $tmp536 = *$tmp535;
ITable* $tmp538 = ((frost$core$Equatable*) $tmp536)->$class->itable;
while ($tmp538->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp538 = $tmp538->next;
}
$fn540 $tmp539 = $tmp538->methods[1];
frost$core$Bit $tmp541 = $tmp539(((frost$core$Equatable*) $tmp536), ((frost$core$Equatable*) &$s537));
bool $tmp542 = $tmp541.value;
if ($tmp542) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:184
frost$core$MutableString* $tmp543 = *(&local0);
org$frostlang$frostc$Type** $tmp544 = &param0->returnType;
org$frostlang$frostc$Type* $tmp545 = *$tmp544;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodDecl.frost:184:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn547 $tmp546 = ($fn547) ((frost$core$Object*) $tmp545)->$class->vtable[0];
frost$core$String* $tmp548 = $tmp546(((frost$core$Object*) $tmp545));
frost$core$String* $tmp549 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s550, $tmp548);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
frost$core$String* $tmp551 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp549, &$s552);
frost$core$MutableString$append$frost$core$String($tmp543, $tmp551);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:186
frost$core$MutableString* $tmp553 = *(&local0);
frost$core$String* $tmp554 = frost$core$MutableString$finish$R$frost$core$String($tmp553);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
frost$core$String* $tmp555 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp556 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp554;

}
frost$core$String* org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String(org$frostlang$frostc$MethodDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:190
org$frostlang$frostc$MethodDecl$Kind* $tmp557 = &param0->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp558 = *$tmp557;
frost$core$Int64 $tmp559 = $tmp558.$rawValue;
frost$core$Int64 $tmp560 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from MethodDecl.frost:191:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp561 = $tmp559.value;
int64_t $tmp562 = $tmp560.value;
bool $tmp563 = $tmp561 == $tmp562;
frost$core$Bit $tmp564 = (frost$core$Bit) {$tmp563};
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:192
frost$core$Weak** $tmp566 = &param0->owner;
frost$core$Weak* $tmp567 = *$tmp566;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodDecl.frost:192:34
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp568 = &$tmp567->_valid;
frost$core$Bit $tmp569 = *$tmp568;
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp571 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s572, $tmp571);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp573 = &$tmp567->value;
frost$core$Object* $tmp574 = *$tmp573;
frost$core$Frost$ref$frost$core$Object$Q($tmp574);
frost$core$String** $tmp575 = &((org$frostlang$frostc$ClassDecl*) $tmp574)->name;
frost$core$String* $tmp576 = *$tmp575;
frost$core$String* $tmp577 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s578, $tmp576);
frost$core$String* $tmp579 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp577, &$s580);
frost$core$String* $tmp581 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp582 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp579, $tmp581);
frost$core$String* $tmp583 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp582, &$s584);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
frost$core$Frost$unref$frost$core$Object$Q($tmp574);
return $tmp583;
block3:;
frost$core$Int64 $tmp585 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from MethodDecl.frost:194:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp586 = $tmp559.value;
int64_t $tmp587 = $tmp585.value;
bool $tmp588 = $tmp586 == $tmp587;
frost$core$Bit $tmp589 = (frost$core$Bit) {$tmp588};
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:195
frost$core$Weak** $tmp591 = &param0->owner;
frost$core$Weak* $tmp592 = *$tmp591;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodDecl.frost:195:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp593 = &$tmp592->_valid;
frost$core$Bit $tmp594 = *$tmp593;
bool $tmp595 = $tmp594.value;
if ($tmp595) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp596 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s597, $tmp596);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp598 = &$tmp592->value;
frost$core$Object* $tmp599 = *$tmp598;
frost$core$Frost$ref$frost$core$Object$Q($tmp599);
frost$core$String** $tmp600 = &((org$frostlang$frostc$ClassDecl*) $tmp599)->name;
frost$core$String* $tmp601 = *$tmp600;
frost$core$String* $tmp602 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s603, $tmp601);
frost$core$String* $tmp604 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp602, &$s605);
frost$core$String* $tmp606 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp607 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp604, $tmp606);
frost$core$String* $tmp608 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp607, &$s609);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
frost$core$Frost$unref$frost$core$Object$Q($tmp599);
return $tmp608;
block10:;
frost$core$Int64 $tmp610 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from MethodDecl.frost:197:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp611 = $tmp559.value;
int64_t $tmp612 = $tmp610.value;
bool $tmp613 = $tmp611 == $tmp612;
frost$core$Bit $tmp614 = (frost$core$Bit) {$tmp613};
bool $tmp615 = $tmp614.value;
if ($tmp615) goto block16; else goto block1;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:198
frost$core$Weak** $tmp616 = &param0->owner;
frost$core$Weak* $tmp617 = *$tmp616;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodDecl.frost:198:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp618 = &$tmp617->_valid;
frost$core$Bit $tmp619 = *$tmp618;
bool $tmp620 = $tmp619.value;
if ($tmp620) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp621 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s622, $tmp621);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp623 = &$tmp617->value;
frost$core$Object* $tmp624 = *$tmp623;
frost$core$Frost$ref$frost$core$Object$Q($tmp624);
frost$core$String** $tmp625 = &((org$frostlang$frostc$ClassDecl*) $tmp624)->name;
frost$core$String* $tmp626 = *$tmp625;
// begin inline call to function frost.core.String.get_asString():frost.core.String from MethodDecl.frost:198:32
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
frost$core$String* $tmp627 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp626, &$s628);
frost$core$String* $tmp629 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp630 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp627, $tmp629);
frost$core$String* $tmp631 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp630, &$s632);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
frost$core$Frost$unref$frost$core$Object$Q($tmp624);
return $tmp631;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:201
frost$core$Int64 $tmp633 = (frost$core$Int64) {201u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s634, $tmp633);
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$MethodDecl$get_asString$R$frost$core$String(org$frostlang$frostc$MethodDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:206
org$frostlang$frostc$FixedArray** $tmp635 = &param0->body;
org$frostlang$frostc$FixedArray* $tmp636 = *$tmp635;
frost$core$Bit $tmp637 = (frost$core$Bit) {$tmp636 != NULL};
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:207
org$frostlang$frostc$Annotations** $tmp639 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp640 = *$tmp639;
frost$core$String* $tmp641 = org$frostlang$frostc$Annotations$get_asString$R$frost$core$String($tmp640);
frost$core$String* $tmp642 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp641, &$s643);
frost$core$String* $tmp644 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp645 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp642, $tmp644);
frost$core$String* $tmp646 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp645, &$s647);
org$frostlang$frostc$FixedArray** $tmp648 = &param0->body;
org$frostlang$frostc$FixedArray* $tmp649 = *$tmp648;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodDecl.frost:207:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn651 $tmp650 = ($fn651) ((frost$core$Object*) $tmp649)->$class->vtable[0];
frost$core$String* $tmp652 = $tmp650(((frost$core$Object*) $tmp649));
frost$core$String* $tmp653 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp646, $tmp652);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
frost$core$String* $tmp654 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp653, &$s655);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
return $tmp654;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:209
frost$core$String* $tmp656 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
return $tmp656;

}
void org$frostlang$frostc$MethodDecl$cleanup(org$frostlang$frostc$MethodDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/MethodDecl.frost:6
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
frost$core$Weak** $tmp657 = &param0->owner;
frost$core$Weak* $tmp658 = *$tmp657;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
frost$core$String** $tmp659 = &param0->doccomment;
frost$core$String* $tmp660 = *$tmp659;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
org$frostlang$frostc$Annotations** $tmp661 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp662 = *$tmp661;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
frost$collections$Array** $tmp663 = &param0->genericParameters;
frost$collections$Array* $tmp664 = *$tmp663;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
frost$collections$Array** $tmp665 = &param0->parameters;
frost$collections$Array* $tmp666 = *$tmp665;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
org$frostlang$frostc$Type** $tmp667 = &param0->returnType;
org$frostlang$frostc$Type* $tmp668 = *$tmp667;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
org$frostlang$frostc$FixedArray** $tmp669 = &param0->body;
org$frostlang$frostc$FixedArray* $tmp670 = *$tmp669;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
frost$core$Weak** $tmp671 = &param0->overridden;
frost$core$Weak* $tmp672 = *$tmp671;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
return;

}

