#include "frost/unsafe/NewPointer.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"

__attribute__((weak)) void frost$unsafe$NewPointer$cleanup$shim(frost$core$Object* p0) {
    frost$unsafe$NewPointer$cleanup(((frost$unsafe$NewPointer$wrapper*) p0)->value);

}
__attribute__((weak)) frost$core$Object* frost$unsafe$NewPointer$get$R$frost$unsafe$NewPointer$T$shim(frost$core$Object* p0) {
    frost$core$Object* result = frost$unsafe$NewPointer$get$R$frost$unsafe$NewPointer$T(((frost$unsafe$NewPointer$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$unsafe$NewPointer$set$frost$unsafe$NewPointer$T$shim(frost$core$Object* p0, frost$core$Object* p1) {
    frost$unsafe$NewPointer$set$frost$unsafe$NewPointer$T(((frost$unsafe$NewPointer$wrapper*) p0)->value, p1);

}
__attribute__((weak)) frost$core$Object* frost$unsafe$NewPointer$$IDX$frost$core$Int$R$frost$unsafe$NewPointer$T$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Object* result = frost$unsafe$NewPointer$$IDX$frost$core$Int$R$frost$unsafe$NewPointer$T(((frost$unsafe$NewPointer$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) void frost$unsafe$NewPointer$$IDXEQ$frost$core$Int$frost$unsafe$NewPointer$T$shim(frost$core$Object* p0, frost$core$Int p1, frost$core$Object* p2) {
    frost$unsafe$NewPointer$$IDXEQ$frost$core$Int$frost$unsafe$NewPointer$T(((frost$unsafe$NewPointer$wrapper*) p0)->value, p1, p2);

}
__attribute__((weak)) frost$unsafe$NewPointer frost$unsafe$NewPointer$realloc$frost$core$Int$R$frost$unsafe$NewPointer$LTfrost$unsafe$NewPointer$T$GT$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$unsafe$NewPointer result = frost$unsafe$NewPointer$realloc$frost$core$Int$R$frost$unsafe$NewPointer$LTfrost$unsafe$NewPointer$T$GT(((frost$unsafe$NewPointer$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$unsafe$NewPointer frost$unsafe$NewPointer$$ADD$frost$core$Int$R$frost$unsafe$NewPointer$LTfrost$unsafe$NewPointer$T$GT$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$unsafe$NewPointer result = frost$unsafe$NewPointer$$ADD$frost$core$Int$R$frost$unsafe$NewPointer$LTfrost$unsafe$NewPointer$T$GT(((frost$unsafe$NewPointer$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) void frost$unsafe$NewPointer$destroy$shim(frost$core$Object* p0) {
    frost$unsafe$NewPointer$destroy(((frost$unsafe$NewPointer$wrapper*) p0)->value);

}
__attribute__((weak)) frost$core$Int frost$unsafe$NewPointer$get_asInt$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$unsafe$NewPointer$get_asInt$R$frost$core$Int(((frost$unsafe$NewPointer$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$unsafe$NewPointer$clear$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$unsafe$NewPointer$clear$frost$core$Int(((frost$unsafe$NewPointer$wrapper*) p0)->value, p1);

}
__attribute__((weak)) frost$core$Object* frost$unsafe$NewPointer$convertTo$R$frost$unsafe$NewPointer$convertTo$T$shim(frost$core$Object* p0) {
    frost$core$Object* result = frost$unsafe$NewPointer$convertTo$R$frost$unsafe$NewPointer$convertTo$T(((frost$unsafe$NewPointer$wrapper*) p0)->value);

    return result;
}

static frost$core$String $s1;
frost$unsafe$NewPointer$class_type frost$unsafe$NewPointer$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$unsafe$NewPointer$cleanup$shim, frost$unsafe$NewPointer$get$R$frost$unsafe$NewPointer$T$shim, frost$unsafe$NewPointer$set$frost$unsafe$NewPointer$T$shim, frost$unsafe$NewPointer$$IDX$frost$core$Int$R$frost$unsafe$NewPointer$T$shim, frost$unsafe$NewPointer$$IDXEQ$frost$core$Int$frost$unsafe$NewPointer$T$shim, frost$unsafe$NewPointer$realloc$frost$core$Int$R$frost$unsafe$NewPointer$LTfrost$unsafe$NewPointer$T$GT$shim, frost$unsafe$NewPointer$$ADD$frost$core$Int$R$frost$unsafe$NewPointer$LTfrost$unsafe$NewPointer$T$GT$shim, frost$unsafe$NewPointer$destroy$shim, frost$unsafe$NewPointer$get_asInt$R$frost$core$Int$shim, frost$unsafe$NewPointer$clear$frost$core$Int$shim, frost$unsafe$NewPointer$convertTo$R$frost$unsafe$NewPointer$convertTo$T$shim} };

static frost$core$String $s2;
frost$unsafe$NewPointer$wrapperclass_type frost$unsafe$NewPointer$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$unsafe$NewPointer$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x4e\x65\x77\x50\x6f\x69\x6e\x74\x65\x72", 23, -8918889413604455028, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x4e\x65\x77\x50\x6f\x69\x6e\x74\x65\x72", 23, -8918889413604455028, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x65\x77\x50\x6f\x69\x6e\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -3344521244054493430, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x65\x77\x50\x6f\x69\x6e\x74\x65\x72\x2e\x67\x65\x74\x28\x29\x20\x73\x68\x6f\x75\x6c\x64\x20\x68\x61\x76\x65\x20\x62\x65\x65\x6e\x20\x63\x6f\x6d\x70\x69\x6c\x65\x64\x20\x61\x73\x20\x61\x6e\x20\x69\x6e\x74\x72\x69\x6e\x73\x69\x63", 58, 463947567583373581, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x65\x77\x50\x6f\x69\x6e\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -3344521244054493430, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x65\x77\x50\x6f\x69\x6e\x74\x65\x72\x2e\x73\x65\x74\x28\x29\x20\x73\x68\x6f\x75\x6c\x64\x20\x68\x61\x76\x65\x20\x62\x65\x65\x6e\x20\x63\x6f\x6d\x70\x69\x6c\x65\x64\x20\x61\x73\x20\x61\x6e\x20\x69\x6e\x74\x72\x69\x6e\x73\x69\x63", 58, 3094461792507052673, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x65\x77\x50\x6f\x69\x6e\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -3344521244054493430, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x65\x77\x50\x6f\x69\x6e\x74\x65\x72\x5b\x5d\x20\x73\x68\x6f\x75\x6c\x64\x20\x68\x61\x76\x65\x20\x62\x65\x65\x6e\x20\x63\x6f\x6d\x70\x69\x6c\x65\x64\x20\x61\x73\x20\x61\x6e\x20\x69\x6e\x74\x72\x69\x6e\x73\x69\x63", 54, -6793404421657587092, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x65\x77\x50\x6f\x69\x6e\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -3344521244054493430, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x65\x77\x50\x6f\x69\x6e\x74\x65\x72\x5b\x5d\x3a\x3d\x20\x73\x68\x6f\x75\x6c\x64\x20\x68\x61\x76\x65\x20\x62\x65\x65\x6e\x20\x63\x6f\x6d\x70\x69\x6c\x65\x64\x20\x61\x73\x20\x61\x6e\x20\x69\x6e\x74\x72\x69\x6e\x73\x69\x63", 56, -1909221400962642343, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x65\x77\x50\x6f\x69\x6e\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -3344521244054493430, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x65\x77\x50\x6f\x69\x6e\x74\x65\x72\x2e\x63\x6c\x65\x61\x72\x28\x29\x20\x73\x68\x6f\x75\x6c\x64\x20\x68\x61\x76\x65\x20\x62\x65\x65\x6e\x20\x63\x6f\x6d\x70\x69\x6c\x65\x64\x20\x61\x73\x20\x61\x6e\x20\x69\x6e\x74\x72\x69\x6e\x73\x69\x63", 60, 6430363023652537944, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x65\x77\x50\x6f\x69\x6e\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, -3344521244054493430, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x65\x77\x50\x6f\x69\x6e\x74\x65\x72\x2e\x63\x6c\x65\x61\x72\x28\x29\x20\x73\x68\x6f\x75\x6c\x64\x20\x68\x61\x76\x65\x20\x62\x65\x65\x6e\x20\x63\x6f\x6d\x70\x69\x6c\x65\x64\x20\x61\x73\x20\x61\x6e\x20\x69\x6e\x74\x72\x69\x6e\x73\x69\x63", 60, 6430363023652537944, NULL };

frost$unsafe$NewPointer frost$unsafe$NewPointer$init$builtin_int(int64_t param0) {

frost$unsafe$NewPointer local0;
int64_t* _1;
frost$unsafe$NewPointer _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:31
_1 = &(&local0)->value;
*_1 = param0;
_3 = *(&local0);
return _3;

}
frost$unsafe$NewPointer frost$unsafe$NewPointer$init$frost$core$Int(frost$core$Int param0) {

frost$unsafe$NewPointer local0;
int64_t _1;
int64_t* _2;
frost$unsafe$NewPointer _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:38
_1 = param0.value;
_2 = &(&local0)->value;
*_2 = _1;
_4 = *(&local0);
return _4;

}
frost$unsafe$NewPointer frost$unsafe$NewPointer$alloc$frost$core$Int$R$frost$unsafe$NewPointer$LTfrost$unsafe$NewPointer$T$GT(frost$core$Int param0) {

frost$unsafe$NewPointer local0;
frost$unsafe$NewPointer local1;
int64_t _1;
int64_t _2;
int64_t _3;
int64_t* _6;
frost$unsafe$NewPointer _8;
frost$unsafe$NewPointer _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:49
_1 = param0.value;
_2 = _1 * param1;
_3 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_2);
// begin inline call to frost.unsafe.NewPointer.init(value:builtin_int):frost.unsafe.NewPointer<frost.unsafe.NewPointer.T> from NewPointer.frost:49:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:31
_6 = &(&local1)->value;
*_6 = _3;
_8 = *(&local1);
*(&local0) = _8;
_11 = *(&local0);
return _11;

}
frost$core$Object* frost$unsafe$NewPointer$get$R$frost$unsafe$NewPointer$T(frost$unsafe$NewPointer param0) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:56
_1 = (frost$core$Int) {56u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3, _1, &$s4);
abort(); // unreachable

}
void frost$unsafe$NewPointer$set$frost$unsafe$NewPointer$T(frost$unsafe$NewPointer param0, frost$core$Object* param1) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:65
_1 = (frost$core$Int) {65u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _1, &$s6);
abort(); // unreachable

}
frost$core$Object* frost$unsafe$NewPointer$$IDX$frost$core$Int$R$frost$unsafe$NewPointer$T(frost$unsafe$NewPointer param0, frost$core$Int param1) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:73
_1 = (frost$core$Int) {73u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _1, &$s8);
abort(); // unreachable

}
void frost$unsafe$NewPointer$$IDXEQ$frost$core$Int$frost$unsafe$NewPointer$T(frost$unsafe$NewPointer param0, frost$core$Int param1, frost$core$Object* param2) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:83
_1 = (frost$core$Int) {83u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _1, &$s10);
abort(); // unreachable

}
frost$unsafe$NewPointer frost$unsafe$NewPointer$realloc$frost$core$Int$R$frost$unsafe$NewPointer$LTfrost$unsafe$NewPointer$T$GT(frost$unsafe$NewPointer param0, frost$core$Int param1) {

frost$unsafe$NewPointer local0;
frost$unsafe$NewPointer local1;
int64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
int64_t* _7;
frost$unsafe$NewPointer _9;
frost$unsafe$NewPointer _12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:93
_1 = param0.value;
_2 = param1.value;
_3 = _2 * param2;
_4 = frost$core$Frost$realloc$builtin_int$builtin_int$R$builtin_int(_1, _3);
// begin inline call to frost.unsafe.NewPointer.init(value:builtin_int):frost.unsafe.NewPointer<frost.unsafe.NewPointer.T> from NewPointer.frost:93:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:31
_7 = &(&local1)->value;
*_7 = _4;
_9 = *(&local1);
*(&local0) = _9;
_12 = *(&local0);
return _12;

}
frost$unsafe$NewPointer frost$unsafe$NewPointer$$ADD$frost$core$Int$R$frost$unsafe$NewPointer$LTfrost$unsafe$NewPointer$T$GT(frost$unsafe$NewPointer param0, frost$core$Int param1) {

int64_t local0;
int64_t local1;
frost$unsafe$NewPointer local2;
frost$unsafe$NewPointer local3;
int64_t _1;
int64_t _6;
int64_t _7;
int64_t _8;
int64_t _9;
int64_t _10;
int64_t* _13;
frost$unsafe$NewPointer _15;
frost$unsafe$NewPointer _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:104
_1 = param1.value;
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:105
*(&local1) = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:106
_6 = param0.value;
_7 = *(&local0);
_8 = *(&local1);
_9 = _7 * _8;
_10 = _6 + _9;
// begin inline call to frost.unsafe.NewPointer.init(value:builtin_int):frost.unsafe.NewPointer<frost.unsafe.NewPointer.T> from NewPointer.frost:106:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:31
_13 = &(&local3)->value;
*_13 = _10;
_15 = *(&local3);
*(&local2) = _15;
_18 = *(&local2);
return _18;

}
void frost$unsafe$NewPointer$destroy(frost$unsafe$NewPointer param0) {

int64_t _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:118
_1 = param0.value;
frost$core$Frost$destroy$builtin_int(_1);
return;

}
frost$core$Int frost$unsafe$NewPointer$get_asInt$R$frost$core$Int(frost$unsafe$NewPointer param0) {

int64_t _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:123
_1 = param0.value;
_2 = (frost$core$Int) {_1};
return _2;

}
void frost$unsafe$NewPointer$clear$frost$core$Int(frost$unsafe$NewPointer param0, frost$core$Int param1) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:133
_1 = (frost$core$Int) {133u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, _1, &$s12);
abort(); // unreachable

}
frost$core$Object* frost$unsafe$NewPointer$convertTo$R$frost$unsafe$NewPointer$convertTo$T(frost$unsafe$NewPointer param0) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:158
_1 = (frost$core$Int) {158u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _1, &$s14);
abort(); // unreachable

}
void frost$unsafe$NewPointer$cleanup(frost$unsafe$NewPointer param0) {

return;

}






