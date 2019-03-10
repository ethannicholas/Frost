#include "org/frostlang/frostc/frostdoc/LinkResolver.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Equatable.h"
#include "frost/core/MutableString.h"
#include "frost/core/String/MatchIterator.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/Iterable.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/core/String/Index.h"
#include "frost/core/Matcher.h"
#include "frost/io/File.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "org/frostlang/frostc/parser/Token.h"
#include "frost/core/RegularExpression.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "org/frostlang/frostc/parser/Parser.h"
#include "frost/io/Console.h"
#include "org/frostlang/frostc/Scanner.h"
#include "org/frostlang/frostc/Methods.h"
#include "org/frostlang/frostc/FixedArray.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$LinkResolver$class_type org$frostlang$frostc$frostdoc$LinkResolver$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$LinkResolver$cleanup, org$frostlang$frostc$frostdoc$LinkResolver$matches$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$frost$core$Bit, org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$ClassDecl$R$frost$core$String, org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$FieldDecl$R$frost$core$String$Q, org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$MethodDecl$R$frost$core$String$Q, org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$Symbol$R$frost$core$String$Q, org$frostlang$frostc$frostdoc$LinkResolver$resolve$frost$core$String$R$frost$core$String$Q} };

typedef frost$core$Int64 (*$fn15)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn19)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn30)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn62)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn81)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn85)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn124)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn207)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$String* (*$fn230)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$ClassDecl*);
typedef frost$collections$Iterator* (*$fn247)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn251)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn256)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn266)(frost$core$Object*);
typedef frost$core$Bit (*$fn281)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn290)(frost$core$Object*);
typedef frost$core$String* (*$fn312)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$FieldDecl*);
typedef frost$core$String* (*$fn321)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*);
typedef frost$core$String* (*$fn342)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$String* (*$fn366)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$Symbol*);
typedef frost$core$String* (*$fn413)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$Symbol*);
typedef frost$core$Object* (*$fn488)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn494)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn502)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn516)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn522)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn543)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn597)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn616)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn683)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*, frost$collections$ListView*);
typedef frost$core$String* (*$fn688)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$Symbol*);
typedef frost$collections$Iterator* (*$fn708)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn712)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn717)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn723)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*, frost$collections$ListView*);
typedef frost$core$String* (*$fn728)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72", 42, 561282631868116756, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 95, -978164725716003980, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e\x2f", 3, -587371103437254554, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23", 1, -5808625042874858702, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23", 1, -5808625042874858702, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 3563412735833858527, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, -5808628341409743335, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 4071416011722950258, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 3062186500626132942, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x74\x74\x70", 4, -8614080090317487483, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s350 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x77\x2b", 3, -5621372931950450467, NULL };
static frost$core$String $s372 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a", 13, -3737132400950803795, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a\x29\x5c\x28\x28\x2e\x2a\x29\x5c\x29", 23, -3548194912101010482, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s546 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x70\x61\x72\x73\x65\x3a\x20", 17, -794231800371556794, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s624 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };

void org$frostlang$frostc$frostdoc$LinkResolver$init$org$frostlang$frostc$Compiler$frost$core$String(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$Compiler* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:23
org$frostlang$frostc$frostdoc$LinkResolver$init$org$frostlang$frostc$Compiler$frost$core$String$org$frostlang$frostc$ClassDecl$Q(param0, param1, param2, ((org$frostlang$frostc$ClassDecl*) NULL));
return;

}
void org$frostlang$frostc$frostdoc$LinkResolver$init$org$frostlang$frostc$Compiler$frost$core$String$org$frostlang$frostc$ClassDecl$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$Compiler* param1, frost$core$String* param2, org$frostlang$frostc$ClassDecl* param3) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:27
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:28
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp5 = &param0->apiRelativePath;
frost$core$String* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$core$String** $tmp7 = &param0->apiRelativePath;
*$tmp7 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ClassDecl** $tmp8 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
org$frostlang$frostc$ClassDecl** $tmp10 = &param0->context;
*$tmp10 = param3;
return;

}
frost$core$Bit org$frostlang$frostc$frostdoc$LinkResolver$matches$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$frost$core$Bit(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$MethodDecl* param1, frost$collections$ListView* param2) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:33
frost$collections$Array** $tmp11 = &param1->parameters;
frost$collections$Array* $tmp12 = *$tmp11;
ITable* $tmp13 = ((frost$collections$CollectionView*) $tmp12)->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
$fn15 $tmp14 = $tmp13->methods[0];
frost$core$Int64 $tmp16 = $tmp14(((frost$collections$CollectionView*) $tmp12));
ITable* $tmp17 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp17 = $tmp17->next;
}
$fn19 $tmp18 = $tmp17->methods[0];
frost$core$Int64 $tmp20 = $tmp18(((frost$collections$CollectionView*) param2));
int64_t $tmp21 = $tmp16.value;
int64_t $tmp22 = $tmp20.value;
bool $tmp23 = $tmp21 != $tmp22;
frost$core$Bit $tmp24 = (frost$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:34
frost$core$Bit $tmp26 = (frost$core$Bit) {false};
return $tmp26;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:36
frost$core$Int64 $tmp27 = (frost$core$Int64) {0u};
ITable* $tmp28 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp28 = $tmp28->next;
}
$fn30 $tmp29 = $tmp28->methods[0];
frost$core$Int64 $tmp31 = $tmp29(((frost$collections$CollectionView*) param2));
frost$core$Bit $tmp32 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp33 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp27, $tmp31, $tmp32);
frost$core$Int64 $tmp34 = $tmp33.min;
*(&local0) = $tmp34;
frost$core$Int64 $tmp35 = $tmp33.max;
frost$core$Bit $tmp36 = $tmp33.inclusive;
bool $tmp37 = $tmp36.value;
frost$core$Int64 $tmp38 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp39 = $tmp38.value;
frost$core$UInt64 $tmp40 = (frost$core$UInt64) {((uint64_t) $tmp39)};
if ($tmp37) goto block7; else goto block8;
block7:;
int64_t $tmp41 = $tmp34.value;
int64_t $tmp42 = $tmp35.value;
bool $tmp43 = $tmp41 <= $tmp42;
frost$core$Bit $tmp44 = (frost$core$Bit) {$tmp43};
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block4; else goto block5;
block8:;
int64_t $tmp46 = $tmp34.value;
int64_t $tmp47 = $tmp35.value;
bool $tmp48 = $tmp46 < $tmp47;
frost$core$Bit $tmp49 = (frost$core$Bit) {$tmp48};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:37
frost$collections$Array** $tmp51 = &param1->parameters;
frost$collections$Array* $tmp52 = *$tmp51;
frost$core$Int64 $tmp53 = *(&local0);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from LinkResolver.frost:37:28
frost$core$Int64 $tmp54 = (frost$core$Int64) {0u};
int64_t $tmp55 = $tmp53.value;
int64_t $tmp56 = $tmp54.value;
bool $tmp57 = $tmp55 >= $tmp56;
frost$core$Bit $tmp58 = (frost$core$Bit) {$tmp57};
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block14; else goto block13;
block14:;
ITable* $tmp60 = ((frost$collections$CollectionView*) $tmp52)->$class->itable;
while ($tmp60->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp60 = $tmp60->next;
}
$fn62 $tmp61 = $tmp60->methods[0];
frost$core$Int64 $tmp63 = $tmp61(((frost$collections$CollectionView*) $tmp52));
int64_t $tmp64 = $tmp53.value;
int64_t $tmp65 = $tmp63.value;
bool $tmp66 = $tmp64 < $tmp65;
frost$core$Bit $tmp67 = (frost$core$Bit) {$tmp66};
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp69 = (frost$core$Int64) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s70, $tmp69, &$s71);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp72 = &$tmp52->data;
frost$core$Object** $tmp73 = *$tmp72;
int64_t $tmp74 = $tmp53.value;
frost$core$Object* $tmp75 = $tmp73[$tmp74];
frost$core$Frost$ref$frost$core$Object$Q($tmp75);
org$frostlang$frostc$Type** $tmp76 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp75)->type;
org$frostlang$frostc$Type* $tmp77 = *$tmp76;
frost$core$Int64 $tmp78 = *(&local0);
ITable* $tmp79 = param2->$class->itable;
while ($tmp79->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp79 = $tmp79->next;
}
$fn81 $tmp80 = $tmp79->methods[0];
frost$core$Object* $tmp82 = $tmp80(param2, $tmp78);
ITable* $tmp83 = ((frost$core$Equatable*) $tmp77)->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp83 = $tmp83->next;
}
$fn85 $tmp84 = $tmp83->methods[1];
frost$core$Bit $tmp86 = $tmp84(((frost$core$Equatable*) $tmp77), ((frost$core$Equatable*) ((org$frostlang$frostc$Type*) $tmp82)));
bool $tmp87 = $tmp86.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp82);
frost$core$Frost$unref$frost$core$Object$Q($tmp75);
if ($tmp87) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:38
frost$core$Bit $tmp88 = (frost$core$Bit) {false};
return $tmp88;
block10:;
frost$core$Int64 $tmp89 = *(&local0);
int64_t $tmp90 = $tmp35.value;
int64_t $tmp91 = $tmp89.value;
int64_t $tmp92 = $tmp90 - $tmp91;
frost$core$Int64 $tmp93 = (frost$core$Int64) {$tmp92};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp94 = $tmp93.value;
frost$core$UInt64 $tmp95 = (frost$core$UInt64) {((uint64_t) $tmp94)};
if ($tmp37) goto block17; else goto block18;
block17:;
uint64_t $tmp96 = $tmp95.value;
uint64_t $tmp97 = $tmp40.value;
bool $tmp98 = $tmp96 >= $tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block15; else goto block5;
block18:;
uint64_t $tmp101 = $tmp95.value;
uint64_t $tmp102 = $tmp40.value;
bool $tmp103 = $tmp101 > $tmp102;
frost$core$Bit $tmp104 = (frost$core$Bit) {$tmp103};
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block15; else goto block5;
block15:;
int64_t $tmp106 = $tmp89.value;
int64_t $tmp107 = $tmp38.value;
int64_t $tmp108 = $tmp106 + $tmp107;
frost$core$Int64 $tmp109 = (frost$core$Int64) {$tmp108};
*(&local0) = $tmp109;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:41
frost$core$Bit $tmp110 = (frost$core$Bit) {true};
return $tmp110;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$ClassDecl$R$frost$core$String(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$Int64 local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:45
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:46
org$frostlang$frostc$ClassDecl** $tmp111 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp112 = *$tmp111;
frost$core$Bit $tmp113 = (frost$core$Bit) {$tmp112 != NULL};
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:47
org$frostlang$frostc$ClassDecl** $tmp115 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp116 = *$tmp115;
frost$core$String** $tmp117 = &$tmp116->name;
frost$core$String* $tmp118 = *$tmp117;
// begin inline call to function frost.core.String.find(needle:frost.core.String):frost.collections.Iterator<frost.core.String.Index> from LinkResolver.frost:47:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1186
frost$core$Bit $tmp119 = (frost$core$Bit) {false};
// begin inline call to function frost.core.String.find(needle:frost.core.String, overlapping:frost.core.Bit):frost.collections.Iterator<frost.core.String.Index> from String.frost:1186:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1190
FROST_ASSERT(48 == sizeof(frost$core$String$MatchIterator));
frost$core$String$MatchIterator* $tmp120 = (frost$core$String$MatchIterator*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$MatchIterator$class);
frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit($tmp120, $tmp118, &$s121, $tmp119);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp120)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp120)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp120)));
ITable* $tmp122 = ((frost$collections$Iterator*) $tmp120)->$class->itable;
while ($tmp122->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp122 = $tmp122->next;
}
$fn124 $tmp123 = $tmp122->methods[2];
frost$core$Int64 $tmp125 = $tmp123(((frost$collections$Iterator*) $tmp120));
// begin inline call to function frost.core.String.*(count:frost.core.Int64):frost.core.String from LinkResolver.frost:47:27
frost$core$Int64 $tmp126 = (frost$core$Int64) {0u};
int64_t $tmp127 = $tmp125.value;
int64_t $tmp128 = $tmp126.value;
bool $tmp129 = $tmp127 >= $tmp128;
frost$core$Bit $tmp130 = (frost$core$Bit) {$tmp129};
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp132 = (frost$core$Int64) {567u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s133, $tmp132, &$s134);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:568
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp135 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp135);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$MutableString* $tmp136 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local1) = $tmp135;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:569
frost$core$Int64 $tmp137 = (frost$core$Int64) {0u};
frost$core$Bit $tmp138 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp139 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp137, $tmp125, $tmp138);
frost$core$Int64 $tmp140 = $tmp139.min;
*(&local2) = $tmp140;
frost$core$Int64 $tmp141 = $tmp139.max;
frost$core$Bit $tmp142 = $tmp139.inclusive;
bool $tmp143 = $tmp142.value;
frost$core$Int64 $tmp144 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp145 = $tmp144.value;
frost$core$UInt64 $tmp146 = (frost$core$UInt64) {((uint64_t) $tmp145)};
if ($tmp143) goto block13; else goto block14;
block13:;
int64_t $tmp147 = $tmp140.value;
int64_t $tmp148 = $tmp141.value;
bool $tmp149 = $tmp147 <= $tmp148;
frost$core$Bit $tmp150 = (frost$core$Bit) {$tmp149};
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block10; else goto block11;
block14:;
int64_t $tmp152 = $tmp140.value;
int64_t $tmp153 = $tmp141.value;
bool $tmp154 = $tmp152 < $tmp153;
frost$core$Bit $tmp155 = (frost$core$Bit) {$tmp154};
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:570
frost$core$MutableString* $tmp157 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp157, &$s158);
frost$core$Int64 $tmp159 = *(&local2);
int64_t $tmp160 = $tmp141.value;
int64_t $tmp161 = $tmp159.value;
int64_t $tmp162 = $tmp160 - $tmp161;
frost$core$Int64 $tmp163 = (frost$core$Int64) {$tmp162};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp164 = $tmp163.value;
frost$core$UInt64 $tmp165 = (frost$core$UInt64) {((uint64_t) $tmp164)};
if ($tmp143) goto block17; else goto block18;
block17:;
uint64_t $tmp166 = $tmp165.value;
uint64_t $tmp167 = $tmp146.value;
bool $tmp168 = $tmp166 >= $tmp167;
frost$core$Bit $tmp169 = (frost$core$Bit) {$tmp168};
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block15; else goto block11;
block18:;
uint64_t $tmp171 = $tmp165.value;
uint64_t $tmp172 = $tmp146.value;
bool $tmp173 = $tmp171 > $tmp172;
frost$core$Bit $tmp174 = (frost$core$Bit) {$tmp173};
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block15; else goto block11;
block15:;
int64_t $tmp176 = $tmp159.value;
int64_t $tmp177 = $tmp144.value;
int64_t $tmp178 = $tmp176 + $tmp177;
frost$core$Int64 $tmp179 = (frost$core$Int64) {$tmp178};
*(&local2) = $tmp179;
goto block10;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:572
frost$core$MutableString* $tmp180 = *(&local1);
frost$core$String* $tmp181 = frost$core$MutableString$finish$R$frost$core$String($tmp180);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$MutableString* $tmp182 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$String* $tmp183 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local0) = $tmp181;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp120)));
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:50
frost$core$String** $tmp184 = &param0->apiRelativePath;
frost$core$String* $tmp185 = *$tmp184;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$core$String* $tmp186 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local0) = $tmp185;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:52
frost$core$String* $tmp187 = *(&local0);
frost$core$String** $tmp188 = &param1->name;
frost$core$String* $tmp189 = *$tmp188;
frost$core$String* $tmp190 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp189, &$s191, &$s192);
frost$core$String* $tmp193 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp187, $tmp190);
frost$core$String* $tmp194 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp193, &$s195);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
frost$core$String* $tmp196 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local0) = ((frost$core$String*) NULL);
return $tmp194;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$FieldDecl$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$FieldDecl* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:56
frost$core$Weak** $tmp197 = &param1->owner;
frost$core$Weak* $tmp198 = *$tmp197;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LinkResolver.frost:56:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp199 = &$tmp198->_valid;
frost$core$Bit $tmp200 = *$tmp199;
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp202 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s203, $tmp202);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp204 = &$tmp198->value;
frost$core$Object* $tmp205 = *$tmp204;
frost$core$Frost$ref$frost$core$Object$Q($tmp205);
$fn207 $tmp206 = ($fn207) param0->$class->vtable[3];
frost$core$String* $tmp208 = $tmp206(param0, ((org$frostlang$frostc$ClassDecl*) $tmp205));
frost$core$String** $tmp209 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp210 = *$tmp209;
frost$core$String* $tmp211 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s212, $tmp210);
frost$core$String* $tmp213 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp211, &$s214);
frost$core$String* $tmp215 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp208, $tmp213);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Frost$unref$frost$core$Object$Q($tmp205);
return $tmp215;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$MethodDecl$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:60
org$frostlang$frostc$Compiler** $tmp216 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp217 = *$tmp216;
frost$core$Bit $tmp218 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit($tmp217, param1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:61
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp219 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$Weak** $tmp220 = &param1->owner;
frost$core$Weak* $tmp221 = *$tmp220;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LinkResolver.frost:61:45
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp222 = &$tmp221->_valid;
frost$core$Bit $tmp223 = *$tmp222;
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp225 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s226, $tmp225);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Weak.frost:41
frost$core$Object** $tmp227 = &$tmp221->value;
frost$core$Object* $tmp228 = *$tmp227;
frost$core$Frost$ref$frost$core$Object$Q($tmp228);
$fn230 $tmp229 = ($fn230) param0->$class->vtable[3];
frost$core$String* $tmp231 = $tmp229(param0, ((org$frostlang$frostc$ClassDecl*) $tmp228));
frost$core$MutableString$init$frost$core$String($tmp219, $tmp231);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
frost$core$MutableString* $tmp232 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
*(&local0) = $tmp219;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Frost$unref$frost$core$Object$Q($tmp228);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:62
frost$core$MutableString* $tmp233 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp233, &$s234);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:63
frost$core$MutableString* $tmp235 = *(&local0);
frost$core$String** $tmp236 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp237 = *$tmp236;
frost$core$MutableString$append$frost$core$String($tmp235, $tmp237);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:64
frost$core$MutableString* $tmp238 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp238, &$s239);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:65
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s240));
frost$core$String* $tmp241 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local1) = &$s242;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:66
frost$collections$Array** $tmp243 = &param1->parameters;
frost$collections$Array* $tmp244 = *$tmp243;
ITable* $tmp245 = ((frost$collections$Iterable*) $tmp244)->$class->itable;
while ($tmp245->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp245 = $tmp245->next;
}
$fn247 $tmp246 = $tmp245->methods[0];
frost$collections$Iterator* $tmp248 = $tmp246(((frost$collections$Iterable*) $tmp244));
goto block5;
block5:;
ITable* $tmp249 = $tmp248->$class->itable;
while ($tmp249->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp249 = $tmp249->next;
}
$fn251 $tmp250 = $tmp249->methods[0];
frost$core$Bit $tmp252 = $tmp250($tmp248);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block7; else goto block6;
block6:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp254 = $tmp248->$class->itable;
while ($tmp254->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp254 = $tmp254->next;
}
$fn256 $tmp255 = $tmp254->methods[1];
frost$core$Object* $tmp257 = $tmp255($tmp248);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp257)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp258 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp257);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:67
frost$core$MutableString* $tmp259 = *(&local0);
frost$core$String* $tmp260 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp259, $tmp260);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:68
frost$core$MutableString* $tmp261 = *(&local0);
org$frostlang$frostc$MethodDecl$Parameter* $tmp262 = *(&local2);
org$frostlang$frostc$Type** $tmp263 = &$tmp262->type;
org$frostlang$frostc$Type* $tmp264 = *$tmp263;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from LinkResolver.frost:68:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:150
$fn266 $tmp265 = ($fn266) ((frost$core$Object*) $tmp264)->$class->vtable[0];
frost$core$String* $tmp267 = $tmp265(((frost$core$Object*) $tmp264));
frost$core$MutableString$append$frost$core$String($tmp261, $tmp267);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:69
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s268));
frost$core$String* $tmp269 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local1) = &$s270;
frost$core$Frost$unref$frost$core$Object$Q($tmp257);
org$frostlang$frostc$MethodDecl$Parameter* $tmp271 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:71
frost$core$MutableString* $tmp272 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp272, &$s273);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:72
org$frostlang$frostc$Type** $tmp274 = &param1->returnType;
org$frostlang$frostc$Type* $tmp275 = *$tmp274;
frost$core$String** $tmp276 = &((org$frostlang$frostc$Symbol*) $tmp275)->name;
frost$core$String* $tmp277 = *$tmp276;
ITable* $tmp279 = ((frost$core$Equatable*) $tmp277)->$class->itable;
while ($tmp279->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp279 = $tmp279->next;
}
$fn281 $tmp280 = $tmp279->methods[1];
frost$core$Bit $tmp282 = $tmp280(((frost$core$Equatable*) $tmp277), ((frost$core$Equatable*) &$s278));
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:73
frost$core$MutableString* $tmp284 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp284, &$s285);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:74
frost$core$MutableString* $tmp286 = *(&local0);
org$frostlang$frostc$Type** $tmp287 = &param1->returnType;
org$frostlang$frostc$Type* $tmp288 = *$tmp287;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from LinkResolver.frost:74:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:150
$fn290 $tmp289 = ($fn290) ((frost$core$Object*) $tmp288)->$class->vtable[0];
frost$core$String* $tmp291 = $tmp289(((frost$core$Object*) $tmp288));
frost$core$MutableString$append$frost$core$String($tmp286, $tmp291);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:76
frost$core$MutableString* $tmp292 = *(&local0);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp292, &$s293, &$s294);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:77
frost$core$MutableString* $tmp295 = *(&local0);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp295, &$s296, &$s297);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:78
frost$core$MutableString* $tmp298 = *(&local0);
frost$core$String* $tmp299 = frost$core$MutableString$finish$R$frost$core$String($tmp298);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$String* $tmp300 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp301 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp299;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$Symbol$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$Symbol* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:82
org$frostlang$frostc$Symbol$Kind* $tmp302 = &param1->kind;
org$frostlang$frostc$Symbol$Kind $tmp303 = *$tmp302;
frost$core$Int64 $tmp304 = $tmp303.$rawValue;
frost$core$Int64 $tmp305 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LinkResolver.frost:83:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp306 = $tmp304.value;
int64_t $tmp307 = $tmp305.value;
bool $tmp308 = $tmp306 == $tmp307;
frost$core$Bit $tmp309 = (frost$core$Bit) {$tmp308};
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:84
$fn312 $tmp311 = ($fn312) param0->$class->vtable[4];
frost$core$String* $tmp313 = $tmp311(param0, ((org$frostlang$frostc$FieldDecl*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
return $tmp313;
block3:;
frost$core$Int64 $tmp314 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LinkResolver.frost:86:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp315 = $tmp304.value;
int64_t $tmp316 = $tmp314.value;
bool $tmp317 = $tmp315 == $tmp316;
frost$core$Bit $tmp318 = (frost$core$Bit) {$tmp317};
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:87
$fn321 $tmp320 = ($fn321) param0->$class->vtable[5];
frost$core$String* $tmp322 = $tmp320(param0, ((org$frostlang$frostc$MethodDecl*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
return $tmp322;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:90
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
return ((frost$core$String*) NULL);
block1:;
goto block8;
block8:;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$resolve$frost$core$String$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, frost$core$String* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$Symbol* local1 = NULL;
frost$core$String$Index$nullable local2;
org$frostlang$frostc$Symbol* local3 = NULL;
frost$collections$ListView* local4 = NULL;
frost$core$Matcher* local5 = NULL;
frost$collections$Array* local6 = NULL;
frost$core$Int64 local7;
frost$collections$ListView* local8 = NULL;
frost$collections$Array* local9 = NULL;
frost$io$File* local10 = NULL;
org$frostlang$frostc$ASTNode* local11 = NULL;
org$frostlang$frostc$Type* local12 = NULL;
org$frostlang$frostc$Type* local13 = NULL;
org$frostlang$frostc$parser$Token$Kind local14;
org$frostlang$frostc$parser$Token$Kind local15;
org$frostlang$frostc$parser$Token$nullable local16;
org$frostlang$frostc$parser$Token local17;
frost$core$String* local18 = NULL;
frost$core$String$Index$nullable local19;
frost$core$String* local20 = NULL;
org$frostlang$frostc$Symbol* local21 = NULL;
org$frostlang$frostc$MethodDecl* local22 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:96
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from LinkResolver.frost:96:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:967
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.frost:967:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:978
frost$core$String$Index $tmp323 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$String$Index$nullable $tmp324 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param1, &$s325, $tmp323);
frost$core$Bit $tmp326 = (frost$core$Bit) {$tmp324.nonnull};
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block1; else goto block3;
block3:;
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from LinkResolver.frost:96:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:967
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.frost:967:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:978
frost$core$String$Index $tmp328 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$String$Index$nullable $tmp329 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param1, &$s330, $tmp328);
frost$core$Bit $tmp331 = (frost$core$Bit) {$tmp329.nonnull};
bool $tmp332 = $tmp331.value;
if ($tmp332) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:97
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:99
org$frostlang$frostc$Compiler** $tmp333 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp334 = *$tmp333;
org$frostlang$frostc$ClassDecl* $tmp335 = org$frostlang$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlang$frostc$ClassDecl$Q($tmp334, param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
org$frostlang$frostc$ClassDecl* $tmp336 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
*(&local0) = $tmp335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:100
org$frostlang$frostc$ClassDecl* $tmp337 = *(&local0);
frost$core$Bit $tmp338 = (frost$core$Bit) {$tmp337 != NULL};
bool $tmp339 = $tmp338.value;
if ($tmp339) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:101
org$frostlang$frostc$ClassDecl* $tmp340 = *(&local0);
$fn342 $tmp341 = ($fn342) param0->$class->vtable[3];
frost$core$String* $tmp343 = $tmp341(param0, $tmp340);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
org$frostlang$frostc$ClassDecl* $tmp344 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp343;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:103
org$frostlang$frostc$ClassDecl** $tmp345 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp346 = *$tmp345;
frost$core$Bit $tmp347 = (frost$core$Bit) {$tmp346 != NULL};
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block12; else goto block11;
block12:;
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp349 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp349, &$s350);
// begin inline call to function frost.core.String.matches(regex:frost.core.RegularExpression):frost.core.Bit from LinkResolver.frost:103:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1047
frost$core$Matcher* $tmp351 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp349, param1);
frost$core$Bit $tmp352;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp352, $tmp351);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
bool $tmp353 = $tmp352.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
if ($tmp353) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:104
org$frostlang$frostc$Compiler** $tmp354 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp355 = *$tmp354;
org$frostlang$frostc$ClassDecl** $tmp356 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp357 = *$tmp356;
org$frostlang$frostc$SymbolTable* $tmp358 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp355, $tmp357);
org$frostlang$frostc$Symbol* $tmp359 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp358, param1);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
org$frostlang$frostc$Symbol* $tmp360 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local1) = $tmp359;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:105
org$frostlang$frostc$Symbol* $tmp361 = *(&local1);
frost$core$Bit $tmp362 = (frost$core$Bit) {$tmp361 != NULL};
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:106
org$frostlang$frostc$Symbol* $tmp364 = *(&local1);
$fn366 $tmp365 = ($fn366) param0->$class->vtable[6];
frost$core$String* $tmp367 = $tmp365(param0, $tmp364);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
org$frostlang$frostc$Symbol* $tmp368 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp369 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp367;
block15:;
org$frostlang$frostc$Symbol* $tmp370 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:109
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp371 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp371, &$s372);
// begin inline call to function frost.core.String.matches(regex:frost.core.RegularExpression):frost.core.Bit from LinkResolver.frost:109:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1047
frost$core$Matcher* $tmp373 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp371, param1);
frost$core$Bit $tmp374;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp374, $tmp373);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
bool $tmp375 = $tmp374.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
if ($tmp375) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:110
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from LinkResolver.frost:110:42
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int64* $tmp376 = &param1->_length;
frost$core$Int64 $tmp377 = *$tmp376;
frost$core$String$Index $tmp378 = frost$core$String$Index$init$frost$core$Int64($tmp377);
frost$core$String$Index$nullable $tmp379 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param1, &$s380, $tmp378);
*(&local2) = $tmp379;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:111
frost$core$String$Index$nullable $tmp381 = *(&local2);
frost$core$Bit $tmp382 = (frost$core$Bit) {$tmp381.nonnull};
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:112
org$frostlang$frostc$Compiler** $tmp384 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp385 = *$tmp384;
frost$core$String$Index$nullable $tmp386 = *(&local2);
frost$core$Bit $tmp387 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp388 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp386, $tmp387);
frost$core$String* $tmp389 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp388);
org$frostlang$frostc$ClassDecl* $tmp390 = org$frostlang$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlang$frostc$ClassDecl$Q($tmp385, $tmp389);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
org$frostlang$frostc$ClassDecl* $tmp391 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
*(&local0) = $tmp390;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:113
org$frostlang$frostc$ClassDecl* $tmp392 = *(&local0);
frost$core$Bit $tmp393 = (frost$core$Bit) {$tmp392 != NULL};
bool $tmp394 = $tmp393.value;
if ($tmp394) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:114
org$frostlang$frostc$Compiler** $tmp395 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp396 = *$tmp395;
org$frostlang$frostc$ClassDecl* $tmp397 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp398 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp396, $tmp397);
frost$core$String$Index$nullable $tmp399 = *(&local2);
frost$core$String$Index $tmp400 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, ((frost$core$String$Index) $tmp399.value));
frost$core$Bit $tmp401 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp402 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp400, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp401);
frost$core$String* $tmp403 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp402);
org$frostlang$frostc$Symbol* $tmp404 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp398, $tmp403);
*(&local3) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
org$frostlang$frostc$Symbol* $tmp405 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
*(&local3) = $tmp404;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:115
org$frostlang$frostc$Symbol* $tmp406 = *(&local3);
frost$core$Bit $tmp407 = (frost$core$Bit) {$tmp406 == NULL};
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:116
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Symbol* $tmp409 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local3) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp410 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block26:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:118
org$frostlang$frostc$Symbol* $tmp411 = *(&local3);
$fn413 $tmp412 = ($fn413) param0->$class->vtable[6];
frost$core$String* $tmp414 = $tmp412(param0, $tmp411);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
org$frostlang$frostc$Symbol* $tmp415 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local3) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp416 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp414;
block24:;
goto block22;
block22:;
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:122
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp417 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp417, &$s418);
// begin inline call to function frost.core.String.parse(regex:frost.core.RegularExpression):frost.collections.ListView<frost.core.String>? from LinkResolver.frost:122:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1072
frost$core$Matcher* $tmp419 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp417, param1);
*(&local5) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
frost$core$Matcher* $tmp420 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
*(&local5) = $tmp419;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1073
frost$core$Matcher* $tmp421 = *(&local5);
frost$core$Bit $tmp422;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp422, $tmp421);
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1074
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp424 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp424);
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
frost$collections$Array* $tmp425 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
*(&local6) = $tmp424;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1075
frost$core$Int64 $tmp426 = (frost$core$Int64) {1u};
frost$core$Matcher* $tmp427 = *(&local5);
frost$core$Int64 $tmp428;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp428, $tmp427);
frost$core$Bit $tmp429 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp430 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp426, $tmp428, $tmp429);
frost$core$Int64 $tmp431 = $tmp430.min;
*(&local7) = $tmp431;
frost$core$Int64 $tmp432 = $tmp430.max;
frost$core$Bit $tmp433 = $tmp430.inclusive;
bool $tmp434 = $tmp433.value;
frost$core$Int64 $tmp435 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp436 = $tmp435.value;
frost$core$UInt64 $tmp437 = (frost$core$UInt64) {((uint64_t) $tmp436)};
if ($tmp434) goto block34; else goto block35;
block34:;
int64_t $tmp438 = $tmp431.value;
int64_t $tmp439 = $tmp432.value;
bool $tmp440 = $tmp438 <= $tmp439;
frost$core$Bit $tmp441 = (frost$core$Bit) {$tmp440};
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block31; else goto block32;
block35:;
int64_t $tmp443 = $tmp431.value;
int64_t $tmp444 = $tmp432.value;
bool $tmp445 = $tmp443 < $tmp444;
frost$core$Bit $tmp446 = (frost$core$Bit) {$tmp445};
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1076
frost$collections$Array* $tmp448 = *(&local6);
frost$core$Matcher* $tmp449 = *(&local5);
frost$core$Int64 $tmp450 = *(&local7);
frost$core$String* $tmp451 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp449, $tmp450);
frost$collections$Array$add$frost$collections$Array$T($tmp448, ((frost$core$Object*) $tmp451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
frost$core$Int64 $tmp452 = *(&local7);
int64_t $tmp453 = $tmp432.value;
int64_t $tmp454 = $tmp452.value;
int64_t $tmp455 = $tmp453 - $tmp454;
frost$core$Int64 $tmp456 = (frost$core$Int64) {$tmp455};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp457 = $tmp456.value;
frost$core$UInt64 $tmp458 = (frost$core$UInt64) {((uint64_t) $tmp457)};
if ($tmp434) goto block38; else goto block39;
block38:;
uint64_t $tmp459 = $tmp458.value;
uint64_t $tmp460 = $tmp437.value;
bool $tmp461 = $tmp459 >= $tmp460;
frost$core$Bit $tmp462 = (frost$core$Bit) {$tmp461};
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block36; else goto block32;
block39:;
uint64_t $tmp464 = $tmp458.value;
uint64_t $tmp465 = $tmp437.value;
bool $tmp466 = $tmp464 > $tmp465;
frost$core$Bit $tmp467 = (frost$core$Bit) {$tmp466};
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block36; else goto block32;
block36:;
int64_t $tmp469 = $tmp452.value;
int64_t $tmp470 = $tmp435.value;
int64_t $tmp471 = $tmp469 + $tmp470;
frost$core$Int64 $tmp472 = (frost$core$Int64) {$tmp471};
*(&local7) = $tmp472;
goto block31;
block32:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1078
frost$collections$Array* $tmp473 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp473)));
frost$collections$Array* $tmp474 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Matcher* $tmp475 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
*(&local5) = ((frost$core$Matcher*) NULL);
*(&local4) = ((frost$collections$ListView*) $tmp473);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp473)));
goto block27;
block29:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1080
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$core$Matcher* $tmp476 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
*(&local5) = ((frost$core$Matcher*) NULL);
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
goto block27;
block27:;
frost$collections$ListView* $tmp477 = *(&local4);
*(&local8) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
frost$collections$ListView* $tmp478 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
*(&local8) = $tmp477;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:123
frost$collections$ListView* $tmp479 = *(&local8);
frost$core$Bit $tmp480 = (frost$core$Bit) {$tmp479 != NULL};
bool $tmp481 = $tmp480.value;
if ($tmp481) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:124
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp482 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp482);
*(&local9) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
frost$collections$Array* $tmp483 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
*(&local9) = $tmp482;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:125
frost$collections$ListView* $tmp484 = *(&local8);
frost$core$Int64 $tmp485 = (frost$core$Int64) {1u};
ITable* $tmp486 = $tmp484->$class->itable;
while ($tmp486->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp486 = $tmp486->next;
}
$fn488 $tmp487 = $tmp486->methods[0];
frost$core$Object* $tmp489 = $tmp487($tmp484, $tmp485);
frost$core$String* $tmp490 = frost$core$String$get_trimmed$R$frost$core$String(((frost$core$String*) $tmp489));
ITable* $tmp492 = ((frost$core$Equatable*) $tmp490)->$class->itable;
while ($tmp492->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp492 = $tmp492->next;
}
$fn494 $tmp493 = $tmp492->methods[1];
frost$core$Bit $tmp495 = $tmp493(((frost$core$Equatable*) $tmp490), ((frost$core$Equatable*) &$s491));
bool $tmp496 = $tmp495.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$core$Frost$unref$frost$core$Object$Q($tmp489);
if ($tmp496) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:126
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp497 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$collections$ListView* $tmp498 = *(&local8);
frost$core$Int64 $tmp499 = (frost$core$Int64) {1u};
ITable* $tmp500 = $tmp498->$class->itable;
while ($tmp500->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp500 = $tmp500->next;
}
$fn502 $tmp501 = $tmp500->methods[0];
frost$core$Object* $tmp503 = $tmp501($tmp498, $tmp499);
frost$io$File$init$frost$core$String($tmp497, ((frost$core$String*) $tmp503));
*(&local10) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$io$File* $tmp504 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local10) = $tmp497;
frost$core$Frost$unref$frost$core$Object$Q($tmp503);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:127
org$frostlang$frostc$Compiler** $tmp505 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp506 = *$tmp505;
org$frostlang$frostc$parser$Parser** $tmp507 = &$tmp506->parser;
org$frostlang$frostc$parser$Parser* $tmp508 = *$tmp507;
frost$io$File* $tmp509 = *(&local10);
org$frostlang$frostc$Compiler** $tmp510 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp511 = *$tmp510;
frost$collections$Array** $tmp512 = &$tmp511->files;
frost$collections$Array* $tmp513 = *$tmp512;
ITable* $tmp514 = ((frost$collections$CollectionView*) $tmp513)->$class->itable;
while ($tmp514->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp514 = $tmp514->next;
}
$fn516 $tmp515 = $tmp514->methods[0];
frost$core$Int64 $tmp517 = $tmp515(((frost$collections$CollectionView*) $tmp513));
frost$collections$ListView* $tmp518 = *(&local8);
frost$core$Int64 $tmp519 = (frost$core$Int64) {1u};
ITable* $tmp520 = $tmp518->$class->itable;
while ($tmp520->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp520 = $tmp520->next;
}
$fn522 $tmp521 = $tmp520->methods[0];
frost$core$Object* $tmp523 = $tmp521($tmp518, $tmp519);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int64$frost$core$String($tmp508, $tmp509, $tmp517, ((frost$core$String*) $tmp523));
frost$core$Frost$unref$frost$core$Object$Q($tmp523);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:128
org$frostlang$frostc$Compiler** $tmp524 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp525 = *$tmp524;
frost$collections$Array** $tmp526 = &$tmp525->files;
frost$collections$Array* $tmp527 = *$tmp526;
frost$io$File* $tmp528 = *(&local10);
frost$collections$Array$add$frost$collections$Array$T($tmp527, ((frost$core$Object*) $tmp528));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:129
goto block44;
block44:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:130
org$frostlang$frostc$Compiler** $tmp529 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp530 = *$tmp529;
org$frostlang$frostc$parser$Parser** $tmp531 = &$tmp530->parser;
org$frostlang$frostc$parser$Parser* $tmp532 = *$tmp531;
// begin inline call to method org.frostlang.frostc.parser.Parser.type():org.frostlang.frostc.ASTNode? from LinkResolver.frost:130:53
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:851
frost$core$Bit $tmp533 = (frost$core$Bit) {true};
org$frostlang$frostc$ASTNode* $tmp534 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q($tmp532, $tmp533);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
org$frostlang$frostc$ASTNode* $tmp535 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
*(&local11) = $tmp534;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:131
org$frostlang$frostc$ASTNode* $tmp536 = *(&local11);
frost$core$Bit $tmp537 = (frost$core$Bit) {$tmp536 == NULL};
bool $tmp538 = $tmp537.value;
if ($tmp538) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:132
frost$collections$ListView* $tmp539 = *(&local8);
frost$core$Int64 $tmp540 = (frost$core$Int64) {1u};
ITable* $tmp541 = $tmp539->$class->itable;
while ($tmp541->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp541 = $tmp541->next;
}
$fn543 $tmp542 = $tmp541->methods[0];
frost$core$Object* $tmp544 = $tmp542($tmp539, $tmp540);
frost$core$String* $tmp545 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s546, ((frost$core$String*) $tmp544));
frost$core$String* $tmp547 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp545, &$s548);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from LinkResolver.frost:132:42
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp547);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s549);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
frost$core$Frost$unref$frost$core$Object$Q($tmp544);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:133
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$ASTNode* $tmp550 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$io$File* $tmp551 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
*(&local10) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp552 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp553 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp554 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
org$frostlang$frostc$ClassDecl* $tmp555 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block48:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:135
org$frostlang$frostc$Compiler** $tmp556 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp557 = *$tmp556;
org$frostlang$frostc$Scanner** $tmp558 = &$tmp557->scanner;
org$frostlang$frostc$Scanner* $tmp559 = *$tmp558;
org$frostlang$frostc$ASTNode* $tmp560 = *(&local11);
org$frostlang$frostc$Type* $tmp561 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp559, $tmp560);
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
org$frostlang$frostc$Type* $tmp562 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
*(&local12) = $tmp561;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:136
org$frostlang$frostc$Compiler** $tmp563 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp564 = *$tmp563;
org$frostlang$frostc$Type* $tmp565 = *(&local12);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from LinkResolver.frost:136:53
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:978
frost$core$Bit $tmp566 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp567 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q($tmp564, $tmp565, $tmp566);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
org$frostlang$frostc$Type* $tmp568 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
*(&local13) = $tmp567;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:137
org$frostlang$frostc$Type* $tmp569 = *(&local13);
frost$core$Bit $tmp570 = (frost$core$Bit) {$tmp569 == NULL};
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:138
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Type* $tmp572 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp573 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp574 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$io$File* $tmp575 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
*(&local10) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp576 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp577 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp578 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
org$frostlang$frostc$ClassDecl* $tmp579 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block53:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:140
frost$collections$Array* $tmp580 = *(&local9);
org$frostlang$frostc$Type* $tmp581 = *(&local13);
frost$collections$Array$add$frost$collections$Array$T($tmp580, ((frost$core$Object*) $tmp581));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:141
org$frostlang$frostc$Compiler** $tmp582 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp583 = *$tmp582;
org$frostlang$frostc$parser$Parser** $tmp584 = &$tmp583->parser;
org$frostlang$frostc$parser$Parser* $tmp585 = *$tmp584;
frost$core$Int64 $tmp586 = (frost$core$Int64) {110u};
// begin inline call to org.frostlang.frostc.parser.Token.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.Token.Kind from LinkResolver.frost:141:60
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int64* $tmp587 = &(&local15)->$rawValue;
*$tmp587 = $tmp586;
org$frostlang$frostc$parser$Token$Kind $tmp588 = *(&local15);
*(&local14) = $tmp588;
org$frostlang$frostc$parser$Token$Kind $tmp589 = *(&local14);
// begin inline call to method org.frostlang.frostc.parser.Parser.checkNext(kind:org.frostlang.frostc.parser.Token.Kind):org.frostlang.frostc.parser.Token? from LinkResolver.frost:141:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:174
org$frostlang$frostc$parser$Token $tmp590 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token($tmp585);
*(&local17) = $tmp590;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:175
org$frostlang$frostc$parser$Token $tmp591 = *(&local17);
org$frostlang$frostc$parser$Token$Kind $tmp592 = $tmp591.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp593;
$tmp593 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp593->value = $tmp592;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp594;
$tmp594 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp594->value = $tmp589;
ITable* $tmp595 = ((frost$core$Equatable*) $tmp593)->$class->itable;
while ($tmp595->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp595 = $tmp595->next;
}
$fn597 $tmp596 = $tmp595->methods[0];
frost$core$Bit $tmp598 = $tmp596(((frost$core$Equatable*) $tmp593), ((frost$core$Equatable*) $tmp594));
bool $tmp599 = $tmp598.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp594)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp593)));
if ($tmp599) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:176
org$frostlang$frostc$parser$Token $tmp600 = *(&local17);
*(&local16) = ((org$frostlang$frostc$parser$Token$nullable) { $tmp600, true });
goto block57;
block59:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:178
org$frostlang$frostc$parser$Token $tmp601 = *(&local17);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token($tmp585, $tmp601);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:179
*(&local16) = ((org$frostlang$frostc$parser$Token$nullable) { .nonnull = false });
goto block57;
block57:;
org$frostlang$frostc$parser$Token$nullable $tmp602 = *(&local16);
frost$core$Bit $tmp603 = (frost$core$Bit) {!$tmp602.nonnull};
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:142
org$frostlang$frostc$Type* $tmp605 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp606 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp607 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$io$File* $tmp608 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
*(&local10) = ((frost$io$File*) NULL);
goto block43;
block55:;
org$frostlang$frostc$Type* $tmp609 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp610 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp611 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block44;
block43:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:146
frost$collections$ListView* $tmp612 = *(&local8);
frost$core$Int64 $tmp613 = (frost$core$Int64) {0u};
ITable* $tmp614 = $tmp612->$class->itable;
while ($tmp614->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp614 = $tmp614->next;
}
$fn616 $tmp615 = $tmp614->methods[0];
frost$core$Object* $tmp617 = $tmp615($tmp612, $tmp613);
*(&local18) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp617)));
frost$core$String* $tmp618 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
*(&local18) = ((frost$core$String*) $tmp617);
frost$core$Frost$unref$frost$core$Object$Q($tmp617);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:147
frost$core$String* $tmp619 = *(&local18);
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from LinkResolver.frost:147:42
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1212
frost$core$Int64* $tmp620 = &$tmp619->_length;
frost$core$Int64 $tmp621 = *$tmp620;
frost$core$String$Index $tmp622 = frost$core$String$Index$init$frost$core$Int64($tmp621);
frost$core$String$Index$nullable $tmp623 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp619, &$s624, $tmp622);
*(&local19) = $tmp623;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:148
*(&local20) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:149
frost$core$String$Index$nullable $tmp625 = *(&local19);
frost$core$Bit $tmp626 = (frost$core$Bit) {$tmp625.nonnull};
bool $tmp627 = $tmp626.value;
if ($tmp627) goto block62; else goto block64;
block62:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:150
org$frostlang$frostc$Compiler** $tmp628 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp629 = *$tmp628;
frost$core$String* $tmp630 = *(&local18);
frost$core$String$Index$nullable $tmp631 = *(&local19);
frost$core$Bit $tmp632 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp633 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp631, $tmp632);
frost$core$String* $tmp634 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp630, $tmp633);
org$frostlang$frostc$ClassDecl* $tmp635 = org$frostlang$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlang$frostc$ClassDecl$Q($tmp629, $tmp634);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
org$frostlang$frostc$ClassDecl* $tmp636 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
*(&local0) = $tmp635;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:151
frost$core$String* $tmp637 = *(&local18);
frost$core$String* $tmp638 = *(&local18);
frost$core$String$Index$nullable $tmp639 = *(&local19);
frost$core$String$Index $tmp640 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp638, ((frost$core$String$Index) $tmp639.value));
frost$core$Bit $tmp641 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp642 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp640, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp641);
frost$core$String* $tmp643 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp637, $tmp642);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
frost$core$String* $tmp644 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
*(&local20) = $tmp643;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
goto block63;
block64:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:154
org$frostlang$frostc$ClassDecl** $tmp645 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp646 = *$tmp645;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
org$frostlang$frostc$ClassDecl* $tmp647 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
*(&local0) = $tmp646;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:155
frost$core$String* $tmp648 = *(&local18);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
frost$core$String* $tmp649 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
*(&local20) = $tmp648;
goto block63;
block63:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:157
org$frostlang$frostc$ClassDecl* $tmp650 = *(&local0);
frost$core$Bit $tmp651 = (frost$core$Bit) {$tmp650 != NULL};
bool $tmp652 = $tmp651.value;
if ($tmp652) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:158
org$frostlang$frostc$Compiler** $tmp653 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp654 = *$tmp653;
org$frostlang$frostc$ClassDecl* $tmp655 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp656 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp654, $tmp655);
frost$core$String* $tmp657 = *(&local20);
org$frostlang$frostc$Symbol* $tmp658 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp656, $tmp657);
*(&local21) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
org$frostlang$frostc$Symbol* $tmp659 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
*(&local21) = $tmp658;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:159
org$frostlang$frostc$Symbol* $tmp660 = *(&local21);
frost$core$Bit $tmp661 = (frost$core$Bit) {$tmp660 == NULL};
bool $tmp662 = $tmp661.value;
if ($tmp662) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:160
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Symbol* $tmp663 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
*(&local21) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp664 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
*(&local20) = ((frost$core$String*) NULL);
frost$core$String* $tmp665 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
*(&local18) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp666 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp667 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp668 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
org$frostlang$frostc$ClassDecl* $tmp669 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block68:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:162
org$frostlang$frostc$Symbol* $tmp670 = *(&local21);
org$frostlang$frostc$Symbol$Kind* $tmp671 = &$tmp670->kind;
org$frostlang$frostc$Symbol$Kind $tmp672 = *$tmp671;
frost$core$Int64 $tmp673 = $tmp672.$rawValue;
frost$core$Int64 $tmp674 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LinkResolver.frost:163:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp675 = $tmp673.value;
int64_t $tmp676 = $tmp674.value;
bool $tmp677 = $tmp675 == $tmp676;
frost$core$Bit $tmp678 = (frost$core$Bit) {$tmp677};
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block70; else goto block71;
block70:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:164
org$frostlang$frostc$Symbol* $tmp680 = *(&local21);
frost$collections$Array* $tmp681 = *(&local9);
$fn683 $tmp682 = ($fn683) param0->$class->vtable[2];
frost$core$Bit $tmp684 = $tmp682(param0, ((org$frostlang$frostc$MethodDecl*) $tmp680), ((frost$collections$ListView*) $tmp681));
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:165
org$frostlang$frostc$Symbol* $tmp686 = *(&local21);
$fn688 $tmp687 = ($fn688) param0->$class->vtable[6];
frost$core$String* $tmp689 = $tmp687(param0, $tmp686);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
org$frostlang$frostc$Symbol* $tmp690 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
*(&local21) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp691 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
*(&local20) = ((frost$core$String*) NULL);
frost$core$String* $tmp692 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
*(&local18) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp693 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp694 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp695 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
org$frostlang$frostc$ClassDecl* $tmp696 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp689;
block74:;
goto block69;
block71:;
frost$core$Int64 $tmp697 = (frost$core$Int64) {6u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LinkResolver.frost:168:37
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp698 = $tmp673.value;
int64_t $tmp699 = $tmp697.value;
bool $tmp700 = $tmp698 == $tmp699;
frost$core$Bit $tmp701 = (frost$core$Bit) {$tmp700};
bool $tmp702 = $tmp701.value;
if ($tmp702) goto block75; else goto block69;
block75:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:169
org$frostlang$frostc$Symbol* $tmp703 = *(&local21);
org$frostlang$frostc$FixedArray** $tmp704 = &((org$frostlang$frostc$Methods*) $tmp703)->methods;
org$frostlang$frostc$FixedArray* $tmp705 = *$tmp704;
ITable* $tmp706 = ((frost$collections$Iterable*) $tmp705)->$class->itable;
while ($tmp706->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp706 = $tmp706->next;
}
$fn708 $tmp707 = $tmp706->methods[0];
frost$collections$Iterator* $tmp709 = $tmp707(((frost$collections$Iterable*) $tmp705));
goto block77;
block77:;
ITable* $tmp710 = $tmp709->$class->itable;
while ($tmp710->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp710 = $tmp710->next;
}
$fn712 $tmp711 = $tmp710->methods[0];
frost$core$Bit $tmp713 = $tmp711($tmp709);
bool $tmp714 = $tmp713.value;
if ($tmp714) goto block79; else goto block78;
block78:;
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp715 = $tmp709->$class->itable;
while ($tmp715->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp715 = $tmp715->next;
}
$fn717 $tmp716 = $tmp715->methods[1];
frost$core$Object* $tmp718 = $tmp716($tmp709);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp718)));
org$frostlang$frostc$MethodDecl* $tmp719 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
*(&local22) = ((org$frostlang$frostc$MethodDecl*) $tmp718);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:170
org$frostlang$frostc$MethodDecl* $tmp720 = *(&local22);
frost$collections$Array* $tmp721 = *(&local9);
$fn723 $tmp722 = ($fn723) param0->$class->vtable[2];
frost$core$Bit $tmp724 = $tmp722(param0, $tmp720, ((frost$collections$ListView*) $tmp721));
bool $tmp725 = $tmp724.value;
if ($tmp725) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:171
org$frostlang$frostc$MethodDecl* $tmp726 = *(&local22);
$fn728 $tmp727 = ($fn728) param0->$class->vtable[5];
frost$core$String* $tmp729 = $tmp727(param0, $tmp726);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
frost$core$Frost$unref$frost$core$Object$Q($tmp718);
org$frostlang$frostc$MethodDecl* $tmp730 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
org$frostlang$frostc$Symbol* $tmp731 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
*(&local21) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp732 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
*(&local20) = ((frost$core$String*) NULL);
frost$core$String* $tmp733 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
*(&local18) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp734 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp735 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp736 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
org$frostlang$frostc$ClassDecl* $tmp737 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp729;
block81:;
frost$core$Frost$unref$frost$core$Object$Q($tmp718);
org$frostlang$frostc$MethodDecl* $tmp738 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block77;
block79:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
goto block69;
block69:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:176
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Symbol* $tmp739 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
*(&local21) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp740 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
*(&local20) = ((frost$core$String*) NULL);
frost$core$String* $tmp741 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
*(&local18) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp742 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp743 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp744 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
org$frostlang$frostc$ClassDecl* $tmp745 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block66:;
frost$core$String* $tmp746 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
*(&local20) = ((frost$core$String*) NULL);
frost$core$String* $tmp747 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
*(&local18) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp748 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
*(&local9) = ((frost$collections$Array*) NULL);
goto block41;
block41:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:179
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$collections$ListView* $tmp749 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp750 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
org$frostlang$frostc$ClassDecl* $tmp751 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);

}
void org$frostlang$frostc$frostdoc$LinkResolver$cleanup(org$frostlang$frostc$frostdoc$LinkResolver* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:12
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp752 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp753 = *$tmp752;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
frost$core$String** $tmp754 = &param0->apiRelativePath;
frost$core$String* $tmp755 = *$tmp754;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
org$frostlang$frostc$ClassDecl** $tmp756 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp757 = *$tmp756;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
return;

}

