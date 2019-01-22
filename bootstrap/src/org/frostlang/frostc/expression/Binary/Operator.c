#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "org/frostlang/frostc/parser/Token.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$expression$Binary$Operator$$EQ$org$frostlang$frostc$expression$Binary$Operator$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$expression$Binary$Operator$$EQ$org$frostlang$frostc$expression$Binary$Operator$R$frost$core$Bit(((org$frostlang$frostc$expression$Binary$Operator$wrapper*) p0)->value, ((org$frostlang$frostc$expression$Binary$Operator$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$expression$Binary$Operator$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$frostc$expression$Binary$Operator$get_asString$R$frost$core$String(((org$frostlang$frostc$expression$Binary$Operator$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Bit org$frostlang$frostc$expression$Binary$Operator$get_isAssignment$R$frost$core$Bit$shim(frost$core$Object* p0) {
    frost$core$Bit result = org$frostlang$frostc$expression$Binary$Operator$get_isAssignment$R$frost$core$Bit(((org$frostlang$frostc$expression$Binary$Operator$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) org$frostlang$frostc$expression$Binary$Operator org$frostlang$frostc$expression$Binary$Operator$removeAssignment$R$org$frostlang$frostc$expression$Binary$Operator$shim(frost$core$Object* p0) {
    org$frostlang$frostc$expression$Binary$Operator result = org$frostlang$frostc$expression$Binary$Operator$removeAssignment$R$org$frostlang$frostc$expression$Binary$Operator(((org$frostlang$frostc$expression$Binary$Operator$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void org$frostlang$frostc$expression$Binary$Operator$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$expression$Binary$Operator$cleanup(((org$frostlang$frostc$expression$Binary$Operator$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$expression$Binary$Operator$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$expression$Binary$Operator$$EQ$org$frostlang$frostc$expression$Binary$Operator$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$expression$Binary$Operator$class_type org$frostlang$frostc$expression$Binary$Operator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$expression$Binary$Operator$_frost$core$Equatable, { org$frostlang$frostc$expression$Binary$Operator$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$expression$Binary$Operator$get_isAssignment$R$frost$core$Bit$shim, org$frostlang$frostc$expression$Binary$Operator$removeAssignment$R$org$frostlang$frostc$expression$Binary$Operator$shim, org$frostlang$frostc$expression$Binary$Operator$cleanup$shim, org$frostlang$frostc$expression$Binary$Operator$$EQ$org$frostlang$frostc$expression$Binary$Operator$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$expression$Binary$Operator$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$expression$Binary$Operator$$EQ$org$frostlang$frostc$expression$Binary$Operator$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$expression$Binary$Operator$wrapperclass_type org$frostlang$frostc$expression$Binary$Operator$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$expression$Binary$Operator$wrapper_frost$core$Equatable, { org$frostlang$frostc$expression$Binary$Operator$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79\x2e\x4f\x70\x65\x72\x61\x74\x6f\x72", 47, 159949939897021557, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79\x2e\x4f\x70\x65\x72\x61\x74\x6f\x72", 47, 159949939897021557, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x62\x69\x6e\x61\x72\x79\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x3a\x20", 23, 6035464278993928290, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x63\x6f\x6d\x70\x6f\x75\x6e\x64\x20\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x3a\x20", 36, 1908177115814907675, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s348 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s353 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s358 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x2f", 2, 14995, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x2f", 2, 14995, NULL };
static frost$core$String $s367 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s368 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s372 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s373 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s388 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s392 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s397 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s402 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s407 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x7c", 2, 22849, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x7c", 2, 22849, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s413 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x26", 2, 14077, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x26", 2, 14077, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7e", 1, 227, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7e", 1, 227, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7e\x7e", 2, 23053, NULL };
static frost$core$String $s428 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7e\x7e", 2, 23053, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s437 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static frost$core$String $s443 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static frost$core$String $s447 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s452 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d\x3d", 3, 1373156, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d\x3d", 3, 1373156, NULL };
static frost$core$String $s457 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static frost$core$String $s462 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x3d", 2, 16120, NULL };
static frost$core$String $s463 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x3d", 2, 16120, NULL };
static frost$core$String $s467 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b\x3d", 2, 14605, NULL };
static frost$core$String $s468 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b\x3d", 2, 14605, NULL };
static frost$core$String $s472 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3d", 2, 14807, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3d", 2, 14807, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x3d", 2, 14504, NULL };
static frost$core$String $s478 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x3d", 2, 14504, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x3d", 2, 15009, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x3d", 2, 15009, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x2f\x3d", 3, 1514556, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x2f\x3d", 3, 1514556, NULL };
static frost$core$String $s492 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25\x3d", 2, 13999, NULL };
static frost$core$String $s493 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25\x3d", 2, 13999, NULL };
static frost$core$String $s497 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x3d", 2, 22786, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x3d", 2, 22786, NULL };
static frost$core$String $s502 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x7c\x3d", 3, 2307810, NULL };
static frost$core$String $s503 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x7c\x3d", 3, 2307810, NULL };
static frost$core$String $s507 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x3d", 2, 14100, NULL };
static frost$core$String $s508 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x3d", 2, 14100, NULL };
static frost$core$String $s512 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x26\x3d", 3, 1421838, NULL };
static frost$core$String $s513 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x26\x3d", 3, 1421838, NULL };
static frost$core$String $s517 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7e\x3d", 2, 22988, NULL };
static frost$core$String $s518 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7e\x3d", 2, 22988, NULL };
static frost$core$String $s522 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7e\x7e\x3d", 3, 2328414, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7e\x7e\x3d", 3, 2328414, NULL };
static frost$core$String $s527 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c\x3d", 3, 1648482, NULL };
static frost$core$String $s528 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c\x3d", 3, 1648482, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e\x3d", 3, 1669086, NULL };
static frost$core$String $s533 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e\x3d", 3, 1669086, NULL };

org$frostlang$frostc$expression$Binary$Operator org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator(org$frostlang$frostc$parser$Token param0) {

// line 60
org$frostlang$frostc$parser$Token$Kind $tmp3 = param0.kind;
frost$core$Int64 $tmp4 = $tmp3.$rawValue;
frost$core$Int64 $tmp5 = (frost$core$Int64) {55};
frost$core$Bit $tmp6 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp5);
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block2; else goto block3;
block2:;
// line 61
frost$core$Int64 $tmp8 = (frost$core$Int64) {0};
org$frostlang$frostc$expression$Binary$Operator $tmp9 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp8);
return $tmp9;
block3:;
frost$core$Int64 $tmp10 = (frost$core$Int64) {56};
frost$core$Bit $tmp11 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp10);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block4; else goto block5;
block4:;
// line 62
frost$core$Int64 $tmp13 = (frost$core$Int64) {1};
org$frostlang$frostc$expression$Binary$Operator $tmp14 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp13);
return $tmp14;
block5:;
frost$core$Int64 $tmp15 = (frost$core$Int64) {57};
frost$core$Bit $tmp16 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp15);
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block6; else goto block7;
block6:;
// line 63
frost$core$Int64 $tmp18 = (frost$core$Int64) {2};
org$frostlang$frostc$expression$Binary$Operator $tmp19 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp18);
return $tmp19;
block7:;
frost$core$Int64 $tmp20 = (frost$core$Int64) {58};
frost$core$Bit $tmp21 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp20);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block8; else goto block9;
block8:;
// line 64
frost$core$Int64 $tmp23 = (frost$core$Int64) {3};
org$frostlang$frostc$expression$Binary$Operator $tmp24 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp23);
return $tmp24;
block9:;
frost$core$Int64 $tmp25 = (frost$core$Int64) {59};
frost$core$Bit $tmp26 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp25);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block10; else goto block11;
block10:;
// line 65
frost$core$Int64 $tmp28 = (frost$core$Int64) {4};
org$frostlang$frostc$expression$Binary$Operator $tmp29 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp28);
return $tmp29;
block11:;
frost$core$Int64 $tmp30 = (frost$core$Int64) {60};
frost$core$Bit $tmp31 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp30);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block12; else goto block13;
block12:;
// line 66
frost$core$Int64 $tmp33 = (frost$core$Int64) {5};
org$frostlang$frostc$expression$Binary$Operator $tmp34 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp33);
return $tmp34;
block13:;
frost$core$Int64 $tmp35 = (frost$core$Int64) {62};
frost$core$Bit $tmp36 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp35);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block14; else goto block15;
block14:;
// line 67
frost$core$Int64 $tmp38 = (frost$core$Int64) {6};
org$frostlang$frostc$expression$Binary$Operator $tmp39 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp38);
return $tmp39;
block15:;
frost$core$Int64 $tmp40 = (frost$core$Int64) {63};
frost$core$Bit $tmp41 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp40);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block16; else goto block17;
block16:;
// line 68
frost$core$Int64 $tmp43 = (frost$core$Int64) {7};
org$frostlang$frostc$expression$Binary$Operator $tmp44 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp43);
return $tmp44;
block17:;
frost$core$Int64 $tmp45 = (frost$core$Int64) {67};
frost$core$Bit $tmp46 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp45);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block18; else goto block19;
block18:;
// line 69
frost$core$Int64 $tmp48 = (frost$core$Int64) {8};
org$frostlang$frostc$expression$Binary$Operator $tmp49 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp48);
return $tmp49;
block19:;
frost$core$Int64 $tmp50 = (frost$core$Int64) {66};
frost$core$Bit $tmp51 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp50);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block20; else goto block21;
block20:;
// line 70
frost$core$Int64 $tmp53 = (frost$core$Int64) {9};
org$frostlang$frostc$expression$Binary$Operator $tmp54 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp53);
return $tmp54;
block21:;
frost$core$Int64 $tmp55 = (frost$core$Int64) {69};
frost$core$Bit $tmp56 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp55);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block22; else goto block23;
block22:;
// line 71
frost$core$Int64 $tmp58 = (frost$core$Int64) {10};
org$frostlang$frostc$expression$Binary$Operator $tmp59 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp58);
return $tmp59;
block23:;
frost$core$Int64 $tmp60 = (frost$core$Int64) {68};
frost$core$Bit $tmp61 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp60);
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block24; else goto block25;
block24:;
// line 72
frost$core$Int64 $tmp63 = (frost$core$Int64) {11};
org$frostlang$frostc$expression$Binary$Operator $tmp64 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp63);
return $tmp64;
block25:;
frost$core$Int64 $tmp65 = (frost$core$Int64) {72};
frost$core$Bit $tmp66 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp65);
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block26; else goto block27;
block26:;
// line 73
frost$core$Int64 $tmp68 = (frost$core$Int64) {12};
org$frostlang$frostc$expression$Binary$Operator $tmp69 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp68);
return $tmp69;
block27:;
frost$core$Int64 $tmp70 = (frost$core$Int64) {73};
frost$core$Bit $tmp71 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp70);
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block28; else goto block29;
block28:;
// line 74
frost$core$Int64 $tmp73 = (frost$core$Int64) {13};
org$frostlang$frostc$expression$Binary$Operator $tmp74 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp73);
return $tmp74;
block29:;
frost$core$Int64 $tmp75 = (frost$core$Int64) {70};
frost$core$Bit $tmp76 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp75);
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block30; else goto block31;
block30:;
// line 75
frost$core$Int64 $tmp78 = (frost$core$Int64) {14};
org$frostlang$frostc$expression$Binary$Operator $tmp79 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp78);
return $tmp79;
block31:;
frost$core$Int64 $tmp80 = (frost$core$Int64) {71};
frost$core$Bit $tmp81 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp80);
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block32; else goto block33;
block32:;
// line 76
frost$core$Int64 $tmp83 = (frost$core$Int64) {15};
org$frostlang$frostc$expression$Binary$Operator $tmp84 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp83);
return $tmp84;
block33:;
frost$core$Int64 $tmp85 = (frost$core$Int64) {74};
frost$core$Bit $tmp86 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp85);
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block34; else goto block35;
block34:;
// line 77
frost$core$Int64 $tmp88 = (frost$core$Int64) {16};
org$frostlang$frostc$expression$Binary$Operator $tmp89 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp88);
return $tmp89;
block35:;
frost$core$Int64 $tmp90 = (frost$core$Int64) {75};
frost$core$Bit $tmp91 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp90);
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block36; else goto block37;
block36:;
// line 78
frost$core$Int64 $tmp93 = (frost$core$Int64) {17};
org$frostlang$frostc$expression$Binary$Operator $tmp94 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp93);
return $tmp94;
block37:;
frost$core$Int64 $tmp95 = (frost$core$Int64) {76};
frost$core$Bit $tmp96 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp95);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block38; else goto block39;
block38:;
// line 79
frost$core$Int64 $tmp98 = (frost$core$Int64) {18};
org$frostlang$frostc$expression$Binary$Operator $tmp99 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp98);
return $tmp99;
block39:;
frost$core$Int64 $tmp100 = (frost$core$Int64) {1};
frost$core$Bit $tmp101 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp100);
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block40; else goto block41;
block40:;
// line 80
frost$core$Int64 $tmp103 = (frost$core$Int64) {19};
org$frostlang$frostc$expression$Binary$Operator $tmp104 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp103);
return $tmp104;
block41:;
frost$core$Int64 $tmp105 = (frost$core$Int64) {105};
frost$core$Bit $tmp106 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp105);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block42; else goto block43;
block42:;
// line 81
frost$core$Int64 $tmp108 = (frost$core$Int64) {20};
org$frostlang$frostc$expression$Binary$Operator $tmp109 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp108);
return $tmp109;
block43:;
frost$core$Int64 $tmp110 = (frost$core$Int64) {77};
frost$core$Bit $tmp111 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp110);
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block44; else goto block45;
block44:;
// line 82
frost$core$Int64 $tmp113 = (frost$core$Int64) {24};
org$frostlang$frostc$expression$Binary$Operator $tmp114 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp113);
return $tmp114;
block45:;
frost$core$Int64 $tmp115 = (frost$core$Int64) {64};
frost$core$Bit $tmp116 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp115);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block46; else goto block47;
block46:;
// line 83
frost$core$Int64 $tmp118 = (frost$core$Int64) {21};
org$frostlang$frostc$expression$Binary$Operator $tmp119 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp118);
return $tmp119;
block47:;
frost$core$Int64 $tmp120 = (frost$core$Int64) {65};
frost$core$Bit $tmp121 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp120);
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block48; else goto block49;
block48:;
// line 84
frost$core$Int64 $tmp123 = (frost$core$Int64) {22};
org$frostlang$frostc$expression$Binary$Operator $tmp124 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp123);
return $tmp124;
block49:;
frost$core$Int64 $tmp125 = (frost$core$Int64) {93};
frost$core$Bit $tmp126 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp125);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block50; else goto block51;
block50:;
// line 85
frost$core$Int64 $tmp128 = (frost$core$Int64) {23};
org$frostlang$frostc$expression$Binary$Operator $tmp129 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp128);
return $tmp129;
block51:;
frost$core$Int64 $tmp130 = (frost$core$Int64) {78};
frost$core$Bit $tmp131 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp130);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block52; else goto block53;
block52:;
// line 86
frost$core$Int64 $tmp133 = (frost$core$Int64) {25};
org$frostlang$frostc$expression$Binary$Operator $tmp134 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp133);
return $tmp134;
block53:;
frost$core$Int64 $tmp135 = (frost$core$Int64) {79};
frost$core$Bit $tmp136 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp135);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block54; else goto block55;
block54:;
// line 87
frost$core$Int64 $tmp138 = (frost$core$Int64) {26};
org$frostlang$frostc$expression$Binary$Operator $tmp139 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp138);
return $tmp139;
block55:;
frost$core$Int64 $tmp140 = (frost$core$Int64) {80};
frost$core$Bit $tmp141 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp140);
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block56; else goto block57;
block56:;
// line 88
frost$core$Int64 $tmp143 = (frost$core$Int64) {27};
org$frostlang$frostc$expression$Binary$Operator $tmp144 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp143);
return $tmp144;
block57:;
frost$core$Int64 $tmp145 = (frost$core$Int64) {81};
frost$core$Bit $tmp146 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp145);
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block58; else goto block59;
block58:;
// line 89
frost$core$Int64 $tmp148 = (frost$core$Int64) {28};
org$frostlang$frostc$expression$Binary$Operator $tmp149 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp148);
return $tmp149;
block59:;
frost$core$Int64 $tmp150 = (frost$core$Int64) {83};
frost$core$Bit $tmp151 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp150);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block60; else goto block61;
block60:;
// line 90
frost$core$Int64 $tmp153 = (frost$core$Int64) {29};
org$frostlang$frostc$expression$Binary$Operator $tmp154 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp153);
return $tmp154;
block61:;
frost$core$Int64 $tmp155 = (frost$core$Int64) {82};
frost$core$Bit $tmp156 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp155);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block62; else goto block63;
block62:;
// line 91
frost$core$Int64 $tmp158 = (frost$core$Int64) {30};
org$frostlang$frostc$expression$Binary$Operator $tmp159 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp158);
return $tmp159;
block63:;
frost$core$Int64 $tmp160 = (frost$core$Int64) {85};
frost$core$Bit $tmp161 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp160);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block64; else goto block65;
block64:;
// line 92
frost$core$Int64 $tmp163 = (frost$core$Int64) {31};
org$frostlang$frostc$expression$Binary$Operator $tmp164 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp163);
return $tmp164;
block65:;
frost$core$Int64 $tmp165 = (frost$core$Int64) {86};
frost$core$Bit $tmp166 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp165);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block66; else goto block67;
block66:;
// line 93
frost$core$Int64 $tmp168 = (frost$core$Int64) {32};
org$frostlang$frostc$expression$Binary$Operator $tmp169 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp168);
return $tmp169;
block67:;
frost$core$Int64 $tmp170 = (frost$core$Int64) {87};
frost$core$Bit $tmp171 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp170);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block68; else goto block69;
block68:;
// line 94
frost$core$Int64 $tmp173 = (frost$core$Int64) {33};
org$frostlang$frostc$expression$Binary$Operator $tmp174 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp173);
return $tmp174;
block69:;
frost$core$Int64 $tmp175 = (frost$core$Int64) {88};
frost$core$Bit $tmp176 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp175);
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block70; else goto block71;
block70:;
// line 95
frost$core$Int64 $tmp178 = (frost$core$Int64) {34};
org$frostlang$frostc$expression$Binary$Operator $tmp179 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp178);
return $tmp179;
block71:;
frost$core$Int64 $tmp180 = (frost$core$Int64) {89};
frost$core$Bit $tmp181 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp180);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block72; else goto block73;
block72:;
// line 96
frost$core$Int64 $tmp183 = (frost$core$Int64) {35};
org$frostlang$frostc$expression$Binary$Operator $tmp184 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp183);
return $tmp184;
block73:;
frost$core$Int64 $tmp185 = (frost$core$Int64) {90};
frost$core$Bit $tmp186 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp185);
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block74; else goto block75;
block74:;
// line 97
frost$core$Int64 $tmp188 = (frost$core$Int64) {36};
org$frostlang$frostc$expression$Binary$Operator $tmp189 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp188);
return $tmp189;
block75:;
frost$core$Int64 $tmp190 = (frost$core$Int64) {91};
frost$core$Bit $tmp191 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp190);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block76; else goto block77;
block76:;
// line 98
frost$core$Int64 $tmp193 = (frost$core$Int64) {37};
org$frostlang$frostc$expression$Binary$Operator $tmp194 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp193);
return $tmp194;
block77:;
frost$core$Int64 $tmp195 = (frost$core$Int64) {92};
frost$core$Bit $tmp196 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4, $tmp195);
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block78; else goto block79;
block78:;
// line 99
frost$core$Int64 $tmp198 = (frost$core$Int64) {38};
org$frostlang$frostc$expression$Binary$Operator $tmp199 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp198);
return $tmp199;
block79:;
// line 100
frost$core$Bit $tmp200 = frost$core$Bit$init$builtin_bit(false);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block80; else goto block81;
block81:;
frost$core$Int64 $tmp202 = (frost$core$Int64) {100};
org$frostlang$frostc$parser$Token$Kind $tmp203 = param0.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp204;
$tmp204 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp204->value = $tmp203;
frost$core$String* $tmp205 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s206, ((frost$core$Object*) $tmp204));
frost$core$String* $tmp207 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp205, &$s208);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s209, $tmp202, $tmp207);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
abort(); // unreachable
block80:;
// line 100
goto block82;
block82:;
goto block82;
block83:;
goto block1;
block1:;
goto block84;
block84:;

}
frost$core$Bit org$frostlang$frostc$expression$Binary$Operator$get_isAssignment$R$frost$core$Bit(org$frostlang$frostc$expression$Binary$Operator param0) {

// line 106
frost$core$Int64 $tmp210 = param0.$rawValue;
frost$core$Int64 $tmp211 = (frost$core$Int64) {24};
frost$core$Bit $tmp212 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp210, $tmp211);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp214 = (frost$core$Int64) {25};
frost$core$Bit $tmp215 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp210, $tmp214);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp217 = (frost$core$Int64) {26};
frost$core$Bit $tmp218 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp210, $tmp217);
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp220 = (frost$core$Int64) {27};
frost$core$Bit $tmp221 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp210, $tmp220);
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block2; else goto block6;
block6:;
frost$core$Int64 $tmp223 = (frost$core$Int64) {28};
frost$core$Bit $tmp224 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp210, $tmp223);
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block2; else goto block7;
block7:;
frost$core$Int64 $tmp226 = (frost$core$Int64) {29};
frost$core$Bit $tmp227 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp210, $tmp226);
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block2; else goto block8;
block8:;
frost$core$Int64 $tmp229 = (frost$core$Int64) {30};
frost$core$Bit $tmp230 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp210, $tmp229);
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block2; else goto block9;
block9:;
frost$core$Int64 $tmp232 = (frost$core$Int64) {31};
frost$core$Bit $tmp233 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp210, $tmp232);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block2; else goto block10;
block10:;
frost$core$Int64 $tmp235 = (frost$core$Int64) {32};
frost$core$Bit $tmp236 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp210, $tmp235);
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block2; else goto block11;
block11:;
frost$core$Int64 $tmp238 = (frost$core$Int64) {33};
frost$core$Bit $tmp239 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp210, $tmp238);
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block2; else goto block12;
block12:;
frost$core$Int64 $tmp241 = (frost$core$Int64) {34};
frost$core$Bit $tmp242 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp210, $tmp241);
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block2; else goto block13;
block13:;
frost$core$Int64 $tmp244 = (frost$core$Int64) {35};
frost$core$Bit $tmp245 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp210, $tmp244);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block2; else goto block14;
block14:;
frost$core$Int64 $tmp247 = (frost$core$Int64) {36};
frost$core$Bit $tmp248 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp210, $tmp247);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block2; else goto block15;
block15:;
frost$core$Int64 $tmp250 = (frost$core$Int64) {37};
frost$core$Bit $tmp251 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp210, $tmp250);
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block2; else goto block16;
block16:;
frost$core$Int64 $tmp253 = (frost$core$Int64) {38};
frost$core$Bit $tmp254 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp210, $tmp253);
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block2; else goto block17;
block2:;
// line 110
frost$core$Bit $tmp256 = frost$core$Bit$init$builtin_bit(true);
return $tmp256;
block17:;
// line 113
frost$core$Bit $tmp257 = frost$core$Bit$init$builtin_bit(false);
return $tmp257;
block1:;
goto block18;
block18:;

}
org$frostlang$frostc$expression$Binary$Operator org$frostlang$frostc$expression$Binary$Operator$removeAssignment$R$org$frostlang$frostc$expression$Binary$Operator(org$frostlang$frostc$expression$Binary$Operator param0) {

// line 119
frost$core$Int64 $tmp258 = param0.$rawValue;
frost$core$Int64 $tmp259 = (frost$core$Int64) {25};
frost$core$Bit $tmp260 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp258, $tmp259);
bool $tmp261 = $tmp260.value;
if ($tmp261) goto block2; else goto block3;
block2:;
// line 120
frost$core$Int64 $tmp262 = (frost$core$Int64) {0};
org$frostlang$frostc$expression$Binary$Operator $tmp263 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp262);
return $tmp263;
block3:;
frost$core$Int64 $tmp264 = (frost$core$Int64) {26};
frost$core$Bit $tmp265 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp258, $tmp264);
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block4; else goto block5;
block4:;
// line 121
frost$core$Int64 $tmp267 = (frost$core$Int64) {1};
org$frostlang$frostc$expression$Binary$Operator $tmp268 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp267);
return $tmp268;
block5:;
frost$core$Int64 $tmp269 = (frost$core$Int64) {27};
frost$core$Bit $tmp270 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp258, $tmp269);
bool $tmp271 = $tmp270.value;
if ($tmp271) goto block6; else goto block7;
block6:;
// line 122
frost$core$Int64 $tmp272 = (frost$core$Int64) {2};
org$frostlang$frostc$expression$Binary$Operator $tmp273 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp272);
return $tmp273;
block7:;
frost$core$Int64 $tmp274 = (frost$core$Int64) {28};
frost$core$Bit $tmp275 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp258, $tmp274);
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block8; else goto block9;
block8:;
// line 123
frost$core$Int64 $tmp277 = (frost$core$Int64) {3};
org$frostlang$frostc$expression$Binary$Operator $tmp278 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp277);
return $tmp278;
block9:;
frost$core$Int64 $tmp279 = (frost$core$Int64) {29};
frost$core$Bit $tmp280 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp258, $tmp279);
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block10; else goto block11;
block10:;
// line 124
frost$core$Int64 $tmp282 = (frost$core$Int64) {4};
org$frostlang$frostc$expression$Binary$Operator $tmp283 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp282);
return $tmp283;
block11:;
frost$core$Int64 $tmp284 = (frost$core$Int64) {30};
frost$core$Bit $tmp285 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp258, $tmp284);
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block12; else goto block13;
block12:;
// line 125
frost$core$Int64 $tmp287 = (frost$core$Int64) {5};
org$frostlang$frostc$expression$Binary$Operator $tmp288 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp287);
return $tmp288;
block13:;
frost$core$Int64 $tmp289 = (frost$core$Int64) {31};
frost$core$Bit $tmp290 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp258, $tmp289);
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block14; else goto block15;
block14:;
// line 126
frost$core$Int64 $tmp292 = (frost$core$Int64) {12};
org$frostlang$frostc$expression$Binary$Operator $tmp293 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp292);
return $tmp293;
block15:;
frost$core$Int64 $tmp294 = (frost$core$Int64) {32};
frost$core$Bit $tmp295 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp258, $tmp294);
bool $tmp296 = $tmp295.value;
if ($tmp296) goto block16; else goto block17;
block16:;
// line 127
frost$core$Int64 $tmp297 = (frost$core$Int64) {13};
org$frostlang$frostc$expression$Binary$Operator $tmp298 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp297);
return $tmp298;
block17:;
frost$core$Int64 $tmp299 = (frost$core$Int64) {33};
frost$core$Bit $tmp300 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp258, $tmp299);
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block18; else goto block19;
block18:;
// line 128
frost$core$Int64 $tmp302 = (frost$core$Int64) {14};
org$frostlang$frostc$expression$Binary$Operator $tmp303 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp302);
return $tmp303;
block19:;
frost$core$Int64 $tmp304 = (frost$core$Int64) {34};
frost$core$Bit $tmp305 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp258, $tmp304);
bool $tmp306 = $tmp305.value;
if ($tmp306) goto block20; else goto block21;
block20:;
// line 129
frost$core$Int64 $tmp307 = (frost$core$Int64) {15};
org$frostlang$frostc$expression$Binary$Operator $tmp308 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp307);
return $tmp308;
block21:;
frost$core$Int64 $tmp309 = (frost$core$Int64) {35};
frost$core$Bit $tmp310 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp258, $tmp309);
bool $tmp311 = $tmp310.value;
if ($tmp311) goto block22; else goto block23;
block22:;
// line 130
frost$core$Int64 $tmp312 = (frost$core$Int64) {16};
org$frostlang$frostc$expression$Binary$Operator $tmp313 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp312);
return $tmp313;
block23:;
frost$core$Int64 $tmp314 = (frost$core$Int64) {36};
frost$core$Bit $tmp315 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp258, $tmp314);
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block24; else goto block25;
block24:;
// line 131
frost$core$Int64 $tmp317 = (frost$core$Int64) {17};
org$frostlang$frostc$expression$Binary$Operator $tmp318 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp317);
return $tmp318;
block25:;
frost$core$Int64 $tmp319 = (frost$core$Int64) {37};
frost$core$Bit $tmp320 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp258, $tmp319);
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block26; else goto block27;
block26:;
// line 132
frost$core$Int64 $tmp322 = (frost$core$Int64) {18};
org$frostlang$frostc$expression$Binary$Operator $tmp323 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp322);
return $tmp323;
block27:;
frost$core$Int64 $tmp324 = (frost$core$Int64) {38};
frost$core$Bit $tmp325 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp258, $tmp324);
bool $tmp326 = $tmp325.value;
if ($tmp326) goto block28; else goto block29;
block28:;
// line 133
frost$core$Int64 $tmp327 = (frost$core$Int64) {19};
org$frostlang$frostc$expression$Binary$Operator $tmp328 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp327);
return $tmp328;
block29:;
// line 134
frost$core$Bit $tmp329 = frost$core$Bit$init$builtin_bit(false);
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp331 = (frost$core$Int64) {134};
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp332;
$tmp332 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp332->value = param0;
frost$core$String* $tmp333 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s334, ((frost$core$Object*) $tmp332));
frost$core$String* $tmp335 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp333, &$s336);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s337, $tmp331, $tmp335);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
abort(); // unreachable
block30:;
// line 134
goto block32;
block32:;
goto block32;
block33:;
goto block1;
block1:;
goto block34;
block34:;

}
frost$core$String* org$frostlang$frostc$expression$Binary$Operator$get_asString$R$frost$core$String(org$frostlang$frostc$expression$Binary$Operator param0) {

// line 140
frost$core$Int64 $tmp338 = param0.$rawValue;
frost$core$Int64 $tmp339 = (frost$core$Int64) {0};
frost$core$Bit $tmp340 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp339);
bool $tmp341 = $tmp340.value;
if ($tmp341) goto block2; else goto block3;
block2:;
// line 141
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s342));
return &$s343;
block3:;
frost$core$Int64 $tmp344 = (frost$core$Int64) {1};
frost$core$Bit $tmp345 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp344);
bool $tmp346 = $tmp345.value;
if ($tmp346) goto block4; else goto block5;
block4:;
// line 142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s347));
return &$s348;
block5:;
frost$core$Int64 $tmp349 = (frost$core$Int64) {2};
frost$core$Bit $tmp350 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp349);
bool $tmp351 = $tmp350.value;
if ($tmp351) goto block6; else goto block7;
block6:;
// line 143
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s352));
return &$s353;
block7:;
frost$core$Int64 $tmp354 = (frost$core$Int64) {3};
frost$core$Bit $tmp355 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp354);
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block8; else goto block9;
block8:;
// line 144
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s357));
return &$s358;
block9:;
frost$core$Int64 $tmp359 = (frost$core$Int64) {4};
frost$core$Bit $tmp360 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp359);
bool $tmp361 = $tmp360.value;
if ($tmp361) goto block10; else goto block11;
block10:;
// line 145
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s362));
return &$s363;
block11:;
frost$core$Int64 $tmp364 = (frost$core$Int64) {5};
frost$core$Bit $tmp365 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp364);
bool $tmp366 = $tmp365.value;
if ($tmp366) goto block12; else goto block13;
block12:;
// line 146
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s367));
return &$s368;
block13:;
frost$core$Int64 $tmp369 = (frost$core$Int64) {6};
frost$core$Bit $tmp370 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp369);
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block14; else goto block15;
block14:;
// line 147
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s372));
return &$s373;
block15:;
frost$core$Int64 $tmp374 = (frost$core$Int64) {7};
frost$core$Bit $tmp375 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp374);
bool $tmp376 = $tmp375.value;
if ($tmp376) goto block16; else goto block17;
block16:;
// line 148
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s377));
return &$s378;
block17:;
frost$core$Int64 $tmp379 = (frost$core$Int64) {8};
frost$core$Bit $tmp380 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp379);
bool $tmp381 = $tmp380.value;
if ($tmp381) goto block18; else goto block19;
block18:;
// line 149
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s382));
return &$s383;
block19:;
frost$core$Int64 $tmp384 = (frost$core$Int64) {9};
frost$core$Bit $tmp385 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp384);
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block20; else goto block21;
block20:;
// line 150
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s387));
return &$s388;
block21:;
frost$core$Int64 $tmp389 = (frost$core$Int64) {10};
frost$core$Bit $tmp390 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp389);
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block22; else goto block23;
block22:;
// line 151
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s392));
return &$s393;
block23:;
frost$core$Int64 $tmp394 = (frost$core$Int64) {11};
frost$core$Bit $tmp395 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp394);
bool $tmp396 = $tmp395.value;
if ($tmp396) goto block24; else goto block25;
block24:;
// line 152
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s397));
return &$s398;
block25:;
frost$core$Int64 $tmp399 = (frost$core$Int64) {12};
frost$core$Bit $tmp400 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp399);
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block26; else goto block27;
block26:;
// line 153
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s402));
return &$s403;
block27:;
frost$core$Int64 $tmp404 = (frost$core$Int64) {13};
frost$core$Bit $tmp405 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp404);
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block28; else goto block29;
block28:;
// line 154
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s407));
return &$s408;
block29:;
frost$core$Int64 $tmp409 = (frost$core$Int64) {14};
frost$core$Bit $tmp410 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp409);
bool $tmp411 = $tmp410.value;
if ($tmp411) goto block30; else goto block31;
block30:;
// line 155
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s412));
return &$s413;
block31:;
frost$core$Int64 $tmp414 = (frost$core$Int64) {15};
frost$core$Bit $tmp415 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp414);
bool $tmp416 = $tmp415.value;
if ($tmp416) goto block32; else goto block33;
block32:;
// line 156
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s417));
return &$s418;
block33:;
frost$core$Int64 $tmp419 = (frost$core$Int64) {16};
frost$core$Bit $tmp420 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp419);
bool $tmp421 = $tmp420.value;
if ($tmp421) goto block34; else goto block35;
block34:;
// line 157
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s422));
return &$s423;
block35:;
frost$core$Int64 $tmp424 = (frost$core$Int64) {17};
frost$core$Bit $tmp425 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp424);
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block36; else goto block37;
block36:;
// line 158
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s427));
return &$s428;
block37:;
frost$core$Int64 $tmp429 = (frost$core$Int64) {18};
frost$core$Bit $tmp430 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp429);
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block38; else goto block39;
block38:;
// line 159
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s432));
return &$s433;
block39:;
frost$core$Int64 $tmp434 = (frost$core$Int64) {19};
frost$core$Bit $tmp435 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp434);
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block40; else goto block41;
block40:;
// line 160
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s437));
return &$s438;
block41:;
frost$core$Int64 $tmp439 = (frost$core$Int64) {20};
frost$core$Bit $tmp440 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp439);
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block42; else goto block43;
block42:;
// line 161
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s442));
return &$s443;
block43:;
frost$core$Int64 $tmp444 = (frost$core$Int64) {21};
frost$core$Bit $tmp445 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp444);
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block44; else goto block45;
block44:;
// line 162
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s447));
return &$s448;
block45:;
frost$core$Int64 $tmp449 = (frost$core$Int64) {22};
frost$core$Bit $tmp450 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp449);
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block46; else goto block47;
block46:;
// line 163
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s452));
return &$s453;
block47:;
frost$core$Int64 $tmp454 = (frost$core$Int64) {23};
frost$core$Bit $tmp455 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp454);
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block48; else goto block49;
block48:;
// line 164
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s457));
return &$s458;
block49:;
frost$core$Int64 $tmp459 = (frost$core$Int64) {24};
frost$core$Bit $tmp460 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp459);
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block50; else goto block51;
block50:;
// line 165
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s462));
return &$s463;
block51:;
frost$core$Int64 $tmp464 = (frost$core$Int64) {25};
frost$core$Bit $tmp465 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp464);
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block52; else goto block53;
block52:;
// line 166
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s467));
return &$s468;
block53:;
frost$core$Int64 $tmp469 = (frost$core$Int64) {26};
frost$core$Bit $tmp470 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp469);
bool $tmp471 = $tmp470.value;
if ($tmp471) goto block54; else goto block55;
block54:;
// line 167
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s472));
return &$s473;
block55:;
frost$core$Int64 $tmp474 = (frost$core$Int64) {27};
frost$core$Bit $tmp475 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp474);
bool $tmp476 = $tmp475.value;
if ($tmp476) goto block56; else goto block57;
block56:;
// line 168
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s477));
return &$s478;
block57:;
frost$core$Int64 $tmp479 = (frost$core$Int64) {28};
frost$core$Bit $tmp480 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp479);
bool $tmp481 = $tmp480.value;
if ($tmp481) goto block58; else goto block59;
block58:;
// line 169
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s482));
return &$s483;
block59:;
frost$core$Int64 $tmp484 = (frost$core$Int64) {29};
frost$core$Bit $tmp485 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp484);
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block60; else goto block61;
block60:;
// line 170
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s487));
return &$s488;
block61:;
frost$core$Int64 $tmp489 = (frost$core$Int64) {30};
frost$core$Bit $tmp490 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp489);
bool $tmp491 = $tmp490.value;
if ($tmp491) goto block62; else goto block63;
block62:;
// line 171
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s492));
return &$s493;
block63:;
frost$core$Int64 $tmp494 = (frost$core$Int64) {31};
frost$core$Bit $tmp495 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp494);
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block64; else goto block65;
block64:;
// line 172
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s497));
return &$s498;
block65:;
frost$core$Int64 $tmp499 = (frost$core$Int64) {32};
frost$core$Bit $tmp500 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp499);
bool $tmp501 = $tmp500.value;
if ($tmp501) goto block66; else goto block67;
block66:;
// line 173
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s502));
return &$s503;
block67:;
frost$core$Int64 $tmp504 = (frost$core$Int64) {33};
frost$core$Bit $tmp505 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp504);
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block68; else goto block69;
block68:;
// line 174
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s507));
return &$s508;
block69:;
frost$core$Int64 $tmp509 = (frost$core$Int64) {34};
frost$core$Bit $tmp510 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp509);
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block70; else goto block71;
block70:;
// line 175
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s512));
return &$s513;
block71:;
frost$core$Int64 $tmp514 = (frost$core$Int64) {35};
frost$core$Bit $tmp515 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp514);
bool $tmp516 = $tmp515.value;
if ($tmp516) goto block72; else goto block73;
block72:;
// line 176
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s517));
return &$s518;
block73:;
frost$core$Int64 $tmp519 = (frost$core$Int64) {36};
frost$core$Bit $tmp520 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp519);
bool $tmp521 = $tmp520.value;
if ($tmp521) goto block74; else goto block75;
block74:;
// line 177
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s522));
return &$s523;
block75:;
frost$core$Int64 $tmp524 = (frost$core$Int64) {37};
frost$core$Bit $tmp525 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp524);
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block76; else goto block77;
block76:;
// line 178
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s527));
return &$s528;
block77:;
frost$core$Int64 $tmp529 = (frost$core$Int64) {38};
frost$core$Bit $tmp530 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp338, $tmp529);
bool $tmp531 = $tmp530.value;
if ($tmp531) goto block78; else goto block1;
block78:;
// line 179
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s532));
return &$s533;
block1:;
// line 181
goto block79;
block79:;
goto block79;
block80:;
goto block81;
block81:;

}
void org$frostlang$frostc$expression$Binary$Operator$cleanup(org$frostlang$frostc$expression$Binary$Operator param0) {

// line 17
frost$core$Int64 $tmp534 = param0.$rawValue;
frost$core$Int64 $tmp535 = (frost$core$Int64) {0};
frost$core$Bit $tmp536 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp535);
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block2; else goto block3;
block2:;
goto block1;
block3:;
frost$core$Int64 $tmp538 = (frost$core$Int64) {1};
frost$core$Bit $tmp539 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp538);
bool $tmp540 = $tmp539.value;
if ($tmp540) goto block4; else goto block5;
block4:;
goto block1;
block5:;
frost$core$Int64 $tmp541 = (frost$core$Int64) {2};
frost$core$Bit $tmp542 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp541);
bool $tmp543 = $tmp542.value;
if ($tmp543) goto block6; else goto block7;
block6:;
goto block1;
block7:;
frost$core$Int64 $tmp544 = (frost$core$Int64) {3};
frost$core$Bit $tmp545 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp544);
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block8; else goto block9;
block8:;
goto block1;
block9:;
frost$core$Int64 $tmp547 = (frost$core$Int64) {4};
frost$core$Bit $tmp548 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp547);
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block10; else goto block11;
block10:;
goto block1;
block11:;
frost$core$Int64 $tmp550 = (frost$core$Int64) {5};
frost$core$Bit $tmp551 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp550);
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block12; else goto block13;
block12:;
goto block1;
block13:;
frost$core$Int64 $tmp553 = (frost$core$Int64) {6};
frost$core$Bit $tmp554 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp553);
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block14; else goto block15;
block14:;
goto block1;
block15:;
frost$core$Int64 $tmp556 = (frost$core$Int64) {7};
frost$core$Bit $tmp557 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp556);
bool $tmp558 = $tmp557.value;
if ($tmp558) goto block16; else goto block17;
block16:;
goto block1;
block17:;
frost$core$Int64 $tmp559 = (frost$core$Int64) {8};
frost$core$Bit $tmp560 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp559);
bool $tmp561 = $tmp560.value;
if ($tmp561) goto block18; else goto block19;
block18:;
goto block1;
block19:;
frost$core$Int64 $tmp562 = (frost$core$Int64) {9};
frost$core$Bit $tmp563 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp562);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block20; else goto block21;
block20:;
goto block1;
block21:;
frost$core$Int64 $tmp565 = (frost$core$Int64) {10};
frost$core$Bit $tmp566 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp565);
bool $tmp567 = $tmp566.value;
if ($tmp567) goto block22; else goto block23;
block22:;
goto block1;
block23:;
frost$core$Int64 $tmp568 = (frost$core$Int64) {11};
frost$core$Bit $tmp569 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp568);
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block24; else goto block25;
block24:;
goto block1;
block25:;
frost$core$Int64 $tmp571 = (frost$core$Int64) {12};
frost$core$Bit $tmp572 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp571);
bool $tmp573 = $tmp572.value;
if ($tmp573) goto block26; else goto block27;
block26:;
goto block1;
block27:;
frost$core$Int64 $tmp574 = (frost$core$Int64) {13};
frost$core$Bit $tmp575 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp574);
bool $tmp576 = $tmp575.value;
if ($tmp576) goto block28; else goto block29;
block28:;
goto block1;
block29:;
frost$core$Int64 $tmp577 = (frost$core$Int64) {14};
frost$core$Bit $tmp578 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp577);
bool $tmp579 = $tmp578.value;
if ($tmp579) goto block30; else goto block31;
block30:;
goto block1;
block31:;
frost$core$Int64 $tmp580 = (frost$core$Int64) {15};
frost$core$Bit $tmp581 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp580);
bool $tmp582 = $tmp581.value;
if ($tmp582) goto block32; else goto block33;
block32:;
goto block1;
block33:;
frost$core$Int64 $tmp583 = (frost$core$Int64) {16};
frost$core$Bit $tmp584 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp583);
bool $tmp585 = $tmp584.value;
if ($tmp585) goto block34; else goto block35;
block34:;
goto block1;
block35:;
frost$core$Int64 $tmp586 = (frost$core$Int64) {17};
frost$core$Bit $tmp587 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp586);
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block36; else goto block37;
block36:;
goto block1;
block37:;
frost$core$Int64 $tmp589 = (frost$core$Int64) {18};
frost$core$Bit $tmp590 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp589);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block38; else goto block39;
block38:;
goto block1;
block39:;
frost$core$Int64 $tmp592 = (frost$core$Int64) {19};
frost$core$Bit $tmp593 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp592);
bool $tmp594 = $tmp593.value;
if ($tmp594) goto block40; else goto block41;
block40:;
goto block1;
block41:;
frost$core$Int64 $tmp595 = (frost$core$Int64) {20};
frost$core$Bit $tmp596 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp595);
bool $tmp597 = $tmp596.value;
if ($tmp597) goto block42; else goto block43;
block42:;
goto block1;
block43:;
frost$core$Int64 $tmp598 = (frost$core$Int64) {21};
frost$core$Bit $tmp599 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp598);
bool $tmp600 = $tmp599.value;
if ($tmp600) goto block44; else goto block45;
block44:;
goto block1;
block45:;
frost$core$Int64 $tmp601 = (frost$core$Int64) {22};
frost$core$Bit $tmp602 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp601);
bool $tmp603 = $tmp602.value;
if ($tmp603) goto block46; else goto block47;
block46:;
goto block1;
block47:;
frost$core$Int64 $tmp604 = (frost$core$Int64) {23};
frost$core$Bit $tmp605 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp604);
bool $tmp606 = $tmp605.value;
if ($tmp606) goto block48; else goto block49;
block48:;
goto block1;
block49:;
frost$core$Int64 $tmp607 = (frost$core$Int64) {24};
frost$core$Bit $tmp608 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp607);
bool $tmp609 = $tmp608.value;
if ($tmp609) goto block50; else goto block51;
block50:;
goto block1;
block51:;
frost$core$Int64 $tmp610 = (frost$core$Int64) {25};
frost$core$Bit $tmp611 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp610);
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block52; else goto block53;
block52:;
goto block1;
block53:;
frost$core$Int64 $tmp613 = (frost$core$Int64) {26};
frost$core$Bit $tmp614 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp613);
bool $tmp615 = $tmp614.value;
if ($tmp615) goto block54; else goto block55;
block54:;
goto block1;
block55:;
frost$core$Int64 $tmp616 = (frost$core$Int64) {27};
frost$core$Bit $tmp617 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp616);
bool $tmp618 = $tmp617.value;
if ($tmp618) goto block56; else goto block57;
block56:;
goto block1;
block57:;
frost$core$Int64 $tmp619 = (frost$core$Int64) {28};
frost$core$Bit $tmp620 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp619);
bool $tmp621 = $tmp620.value;
if ($tmp621) goto block58; else goto block59;
block58:;
goto block1;
block59:;
frost$core$Int64 $tmp622 = (frost$core$Int64) {29};
frost$core$Bit $tmp623 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp622);
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block60; else goto block61;
block60:;
goto block1;
block61:;
frost$core$Int64 $tmp625 = (frost$core$Int64) {30};
frost$core$Bit $tmp626 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp625);
bool $tmp627 = $tmp626.value;
if ($tmp627) goto block62; else goto block63;
block62:;
goto block1;
block63:;
frost$core$Int64 $tmp628 = (frost$core$Int64) {31};
frost$core$Bit $tmp629 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp628);
bool $tmp630 = $tmp629.value;
if ($tmp630) goto block64; else goto block65;
block64:;
goto block1;
block65:;
frost$core$Int64 $tmp631 = (frost$core$Int64) {32};
frost$core$Bit $tmp632 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp631);
bool $tmp633 = $tmp632.value;
if ($tmp633) goto block66; else goto block67;
block66:;
goto block1;
block67:;
frost$core$Int64 $tmp634 = (frost$core$Int64) {33};
frost$core$Bit $tmp635 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp634);
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block68; else goto block69;
block68:;
goto block1;
block69:;
frost$core$Int64 $tmp637 = (frost$core$Int64) {34};
frost$core$Bit $tmp638 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp637);
bool $tmp639 = $tmp638.value;
if ($tmp639) goto block70; else goto block71;
block70:;
goto block1;
block71:;
frost$core$Int64 $tmp640 = (frost$core$Int64) {35};
frost$core$Bit $tmp641 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp640);
bool $tmp642 = $tmp641.value;
if ($tmp642) goto block72; else goto block73;
block72:;
goto block1;
block73:;
frost$core$Int64 $tmp643 = (frost$core$Int64) {36};
frost$core$Bit $tmp644 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp643);
bool $tmp645 = $tmp644.value;
if ($tmp645) goto block74; else goto block75;
block74:;
goto block1;
block75:;
frost$core$Int64 $tmp646 = (frost$core$Int64) {37};
frost$core$Bit $tmp647 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp646);
bool $tmp648 = $tmp647.value;
if ($tmp648) goto block76; else goto block77;
block76:;
goto block1;
block77:;
frost$core$Int64 $tmp649 = (frost$core$Int64) {38};
frost$core$Bit $tmp650 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp534, $tmp649);
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block78; else goto block1;
block78:;
goto block1;
block1:;
return;

}
org$frostlang$frostc$expression$Binary$Operator org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlang$frostc$expression$Binary$Operator local0;
// line 17
frost$core$Int64* $tmp652 = &(&local0)->$rawValue;
*$tmp652 = param0;
org$frostlang$frostc$expression$Binary$Operator $tmp653 = *(&local0);
return $tmp653;

}
frost$core$Bit org$frostlang$frostc$expression$Binary$Operator$$EQ$org$frostlang$frostc$expression$Binary$Operator$R$frost$core$Bit(org$frostlang$frostc$expression$Binary$Operator param0, org$frostlang$frostc$expression$Binary$Operator param1) {

// line 17
frost$core$Int64 $tmp654 = param0.$rawValue;
frost$core$Int64 $tmp655 = param1.$rawValue;
int64_t $tmp656 = $tmp654.value;
int64_t $tmp657 = $tmp655.value;
bool $tmp658 = $tmp656 != $tmp657;
frost$core$Bit $tmp659 = (frost$core$Bit) {$tmp658};
bool $tmp660 = $tmp659.value;
if ($tmp660) goto block1; else goto block2;
block1:;
// line 17
frost$core$Bit $tmp661 = frost$core$Bit$init$builtin_bit(false);
return $tmp661;
block2:;
// line 17
frost$core$Bit $tmp662 = frost$core$Bit$init$builtin_bit(true);
return $tmp662;

}

