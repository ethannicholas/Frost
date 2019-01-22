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
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/MutableString.h"
#include "frost/collections/Iterable.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "frost/core/String/Index.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/RegularExpression.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "org/frostlang/frostc/parser/Parser.h"
#include "frost/io/File.h"
#include "frost/io/Console.h"
#include "org/frostlang/frostc/Scanner.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "org/frostlang/frostc/parser/Token.h"
#include "org/frostlang/frostc/Methods.h"
#include "org/frostlang/frostc/FixedArray.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$LinkResolver$class_type org$frostlang$frostc$frostdoc$LinkResolver$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$LinkResolver$cleanup, org$frostlang$frostc$frostdoc$LinkResolver$matches$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$frost$core$Bit, org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$ClassDecl$R$frost$core$String, org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$FieldDecl$R$frost$core$String$Q, org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$MethodDecl$R$frost$core$String$Q, org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$Symbol$R$frost$core$String$Q, org$frostlang$frostc$frostdoc$LinkResolver$resolve$frost$core$String$R$frost$core$String$Q} };

typedef frost$core$Int64 (*$fn15)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn19)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn30)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn59)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn63)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn100)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn122)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$String* (*$fn139)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$ClassDecl*);
typedef frost$collections$Iterator* (*$fn156)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn160)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn165)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn185)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn210)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$FieldDecl*);
typedef frost$core$String* (*$fn216)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*);
typedef frost$core$String* (*$fn234)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$String* (*$fn258)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$Symbol*);
typedef frost$core$String* (*$fn301)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$Symbol*);
typedef frost$core$Object* (*$fn318)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn324)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn336)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn342)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn357)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn409)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn469)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*, frost$collections$ListView*);
typedef frost$core$String* (*$fn474)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$Symbol*);
typedef frost$collections$Iterator* (*$fn490)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn494)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn499)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn505)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*, frost$collections$ListView*);
typedef frost$core$String* (*$fn510)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4c\x69\x6e\x6b\x52\x65\x73\x6f\x6c\x76\x65\x72", 42, -1701704929045887458, NULL };
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
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x74\x74\x70", 4, 212406849, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x77\x2b", 3, 1980855, NULL };
static frost$core$String $s264 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a", 13, 66924027379716155, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a\x29\x5c\x28\x28\x2e\x2a\x29\x5c\x29", 23, 8731591133455443966, NULL };
static frost$core$String $s321 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s360 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x70\x61\x72\x73\x65\x3a\x20", 17, 5931628896396964226, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };

void org$frostlang$frostc$frostdoc$LinkResolver$init$org$frostlang$frostc$Compiler$frost$core$String(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$Compiler* param1, frost$core$String* param2) {

// line 23
org$frostlang$frostc$frostdoc$LinkResolver$init$org$frostlang$frostc$Compiler$frost$core$String$org$frostlang$frostc$ClassDecl$Q(param0, param1, param2, ((org$frostlang$frostc$ClassDecl*) NULL));
return;

}
void org$frostlang$frostc$frostdoc$LinkResolver$init$org$frostlang$frostc$Compiler$frost$core$String$org$frostlang$frostc$ClassDecl$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$Compiler* param1, frost$core$String* param2, org$frostlang$frostc$ClassDecl* param3) {

// line 27
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
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
org$frostlang$frostc$ClassDecl** $tmp8 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
org$frostlang$frostc$ClassDecl** $tmp10 = &param0->context;
*$tmp10 = param3;
return;

}
frost$core$Bit org$frostlang$frostc$frostdoc$LinkResolver$matches$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$frost$core$Bit(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$MethodDecl* param1, frost$collections$ListView* param2) {

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
frost$core$UInt64 $tmp39 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp38);
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
org$frostlang$frostc$Type** $tmp54 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp53)->type;
org$frostlang$frostc$Type* $tmp55 = *$tmp54;
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
frost$core$Bit $tmp64 = $tmp62(((frost$core$Equatable*) $tmp55), ((frost$core$Equatable*) ((org$frostlang$frostc$Type*) $tmp60)));
bool $tmp65 = $tmp64.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp60);
frost$core$Frost$unref$frost$core$Object$Q($tmp53);
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
frost$core$UInt64 $tmp72 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp71);
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
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$ClassDecl$R$frost$core$String(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$String* local0 = NULL;
// line 45
*(&local0) = ((frost$core$String*) NULL);
// line 46
org$frostlang$frostc$ClassDecl** $tmp88 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp89 = *$tmp88;
frost$core$Bit $tmp90 = frost$core$Bit$init$builtin_bit($tmp89 != NULL);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block1; else goto block3;
block1:;
// line 47
org$frostlang$frostc$ClassDecl** $tmp92 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp93 = *$tmp92;
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
frost$core$String* $tmp117 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
*(&local0) = ((frost$core$String*) NULL);
return $tmp115;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$FieldDecl$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$FieldDecl* param1) {

// line 56
frost$core$Weak** $tmp118 = &param1->owner;
frost$core$Weak* $tmp119 = *$tmp118;
frost$core$Object* $tmp120 = frost$core$Weak$get$R$frost$core$Weak$T($tmp119);
$fn122 $tmp121 = ($fn122) param0->$class->vtable[3];
frost$core$String* $tmp123 = $tmp121(param0, ((org$frostlang$frostc$ClassDecl*) $tmp120));
frost$core$String** $tmp124 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp125 = *$tmp124;
frost$core$String* $tmp126 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s127, $tmp125);
frost$core$String* $tmp128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp126, &$s129);
frost$core$String* $tmp130 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp123, $tmp128);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q($tmp120);
return $tmp130;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$MethodDecl$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
// line 60
org$frostlang$frostc$Compiler** $tmp131 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp132 = *$tmp131;
frost$core$Bit $tmp133 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit($tmp132, param1);
// line 61
frost$core$MutableString* $tmp134 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$Weak** $tmp135 = &param1->owner;
frost$core$Weak* $tmp136 = *$tmp135;
frost$core$Object* $tmp137 = frost$core$Weak$get$R$frost$core$Weak$T($tmp136);
$fn139 $tmp138 = ($fn139) param0->$class->vtable[3];
frost$core$String* $tmp140 = $tmp138(param0, ((org$frostlang$frostc$ClassDecl*) $tmp137));
frost$core$MutableString$init$frost$core$String($tmp134, $tmp140);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$MutableString* $tmp141 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local0) = $tmp134;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q($tmp137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
// line 62
frost$core$MutableString* $tmp142 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp142, &$s143);
// line 63
frost$core$MutableString* $tmp144 = *(&local0);
frost$core$String** $tmp145 = &((org$frostlang$frostc$Symbol*) param1)->name;
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
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp163 = $tmp157->$class->itable;
while ($tmp163->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp163 = $tmp163->next;
}
$fn165 $tmp164 = $tmp163->methods[1];
frost$core$Object* $tmp166 = $tmp164($tmp157);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp166)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp167 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp166);
// line 67
frost$core$MutableString* $tmp168 = *(&local0);
frost$core$String* $tmp169 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp168, $tmp169);
// line 68
frost$core$MutableString* $tmp170 = *(&local0);
org$frostlang$frostc$MethodDecl$Parameter* $tmp171 = *(&local2);
org$frostlang$frostc$Type** $tmp172 = &$tmp171->type;
org$frostlang$frostc$Type* $tmp173 = *$tmp172;
frost$core$MutableString$append$frost$core$Object($tmp170, ((frost$core$Object*) $tmp173));
// line 69
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s174));
frost$core$String* $tmp175 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
*(&local1) = &$s176;
frost$core$Frost$unref$frost$core$Object$Q($tmp166);
org$frostlang$frostc$MethodDecl$Parameter* $tmp177 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
// line 71
frost$core$MutableString* $tmp178 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp178, &$s179);
// line 72
org$frostlang$frostc$Type** $tmp180 = &param1->returnType;
org$frostlang$frostc$Type* $tmp181 = *$tmp180;
org$frostlang$frostc$Type* $tmp182 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp183 = ((frost$core$Equatable*) $tmp181)->$class->itable;
while ($tmp183->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp183 = $tmp183->next;
}
$fn185 $tmp184 = $tmp183->methods[1];
frost$core$Bit $tmp186 = $tmp184(((frost$core$Equatable*) $tmp181), ((frost$core$Equatable*) $tmp182));
bool $tmp187 = $tmp186.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
if ($tmp187) goto block4; else goto block5;
block4:;
// line 73
frost$core$MutableString* $tmp188 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp188, &$s189);
// line 74
frost$core$MutableString* $tmp190 = *(&local0);
org$frostlang$frostc$Type** $tmp191 = &param1->returnType;
org$frostlang$frostc$Type* $tmp192 = *$tmp191;
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
frost$core$String* $tmp201 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp202 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp200;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$linkTo$org$frostlang$frostc$Symbol$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, org$frostlang$frostc$Symbol* param1) {

// line 82
org$frostlang$frostc$Symbol$Kind* $tmp203 = &param1->kind;
org$frostlang$frostc$Symbol$Kind $tmp204 = *$tmp203;
frost$core$Int64 $tmp205 = $tmp204.$rawValue;
frost$core$Int64 $tmp206 = (frost$core$Int64) {2};
frost$core$Bit $tmp207 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp205, $tmp206);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block2; else goto block3;
block2:;
// line 84
$fn210 $tmp209 = ($fn210) param0->$class->vtable[4];
frost$core$String* $tmp211 = $tmp209(param0, ((org$frostlang$frostc$FieldDecl*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
return $tmp211;
block3:;
frost$core$Int64 $tmp212 = (frost$core$Int64) {5};
frost$core$Bit $tmp213 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp205, $tmp212);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block4; else goto block5;
block4:;
// line 87
$fn216 $tmp215 = ($fn216) param0->$class->vtable[5];
frost$core$String* $tmp217 = $tmp215(param0, ((org$frostlang$frostc$MethodDecl*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
return $tmp217;
block5:;
// line 90
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
return ((frost$core$String*) NULL);
block1:;
goto block6;
block6:;

}
frost$core$String* org$frostlang$frostc$frostdoc$LinkResolver$resolve$frost$core$String$R$frost$core$String$Q(org$frostlang$frostc$frostdoc$LinkResolver* param0, frost$core$String* param1) {

frost$core$Bit local0;
org$frostlang$frostc$ClassDecl* local1 = NULL;
frost$core$Bit local2;
org$frostlang$frostc$Symbol* local3 = NULL;
frost$core$String$Index$nullable local4;
org$frostlang$frostc$Symbol* local5 = NULL;
frost$collections$ListView* local6 = NULL;
frost$collections$Array* local7 = NULL;
org$frostlang$frostc$ASTNode* local8 = NULL;
org$frostlang$frostc$Type* local9 = NULL;
org$frostlang$frostc$Type* local10 = NULL;
frost$core$String* local11 = NULL;
frost$core$String$Index$nullable local12;
frost$core$String* local13 = NULL;
org$frostlang$frostc$Symbol* local14 = NULL;
org$frostlang$frostc$MethodDecl* local15 = NULL;
// line 96
frost$core$Bit $tmp218 = frost$core$String$contains$frost$core$String$R$frost$core$Bit(param1, &$s219);
bool $tmp220 = $tmp218.value;
if ($tmp220) goto block3; else goto block4;
block3:;
*(&local0) = $tmp218;
goto block5;
block4:;
frost$core$Bit $tmp221 = frost$core$String$contains$frost$core$String$R$frost$core$Bit(param1, &$s222);
*(&local0) = $tmp221;
goto block5;
block5:;
frost$core$Bit $tmp223 = *(&local0);
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block1; else goto block2;
block1:;
// line 97
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block2:;
// line 99
org$frostlang$frostc$Compiler** $tmp225 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp226 = *$tmp225;
org$frostlang$frostc$ClassDecl* $tmp227 = org$frostlang$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlang$frostc$ClassDecl$Q($tmp226, param1);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
org$frostlang$frostc$ClassDecl* $tmp228 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
*(&local1) = $tmp227;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
// line 100
org$frostlang$frostc$ClassDecl* $tmp229 = *(&local1);
frost$core$Bit $tmp230 = frost$core$Bit$init$builtin_bit($tmp229 != NULL);
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block6; else goto block7;
block6:;
// line 101
org$frostlang$frostc$ClassDecl* $tmp232 = *(&local1);
$fn234 $tmp233 = ($fn234) param0->$class->vtable[3];
frost$core$String* $tmp235 = $tmp233(param0, $tmp232);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
org$frostlang$frostc$ClassDecl* $tmp236 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp235;
block7:;
// line 103
org$frostlang$frostc$ClassDecl** $tmp237 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp238 = *$tmp237;
frost$core$Bit $tmp239 = frost$core$Bit$init$builtin_bit($tmp238 != NULL);
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block10; else goto block11;
block10:;
frost$core$RegularExpression* $tmp241 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp241, &$s242);
frost$core$Bit $tmp243 = frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit(param1, $tmp241);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local2) = $tmp243;
goto block12;
block11:;
*(&local2) = $tmp239;
goto block12;
block12:;
frost$core$Bit $tmp244 = *(&local2);
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block8; else goto block9;
block8:;
// line 104
org$frostlang$frostc$Compiler** $tmp246 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp247 = *$tmp246;
org$frostlang$frostc$ClassDecl** $tmp248 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp249 = *$tmp248;
org$frostlang$frostc$SymbolTable* $tmp250 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp247, $tmp249);
org$frostlang$frostc$Symbol* $tmp251 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp250, param1);
*(&local3) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
org$frostlang$frostc$Symbol* $tmp252 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
*(&local3) = $tmp251;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
// line 105
org$frostlang$frostc$Symbol* $tmp253 = *(&local3);
frost$core$Bit $tmp254 = frost$core$Bit$init$builtin_bit($tmp253 != NULL);
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block13; else goto block14;
block13:;
// line 106
org$frostlang$frostc$Symbol* $tmp256 = *(&local3);
$fn258 $tmp257 = ($fn258) param0->$class->vtable[6];
frost$core$String* $tmp259 = $tmp257(param0, $tmp256);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
org$frostlang$frostc$Symbol* $tmp260 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local3) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp261 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp259;
block14:;
org$frostlang$frostc$Symbol* $tmp262 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local3) = ((org$frostlang$frostc$Symbol*) NULL);
goto block9;
block9:;
// line 109
frost$core$RegularExpression* $tmp263 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp263, &$s264);
frost$core$Bit $tmp265 = frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit(param1, $tmp263);
bool $tmp266 = $tmp265.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
if ($tmp266) goto block15; else goto block16;
block15:;
// line 110
frost$core$String$Index$nullable $tmp267 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(param1, &$s268);
*(&local4) = $tmp267;
// line 111
frost$core$String$Index$nullable $tmp269 = *(&local4);
frost$core$Bit $tmp270 = frost$core$Bit$init$builtin_bit($tmp269.nonnull);
bool $tmp271 = $tmp270.value;
if ($tmp271) goto block17; else goto block18;
block17:;
// line 112
org$frostlang$frostc$Compiler** $tmp272 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp273 = *$tmp272;
frost$core$String$Index$nullable $tmp274 = *(&local4);
frost$core$Bit $tmp275 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp276 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp274, $tmp275);
frost$core$String* $tmp277 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp276);
org$frostlang$frostc$ClassDecl* $tmp278 = org$frostlang$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlang$frostc$ClassDecl$Q($tmp273, $tmp277);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
org$frostlang$frostc$ClassDecl* $tmp279 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local1) = $tmp278;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
// line 113
org$frostlang$frostc$ClassDecl* $tmp280 = *(&local1);
frost$core$Bit $tmp281 = frost$core$Bit$init$builtin_bit($tmp280 != NULL);
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block19; else goto block20;
block19:;
// line 114
org$frostlang$frostc$Compiler** $tmp283 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp284 = *$tmp283;
org$frostlang$frostc$ClassDecl* $tmp285 = *(&local1);
org$frostlang$frostc$SymbolTable* $tmp286 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp284, $tmp285);
frost$core$String$Index$nullable $tmp287 = *(&local4);
frost$core$String$Index $tmp288 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, ((frost$core$String$Index) $tmp287.value));
frost$core$Bit $tmp289 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp290 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp288, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp289);
frost$core$String* $tmp291 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp290);
org$frostlang$frostc$Symbol* $tmp292 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp286, $tmp291);
*(&local5) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
org$frostlang$frostc$Symbol* $tmp293 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local5) = $tmp292;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
// line 115
org$frostlang$frostc$Symbol* $tmp294 = *(&local5);
frost$core$Bit $tmp295 = frost$core$Bit$init$builtin_bit($tmp294 == NULL);
bool $tmp296 = $tmp295.value;
if ($tmp296) goto block21; else goto block22;
block21:;
// line 116
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Symbol* $tmp297 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local5) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp298 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block22:;
// line 118
org$frostlang$frostc$Symbol* $tmp299 = *(&local5);
$fn301 $tmp300 = ($fn301) param0->$class->vtable[6];
frost$core$String* $tmp302 = $tmp300(param0, $tmp299);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
org$frostlang$frostc$Symbol* $tmp303 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local5) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp304 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp302;
block20:;
goto block18;
block18:;
goto block16;
block16:;
// line 122
frost$core$RegularExpression* $tmp305 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp305, &$s306);
frost$collections$ListView* $tmp307 = frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q(param1, $tmp305);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$collections$ListView* $tmp308 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local6) = $tmp307;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
// line 123
frost$collections$ListView* $tmp309 = *(&local6);
frost$core$Bit $tmp310 = frost$core$Bit$init$builtin_bit($tmp309 != NULL);
bool $tmp311 = $tmp310.value;
if ($tmp311) goto block23; else goto block24;
block23:;
// line 124
frost$collections$Array* $tmp312 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp312);
*(&local7) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
frost$collections$Array* $tmp313 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
*(&local7) = $tmp312;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
// line 125
frost$collections$ListView* $tmp314 = *(&local6);
frost$core$Int64 $tmp315 = (frost$core$Int64) {1};
ITable* $tmp316 = $tmp314->$class->itable;
while ($tmp316->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp316 = $tmp316->next;
}
$fn318 $tmp317 = $tmp316->methods[0];
frost$core$Object* $tmp319 = $tmp317($tmp314, $tmp315);
frost$core$String* $tmp320 = frost$core$String$get_trimmed$R$frost$core$String(((frost$core$String*) $tmp319));
ITable* $tmp322 = ((frost$core$Equatable*) $tmp320)->$class->itable;
while ($tmp322->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp322 = $tmp322->next;
}
$fn324 $tmp323 = $tmp322->methods[1];
frost$core$Bit $tmp325 = $tmp323(((frost$core$Equatable*) $tmp320), ((frost$core$Equatable*) &$s321));
bool $tmp326 = $tmp325.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
frost$core$Frost$unref$frost$core$Object$Q($tmp319);
if ($tmp326) goto block25; else goto block26;
block25:;
// line 126
org$frostlang$frostc$Compiler** $tmp327 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp328 = *$tmp327;
org$frostlang$frostc$parser$Parser** $tmp329 = &$tmp328->parser;
org$frostlang$frostc$parser$Parser* $tmp330 = *$tmp329;
frost$io$File* $tmp331 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$collections$ListView* $tmp332 = *(&local6);
frost$core$Int64 $tmp333 = (frost$core$Int64) {1};
ITable* $tmp334 = $tmp332->$class->itable;
while ($tmp334->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp334 = $tmp334->next;
}
$fn336 $tmp335 = $tmp334->methods[0];
frost$core$Object* $tmp337 = $tmp335($tmp332, $tmp333);
frost$io$File$init$frost$core$String($tmp331, ((frost$core$String*) $tmp337));
frost$collections$ListView* $tmp338 = *(&local6);
frost$core$Int64 $tmp339 = (frost$core$Int64) {1};
ITable* $tmp340 = $tmp338->$class->itable;
while ($tmp340->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp340 = $tmp340->next;
}
$fn342 $tmp341 = $tmp340->methods[0];
frost$core$Object* $tmp343 = $tmp341($tmp338, $tmp339);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp330, $tmp331, ((frost$core$String*) $tmp343));
frost$core$Frost$unref$frost$core$Object$Q($tmp343);
frost$core$Frost$unref$frost$core$Object$Q($tmp337);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// line 127
goto block27;
block27:;
// line 128
org$frostlang$frostc$Compiler** $tmp344 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp345 = *$tmp344;
org$frostlang$frostc$parser$Parser** $tmp346 = &$tmp345->parser;
org$frostlang$frostc$parser$Parser* $tmp347 = *$tmp346;
org$frostlang$frostc$ASTNode* $tmp348 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q($tmp347);
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
org$frostlang$frostc$ASTNode* $tmp349 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
*(&local8) = $tmp348;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
// line 129
org$frostlang$frostc$ASTNode* $tmp350 = *(&local8);
frost$core$Bit $tmp351 = frost$core$Bit$init$builtin_bit($tmp350 == NULL);
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block29; else goto block30;
block29:;
// line 130
frost$collections$ListView* $tmp353 = *(&local6);
frost$core$Int64 $tmp354 = (frost$core$Int64) {1};
ITable* $tmp355 = $tmp353->$class->itable;
while ($tmp355->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp355 = $tmp355->next;
}
$fn357 $tmp356 = $tmp355->methods[0];
frost$core$Object* $tmp358 = $tmp356($tmp353, $tmp354);
frost$core$String* $tmp359 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s360, ((frost$core$String*) $tmp358));
frost$core$String* $tmp361 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp359, &$s362);
frost$io$Console$printLine$frost$core$String($tmp361);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
frost$core$Frost$unref$frost$core$Object$Q($tmp358);
// line 131
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$ASTNode* $tmp363 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp364 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
*(&local7) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp365 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp366 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block30:;
// line 133
org$frostlang$frostc$Compiler** $tmp367 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp368 = *$tmp367;
org$frostlang$frostc$Scanner** $tmp369 = &$tmp368->scanner;
org$frostlang$frostc$Scanner* $tmp370 = *$tmp369;
org$frostlang$frostc$ASTNode* $tmp371 = *(&local8);
org$frostlang$frostc$Type* $tmp372 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp370, $tmp371);
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
org$frostlang$frostc$Type* $tmp373 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
*(&local9) = $tmp372;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
// line 134
org$frostlang$frostc$Compiler** $tmp374 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp375 = *$tmp374;
org$frostlang$frostc$Type* $tmp376 = *(&local9);
org$frostlang$frostc$Type* $tmp377 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q($tmp375, $tmp376);
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
org$frostlang$frostc$Type* $tmp378 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
*(&local10) = $tmp377;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
// line 135
org$frostlang$frostc$Type* $tmp379 = *(&local10);
frost$core$Bit $tmp380 = frost$core$Bit$init$builtin_bit($tmp379 == NULL);
bool $tmp381 = $tmp380.value;
if ($tmp381) goto block31; else goto block32;
block31:;
// line 136
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Type* $tmp382 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp383 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp384 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp385 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
*(&local7) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp386 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp387 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block32:;
// line 138
frost$collections$Array* $tmp388 = *(&local7);
org$frostlang$frostc$Type* $tmp389 = *(&local10);
frost$collections$Array$add$frost$collections$Array$T($tmp388, ((frost$core$Object*) $tmp389));
// line 139
org$frostlang$frostc$Compiler** $tmp390 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp391 = *$tmp390;
org$frostlang$frostc$parser$Parser** $tmp392 = &$tmp391->parser;
org$frostlang$frostc$parser$Parser* $tmp393 = *$tmp392;
frost$core$Int64 $tmp394 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp395 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp394);
org$frostlang$frostc$parser$Token$nullable $tmp396 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q($tmp393, $tmp395);
frost$core$Bit $tmp397 = frost$core$Bit$init$builtin_bit(!$tmp396.nonnull);
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block33; else goto block34;
block33:;
// line 140
org$frostlang$frostc$Type* $tmp399 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp400 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp401 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block28;
block34:;
org$frostlang$frostc$Type* $tmp402 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp403 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp404 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block27;
block28:;
goto block26;
block26:;
// line 144
frost$collections$ListView* $tmp405 = *(&local6);
frost$core$Int64 $tmp406 = (frost$core$Int64) {0};
ITable* $tmp407 = $tmp405->$class->itable;
while ($tmp407->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp407 = $tmp407->next;
}
$fn409 $tmp408 = $tmp407->methods[0];
frost$core$Object* $tmp410 = $tmp408($tmp405, $tmp406);
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp410)));
frost$core$String* $tmp411 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
*(&local11) = ((frost$core$String*) $tmp410);
frost$core$Frost$unref$frost$core$Object$Q($tmp410);
// line 145
frost$core$String* $tmp412 = *(&local11);
frost$core$String$Index$nullable $tmp413 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp412, &$s414);
*(&local12) = $tmp413;
// line 146
*(&local13) = ((frost$core$String*) NULL);
// line 147
frost$core$String$Index$nullable $tmp415 = *(&local12);
frost$core$Bit $tmp416 = frost$core$Bit$init$builtin_bit($tmp415.nonnull);
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block35; else goto block37;
block35:;
// line 148
org$frostlang$frostc$Compiler** $tmp418 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp419 = *$tmp418;
frost$core$String* $tmp420 = *(&local11);
frost$core$String$Index$nullable $tmp421 = *(&local12);
frost$core$Bit $tmp422 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp423 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp421, $tmp422);
frost$core$String* $tmp424 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp420, $tmp423);
org$frostlang$frostc$ClassDecl* $tmp425 = org$frostlang$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlang$frostc$ClassDecl$Q($tmp419, $tmp424);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
org$frostlang$frostc$ClassDecl* $tmp426 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
*(&local1) = $tmp425;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
// line 149
frost$core$String* $tmp427 = *(&local11);
frost$core$String* $tmp428 = *(&local11);
frost$core$String$Index$nullable $tmp429 = *(&local12);
frost$core$String$Index $tmp430 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp428, ((frost$core$String$Index) $tmp429.value));
frost$core$Bit $tmp431 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp432 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp430, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp431);
frost$core$String* $tmp433 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp427, $tmp432);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
frost$core$String* $tmp434 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
*(&local13) = $tmp433;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
goto block36;
block37:;
// line 1
// line 152
org$frostlang$frostc$ClassDecl** $tmp435 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp436 = *$tmp435;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
org$frostlang$frostc$ClassDecl* $tmp437 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
*(&local1) = $tmp436;
// line 153
frost$core$String* $tmp438 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
frost$core$String* $tmp439 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
*(&local13) = $tmp438;
goto block36;
block36:;
// line 155
org$frostlang$frostc$ClassDecl* $tmp440 = *(&local1);
frost$core$Bit $tmp441 = frost$core$Bit$init$builtin_bit($tmp440 != NULL);
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block38; else goto block39;
block38:;
// line 156
org$frostlang$frostc$Compiler** $tmp443 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp444 = *$tmp443;
org$frostlang$frostc$ClassDecl* $tmp445 = *(&local1);
org$frostlang$frostc$SymbolTable* $tmp446 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp444, $tmp445);
frost$core$String* $tmp447 = *(&local13);
org$frostlang$frostc$Symbol* $tmp448 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp446, $tmp447);
*(&local14) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
org$frostlang$frostc$Symbol* $tmp449 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
*(&local14) = $tmp448;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
// line 157
org$frostlang$frostc$Symbol* $tmp450 = *(&local14);
frost$core$Bit $tmp451 = frost$core$Bit$init$builtin_bit($tmp450 == NULL);
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block40; else goto block41;
block40:;
// line 158
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Symbol* $tmp453 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
*(&local14) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp454 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
*(&local13) = ((frost$core$String*) NULL);
frost$core$String* $tmp455 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
*(&local11) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp456 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local7) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp457 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp458 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block41:;
// line 160
org$frostlang$frostc$Symbol* $tmp459 = *(&local14);
org$frostlang$frostc$Symbol$Kind* $tmp460 = &$tmp459->kind;
org$frostlang$frostc$Symbol$Kind $tmp461 = *$tmp460;
frost$core$Int64 $tmp462 = $tmp461.$rawValue;
frost$core$Int64 $tmp463 = (frost$core$Int64) {5};
frost$core$Bit $tmp464 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp462, $tmp463);
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block43; else goto block44;
block43:;
// line 162
org$frostlang$frostc$Symbol* $tmp466 = *(&local14);
frost$collections$Array* $tmp467 = *(&local7);
$fn469 $tmp468 = ($fn469) param0->$class->vtable[2];
frost$core$Bit $tmp470 = $tmp468(param0, ((org$frostlang$frostc$MethodDecl*) $tmp466), ((frost$collections$ListView*) $tmp467));
bool $tmp471 = $tmp470.value;
if ($tmp471) goto block45; else goto block46;
block45:;
// line 163
org$frostlang$frostc$Symbol* $tmp472 = *(&local14);
$fn474 $tmp473 = ($fn474) param0->$class->vtable[6];
frost$core$String* $tmp475 = $tmp473(param0, $tmp472);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
org$frostlang$frostc$Symbol* $tmp476 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
*(&local14) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp477 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
*(&local13) = ((frost$core$String*) NULL);
frost$core$String* $tmp478 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
*(&local11) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp479 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
*(&local7) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp480 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp481 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp475;
block46:;
goto block42;
block44:;
frost$core$Int64 $tmp482 = (frost$core$Int64) {6};
frost$core$Bit $tmp483 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp462, $tmp482);
bool $tmp484 = $tmp483.value;
if ($tmp484) goto block47; else goto block42;
block47:;
// line 167
org$frostlang$frostc$Symbol* $tmp485 = *(&local14);
org$frostlang$frostc$FixedArray** $tmp486 = &((org$frostlang$frostc$Methods*) $tmp485)->methods;
org$frostlang$frostc$FixedArray* $tmp487 = *$tmp486;
ITable* $tmp488 = ((frost$collections$Iterable*) $tmp487)->$class->itable;
while ($tmp488->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp488 = $tmp488->next;
}
$fn490 $tmp489 = $tmp488->methods[0];
frost$collections$Iterator* $tmp491 = $tmp489(((frost$collections$Iterable*) $tmp487));
goto block48;
block48:;
ITable* $tmp492 = $tmp491->$class->itable;
while ($tmp492->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp492 = $tmp492->next;
}
$fn494 $tmp493 = $tmp492->methods[0];
frost$core$Bit $tmp495 = $tmp493($tmp491);
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block50; else goto block49;
block49:;
*(&local15) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp497 = $tmp491->$class->itable;
while ($tmp497->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp497 = $tmp497->next;
}
$fn499 $tmp498 = $tmp497->methods[1];
frost$core$Object* $tmp500 = $tmp498($tmp491);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp500)));
org$frostlang$frostc$MethodDecl* $tmp501 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
*(&local15) = ((org$frostlang$frostc$MethodDecl*) $tmp500);
// line 168
org$frostlang$frostc$MethodDecl* $tmp502 = *(&local15);
frost$collections$Array* $tmp503 = *(&local7);
$fn505 $tmp504 = ($fn505) param0->$class->vtable[2];
frost$core$Bit $tmp506 = $tmp504(param0, $tmp502, ((frost$collections$ListView*) $tmp503));
bool $tmp507 = $tmp506.value;
if ($tmp507) goto block51; else goto block52;
block51:;
// line 169
org$frostlang$frostc$MethodDecl* $tmp508 = *(&local15);
$fn510 $tmp509 = ($fn510) param0->$class->vtable[5];
frost$core$String* $tmp511 = $tmp509(param0, $tmp508);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
frost$core$Frost$unref$frost$core$Object$Q($tmp500);
org$frostlang$frostc$MethodDecl* $tmp512 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
*(&local15) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
org$frostlang$frostc$Symbol* $tmp513 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
*(&local14) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp514 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local13) = ((frost$core$String*) NULL);
frost$core$String* $tmp515 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
*(&local11) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp516 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
*(&local7) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp517 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp518 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp511;
block52:;
frost$core$Frost$unref$frost$core$Object$Q($tmp500);
org$frostlang$frostc$MethodDecl* $tmp519 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
*(&local15) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block48;
block50:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
goto block42;
block42:;
// line 174
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Symbol* $tmp520 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
*(&local14) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp521 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
*(&local13) = ((frost$core$String*) NULL);
frost$core$String* $tmp522 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
*(&local11) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp523 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
*(&local7) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp524 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp525 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block39:;
frost$core$String* $tmp526 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
*(&local13) = ((frost$core$String*) NULL);
frost$core$String* $tmp527 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
*(&local11) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp528 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
*(&local7) = ((frost$collections$Array*) NULL);
goto block24;
block24:;
// line 177
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$collections$ListView* $tmp529 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp530 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);

}
void org$frostlang$frostc$frostdoc$LinkResolver$cleanup(org$frostlang$frostc$frostdoc$LinkResolver* param0) {

// line 12
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp531 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp532 = *$tmp531;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
frost$core$String** $tmp533 = &param0->apiRelativePath;
frost$core$String* $tmp534 = *$tmp533;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
org$frostlang$frostc$ClassDecl** $tmp535 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp536 = *$tmp535;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
return;

}

