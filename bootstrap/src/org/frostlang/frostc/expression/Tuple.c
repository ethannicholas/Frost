#include "org/frostlang/frostc/expression/Tuple.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/UInt64.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/core/Frost.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/expression/Tuple/_Closure2.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/Array.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Equatable.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/expression/Tuple/_Closure4.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Tuple$class_type org$frostlang$frostc$expression$Tuple$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Tuple$cleanup} };

typedef frost$core$Int (*$fn25)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn35)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn38)(frost$core$Object*);
typedef frost$core$String* (*$fn45)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn71)(org$frostlang$frostc$expression$Tuple$_Closure2*, org$frostlang$frostc$Type*, org$frostlang$frostc$Type*);
typedef frost$core$Object* (*$fn79)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn85)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn89)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn94)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn125)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn138)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn142)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn153)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn230)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn243)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn247)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn275)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn289)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn293)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn339)(org$frostlang$frostc$expression$Tuple$_Closure4*, org$frostlang$frostc$ASTNode*);
typedef frost$collections$Array* (*$fn347)(frost$collections$CollectionView*, frost$core$MutableMethod*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x54\x75\x70\x6c\x65", 37, -2192914147627931606, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x69\x6e\x64\x65\x78\x20\x27", 13, -2835249030150575212, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x66\x6f\x72\x20\x27", 24, -5834575264800361726, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x2e\x66\x72\x6f\x73\x74", 11, 4603043468144271925, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };

org$frostlang$frostc$Type* org$frostlang$frostc$expression$Tuple$indexType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$ASTNode* param2) {

frost$core$UInt64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:15
frost$core$Int* $tmp2 = &param2->$rawValue;
frost$core$Int $tmp3 = *$tmp2;
frost$core$Int $tmp4 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:16:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Position* $tmp10 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp11 = *$tmp10;
frost$core$UInt64* $tmp12 = (frost$core$UInt64*) (param2->$data + 24);
frost$core$UInt64 $tmp13 = *$tmp12;
*(&local0) = $tmp13;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:17
frost$core$UInt64 $tmp14 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:17:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp15 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp16 = *$tmp15;
frost$core$Bit $tmp17 = (frost$core$Bit) {$tmp16 != NULL};
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block7; else goto block8;
block8:;
frost$core$Int $tmp19 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s20, $tmp19);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp21 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp22 = *$tmp21;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
ITable* $tmp23 = ((frost$collections$CollectionView*) $tmp22)->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp23 = $tmp23->next;
}
$fn25 $tmp24 = $tmp23->methods[0];
frost$core$Int $tmp26 = $tmp24(((frost$collections$CollectionView*) $tmp22));
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Tuple.frost:17:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:1009
int64_t $tmp27 = $tmp26.value;
frost$core$UInt64 $tmp28 = (frost$core$UInt64) {((uint64_t) $tmp27)};
uint64_t $tmp29 = $tmp14.value;
uint64_t $tmp30 = $tmp28.value;
bool $tmp31 = $tmp29 > $tmp30;
frost$core$Bit $tmp32 = (frost$core$Bit) {$tmp31};
bool $tmp33 = $tmp32.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
if ($tmp33) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:18
$fn35 $tmp34 = ($fn35) param2->$class->vtable[2];
org$frostlang$frostc$Position $tmp36 = $tmp34(param2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple.frost:19:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn38 $tmp37 = ($fn38) ((frost$core$Object*) param2)->$class->vtable[0];
frost$core$String* $tmp39 = $tmp37(((frost$core$Object*) param2));
frost$core$String* $tmp40 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s41, $tmp39);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$String* $tmp42 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp40, &$s43);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple.frost:19:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:560
$fn45 $tmp44 = ($fn45) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp46 = $tmp44(((frost$core$Object*) param1));
frost$core$String* $tmp47 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp42, $tmp46);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$core$String* $tmp48 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp47, &$s49);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp36, $tmp48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:21
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:21:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp50 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp51 = *$tmp50;
frost$core$Bit $tmp52 = (frost$core$Bit) {$tmp51 != NULL};
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block13; else goto block14;
block14:;
frost$core$Int $tmp54 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s55, $tmp54);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp56 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp57 = *$tmp56;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$UInt64 $tmp58 = *(&local0);
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from Tuple.frost:21:44
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:544
uint64_t $tmp59 = $tmp58.value;
frost$core$Int $tmp60 = (frost$core$Int) {((int64_t) $tmp59)};
frost$core$Object* $tmp61 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp57, $tmp60);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp61)));
frost$core$Frost$unref$frost$core$Object$Q($tmp61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
return ((org$frostlang$frostc$Type*) $tmp61);
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:24
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:24:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp62 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp63 = *$tmp62;
frost$core$Bit $tmp64 = (frost$core$Bit) {$tmp63 != NULL};
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block17; else goto block18;
block18:;
frost$core$Int $tmp66 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s67, $tmp66);
abort(); // unreachable
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp68 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp69 = *$tmp68;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$expression$Tuple$_Closure2));
org$frostlang$frostc$expression$Tuple$_Closure2* $tmp70 = (org$frostlang$frostc$expression$Tuple$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Tuple$_Closure2$class);
org$frostlang$frostc$expression$Tuple$_Closure2$init$org$frostlang$frostc$Compiler($tmp70, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp72 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Tuple.frost:24:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp73 = &$tmp72->pointer;
*$tmp73 = ((frost$core$Int8*) org$frostlang$frostc$expression$Tuple$_Closure2$$anonymous1$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$Object** $tmp74 = &$tmp72->target;
frost$core$Object* $tmp75 = *$tmp74;
frost$core$Frost$unref$frost$core$Object$Q($tmp75);
frost$core$Object** $tmp76 = &$tmp72->target;
*$tmp76 = ((frost$core$Object*) $tmp70);
ITable* $tmp77 = ((frost$collections$CollectionView*) $tmp69)->$class->itable;
while ($tmp77->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp77 = $tmp77->next;
}
$fn79 $tmp78 = $tmp77->methods[3];
frost$core$Object* $tmp80 = $tmp78(((frost$collections$CollectionView*) $tmp69), $tmp72);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp80)));
frost$core$Frost$unref$frost$core$Object$Q($tmp80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
return ((org$frostlang$frostc$Type*) $tmp80);

}
frost$collections$CollectionView* org$frostlang$frostc$expression$Tuple$possibleTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$FixedArray* param1) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:29
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp81 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp81);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$collections$Array* $tmp82 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
*(&local0) = $tmp81;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:30
ITable* $tmp83 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp83 = $tmp83->next;
}
$fn85 $tmp84 = $tmp83->methods[0];
frost$collections$Iterator* $tmp86 = $tmp84(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp87 = $tmp86->$class->itable;
while ($tmp87->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp87 = $tmp87->next;
}
$fn89 $tmp88 = $tmp87->methods[0];
frost$core$Bit $tmp90 = $tmp88($tmp86);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp92 = $tmp86->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp92 = $tmp92->next;
}
$fn94 $tmp93 = $tmp92->methods[1];
frost$core$Object* $tmp95 = $tmp93($tmp86);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp95)));
org$frostlang$frostc$ASTNode* $tmp96 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local1) = ((org$frostlang$frostc$ASTNode*) $tmp95);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:31
org$frostlang$frostc$ASTNode* $tmp97 = *(&local1);
org$frostlang$frostc$Type* $tmp98 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp97);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
org$frostlang$frostc$Type* $tmp99 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
*(&local2) = $tmp98;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:32
org$frostlang$frostc$Type* $tmp100 = *(&local2);
frost$core$Bit $tmp101 = (frost$core$Bit) {$tmp100 == NULL};
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) NULL)));
org$frostlang$frostc$Type* $tmp103 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp95);
org$frostlang$frostc$ASTNode* $tmp104 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$collections$Array* $tmp105 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$CollectionView*) NULL);
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:35
frost$collections$Array* $tmp106 = *(&local0);
org$frostlang$frostc$Type* $tmp107 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp106, ((frost$core$Object*) $tmp107));
org$frostlang$frostc$Type* $tmp108 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp95);
org$frostlang$frostc$ASTNode* $tmp109 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:37
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp110 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp111 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp110, $tmp111);
frost$collections$Array* $tmp112 = *(&local0);
org$frostlang$frostc$Type* $tmp113 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((frost$collections$ListView*) $tmp112));
frost$collections$Array$add$frost$collections$Array$T($tmp110, ((frost$core$Object*) $tmp113));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp110)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$collections$Array* $tmp114 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$CollectionView*) $tmp110);

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Tuple$coercionCost$org$frostlang$frostc$Compiler$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$FixedArray* param1, org$frostlang$frostc$Type* param2) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
frost$core$Int local2;
frost$core$Int local3;
org$frostlang$frostc$Pair* local4 = NULL;
frost$collections$CollectionView* local5 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:43
org$frostlang$frostc$Type$Kind* $tmp115 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp116 = *$tmp115;
org$frostlang$frostc$Type$Kind$wrapper* $tmp117;
$tmp117 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp117->value = $tmp116;
frost$core$Int $tmp118 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Tuple.frost:43:39
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp119 = &(&local1)->$rawValue;
*$tmp119 = $tmp118;
org$frostlang$frostc$Type$Kind $tmp120 = *(&local1);
*(&local0) = $tmp120;
org$frostlang$frostc$Type$Kind $tmp121 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp122;
$tmp122 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp122->value = $tmp121;
ITable* $tmp123 = ((frost$core$Equatable*) $tmp117)->$class->itable;
while ($tmp123->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp123 = $tmp123->next;
}
$fn125 $tmp124 = $tmp123->methods[0];
frost$core$Bit $tmp126 = $tmp124(((frost$core$Equatable*) $tmp117), ((frost$core$Equatable*) $tmp122));
bool $tmp127 = $tmp126.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp122)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp117)));
if ($tmp127) goto block3; else goto block2;
block3:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:43:54
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp128 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp129 = *$tmp128;
frost$core$Bit $tmp130 = (frost$core$Bit) {$tmp129 != NULL};
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block6; else goto block7;
block7:;
frost$core$Int $tmp132 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s133, $tmp132);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp134 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp135 = *$tmp134;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
ITable* $tmp136 = ((frost$collections$CollectionView*) $tmp135)->$class->itable;
while ($tmp136->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp136 = $tmp136->next;
}
$fn138 $tmp137 = $tmp136->methods[0];
frost$core$Int $tmp139 = $tmp137(((frost$collections$CollectionView*) $tmp135));
ITable* $tmp140 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp140->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp140 = $tmp140->next;
}
$fn142 $tmp141 = $tmp140->methods[0];
frost$core$Int $tmp143 = $tmp141(((frost$collections$CollectionView*) param1));
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:43:70
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp144 = $tmp139.value;
int64_t $tmp145 = $tmp143.value;
bool $tmp146 = $tmp144 == $tmp145;
frost$core$Bit $tmp147 = (frost$core$Bit) {$tmp146};
bool $tmp148 = $tmp147.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
if ($tmp148) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:44
frost$core$Int $tmp149 = (frost$core$Int) {0u};
*(&local2) = $tmp149;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:45
frost$core$Int $tmp150 = (frost$core$Int) {0u};
ITable* $tmp151 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp151->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp151 = $tmp151->next;
}
$fn153 $tmp152 = $tmp151->methods[0];
frost$core$Int $tmp154 = $tmp152(((frost$collections$CollectionView*) param1));
frost$core$Bit $tmp155 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp156 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp150, $tmp154, $tmp155);
frost$core$Int $tmp157 = $tmp156.min;
*(&local3) = $tmp157;
frost$core$Int $tmp158 = $tmp156.max;
frost$core$Bit $tmp159 = $tmp156.inclusive;
bool $tmp160 = $tmp159.value;
frost$core$Int $tmp161 = (frost$core$Int) {1u};
if ($tmp160) goto block12; else goto block13;
block12:;
int64_t $tmp162 = $tmp157.value;
int64_t $tmp163 = $tmp158.value;
bool $tmp164 = $tmp162 <= $tmp163;
frost$core$Bit $tmp165 = (frost$core$Bit) {$tmp164};
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block9; else goto block10;
block13:;
int64_t $tmp167 = $tmp157.value;
int64_t $tmp168 = $tmp158.value;
bool $tmp169 = $tmp167 < $tmp168;
frost$core$Bit $tmp170 = (frost$core$Bit) {$tmp169};
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:46
frost$core$Int $tmp172 = *(&local3);
frost$core$Object* $tmp173 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(param1, $tmp172);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:46:66
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp174 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp175 = *$tmp174;
frost$core$Bit $tmp176 = (frost$core$Bit) {$tmp175 != NULL};
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block15; else goto block16;
block16:;
frost$core$Int $tmp178 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s179, $tmp178);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp180 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp181 = *$tmp180;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Int $tmp182 = *(&local3);
frost$core$Object* $tmp183 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp181, $tmp182);
org$frostlang$frostc$Pair* $tmp184 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp173), ((org$frostlang$frostc$Type*) $tmp183));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
org$frostlang$frostc$Pair* $tmp185 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
*(&local4) = $tmp184;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$core$Frost$unref$frost$core$Object$Q($tmp183);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q($tmp173);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:47
org$frostlang$frostc$Pair* $tmp186 = *(&local4);
frost$core$Bit $tmp187 = (frost$core$Bit) {$tmp186 == NULL};
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:48
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Pair* $tmp189 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:50
frost$core$Int $tmp190 = *(&local2);
org$frostlang$frostc$Pair* $tmp191 = *(&local4);
frost$core$Object** $tmp192 = &$tmp191->second;
frost$core$Object* $tmp193 = *$tmp192;
int64_t $tmp194 = $tmp190.value;
int64_t $tmp195 = ((frost$core$Int$wrapper*) $tmp193)->value.value;
int64_t $tmp196 = $tmp194 + $tmp195;
frost$core$Int $tmp197 = (frost$core$Int) {$tmp196};
*(&local2) = $tmp197;
org$frostlang$frostc$Pair* $tmp198 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Int $tmp199 = *(&local3);
int64_t $tmp200 = $tmp158.value;
int64_t $tmp201 = $tmp199.value;
int64_t $tmp202 = $tmp200 - $tmp201;
frost$core$Int $tmp203 = (frost$core$Int) {$tmp202};
if ($tmp160) goto block20; else goto block21;
block20:;
int64_t $tmp204 = $tmp203.value;
int64_t $tmp205 = $tmp161.value;
bool $tmp206 = $tmp204 >= $tmp205;
frost$core$Bit $tmp207 = (frost$core$Bit) {$tmp206};
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block19; else goto block10;
block21:;
int64_t $tmp209 = $tmp203.value;
int64_t $tmp210 = $tmp161.value;
bool $tmp211 = $tmp209 > $tmp210;
frost$core$Bit $tmp212 = (frost$core$Bit) {$tmp211};
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block19; else goto block10;
block19:;
int64_t $tmp214 = $tmp199.value;
int64_t $tmp215 = $tmp161.value;
int64_t $tmp216 = $tmp214 + $tmp215;
frost$core$Int $tmp217 = (frost$core$Int) {$tmp216};
*(&local3) = $tmp217;
goto block9;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:52
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp218 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Int $tmp219 = *(&local2);
frost$core$Int$wrapper* $tmp220;
$tmp220 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp220->value = $tmp219;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp218, ((frost$core$Object*) param2), ((frost$core$Object*) $tmp220));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
return $tmp218;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:54
frost$collections$CollectionView* $tmp221 = org$frostlang$frostc$expression$Tuple$possibleTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param1);
*(&local5) = ((frost$collections$CollectionView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
frost$collections$CollectionView* $tmp222 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
*(&local5) = $tmp221;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:55
frost$collections$CollectionView* $tmp223 = *(&local5);
frost$core$Bit $tmp224 = (frost$core$Bit) {$tmp223 == NULL};
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:56
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$CollectionView* $tmp226 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
*(&local5) = ((frost$collections$CollectionView*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:58
frost$collections$CollectionView* $tmp227 = *(&local5);
ITable* $tmp228 = $tmp227->$class->itable;
while ($tmp228->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp228 = $tmp228->next;
}
$fn230 $tmp229 = $tmp228->methods[0];
frost$core$Int $tmp231 = $tmp229($tmp227);
frost$core$Int $tmp232 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:58:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp233 = $tmp231.value;
int64_t $tmp234 = $tmp232.value;
bool $tmp235 = $tmp233 == $tmp234;
frost$core$Bit $tmp236 = (frost$core$Bit) {$tmp235};
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block25; else goto block26;
block26:;
frost$core$Int $tmp238 = (frost$core$Int) {58u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s239, $tmp238);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:59
frost$collections$CollectionView* $tmp240 = *(&local5);
ITable* $tmp241 = ((frost$collections$Iterable*) $tmp240)->$class->itable;
while ($tmp241->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp241 = $tmp241->next;
}
$fn243 $tmp242 = $tmp241->methods[0];
frost$collections$Iterator* $tmp244 = $tmp242(((frost$collections$Iterable*) $tmp240));
ITable* $tmp245 = $tmp244->$class->itable;
while ($tmp245->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp245 = $tmp245->next;
}
$fn247 $tmp246 = $tmp245->methods[1];
frost$core$Object* $tmp248 = $tmp246($tmp244);
org$frostlang$frostc$Pair* $tmp249 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, ((org$frostlang$frostc$Type*) $tmp248), param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
frost$core$Frost$unref$frost$core$Object$Q($tmp248);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
frost$collections$CollectionView* $tmp250 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
*(&local5) = ((frost$collections$CollectionView*) NULL);
return $tmp249;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Tuple$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$FixedArray* param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

org$frostlang$frostc$Type* local0 = NULL;
frost$core$Bit local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$IR$Value* local6 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:65
frost$core$Int* $tmp251 = &param3->$rawValue;
frost$core$Int $tmp252 = *$tmp251;
frost$core$Int $tmp253 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:66:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp254 = $tmp252.value;
int64_t $tmp255 = $tmp253.value;
bool $tmp256 = $tmp254 == $tmp255;
frost$core$Bit $tmp257 = (frost$core$Bit) {$tmp256};
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Type** $tmp259 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp260 = *$tmp259;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
org$frostlang$frostc$Type* $tmp261 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
*(&local0) = $tmp260;
frost$core$Bit* $tmp262 = (frost$core$Bit*) (param3->$data + 8);
frost$core$Bit $tmp263 = *$tmp262;
*(&local1) = $tmp263;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:67
org$frostlang$frostc$Type* $tmp264 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_isTuple():frost.core.Bit from Tuple.frost:67:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:374
org$frostlang$frostc$Type$Kind* $tmp265 = &$tmp264->typeKind;
org$frostlang$frostc$Type$Kind $tmp266 = *$tmp265;
org$frostlang$frostc$Type$Kind$wrapper* $tmp267;
$tmp267 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp267->value = $tmp266;
frost$core$Int $tmp268 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:374:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp269 = &(&local3)->$rawValue;
*$tmp269 = $tmp268;
org$frostlang$frostc$Type$Kind $tmp270 = *(&local3);
*(&local2) = $tmp270;
org$frostlang$frostc$Type$Kind $tmp271 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp272;
$tmp272 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp272->value = $tmp271;
ITable* $tmp273 = ((frost$core$Equatable*) $tmp267)->$class->itable;
while ($tmp273->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp273 = $tmp273->next;
}
$fn275 $tmp274 = $tmp273->methods[0];
frost$core$Bit $tmp276 = $tmp274(((frost$core$Equatable*) $tmp267), ((frost$core$Equatable*) $tmp272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp272)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp267)));
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block6; else goto block5;
block6:;
org$frostlang$frostc$Type* $tmp278 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:67:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp279 = &$tmp278->_subtypes;
org$frostlang$frostc$FixedArray* $tmp280 = *$tmp279;
frost$core$Bit $tmp281 = (frost$core$Bit) {$tmp280 != NULL};
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block10; else goto block11;
block11:;
frost$core$Int $tmp283 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s284, $tmp283);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp285 = &$tmp278->_subtypes;
org$frostlang$frostc$FixedArray* $tmp286 = *$tmp285;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
ITable* $tmp287 = ((frost$collections$CollectionView*) $tmp286)->$class->itable;
while ($tmp287->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp287 = $tmp287->next;
}
$fn289 $tmp288 = $tmp287->methods[0];
frost$core$Int $tmp290 = $tmp288(((frost$collections$CollectionView*) $tmp286));
ITable* $tmp291 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp291->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp291 = $tmp291->next;
}
$fn293 $tmp292 = $tmp291->methods[0];
frost$core$Int $tmp294 = $tmp292(((frost$collections$CollectionView*) param2));
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:67:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp295 = $tmp290.value;
int64_t $tmp296 = $tmp294.value;
bool $tmp297 = $tmp295 == $tmp296;
frost$core$Bit $tmp298 = (frost$core$Bit) {$tmp297};
bool $tmp299 = $tmp298.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
if ($tmp299) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:68
org$frostlang$frostc$Type* $tmp300 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp301 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp300);
org$frostlang$frostc$Type** $tmp302 = &$tmp301->type;
org$frostlang$frostc$Type* $tmp303 = *$tmp302;
org$frostlang$frostc$Type* $tmp304 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:68:79
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp305 = &$tmp304->_subtypes;
org$frostlang$frostc$FixedArray* $tmp306 = *$tmp305;
frost$core$Bit $tmp307 = (frost$core$Bit) {$tmp306 != NULL};
bool $tmp308 = $tmp307.value;
if ($tmp308) goto block14; else goto block15;
block15:;
frost$core$Int $tmp309 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s310, $tmp309);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp311 = &$tmp304->_subtypes;
org$frostlang$frostc$FixedArray* $tmp312 = *$tmp311;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
org$frostlang$frostc$Type* $tmp313 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp303, ((frost$collections$ListView*) $tmp312));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
org$frostlang$frostc$Type* $tmp314 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
*(&local4) = $tmp313;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:69
org$frostlang$frostc$Type* $tmp315 = *(&local4);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Tuple.frost:70:49
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Compiler.frost:3740
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp316 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp317 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3740:50
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/Type.frost:273
org$frostlang$frostc$Type** $tmp318 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp319 = *$tmp318;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp320 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp321 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp320, $tmp321);
frost$collections$Array$add$frost$collections$Array$T($tmp320, ((frost$core$Object*) $tmp315));
org$frostlang$frostc$Type* $tmp322 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp319, ((frost$collections$ListView*) $tmp320));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp316, $tmp317, $tmp315, $tmp322);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp323 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp324 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp323, $tmp324);
org$frostlang$frostc$IR$Value* $tmp325 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp316, ((frost$collections$ListView*) param2), $tmp323);
org$frostlang$frostc$Type* $tmp326 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp327 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp325, $tmp326);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
org$frostlang$frostc$Type* $tmp328 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp329 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp327;
block5:;
org$frostlang$frostc$Type* $tmp330 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:74
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp331 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp332 = (frost$core$Int) {43u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp331, $tmp332, param1, param2);
org$frostlang$frostc$Type* $tmp333 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp331);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
org$frostlang$frostc$Type* $tmp334 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
*(&local5) = $tmp333;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:75
org$frostlang$frostc$Type* $tmp335 = *(&local5);
frost$core$Bit $tmp336 = (frost$core$Bit) {$tmp335 == NULL};
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:76
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$expression$Tuple$_Closure4));
org$frostlang$frostc$expression$Tuple$_Closure4* $tmp338 = (org$frostlang$frostc$expression$Tuple$_Closure4*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Tuple$_Closure4$class);
org$frostlang$frostc$expression$Tuple$_Closure4$init$org$frostlang$frostc$Compiler($tmp338, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp340 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Tuple.frost:76:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp341 = &$tmp340->pointer;
*$tmp341 = ((frost$core$Int8*) org$frostlang$frostc$expression$Tuple$_Closure4$$anonymous3$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Object** $tmp342 = &$tmp340->target;
frost$core$Object* $tmp343 = *$tmp342;
frost$core$Frost$unref$frost$core$Object$Q($tmp343);
frost$core$Object** $tmp344 = &$tmp340->target;
*$tmp344 = ((frost$core$Object*) $tmp338);
ITable* $tmp345 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp345->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp345 = $tmp345->next;
}
$fn347 $tmp346 = $tmp345->methods[8];
frost$collections$Array* $tmp348 = $tmp346(((frost$collections$CollectionView*) param2), $tmp340);
org$frostlang$frostc$Type* $tmp349 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((frost$collections$ListView*) $tmp348));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
org$frostlang$frostc$Type* $tmp350 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
*(&local5) = $tmp349;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:78
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp351 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp352 = (frost$core$Int) {3u};
org$frostlang$frostc$Type* $tmp353 = *(&local5);
frost$core$Bit $tmp354 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp351, $tmp352, $tmp353, $tmp354);
org$frostlang$frostc$IR$Value* $tmp355 = org$frostlang$frostc$expression$Tuple$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp351);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
org$frostlang$frostc$IR$Value* $tmp356 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
*(&local6) = $tmp355;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:79
org$frostlang$frostc$IR$Value* $tmp357 = *(&local6);
frost$core$Bit $tmp358 = (frost$core$Bit) {$tmp357 == NULL};
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:80
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp360 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp361 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:82
org$frostlang$frostc$IR$Value* $tmp362 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp363 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp362, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
org$frostlang$frostc$IR$Value* $tmp364 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp365 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return $tmp363;

}
void org$frostlang$frostc$expression$Tuple$init(org$frostlang$frostc$expression$Tuple* param0) {

return;

}
void org$frostlang$frostc$expression$Tuple$cleanup(org$frostlang$frostc$expression$Tuple* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/Tuple.frost:12
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

