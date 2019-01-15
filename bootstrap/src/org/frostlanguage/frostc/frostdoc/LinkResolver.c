#include "org/frostlanguage/frostc/frostdoc/LinkResolver.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "org/frostlanguage/frostc/ClassDecl.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "org/frostlanguage/frostc/MethodDecl.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "org/frostlanguage/frostc/MethodDecl/Parameter.h"
#include "org/frostlanguage/frostc/Type.h"
#include "frost/core/Equatable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlanguage/frostc/FieldDecl.h"
#include "frost/core/Weak.h"
#include "org/frostlanguage/frostc/Symbol.h"
#include "frost/core/MutableString.h"
#include "frost/collections/Iterable.h"
#include "org/frostlanguage/frostc/Symbol/Kind.h"
#include "frost/core/String/Index.h"
#include "org/frostlanguage/frostc/ASTNode.h"
#include "frost/core/RegularExpression.h"
#include "org/frostlanguage/frostc/SymbolTable.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "org/frostlanguage/frostc/parser/Parser.h"
#include "frost/io/File.h"
#include "frost/io/Console.h"
#include "org/frostlanguage/frostc/Scanner.h"
#include "org/frostlanguage/frostc/parser/Token/Kind.h"
#include "org/frostlanguage/frostc/parser/Token.h"
#include "org/frostlanguage/frostc/Methods.h"
#include "org/frostlanguage/frostc/FixedArray.h"


static frost$core$String $s1;
org$frostlanguage$frostc$frostdoc$LinkResolver$class_type org$frostlanguage$frostc$frostdoc$LinkResolver$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$frostdoc$LinkResolver$cleanup, org$frostlanguage$frostc$frostdoc$LinkResolver$matches$org$frostlanguage$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT$R$frost$core$Bit, org$frostlanguage$frostc$frostdoc$LinkResolver$linkTo$org$frostlanguage$frostc$ClassDecl$R$frost$core$String, org$frostlanguage$frostc$frostdoc$LinkResolver$linkTo$org$frostlanguage$frostc$FieldDecl$R$frost$core$String$Q, org$frostlanguage$frostc$frostdoc$LinkResolver$linkTo$org$frostlanguage$frostc$MethodDecl$R$frost$core$String$Q, org$frostlanguage$frostc$frostdoc$LinkResolver$linkTo$org$frostlanguage$frostc$Symbol$R$frost$core$String$Q, org$frostlanguage$frostc$frostdoc$LinkResolver$resolve$frost$core$String$R$frost$core$String$Q} };

typedef frost$core$Int64 (*$fn15)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn19)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn30)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn59)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn63)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn100)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn122)(org$frostlanguage$frostc$frostdoc$LinkResolver*, org$frostlanguage$frostc$ClassDecl*);
typedef frost$core$String* (*$fn139)(org$frostlanguage$frostc$frostdoc$LinkResolver*, org$frostlanguage$frostc$ClassDecl*);
typedef frost$collections$Iterator* (*$fn156)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn160)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn165)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn185)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn210)(org$frostlanguage$frostc$frostdoc$LinkResolver*, org$frostlanguage$frostc$FieldDecl*);
typedef frost$core$String* (*$fn216)(org$frostlanguage$frostc$frostdoc$LinkResolver*, org$frostlanguage$frostc$MethodDecl*);
typedef frost$core$String* (*$fn239)(org$frostlanguage$frostc$frostdoc$LinkResolver*, org$frostlanguage$frostc$ClassDecl*);
typedef frost$core$String* (*$fn263)(org$frostlanguage$frostc$frostdoc$LinkResolver*, org$frostlanguage$frostc$Symbol*);
typedef frost$core$String* (*$fn306)(org$frostlanguage$frostc$frostdoc$LinkResolver*, org$frostlanguage$frostc$Symbol*);
typedef frost$core$Object* (*$fn323)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn329)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn341)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn347)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn362)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn414)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn474)(org$frostlanguage$frostc$frostdoc$LinkResolver*, org$frostlanguage$frostc$MethodDecl*, frost$collections$ListView*);
typedef frost$core$String* (*$fn479)(org$frostlanguage$frostc$frostdoc$LinkResolver*, org$frostlanguage$frostc$Symbol*);
typedef frost$collections$Iterator* (*$fn495)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn499)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn504)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn510)(org$frostlanguage$frostc$frostdoc$LinkResolver*, org$frostlanguage$frostc$MethodDecl*, frost$collections$ListView*);
typedef frost$core$String* (*$fn515)(org$frostlanguage$frostc$frostdoc$LinkResolver*, org$frostlanguage$frostc$MethodDecl*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72", 46, 5041742629524279000, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e\x2f", 3, 1504240, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23", 1, 136, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x23", 1, 136, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x66\x72\x6f\x73\x74", 18, -5316688845400643623, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72\x2e\x6c\x69\x6e\x6b\x54\x6f\x28\x73\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 141, -4758973261715218134, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x74\x74\x70", 4, 212406849, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x77\x2b", 3, 1980855, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a", 13, 66924027379716155, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a\x29\x5c\x28\x28\x2e\x2a\x29\x5c\x29", 23, 8731591133455443966, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x70\x61\x72\x73\x65\x3a\x20", 17, 5931628896396964226, NULL };
static frost$core$String $s367 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };

void org$frostlanguage$frostc$frostdoc$LinkResolver$init$org$frostlanguage$frostc$Compiler$frost$core$String(org$frostlanguage$frostc$frostdoc$LinkResolver* param0, org$frostlanguage$frostc$Compiler* param1, frost$core$String* param2) {

// line 23
org$frostlanguage$frostc$frostdoc$LinkResolver$init$org$frostlanguage$frostc$Compiler$frost$core$String$org$frostlanguage$frostc$ClassDecl$Q(param0, param1, param2, ((org$frostlanguage$frostc$ClassDecl*) NULL));
return;

}
void org$frostlanguage$frostc$frostdoc$LinkResolver$init$org$frostlanguage$frostc$Compiler$frost$core$String$org$frostlanguage$frostc$ClassDecl$Q(org$frostlanguage$frostc$frostdoc$LinkResolver* param0, org$frostlanguage$frostc$Compiler* param1, frost$core$String* param2, org$frostlanguage$frostc$ClassDecl* param3) {

// line 27
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlanguage$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlanguage$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
// line 28
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp5 = &param0->apiRelativePath;
frost$core$String* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$core$String** $tmp7 = &param0->apiRelativePath;
*$tmp7 = param2;
// line 29
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlanguage$frostc$ClassDecl** $tmp8 = &param0->context;
org$frostlanguage$frostc$ClassDecl* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
org$frostlanguage$frostc$ClassDecl** $tmp10 = &param0->context;
*$tmp10 = param3;
return;

}
frost$core$Bit org$frostlanguage$frostc$frostdoc$LinkResolver$matches$org$frostlanguage$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlanguage$frostc$Type$GT$R$frost$core$Bit(org$frostlanguage$frostc$frostdoc$LinkResolver* param0, org$frostlanguage$frostc$MethodDecl* param1, frost$collections$ListView* param2) {

frost$core$Int64 local0;
// line 33
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
// line 34
frost$core$Bit $tmp26 = frost$core$Bit$init$builtin_bit(false);
return $tmp26;
block2:;
// line 36
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
frost$core$UInt64 $tmp39 = frost$core$Int64$convert$R$frost$core$UInt64($tmp38);
if ($tmp37) goto block6; else goto block7;
block6:;
int64_t $tmp40 = $tmp34.value;
int64_t $tmp41 = $tmp35.value;
bool $tmp42 = $tmp40 <= $tmp41;
frost$core$Bit $tmp43 = (frost$core$Bit) {$tmp42};
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block3; else goto block4;
block7:;
int64_t $tmp45 = $tmp34.value;
int64_t $tmp46 = $tmp35.value;
bool $tmp47 = $tmp45 < $tmp46;
frost$core$Bit $tmp48 = (frost$core$Bit) {$tmp47};
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block3; else goto block4;
block3:;
// line 37
frost$collections$Array** $tmp50 = &param1->parameters;
frost$collections$Array* $tmp51 = *$tmp50;
frost$core$Int64 $tmp52 = *(&local0);
frost$core$Object* $tmp53 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp51, $tmp52);
org$frostlanguage$frostc$Type** $tmp54 = &((org$frostlanguage$frostc$MethodDecl$Parameter*) $tmp53)->type;
org$frostlanguage$frostc$Type* $tmp55 = *$tmp54;
frost$core$Int64 $tmp56 = *(&local0);
ITable* $tmp57 = param2->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp57 = $tmp57->next;
}
$fn59 $tmp58 = $tmp57->methods[0];
frost$core$Object* $tmp60 = $tmp58(param2, $tmp56);
ITable* $tmp61 = ((frost$core$Equatable*) $tmp55)->$class->itable;
while ($tmp61->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp61 = $tmp61->next;
}
$fn63 $tmp62 = $tmp61->methods[1];
frost$core$Bit $tmp64 = $tmp62(((frost$core$Equatable*) $tmp55), ((frost$core$Equatable*) ((org$frostlanguage$frostc$Type*) $tmp60)));
bool $tmp65 = $tmp64.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp60);
// unreffing REF($59:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp53);
// unreffing REF($50:frost.collections.Array.T)
if ($tmp65) goto block8; else goto block9;
block8:;
// line 38
frost$core$Bit $tmp66 = frost$core$Bit$init$builtin_bit(false);
return $tmp66;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp67 = *(&local0);
int64_t $tmp68 = $tmp35.value;
int64_t $tmp69 = $tmp67.value;
int64_t $tmp70 = $tmp68 - $tmp69;
frost$core$Int64 $tmp71 = (frost$core$Int64) {$tmp70};
frost$core$UInt64 $tmp72 = frost$core$Int64$convert$R$frost$core$UInt64($tmp71);
if ($tmp37) goto block11; else goto block12;
block11:;
uint64_t $tmp73 = $tmp72.value;
uint64_t $tmp74 = $tmp39.value;
bool $tmp75 = $tmp73 >= $tmp74;
frost$core$Bit $tmp76 = (frost$core$Bit) {$tmp75};
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block10; else goto block4;
block12:;
uint64_t $tmp78 = $tmp72.value;
uint64_t $tmp79 = $tmp39.value;
bool $tmp80 = $tmp78 > $tmp79;
frost$core$Bit $tmp81 = (frost$core$Bit) {$tmp80};
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block10; else goto block4;
block10:;
int64_t $tmp83 = $tmp67.value;
int64_t $tmp84 = $tmp38.value;
int64_t $tmp85 = $tmp83 + $tmp84;
frost$core$Int64 $tmp86 = (frost$core$Int64) {$tmp85};
*(&local0) = $tmp86;
goto block3;
block4:;
// line 41
frost$core$Bit $tmp87 = frost$core$Bit$init$builtin_bit(true);
return $tmp87;

}
frost$core$String* org$frostlanguage$frostc$frostdoc$LinkResolver$linkTo$org$frostlanguage$frostc$ClassDecl$R$frost$core$String(org$frostlanguage$frostc$frostdoc$LinkResolver* param0, org$frostlanguage$frostc$ClassDecl* param1) {

frost$core$String* local0 = NULL;
// line 45
*(&local0) = ((frost$core$String*) NULL);
// line 46
org$frostlanguage$frostc$ClassDecl** $tmp88 = &param0->context;
org$frostlanguage$frostc$ClassDecl* $tmp89 = *$tmp88;
frost$core$Bit $tmp90 = frost$core$Bit$init$builtin_bit($tmp89 != NULL);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block1; else goto block3;
block1:;
// line 47
org$frostlanguage$frostc$ClassDecl** $tmp92 = &param0->context;
org$frostlanguage$frostc$ClassDecl* $tmp93 = *$tmp92;
frost$core$String** $tmp94 = &$tmp93->name;
frost$core$String* $tmp95 = *$tmp94;
frost$collections$Iterator* $tmp96 = frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT($tmp95, &$s97);
ITable* $tmp98 = $tmp96->$class->itable;
while ($tmp98->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[2];
frost$core$Int64 $tmp101 = $tmp99($tmp96);
frost$core$String* $tmp102 = frost$core$String$$MUL$frost$core$Int64$R$frost$core$String(&$s103, $tmp101);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$String* $tmp104 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
*(&local0) = $tmp102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// unreffing REF($19:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
// unreffing REF($15:frost.collections.Iterator<frost.core.String.Index>)
goto block2;
block3:;
// line 1
// line 50
frost$core$String** $tmp105 = &param0->apiRelativePath;
frost$core$String* $tmp106 = *$tmp105;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$String* $tmp107 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
*(&local0) = $tmp106;
goto block2;
block2:;
// line 52
frost$core$String* $tmp108 = *(&local0);
frost$core$String** $tmp109 = &param1->name;
frost$core$String* $tmp110 = *$tmp109;
frost$core$String* $tmp111 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String($tmp110, &$s112, &$s113);
frost$core$String* $tmp114 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp108, $tmp111);
frost$core$String* $tmp115 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp114, &$s116);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
// unreffing REF($50:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
// unreffing REF($49:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
// unreffing REF($48:frost.core.String)
frost$core$String* $tmp117 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
// unreffing base
*(&local0) = ((frost$core$String*) NULL);
return $tmp115;

}
frost$core$String* org$frostlanguage$frostc$frostdoc$LinkResolver$linkTo$org$frostlanguage$frostc$FieldDecl$R$frost$core$String$Q(org$frostlanguage$frostc$frostdoc$LinkResolver* param0, org$frostlanguage$frostc$FieldDecl* param1) {

// line 56
frost$core$Weak** $tmp118 = &param1->owner;
frost$core$Weak* $tmp119 = *$tmp118;
frost$core$Object* $tmp120 = frost$core$Weak$get$R$frost$core$Weak$T($tmp119);
$fn122 $tmp121 = ($fn122) param0->$class->vtable[3];
frost$core$String* $tmp123 = $tmp121(param0, ((org$frostlanguage$frostc$ClassDecl*) $tmp120));
frost$core$String** $tmp124 = &((org$frostlanguage$frostc$Symbol*) param1)->name;
frost$core$String* $tmp125 = *$tmp124;
frost$core$String* $tmp126 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s127, $tmp125);
frost$core$String* $tmp128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp126, &$s129);
frost$core$String* $tmp130 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp123, $tmp128);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
// unreffing REF($13:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// unreffing REF($12:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
// unreffing REF($11:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
// unreffing REF($7:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp120);
// unreffing REF($4:frost.core.Weak.T)
return $tmp130;

}
frost$core$String* org$frostlanguage$frostc$frostdoc$LinkResolver$linkTo$org$frostlanguage$frostc$MethodDecl$R$frost$core$String$Q(org$frostlanguage$frostc$frostdoc$LinkResolver* param0, org$frostlanguage$frostc$MethodDecl* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlanguage$frostc$MethodDecl$Parameter* local2 = NULL;
// line 60
org$frostlanguage$frostc$Compiler** $tmp131 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp132 = *$tmp131;
frost$core$Bit $tmp133 = org$frostlanguage$frostc$Compiler$resolve$org$frostlanguage$frostc$MethodDecl$R$frost$core$Bit($tmp132, param1);
// line 61
frost$core$MutableString* $tmp134 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$Weak** $tmp135 = &param1->owner;
frost$core$Weak* $tmp136 = *$tmp135;
frost$core$Object* $tmp137 = frost$core$Weak$get$R$frost$core$Weak$T($tmp136);
$fn139 $tmp138 = ($fn139) param0->$class->vtable[3];
frost$core$String* $tmp140 = $tmp138(param0, ((org$frostlanguage$frostc$ClassDecl*) $tmp137));
frost$core$MutableString$init$frost$core$String($tmp134, $tmp140);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$MutableString* $tmp141 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local0) = $tmp134;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
// unreffing REF($12:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp137);
// unreffing REF($9:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
// unreffing REF($5:frost.core.MutableString)
// line 62
frost$core$MutableString* $tmp142 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp142, &$s143);
// line 63
frost$core$MutableString* $tmp144 = *(&local0);
frost$core$String** $tmp145 = &((org$frostlanguage$frostc$Symbol*) param1)->name;
frost$core$String* $tmp146 = *$tmp145;
frost$core$MutableString$append$frost$core$String($tmp144, $tmp146);
// line 64
frost$core$MutableString* $tmp147 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp147, &$s148);
// line 65
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s149));
frost$core$String* $tmp150 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
*(&local1) = &$s151;
// line 66
frost$collections$Array** $tmp152 = &param1->parameters;
frost$collections$Array* $tmp153 = *$tmp152;
ITable* $tmp154 = ((frost$collections$Iterable*) $tmp153)->$class->itable;
while ($tmp154->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp154 = $tmp154->next;
}
$fn156 $tmp155 = $tmp154->methods[0];
frost$collections$Iterator* $tmp157 = $tmp155(((frost$collections$Iterable*) $tmp153));
goto block1;
block1:;
ITable* $tmp158 = $tmp157->$class->itable;
while ($tmp158->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp158 = $tmp158->next;
}
$fn160 $tmp159 = $tmp158->methods[0];
frost$core$Bit $tmp161 = $tmp159($tmp157);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlanguage$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp163 = $tmp157->$class->itable;
while ($tmp163->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp163 = $tmp163->next;
}
$fn165 $tmp164 = $tmp163->methods[1];
frost$core$Object* $tmp166 = $tmp164($tmp157);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$MethodDecl$Parameter*) $tmp166)));
org$frostlanguage$frostc$MethodDecl$Parameter* $tmp167 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
*(&local2) = ((org$frostlanguage$frostc$MethodDecl$Parameter*) $tmp166);
// line 67
frost$core$MutableString* $tmp168 = *(&local0);
frost$core$String* $tmp169 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp168, $tmp169);
// line 68
frost$core$MutableString* $tmp170 = *(&local0);
org$frostlanguage$frostc$MethodDecl$Parameter* $tmp171 = *(&local2);
org$frostlanguage$frostc$Type** $tmp172 = &$tmp171->type;
org$frostlanguage$frostc$Type* $tmp173 = *$tmp172;
frost$core$MutableString$append$frost$core$Object($tmp170, ((frost$core$Object*) $tmp173));
// line 69
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s174));
frost$core$String* $tmp175 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
*(&local1) = &$s176;
frost$core$Frost$unref$frost$core$Object$Q($tmp166);
// unreffing REF($67:frost.collections.Iterator.T)
org$frostlanguage$frostc$MethodDecl$Parameter* $tmp177 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
// unreffing p
*(&local2) = ((org$frostlanguage$frostc$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
// unreffing REF($56:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 71
frost$core$MutableString* $tmp178 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp178, &$s179);
// line 72
org$frostlanguage$frostc$Type** $tmp180 = &param1->returnType;
org$frostlanguage$frostc$Type* $tmp181 = *$tmp180;
org$frostlanguage$frostc$Type* $tmp182 = org$frostlanguage$frostc$Type$Void$R$org$frostlanguage$frostc$Type();
ITable* $tmp183 = ((frost$core$Equatable*) $tmp181)->$class->itable;
while ($tmp183->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp183 = $tmp183->next;
}
$fn185 $tmp184 = $tmp183->methods[1];
frost$core$Bit $tmp186 = $tmp184(((frost$core$Equatable*) $tmp181), ((frost$core$Equatable*) $tmp182));
bool $tmp187 = $tmp186.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
// unreffing REF($113:org.frostlanguage.frostc.Type)
if ($tmp187) goto block4; else goto block5;
block4:;
// line 73
frost$core$MutableString* $tmp188 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp188, &$s189);
// line 74
frost$core$MutableString* $tmp190 = *(&local0);
org$frostlanguage$frostc$Type** $tmp191 = &param1->returnType;
org$frostlanguage$frostc$Type* $tmp192 = *$tmp191;
frost$core$MutableString$append$frost$core$Object($tmp190, ((frost$core$Object*) $tmp192));
goto block5;
block5:;
// line 76
frost$core$MutableString* $tmp193 = *(&local0);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp193, &$s194, &$s195);
// line 77
frost$core$MutableString* $tmp196 = *(&local0);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp196, &$s197, &$s198);
// line 78
frost$core$MutableString* $tmp199 = *(&local0);
frost$core$String* $tmp200 = frost$core$MutableString$finish$R$frost$core$String($tmp199);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
// unreffing REF($140:frost.core.String)
frost$core$String* $tmp201 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp202 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp200;

}
frost$core$String* org$frostlanguage$frostc$frostdoc$LinkResolver$linkTo$org$frostlanguage$frostc$Symbol$R$frost$core$String$Q(org$frostlanguage$frostc$frostdoc$LinkResolver* param0, org$frostlanguage$frostc$Symbol* param1) {

// line 82
org$frostlanguage$frostc$Symbol$Kind* $tmp203 = &param1->kind;
org$frostlanguage$frostc$Symbol$Kind $tmp204 = *$tmp203;
frost$core$Int64 $tmp205 = $tmp204.$rawValue;
frost$core$Int64 $tmp206 = (frost$core$Int64) {2};
frost$core$Bit $tmp207 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp205, $tmp206);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block2; else goto block3;
block2:;
// line 84
$fn210 $tmp209 = ($fn210) param0->$class->vtable[4];
frost$core$String* $tmp211 = $tmp209(param0, ((org$frostlanguage$frostc$FieldDecl*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
// unreffing REF($11:frost.core.String?)
return $tmp211;
block3:;
frost$core$Int64 $tmp212 = (frost$core$Int64) {5};
frost$core$Bit $tmp213 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp205, $tmp212);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block4; else goto block5;
block4:;
// line 87
$fn216 $tmp215 = ($fn216) param0->$class->vtable[5];
frost$core$String* $tmp217 = $tmp215(param0, ((org$frostlanguage$frostc$MethodDecl*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
// unreffing REF($25:frost.core.String?)
return $tmp217;
block5:;
// line 90
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
return ((frost$core$String*) NULL);
block1:;
frost$core$Bit $tmp218 = frost$core$Bit$init$builtin_bit(false);
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp220 = (frost$core$Int64) {81};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s221, $tmp220, &$s222);
abort(); // unreachable
block6:;
abort(); // unreachable

}
frost$core$String* org$frostlanguage$frostc$frostdoc$LinkResolver$resolve$frost$core$String$R$frost$core$String$Q(org$frostlanguage$frostc$frostdoc$LinkResolver* param0, frost$core$String* param1) {

frost$core$Bit local0;
org$frostlanguage$frostc$ClassDecl* local1 = NULL;
frost$core$Bit local2;
org$frostlanguage$frostc$Symbol* local3 = NULL;
frost$core$String$Index$nullable local4;
org$frostlanguage$frostc$Symbol* local5 = NULL;
frost$collections$ListView* local6 = NULL;
frost$collections$Array* local7 = NULL;
org$frostlanguage$frostc$ASTNode* local8 = NULL;
org$frostlanguage$frostc$Type* local9 = NULL;
org$frostlanguage$frostc$Type* local10 = NULL;
frost$core$String* local11 = NULL;
frost$core$String$Index$nullable local12;
frost$core$String* local13 = NULL;
org$frostlanguage$frostc$Symbol* local14 = NULL;
org$frostlanguage$frostc$MethodDecl* local15 = NULL;
// line 96
frost$core$Bit $tmp223 = frost$core$String$contains$frost$core$String$R$frost$core$Bit(param1, &$s224);
bool $tmp225 = $tmp223.value;
if ($tmp225) goto block3; else goto block4;
block3:;
*(&local0) = $tmp223;
goto block5;
block4:;
frost$core$Bit $tmp226 = frost$core$String$contains$frost$core$String$R$frost$core$Bit(param1, &$s227);
*(&local0) = $tmp226;
goto block5;
block5:;
frost$core$Bit $tmp228 = *(&local0);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block1; else goto block2;
block1:;
// line 97
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block2:;
// line 99
org$frostlanguage$frostc$Compiler** $tmp230 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp231 = *$tmp230;
org$frostlanguage$frostc$ClassDecl* $tmp232 = org$frostlanguage$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlanguage$frostc$ClassDecl$Q($tmp231, param1);
*(&local1) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
org$frostlanguage$frostc$ClassDecl* $tmp233 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
*(&local1) = $tmp232;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
// unreffing REF($20:org.frostlanguage.frostc.ClassDecl?)
// line 100
org$frostlanguage$frostc$ClassDecl* $tmp234 = *(&local1);
frost$core$Bit $tmp235 = frost$core$Bit$init$builtin_bit($tmp234 != NULL);
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block6; else goto block7;
block6:;
// line 101
org$frostlanguage$frostc$ClassDecl* $tmp237 = *(&local1);
$fn239 $tmp238 = ($fn239) param0->$class->vtable[3];
frost$core$String* $tmp240 = $tmp238(param0, $tmp237);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// unreffing REF($41:frost.core.String)
org$frostlanguage$frostc$ClassDecl* $tmp241 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
// unreffing cl
*(&local1) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return $tmp240;
block7:;
// line 103
org$frostlanguage$frostc$ClassDecl** $tmp242 = &param0->context;
org$frostlanguage$frostc$ClassDecl* $tmp243 = *$tmp242;
frost$core$Bit $tmp244 = frost$core$Bit$init$builtin_bit($tmp243 != NULL);
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block10; else goto block11;
block10:;
frost$core$RegularExpression* $tmp246 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp246, &$s247);
frost$core$Bit $tmp248 = frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit(param1, $tmp246);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
// unreffing REF($61:frost.core.RegularExpression)
*(&local2) = $tmp248;
goto block12;
block11:;
*(&local2) = $tmp244;
goto block12;
block12:;
frost$core$Bit $tmp249 = *(&local2);
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block8; else goto block9;
block8:;
// line 104
org$frostlanguage$frostc$Compiler** $tmp251 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp252 = *$tmp251;
org$frostlanguage$frostc$ClassDecl** $tmp253 = &param0->context;
org$frostlanguage$frostc$ClassDecl* $tmp254 = *$tmp253;
org$frostlanguage$frostc$SymbolTable* $tmp255 = org$frostlanguage$frostc$Compiler$getSymbolTable$org$frostlanguage$frostc$ClassDecl$R$org$frostlanguage$frostc$SymbolTable($tmp252, $tmp254);
org$frostlanguage$frostc$Symbol* $tmp256 = org$frostlanguage$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlanguage$frostc$Symbol$Q($tmp255, param1);
*(&local3) = ((org$frostlanguage$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
org$frostlanguage$frostc$Symbol* $tmp257 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
*(&local3) = $tmp256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// unreffing REF($81:org.frostlanguage.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
// unreffing REF($80:org.frostlanguage.frostc.SymbolTable)
// line 105
org$frostlanguage$frostc$Symbol* $tmp258 = *(&local3);
frost$core$Bit $tmp259 = frost$core$Bit$init$builtin_bit($tmp258 != NULL);
bool $tmp260 = $tmp259.value;
if ($tmp260) goto block13; else goto block14;
block13:;
// line 106
org$frostlanguage$frostc$Symbol* $tmp261 = *(&local3);
$fn263 $tmp262 = ($fn263) param0->$class->vtable[6];
frost$core$String* $tmp264 = $tmp262(param0, $tmp261);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
// unreffing REF($105:frost.core.String?)
org$frostlanguage$frostc$Symbol* $tmp265 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
// unreffing s
*(&local3) = ((org$frostlanguage$frostc$Symbol*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp266 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
// unreffing cl
*(&local1) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return $tmp264;
block14:;
org$frostlanguage$frostc$Symbol* $tmp267 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
// unreffing s
*(&local3) = ((org$frostlanguage$frostc$Symbol*) NULL);
goto block9;
block9:;
// line 109
frost$core$RegularExpression* $tmp268 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp268, &$s269);
frost$core$Bit $tmp270 = frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit(param1, $tmp268);
bool $tmp271 = $tmp270.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
// unreffing REF($129:frost.core.RegularExpression)
if ($tmp271) goto block15; else goto block16;
block15:;
// line 110
frost$core$String$Index$nullable $tmp272 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(param1, &$s273);
*(&local4) = $tmp272;
// line 111
frost$core$String$Index$nullable $tmp274 = *(&local4);
frost$core$Bit $tmp275 = frost$core$Bit$init$builtin_bit($tmp274.nonnull);
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block17; else goto block18;
block17:;
// line 112
org$frostlanguage$frostc$Compiler** $tmp277 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp278 = *$tmp277;
frost$core$String$Index$nullable $tmp279 = *(&local4);
frost$core$Bit $tmp280 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp281 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp279, $tmp280);
frost$core$String* $tmp282 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp281);
org$frostlanguage$frostc$ClassDecl* $tmp283 = org$frostlanguage$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlanguage$frostc$ClassDecl$Q($tmp278, $tmp282);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
org$frostlanguage$frostc$ClassDecl* $tmp284 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
*(&local1) = $tmp283;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
// unreffing REF($153:org.frostlanguage.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
// unreffing REF($152:frost.core.String)
// line 113
org$frostlanguage$frostc$ClassDecl* $tmp285 = *(&local1);
frost$core$Bit $tmp286 = frost$core$Bit$init$builtin_bit($tmp285 != NULL);
bool $tmp287 = $tmp286.value;
if ($tmp287) goto block19; else goto block20;
block19:;
// line 114
org$frostlanguage$frostc$Compiler** $tmp288 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp289 = *$tmp288;
org$frostlanguage$frostc$ClassDecl* $tmp290 = *(&local1);
org$frostlanguage$frostc$SymbolTable* $tmp291 = org$frostlanguage$frostc$Compiler$getSymbolTable$org$frostlanguage$frostc$ClassDecl$R$org$frostlanguage$frostc$SymbolTable($tmp289, $tmp290);
frost$core$String$Index$nullable $tmp292 = *(&local4);
frost$core$String$Index $tmp293 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, ((frost$core$String$Index) $tmp292.value));
frost$core$Bit $tmp294 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp295 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp293, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp294);
frost$core$String* $tmp296 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp295);
org$frostlanguage$frostc$Symbol* $tmp297 = org$frostlanguage$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlanguage$frostc$Symbol$Q($tmp291, $tmp296);
*(&local5) = ((org$frostlanguage$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
org$frostlanguage$frostc$Symbol* $tmp298 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local5) = $tmp297;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
// unreffing REF($185:org.frostlanguage.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
// unreffing REF($184:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
// unreffing REF($177:org.frostlanguage.frostc.SymbolTable)
// line 115
org$frostlanguage$frostc$Symbol* $tmp299 = *(&local5);
frost$core$Bit $tmp300 = frost$core$Bit$init$builtin_bit($tmp299 == NULL);
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block21; else goto block22;
block21:;
// line 116
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlanguage$frostc$Symbol* $tmp302 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// unreffing s
*(&local5) = ((org$frostlanguage$frostc$Symbol*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp303 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
// unreffing cl
*(&local1) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block22:;
// line 118
org$frostlanguage$frostc$Symbol* $tmp304 = *(&local5);
$fn306 $tmp305 = ($fn306) param0->$class->vtable[6];
frost$core$String* $tmp307 = $tmp305(param0, $tmp304);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
// unreffing REF($226:frost.core.String?)
org$frostlanguage$frostc$Symbol* $tmp308 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// unreffing s
*(&local5) = ((org$frostlanguage$frostc$Symbol*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp309 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
// unreffing cl
*(&local1) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return $tmp307;
block20:;
goto block18;
block18:;
goto block16;
block16:;
// line 122
frost$core$RegularExpression* $tmp310 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp310, &$s311);
frost$collections$ListView* $tmp312 = frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q(param1, $tmp310);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
frost$collections$ListView* $tmp313 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
*(&local6) = $tmp312;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
// unreffing REF($248:frost.collections.ListView<frost.core.String>?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
// unreffing REF($246:frost.core.RegularExpression)
// line 123
frost$collections$ListView* $tmp314 = *(&local6);
frost$core$Bit $tmp315 = frost$core$Bit$init$builtin_bit($tmp314 != NULL);
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block23; else goto block24;
block23:;
// line 124
frost$collections$Array* $tmp317 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp317);
*(&local7) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$collections$Array* $tmp318 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local7) = $tmp317;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
// unreffing REF($269:frost.collections.Array<org.frostlanguage.frostc.Type>)
// line 125
frost$collections$ListView* $tmp319 = *(&local6);
frost$core$Int64 $tmp320 = (frost$core$Int64) {1};
ITable* $tmp321 = $tmp319->$class->itable;
while ($tmp321->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp321 = $tmp321->next;
}
$fn323 $tmp322 = $tmp321->methods[0];
frost$core$Object* $tmp324 = $tmp322($tmp319, $tmp320);
frost$core$String* $tmp325 = frost$core$String$get_trimmed$R$frost$core$String(((frost$core$String*) $tmp324));
ITable* $tmp327 = ((frost$core$Equatable*) $tmp325)->$class->itable;
while ($tmp327->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp327 = $tmp327->next;
}
$fn329 $tmp328 = $tmp327->methods[1];
frost$core$Bit $tmp330 = $tmp328(((frost$core$Equatable*) $tmp325), ((frost$core$Equatable*) &$s326));
bool $tmp331 = $tmp330.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
// unreffing REF($290:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp324);
// unreffing REF($288:frost.collections.ListView.T)
if ($tmp331) goto block25; else goto block26;
block25:;
// line 126
org$frostlanguage$frostc$Compiler** $tmp332 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp333 = *$tmp332;
org$frostlanguage$frostc$parser$Parser** $tmp334 = &$tmp333->parser;
org$frostlanguage$frostc$parser$Parser* $tmp335 = *$tmp334;
frost$io$File* $tmp336 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$collections$ListView* $tmp337 = *(&local6);
frost$core$Int64 $tmp338 = (frost$core$Int64) {1};
ITable* $tmp339 = $tmp337->$class->itable;
while ($tmp339->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp339 = $tmp339->next;
}
$fn341 $tmp340 = $tmp339->methods[0];
frost$core$Object* $tmp342 = $tmp340($tmp337, $tmp338);
frost$io$File$init$frost$core$String($tmp336, ((frost$core$String*) $tmp342));
frost$collections$ListView* $tmp343 = *(&local6);
frost$core$Int64 $tmp344 = (frost$core$Int64) {1};
ITable* $tmp345 = $tmp343->$class->itable;
while ($tmp345->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp345 = $tmp345->next;
}
$fn347 $tmp346 = $tmp345->methods[0];
frost$core$Object* $tmp348 = $tmp346($tmp343, $tmp344);
org$frostlanguage$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp335, $tmp336, ((frost$core$String*) $tmp348));
frost$core$Frost$unref$frost$core$Object$Q($tmp348);
// unreffing REF($323:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp342);
// unreffing REF($315:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
// unreffing REF($309:frost.io.File)
// line 127
goto block27;
block27:;
// line 128
org$frostlanguage$frostc$Compiler** $tmp349 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp350 = *$tmp349;
org$frostlanguage$frostc$parser$Parser** $tmp351 = &$tmp350->parser;
org$frostlanguage$frostc$parser$Parser* $tmp352 = *$tmp351;
org$frostlanguage$frostc$ASTNode* $tmp353 = org$frostlanguage$frostc$parser$Parser$type$R$org$frostlanguage$frostc$ASTNode$Q($tmp352);
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
org$frostlanguage$frostc$ASTNode* $tmp354 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
*(&local8) = $tmp353;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
// unreffing REF($342:org.frostlanguage.frostc.ASTNode?)
// line 129
org$frostlanguage$frostc$ASTNode* $tmp355 = *(&local8);
frost$core$Bit $tmp356 = frost$core$Bit$init$builtin_bit($tmp355 == NULL);
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block29; else goto block30;
block29:;
// line 130
frost$collections$ListView* $tmp358 = *(&local6);
frost$core$Int64 $tmp359 = (frost$core$Int64) {1};
ITable* $tmp360 = $tmp358->$class->itable;
while ($tmp360->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp360 = $tmp360->next;
}
$fn362 $tmp361 = $tmp360->methods[0];
frost$core$Object* $tmp363 = $tmp361($tmp358, $tmp359);
frost$core$String* $tmp364 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s365, ((frost$core$String*) $tmp363));
frost$core$String* $tmp366 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp364, &$s367);
frost$io$Console$printLine$frost$core$String($tmp366);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
// unreffing REF($368:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
// unreffing REF($367:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp363);
// unreffing REF($365:frost.collections.ListView.T)
// line 131
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlanguage$frostc$ASTNode* $tmp368 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
// unreffing type
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp369 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
// unreffing parameters
*(&local7) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp370 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
// unreffing parsed
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp371 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
// unreffing cl
*(&local1) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block30:;
// line 133
org$frostlanguage$frostc$Compiler** $tmp372 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp373 = *$tmp372;
org$frostlanguage$frostc$Scanner** $tmp374 = &$tmp373->scanner;
org$frostlanguage$frostc$Scanner* $tmp375 = *$tmp374;
org$frostlanguage$frostc$ASTNode* $tmp376 = *(&local8);
org$frostlanguage$frostc$Type* $tmp377 = org$frostlanguage$frostc$Scanner$convertType$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$Type($tmp375, $tmp376);
*(&local9) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
org$frostlanguage$frostc$Type* $tmp378 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
*(&local9) = $tmp377;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
// unreffing REF($410:org.frostlanguage.frostc.Type)
// line 134
org$frostlanguage$frostc$Compiler** $tmp379 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp380 = *$tmp379;
org$frostlanguage$frostc$Type* $tmp381 = *(&local9);
org$frostlanguage$frostc$Type* $tmp382 = org$frostlanguage$frostc$Compiler$resolve$org$frostlanguage$frostc$Type$R$org$frostlanguage$frostc$Type$Q($tmp380, $tmp381);
*(&local10) = ((org$frostlanguage$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
org$frostlanguage$frostc$Type* $tmp383 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
*(&local10) = $tmp382;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
// unreffing REF($425:org.frostlanguage.frostc.Type?)
// line 135
org$frostlanguage$frostc$Type* $tmp384 = *(&local10);
frost$core$Bit $tmp385 = frost$core$Bit$init$builtin_bit($tmp384 == NULL);
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block31; else goto block32;
block31:;
// line 136
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlanguage$frostc$Type* $tmp387 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
// unreffing resolved
*(&local10) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Type* $tmp388 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
// unreffing converted
*(&local9) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp389 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
// unreffing type
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp390 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
// unreffing parameters
*(&local7) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp391 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
// unreffing parsed
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp392 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
// unreffing cl
*(&local1) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block32:;
// line 138
frost$collections$Array* $tmp393 = *(&local7);
org$frostlanguage$frostc$Type* $tmp394 = *(&local10);
frost$collections$Array$add$frost$collections$Array$T($tmp393, ((frost$core$Object*) $tmp394));
// line 139
org$frostlanguage$frostc$Compiler** $tmp395 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp396 = *$tmp395;
org$frostlanguage$frostc$parser$Parser** $tmp397 = &$tmp396->parser;
org$frostlanguage$frostc$parser$Parser* $tmp398 = *$tmp397;
frost$core$Int64 $tmp399 = (frost$core$Int64) {106};
org$frostlanguage$frostc$parser$Token$Kind $tmp400 = org$frostlanguage$frostc$parser$Token$Kind$init$frost$core$Int64($tmp399);
org$frostlanguage$frostc$parser$Token$nullable $tmp401 = org$frostlanguage$frostc$parser$Parser$checkNext$org$frostlanguage$frostc$parser$Token$Kind$R$org$frostlanguage$frostc$parser$Token$Q($tmp398, $tmp400);
frost$core$Bit $tmp402 = frost$core$Bit$init$builtin_bit(!$tmp401.nonnull);
bool $tmp403 = $tmp402.value;
if ($tmp403) goto block33; else goto block34;
block33:;
// line 140
org$frostlanguage$frostc$Type* $tmp404 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
// unreffing resolved
*(&local10) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Type* $tmp405 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
// unreffing converted
*(&local9) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp406 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
// unreffing type
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block28;
block34:;
org$frostlanguage$frostc$Type* $tmp407 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
// unreffing resolved
*(&local10) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$Type* $tmp408 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
// unreffing converted
*(&local9) = ((org$frostlanguage$frostc$Type*) NULL);
org$frostlanguage$frostc$ASTNode* $tmp409 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
// unreffing type
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block27;
block28:;
goto block26;
block26:;
// line 144
frost$collections$ListView* $tmp410 = *(&local6);
frost$core$Int64 $tmp411 = (frost$core$Int64) {0};
ITable* $tmp412 = $tmp410->$class->itable;
while ($tmp412->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp412 = $tmp412->next;
}
$fn414 $tmp413 = $tmp412->methods[0];
frost$core$Object* $tmp415 = $tmp413($tmp410, $tmp411);
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp415)));
frost$core$String* $tmp416 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
*(&local11) = ((frost$core$String*) $tmp415);
frost$core$Frost$unref$frost$core$Object$Q($tmp415);
// unreffing REF($535:frost.collections.ListView.T)
// line 145
frost$core$String* $tmp417 = *(&local11);
frost$core$String$Index$nullable $tmp418 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp417, &$s419);
*(&local12) = $tmp418;
// line 146
*(&local13) = ((frost$core$String*) NULL);
// line 147
frost$core$String$Index$nullable $tmp420 = *(&local12);
frost$core$Bit $tmp421 = frost$core$Bit$init$builtin_bit($tmp420.nonnull);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block35; else goto block37;
block35:;
// line 148
org$frostlanguage$frostc$Compiler** $tmp423 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp424 = *$tmp423;
frost$core$String* $tmp425 = *(&local11);
frost$core$String$Index$nullable $tmp426 = *(&local12);
frost$core$Bit $tmp427 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp428 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp426, $tmp427);
frost$core$String* $tmp429 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp425, $tmp428);
org$frostlanguage$frostc$ClassDecl* $tmp430 = org$frostlanguage$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlanguage$frostc$ClassDecl$Q($tmp424, $tmp429);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
org$frostlanguage$frostc$ClassDecl* $tmp431 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
*(&local1) = $tmp430;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
// unreffing REF($567:org.frostlanguage.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
// unreffing REF($566:frost.core.String)
// line 149
frost$core$String* $tmp432 = *(&local11);
frost$core$String* $tmp433 = *(&local11);
frost$core$String$Index$nullable $tmp434 = *(&local12);
frost$core$String$Index $tmp435 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp433, ((frost$core$String$Index) $tmp434.value));
frost$core$Bit $tmp436 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp437 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp435, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp436);
frost$core$String* $tmp438 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp432, $tmp437);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
frost$core$String* $tmp439 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
*(&local13) = $tmp438;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
// unreffing REF($589:frost.core.String)
goto block36;
block37:;
// line 1
// line 152
org$frostlanguage$frostc$ClassDecl** $tmp440 = &param0->context;
org$frostlanguage$frostc$ClassDecl* $tmp441 = *$tmp440;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
org$frostlanguage$frostc$ClassDecl* $tmp442 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
*(&local1) = $tmp441;
// line 153
frost$core$String* $tmp443 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
frost$core$String* $tmp444 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
*(&local13) = $tmp443;
goto block36;
block36:;
// line 155
org$frostlanguage$frostc$ClassDecl* $tmp445 = *(&local1);
frost$core$Bit $tmp446 = frost$core$Bit$init$builtin_bit($tmp445 != NULL);
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block38; else goto block39;
block38:;
// line 156
org$frostlanguage$frostc$Compiler** $tmp448 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp449 = *$tmp448;
org$frostlanguage$frostc$ClassDecl* $tmp450 = *(&local1);
org$frostlanguage$frostc$SymbolTable* $tmp451 = org$frostlanguage$frostc$Compiler$getSymbolTable$org$frostlanguage$frostc$ClassDecl$R$org$frostlanguage$frostc$SymbolTable($tmp449, $tmp450);
frost$core$String* $tmp452 = *(&local13);
org$frostlanguage$frostc$Symbol* $tmp453 = org$frostlanguage$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlanguage$frostc$Symbol$Q($tmp451, $tmp452);
*(&local14) = ((org$frostlanguage$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
org$frostlanguage$frostc$Symbol* $tmp454 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
*(&local14) = $tmp453;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
// unreffing REF($632:org.frostlanguage.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
// unreffing REF($630:org.frostlanguage.frostc.SymbolTable)
// line 157
org$frostlanguage$frostc$Symbol* $tmp455 = *(&local14);
frost$core$Bit $tmp456 = frost$core$Bit$init$builtin_bit($tmp455 == NULL);
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block40; else goto block41;
block40:;
// line 158
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlanguage$frostc$Symbol* $tmp458 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
// unreffing s
*(&local14) = ((org$frostlanguage$frostc$Symbol*) NULL);
frost$core$String* $tmp459 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
// unreffing symbolName
*(&local13) = ((frost$core$String*) NULL);
frost$core$String* $tmp460 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp461 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
// unreffing parameters
*(&local7) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp462 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
// unreffing parsed
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp463 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
// unreffing cl
*(&local1) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block41:;
// line 160
org$frostlanguage$frostc$Symbol* $tmp464 = *(&local14);
org$frostlanguage$frostc$Symbol$Kind* $tmp465 = &$tmp464->kind;
org$frostlanguage$frostc$Symbol$Kind $tmp466 = *$tmp465;
frost$core$Int64 $tmp467 = $tmp466.$rawValue;
frost$core$Int64 $tmp468 = (frost$core$Int64) {5};
frost$core$Bit $tmp469 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp467, $tmp468);
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block43; else goto block44;
block43:;
// line 162
org$frostlanguage$frostc$Symbol* $tmp471 = *(&local14);
frost$collections$Array* $tmp472 = *(&local7);
$fn474 $tmp473 = ($fn474) param0->$class->vtable[2];
frost$core$Bit $tmp475 = $tmp473(param0, ((org$frostlanguage$frostc$MethodDecl*) $tmp471), ((frost$collections$ListView*) $tmp472));
bool $tmp476 = $tmp475.value;
if ($tmp476) goto block45; else goto block46;
block45:;
// line 163
org$frostlanguage$frostc$Symbol* $tmp477 = *(&local14);
$fn479 $tmp478 = ($fn479) param0->$class->vtable[6];
frost$core$String* $tmp480 = $tmp478(param0, $tmp477);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
// unreffing REF($709:frost.core.String?)
org$frostlanguage$frostc$Symbol* $tmp481 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
// unreffing s
*(&local14) = ((org$frostlanguage$frostc$Symbol*) NULL);
frost$core$String* $tmp482 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
// unreffing symbolName
*(&local13) = ((frost$core$String*) NULL);
frost$core$String* $tmp483 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp484 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
// unreffing parameters
*(&local7) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp485 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
// unreffing parsed
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp486 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
// unreffing cl
*(&local1) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return $tmp480;
block46:;
goto block42;
block44:;
frost$core$Int64 $tmp487 = (frost$core$Int64) {6};
frost$core$Bit $tmp488 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp467, $tmp487);
bool $tmp489 = $tmp488.value;
if ($tmp489) goto block47; else goto block42;
block47:;
// line 167
org$frostlanguage$frostc$Symbol* $tmp490 = *(&local14);
org$frostlanguage$frostc$FixedArray** $tmp491 = &((org$frostlanguage$frostc$Methods*) $tmp490)->methods;
org$frostlanguage$frostc$FixedArray* $tmp492 = *$tmp491;
ITable* $tmp493 = ((frost$collections$Iterable*) $tmp492)->$class->itable;
while ($tmp493->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp493 = $tmp493->next;
}
$fn495 $tmp494 = $tmp493->methods[0];
frost$collections$Iterator* $tmp496 = $tmp494(((frost$collections$Iterable*) $tmp492));
goto block48;
block48:;
ITable* $tmp497 = $tmp496->$class->itable;
while ($tmp497->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp497 = $tmp497->next;
}
$fn499 $tmp498 = $tmp497->methods[0];
frost$core$Bit $tmp500 = $tmp498($tmp496);
bool $tmp501 = $tmp500.value;
if ($tmp501) goto block50; else goto block49;
block49:;
*(&local15) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
ITable* $tmp502 = $tmp496->$class->itable;
while ($tmp502->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp502 = $tmp502->next;
}
$fn504 $tmp503 = $tmp502->methods[1];
frost$core$Object* $tmp505 = $tmp503($tmp496);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$MethodDecl*) $tmp505)));
org$frostlanguage$frostc$MethodDecl* $tmp506 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
*(&local15) = ((org$frostlanguage$frostc$MethodDecl*) $tmp505);
// line 168
org$frostlanguage$frostc$MethodDecl* $tmp507 = *(&local15);
frost$collections$Array* $tmp508 = *(&local7);
$fn510 $tmp509 = ($fn510) param0->$class->vtable[2];
frost$core$Bit $tmp511 = $tmp509(param0, $tmp507, ((frost$collections$ListView*) $tmp508));
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block51; else goto block52;
block51:;
// line 169
org$frostlanguage$frostc$MethodDecl* $tmp513 = *(&local15);
$fn515 $tmp514 = ($fn515) param0->$class->vtable[5];
frost$core$String* $tmp516 = $tmp514(param0, $tmp513);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
// unreffing REF($789:frost.core.String?)
frost$core$Frost$unref$frost$core$Object$Q($tmp505);
// unreffing REF($770:frost.collections.Iterator.T)
org$frostlanguage$frostc$MethodDecl* $tmp517 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
// unreffing m
*(&local15) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
// unreffing REF($759:frost.collections.Iterator<frost.collections.Iterable.T>)
org$frostlanguage$frostc$Symbol* $tmp518 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
// unreffing s
*(&local14) = ((org$frostlanguage$frostc$Symbol*) NULL);
frost$core$String* $tmp519 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
// unreffing symbolName
*(&local13) = ((frost$core$String*) NULL);
frost$core$String* $tmp520 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp521 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
// unreffing parameters
*(&local7) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp522 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
// unreffing parsed
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp523 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
// unreffing cl
*(&local1) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return $tmp516;
block52:;
frost$core$Frost$unref$frost$core$Object$Q($tmp505);
// unreffing REF($770:frost.collections.Iterator.T)
org$frostlanguage$frostc$MethodDecl* $tmp524 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
// unreffing m
*(&local15) = ((org$frostlanguage$frostc$MethodDecl*) NULL);
goto block48;
block50:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
// unreffing REF($759:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block42;
block42:;
// line 174
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlanguage$frostc$Symbol* $tmp525 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
// unreffing s
*(&local14) = ((org$frostlanguage$frostc$Symbol*) NULL);
frost$core$String* $tmp526 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
// unreffing symbolName
*(&local13) = ((frost$core$String*) NULL);
frost$core$String* $tmp527 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp528 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
// unreffing parameters
*(&local7) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp529 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
// unreffing parsed
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp530 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
// unreffing cl
*(&local1) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block39:;
frost$core$String* $tmp531 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
// unreffing symbolName
*(&local13) = ((frost$core$String*) NULL);
frost$core$String* $tmp532 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp533 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
// unreffing parameters
*(&local7) = ((frost$collections$Array*) NULL);
goto block24;
block24:;
// line 177
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$collections$ListView* $tmp534 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
// unreffing parsed
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlanguage$frostc$ClassDecl* $tmp535 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
// unreffing cl
*(&local1) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);

}
void org$frostlanguage$frostc$frostdoc$LinkResolver$cleanup(org$frostlanguage$frostc$frostdoc$LinkResolver* param0) {

// line 12
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlanguage$frostc$Compiler** $tmp536 = &param0->compiler;
org$frostlanguage$frostc$Compiler* $tmp537 = *$tmp536;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
frost$core$String** $tmp538 = &param0->apiRelativePath;
frost$core$String* $tmp539 = *$tmp538;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
org$frostlanguage$frostc$ClassDecl** $tmp540 = &param0->context;
org$frostlanguage$frostc$ClassDecl* $tmp541 = *$tmp540;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
return;

}

