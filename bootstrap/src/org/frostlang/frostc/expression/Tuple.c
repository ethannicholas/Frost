#include "org/frostlang/frostc/expression/Tuple.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/UInt64.h"
#include "frost/core/Int64.h"
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
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Tuple$class_type org$frostlang$frostc$expression$Tuple$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Tuple$cleanup} };

typedef frost$core$Int64 (*$fn25)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn35)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn38)(frost$core$Object*);
typedef frost$core$String* (*$fn45)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn71)(org$frostlang$frostc$expression$Tuple$_Closure2*, org$frostlang$frostc$Type*, org$frostlang$frostc$Type*);
typedef frost$core$Object* (*$fn79)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn85)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn89)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn94)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn125)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn138)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn142)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn153)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn234)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn247)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn251)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn291)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn305)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn309)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn349)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Array* (*$fn357)(frost$collections$CollectionView*, frost$core$MutableMethod*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x54\x75\x70\x6c\x65", 37, 3193902451849896392, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x69\x6e\x64\x65\x78\x20\x27", 13, 107411054585345478, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x66\x6f\x72\x20\x27", 24, -2124921702849731490, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x2e\x66\x72\x6f\x73\x74", 11, -3424658894957592813, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 5148459585349422950, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };

org$frostlang$frostc$Type* org$frostlang$frostc$expression$Tuple$indexType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$ASTNode* param2) {

frost$core$UInt64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:15
frost$core$Int64* $tmp2 = &param2->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {25};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Tuple.frost:16:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = frost$core$Bit$init$builtin_bit($tmp7);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Position* $tmp10 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp11 = *$tmp10;
frost$core$UInt64* $tmp12 = (frost$core$UInt64*) (param2->$data + 24);
frost$core$UInt64 $tmp13 = *$tmp12;
*(&local0) = $tmp13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:17
frost$core$UInt64 $tmp14 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:17:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp15 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp16 = *$tmp15;
frost$core$Bit $tmp17 = frost$core$Bit$init$builtin_bit($tmp16 != NULL);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp19 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s20, $tmp19);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp21 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp22 = *$tmp21;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
ITable* $tmp23 = ((frost$collections$CollectionView*) $tmp22)->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp23 = $tmp23->next;
}
$fn25 $tmp24 = $tmp23->methods[0];
frost$core$Int64 $tmp26 = $tmp24(((frost$collections$CollectionView*) $tmp22));
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Tuple.frost:17:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:18
$fn35 $tmp34 = ($fn35) param2->$class->vtable[2];
org$frostlang$frostc$Position $tmp36 = $tmp34(param2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple.frost:19:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn38 $tmp37 = ($fn38) ((frost$core$Object*) param2)->$class->vtable[0];
frost$core$String* $tmp39 = $tmp37(((frost$core$Object*) param2));
frost$core$String* $tmp40 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s41, $tmp39);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$core$String* $tmp42 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp40, &$s43);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple.frost:19:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:21
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:21:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp50 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp51 = *$tmp50;
frost$core$Bit $tmp52 = frost$core$Bit$init$builtin_bit($tmp51 != NULL);
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp54 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s55, $tmp54);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp56 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp57 = *$tmp56;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$UInt64 $tmp58 = *(&local0);
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Tuple.frost:21:44
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt64.stub:401
uint64_t $tmp59 = $tmp58.value;
frost$core$Int64 $tmp60 = (frost$core$Int64) {((int64_t) $tmp59)};
frost$core$Object* $tmp61 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp57, $tmp60);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp61)));
frost$core$Frost$unref$frost$core$Object$Q($tmp61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
return ((org$frostlang$frostc$Type*) $tmp61);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:24
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:24:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp62 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp63 = *$tmp62;
frost$core$Bit $tmp64 = frost$core$Bit$init$builtin_bit($tmp63 != NULL);
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp66 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s67, $tmp66);
abort(); // unreachable
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp68 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp69 = *$tmp68;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$expression$Tuple$_Closure2));
org$frostlang$frostc$expression$Tuple$_Closure2* $tmp70 = (org$frostlang$frostc$expression$Tuple$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Tuple$_Closure2$class);
org$frostlang$frostc$expression$Tuple$_Closure2$init$org$frostlang$frostc$Compiler($tmp70, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp72 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Tuple.frost:24:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp73 = &$tmp72->pointer;
*$tmp73 = ((frost$core$Int8*) org$frostlang$frostc$expression$Tuple$_Closure2$$anonymous1$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:29
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp81 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp81);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$collections$Array* $tmp82 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
*(&local0) = $tmp81;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:30
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:31
org$frostlang$frostc$ASTNode* $tmp97 = *(&local1);
org$frostlang$frostc$Type* $tmp98 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp97);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
org$frostlang$frostc$Type* $tmp99 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
*(&local2) = $tmp98;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:32
org$frostlang$frostc$Type* $tmp100 = *(&local2);
frost$core$Bit $tmp101 = frost$core$Bit$init$builtin_bit($tmp100 == NULL);
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:33
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:35
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:37
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp110 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp111 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp110, $tmp111);
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
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Tuple$coercionCost$org$frostlang$frostc$Compiler$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$FixedArray* param1, org$frostlang$frostc$Type* param2) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
org$frostlang$frostc$Pair* local4 = NULL;
frost$collections$CollectionView* local5 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:43
org$frostlang$frostc$Type$Kind* $tmp115 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp116 = *$tmp115;
org$frostlang$frostc$Type$Kind$wrapper* $tmp117;
$tmp117 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp117->value = $tmp116;
frost$core$Int64 $tmp118 = (frost$core$Int64) {10};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Tuple.frost:43:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp119 = &(&local1)->$rawValue;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp128 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp129 = *$tmp128;
frost$core$Bit $tmp130 = frost$core$Bit$init$builtin_bit($tmp129 != NULL);
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp132 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s133, $tmp132);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp134 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp135 = *$tmp134;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
ITable* $tmp136 = ((frost$collections$CollectionView*) $tmp135)->$class->itable;
while ($tmp136->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp136 = $tmp136->next;
}
$fn138 $tmp137 = $tmp136->methods[0];
frost$core$Int64 $tmp139 = $tmp137(((frost$collections$CollectionView*) $tmp135));
ITable* $tmp140 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp140->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp140 = $tmp140->next;
}
$fn142 $tmp141 = $tmp140->methods[0];
frost$core$Int64 $tmp143 = $tmp141(((frost$collections$CollectionView*) param1));
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Tuple.frost:43:70
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp144 = $tmp139.value;
int64_t $tmp145 = $tmp143.value;
bool $tmp146 = $tmp144 == $tmp145;
frost$core$Bit $tmp147 = frost$core$Bit$init$builtin_bit($tmp146);
bool $tmp148 = $tmp147.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
if ($tmp148) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:44
frost$core$Int64 $tmp149 = (frost$core$Int64) {0};
*(&local2) = $tmp149;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:45
frost$core$Int64 $tmp150 = (frost$core$Int64) {0};
ITable* $tmp151 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp151->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp151 = $tmp151->next;
}
$fn153 $tmp152 = $tmp151->methods[0];
frost$core$Int64 $tmp154 = $tmp152(((frost$collections$CollectionView*) param1));
frost$core$Bit $tmp155 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp156 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp150, $tmp154, $tmp155);
frost$core$Int64 $tmp157 = $tmp156.min;
*(&local3) = $tmp157;
frost$core$Int64 $tmp158 = $tmp156.max;
frost$core$Bit $tmp159 = $tmp156.inclusive;
bool $tmp160 = $tmp159.value;
frost$core$Int64 $tmp161 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp162 = $tmp161.value;
frost$core$UInt64 $tmp163 = (frost$core$UInt64) {((uint64_t) $tmp162)};
if ($tmp160) goto block13; else goto block14;
block13:;
int64_t $tmp164 = $tmp157.value;
int64_t $tmp165 = $tmp158.value;
bool $tmp166 = $tmp164 <= $tmp165;
frost$core$Bit $tmp167 = (frost$core$Bit) {$tmp166};
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block10; else goto block11;
block14:;
int64_t $tmp169 = $tmp157.value;
int64_t $tmp170 = $tmp158.value;
bool $tmp171 = $tmp169 < $tmp170;
frost$core$Bit $tmp172 = (frost$core$Bit) {$tmp171};
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:46
frost$core$Int64 $tmp174 = *(&local3);
frost$core$Object* $tmp175 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T(param1, $tmp174);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:46:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp176 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp177 = *$tmp176;
frost$core$Bit $tmp178 = frost$core$Bit$init$builtin_bit($tmp177 != NULL);
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp180 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s181, $tmp180);
abort(); // unreachable
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp182 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp183 = *$tmp182;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$Int64 $tmp184 = *(&local3);
frost$core$Object* $tmp185 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp183, $tmp184);
org$frostlang$frostc$Pair* $tmp186 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp175), ((org$frostlang$frostc$Type*) $tmp185));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
org$frostlang$frostc$Pair* $tmp187 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
*(&local4) = $tmp186;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
frost$core$Frost$unref$frost$core$Object$Q($tmp185);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$Frost$unref$frost$core$Object$Q($tmp175);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:47
org$frostlang$frostc$Pair* $tmp188 = *(&local4);
frost$core$Bit $tmp189 = frost$core$Bit$init$builtin_bit($tmp188 == NULL);
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:48
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Pair* $tmp191 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:50
frost$core$Int64 $tmp192 = *(&local2);
org$frostlang$frostc$Pair* $tmp193 = *(&local4);
frost$core$Object** $tmp194 = &$tmp193->second;
frost$core$Object* $tmp195 = *$tmp194;
int64_t $tmp196 = $tmp192.value;
int64_t $tmp197 = ((frost$core$Int64$wrapper*) $tmp195)->value.value;
int64_t $tmp198 = $tmp196 + $tmp197;
frost$core$Int64 $tmp199 = (frost$core$Int64) {$tmp198};
*(&local2) = $tmp199;
org$frostlang$frostc$Pair* $tmp200 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Int64 $tmp201 = *(&local3);
int64_t $tmp202 = $tmp158.value;
int64_t $tmp203 = $tmp201.value;
int64_t $tmp204 = $tmp202 - $tmp203;
frost$core$Int64 $tmp205 = (frost$core$Int64) {$tmp204};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp206 = $tmp205.value;
frost$core$UInt64 $tmp207 = (frost$core$UInt64) {((uint64_t) $tmp206)};
if ($tmp160) goto block22; else goto block23;
block22:;
uint64_t $tmp208 = $tmp207.value;
uint64_t $tmp209 = $tmp163.value;
bool $tmp210 = $tmp208 >= $tmp209;
frost$core$Bit $tmp211 = (frost$core$Bit) {$tmp210};
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block20; else goto block11;
block23:;
uint64_t $tmp213 = $tmp207.value;
uint64_t $tmp214 = $tmp163.value;
bool $tmp215 = $tmp213 > $tmp214;
frost$core$Bit $tmp216 = (frost$core$Bit) {$tmp215};
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block20; else goto block11;
block20:;
int64_t $tmp218 = $tmp201.value;
int64_t $tmp219 = $tmp161.value;
int64_t $tmp220 = $tmp218 + $tmp219;
frost$core$Int64 $tmp221 = (frost$core$Int64) {$tmp220};
*(&local3) = $tmp221;
goto block10;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:52
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp222 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Int64 $tmp223 = *(&local2);
frost$core$Int64$wrapper* $tmp224;
$tmp224 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp224->value = $tmp223;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp222, ((frost$core$Object*) param2), ((frost$core$Object*) $tmp224));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
return $tmp222;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:54
frost$collections$CollectionView* $tmp225 = org$frostlang$frostc$expression$Tuple$possibleTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param1);
*(&local5) = ((frost$collections$CollectionView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$collections$CollectionView* $tmp226 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
*(&local5) = $tmp225;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:55
frost$collections$CollectionView* $tmp227 = *(&local5);
frost$core$Bit $tmp228 = frost$core$Bit$init$builtin_bit($tmp227 == NULL);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:56
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$CollectionView* $tmp230 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
*(&local5) = ((frost$collections$CollectionView*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:58
frost$collections$CollectionView* $tmp231 = *(&local5);
ITable* $tmp232 = $tmp231->$class->itable;
while ($tmp232->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp232 = $tmp232->next;
}
$fn234 $tmp233 = $tmp232->methods[0];
frost$core$Int64 $tmp235 = $tmp233($tmp231);
frost$core$Int64 $tmp236 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Tuple.frost:58:27
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp237 = $tmp235.value;
int64_t $tmp238 = $tmp236.value;
bool $tmp239 = $tmp237 == $tmp238;
frost$core$Bit $tmp240 = frost$core$Bit$init$builtin_bit($tmp239);
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp242 = (frost$core$Int64) {58};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s243, $tmp242);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:59
frost$collections$CollectionView* $tmp244 = *(&local5);
ITable* $tmp245 = ((frost$collections$Iterable*) $tmp244)->$class->itable;
while ($tmp245->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp245 = $tmp245->next;
}
$fn247 $tmp246 = $tmp245->methods[0];
frost$collections$Iterator* $tmp248 = $tmp246(((frost$collections$Iterable*) $tmp244));
ITable* $tmp249 = $tmp248->$class->itable;
while ($tmp249->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp249 = $tmp249->next;
}
$fn251 $tmp250 = $tmp249->methods[1];
frost$core$Object* $tmp252 = $tmp250($tmp248);
org$frostlang$frostc$Pair* $tmp253 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, ((org$frostlang$frostc$Type*) $tmp252), param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
frost$core$Frost$unref$frost$core$Object$Q($tmp252);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
frost$collections$CollectionView* $tmp254 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
*(&local5) = ((frost$collections$CollectionView*) NULL);
return $tmp253;

}
org$frostlang$frostc$Type* org$frostlang$frostc$expression$Tuple$$anonymous3$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(org$frostlang$frostc$ASTNode* param0) {

frost$collections$Array* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:76
// begin inline call to method org.frostlang.frostc.Type.Any():org.frostlang.frostc.Type from Tuple.frost:76:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:273
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp255 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp255);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
frost$collections$Array* $tmp256 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local0) = $tmp255;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:274
frost$collections$Array* $tmp257 = *(&local0);
org$frostlang$frostc$Type* $tmp258 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp257, ((frost$core$Object*) $tmp258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:275
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp259 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp260 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp261 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp260);
org$frostlang$frostc$Position $tmp262 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp263 = *(&local0);
frost$core$Bit $tmp264 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp259, &$s265, $tmp261, $tmp262, ((frost$collections$ListView*) $tmp263), $tmp264);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$collections$Array* $tmp266 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
return $tmp259;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Tuple$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$FixedArray* param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

org$frostlang$frostc$Type* local0 = NULL;
frost$core$Bit local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$IR$Value* local6 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:65
frost$core$Int64* $tmp267 = &param3->$rawValue;
frost$core$Int64 $tmp268 = *$tmp267;
frost$core$Int64 $tmp269 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Tuple.frost:66:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp270 = $tmp268.value;
int64_t $tmp271 = $tmp269.value;
bool $tmp272 = $tmp270 == $tmp271;
frost$core$Bit $tmp273 = frost$core$Bit$init$builtin_bit($tmp272);
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Type** $tmp275 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp276 = *$tmp275;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
org$frostlang$frostc$Type* $tmp277 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
*(&local0) = $tmp276;
frost$core$Bit* $tmp278 = (frost$core$Bit*) (param3->$data + 8);
frost$core$Bit $tmp279 = *$tmp278;
*(&local1) = $tmp279;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:67
org$frostlang$frostc$Type* $tmp280 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_isTuple():frost.core.Bit from Tuple.frost:67:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:603
org$frostlang$frostc$Type$Kind* $tmp281 = &$tmp280->typeKind;
org$frostlang$frostc$Type$Kind $tmp282 = *$tmp281;
org$frostlang$frostc$Type$Kind$wrapper* $tmp283;
$tmp283 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp283->value = $tmp282;
frost$core$Int64 $tmp284 = (frost$core$Int64) {10};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:603:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp285 = &(&local3)->$rawValue;
*$tmp285 = $tmp284;
org$frostlang$frostc$Type$Kind $tmp286 = *(&local3);
*(&local2) = $tmp286;
org$frostlang$frostc$Type$Kind $tmp287 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp288;
$tmp288 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp288->value = $tmp287;
ITable* $tmp289 = ((frost$core$Equatable*) $tmp283)->$class->itable;
while ($tmp289->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp289 = $tmp289->next;
}
$fn291 $tmp290 = $tmp289->methods[0];
frost$core$Bit $tmp292 = $tmp290(((frost$core$Equatable*) $tmp283), ((frost$core$Equatable*) $tmp288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp288)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp283)));
bool $tmp293 = $tmp292.value;
if ($tmp293) goto block6; else goto block5;
block6:;
org$frostlang$frostc$Type* $tmp294 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:67:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp295 = &$tmp294->_subtypes;
org$frostlang$frostc$FixedArray* $tmp296 = *$tmp295;
frost$core$Bit $tmp297 = frost$core$Bit$init$builtin_bit($tmp296 != NULL);
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp299 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s300, $tmp299);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp301 = &$tmp294->_subtypes;
org$frostlang$frostc$FixedArray* $tmp302 = *$tmp301;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
ITable* $tmp303 = ((frost$collections$CollectionView*) $tmp302)->$class->itable;
while ($tmp303->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp303 = $tmp303->next;
}
$fn305 $tmp304 = $tmp303->methods[0];
frost$core$Int64 $tmp306 = $tmp304(((frost$collections$CollectionView*) $tmp302));
ITable* $tmp307 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp307->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp307 = $tmp307->next;
}
$fn309 $tmp308 = $tmp307->methods[0];
frost$core$Int64 $tmp310 = $tmp308(((frost$collections$CollectionView*) param2));
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Tuple.frost:67:49
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp311 = $tmp306.value;
int64_t $tmp312 = $tmp310.value;
bool $tmp313 = $tmp311 == $tmp312;
frost$core$Bit $tmp314 = frost$core$Bit$init$builtin_bit($tmp313);
bool $tmp315 = $tmp314.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
if ($tmp315) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:68
org$frostlang$frostc$Type* $tmp316 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp317 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp316);
org$frostlang$frostc$Type** $tmp318 = &$tmp317->type;
org$frostlang$frostc$Type* $tmp319 = *$tmp318;
org$frostlang$frostc$Type* $tmp320 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:68:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp321 = &$tmp320->_subtypes;
org$frostlang$frostc$FixedArray* $tmp322 = *$tmp321;
frost$core$Bit $tmp323 = frost$core$Bit$init$builtin_bit($tmp322 != NULL);
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp325 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s326, $tmp325);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp327 = &$tmp320->_subtypes;
org$frostlang$frostc$FixedArray* $tmp328 = *$tmp327;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
org$frostlang$frostc$Type* $tmp329 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp319, ((frost$collections$ListView*) $tmp328));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
org$frostlang$frostc$Type* $tmp330 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
*(&local4) = $tmp329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:69
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp331 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp332 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp333 = *(&local4);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp331, $tmp332, $tmp333);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp334 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp335 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp334, $tmp335);
org$frostlang$frostc$IR$Value* $tmp336 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp331, ((frost$collections$ListView*) param2), $tmp334);
org$frostlang$frostc$Type* $tmp337 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp338 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp336, $tmp337);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
org$frostlang$frostc$Type* $tmp339 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp340 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp338;
block5:;
org$frostlang$frostc$Type* $tmp341 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:74
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp342 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp343 = (frost$core$Int64) {43};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp342, $tmp343, param1, param2);
org$frostlang$frostc$Type* $tmp344 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp342);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
org$frostlang$frostc$Type* $tmp345 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
*(&local5) = $tmp344;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:75
org$frostlang$frostc$Type* $tmp346 = *(&local5);
frost$core$Bit $tmp347 = frost$core$Bit$init$builtin_bit($tmp346 == NULL);
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:76
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp350 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Tuple.frost:76:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp351 = &$tmp350->pointer;
*$tmp351 = ((frost$core$Int8*) org$frostlang$frostc$expression$Tuple$$anonymous3$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp352 = &$tmp350->target;
frost$core$Immutable* $tmp353 = *$tmp352;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
frost$core$Immutable** $tmp354 = &$tmp350->target;
*$tmp354 = ((frost$core$Immutable*) NULL);
ITable* $tmp355 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp355->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp355 = $tmp355->next;
}
$fn357 $tmp356 = $tmp355->methods[8];
frost$collections$Array* $tmp358 = $tmp356(((frost$collections$CollectionView*) param2), ((frost$core$MutableMethod*) $tmp350));
org$frostlang$frostc$Type* $tmp359 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((frost$collections$ListView*) $tmp358));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
org$frostlang$frostc$Type* $tmp360 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local5) = $tmp359;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:78
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp361 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp362 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp363 = *(&local5);
frost$core$Bit $tmp364 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp361, $tmp362, $tmp363, $tmp364);
org$frostlang$frostc$IR$Value* $tmp365 = org$frostlang$frostc$expression$Tuple$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp361);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
org$frostlang$frostc$IR$Value* $tmp366 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
*(&local6) = $tmp365;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:79
org$frostlang$frostc$IR$Value* $tmp367 = *(&local6);
frost$core$Bit $tmp368 = frost$core$Bit$init$builtin_bit($tmp367 == NULL);
bool $tmp369 = $tmp368.value;
if ($tmp369) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:80
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp370 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp371 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:82
org$frostlang$frostc$IR$Value* $tmp372 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp373 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp372, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
org$frostlang$frostc$IR$Value* $tmp374 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp375 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return $tmp373;

}
void org$frostlang$frostc$expression$Tuple$init(org$frostlang$frostc$expression$Tuple* param0) {

return;

}
void org$frostlang$frostc$expression$Tuple$cleanup(org$frostlang$frostc$expression$Tuple* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:12
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

