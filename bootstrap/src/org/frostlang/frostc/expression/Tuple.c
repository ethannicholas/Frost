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

typedef frost$core$Int (*$fn19)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Position (*$fn29)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn32)(frost$core$Object*);
typedef frost$core$String* (*$fn39)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn53)(org$frostlang$frostc$expression$Tuple$_Closure2*, org$frostlang$frostc$Type*, org$frostlang$frostc$Type*);
typedef frost$core$Object* (*$fn61)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn67)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn71)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn76)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn107)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn114)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn118)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn129)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn200)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn213)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn217)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn245)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn253)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn257)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn297)(org$frostlang$frostc$expression$Tuple$_Closure4*, org$frostlang$frostc$ASTNode*);
typedef frost$collections$Array* (*$fn305)(frost$collections$CollectionView*, frost$core$MutableMethod*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x54\x75\x70\x6c\x65", 37, -2192914147627931606, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x69\x6e\x64\x65\x78\x20\x27", 13, -2835249030150575212, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x69\x73\x20\x6f\x75\x74\x20\x6f\x66\x20\x62\x6f\x75\x6e\x64\x73\x20\x66\x6f\x72\x20\x27", 24, -5834575264800361726, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x75\x70\x6c\x65\x2e\x66\x72\x6f\x73\x74", 11, 4603043468144271925, NULL };

org$frostlang$frostc$Type* org$frostlang$frostc$expression$Tuple$indexType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$ASTNode* param2) {

frost$core$UInt64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:15
frost$core$Int* $tmp2 = &param2->$rawValue;
frost$core$Int $tmp3 = *$tmp2;
frost$core$Int $tmp4 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:16:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:17
frost$core$UInt64 $tmp14 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:17:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp15 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp16 = *$tmp15;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
ITable* $tmp17 = ((frost$collections$CollectionView*) $tmp16)->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp17 = $tmp17->next;
}
$fn19 $tmp18 = $tmp17->methods[0];
frost$core$Int $tmp20 = $tmp18(((frost$collections$CollectionView*) $tmp16));
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Tuple.frost:17:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
int64_t $tmp21 = $tmp20.value;
frost$core$UInt64 $tmp22 = (frost$core$UInt64) {((uint64_t) $tmp21)};
uint64_t $tmp23 = $tmp14.value;
uint64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 > $tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25};
bool $tmp27 = $tmp26.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
if ($tmp27) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:18
$fn29 $tmp28 = ($fn29) param2->$class->vtable[2];
org$frostlang$frostc$Position $tmp30 = $tmp28(param2);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple.frost:19:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn32 $tmp31 = ($fn32) ((frost$core$Object*) param2)->$class->vtable[0];
frost$core$String* $tmp33 = $tmp31(((frost$core$Object*) param2));
frost$core$String* $tmp34 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s35, $tmp33);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$String* $tmp36 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp34, &$s37);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Tuple.frost:19:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn39 $tmp38 = ($fn39) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp40 = $tmp38(((frost$core$Object*) param1));
frost$core$String* $tmp41 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp36, $tmp40);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
frost$core$String* $tmp42 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp41, &$s43);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp30, $tmp42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:21
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:21:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp44 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp45 = *$tmp44;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
frost$core$UInt64 $tmp46 = *(&local0);
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from Tuple.frost:21:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
uint64_t $tmp47 = $tmp46.value;
frost$core$Int $tmp48 = (frost$core$Int) {((int64_t) $tmp47)};
frost$core$Object* $tmp49 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp45, $tmp48);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp49)));
frost$core$Frost$unref$frost$core$Object$Q($tmp49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
return ((org$frostlang$frostc$Type*) $tmp49);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:24
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:24:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp50 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp51 = *$tmp50;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$expression$Tuple$_Closure2));
org$frostlang$frostc$expression$Tuple$_Closure2* $tmp52 = (org$frostlang$frostc$expression$Tuple$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Tuple$_Closure2$class);
org$frostlang$frostc$expression$Tuple$_Closure2$init$org$frostlang$frostc$Compiler($tmp52, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp54 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Tuple.frost:24:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp55 = &$tmp54->pointer;
*$tmp55 = ((frost$core$Int8*) org$frostlang$frostc$expression$Tuple$_Closure2$$anonymous1$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Object** $tmp56 = &$tmp54->target;
frost$core$Object* $tmp57 = *$tmp56;
frost$core$Frost$unref$frost$core$Object$Q($tmp57);
frost$core$Object** $tmp58 = &$tmp54->target;
*$tmp58 = ((frost$core$Object*) $tmp52);
ITable* $tmp59 = ((frost$collections$CollectionView*) $tmp51)->$class->itable;
while ($tmp59->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp59 = $tmp59->next;
}
$fn61 $tmp60 = $tmp59->methods[4];
frost$core$Object* $tmp62 = $tmp60(((frost$collections$CollectionView*) $tmp51), $tmp54);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp62)));
frost$core$Frost$unref$frost$core$Object$Q($tmp62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
return ((org$frostlang$frostc$Type*) $tmp62);

}
frost$collections$CollectionView* org$frostlang$frostc$expression$Tuple$possibleTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$FixedArray* param1) {

frost$collections$Array* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:29
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp63 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp63);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$collections$Array* $tmp64 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
*(&local0) = $tmp63;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:30
ITable* $tmp65 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp65->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp65 = $tmp65->next;
}
$fn67 $tmp66 = $tmp65->methods[0];
frost$collections$Iterator* $tmp68 = $tmp66(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp69 = $tmp68->$class->itable;
while ($tmp69->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp69 = $tmp69->next;
}
$fn71 $tmp70 = $tmp69->methods[0];
frost$core$Bit $tmp72 = $tmp70($tmp68);
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block3; else goto block2;
block2:;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp74 = $tmp68->$class->itable;
while ($tmp74->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp74 = $tmp74->next;
}
$fn76 $tmp75 = $tmp74->methods[1];
frost$core$Object* $tmp77 = $tmp75($tmp68);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp77)));
org$frostlang$frostc$ASTNode* $tmp78 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local1) = ((org$frostlang$frostc$ASTNode*) $tmp77);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:31
org$frostlang$frostc$ASTNode* $tmp79 = *(&local1);
org$frostlang$frostc$Type* $tmp80 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp79);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
org$frostlang$frostc$Type* $tmp81 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local2) = $tmp80;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:32
org$frostlang$frostc$Type* $tmp82 = *(&local2);
frost$core$Bit $tmp83 = (frost$core$Bit) {$tmp82 == NULL};
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) NULL)));
org$frostlang$frostc$Type* $tmp85 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp77);
org$frostlang$frostc$ASTNode* $tmp86 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$collections$Array* $tmp87 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$CollectionView*) NULL);
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:35
frost$collections$Array* $tmp88 = *(&local0);
org$frostlang$frostc$Type* $tmp89 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp88, ((frost$core$Object*) $tmp89));
org$frostlang$frostc$Type* $tmp90 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp77);
org$frostlang$frostc$ASTNode* $tmp91 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:37
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp92 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp93 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp92, $tmp93);
frost$collections$Array* $tmp94 = *(&local0);
org$frostlang$frostc$Type* $tmp95 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((frost$collections$ListView*) $tmp94));
frost$collections$Array$add$frost$collections$Array$T($tmp92, ((frost$core$Object*) $tmp95));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp92)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$collections$Array* $tmp96 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$CollectionView*) $tmp92);

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Tuple$coercionCost$org$frostlang$frostc$Compiler$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$FixedArray* param1, org$frostlang$frostc$Type* param2) {

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
frost$core$Int local2;
frost$core$Int local3;
org$frostlang$frostc$Pair* local4 = NULL;
frost$collections$CollectionView* local5 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:43
org$frostlang$frostc$Type$Kind* $tmp97 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp98 = *$tmp97;
org$frostlang$frostc$Type$Kind$wrapper* $tmp99;
$tmp99 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp99->value = $tmp98;
frost$core$Int $tmp100 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Tuple.frost:43:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp101 = &(&local1)->$rawValue;
*$tmp101 = $tmp100;
org$frostlang$frostc$Type$Kind $tmp102 = *(&local1);
*(&local0) = $tmp102;
org$frostlang$frostc$Type$Kind $tmp103 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp104;
$tmp104 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp104->value = $tmp103;
ITable* $tmp105 = ((frost$core$Equatable*) $tmp99)->$class->itable;
while ($tmp105->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp105 = $tmp105->next;
}
$fn107 $tmp106 = $tmp105->methods[0];
frost$core$Bit $tmp108 = $tmp106(((frost$core$Equatable*) $tmp99), ((frost$core$Equatable*) $tmp104));
bool $tmp109 = $tmp108.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp104)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp99)));
if ($tmp109) goto block3; else goto block2;
block3:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:43:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp110 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp111 = *$tmp110;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
ITable* $tmp112 = ((frost$collections$CollectionView*) $tmp111)->$class->itable;
while ($tmp112->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp112 = $tmp112->next;
}
$fn114 $tmp113 = $tmp112->methods[0];
frost$core$Int $tmp115 = $tmp113(((frost$collections$CollectionView*) $tmp111));
ITable* $tmp116 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp116->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp116 = $tmp116->next;
}
$fn118 $tmp117 = $tmp116->methods[0];
frost$core$Int $tmp119 = $tmp117(((frost$collections$CollectionView*) param1));
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:43:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp120 = $tmp115.value;
int64_t $tmp121 = $tmp119.value;
bool $tmp122 = $tmp120 == $tmp121;
frost$core$Bit $tmp123 = (frost$core$Bit) {$tmp122};
bool $tmp124 = $tmp123.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
if ($tmp124) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:44
frost$core$Int $tmp125 = (frost$core$Int) {0u};
*(&local2) = $tmp125;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:45
frost$core$Int $tmp126 = (frost$core$Int) {0u};
ITable* $tmp127 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp127->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp127 = $tmp127->next;
}
$fn129 $tmp128 = $tmp127->methods[0];
frost$core$Int $tmp130 = $tmp128(((frost$collections$CollectionView*) param1));
frost$core$Bit $tmp131 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp132 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp126, $tmp130, $tmp131);
frost$core$Int $tmp133 = $tmp132.min;
*(&local3) = $tmp133;
frost$core$Int $tmp134 = $tmp132.max;
frost$core$Bit $tmp135 = $tmp132.inclusive;
bool $tmp136 = $tmp135.value;
frost$core$Int $tmp137 = (frost$core$Int) {1u};
if ($tmp136) goto block10; else goto block11;
block10:;
int64_t $tmp138 = $tmp133.value;
int64_t $tmp139 = $tmp134.value;
bool $tmp140 = $tmp138 <= $tmp139;
frost$core$Bit $tmp141 = (frost$core$Bit) {$tmp140};
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block7; else goto block8;
block11:;
int64_t $tmp143 = $tmp133.value;
int64_t $tmp144 = $tmp134.value;
bool $tmp145 = $tmp143 < $tmp144;
frost$core$Bit $tmp146 = (frost$core$Bit) {$tmp145};
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:46
frost$core$Int $tmp148 = *(&local3);
frost$core$Object* $tmp149 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(param1, $tmp148);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:46:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp150 = &param2->_subtypes;
org$frostlang$frostc$FixedArray* $tmp151 = *$tmp150;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
frost$core$Int $tmp152 = *(&local3);
frost$core$Object* $tmp153 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp151, $tmp152);
org$frostlang$frostc$Pair* $tmp154 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp149), ((org$frostlang$frostc$Type*) $tmp153));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
org$frostlang$frostc$Pair* $tmp155 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local4) = $tmp154;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q($tmp153);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
frost$core$Frost$unref$frost$core$Object$Q($tmp149);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:47
org$frostlang$frostc$Pair* $tmp156 = *(&local4);
frost$core$Bit $tmp157 = (frost$core$Bit) {$tmp156 == NULL};
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:48
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
org$frostlang$frostc$Pair* $tmp159 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:50
frost$core$Int $tmp160 = *(&local2);
org$frostlang$frostc$Pair* $tmp161 = *(&local4);
frost$core$Object** $tmp162 = &$tmp161->second;
frost$core$Object* $tmp163 = *$tmp162;
int64_t $tmp164 = $tmp160.value;
int64_t $tmp165 = ((frost$core$Int$wrapper*) $tmp163)->value.value;
int64_t $tmp166 = $tmp164 + $tmp165;
frost$core$Int $tmp167 = (frost$core$Int) {$tmp166};
*(&local2) = $tmp167;
org$frostlang$frostc$Pair* $tmp168 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Int $tmp169 = *(&local3);
int64_t $tmp170 = $tmp134.value;
int64_t $tmp171 = $tmp169.value;
int64_t $tmp172 = $tmp170 - $tmp171;
frost$core$Int $tmp173 = (frost$core$Int) {$tmp172};
if ($tmp136) goto block16; else goto block17;
block16:;
int64_t $tmp174 = $tmp173.value;
int64_t $tmp175 = $tmp137.value;
bool $tmp176 = $tmp174 >= $tmp175;
frost$core$Bit $tmp177 = (frost$core$Bit) {$tmp176};
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block15; else goto block8;
block17:;
int64_t $tmp179 = $tmp173.value;
int64_t $tmp180 = $tmp137.value;
bool $tmp181 = $tmp179 > $tmp180;
frost$core$Bit $tmp182 = (frost$core$Bit) {$tmp181};
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block15; else goto block8;
block15:;
int64_t $tmp184 = $tmp169.value;
int64_t $tmp185 = $tmp137.value;
int64_t $tmp186 = $tmp184 + $tmp185;
frost$core$Int $tmp187 = (frost$core$Int) {$tmp186};
*(&local3) = $tmp187;
goto block7;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:52
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp188 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Int $tmp189 = *(&local2);
frost$core$Int$wrapper* $tmp190;
$tmp190 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp190->value = $tmp189;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp188, ((frost$core$Object*) param2), ((frost$core$Object*) $tmp190));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
return $tmp188;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:54
frost$collections$CollectionView* $tmp191 = org$frostlang$frostc$expression$Tuple$possibleTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(param0, param1);
*(&local5) = ((frost$collections$CollectionView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
frost$collections$CollectionView* $tmp192 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
*(&local5) = $tmp191;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:55
frost$collections$CollectionView* $tmp193 = *(&local5);
frost$core$Bit $tmp194 = (frost$core$Bit) {$tmp193 == NULL};
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:56
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$CollectionView* $tmp196 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local5) = ((frost$collections$CollectionView*) NULL);
return ((org$frostlang$frostc$Pair*) NULL);
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:58
frost$collections$CollectionView* $tmp197 = *(&local5);
ITable* $tmp198 = $tmp197->$class->itable;
while ($tmp198->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp198 = $tmp198->next;
}
$fn200 $tmp199 = $tmp198->methods[0];
frost$core$Int $tmp201 = $tmp199($tmp197);
frost$core$Int $tmp202 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:58:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp203 = $tmp201.value;
int64_t $tmp204 = $tmp202.value;
bool $tmp205 = $tmp203 == $tmp204;
frost$core$Bit $tmp206 = (frost$core$Bit) {$tmp205};
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block21; else goto block22;
block22:;
frost$core$Int $tmp208 = (frost$core$Int) {58u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s209, $tmp208);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:59
frost$collections$CollectionView* $tmp210 = *(&local5);
ITable* $tmp211 = ((frost$collections$Iterable*) $tmp210)->$class->itable;
while ($tmp211->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp211 = $tmp211->next;
}
$fn213 $tmp212 = $tmp211->methods[0];
frost$collections$Iterator* $tmp214 = $tmp212(((frost$collections$Iterable*) $tmp210));
ITable* $tmp215 = $tmp214->$class->itable;
while ($tmp215->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp215 = $tmp215->next;
}
$fn217 $tmp216 = $tmp215->methods[1];
frost$core$Object* $tmp218 = $tmp216($tmp214);
org$frostlang$frostc$Pair* $tmp219 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(param0, ((org$frostlang$frostc$Type*) $tmp218), param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
frost$core$Frost$unref$frost$core$Object$Q($tmp218);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$collections$CollectionView* $tmp220 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
*(&local5) = ((frost$collections$CollectionView*) NULL);
return $tmp219;

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
frost$core$Int* $tmp221 = &param3->$rawValue;
frost$core$Int $tmp222 = *$tmp221;
frost$core$Int $tmp223 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:66:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp224 = $tmp222.value;
int64_t $tmp225 = $tmp223.value;
bool $tmp226 = $tmp224 == $tmp225;
frost$core$Bit $tmp227 = (frost$core$Bit) {$tmp226};
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Type** $tmp229 = (org$frostlang$frostc$Type**) (param3->$data + 0);
org$frostlang$frostc$Type* $tmp230 = *$tmp229;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
org$frostlang$frostc$Type* $tmp231 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local0) = $tmp230;
frost$core$Bit* $tmp232 = (frost$core$Bit*) (param3->$data + 8);
frost$core$Bit $tmp233 = *$tmp232;
*(&local1) = $tmp233;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:67
org$frostlang$frostc$Type* $tmp234 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_isTuple():frost.core.Bit from Tuple.frost:67:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:373
org$frostlang$frostc$Type$Kind* $tmp235 = &$tmp234->typeKind;
org$frostlang$frostc$Type$Kind $tmp236 = *$tmp235;
org$frostlang$frostc$Type$Kind$wrapper* $tmp237;
$tmp237 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp237->value = $tmp236;
frost$core$Int $tmp238 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Type.frost:373:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp239 = &(&local3)->$rawValue;
*$tmp239 = $tmp238;
org$frostlang$frostc$Type$Kind $tmp240 = *(&local3);
*(&local2) = $tmp240;
org$frostlang$frostc$Type$Kind $tmp241 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp242;
$tmp242 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp242->value = $tmp241;
ITable* $tmp243 = ((frost$core$Equatable*) $tmp237)->$class->itable;
while ($tmp243->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp243 = $tmp243->next;
}
$fn245 $tmp244 = $tmp243->methods[0];
frost$core$Bit $tmp246 = $tmp244(((frost$core$Equatable*) $tmp237), ((frost$core$Equatable*) $tmp242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp242)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp237)));
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block6; else goto block5;
block6:;
org$frostlang$frostc$Type* $tmp248 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:67:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp249 = &$tmp248->_subtypes;
org$frostlang$frostc$FixedArray* $tmp250 = *$tmp249;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
ITable* $tmp251 = ((frost$collections$CollectionView*) $tmp250)->$class->itable;
while ($tmp251->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp251 = $tmp251->next;
}
$fn253 $tmp252 = $tmp251->methods[0];
frost$core$Int $tmp254 = $tmp252(((frost$collections$CollectionView*) $tmp250));
ITable* $tmp255 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp255->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp255 = $tmp255->next;
}
$fn257 $tmp256 = $tmp255->methods[0];
frost$core$Int $tmp258 = $tmp256(((frost$collections$CollectionView*) param2));
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Tuple.frost:67:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp259 = $tmp254.value;
int64_t $tmp260 = $tmp258.value;
bool $tmp261 = $tmp259 == $tmp260;
frost$core$Bit $tmp262 = (frost$core$Bit) {$tmp261};
bool $tmp263 = $tmp262.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
if ($tmp263) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:68
org$frostlang$frostc$Type* $tmp264 = *(&local0);
org$frostlang$frostc$ClassDecl* $tmp265 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp264);
org$frostlang$frostc$Type** $tmp266 = &$tmp265->type;
org$frostlang$frostc$Type* $tmp267 = *$tmp266;
org$frostlang$frostc$Type* $tmp268 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Tuple.frost:68:79
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp269 = &$tmp268->_subtypes;
org$frostlang$frostc$FixedArray* $tmp270 = *$tmp269;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
org$frostlang$frostc$Type* $tmp271 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp267, ((frost$collections$ListView*) $tmp270));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
org$frostlang$frostc$Type* $tmp272 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
*(&local4) = $tmp271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:69
org$frostlang$frostc$Type* $tmp273 = *(&local4);
// begin inline call to function org.frostlang.frostc.Compiler.literalType(t:org.frostlang.frostc.Type):org.frostlang.frostc.IR.Value from Tuple.frost:70:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:3685
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp274 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int $tmp275 = (frost$core$Int) {14u};
// begin inline call to method org.frostlang.frostc.Type.ClassLiteral(compiler:org.frostlang.frostc.Compiler, t:org.frostlang.frostc.Type):org.frostlang.frostc.Type from Compiler.frost:3685:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:272
org$frostlang$frostc$Type** $tmp276 = &param0->CLASS_TYPE;
org$frostlang$frostc$Type* $tmp277 = *$tmp276;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp278 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp279 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp278, $tmp279);
frost$collections$Array$add$frost$collections$Array$T($tmp278, ((frost$core$Object*) $tmp273));
org$frostlang$frostc$Type* $tmp280 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp277, ((frost$collections$ListView*) $tmp278));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type($tmp274, $tmp275, $tmp273, $tmp280);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp281 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp282 = (frost$core$Int) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int($tmp281, $tmp282);
org$frostlang$frostc$IR$Value* $tmp283 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp274, ((frost$collections$ListView*) param2), $tmp281);
org$frostlang$frostc$Type* $tmp284 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp285 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp283, $tmp284);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
org$frostlang$frostc$Type* $tmp286 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp287 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp285;
block5:;
org$frostlang$frostc$Type* $tmp288 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:74
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp289 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp290 = (frost$core$Int) {43u};
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp289, $tmp290, param1, param2);
org$frostlang$frostc$Type* $tmp291 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp289);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
org$frostlang$frostc$Type* $tmp292 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
*(&local5) = $tmp291;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:75
org$frostlang$frostc$Type* $tmp293 = *(&local5);
frost$core$Bit $tmp294 = (frost$core$Bit) {$tmp293 == NULL};
bool $tmp295 = $tmp294.value;
if ($tmp295) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:76
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$expression$Tuple$_Closure4));
org$frostlang$frostc$expression$Tuple$_Closure4* $tmp296 = (org$frostlang$frostc$expression$Tuple$_Closure4*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Tuple$_Closure4$class);
org$frostlang$frostc$expression$Tuple$_Closure4$init$org$frostlang$frostc$Compiler($tmp296, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp298 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Tuple.frost:76:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp299 = &$tmp298->pointer;
*$tmp299 = ((frost$core$Int8*) org$frostlang$frostc$expression$Tuple$_Closure4$$anonymous3$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$core$Object** $tmp300 = &$tmp298->target;
frost$core$Object* $tmp301 = *$tmp300;
frost$core$Frost$unref$frost$core$Object$Q($tmp301);
frost$core$Object** $tmp302 = &$tmp298->target;
*$tmp302 = ((frost$core$Object*) $tmp296);
ITable* $tmp303 = ((frost$collections$CollectionView*) param2)->$class->itable;
while ($tmp303->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp303 = $tmp303->next;
}
$fn305 $tmp304 = $tmp303->methods[9];
frost$collections$Array* $tmp306 = $tmp304(((frost$collections$CollectionView*) param2), $tmp298);
org$frostlang$frostc$Type* $tmp307 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((frost$collections$ListView*) $tmp306));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
org$frostlang$frostc$Type* $tmp308 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local5) = $tmp307;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
goto block15;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:78
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp309 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int $tmp310 = (frost$core$Int) {3u};
org$frostlang$frostc$Type* $tmp311 = *(&local5);
frost$core$Bit $tmp312 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int$org$frostlang$frostc$Type$frost$core$Bit($tmp309, $tmp310, $tmp311, $tmp312);
org$frostlang$frostc$IR$Value* $tmp313 = org$frostlang$frostc$expression$Tuple$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp309);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
org$frostlang$frostc$IR$Value* $tmp314 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
*(&local6) = $tmp313;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:79
org$frostlang$frostc$IR$Value* $tmp315 = *(&local6);
frost$core$Bit $tmp316 = (frost$core$Bit) {$tmp315 == NULL};
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:80
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp318 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp319 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:82
org$frostlang$frostc$IR$Value* $tmp320 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp321 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp320, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
org$frostlang$frostc$IR$Value* $tmp322 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp323 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return $tmp321;

}
void org$frostlang$frostc$expression$Tuple$init(org$frostlang$frostc$expression$Tuple* param0) {

return;

}
void org$frostlang$frostc$expression$Tuple$cleanup(org$frostlang$frostc$expression$Tuple* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:12
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

