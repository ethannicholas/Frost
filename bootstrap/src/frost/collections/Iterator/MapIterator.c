#include "frost/collections/Iterator/MapIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"

__attribute__((weak)) frost$core$Object* frost$collections$Iterator$MapIterator$next$R$frost$collections$Iterator$MapIterator$U$shim(frost$collections$Iterator$MapIterator* p0) {
    frost$core$Object* result = frost$collections$Iterator$MapIterator$next$R$frost$collections$Iterator$MapIterator$U(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$Iterator$MapIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$Iterator$MapIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$MapIterator$next$R$frost$collections$Iterator$MapIterator$U$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$Iterator$MapIterator$class_type frost$collections$Iterator$MapIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Iterator$MapIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$Iterator$MapIterator$cleanup, frost$collections$Iterator$MapIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$MapIterator$next$R$frost$collections$Iterator$MapIterator$U$shim} };

typedef frost$core$Bit (*$fn12)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn16)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn31)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn38)(frost$core$Object*);
typedef frost$core$Object* (*$fn40)(frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4d\x61\x70\x49\x74\x65\x72\x61\x74\x6f\x72", 38, 2027583847227295508, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4d\x61\x70\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4d\x61\x70\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x55", 118, -4698360555464701590, NULL };

void frost$collections$Iterator$MapIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$MapIterator$T$GT$$LPfrost$collections$Iterator$MapIterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$MapIterator$U$RP(frost$collections$Iterator$MapIterator* param0, frost$collections$Iterator* param1, frost$core$MutableMethod* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:120
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$Iterator** $tmp2 = &param0->base;
frost$collections$Iterator* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$collections$Iterator** $tmp4 = &param0->base;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:121
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$MutableMethod** $tmp5 = &param0->map;
frost$core$MutableMethod* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$core$MutableMethod** $tmp7 = &param0->map;
*$tmp7 = param2;
return;

}
frost$core$Bit frost$collections$Iterator$MapIterator$get_done$R$frost$core$Bit(frost$collections$Iterator$MapIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:126
frost$collections$Iterator** $tmp8 = &param0->base;
frost$collections$Iterator* $tmp9 = *$tmp8;
ITable* $tmp10 = $tmp9->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[0];
frost$core$Bit $tmp13 = $tmp11($tmp9);
return $tmp13;

}
frost$core$Object* frost$collections$Iterator$MapIterator$next$R$frost$collections$Iterator$MapIterator$U(frost$collections$Iterator$MapIterator* param0) {

frost$core$Object* local0 = NULL;
ITable* $tmp14 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp14 = $tmp14->next;
}
$fn16 $tmp15 = $tmp14->methods[0];
frost$core$Bit $tmp17 = $tmp15(((frost$collections$Iterator*) param0));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp18 = $tmp17.value;
bool $tmp19 = !$tmp18;
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19};
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block1; else goto block2;
block2:;
frost$core$Int $tmp22 = (frost$core$Int) {130u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s23, $tmp22, &$s24);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:131
frost$core$MutableMethod** $tmp25 = &param0->map;
frost$core$MutableMethod* $tmp26 = *$tmp25;
frost$collections$Iterator** $tmp27 = &param0->base;
frost$collections$Iterator* $tmp28 = *$tmp27;
ITable* $tmp29 = $tmp28->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp29 = $tmp29->next;
}
$fn31 $tmp30 = $tmp29->methods[1];
frost$core$Object* $tmp32 = $tmp30($tmp28);
frost$core$Int8** $tmp33 = &$tmp26->pointer;
frost$core$Int8* $tmp34 = *$tmp33;
frost$core$Object** $tmp35 = &$tmp26->target;
frost$core$Object* $tmp36 = *$tmp35;
bool $tmp37 = $tmp36 != ((frost$core$Object*) NULL);
if ($tmp37) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp39 = (($fn38) $tmp34)($tmp32);
*(&local0) = $tmp39;
goto block6;
block4:;
frost$core$Object* $tmp41 = (($fn40) $tmp34)($tmp36, $tmp32);
*(&local0) = $tmp41;
goto block6;
block6:;
frost$core$Object* $tmp42 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp42);
frost$core$Frost$unref$frost$core$Object$Q($tmp42);
frost$core$Frost$unref$frost$core$Object$Q($tmp32);
return $tmp42;

}
void frost$collections$Iterator$MapIterator$cleanup(frost$collections$Iterator$MapIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:114
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Iterator** $tmp43 = &param0->base;
frost$collections$Iterator* $tmp44 = *$tmp43;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$core$MutableMethod** $tmp45 = &param0->map;
frost$core$MutableMethod* $tmp46 = *$tmp45;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
return;

}

