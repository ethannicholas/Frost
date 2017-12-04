#include "panda/io/FileInputStream.h"
#include "panda/core/UInt8.h"
#include "panda/core/Int64.h"
#include "panda/io/InputStream.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"


panda$io$FileInputStream$class_type panda$io$FileInputStream$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$io$InputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$FileInputStream$cleanup, panda$io$FileInputStream$read$R$panda$core$UInt8$Q, panda$io$FileInputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT, panda$io$FileInputStream$readImpl$R$panda$core$UInt8$Q, panda$io$FileInputStream$readImpl$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64} };



void panda$io$FileInputStream$init(panda$io$FileInputStream* self) {
}
panda$core$UInt8$nullable panda$io$FileInputStream$read$R$panda$core$UInt8$Q(panda$io$FileInputStream* self) {
    panda$core$UInt8$nullable $tmp1;
    panda$io$FileInputStream$readImpl$R$panda$core$UInt8$Q(&$tmp1, self);
    return $tmp1;
}
panda$core$Int64 panda$io$FileInputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$FileInputStream* self, panda$core$UInt8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 $tmp2;
    panda$io$FileInputStream$readImpl$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64(&$tmp2, self, p_buffer, p_max);
    return $tmp2;
}

