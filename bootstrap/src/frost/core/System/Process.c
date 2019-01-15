#include "frost/core/System/Process.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/io/OutputStream.h"
#include "frost/core/Frost.h"
#include "frost/io/InputStream.h"


static frost$core$String $s1;
frost$core$System$Process$class_type frost$core$System$Process$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, frost$core$System$Process$cleanup, frost$core$System$Process$waitFor$R$frost$core$Int64} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73", 25, 3505769073572454810, NULL };

void frost$core$System$Process$init(frost$core$System$Process* param0) {

return;

}
void frost$core$System$Process$cleanup(frost$core$System$Process* param0) {

// line 12
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$OutputStream** $tmp2 = &param0->input;
frost$io$OutputStream* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$io$InputStream** $tmp4 = &param0->output;
frost$io$InputStream* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$io$InputStream** $tmp6 = &param0->error;
frost$io$InputStream* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
return;

}






