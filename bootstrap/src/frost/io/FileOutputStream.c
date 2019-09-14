#include "frost/io/FileOutputStream.h"
#include "frost/io/OutputStream.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Error.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
frost$io$FileOutputStream$class_type frost$io$FileOutputStream$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$io$OutputStream$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$io$FileOutputStream$cleanup, frost$io$FileOutputStream$write$frost$core$UInt8$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt16$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt32$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$UInt64$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int8$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int16$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int32$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Int64$R$frost$core$Error$Q, frost$io$FileOutputStream$write$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q, frost$io$OutputStream$write$frost$core$Char8$R$frost$core$Error$Q, frost$io$OutputStream$print$frost$core$String$R$frost$core$Error$Q, frost$io$OutputStream$print$frost$core$Object$R$frost$core$Error$Q, frost$io$OutputStream$printLine$frost$core$String$R$frost$core$Error$Q, frost$io$OutputStream$printLine$frost$core$Object$R$frost$core$Error$Q, frost$io$OutputStream$printLine$R$frost$core$Error$Q, frost$io$FileOutputStream$flush$R$frost$core$Error$Q, frost$io$FileOutputStream$close$R$frost$core$Error$Q} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 25, 5640649218337482570, NULL };

void frost$io$FileOutputStream$init(void* rawSelf) {
frost$io$FileOutputStream* param0 = (frost$io$FileOutputStream*) rawSelf;

frost$io$OutputStream* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/FileOutputStream.frost:15
_1 = ((frost$io$OutputStream*) param0);
frost$io$OutputStream$init(_1);
return;

}
void frost$io$FileOutputStream$cleanup(void* rawSelf) {
frost$io$FileOutputStream* param0 = (frost$io$FileOutputStream*) rawSelf;

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
frost$io$OutputStream* _22;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/FileOutputStream.frost:21
_1 = &param0->closeOnCleanup;
_2 = *_1;
_3 = _2.value;
if (_3) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/FileOutputStream.frost:22
_6 = frost$io$FileOutputStream$close$R$frost$core$Error$Q(param0);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/FileOutputStream.frost:20
_22 = ((frost$io$OutputStream*) param0);
frost$io$OutputStream$cleanup(_22);
return;

}






