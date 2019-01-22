#include "frost/io/InputStream/LineIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/io/InputStream.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Object* frost$io$InputStream$LineIterator$next$R$frost$core$String$shim(frost$io$InputStream$LineIterator* p0) {
    frost$core$String* result = frost$io$InputStream$LineIterator$next$R$frost$core$String(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$io$InputStream$LineIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$io$InputStream$LineIterator$get_done$R$frost$core$Bit, frost$io$InputStream$LineIterator$next$R$frost$core$String$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$io$InputStream$LineIterator$class_type frost$io$InputStream$LineIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$io$InputStream$LineIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$io$InputStream$LineIterator$cleanup, frost$io$InputStream$LineIterator$get_done$R$frost$core$Bit, frost$io$InputStream$LineIterator$next$R$frost$core$String$shim, frost$io$InputStream$LineIterator$readNext} };

typedef void (*$fn6)(frost$io$InputStream$LineIterator*);
typedef frost$core$Bit (*$fn12)(frost$collections$Iterator*);
typedef void (*$fn29)(frost$io$InputStream$LineIterator*);
typedef frost$core$String* (*$fn35)(frost$io$InputStream*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x4c\x69\x6e\x65\x49\x74\x65\x72\x61\x74\x6f\x72", 33, -7377538898649301905, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x4c\x69\x6e\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 90, 3806645696408232979, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -1756706896302820515, NULL };

void frost$io$InputStream$LineIterator$init$frost$io$InputStream(frost$io$InputStream$LineIterator* param0, frost$io$InputStream* param1) {

// line 22
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$InputStream** $tmp2 = &param0->input;
frost$io$InputStream* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$io$InputStream** $tmp4 = &param0->input;
*$tmp4 = param1;
// line 23
$fn6 $tmp5 = ($fn6) param0->$class->vtable[4];
$tmp5(param0);
return;

}
frost$core$Bit frost$io$InputStream$LineIterator$get_done$R$frost$core$Bit(frost$io$InputStream$LineIterator* param0) {

// line 28
frost$core$String** $tmp7 = &param0->_next;
frost$core$String* $tmp8 = *$tmp7;
frost$core$Bit $tmp9 = frost$core$Bit$init$builtin_bit($tmp8 == NULL);
return $tmp9;

}
frost$core$String* frost$io$InputStream$LineIterator$next$R$frost$core$String(frost$io$InputStream$LineIterator* param0) {

frost$core$String* local0 = NULL;
ITable* $tmp10 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[0];
frost$core$Bit $tmp13 = $tmp11(((frost$collections$Iterator*) param0));
frost$core$Bit $tmp14 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp13);
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp16 = (frost$core$Int64) {32};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s17, $tmp16, &$s18);
abort(); // unreachable
block1:;
// line 33
frost$core$String** $tmp19 = &param0->_next;
frost$core$String* $tmp20 = *$tmp19;
frost$core$Bit $tmp21 = frost$core$Bit$init$builtin_bit($tmp20 != NULL);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp23 = (frost$core$Int64) {33};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s24, $tmp23);
abort(); // unreachable
block3:;
// line 34
frost$core$String** $tmp25 = &param0->_next;
frost$core$String* $tmp26 = *$tmp25;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$String* $tmp27 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
*(&local0) = $tmp26;
// line 35
$fn29 $tmp28 = ($fn29) param0->$class->vtable[4];
$tmp28(param0);
// line 36
frost$core$String* $tmp30 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$String* $tmp31 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
*(&local0) = ((frost$core$String*) NULL);
return $tmp30;

}
void frost$io$InputStream$LineIterator$readNext(frost$io$InputStream$LineIterator* param0) {

// line 40
frost$io$InputStream** $tmp32 = &param0->input;
frost$io$InputStream* $tmp33 = *$tmp32;
$fn35 $tmp34 = ($fn35) $tmp33->$class->vtable[16];
frost$core$String* $tmp36 = $tmp34($tmp33);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$String** $tmp37 = &param0->_next;
frost$core$String* $tmp38 = *$tmp37;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$String** $tmp39 = &param0->_next;
*$tmp39 = $tmp36;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
return;

}
void frost$io$InputStream$LineIterator$cleanup(frost$io$InputStream$LineIterator* param0) {

// line 17
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$InputStream** $tmp40 = &param0->input;
frost$io$InputStream* $tmp41 = *$tmp40;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$String** $tmp42 = &param0->_next;
frost$core$String* $tmp43 = *$tmp42;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
return;

}






