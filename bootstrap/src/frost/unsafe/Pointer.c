#include "frost/unsafe/Pointer.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) void frost$unsafe$Pointer$cleanup$shim(frost$core$Object* p0) {
    frost$unsafe$Pointer$cleanup(((frost$unsafe$Pointer$wrapper*) p0)->value);

}
__attribute__((weak)) frost$core$Object* frost$unsafe$Pointer$get$R$frost$unsafe$Pointer$T$shim(frost$core$Object* p0) {
    frost$core$Object* result = frost$unsafe$Pointer$get$R$frost$unsafe$Pointer$T(((frost$unsafe$Pointer$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$unsafe$Pointer$set$frost$unsafe$Pointer$T$shim(frost$core$Object* p0, frost$core$Object* p1) {
    frost$unsafe$Pointer$set$frost$unsafe$Pointer$T(((frost$unsafe$Pointer$wrapper*) p0)->value, p1);

}
__attribute__((weak)) frost$core$Object* frost$unsafe$Pointer$$IDX$frost$core$Int$R$frost$unsafe$Pointer$T$shim(frost$core$Object* p0, frost$core$Int p1, int64_t pointerSize) {
    frost$core$Object* result = frost$unsafe$Pointer$$IDX$frost$core$Int$R$frost$unsafe$Pointer$T(((frost$unsafe$Pointer$wrapper*) p0)->value, p1, pointerSize);

    return result;
}
__attribute__((weak)) void frost$unsafe$Pointer$$IDXEQ$frost$core$Int$frost$unsafe$Pointer$T$shim(frost$core$Object* p0, frost$core$Int p1, frost$core$Object* p2, int64_t pointerSize) {
    frost$unsafe$Pointer$$IDXEQ$frost$core$Int$frost$unsafe$Pointer$T(((frost$unsafe$Pointer$wrapper*) p0)->value, p1, p2, pointerSize);

}
__attribute__((weak)) frost$unsafe$Pointer frost$unsafe$Pointer$realloc$frost$core$Int$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$T$GT$shim(frost$core$Object* p0, frost$core$Int p1, frost$core$Int p2, int64_t pointerSize) {
    frost$unsafe$Pointer result = frost$unsafe$Pointer$realloc$frost$core$Int$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$T$GT(((frost$unsafe$Pointer$wrapper*) p0)->value, p1, p2, pointerSize);

    return result;
}
__attribute__((weak)) frost$unsafe$Pointer frost$unsafe$Pointer$$ADD$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$T$GT$shim(frost$core$Object* p0, frost$core$Int p1, int64_t pointerSize) {
    frost$unsafe$Pointer result = frost$unsafe$Pointer$$ADD$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$T$GT(((frost$unsafe$Pointer$wrapper*) p0)->value, p1, pointerSize);

    return result;
}
__attribute__((weak)) frost$unsafe$Pointer frost$unsafe$Pointer$$SUB$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$T$GT$shim(frost$core$Object* p0, frost$core$Int p1, int64_t pointerSize) {
    frost$unsafe$Pointer result = frost$unsafe$Pointer$$SUB$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$T$GT(((frost$unsafe$Pointer$wrapper*) p0)->value, p1, pointerSize);

    return result;
}
__attribute__((weak)) void frost$unsafe$Pointer$destroy$shim(frost$core$Object* p0) {
    frost$unsafe$Pointer$destroy(((frost$unsafe$Pointer$wrapper*) p0)->value);

}
__attribute__((weak)) frost$core$Int frost$unsafe$Pointer$get_asInt$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$unsafe$Pointer$get_asInt$R$frost$core$Int(((frost$unsafe$Pointer$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$unsafe$Pointer$clear$shim(frost$core$Object* p0) {
    frost$unsafe$Pointer$clear(((frost$unsafe$Pointer$wrapper*) p0)->value);

}
__attribute__((weak)) void frost$unsafe$Pointer$clear$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$unsafe$Pointer$clear$frost$core$Int(((frost$unsafe$Pointer$wrapper*) p0)->value, p1);

}
__attribute__((weak)) frost$core$Object* frost$unsafe$Pointer$convertTo$R$frost$unsafe$Pointer$convertTo$T$shim(frost$core$Object* p0) {
    frost$core$Object* result = frost$unsafe$Pointer$convertTo$R$frost$unsafe$Pointer$convertTo$T(((frost$unsafe$Pointer$wrapper*) p0)->value);

    return result;
}

static frost$core$String $s1;
frost$unsafe$Pointer$class_type frost$unsafe$Pointer$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$unsafe$Pointer$cleanup$shim, frost$unsafe$Pointer$get$R$frost$unsafe$Pointer$T$shim, frost$unsafe$Pointer$set$frost$unsafe$Pointer$T$shim, frost$unsafe$Pointer$$IDX$frost$core$Int$R$frost$unsafe$Pointer$T$shim, frost$unsafe$Pointer$$IDXEQ$frost$core$Int$frost$unsafe$Pointer$T$shim, frost$unsafe$Pointer$realloc$frost$core$Int$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$T$GT$shim, frost$unsafe$Pointer$$ADD$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$T$GT$shim, frost$unsafe$Pointer$$SUB$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$T$GT$shim, frost$unsafe$Pointer$destroy$shim, frost$unsafe$Pointer$get_asInt$R$frost$core$Int$shim, frost$unsafe$Pointer$clear$shim, frost$unsafe$Pointer$clear$frost$core$Int$shim, frost$unsafe$Pointer$convertTo$R$frost$unsafe$Pointer$convertTo$T$shim} };

static frost$core$String $s2;
frost$unsafe$Pointer$wrapperclass_type frost$unsafe$Pointer$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$unsafe$Pointer$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x50\x6f\x69\x6e\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -7296718770870589834, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x50\x6f\x69\x6e\x74\x65\x72\x2e\x67\x65\x74\x28\x29\x20\x73\x68\x6f\x75\x6c\x64\x20\x68\x61\x76\x65\x20\x62\x65\x65\x6e\x20\x63\x6f\x6d\x70\x69\x6c\x65\x64\x20\x61\x73\x20\x61\x6e\x20\x69\x6e\x74\x72\x69\x6e\x73\x69\x63", 55, 6095871859088815593, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x50\x6f\x69\x6e\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -7296718770870589834, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x50\x6f\x69\x6e\x74\x65\x72\x2e\x73\x65\x74\x28\x29\x20\x73\x68\x6f\x75\x6c\x64\x20\x68\x61\x76\x65\x20\x62\x65\x65\x6e\x20\x63\x6f\x6d\x70\x69\x6c\x65\x64\x20\x61\x73\x20\x61\x6e\x20\x69\x6e\x74\x72\x69\x6e\x73\x69\x63", 55, -2991547648363387435, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x50\x6f\x69\x6e\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -7296718770870589834, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x50\x6f\x69\x6e\x74\x65\x72\x5b\x5d\x20\x73\x68\x6f\x75\x6c\x64\x20\x68\x61\x76\x65\x20\x62\x65\x65\x6e\x20\x63\x6f\x6d\x70\x69\x6c\x65\x64\x20\x61\x73\x20\x61\x6e\x20\x69\x6e\x74\x72\x69\x6e\x73\x69\x63", 51, 655337260701079568, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x50\x6f\x69\x6e\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -7296718770870589834, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x50\x6f\x69\x6e\x74\x65\x72\x5b\x5d\x3a\x3d\x20\x73\x68\x6f\x75\x6c\x64\x20\x68\x61\x76\x65\x20\x62\x65\x65\x6e\x20\x63\x6f\x6d\x70\x69\x6c\x65\x64\x20\x61\x73\x20\x61\x6e\x20\x69\x6e\x74\x72\x69\x6e\x73\x69\x63", 53, 4106432127423382309, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x50\x6f\x69\x6e\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -7296718770870589834, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x50\x6f\x69\x6e\x74\x65\x72\x2e\x63\x6c\x65\x61\x72\x28\x29\x20\x73\x68\x6f\x75\x6c\x64\x20\x68\x61\x76\x65\x20\x62\x65\x65\x6e\x20\x63\x6f\x6d\x70\x69\x6c\x65\x64\x20\x61\x73\x20\x61\x6e\x20\x69\x6e\x74\x72\x69\x6e\x73\x69\x63", 57, -1524204468135857972, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x50\x6f\x69\x6e\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -7296718770870589834, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x50\x6f\x69\x6e\x74\x65\x72\x2e\x63\x6c\x65\x61\x72\x28\x29\x20\x73\x68\x6f\x75\x6c\x64\x20\x68\x61\x76\x65\x20\x62\x65\x65\x6e\x20\x63\x6f\x6d\x70\x69\x6c\x65\x64\x20\x61\x73\x20\x61\x6e\x20\x69\x6e\x74\x72\x69\x6e\x73\x69\x63", 57, -1524204468135857972, NULL };

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t param0) {

frost$unsafe$Pointer local0;
int64_t* _1;
frost$unsafe$Pointer _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_1 = &(&local0)->value;
*_1 = param0;
_3 = *(&local0);
return _3;

}
frost$unsafe$Pointer frost$unsafe$Pointer$init$frost$core$Int(frost$core$Int param0) {

frost$unsafe$Pointer local0;
int64_t _1;
int64_t* _2;
frost$unsafe$Pointer _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:38
_1 = param0.value;
_2 = &(&local0)->value;
*_2 = _1;
_4 = *(&local0);
return _4;

}
frost$unsafe$Pointer frost$unsafe$Pointer$alloc$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$T$GT(frost$core$Int param0, int64_t param1) {

frost$unsafe$Pointer local0;
frost$unsafe$Pointer local1;
int64_t _1;
int64_t _2;
int64_t _3;
int64_t* _6;
frost$unsafe$Pointer _8;
frost$unsafe$Pointer _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_1 = param0.value;
_2 = _1 * param1;
_3 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_2);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_6 = &(&local1)->value;
*_6 = _3;
_8 = *(&local1);
*(&local0) = _8;
_11 = *(&local0);
return _11;

}
frost$core$Object* frost$unsafe$Pointer$get$R$frost$unsafe$Pointer$T(frost$unsafe$Pointer param0) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:56
_1 = (frost$core$Int) {56u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3, _1, &$s4);
abort(); // unreachable

}
void frost$unsafe$Pointer$set$frost$unsafe$Pointer$T(frost$unsafe$Pointer param0, frost$core$Object* param1) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:65
_1 = (frost$core$Int) {65u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _1, &$s6);
abort(); // unreachable

}
frost$core$Object* frost$unsafe$Pointer$$IDX$frost$core$Int$R$frost$unsafe$Pointer$T(frost$unsafe$Pointer param0, frost$core$Int param1, int64_t param2) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:73
_1 = (frost$core$Int) {73u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _1, &$s8);
abort(); // unreachable

}
void frost$unsafe$Pointer$$IDXEQ$frost$core$Int$frost$unsafe$Pointer$T(frost$unsafe$Pointer param0, frost$core$Int param1, frost$core$Object* param2, int64_t param3) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:83
_1 = (frost$core$Int) {83u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _1, &$s10);
abort(); // unreachable

}
frost$unsafe$Pointer frost$unsafe$Pointer$realloc$frost$core$Int$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$T$GT(frost$unsafe$Pointer param0, frost$core$Int param1, frost$core$Int param2, int64_t param3) {

frost$unsafe$Pointer local0;
frost$unsafe$Pointer local1;
int64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
int64_t _5;
int64_t _6;
int64_t* _9;
frost$unsafe$Pointer _11;
frost$unsafe$Pointer _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:93
_1 = param0.value;
_2 = param1.value;
_3 = _2 * param3;
_4 = param2.value;
_5 = _4 * param3;
_6 = frost$core$Frost$realloc$builtin_int$builtin_int$builtin_int$R$builtin_int(_1, _3, _5);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:93:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_9 = &(&local1)->value;
*_9 = _6;
_11 = *(&local1);
*(&local0) = _11;
_14 = *(&local0);
return _14;

}
frost$unsafe$Pointer frost$unsafe$Pointer$$ADD$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$T$GT(frost$unsafe$Pointer param0, frost$core$Int param1, int64_t param2) {

int64_t local0;
int64_t local1;
frost$unsafe$Pointer local2;
frost$unsafe$Pointer local3;
int64_t _1;
int64_t _6;
int64_t _7;
int64_t _8;
int64_t _9;
int64_t _10;
int64_t* _13;
frost$unsafe$Pointer _15;
frost$unsafe$Pointer _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_1 = param1.value;
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local1) = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_6 = param0.value;
_7 = *(&local0);
_8 = *(&local1);
_9 = _7 * _8;
_10 = _6 + _9;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_13 = &(&local3)->value;
*_13 = _10;
_15 = *(&local3);
*(&local2) = _15;
_18 = *(&local2);
return _18;

}
frost$unsafe$Pointer frost$unsafe$Pointer$$SUB$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$T$GT(frost$unsafe$Pointer param0, frost$core$Int param1, int64_t param2) {

int64_t local0;
int64_t local1;
frost$unsafe$Pointer local2;
frost$unsafe$Pointer local3;
int64_t _1;
int64_t _6;
int64_t _7;
int64_t _8;
int64_t _9;
int64_t _10;
int64_t* _13;
frost$unsafe$Pointer _15;
frost$unsafe$Pointer _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:118
_1 = param1.value;
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:119
*(&local1) = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:120
_6 = param0.value;
_7 = *(&local0);
_8 = *(&local1);
_9 = _7 * _8;
_10 = _6 - _9;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:120:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_13 = &(&local3)->value;
*_13 = _10;
_15 = *(&local3);
*(&local2) = _15;
_18 = *(&local2);
return _18;

}
void frost$unsafe$Pointer$destroy(frost$unsafe$Pointer param0) {

int64_t _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:132
_1 = param0.value;
frost$core$Frost$destroy$builtin_int(_1);
return;

}
frost$core$Int frost$unsafe$Pointer$get_asInt$R$frost$core$Int(frost$unsafe$Pointer param0) {

int64_t _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_1 = param0.value;
_2 = (frost$core$Int) {_1};
return _2;

}
void frost$unsafe$Pointer$clear(frost$unsafe$Pointer param0) {

return;

}
void frost$unsafe$Pointer$clear$frost$core$Int(frost$unsafe$Pointer param0, frost$core$Int param1) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:156
_1 = (frost$core$Int) {156u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, _1, &$s12);
abort(); // unreachable

}
frost$core$Object* frost$unsafe$Pointer$convertTo$R$frost$unsafe$Pointer$convertTo$T(frost$unsafe$Pointer param0) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:181
_1 = (frost$core$Int) {181u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _1, &$s14);
abort(); // unreachable

}
void frost$unsafe$Pointer$cleanup(frost$unsafe$Pointer param0) {

return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




