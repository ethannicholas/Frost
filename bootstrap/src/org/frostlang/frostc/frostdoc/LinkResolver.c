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
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/collections/Iterable.h"
#include "org/frostlang/frostc/Position.h"
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
typedef frost$core$Bit (*$fn286)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn295)(frost$core$Object*);
typedef frost$core$String* (*$fn317)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$FieldDecl*);
typedef frost$core$String* (*$fn326)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*);
typedef frost$core$String* (*$fn347)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$String* (*$fn371)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$Symbol*);
typedef frost$core$String* (*$fn418)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$Symbol*);
typedef frost$core$Object* (*$fn493)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn499)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn507)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn521)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn527)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn548)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn602)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn621)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn688)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*, frost$collections$ListView*);
typedef frost$core$String* (*$fn693)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$Symbol*);
typedef frost$collections$Iterator* (*$fn713)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn717)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn722)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn728)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*, frost$collections$ListView*);
typedef frost$core$String* (*$fn733)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72", 42, -1701704929045887458, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x73\x74\x75\x62", 11, -4278746626067382520, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 95, 612931044334107490, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e\x2f", 3, 1504240, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23", 1, 136, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23", 1, 136, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x74\x74\x70", 4, 212406849, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x77\x2b", 3, 1980855, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a", 13, 66924027379716155, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a\x29\x5c\x28\x28\x2e\x2a\x29\x5c\x29", 23, 8731591133455443966, NULL };
static frost$core$String $s496 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x70\x61\x72\x73\x65\x3a\x20", 17, 5931628896396964226, NULL };
static frost$core$String $s553 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s554 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s629 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };

void org$frostlang$frostc$frostdoc$LinkResolver$init$org$frostlang$frostc$Compiler$frost$core$String(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$Compiler* param1, frost$core$String* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:23
org$frostlang$frostc$frostdoc$LinkResolver$init$org$frostlang$frostc$Compiler$frost$core$String$org$frostlang$frostc$ClassDecl$Q(param0, param1, param2, ((org$frostlang$frostc$ClassDecl*) NULL));
return;

}
void org$frostlang$frostc$frostdoc$LinkResolver$init$org$frostlang$frostc$Compiler$frost$core$String$org$frostlang$frostc$ClassDecl$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$Compiler* param1, frost$core$String* param2, org$frostlang$frostc$ClassDecl* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:27
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:28
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp5 = &param0->apiRelativePath;
frost$core$String* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$core$String** $tmp7 = &param0->apiRelativePath;
*$tmp7 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:29
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:33
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:34
frost$core$Bit $tmp26 = frost$core$Bit$init$builtin_bit(false);
return $tmp26;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:36
frost$core$Int64 $tmp27 = (frost$core$Int64) {0};
ITable* $tmp28 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp28 = $tmp28->next;
}
$fn30 $tmp29 = $tmp28->methods[0];
frost$core$Int64 $tmp31 = $tmp29(((frost$collections$CollectionView*) param2));
frost$core$Bit $tmp32 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp33 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp27, $tmp31, $tmp32);
frost$core$Int64 $tmp34 = $tmp33.min;
*(&local0) = $tmp34;
frost$core$Int64 $tmp35 = $tmp33.max;
frost$core$Bit $tmp36 = $tmp33.inclusive;
bool $tmp37 = $tmp36.value;
frost$core$Int64 $tmp38 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:37
frost$collections$Array** $tmp51 = &param1->parameters;
frost$collections$Array* $tmp52 = *$tmp51;
frost$core$Int64 $tmp53 = *(&local0);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from LinkResolver.frost:37:28
frost$core$Int64 $tmp54 = (frost$core$Int64) {0};
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
frost$core$Int64 $tmp69 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s70, $tmp69, &$s71);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:38
frost$core$Bit $tmp88 = frost$core$Bit$init$builtin_bit(false);
return $tmp88;
block10:;
frost$core$Int64 $tmp89 = *(&local0);
int64_t $tmp90 = $tmp35.value;
int64_t $tmp91 = $tmp89.value;
int64_t $tmp92 = $tmp90 - $tmp91;
frost$core$Int64 $tmp93 = (frost$core$Int64) {$tmp92};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:41
frost$core$Bit $tmp110 = frost$core$Bit$init$builtin_bit(true);
return $tmp110;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$ClassDecl$R$frost$core$String(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$Int64 local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:45
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:46
org$frostlang$frostc$ClassDecl** $tmp111 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp112 = *$tmp111;
frost$core$Bit $tmp113 = frost$core$Bit$init$builtin_bit($tmp112 != NULL);
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:47
org$frostlang$frostc$ClassDecl** $tmp115 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp116 = *$tmp115;
frost$core$String** $tmp117 = &$tmp116->name;
frost$core$String* $tmp118 = *$tmp117;
// begin inline call to function frost.core.String.find(needle:frost.core.String):frost.collections.Iterator<frost.core.String.Index> from LinkResolver.frost:47:46
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:267
frost$core$Bit $tmp119 = frost$core$Bit$init$builtin_bit(false);
// begin inline call to function frost.core.String.find(needle:frost.core.String, overlapping:frost.core.Bit):frost.collections.Iterator<frost.core.String.Index> from String.stub:267:13
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:271
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
frost$core$Int64 $tmp126 = (frost$core$Int64) {0};
int64_t $tmp127 = $tmp125.value;
int64_t $tmp128 = $tmp126.value;
bool $tmp129 = $tmp127 >= $tmp128;
frost$core$Bit $tmp130 = (frost$core$Bit) {$tmp129};
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp132 = (frost$core$Int64) {158};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s133, $tmp132, &$s134);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:159
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp135 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp135);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$MutableString* $tmp136 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local1) = $tmp135;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:160
frost$core$Int64 $tmp137 = (frost$core$Int64) {0};
frost$core$Bit $tmp138 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp139 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp137, $tmp125, $tmp138);
frost$core$Int64 $tmp140 = $tmp139.min;
*(&local2) = $tmp140;
frost$core$Int64 $tmp141 = $tmp139.max;
frost$core$Bit $tmp142 = $tmp139.inclusive;
bool $tmp143 = $tmp142.value;
frost$core$Int64 $tmp144 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:161
frost$core$MutableString* $tmp157 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp157, &$s158);
frost$core$Int64 $tmp159 = *(&local2);
int64_t $tmp160 = $tmp141.value;
int64_t $tmp161 = $tmp159.value;
int64_t $tmp162 = $tmp160 - $tmp161;
frost$core$Int64 $tmp163 = (frost$core$Int64) {$tmp162};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:163
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:50
frost$core$String** $tmp184 = &param0->apiRelativePath;
frost$core$String* $tmp185 = *$tmp184;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$core$String* $tmp186 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local0) = $tmp185;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:52
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

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:56
frost$core$Weak** $tmp197 = &param1->owner;
frost$core$Weak* $tmp198 = *$tmp197;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LinkResolver.frost:56:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp199 = &$tmp198->_valid;
frost$core$Bit $tmp200 = *$tmp199;
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp202 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s203, $tmp202);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
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
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:60
org$frostlang$frostc$Compiler** $tmp216 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp217 = *$tmp216;
frost$core$Bit $tmp218 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit($tmp217, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:61
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp219 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$Weak** $tmp220 = &param1->owner;
frost$core$Weak* $tmp221 = *$tmp220;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LinkResolver.frost:61:45
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp222 = &$tmp221->_valid;
frost$core$Bit $tmp223 = *$tmp222;
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp225 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s226, $tmp225);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:62
frost$core$MutableString* $tmp233 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp233, &$s234);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:63
frost$core$MutableString* $tmp235 = *(&local0);
frost$core$String** $tmp236 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp237 = *$tmp236;
frost$core$MutableString$append$frost$core$String($tmp235, $tmp237);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:64
frost$core$MutableString* $tmp238 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp238, &$s239);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:65
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s240));
frost$core$String* $tmp241 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local1) = &$s242;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:66
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:67
frost$core$MutableString* $tmp259 = *(&local0);
frost$core$String* $tmp260 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp259, $tmp260);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:68
frost$core$MutableString* $tmp261 = *(&local0);
org$frostlang$frostc$MethodDecl$Parameter* $tmp262 = *(&local2);
org$frostlang$frostc$Type** $tmp263 = &$tmp262->type;
org$frostlang$frostc$Type* $tmp264 = *$tmp263;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from LinkResolver.frost:68:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/MutableString.stub:46
$fn266 $tmp265 = ($fn266) ((frost$core$Object*) $tmp264)->$class->vtable[0];
frost$core$String* $tmp267 = $tmp265(((frost$core$Object*) $tmp264));
frost$core$MutableString$append$frost$core$String($tmp261, $tmp267);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:69
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:71
frost$core$MutableString* $tmp272 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp272, &$s273);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:72
org$frostlang$frostc$Type** $tmp274 = &param1->returnType;
org$frostlang$frostc$Type* $tmp275 = *$tmp274;
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from LinkResolver.frost:72:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp276 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp277 = (frost$core$Int64) {4};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:258:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp278 = &(&local4)->$rawValue;
*$tmp278 = $tmp277;
org$frostlang$frostc$Type$Kind $tmp279 = *(&local4);
*(&local3) = $tmp279;
org$frostlang$frostc$Type$Kind $tmp280 = *(&local3);
org$frostlang$frostc$Position $tmp281 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp282 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp276, &$s283, $tmp280, $tmp281, $tmp282);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
ITable* $tmp284 = ((frost$core$Equatable*) $tmp275)->$class->itable;
while ($tmp284->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp284 = $tmp284->next;
}
$fn286 $tmp285 = $tmp284->methods[1];
frost$core$Bit $tmp287 = $tmp285(((frost$core$Equatable*) $tmp275), ((frost$core$Equatable*) $tmp276));
bool $tmp288 = $tmp287.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
if ($tmp288) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:73
frost$core$MutableString* $tmp289 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp289, &$s290);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:74
frost$core$MutableString* $tmp291 = *(&local0);
org$frostlang$frostc$Type** $tmp292 = &param1->returnType;
org$frostlang$frostc$Type* $tmp293 = *$tmp292;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from LinkResolver.frost:74:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/MutableString.stub:46
$fn295 $tmp294 = ($fn295) ((frost$core$Object*) $tmp293)->$class->vtable[0];
frost$core$String* $tmp296 = $tmp294(((frost$core$Object*) $tmp293));
frost$core$MutableString$append$frost$core$String($tmp291, $tmp296);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:76
frost$core$MutableString* $tmp297 = *(&local0);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp297, &$s298, &$s299);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:77
frost$core$MutableString* $tmp300 = *(&local0);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp300, &$s301, &$s302);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:78
frost$core$MutableString* $tmp303 = *(&local0);
frost$core$String* $tmp304 = frost$core$MutableString$finish$R$frost$core$String($tmp303);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$core$String* $tmp305 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp306 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp304;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$Symbol$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$Symbol* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:82
org$frostlang$frostc$Symbol$Kind* $tmp307 = &param1->kind;
org$frostlang$frostc$Symbol$Kind $tmp308 = *$tmp307;
frost$core$Int64 $tmp309 = $tmp308.$rawValue;
frost$core$Int64 $tmp310 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LinkResolver.frost:83:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp311 = $tmp309.value;
int64_t $tmp312 = $tmp310.value;
bool $tmp313 = $tmp311 == $tmp312;
frost$core$Bit $tmp314 = frost$core$Bit$init$builtin_bit($tmp313);
bool $tmp315 = $tmp314.value;
if ($tmp315) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:84
$fn317 $tmp316 = ($fn317) param0->$class->vtable[4];
frost$core$String* $tmp318 = $tmp316(param0, ((org$frostlang$frostc$FieldDecl*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
return $tmp318;
block3:;
frost$core$Int64 $tmp319 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LinkResolver.frost:86:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp320 = $tmp309.value;
int64_t $tmp321 = $tmp319.value;
bool $tmp322 = $tmp320 == $tmp321;
frost$core$Bit $tmp323 = frost$core$Bit$init$builtin_bit($tmp322);
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:87
$fn326 $tmp325 = ($fn326) param0->$class->vtable[5];
frost$core$String* $tmp327 = $tmp325(param0, ((org$frostlang$frostc$MethodDecl*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
return $tmp327;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:90
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:96
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from LinkResolver.frost:96:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:219
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.stub:219:17
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:223
frost$core$String$Index $tmp328 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$String$Index$nullable $tmp329 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param1, &$s330, $tmp328);
frost$core$Bit $tmp331 = frost$core$Bit$init$builtin_bit($tmp329.nonnull);
bool $tmp332 = $tmp331.value;
if ($tmp332) goto block1; else goto block3;
block3:;
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from LinkResolver.frost:96:49
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:219
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.stub:219:17
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:223
frost$core$String$Index $tmp333 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$String$Index$nullable $tmp334 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param1, &$s335, $tmp333);
frost$core$Bit $tmp336 = frost$core$Bit$init$builtin_bit($tmp334.nonnull);
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:97
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:99
org$frostlang$frostc$Compiler** $tmp338 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp339 = *$tmp338;
org$frostlang$frostc$ClassDecl* $tmp340 = org$frostlang$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlang$frostc$ClassDecl$Q($tmp339, param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
org$frostlang$frostc$ClassDecl* $tmp341 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
*(&local0) = $tmp340;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:100
org$frostlang$frostc$ClassDecl* $tmp342 = *(&local0);
frost$core$Bit $tmp343 = frost$core$Bit$init$builtin_bit($tmp342 != NULL);
bool $tmp344 = $tmp343.value;
if ($tmp344) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:101
org$frostlang$frostc$ClassDecl* $tmp345 = *(&local0);
$fn347 $tmp346 = ($fn347) param0->$class->vtable[3];
frost$core$String* $tmp348 = $tmp346(param0, $tmp345);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
org$frostlang$frostc$ClassDecl* $tmp349 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp348;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:103
org$frostlang$frostc$ClassDecl** $tmp350 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp351 = *$tmp350;
frost$core$Bit $tmp352 = frost$core$Bit$init$builtin_bit($tmp351 != NULL);
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block12; else goto block11;
block12:;
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp354 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp354, &$s355);
// begin inline call to function frost.core.String.matches(regex:frost.core.RegularExpression):frost.core.Bit from LinkResolver.frost:103:43
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:235
frost$core$Matcher* $tmp356 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp354, param1);
frost$core$Bit $tmp357;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp357, $tmp356);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
bool $tmp358 = $tmp357.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
if ($tmp358) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:104
org$frostlang$frostc$Compiler** $tmp359 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp360 = *$tmp359;
org$frostlang$frostc$ClassDecl** $tmp361 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp362 = *$tmp361;
org$frostlang$frostc$SymbolTable* $tmp363 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp360, $tmp362);
org$frostlang$frostc$Symbol* $tmp364 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp363, param1);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
org$frostlang$frostc$Symbol* $tmp365 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
*(&local1) = $tmp364;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:105
org$frostlang$frostc$Symbol* $tmp366 = *(&local1);
frost$core$Bit $tmp367 = frost$core$Bit$init$builtin_bit($tmp366 != NULL);
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:106
org$frostlang$frostc$Symbol* $tmp369 = *(&local1);
$fn371 $tmp370 = ($fn371) param0->$class->vtable[6];
frost$core$String* $tmp372 = $tmp370(param0, $tmp369);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
org$frostlang$frostc$Symbol* $tmp373 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp374 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp372;
block15:;
org$frostlang$frostc$Symbol* $tmp375 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:109
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp376 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp376, &$s377);
// begin inline call to function frost.core.String.matches(regex:frost.core.RegularExpression):frost.core.Bit from LinkResolver.frost:109:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:235
frost$core$Matcher* $tmp378 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp376, param1);
frost$core$Bit $tmp379;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp379, $tmp378);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
bool $tmp380 = $tmp379.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
if ($tmp380) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:110
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from LinkResolver.frost:110:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:229
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.stub:229:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:287
frost$core$Int64* $tmp381 = &param1->_length;
frost$core$Int64 $tmp382 = *$tmp381;
frost$core$String$Index $tmp383 = frost$core$String$Index$init$frost$core$Int64($tmp382);
frost$core$String$Index$nullable $tmp384 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param1, &$s385, $tmp383);
*(&local2) = $tmp384;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:111
frost$core$String$Index$nullable $tmp386 = *(&local2);
frost$core$Bit $tmp387 = frost$core$Bit$init$builtin_bit($tmp386.nonnull);
bool $tmp388 = $tmp387.value;
if ($tmp388) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:112
org$frostlang$frostc$Compiler** $tmp389 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp390 = *$tmp389;
frost$core$String$Index$nullable $tmp391 = *(&local2);
frost$core$Bit $tmp392 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp393 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp391, $tmp392);
frost$core$String* $tmp394 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp393);
org$frostlang$frostc$ClassDecl* $tmp395 = org$frostlang$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlang$frostc$ClassDecl$Q($tmp390, $tmp394);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
org$frostlang$frostc$ClassDecl* $tmp396 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
*(&local0) = $tmp395;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:113
org$frostlang$frostc$ClassDecl* $tmp397 = *(&local0);
frost$core$Bit $tmp398 = frost$core$Bit$init$builtin_bit($tmp397 != NULL);
bool $tmp399 = $tmp398.value;
if ($tmp399) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:114
org$frostlang$frostc$Compiler** $tmp400 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp401 = *$tmp400;
org$frostlang$frostc$ClassDecl* $tmp402 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp403 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp401, $tmp402);
frost$core$String$Index$nullable $tmp404 = *(&local2);
frost$core$String$Index $tmp405 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, ((frost$core$String$Index) $tmp404.value));
frost$core$Bit $tmp406 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp407 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp405, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp406);
frost$core$String* $tmp408 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp407);
org$frostlang$frostc$Symbol* $tmp409 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp403, $tmp408);
*(&local3) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
org$frostlang$frostc$Symbol* $tmp410 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
*(&local3) = $tmp409;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:115
org$frostlang$frostc$Symbol* $tmp411 = *(&local3);
frost$core$Bit $tmp412 = frost$core$Bit$init$builtin_bit($tmp411 == NULL);
bool $tmp413 = $tmp412.value;
if ($tmp413) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:116
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Symbol* $tmp414 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
*(&local3) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp415 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:118
org$frostlang$frostc$Symbol* $tmp416 = *(&local3);
$fn418 $tmp417 = ($fn418) param0->$class->vtable[6];
frost$core$String* $tmp419 = $tmp417(param0, $tmp416);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
org$frostlang$frostc$Symbol* $tmp420 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
*(&local3) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp421 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp419;
block24:;
goto block22;
block22:;
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:122
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp422 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp422, &$s423);
// begin inline call to function frost.core.String.parse(regex:frost.core.RegularExpression):frost.collections.ListView<frost.core.String>? from LinkResolver.frost:122:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:243
frost$core$Matcher* $tmp424 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp422, param1);
*(&local5) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
frost$core$Matcher* $tmp425 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
*(&local5) = $tmp424;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:244
frost$core$Matcher* $tmp426 = *(&local5);
frost$core$Bit $tmp427;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp427, $tmp426);
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:245
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp429 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp429);
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
frost$collections$Array* $tmp430 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
*(&local6) = $tmp429;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:246
frost$core$Int64 $tmp431 = (frost$core$Int64) {1};
frost$core$Matcher* $tmp432 = *(&local5);
frost$core$Int64 $tmp433;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp433, $tmp432);
frost$core$Bit $tmp434 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp435 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp431, $tmp433, $tmp434);
frost$core$Int64 $tmp436 = $tmp435.min;
*(&local7) = $tmp436;
frost$core$Int64 $tmp437 = $tmp435.max;
frost$core$Bit $tmp438 = $tmp435.inclusive;
bool $tmp439 = $tmp438.value;
frost$core$Int64 $tmp440 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp441 = $tmp440.value;
frost$core$UInt64 $tmp442 = (frost$core$UInt64) {((uint64_t) $tmp441)};
if ($tmp439) goto block34; else goto block35;
block34:;
int64_t $tmp443 = $tmp436.value;
int64_t $tmp444 = $tmp437.value;
bool $tmp445 = $tmp443 <= $tmp444;
frost$core$Bit $tmp446 = (frost$core$Bit) {$tmp445};
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block31; else goto block32;
block35:;
int64_t $tmp448 = $tmp436.value;
int64_t $tmp449 = $tmp437.value;
bool $tmp450 = $tmp448 < $tmp449;
frost$core$Bit $tmp451 = (frost$core$Bit) {$tmp450};
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:247
frost$collections$Array* $tmp453 = *(&local6);
frost$core$Matcher* $tmp454 = *(&local5);
frost$core$Int64 $tmp455 = *(&local7);
frost$core$String* $tmp456 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp454, $tmp455);
frost$collections$Array$add$frost$collections$Array$T($tmp453, ((frost$core$Object*) $tmp456));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
frost$core$Int64 $tmp457 = *(&local7);
int64_t $tmp458 = $tmp437.value;
int64_t $tmp459 = $tmp457.value;
int64_t $tmp460 = $tmp458 - $tmp459;
frost$core$Int64 $tmp461 = (frost$core$Int64) {$tmp460};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp462 = $tmp461.value;
frost$core$UInt64 $tmp463 = (frost$core$UInt64) {((uint64_t) $tmp462)};
if ($tmp439) goto block38; else goto block39;
block38:;
uint64_t $tmp464 = $tmp463.value;
uint64_t $tmp465 = $tmp442.value;
bool $tmp466 = $tmp464 >= $tmp465;
frost$core$Bit $tmp467 = (frost$core$Bit) {$tmp466};
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block36; else goto block32;
block39:;
uint64_t $tmp469 = $tmp463.value;
uint64_t $tmp470 = $tmp442.value;
bool $tmp471 = $tmp469 > $tmp470;
frost$core$Bit $tmp472 = (frost$core$Bit) {$tmp471};
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block36; else goto block32;
block36:;
int64_t $tmp474 = $tmp457.value;
int64_t $tmp475 = $tmp440.value;
int64_t $tmp476 = $tmp474 + $tmp475;
frost$core$Int64 $tmp477 = (frost$core$Int64) {$tmp476};
*(&local7) = $tmp477;
goto block31;
block32:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:249
frost$collections$Array* $tmp478 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp478)));
frost$collections$Array* $tmp479 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Matcher* $tmp480 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
*(&local5) = ((frost$core$Matcher*) NULL);
*(&local4) = ((frost$collections$ListView*) $tmp478);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp478)));
goto block27;
block29:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:251
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$core$Matcher* $tmp481 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
*(&local5) = ((frost$core$Matcher*) NULL);
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
goto block27;
block27:;
frost$collections$ListView* $tmp482 = *(&local4);
*(&local8) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
frost$collections$ListView* $tmp483 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
*(&local8) = $tmp482;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:123
frost$collections$ListView* $tmp484 = *(&local8);
frost$core$Bit $tmp485 = frost$core$Bit$init$builtin_bit($tmp484 != NULL);
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:124
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp487 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp487);
*(&local9) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$collections$Array* $tmp488 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
*(&local9) = $tmp487;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:125
frost$collections$ListView* $tmp489 = *(&local8);
frost$core$Int64 $tmp490 = (frost$core$Int64) {1};
ITable* $tmp491 = $tmp489->$class->itable;
while ($tmp491->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp491 = $tmp491->next;
}
$fn493 $tmp492 = $tmp491->methods[0];
frost$core$Object* $tmp494 = $tmp492($tmp489, $tmp490);
frost$core$String* $tmp495 = frost$core$String$get_trimmed$R$frost$core$String(((frost$core$String*) $tmp494));
ITable* $tmp497 = ((frost$core$Equatable*) $tmp495)->$class->itable;
while ($tmp497->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp497 = $tmp497->next;
}
$fn499 $tmp498 = $tmp497->methods[1];
frost$core$Bit $tmp500 = $tmp498(((frost$core$Equatable*) $tmp495), ((frost$core$Equatable*) &$s496));
bool $tmp501 = $tmp500.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
frost$core$Frost$unref$frost$core$Object$Q($tmp494);
if ($tmp501) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:126
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp502 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$collections$ListView* $tmp503 = *(&local8);
frost$core$Int64 $tmp504 = (frost$core$Int64) {1};
ITable* $tmp505 = $tmp503->$class->itable;
while ($tmp505->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp505 = $tmp505->next;
}
$fn507 $tmp506 = $tmp505->methods[0];
frost$core$Object* $tmp508 = $tmp506($tmp503, $tmp504);
frost$io$File$init$frost$core$String($tmp502, ((frost$core$String*) $tmp508));
*(&local10) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
frost$io$File* $tmp509 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
*(&local10) = $tmp502;
frost$core$Frost$unref$frost$core$Object$Q($tmp508);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:127
org$frostlang$frostc$Compiler** $tmp510 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp511 = *$tmp510;
org$frostlang$frostc$parser$Parser** $tmp512 = &$tmp511->parser;
org$frostlang$frostc$parser$Parser* $tmp513 = *$tmp512;
frost$io$File* $tmp514 = *(&local10);
org$frostlang$frostc$Compiler** $tmp515 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp516 = *$tmp515;
frost$collections$Array** $tmp517 = &$tmp516->files;
frost$collections$Array* $tmp518 = *$tmp517;
ITable* $tmp519 = ((frost$collections$CollectionView*) $tmp518)->$class->itable;
while ($tmp519->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp519 = $tmp519->next;
}
$fn521 $tmp520 = $tmp519->methods[0];
frost$core$Int64 $tmp522 = $tmp520(((frost$collections$CollectionView*) $tmp518));
frost$collections$ListView* $tmp523 = *(&local8);
frost$core$Int64 $tmp524 = (frost$core$Int64) {1};
ITable* $tmp525 = $tmp523->$class->itable;
while ($tmp525->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp525 = $tmp525->next;
}
$fn527 $tmp526 = $tmp525->methods[0];
frost$core$Object* $tmp528 = $tmp526($tmp523, $tmp524);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int64$frost$core$String($tmp513, $tmp514, $tmp522, ((frost$core$String*) $tmp528));
frost$core$Frost$unref$frost$core$Object$Q($tmp528);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:128
org$frostlang$frostc$Compiler** $tmp529 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp530 = *$tmp529;
frost$collections$Array** $tmp531 = &$tmp530->files;
frost$collections$Array* $tmp532 = *$tmp531;
frost$io$File* $tmp533 = *(&local10);
frost$collections$Array$add$frost$collections$Array$T($tmp532, ((frost$core$Object*) $tmp533));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:129
goto block44;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:130
org$frostlang$frostc$Compiler** $tmp534 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp535 = *$tmp534;
org$frostlang$frostc$parser$Parser** $tmp536 = &$tmp535->parser;
org$frostlang$frostc$parser$Parser* $tmp537 = *$tmp536;
// begin inline call to method org.frostlang.frostc.parser.Parser.type():org.frostlang.frostc.ASTNode? from LinkResolver.frost:130:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:851
frost$core$Bit $tmp538 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$ASTNode* $tmp539 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q($tmp537, $tmp538);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
org$frostlang$frostc$ASTNode* $tmp540 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
*(&local11) = $tmp539;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:131
org$frostlang$frostc$ASTNode* $tmp541 = *(&local11);
frost$core$Bit $tmp542 = frost$core$Bit$init$builtin_bit($tmp541 == NULL);
bool $tmp543 = $tmp542.value;
if ($tmp543) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:132
frost$collections$ListView* $tmp544 = *(&local8);
frost$core$Int64 $tmp545 = (frost$core$Int64) {1};
ITable* $tmp546 = $tmp544->$class->itable;
while ($tmp546->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp546 = $tmp546->next;
}
$fn548 $tmp547 = $tmp546->methods[0];
frost$core$Object* $tmp549 = $tmp547($tmp544, $tmp545);
frost$core$String* $tmp550 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s551, ((frost$core$String*) $tmp549));
frost$core$String* $tmp552 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp550, &$s553);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from LinkResolver.frost:132:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String($tmp552);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
// begin inline call to method frost.io.Console.printLine() from Console.stub:26:10
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:38
frost$io$Console$print$frost$core$String(&$s554);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
frost$core$Frost$unref$frost$core$Object$Q($tmp549);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:133
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$ASTNode* $tmp555 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$io$File* $tmp556 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
*(&local10) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp557 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp558 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp559 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
org$frostlang$frostc$ClassDecl* $tmp560 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:135
org$frostlang$frostc$Compiler** $tmp561 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp562 = *$tmp561;
org$frostlang$frostc$Scanner** $tmp563 = &$tmp562->scanner;
org$frostlang$frostc$Scanner* $tmp564 = *$tmp563;
org$frostlang$frostc$ASTNode* $tmp565 = *(&local11);
org$frostlang$frostc$Type* $tmp566 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp564, $tmp565);
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
org$frostlang$frostc$Type* $tmp567 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
*(&local12) = $tmp566;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:136
org$frostlang$frostc$Compiler** $tmp568 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp569 = *$tmp568;
org$frostlang$frostc$Type* $tmp570 = *(&local12);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from LinkResolver.frost:136:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:852
frost$core$Bit $tmp571 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type* $tmp572 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q($tmp569, $tmp570, $tmp571);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
org$frostlang$frostc$Type* $tmp573 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
*(&local13) = $tmp572;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:137
org$frostlang$frostc$Type* $tmp574 = *(&local13);
frost$core$Bit $tmp575 = frost$core$Bit$init$builtin_bit($tmp574 == NULL);
bool $tmp576 = $tmp575.value;
if ($tmp576) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:138
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Type* $tmp577 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp578 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp579 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$io$File* $tmp580 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
*(&local10) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp581 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp582 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp583 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
org$frostlang$frostc$ClassDecl* $tmp584 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:140
frost$collections$Array* $tmp585 = *(&local9);
org$frostlang$frostc$Type* $tmp586 = *(&local13);
frost$collections$Array$add$frost$collections$Array$T($tmp585, ((frost$core$Object*) $tmp586));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:141
org$frostlang$frostc$Compiler** $tmp587 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp588 = *$tmp587;
org$frostlang$frostc$parser$Parser** $tmp589 = &$tmp588->parser;
org$frostlang$frostc$parser$Parser* $tmp590 = *$tmp589;
frost$core$Int64 $tmp591 = (frost$core$Int64) {110};
// begin inline call to org.frostlang.frostc.parser.Token.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.Token.Kind from LinkResolver.frost:141:60
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int64* $tmp592 = &(&local15)->$rawValue;
*$tmp592 = $tmp591;
org$frostlang$frostc$parser$Token$Kind $tmp593 = *(&local15);
*(&local14) = $tmp593;
org$frostlang$frostc$parser$Token$Kind $tmp594 = *(&local14);
// begin inline call to method org.frostlang.frostc.parser.Parser.checkNext(kind:org.frostlang.frostc.parser.Token.Kind):org.frostlang.frostc.parser.Token? from LinkResolver.frost:141:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:174
org$frostlang$frostc$parser$Token $tmp595 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token($tmp590);
*(&local17) = $tmp595;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:175
org$frostlang$frostc$parser$Token $tmp596 = *(&local17);
org$frostlang$frostc$parser$Token$Kind $tmp597 = $tmp596.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp598;
$tmp598 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp598->value = $tmp597;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp599;
$tmp599 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp599->value = $tmp594;
ITable* $tmp600 = ((frost$core$Equatable*) $tmp598)->$class->itable;
while ($tmp600->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp600 = $tmp600->next;
}
$fn602 $tmp601 = $tmp600->methods[0];
frost$core$Bit $tmp603 = $tmp601(((frost$core$Equatable*) $tmp598), ((frost$core$Equatable*) $tmp599));
bool $tmp604 = $tmp603.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp599)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp598)));
if ($tmp604) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:176
org$frostlang$frostc$parser$Token $tmp605 = *(&local17);
*(&local16) = ((org$frostlang$frostc$parser$Token$nullable) { $tmp605, true });
goto block57;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:178
org$frostlang$frostc$parser$Token $tmp606 = *(&local17);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token($tmp590, $tmp606);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:179
*(&local16) = ((org$frostlang$frostc$parser$Token$nullable) { .nonnull = false });
goto block57;
block57:;
org$frostlang$frostc$parser$Token$nullable $tmp607 = *(&local16);
frost$core$Bit $tmp608 = frost$core$Bit$init$builtin_bit(!$tmp607.nonnull);
bool $tmp609 = $tmp608.value;
if ($tmp609) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:142
org$frostlang$frostc$Type* $tmp610 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp611 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp612 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$io$File* $tmp613 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
*(&local10) = ((frost$io$File*) NULL);
goto block43;
block55:;
org$frostlang$frostc$Type* $tmp614 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp615 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp616 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block44;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:146
frost$collections$ListView* $tmp617 = *(&local8);
frost$core$Int64 $tmp618 = (frost$core$Int64) {0};
ITable* $tmp619 = $tmp617->$class->itable;
while ($tmp619->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp619 = $tmp619->next;
}
$fn621 $tmp620 = $tmp619->methods[0];
frost$core$Object* $tmp622 = $tmp620($tmp617, $tmp618);
*(&local18) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp622)));
frost$core$String* $tmp623 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
*(&local18) = ((frost$core$String*) $tmp622);
frost$core$Frost$unref$frost$core$Object$Q($tmp622);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:147
frost$core$String* $tmp624 = *(&local18);
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from LinkResolver.frost:147:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:229
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.stub:229:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:287
frost$core$Int64* $tmp625 = &$tmp624->_length;
frost$core$Int64 $tmp626 = *$tmp625;
frost$core$String$Index $tmp627 = frost$core$String$Index$init$frost$core$Int64($tmp626);
frost$core$String$Index$nullable $tmp628 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp624, &$s629, $tmp627);
*(&local19) = $tmp628;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:148
*(&local20) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:149
frost$core$String$Index$nullable $tmp630 = *(&local19);
frost$core$Bit $tmp631 = frost$core$Bit$init$builtin_bit($tmp630.nonnull);
bool $tmp632 = $tmp631.value;
if ($tmp632) goto block62; else goto block64;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:150
org$frostlang$frostc$Compiler** $tmp633 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp634 = *$tmp633;
frost$core$String* $tmp635 = *(&local18);
frost$core$String$Index$nullable $tmp636 = *(&local19);
frost$core$Bit $tmp637 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp638 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp636, $tmp637);
frost$core$String* $tmp639 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp635, $tmp638);
org$frostlang$frostc$ClassDecl* $tmp640 = org$frostlang$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlang$frostc$ClassDecl$Q($tmp634, $tmp639);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
org$frostlang$frostc$ClassDecl* $tmp641 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
*(&local0) = $tmp640;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:151
frost$core$String* $tmp642 = *(&local18);
frost$core$String* $tmp643 = *(&local18);
frost$core$String$Index$nullable $tmp644 = *(&local19);
frost$core$String$Index $tmp645 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp643, ((frost$core$String$Index) $tmp644.value));
frost$core$Bit $tmp646 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp647 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp645, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp646);
frost$core$String* $tmp648 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp642, $tmp647);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
frost$core$String* $tmp649 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
*(&local20) = $tmp648;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
goto block63;
block64:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:154
org$frostlang$frostc$ClassDecl** $tmp650 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp651 = *$tmp650;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
org$frostlang$frostc$ClassDecl* $tmp652 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
*(&local0) = $tmp651;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:155
frost$core$String* $tmp653 = *(&local18);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
frost$core$String* $tmp654 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
*(&local20) = $tmp653;
goto block63;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:157
org$frostlang$frostc$ClassDecl* $tmp655 = *(&local0);
frost$core$Bit $tmp656 = frost$core$Bit$init$builtin_bit($tmp655 != NULL);
bool $tmp657 = $tmp656.value;
if ($tmp657) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:158
org$frostlang$frostc$Compiler** $tmp658 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp659 = *$tmp658;
org$frostlang$frostc$ClassDecl* $tmp660 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp661 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp659, $tmp660);
frost$core$String* $tmp662 = *(&local20);
org$frostlang$frostc$Symbol* $tmp663 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp661, $tmp662);
*(&local21) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
org$frostlang$frostc$Symbol* $tmp664 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
*(&local21) = $tmp663;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:159
org$frostlang$frostc$Symbol* $tmp665 = *(&local21);
frost$core$Bit $tmp666 = frost$core$Bit$init$builtin_bit($tmp665 == NULL);
bool $tmp667 = $tmp666.value;
if ($tmp667) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:160
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Symbol* $tmp668 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
*(&local21) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp669 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
*(&local20) = ((frost$core$String*) NULL);
frost$core$String* $tmp670 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
*(&local18) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp671 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp672 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp673 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
org$frostlang$frostc$ClassDecl* $tmp674 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:162
org$frostlang$frostc$Symbol* $tmp675 = *(&local21);
org$frostlang$frostc$Symbol$Kind* $tmp676 = &$tmp675->kind;
org$frostlang$frostc$Symbol$Kind $tmp677 = *$tmp676;
frost$core$Int64 $tmp678 = $tmp677.$rawValue;
frost$core$Int64 $tmp679 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LinkResolver.frost:163:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp680 = $tmp678.value;
int64_t $tmp681 = $tmp679.value;
bool $tmp682 = $tmp680 == $tmp681;
frost$core$Bit $tmp683 = frost$core$Bit$init$builtin_bit($tmp682);
bool $tmp684 = $tmp683.value;
if ($tmp684) goto block70; else goto block71;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:164
org$frostlang$frostc$Symbol* $tmp685 = *(&local21);
frost$collections$Array* $tmp686 = *(&local9);
$fn688 $tmp687 = ($fn688) param0->$class->vtable[2];
frost$core$Bit $tmp689 = $tmp687(param0, ((org$frostlang$frostc$MethodDecl*) $tmp685), ((frost$collections$ListView*) $tmp686));
bool $tmp690 = $tmp689.value;
if ($tmp690) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:165
org$frostlang$frostc$Symbol* $tmp691 = *(&local21);
$fn693 $tmp692 = ($fn693) param0->$class->vtable[6];
frost$core$String* $tmp694 = $tmp692(param0, $tmp691);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
org$frostlang$frostc$Symbol* $tmp695 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
*(&local21) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp696 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
*(&local20) = ((frost$core$String*) NULL);
frost$core$String* $tmp697 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
*(&local18) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp698 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp699 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp700 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
org$frostlang$frostc$ClassDecl* $tmp701 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp694;
block74:;
goto block69;
block71:;
frost$core$Int64 $tmp702 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from LinkResolver.frost:168:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp703 = $tmp678.value;
int64_t $tmp704 = $tmp702.value;
bool $tmp705 = $tmp703 == $tmp704;
frost$core$Bit $tmp706 = frost$core$Bit$init$builtin_bit($tmp705);
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block75; else goto block69;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:169
org$frostlang$frostc$Symbol* $tmp708 = *(&local21);
org$frostlang$frostc$FixedArray** $tmp709 = &((org$frostlang$frostc$Methods*) $tmp708)->methods;
org$frostlang$frostc$FixedArray* $tmp710 = *$tmp709;
ITable* $tmp711 = ((frost$collections$Iterable*) $tmp710)->$class->itable;
while ($tmp711->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp711 = $tmp711->next;
}
$fn713 $tmp712 = $tmp711->methods[0];
frost$collections$Iterator* $tmp714 = $tmp712(((frost$collections$Iterable*) $tmp710));
goto block77;
block77:;
ITable* $tmp715 = $tmp714->$class->itable;
while ($tmp715->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp715 = $tmp715->next;
}
$fn717 $tmp716 = $tmp715->methods[0];
frost$core$Bit $tmp718 = $tmp716($tmp714);
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block79; else goto block78;
block78:;
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp720 = $tmp714->$class->itable;
while ($tmp720->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp720 = $tmp720->next;
}
$fn722 $tmp721 = $tmp720->methods[1];
frost$core$Object* $tmp723 = $tmp721($tmp714);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp723)));
org$frostlang$frostc$MethodDecl* $tmp724 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local22) = ((org$frostlang$frostc$MethodDecl*) $tmp723);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:170
org$frostlang$frostc$MethodDecl* $tmp725 = *(&local22);
frost$collections$Array* $tmp726 = *(&local9);
$fn728 $tmp727 = ($fn728) param0->$class->vtable[2];
frost$core$Bit $tmp729 = $tmp727(param0, $tmp725, ((frost$collections$ListView*) $tmp726));
bool $tmp730 = $tmp729.value;
if ($tmp730) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:171
org$frostlang$frostc$MethodDecl* $tmp731 = *(&local22);
$fn733 $tmp732 = ($fn733) param0->$class->vtable[5];
frost$core$String* $tmp734 = $tmp732(param0, $tmp731);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
frost$core$Frost$unref$frost$core$Object$Q($tmp723);
org$frostlang$frostc$MethodDecl* $tmp735 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
org$frostlang$frostc$Symbol* $tmp736 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
*(&local21) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp737 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
*(&local20) = ((frost$core$String*) NULL);
frost$core$String* $tmp738 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
*(&local18) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp739 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp740 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp741 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
org$frostlang$frostc$ClassDecl* $tmp742 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp734;
block81:;
frost$core$Frost$unref$frost$core$Object$Q($tmp723);
org$frostlang$frostc$MethodDecl* $tmp743 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block77;
block79:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
goto block69;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:176
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Symbol* $tmp744 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
*(&local21) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp745 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
*(&local20) = ((frost$core$String*) NULL);
frost$core$String* $tmp746 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
*(&local18) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp747 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp748 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp749 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
org$frostlang$frostc$ClassDecl* $tmp750 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block66:;
frost$core$String* $tmp751 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
*(&local20) = ((frost$core$String*) NULL);
frost$core$String* $tmp752 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
*(&local18) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp753 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
*(&local9) = ((frost$collections$Array*) NULL);
goto block41;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:179
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$collections$ListView* $tmp754 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp755 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
org$frostlang$frostc$ClassDecl* $tmp756 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);

}
void org$frostlang$frostc$frostdoc$LinkResolver$cleanup(org$frostlang$frostc$frostdoc$LinkResolver* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:12
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp757 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp758 = *$tmp757;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
frost$core$String** $tmp759 = &param0->apiRelativePath;
frost$core$String* $tmp760 = *$tmp759;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
org$frostlang$frostc$ClassDecl** $tmp761 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp762 = *$tmp761;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
return;

}

