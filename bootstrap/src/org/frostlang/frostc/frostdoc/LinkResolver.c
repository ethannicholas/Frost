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
#include "frost/core/Int.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int64.h"
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

typedef frost$core$Int (*$fn15)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn19)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn30)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn60)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn80)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn84)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn121)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn200)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$String* (*$fn223)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$ClassDecl*);
typedef frost$collections$Iterator* (*$fn240)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn244)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn249)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn259)(frost$core$Object*);
typedef frost$core$Bit (*$fn274)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn283)(frost$core$Object*);
typedef frost$core$String* (*$fn305)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$FieldDecl*);
typedef frost$core$String* (*$fn314)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*);
typedef frost$core$String* (*$fn335)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$String* (*$fn359)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$Symbol*);
typedef frost$core$String* (*$fn406)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$Symbol*);
typedef frost$core$Object* (*$fn477)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn483)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn491)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn505)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn511)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn532)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn586)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn605)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn672)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*, frost$collections$ListView*);
typedef frost$core$String* (*$fn677)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$Symbol*);
typedef frost$collections$Iterator* (*$fn697)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn701)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn706)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn712)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*, frost$collections$ListView*);
typedef frost$core$String* (*$fn717)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72", 42, 561282631868116756, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 93, -6936278265055109166, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e\x2f", 3, -587371103437254554, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23", 1, -5808625042874858702, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23", 1, -5808625042874858702, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 3563412735833858527, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s286 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, -5808628341409743335, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 4071416011722950258, NULL };
static frost$core$String $s289 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 3062186500626132942, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x74\x74\x70", 4, -8614080090317487483, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x77\x2b", 3, -5621372931950450467, NULL };
static frost$core$String $s365 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a", 13, -3737132400950803795, NULL };
static frost$core$String $s373 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a\x29\x5c\x28\x28\x2e\x2a\x29\x5c\x29", 23, -3548194912101010482, NULL };
static frost$core$String $s480 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s535 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x70\x61\x72\x73\x65\x3a\x20", 17, -794231800371556794, NULL };
static frost$core$String $s537 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s538 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s613 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };

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

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:33
frost$collections$Array** $tmp11 = &param1->parameters;
frost$collections$Array* $tmp12 = *$tmp11;
ITable* $tmp13 = ((frost$collections$CollectionView*) $tmp12)->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
$fn15 $tmp14 = $tmp13->methods[0];
frost$core$Int $tmp16 = $tmp14(((frost$collections$CollectionView*) $tmp12));
ITable* $tmp17 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp17 = $tmp17->next;
}
$fn19 $tmp18 = $tmp17->methods[0];
frost$core$Int $tmp20 = $tmp18(((frost$collections$CollectionView*) param2));
int64_t $tmp21 = $tmp16.value;
int64_t $tmp22 = $tmp20.value;
bool $tmp23 = $tmp21 != $tmp22;
frost$core$Bit $tmp24 = (frost$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:34
frost$core$Bit $tmp26 = (frost$core$Bit) {false};
return $tmp26;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:36
frost$core$Int $tmp27 = (frost$core$Int) {0u};
ITable* $tmp28 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp28 = $tmp28->next;
}
$fn30 $tmp29 = $tmp28->methods[0];
frost$core$Int $tmp31 = $tmp29(((frost$collections$CollectionView*) param2));
frost$core$Bit $tmp32 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp33 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp27, $tmp31, $tmp32);
frost$core$Int $tmp34 = $tmp33.min;
*(&local0) = $tmp34;
frost$core$Int $tmp35 = $tmp33.max;
frost$core$Bit $tmp36 = $tmp33.inclusive;
bool $tmp37 = $tmp36.value;
frost$core$Int $tmp38 = (frost$core$Int) {1u};
if ($tmp37) goto block6; else goto block7;
block6:;
int64_t $tmp39 = $tmp34.value;
int64_t $tmp40 = $tmp35.value;
bool $tmp41 = $tmp39 <= $tmp40;
frost$core$Bit $tmp42 = (frost$core$Bit) {$tmp41};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block3; else goto block4;
block7:;
int64_t $tmp44 = $tmp34.value;
int64_t $tmp45 = $tmp35.value;
bool $tmp46 = $tmp44 < $tmp45;
frost$core$Bit $tmp47 = (frost$core$Bit) {$tmp46};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:37
frost$collections$Array** $tmp49 = &param1->parameters;
frost$collections$Array* $tmp50 = *$tmp49;
frost$core$Int $tmp51 = *(&local0);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from LinkResolver.frost:37:28
frost$core$Int $tmp52 = (frost$core$Int) {0u};
int64_t $tmp53 = $tmp51.value;
int64_t $tmp54 = $tmp52.value;
bool $tmp55 = $tmp53 >= $tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block13; else goto block12;
block13:;
ITable* $tmp58 = ((frost$collections$CollectionView*) $tmp50)->$class->itable;
while ($tmp58->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp58 = $tmp58->next;
}
$fn60 $tmp59 = $tmp58->methods[0];
frost$core$Int $tmp61 = $tmp59(((frost$collections$CollectionView*) $tmp50));
int64_t $tmp62 = $tmp51.value;
int64_t $tmp63 = $tmp61.value;
bool $tmp64 = $tmp62 < $tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block11; else goto block12;
block12:;
frost$core$Int $tmp67 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s68, $tmp67, &$s69);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp70 = &$tmp50->data;
frost$core$Object** $tmp71 = *$tmp70;
frost$core$Int64 $tmp72 = frost$core$Int64$init$frost$core$Int($tmp51);
int64_t $tmp73 = $tmp72.value;
frost$core$Object* $tmp74 = $tmp71[$tmp73];
frost$core$Frost$ref$frost$core$Object$Q($tmp74);
org$frostlang$frostc$Type** $tmp75 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp74)->type;
org$frostlang$frostc$Type* $tmp76 = *$tmp75;
frost$core$Int $tmp77 = *(&local0);
ITable* $tmp78 = param2->$class->itable;
while ($tmp78->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp78 = $tmp78->next;
}
$fn80 $tmp79 = $tmp78->methods[0];
frost$core$Object* $tmp81 = $tmp79(param2, $tmp77);
ITable* $tmp82 = ((frost$core$Equatable*) $tmp76)->$class->itable;
while ($tmp82->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp82 = $tmp82->next;
}
$fn84 $tmp83 = $tmp82->methods[1];
frost$core$Bit $tmp85 = $tmp83(((frost$core$Equatable*) $tmp76), ((frost$core$Equatable*) ((org$frostlang$frostc$Type*) $tmp81)));
bool $tmp86 = $tmp85.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp81);
frost$core$Frost$unref$frost$core$Object$Q($tmp74);
if ($tmp86) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:38
frost$core$Bit $tmp87 = (frost$core$Bit) {false};
return $tmp87;
block9:;
frost$core$Int $tmp88 = *(&local0);
int64_t $tmp89 = $tmp35.value;
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89 - $tmp90;
frost$core$Int $tmp92 = (frost$core$Int) {$tmp91};
if ($tmp37) goto block15; else goto block16;
block15:;
int64_t $tmp93 = $tmp92.value;
int64_t $tmp94 = $tmp38.value;
bool $tmp95 = $tmp93 >= $tmp94;
frost$core$Bit $tmp96 = (frost$core$Bit) {$tmp95};
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block14; else goto block4;
block16:;
int64_t $tmp98 = $tmp92.value;
int64_t $tmp99 = $tmp38.value;
bool $tmp100 = $tmp98 > $tmp99;
frost$core$Bit $tmp101 = (frost$core$Bit) {$tmp100};
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block14; else goto block4;
block14:;
int64_t $tmp103 = $tmp88.value;
int64_t $tmp104 = $tmp38.value;
int64_t $tmp105 = $tmp103 + $tmp104;
frost$core$Int $tmp106 = (frost$core$Int) {$tmp105};
*(&local0) = $tmp106;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:41
frost$core$Bit $tmp107 = (frost$core$Bit) {true};
return $tmp107;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$ClassDecl$R$frost$core$String(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$Int local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:45
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:46
org$frostlang$frostc$ClassDecl** $tmp108 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp109 = *$tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109 != NULL};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:47
org$frostlang$frostc$ClassDecl** $tmp112 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp113 = *$tmp112;
frost$core$String** $tmp114 = &$tmp113->name;
frost$core$String* $tmp115 = *$tmp114;
// begin inline call to function frost.core.String.find(needle:frost.core.String):frost.collections.Iterator<frost.core.String.Index> from LinkResolver.frost:47:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1186
frost$core$Bit $tmp116 = (frost$core$Bit) {false};
// begin inline call to function frost.core.String.find(needle:frost.core.String, overlapping:frost.core.Bit):frost.collections.Iterator<frost.core.String.Index> from String.frost:1186:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1190
FROST_ASSERT(48 == sizeof(frost$core$String$MatchIterator));
frost$core$String$MatchIterator* $tmp117 = (frost$core$String$MatchIterator*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$MatchIterator$class);
frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit($tmp117, $tmp115, &$s118, $tmp116);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp117)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp117)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp117)));
ITable* $tmp119 = ((frost$collections$Iterator*) $tmp117)->$class->itable;
while ($tmp119->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp119 = $tmp119->next;
}
$fn121 $tmp120 = $tmp119->methods[2];
frost$core$Int $tmp122 = $tmp120(((frost$collections$Iterator*) $tmp117));
// begin inline call to function frost.core.String.*(count:frost.core.Int):frost.core.String from LinkResolver.frost:47:27
frost$core$Int $tmp123 = (frost$core$Int) {0u};
int64_t $tmp124 = $tmp122.value;
int64_t $tmp125 = $tmp123.value;
bool $tmp126 = $tmp124 >= $tmp125;
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block7; else goto block8;
block8:;
frost$core$Int $tmp129 = (frost$core$Int) {567u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s130, $tmp129, &$s131);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:568
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp132 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp132);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$core$MutableString* $tmp133 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
*(&local1) = $tmp132;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:569
frost$core$Int $tmp134 = (frost$core$Int) {0u};
frost$core$Bit $tmp135 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp136 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp134, $tmp122, $tmp135);
frost$core$Int $tmp137 = $tmp136.min;
*(&local2) = $tmp137;
frost$core$Int $tmp138 = $tmp136.max;
frost$core$Bit $tmp139 = $tmp136.inclusive;
bool $tmp140 = $tmp139.value;
frost$core$Int $tmp141 = (frost$core$Int) {1u};
if ($tmp140) goto block12; else goto block13;
block12:;
int64_t $tmp142 = $tmp137.value;
int64_t $tmp143 = $tmp138.value;
bool $tmp144 = $tmp142 <= $tmp143;
frost$core$Bit $tmp145 = (frost$core$Bit) {$tmp144};
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block9; else goto block10;
block13:;
int64_t $tmp147 = $tmp137.value;
int64_t $tmp148 = $tmp138.value;
bool $tmp149 = $tmp147 < $tmp148;
frost$core$Bit $tmp150 = (frost$core$Bit) {$tmp149};
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:570
frost$core$MutableString* $tmp152 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp152, &$s153);
frost$core$Int $tmp154 = *(&local2);
int64_t $tmp155 = $tmp138.value;
int64_t $tmp156 = $tmp154.value;
int64_t $tmp157 = $tmp155 - $tmp156;
frost$core$Int $tmp158 = (frost$core$Int) {$tmp157};
if ($tmp140) goto block15; else goto block16;
block15:;
int64_t $tmp159 = $tmp158.value;
int64_t $tmp160 = $tmp141.value;
bool $tmp161 = $tmp159 >= $tmp160;
frost$core$Bit $tmp162 = (frost$core$Bit) {$tmp161};
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block14; else goto block10;
block16:;
int64_t $tmp164 = $tmp158.value;
int64_t $tmp165 = $tmp141.value;
bool $tmp166 = $tmp164 > $tmp165;
frost$core$Bit $tmp167 = (frost$core$Bit) {$tmp166};
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block14; else goto block10;
block14:;
int64_t $tmp169 = $tmp154.value;
int64_t $tmp170 = $tmp141.value;
int64_t $tmp171 = $tmp169 + $tmp170;
frost$core$Int $tmp172 = (frost$core$Int) {$tmp171};
*(&local2) = $tmp172;
goto block9;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:572
frost$core$MutableString* $tmp173 = *(&local1);
frost$core$String* $tmp174 = frost$core$MutableString$finish$R$frost$core$String($tmp173);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$MutableString* $tmp175 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$String* $tmp176 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
*(&local0) = $tmp174;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp117)));
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:50
frost$core$String** $tmp177 = &param0->apiRelativePath;
frost$core$String* $tmp178 = *$tmp177;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$String* $tmp179 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
*(&local0) = $tmp178;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:52
frost$core$String* $tmp180 = *(&local0);
frost$core$String** $tmp181 = &param1->name;
frost$core$String* $tmp182 = *$tmp181;
frost$core$String* $tmp183 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp182, &$s184, &$s185);
frost$core$String* $tmp186 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp180, $tmp183);
frost$core$String* $tmp187 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp186, &$s188);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$String* $tmp189 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local0) = ((frost$core$String*) NULL);
return $tmp187;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$FieldDecl$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$FieldDecl* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:56
frost$core$Weak** $tmp190 = &param1->owner;
frost$core$Weak* $tmp191 = *$tmp190;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LinkResolver.frost:56:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp192 = &$tmp191->_valid;
frost$core$Bit $tmp193 = *$tmp192;
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block3; else goto block4;
block4:;
frost$core$Int $tmp195 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s196, $tmp195);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp197 = &$tmp191->value;
frost$core$Object* $tmp198 = *$tmp197;
frost$core$Frost$ref$frost$core$Object$Q($tmp198);
$fn200 $tmp199 = ($fn200) param0->$class->vtable[3];
frost$core$String* $tmp201 = $tmp199(param0, ((org$frostlang$frostc$ClassDecl*) $tmp198));
frost$core$String** $tmp202 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp203 = *$tmp202;
frost$core$String* $tmp204 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s205, $tmp203);
frost$core$String* $tmp206 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp204, &$s207);
frost$core$String* $tmp208 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp201, $tmp206);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
frost$core$Frost$unref$frost$core$Object$Q($tmp198);
return $tmp208;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$MethodDecl$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:60
org$frostlang$frostc$Compiler** $tmp209 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp210 = *$tmp209;
frost$core$Bit $tmp211 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit($tmp210, param1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:61
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp212 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$Weak** $tmp213 = &param1->owner;
frost$core$Weak* $tmp214 = *$tmp213;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from LinkResolver.frost:61:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp215 = &$tmp214->_valid;
frost$core$Bit $tmp216 = *$tmp215;
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block3; else goto block4;
block4:;
frost$core$Int $tmp218 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s219, $tmp218);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp220 = &$tmp214->value;
frost$core$Object* $tmp221 = *$tmp220;
frost$core$Frost$ref$frost$core$Object$Q($tmp221);
$fn223 $tmp222 = ($fn223) param0->$class->vtable[3];
frost$core$String* $tmp224 = $tmp222(param0, ((org$frostlang$frostc$ClassDecl*) $tmp221));
frost$core$MutableString$init$frost$core$String($tmp212, $tmp224);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
frost$core$MutableString* $tmp225 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
*(&local0) = $tmp212;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$Frost$unref$frost$core$Object$Q($tmp221);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:62
frost$core$MutableString* $tmp226 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp226, &$s227);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:63
frost$core$MutableString* $tmp228 = *(&local0);
frost$core$String** $tmp229 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp230 = *$tmp229;
frost$core$MutableString$append$frost$core$String($tmp228, $tmp230);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:64
frost$core$MutableString* $tmp231 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp231, &$s232);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:65
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s233));
frost$core$String* $tmp234 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
*(&local1) = &$s235;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:66
frost$collections$Array** $tmp236 = &param1->parameters;
frost$collections$Array* $tmp237 = *$tmp236;
ITable* $tmp238 = ((frost$collections$Iterable*) $tmp237)->$class->itable;
while ($tmp238->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp238 = $tmp238->next;
}
$fn240 $tmp239 = $tmp238->methods[0];
frost$collections$Iterator* $tmp241 = $tmp239(((frost$collections$Iterable*) $tmp237));
goto block5;
block5:;
ITable* $tmp242 = $tmp241->$class->itable;
while ($tmp242->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp242 = $tmp242->next;
}
$fn244 $tmp243 = $tmp242->methods[0];
frost$core$Bit $tmp245 = $tmp243($tmp241);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block7; else goto block6;
block6:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp247 = $tmp241->$class->itable;
while ($tmp247->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp247 = $tmp247->next;
}
$fn249 $tmp248 = $tmp247->methods[1];
frost$core$Object* $tmp250 = $tmp248($tmp241);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp250)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp251 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp250);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:67
frost$core$MutableString* $tmp252 = *(&local0);
frost$core$String* $tmp253 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp252, $tmp253);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:68
frost$core$MutableString* $tmp254 = *(&local0);
org$frostlang$frostc$MethodDecl$Parameter* $tmp255 = *(&local2);
org$frostlang$frostc$Type** $tmp256 = &$tmp255->type;
org$frostlang$frostc$Type* $tmp257 = *$tmp256;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from LinkResolver.frost:68:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn259 $tmp258 = ($fn259) ((frost$core$Object*) $tmp257)->$class->vtable[0];
frost$core$String* $tmp260 = $tmp258(((frost$core$Object*) $tmp257));
frost$core$MutableString$append$frost$core$String($tmp254, $tmp260);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:69
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s261));
frost$core$String* $tmp262 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local1) = &$s263;
frost$core$Frost$unref$frost$core$Object$Q($tmp250);
org$frostlang$frostc$MethodDecl$Parameter* $tmp264 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:71
frost$core$MutableString* $tmp265 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp265, &$s266);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:72
org$frostlang$frostc$Type** $tmp267 = &param1->returnType;
org$frostlang$frostc$Type* $tmp268 = *$tmp267;
frost$core$String** $tmp269 = &((org$frostlang$frostc$Symbol*) $tmp268)->name;
frost$core$String* $tmp270 = *$tmp269;
ITable* $tmp272 = ((frost$core$Equatable*) $tmp270)->$class->itable;
while ($tmp272->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp272 = $tmp272->next;
}
$fn274 $tmp273 = $tmp272->methods[1];
frost$core$Bit $tmp275 = $tmp273(((frost$core$Equatable*) $tmp270), ((frost$core$Equatable*) &$s271));
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:73
frost$core$MutableString* $tmp277 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp277, &$s278);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:74
frost$core$MutableString* $tmp279 = *(&local0);
org$frostlang$frostc$Type** $tmp280 = &param1->returnType;
org$frostlang$frostc$Type* $tmp281 = *$tmp280;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from LinkResolver.frost:74:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn283 $tmp282 = ($fn283) ((frost$core$Object*) $tmp281)->$class->vtable[0];
frost$core$String* $tmp284 = $tmp282(((frost$core$Object*) $tmp281));
frost$core$MutableString$append$frost$core$String($tmp279, $tmp284);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:76
frost$core$MutableString* $tmp285 = *(&local0);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp285, &$s286, &$s287);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:77
frost$core$MutableString* $tmp288 = *(&local0);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp288, &$s289, &$s290);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:78
frost$core$MutableString* $tmp291 = *(&local0);
frost$core$String* $tmp292 = frost$core$MutableString$finish$R$frost$core$String($tmp291);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
frost$core$String* $tmp293 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp294 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp292;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$Symbol$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$Symbol* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:82
org$frostlang$frostc$Symbol$Kind* $tmp295 = &param1->kind;
org$frostlang$frostc$Symbol$Kind $tmp296 = *$tmp295;
frost$core$Int $tmp297 = $tmp296.$rawValue;
frost$core$Int $tmp298 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LinkResolver.frost:83:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp299 = $tmp297.value;
int64_t $tmp300 = $tmp298.value;
bool $tmp301 = $tmp299 == $tmp300;
frost$core$Bit $tmp302 = (frost$core$Bit) {$tmp301};
bool $tmp303 = $tmp302.value;
if ($tmp303) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:84
$fn305 $tmp304 = ($fn305) param0->$class->vtable[4];
frost$core$String* $tmp306 = $tmp304(param0, ((org$frostlang$frostc$FieldDecl*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
return $tmp306;
block3:;
frost$core$Int $tmp307 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LinkResolver.frost:86:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp308 = $tmp297.value;
int64_t $tmp309 = $tmp307.value;
bool $tmp310 = $tmp308 == $tmp309;
frost$core$Bit $tmp311 = (frost$core$Bit) {$tmp310};
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:87
$fn314 $tmp313 = ($fn314) param0->$class->vtable[5];
frost$core$String* $tmp315 = $tmp313(param0, ((org$frostlang$frostc$MethodDecl*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
return $tmp315;
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
frost$core$Int local7;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:967
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.frost:967:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:978
frost$core$String$Index $tmp316 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$String$Index$nullable $tmp317 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param1, &$s318, $tmp316);
frost$core$Bit $tmp319 = (frost$core$Bit) {$tmp317.nonnull};
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block1; else goto block3;
block3:;
// begin inline call to function frost.core.String.contains(s:frost.core.String):frost.core.Bit from LinkResolver.frost:96:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:967
// begin inline call to function frost.core.String.indexOf(s:frost.core.String):frost.core.String.Index? from String.frost:967:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:978
frost$core$String$Index $tmp321 = frost$core$String$get_start$R$frost$core$String$Index(param1);
frost$core$String$Index$nullable $tmp322 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param1, &$s323, $tmp321);
frost$core$Bit $tmp324 = (frost$core$Bit) {$tmp322.nonnull};
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:97
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:99
org$frostlang$frostc$Compiler** $tmp326 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp327 = *$tmp326;
org$frostlang$frostc$ClassDecl* $tmp328 = org$frostlang$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlang$frostc$ClassDecl$Q($tmp327, param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
org$frostlang$frostc$ClassDecl* $tmp329 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
*(&local0) = $tmp328;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:100
org$frostlang$frostc$ClassDecl* $tmp330 = *(&local0);
frost$core$Bit $tmp331 = (frost$core$Bit) {$tmp330 != NULL};
bool $tmp332 = $tmp331.value;
if ($tmp332) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:101
org$frostlang$frostc$ClassDecl* $tmp333 = *(&local0);
$fn335 $tmp334 = ($fn335) param0->$class->vtable[3];
frost$core$String* $tmp336 = $tmp334(param0, $tmp333);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
org$frostlang$frostc$ClassDecl* $tmp337 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp336;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:103
org$frostlang$frostc$ClassDecl** $tmp338 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp339 = *$tmp338;
frost$core$Bit $tmp340 = (frost$core$Bit) {$tmp339 != NULL};
bool $tmp341 = $tmp340.value;
if ($tmp341) goto block12; else goto block11;
block12:;
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp342 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp342, &$s343);
// begin inline call to function frost.core.String.matches(regex:frost.core.RegularExpression):frost.core.Bit from LinkResolver.frost:103:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1047
frost$core$Matcher* $tmp344 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp342, param1);
frost$core$Bit $tmp345;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp345, $tmp344);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
bool $tmp346 = $tmp345.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
if ($tmp346) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:104
org$frostlang$frostc$Compiler** $tmp347 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp348 = *$tmp347;
org$frostlang$frostc$ClassDecl** $tmp349 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp350 = *$tmp349;
org$frostlang$frostc$SymbolTable* $tmp351 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp348, $tmp350);
org$frostlang$frostc$Symbol* $tmp352 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp351, param1);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
org$frostlang$frostc$Symbol* $tmp353 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
*(&local1) = $tmp352;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:105
org$frostlang$frostc$Symbol* $tmp354 = *(&local1);
frost$core$Bit $tmp355 = (frost$core$Bit) {$tmp354 != NULL};
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:106
org$frostlang$frostc$Symbol* $tmp357 = *(&local1);
$fn359 $tmp358 = ($fn359) param0->$class->vtable[6];
frost$core$String* $tmp360 = $tmp358(param0, $tmp357);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
org$frostlang$frostc$Symbol* $tmp361 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp362 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp360;
block15:;
org$frostlang$frostc$Symbol* $tmp363 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:109
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp364 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp364, &$s365);
// begin inline call to function frost.core.String.matches(regex:frost.core.RegularExpression):frost.core.Bit from LinkResolver.frost:109:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1047
frost$core$Matcher* $tmp366 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp364, param1);
frost$core$Bit $tmp367;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp367, $tmp366);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
bool $tmp368 = $tmp367.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
if ($tmp368) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:110
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from LinkResolver.frost:110:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp369 = &param1->_length;
frost$core$Int $tmp370 = *$tmp369;
frost$core$String$Index $tmp371 = frost$core$String$Index$init$frost$core$Int($tmp370);
frost$core$String$Index$nullable $tmp372 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param1, &$s373, $tmp371);
*(&local2) = $tmp372;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:111
frost$core$String$Index$nullable $tmp374 = *(&local2);
frost$core$Bit $tmp375 = (frost$core$Bit) {$tmp374.nonnull};
bool $tmp376 = $tmp375.value;
if ($tmp376) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:112
org$frostlang$frostc$Compiler** $tmp377 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp378 = *$tmp377;
frost$core$String$Index$nullable $tmp379 = *(&local2);
frost$core$Bit $tmp380 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp381 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp379, $tmp380);
frost$core$String* $tmp382 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp381);
org$frostlang$frostc$ClassDecl* $tmp383 = org$frostlang$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlang$frostc$ClassDecl$Q($tmp378, $tmp382);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
org$frostlang$frostc$ClassDecl* $tmp384 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
*(&local0) = $tmp383;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:113
org$frostlang$frostc$ClassDecl* $tmp385 = *(&local0);
frost$core$Bit $tmp386 = (frost$core$Bit) {$tmp385 != NULL};
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:114
org$frostlang$frostc$Compiler** $tmp388 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp389 = *$tmp388;
org$frostlang$frostc$ClassDecl* $tmp390 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp391 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp389, $tmp390);
frost$core$String$Index$nullable $tmp392 = *(&local2);
frost$core$String$Index $tmp393 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, ((frost$core$String$Index) $tmp392.value));
frost$core$Bit $tmp394 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp395 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp393, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp394);
frost$core$String* $tmp396 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp395);
org$frostlang$frostc$Symbol* $tmp397 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp391, $tmp396);
*(&local3) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
org$frostlang$frostc$Symbol* $tmp398 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local3) = $tmp397;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:115
org$frostlang$frostc$Symbol* $tmp399 = *(&local3);
frost$core$Bit $tmp400 = (frost$core$Bit) {$tmp399 == NULL};
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:116
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Symbol* $tmp402 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
*(&local3) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp403 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:118
org$frostlang$frostc$Symbol* $tmp404 = *(&local3);
$fn406 $tmp405 = ($fn406) param0->$class->vtable[6];
frost$core$String* $tmp407 = $tmp405(param0, $tmp404);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
org$frostlang$frostc$Symbol* $tmp408 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
*(&local3) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp409 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp407;
block24:;
goto block22;
block22:;
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:122
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp410 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp410, &$s411);
// begin inline call to function frost.core.String.parse(regex:frost.core.RegularExpression):frost.collections.ListView<frost.core.String?>? from LinkResolver.frost:122:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1072
frost$core$Matcher* $tmp412 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp410, param1);
*(&local5) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
frost$core$Matcher* $tmp413 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
*(&local5) = $tmp412;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1073
frost$core$Matcher* $tmp414 = *(&local5);
frost$core$Bit $tmp415;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp415, $tmp414);
bool $tmp416 = $tmp415.value;
if ($tmp416) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1074
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp417 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp417);
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
frost$collections$Array* $tmp418 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
*(&local6) = $tmp417;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1075
frost$core$Int $tmp419 = (frost$core$Int) {1u};
frost$core$Matcher* $tmp420 = *(&local5);
frost$core$Int $tmp421;
frost$core$Matcher$get_groupCount$R$frost$core$Int(&$tmp421, $tmp420);
frost$core$Bit $tmp422 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp423 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp419, $tmp421, $tmp422);
frost$core$Int $tmp424 = $tmp423.min;
*(&local7) = $tmp424;
frost$core$Int $tmp425 = $tmp423.max;
frost$core$Bit $tmp426 = $tmp423.inclusive;
bool $tmp427 = $tmp426.value;
frost$core$Int $tmp428 = (frost$core$Int) {1u};
if ($tmp427) goto block33; else goto block34;
block33:;
int64_t $tmp429 = $tmp424.value;
int64_t $tmp430 = $tmp425.value;
bool $tmp431 = $tmp429 <= $tmp430;
frost$core$Bit $tmp432 = (frost$core$Bit) {$tmp431};
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block30; else goto block31;
block34:;
int64_t $tmp434 = $tmp424.value;
int64_t $tmp435 = $tmp425.value;
bool $tmp436 = $tmp434 < $tmp435;
frost$core$Bit $tmp437 = (frost$core$Bit) {$tmp436};
bool $tmp438 = $tmp437.value;
if ($tmp438) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1076
frost$collections$Array* $tmp439 = *(&local6);
frost$core$Matcher* $tmp440 = *(&local5);
frost$core$Int $tmp441 = *(&local7);
frost$core$String* $tmp442 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q($tmp440, $tmp441);
frost$collections$Array$add$frost$collections$Array$T($tmp439, ((frost$core$Object*) $tmp442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
frost$core$Int $tmp443 = *(&local7);
int64_t $tmp444 = $tmp425.value;
int64_t $tmp445 = $tmp443.value;
int64_t $tmp446 = $tmp444 - $tmp445;
frost$core$Int $tmp447 = (frost$core$Int) {$tmp446};
if ($tmp427) goto block36; else goto block37;
block36:;
int64_t $tmp448 = $tmp447.value;
int64_t $tmp449 = $tmp428.value;
bool $tmp450 = $tmp448 >= $tmp449;
frost$core$Bit $tmp451 = (frost$core$Bit) {$tmp450};
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block35; else goto block31;
block37:;
int64_t $tmp453 = $tmp447.value;
int64_t $tmp454 = $tmp428.value;
bool $tmp455 = $tmp453 > $tmp454;
frost$core$Bit $tmp456 = (frost$core$Bit) {$tmp455};
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block35; else goto block31;
block35:;
int64_t $tmp458 = $tmp443.value;
int64_t $tmp459 = $tmp428.value;
int64_t $tmp460 = $tmp458 + $tmp459;
frost$core$Int $tmp461 = (frost$core$Int) {$tmp460};
*(&local7) = $tmp461;
goto block30;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1078
frost$collections$Array* $tmp462 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp462)));
frost$collections$Array* $tmp463 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Matcher* $tmp464 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
*(&local5) = ((frost$core$Matcher*) NULL);
*(&local4) = ((frost$collections$ListView*) $tmp462);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp462)));
goto block27;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1080
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$core$Matcher* $tmp465 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
*(&local5) = ((frost$core$Matcher*) NULL);
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
goto block27;
block27:;
frost$collections$ListView* $tmp466 = *(&local4);
*(&local8) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
frost$collections$ListView* $tmp467 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local8) = $tmp466;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:123
frost$collections$ListView* $tmp468 = *(&local8);
frost$core$Bit $tmp469 = (frost$core$Bit) {$tmp468 != NULL};
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:124
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp471 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp471);
*(&local9) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
frost$collections$Array* $tmp472 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
*(&local9) = $tmp471;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:125
frost$collections$ListView* $tmp473 = *(&local8);
frost$core$Int $tmp474 = (frost$core$Int) {1u};
ITable* $tmp475 = $tmp473->$class->itable;
while ($tmp475->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp475 = $tmp475->next;
}
$fn477 $tmp476 = $tmp475->methods[0];
frost$core$Object* $tmp478 = $tmp476($tmp473, $tmp474);
frost$core$String* $tmp479 = frost$core$String$get_trimmed$R$frost$core$String(((frost$core$String*) $tmp478));
ITable* $tmp481 = ((frost$core$Equatable*) $tmp479)->$class->itable;
while ($tmp481->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp481 = $tmp481->next;
}
$fn483 $tmp482 = $tmp481->methods[1];
frost$core$Bit $tmp484 = $tmp482(((frost$core$Equatable*) $tmp479), ((frost$core$Equatable*) &$s480));
bool $tmp485 = $tmp484.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
frost$core$Frost$unref$frost$core$Object$Q($tmp478);
if ($tmp485) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:126
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp486 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$collections$ListView* $tmp487 = *(&local8);
frost$core$Int $tmp488 = (frost$core$Int) {1u};
ITable* $tmp489 = $tmp487->$class->itable;
while ($tmp489->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp489 = $tmp489->next;
}
$fn491 $tmp490 = $tmp489->methods[0];
frost$core$Object* $tmp492 = $tmp490($tmp487, $tmp488);
frost$io$File$init$frost$core$String($tmp486, ((frost$core$String*) $tmp492));
*(&local10) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
frost$io$File* $tmp493 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
*(&local10) = $tmp486;
frost$core$Frost$unref$frost$core$Object$Q($tmp492);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:127
org$frostlang$frostc$Compiler** $tmp494 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp495 = *$tmp494;
org$frostlang$frostc$parser$Parser** $tmp496 = &$tmp495->parser;
org$frostlang$frostc$parser$Parser* $tmp497 = *$tmp496;
frost$io$File* $tmp498 = *(&local10);
org$frostlang$frostc$Compiler** $tmp499 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp500 = *$tmp499;
frost$collections$Array** $tmp501 = &$tmp500->files;
frost$collections$Array* $tmp502 = *$tmp501;
ITable* $tmp503 = ((frost$collections$CollectionView*) $tmp502)->$class->itable;
while ($tmp503->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp503 = $tmp503->next;
}
$fn505 $tmp504 = $tmp503->methods[0];
frost$core$Int $tmp506 = $tmp504(((frost$collections$CollectionView*) $tmp502));
frost$collections$ListView* $tmp507 = *(&local8);
frost$core$Int $tmp508 = (frost$core$Int) {1u};
ITable* $tmp509 = $tmp507->$class->itable;
while ($tmp509->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp509 = $tmp509->next;
}
$fn511 $tmp510 = $tmp509->methods[0];
frost$core$Object* $tmp512 = $tmp510($tmp507, $tmp508);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int$frost$core$String($tmp497, $tmp498, $tmp506, ((frost$core$String*) $tmp512));
frost$core$Frost$unref$frost$core$Object$Q($tmp512);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:128
org$frostlang$frostc$Compiler** $tmp513 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp514 = *$tmp513;
frost$collections$Array** $tmp515 = &$tmp514->files;
frost$collections$Array* $tmp516 = *$tmp515;
frost$io$File* $tmp517 = *(&local10);
frost$collections$Array$add$frost$collections$Array$T($tmp516, ((frost$core$Object*) $tmp517));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:129
goto block42;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:130
org$frostlang$frostc$Compiler** $tmp518 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp519 = *$tmp518;
org$frostlang$frostc$parser$Parser** $tmp520 = &$tmp519->parser;
org$frostlang$frostc$parser$Parser* $tmp521 = *$tmp520;
// begin inline call to method org.frostlang.frostc.parser.Parser.type():org.frostlang.frostc.ASTNode? from LinkResolver.frost:130:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:852
frost$core$Bit $tmp522 = (frost$core$Bit) {true};
org$frostlang$frostc$ASTNode* $tmp523 = org$frostlang$frostc$parser$Parser$type$frost$core$Bit$R$org$frostlang$frostc$ASTNode$Q($tmp521, $tmp522);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
org$frostlang$frostc$ASTNode* $tmp524 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
*(&local11) = $tmp523;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:131
org$frostlang$frostc$ASTNode* $tmp525 = *(&local11);
frost$core$Bit $tmp526 = (frost$core$Bit) {$tmp525 == NULL};
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:132
frost$collections$ListView* $tmp528 = *(&local8);
frost$core$Int $tmp529 = (frost$core$Int) {1u};
ITable* $tmp530 = $tmp528->$class->itable;
while ($tmp530->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp530 = $tmp530->next;
}
$fn532 $tmp531 = $tmp530->methods[0];
frost$core$Object* $tmp533 = $tmp531($tmp528, $tmp529);
frost$core$String* $tmp534 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s535, ((frost$core$String*) $tmp533));
frost$core$String* $tmp536 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp534, &$s537);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from LinkResolver.frost:132:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp536);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s538);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
frost$core$Frost$unref$frost$core$Object$Q($tmp533);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:133
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$ASTNode* $tmp539 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$io$File* $tmp540 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
*(&local10) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp541 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp542 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp543 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
org$frostlang$frostc$ClassDecl* $tmp544 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:135
org$frostlang$frostc$Compiler** $tmp545 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp546 = *$tmp545;
org$frostlang$frostc$Scanner** $tmp547 = &$tmp546->scanner;
org$frostlang$frostc$Scanner* $tmp548 = *$tmp547;
org$frostlang$frostc$ASTNode* $tmp549 = *(&local11);
org$frostlang$frostc$Type* $tmp550 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp548, $tmp549);
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
org$frostlang$frostc$Type* $tmp551 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
*(&local12) = $tmp550;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:136
org$frostlang$frostc$Compiler** $tmp552 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp553 = *$tmp552;
org$frostlang$frostc$Type* $tmp554 = *(&local12);
// begin inline call to method org.frostlang.frostc.Compiler.resolve(type:org.frostlang.frostc.Type):org.frostlang.frostc.Type? from LinkResolver.frost:136:53
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:965
frost$core$Bit $tmp555 = (frost$core$Bit) {true};
org$frostlang$frostc$Type* $tmp556 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type$Q($tmp553, $tmp554, $tmp555);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
org$frostlang$frostc$Type* $tmp557 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
*(&local13) = $tmp556;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:137
org$frostlang$frostc$Type* $tmp558 = *(&local13);
frost$core$Bit $tmp559 = (frost$core$Bit) {$tmp558 == NULL};
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:138
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Type* $tmp561 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp562 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp563 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$io$File* $tmp564 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
*(&local10) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp565 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp566 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp567 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
org$frostlang$frostc$ClassDecl* $tmp568 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:140
frost$collections$Array* $tmp569 = *(&local9);
org$frostlang$frostc$Type* $tmp570 = *(&local13);
frost$collections$Array$add$frost$collections$Array$T($tmp569, ((frost$core$Object*) $tmp570));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:141
org$frostlang$frostc$Compiler** $tmp571 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp572 = *$tmp571;
org$frostlang$frostc$parser$Parser** $tmp573 = &$tmp572->parser;
org$frostlang$frostc$parser$Parser* $tmp574 = *$tmp573;
frost$core$Int $tmp575 = (frost$core$Int) {110u};
// begin inline call to org.frostlang.frostc.parser.Token.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.Token.Kind from LinkResolver.frost:141:60
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int* $tmp576 = &(&local15)->$rawValue;
*$tmp576 = $tmp575;
org$frostlang$frostc$parser$Token$Kind $tmp577 = *(&local15);
*(&local14) = $tmp577;
org$frostlang$frostc$parser$Token$Kind $tmp578 = *(&local14);
// begin inline call to method org.frostlang.frostc.parser.Parser.checkNext(kind:org.frostlang.frostc.parser.Token.Kind):org.frostlang.frostc.parser.Token? from LinkResolver.frost:141:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:174
org$frostlang$frostc$parser$Token $tmp579 = org$frostlang$frostc$parser$Parser$next$R$org$frostlang$frostc$parser$Token($tmp574);
*(&local17) = $tmp579;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:175
org$frostlang$frostc$parser$Token $tmp580 = *(&local17);
org$frostlang$frostc$parser$Token$Kind $tmp581 = $tmp580.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp582;
$tmp582 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp582->value = $tmp581;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp583;
$tmp583 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp583->value = $tmp578;
ITable* $tmp584 = ((frost$core$Equatable*) $tmp582)->$class->itable;
while ($tmp584->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp584 = $tmp584->next;
}
$fn586 $tmp585 = $tmp584->methods[0];
frost$core$Bit $tmp587 = $tmp585(((frost$core$Equatable*) $tmp582), ((frost$core$Equatable*) $tmp583));
bool $tmp588 = $tmp587.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp583)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp582)));
if ($tmp588) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:176
org$frostlang$frostc$parser$Token $tmp589 = *(&local17);
*(&local16) = ((org$frostlang$frostc$parser$Token$nullable) { $tmp589, true });
goto block55;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:178
org$frostlang$frostc$parser$Token $tmp590 = *(&local17);
org$frostlang$frostc$parser$Parser$pushback$org$frostlang$frostc$parser$Token($tmp574, $tmp590);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:179
*(&local16) = ((org$frostlang$frostc$parser$Token$nullable) { .nonnull = false });
goto block55;
block55:;
org$frostlang$frostc$parser$Token$nullable $tmp591 = *(&local16);
frost$core$Bit $tmp592 = (frost$core$Bit) {!$tmp591.nonnull};
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:142
org$frostlang$frostc$Type* $tmp594 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp595 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp596 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$io$File* $tmp597 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
*(&local10) = ((frost$io$File*) NULL);
goto block41;
block53:;
org$frostlang$frostc$Type* $tmp598 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp599 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp600 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:146
frost$collections$ListView* $tmp601 = *(&local8);
frost$core$Int $tmp602 = (frost$core$Int) {0u};
ITable* $tmp603 = $tmp601->$class->itable;
while ($tmp603->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp603 = $tmp603->next;
}
$fn605 $tmp604 = $tmp603->methods[0];
frost$core$Object* $tmp606 = $tmp604($tmp601, $tmp602);
*(&local18) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp606)));
frost$core$String* $tmp607 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
*(&local18) = ((frost$core$String*) $tmp606);
frost$core$Frost$unref$frost$core$Object$Q($tmp606);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:147
frost$core$String* $tmp608 = *(&local18);
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from LinkResolver.frost:147:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp609 = &$tmp608->_length;
frost$core$Int $tmp610 = *$tmp609;
frost$core$String$Index $tmp611 = frost$core$String$Index$init$frost$core$Int($tmp610);
frost$core$String$Index$nullable $tmp612 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp608, &$s613, $tmp611);
*(&local19) = $tmp612;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:148
*(&local20) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:149
frost$core$String$Index$nullable $tmp614 = *(&local19);
frost$core$Bit $tmp615 = (frost$core$Bit) {$tmp614.nonnull};
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block60; else goto block62;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:150
org$frostlang$frostc$Compiler** $tmp617 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp618 = *$tmp617;
frost$core$String* $tmp619 = *(&local18);
frost$core$String$Index$nullable $tmp620 = *(&local19);
frost$core$Bit $tmp621 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp622 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp620, $tmp621);
frost$core$String* $tmp623 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp619, $tmp622);
org$frostlang$frostc$ClassDecl* $tmp624 = org$frostlang$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlang$frostc$ClassDecl$Q($tmp618, $tmp623);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
org$frostlang$frostc$ClassDecl* $tmp625 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
*(&local0) = $tmp624;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:151
frost$core$String* $tmp626 = *(&local18);
frost$core$String* $tmp627 = *(&local18);
frost$core$String$Index$nullable $tmp628 = *(&local19);
frost$core$String$Index $tmp629 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp627, ((frost$core$String$Index) $tmp628.value));
frost$core$Bit $tmp630 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp631 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp629, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp630);
frost$core$String* $tmp632 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp626, $tmp631);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
frost$core$String* $tmp633 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
*(&local20) = $tmp632;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
goto block61;
block62:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:154
org$frostlang$frostc$ClassDecl** $tmp634 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp635 = *$tmp634;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
org$frostlang$frostc$ClassDecl* $tmp636 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
*(&local0) = $tmp635;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:155
frost$core$String* $tmp637 = *(&local18);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
frost$core$String* $tmp638 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
*(&local20) = $tmp637;
goto block61;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:157
org$frostlang$frostc$ClassDecl* $tmp639 = *(&local0);
frost$core$Bit $tmp640 = (frost$core$Bit) {$tmp639 != NULL};
bool $tmp641 = $tmp640.value;
if ($tmp641) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:158
org$frostlang$frostc$Compiler** $tmp642 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp643 = *$tmp642;
org$frostlang$frostc$ClassDecl* $tmp644 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp645 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp643, $tmp644);
frost$core$String* $tmp646 = *(&local20);
org$frostlang$frostc$Symbol* $tmp647 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp645, $tmp646);
*(&local21) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
org$frostlang$frostc$Symbol* $tmp648 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
*(&local21) = $tmp647;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:159
org$frostlang$frostc$Symbol* $tmp649 = *(&local21);
frost$core$Bit $tmp650 = (frost$core$Bit) {$tmp649 == NULL};
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:160
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Symbol* $tmp652 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
*(&local21) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp653 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
*(&local20) = ((frost$core$String*) NULL);
frost$core$String* $tmp654 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
*(&local18) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp655 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp656 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp657 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
org$frostlang$frostc$ClassDecl* $tmp658 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:162
org$frostlang$frostc$Symbol* $tmp659 = *(&local21);
org$frostlang$frostc$Symbol$Kind* $tmp660 = &$tmp659->kind;
org$frostlang$frostc$Symbol$Kind $tmp661 = *$tmp660;
frost$core$Int $tmp662 = $tmp661.$rawValue;
frost$core$Int $tmp663 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LinkResolver.frost:163:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp664 = $tmp662.value;
int64_t $tmp665 = $tmp663.value;
bool $tmp666 = $tmp664 == $tmp665;
frost$core$Bit $tmp667 = (frost$core$Bit) {$tmp666};
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:164
org$frostlang$frostc$Symbol* $tmp669 = *(&local21);
frost$collections$Array* $tmp670 = *(&local9);
$fn672 $tmp671 = ($fn672) param0->$class->vtable[2];
frost$core$Bit $tmp673 = $tmp671(param0, ((org$frostlang$frostc$MethodDecl*) $tmp669), ((frost$collections$ListView*) $tmp670));
bool $tmp674 = $tmp673.value;
if ($tmp674) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:165
org$frostlang$frostc$Symbol* $tmp675 = *(&local21);
$fn677 $tmp676 = ($fn677) param0->$class->vtable[6];
frost$core$String* $tmp678 = $tmp676(param0, $tmp675);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
org$frostlang$frostc$Symbol* $tmp679 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
*(&local21) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp680 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
*(&local20) = ((frost$core$String*) NULL);
frost$core$String* $tmp681 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
*(&local18) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp682 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp683 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp684 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
org$frostlang$frostc$ClassDecl* $tmp685 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp678;
block72:;
goto block67;
block69:;
frost$core$Int $tmp686 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from LinkResolver.frost:168:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp687 = $tmp662.value;
int64_t $tmp688 = $tmp686.value;
bool $tmp689 = $tmp687 == $tmp688;
frost$core$Bit $tmp690 = (frost$core$Bit) {$tmp689};
bool $tmp691 = $tmp690.value;
if ($tmp691) goto block73; else goto block67;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:169
org$frostlang$frostc$Symbol* $tmp692 = *(&local21);
org$frostlang$frostc$FixedArray** $tmp693 = &((org$frostlang$frostc$Methods*) $tmp692)->methods;
org$frostlang$frostc$FixedArray* $tmp694 = *$tmp693;
ITable* $tmp695 = ((frost$collections$Iterable*) $tmp694)->$class->itable;
while ($tmp695->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp695 = $tmp695->next;
}
$fn697 $tmp696 = $tmp695->methods[0];
frost$collections$Iterator* $tmp698 = $tmp696(((frost$collections$Iterable*) $tmp694));
goto block75;
block75:;
ITable* $tmp699 = $tmp698->$class->itable;
while ($tmp699->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp699 = $tmp699->next;
}
$fn701 $tmp700 = $tmp699->methods[0];
frost$core$Bit $tmp702 = $tmp700($tmp698);
bool $tmp703 = $tmp702.value;
if ($tmp703) goto block77; else goto block76;
block76:;
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp704 = $tmp698->$class->itable;
while ($tmp704->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp704 = $tmp704->next;
}
$fn706 $tmp705 = $tmp704->methods[1];
frost$core$Object* $tmp707 = $tmp705($tmp698);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp707)));
org$frostlang$frostc$MethodDecl* $tmp708 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
*(&local22) = ((org$frostlang$frostc$MethodDecl*) $tmp707);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:170
org$frostlang$frostc$MethodDecl* $tmp709 = *(&local22);
frost$collections$Array* $tmp710 = *(&local9);
$fn712 $tmp711 = ($fn712) param0->$class->vtable[2];
frost$core$Bit $tmp713 = $tmp711(param0, $tmp709, ((frost$collections$ListView*) $tmp710));
bool $tmp714 = $tmp713.value;
if ($tmp714) goto block78; else goto block79;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:171
org$frostlang$frostc$MethodDecl* $tmp715 = *(&local22);
$fn717 $tmp716 = ($fn717) param0->$class->vtable[5];
frost$core$String* $tmp718 = $tmp716(param0, $tmp715);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
frost$core$Frost$unref$frost$core$Object$Q($tmp707);
org$frostlang$frostc$MethodDecl* $tmp719 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
org$frostlang$frostc$Symbol* $tmp720 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
*(&local21) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp721 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
*(&local20) = ((frost$core$String*) NULL);
frost$core$String* $tmp722 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local18) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp723 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp724 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp725 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
org$frostlang$frostc$ClassDecl* $tmp726 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp718;
block79:;
frost$core$Frost$unref$frost$core$Object$Q($tmp707);
org$frostlang$frostc$MethodDecl* $tmp727 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block75;
block77:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
goto block67;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:176
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Symbol* $tmp728 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
*(&local21) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp729 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
*(&local20) = ((frost$core$String*) NULL);
frost$core$String* $tmp730 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
*(&local18) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp731 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
*(&local9) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp732 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp733 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
org$frostlang$frostc$ClassDecl* $tmp734 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block64:;
frost$core$String* $tmp735 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
*(&local20) = ((frost$core$String*) NULL);
frost$core$String* $tmp736 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
*(&local18) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp737 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
*(&local9) = ((frost$collections$Array*) NULL);
goto block39;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:179
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$collections$ListView* $tmp738 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
*(&local8) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp739 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
org$frostlang$frostc$ClassDecl* $tmp740 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);

}
void org$frostlang$frostc$frostdoc$LinkResolver$cleanup(org$frostlang$frostc$frostdoc$LinkResolver* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/LinkResolver.frost:12
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp741 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp742 = *$tmp741;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
frost$core$String** $tmp743 = &param0->apiRelativePath;
frost$core$String* $tmp744 = *$tmp743;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
org$frostlang$frostc$ClassDecl** $tmp745 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp746 = *$tmp745;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
return;

}

