#include "panda/io/MemoryOutputStream.h"
#include "panda/io/OutputStream.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/MutableString.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"
#include "panda/core/UInt8.h"
#include "panda/core/Char8.h"


static panda$core$String $s1;
panda$io$MemoryOutputStream$class_type panda$io$MemoryOutputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$io$OutputStream$class, NULL, { panda$io$MemoryOutputStream$convert$R$panda$core$String, panda$io$MemoryOutputStream$cleanup, panda$io$MemoryOutputStream$write$panda$core$UInt8, panda$io$OutputStream$write$panda$core$UInt16, panda$io$OutputStream$write$panda$core$UInt32, panda$io$OutputStream$write$panda$core$UInt64, panda$io$OutputStream$write$panda$core$Int8, panda$io$OutputStream$write$panda$core$Int16, panda$io$OutputStream$write$panda$core$Int32, panda$io$OutputStream$write$panda$core$Int64, panda$io$MemoryOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$UInt8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$Int8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$collections$Array$LTpanda$core$Char8$GT$panda$core$Int64, panda$io$OutputStream$write$panda$core$Char8, panda$io$OutputStream$print$panda$core$String, panda$io$OutputStream$print$panda$core$Object, panda$io$OutputStream$printLine$panda$core$String, panda$io$OutputStream$printLine$panda$core$Object, panda$io$OutputStream$printLine, panda$io$OutputStream$flush, panda$io$OutputStream$close, panda$io$MemoryOutputStream$clear, panda$io$MemoryOutputStream$finish$R$panda$core$String} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4d\x65\x6d\x6f\x72\x79\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 27, -1871907680230610725, NULL };

void panda$io$MemoryOutputStream$init(panda$io$MemoryOutputStream* param0) {

// line 20
panda$core$Int64 $tmp2 = (panda$core$Int64) {1024};
panda$io$MemoryOutputStream$init$panda$core$Int64(param0, $tmp2);
return;

}
void panda$io$MemoryOutputStream$init$panda$core$Int64(panda$io$MemoryOutputStream* param0, panda$core$Int64 param1) {

// line 27
panda$core$MutableString* $tmp3 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$Int64($tmp3, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$MutableString** $tmp4 = &param0->data;
panda$core$MutableString* $tmp5 = *$tmp4;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
panda$core$MutableString** $tmp6 = &param0->data;
*$tmp6 = $tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
// unreffing REF($1:panda.core.MutableString)
// line 28
panda$io$OutputStream$init(((panda$io$OutputStream*) param0));
return;

}
void panda$io$MemoryOutputStream$write$panda$core$UInt8(panda$io$MemoryOutputStream* param0, panda$core$UInt8 param1) {

// line 33
panda$core$MutableString** $tmp7 = &param0->data;
panda$core$MutableString* $tmp8 = *$tmp7;
panda$core$Char8 $tmp9 = panda$core$Char8$init$panda$core$UInt8(param1);
panda$core$MutableString$append$panda$core$Char8($tmp8, $tmp9);
return;

}
void panda$io$MemoryOutputStream$write$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64(panda$io$MemoryOutputStream* param0, panda$core$UInt8* param1, panda$core$Int64 param2) {

// line 38
panda$core$MutableString** $tmp10 = &param0->data;
panda$core$MutableString* $tmp11 = *$tmp10;
panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp11, ((panda$core$Char8*) param1), param2);
return;

}
void panda$io$MemoryOutputStream$clear(panda$io$MemoryOutputStream* param0) {

// line 45
panda$core$MutableString** $tmp12 = &param0->data;
panda$core$MutableString* $tmp13 = *$tmp12;
panda$core$MutableString$clear($tmp13);
return;

}
panda$core$String* panda$io$MemoryOutputStream$convert$R$panda$core$String(panda$io$MemoryOutputStream* param0) {

// line 54
panda$core$MutableString** $tmp14 = &param0->data;
panda$core$MutableString* $tmp15 = *$tmp14;
panda$core$String* $tmp16 = panda$core$MutableString$convert$R$panda$core$String($tmp15);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
// unreffing REF($3:panda.core.String)
return $tmp16;

}
panda$core$String* panda$io$MemoryOutputStream$finish$R$panda$core$String(panda$io$MemoryOutputStream* param0) {

// line 64
panda$core$MutableString** $tmp17 = &param0->data;
panda$core$MutableString* $tmp18 = *$tmp17;
panda$core$String* $tmp19 = panda$core$MutableString$finish$R$panda$core$String($tmp18);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
// unreffing REF($3:panda.core.String)
return $tmp19;

}
void panda$io$MemoryOutputStream$cleanup(panda$io$MemoryOutputStream* param0) {

// line 9
panda$io$OutputStream$cleanup(((panda$io$OutputStream*) param0));
panda$core$MutableString** $tmp20 = &param0->data;
panda$core$MutableString* $tmp21 = *$tmp20;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
return;

}






