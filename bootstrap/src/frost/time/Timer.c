#include "frost/time/Timer.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Real64.h"


static frost$core$String $s1;
frost$time$Timer$class_type frost$time$Timer$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$time$Timer$cleanup, frost$time$Timer$setup, frost$time$Timer$destroy, frost$time$Timer$elapsed$R$frost$core$Real64, frost$time$Timer$now$R$builtin_float64, frost$time$Timer$reset} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x74\x69\x6d\x65\x2e\x54\x69\x6d\x65\x72", 16, -8526916439102428213, NULL };

void frost$time$Timer$init(frost$time$Timer* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/time/Timer.frost:12
frost$core$Real64 $tmp2 = (frost$core$Real64) {0.0};
frost$core$Real64* $tmp3 = &param0->basis;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/time/Timer.frost:15
frost$time$Timer$setup(param0);
return;

}
void frost$time$Timer$cleanup(frost$time$Timer* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/time/Timer.frost:20
frost$time$Timer$destroy(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/time/Timer.frost:19
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
frost$core$Real64 frost$time$Timer$elapsed$R$frost$core$Real64(frost$time$Timer* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/time/Timer.frost:36
double $tmp4 = frost$time$Timer$now$R$builtin_float64(param0);
frost$core$Real64 $tmp5 = (frost$core$Real64) {$tmp4};
frost$core$Real64* $tmp6 = &param0->basis;
frost$core$Real64 $tmp7 = *$tmp6;
double $tmp8 = $tmp5.value;
double $tmp9 = $tmp7.value;
double $tmp10 = $tmp8 - $tmp9;
frost$core$Real64 $tmp11 = (frost$core$Real64) {$tmp10};
return $tmp11;

}
void frost$time$Timer$reset(frost$time$Timer* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/time/Timer.frost:47
double $tmp12 = frost$time$Timer$now$R$builtin_float64(param0);
frost$core$Real64 $tmp13 = (frost$core$Real64) {$tmp12};
frost$core$Real64* $tmp14 = &param0->basis;
*$tmp14 = $tmp13;
return;

}






