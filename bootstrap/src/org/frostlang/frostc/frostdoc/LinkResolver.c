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
typedef frost$core$String* (*$fn233)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$String* (*$fn256)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$Symbol*);
typedef frost$core$String* (*$fn299)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$Symbol*);
typedef frost$core$Object* (*$fn316)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn322)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn334)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn340)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn355)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn407)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn467)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*, frost$collections$ListView*);
typedef frost$core$String* (*$fn472)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$Symbol*);
typedef frost$collections$Iterator* (*$fn488)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn492)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn497)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn503)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*, frost$collections$ListView*);
typedef frost$core$String* (*$fn508)(org$frostlang$frostc$frostdoc$LinkResolver*, org$frostlang$frostc$MethodDecl*);

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
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x77\x2b", 3, 1980855, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a", 13, 66924027379716155, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s304 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x5c\x77\x2b\x28\x3f\x3a\x5c\x2e\x5c\x77\x2b\x29\x2a\x29\x5c\x28\x28\x2e\x2a\x29\x5c\x29", 23, 8731591133455443966, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s358 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x70\x61\x72\x73\x65\x3a\x20", 17, 5931628896396964226, NULL };
static frost$core$String $s360 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };

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
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
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

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$Symbol* local1 = NULL;
frost$core$String$Index$nullable local2;
org$frostlang$frostc$Symbol* local3 = NULL;
frost$collections$ListView* local4 = NULL;
frost$collections$Array* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
org$frostlang$frostc$Type* local7 = NULL;
org$frostlang$frostc$Type* local8 = NULL;
frost$core$String* local9 = NULL;
frost$core$String$Index$nullable local10;
frost$core$String* local11 = NULL;
org$frostlang$frostc$Symbol* local12 = NULL;
org$frostlang$frostc$MethodDecl* local13 = NULL;
// line 96
frost$core$Bit $tmp218 = frost$core$String$contains$frost$core$String$R$frost$core$Bit(param1, &$s219);
bool $tmp220 = $tmp218.value;
if ($tmp220) goto block1; else goto block3;
block3:;
frost$core$Bit $tmp221 = frost$core$String$contains$frost$core$String$R$frost$core$Bit(param1, &$s222);
bool $tmp223 = $tmp221.value;
if ($tmp223) goto block1; else goto block2;
block1:;
// line 97
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block2:;
// line 99
org$frostlang$frostc$Compiler** $tmp224 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp225 = *$tmp224;
org$frostlang$frostc$ClassDecl* $tmp226 = org$frostlang$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlang$frostc$ClassDecl$Q($tmp225, param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
org$frostlang$frostc$ClassDecl* $tmp227 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
*(&local0) = $tmp226;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
// line 100
org$frostlang$frostc$ClassDecl* $tmp228 = *(&local0);
frost$core$Bit $tmp229 = frost$core$Bit$init$builtin_bit($tmp228 != NULL);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block4; else goto block5;
block4:;
// line 101
org$frostlang$frostc$ClassDecl* $tmp231 = *(&local0);
$fn233 $tmp232 = ($fn233) param0->$class->vtable[3];
frost$core$String* $tmp234 = $tmp232(param0, $tmp231);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
org$frostlang$frostc$ClassDecl* $tmp235 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp234;
block5:;
// line 103
org$frostlang$frostc$ClassDecl** $tmp236 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp237 = *$tmp236;
frost$core$Bit $tmp238 = frost$core$Bit$init$builtin_bit($tmp237 != NULL);
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block8; else goto block7;
block8:;
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp240 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp240, &$s241);
frost$core$Bit $tmp242 = frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit(param1, $tmp240);
bool $tmp243 = $tmp242.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
if ($tmp243) goto block6; else goto block7;
block6:;
// line 104
org$frostlang$frostc$Compiler** $tmp244 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp245 = *$tmp244;
org$frostlang$frostc$ClassDecl** $tmp246 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp247 = *$tmp246;
org$frostlang$frostc$SymbolTable* $tmp248 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp245, $tmp247);
org$frostlang$frostc$Symbol* $tmp249 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp248, param1);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
org$frostlang$frostc$Symbol* $tmp250 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
*(&local1) = $tmp249;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
// line 105
org$frostlang$frostc$Symbol* $tmp251 = *(&local1);
frost$core$Bit $tmp252 = frost$core$Bit$init$builtin_bit($tmp251 != NULL);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block9; else goto block10;
block9:;
// line 106
org$frostlang$frostc$Symbol* $tmp254 = *(&local1);
$fn256 $tmp255 = ($fn256) param0->$class->vtable[6];
frost$core$String* $tmp257 = $tmp255(param0, $tmp254);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
org$frostlang$frostc$Symbol* $tmp258 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp259 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp257;
block10:;
org$frostlang$frostc$Symbol* $tmp260 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
goto block7;
block7:;
// line 109
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp261 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp261, &$s262);
frost$core$Bit $tmp263 = frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit(param1, $tmp261);
bool $tmp264 = $tmp263.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
if ($tmp264) goto block11; else goto block12;
block11:;
// line 110
frost$core$String$Index$nullable $tmp265 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(param1, &$s266);
*(&local2) = $tmp265;
// line 111
frost$core$String$Index$nullable $tmp267 = *(&local2);
frost$core$Bit $tmp268 = frost$core$Bit$init$builtin_bit($tmp267.nonnull);
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block13; else goto block14;
block13:;
// line 112
org$frostlang$frostc$Compiler** $tmp270 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp271 = *$tmp270;
frost$core$String$Index$nullable $tmp272 = *(&local2);
frost$core$Bit $tmp273 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp274 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp272, $tmp273);
frost$core$String* $tmp275 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp274);
org$frostlang$frostc$ClassDecl* $tmp276 = org$frostlang$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlang$frostc$ClassDecl$Q($tmp271, $tmp275);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
org$frostlang$frostc$ClassDecl* $tmp277 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
*(&local0) = $tmp276;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
// line 113
org$frostlang$frostc$ClassDecl* $tmp278 = *(&local0);
frost$core$Bit $tmp279 = frost$core$Bit$init$builtin_bit($tmp278 != NULL);
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block15; else goto block16;
block15:;
// line 114
org$frostlang$frostc$Compiler** $tmp281 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp282 = *$tmp281;
org$frostlang$frostc$ClassDecl* $tmp283 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp284 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp282, $tmp283);
frost$core$String$Index$nullable $tmp285 = *(&local2);
frost$core$String$Index $tmp286 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, ((frost$core$String$Index) $tmp285.value));
frost$core$Bit $tmp287 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp288 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp286, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp287);
frost$core$String* $tmp289 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param1, $tmp288);
org$frostlang$frostc$Symbol* $tmp290 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp284, $tmp289);
*(&local3) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
org$frostlang$frostc$Symbol* $tmp291 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
*(&local3) = $tmp290;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
// line 115
org$frostlang$frostc$Symbol* $tmp292 = *(&local3);
frost$core$Bit $tmp293 = frost$core$Bit$init$builtin_bit($tmp292 == NULL);
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block17; else goto block18;
block17:;
// line 116
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Symbol* $tmp295 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local3) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp296 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block18:;
// line 118
org$frostlang$frostc$Symbol* $tmp297 = *(&local3);
$fn299 $tmp298 = ($fn299) param0->$class->vtable[6];
frost$core$String* $tmp300 = $tmp298(param0, $tmp297);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
org$frostlang$frostc$Symbol* $tmp301 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
*(&local3) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp302 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp300;
block16:;
goto block14;
block14:;
goto block12;
block12:;
// line 122
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp303 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp303, &$s304);
frost$collections$ListView* $tmp305 = frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q(param1, $tmp303);
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
frost$collections$ListView* $tmp306 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
*(&local4) = $tmp305;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
// line 123
frost$collections$ListView* $tmp307 = *(&local4);
frost$core$Bit $tmp308 = frost$core$Bit$init$builtin_bit($tmp307 != NULL);
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block19; else goto block20;
block19:;
// line 124
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp310 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp310);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
frost$collections$Array* $tmp311 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
*(&local5) = $tmp310;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
// line 125
frost$collections$ListView* $tmp312 = *(&local4);
frost$core$Int64 $tmp313 = (frost$core$Int64) {1};
ITable* $tmp314 = $tmp312->$class->itable;
while ($tmp314->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp314 = $tmp314->next;
}
$fn316 $tmp315 = $tmp314->methods[0];
frost$core$Object* $tmp317 = $tmp315($tmp312, $tmp313);
frost$core$String* $tmp318 = frost$core$String$get_trimmed$R$frost$core$String(((frost$core$String*) $tmp317));
ITable* $tmp320 = ((frost$core$Equatable*) $tmp318)->$class->itable;
while ($tmp320->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp320 = $tmp320->next;
}
$fn322 $tmp321 = $tmp320->methods[1];
frost$core$Bit $tmp323 = $tmp321(((frost$core$Equatable*) $tmp318), ((frost$core$Equatable*) &$s319));
bool $tmp324 = $tmp323.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
frost$core$Frost$unref$frost$core$Object$Q($tmp317);
if ($tmp324) goto block21; else goto block22;
block21:;
// line 126
org$frostlang$frostc$Compiler** $tmp325 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp326 = *$tmp325;
org$frostlang$frostc$parser$Parser** $tmp327 = &$tmp326->parser;
org$frostlang$frostc$parser$Parser* $tmp328 = *$tmp327;
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp329 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$collections$ListView* $tmp330 = *(&local4);
frost$core$Int64 $tmp331 = (frost$core$Int64) {1};
ITable* $tmp332 = $tmp330->$class->itable;
while ($tmp332->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp332 = $tmp332->next;
}
$fn334 $tmp333 = $tmp332->methods[0];
frost$core$Object* $tmp335 = $tmp333($tmp330, $tmp331);
frost$io$File$init$frost$core$String($tmp329, ((frost$core$String*) $tmp335));
frost$collections$ListView* $tmp336 = *(&local4);
frost$core$Int64 $tmp337 = (frost$core$Int64) {1};
ITable* $tmp338 = $tmp336->$class->itable;
while ($tmp338->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp338 = $tmp338->next;
}
$fn340 $tmp339 = $tmp338->methods[0];
frost$core$Object* $tmp341 = $tmp339($tmp336, $tmp337);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp328, $tmp329, ((frost$core$String*) $tmp341));
frost$core$Frost$unref$frost$core$Object$Q($tmp341);
frost$core$Frost$unref$frost$core$Object$Q($tmp335);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
// line 127
goto block23;
block23:;
// line 128
org$frostlang$frostc$Compiler** $tmp342 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp343 = *$tmp342;
org$frostlang$frostc$parser$Parser** $tmp344 = &$tmp343->parser;
org$frostlang$frostc$parser$Parser* $tmp345 = *$tmp344;
org$frostlang$frostc$ASTNode* $tmp346 = org$frostlang$frostc$parser$Parser$type$R$org$frostlang$frostc$ASTNode$Q($tmp345);
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
org$frostlang$frostc$ASTNode* $tmp347 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
*(&local6) = $tmp346;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
// line 129
org$frostlang$frostc$ASTNode* $tmp348 = *(&local6);
frost$core$Bit $tmp349 = frost$core$Bit$init$builtin_bit($tmp348 == NULL);
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block25; else goto block26;
block25:;
// line 130
frost$collections$ListView* $tmp351 = *(&local4);
frost$core$Int64 $tmp352 = (frost$core$Int64) {1};
ITable* $tmp353 = $tmp351->$class->itable;
while ($tmp353->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp353 = $tmp353->next;
}
$fn355 $tmp354 = $tmp353->methods[0];
frost$core$Object* $tmp356 = $tmp354($tmp351, $tmp352);
frost$core$String* $tmp357 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s358, ((frost$core$String*) $tmp356));
frost$core$String* $tmp359 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp357, &$s360);
frost$io$Console$printLine$frost$core$String($tmp359);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
frost$core$Frost$unref$frost$core$Object$Q($tmp356);
// line 131
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$ASTNode* $tmp361 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp362 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp363 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local4) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp364 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block26:;
// line 133
org$frostlang$frostc$Compiler** $tmp365 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp366 = *$tmp365;
org$frostlang$frostc$Scanner** $tmp367 = &$tmp366->scanner;
org$frostlang$frostc$Scanner* $tmp368 = *$tmp367;
org$frostlang$frostc$ASTNode* $tmp369 = *(&local6);
org$frostlang$frostc$Type* $tmp370 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp368, $tmp369);
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
org$frostlang$frostc$Type* $tmp371 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
*(&local7) = $tmp370;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
// line 134
org$frostlang$frostc$Compiler** $tmp372 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp373 = *$tmp372;
org$frostlang$frostc$Type* $tmp374 = *(&local7);
org$frostlang$frostc$Type* $tmp375 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q($tmp373, $tmp374);
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
org$frostlang$frostc$Type* $tmp376 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
*(&local8) = $tmp375;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
// line 135
org$frostlang$frostc$Type* $tmp377 = *(&local8);
frost$core$Bit $tmp378 = frost$core$Bit$init$builtin_bit($tmp377 == NULL);
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block27; else goto block28;
block27:;
// line 136
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Type* $tmp380 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp381 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp382 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp383 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp384 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
*(&local4) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp385 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block28:;
// line 138
frost$collections$Array* $tmp386 = *(&local5);
org$frostlang$frostc$Type* $tmp387 = *(&local8);
frost$collections$Array$add$frost$collections$Array$T($tmp386, ((frost$core$Object*) $tmp387));
// line 139
org$frostlang$frostc$Compiler** $tmp388 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp389 = *$tmp388;
org$frostlang$frostc$parser$Parser** $tmp390 = &$tmp389->parser;
org$frostlang$frostc$parser$Parser* $tmp391 = *$tmp390;
frost$core$Int64 $tmp392 = (frost$core$Int64) {109};
org$frostlang$frostc$parser$Token$Kind $tmp393 = org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64($tmp392);
org$frostlang$frostc$parser$Token$nullable $tmp394 = org$frostlang$frostc$parser$Parser$checkNext$org$frostlang$frostc$parser$Token$Kind$R$org$frostlang$frostc$parser$Token$Q($tmp391, $tmp393);
frost$core$Bit $tmp395 = frost$core$Bit$init$builtin_bit(!$tmp394.nonnull);
bool $tmp396 = $tmp395.value;
if ($tmp396) goto block29; else goto block30;
block29:;
// line 140
org$frostlang$frostc$Type* $tmp397 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp398 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp399 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block24;
block30:;
org$frostlang$frostc$Type* $tmp400 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp401 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp402 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block23;
block24:;
goto block22;
block22:;
// line 144
frost$collections$ListView* $tmp403 = *(&local4);
frost$core$Int64 $tmp404 = (frost$core$Int64) {0};
ITable* $tmp405 = $tmp403->$class->itable;
while ($tmp405->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp405 = $tmp405->next;
}
$fn407 $tmp406 = $tmp405->methods[0];
frost$core$Object* $tmp408 = $tmp406($tmp403, $tmp404);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp408)));
frost$core$String* $tmp409 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local9) = ((frost$core$String*) $tmp408);
frost$core$Frost$unref$frost$core$Object$Q($tmp408);
// line 145
frost$core$String* $tmp410 = *(&local9);
frost$core$String$Index$nullable $tmp411 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp410, &$s412);
*(&local10) = $tmp411;
// line 146
*(&local11) = ((frost$core$String*) NULL);
// line 147
frost$core$String$Index$nullable $tmp413 = *(&local10);
frost$core$Bit $tmp414 = frost$core$Bit$init$builtin_bit($tmp413.nonnull);
bool $tmp415 = $tmp414.value;
if ($tmp415) goto block31; else goto block33;
block31:;
// line 148
org$frostlang$frostc$Compiler** $tmp416 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp417 = *$tmp416;
frost$core$String* $tmp418 = *(&local9);
frost$core$String$Index$nullable $tmp419 = *(&local10);
frost$core$Bit $tmp420 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp421 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp419, $tmp420);
frost$core$String* $tmp422 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp418, $tmp421);
org$frostlang$frostc$ClassDecl* $tmp423 = org$frostlang$frostc$Compiler$tryResolveClass$frost$core$String$R$org$frostlang$frostc$ClassDecl$Q($tmp417, $tmp422);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
org$frostlang$frostc$ClassDecl* $tmp424 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
*(&local0) = $tmp423;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
// line 149
frost$core$String* $tmp425 = *(&local9);
frost$core$String* $tmp426 = *(&local9);
frost$core$String$Index$nullable $tmp427 = *(&local10);
frost$core$String$Index $tmp428 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp426, ((frost$core$String$Index) $tmp427.value));
frost$core$Bit $tmp429 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp430 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp428, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp429);
frost$core$String* $tmp431 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp425, $tmp430);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
frost$core$String* $tmp432 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
*(&local11) = $tmp431;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
goto block32;
block33:;
// line 1
// line 152
org$frostlang$frostc$ClassDecl** $tmp433 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp434 = *$tmp433;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
org$frostlang$frostc$ClassDecl* $tmp435 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
*(&local0) = $tmp434;
// line 153
frost$core$String* $tmp436 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
frost$core$String* $tmp437 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
*(&local11) = $tmp436;
goto block32;
block32:;
// line 155
org$frostlang$frostc$ClassDecl* $tmp438 = *(&local0);
frost$core$Bit $tmp439 = frost$core$Bit$init$builtin_bit($tmp438 != NULL);
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block34; else goto block35;
block34:;
// line 156
org$frostlang$frostc$Compiler** $tmp441 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp442 = *$tmp441;
org$frostlang$frostc$ClassDecl* $tmp443 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp444 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable($tmp442, $tmp443);
frost$core$String* $tmp445 = *(&local11);
org$frostlang$frostc$Symbol* $tmp446 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp444, $tmp445);
*(&local12) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
org$frostlang$frostc$Symbol* $tmp447 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
*(&local12) = $tmp446;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
// line 157
org$frostlang$frostc$Symbol* $tmp448 = *(&local12);
frost$core$Bit $tmp449 = frost$core$Bit$init$builtin_bit($tmp448 == NULL);
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block36; else goto block37;
block36:;
// line 158
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Symbol* $tmp451 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
*(&local12) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp452 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
*(&local11) = ((frost$core$String*) NULL);
frost$core$String* $tmp453 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
*(&local9) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp454 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp455 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
*(&local4) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp456 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block37:;
// line 160
org$frostlang$frostc$Symbol* $tmp457 = *(&local12);
org$frostlang$frostc$Symbol$Kind* $tmp458 = &$tmp457->kind;
org$frostlang$frostc$Symbol$Kind $tmp459 = *$tmp458;
frost$core$Int64 $tmp460 = $tmp459.$rawValue;
frost$core$Int64 $tmp461 = (frost$core$Int64) {5};
frost$core$Bit $tmp462 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp460, $tmp461);
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block39; else goto block40;
block39:;
// line 162
org$frostlang$frostc$Symbol* $tmp464 = *(&local12);
frost$collections$Array* $tmp465 = *(&local5);
$fn467 $tmp466 = ($fn467) param0->$class->vtable[2];
frost$core$Bit $tmp468 = $tmp466(param0, ((org$frostlang$frostc$MethodDecl*) $tmp464), ((frost$collections$ListView*) $tmp465));
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block41; else goto block42;
block41:;
// line 163
org$frostlang$frostc$Symbol* $tmp470 = *(&local12);
$fn472 $tmp471 = ($fn472) param0->$class->vtable[6];
frost$core$String* $tmp473 = $tmp471(param0, $tmp470);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
org$frostlang$frostc$Symbol* $tmp474 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
*(&local12) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp475 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
*(&local11) = ((frost$core$String*) NULL);
frost$core$String* $tmp476 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
*(&local9) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp477 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp478 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
*(&local4) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp479 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp473;
block42:;
goto block38;
block40:;
frost$core$Int64 $tmp480 = (frost$core$Int64) {6};
frost$core$Bit $tmp481 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp460, $tmp480);
bool $tmp482 = $tmp481.value;
if ($tmp482) goto block43; else goto block38;
block43:;
// line 167
org$frostlang$frostc$Symbol* $tmp483 = *(&local12);
org$frostlang$frostc$FixedArray** $tmp484 = &((org$frostlang$frostc$Methods*) $tmp483)->methods;
org$frostlang$frostc$FixedArray* $tmp485 = *$tmp484;
ITable* $tmp486 = ((frost$collections$Iterable*) $tmp485)->$class->itable;
while ($tmp486->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp486 = $tmp486->next;
}
$fn488 $tmp487 = $tmp486->methods[0];
frost$collections$Iterator* $tmp489 = $tmp487(((frost$collections$Iterable*) $tmp485));
goto block44;
block44:;
ITable* $tmp490 = $tmp489->$class->itable;
while ($tmp490->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp490 = $tmp490->next;
}
$fn492 $tmp491 = $tmp490->methods[0];
frost$core$Bit $tmp493 = $tmp491($tmp489);
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block46; else goto block45;
block45:;
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp495 = $tmp489->$class->itable;
while ($tmp495->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp495 = $tmp495->next;
}
$fn497 $tmp496 = $tmp495->methods[1];
frost$core$Object* $tmp498 = $tmp496($tmp489);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp498)));
org$frostlang$frostc$MethodDecl* $tmp499 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
*(&local13) = ((org$frostlang$frostc$MethodDecl*) $tmp498);
// line 168
org$frostlang$frostc$MethodDecl* $tmp500 = *(&local13);
frost$collections$Array* $tmp501 = *(&local5);
$fn503 $tmp502 = ($fn503) param0->$class->vtable[2];
frost$core$Bit $tmp504 = $tmp502(param0, $tmp500, ((frost$collections$ListView*) $tmp501));
bool $tmp505 = $tmp504.value;
if ($tmp505) goto block47; else goto block48;
block47:;
// line 169
org$frostlang$frostc$MethodDecl* $tmp506 = *(&local13);
$fn508 $tmp507 = ($fn508) param0->$class->vtable[5];
frost$core$String* $tmp509 = $tmp507(param0, $tmp506);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
frost$core$Frost$unref$frost$core$Object$Q($tmp498);
org$frostlang$frostc$MethodDecl* $tmp510 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
org$frostlang$frostc$Symbol* $tmp511 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
*(&local12) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp512 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
*(&local11) = ((frost$core$String*) NULL);
frost$core$String* $tmp513 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
*(&local9) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp514 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp515 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
*(&local4) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp516 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp509;
block48:;
frost$core$Frost$unref$frost$core$Object$Q($tmp498);
org$frostlang$frostc$MethodDecl* $tmp517 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block44;
block46:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
goto block38;
block38:;
// line 174
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
org$frostlang$frostc$Symbol* $tmp518 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
*(&local12) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp519 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
*(&local11) = ((frost$core$String*) NULL);
frost$core$String* $tmp520 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
*(&local9) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp521 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
*(&local5) = ((frost$collections$Array*) NULL);
frost$collections$ListView* $tmp522 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
*(&local4) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp523 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);
block35:;
frost$core$String* $tmp524 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
*(&local11) = ((frost$core$String*) NULL);
frost$core$String* $tmp525 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
*(&local9) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp526 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
*(&local5) = ((frost$collections$Array*) NULL);
goto block20;
block20:;
// line 177
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$collections$ListView* $tmp527 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
*(&local4) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp528 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((frost$core$String*) NULL);

}
void org$frostlang$frostc$frostdoc$LinkResolver$cleanup(org$frostlang$frostc$frostdoc$LinkResolver* param0) {

// line 12
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp529 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp530 = *$tmp529;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
frost$core$String** $tmp531 = &param0->apiRelativePath;
frost$core$String* $tmp532 = *$tmp531;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
org$frostlang$frostc$ClassDecl** $tmp533 = &param0->context;
org$frostlang$frostc$ClassDecl* $tmp534 = *$tmp533;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
return;

}

