#include "frost/io/MemoryInputStream.h"
#include "frost/io/InputStream.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt8.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"


static frost$core$String $s1;
frost$io$MemoryInputStream$class_type frost$io$MemoryInputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$io$InputStream$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$MemoryInputStream$cleanup, frost$io$MemoryInputStream$read$R$frost$core$UInt8$Q, frost$io$InputStream$read$R$frost$core$UInt16$Q, frost$io$InputStream$read$R$frost$core$UInt32$Q, frost$io$InputStream$read$R$frost$core$UInt64$Q, frost$io$InputStream$read$R$frost$core$Int8$Q, frost$io$InputStream$read$R$frost$core$Int16$Q, frost$io$InputStream$read$R$frost$core$Int32$Q, frost$io$InputStream$read$R$frost$core$Int64$Q, frost$io$InputStream$read$R$frost$core$Char8$Q, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$readFully$R$frost$core$String, frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT, frost$io$InputStream$readLine$R$frost$core$String$Q, frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int$GT, frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT, frost$io$InputStream$close$R$frost$core$Error$Q} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4d\x65\x6d\x6f\x72\x79\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 26, 6900884650380365222, NULL };

void frost$io$MemoryInputStream$init$frost$core$String(frost$io$MemoryInputStream* param0, frost$core$String* param1) {

frost$core$Int _1;
frost$core$Int* _2;
frost$core$Char8** _5;
frost$core$Char8* _6;
frost$core$UInt8* _7;
frost$core$UInt8** _8;
frost$core$Int* _13;
frost$core$Int _14;
frost$core$Int* _16;
frost$core$String* _19;
frost$core$Object* _20;
frost$core$String** _22;
frost$core$String* _23;
frost$core$Object* _24;
frost$core$String** _26;
frost$io$InputStream* _29;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryInputStream.frost:20
_1 = (frost$core$Int) {0u};
_2 = &param0->index;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryInputStream.frost:28
_5 = &param1->data;
_6 = *_5;
_7 = ((frost$core$UInt8*) _6);
_8 = &param0->data;
*_8 = _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryInputStream.frost:29
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int from MemoryInputStream.frost:29:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:143
_13 = &param1->_length;
_14 = *_13;
_16 = &param0->length;
*_16 = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryInputStream.frost:30
_19 = param1;
_20 = ((frost$core$Object*) _19);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = &param0->string;
_23 = *_22;
_24 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = &param0->string;
*_26 = _19;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryInputStream.frost:31
_29 = ((frost$io$InputStream*) param0);
frost$io$InputStream$init(_29);
return;

}
frost$core$UInt8$nullable frost$io$MemoryInputStream$read$R$frost$core$UInt8$Q(frost$io$MemoryInputStream* param0) {

frost$core$UInt8 local0;
frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int* _3;
frost$core$Int _4;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _9;
frost$core$UInt8** _12;
frost$core$UInt8* _13;
frost$core$Int* _14;
frost$core$Int _15;
frost$core$Int64 _16;
int64_t _17;
frost$core$UInt8 _18;
frost$core$Int* _21;
frost$core$Int _22;
frost$core$Int _23;
int64_t _24;
int64_t _25;
int64_t _26;
frost$core$Int _27;
frost$core$Int* _28;
frost$core$UInt8 _31;
frost$core$UInt8$nullable _32;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryInputStream.frost:36
_1 = &param0->index;
_2 = *_1;
_3 = &param0->length;
_4 = *_3;
_5 = _2.value;
_6 = _4.value;
_7 = _5 < _6;
_8 = (frost$core$Bit) {_7};
_9 = _8.value;
if (_9) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryInputStream.frost:37
_12 = &param0->data;
_13 = *_12;
_14 = &param0->index;
_15 = *_14;
_16 = frost$core$Int64$init$frost$core$Int(_15);
_17 = _16.value;
_18 = _13[_17];
*(&local0) = _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryInputStream.frost:38
_21 = &param0->index;
_22 = *_21;
_23 = (frost$core$Int) {1u};
_24 = _22.value;
_25 = _23.value;
_26 = _24 + _25;
_27 = (frost$core$Int) {_26};
_28 = &param0->index;
*_28 = _27;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryInputStream.frost:39
_31 = *(&local0);
_32 = ((frost$core$UInt8$nullable) { _31, true });
return _32;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryInputStream.frost:41
return ((frost$core$UInt8$nullable) { .nonnull = false });

}
void frost$io$MemoryInputStream$cleanup(frost$io$MemoryInputStream* param0) {

frost$io$InputStream* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryInputStream.frost:9
_1 = ((frost$io$InputStream*) param0);
frost$io$InputStream$cleanup(_1);
_3 = &param0->string;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}






