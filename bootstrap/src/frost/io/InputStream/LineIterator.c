#include "frost/io/InputStream/LineIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/io/InputStream.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"

__attribute__((weak)) frost$core$Object* frost$io$InputStream$LineIterator$next$R$frost$core$String$shim(frost$io$InputStream$LineIterator* p0) {
    frost$core$String* result = frost$io$InputStream$LineIterator$next$R$frost$core$String(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$io$InputStream$LineIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$io$InputStream$LineIterator$get_done$R$frost$core$Bit, frost$io$InputStream$LineIterator$next$R$frost$core$String$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$io$InputStream$LineIterator$class_type frost$io$InputStream$LineIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$io$InputStream$LineIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$io$InputStream$LineIterator$cleanup, frost$io$InputStream$LineIterator$get_done$R$frost$core$Bit, frost$io$InputStream$LineIterator$next$R$frost$core$String$shim, frost$io$InputStream$LineIterator$readNext} };

typedef void (*$fn6)(frost$io$InputStream$LineIterator*);
typedef frost$core$Bit (*$fn12)(frost$collections$Iterator*);
typedef void (*$fn31)(frost$io$InputStream$LineIterator*);
typedef frost$core$String* (*$fn37)(frost$io$InputStream*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x4c\x69\x6e\x65\x49\x74\x65\x72\x61\x74\x6f\x72", 33, 3084010469533370979, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x4c\x69\x6e\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 90, -6433029774062338755, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };

void frost$io$InputStream$LineIterator$init$frost$io$InputStream(frost$io$InputStream$LineIterator* param0, frost$io$InputStream* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/InputStream.frost:22
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$InputStream** $tmp2 = &param0->input;
frost$io$InputStream* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$io$InputStream** $tmp4 = &param0->input;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/InputStream.frost:23
$fn6 $tmp5 = ($fn6) param0->$class->vtable[4];
$tmp5(param0);
return;

}
frost$core$Bit frost$io$InputStream$LineIterator$get_done$R$frost$core$Bit(frost$io$InputStream$LineIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/InputStream.frost:28
frost$core$String** $tmp7 = &param0->_next;
frost$core$String* $tmp8 = *$tmp7;
frost$core$Bit $tmp9 = (frost$core$Bit) {$tmp8 == NULL};
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
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp14 = $tmp13.value;
bool $tmp15 = !$tmp14;
frost$core$Bit $tmp16 = (frost$core$Bit) {$tmp15};
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block1; else goto block2;
block2:;
frost$core$Int $tmp18 = (frost$core$Int) {32u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s19, $tmp18, &$s20);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/InputStream.frost:33
frost$core$String** $tmp21 = &param0->_next;
frost$core$String* $tmp22 = *$tmp21;
frost$core$Bit $tmp23 = (frost$core$Bit) {$tmp22 != NULL};
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block4; else goto block5;
block5:;
frost$core$Int $tmp25 = (frost$core$Int) {33u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s26, $tmp25);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/InputStream.frost:34
frost$core$String** $tmp27 = &param0->_next;
frost$core$String* $tmp28 = *$tmp27;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$String* $tmp29 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local0) = $tmp28;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/InputStream.frost:35
$fn31 $tmp30 = ($fn31) param0->$class->vtable[4];
$tmp30(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/InputStream.frost:36
frost$core$String* $tmp32 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$String* $tmp33 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
*(&local0) = ((frost$core$String*) NULL);
return $tmp32;

}
void frost$io$InputStream$LineIterator$readNext(frost$io$InputStream$LineIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/InputStream.frost:40
frost$io$InputStream** $tmp34 = &param0->input;
frost$io$InputStream* $tmp35 = *$tmp34;
$fn37 $tmp36 = ($fn37) $tmp35->$class->vtable[16];
frost$core$String* $tmp38 = $tmp36($tmp35);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$String** $tmp39 = &param0->_next;
frost$core$String* $tmp40 = *$tmp39;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
frost$core$String** $tmp41 = &param0->_next;
*$tmp41 = $tmp38;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
return;

}
void frost$io$InputStream$LineIterator$cleanup(frost$io$InputStream$LineIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/InputStream.frost:17
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$InputStream** $tmp42 = &param0->input;
frost$io$InputStream* $tmp43 = *$tmp42;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$String** $tmp44 = &param0->_next;
frost$core$String* $tmp45 = *$tmp44;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
return;

}






