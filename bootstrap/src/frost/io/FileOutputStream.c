#include "frost/io/FileOutputStream.h"
#include "frost/io/OutputStream.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
frost$io$FileOutputStream$class_type frost$io$FileOutputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$io$OutputStream$class, NULL, { frost$core$Object$convert$R$frost$core$String, frost$io$FileOutputStream$cleanup, frost$io$FileOutputStream$write$frost$core$UInt8, frost$io$OutputStream$write$frost$core$UInt16, frost$io$OutputStream$write$frost$core$UInt32, frost$io$OutputStream$write$frost$core$UInt64, frost$io$OutputStream$write$frost$core$Int8, frost$io$OutputStream$write$frost$core$Int16, frost$io$OutputStream$write$frost$core$Int32, frost$io$OutputStream$write$frost$core$Int64, frost$io$FileOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$core$Char8, frost$io$OutputStream$print$frost$core$String, frost$io$OutputStream$print$frost$core$Object, frost$io$OutputStream$printLine$frost$core$String, frost$io$OutputStream$printLine$frost$core$Object, frost$io$OutputStream$printLine, frost$io$FileOutputStream$flush, frost$io$FileOutputStream$close} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 25, -5041483345194735180, NULL };

void frost$io$FileOutputStream$init(frost$io$FileOutputStream* param0) {

// line 15
frost$io$OutputStream$init(((frost$io$OutputStream*) param0));
return;

}
void frost$io$FileOutputStream$cleanup(frost$io$FileOutputStream* param0) {

// line 21
frost$core$Bit* $tmp2 = &param0->closeOnCleanup;
frost$core$Bit $tmp3 = *$tmp2;
bool $tmp4 = $tmp3.value;
if ($tmp4) goto block1; else goto block2;
block1:;
// line 22
frost$io$FileOutputStream$close(param0);
goto block2;
block2:;
// line 20
frost$io$OutputStream$cleanup(((frost$io$OutputStream*) param0));
return;

}






