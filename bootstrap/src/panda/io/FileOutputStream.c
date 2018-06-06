#include "panda/io/FileOutputStream.h"
#include "panda/io/OutputStream.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"

static panda$core$String $s1;
panda$io$FileOutputStream$class_type panda$io$FileOutputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$io$OutputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$FileOutputStream$cleanup, panda$io$FileOutputStream$write$panda$core$UInt8, panda$io$OutputStream$write$panda$core$Int8, panda$io$FileOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$Int8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$Char8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$core$UInt16, panda$io$OutputStream$write$panda$core$Int16, panda$io$OutputStream$write$panda$core$UInt32, panda$io$OutputStream$write$panda$core$Int32, panda$io$OutputStream$write$panda$core$UInt64, panda$io$OutputStream$write$panda$core$Int64, panda$io$OutputStream$write$panda$core$Char8, panda$io$OutputStream$print$panda$core$Object, panda$io$OutputStream$print$panda$core$String, panda$io$OutputStream$printLine, panda$io$OutputStream$printLine$panda$core$Object, panda$io$OutputStream$printLine$panda$core$String, panda$io$FileOutputStream$flush, panda$io$FileOutputStream$close} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 25, -6172582613540427526, NULL };

void panda$io$FileOutputStream$init(panda$io$FileOutputStream* self) {
}
void panda$io$FileOutputStream$cleanup(panda$io$FileOutputStream* self) {
    int $tmp4;
    {
        if (self->closeOnCleanup.value) {
        {
            panda$io$FileOutputStream$close(self);
        }
        }
    }
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$io$OutputStream$cleanup(((panda$io$OutputStream*) self));
    switch ($tmp4) {
        case -1: goto $l5;
    }
    $l5:;
}





