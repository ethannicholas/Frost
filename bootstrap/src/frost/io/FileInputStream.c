#include "frost/io/FileInputStream.h"
#include "frost/io/InputStream.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Bit.h"
#include "frost/core/Error.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt8.h"
#include "frost/core/Int64.h"


static frost$core$String $s1;
frost$io$FileInputStream$class_type frost$io$FileInputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$io$InputStream$class, NULL, { frost$core$Object$convert$R$frost$core$String, frost$io$FileInputStream$cleanup, frost$io$FileInputStream$read$R$frost$core$UInt8$Q, frost$io$InputStream$read$R$frost$core$UInt16$Q, frost$io$InputStream$read$R$frost$core$UInt32$Q, frost$io$InputStream$read$R$frost$core$UInt64$Q, frost$io$InputStream$read$R$frost$core$Int8$Q, frost$io$InputStream$read$R$frost$core$Int16$Q, frost$io$InputStream$read$R$frost$core$Int32$Q, frost$io$InputStream$read$R$frost$core$Int64$Q, frost$io$InputStream$read$R$frost$core$Char8$Q, frost$io$FileInputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Int64, frost$io$InputStream$readFully$R$frost$core$String, frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT, frost$io$InputStream$readLine$R$frost$core$String$Q, frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Int64, frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT, frost$io$FileInputStream$close$R$frost$core$Error$Q, frost$io$FileInputStream$readImpl$R$frost$core$UInt8$Q, frost$io$FileInputStream$readImpl$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 24, -6438980784125207733, NULL };

void frost$io$FileInputStream$init(frost$io$FileInputStream* param0) {

// line 15
frost$io$InputStream$init(((frost$io$InputStream*) param0));
return;

}
void frost$io$FileInputStream$cleanup(frost$io$FileInputStream* param0) {

// line 21
frost$core$Bit* $tmp2 = &param0->closeOnCleanup;
frost$core$Bit $tmp3 = *$tmp2;
bool $tmp4 = $tmp3.value;
if ($tmp4) goto block1; else goto block2;
block1:;
// line 22
frost$core$Error* $tmp5 = frost$io$FileInputStream$close$R$frost$core$Error$Q(param0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
// unreffing REF($6:frost.core.Error?)
goto block2;
block2:;
// line 20
frost$io$InputStream$cleanup(((frost$io$InputStream*) param0));
return;

}
frost$core$UInt8$nullable frost$io$FileInputStream$read$R$frost$core$UInt8$Q(frost$io$FileInputStream* param0) {

// line 32
frost$core$UInt8$nullable $tmp6;
frost$io$FileInputStream$readImpl$R$frost$core$UInt8$Q(&$tmp6, param0);
return $tmp6;

}
frost$core$Int64 frost$io$FileInputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64(frost$io$FileInputStream* param0, frost$core$UInt8* param1, frost$core$Int64 param2) {

// line 41
frost$core$Int64 $tmp7;
frost$io$FileInputStream$readImpl$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64(&$tmp7, param0, param1, param2);
return $tmp7;

}






