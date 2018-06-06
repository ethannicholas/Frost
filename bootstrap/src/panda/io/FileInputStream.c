#include "panda/io/FileInputStream.h"
#include "panda/io/InputStream.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/UInt8.h"
#include "panda/core/Int64.h"

static panda$core$String $s1;
panda$io$FileInputStream$class_type panda$io$FileInputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$io$InputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$FileInputStream$cleanup, panda$io$FileInputStream$read$R$panda$core$UInt8$Q, panda$io$FileInputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT, panda$io$FileInputStream$close, panda$io$FileInputStream$readImpl$R$panda$core$UInt8$Q, panda$io$FileInputStream$readImpl$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 24, -605666812933524967, NULL };

void panda$io$FileInputStream$init(panda$io$FileInputStream* self) {
}
void panda$io$FileInputStream$cleanup(panda$io$FileInputStream* self) {
    int $tmp4;
    {
        if (self->closeOnCleanup.value) {
        {
            panda$io$FileInputStream$close(self);
        }
        }
    }
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$io$InputStream$cleanup(((panda$io$InputStream*) self));
    switch ($tmp4) {
        case -1: goto $l5;
    }
    $l5:;
}
panda$core$UInt8$nullable panda$io$FileInputStream$read$R$panda$core$UInt8$Q(panda$io$FileInputStream* self) {
    panda$core$UInt8$nullable $returnValue6;
    panda$core$UInt8$nullable $tmp7;
    panda$io$FileInputStream$readImpl$R$panda$core$UInt8$Q(&$tmp7, self);
    $returnValue6 = $tmp7;
    return $returnValue6;
}
panda$core$Int64 panda$io$FileInputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64(panda$io$FileInputStream* self, panda$core$UInt8* p_buffer, panda$core$Int64 p_max) {
    panda$core$Int64 $returnValue9;
    panda$core$Int64 $tmp10;
    panda$io$FileInputStream$readImpl$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64(&$tmp10, self, p_buffer, p_max);
    $returnValue9 = $tmp10;
    return $returnValue9;
}





