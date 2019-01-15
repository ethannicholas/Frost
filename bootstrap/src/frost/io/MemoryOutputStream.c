#include "frost/io/MemoryOutputStream.h"
#include "frost/io/OutputStream.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int64.h"
#include "frost/core/MutableString.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt8.h"
#include "frost/core/Char8.h"


static frost$core$String $s1;
frost$io$MemoryOutputStream$class_type frost$io$MemoryOutputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$io$OutputStream$class, NULL, { frost$io$MemoryOutputStream$convert$R$frost$core$String, frost$io$MemoryOutputStream$cleanup, frost$io$MemoryOutputStream$write$frost$core$UInt8, frost$io$OutputStream$write$frost$core$UInt16, frost$io$OutputStream$write$frost$core$UInt32, frost$io$OutputStream$write$frost$core$UInt64, frost$io$OutputStream$write$frost$core$Int8, frost$io$OutputStream$write$frost$core$Int16, frost$io$OutputStream$write$frost$core$Int32, frost$io$OutputStream$write$frost$core$Int64, frost$io$MemoryOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int64, frost$io$OutputStream$write$frost$core$Char8, frost$io$OutputStream$print$frost$core$String, frost$io$OutputStream$print$frost$core$Object, frost$io$OutputStream$printLine$frost$core$String, frost$io$OutputStream$printLine$frost$core$Object, frost$io$OutputStream$printLine, frost$io$OutputStream$flush, frost$io$OutputStream$close, frost$io$MemoryOutputStream$clear, frost$io$MemoryOutputStream$finish$R$frost$core$String} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4d\x65\x6d\x6f\x72\x79\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 27, 7256682645707250821, NULL };

void frost$io$MemoryOutputStream$init(frost$io$MemoryOutputStream* param0) {

// line 20
frost$core$Int64 $tmp2 = (frost$core$Int64) {1024};
frost$io$MemoryOutputStream$init$frost$core$Int64(param0, $tmp2);
return;

}
void frost$io$MemoryOutputStream$init$frost$core$Int64(frost$io$MemoryOutputStream* param0, frost$core$Int64 param1) {

// line 27
frost$core$MutableString* $tmp3 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$Int64($tmp3, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$MutableString** $tmp4 = &param0->data;
frost$core$MutableString* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$core$MutableString** $tmp6 = &param0->data;
*$tmp6 = $tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
// unreffing REF($1:frost.core.MutableString)
// line 28
frost$io$OutputStream$init(((frost$io$OutputStream*) param0));
return;

}
void frost$io$MemoryOutputStream$write$frost$core$UInt8(frost$io$MemoryOutputStream* param0, frost$core$UInt8 param1) {

// line 33
frost$core$MutableString** $tmp7 = &param0->data;
frost$core$MutableString* $tmp8 = *$tmp7;
frost$core$Char8 $tmp9 = frost$core$Char8$init$frost$core$UInt8(param1);
frost$core$MutableString$append$frost$core$Char8($tmp8, $tmp9);
return;

}
void frost$io$MemoryOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64(frost$io$MemoryOutputStream* param0, frost$core$UInt8* param1, frost$core$Int64 param2) {

// line 38
frost$core$MutableString** $tmp10 = &param0->data;
frost$core$MutableString* $tmp11 = *$tmp10;
frost$core$MutableString$append$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp11, ((frost$core$Char8*) param1), param2);
return;

}
void frost$io$MemoryOutputStream$clear(frost$io$MemoryOutputStream* param0) {

// line 45
frost$core$MutableString** $tmp12 = &param0->data;
frost$core$MutableString* $tmp13 = *$tmp12;
frost$core$MutableString$clear($tmp13);
return;

}
frost$core$String* frost$io$MemoryOutputStream$convert$R$frost$core$String(frost$io$MemoryOutputStream* param0) {

// line 54
frost$core$MutableString** $tmp14 = &param0->data;
frost$core$MutableString* $tmp15 = *$tmp14;
frost$core$String* $tmp16 = frost$core$MutableString$convert$R$frost$core$String($tmp15);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
// unreffing REF($3:frost.core.String)
return $tmp16;

}
frost$core$String* frost$io$MemoryOutputStream$finish$R$frost$core$String(frost$io$MemoryOutputStream* param0) {

// line 64
frost$core$MutableString** $tmp17 = &param0->data;
frost$core$MutableString* $tmp18 = *$tmp17;
frost$core$String* $tmp19 = frost$core$MutableString$finish$R$frost$core$String($tmp18);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
// unreffing REF($3:frost.core.String)
return $tmp19;

}
void frost$io$MemoryOutputStream$cleanup(frost$io$MemoryOutputStream* param0) {

// line 9
frost$io$OutputStream$cleanup(((frost$io$OutputStream*) param0));
frost$core$MutableString** $tmp20 = &param0->data;
frost$core$MutableString* $tmp21 = *$tmp20;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
return;

}






