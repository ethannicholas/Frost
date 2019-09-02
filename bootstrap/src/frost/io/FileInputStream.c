#include "frost/io/FileInputStream.h"
#include "frost/io/InputStream.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Error.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt8.h"
#include "frost/core/Int.h"


static frost$core$String $s1;
frost$io$FileInputStream$class_type frost$io$FileInputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$io$InputStream$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$FileInputStream$cleanup, frost$io$FileInputStream$read$R$frost$core$UInt8$Q, frost$io$InputStream$read$R$frost$core$UInt16$Q, frost$io$InputStream$read$R$frost$core$UInt32$Q, frost$io$InputStream$read$R$frost$core$UInt64$Q, frost$io$InputStream$read$R$frost$core$Int8$Q, frost$io$InputStream$read$R$frost$core$Int16$Q, frost$io$InputStream$read$R$frost$core$Int32$Q, frost$io$InputStream$read$R$frost$core$Int64$Q, frost$io$InputStream$read$R$frost$core$Char8$Q, frost$io$FileInputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Int, frost$io$InputStream$readFully$R$frost$core$String, frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT, frost$io$InputStream$readLine$R$frost$core$String$Q, frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int$GT, frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT, frost$io$FileInputStream$close$R$frost$core$Error$Q, frost$io$FileInputStream$readImpl$R$frost$core$UInt8$Q, frost$io$FileInputStream$readImpl$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Int} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 24, -3636756628673725731, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 21, 6617104028383100701, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x72\x65\x61\x64\x28\x62\x75\x66\x66\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3e\x2c\x20\x6d\x61\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 144, 7822379495546044427, NULL };

void frost$io$FileInputStream$init(frost$io$FileInputStream* param0) {

frost$io$InputStream* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/FileInputStream.frost:15
_1 = ((frost$io$InputStream*) param0);
frost$io$InputStream$init(_1);
return;

}
void frost$io$FileInputStream$cleanup(frost$io$FileInputStream* param0) {

frost$core$Error* local0 = NULL;
frost$core$Bit* _1;
frost$core$Bit _2;
bool _3;
frost$core$Error* _6;
frost$core$Object* _8;
frost$core$Error* _10;
frost$core$Object* _11;
frost$core$Object* _14;
frost$core$Error* _16;
frost$core$Object* _17;
frost$io$InputStream* _22;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/FileInputStream.frost:21
_1 = &param0->closeOnCleanup;
_2 = *_1;
_3 = _2.value;
if (_3) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/FileInputStream.frost:22
_6 = frost$io$FileInputStream$close$R$frost$core$Error$Q(param0);
*(&local0) = ((frost$core$Error*) NULL);
_8 = ((frost$core$Object*) _6);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = *(&local0);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
*(&local0) = _6;
_14 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = *(&local0);
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
*(&local0) = ((frost$core$Error*) NULL);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/FileInputStream.frost:20
_22 = ((frost$io$InputStream*) param0);
frost$io$InputStream$cleanup(_22);
return;

}
frost$core$UInt8$nullable frost$io$FileInputStream$read$R$frost$core$UInt8$Q(frost$io$FileInputStream* param0) {

frost$core$UInt8$nullable _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/FileInputStream.frost:32
frost$io$FileInputStream$readImpl$R$frost$core$UInt8$Q(&_1, param0);
return _1;

}
frost$core$Int frost$io$FileInputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Int(frost$io$FileInputStream* param0, frost$core$UInt8* param1, frost$core$Int param2) {

frost$core$Int local0;
frost$core$Int _14;
frost$core$Int _0;
frost$core$Int _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _9;
frost$core$Int _11;
frost$core$Int _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/FileInputStream.frost:41
frost$io$FileInputStream$readImpl$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Int(&_14, param0, param1, param2);
*(&local0) = _14;
_0 = *(&local0);
_1 = (frost$core$Int) {0u};
_2 = _0.value;
_3 = _1.value;
_4 = _2 >= _3;
_5 = (frost$core$Bit) {_4};
_9 = _5.value;
if (_9) goto block2; else goto block3;
block2:;
_11 = *(&local0);
return _11;
block3:;
_6 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2, _6, &$s3);
abort(); // unreachable

}






