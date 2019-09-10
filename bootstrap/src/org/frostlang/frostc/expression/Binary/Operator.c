#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/parser/Token.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Int org$frostlang$frostc$expression$Binary$Operator$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = org$frostlang$frostc$expression$Binary$Operator$get_hash$R$frost$core$Int(((org$frostlang$frostc$expression$Binary$Operator$wrapper*) p0)->value);

    return result;
}
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

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$expression$Binary$Operator$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { org$frostlang$frostc$expression$Binary$Operator$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$expression$Binary$Operator$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$expression$Binary$Operator$_frost$collections$HashKey, { org$frostlang$frostc$expression$Binary$Operator$$EQ$org$frostlang$frostc$expression$Binary$Operator$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$expression$Binary$Operator$class_type org$frostlang$frostc$expression$Binary$Operator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$expression$Binary$Operator$_frost$core$Equatable, { org$frostlang$frostc$expression$Binary$Operator$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$expression$Binary$Operator$get_isAssignment$R$frost$core$Bit$shim, org$frostlang$frostc$expression$Binary$Operator$removeAssignment$R$org$frostlang$frostc$expression$Binary$Operator$shim, org$frostlang$frostc$expression$Binary$Operator$cleanup$shim, org$frostlang$frostc$expression$Binary$Operator$$EQ$org$frostlang$frostc$expression$Binary$Operator$R$frost$core$Bit$shim, org$frostlang$frostc$expression$Binary$Operator$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$frostc$expression$Binary$Operator$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { org$frostlang$frostc$expression$Binary$Operator$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$expression$Binary$Operator$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$expression$Binary$Operator$wrapper_frost$collections$HashKey, { org$frostlang$frostc$expression$Binary$Operator$$EQ$org$frostlang$frostc$expression$Binary$Operator$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$expression$Binary$Operator$wrapperclass_type org$frostlang$frostc$expression$Binary$Operator$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$expression$Binary$Operator$wrapper_frost$core$Equatable, { org$frostlang$frostc$expression$Binary$Operator$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn5)(frost$core$Object*);
typedef frost$core$String* (*$fn9)(frost$core$Object*);
typedef frost$core$String* (*$fn11)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79\x2e\x4f\x70\x65\x72\x61\x74\x6f\x72", 47, -6307469417474134963, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79\x2e\x4f\x70\x65\x72\x61\x74\x6f\x72", 47, -6307469417474134963, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x62\x69\x6e\x61\x72\x79\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x3a\x20", 23, -746128379803080476, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x63\x6f\x6d\x70\x6f\x75\x6e\x64\x20\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x3a\x20", 36, -3862352311403676633, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, -5808616246781833014, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, -5808616246781833014, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x2f", 2, 564807061655596579, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x2f", 2, 564807061655596579, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25", 1, -5808631639944627968, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25", 1, -5808631639944627968, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d", 1, -5808605251665550904, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d", 1, -5808605251665550904, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x3d", 2, 559157770910983811, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x3d", 2, 559157770910983811, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 579146892307886066, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 579146892307886066, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c\x7c", 2, 640439168010397861, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c\x7c", 2, 640439168010397861, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, -5808628341409743335, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, -5808628341409743335, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x26", 2, 558202295306257677, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x26", 2, 558202295306257677, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7e", 1, -5808531584386460767, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7e", 1, -5808531584386460767, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7e\x7e", 2, 642407293824517101, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7e\x7e", 2, 642407293824517101, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3c", 2, 579147991819514277, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3c", 2, 579147991819514277, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e", 2, 581116117633633517, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e", 2, 581116117633633517, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x5d", 2, 675868731199239589, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x5d", 2, 675868731199239589, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3d", 2, 578298069331096399, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3d", 2, 578298069331096399, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x3d\x3d", 3, -4903804165512063782, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x3d\x3d", 3, -4903804165512063782, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e", 2, 562958782608952338, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e", 2, 562958782608952338, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x28\x69\x6d\x70\x6c\x69\x63\x69\x74\x29\x3e", 12, -2839311600700303452, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x28\x69\x6d\x70\x6c\x69\x63\x69\x74\x29\x3e", 12, -2839311600700303452, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x3d", 2, 584912731285089200, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x3d", 2, 584912731285089200, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b\x3d", 2, 568732318167552949, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b\x3d", 2, 568732318167552949, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3d", 2, 562957683097324127, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3d", 2, 562957683097324127, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x3d", 2, 569572345051316928, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x3d", 2, 569572345051316928, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x3d", 2, 564791668492801625, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x3d", 2, 564791668492801625, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x2f\x3d", 3, -1237322113517003526, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x2f\x3d", 3, -1237322113517003526, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25\x3d", 2, 555357858724643495, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25\x3d", 2, 555357858724643495, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c\x3d", 2, 640367699754564146, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c\x3d", 2, 640367699754564146, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c\x7c\x3d", 3, -7213982542082246072, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c\x7c\x3d", 3, -7213982542082246072, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x3d", 2, 558172608492295980, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x3d", 2, 558172608492295980, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x26\x3d", 3, -5527039242054840176, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x26\x3d", 3, -5527039242054840176, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7e\x3d", 2, 642333626545426964, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7e\x3d", 2, 642333626545426964, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7e\x7e\x3d", 3, -5917840851690472848, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7e\x7e\x3d", 3, -5917840851690472848, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3c\x3d", 3, 8118452015276295496, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3c\x3d", 3, 8118452015276295496, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e\x3d", 3, -9032150368041482896, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e\x3d", 3, -9032150368041482896, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };

org$frostlang$frostc$expression$Binary$Operator org$frostlang$frostc$expression$Binary$Operator$fromToken$org$frostlang$frostc$parser$Token$R$org$frostlang$frostc$expression$Binary$Operator(org$frostlang$frostc$parser$Token param0) {

org$frostlang$frostc$expression$Binary$Operator local0;
org$frostlang$frostc$expression$Binary$Operator local1;
org$frostlang$frostc$expression$Binary$Operator local2;
org$frostlang$frostc$expression$Binary$Operator local3;
org$frostlang$frostc$expression$Binary$Operator local4;
org$frostlang$frostc$expression$Binary$Operator local5;
org$frostlang$frostc$expression$Binary$Operator local6;
org$frostlang$frostc$expression$Binary$Operator local7;
org$frostlang$frostc$expression$Binary$Operator local8;
org$frostlang$frostc$expression$Binary$Operator local9;
org$frostlang$frostc$expression$Binary$Operator local10;
org$frostlang$frostc$expression$Binary$Operator local11;
org$frostlang$frostc$expression$Binary$Operator local12;
org$frostlang$frostc$expression$Binary$Operator local13;
org$frostlang$frostc$expression$Binary$Operator local14;
org$frostlang$frostc$expression$Binary$Operator local15;
org$frostlang$frostc$expression$Binary$Operator local16;
org$frostlang$frostc$expression$Binary$Operator local17;
org$frostlang$frostc$expression$Binary$Operator local18;
org$frostlang$frostc$expression$Binary$Operator local19;
org$frostlang$frostc$expression$Binary$Operator local20;
org$frostlang$frostc$expression$Binary$Operator local21;
org$frostlang$frostc$expression$Binary$Operator local22;
org$frostlang$frostc$expression$Binary$Operator local23;
org$frostlang$frostc$expression$Binary$Operator local24;
org$frostlang$frostc$expression$Binary$Operator local25;
org$frostlang$frostc$expression$Binary$Operator local26;
org$frostlang$frostc$expression$Binary$Operator local27;
org$frostlang$frostc$expression$Binary$Operator local28;
org$frostlang$frostc$expression$Binary$Operator local29;
org$frostlang$frostc$expression$Binary$Operator local30;
org$frostlang$frostc$expression$Binary$Operator local31;
org$frostlang$frostc$expression$Binary$Operator local32;
org$frostlang$frostc$expression$Binary$Operator local33;
org$frostlang$frostc$expression$Binary$Operator local34;
org$frostlang$frostc$expression$Binary$Operator local35;
org$frostlang$frostc$expression$Binary$Operator local36;
org$frostlang$frostc$expression$Binary$Operator local37;
org$frostlang$frostc$expression$Binary$Operator local38;
org$frostlang$frostc$expression$Binary$Operator local39;
org$frostlang$frostc$expression$Binary$Operator local40;
org$frostlang$frostc$expression$Binary$Operator local41;
org$frostlang$frostc$expression$Binary$Operator local42;
org$frostlang$frostc$expression$Binary$Operator local43;
org$frostlang$frostc$expression$Binary$Operator local44;
org$frostlang$frostc$expression$Binary$Operator local45;
org$frostlang$frostc$expression$Binary$Operator local46;
org$frostlang$frostc$expression$Binary$Operator local47;
org$frostlang$frostc$expression$Binary$Operator local48;
org$frostlang$frostc$expression$Binary$Operator local49;
org$frostlang$frostc$expression$Binary$Operator local50;
org$frostlang$frostc$expression$Binary$Operator local51;
org$frostlang$frostc$expression$Binary$Operator local52;
org$frostlang$frostc$expression$Binary$Operator local53;
org$frostlang$frostc$expression$Binary$Operator local54;
org$frostlang$frostc$expression$Binary$Operator local55;
org$frostlang$frostc$expression$Binary$Operator local56;
org$frostlang$frostc$expression$Binary$Operator local57;
org$frostlang$frostc$expression$Binary$Operator local58;
org$frostlang$frostc$expression$Binary$Operator local59;
org$frostlang$frostc$expression$Binary$Operator local60;
org$frostlang$frostc$expression$Binary$Operator local61;
org$frostlang$frostc$expression$Binary$Operator local62;
org$frostlang$frostc$expression$Binary$Operator local63;
org$frostlang$frostc$expression$Binary$Operator local64;
org$frostlang$frostc$expression$Binary$Operator local65;
org$frostlang$frostc$expression$Binary$Operator local66;
org$frostlang$frostc$expression$Binary$Operator local67;
org$frostlang$frostc$expression$Binary$Operator local68;
org$frostlang$frostc$expression$Binary$Operator local69;
org$frostlang$frostc$expression$Binary$Operator local70;
org$frostlang$frostc$expression$Binary$Operator local71;
org$frostlang$frostc$expression$Binary$Operator local72;
org$frostlang$frostc$expression$Binary$Operator local73;
org$frostlang$frostc$expression$Binary$Operator local74;
org$frostlang$frostc$expression$Binary$Operator local75;
org$frostlang$frostc$expression$Binary$Operator local76;
org$frostlang$frostc$expression$Binary$Operator local77;
org$frostlang$frostc$parser$Token$Kind _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
frost$core$Int _14;
frost$core$Int* _17;
org$frostlang$frostc$expression$Binary$Operator _19;
org$frostlang$frostc$expression$Binary$Operator _22;
frost$core$Int _24;
int64_t _27;
int64_t _28;
bool _29;
frost$core$Bit _30;
bool _32;
frost$core$Int _35;
frost$core$Int* _38;
org$frostlang$frostc$expression$Binary$Operator _40;
org$frostlang$frostc$expression$Binary$Operator _43;
frost$core$Int _45;
int64_t _48;
int64_t _49;
bool _50;
frost$core$Bit _51;
bool _53;
frost$core$Int _56;
frost$core$Int* _59;
org$frostlang$frostc$expression$Binary$Operator _61;
org$frostlang$frostc$expression$Binary$Operator _64;
frost$core$Int _66;
int64_t _69;
int64_t _70;
bool _71;
frost$core$Bit _72;
bool _74;
frost$core$Int _77;
frost$core$Int* _80;
org$frostlang$frostc$expression$Binary$Operator _82;
org$frostlang$frostc$expression$Binary$Operator _85;
frost$core$Int _87;
int64_t _90;
int64_t _91;
bool _92;
frost$core$Bit _93;
bool _95;
frost$core$Int _98;
frost$core$Int* _101;
org$frostlang$frostc$expression$Binary$Operator _103;
org$frostlang$frostc$expression$Binary$Operator _106;
frost$core$Int _108;
int64_t _111;
int64_t _112;
bool _113;
frost$core$Bit _114;
bool _116;
frost$core$Int _119;
frost$core$Int* _122;
org$frostlang$frostc$expression$Binary$Operator _124;
org$frostlang$frostc$expression$Binary$Operator _127;
frost$core$Int _129;
int64_t _132;
int64_t _133;
bool _134;
frost$core$Bit _135;
bool _137;
frost$core$Int _140;
frost$core$Int* _143;
org$frostlang$frostc$expression$Binary$Operator _145;
org$frostlang$frostc$expression$Binary$Operator _148;
frost$core$Int _150;
int64_t _153;
int64_t _154;
bool _155;
frost$core$Bit _156;
bool _158;
frost$core$Int _161;
frost$core$Int* _164;
org$frostlang$frostc$expression$Binary$Operator _166;
org$frostlang$frostc$expression$Binary$Operator _169;
frost$core$Int _171;
int64_t _174;
int64_t _175;
bool _176;
frost$core$Bit _177;
bool _179;
frost$core$Int _182;
frost$core$Int* _185;
org$frostlang$frostc$expression$Binary$Operator _187;
org$frostlang$frostc$expression$Binary$Operator _190;
frost$core$Int _192;
int64_t _195;
int64_t _196;
bool _197;
frost$core$Bit _198;
bool _200;
frost$core$Int _203;
frost$core$Int* _206;
org$frostlang$frostc$expression$Binary$Operator _208;
org$frostlang$frostc$expression$Binary$Operator _211;
frost$core$Int _213;
int64_t _216;
int64_t _217;
bool _218;
frost$core$Bit _219;
bool _221;
frost$core$Int _224;
frost$core$Int* _227;
org$frostlang$frostc$expression$Binary$Operator _229;
org$frostlang$frostc$expression$Binary$Operator _232;
frost$core$Int _234;
int64_t _237;
int64_t _238;
bool _239;
frost$core$Bit _240;
bool _242;
frost$core$Int _245;
frost$core$Int* _248;
org$frostlang$frostc$expression$Binary$Operator _250;
org$frostlang$frostc$expression$Binary$Operator _253;
frost$core$Int _255;
int64_t _258;
int64_t _259;
bool _260;
frost$core$Bit _261;
bool _263;
frost$core$Int _266;
frost$core$Int* _269;
org$frostlang$frostc$expression$Binary$Operator _271;
org$frostlang$frostc$expression$Binary$Operator _274;
frost$core$Int _276;
int64_t _279;
int64_t _280;
bool _281;
frost$core$Bit _282;
bool _284;
frost$core$Int _287;
frost$core$Int* _290;
org$frostlang$frostc$expression$Binary$Operator _292;
org$frostlang$frostc$expression$Binary$Operator _295;
frost$core$Int _297;
int64_t _300;
int64_t _301;
bool _302;
frost$core$Bit _303;
bool _305;
frost$core$Int _308;
frost$core$Int* _311;
org$frostlang$frostc$expression$Binary$Operator _313;
org$frostlang$frostc$expression$Binary$Operator _316;
frost$core$Int _318;
int64_t _321;
int64_t _322;
bool _323;
frost$core$Bit _324;
bool _326;
frost$core$Int _329;
frost$core$Int* _332;
org$frostlang$frostc$expression$Binary$Operator _334;
org$frostlang$frostc$expression$Binary$Operator _337;
frost$core$Int _339;
int64_t _342;
int64_t _343;
bool _344;
frost$core$Bit _345;
bool _347;
frost$core$Int _350;
frost$core$Int* _353;
org$frostlang$frostc$expression$Binary$Operator _355;
org$frostlang$frostc$expression$Binary$Operator _358;
frost$core$Int _360;
int64_t _363;
int64_t _364;
bool _365;
frost$core$Bit _366;
bool _368;
frost$core$Int _371;
frost$core$Int* _374;
org$frostlang$frostc$expression$Binary$Operator _376;
org$frostlang$frostc$expression$Binary$Operator _379;
frost$core$Int _381;
int64_t _384;
int64_t _385;
bool _386;
frost$core$Bit _387;
bool _389;
frost$core$Int _392;
frost$core$Int* _395;
org$frostlang$frostc$expression$Binary$Operator _397;
org$frostlang$frostc$expression$Binary$Operator _400;
frost$core$Int _402;
int64_t _405;
int64_t _406;
bool _407;
frost$core$Bit _408;
bool _410;
frost$core$Int _413;
frost$core$Int* _416;
org$frostlang$frostc$expression$Binary$Operator _418;
org$frostlang$frostc$expression$Binary$Operator _421;
frost$core$Int _423;
int64_t _426;
int64_t _427;
bool _428;
frost$core$Bit _429;
bool _431;
frost$core$Int _434;
frost$core$Int* _437;
org$frostlang$frostc$expression$Binary$Operator _439;
org$frostlang$frostc$expression$Binary$Operator _442;
frost$core$Int _444;
int64_t _447;
int64_t _448;
bool _449;
frost$core$Bit _450;
bool _452;
frost$core$Int _455;
frost$core$Int* _458;
org$frostlang$frostc$expression$Binary$Operator _460;
org$frostlang$frostc$expression$Binary$Operator _463;
frost$core$Int _465;
int64_t _468;
int64_t _469;
bool _470;
frost$core$Bit _471;
bool _473;
frost$core$Int _476;
frost$core$Int* _479;
org$frostlang$frostc$expression$Binary$Operator _481;
org$frostlang$frostc$expression$Binary$Operator _484;
frost$core$Int _486;
int64_t _489;
int64_t _490;
bool _491;
frost$core$Bit _492;
bool _494;
frost$core$Int _497;
frost$core$Int* _500;
org$frostlang$frostc$expression$Binary$Operator _502;
org$frostlang$frostc$expression$Binary$Operator _505;
frost$core$Int _507;
int64_t _510;
int64_t _511;
bool _512;
frost$core$Bit _513;
bool _515;
frost$core$Int _518;
frost$core$Int* _521;
org$frostlang$frostc$expression$Binary$Operator _523;
org$frostlang$frostc$expression$Binary$Operator _526;
frost$core$Int _528;
int64_t _531;
int64_t _532;
bool _533;
frost$core$Bit _534;
bool _536;
frost$core$Int _539;
frost$core$Int* _542;
org$frostlang$frostc$expression$Binary$Operator _544;
org$frostlang$frostc$expression$Binary$Operator _547;
frost$core$Int _549;
int64_t _552;
int64_t _553;
bool _554;
frost$core$Bit _555;
bool _557;
frost$core$Int _560;
frost$core$Int* _563;
org$frostlang$frostc$expression$Binary$Operator _565;
org$frostlang$frostc$expression$Binary$Operator _568;
frost$core$Int _570;
int64_t _573;
int64_t _574;
bool _575;
frost$core$Bit _576;
bool _578;
frost$core$Int _581;
frost$core$Int* _584;
org$frostlang$frostc$expression$Binary$Operator _586;
org$frostlang$frostc$expression$Binary$Operator _589;
frost$core$Int _591;
int64_t _594;
int64_t _595;
bool _596;
frost$core$Bit _597;
bool _599;
frost$core$Int _602;
frost$core$Int* _605;
org$frostlang$frostc$expression$Binary$Operator _607;
org$frostlang$frostc$expression$Binary$Operator _610;
frost$core$Int _612;
int64_t _615;
int64_t _616;
bool _617;
frost$core$Bit _618;
bool _620;
frost$core$Int _623;
frost$core$Int* _626;
org$frostlang$frostc$expression$Binary$Operator _628;
org$frostlang$frostc$expression$Binary$Operator _631;
frost$core$Int _633;
int64_t _636;
int64_t _637;
bool _638;
frost$core$Bit _639;
bool _641;
frost$core$Int _644;
frost$core$Int* _647;
org$frostlang$frostc$expression$Binary$Operator _649;
org$frostlang$frostc$expression$Binary$Operator _652;
frost$core$Int _654;
int64_t _657;
int64_t _658;
bool _659;
frost$core$Bit _660;
bool _662;
frost$core$Int _665;
frost$core$Int* _668;
org$frostlang$frostc$expression$Binary$Operator _670;
org$frostlang$frostc$expression$Binary$Operator _673;
frost$core$Int _675;
int64_t _678;
int64_t _679;
bool _680;
frost$core$Bit _681;
bool _683;
frost$core$Int _686;
frost$core$Int* _689;
org$frostlang$frostc$expression$Binary$Operator _691;
org$frostlang$frostc$expression$Binary$Operator _694;
frost$core$Int _696;
int64_t _699;
int64_t _700;
bool _701;
frost$core$Bit _702;
bool _704;
frost$core$Int _707;
frost$core$Int* _710;
org$frostlang$frostc$expression$Binary$Operator _712;
org$frostlang$frostc$expression$Binary$Operator _715;
frost$core$Int _717;
int64_t _720;
int64_t _721;
bool _722;
frost$core$Bit _723;
bool _725;
frost$core$Int _728;
frost$core$Int* _731;
org$frostlang$frostc$expression$Binary$Operator _733;
org$frostlang$frostc$expression$Binary$Operator _736;
frost$core$Int _738;
int64_t _741;
int64_t _742;
bool _743;
frost$core$Bit _744;
bool _746;
frost$core$Int _749;
frost$core$Int* _752;
org$frostlang$frostc$expression$Binary$Operator _754;
org$frostlang$frostc$expression$Binary$Operator _757;
frost$core$Int _759;
int64_t _762;
int64_t _763;
bool _764;
frost$core$Bit _765;
bool _767;
frost$core$Int _770;
frost$core$Int* _773;
org$frostlang$frostc$expression$Binary$Operator _775;
org$frostlang$frostc$expression$Binary$Operator _778;
frost$core$Int _780;
int64_t _783;
int64_t _784;
bool _785;
frost$core$Bit _786;
bool _788;
frost$core$Int _791;
frost$core$Int* _794;
org$frostlang$frostc$expression$Binary$Operator _796;
org$frostlang$frostc$expression$Binary$Operator _799;
frost$core$Int _801;
int64_t _804;
int64_t _805;
bool _806;
frost$core$Bit _807;
bool _809;
frost$core$Int _812;
frost$core$Int* _815;
org$frostlang$frostc$expression$Binary$Operator _817;
org$frostlang$frostc$expression$Binary$Operator _820;
frost$core$Int _823;
org$frostlang$frostc$parser$Token$Kind _824;
frost$core$Object* _825;
$fn3 _828;
frost$core$String* _829;
frost$core$String* _830;
frost$core$Object* _831;
frost$core$Object* _833;
frost$core$Object* _835;
frost$core$String* _838;
frost$core$Object* _840;
frost$core$Object* _842;
frost$core$Object* _844;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:61
_1 = param0.kind;
_2 = _1.$rawValue;
_3 = (frost$core$Int) {56u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:62:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:62
_14 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:62:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_17 = &(&local1)->$rawValue;
*_17 = _14;
_19 = *(&local1);
*(&local0) = _19;
_22 = *(&local0);
return _22;
block3:;
_24 = (frost$core$Int) {57u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:63:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_27 = _2.value;
_28 = _24.value;
_29 = _27 == _28;
_30 = (frost$core$Bit) {_29};
_32 = _30.value;
if (_32) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:63
_35 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:63:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_38 = &(&local3)->$rawValue;
*_38 = _35;
_40 = *(&local3);
*(&local2) = _40;
_43 = *(&local2);
return _43;
block7:;
_45 = (frost$core$Int) {58u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:64:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_48 = _2.value;
_49 = _45.value;
_50 = _48 == _49;
_51 = (frost$core$Bit) {_50};
_53 = _51.value;
if (_53) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:64
_56 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:64:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_59 = &(&local5)->$rawValue;
*_59 = _56;
_61 = *(&local5);
*(&local4) = _61;
_64 = *(&local4);
return _64;
block11:;
_66 = (frost$core$Int) {59u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:65:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_69 = _2.value;
_70 = _66.value;
_71 = _69 == _70;
_72 = (frost$core$Bit) {_71};
_74 = _72.value;
if (_74) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:65
_77 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:65:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_80 = &(&local7)->$rawValue;
*_80 = _77;
_82 = *(&local7);
*(&local6) = _82;
_85 = *(&local6);
return _85;
block15:;
_87 = (frost$core$Int) {60u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:66:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_90 = _2.value;
_91 = _87.value;
_92 = _90 == _91;
_93 = (frost$core$Bit) {_92};
_95 = _93.value;
if (_95) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:66
_98 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:66:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_101 = &(&local9)->$rawValue;
*_101 = _98;
_103 = *(&local9);
*(&local8) = _103;
_106 = *(&local8);
return _106;
block19:;
_108 = (frost$core$Int) {61u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:67:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_111 = _2.value;
_112 = _108.value;
_113 = _111 == _112;
_114 = (frost$core$Bit) {_113};
_116 = _114.value;
if (_116) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:67
_119 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:67:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_122 = &(&local11)->$rawValue;
*_122 = _119;
_124 = *(&local11);
*(&local10) = _124;
_127 = *(&local10);
return _127;
block23:;
_129 = (frost$core$Int) {63u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:68:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_132 = _2.value;
_133 = _129.value;
_134 = _132 == _133;
_135 = (frost$core$Bit) {_134};
_137 = _135.value;
if (_137) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:68
_140 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:68:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_143 = &(&local13)->$rawValue;
*_143 = _140;
_145 = *(&local13);
*(&local12) = _145;
_148 = *(&local12);
return _148;
block27:;
_150 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:69:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_153 = _2.value;
_154 = _150.value;
_155 = _153 == _154;
_156 = (frost$core$Bit) {_155};
_158 = _156.value;
if (_158) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:69
_161 = (frost$core$Int) {7u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:69:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_164 = &(&local15)->$rawValue;
*_164 = _161;
_166 = *(&local15);
*(&local14) = _166;
_169 = *(&local14);
return _169;
block31:;
_171 = (frost$core$Int) {68u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:70:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_174 = _2.value;
_175 = _171.value;
_176 = _174 == _175;
_177 = (frost$core$Bit) {_176};
_179 = _177.value;
if (_179) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:70
_182 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:70:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_185 = &(&local17)->$rawValue;
*_185 = _182;
_187 = *(&local17);
*(&local16) = _187;
_190 = *(&local16);
return _190;
block35:;
_192 = (frost$core$Int) {67u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:71:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_195 = _2.value;
_196 = _192.value;
_197 = _195 == _196;
_198 = (frost$core$Bit) {_197};
_200 = _198.value;
if (_200) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:71
_203 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:71:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_206 = &(&local19)->$rawValue;
*_206 = _203;
_208 = *(&local19);
*(&local18) = _208;
_211 = *(&local18);
return _211;
block39:;
_213 = (frost$core$Int) {70u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:72:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_216 = _2.value;
_217 = _213.value;
_218 = _216 == _217;
_219 = (frost$core$Bit) {_218};
_221 = _219.value;
if (_221) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:72
_224 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:72:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_227 = &(&local21)->$rawValue;
*_227 = _224;
_229 = *(&local21);
*(&local20) = _229;
_232 = *(&local20);
return _232;
block43:;
_234 = (frost$core$Int) {69u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:73:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_237 = _2.value;
_238 = _234.value;
_239 = _237 == _238;
_240 = (frost$core$Bit) {_239};
_242 = _240.value;
if (_242) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:73
_245 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:73:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_248 = &(&local23)->$rawValue;
*_248 = _245;
_250 = *(&local23);
*(&local22) = _250;
_253 = *(&local22);
return _253;
block47:;
_255 = (frost$core$Int) {73u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:74:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_258 = _2.value;
_259 = _255.value;
_260 = _258 == _259;
_261 = (frost$core$Bit) {_260};
_263 = _261.value;
if (_263) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:74
_266 = (frost$core$Int) {12u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:74:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_269 = &(&local25)->$rawValue;
*_269 = _266;
_271 = *(&local25);
*(&local24) = _271;
_274 = *(&local24);
return _274;
block51:;
_276 = (frost$core$Int) {74u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:75:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_279 = _2.value;
_280 = _276.value;
_281 = _279 == _280;
_282 = (frost$core$Bit) {_281};
_284 = _282.value;
if (_284) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:75
_287 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:75:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_290 = &(&local27)->$rawValue;
*_290 = _287;
_292 = *(&local27);
*(&local26) = _292;
_295 = *(&local26);
return _295;
block55:;
_297 = (frost$core$Int) {71u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:76:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_300 = _2.value;
_301 = _297.value;
_302 = _300 == _301;
_303 = (frost$core$Bit) {_302};
_305 = _303.value;
if (_305) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:76
_308 = (frost$core$Int) {14u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:76:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_311 = &(&local29)->$rawValue;
*_311 = _308;
_313 = *(&local29);
*(&local28) = _313;
_316 = *(&local28);
return _316;
block59:;
_318 = (frost$core$Int) {72u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:77:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_321 = _2.value;
_322 = _318.value;
_323 = _321 == _322;
_324 = (frost$core$Bit) {_323};
_326 = _324.value;
if (_326) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:77
_329 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:77:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_332 = &(&local31)->$rawValue;
*_332 = _329;
_334 = *(&local31);
*(&local30) = _334;
_337 = *(&local30);
return _337;
block63:;
_339 = (frost$core$Int) {75u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:78:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_342 = _2.value;
_343 = _339.value;
_344 = _342 == _343;
_345 = (frost$core$Bit) {_344};
_347 = _345.value;
if (_347) goto block66; else goto block67;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:78
_350 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:78:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_353 = &(&local33)->$rawValue;
*_353 = _350;
_355 = *(&local33);
*(&local32) = _355;
_358 = *(&local32);
return _358;
block67:;
_360 = (frost$core$Int) {76u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:79:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_363 = _2.value;
_364 = _360.value;
_365 = _363 == _364;
_366 = (frost$core$Bit) {_365};
_368 = _366.value;
if (_368) goto block70; else goto block71;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:79
_371 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:79:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_374 = &(&local35)->$rawValue;
*_374 = _371;
_376 = *(&local35);
*(&local34) = _376;
_379 = *(&local34);
return _379;
block71:;
_381 = (frost$core$Int) {77u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:80:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_384 = _2.value;
_385 = _381.value;
_386 = _384 == _385;
_387 = (frost$core$Bit) {_386};
_389 = _387.value;
if (_389) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:80
_392 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:80:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_395 = &(&local37)->$rawValue;
*_395 = _392;
_397 = *(&local37);
*(&local36) = _397;
_400 = *(&local36);
return _400;
block75:;
_402 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:81:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_405 = _2.value;
_406 = _402.value;
_407 = _405 == _406;
_408 = (frost$core$Bit) {_407};
_410 = _408.value;
if (_410) goto block78; else goto block79;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:81
_413 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:81:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_416 = &(&local39)->$rawValue;
*_416 = _413;
_418 = *(&local39);
*(&local38) = _418;
_421 = *(&local38);
return _421;
block79:;
_423 = (frost$core$Int) {106u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:82:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_426 = _2.value;
_427 = _423.value;
_428 = _426 == _427;
_429 = (frost$core$Bit) {_428};
_431 = _429.value;
if (_431) goto block82; else goto block83;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:82
_434 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:82:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_437 = &(&local41)->$rawValue;
*_437 = _434;
_439 = *(&local41);
*(&local40) = _439;
_442 = *(&local40);
return _442;
block83:;
_444 = (frost$core$Int) {78u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:83:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_447 = _2.value;
_448 = _444.value;
_449 = _447 == _448;
_450 = (frost$core$Bit) {_449};
_452 = _450.value;
if (_452) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:83
_455 = (frost$core$Int) {25u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:83:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_458 = &(&local43)->$rawValue;
*_458 = _455;
_460 = *(&local43);
*(&local42) = _460;
_463 = *(&local42);
return _463;
block87:;
_465 = (frost$core$Int) {65u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:84:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_468 = _2.value;
_469 = _465.value;
_470 = _468 == _469;
_471 = (frost$core$Bit) {_470};
_473 = _471.value;
if (_473) goto block90; else goto block91;
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:84
_476 = (frost$core$Int) {21u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:84:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_479 = &(&local45)->$rawValue;
*_479 = _476;
_481 = *(&local45);
*(&local44) = _481;
_484 = *(&local44);
return _484;
block91:;
_486 = (frost$core$Int) {66u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:85:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_489 = _2.value;
_490 = _486.value;
_491 = _489 == _490;
_492 = (frost$core$Bit) {_491};
_494 = _492.value;
if (_494) goto block94; else goto block95;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:85
_497 = (frost$core$Int) {22u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:85:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_500 = &(&local47)->$rawValue;
*_500 = _497;
_502 = *(&local47);
*(&local46) = _502;
_505 = *(&local46);
return _505;
block95:;
_507 = (frost$core$Int) {94u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:86:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_510 = _2.value;
_511 = _507.value;
_512 = _510 == _511;
_513 = (frost$core$Bit) {_512};
_515 = _513.value;
if (_515) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:86
_518 = (frost$core$Int) {23u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:86:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_521 = &(&local49)->$rawValue;
*_521 = _518;
_523 = *(&local49);
*(&local48) = _523;
_526 = *(&local48);
return _526;
block99:;
_528 = (frost$core$Int) {79u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:87:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_531 = _2.value;
_532 = _528.value;
_533 = _531 == _532;
_534 = (frost$core$Bit) {_533};
_536 = _534.value;
if (_536) goto block102; else goto block103;
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:87
_539 = (frost$core$Int) {26u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:87:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_542 = &(&local51)->$rawValue;
*_542 = _539;
_544 = *(&local51);
*(&local50) = _544;
_547 = *(&local50);
return _547;
block103:;
_549 = (frost$core$Int) {80u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:88:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_552 = _2.value;
_553 = _549.value;
_554 = _552 == _553;
_555 = (frost$core$Bit) {_554};
_557 = _555.value;
if (_557) goto block106; else goto block107;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:88
_560 = (frost$core$Int) {27u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:88:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_563 = &(&local53)->$rawValue;
*_563 = _560;
_565 = *(&local53);
*(&local52) = _565;
_568 = *(&local52);
return _568;
block107:;
_570 = (frost$core$Int) {81u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:89:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_573 = _2.value;
_574 = _570.value;
_575 = _573 == _574;
_576 = (frost$core$Bit) {_575};
_578 = _576.value;
if (_578) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:89
_581 = (frost$core$Int) {28u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:89:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_584 = &(&local55)->$rawValue;
*_584 = _581;
_586 = *(&local55);
*(&local54) = _586;
_589 = *(&local54);
return _589;
block111:;
_591 = (frost$core$Int) {82u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:90:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_594 = _2.value;
_595 = _591.value;
_596 = _594 == _595;
_597 = (frost$core$Bit) {_596};
_599 = _597.value;
if (_599) goto block114; else goto block115;
block114:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:90
_602 = (frost$core$Int) {29u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:90:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_605 = &(&local57)->$rawValue;
*_605 = _602;
_607 = *(&local57);
*(&local56) = _607;
_610 = *(&local56);
return _610;
block115:;
_612 = (frost$core$Int) {84u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:91:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_615 = _2.value;
_616 = _612.value;
_617 = _615 == _616;
_618 = (frost$core$Bit) {_617};
_620 = _618.value;
if (_620) goto block118; else goto block119;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:91
_623 = (frost$core$Int) {30u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:91:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_626 = &(&local59)->$rawValue;
*_626 = _623;
_628 = *(&local59);
*(&local58) = _628;
_631 = *(&local58);
return _631;
block119:;
_633 = (frost$core$Int) {83u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:92:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_636 = _2.value;
_637 = _633.value;
_638 = _636 == _637;
_639 = (frost$core$Bit) {_638};
_641 = _639.value;
if (_641) goto block122; else goto block123;
block122:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:92
_644 = (frost$core$Int) {31u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:92:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_647 = &(&local61)->$rawValue;
*_647 = _644;
_649 = *(&local61);
*(&local60) = _649;
_652 = *(&local60);
return _652;
block123:;
_654 = (frost$core$Int) {86u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:93:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_657 = _2.value;
_658 = _654.value;
_659 = _657 == _658;
_660 = (frost$core$Bit) {_659};
_662 = _660.value;
if (_662) goto block126; else goto block127;
block126:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:93
_665 = (frost$core$Int) {32u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:93:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_668 = &(&local63)->$rawValue;
*_668 = _665;
_670 = *(&local63);
*(&local62) = _670;
_673 = *(&local62);
return _673;
block127:;
_675 = (frost$core$Int) {87u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:94:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_678 = _2.value;
_679 = _675.value;
_680 = _678 == _679;
_681 = (frost$core$Bit) {_680};
_683 = _681.value;
if (_683) goto block130; else goto block131;
block130:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:94
_686 = (frost$core$Int) {33u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:94:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_689 = &(&local65)->$rawValue;
*_689 = _686;
_691 = *(&local65);
*(&local64) = _691;
_694 = *(&local64);
return _694;
block131:;
_696 = (frost$core$Int) {88u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:95:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_699 = _2.value;
_700 = _696.value;
_701 = _699 == _700;
_702 = (frost$core$Bit) {_701};
_704 = _702.value;
if (_704) goto block134; else goto block135;
block134:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:95
_707 = (frost$core$Int) {34u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:95:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_710 = &(&local67)->$rawValue;
*_710 = _707;
_712 = *(&local67);
*(&local66) = _712;
_715 = *(&local66);
return _715;
block135:;
_717 = (frost$core$Int) {89u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:96:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_720 = _2.value;
_721 = _717.value;
_722 = _720 == _721;
_723 = (frost$core$Bit) {_722};
_725 = _723.value;
if (_725) goto block138; else goto block139;
block138:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:96
_728 = (frost$core$Int) {35u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:96:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_731 = &(&local69)->$rawValue;
*_731 = _728;
_733 = *(&local69);
*(&local68) = _733;
_736 = *(&local68);
return _736;
block139:;
_738 = (frost$core$Int) {90u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:97:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_741 = _2.value;
_742 = _738.value;
_743 = _741 == _742;
_744 = (frost$core$Bit) {_743};
_746 = _744.value;
if (_746) goto block142; else goto block143;
block142:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:97
_749 = (frost$core$Int) {36u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:97:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_752 = &(&local71)->$rawValue;
*_752 = _749;
_754 = *(&local71);
*(&local70) = _754;
_757 = *(&local70);
return _757;
block143:;
_759 = (frost$core$Int) {91u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:98:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_762 = _2.value;
_763 = _759.value;
_764 = _762 == _763;
_765 = (frost$core$Bit) {_764};
_767 = _765.value;
if (_767) goto block146; else goto block147;
block146:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:98
_770 = (frost$core$Int) {37u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:98:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_773 = &(&local73)->$rawValue;
*_773 = _770;
_775 = *(&local73);
*(&local72) = _775;
_778 = *(&local72);
return _778;
block147:;
_780 = (frost$core$Int) {92u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:99:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_783 = _2.value;
_784 = _780.value;
_785 = _783 == _784;
_786 = (frost$core$Bit) {_785};
_788 = _786.value;
if (_788) goto block150; else goto block151;
block150:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:99
_791 = (frost$core$Int) {38u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:99:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_794 = &(&local75)->$rawValue;
*_794 = _791;
_796 = *(&local75);
*(&local74) = _796;
_799 = *(&local74);
return _799;
block151:;
_801 = (frost$core$Int) {93u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:100:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_804 = _2.value;
_805 = _801.value;
_806 = _804 == _805;
_807 = (frost$core$Bit) {_806};
_809 = _807.value;
if (_809) goto block154; else goto block155;
block154:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:100
_812 = (frost$core$Int) {39u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:100:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_815 = &(&local77)->$rawValue;
*_815 = _812;
_817 = *(&local77);
*(&local76) = _817;
_820 = *(&local76);
return _820;
block155:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:101
_823 = (frost$core$Int) {101u};
_824 = param0.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp4;
$tmp4 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp4->value = _824;
_825 = ((frost$core$Object*) $tmp4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:101:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_828 = ($fn5) _825->$class->vtable[0];
_829 = _828(_825);
_830 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s6, _829);
_831 = ((frost$core$Object*) _830);
frost$core$Frost$ref$frost$core$Object$Q(_831);
_833 = ((frost$core$Object*) _830);
frost$core$Frost$unref$frost$core$Object$Q(_833);
_835 = ((frost$core$Object*) _829);
frost$core$Frost$unref$frost$core$Object$Q(_835);
_838 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_830, &$s7);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _823, _838);
_840 = ((frost$core$Object*) _838);
frost$core$Frost$unref$frost$core$Object$Q(_840);
_842 = ((frost$core$Object*) _830);
frost$core$Frost$unref$frost$core$Object$Q(_842);
_844 = _825;
frost$core$Frost$unref$frost$core$Object$Q(_844);
abort(); // unreachable
block1:;
goto block159;
block159:;

}
frost$core$Bit org$frostlang$frostc$expression$Binary$Operator$get_isAssignment$R$frost$core$Bit(org$frostlang$frostc$expression$Binary$Operator param0) {

frost$core$Int _1;
frost$core$Int _2;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _10;
frost$core$Int _12;
int64_t _15;
int64_t _16;
bool _17;
frost$core$Bit _18;
bool _20;
frost$core$Int _22;
int64_t _25;
int64_t _26;
bool _27;
frost$core$Bit _28;
bool _30;
frost$core$Int _32;
int64_t _35;
int64_t _36;
bool _37;
frost$core$Bit _38;
bool _40;
frost$core$Int _42;
int64_t _45;
int64_t _46;
bool _47;
frost$core$Bit _48;
bool _50;
frost$core$Int _52;
int64_t _55;
int64_t _56;
bool _57;
frost$core$Bit _58;
bool _60;
frost$core$Int _62;
int64_t _65;
int64_t _66;
bool _67;
frost$core$Bit _68;
bool _70;
frost$core$Int _72;
int64_t _75;
int64_t _76;
bool _77;
frost$core$Bit _78;
bool _80;
frost$core$Int _82;
int64_t _85;
int64_t _86;
bool _87;
frost$core$Bit _88;
bool _90;
frost$core$Int _92;
int64_t _95;
int64_t _96;
bool _97;
frost$core$Bit _98;
bool _100;
frost$core$Int _102;
int64_t _105;
int64_t _106;
bool _107;
frost$core$Bit _108;
bool _110;
frost$core$Int _112;
int64_t _115;
int64_t _116;
bool _117;
frost$core$Bit _118;
bool _120;
frost$core$Int _122;
int64_t _125;
int64_t _126;
bool _127;
frost$core$Bit _128;
bool _130;
frost$core$Int _132;
int64_t _135;
int64_t _136;
bool _137;
frost$core$Bit _138;
bool _140;
frost$core$Int _142;
int64_t _145;
int64_t _146;
bool _147;
frost$core$Bit _148;
bool _150;
frost$core$Bit _153;
frost$core$Bit _156;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:107
_1 = param0.$rawValue;
_2 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:108:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block3:;
_12 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:108:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_15 = _1.value;
_16 = _12.value;
_17 = _15 == _16;
_18 = (frost$core$Bit) {_17};
_20 = _18.value;
if (_20) goto block2; else goto block5;
block5:;
_22 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:108:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_25 = _1.value;
_26 = _22.value;
_27 = _25 == _26;
_28 = (frost$core$Bit) {_27};
_30 = _28.value;
if (_30) goto block2; else goto block7;
block7:;
_32 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:108:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_35 = _1.value;
_36 = _32.value;
_37 = _35 == _36;
_38 = (frost$core$Bit) {_37};
_40 = _38.value;
if (_40) goto block2; else goto block9;
block9:;
_42 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:108:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_45 = _1.value;
_46 = _42.value;
_47 = _45 == _46;
_48 = (frost$core$Bit) {_47};
_50 = _48.value;
if (_50) goto block2; else goto block11;
block11:;
_52 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:108:62
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_55 = _1.value;
_56 = _52.value;
_57 = _55 == _56;
_58 = (frost$core$Bit) {_57};
_60 = _58.value;
if (_60) goto block2; else goto block13;
block13:;
_62 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:108:72
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_65 = _1.value;
_66 = _62.value;
_67 = _65 == _66;
_68 = (frost$core$Bit) {_67};
_70 = _68.value;
if (_70) goto block2; else goto block15;
block15:;
_72 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:108:79
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_75 = _1.value;
_76 = _72.value;
_77 = _75 == _76;
_78 = (frost$core$Bit) {_77};
_80 = _78.value;
if (_80) goto block2; else goto block17;
block17:;
_82 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:109:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_85 = _1.value;
_86 = _82.value;
_87 = _85 == _86;
_88 = (frost$core$Bit) {_87};
_90 = _88.value;
if (_90) goto block2; else goto block19;
block19:;
_92 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:109:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_95 = _1.value;
_96 = _92.value;
_97 = _95 == _96;
_98 = (frost$core$Bit) {_97};
_100 = _98.value;
if (_100) goto block2; else goto block21;
block21:;
_102 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:109:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_105 = _1.value;
_106 = _102.value;
_107 = _105 == _106;
_108 = (frost$core$Bit) {_107};
_110 = _108.value;
if (_110) goto block2; else goto block23;
block23:;
_112 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:109:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_115 = _1.value;
_116 = _112.value;
_117 = _115 == _116;
_118 = (frost$core$Bit) {_117};
_120 = _118.value;
if (_120) goto block2; else goto block25;
block25:;
_122 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:109:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_125 = _1.value;
_126 = _122.value;
_127 = _125 == _126;
_128 = (frost$core$Bit) {_127};
_130 = _128.value;
if (_130) goto block2; else goto block27;
block27:;
_132 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:109:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_135 = _1.value;
_136 = _132.value;
_137 = _135 == _136;
_138 = (frost$core$Bit) {_137};
_140 = _138.value;
if (_140) goto block2; else goto block29;
block29:;
_142 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:110:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_145 = _1.value;
_146 = _142.value;
_147 = _145 == _146;
_148 = (frost$core$Bit) {_147};
_150 = _148.value;
if (_150) goto block2; else goto block31;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:111
_153 = (frost$core$Bit) {true};
return _153;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:114
_156 = (frost$core$Bit) {false};
return _156;
block1:;
goto block33;
block33:;

}
org$frostlang$frostc$expression$Binary$Operator org$frostlang$frostc$expression$Binary$Operator$removeAssignment$R$org$frostlang$frostc$expression$Binary$Operator(org$frostlang$frostc$expression$Binary$Operator param0) {

org$frostlang$frostc$expression$Binary$Operator local0;
org$frostlang$frostc$expression$Binary$Operator local1;
org$frostlang$frostc$expression$Binary$Operator local2;
org$frostlang$frostc$expression$Binary$Operator local3;
org$frostlang$frostc$expression$Binary$Operator local4;
org$frostlang$frostc$expression$Binary$Operator local5;
org$frostlang$frostc$expression$Binary$Operator local6;
org$frostlang$frostc$expression$Binary$Operator local7;
org$frostlang$frostc$expression$Binary$Operator local8;
org$frostlang$frostc$expression$Binary$Operator local9;
org$frostlang$frostc$expression$Binary$Operator local10;
org$frostlang$frostc$expression$Binary$Operator local11;
org$frostlang$frostc$expression$Binary$Operator local12;
org$frostlang$frostc$expression$Binary$Operator local13;
org$frostlang$frostc$expression$Binary$Operator local14;
org$frostlang$frostc$expression$Binary$Operator local15;
org$frostlang$frostc$expression$Binary$Operator local16;
org$frostlang$frostc$expression$Binary$Operator local17;
org$frostlang$frostc$expression$Binary$Operator local18;
org$frostlang$frostc$expression$Binary$Operator local19;
org$frostlang$frostc$expression$Binary$Operator local20;
org$frostlang$frostc$expression$Binary$Operator local21;
org$frostlang$frostc$expression$Binary$Operator local22;
org$frostlang$frostc$expression$Binary$Operator local23;
org$frostlang$frostc$expression$Binary$Operator local24;
org$frostlang$frostc$expression$Binary$Operator local25;
org$frostlang$frostc$expression$Binary$Operator local26;
org$frostlang$frostc$expression$Binary$Operator local27;
frost$core$Int _1;
frost$core$Int _2;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _10;
frost$core$Int _13;
frost$core$Int* _16;
org$frostlang$frostc$expression$Binary$Operator _18;
org$frostlang$frostc$expression$Binary$Operator _21;
frost$core$Int _23;
int64_t _26;
int64_t _27;
bool _28;
frost$core$Bit _29;
bool _31;
frost$core$Int _34;
frost$core$Int* _37;
org$frostlang$frostc$expression$Binary$Operator _39;
org$frostlang$frostc$expression$Binary$Operator _42;
frost$core$Int _44;
int64_t _47;
int64_t _48;
bool _49;
frost$core$Bit _50;
bool _52;
frost$core$Int _55;
frost$core$Int* _58;
org$frostlang$frostc$expression$Binary$Operator _60;
org$frostlang$frostc$expression$Binary$Operator _63;
frost$core$Int _65;
int64_t _68;
int64_t _69;
bool _70;
frost$core$Bit _71;
bool _73;
frost$core$Int _76;
frost$core$Int* _79;
org$frostlang$frostc$expression$Binary$Operator _81;
org$frostlang$frostc$expression$Binary$Operator _84;
frost$core$Int _86;
int64_t _89;
int64_t _90;
bool _91;
frost$core$Bit _92;
bool _94;
frost$core$Int _97;
frost$core$Int* _100;
org$frostlang$frostc$expression$Binary$Operator _102;
org$frostlang$frostc$expression$Binary$Operator _105;
frost$core$Int _107;
int64_t _110;
int64_t _111;
bool _112;
frost$core$Bit _113;
bool _115;
frost$core$Int _118;
frost$core$Int* _121;
org$frostlang$frostc$expression$Binary$Operator _123;
org$frostlang$frostc$expression$Binary$Operator _126;
frost$core$Int _128;
int64_t _131;
int64_t _132;
bool _133;
frost$core$Bit _134;
bool _136;
frost$core$Int _139;
frost$core$Int* _142;
org$frostlang$frostc$expression$Binary$Operator _144;
org$frostlang$frostc$expression$Binary$Operator _147;
frost$core$Int _149;
int64_t _152;
int64_t _153;
bool _154;
frost$core$Bit _155;
bool _157;
frost$core$Int _160;
frost$core$Int* _163;
org$frostlang$frostc$expression$Binary$Operator _165;
org$frostlang$frostc$expression$Binary$Operator _168;
frost$core$Int _170;
int64_t _173;
int64_t _174;
bool _175;
frost$core$Bit _176;
bool _178;
frost$core$Int _181;
frost$core$Int* _184;
org$frostlang$frostc$expression$Binary$Operator _186;
org$frostlang$frostc$expression$Binary$Operator _189;
frost$core$Int _191;
int64_t _194;
int64_t _195;
bool _196;
frost$core$Bit _197;
bool _199;
frost$core$Int _202;
frost$core$Int* _205;
org$frostlang$frostc$expression$Binary$Operator _207;
org$frostlang$frostc$expression$Binary$Operator _210;
frost$core$Int _212;
int64_t _215;
int64_t _216;
bool _217;
frost$core$Bit _218;
bool _220;
frost$core$Int _223;
frost$core$Int* _226;
org$frostlang$frostc$expression$Binary$Operator _228;
org$frostlang$frostc$expression$Binary$Operator _231;
frost$core$Int _233;
int64_t _236;
int64_t _237;
bool _238;
frost$core$Bit _239;
bool _241;
frost$core$Int _244;
frost$core$Int* _247;
org$frostlang$frostc$expression$Binary$Operator _249;
org$frostlang$frostc$expression$Binary$Operator _252;
frost$core$Int _254;
int64_t _257;
int64_t _258;
bool _259;
frost$core$Bit _260;
bool _262;
frost$core$Int _265;
frost$core$Int* _268;
org$frostlang$frostc$expression$Binary$Operator _270;
org$frostlang$frostc$expression$Binary$Operator _273;
frost$core$Int _275;
int64_t _278;
int64_t _279;
bool _280;
frost$core$Bit _281;
bool _283;
frost$core$Int _286;
frost$core$Int* _289;
org$frostlang$frostc$expression$Binary$Operator _291;
org$frostlang$frostc$expression$Binary$Operator _294;
frost$core$Int _297;
frost$core$Object* _298;
$fn9 _301;
frost$core$String* _302;
frost$core$String* _303;
frost$core$Object* _304;
frost$core$Object* _306;
frost$core$Object* _308;
frost$core$String* _311;
frost$core$Object* _313;
frost$core$Object* _315;
frost$core$Object* _317;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:120
_1 = param0.$rawValue;
_2 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:121:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:121
_13 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:121:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_16 = &(&local1)->$rawValue;
*_16 = _13;
_18 = *(&local1);
*(&local0) = _18;
_21 = *(&local0);
return _21;
block3:;
_23 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_26 = _1.value;
_27 = _23.value;
_28 = _26 == _27;
_29 = (frost$core$Bit) {_28};
_31 = _29.value;
if (_31) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:122
_34 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:122:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_37 = &(&local3)->$rawValue;
*_37 = _34;
_39 = *(&local3);
*(&local2) = _39;
_42 = *(&local2);
return _42;
block7:;
_44 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:123:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_47 = _1.value;
_48 = _44.value;
_49 = _47 == _48;
_50 = (frost$core$Bit) {_49};
_52 = _50.value;
if (_52) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:123
_55 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:123:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_58 = &(&local5)->$rawValue;
*_58 = _55;
_60 = *(&local5);
*(&local4) = _60;
_63 = *(&local4);
return _63;
block11:;
_65 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:124:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_68 = _1.value;
_69 = _65.value;
_70 = _68 == _69;
_71 = (frost$core$Bit) {_70};
_73 = _71.value;
if (_73) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:124
_76 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:124:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_79 = &(&local7)->$rawValue;
*_79 = _76;
_81 = *(&local7);
*(&local6) = _81;
_84 = *(&local6);
return _84;
block15:;
_86 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:125:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_89 = _1.value;
_90 = _86.value;
_91 = _89 == _90;
_92 = (frost$core$Bit) {_91};
_94 = _92.value;
if (_94) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:125
_97 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:125:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_100 = &(&local9)->$rawValue;
*_100 = _97;
_102 = *(&local9);
*(&local8) = _102;
_105 = *(&local8);
return _105;
block19:;
_107 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:126:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_110 = _1.value;
_111 = _107.value;
_112 = _110 == _111;
_113 = (frost$core$Bit) {_112};
_115 = _113.value;
if (_115) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:126
_118 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:126:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_121 = &(&local11)->$rawValue;
*_121 = _118;
_123 = *(&local11);
*(&local10) = _123;
_126 = *(&local10);
return _126;
block23:;
_128 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:127:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_131 = _1.value;
_132 = _128.value;
_133 = _131 == _132;
_134 = (frost$core$Bit) {_133};
_136 = _134.value;
if (_136) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:127
_139 = (frost$core$Int) {12u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:127:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_142 = &(&local13)->$rawValue;
*_142 = _139;
_144 = *(&local13);
*(&local12) = _144;
_147 = *(&local12);
return _147;
block27:;
_149 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:128:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_152 = _1.value;
_153 = _149.value;
_154 = _152 == _153;
_155 = (frost$core$Bit) {_154};
_157 = _155.value;
if (_157) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:128
_160 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:128:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_163 = &(&local15)->$rawValue;
*_163 = _160;
_165 = *(&local15);
*(&local14) = _165;
_168 = *(&local14);
return _168;
block31:;
_170 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:129:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_173 = _1.value;
_174 = _170.value;
_175 = _173 == _174;
_176 = (frost$core$Bit) {_175};
_178 = _176.value;
if (_178) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:129
_181 = (frost$core$Int) {14u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:129:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_184 = &(&local17)->$rawValue;
*_184 = _181;
_186 = *(&local17);
*(&local16) = _186;
_189 = *(&local16);
return _189;
block35:;
_191 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:130:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_194 = _1.value;
_195 = _191.value;
_196 = _194 == _195;
_197 = (frost$core$Bit) {_196};
_199 = _197.value;
if (_199) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:130
_202 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:130:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_205 = &(&local19)->$rawValue;
*_205 = _202;
_207 = *(&local19);
*(&local18) = _207;
_210 = *(&local18);
return _210;
block39:;
_212 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:131:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_215 = _1.value;
_216 = _212.value;
_217 = _215 == _216;
_218 = (frost$core$Bit) {_217};
_220 = _218.value;
if (_220) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:131
_223 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:131:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_226 = &(&local21)->$rawValue;
*_226 = _223;
_228 = *(&local21);
*(&local20) = _228;
_231 = *(&local20);
return _231;
block43:;
_233 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:132:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_236 = _1.value;
_237 = _233.value;
_238 = _236 == _237;
_239 = (frost$core$Bit) {_238};
_241 = _239.value;
if (_241) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:132
_244 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:132:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_247 = &(&local23)->$rawValue;
*_247 = _244;
_249 = *(&local23);
*(&local22) = _249;
_252 = *(&local22);
return _252;
block47:;
_254 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:133:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_257 = _1.value;
_258 = _254.value;
_259 = _257 == _258;
_260 = (frost$core$Bit) {_259};
_262 = _260.value;
if (_262) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:133
_265 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:133:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_268 = &(&local25)->$rawValue;
*_268 = _265;
_270 = *(&local25);
*(&local24) = _270;
_273 = *(&local24);
return _273;
block51:;
_275 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:134:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_278 = _1.value;
_279 = _275.value;
_280 = _278 == _279;
_281 = (frost$core$Bit) {_280};
_283 = _281.value;
if (_283) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:134
_286 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:134:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_289 = &(&local27)->$rawValue;
*_289 = _286;
_291 = *(&local27);
*(&local26) = _291;
_294 = *(&local26);
return _294;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:135
_297 = (frost$core$Int) {135u};
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp10;
$tmp10 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp10->value = param0;
_298 = ((frost$core$Object*) $tmp10);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:135:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_301 = ($fn11) _298->$class->vtable[0];
_302 = _301(_298);
_303 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s12, _302);
_304 = ((frost$core$Object*) _303);
frost$core$Frost$ref$frost$core$Object$Q(_304);
_306 = ((frost$core$Object*) _303);
frost$core$Frost$unref$frost$core$Object$Q(_306);
_308 = ((frost$core$Object*) _302);
frost$core$Frost$unref$frost$core$Object$Q(_308);
_311 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_303, &$s13);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _297, _311);
_313 = ((frost$core$Object*) _311);
frost$core$Frost$unref$frost$core$Object$Q(_313);
_315 = ((frost$core$Object*) _303);
frost$core$Frost$unref$frost$core$Object$Q(_315);
_317 = _298;
frost$core$Frost$unref$frost$core$Object$Q(_317);
abort(); // unreachable
block1:;
goto block59;
block59:;

}
frost$core$String* org$frostlang$frostc$expression$Binary$Operator$get_asString$R$frost$core$String(org$frostlang$frostc$expression$Binary$Operator param0) {

frost$core$Int _1;
frost$core$Int _2;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _10;
frost$core$Object* _13;
frost$core$Int _16;
int64_t _19;
int64_t _20;
bool _21;
frost$core$Bit _22;
bool _24;
frost$core$Object* _27;
frost$core$Int _30;
int64_t _33;
int64_t _34;
bool _35;
frost$core$Bit _36;
bool _38;
frost$core$Object* _41;
frost$core$Int _44;
int64_t _47;
int64_t _48;
bool _49;
frost$core$Bit _50;
bool _52;
frost$core$Object* _55;
frost$core$Int _58;
int64_t _61;
int64_t _62;
bool _63;
frost$core$Bit _64;
bool _66;
frost$core$Object* _69;
frost$core$Int _72;
int64_t _75;
int64_t _76;
bool _77;
frost$core$Bit _78;
bool _80;
frost$core$Object* _83;
frost$core$Int _86;
int64_t _89;
int64_t _90;
bool _91;
frost$core$Bit _92;
bool _94;
frost$core$Object* _97;
frost$core$Int _100;
int64_t _103;
int64_t _104;
bool _105;
frost$core$Bit _106;
bool _108;
frost$core$Object* _111;
frost$core$Int _114;
int64_t _117;
int64_t _118;
bool _119;
frost$core$Bit _120;
bool _122;
frost$core$Object* _125;
frost$core$Int _128;
int64_t _131;
int64_t _132;
bool _133;
frost$core$Bit _134;
bool _136;
frost$core$Object* _139;
frost$core$Int _142;
int64_t _145;
int64_t _146;
bool _147;
frost$core$Bit _148;
bool _150;
frost$core$Object* _153;
frost$core$Int _156;
int64_t _159;
int64_t _160;
bool _161;
frost$core$Bit _162;
bool _164;
frost$core$Object* _167;
frost$core$Int _170;
int64_t _173;
int64_t _174;
bool _175;
frost$core$Bit _176;
bool _178;
frost$core$Object* _181;
frost$core$Int _184;
int64_t _187;
int64_t _188;
bool _189;
frost$core$Bit _190;
bool _192;
frost$core$Object* _195;
frost$core$Int _198;
int64_t _201;
int64_t _202;
bool _203;
frost$core$Bit _204;
bool _206;
frost$core$Object* _209;
frost$core$Int _212;
int64_t _215;
int64_t _216;
bool _217;
frost$core$Bit _218;
bool _220;
frost$core$Object* _223;
frost$core$Int _226;
int64_t _229;
int64_t _230;
bool _231;
frost$core$Bit _232;
bool _234;
frost$core$Object* _237;
frost$core$Int _240;
int64_t _243;
int64_t _244;
bool _245;
frost$core$Bit _246;
bool _248;
frost$core$Object* _251;
frost$core$Int _254;
int64_t _257;
int64_t _258;
bool _259;
frost$core$Bit _260;
bool _262;
frost$core$Object* _265;
frost$core$Int _268;
int64_t _271;
int64_t _272;
bool _273;
frost$core$Bit _274;
bool _276;
frost$core$Object* _279;
frost$core$Int _282;
int64_t _285;
int64_t _286;
bool _287;
frost$core$Bit _288;
bool _290;
frost$core$Object* _293;
frost$core$Int _296;
int64_t _299;
int64_t _300;
bool _301;
frost$core$Bit _302;
bool _304;
frost$core$Object* _307;
frost$core$Int _310;
int64_t _313;
int64_t _314;
bool _315;
frost$core$Bit _316;
bool _318;
frost$core$Object* _321;
frost$core$Int _324;
int64_t _327;
int64_t _328;
bool _329;
frost$core$Bit _330;
bool _332;
frost$core$Object* _335;
frost$core$Int _338;
int64_t _341;
int64_t _342;
bool _343;
frost$core$Bit _344;
bool _346;
frost$core$Object* _349;
frost$core$Int _352;
int64_t _355;
int64_t _356;
bool _357;
frost$core$Bit _358;
bool _360;
frost$core$Object* _363;
frost$core$Int _366;
int64_t _369;
int64_t _370;
bool _371;
frost$core$Bit _372;
bool _374;
frost$core$Object* _377;
frost$core$Int _380;
int64_t _383;
int64_t _384;
bool _385;
frost$core$Bit _386;
bool _388;
frost$core$Object* _391;
frost$core$Int _394;
int64_t _397;
int64_t _398;
bool _399;
frost$core$Bit _400;
bool _402;
frost$core$Object* _405;
frost$core$Int _408;
int64_t _411;
int64_t _412;
bool _413;
frost$core$Bit _414;
bool _416;
frost$core$Object* _419;
frost$core$Int _422;
int64_t _425;
int64_t _426;
bool _427;
frost$core$Bit _428;
bool _430;
frost$core$Object* _433;
frost$core$Int _436;
int64_t _439;
int64_t _440;
bool _441;
frost$core$Bit _442;
bool _444;
frost$core$Object* _447;
frost$core$Int _450;
int64_t _453;
int64_t _454;
bool _455;
frost$core$Bit _456;
bool _458;
frost$core$Object* _461;
frost$core$Int _464;
int64_t _467;
int64_t _468;
bool _469;
frost$core$Bit _470;
bool _472;
frost$core$Object* _475;
frost$core$Int _478;
int64_t _481;
int64_t _482;
bool _483;
frost$core$Bit _484;
bool _486;
frost$core$Object* _489;
frost$core$Int _492;
int64_t _495;
int64_t _496;
bool _497;
frost$core$Bit _498;
bool _500;
frost$core$Object* _503;
frost$core$Int _506;
int64_t _509;
int64_t _510;
bool _511;
frost$core$Bit _512;
bool _514;
frost$core$Object* _517;
frost$core$Int _520;
int64_t _523;
int64_t _524;
bool _525;
frost$core$Bit _526;
bool _528;
frost$core$Object* _531;
frost$core$Int _534;
int64_t _537;
int64_t _538;
bool _539;
frost$core$Bit _540;
bool _542;
frost$core$Object* _545;
frost$core$Int _548;
int64_t _551;
int64_t _552;
bool _553;
frost$core$Bit _554;
bool _556;
frost$core$Object* _559;
frost$core$Int _563;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:141
_1 = param0.$rawValue;
_2 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:142:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:142
_13 = ((frost$core$Object*) &$s15);
frost$core$Frost$ref$frost$core$Object$Q(_13);
return &$s16;
block3:;
_16 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:143:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_19 = _1.value;
_20 = _16.value;
_21 = _19 == _20;
_22 = (frost$core$Bit) {_21};
_24 = _22.value;
if (_24) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:143
_27 = ((frost$core$Object*) &$s17);
frost$core$Frost$ref$frost$core$Object$Q(_27);
return &$s18;
block6:;
_30 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:144:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_33 = _1.value;
_34 = _30.value;
_35 = _33 == _34;
_36 = (frost$core$Bit) {_35};
_38 = _36.value;
if (_38) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:144
_41 = ((frost$core$Object*) &$s19);
frost$core$Frost$ref$frost$core$Object$Q(_41);
return &$s20;
block9:;
_44 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:145:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_47 = _1.value;
_48 = _44.value;
_49 = _47 == _48;
_50 = (frost$core$Bit) {_49};
_52 = _50.value;
if (_52) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:145
_55 = ((frost$core$Object*) &$s21);
frost$core$Frost$ref$frost$core$Object$Q(_55);
return &$s22;
block12:;
_58 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:146:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_61 = _1.value;
_62 = _58.value;
_63 = _61 == _62;
_64 = (frost$core$Bit) {_63};
_66 = _64.value;
if (_66) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:146
_69 = ((frost$core$Object*) &$s23);
frost$core$Frost$ref$frost$core$Object$Q(_69);
return &$s24;
block15:;
_72 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:147:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_75 = _1.value;
_76 = _72.value;
_77 = _75 == _76;
_78 = (frost$core$Bit) {_77};
_80 = _78.value;
if (_80) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:147
_83 = ((frost$core$Object*) &$s25);
frost$core$Frost$ref$frost$core$Object$Q(_83);
return &$s26;
block18:;
_86 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:148:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_89 = _1.value;
_90 = _86.value;
_91 = _89 == _90;
_92 = (frost$core$Bit) {_91};
_94 = _92.value;
if (_94) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:148
_97 = ((frost$core$Object*) &$s27);
frost$core$Frost$ref$frost$core$Object$Q(_97);
return &$s28;
block21:;
_100 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:149:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_103 = _1.value;
_104 = _100.value;
_105 = _103 == _104;
_106 = (frost$core$Bit) {_105};
_108 = _106.value;
if (_108) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:149
_111 = ((frost$core$Object*) &$s29);
frost$core$Frost$ref$frost$core$Object$Q(_111);
return &$s30;
block24:;
_114 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:150:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_117 = _1.value;
_118 = _114.value;
_119 = _117 == _118;
_120 = (frost$core$Bit) {_119};
_122 = _120.value;
if (_122) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:150
_125 = ((frost$core$Object*) &$s31);
frost$core$Frost$ref$frost$core$Object$Q(_125);
return &$s32;
block27:;
_128 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:151:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_131 = _1.value;
_132 = _128.value;
_133 = _131 == _132;
_134 = (frost$core$Bit) {_133};
_136 = _134.value;
if (_136) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:151
_139 = ((frost$core$Object*) &$s33);
frost$core$Frost$ref$frost$core$Object$Q(_139);
return &$s34;
block30:;
_142 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:152:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_145 = _1.value;
_146 = _142.value;
_147 = _145 == _146;
_148 = (frost$core$Bit) {_147};
_150 = _148.value;
if (_150) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:152
_153 = ((frost$core$Object*) &$s35);
frost$core$Frost$ref$frost$core$Object$Q(_153);
return &$s36;
block33:;
_156 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:153:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_159 = _1.value;
_160 = _156.value;
_161 = _159 == _160;
_162 = (frost$core$Bit) {_161};
_164 = _162.value;
if (_164) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:153
_167 = ((frost$core$Object*) &$s37);
frost$core$Frost$ref$frost$core$Object$Q(_167);
return &$s38;
block36:;
_170 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:154:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_173 = _1.value;
_174 = _170.value;
_175 = _173 == _174;
_176 = (frost$core$Bit) {_175};
_178 = _176.value;
if (_178) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:154
_181 = ((frost$core$Object*) &$s39);
frost$core$Frost$ref$frost$core$Object$Q(_181);
return &$s40;
block39:;
_184 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:155:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_187 = _1.value;
_188 = _184.value;
_189 = _187 == _188;
_190 = (frost$core$Bit) {_189};
_192 = _190.value;
if (_192) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:155
_195 = ((frost$core$Object*) &$s41);
frost$core$Frost$ref$frost$core$Object$Q(_195);
return &$s42;
block42:;
_198 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:156:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_201 = _1.value;
_202 = _198.value;
_203 = _201 == _202;
_204 = (frost$core$Bit) {_203};
_206 = _204.value;
if (_206) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:156
_209 = ((frost$core$Object*) &$s43);
frost$core$Frost$ref$frost$core$Object$Q(_209);
return &$s44;
block45:;
_212 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:157:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_215 = _1.value;
_216 = _212.value;
_217 = _215 == _216;
_218 = (frost$core$Bit) {_217};
_220 = _218.value;
if (_220) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:157
_223 = ((frost$core$Object*) &$s45);
frost$core$Frost$ref$frost$core$Object$Q(_223);
return &$s46;
block48:;
_226 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:158:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_229 = _1.value;
_230 = _226.value;
_231 = _229 == _230;
_232 = (frost$core$Bit) {_231};
_234 = _232.value;
if (_234) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:158
_237 = ((frost$core$Object*) &$s47);
frost$core$Frost$ref$frost$core$Object$Q(_237);
return &$s48;
block51:;
_240 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:159:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_243 = _1.value;
_244 = _240.value;
_245 = _243 == _244;
_246 = (frost$core$Bit) {_245};
_248 = _246.value;
if (_248) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:159
_251 = ((frost$core$Object*) &$s49);
frost$core$Frost$ref$frost$core$Object$Q(_251);
return &$s50;
block54:;
_254 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:160:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_257 = _1.value;
_258 = _254.value;
_259 = _257 == _258;
_260 = (frost$core$Bit) {_259};
_262 = _260.value;
if (_262) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:160
_265 = ((frost$core$Object*) &$s51);
frost$core$Frost$ref$frost$core$Object$Q(_265);
return &$s52;
block57:;
_268 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:161:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_271 = _1.value;
_272 = _268.value;
_273 = _271 == _272;
_274 = (frost$core$Bit) {_273};
_276 = _274.value;
if (_276) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:161
_279 = ((frost$core$Object*) &$s53);
frost$core$Frost$ref$frost$core$Object$Q(_279);
return &$s54;
block60:;
_282 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:162:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_285 = _1.value;
_286 = _282.value;
_287 = _285 == _286;
_288 = (frost$core$Bit) {_287};
_290 = _288.value;
if (_290) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:162
_293 = ((frost$core$Object*) &$s55);
frost$core$Frost$ref$frost$core$Object$Q(_293);
return &$s56;
block63:;
_296 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:163:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_299 = _1.value;
_300 = _296.value;
_301 = _299 == _300;
_302 = (frost$core$Bit) {_301};
_304 = _302.value;
if (_304) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:163
_307 = ((frost$core$Object*) &$s57);
frost$core$Frost$ref$frost$core$Object$Q(_307);
return &$s58;
block66:;
_310 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:164:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_313 = _1.value;
_314 = _310.value;
_315 = _313 == _314;
_316 = (frost$core$Bit) {_315};
_318 = _316.value;
if (_318) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:164
_321 = ((frost$core$Object*) &$s59);
frost$core$Frost$ref$frost$core$Object$Q(_321);
return &$s60;
block69:;
_324 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:165:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_327 = _1.value;
_328 = _324.value;
_329 = _327 == _328;
_330 = (frost$core$Bit) {_329};
_332 = _330.value;
if (_332) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:165
_335 = ((frost$core$Object*) &$s61);
frost$core$Frost$ref$frost$core$Object$Q(_335);
return &$s62;
block72:;
_338 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:166:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_341 = _1.value;
_342 = _338.value;
_343 = _341 == _342;
_344 = (frost$core$Bit) {_343};
_346 = _344.value;
if (_346) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:166
_349 = ((frost$core$Object*) &$s63);
frost$core$Frost$ref$frost$core$Object$Q(_349);
return &$s64;
block75:;
_352 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:167:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_355 = _1.value;
_356 = _352.value;
_357 = _355 == _356;
_358 = (frost$core$Bit) {_357};
_360 = _358.value;
if (_360) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:167
_363 = ((frost$core$Object*) &$s65);
frost$core$Frost$ref$frost$core$Object$Q(_363);
return &$s66;
block78:;
_366 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:168:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_369 = _1.value;
_370 = _366.value;
_371 = _369 == _370;
_372 = (frost$core$Bit) {_371};
_374 = _372.value;
if (_374) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:168
_377 = ((frost$core$Object*) &$s67);
frost$core$Frost$ref$frost$core$Object$Q(_377);
return &$s68;
block81:;
_380 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:169:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_383 = _1.value;
_384 = _380.value;
_385 = _383 == _384;
_386 = (frost$core$Bit) {_385};
_388 = _386.value;
if (_388) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:169
_391 = ((frost$core$Object*) &$s69);
frost$core$Frost$ref$frost$core$Object$Q(_391);
return &$s70;
block84:;
_394 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:170:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_397 = _1.value;
_398 = _394.value;
_399 = _397 == _398;
_400 = (frost$core$Bit) {_399};
_402 = _400.value;
if (_402) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:170
_405 = ((frost$core$Object*) &$s71);
frost$core$Frost$ref$frost$core$Object$Q(_405);
return &$s72;
block87:;
_408 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:171:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_411 = _1.value;
_412 = _408.value;
_413 = _411 == _412;
_414 = (frost$core$Bit) {_413};
_416 = _414.value;
if (_416) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:171
_419 = ((frost$core$Object*) &$s73);
frost$core$Frost$ref$frost$core$Object$Q(_419);
return &$s74;
block90:;
_422 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:172:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_425 = _1.value;
_426 = _422.value;
_427 = _425 == _426;
_428 = (frost$core$Bit) {_427};
_430 = _428.value;
if (_430) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:172
_433 = ((frost$core$Object*) &$s75);
frost$core$Frost$ref$frost$core$Object$Q(_433);
return &$s76;
block93:;
_436 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:173:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_439 = _1.value;
_440 = _436.value;
_441 = _439 == _440;
_442 = (frost$core$Bit) {_441};
_444 = _442.value;
if (_444) goto block95; else goto block96;
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:173
_447 = ((frost$core$Object*) &$s77);
frost$core$Frost$ref$frost$core$Object$Q(_447);
return &$s78;
block96:;
_450 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:174:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_453 = _1.value;
_454 = _450.value;
_455 = _453 == _454;
_456 = (frost$core$Bit) {_455};
_458 = _456.value;
if (_458) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:174
_461 = ((frost$core$Object*) &$s79);
frost$core$Frost$ref$frost$core$Object$Q(_461);
return &$s80;
block99:;
_464 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:175:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_467 = _1.value;
_468 = _464.value;
_469 = _467 == _468;
_470 = (frost$core$Bit) {_469};
_472 = _470.value;
if (_472) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:175
_475 = ((frost$core$Object*) &$s81);
frost$core$Frost$ref$frost$core$Object$Q(_475);
return &$s82;
block102:;
_478 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:176:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_481 = _1.value;
_482 = _478.value;
_483 = _481 == _482;
_484 = (frost$core$Bit) {_483};
_486 = _484.value;
if (_486) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:176
_489 = ((frost$core$Object*) &$s83);
frost$core$Frost$ref$frost$core$Object$Q(_489);
return &$s84;
block105:;
_492 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:177:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_495 = _1.value;
_496 = _492.value;
_497 = _495 == _496;
_498 = (frost$core$Bit) {_497};
_500 = _498.value;
if (_500) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:177
_503 = ((frost$core$Object*) &$s85);
frost$core$Frost$ref$frost$core$Object$Q(_503);
return &$s86;
block108:;
_506 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:178:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_509 = _1.value;
_510 = _506.value;
_511 = _509 == _510;
_512 = (frost$core$Bit) {_511};
_514 = _512.value;
if (_514) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:178
_517 = ((frost$core$Object*) &$s87);
frost$core$Frost$ref$frost$core$Object$Q(_517);
return &$s88;
block111:;
_520 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:179:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_523 = _1.value;
_524 = _520.value;
_525 = _523 == _524;
_526 = (frost$core$Bit) {_525};
_528 = _526.value;
if (_528) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:179
_531 = ((frost$core$Object*) &$s89);
frost$core$Frost$ref$frost$core$Object$Q(_531);
return &$s90;
block114:;
_534 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:180:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_537 = _1.value;
_538 = _534.value;
_539 = _537 == _538;
_540 = (frost$core$Bit) {_539};
_542 = _540.value;
if (_542) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:180
_545 = ((frost$core$Object*) &$s91);
frost$core$Frost$ref$frost$core$Object$Q(_545);
return &$s92;
block117:;
_548 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:181:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_551 = _1.value;
_552 = _548.value;
_553 = _551 == _552;
_554 = (frost$core$Bit) {_553};
_556 = _554.value;
if (_556) goto block119; else goto block1;
block119:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:181
_559 = ((frost$core$Object*) &$s93);
frost$core$Frost$ref$frost$core$Object$Q(_559);
return &$s94;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:183
_563 = (frost$core$Int) {183u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s95, _563);
abort(); // unreachable

}
void org$frostlang$frostc$expression$Binary$Operator$cleanup(org$frostlang$frostc$expression$Binary$Operator param0) {

return;

}
org$frostlang$frostc$expression$Binary$Operator org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int(frost$core$Int param0) {

org$frostlang$frostc$expression$Binary$Operator local0;
frost$core$Int* _1;
org$frostlang$frostc$expression$Binary$Operator _3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_1 = &(&local0)->$rawValue;
*_1 = param0;
_3 = *(&local0);
return _3;

}
frost$core$Bit org$frostlang$frostc$expression$Binary$Operator$$EQ$org$frostlang$frostc$expression$Binary$Operator$R$frost$core$Bit(org$frostlang$frostc$expression$Binary$Operator param0, org$frostlang$frostc$expression$Binary$Operator param1) {

frost$core$Int _1;
frost$core$Int _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
frost$core$Bit _10;
frost$core$Bit _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_1 = param0.$rawValue;
_2 = param1.$rawValue;
_3 = _1.value;
_4 = _2.value;
_5 = _3 != _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_10 = (frost$core$Bit) {false};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_13 = (frost$core$Bit) {true};
return _13;

}
frost$core$Int org$frostlang$frostc$expression$Binary$Operator$get_hash$R$frost$core$Int(org$frostlang$frostc$expression$Binary$Operator param0) {

frost$core$Int _1;
frost$core$Int _2;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _10;
frost$core$Int _13;
frost$core$Int _15;
int64_t _18;
int64_t _19;
bool _20;
frost$core$Bit _21;
bool _23;
frost$core$Int _26;
frost$core$Int _28;
int64_t _31;
int64_t _32;
bool _33;
frost$core$Bit _34;
bool _36;
frost$core$Int _39;
frost$core$Int _41;
int64_t _44;
int64_t _45;
bool _46;
frost$core$Bit _47;
bool _49;
frost$core$Int _52;
frost$core$Int _54;
int64_t _57;
int64_t _58;
bool _59;
frost$core$Bit _60;
bool _62;
frost$core$Int _65;
frost$core$Int _67;
int64_t _70;
int64_t _71;
bool _72;
frost$core$Bit _73;
bool _75;
frost$core$Int _78;
frost$core$Int _80;
int64_t _83;
int64_t _84;
bool _85;
frost$core$Bit _86;
bool _88;
frost$core$Int _91;
frost$core$Int _93;
int64_t _96;
int64_t _97;
bool _98;
frost$core$Bit _99;
bool _101;
frost$core$Int _104;
frost$core$Int _106;
int64_t _109;
int64_t _110;
bool _111;
frost$core$Bit _112;
bool _114;
frost$core$Int _117;
frost$core$Int _119;
int64_t _122;
int64_t _123;
bool _124;
frost$core$Bit _125;
bool _127;
frost$core$Int _130;
frost$core$Int _132;
int64_t _135;
int64_t _136;
bool _137;
frost$core$Bit _138;
bool _140;
frost$core$Int _143;
frost$core$Int _145;
int64_t _148;
int64_t _149;
bool _150;
frost$core$Bit _151;
bool _153;
frost$core$Int _156;
frost$core$Int _158;
int64_t _161;
int64_t _162;
bool _163;
frost$core$Bit _164;
bool _166;
frost$core$Int _169;
frost$core$Int _171;
int64_t _174;
int64_t _175;
bool _176;
frost$core$Bit _177;
bool _179;
frost$core$Int _182;
frost$core$Int _184;
int64_t _187;
int64_t _188;
bool _189;
frost$core$Bit _190;
bool _192;
frost$core$Int _195;
frost$core$Int _197;
int64_t _200;
int64_t _201;
bool _202;
frost$core$Bit _203;
bool _205;
frost$core$Int _208;
frost$core$Int _210;
int64_t _213;
int64_t _214;
bool _215;
frost$core$Bit _216;
bool _218;
frost$core$Int _221;
frost$core$Int _223;
int64_t _226;
int64_t _227;
bool _228;
frost$core$Bit _229;
bool _231;
frost$core$Int _234;
frost$core$Int _236;
int64_t _239;
int64_t _240;
bool _241;
frost$core$Bit _242;
bool _244;
frost$core$Int _247;
frost$core$Int _249;
int64_t _252;
int64_t _253;
bool _254;
frost$core$Bit _255;
bool _257;
frost$core$Int _260;
frost$core$Int _262;
int64_t _265;
int64_t _266;
bool _267;
frost$core$Bit _268;
bool _270;
frost$core$Int _273;
frost$core$Int _275;
int64_t _278;
int64_t _279;
bool _280;
frost$core$Bit _281;
bool _283;
frost$core$Int _286;
frost$core$Int _288;
int64_t _291;
int64_t _292;
bool _293;
frost$core$Bit _294;
bool _296;
frost$core$Int _299;
frost$core$Int _301;
int64_t _304;
int64_t _305;
bool _306;
frost$core$Bit _307;
bool _309;
frost$core$Int _312;
frost$core$Int _314;
int64_t _317;
int64_t _318;
bool _319;
frost$core$Bit _320;
bool _322;
frost$core$Int _325;
frost$core$Int _327;
int64_t _330;
int64_t _331;
bool _332;
frost$core$Bit _333;
bool _335;
frost$core$Int _338;
frost$core$Int _340;
int64_t _343;
int64_t _344;
bool _345;
frost$core$Bit _346;
bool _348;
frost$core$Int _351;
frost$core$Int _353;
int64_t _356;
int64_t _357;
bool _358;
frost$core$Bit _359;
bool _361;
frost$core$Int _364;
frost$core$Int _366;
int64_t _369;
int64_t _370;
bool _371;
frost$core$Bit _372;
bool _374;
frost$core$Int _377;
frost$core$Int _379;
int64_t _382;
int64_t _383;
bool _384;
frost$core$Bit _385;
bool _387;
frost$core$Int _390;
frost$core$Int _392;
int64_t _395;
int64_t _396;
bool _397;
frost$core$Bit _398;
bool _400;
frost$core$Int _403;
frost$core$Int _405;
int64_t _408;
int64_t _409;
bool _410;
frost$core$Bit _411;
bool _413;
frost$core$Int _416;
frost$core$Int _418;
int64_t _421;
int64_t _422;
bool _423;
frost$core$Bit _424;
bool _426;
frost$core$Int _429;
frost$core$Int _431;
int64_t _434;
int64_t _435;
bool _436;
frost$core$Bit _437;
bool _439;
frost$core$Int _442;
frost$core$Int _444;
int64_t _447;
int64_t _448;
bool _449;
frost$core$Bit _450;
bool _452;
frost$core$Int _455;
frost$core$Int _457;
int64_t _460;
int64_t _461;
bool _462;
frost$core$Bit _463;
bool _465;
frost$core$Int _468;
frost$core$Int _470;
int64_t _473;
int64_t _474;
bool _475;
frost$core$Bit _476;
bool _478;
frost$core$Int _481;
frost$core$Int _483;
int64_t _486;
int64_t _487;
bool _488;
frost$core$Bit _489;
bool _491;
frost$core$Int _494;
frost$core$Int _496;
int64_t _499;
int64_t _500;
bool _501;
frost$core$Bit _502;
bool _504;
frost$core$Int _507;
frost$core$Int _509;
int64_t _512;
int64_t _513;
bool _514;
frost$core$Bit _515;
bool _517;
frost$core$Int _520;
frost$core$Int _523;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_1 = param0.$rawValue;
_2 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_13 = (frost$core$Int) {12139274656235416653u};
return _13;
block3:;
_15 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_18 = _1.value;
_19 = _15.value;
_20 = _18 == _19;
_21 = (frost$core$Bit) {_20};
_23 = _21.value;
if (_23) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_26 = (frost$core$Int) {5831805238761281690u};
return _26;
block6:;
_28 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_31 = _1.value;
_32 = _28.value;
_33 = _31 == _32;
_34 = (frost$core$Bit) {_33};
_36 = _34.value;
if (_36) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_39 = (frost$core$Int) {17971079894996698343u};
return _39;
block9:;
_41 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_44 = _1.value;
_45 = _41.value;
_46 = _44 == _45;
_47 = (frost$core$Bit) {_46};
_49 = _47.value;
if (_49) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_52 = (frost$core$Int) {11663610477522563380u};
return _52;
block12:;
_54 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_57 = _1.value;
_58 = _54.value;
_59 = _57 == _58;
_60 = (frost$core$Bit) {_59};
_62 = _60.value;
if (_62) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_65 = (frost$core$Int) {5356141060048428417u};
return _65;
block15:;
_67 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_70 = _1.value;
_71 = _67.value;
_72 = _70 == _71;
_73 = (frost$core$Bit) {_72};
_75 = _73.value;
if (_75) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_78 = (frost$core$Int) {17495415716283845070u};
return _78;
block18:;
_80 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_83 = _1.value;
_84 = _80.value;
_85 = _83 == _84;
_86 = (frost$core$Bit) {_85};
_88 = _86.value;
if (_88) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_91 = (frost$core$Int) {11187946298809710107u};
return _91;
block21:;
_93 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_96 = _1.value;
_97 = _93.value;
_98 = _96 == _97;
_99 = (frost$core$Bit) {_98};
_101 = _99.value;
if (_101) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_104 = (frost$core$Int) {4880476881335575144u};
return _104;
block24:;
_106 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_109 = _1.value;
_110 = _106.value;
_111 = _109 == _110;
_112 = (frost$core$Bit) {_111};
_114 = _112.value;
if (_114) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_117 = (frost$core$Int) {17019751537570991797u};
return _117;
block27:;
_119 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_122 = _1.value;
_123 = _119.value;
_124 = _122 == _123;
_125 = (frost$core$Bit) {_124};
_127 = _125.value;
if (_127) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_130 = (frost$core$Int) {10712282120096856834u};
return _130;
block30:;
_132 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_135 = _1.value;
_136 = _132.value;
_137 = _135 == _136;
_138 = (frost$core$Bit) {_137};
_140 = _138.value;
if (_140) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_143 = (frost$core$Int) {4404812702622721871u};
return _143;
block33:;
_145 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_148 = _1.value;
_149 = _145.value;
_150 = _148 == _149;
_151 = (frost$core$Bit) {_150};
_153 = _151.value;
if (_153) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_156 = (frost$core$Int) {16544087358858138524u};
return _156;
block36:;
_158 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_161 = _1.value;
_162 = _158.value;
_163 = _161 == _162;
_164 = (frost$core$Bit) {_163};
_166 = _164.value;
if (_166) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_169 = (frost$core$Int) {10236617941384003561u};
return _169;
block39:;
_171 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_174 = _1.value;
_175 = _171.value;
_176 = _174 == _175;
_177 = (frost$core$Bit) {_176};
_179 = _177.value;
if (_179) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_182 = (frost$core$Int) {3929148523909868598u};
return _182;
block42:;
_184 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_187 = _1.value;
_188 = _184.value;
_189 = _187 == _188;
_190 = (frost$core$Bit) {_189};
_192 = _190.value;
if (_192) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_195 = (frost$core$Int) {16068423180145285251u};
return _195;
block45:;
_197 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_200 = _1.value;
_201 = _197.value;
_202 = _200 == _201;
_203 = (frost$core$Bit) {_202};
_205 = _203.value;
if (_205) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_208 = (frost$core$Int) {9760953762671150288u};
return _208;
block48:;
_210 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_213 = _1.value;
_214 = _210.value;
_215 = _213 == _214;
_216 = (frost$core$Bit) {_215};
_218 = _216.value;
if (_218) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_221 = (frost$core$Int) {3453484345197015325u};
return _221;
block51:;
_223 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_226 = _1.value;
_227 = _223.value;
_228 = _226 == _227;
_229 = (frost$core$Bit) {_228};
_231 = _229.value;
if (_231) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_234 = (frost$core$Int) {15592759001432431978u};
return _234;
block54:;
_236 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_239 = _1.value;
_240 = _236.value;
_241 = _239 == _240;
_242 = (frost$core$Bit) {_241};
_244 = _242.value;
if (_244) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_247 = (frost$core$Int) {9285289583958297015u};
return _247;
block57:;
_249 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_252 = _1.value;
_253 = _249.value;
_254 = _252 == _253;
_255 = (frost$core$Bit) {_254};
_257 = _255.value;
if (_257) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_260 = (frost$core$Int) {2977820166484162052u};
return _260;
block60:;
_262 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_265 = _1.value;
_266 = _262.value;
_267 = _265 == _266;
_268 = (frost$core$Bit) {_267};
_270 = _268.value;
if (_270) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_273 = (frost$core$Int) {15117094822719578705u};
return _273;
block63:;
_275 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_278 = _1.value;
_279 = _275.value;
_280 = _278 == _279;
_281 = (frost$core$Bit) {_280};
_283 = _281.value;
if (_283) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_286 = (frost$core$Int) {8809625405245443742u};
return _286;
block66:;
_288 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_291 = _1.value;
_292 = _288.value;
_293 = _291 == _292;
_294 = (frost$core$Bit) {_293};
_296 = _294.value;
if (_296) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_299 = (frost$core$Int) {2502155987771308779u};
return _299;
block69:;
_301 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_304 = _1.value;
_305 = _301.value;
_306 = _304 == _305;
_307 = (frost$core$Bit) {_306};
_309 = _307.value;
if (_309) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_312 = (frost$core$Int) {14641430644006725432u};
return _312;
block72:;
_314 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_317 = _1.value;
_318 = _314.value;
_319 = _317 == _318;
_320 = (frost$core$Bit) {_319};
_322 = _320.value;
if (_322) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_325 = (frost$core$Int) {8333961226532590469u};
return _325;
block75:;
_327 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_330 = _1.value;
_331 = _327.value;
_332 = _330 == _331;
_333 = (frost$core$Bit) {_332};
_335 = _333.value;
if (_335) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_338 = (frost$core$Int) {2026491809058455506u};
return _338;
block78:;
_340 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_343 = _1.value;
_344 = _340.value;
_345 = _343 == _344;
_346 = (frost$core$Bit) {_345};
_348 = _346.value;
if (_348) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_351 = (frost$core$Int) {14165766465293872159u};
return _351;
block81:;
_353 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_356 = _1.value;
_357 = _353.value;
_358 = _356 == _357;
_359 = (frost$core$Bit) {_358};
_361 = _359.value;
if (_361) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_364 = (frost$core$Int) {7858297047819737196u};
return _364;
block84:;
_366 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_369 = _1.value;
_370 = _366.value;
_371 = _369 == _370;
_372 = (frost$core$Bit) {_371};
_374 = _372.value;
if (_374) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_377 = (frost$core$Int) {1550827630345602233u};
return _377;
block87:;
_379 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_382 = _1.value;
_383 = _379.value;
_384 = _382 == _383;
_385 = (frost$core$Bit) {_384};
_387 = _385.value;
if (_387) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_390 = (frost$core$Int) {13690102286581018886u};
return _390;
block90:;
_392 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_395 = _1.value;
_396 = _392.value;
_397 = _395 == _396;
_398 = (frost$core$Bit) {_397};
_400 = _398.value;
if (_400) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_403 = (frost$core$Int) {7382632869106883923u};
return _403;
block93:;
_405 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_408 = _1.value;
_409 = _405.value;
_410 = _408 == _409;
_411 = (frost$core$Bit) {_410};
_413 = _411.value;
if (_413) goto block95; else goto block96;
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_416 = (frost$core$Int) {1075163451632748960u};
return _416;
block96:;
_418 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_421 = _1.value;
_422 = _418.value;
_423 = _421 == _422;
_424 = (frost$core$Bit) {_423};
_426 = _424.value;
if (_426) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_429 = (frost$core$Int) {13214438107868165613u};
return _429;
block99:;
_431 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_434 = _1.value;
_435 = _431.value;
_436 = _434 == _435;
_437 = (frost$core$Bit) {_436};
_439 = _437.value;
if (_439) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_442 = (frost$core$Int) {6906968690394030650u};
return _442;
block102:;
_444 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_447 = _1.value;
_448 = _444.value;
_449 = _447 == _448;
_450 = (frost$core$Bit) {_449};
_452 = _450.value;
if (_452) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_455 = (frost$core$Int) {599499272919895687u};
return _455;
block105:;
_457 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_460 = _1.value;
_461 = _457.value;
_462 = _460 == _461;
_463 = (frost$core$Bit) {_462};
_465 = _463.value;
if (_465) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_468 = (frost$core$Int) {12738773929155312340u};
return _468;
block108:;
_470 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_473 = _1.value;
_474 = _470.value;
_475 = _473 == _474;
_476 = (frost$core$Bit) {_475};
_478 = _476.value;
if (_478) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_481 = (frost$core$Int) {6431304511681177377u};
return _481;
block111:;
_483 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_486 = _1.value;
_487 = _483.value;
_488 = _486 == _487;
_489 = (frost$core$Bit) {_488};
_491 = _489.value;
if (_491) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_494 = (frost$core$Int) {123835094207042414u};
return _494;
block114:;
_496 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_499 = _1.value;
_500 = _496.value;
_501 = _499 == _500;
_502 = (frost$core$Bit) {_501};
_504 = _502.value;
if (_504) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_507 = (frost$core$Int) {12263109750442459067u};
return _507;
block117:;
_509 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_512 = _1.value;
_513 = _509.value;
_514 = _512 == _513;
_515 = (frost$core$Bit) {_514};
_517 = _515.value;
if (_517) goto block119; else goto block120;
block119:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_520 = (frost$core$Int) {5955640332968324104u};
return _520;
block120:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
_523 = (frost$core$Int) {17u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s96, _523);
abort(); // unreachable
block1:;
goto block122;
block122:;

}

