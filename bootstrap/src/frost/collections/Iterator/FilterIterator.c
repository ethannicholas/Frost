#include "frost/collections/Iterator/FilterIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Object* frost$collections$Iterator$FilterIterator$next$R$frost$collections$Iterator$FilterIterator$T$shim(frost$collections$Iterator$FilterIterator* p0) {
    frost$core$Object* result = frost$collections$Iterator$FilterIterator$next$R$frost$collections$Iterator$FilterIterator$T(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$Iterator$FilterIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$Iterator$FilterIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$FilterIterator$next$R$frost$collections$Iterator$FilterIterator$T$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$Iterator$FilterIterator$class_type frost$collections$Iterator$FilterIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Iterator$FilterIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$Iterator$FilterIterator$cleanup, frost$collections$Iterator$FilterIterator$getNext, frost$collections$Iterator$FilterIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$FilterIterator$next$R$frost$collections$Iterator$FilterIterator$T$shim} };

typedef void (*$fn9)(frost$collections$Iterator$FilterIterator*);
typedef frost$core$Bit (*$fn14)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn23)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn37)(frost$core$Object*);
typedef frost$core$Bit (*$fn39)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn50)(frost$collections$Iterator*);
typedef void (*$fn63)(frost$collections$Iterator$FilterIterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x46\x69\x6c\x74\x65\x72\x49\x74\x65\x72\x61\x74\x6f\x72", 41, 7745582472907368992, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x46\x69\x6c\x74\x65\x72\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x46\x69\x6c\x74\x65\x72\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 124, -4977101908855608081, NULL };

void frost$collections$Iterator$FilterIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$FilterIterator$T$GT$$LPfrost$collections$Iterator$FilterIterator$T$RP$EQ$GT$LPfrost$core$Bit$RP(frost$collections$Iterator$FilterIterator* param0, frost$collections$Iterator* param1, frost$core$MutableMethod* param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:18
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$Iterator** $tmp2 = &param0->base;
frost$collections$Iterator* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$collections$Iterator** $tmp4 = &param0->base;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:19
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$MutableMethod** $tmp5 = &param0->filter;
frost$core$MutableMethod* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$core$MutableMethod** $tmp7 = &param0->filter;
*$tmp7 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:20
$fn9 $tmp8 = ($fn9) param0->$class->vtable[2];
$tmp8(param0);
return;

}
void frost$collections$Iterator$FilterIterator$getNext(frost$collections$Iterator$FilterIterator* param0) {

frost$core$Bit local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:24
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:25
frost$collections$Iterator** $tmp10 = &param0->base;
frost$collections$Iterator* $tmp11 = *$tmp10;
ITable* $tmp12 = $tmp11->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp12 = $tmp12->next;
}
$fn14 $tmp13 = $tmp12->methods[0];
frost$core$Bit $tmp15 = $tmp13($tmp11);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:26
frost$core$Bit $tmp17 = (frost$core$Bit) {true};
frost$core$Bit* $tmp18 = &param0->_done;
*$tmp18 = $tmp17;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:27
return;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:29
frost$collections$Iterator** $tmp19 = &param0->base;
frost$collections$Iterator* $tmp20 = *$tmp19;
ITable* $tmp21 = $tmp20->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp21 = $tmp21->next;
}
$fn23 $tmp22 = $tmp21->methods[1];
frost$core$Object* $tmp24 = $tmp22($tmp20);
frost$core$Frost$ref$frost$core$Object$Q($tmp24);
frost$core$Object** $tmp25 = &param0->nextValue;
frost$core$Object* $tmp26 = *$tmp25;
frost$core$Frost$unref$frost$core$Object$Q($tmp26);
frost$core$Object** $tmp27 = &param0->nextValue;
*$tmp27 = $tmp24;
frost$core$Frost$unref$frost$core$Object$Q($tmp24);
frost$core$MutableMethod** $tmp28 = &param0->filter;
frost$core$MutableMethod* $tmp29 = *$tmp28;
frost$core$Object** $tmp30 = &param0->nextValue;
frost$core$Object* $tmp31 = *$tmp30;
frost$core$Int8** $tmp32 = &$tmp29->pointer;
frost$core$Int8* $tmp33 = *$tmp32;
frost$core$Object** $tmp34 = &$tmp29->target;
frost$core$Object* $tmp35 = *$tmp34;
bool $tmp36 = $tmp35 != ((frost$core$Object*) NULL);
if ($tmp36) goto block6; else goto block7;
block7:;
frost$core$Bit $tmp38 = (($fn37) $tmp33)($tmp31);
*(&local0) = $tmp38;
goto block8;
block6:;
frost$core$Bit $tmp40 = (($fn39) $tmp33)($tmp35, $tmp31);
*(&local0) = $tmp40;
goto block8;
block8:;
frost$core$Bit $tmp41 = *(&local0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:31:19
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp42 = $tmp41.value;
bool $tmp43 = !$tmp42;
frost$core$Bit $tmp44 = (frost$core$Bit) {$tmp43};
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block1; else goto block3;
block3:;
return;

}
frost$core$Bit frost$collections$Iterator$FilterIterator$get_done$R$frost$core$Bit(frost$collections$Iterator$FilterIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:36
frost$core$Bit* $tmp46 = &param0->_done;
frost$core$Bit $tmp47 = *$tmp46;
return $tmp47;

}
frost$core$Object* frost$collections$Iterator$FilterIterator$next$R$frost$collections$Iterator$FilterIterator$T(frost$collections$Iterator$FilterIterator* param0) {

frost$core$Object* local0 = NULL;
ITable* $tmp48 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp48 = $tmp48->next;
}
$fn50 $tmp49 = $tmp48->methods[0];
frost$core$Bit $tmp51 = $tmp49(((frost$collections$Iterator*) param0));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp52 = $tmp51.value;
bool $tmp53 = !$tmp52;
frost$core$Bit $tmp54 = (frost$core$Bit) {$tmp53};
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp56 = (frost$core$Int64) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s57, $tmp56, &$s58);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:41
frost$core$Object** $tmp59 = &param0->nextValue;
frost$core$Object* $tmp60 = *$tmp59;
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp60);
frost$core$Object* $tmp61 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp61);
*(&local0) = $tmp60;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:42
$fn63 $tmp62 = ($fn63) param0->$class->vtable[2];
$tmp62(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:43
frost$core$Object* $tmp64 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp64);
frost$core$Object* $tmp65 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp65);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp64;

}
void frost$collections$Iterator$FilterIterator$cleanup(frost$collections$Iterator$FilterIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:8
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Iterator** $tmp66 = &param0->base;
frost$collections$Iterator* $tmp67 = *$tmp66;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$MutableMethod** $tmp68 = &param0->filter;
frost$core$MutableMethod* $tmp69 = *$tmp68;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Object** $tmp70 = &param0->nextValue;
frost$core$Object* $tmp71 = *$tmp70;
frost$core$Frost$unref$frost$core$Object$Q($tmp71);
return;

}

