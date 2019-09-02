#include "frost/io/MemoryOutputStream.h"
#include "frost/io/OutputStream.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int.h"
#include "frost/core/MutableString.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/core/Error.h"
#include "frost/core/UInt8.h"
#include "frost/core/Char8.h"


static frost$core$String $s1;
frost$io$MemoryOutputStream$class_type frost$io$MemoryOutputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$io$OutputStream$class, NULL, { frost$io$MemoryOutputStream$get_asString$R$frost$core$String, frost$io$MemoryOutputStream$cleanup, frost$io$MemoryOutputStream$write$frost$core$UInt8$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt16$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt32$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int8$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int16$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int32$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int64$R$frost$core$Error$Q, frost$io$MemoryOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Char8$R$frost$core$Error$Q, frost$io$OutputStream$print$frost$core$String$R$frost$core$Error$Q, frost$io$OutputStream$print$frost$core$Object$R$frost$core$Error$Q, frost$io$OutputStream$printLine$frost$core$String$R$frost$core$Error$Q, frost$io$OutputStream$printLine$frost$core$Object$R$frost$core$Error$Q, frost$io$OutputStream$printLine$R$frost$core$Error$Q, frost$io$OutputStream$flush$R$frost$core$Error$Q, frost$io$OutputStream$close$R$frost$core$Error$Q, frost$io$MemoryOutputStream$clear, frost$io$MemoryOutputStream$finish$R$frost$core$String} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$String* (*$fn3)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4d\x65\x6d\x6f\x72\x79\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 27, 2804558444258481915, NULL };

void frost$io$MemoryOutputStream$init(frost$io$MemoryOutputStream* param0) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:20
_1 = (frost$core$Int) {1024u};
frost$io$MemoryOutputStream$init$frost$core$Int(param0, _1);
return;

}
void frost$io$MemoryOutputStream$init$frost$core$Int(frost$io$MemoryOutputStream* param0, frost$core$Int param1) {

frost$core$MutableString* _1;
frost$core$Object* _3;
frost$core$MutableString** _5;
frost$core$MutableString* _6;
frost$core$Object* _7;
frost$core$MutableString** _9;
frost$core$Object* _11;
frost$io$OutputStream* _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:27
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_1 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$Int(_1, param1);
_3 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = &param0->data;
_6 = *_5;
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
_9 = &param0->data;
*_9 = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:28
_14 = ((frost$io$OutputStream*) param0);
frost$io$OutputStream$init(_14);
return;

}
frost$core$Error* frost$io$MemoryOutputStream$write$frost$core$UInt8$R$frost$core$Error$Q(frost$io$MemoryOutputStream* param0, frost$core$UInt8 param1) {

frost$core$MutableString** _1;
frost$core$MutableString* _2;
frost$core$Char8 _3;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:33
_1 = &param0->data;
_2 = *_1;
_3 = frost$core$Char8$init$frost$core$UInt8(param1);
frost$core$MutableString$append$frost$core$Char8(_2, _3);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:34
_6 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_6);
return ((frost$core$Error*) NULL);

}
frost$core$Error* frost$io$MemoryOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q(frost$io$MemoryOutputStream* param0, frost$core$UInt8* param1, frost$core$Int param2) {

frost$core$MutableString** _1;
frost$core$MutableString* _2;
frost$core$Char8* _3;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:39
_1 = &param0->data;
_2 = *_1;
_3 = ((frost$core$Char8*) param1);
frost$core$MutableString$append$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_2, _3, param2);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:40
_6 = ((frost$core$Object*) ((frost$core$Error*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_6);
return ((frost$core$Error*) NULL);

}
void frost$io$MemoryOutputStream$clear(frost$io$MemoryOutputStream* param0) {

frost$core$MutableString** _1;
frost$core$MutableString* _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:47
_1 = &param0->data;
_2 = *_1;
frost$core$MutableString$clear(_2);
return;

}
frost$core$String* frost$io$MemoryOutputStream$get_asString$R$frost$core$String(frost$io$MemoryOutputStream* param0) {

frost$core$MutableString** _1;
frost$core$MutableString* _2;
frost$core$Object* _3;
$fn2 _4;
frost$core$String* _5;
frost$core$Object* _6;
frost$core$Object* _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:56
_1 = &param0->data;
_2 = *_1;
_3 = ((frost$core$Object*) _2);
_4 = ($fn3) _3->$class->vtable[0];
_5 = _4(_3);
_6 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_8);
return _5;

}
frost$core$String* frost$io$MemoryOutputStream$finish$R$frost$core$String(frost$io$MemoryOutputStream* param0) {

frost$core$MutableString** _1;
frost$core$MutableString* _2;
frost$core$String* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:66
_1 = &param0->data;
_2 = *_1;
_3 = frost$core$MutableString$finish$R$frost$core$String(_2);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
void frost$io$MemoryOutputStream$cleanup(frost$io$MemoryOutputStream* param0) {

frost$io$OutputStream* _1;
frost$core$MutableString** _3;
frost$core$MutableString* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryOutputStream.frost:9
_1 = ((frost$io$OutputStream*) param0);
frost$io$OutputStream$cleanup(_1);
_3 = &param0->data;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}






