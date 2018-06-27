#include "panda/io/MemoryInputStream.h"
#include "panda/io/InputStream.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/UInt8.h"
#include "panda/core/Bit.h"

static panda$core$String $s1;
panda$io$MemoryInputStream$class_type panda$io$MemoryInputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$io$InputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$MemoryInputStream$cleanup, panda$io$MemoryInputStream$read$R$panda$core$UInt8$Q, panda$io$InputStream$read$R$panda$core$UInt16$Q, panda$io$InputStream$read$R$panda$core$UInt32$Q, panda$io$InputStream$read$R$panda$core$UInt64$Q, panda$io$InputStream$read$R$panda$core$Int8$Q, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4d\x65\x6d\x6f\x72\x79\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 26, -2754778238192978458, NULL };

void panda$io$MemoryInputStream$init$panda$core$String(panda$io$MemoryInputStream* self, panda$core$String* p_source) {
    panda$core$Int64 $tmp2;
    panda$core$String* $tmp4;
    panda$core$String* $tmp5;
    self->string = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp2, 0);
    self->index = $tmp2;
    self->data = ((panda$core$UInt8*) p_source->data);
    panda$core$Int64 $tmp3 = panda$core$String$byteLength$R$panda$core$Int64(p_source);
    self->length = $tmp3;
    {
        $tmp4 = self->string;
        $tmp5 = p_source;
        self->string = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
    panda$io$InputStream$init(((panda$io$InputStream*) self));
}
panda$core$UInt8$nullable panda$io$MemoryInputStream$read$R$panda$core$UInt8$Q(panda$io$MemoryInputStream* self) {
    panda$core$UInt8 result7;
    panda$io$MemoryInputStream* $tmp8;
    panda$core$Int64 $tmp9;
    panda$core$UInt8$nullable $returnValue11;
    panda$core$Bit $tmp6 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->index, self->length);
    if ($tmp6.value) {
    {
        result7 = self->data[self->index.value];
        $tmp8 = self;
        panda$core$Int64$init$builtin_int64(&$tmp9, 1);
        panda$core$Int64 $tmp10 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp8->index, $tmp9);
        $tmp8->index = $tmp10;
        $returnValue11 = ((panda$core$UInt8$nullable) { result7, true });
        return $returnValue11;
    }
    }
    $returnValue11 = ((panda$core$UInt8$nullable) { .nonnull = false });
    return $returnValue11;
}
void panda$io$MemoryInputStream$cleanup(panda$io$MemoryInputStream* self) {
    int $tmp16;
    {
    }
    $tmp16 = -1;
    goto $l14;
    $l14:;
    panda$io$InputStream$cleanup(((panda$io$InputStream*) self));
    switch ($tmp16) {
        case -1: goto $l17;
    }
    $l17:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->string));
}





