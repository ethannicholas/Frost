#include "panda/io/MemoryOutputStream.h"
#include "panda/io/OutputStream.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/MutableString.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "panda/core/UInt8.h"
#include "panda/core/Char8.h"


static panda$core$String $s1;
panda$io$MemoryOutputStream$class_type panda$io$MemoryOutputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$io$OutputStream$class, NULL, { panda$io$MemoryOutputStream$convert$R$panda$core$String, panda$io$MemoryOutputStream$cleanup, panda$io$MemoryOutputStream$write$panda$core$UInt8, panda$io$OutputStream$write$panda$core$Int8, panda$io$MemoryOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$core$UInt16, panda$io$OutputStream$write$panda$core$Int16, panda$io$OutputStream$write$panda$core$UInt32, panda$io$OutputStream$write$panda$core$Int32, panda$io$OutputStream$write$panda$core$UInt64, panda$io$OutputStream$write$panda$core$Int64, panda$io$OutputStream$write$panda$core$Char8, panda$io$OutputStream$print$panda$core$Object, panda$io$OutputStream$print$panda$core$String, panda$io$OutputStream$printLine, panda$io$OutputStream$printLine$panda$core$Object, panda$io$OutputStream$printLine$panda$core$String, panda$io$MemoryOutputStream$clear, panda$io$MemoryOutputStream$finish$R$panda$core$String} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4d\x65\x6d\x6f\x72\x79\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 27, -1871907680230610725, NULL };

void panda$io$MemoryOutputStream$init(panda$io$MemoryOutputStream* self) {
    self->data = NULL;
    panda$io$MemoryOutputStream$init$panda$core$Int64(self, ((panda$core$Int64) { 1024 }));
}
void panda$io$MemoryOutputStream$init$panda$core$Int64(panda$io$MemoryOutputStream* self, panda$core$Int64 p_capacity) {
    self->data = NULL;
    {
        panda$core$MutableString* $tmp2 = self->data;
        panda$core$MutableString* $tmp5 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$Int64($tmp5, p_capacity);
        panda$core$MutableString* $tmp4 = $tmp5;
        panda$core$MutableString* $tmp3 = $tmp4;
        self->data = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
void panda$io$MemoryOutputStream$write$panda$core$UInt8(panda$io$MemoryOutputStream* self, panda$core$UInt8 p_i) {
    panda$core$Char8 $tmp6;
    panda$core$Char8$init$panda$core$UInt8(&$tmp6, p_i);
    panda$core$MutableString$append$panda$core$Char8(self->data, $tmp6);
}
void panda$io$MemoryOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64(panda$io$MemoryOutputStream* self, panda$core$UInt8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(self->data, ((panda$core$Char8*) p_ptr), p_offset, p_count);
}
void panda$io$MemoryOutputStream$clear(panda$io$MemoryOutputStream* self) {
    panda$core$MutableString$clear(self->data);
}
panda$core$String* panda$io$MemoryOutputStream$convert$R$panda$core$String(panda$io$MemoryOutputStream* self) {
    panda$core$String* $tmp10 = panda$core$MutableString$convert$R$panda$core$String(self->data);
    panda$core$String* $tmp9 = $tmp10;
    panda$core$String* $tmp8 = $tmp9;
    panda$core$String* $tmp7 = $tmp8;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    return $tmp7;
}
panda$core$String* panda$io$MemoryOutputStream$finish$R$panda$core$String(panda$io$MemoryOutputStream* self) {
    panda$core$String* $tmp14 = panda$core$MutableString$finish$R$panda$core$String(self->data);
    panda$core$String* $tmp13 = $tmp14;
    panda$core$String* $tmp12 = $tmp13;
    panda$core$String* $tmp11 = $tmp12;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
    return $tmp11;
}
void panda$io$MemoryOutputStream$cleanup(panda$io$MemoryOutputStream* self) {
    panda$io$OutputStream$cleanup(((panda$io$OutputStream*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->data));
}

