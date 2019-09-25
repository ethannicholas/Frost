#include "frost/time/Timer.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Real64.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
frost$time$Timer$class_type frost$time$Timer$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$time$Timer$cleanup, frost$time$Timer$setup, frost$time$Timer$destroy, frost$time$Timer$elapsed$R$frost$core$Real64, frost$time$Timer$now$R$builtin_float64, frost$time$Timer$reset} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x74\x69\x6d\x65\x2e\x54\x69\x6d\x65\x72", 16, -8526916439102428213, NULL };

void frost$time$Timer$init(void* rawSelf) {
frost$time$Timer* param0 = (frost$time$Timer*) rawSelf;

frost$core$Real64 _1;
frost$core$Real64* _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/time/Timer.frost:12
_1 = (frost$core$Real64) {0.0};
_2 = &param0->basis;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/time/Timer.frost:15
frost$time$Timer$setup(param0);
return;

}
void frost$time$Timer$cleanup(void* rawSelf) {
frost$time$Timer* param0 = (frost$time$Timer*) rawSelf;

frost$core$Object* _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/time/Timer.frost:20
frost$time$Timer$destroy(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/time/Timer.frost:19
_3 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_3);
return;

}
frost$core$Real64 frost$time$Timer$elapsed$R$frost$core$Real64(void* rawSelf) {
frost$time$Timer* param0 = (frost$time$Timer*) rawSelf;

double _1;
frost$core$Real64 _2;
frost$core$Real64* _3;
frost$core$Real64 _4;
double _5;
double _6;
double _7;
frost$core$Real64 _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/time/Timer.frost:36
_1 = frost$time$Timer$now$R$builtin_float64(param0);
_2 = (frost$core$Real64) {_1};
_3 = &param0->basis;
_4 = *_3;
_5 = _2.value;
_6 = _4.value;
_7 = _5 - _6;
_8 = (frost$core$Real64) {_7};
return _8;

}
void frost$time$Timer$reset(void* rawSelf) {
frost$time$Timer* param0 = (frost$time$Timer*) rawSelf;

double _1;
frost$core$Real64 _2;
frost$core$Real64* _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/time/Timer.frost:47
_1 = frost$time$Timer$now$R$builtin_float64(param0);
_2 = (frost$core$Real64) {_1};
_3 = &param0->basis;
*_3 = _2;
return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




