#include "frost/io/FileInputStream.h"
#include "frost/io/InputStream.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Error.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt8.h"
#include "frost/core/Int64.h"


static frost$core$String $s1;
frost$io$FileInputStream$class_type frost$io$FileInputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$io$InputStream$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$FileInputStream$cleanup, frost$io$FileInputStream$read$R$frost$core$UInt8$Q, frost$io$InputStream$read$R$frost$core$UInt16$Q, frost$io$InputStream$read$R$frost$core$UInt32$Q, frost$io$InputStream$read$R$frost$core$UInt64$Q, frost$io$InputStream$read$R$frost$core$Int8$Q, frost$io$InputStream$read$R$frost$core$Int16$Q, frost$io$InputStream$read$R$frost$core$Int32$Q, frost$io$InputStream$read$R$frost$core$Int64$Q, frost$io$InputStream$read$R$frost$core$Char8$Q, frost$io$FileInputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$readFully$R$frost$core$String, frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT, frost$io$InputStream$readLine$R$frost$core$String$Q, frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int64$GT, frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT, frost$io$FileInputStream$close$R$frost$core$Error$Q, frost$io$FileInputStream$readImpl$R$frost$core$UInt8$Q, frost$io$FileInputStream$readImpl$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 24, -6438980784125207733, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 21, 7350084853597942461, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x72\x65\x61\x64\x28\x62\x75\x66\x66\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3e\x2c\x20\x6d\x61\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 148, 3337939695659610791, NULL };

void frost$io$FileInputStream$init(frost$io$FileInputStream* param0) {

// line 15
frost$io$InputStream$init(((frost$io$InputStream*) param0));
return;

}
void frost$io$FileInputStream$cleanup(frost$io$FileInputStream* param0) {

frost$core$Error* local0 = NULL;
// line 21
frost$core$Bit* $tmp2 = &param0->closeOnCleanup;
frost$core$Bit $tmp3 = *$tmp2;
bool $tmp4 = $tmp3.value;
if ($tmp4) goto block1; else goto block2;
block1:;
// line 22
frost$core$Error* $tmp5 = frost$io$FileInputStream$close$R$frost$core$Error$Q(param0);
*(&local0) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$core$Error* $tmp6 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
*(&local0) = $tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$core$Error* $tmp7 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
*(&local0) = ((frost$core$Error*) NULL);
goto block2;
block2:;
// line 20
frost$io$InputStream$cleanup(((frost$io$InputStream*) param0));
return;

}
frost$core$UInt8$nullable frost$io$FileInputStream$read$R$frost$core$UInt8$Q(frost$io$FileInputStream* param0) {

// line 32
frost$core$UInt8$nullable $tmp8;
frost$io$FileInputStream$readImpl$R$frost$core$UInt8$Q(&$tmp8, param0);
return $tmp8;

}
frost$core$Int64 frost$io$FileInputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64(frost$io$FileInputStream* param0, frost$core$UInt8* param1, frost$core$Int64 param2) {

frost$core$Int64 local0;
// line 41
frost$core$Int64 $tmp9;
frost$io$FileInputStream$readImpl$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64(&$tmp9, param0, param1, param2);
*(&local0) = $tmp9;
goto block1;
block1:;
frost$core$Int64 $tmp10 = *(&local0);
frost$core$Int64 $tmp11 = (frost$core$Int64) {0};
int64_t $tmp12 = $tmp10.value;
int64_t $tmp13 = $tmp11.value;
bool $tmp14 = $tmp12 >= $tmp13;
frost$core$Bit $tmp15 = (frost$core$Bit) {$tmp14};
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block2; else goto block3;
block2:;
frost$core$Int64 $tmp17 = *(&local0);
return $tmp17;
block3:;
frost$core$Int64 $tmp18 = (frost$core$Int64) {40};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s19, $tmp18, &$s20);
abort(); // unreachable

}






