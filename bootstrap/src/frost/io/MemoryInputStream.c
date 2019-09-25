#include "frost/io/MemoryInputStream.h"
#include "frost/io/InputStream.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt8.h"
#include "frost/unsafe/Pointer.h"
#include "frost/core/Int64.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
frost$io$MemoryInputStream$class_type frost$io$MemoryInputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$io$InputStream$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$MemoryInputStream$cleanup, frost$io$MemoryInputStream$read$R$frost$core$UInt8$Q, frost$io$InputStream$read$R$frost$core$UInt16$Q, frost$io$InputStream$read$R$frost$core$UInt32$Q, frost$io$InputStream$read$R$frost$core$UInt64$Q, frost$io$InputStream$read$R$frost$core$Int8$Q, frost$io$InputStream$read$R$frost$core$Int16$Q, frost$io$InputStream$read$R$frost$core$Int32$Q, frost$io$InputStream$read$R$frost$core$Int64$Q, frost$io$InputStream$read$R$frost$core$Char8$Q, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$readFully$R$frost$core$String, frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT, frost$io$InputStream$readLine$R$frost$core$String$Q, frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int$GT, frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT, frost$io$InputStream$close$R$frost$core$Error$Q} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4d\x65\x6d\x6f\x72\x79\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 26, 6900884650380365222, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x6d\x6f\x72\x79\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 23, -7734902068321511850, NULL };

void frost$io$MemoryInputStream$init$frost$core$String(void* rawSelf, frost$core$String* param1) {
frost$io$MemoryInputStream* param0 = (frost$io$MemoryInputStream*) rawSelf;

frost$core$Int _1;
frost$core$Int* _2;
frost$core$Bit _5;
bool _6;
frost$core$Int _8;
frost$core$Int* _14;
frost$core$Int _15;
frost$core$Int* _17;
frost$core$String* _20;
frost$core$Object* _21;
frost$core$String** _23;
frost$core$String* _24;
frost$core$Object* _25;
frost$core$String** _27;
frost$io$InputStream* _30;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryInputStream.frost:20
_1 = (frost$core$Int) {0u};
_2 = &param0->index;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryInputStream.frost:29
_5 = (frost$core$Bit) {false};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block2:;
_8 = (frost$core$Int) {29u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2, _8);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryInputStream.frost:30
// begin inline call to function frost.core.String.get_byteLength():frost.core.Int from MemoryInputStream.frost:30:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:492
_14 = &param1->_length;
_15 = *_14;
_17 = &param0->length;
*_17 = _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryInputStream.frost:31
_20 = param1;
_21 = ((frost$core$Object*) _20);
frost$core$Frost$ref$frost$core$Object$Q(_21);
_23 = &param0->string;
_24 = *_23;
_25 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = &param0->string;
*_27 = _20;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryInputStream.frost:32
_30 = ((frost$io$InputStream*) param0);
frost$io$InputStream$init(_30);
return;

}
frost$core$UInt8$nullable frost$io$MemoryInputStream$read$R$frost$core$UInt8$Q(void* rawSelf) {
frost$io$MemoryInputStream* param0 = (frost$io$MemoryInputStream*) rawSelf;

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
frost$unsafe$Pointer* _12;
frost$unsafe$Pointer _13;
int64_t _14;
frost$core$Int* _15;
frost$core$Int _16;
frost$core$Int64 _17;
int64_t _18;
frost$core$UInt8 _19;
frost$core$Int* _22;
frost$core$Int _23;
frost$core$Int _24;
int64_t _25;
int64_t _26;
int64_t _27;
frost$core$Int _28;
frost$core$Int* _29;
frost$core$UInt8 _32;
frost$core$UInt8$nullable _33;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryInputStream.frost:37
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryInputStream.frost:38
_12 = &param0->data;
_13 = *_12;
_14 = _13.value;
_15 = &param0->index;
_16 = *_15;
_17 = frost$core$Int64$init$frost$core$Int(_16);
_18 = _17.value;
_19 = ((frost$core$UInt8*)_14)[_18];
*(&local0) = _19;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryInputStream.frost:39
_22 = &param0->index;
_23 = *_22;
_24 = (frost$core$Int) {1u};
_25 = _23.value;
_26 = _24.value;
_27 = _25 + _26;
_28 = (frost$core$Int) {_27};
_29 = &param0->index;
*_29 = _28;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryInputStream.frost:40
_32 = *(&local0);
_33 = ((frost$core$UInt8$nullable) { _32, true });
return _33;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/MemoryInputStream.frost:42
return ((frost$core$UInt8$nullable) { .nonnull = false });

}
void frost$io$MemoryInputStream$cleanup(void* rawSelf) {
frost$io$MemoryInputStream* param0 = (frost$io$MemoryInputStream*) rawSelf;

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


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




