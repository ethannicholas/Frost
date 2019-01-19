#include "frost/collections/Iterator/MapIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Object* frost$collections$Iterator$MapIterator$next$R$frost$collections$Iterator$MapIterator$U$shim(frost$collections$Iterator$MapIterator* p0) {
    frost$core$Object* result = frost$collections$Iterator$MapIterator$next$R$frost$collections$Iterator$MapIterator$U(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$Iterator$MapIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$Iterator$MapIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$MapIterator$next$R$frost$collections$Iterator$MapIterator$U$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$Iterator$MapIterator$class_type frost$collections$Iterator$MapIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Iterator$MapIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$Iterator$MapIterator$cleanup, frost$collections$Iterator$MapIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$MapIterator$next$R$frost$collections$Iterator$MapIterator$U$shim} };

typedef frost$core$Bit (*$fn12)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn16)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn29)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn36)(frost$core$Object*);
typedef frost$core$Object* (*$fn38)(frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4d\x61\x70\x49\x74\x65\x72\x61\x74\x6f\x72", 38, -329240748554933878, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4d\x61\x70\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4d\x61\x70\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x55", 118, 3454905302897605748, NULL };

void frost$collections$Iterator$MapIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$MapIterator$T$GT$$LPfrost$collections$Iterator$MapIterator$T$RP$EQ$GT$LPfrost$collections$Iterator$MapIterator$U$RP(frost$collections$Iterator$MapIterator* param0, frost$collections$Iterator* param1, frost$core$MutableMethod* param2) {

// line 120
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$Iterator** $tmp2 = &param0->base;
frost$collections$Iterator* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$collections$Iterator** $tmp4 = &param0->base;
*$tmp4 = param1;
// line 121
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$MutableMethod** $tmp5 = &param0->map;
frost$core$MutableMethod* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$core$MutableMethod** $tmp7 = &param0->map;
*$tmp7 = param2;
return;

}
frost$core$Bit frost$collections$Iterator$MapIterator$get_done$R$frost$core$Bit(frost$collections$Iterator$MapIterator* param0) {

// line 126
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
frost$core$Bit $tmp18 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp17);
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp20 = (frost$core$Int64) {130};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s21, $tmp20, &$s22);
abort(); // unreachable
block1:;
// line 131
frost$core$MutableMethod** $tmp23 = &param0->map;
frost$core$MutableMethod* $tmp24 = *$tmp23;
frost$collections$Iterator** $tmp25 = &param0->base;
frost$collections$Iterator* $tmp26 = *$tmp25;
ITable* $tmp27 = $tmp26->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp27 = $tmp27->next;
}
$fn29 $tmp28 = $tmp27->methods[1];
frost$core$Object* $tmp30 = $tmp28($tmp26);
frost$core$Int8** $tmp31 = &$tmp24->pointer;
frost$core$Int8* $tmp32 = *$tmp31;
frost$core$Object** $tmp33 = &$tmp24->target;
frost$core$Object* $tmp34 = *$tmp33;
bool $tmp35 = $tmp34 != ((frost$core$Object*) NULL);
if ($tmp35) goto block3; else goto block4;
block4:;
frost$core$Object* $tmp37 = (($fn36) $tmp32)($tmp30);
*(&local0) = $tmp37;
goto block5;
block3:;
frost$core$Object* $tmp39 = (($fn38) $tmp32)($tmp34, $tmp30);
*(&local0) = $tmp39;
goto block5;
block5:;
frost$core$Object* $tmp40 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp40);
frost$core$Frost$unref$frost$core$Object$Q($tmp40);
// unreffing REF($35:frost.collections.Iterator.MapIterator.U)
frost$core$Frost$unref$frost$core$Object$Q($tmp30);
// unreffing REF($18:frost.collections.Iterator.T)
return $tmp40;

}
void frost$collections$Iterator$MapIterator$cleanup(frost$collections$Iterator$MapIterator* param0) {

// line 114
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Iterator** $tmp41 = &param0->base;
frost$collections$Iterator* $tmp42 = *$tmp41;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$MutableMethod** $tmp43 = &param0->map;
frost$core$MutableMethod* $tmp44 = *$tmp43;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
return;

}






