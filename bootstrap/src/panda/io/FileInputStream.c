#include "panda/io/FileInputStream.h"
#include "panda/io/InputStream.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Bit.h"
#include "panda/core/UInt8.h"
#include "panda/core/Int64.h"


static panda$core$String $s1;
panda$io$FileInputStream$class_type panda$io$FileInputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$io$InputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$FileInputStream$cleanup, panda$io$FileInputStream$read$R$panda$core$UInt8$Q, panda$io$InputStream$read$R$panda$core$UInt16$Q, panda$io$InputStream$read$R$panda$core$UInt32$Q, panda$io$InputStream$read$R$panda$core$UInt64$Q, panda$io$InputStream$read$R$panda$core$Int8$Q, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$FileInputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT, panda$io$FileInputStream$close, panda$io$FileInputStream$readImpl$R$panda$core$UInt8$Q, panda$io$FileInputStream$readImpl$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 24, -605666812933524967, NULL };

void panda$io$FileInputStream$init(panda$io$FileInputStream* param0) {

// line 15
panda$io$InputStream$init(((panda$io$InputStream*) param0));
return;

}
void panda$io$FileInputStream$cleanup(panda$io$FileInputStream* param0) {

// line 21
panda$core$Bit* $tmp2 = &param0->closeOnCleanup;
panda$core$Bit $tmp3 = *$tmp2;
bool $tmp4 = $tmp3.value;
if ($tmp4) goto block1; else goto block2;
block1:;
// line 22
panda$io$FileInputStream$close(param0);
goto block2;
block2:;
// line 20
panda$io$InputStream$cleanup(((panda$io$InputStream*) param0));
return;

}
panda$core$UInt8$nullable panda$io$FileInputStream$read$R$panda$core$UInt8$Q(panda$io$FileInputStream* param0) {

// line 32
panda$core$UInt8$nullable $tmp5;
panda$io$FileInputStream$readImpl$R$panda$core$UInt8$Q(&$tmp5, param0);
return $tmp5;

}
panda$core$Int64 panda$io$FileInputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$FileInputStream* param0, panda$core$UInt8* param1, panda$core$Int64 param2) {

// line 41
panda$core$Int64 $tmp6;
panda$io$FileInputStream$readImpl$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64(&$tmp6, param0, param1, param2);
return $tmp6;

}






