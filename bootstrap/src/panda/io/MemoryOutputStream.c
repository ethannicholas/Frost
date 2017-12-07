#include "panda/io/MemoryOutputStream.h"
#include "panda/io/OutputStream.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/UInt8.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/String.h"


panda$io$MemoryOutputStream$class_type panda$io$MemoryOutputStream$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$io$OutputStream$class, NULL, { panda$io$MemoryOutputStream$convert$R$panda$core$String, panda$core$Object$cleanup, panda$io$MemoryOutputStream$write$panda$core$UInt8, panda$io$OutputStream$write$panda$core$Int8, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64$panda$core$Int64, panda$io$OutputStream$write$panda$core$UInt16, panda$io$OutputStream$write$panda$core$Int16, panda$io$OutputStream$write$panda$core$UInt32, panda$io$OutputStream$write$panda$core$Int32, panda$io$OutputStream$write$panda$core$UInt64, panda$io$OutputStream$write$panda$core$Int64, panda$io$OutputStream$write$panda$core$Char8, panda$io$OutputStream$print$panda$core$Object, panda$io$OutputStream$print$panda$core$String, panda$io$OutputStream$printLine, panda$io$OutputStream$printLine$panda$core$Object, panda$io$OutputStream$printLine$panda$core$String, panda$io$MemoryOutputStream$clear} };

typedef void (*$fn2)(panda$core$MutableString*, panda$core$Char8);
typedef void (*$fn3)(panda$core$MutableString*);
typedef panda$core$String* (*$fn4)(panda$core$MutableString*);


void panda$io$MemoryOutputStream$write$panda$core$UInt8(panda$io$MemoryOutputStream* self, panda$core$UInt8 p_i) {
    panda$core$Char8 $tmp1;
    panda$core$Char8$init$panda$core$UInt8(&$tmp1, p_i);
    (($fn2) self->data->$class->vtable[2])(self->data, $tmp1);
}
void panda$io$MemoryOutputStream$clear(panda$io$MemoryOutputStream* self) {
    (($fn3) self->data->$class->vtable[7])(self->data);
}
panda$core$String* panda$io$MemoryOutputStream$convert$R$panda$core$String(panda$io$MemoryOutputStream* self) {
    panda$core$String* $tmp5 = (($fn4) self->data->$class->vtable[0])(self->data);
    return $tmp5;
}
void panda$io$MemoryOutputStream$init(panda$io$MemoryOutputStream* self) {
    panda$core$MutableString* $tmp6 = (panda$core$MutableString*) malloc(40);
    $tmp6->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp6->refCount.value = 1;
    panda$core$MutableString$init($tmp6);
    self->data = $tmp6;
}

