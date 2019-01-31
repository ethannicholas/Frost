#include "frost/threads/Thread.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Method.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"

__attribute__((weak)) void frost$threads$Thread$cleanup$shim(frost$threads$Thread* p0) {
    frost$threads$Thread$cleanup(p0);

}

static frost$core$String $s1;
frost$threads$Thread$class_type frost$threads$Thread$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$threads$Thread$cleanup$shim, frost$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit, frost$threads$Thread$waitFor} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x54\x68\x72\x65\x61\x64", 20, -7818743908223655506, NULL };

void frost$threads$Thread$init(frost$threads$Thread* param0) {

return;

}
frost$threads$Thread* frost$threads$Thread$start$$LP$RP$EQ$AM$GT$ST$LP$RP$R$frost$threads$Thread(frost$core$Method* param0) {

frost$threads$Thread* local0 = NULL;
// line 50
FROST_ASSERT(24 == sizeof(frost$threads$Thread));
frost$threads$Thread* $tmp2 = (frost$threads$Thread*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$Thread$class);
frost$threads$Thread$init($tmp2);
*(&local0) = ((frost$threads$Thread*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$threads$Thread* $tmp3 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
*(&local0) = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// line 51
frost$threads$Thread* $tmp4 = *(&local0);
frost$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit($tmp4, ((frost$core$MutableMethod*) param0), true);
// line 52
frost$threads$Thread* $tmp5 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$threads$Thread* $tmp6 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
*(&local0) = ((frost$threads$Thread*) NULL);
return $tmp5;

}
frost$threads$Thread* frost$threads$Thread$start$$LP$RP$EQ$AM$GT$ST$LP$RP$frost$core$Bit$R$frost$threads$Thread(frost$core$Method* param0, frost$core$Bit param1) {

frost$threads$Thread* local0 = NULL;
// line 57
FROST_ASSERT(24 == sizeof(frost$threads$Thread));
frost$threads$Thread* $tmp7 = (frost$threads$Thread*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$Thread$class);
frost$threads$Thread$init($tmp7);
*(&local0) = ((frost$threads$Thread*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$threads$Thread* $tmp8 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
*(&local0) = $tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
// line 58
frost$threads$Thread* $tmp9 = *(&local0);
bool $tmp10 = param1.value;
frost$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit($tmp9, ((frost$core$MutableMethod*) param0), $tmp10);
// line 59
frost$threads$Thread* $tmp11 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$threads$Thread* $tmp12 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
*(&local0) = ((frost$threads$Thread*) NULL);
return $tmp11;

}
frost$threads$Thread* frost$threads$Thread$unsafeStart$$LP$RP$EQ$AM$GT$LP$RP$R$frost$threads$Thread(frost$core$MutableMethod* param0) {

frost$threads$Thread* local0 = NULL;
// line 64
FROST_ASSERT(24 == sizeof(frost$threads$Thread));
frost$threads$Thread* $tmp13 = (frost$threads$Thread*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$Thread$class);
frost$threads$Thread$init($tmp13);
*(&local0) = ((frost$threads$Thread*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$threads$Thread* $tmp14 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
*(&local0) = $tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// line 65
frost$threads$Thread* $tmp15 = *(&local0);
frost$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit($tmp15, param0, true);
// line 66
frost$threads$Thread* $tmp16 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$threads$Thread* $tmp17 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
*(&local0) = ((frost$threads$Thread*) NULL);
return $tmp16;

}
frost$threads$Thread* frost$threads$Thread$unsafeStart$$LP$RP$EQ$AM$GT$LP$RP$frost$core$Bit$R$frost$threads$Thread(frost$core$MutableMethod* param0, frost$core$Bit param1) {

frost$threads$Thread* local0 = NULL;
// line 71
FROST_ASSERT(24 == sizeof(frost$threads$Thread));
frost$threads$Thread* $tmp18 = (frost$threads$Thread*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$Thread$class);
frost$threads$Thread$init($tmp18);
*(&local0) = ((frost$threads$Thread*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$threads$Thread* $tmp19 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
*(&local0) = $tmp18;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
// line 72
frost$threads$Thread* $tmp20 = *(&local0);
bool $tmp21 = param1.value;
frost$threads$Thread$run$$LP$RP$EQ$AM$GT$LP$RP$builtin_bit($tmp20, param0, $tmp21);
// line 73
frost$threads$Thread* $tmp22 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$threads$Thread* $tmp23 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
*(&local0) = ((frost$threads$Thread*) NULL);
return $tmp22;

}
frost$core$Int64 frost$threads$Thread$preferredThreadCount$R$frost$core$Int64() {

// line 93
frost$core$Int64 $tmp24 = (frost$core$Int64) {8};
return $tmp24;

}
void frost$threads$Thread$cleanup(frost$threads$Thread* param0) {

// line 23
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
return;

}






