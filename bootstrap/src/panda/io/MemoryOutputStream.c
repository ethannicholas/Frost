#include "panda/io/MemoryOutputStream.h"
#include "panda/io/OutputStream.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/UInt8.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"


panda$io$MemoryOutputStream$class_type panda$io$MemoryOutputStream$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$io$OutputStream$class, NULL, { panda$io$MemoryOutputStream$convert$R$panda$core$String, panda$core$Object$cleanup, panda$io$MemoryOutputStream$write$panda$core$UInt8, panda$io$OutputStream$write$panda$core$Int8, panda$io$MemoryOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$core$UInt16, panda$io$OutputStream$write$panda$core$Int16, panda$io$OutputStream$write$panda$core$UInt32, panda$io$OutputStream$write$panda$core$Int32, panda$io$OutputStream$write$panda$core$UInt64, panda$io$OutputStream$write$panda$core$Int64, panda$io$OutputStream$write$panda$core$Char8, panda$io$OutputStream$print$panda$core$Object, panda$io$OutputStream$print$panda$core$String, panda$io$OutputStream$printLine, panda$io$OutputStream$printLine$panda$core$Object, panda$io$OutputStream$printLine$panda$core$String, panda$io$MemoryOutputStream$clear, panda$io$MemoryOutputStream$finish$R$panda$core$String} };



void panda$io$MemoryOutputStream$write$panda$core$UInt8(panda$io$MemoryOutputStream* self, panda$core$UInt8 p_i) {
    panda$core$Char8 $tmp1;
    panda$core$Char8$init$panda$core$UInt8(&$tmp1, p_i);
    panda$core$MutableString$append$panda$core$Char8(self->data, $tmp1);
}
void panda$io$MemoryOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64(panda$io$MemoryOutputStream* self, panda$core$UInt8* p_ptr, panda$core$Int64 p_offset, panda$core$Int64 p_count) {
    panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64(self->data, ((panda$core$Char8*) p_ptr), p_offset, p_count);
}
void panda$io$MemoryOutputStream$clear(panda$io$MemoryOutputStream* self) {
    panda$core$MutableString$clear(self->data);
}
panda$core$String* panda$io$MemoryOutputStream$convert$R$panda$core$String(panda$io$MemoryOutputStream* self) {
    panda$core$String* $tmp2 = panda$core$MutableString$convert$R$panda$core$String(self->data);
    return $tmp2;
}
panda$core$String* panda$io$MemoryOutputStream$finish$R$panda$core$String(panda$io$MemoryOutputStream* self) {
    panda$core$String* $tmp3 = panda$core$MutableString$finish$R$panda$core$String(self->data);
    return $tmp3;
}
void panda$io$MemoryOutputStream$init(panda$io$MemoryOutputStream* self) {
    panda$core$MutableString* $tmp4 = (panda$core$MutableString*) malloc(40);
    $tmp4->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp4->refCount.value = 1;
    panda$core$MutableString$init($tmp4);
    self->data = $tmp4;
}

