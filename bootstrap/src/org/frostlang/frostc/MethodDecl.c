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
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Weak.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Equatable.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Annotations/Expression.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/expression/Unary/Operator.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/collections/ListView.h"
#include "frost/core/MutableString.h"


static frost$core$String $s1;
org$frostlang$frostc$MethodDecl$class_type org$frostlang$frostc$MethodDecl$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &org$frostlang$frostc$Symbol$class, NULL, { org$frostlang$frostc$MethodDecl$get_asString$R$frost$core$String, org$frostlang$frostc$MethodDecl$cleanup, org$frostlang$frostc$MethodDecl$get_heritable$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$isInstance$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$matches$org$frostlang$frostc$MethodDecl$R$frost$core$Bit, org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int, org$frostlang$frostc$MethodDecl$type$org$frostlang$frostc$Compiler$R$org$frostlang$frostc$Type, org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String, org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String} };

typedef frost$core$Int (*$fn17)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn48)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn52)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn57)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn85)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn115)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn164)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn177)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn189)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn199)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn207)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn213)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn226)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn256)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn284)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn303)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn339)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn343)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn348)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn405)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn439)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn446)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn450)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn455)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn473)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn506)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn510)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn515)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn523)(frost$core$Object*);
typedef frost$core$Bit (*$fn538)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn545)(frost$core$Object*);
typedef frost$core$String* (*$fn649)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 31, -660996163121683783, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -8677435737112033532, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x69\x6e\x69\x74\x28\x6f\x77\x6e\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x64\x6f\x63\x63\x6f\x6d\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2c\x20\x6d\x65\x74\x68\x6f\x64\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64\x2c\x20\x6e\x61\x6d\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x2c\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x2c\x20\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x62\x6f\x64\x79\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x29", 569, -1725580904474273109, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -8677435737112033532, NULL };
static frost$core$String $s264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s497 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s499 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s501 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s525 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s527 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s535 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 3563412735833858527, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s550 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s570 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s576 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, -7952910774154584656, NULL };
static frost$core$String $s578 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s582 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s595 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s601 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 7226600790104464427, NULL };
static frost$core$String $s603 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s607 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s620 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s630 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s632 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 16, -8677435737112033532, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s645 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s653 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };

void org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$MethodDecl* param0, org$frostlang$frostc$ClassDecl* param1, org$frostlang$frostc$Position param2, frost$core$String* param3, org$frostlang$frostc$Annotations* param4, org$frostlang$frostc$MethodDecl$Kind param5, frost$core$String* param6, frost$collections$Array* param7, frost$collections$Array* param8, org$frostlang$frostc$Type* param9, org$frostlang$frostc$FixedArray* param10) {

org$frostlang$frostc$Compiler$Resolution local0;
org$frostlang$frostc$Compiler$Resolution local1;
org$frostlang$frostc$Symbol$Kind local2;
org$frostlang$frostc$Symbol$Kind local3;
org$frostlang$frostc$MethodDecl$Parameter* local4 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:66
frost$core$Int $tmp2 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from MethodDecl.frost:66:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
frost$core$Int* $tmp3 = &(&local1)->$rawValue;
*$tmp3 = $tmp2;
org$frostlang$frostc$Compiler$Resolution $tmp4 = *(&local1);
*(&local0) = $tmp4;
org$frostlang$frostc$Compiler$Resolution $tmp5 = *(&local0);
org$frostlang$frostc$Compiler$Resolution* $tmp6 = &param0->resolved;
*$tmp6 = $tmp5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:68
frost$core$Bit $tmp7 = (frost$core$Bit) {false};
frost$core$Bit* $tmp8 = &param0->overrideKnown;
*$tmp8 = $tmp7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:71
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
frost$core$Int $tmp18 = $tmp16(((frost$collections$CollectionView*) param7));
frost$core$Int $tmp19 = (frost$core$Int) {0u};
int64_t $tmp20 = $tmp18.value;
int64_t $tmp21 = $tmp19.value;
bool $tmp22 = $tmp20 > $tmp21;
frost$core$Bit $tmp23 = (frost$core$Bit) {$tmp22};
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block2; else goto block3;
block3:;
frost$core$Int $tmp25 = (frost$core$Int) {82u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s26, $tmp25, &$s27);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:86
frost$core$Int $tmp28 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Symbol.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Symbol.Kind from MethodDecl.frost:86:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:4
frost$core$Int* $tmp29 = &(&local3)->$rawValue;
*$tmp29 = $tmp28;
org$frostlang$frostc$Symbol$Kind $tmp30 = *(&local3);
*(&local2) = $tmp30;
org$frostlang$frostc$Symbol$Kind $tmp31 = *(&local2);
org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Symbol*) param0), $tmp31, param2, param6);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:87
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:88
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp36 = &param0->doccomment;
frost$core$String* $tmp37 = *$tmp36;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$String** $tmp38 = &param0->doccomment;
*$tmp38 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:89
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$Annotations** $tmp39 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp40 = *$tmp39;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
org$frostlang$frostc$Annotations** $tmp41 = &param0->annotations;
*$tmp41 = param4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:90
org$frostlang$frostc$MethodDecl$Kind* $tmp42 = &param0->methodKind;
*$tmp42 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:91
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param7));
frost$collections$Array** $tmp43 = &param0->genericParameters;
frost$collections$Array* $tmp44 = *$tmp43;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$collections$Array** $tmp45 = &param0->genericParameters;
*$tmp45 = param7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:92
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:93
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:95
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
frost$collections$Array** $tmp66 = &param0->parameters;
frost$collections$Array* $tmp67 = *$tmp66;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$collections$Array** $tmp68 = &param0->parameters;
*$tmp68 = param8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:96
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param9));
org$frostlang$frostc$Type** $tmp69 = &param0->returnType;
org$frostlang$frostc$Type* $tmp70 = *$tmp69;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
org$frostlang$frostc$Type** $tmp71 = &param0->returnType;
*$tmp71 = param9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:97
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:102
org$frostlang$frostc$MethodDecl$Kind* $tmp75 = &param0->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp76 = *$tmp75;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp77;
$tmp77 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp77->value = $tmp76;
frost$core$Int $tmp78 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodDecl.frost:102:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp79 = &(&local1)->$rawValue;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:106
org$frostlang$frostc$Annotations** $tmp87 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp88 = *$tmp87;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from MethodDecl.frost:106:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int* $tmp89 = &$tmp88->flags;
frost$core$Int $tmp90 = *$tmp89;
frost$core$Int $tmp91 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp92 = $tmp90.value;
int64_t $tmp93 = $tmp91.value;
int64_t $tmp94 = $tmp92 & $tmp93;
frost$core$Int $tmp95 = (frost$core$Int) {$tmp94};
frost$core$Int $tmp96 = (frost$core$Int) {0u};
int64_t $tmp97 = $tmp95.value;
int64_t $tmp98 = $tmp96.value;
bool $tmp99 = $tmp97 != $tmp98;
frost$core$Bit $tmp100 = (frost$core$Bit) {$tmp99};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodDecl.frost:106:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
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
frost$core$Int $tmp108 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodDecl.frost:106:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp109 = &(&local3)->$rawValue;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:135
frost$core$Int* $tmp121 = &$tmp120->flags;
frost$core$Int $tmp122 = *$tmp121;
frost$core$Int $tmp123 = (frost$core$Int) {256u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:135:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp124 = $tmp122.value;
int64_t $tmp125 = $tmp123.value;
int64_t $tmp126 = $tmp124 & $tmp125;
frost$core$Int $tmp127 = (frost$core$Int) {$tmp126};
frost$core$Int $tmp128 = (frost$core$Int) {0u};
int64_t $tmp129 = $tmp127.value;
int64_t $tmp130 = $tmp128.value;
bool $tmp131 = $tmp129 != $tmp130;
frost$core$Bit $tmp132 = (frost$core$Bit) {$tmp131};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodDecl.frost:106:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
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

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:110
org$frostlang$frostc$Annotations** $tmp137 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp138 = *$tmp137;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from MethodDecl.frost:110:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int* $tmp139 = &$tmp138->flags;
frost$core$Int $tmp140 = *$tmp139;
frost$core$Int $tmp141 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp142 = $tmp140.value;
int64_t $tmp143 = $tmp141.value;
int64_t $tmp144 = $tmp142 & $tmp143;
frost$core$Int $tmp145 = (frost$core$Int) {$tmp144};
frost$core$Int $tmp146 = (frost$core$Int) {0u};
int64_t $tmp147 = $tmp145.value;
int64_t $tmp148 = $tmp146.value;
bool $tmp149 = $tmp147 != $tmp148;
frost$core$Bit $tmp150 = (frost$core$Bit) {$tmp149};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from MethodDecl.frost:110:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
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
frost$core$Int local5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:114
org$frostlang$frostc$Compiler$Resolution* $tmp154 = &param0->resolved;
org$frostlang$frostc$Compiler$Resolution $tmp155 = *$tmp154;
org$frostlang$frostc$Compiler$Resolution$wrapper* $tmp156;
$tmp156 = (org$frostlang$frostc$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$Resolution$wrapperclass);
$tmp156->value = $tmp155;
frost$core$Int $tmp157 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from MethodDecl.frost:114:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
frost$core$Int* $tmp158 = &(&local2)->$rawValue;
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
frost$core$Int $tmp170 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Compiler.Resolution.init(rv:frost.core.Int):org.frostlang.frostc.Compiler.Resolution from MethodDecl.frost:115:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:44
frost$core$Int* $tmp171 = &(&local4)->$rawValue;
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
frost$core$Int $tmp181 = (frost$core$Int) {114u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s182, $tmp181);
abort(); // unreachable
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp161)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp156)));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:116
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:117
frost$core$Bit $tmp192 = (frost$core$Bit) {false};
return $tmp192;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:119
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:120
frost$core$Bit $tmp202 = (frost$core$Bit) {false};
return $tmp202;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:122
frost$collections$Array** $tmp203 = &param0->parameters;
frost$collections$Array* $tmp204 = *$tmp203;
ITable* $tmp205 = ((frost$collections$CollectionView*) $tmp204)->$class->itable;
while ($tmp205->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp205 = $tmp205->next;
}
$fn207 $tmp206 = $tmp205->methods[0];
frost$core$Int $tmp208 = $tmp206(((frost$collections$CollectionView*) $tmp204));
frost$collections$Array** $tmp209 = &param1->parameters;
frost$collections$Array* $tmp210 = *$tmp209;
ITable* $tmp211 = ((frost$collections$CollectionView*) $tmp210)->$class->itable;
while ($tmp211->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp211 = $tmp211->next;
}
$fn213 $tmp212 = $tmp211->methods[0];
frost$core$Int $tmp214 = $tmp212(((frost$collections$CollectionView*) $tmp210));
int64_t $tmp215 = $tmp208.value;
int64_t $tmp216 = $tmp214.value;
bool $tmp217 = $tmp215 != $tmp216;
frost$core$Bit $tmp218 = (frost$core$Bit) {$tmp217};
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:123
frost$core$Bit $tmp220 = (frost$core$Bit) {false};
return $tmp220;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:125
frost$core$Int $tmp221 = (frost$core$Int) {0u};
frost$collections$Array** $tmp222 = &param0->parameters;
frost$collections$Array* $tmp223 = *$tmp222;
ITable* $tmp224 = ((frost$collections$CollectionView*) $tmp223)->$class->itable;
while ($tmp224->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp224 = $tmp224->next;
}
$fn226 $tmp225 = $tmp224->methods[0];
frost$core$Int $tmp227 = $tmp225(((frost$collections$CollectionView*) $tmp223));
frost$core$Bit $tmp228 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp229 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp221, $tmp227, $tmp228);
frost$core$Int $tmp230 = $tmp229.min;
*(&local5) = $tmp230;
frost$core$Int $tmp231 = $tmp229.max;
frost$core$Bit $tmp232 = $tmp229.inclusive;
bool $tmp233 = $tmp232.value;
frost$core$Int $tmp234 = (frost$core$Int) {1u};
if ($tmp233) goto block17; else goto block18;
block17:;
int64_t $tmp235 = $tmp230.value;
int64_t $tmp236 = $tmp231.value;
bool $tmp237 = $tmp235 <= $tmp236;
frost$core$Bit $tmp238 = (frost$core$Bit) {$tmp237};
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block14; else goto block15;
block18:;
int64_t $tmp240 = $tmp230.value;
int64_t $tmp241 = $tmp231.value;
bool $tmp242 = $tmp240 < $tmp241;
frost$core$Bit $tmp243 = (frost$core$Bit) {$tmp242};
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:126
frost$collections$Array** $tmp245 = &param0->parameters;
frost$collections$Array* $tmp246 = *$tmp245;
frost$core$Int $tmp247 = *(&local5);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from MethodDecl.frost:126:26
frost$core$Int $tmp248 = (frost$core$Int) {0u};
int64_t $tmp249 = $tmp247.value;
int64_t $tmp250 = $tmp248.value;
bool $tmp251 = $tmp249 >= $tmp250;
frost$core$Bit $tmp252 = (frost$core$Bit) {$tmp251};
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block24; else goto block23;
block24:;
ITable* $tmp254 = ((frost$collections$CollectionView*) $tmp246)->$class->itable;
while ($tmp254->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp254 = $tmp254->next;
}
$fn256 $tmp255 = $tmp254->methods[0];
frost$core$Int $tmp257 = $tmp255(((frost$collections$CollectionView*) $tmp246));
int64_t $tmp258 = $tmp247.value;
int64_t $tmp259 = $tmp257.value;
bool $tmp260 = $tmp258 < $tmp259;
frost$core$Bit $tmp261 = (frost$core$Bit) {$tmp260};
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block22; else goto block23;
block23:;
frost$core$Int $tmp263 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s264, $tmp263, &$s265);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp266 = &$tmp246->data;
frost$core$Object** $tmp267 = *$tmp266;
frost$core$Int64 $tmp268 = frost$core$Int64$init$frost$core$Int($tmp247);
int64_t $tmp269 = $tmp268.value;
frost$core$Object* $tmp270 = $tmp267[$tmp269];
frost$core$Frost$ref$frost$core$Object$Q($tmp270);
org$frostlang$frostc$Type** $tmp271 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp270)->type;
org$frostlang$frostc$Type* $tmp272 = *$tmp271;
frost$collections$Array** $tmp273 = &param1->parameters;
frost$collections$Array* $tmp274 = *$tmp273;
frost$core$Int $tmp275 = *(&local5);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from MethodDecl.frost:126:54
frost$core$Int $tmp276 = (frost$core$Int) {0u};
int64_t $tmp277 = $tmp275.value;
int64_t $tmp278 = $tmp276.value;
bool $tmp279 = $tmp277 >= $tmp278;
frost$core$Bit $tmp280 = (frost$core$Bit) {$tmp279};
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block28; else goto block27;
block28:;
ITable* $tmp282 = ((frost$collections$CollectionView*) $tmp274)->$class->itable;
while ($tmp282->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp282 = $tmp282->next;
}
$fn284 $tmp283 = $tmp282->methods[0];
frost$core$Int $tmp285 = $tmp283(((frost$collections$CollectionView*) $tmp274));
int64_t $tmp286 = $tmp275.value;
int64_t $tmp287 = $tmp285.value;
bool $tmp288 = $tmp286 < $tmp287;
frost$core$Bit $tmp289 = (frost$core$Bit) {$tmp288};
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block26; else goto block27;
block27:;
frost$core$Int $tmp291 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s292, $tmp291, &$s293);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp294 = &$tmp274->data;
frost$core$Object** $tmp295 = *$tmp294;
frost$core$Int64 $tmp296 = frost$core$Int64$init$frost$core$Int($tmp275);
int64_t $tmp297 = $tmp296.value;
frost$core$Object* $tmp298 = $tmp295[$tmp297];
frost$core$Frost$ref$frost$core$Object$Q($tmp298);
org$frostlang$frostc$Type** $tmp299 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp298)->type;
org$frostlang$frostc$Type* $tmp300 = *$tmp299;
ITable* $tmp301 = ((frost$core$Equatable*) $tmp272)->$class->itable;
while ($tmp301->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp301 = $tmp301->next;
}
$fn303 $tmp302 = $tmp301->methods[1];
frost$core$Bit $tmp304 = $tmp302(((frost$core$Equatable*) $tmp272), ((frost$core$Equatable*) $tmp300));
bool $tmp305 = $tmp304.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp298);
frost$core$Frost$unref$frost$core$Object$Q($tmp270);
if ($tmp305) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:127
frost$core$Bit $tmp306 = (frost$core$Bit) {false};
return $tmp306;
block20:;
frost$core$Int $tmp307 = *(&local5);
int64_t $tmp308 = $tmp231.value;
int64_t $tmp309 = $tmp307.value;
int64_t $tmp310 = $tmp308 - $tmp309;
frost$core$Int $tmp311 = (frost$core$Int) {$tmp310};
if ($tmp233) goto block30; else goto block31;
block30:;
int64_t $tmp312 = $tmp311.value;
int64_t $tmp313 = $tmp234.value;
bool $tmp314 = $tmp312 >= $tmp313;
frost$core$Bit $tmp315 = (frost$core$Bit) {$tmp314};
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block29; else goto block15;
block31:;
int64_t $tmp317 = $tmp311.value;
int64_t $tmp318 = $tmp234.value;
bool $tmp319 = $tmp317 > $tmp318;
frost$core$Bit $tmp320 = (frost$core$Bit) {$tmp319};
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block29; else goto block15;
block29:;
int64_t $tmp322 = $tmp307.value;
int64_t $tmp323 = $tmp234.value;
int64_t $tmp324 = $tmp322 + $tmp323;
frost$core$Int $tmp325 = (frost$core$Int) {$tmp324};
*(&local5) = $tmp325;
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:130
frost$core$Bit $tmp326 = (frost$core$Bit) {true};
return $tmp326;

}
frost$core$Int org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int(org$frostlang$frostc$MethodDecl* param0) {

org$frostlang$frostc$Annotations$Expression* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$core$UInt64 local2;
org$frostlang$frostc$expression$Unary$Operator local3;
org$frostlang$frostc$ASTNode* local4 = NULL;
org$frostlang$frostc$expression$Unary$Operator local5;
org$frostlang$frostc$expression$Unary$Operator local6;
frost$core$UInt64 local7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:134
org$frostlang$frostc$Annotations** $tmp327 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp328 = *$tmp327;
frost$collections$Array** $tmp329 = &$tmp328->expressions;
frost$collections$Array* $tmp330 = *$tmp329;
frost$core$Bit $tmp331 = (frost$core$Bit) {$tmp330 != NULL};
bool $tmp332 = $tmp331.value;
if ($tmp332) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:135
org$frostlang$frostc$Annotations** $tmp333 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp334 = *$tmp333;
frost$collections$Array** $tmp335 = &$tmp334->expressions;
frost$collections$Array* $tmp336 = *$tmp335;
ITable* $tmp337 = ((frost$collections$Iterable*) $tmp336)->$class->itable;
while ($tmp337->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp337 = $tmp337->next;
}
$fn339 $tmp338 = $tmp337->methods[0];
frost$collections$Iterator* $tmp340 = $tmp338(((frost$collections$Iterable*) $tmp336));
goto block3;
block3:;
ITable* $tmp341 = $tmp340->$class->itable;
while ($tmp341->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp341 = $tmp341->next;
}
$fn343 $tmp342 = $tmp341->methods[0];
frost$core$Bit $tmp344 = $tmp342($tmp340);
bool $tmp345 = $tmp344.value;
if ($tmp345) goto block5; else goto block4;
block4:;
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
ITable* $tmp346 = $tmp340->$class->itable;
while ($tmp346->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp346 = $tmp346->next;
}
$fn348 $tmp347 = $tmp346->methods[1];
frost$core$Object* $tmp349 = $tmp347($tmp340);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Annotations$Expression*) $tmp349)));
org$frostlang$frostc$Annotations$Expression* $tmp350 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) $tmp349);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:136
org$frostlang$frostc$Annotations$Expression* $tmp351 = *(&local0);
frost$core$Int* $tmp352 = &$tmp351->$rawValue;
frost$core$Int $tmp353 = *$tmp352;
frost$core$Int $tmp354 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:137:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp355 = $tmp353.value;
int64_t $tmp356 = $tmp354.value;
bool $tmp357 = $tmp355 == $tmp356;
frost$core$Bit $tmp358 = (frost$core$Bit) {$tmp357};
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block7; else goto block6;
block7:;
frost$core$String** $tmp360 = (frost$core$String**) ($tmp351->$data + 0);
frost$core$String* $tmp361 = *$tmp360;
org$frostlang$frostc$ASTNode** $tmp362 = (org$frostlang$frostc$ASTNode**) ($tmp351->$data + 8);
org$frostlang$frostc$ASTNode* $tmp363 = *$tmp362;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
org$frostlang$frostc$ASTNode* $tmp364 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
*(&local1) = $tmp363;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:138
org$frostlang$frostc$ASTNode* $tmp365 = *(&local1);
frost$core$Int* $tmp366 = &$tmp365->$rawValue;
frost$core$Int $tmp367 = *$tmp366;
frost$core$Int $tmp368 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:139:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp369 = $tmp367.value;
int64_t $tmp370 = $tmp368.value;
bool $tmp371 = $tmp369 == $tmp370;
frost$core$Bit $tmp372 = (frost$core$Bit) {$tmp371};
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp374 = (org$frostlang$frostc$Position*) ($tmp365->$data + 0);
org$frostlang$frostc$Position $tmp375 = *$tmp374;
frost$core$UInt64* $tmp376 = (frost$core$UInt64*) ($tmp365->$data + 24);
frost$core$UInt64 $tmp377 = *$tmp376;
*(&local2) = $tmp377;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:140
frost$core$UInt64 $tmp378 = *(&local2);
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from MethodDecl.frost:140:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
uint64_t $tmp379 = $tmp378.value;
frost$core$Int $tmp380 = (frost$core$Int) {((int64_t) $tmp379)};
org$frostlang$frostc$ASTNode* $tmp381 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp349);
org$frostlang$frostc$Annotations$Expression* $tmp382 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
return $tmp380;
block11:;
frost$core$Int $tmp383 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:142:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp384 = $tmp367.value;
int64_t $tmp385 = $tmp383.value;
bool $tmp386 = $tmp384 == $tmp385;
frost$core$Bit $tmp387 = (frost$core$Bit) {$tmp386};
bool $tmp388 = $tmp387.value;
if ($tmp388) goto block14; else goto block9;
block14:;
org$frostlang$frostc$Position* $tmp389 = (org$frostlang$frostc$Position*) ($tmp365->$data + 0);
org$frostlang$frostc$Position $tmp390 = *$tmp389;
org$frostlang$frostc$expression$Unary$Operator* $tmp391 = (org$frostlang$frostc$expression$Unary$Operator*) ($tmp365->$data + 24);
org$frostlang$frostc$expression$Unary$Operator $tmp392 = *$tmp391;
*(&local3) = $tmp392;
org$frostlang$frostc$ASTNode** $tmp393 = (org$frostlang$frostc$ASTNode**) ($tmp365->$data + 32);
org$frostlang$frostc$ASTNode* $tmp394 = *$tmp393;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
org$frostlang$frostc$ASTNode* $tmp395 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local4) = $tmp394;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:143
org$frostlang$frostc$expression$Unary$Operator $tmp396 = *(&local3);
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp397;
$tmp397 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp397->value = $tmp396;
frost$core$Int $tmp398 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.expression.Unary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Unary.Operator from MethodDecl.frost:143:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Unary.frost:18
frost$core$Int* $tmp399 = &(&local6)->$rawValue;
*$tmp399 = $tmp398;
org$frostlang$frostc$expression$Unary$Operator $tmp400 = *(&local6);
*(&local5) = $tmp400;
org$frostlang$frostc$expression$Unary$Operator $tmp401 = *(&local5);
org$frostlang$frostc$expression$Unary$Operator$wrapper* $tmp402;
$tmp402 = (org$frostlang$frostc$expression$Unary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Unary$Operator$wrapperclass);
$tmp402->value = $tmp401;
ITable* $tmp403 = ((frost$core$Equatable*) $tmp397)->$class->itable;
while ($tmp403->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp403 = $tmp403->next;
}
$fn405 $tmp404 = $tmp403->methods[0];
frost$core$Bit $tmp406 = $tmp404(((frost$core$Equatable*) $tmp397), ((frost$core$Equatable*) $tmp402));
bool $tmp407 = $tmp406.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp402)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp397)));
if ($tmp407) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:144
org$frostlang$frostc$ASTNode* $tmp408 = *(&local4);
frost$core$Int* $tmp409 = &$tmp408->$rawValue;
frost$core$Int $tmp410 = *$tmp409;
frost$core$Int $tmp411 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:145:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp412 = $tmp410.value;
int64_t $tmp413 = $tmp411.value;
bool $tmp414 = $tmp412 == $tmp413;
frost$core$Bit $tmp415 = (frost$core$Bit) {$tmp414};
bool $tmp416 = $tmp415.value;
if ($tmp416) goto block20; else goto block19;
block20:;
org$frostlang$frostc$Position* $tmp417 = (org$frostlang$frostc$Position*) ($tmp408->$data + 0);
org$frostlang$frostc$Position $tmp418 = *$tmp417;
frost$core$UInt64* $tmp419 = (frost$core$UInt64*) ($tmp408->$data + 24);
frost$core$UInt64 $tmp420 = *$tmp419;
*(&local7) = $tmp420;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:146
frost$core$UInt64 $tmp421 = *(&local7);
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from MethodDecl.frost:146:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
uint64_t $tmp422 = $tmp421.value;
frost$core$Int $tmp423 = (frost$core$Int) {((int64_t) $tmp422)};
// begin inline call to function frost.core.Int.-():frost.core.Int from MethodDecl.frost:146:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
int64_t $tmp424 = $tmp423.value;
int64_t $tmp425 = -$tmp424;
frost$core$Int $tmp426 = (frost$core$Int) {$tmp425};
org$frostlang$frostc$ASTNode* $tmp427 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp428 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp349);
org$frostlang$frostc$Annotations$Expression* $tmp429 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
return $tmp426;
block19:;
goto block17;
block17:;
org$frostlang$frostc$ASTNode* $tmp430 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block9:;
org$frostlang$frostc$ASTNode* $tmp431 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block6:;
frost$core$Frost$unref$frost$core$Object$Q($tmp349);
org$frostlang$frostc$Annotations$Expression* $tmp432 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
*(&local0) = ((org$frostlang$frostc$Annotations$Expression*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:156
frost$core$Int $tmp433 = (frost$core$Int) {0u};
return $tmp433;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:160
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp434 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array** $tmp435 = &param0->parameters;
frost$collections$Array* $tmp436 = *$tmp435;
ITable* $tmp437 = ((frost$collections$CollectionView*) $tmp436)->$class->itable;
while ($tmp437->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp437 = $tmp437->next;
}
$fn439 $tmp438 = $tmp437->methods[0];
frost$core$Int $tmp440 = $tmp438(((frost$collections$CollectionView*) $tmp436));
frost$collections$Array$init$frost$core$Int($tmp434, $tmp440);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
frost$collections$Array* $tmp441 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
*(&local0) = $tmp434;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:161
frost$collections$Array** $tmp442 = &param0->parameters;
frost$collections$Array* $tmp443 = *$tmp442;
ITable* $tmp444 = ((frost$collections$Iterable*) $tmp443)->$class->itable;
while ($tmp444->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp444 = $tmp444->next;
}
$fn446 $tmp445 = $tmp444->methods[0];
frost$collections$Iterator* $tmp447 = $tmp445(((frost$collections$Iterable*) $tmp443));
goto block1;
block1:;
ITable* $tmp448 = $tmp447->$class->itable;
while ($tmp448->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp448 = $tmp448->next;
}
$fn450 $tmp449 = $tmp448->methods[0];
frost$core$Bit $tmp451 = $tmp449($tmp447);
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp453 = $tmp447->$class->itable;
while ($tmp453->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp453 = $tmp453->next;
}
$fn455 $tmp454 = $tmp453->methods[1];
frost$core$Object* $tmp456 = $tmp454($tmp447);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp456)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp457 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local1) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp456);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:162
frost$collections$Array* $tmp458 = *(&local0);
org$frostlang$frostc$MethodDecl$Parameter* $tmp459 = *(&local1);
org$frostlang$frostc$Type** $tmp460 = &$tmp459->type;
org$frostlang$frostc$Type* $tmp461 = *$tmp460;
frost$collections$Array$add$frost$collections$Array$T($tmp458, ((frost$core$Object*) $tmp461));
frost$core$Frost$unref$frost$core$Object$Q($tmp456);
org$frostlang$frostc$MethodDecl$Parameter* $tmp462 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
*(&local1) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:164
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:165
org$frostlang$frostc$MethodDecl$Kind* $tmp463 = &param0->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp464 = *$tmp463;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp465;
$tmp465 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp465->value = $tmp464;
frost$core$Int $tmp466 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from MethodDecl.frost:165:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp467 = &(&local4)->$rawValue;
*$tmp467 = $tmp466;
org$frostlang$frostc$MethodDecl$Kind $tmp468 = *(&local4);
*(&local3) = $tmp468;
org$frostlang$frostc$MethodDecl$Kind $tmp469 = *(&local3);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp470;
$tmp470 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp470->value = $tmp469;
ITable* $tmp471 = ((frost$core$Equatable*) $tmp465)->$class->itable;
while ($tmp471->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp471 = $tmp471->next;
}
$fn473 $tmp472 = $tmp471->methods[0];
frost$core$Bit $tmp474 = $tmp472(((frost$core$Equatable*) $tmp465), ((frost$core$Equatable*) $tmp470));
bool $tmp475 = $tmp474.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp470)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp465)));
if ($tmp475) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:166
frost$core$Int $tmp476 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodDecl.frost:166:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp477 = &(&local6)->$rawValue;
*$tmp477 = $tmp476;
org$frostlang$frostc$Type$Kind $tmp478 = *(&local6);
*(&local5) = $tmp478;
org$frostlang$frostc$Type$Kind $tmp479 = *(&local5);
*(&local2) = $tmp479;
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:169
frost$core$Int $tmp480 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from MethodDecl.frost:169:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp481 = &(&local8)->$rawValue;
*$tmp481 = $tmp480;
org$frostlang$frostc$Type$Kind $tmp482 = *(&local8);
*(&local7) = $tmp482;
org$frostlang$frostc$Type$Kind $tmp483 = *(&local7);
*(&local2) = $tmp483;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:171
org$frostlang$frostc$Position* $tmp484 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp485 = *$tmp484;
org$frostlang$frostc$Type$Kind $tmp486 = *(&local2);
frost$collections$Array* $tmp487 = *(&local0);
org$frostlang$frostc$Type** $tmp488 = &param0->returnType;
org$frostlang$frostc$Type* $tmp489 = *$tmp488;
frost$core$Int $tmp490 = org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int(param0);
org$frostlang$frostc$Type* $tmp491 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(param1, $tmp485, $tmp486, ((frost$collections$ListView*) $tmp487), $tmp489, $tmp490);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
frost$collections$Array* $tmp492 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp491;

}
frost$core$String* org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(org$frostlang$frostc$MethodDecl* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:175
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp493 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String** $tmp494 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp495 = *$tmp494;
// begin inline call to function frost.core.String.get_asString():frost.core.String from MethodDecl.frost:175:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
frost$core$String* $tmp496 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp495, &$s497);
frost$core$MutableString$init$frost$core$String($tmp493, $tmp496);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
frost$core$MutableString* $tmp498 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
*(&local0) = $tmp493;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:176
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s499));
frost$core$String* $tmp500 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
*(&local1) = &$s501;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:177
frost$collections$Array** $tmp502 = &param0->parameters;
frost$collections$Array* $tmp503 = *$tmp502;
ITable* $tmp504 = ((frost$collections$Iterable*) $tmp503)->$class->itable;
while ($tmp504->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp504 = $tmp504->next;
}
$fn506 $tmp505 = $tmp504->methods[0];
frost$collections$Iterator* $tmp507 = $tmp505(((frost$collections$Iterable*) $tmp503));
goto block2;
block2:;
ITable* $tmp508 = $tmp507->$class->itable;
while ($tmp508->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp508 = $tmp508->next;
}
$fn510 $tmp509 = $tmp508->methods[0];
frost$core$Bit $tmp511 = $tmp509($tmp507);
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block4; else goto block3;
block3:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp513 = $tmp507->$class->itable;
while ($tmp513->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp513 = $tmp513->next;
}
$fn515 $tmp514 = $tmp513->methods[1];
frost$core$Object* $tmp516 = $tmp514($tmp507);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp516)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp517 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp516);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:178
frost$core$MutableString* $tmp518 = *(&local0);
frost$core$String* $tmp519 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp518, $tmp519);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:179
frost$core$MutableString* $tmp520 = *(&local0);
org$frostlang$frostc$MethodDecl$Parameter* $tmp521 = *(&local2);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from MethodDecl.frost:179:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn523 $tmp522 = ($fn523) ((frost$core$Object*) $tmp521)->$class->vtable[0];
frost$core$String* $tmp524 = $tmp522(((frost$core$Object*) $tmp521));
frost$core$MutableString$append$frost$core$String($tmp520, $tmp524);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:180
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s525));
frost$core$String* $tmp526 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
*(&local1) = &$s527;
frost$core$Frost$unref$frost$core$Object$Q($tmp516);
org$frostlang$frostc$MethodDecl$Parameter* $tmp528 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block2;
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:182
frost$core$MutableString* $tmp529 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp529, &$s530);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:183
org$frostlang$frostc$Type** $tmp531 = &param0->returnType;
org$frostlang$frostc$Type* $tmp532 = *$tmp531;
frost$core$String** $tmp533 = &((org$frostlang$frostc$Symbol*) $tmp532)->name;
frost$core$String* $tmp534 = *$tmp533;
ITable* $tmp536 = ((frost$core$Equatable*) $tmp534)->$class->itable;
while ($tmp536->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp536 = $tmp536->next;
}
$fn538 $tmp537 = $tmp536->methods[1];
frost$core$Bit $tmp539 = $tmp537(((frost$core$Equatable*) $tmp534), ((frost$core$Equatable*) &$s535));
bool $tmp540 = $tmp539.value;
if ($tmp540) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:184
frost$core$MutableString* $tmp541 = *(&local0);
org$frostlang$frostc$Type** $tmp542 = &param0->returnType;
org$frostlang$frostc$Type* $tmp543 = *$tmp542;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodDecl.frost:184:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn545 $tmp544 = ($fn545) ((frost$core$Object*) $tmp543)->$class->vtable[0];
frost$core$String* $tmp546 = $tmp544(((frost$core$Object*) $tmp543));
frost$core$String* $tmp547 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s548, $tmp546);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
frost$core$String* $tmp549 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp547, &$s550);
frost$core$MutableString$append$frost$core$String($tmp541, $tmp549);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
goto block7;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:186
frost$core$MutableString* $tmp551 = *(&local0);
frost$core$String* $tmp552 = frost$core$MutableString$finish$R$frost$core$String($tmp551);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
frost$core$String* $tmp553 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp554 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp552;

}
frost$core$String* org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String(org$frostlang$frostc$MethodDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:190
org$frostlang$frostc$MethodDecl$Kind* $tmp555 = &param0->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp556 = *$tmp555;
frost$core$Int $tmp557 = $tmp556.$rawValue;
frost$core$Int $tmp558 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:191:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp559 = $tmp557.value;
int64_t $tmp560 = $tmp558.value;
bool $tmp561 = $tmp559 == $tmp560;
frost$core$Bit $tmp562 = (frost$core$Bit) {$tmp561};
bool $tmp563 = $tmp562.value;
if ($tmp563) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:192
frost$core$Weak** $tmp564 = &param0->owner;
frost$core$Weak* $tmp565 = *$tmp564;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodDecl.frost:192:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp566 = &$tmp565->_valid;
frost$core$Bit $tmp567 = *$tmp566;
bool $tmp568 = $tmp567.value;
if ($tmp568) goto block7; else goto block8;
block8:;
frost$core$Int $tmp569 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s570, $tmp569);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp571 = &$tmp565->value;
frost$core$Object* $tmp572 = *$tmp571;
frost$core$Frost$ref$frost$core$Object$Q($tmp572);
frost$core$String** $tmp573 = &((org$frostlang$frostc$ClassDecl*) $tmp572)->name;
frost$core$String* $tmp574 = *$tmp573;
frost$core$String* $tmp575 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s576, $tmp574);
frost$core$String* $tmp577 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp575, &$s578);
frost$core$String* $tmp579 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp580 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp577, $tmp579);
frost$core$String* $tmp581 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp580, &$s582);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
frost$core$Frost$unref$frost$core$Object$Q($tmp572);
return $tmp581;
block3:;
frost$core$Int $tmp583 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:194:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp584 = $tmp557.value;
int64_t $tmp585 = $tmp583.value;
bool $tmp586 = $tmp584 == $tmp585;
frost$core$Bit $tmp587 = (frost$core$Bit) {$tmp586};
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:195
frost$core$Weak** $tmp589 = &param0->owner;
frost$core$Weak* $tmp590 = *$tmp589;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodDecl.frost:195:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp591 = &$tmp590->_valid;
frost$core$Bit $tmp592 = *$tmp591;
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block14; else goto block15;
block15:;
frost$core$Int $tmp594 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s595, $tmp594);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp596 = &$tmp590->value;
frost$core$Object* $tmp597 = *$tmp596;
frost$core$Frost$ref$frost$core$Object$Q($tmp597);
frost$core$String** $tmp598 = &((org$frostlang$frostc$ClassDecl*) $tmp597)->name;
frost$core$String* $tmp599 = *$tmp598;
frost$core$String* $tmp600 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s601, $tmp599);
frost$core$String* $tmp602 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp600, &$s603);
frost$core$String* $tmp604 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp605 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp602, $tmp604);
frost$core$String* $tmp606 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp605, &$s607);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
frost$core$Frost$unref$frost$core$Object$Q($tmp597);
return $tmp606;
block10:;
frost$core$Int $tmp608 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MethodDecl.frost:197:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp609 = $tmp557.value;
int64_t $tmp610 = $tmp608.value;
bool $tmp611 = $tmp609 == $tmp610;
frost$core$Bit $tmp612 = (frost$core$Bit) {$tmp611};
bool $tmp613 = $tmp612.value;
if ($tmp613) goto block16; else goto block1;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:198
frost$core$Weak** $tmp614 = &param0->owner;
frost$core$Weak* $tmp615 = *$tmp614;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from MethodDecl.frost:198:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp616 = &$tmp615->_valid;
frost$core$Bit $tmp617 = *$tmp616;
bool $tmp618 = $tmp617.value;
if ($tmp618) goto block20; else goto block21;
block21:;
frost$core$Int $tmp619 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s620, $tmp619);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp621 = &$tmp615->value;
frost$core$Object* $tmp622 = *$tmp621;
frost$core$Frost$ref$frost$core$Object$Q($tmp622);
frost$core$String** $tmp623 = &((org$frostlang$frostc$ClassDecl*) $tmp622)->name;
frost$core$String* $tmp624 = *$tmp623;
// begin inline call to function frost.core.String.get_asString():frost.core.String from MethodDecl.frost:198:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
frost$core$String* $tmp625 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp624, &$s626);
frost$core$String* $tmp627 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp628 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp625, $tmp627);
frost$core$String* $tmp629 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp628, &$s630);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
frost$core$Frost$unref$frost$core$Object$Q($tmp622);
return $tmp629;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:201
frost$core$Int $tmp631 = (frost$core$Int) {201u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s632, $tmp631);
abort(); // unreachable

}
frost$core$String* org$frostlang$frostc$MethodDecl$get_asString$R$frost$core$String(org$frostlang$frostc$MethodDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:206
org$frostlang$frostc$FixedArray** $tmp633 = &param0->body;
org$frostlang$frostc$FixedArray* $tmp634 = *$tmp633;
frost$core$Bit $tmp635 = (frost$core$Bit) {$tmp634 != NULL};
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:207
org$frostlang$frostc$Annotations** $tmp637 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp638 = *$tmp637;
frost$core$String* $tmp639 = org$frostlang$frostc$Annotations$get_asString$R$frost$core$String($tmp638);
frost$core$String* $tmp640 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp639, &$s641);
frost$core$String* $tmp642 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$String* $tmp643 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp640, $tmp642);
frost$core$String* $tmp644 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp643, &$s645);
org$frostlang$frostc$FixedArray** $tmp646 = &param0->body;
org$frostlang$frostc$FixedArray* $tmp647 = *$tmp646;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MethodDecl.frost:207:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn649 $tmp648 = ($fn649) ((frost$core$Object*) $tmp647)->$class->vtable[0];
frost$core$String* $tmp650 = $tmp648(((frost$core$Object*) $tmp647));
frost$core$String* $tmp651 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp644, $tmp650);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
frost$core$String* $tmp652 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp651, &$s653);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
return $tmp652;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:209
frost$core$String* $tmp654 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
return $tmp654;

}
void org$frostlang$frostc$MethodDecl$cleanup(org$frostlang$frostc$MethodDecl* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:6
org$frostlang$frostc$Symbol$cleanup(((org$frostlang$frostc$Symbol*) param0));
frost$core$Weak** $tmp655 = &param0->owner;
frost$core$Weak* $tmp656 = *$tmp655;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$String** $tmp657 = &param0->doccomment;
frost$core$String* $tmp658 = *$tmp657;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
org$frostlang$frostc$Annotations** $tmp659 = &param0->annotations;
org$frostlang$frostc$Annotations* $tmp660 = *$tmp659;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
frost$collections$Array** $tmp661 = &param0->genericParameters;
frost$collections$Array* $tmp662 = *$tmp661;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
frost$collections$Array** $tmp663 = &param0->parameters;
frost$collections$Array* $tmp664 = *$tmp663;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
org$frostlang$frostc$Type** $tmp665 = &param0->returnType;
org$frostlang$frostc$Type* $tmp666 = *$tmp665;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
org$frostlang$frostc$FixedArray** $tmp667 = &param0->body;
org$frostlang$frostc$FixedArray* $tmp668 = *$tmp667;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
frost$core$Weak** $tmp669 = &param0->overridden;
frost$core$Weak* $tmp670 = *$tmp669;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
return;

}

