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
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x62\x69\x6e\x61\x72\x79\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x3a\x20", 23, 6035464278993928290, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x63\x6f\x6d\x70\x6f\x75\x6e\x64\x20\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x3a\x20", 36, 1908177115814907675, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };
static frost$core$String $s338 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s344 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s348 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s349 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s353 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s358 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x2f", 2, 14995, NULL };
static frost$core$String $s359 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x2f", 2, 14995, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s364 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s368 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d", 1, 162, NULL };
static frost$core$String $s373 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s388 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x7c", 2, 22849, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x7c", 2, 22849, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s413 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x26", 2, 14077, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x26", 2, 14077, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7e", 1, 227, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7e", 1, 227, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7e\x7e", 2, 23053, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7e\x7e", 2, 23053, NULL };
static frost$core$String $s428 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static frost$core$String $s439 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static frost$core$String $s443 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s444 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d\x3d", 3, 1373156, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d\x3d", 3, 1373156, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x3d", 2, 16120, NULL };
static frost$core$String $s459 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x3d", 2, 16120, NULL };
static frost$core$String $s463 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b\x3d", 2, 14605, NULL };
static frost$core$String $s464 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b\x3d", 2, 14605, NULL };
static frost$core$String $s468 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3d", 2, 14807, NULL };
static frost$core$String $s469 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x3d", 2, 14807, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x3d", 2, 14504, NULL };
static frost$core$String $s474 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a\x3d", 2, 14504, NULL };
static frost$core$String $s478 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x3d", 2, 15009, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x3d", 2, 15009, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x2f\x3d", 3, 1514556, NULL };
static frost$core$String $s484 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x2f\x3d", 3, 1514556, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25\x3d", 2, 13999, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x25\x3d", 2, 13999, NULL };
static frost$core$String $s493 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x3d", 2, 22786, NULL };
static frost$core$String $s494 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x3d", 2, 22786, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x7c\x3d", 3, 2307810, NULL };
static frost$core$String $s499 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x7c\x3d", 3, 2307810, NULL };
static frost$core$String $s503 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x3d", 2, 14100, NULL };
static frost$core$String $s504 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x3d", 2, 14100, NULL };
static frost$core$String $s508 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x26\x3d", 3, 1421838, NULL };
static frost$core$String $s509 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x26\x3d", 3, 1421838, NULL };
static frost$core$String $s513 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7e\x3d", 2, 22988, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7e\x3d", 2, 22988, NULL };
static frost$core$String $s518 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7e\x7e\x3d", 3, 2328414, NULL };
static frost$core$String $s519 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7e\x7e\x3d", 3, 2328414, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c\x3d", 3, 1648482, NULL };
static frost$core$String $s524 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3c\x3d", 3, 1648482, NULL };
static frost$core$String $s528 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e\x3d", 3, 1669086, NULL };
static frost$core$String $s529 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3e\x3d", 3, 1669086, NULL };
static frost$core$String $s531 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -4134813514224196290, NULL };

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
frost$core$Int64 $tmp200 = (frost$core$Int64) {100};
org$frostlang$frostc$parser$Token$Kind $tmp201 = param0.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp202;
$tmp202 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp202->value = $tmp201;
frost$core$String* $tmp203 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s204, ((frost$core$Object*) $tmp202));
frost$core$String* $tmp205 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp203, &$s206);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s207, $tmp200, $tmp205);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
abort(); // unreachable
block1:;
goto block80;
block80:;

}
frost$core$Bit org$frostlang$frostc$expression$Binary$Operator$get_isAssignment$R$frost$core$Bit(org$frostlang$frostc$expression$Binary$Operator param0) {

// line 106
frost$core$Int64 $tmp208 = param0.$rawValue;
frost$core$Int64 $tmp209 = (frost$core$Int64) {24};
frost$core$Bit $tmp210 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp208, $tmp209);
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp212 = (frost$core$Int64) {25};
frost$core$Bit $tmp213 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp208, $tmp212);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp215 = (frost$core$Int64) {26};
frost$core$Bit $tmp216 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp208, $tmp215);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp218 = (frost$core$Int64) {27};
frost$core$Bit $tmp219 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp208, $tmp218);
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block2; else goto block6;
block6:;
frost$core$Int64 $tmp221 = (frost$core$Int64) {28};
frost$core$Bit $tmp222 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp208, $tmp221);
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block2; else goto block7;
block7:;
frost$core$Int64 $tmp224 = (frost$core$Int64) {29};
frost$core$Bit $tmp225 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp208, $tmp224);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block2; else goto block8;
block8:;
frost$core$Int64 $tmp227 = (frost$core$Int64) {30};
frost$core$Bit $tmp228 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp208, $tmp227);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block2; else goto block9;
block9:;
frost$core$Int64 $tmp230 = (frost$core$Int64) {31};
frost$core$Bit $tmp231 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp208, $tmp230);
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block2; else goto block10;
block10:;
frost$core$Int64 $tmp233 = (frost$core$Int64) {32};
frost$core$Bit $tmp234 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp208, $tmp233);
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block2; else goto block11;
block11:;
frost$core$Int64 $tmp236 = (frost$core$Int64) {33};
frost$core$Bit $tmp237 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp208, $tmp236);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block2; else goto block12;
block12:;
frost$core$Int64 $tmp239 = (frost$core$Int64) {34};
frost$core$Bit $tmp240 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp208, $tmp239);
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block2; else goto block13;
block13:;
frost$core$Int64 $tmp242 = (frost$core$Int64) {35};
frost$core$Bit $tmp243 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp208, $tmp242);
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block2; else goto block14;
block14:;
frost$core$Int64 $tmp245 = (frost$core$Int64) {36};
frost$core$Bit $tmp246 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp208, $tmp245);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block2; else goto block15;
block15:;
frost$core$Int64 $tmp248 = (frost$core$Int64) {37};
frost$core$Bit $tmp249 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp208, $tmp248);
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block2; else goto block16;
block16:;
frost$core$Int64 $tmp251 = (frost$core$Int64) {38};
frost$core$Bit $tmp252 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp208, $tmp251);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block2; else goto block17;
block2:;
// line 110
frost$core$Bit $tmp254 = frost$core$Bit$init$builtin_bit(true);
return $tmp254;
block17:;
// line 113
frost$core$Bit $tmp255 = frost$core$Bit$init$builtin_bit(false);
return $tmp255;
block1:;
goto block18;
block18:;

}
org$frostlang$frostc$expression$Binary$Operator org$frostlang$frostc$expression$Binary$Operator$removeAssignment$R$org$frostlang$frostc$expression$Binary$Operator(org$frostlang$frostc$expression$Binary$Operator param0) {

// line 119
frost$core$Int64 $tmp256 = param0.$rawValue;
frost$core$Int64 $tmp257 = (frost$core$Int64) {25};
frost$core$Bit $tmp258 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp256, $tmp257);
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block2; else goto block3;
block2:;
// line 120
frost$core$Int64 $tmp260 = (frost$core$Int64) {0};
org$frostlang$frostc$expression$Binary$Operator $tmp261 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp260);
return $tmp261;
block3:;
frost$core$Int64 $tmp262 = (frost$core$Int64) {26};
frost$core$Bit $tmp263 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp256, $tmp262);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block4; else goto block5;
block4:;
// line 121
frost$core$Int64 $tmp265 = (frost$core$Int64) {1};
org$frostlang$frostc$expression$Binary$Operator $tmp266 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp265);
return $tmp266;
block5:;
frost$core$Int64 $tmp267 = (frost$core$Int64) {27};
frost$core$Bit $tmp268 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp256, $tmp267);
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block6; else goto block7;
block6:;
// line 122
frost$core$Int64 $tmp270 = (frost$core$Int64) {2};
org$frostlang$frostc$expression$Binary$Operator $tmp271 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp270);
return $tmp271;
block7:;
frost$core$Int64 $tmp272 = (frost$core$Int64) {28};
frost$core$Bit $tmp273 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp256, $tmp272);
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block8; else goto block9;
block8:;
// line 123
frost$core$Int64 $tmp275 = (frost$core$Int64) {3};
org$frostlang$frostc$expression$Binary$Operator $tmp276 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp275);
return $tmp276;
block9:;
frost$core$Int64 $tmp277 = (frost$core$Int64) {29};
frost$core$Bit $tmp278 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp256, $tmp277);
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block10; else goto block11;
block10:;
// line 124
frost$core$Int64 $tmp280 = (frost$core$Int64) {4};
org$frostlang$frostc$expression$Binary$Operator $tmp281 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp280);
return $tmp281;
block11:;
frost$core$Int64 $tmp282 = (frost$core$Int64) {30};
frost$core$Bit $tmp283 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp256, $tmp282);
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block12; else goto block13;
block12:;
// line 125
frost$core$Int64 $tmp285 = (frost$core$Int64) {5};
org$frostlang$frostc$expression$Binary$Operator $tmp286 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp285);
return $tmp286;
block13:;
frost$core$Int64 $tmp287 = (frost$core$Int64) {31};
frost$core$Bit $tmp288 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp256, $tmp287);
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block14; else goto block15;
block14:;
// line 126
frost$core$Int64 $tmp290 = (frost$core$Int64) {12};
org$frostlang$frostc$expression$Binary$Operator $tmp291 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp290);
return $tmp291;
block15:;
frost$core$Int64 $tmp292 = (frost$core$Int64) {32};
frost$core$Bit $tmp293 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp256, $tmp292);
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block16; else goto block17;
block16:;
// line 127
frost$core$Int64 $tmp295 = (frost$core$Int64) {13};
org$frostlang$frostc$expression$Binary$Operator $tmp296 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp295);
return $tmp296;
block17:;
frost$core$Int64 $tmp297 = (frost$core$Int64) {33};
frost$core$Bit $tmp298 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp256, $tmp297);
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block18; else goto block19;
block18:;
// line 128
frost$core$Int64 $tmp300 = (frost$core$Int64) {14};
org$frostlang$frostc$expression$Binary$Operator $tmp301 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp300);
return $tmp301;
block19:;
frost$core$Int64 $tmp302 = (frost$core$Int64) {34};
frost$core$Bit $tmp303 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp256, $tmp302);
bool $tmp304 = $tmp303.value;
if ($tmp304) goto block20; else goto block21;
block20:;
// line 129
frost$core$Int64 $tmp305 = (frost$core$Int64) {15};
org$frostlang$frostc$expression$Binary$Operator $tmp306 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp305);
return $tmp306;
block21:;
frost$core$Int64 $tmp307 = (frost$core$Int64) {35};
frost$core$Bit $tmp308 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp256, $tmp307);
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block22; else goto block23;
block22:;
// line 130
frost$core$Int64 $tmp310 = (frost$core$Int64) {16};
org$frostlang$frostc$expression$Binary$Operator $tmp311 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp310);
return $tmp311;
block23:;
frost$core$Int64 $tmp312 = (frost$core$Int64) {36};
frost$core$Bit $tmp313 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp256, $tmp312);
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block24; else goto block25;
block24:;
// line 131
frost$core$Int64 $tmp315 = (frost$core$Int64) {17};
org$frostlang$frostc$expression$Binary$Operator $tmp316 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp315);
return $tmp316;
block25:;
frost$core$Int64 $tmp317 = (frost$core$Int64) {37};
frost$core$Bit $tmp318 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp256, $tmp317);
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block26; else goto block27;
block26:;
// line 132
frost$core$Int64 $tmp320 = (frost$core$Int64) {18};
org$frostlang$frostc$expression$Binary$Operator $tmp321 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp320);
return $tmp321;
block27:;
frost$core$Int64 $tmp322 = (frost$core$Int64) {38};
frost$core$Bit $tmp323 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp256, $tmp322);
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block28; else goto block29;
block28:;
// line 133
frost$core$Int64 $tmp325 = (frost$core$Int64) {19};
org$frostlang$frostc$expression$Binary$Operator $tmp326 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp325);
return $tmp326;
block29:;
// line 134
frost$core$Int64 $tmp327 = (frost$core$Int64) {134};
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp328;
$tmp328 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp328->value = param0;
frost$core$String* $tmp329 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s330, ((frost$core$Object*) $tmp328));
frost$core$String* $tmp331 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp329, &$s332);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s333, $tmp327, $tmp331);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
abort(); // unreachable
block1:;
goto block30;
block30:;

}
frost$core$String* org$frostlang$frostc$expression$Binary$Operator$get_asString$R$frost$core$String(org$frostlang$frostc$expression$Binary$Operator param0) {

// line 140
frost$core$Int64 $tmp334 = param0.$rawValue;
frost$core$Int64 $tmp335 = (frost$core$Int64) {0};
frost$core$Bit $tmp336 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp335);
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block2; else goto block3;
block2:;
// line 141
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s338));
return &$s339;
block3:;
frost$core$Int64 $tmp340 = (frost$core$Int64) {1};
frost$core$Bit $tmp341 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp340);
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block4; else goto block5;
block4:;
// line 142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s343));
return &$s344;
block5:;
frost$core$Int64 $tmp345 = (frost$core$Int64) {2};
frost$core$Bit $tmp346 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp345);
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block6; else goto block7;
block6:;
// line 143
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s348));
return &$s349;
block7:;
frost$core$Int64 $tmp350 = (frost$core$Int64) {3};
frost$core$Bit $tmp351 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp350);
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block8; else goto block9;
block8:;
// line 144
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s353));
return &$s354;
block9:;
frost$core$Int64 $tmp355 = (frost$core$Int64) {4};
frost$core$Bit $tmp356 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp355);
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block10; else goto block11;
block10:;
// line 145
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s358));
return &$s359;
block11:;
frost$core$Int64 $tmp360 = (frost$core$Int64) {5};
frost$core$Bit $tmp361 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp360);
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block12; else goto block13;
block12:;
// line 146
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s363));
return &$s364;
block13:;
frost$core$Int64 $tmp365 = (frost$core$Int64) {6};
frost$core$Bit $tmp366 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp365);
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block14; else goto block15;
block14:;
// line 147
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s368));
return &$s369;
block15:;
frost$core$Int64 $tmp370 = (frost$core$Int64) {7};
frost$core$Bit $tmp371 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp370);
bool $tmp372 = $tmp371.value;
if ($tmp372) goto block16; else goto block17;
block16:;
// line 148
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s373));
return &$s374;
block17:;
frost$core$Int64 $tmp375 = (frost$core$Int64) {8};
frost$core$Bit $tmp376 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp375);
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block18; else goto block19;
block18:;
// line 149
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s378));
return &$s379;
block19:;
frost$core$Int64 $tmp380 = (frost$core$Int64) {9};
frost$core$Bit $tmp381 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp380);
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block20; else goto block21;
block20:;
// line 150
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s383));
return &$s384;
block21:;
frost$core$Int64 $tmp385 = (frost$core$Int64) {10};
frost$core$Bit $tmp386 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp385);
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block22; else goto block23;
block22:;
// line 151
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s388));
return &$s389;
block23:;
frost$core$Int64 $tmp390 = (frost$core$Int64) {11};
frost$core$Bit $tmp391 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp390);
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block24; else goto block25;
block24:;
// line 152
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s393));
return &$s394;
block25:;
frost$core$Int64 $tmp395 = (frost$core$Int64) {12};
frost$core$Bit $tmp396 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp395);
bool $tmp397 = $tmp396.value;
if ($tmp397) goto block26; else goto block27;
block26:;
// line 153
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s398));
return &$s399;
block27:;
frost$core$Int64 $tmp400 = (frost$core$Int64) {13};
frost$core$Bit $tmp401 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp400);
bool $tmp402 = $tmp401.value;
if ($tmp402) goto block28; else goto block29;
block28:;
// line 154
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s403));
return &$s404;
block29:;
frost$core$Int64 $tmp405 = (frost$core$Int64) {14};
frost$core$Bit $tmp406 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp405);
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block30; else goto block31;
block30:;
// line 155
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s408));
return &$s409;
block31:;
frost$core$Int64 $tmp410 = (frost$core$Int64) {15};
frost$core$Bit $tmp411 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp410);
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block32; else goto block33;
block32:;
// line 156
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s413));
return &$s414;
block33:;
frost$core$Int64 $tmp415 = (frost$core$Int64) {16};
frost$core$Bit $tmp416 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp415);
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block34; else goto block35;
block34:;
// line 157
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s418));
return &$s419;
block35:;
frost$core$Int64 $tmp420 = (frost$core$Int64) {17};
frost$core$Bit $tmp421 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp420);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block36; else goto block37;
block36:;
// line 158
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s423));
return &$s424;
block37:;
frost$core$Int64 $tmp425 = (frost$core$Int64) {18};
frost$core$Bit $tmp426 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp425);
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block38; else goto block39;
block38:;
// line 159
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s428));
return &$s429;
block39:;
frost$core$Int64 $tmp430 = (frost$core$Int64) {19};
frost$core$Bit $tmp431 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp430);
bool $tmp432 = $tmp431.value;
if ($tmp432) goto block40; else goto block41;
block40:;
// line 160
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s433));
return &$s434;
block41:;
frost$core$Int64 $tmp435 = (frost$core$Int64) {20};
frost$core$Bit $tmp436 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp435);
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block42; else goto block43;
block42:;
// line 161
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s438));
return &$s439;
block43:;
frost$core$Int64 $tmp440 = (frost$core$Int64) {21};
frost$core$Bit $tmp441 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp440);
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block44; else goto block45;
block44:;
// line 162
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s443));
return &$s444;
block45:;
frost$core$Int64 $tmp445 = (frost$core$Int64) {22};
frost$core$Bit $tmp446 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp445);
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block46; else goto block47;
block46:;
// line 163
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s448));
return &$s449;
block47:;
frost$core$Int64 $tmp450 = (frost$core$Int64) {23};
frost$core$Bit $tmp451 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp450);
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block48; else goto block49;
block48:;
// line 164
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s453));
return &$s454;
block49:;
frost$core$Int64 $tmp455 = (frost$core$Int64) {24};
frost$core$Bit $tmp456 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp455);
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block50; else goto block51;
block50:;
// line 165
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s458));
return &$s459;
block51:;
frost$core$Int64 $tmp460 = (frost$core$Int64) {25};
frost$core$Bit $tmp461 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp460);
bool $tmp462 = $tmp461.value;
if ($tmp462) goto block52; else goto block53;
block52:;
// line 166
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s463));
return &$s464;
block53:;
frost$core$Int64 $tmp465 = (frost$core$Int64) {26};
frost$core$Bit $tmp466 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp465);
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block54; else goto block55;
block54:;
// line 167
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s468));
return &$s469;
block55:;
frost$core$Int64 $tmp470 = (frost$core$Int64) {27};
frost$core$Bit $tmp471 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp470);
bool $tmp472 = $tmp471.value;
if ($tmp472) goto block56; else goto block57;
block56:;
// line 168
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s473));
return &$s474;
block57:;
frost$core$Int64 $tmp475 = (frost$core$Int64) {28};
frost$core$Bit $tmp476 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp475);
bool $tmp477 = $tmp476.value;
if ($tmp477) goto block58; else goto block59;
block58:;
// line 169
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s478));
return &$s479;
block59:;
frost$core$Int64 $tmp480 = (frost$core$Int64) {29};
frost$core$Bit $tmp481 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp480);
bool $tmp482 = $tmp481.value;
if ($tmp482) goto block60; else goto block61;
block60:;
// line 170
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s483));
return &$s484;
block61:;
frost$core$Int64 $tmp485 = (frost$core$Int64) {30};
frost$core$Bit $tmp486 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp485);
bool $tmp487 = $tmp486.value;
if ($tmp487) goto block62; else goto block63;
block62:;
// line 171
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s488));
return &$s489;
block63:;
frost$core$Int64 $tmp490 = (frost$core$Int64) {31};
frost$core$Bit $tmp491 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp490);
bool $tmp492 = $tmp491.value;
if ($tmp492) goto block64; else goto block65;
block64:;
// line 172
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s493));
return &$s494;
block65:;
frost$core$Int64 $tmp495 = (frost$core$Int64) {32};
frost$core$Bit $tmp496 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp495);
bool $tmp497 = $tmp496.value;
if ($tmp497) goto block66; else goto block67;
block66:;
// line 173
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s498));
return &$s499;
block67:;
frost$core$Int64 $tmp500 = (frost$core$Int64) {33};
frost$core$Bit $tmp501 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp500);
bool $tmp502 = $tmp501.value;
if ($tmp502) goto block68; else goto block69;
block68:;
// line 174
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s503));
return &$s504;
block69:;
frost$core$Int64 $tmp505 = (frost$core$Int64) {34};
frost$core$Bit $tmp506 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp505);
bool $tmp507 = $tmp506.value;
if ($tmp507) goto block70; else goto block71;
block70:;
// line 175
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s508));
return &$s509;
block71:;
frost$core$Int64 $tmp510 = (frost$core$Int64) {35};
frost$core$Bit $tmp511 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp510);
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block72; else goto block73;
block72:;
// line 176
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s513));
return &$s514;
block73:;
frost$core$Int64 $tmp515 = (frost$core$Int64) {36};
frost$core$Bit $tmp516 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp515);
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block74; else goto block75;
block74:;
// line 177
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s518));
return &$s519;
block75:;
frost$core$Int64 $tmp520 = (frost$core$Int64) {37};
frost$core$Bit $tmp521 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp520);
bool $tmp522 = $tmp521.value;
if ($tmp522) goto block76; else goto block77;
block76:;
// line 178
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s523));
return &$s524;
block77:;
frost$core$Int64 $tmp525 = (frost$core$Int64) {38};
frost$core$Bit $tmp526 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp334, $tmp525);
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block78; else goto block1;
block78:;
// line 179
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s528));
return &$s529;
block1:;
// line 181
frost$core$Int64 $tmp530 = (frost$core$Int64) {181};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s531, $tmp530);
abort(); // unreachable

}
void org$frostlang$frostc$expression$Binary$Operator$cleanup(org$frostlang$frostc$expression$Binary$Operator param0) {

// line 17
frost$core$Int64 $tmp532 = param0.$rawValue;
frost$core$Int64 $tmp533 = (frost$core$Int64) {0};
frost$core$Bit $tmp534 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp533);
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block2; else goto block3;
block2:;
goto block1;
block3:;
frost$core$Int64 $tmp536 = (frost$core$Int64) {1};
frost$core$Bit $tmp537 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp536);
bool $tmp538 = $tmp537.value;
if ($tmp538) goto block4; else goto block5;
block4:;
goto block1;
block5:;
frost$core$Int64 $tmp539 = (frost$core$Int64) {2};
frost$core$Bit $tmp540 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp539);
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block6; else goto block7;
block6:;
goto block1;
block7:;
frost$core$Int64 $tmp542 = (frost$core$Int64) {3};
frost$core$Bit $tmp543 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp542);
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block8; else goto block9;
block8:;
goto block1;
block9:;
frost$core$Int64 $tmp545 = (frost$core$Int64) {4};
frost$core$Bit $tmp546 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp545);
bool $tmp547 = $tmp546.value;
if ($tmp547) goto block10; else goto block11;
block10:;
goto block1;
block11:;
frost$core$Int64 $tmp548 = (frost$core$Int64) {5};
frost$core$Bit $tmp549 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp548);
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block12; else goto block13;
block12:;
goto block1;
block13:;
frost$core$Int64 $tmp551 = (frost$core$Int64) {6};
frost$core$Bit $tmp552 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp551);
bool $tmp553 = $tmp552.value;
if ($tmp553) goto block14; else goto block15;
block14:;
goto block1;
block15:;
frost$core$Int64 $tmp554 = (frost$core$Int64) {7};
frost$core$Bit $tmp555 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp554);
bool $tmp556 = $tmp555.value;
if ($tmp556) goto block16; else goto block17;
block16:;
goto block1;
block17:;
frost$core$Int64 $tmp557 = (frost$core$Int64) {8};
frost$core$Bit $tmp558 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp557);
bool $tmp559 = $tmp558.value;
if ($tmp559) goto block18; else goto block19;
block18:;
goto block1;
block19:;
frost$core$Int64 $tmp560 = (frost$core$Int64) {9};
frost$core$Bit $tmp561 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp560);
bool $tmp562 = $tmp561.value;
if ($tmp562) goto block20; else goto block21;
block20:;
goto block1;
block21:;
frost$core$Int64 $tmp563 = (frost$core$Int64) {10};
frost$core$Bit $tmp564 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp563);
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block22; else goto block23;
block22:;
goto block1;
block23:;
frost$core$Int64 $tmp566 = (frost$core$Int64) {11};
frost$core$Bit $tmp567 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp566);
bool $tmp568 = $tmp567.value;
if ($tmp568) goto block24; else goto block25;
block24:;
goto block1;
block25:;
frost$core$Int64 $tmp569 = (frost$core$Int64) {12};
frost$core$Bit $tmp570 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp569);
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block26; else goto block27;
block26:;
goto block1;
block27:;
frost$core$Int64 $tmp572 = (frost$core$Int64) {13};
frost$core$Bit $tmp573 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp572);
bool $tmp574 = $tmp573.value;
if ($tmp574) goto block28; else goto block29;
block28:;
goto block1;
block29:;
frost$core$Int64 $tmp575 = (frost$core$Int64) {14};
frost$core$Bit $tmp576 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp575);
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block30; else goto block31;
block30:;
goto block1;
block31:;
frost$core$Int64 $tmp578 = (frost$core$Int64) {15};
frost$core$Bit $tmp579 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp578);
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block32; else goto block33;
block32:;
goto block1;
block33:;
frost$core$Int64 $tmp581 = (frost$core$Int64) {16};
frost$core$Bit $tmp582 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp581);
bool $tmp583 = $tmp582.value;
if ($tmp583) goto block34; else goto block35;
block34:;
goto block1;
block35:;
frost$core$Int64 $tmp584 = (frost$core$Int64) {17};
frost$core$Bit $tmp585 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp584);
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block36; else goto block37;
block36:;
goto block1;
block37:;
frost$core$Int64 $tmp587 = (frost$core$Int64) {18};
frost$core$Bit $tmp588 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp587);
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block38; else goto block39;
block38:;
goto block1;
block39:;
frost$core$Int64 $tmp590 = (frost$core$Int64) {19};
frost$core$Bit $tmp591 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp590);
bool $tmp592 = $tmp591.value;
if ($tmp592) goto block40; else goto block41;
block40:;
goto block1;
block41:;
frost$core$Int64 $tmp593 = (frost$core$Int64) {20};
frost$core$Bit $tmp594 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp593);
bool $tmp595 = $tmp594.value;
if ($tmp595) goto block42; else goto block43;
block42:;
goto block1;
block43:;
frost$core$Int64 $tmp596 = (frost$core$Int64) {21};
frost$core$Bit $tmp597 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp596);
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block44; else goto block45;
block44:;
goto block1;
block45:;
frost$core$Int64 $tmp599 = (frost$core$Int64) {22};
frost$core$Bit $tmp600 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp599);
bool $tmp601 = $tmp600.value;
if ($tmp601) goto block46; else goto block47;
block46:;
goto block1;
block47:;
frost$core$Int64 $tmp602 = (frost$core$Int64) {23};
frost$core$Bit $tmp603 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp602);
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block48; else goto block49;
block48:;
goto block1;
block49:;
frost$core$Int64 $tmp605 = (frost$core$Int64) {24};
frost$core$Bit $tmp606 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp605);
bool $tmp607 = $tmp606.value;
if ($tmp607) goto block50; else goto block51;
block50:;
goto block1;
block51:;
frost$core$Int64 $tmp608 = (frost$core$Int64) {25};
frost$core$Bit $tmp609 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp608);
bool $tmp610 = $tmp609.value;
if ($tmp610) goto block52; else goto block53;
block52:;
goto block1;
block53:;
frost$core$Int64 $tmp611 = (frost$core$Int64) {26};
frost$core$Bit $tmp612 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp611);
bool $tmp613 = $tmp612.value;
if ($tmp613) goto block54; else goto block55;
block54:;
goto block1;
block55:;
frost$core$Int64 $tmp614 = (frost$core$Int64) {27};
frost$core$Bit $tmp615 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp614);
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block56; else goto block57;
block56:;
goto block1;
block57:;
frost$core$Int64 $tmp617 = (frost$core$Int64) {28};
frost$core$Bit $tmp618 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp617);
bool $tmp619 = $tmp618.value;
if ($tmp619) goto block58; else goto block59;
block58:;
goto block1;
block59:;
frost$core$Int64 $tmp620 = (frost$core$Int64) {29};
frost$core$Bit $tmp621 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp620);
bool $tmp622 = $tmp621.value;
if ($tmp622) goto block60; else goto block61;
block60:;
goto block1;
block61:;
frost$core$Int64 $tmp623 = (frost$core$Int64) {30};
frost$core$Bit $tmp624 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp623);
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block62; else goto block63;
block62:;
goto block1;
block63:;
frost$core$Int64 $tmp626 = (frost$core$Int64) {31};
frost$core$Bit $tmp627 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp626);
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block64; else goto block65;
block64:;
goto block1;
block65:;
frost$core$Int64 $tmp629 = (frost$core$Int64) {32};
frost$core$Bit $tmp630 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp629);
bool $tmp631 = $tmp630.value;
if ($tmp631) goto block66; else goto block67;
block66:;
goto block1;
block67:;
frost$core$Int64 $tmp632 = (frost$core$Int64) {33};
frost$core$Bit $tmp633 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp632);
bool $tmp634 = $tmp633.value;
if ($tmp634) goto block68; else goto block69;
block68:;
goto block1;
block69:;
frost$core$Int64 $tmp635 = (frost$core$Int64) {34};
frost$core$Bit $tmp636 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp635);
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block70; else goto block71;
block70:;
goto block1;
block71:;
frost$core$Int64 $tmp638 = (frost$core$Int64) {35};
frost$core$Bit $tmp639 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp638);
bool $tmp640 = $tmp639.value;
if ($tmp640) goto block72; else goto block73;
block72:;
goto block1;
block73:;
frost$core$Int64 $tmp641 = (frost$core$Int64) {36};
frost$core$Bit $tmp642 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp641);
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block74; else goto block75;
block74:;
goto block1;
block75:;
frost$core$Int64 $tmp644 = (frost$core$Int64) {37};
frost$core$Bit $tmp645 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp644);
bool $tmp646 = $tmp645.value;
if ($tmp646) goto block76; else goto block77;
block76:;
goto block1;
block77:;
frost$core$Int64 $tmp647 = (frost$core$Int64) {38};
frost$core$Bit $tmp648 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp647);
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block78; else goto block1;
block78:;
goto block1;
block1:;
return;

}
org$frostlang$frostc$expression$Binary$Operator org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlang$frostc$expression$Binary$Operator local0;
// line 17
frost$core$Int64* $tmp650 = &(&local0)->$rawValue;
*$tmp650 = param0;
org$frostlang$frostc$expression$Binary$Operator $tmp651 = *(&local0);
return $tmp651;

}
frost$core$Bit org$frostlang$frostc$expression$Binary$Operator$$EQ$org$frostlang$frostc$expression$Binary$Operator$R$frost$core$Bit(org$frostlang$frostc$expression$Binary$Operator param0, org$frostlang$frostc$expression$Binary$Operator param1) {

// line 17
frost$core$Int64 $tmp652 = param0.$rawValue;
frost$core$Int64 $tmp653 = param1.$rawValue;
int64_t $tmp654 = $tmp652.value;
int64_t $tmp655 = $tmp653.value;
bool $tmp656 = $tmp654 != $tmp655;
frost$core$Bit $tmp657 = (frost$core$Bit) {$tmp656};
bool $tmp658 = $tmp657.value;
if ($tmp658) goto block1; else goto block2;
block1:;
// line 17
frost$core$Bit $tmp659 = frost$core$Bit$init$builtin_bit(false);
return $tmp659;
block2:;
// line 17
frost$core$Bit $tmp660 = frost$core$Bit$init$builtin_bit(true);
return $tmp660;

}

