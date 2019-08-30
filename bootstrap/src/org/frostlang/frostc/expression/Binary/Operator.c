#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/collections/Key.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/parser/Token.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$expression$Binary$Operator$$EQ$org$frostlang$frostc$expression$Binary$Operator$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$expression$Binary$Operator$$EQ$org$frostlang$frostc$expression$Binary$Operator$R$frost$core$Bit(((org$frostlang$frostc$expression$Binary$Operator$wrapper*) p0)->value, ((org$frostlang$frostc$expression$Binary$Operator$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int org$frostlang$frostc$expression$Binary$Operator$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = org$frostlang$frostc$expression$Binary$Operator$get_hash$R$frost$core$Int(((org$frostlang$frostc$expression$Binary$Operator$wrapper*) p0)->value);

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

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$expression$Binary$Operator$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &org$frostlang$frostc$expression$Binary$Operator$_frost$core$Equatable, { org$frostlang$frostc$expression$Binary$Operator$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s1;
org$frostlang$frostc$expression$Binary$Operator$class_type org$frostlang$frostc$expression$Binary$Operator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$expression$Binary$Operator$_frost$collections$Key, { org$frostlang$frostc$expression$Binary$Operator$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$expression$Binary$Operator$get_isAssignment$R$frost$core$Bit$shim, org$frostlang$frostc$expression$Binary$Operator$removeAssignment$R$org$frostlang$frostc$expression$Binary$Operator$shim, org$frostlang$frostc$expression$Binary$Operator$cleanup$shim, org$frostlang$frostc$expression$Binary$Operator$$EQ$org$frostlang$frostc$expression$Binary$Operator$R$frost$core$Bit$shim, org$frostlang$frostc$expression$Binary$Operator$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$expression$Binary$Operator$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$expression$Binary$Operator$$EQ$org$frostlang$frostc$expression$Binary$Operator$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$frostc$expression$Binary$Operator$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &org$frostlang$frostc$expression$Binary$Operator$wrapper_frost$core$Equatable, { org$frostlang$frostc$expression$Binary$Operator$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s2;
org$frostlang$frostc$expression$Binary$Operator$wrapperclass_type org$frostlang$frostc$expression$Binary$Operator$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$expression$Binary$Operator$wrapper_frost$collections$Key, { org$frostlang$frostc$expression$Binary$Operator$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$String* (*$fn399)(frost$core$Object*);
typedef frost$core$String* (*$fn643)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79\x2e\x4f\x70\x65\x72\x61\x74\x6f\x72", 47, -6307469417474134963, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x42\x69\x6e\x61\x72\x79\x2e\x4f\x70\x65\x72\x61\x74\x6f\x72", 47, -6307469417474134963, NULL };
static frost$core$String $s402 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x62\x69\x6e\x61\x72\x79\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x3a\x20", 23, -746128379803080476, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s646 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x63\x6f\x6d\x70\x6f\x75\x6e\x64\x20\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x3a\x20", 36, -3862352311403676633, NULL };
static frost$core$String $s648 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s649 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s657 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, -5808616246781833014, NULL };
static frost$core$String $s658 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, -5808616246781833014, NULL };
static frost$core$String $s665 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s666 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s673 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s674 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s681 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s682 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s689 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x2f", 2, 564807061655596579, NULL };
static frost$core$String $s690 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x2f", 2, 564807061655596579, NULL };
static frost$core$String $s697 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25", 1, -5808631639944627968, NULL };
static frost$core$String $s698 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25", 1, -5808631639944627968, NULL };
static frost$core$String $s705 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d", 1, -5808605251665550904, NULL };
static frost$core$String $s706 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d", 1, -5808605251665550904, NULL };
static frost$core$String $s713 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x3d", 2, 559157770910983811, NULL };
static frost$core$String $s714 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x3d", 2, 559157770910983811, NULL };
static frost$core$String $s721 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s722 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s729 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s730 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s737 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s738 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 581112819098748884, NULL };
static frost$core$String $s745 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 579146892307886066, NULL };
static frost$core$String $s746 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 579146892307886066, NULL };
static frost$core$String $s753 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s754 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, -5808533783409717189, NULL };
static frost$core$String $s761 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c\x7c", 2, 640439168010397861, NULL };
static frost$core$String $s762 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c\x7c", 2, 640439168010397861, NULL };
static frost$core$String $s769 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, -5808628341409743335, NULL };
static frost$core$String $s770 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, -5808628341409743335, NULL };
static frost$core$String $s777 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x26", 2, 558202295306257677, NULL };
static frost$core$String $s778 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x26", 2, 558202295306257677, NULL };
static frost$core$String $s785 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7e", 1, -5808531584386460767, NULL };
static frost$core$String $s786 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7e", 1, -5808531584386460767, NULL };
static frost$core$String $s793 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7e\x7e", 2, 642407293824517101, NULL };
static frost$core$String $s794 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7e\x7e", 2, 642407293824517101, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3c", 2, 579147991819514277, NULL };
static frost$core$String $s802 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3c", 2, 579147991819514277, NULL };
static frost$core$String $s809 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e", 2, 581116117633633517, NULL };
static frost$core$String $s810 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e", 2, 581116117633633517, NULL };
static frost$core$String $s817 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x5d", 2, 675868731199239589, NULL };
static frost$core$String $s818 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b\x5d", 2, 675868731199239589, NULL };
static frost$core$String $s825 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3d", 2, 578298069331096399, NULL };
static frost$core$String $s826 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3d", 2, 578298069331096399, NULL };
static frost$core$String $s833 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x3d\x3d", 3, -4903804165512063782, NULL };
static frost$core$String $s834 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x3d\x3d", 3, -4903804165512063782, NULL };
static frost$core$String $s841 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e", 2, 562958782608952338, NULL };
static frost$core$String $s842 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e", 2, 562958782608952338, NULL };
static frost$core$String $s849 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x3d", 2, 584912731285089200, NULL };
static frost$core$String $s850 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x3d", 2, 584912731285089200, NULL };
static frost$core$String $s857 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b\x3d", 2, 568732318167552949, NULL };
static frost$core$String $s858 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b\x3d", 2, 568732318167552949, NULL };
static frost$core$String $s865 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3d", 2, 562957683097324127, NULL };
static frost$core$String $s866 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3d", 2, 562957683097324127, NULL };
static frost$core$String $s873 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x3d", 2, 569572345051316928, NULL };
static frost$core$String $s874 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x3d", 2, 569572345051316928, NULL };
static frost$core$String $s881 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x3d", 2, 564791668492801625, NULL };
static frost$core$String $s882 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x3d", 2, 564791668492801625, NULL };
static frost$core$String $s889 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x2f\x3d", 3, -1237322113517003526, NULL };
static frost$core$String $s890 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x2f\x3d", 3, -1237322113517003526, NULL };
static frost$core$String $s897 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25\x3d", 2, 555357858724643495, NULL };
static frost$core$String $s898 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25\x3d", 2, 555357858724643495, NULL };
static frost$core$String $s905 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c\x3d", 2, 640367699754564146, NULL };
static frost$core$String $s906 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c\x3d", 2, 640367699754564146, NULL };
static frost$core$String $s913 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c\x7c\x3d", 3, -7213982542082246072, NULL };
static frost$core$String $s914 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c\x7c\x3d", 3, -7213982542082246072, NULL };
static frost$core$String $s921 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x3d", 2, 558172608492295980, NULL };
static frost$core$String $s922 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x3d", 2, 558172608492295980, NULL };
static frost$core$String $s929 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x26\x3d", 3, -5527039242054840176, NULL };
static frost$core$String $s930 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x26\x3d", 3, -5527039242054840176, NULL };
static frost$core$String $s937 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7e\x3d", 2, 642333626545426964, NULL };
static frost$core$String $s938 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7e\x3d", 2, 642333626545426964, NULL };
static frost$core$String $s945 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7e\x7e\x3d", 3, -5917840851690472848, NULL };
static frost$core$String $s946 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7e\x7e\x3d", 3, -5917840851690472848, NULL };
static frost$core$String $s953 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3c\x3d", 3, 8118452015276295496, NULL };
static frost$core$String $s954 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3c\x3d", 3, 8118452015276295496, NULL };
static frost$core$String $s961 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e\x3d", 3, -9032150368041482896, NULL };
static frost$core$String $s962 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e\x3d", 3, -9032150368041482896, NULL };
static frost$core$String $s964 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };
static frost$core$String $s1251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 12, -2202117195039755372, NULL };

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:60
org$frostlang$frostc$parser$Token$Kind $tmp3 = param0.kind;
frost$core$Int $tmp4 = $tmp3.$rawValue;
frost$core$Int $tmp5 = (frost$core$Int) {56u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:61:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp6 = $tmp4.value;
int64_t $tmp7 = $tmp5.value;
bool $tmp8 = $tmp6 == $tmp7;
frost$core$Bit $tmp9 = (frost$core$Bit) {$tmp8};
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:61
frost$core$Int $tmp11 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:61:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp12 = &(&local1)->$rawValue;
*$tmp12 = $tmp11;
org$frostlang$frostc$expression$Binary$Operator $tmp13 = *(&local1);
*(&local0) = $tmp13;
org$frostlang$frostc$expression$Binary$Operator $tmp14 = *(&local0);
return $tmp14;
block3:;
frost$core$Int $tmp15 = (frost$core$Int) {57u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:62:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp16 = $tmp4.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 == $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:62
frost$core$Int $tmp21 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:62:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp22 = &(&local3)->$rawValue;
*$tmp22 = $tmp21;
org$frostlang$frostc$expression$Binary$Operator $tmp23 = *(&local3);
*(&local2) = $tmp23;
org$frostlang$frostc$expression$Binary$Operator $tmp24 = *(&local2);
return $tmp24;
block7:;
frost$core$Int $tmp25 = (frost$core$Int) {58u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:63:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp26 = $tmp4.value;
int64_t $tmp27 = $tmp25.value;
bool $tmp28 = $tmp26 == $tmp27;
frost$core$Bit $tmp29 = (frost$core$Bit) {$tmp28};
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:63
frost$core$Int $tmp31 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:63:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp32 = &(&local5)->$rawValue;
*$tmp32 = $tmp31;
org$frostlang$frostc$expression$Binary$Operator $tmp33 = *(&local5);
*(&local4) = $tmp33;
org$frostlang$frostc$expression$Binary$Operator $tmp34 = *(&local4);
return $tmp34;
block11:;
frost$core$Int $tmp35 = (frost$core$Int) {59u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:64:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp36 = $tmp4.value;
int64_t $tmp37 = $tmp35.value;
bool $tmp38 = $tmp36 == $tmp37;
frost$core$Bit $tmp39 = (frost$core$Bit) {$tmp38};
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:64
frost$core$Int $tmp41 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:64:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp42 = &(&local7)->$rawValue;
*$tmp42 = $tmp41;
org$frostlang$frostc$expression$Binary$Operator $tmp43 = *(&local7);
*(&local6) = $tmp43;
org$frostlang$frostc$expression$Binary$Operator $tmp44 = *(&local6);
return $tmp44;
block15:;
frost$core$Int $tmp45 = (frost$core$Int) {60u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:65:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp46 = $tmp4.value;
int64_t $tmp47 = $tmp45.value;
bool $tmp48 = $tmp46 == $tmp47;
frost$core$Bit $tmp49 = (frost$core$Bit) {$tmp48};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:65
frost$core$Int $tmp51 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:65:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp52 = &(&local9)->$rawValue;
*$tmp52 = $tmp51;
org$frostlang$frostc$expression$Binary$Operator $tmp53 = *(&local9);
*(&local8) = $tmp53;
org$frostlang$frostc$expression$Binary$Operator $tmp54 = *(&local8);
return $tmp54;
block19:;
frost$core$Int $tmp55 = (frost$core$Int) {61u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:66:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp56 = $tmp4.value;
int64_t $tmp57 = $tmp55.value;
bool $tmp58 = $tmp56 == $tmp57;
frost$core$Bit $tmp59 = (frost$core$Bit) {$tmp58};
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:66
frost$core$Int $tmp61 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:66:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp62 = &(&local11)->$rawValue;
*$tmp62 = $tmp61;
org$frostlang$frostc$expression$Binary$Operator $tmp63 = *(&local11);
*(&local10) = $tmp63;
org$frostlang$frostc$expression$Binary$Operator $tmp64 = *(&local10);
return $tmp64;
block23:;
frost$core$Int $tmp65 = (frost$core$Int) {63u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:67:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp66 = $tmp4.value;
int64_t $tmp67 = $tmp65.value;
bool $tmp68 = $tmp66 == $tmp67;
frost$core$Bit $tmp69 = (frost$core$Bit) {$tmp68};
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:67
frost$core$Int $tmp71 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:67:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp72 = &(&local13)->$rawValue;
*$tmp72 = $tmp71;
org$frostlang$frostc$expression$Binary$Operator $tmp73 = *(&local13);
*(&local12) = $tmp73;
org$frostlang$frostc$expression$Binary$Operator $tmp74 = *(&local12);
return $tmp74;
block27:;
frost$core$Int $tmp75 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:68:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp76 = $tmp4.value;
int64_t $tmp77 = $tmp75.value;
bool $tmp78 = $tmp76 == $tmp77;
frost$core$Bit $tmp79 = (frost$core$Bit) {$tmp78};
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:68
frost$core$Int $tmp81 = (frost$core$Int) {7u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:68:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp82 = &(&local15)->$rawValue;
*$tmp82 = $tmp81;
org$frostlang$frostc$expression$Binary$Operator $tmp83 = *(&local15);
*(&local14) = $tmp83;
org$frostlang$frostc$expression$Binary$Operator $tmp84 = *(&local14);
return $tmp84;
block31:;
frost$core$Int $tmp85 = (frost$core$Int) {68u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:69:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp86 = $tmp4.value;
int64_t $tmp87 = $tmp85.value;
bool $tmp88 = $tmp86 == $tmp87;
frost$core$Bit $tmp89 = (frost$core$Bit) {$tmp88};
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:69
frost$core$Int $tmp91 = (frost$core$Int) {8u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:69:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp92 = &(&local17)->$rawValue;
*$tmp92 = $tmp91;
org$frostlang$frostc$expression$Binary$Operator $tmp93 = *(&local17);
*(&local16) = $tmp93;
org$frostlang$frostc$expression$Binary$Operator $tmp94 = *(&local16);
return $tmp94;
block35:;
frost$core$Int $tmp95 = (frost$core$Int) {67u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:70:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp96 = $tmp4.value;
int64_t $tmp97 = $tmp95.value;
bool $tmp98 = $tmp96 == $tmp97;
frost$core$Bit $tmp99 = (frost$core$Bit) {$tmp98};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:70
frost$core$Int $tmp101 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:70:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp102 = &(&local19)->$rawValue;
*$tmp102 = $tmp101;
org$frostlang$frostc$expression$Binary$Operator $tmp103 = *(&local19);
*(&local18) = $tmp103;
org$frostlang$frostc$expression$Binary$Operator $tmp104 = *(&local18);
return $tmp104;
block39:;
frost$core$Int $tmp105 = (frost$core$Int) {70u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:71:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp106 = $tmp4.value;
int64_t $tmp107 = $tmp105.value;
bool $tmp108 = $tmp106 == $tmp107;
frost$core$Bit $tmp109 = (frost$core$Bit) {$tmp108};
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:71
frost$core$Int $tmp111 = (frost$core$Int) {10u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:71:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp112 = &(&local21)->$rawValue;
*$tmp112 = $tmp111;
org$frostlang$frostc$expression$Binary$Operator $tmp113 = *(&local21);
*(&local20) = $tmp113;
org$frostlang$frostc$expression$Binary$Operator $tmp114 = *(&local20);
return $tmp114;
block43:;
frost$core$Int $tmp115 = (frost$core$Int) {69u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:72:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp116 = $tmp4.value;
int64_t $tmp117 = $tmp115.value;
bool $tmp118 = $tmp116 == $tmp117;
frost$core$Bit $tmp119 = (frost$core$Bit) {$tmp118};
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:72
frost$core$Int $tmp121 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:72:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp122 = &(&local23)->$rawValue;
*$tmp122 = $tmp121;
org$frostlang$frostc$expression$Binary$Operator $tmp123 = *(&local23);
*(&local22) = $tmp123;
org$frostlang$frostc$expression$Binary$Operator $tmp124 = *(&local22);
return $tmp124;
block47:;
frost$core$Int $tmp125 = (frost$core$Int) {73u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:73:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp126 = $tmp4.value;
int64_t $tmp127 = $tmp125.value;
bool $tmp128 = $tmp126 == $tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:73
frost$core$Int $tmp131 = (frost$core$Int) {12u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:73:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp132 = &(&local25)->$rawValue;
*$tmp132 = $tmp131;
org$frostlang$frostc$expression$Binary$Operator $tmp133 = *(&local25);
*(&local24) = $tmp133;
org$frostlang$frostc$expression$Binary$Operator $tmp134 = *(&local24);
return $tmp134;
block51:;
frost$core$Int $tmp135 = (frost$core$Int) {74u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:74:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp136 = $tmp4.value;
int64_t $tmp137 = $tmp135.value;
bool $tmp138 = $tmp136 == $tmp137;
frost$core$Bit $tmp139 = (frost$core$Bit) {$tmp138};
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:74
frost$core$Int $tmp141 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:74:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp142 = &(&local27)->$rawValue;
*$tmp142 = $tmp141;
org$frostlang$frostc$expression$Binary$Operator $tmp143 = *(&local27);
*(&local26) = $tmp143;
org$frostlang$frostc$expression$Binary$Operator $tmp144 = *(&local26);
return $tmp144;
block55:;
frost$core$Int $tmp145 = (frost$core$Int) {71u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:75:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp146 = $tmp4.value;
int64_t $tmp147 = $tmp145.value;
bool $tmp148 = $tmp146 == $tmp147;
frost$core$Bit $tmp149 = (frost$core$Bit) {$tmp148};
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:75
frost$core$Int $tmp151 = (frost$core$Int) {14u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:75:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp152 = &(&local29)->$rawValue;
*$tmp152 = $tmp151;
org$frostlang$frostc$expression$Binary$Operator $tmp153 = *(&local29);
*(&local28) = $tmp153;
org$frostlang$frostc$expression$Binary$Operator $tmp154 = *(&local28);
return $tmp154;
block59:;
frost$core$Int $tmp155 = (frost$core$Int) {72u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:76:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp156 = $tmp4.value;
int64_t $tmp157 = $tmp155.value;
bool $tmp158 = $tmp156 == $tmp157;
frost$core$Bit $tmp159 = (frost$core$Bit) {$tmp158};
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:76
frost$core$Int $tmp161 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:76:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp162 = &(&local31)->$rawValue;
*$tmp162 = $tmp161;
org$frostlang$frostc$expression$Binary$Operator $tmp163 = *(&local31);
*(&local30) = $tmp163;
org$frostlang$frostc$expression$Binary$Operator $tmp164 = *(&local30);
return $tmp164;
block63:;
frost$core$Int $tmp165 = (frost$core$Int) {75u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:77:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp166 = $tmp4.value;
int64_t $tmp167 = $tmp165.value;
bool $tmp168 = $tmp166 == $tmp167;
frost$core$Bit $tmp169 = (frost$core$Bit) {$tmp168};
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block66; else goto block67;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:77
frost$core$Int $tmp171 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:77:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp172 = &(&local33)->$rawValue;
*$tmp172 = $tmp171;
org$frostlang$frostc$expression$Binary$Operator $tmp173 = *(&local33);
*(&local32) = $tmp173;
org$frostlang$frostc$expression$Binary$Operator $tmp174 = *(&local32);
return $tmp174;
block67:;
frost$core$Int $tmp175 = (frost$core$Int) {76u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:78:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp176 = $tmp4.value;
int64_t $tmp177 = $tmp175.value;
bool $tmp178 = $tmp176 == $tmp177;
frost$core$Bit $tmp179 = (frost$core$Bit) {$tmp178};
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block70; else goto block71;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:78
frost$core$Int $tmp181 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:78:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp182 = &(&local35)->$rawValue;
*$tmp182 = $tmp181;
org$frostlang$frostc$expression$Binary$Operator $tmp183 = *(&local35);
*(&local34) = $tmp183;
org$frostlang$frostc$expression$Binary$Operator $tmp184 = *(&local34);
return $tmp184;
block71:;
frost$core$Int $tmp185 = (frost$core$Int) {77u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:79:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp186 = $tmp4.value;
int64_t $tmp187 = $tmp185.value;
bool $tmp188 = $tmp186 == $tmp187;
frost$core$Bit $tmp189 = (frost$core$Bit) {$tmp188};
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:79
frost$core$Int $tmp191 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:79:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp192 = &(&local37)->$rawValue;
*$tmp192 = $tmp191;
org$frostlang$frostc$expression$Binary$Operator $tmp193 = *(&local37);
*(&local36) = $tmp193;
org$frostlang$frostc$expression$Binary$Operator $tmp194 = *(&local36);
return $tmp194;
block75:;
frost$core$Int $tmp195 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:80:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp196 = $tmp4.value;
int64_t $tmp197 = $tmp195.value;
bool $tmp198 = $tmp196 == $tmp197;
frost$core$Bit $tmp199 = (frost$core$Bit) {$tmp198};
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block78; else goto block79;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:80
frost$core$Int $tmp201 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:80:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp202 = &(&local39)->$rawValue;
*$tmp202 = $tmp201;
org$frostlang$frostc$expression$Binary$Operator $tmp203 = *(&local39);
*(&local38) = $tmp203;
org$frostlang$frostc$expression$Binary$Operator $tmp204 = *(&local38);
return $tmp204;
block79:;
frost$core$Int $tmp205 = (frost$core$Int) {106u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:81:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp206 = $tmp4.value;
int64_t $tmp207 = $tmp205.value;
bool $tmp208 = $tmp206 == $tmp207;
frost$core$Bit $tmp209 = (frost$core$Bit) {$tmp208};
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block82; else goto block83;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:81
frost$core$Int $tmp211 = (frost$core$Int) {20u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:81:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp212 = &(&local41)->$rawValue;
*$tmp212 = $tmp211;
org$frostlang$frostc$expression$Binary$Operator $tmp213 = *(&local41);
*(&local40) = $tmp213;
org$frostlang$frostc$expression$Binary$Operator $tmp214 = *(&local40);
return $tmp214;
block83:;
frost$core$Int $tmp215 = (frost$core$Int) {78u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:82:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp216 = $tmp4.value;
int64_t $tmp217 = $tmp215.value;
bool $tmp218 = $tmp216 == $tmp217;
frost$core$Bit $tmp219 = (frost$core$Bit) {$tmp218};
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:82
frost$core$Int $tmp221 = (frost$core$Int) {24u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:82:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp222 = &(&local43)->$rawValue;
*$tmp222 = $tmp221;
org$frostlang$frostc$expression$Binary$Operator $tmp223 = *(&local43);
*(&local42) = $tmp223;
org$frostlang$frostc$expression$Binary$Operator $tmp224 = *(&local42);
return $tmp224;
block87:;
frost$core$Int $tmp225 = (frost$core$Int) {65u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:83:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp226 = $tmp4.value;
int64_t $tmp227 = $tmp225.value;
bool $tmp228 = $tmp226 == $tmp227;
frost$core$Bit $tmp229 = (frost$core$Bit) {$tmp228};
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block90; else goto block91;
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:83
frost$core$Int $tmp231 = (frost$core$Int) {21u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:83:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp232 = &(&local45)->$rawValue;
*$tmp232 = $tmp231;
org$frostlang$frostc$expression$Binary$Operator $tmp233 = *(&local45);
*(&local44) = $tmp233;
org$frostlang$frostc$expression$Binary$Operator $tmp234 = *(&local44);
return $tmp234;
block91:;
frost$core$Int $tmp235 = (frost$core$Int) {66u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:84:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp236 = $tmp4.value;
int64_t $tmp237 = $tmp235.value;
bool $tmp238 = $tmp236 == $tmp237;
frost$core$Bit $tmp239 = (frost$core$Bit) {$tmp238};
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block94; else goto block95;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:84
frost$core$Int $tmp241 = (frost$core$Int) {22u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:84:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp242 = &(&local47)->$rawValue;
*$tmp242 = $tmp241;
org$frostlang$frostc$expression$Binary$Operator $tmp243 = *(&local47);
*(&local46) = $tmp243;
org$frostlang$frostc$expression$Binary$Operator $tmp244 = *(&local46);
return $tmp244;
block95:;
frost$core$Int $tmp245 = (frost$core$Int) {94u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:85:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp246 = $tmp4.value;
int64_t $tmp247 = $tmp245.value;
bool $tmp248 = $tmp246 == $tmp247;
frost$core$Bit $tmp249 = (frost$core$Bit) {$tmp248};
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:85
frost$core$Int $tmp251 = (frost$core$Int) {23u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:85:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp252 = &(&local49)->$rawValue;
*$tmp252 = $tmp251;
org$frostlang$frostc$expression$Binary$Operator $tmp253 = *(&local49);
*(&local48) = $tmp253;
org$frostlang$frostc$expression$Binary$Operator $tmp254 = *(&local48);
return $tmp254;
block99:;
frost$core$Int $tmp255 = (frost$core$Int) {79u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:86:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp256 = $tmp4.value;
int64_t $tmp257 = $tmp255.value;
bool $tmp258 = $tmp256 == $tmp257;
frost$core$Bit $tmp259 = (frost$core$Bit) {$tmp258};
bool $tmp260 = $tmp259.value;
if ($tmp260) goto block102; else goto block103;
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:86
frost$core$Int $tmp261 = (frost$core$Int) {25u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:86:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp262 = &(&local51)->$rawValue;
*$tmp262 = $tmp261;
org$frostlang$frostc$expression$Binary$Operator $tmp263 = *(&local51);
*(&local50) = $tmp263;
org$frostlang$frostc$expression$Binary$Operator $tmp264 = *(&local50);
return $tmp264;
block103:;
frost$core$Int $tmp265 = (frost$core$Int) {80u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:87:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp266 = $tmp4.value;
int64_t $tmp267 = $tmp265.value;
bool $tmp268 = $tmp266 == $tmp267;
frost$core$Bit $tmp269 = (frost$core$Bit) {$tmp268};
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block106; else goto block107;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:87
frost$core$Int $tmp271 = (frost$core$Int) {26u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:87:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp272 = &(&local53)->$rawValue;
*$tmp272 = $tmp271;
org$frostlang$frostc$expression$Binary$Operator $tmp273 = *(&local53);
*(&local52) = $tmp273;
org$frostlang$frostc$expression$Binary$Operator $tmp274 = *(&local52);
return $tmp274;
block107:;
frost$core$Int $tmp275 = (frost$core$Int) {81u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:88:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp276 = $tmp4.value;
int64_t $tmp277 = $tmp275.value;
bool $tmp278 = $tmp276 == $tmp277;
frost$core$Bit $tmp279 = (frost$core$Bit) {$tmp278};
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:88
frost$core$Int $tmp281 = (frost$core$Int) {27u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:88:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp282 = &(&local55)->$rawValue;
*$tmp282 = $tmp281;
org$frostlang$frostc$expression$Binary$Operator $tmp283 = *(&local55);
*(&local54) = $tmp283;
org$frostlang$frostc$expression$Binary$Operator $tmp284 = *(&local54);
return $tmp284;
block111:;
frost$core$Int $tmp285 = (frost$core$Int) {82u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:89:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp286 = $tmp4.value;
int64_t $tmp287 = $tmp285.value;
bool $tmp288 = $tmp286 == $tmp287;
frost$core$Bit $tmp289 = (frost$core$Bit) {$tmp288};
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block114; else goto block115;
block114:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:89
frost$core$Int $tmp291 = (frost$core$Int) {28u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:89:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp292 = &(&local57)->$rawValue;
*$tmp292 = $tmp291;
org$frostlang$frostc$expression$Binary$Operator $tmp293 = *(&local57);
*(&local56) = $tmp293;
org$frostlang$frostc$expression$Binary$Operator $tmp294 = *(&local56);
return $tmp294;
block115:;
frost$core$Int $tmp295 = (frost$core$Int) {84u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:90:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp296 = $tmp4.value;
int64_t $tmp297 = $tmp295.value;
bool $tmp298 = $tmp296 == $tmp297;
frost$core$Bit $tmp299 = (frost$core$Bit) {$tmp298};
bool $tmp300 = $tmp299.value;
if ($tmp300) goto block118; else goto block119;
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:90
frost$core$Int $tmp301 = (frost$core$Int) {29u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:90:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp302 = &(&local59)->$rawValue;
*$tmp302 = $tmp301;
org$frostlang$frostc$expression$Binary$Operator $tmp303 = *(&local59);
*(&local58) = $tmp303;
org$frostlang$frostc$expression$Binary$Operator $tmp304 = *(&local58);
return $tmp304;
block119:;
frost$core$Int $tmp305 = (frost$core$Int) {83u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:91:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp306 = $tmp4.value;
int64_t $tmp307 = $tmp305.value;
bool $tmp308 = $tmp306 == $tmp307;
frost$core$Bit $tmp309 = (frost$core$Bit) {$tmp308};
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block122; else goto block123;
block122:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:91
frost$core$Int $tmp311 = (frost$core$Int) {30u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:91:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp312 = &(&local61)->$rawValue;
*$tmp312 = $tmp311;
org$frostlang$frostc$expression$Binary$Operator $tmp313 = *(&local61);
*(&local60) = $tmp313;
org$frostlang$frostc$expression$Binary$Operator $tmp314 = *(&local60);
return $tmp314;
block123:;
frost$core$Int $tmp315 = (frost$core$Int) {86u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:92:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp316 = $tmp4.value;
int64_t $tmp317 = $tmp315.value;
bool $tmp318 = $tmp316 == $tmp317;
frost$core$Bit $tmp319 = (frost$core$Bit) {$tmp318};
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block126; else goto block127;
block126:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:92
frost$core$Int $tmp321 = (frost$core$Int) {31u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:92:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp322 = &(&local63)->$rawValue;
*$tmp322 = $tmp321;
org$frostlang$frostc$expression$Binary$Operator $tmp323 = *(&local63);
*(&local62) = $tmp323;
org$frostlang$frostc$expression$Binary$Operator $tmp324 = *(&local62);
return $tmp324;
block127:;
frost$core$Int $tmp325 = (frost$core$Int) {87u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:93:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp326 = $tmp4.value;
int64_t $tmp327 = $tmp325.value;
bool $tmp328 = $tmp326 == $tmp327;
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328};
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block130; else goto block131;
block130:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:93
frost$core$Int $tmp331 = (frost$core$Int) {32u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:93:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp332 = &(&local65)->$rawValue;
*$tmp332 = $tmp331;
org$frostlang$frostc$expression$Binary$Operator $tmp333 = *(&local65);
*(&local64) = $tmp333;
org$frostlang$frostc$expression$Binary$Operator $tmp334 = *(&local64);
return $tmp334;
block131:;
frost$core$Int $tmp335 = (frost$core$Int) {88u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:94:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp336 = $tmp4.value;
int64_t $tmp337 = $tmp335.value;
bool $tmp338 = $tmp336 == $tmp337;
frost$core$Bit $tmp339 = (frost$core$Bit) {$tmp338};
bool $tmp340 = $tmp339.value;
if ($tmp340) goto block134; else goto block135;
block134:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:94
frost$core$Int $tmp341 = (frost$core$Int) {33u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:94:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp342 = &(&local67)->$rawValue;
*$tmp342 = $tmp341;
org$frostlang$frostc$expression$Binary$Operator $tmp343 = *(&local67);
*(&local66) = $tmp343;
org$frostlang$frostc$expression$Binary$Operator $tmp344 = *(&local66);
return $tmp344;
block135:;
frost$core$Int $tmp345 = (frost$core$Int) {89u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:95:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp346 = $tmp4.value;
int64_t $tmp347 = $tmp345.value;
bool $tmp348 = $tmp346 == $tmp347;
frost$core$Bit $tmp349 = (frost$core$Bit) {$tmp348};
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block138; else goto block139;
block138:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:95
frost$core$Int $tmp351 = (frost$core$Int) {34u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:95:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp352 = &(&local69)->$rawValue;
*$tmp352 = $tmp351;
org$frostlang$frostc$expression$Binary$Operator $tmp353 = *(&local69);
*(&local68) = $tmp353;
org$frostlang$frostc$expression$Binary$Operator $tmp354 = *(&local68);
return $tmp354;
block139:;
frost$core$Int $tmp355 = (frost$core$Int) {90u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:96:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp356 = $tmp4.value;
int64_t $tmp357 = $tmp355.value;
bool $tmp358 = $tmp356 == $tmp357;
frost$core$Bit $tmp359 = (frost$core$Bit) {$tmp358};
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block142; else goto block143;
block142:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:96
frost$core$Int $tmp361 = (frost$core$Int) {35u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:96:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp362 = &(&local71)->$rawValue;
*$tmp362 = $tmp361;
org$frostlang$frostc$expression$Binary$Operator $tmp363 = *(&local71);
*(&local70) = $tmp363;
org$frostlang$frostc$expression$Binary$Operator $tmp364 = *(&local70);
return $tmp364;
block143:;
frost$core$Int $tmp365 = (frost$core$Int) {91u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:97:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp366 = $tmp4.value;
int64_t $tmp367 = $tmp365.value;
bool $tmp368 = $tmp366 == $tmp367;
frost$core$Bit $tmp369 = (frost$core$Bit) {$tmp368};
bool $tmp370 = $tmp369.value;
if ($tmp370) goto block146; else goto block147;
block146:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:97
frost$core$Int $tmp371 = (frost$core$Int) {36u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:97:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp372 = &(&local73)->$rawValue;
*$tmp372 = $tmp371;
org$frostlang$frostc$expression$Binary$Operator $tmp373 = *(&local73);
*(&local72) = $tmp373;
org$frostlang$frostc$expression$Binary$Operator $tmp374 = *(&local72);
return $tmp374;
block147:;
frost$core$Int $tmp375 = (frost$core$Int) {92u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:98:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp376 = $tmp4.value;
int64_t $tmp377 = $tmp375.value;
bool $tmp378 = $tmp376 == $tmp377;
frost$core$Bit $tmp379 = (frost$core$Bit) {$tmp378};
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block150; else goto block151;
block150:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:98
frost$core$Int $tmp381 = (frost$core$Int) {37u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:98:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp382 = &(&local75)->$rawValue;
*$tmp382 = $tmp381;
org$frostlang$frostc$expression$Binary$Operator $tmp383 = *(&local75);
*(&local74) = $tmp383;
org$frostlang$frostc$expression$Binary$Operator $tmp384 = *(&local74);
return $tmp384;
block151:;
frost$core$Int $tmp385 = (frost$core$Int) {93u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:99:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp386 = $tmp4.value;
int64_t $tmp387 = $tmp385.value;
bool $tmp388 = $tmp386 == $tmp387;
frost$core$Bit $tmp389 = (frost$core$Bit) {$tmp388};
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block154; else goto block155;
block154:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:99
frost$core$Int $tmp391 = (frost$core$Int) {38u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:99:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp392 = &(&local77)->$rawValue;
*$tmp392 = $tmp391;
org$frostlang$frostc$expression$Binary$Operator $tmp393 = *(&local77);
*(&local76) = $tmp393;
org$frostlang$frostc$expression$Binary$Operator $tmp394 = *(&local76);
return $tmp394;
block155:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:100
frost$core$Int $tmp395 = (frost$core$Int) {100u};
org$frostlang$frostc$parser$Token$Kind $tmp396 = param0.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp397;
$tmp397 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp397->value = $tmp396;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:100:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn399 $tmp398 = ($fn399) ((frost$core$Object*) $tmp397)->$class->vtable[0];
frost$core$String* $tmp400 = $tmp398(((frost$core$Object*) $tmp397));
frost$core$String* $tmp401 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s402, $tmp400);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
frost$core$String* $tmp403 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp401, &$s404);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s405, $tmp395, $tmp403);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
abort(); // unreachable
block1:;
goto block159;
block159:;

}
frost$core$Bit org$frostlang$frostc$expression$Binary$Operator$get_isAssignment$R$frost$core$Bit(org$frostlang$frostc$expression$Binary$Operator param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:106
frost$core$Int $tmp406 = param0.$rawValue;
frost$core$Int $tmp407 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:107:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp408 = $tmp406.value;
int64_t $tmp409 = $tmp407.value;
bool $tmp410 = $tmp408 == $tmp409;
frost$core$Bit $tmp411 = (frost$core$Bit) {$tmp410};
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block2; else goto block3;
block3:;
frost$core$Int $tmp413 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:107:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp414 = $tmp406.value;
int64_t $tmp415 = $tmp413.value;
bool $tmp416 = $tmp414 == $tmp415;
frost$core$Bit $tmp417 = (frost$core$Bit) {$tmp416};
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block2; else goto block5;
block5:;
frost$core$Int $tmp419 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:107:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp420 = $tmp406.value;
int64_t $tmp421 = $tmp419.value;
bool $tmp422 = $tmp420 == $tmp421;
frost$core$Bit $tmp423 = (frost$core$Bit) {$tmp422};
bool $tmp424 = $tmp423.value;
if ($tmp424) goto block2; else goto block7;
block7:;
frost$core$Int $tmp425 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:107:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp426 = $tmp406.value;
int64_t $tmp427 = $tmp425.value;
bool $tmp428 = $tmp426 == $tmp427;
frost$core$Bit $tmp429 = (frost$core$Bit) {$tmp428};
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block2; else goto block9;
block9:;
frost$core$Int $tmp431 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:107:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp432 = $tmp406.value;
int64_t $tmp433 = $tmp431.value;
bool $tmp434 = $tmp432 == $tmp433;
frost$core$Bit $tmp435 = (frost$core$Bit) {$tmp434};
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block2; else goto block11;
block11:;
frost$core$Int $tmp437 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:107:62
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp438 = $tmp406.value;
int64_t $tmp439 = $tmp437.value;
bool $tmp440 = $tmp438 == $tmp439;
frost$core$Bit $tmp441 = (frost$core$Bit) {$tmp440};
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block2; else goto block13;
block13:;
frost$core$Int $tmp443 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:107:72
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp444 = $tmp406.value;
int64_t $tmp445 = $tmp443.value;
bool $tmp446 = $tmp444 == $tmp445;
frost$core$Bit $tmp447 = (frost$core$Bit) {$tmp446};
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block2; else goto block15;
block15:;
frost$core$Int $tmp449 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:107:79
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp450 = $tmp406.value;
int64_t $tmp451 = $tmp449.value;
bool $tmp452 = $tmp450 == $tmp451;
frost$core$Bit $tmp453 = (frost$core$Bit) {$tmp452};
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block2; else goto block17;
block17:;
frost$core$Int $tmp455 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:108:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp456 = $tmp406.value;
int64_t $tmp457 = $tmp455.value;
bool $tmp458 = $tmp456 == $tmp457;
frost$core$Bit $tmp459 = (frost$core$Bit) {$tmp458};
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block2; else goto block19;
block19:;
frost$core$Int $tmp461 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:108:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp462 = $tmp406.value;
int64_t $tmp463 = $tmp461.value;
bool $tmp464 = $tmp462 == $tmp463;
frost$core$Bit $tmp465 = (frost$core$Bit) {$tmp464};
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block2; else goto block21;
block21:;
frost$core$Int $tmp467 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:108:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp468 = $tmp406.value;
int64_t $tmp469 = $tmp467.value;
bool $tmp470 = $tmp468 == $tmp469;
frost$core$Bit $tmp471 = (frost$core$Bit) {$tmp470};
bool $tmp472 = $tmp471.value;
if ($tmp472) goto block2; else goto block23;
block23:;
frost$core$Int $tmp473 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:108:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp474 = $tmp406.value;
int64_t $tmp475 = $tmp473.value;
bool $tmp476 = $tmp474 == $tmp475;
frost$core$Bit $tmp477 = (frost$core$Bit) {$tmp476};
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block2; else goto block25;
block25:;
frost$core$Int $tmp479 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:108:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp480 = $tmp406.value;
int64_t $tmp481 = $tmp479.value;
bool $tmp482 = $tmp480 == $tmp481;
frost$core$Bit $tmp483 = (frost$core$Bit) {$tmp482};
bool $tmp484 = $tmp483.value;
if ($tmp484) goto block2; else goto block27;
block27:;
frost$core$Int $tmp485 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:108:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp486 = $tmp406.value;
int64_t $tmp487 = $tmp485.value;
bool $tmp488 = $tmp486 == $tmp487;
frost$core$Bit $tmp489 = (frost$core$Bit) {$tmp488};
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block2; else goto block29;
block29:;
frost$core$Int $tmp491 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:109:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp492 = $tmp406.value;
int64_t $tmp493 = $tmp491.value;
bool $tmp494 = $tmp492 == $tmp493;
frost$core$Bit $tmp495 = (frost$core$Bit) {$tmp494};
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block2; else goto block31;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:110
frost$core$Bit $tmp497 = (frost$core$Bit) {true};
return $tmp497;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:113
frost$core$Bit $tmp498 = (frost$core$Bit) {false};
return $tmp498;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:119
frost$core$Int $tmp499 = param0.$rawValue;
frost$core$Int $tmp500 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:120:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp501 = $tmp499.value;
int64_t $tmp502 = $tmp500.value;
bool $tmp503 = $tmp501 == $tmp502;
frost$core$Bit $tmp504 = (frost$core$Bit) {$tmp503};
bool $tmp505 = $tmp504.value;
if ($tmp505) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:120
frost$core$Int $tmp506 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:120:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp507 = &(&local1)->$rawValue;
*$tmp507 = $tmp506;
org$frostlang$frostc$expression$Binary$Operator $tmp508 = *(&local1);
*(&local0) = $tmp508;
org$frostlang$frostc$expression$Binary$Operator $tmp509 = *(&local0);
return $tmp509;
block3:;
frost$core$Int $tmp510 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:121:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp511 = $tmp499.value;
int64_t $tmp512 = $tmp510.value;
bool $tmp513 = $tmp511 == $tmp512;
frost$core$Bit $tmp514 = (frost$core$Bit) {$tmp513};
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:121
frost$core$Int $tmp516 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:121:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp517 = &(&local3)->$rawValue;
*$tmp517 = $tmp516;
org$frostlang$frostc$expression$Binary$Operator $tmp518 = *(&local3);
*(&local2) = $tmp518;
org$frostlang$frostc$expression$Binary$Operator $tmp519 = *(&local2);
return $tmp519;
block7:;
frost$core$Int $tmp520 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp521 = $tmp499.value;
int64_t $tmp522 = $tmp520.value;
bool $tmp523 = $tmp521 == $tmp522;
frost$core$Bit $tmp524 = (frost$core$Bit) {$tmp523};
bool $tmp525 = $tmp524.value;
if ($tmp525) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:122
frost$core$Int $tmp526 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:122:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp527 = &(&local5)->$rawValue;
*$tmp527 = $tmp526;
org$frostlang$frostc$expression$Binary$Operator $tmp528 = *(&local5);
*(&local4) = $tmp528;
org$frostlang$frostc$expression$Binary$Operator $tmp529 = *(&local4);
return $tmp529;
block11:;
frost$core$Int $tmp530 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:123:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp531 = $tmp499.value;
int64_t $tmp532 = $tmp530.value;
bool $tmp533 = $tmp531 == $tmp532;
frost$core$Bit $tmp534 = (frost$core$Bit) {$tmp533};
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:123
frost$core$Int $tmp536 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:123:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp537 = &(&local7)->$rawValue;
*$tmp537 = $tmp536;
org$frostlang$frostc$expression$Binary$Operator $tmp538 = *(&local7);
*(&local6) = $tmp538;
org$frostlang$frostc$expression$Binary$Operator $tmp539 = *(&local6);
return $tmp539;
block15:;
frost$core$Int $tmp540 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:124:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp541 = $tmp499.value;
int64_t $tmp542 = $tmp540.value;
bool $tmp543 = $tmp541 == $tmp542;
frost$core$Bit $tmp544 = (frost$core$Bit) {$tmp543};
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:124
frost$core$Int $tmp546 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:124:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp547 = &(&local9)->$rawValue;
*$tmp547 = $tmp546;
org$frostlang$frostc$expression$Binary$Operator $tmp548 = *(&local9);
*(&local8) = $tmp548;
org$frostlang$frostc$expression$Binary$Operator $tmp549 = *(&local8);
return $tmp549;
block19:;
frost$core$Int $tmp550 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:125:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp551 = $tmp499.value;
int64_t $tmp552 = $tmp550.value;
bool $tmp553 = $tmp551 == $tmp552;
frost$core$Bit $tmp554 = (frost$core$Bit) {$tmp553};
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:125
frost$core$Int $tmp556 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:125:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp557 = &(&local11)->$rawValue;
*$tmp557 = $tmp556;
org$frostlang$frostc$expression$Binary$Operator $tmp558 = *(&local11);
*(&local10) = $tmp558;
org$frostlang$frostc$expression$Binary$Operator $tmp559 = *(&local10);
return $tmp559;
block23:;
frost$core$Int $tmp560 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:126:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp561 = $tmp499.value;
int64_t $tmp562 = $tmp560.value;
bool $tmp563 = $tmp561 == $tmp562;
frost$core$Bit $tmp564 = (frost$core$Bit) {$tmp563};
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:126
frost$core$Int $tmp566 = (frost$core$Int) {12u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:126:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp567 = &(&local13)->$rawValue;
*$tmp567 = $tmp566;
org$frostlang$frostc$expression$Binary$Operator $tmp568 = *(&local13);
*(&local12) = $tmp568;
org$frostlang$frostc$expression$Binary$Operator $tmp569 = *(&local12);
return $tmp569;
block27:;
frost$core$Int $tmp570 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:127:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp571 = $tmp499.value;
int64_t $tmp572 = $tmp570.value;
bool $tmp573 = $tmp571 == $tmp572;
frost$core$Bit $tmp574 = (frost$core$Bit) {$tmp573};
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:127
frost$core$Int $tmp576 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:127:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp577 = &(&local15)->$rawValue;
*$tmp577 = $tmp576;
org$frostlang$frostc$expression$Binary$Operator $tmp578 = *(&local15);
*(&local14) = $tmp578;
org$frostlang$frostc$expression$Binary$Operator $tmp579 = *(&local14);
return $tmp579;
block31:;
frost$core$Int $tmp580 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:128:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp581 = $tmp499.value;
int64_t $tmp582 = $tmp580.value;
bool $tmp583 = $tmp581 == $tmp582;
frost$core$Bit $tmp584 = (frost$core$Bit) {$tmp583};
bool $tmp585 = $tmp584.value;
if ($tmp585) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:128
frost$core$Int $tmp586 = (frost$core$Int) {14u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:128:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp587 = &(&local17)->$rawValue;
*$tmp587 = $tmp586;
org$frostlang$frostc$expression$Binary$Operator $tmp588 = *(&local17);
*(&local16) = $tmp588;
org$frostlang$frostc$expression$Binary$Operator $tmp589 = *(&local16);
return $tmp589;
block35:;
frost$core$Int $tmp590 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:129:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp591 = $tmp499.value;
int64_t $tmp592 = $tmp590.value;
bool $tmp593 = $tmp591 == $tmp592;
frost$core$Bit $tmp594 = (frost$core$Bit) {$tmp593};
bool $tmp595 = $tmp594.value;
if ($tmp595) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:129
frost$core$Int $tmp596 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:129:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp597 = &(&local19)->$rawValue;
*$tmp597 = $tmp596;
org$frostlang$frostc$expression$Binary$Operator $tmp598 = *(&local19);
*(&local18) = $tmp598;
org$frostlang$frostc$expression$Binary$Operator $tmp599 = *(&local18);
return $tmp599;
block39:;
frost$core$Int $tmp600 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:130:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp601 = $tmp499.value;
int64_t $tmp602 = $tmp600.value;
bool $tmp603 = $tmp601 == $tmp602;
frost$core$Bit $tmp604 = (frost$core$Bit) {$tmp603};
bool $tmp605 = $tmp604.value;
if ($tmp605) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:130
frost$core$Int $tmp606 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:130:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp607 = &(&local21)->$rawValue;
*$tmp607 = $tmp606;
org$frostlang$frostc$expression$Binary$Operator $tmp608 = *(&local21);
*(&local20) = $tmp608;
org$frostlang$frostc$expression$Binary$Operator $tmp609 = *(&local20);
return $tmp609;
block43:;
frost$core$Int $tmp610 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:131:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp611 = $tmp499.value;
int64_t $tmp612 = $tmp610.value;
bool $tmp613 = $tmp611 == $tmp612;
frost$core$Bit $tmp614 = (frost$core$Bit) {$tmp613};
bool $tmp615 = $tmp614.value;
if ($tmp615) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:131
frost$core$Int $tmp616 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:131:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp617 = &(&local23)->$rawValue;
*$tmp617 = $tmp616;
org$frostlang$frostc$expression$Binary$Operator $tmp618 = *(&local23);
*(&local22) = $tmp618;
org$frostlang$frostc$expression$Binary$Operator $tmp619 = *(&local22);
return $tmp619;
block47:;
frost$core$Int $tmp620 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:132:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp621 = $tmp499.value;
int64_t $tmp622 = $tmp620.value;
bool $tmp623 = $tmp621 == $tmp622;
frost$core$Bit $tmp624 = (frost$core$Bit) {$tmp623};
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:132
frost$core$Int $tmp626 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:132:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp627 = &(&local25)->$rawValue;
*$tmp627 = $tmp626;
org$frostlang$frostc$expression$Binary$Operator $tmp628 = *(&local25);
*(&local24) = $tmp628;
org$frostlang$frostc$expression$Binary$Operator $tmp629 = *(&local24);
return $tmp629;
block51:;
frost$core$Int $tmp630 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:133:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp631 = $tmp499.value;
int64_t $tmp632 = $tmp630.value;
bool $tmp633 = $tmp631 == $tmp632;
frost$core$Bit $tmp634 = (frost$core$Bit) {$tmp633};
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:133
frost$core$Int $tmp636 = (frost$core$Int) {19u};
// begin inline call to org.frostlang.frostc.expression.Binary.Operator.init(rv:frost.core.Int):org.frostlang.frostc.expression.Binary.Operator from Binary.frost:133:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp637 = &(&local27)->$rawValue;
*$tmp637 = $tmp636;
org$frostlang$frostc$expression$Binary$Operator $tmp638 = *(&local27);
*(&local26) = $tmp638;
org$frostlang$frostc$expression$Binary$Operator $tmp639 = *(&local26);
return $tmp639;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:134
frost$core$Int $tmp640 = (frost$core$Int) {134u};
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp641;
$tmp641 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp641->value = param0;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Binary.frost:134:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn643 $tmp642 = ($fn643) ((frost$core$Object*) $tmp641)->$class->vtable[0];
frost$core$String* $tmp644 = $tmp642(((frost$core$Object*) $tmp641));
frost$core$String* $tmp645 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s646, $tmp644);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
frost$core$String* $tmp647 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp645, &$s648);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s649, $tmp640, $tmp647);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
abort(); // unreachable
block1:;
goto block59;
block59:;

}
frost$core$String* org$frostlang$frostc$expression$Binary$Operator$get_asString$R$frost$core$String(org$frostlang$frostc$expression$Binary$Operator param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:140
frost$core$Int $tmp650 = param0.$rawValue;
frost$core$Int $tmp651 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:141:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp652 = $tmp650.value;
int64_t $tmp653 = $tmp651.value;
bool $tmp654 = $tmp652 == $tmp653;
frost$core$Bit $tmp655 = (frost$core$Bit) {$tmp654};
bool $tmp656 = $tmp655.value;
if ($tmp656) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:141
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s657));
return &$s658;
block3:;
frost$core$Int $tmp659 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:142:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp660 = $tmp650.value;
int64_t $tmp661 = $tmp659.value;
bool $tmp662 = $tmp660 == $tmp661;
frost$core$Bit $tmp663 = (frost$core$Bit) {$tmp662};
bool $tmp664 = $tmp663.value;
if ($tmp664) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s665));
return &$s666;
block6:;
frost$core$Int $tmp667 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:143:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp668 = $tmp650.value;
int64_t $tmp669 = $tmp667.value;
bool $tmp670 = $tmp668 == $tmp669;
frost$core$Bit $tmp671 = (frost$core$Bit) {$tmp670};
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:143
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s673));
return &$s674;
block9:;
frost$core$Int $tmp675 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:144:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp676 = $tmp650.value;
int64_t $tmp677 = $tmp675.value;
bool $tmp678 = $tmp676 == $tmp677;
frost$core$Bit $tmp679 = (frost$core$Bit) {$tmp678};
bool $tmp680 = $tmp679.value;
if ($tmp680) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:144
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s681));
return &$s682;
block12:;
frost$core$Int $tmp683 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:145:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp684 = $tmp650.value;
int64_t $tmp685 = $tmp683.value;
bool $tmp686 = $tmp684 == $tmp685;
frost$core$Bit $tmp687 = (frost$core$Bit) {$tmp686};
bool $tmp688 = $tmp687.value;
if ($tmp688) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:145
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s689));
return &$s690;
block15:;
frost$core$Int $tmp691 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:146:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp692 = $tmp650.value;
int64_t $tmp693 = $tmp691.value;
bool $tmp694 = $tmp692 == $tmp693;
frost$core$Bit $tmp695 = (frost$core$Bit) {$tmp694};
bool $tmp696 = $tmp695.value;
if ($tmp696) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:146
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s697));
return &$s698;
block18:;
frost$core$Int $tmp699 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:147:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp700 = $tmp650.value;
int64_t $tmp701 = $tmp699.value;
bool $tmp702 = $tmp700 == $tmp701;
frost$core$Bit $tmp703 = (frost$core$Bit) {$tmp702};
bool $tmp704 = $tmp703.value;
if ($tmp704) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:147
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s705));
return &$s706;
block21:;
frost$core$Int $tmp707 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:148:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp708 = $tmp650.value;
int64_t $tmp709 = $tmp707.value;
bool $tmp710 = $tmp708 == $tmp709;
frost$core$Bit $tmp711 = (frost$core$Bit) {$tmp710};
bool $tmp712 = $tmp711.value;
if ($tmp712) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:148
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s713));
return &$s714;
block24:;
frost$core$Int $tmp715 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:149:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp716 = $tmp650.value;
int64_t $tmp717 = $tmp715.value;
bool $tmp718 = $tmp716 == $tmp717;
frost$core$Bit $tmp719 = (frost$core$Bit) {$tmp718};
bool $tmp720 = $tmp719.value;
if ($tmp720) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:149
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s721));
return &$s722;
block27:;
frost$core$Int $tmp723 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:150:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp724 = $tmp650.value;
int64_t $tmp725 = $tmp723.value;
bool $tmp726 = $tmp724 == $tmp725;
frost$core$Bit $tmp727 = (frost$core$Bit) {$tmp726};
bool $tmp728 = $tmp727.value;
if ($tmp728) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:150
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s729));
return &$s730;
block30:;
frost$core$Int $tmp731 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:151:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp732 = $tmp650.value;
int64_t $tmp733 = $tmp731.value;
bool $tmp734 = $tmp732 == $tmp733;
frost$core$Bit $tmp735 = (frost$core$Bit) {$tmp734};
bool $tmp736 = $tmp735.value;
if ($tmp736) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:151
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s737));
return &$s738;
block33:;
frost$core$Int $tmp739 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:152:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp740 = $tmp650.value;
int64_t $tmp741 = $tmp739.value;
bool $tmp742 = $tmp740 == $tmp741;
frost$core$Bit $tmp743 = (frost$core$Bit) {$tmp742};
bool $tmp744 = $tmp743.value;
if ($tmp744) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:152
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s745));
return &$s746;
block36:;
frost$core$Int $tmp747 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:153:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp748 = $tmp650.value;
int64_t $tmp749 = $tmp747.value;
bool $tmp750 = $tmp748 == $tmp749;
frost$core$Bit $tmp751 = (frost$core$Bit) {$tmp750};
bool $tmp752 = $tmp751.value;
if ($tmp752) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:153
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s753));
return &$s754;
block39:;
frost$core$Int $tmp755 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:154:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp756 = $tmp650.value;
int64_t $tmp757 = $tmp755.value;
bool $tmp758 = $tmp756 == $tmp757;
frost$core$Bit $tmp759 = (frost$core$Bit) {$tmp758};
bool $tmp760 = $tmp759.value;
if ($tmp760) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:154
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s761));
return &$s762;
block42:;
frost$core$Int $tmp763 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:155:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp764 = $tmp650.value;
int64_t $tmp765 = $tmp763.value;
bool $tmp766 = $tmp764 == $tmp765;
frost$core$Bit $tmp767 = (frost$core$Bit) {$tmp766};
bool $tmp768 = $tmp767.value;
if ($tmp768) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:155
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s769));
return &$s770;
block45:;
frost$core$Int $tmp771 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:156:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp772 = $tmp650.value;
int64_t $tmp773 = $tmp771.value;
bool $tmp774 = $tmp772 == $tmp773;
frost$core$Bit $tmp775 = (frost$core$Bit) {$tmp774};
bool $tmp776 = $tmp775.value;
if ($tmp776) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:156
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s777));
return &$s778;
block48:;
frost$core$Int $tmp779 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:157:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp780 = $tmp650.value;
int64_t $tmp781 = $tmp779.value;
bool $tmp782 = $tmp780 == $tmp781;
frost$core$Bit $tmp783 = (frost$core$Bit) {$tmp782};
bool $tmp784 = $tmp783.value;
if ($tmp784) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:157
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s785));
return &$s786;
block51:;
frost$core$Int $tmp787 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:158:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp788 = $tmp650.value;
int64_t $tmp789 = $tmp787.value;
bool $tmp790 = $tmp788 == $tmp789;
frost$core$Bit $tmp791 = (frost$core$Bit) {$tmp790};
bool $tmp792 = $tmp791.value;
if ($tmp792) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:158
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s793));
return &$s794;
block54:;
frost$core$Int $tmp795 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:159:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp796 = $tmp650.value;
int64_t $tmp797 = $tmp795.value;
bool $tmp798 = $tmp796 == $tmp797;
frost$core$Bit $tmp799 = (frost$core$Bit) {$tmp798};
bool $tmp800 = $tmp799.value;
if ($tmp800) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:159
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s801));
return &$s802;
block57:;
frost$core$Int $tmp803 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:160:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp804 = $tmp650.value;
int64_t $tmp805 = $tmp803.value;
bool $tmp806 = $tmp804 == $tmp805;
frost$core$Bit $tmp807 = (frost$core$Bit) {$tmp806};
bool $tmp808 = $tmp807.value;
if ($tmp808) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:160
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s809));
return &$s810;
block60:;
frost$core$Int $tmp811 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:161:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp812 = $tmp650.value;
int64_t $tmp813 = $tmp811.value;
bool $tmp814 = $tmp812 == $tmp813;
frost$core$Bit $tmp815 = (frost$core$Bit) {$tmp814};
bool $tmp816 = $tmp815.value;
if ($tmp816) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:161
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s817));
return &$s818;
block63:;
frost$core$Int $tmp819 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:162:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp820 = $tmp650.value;
int64_t $tmp821 = $tmp819.value;
bool $tmp822 = $tmp820 == $tmp821;
frost$core$Bit $tmp823 = (frost$core$Bit) {$tmp822};
bool $tmp824 = $tmp823.value;
if ($tmp824) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:162
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s825));
return &$s826;
block66:;
frost$core$Int $tmp827 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:163:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp828 = $tmp650.value;
int64_t $tmp829 = $tmp827.value;
bool $tmp830 = $tmp828 == $tmp829;
frost$core$Bit $tmp831 = (frost$core$Bit) {$tmp830};
bool $tmp832 = $tmp831.value;
if ($tmp832) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:163
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s833));
return &$s834;
block69:;
frost$core$Int $tmp835 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:164:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp836 = $tmp650.value;
int64_t $tmp837 = $tmp835.value;
bool $tmp838 = $tmp836 == $tmp837;
frost$core$Bit $tmp839 = (frost$core$Bit) {$tmp838};
bool $tmp840 = $tmp839.value;
if ($tmp840) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:164
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s841));
return &$s842;
block72:;
frost$core$Int $tmp843 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:165:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp844 = $tmp650.value;
int64_t $tmp845 = $tmp843.value;
bool $tmp846 = $tmp844 == $tmp845;
frost$core$Bit $tmp847 = (frost$core$Bit) {$tmp846};
bool $tmp848 = $tmp847.value;
if ($tmp848) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:165
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s849));
return &$s850;
block75:;
frost$core$Int $tmp851 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:166:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp852 = $tmp650.value;
int64_t $tmp853 = $tmp851.value;
bool $tmp854 = $tmp852 == $tmp853;
frost$core$Bit $tmp855 = (frost$core$Bit) {$tmp854};
bool $tmp856 = $tmp855.value;
if ($tmp856) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:166
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s857));
return &$s858;
block78:;
frost$core$Int $tmp859 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:167:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp860 = $tmp650.value;
int64_t $tmp861 = $tmp859.value;
bool $tmp862 = $tmp860 == $tmp861;
frost$core$Bit $tmp863 = (frost$core$Bit) {$tmp862};
bool $tmp864 = $tmp863.value;
if ($tmp864) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:167
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s865));
return &$s866;
block81:;
frost$core$Int $tmp867 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:168:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp868 = $tmp650.value;
int64_t $tmp869 = $tmp867.value;
bool $tmp870 = $tmp868 == $tmp869;
frost$core$Bit $tmp871 = (frost$core$Bit) {$tmp870};
bool $tmp872 = $tmp871.value;
if ($tmp872) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:168
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s873));
return &$s874;
block84:;
frost$core$Int $tmp875 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:169:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp876 = $tmp650.value;
int64_t $tmp877 = $tmp875.value;
bool $tmp878 = $tmp876 == $tmp877;
frost$core$Bit $tmp879 = (frost$core$Bit) {$tmp878};
bool $tmp880 = $tmp879.value;
if ($tmp880) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:169
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s881));
return &$s882;
block87:;
frost$core$Int $tmp883 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:170:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp884 = $tmp650.value;
int64_t $tmp885 = $tmp883.value;
bool $tmp886 = $tmp884 == $tmp885;
frost$core$Bit $tmp887 = (frost$core$Bit) {$tmp886};
bool $tmp888 = $tmp887.value;
if ($tmp888) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:170
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s889));
return &$s890;
block90:;
frost$core$Int $tmp891 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:171:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp892 = $tmp650.value;
int64_t $tmp893 = $tmp891.value;
bool $tmp894 = $tmp892 == $tmp893;
frost$core$Bit $tmp895 = (frost$core$Bit) {$tmp894};
bool $tmp896 = $tmp895.value;
if ($tmp896) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:171
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s897));
return &$s898;
block93:;
frost$core$Int $tmp899 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:172:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp900 = $tmp650.value;
int64_t $tmp901 = $tmp899.value;
bool $tmp902 = $tmp900 == $tmp901;
frost$core$Bit $tmp903 = (frost$core$Bit) {$tmp902};
bool $tmp904 = $tmp903.value;
if ($tmp904) goto block95; else goto block96;
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:172
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s905));
return &$s906;
block96:;
frost$core$Int $tmp907 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:173:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp908 = $tmp650.value;
int64_t $tmp909 = $tmp907.value;
bool $tmp910 = $tmp908 == $tmp909;
frost$core$Bit $tmp911 = (frost$core$Bit) {$tmp910};
bool $tmp912 = $tmp911.value;
if ($tmp912) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:173
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s913));
return &$s914;
block99:;
frost$core$Int $tmp915 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:174:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp916 = $tmp650.value;
int64_t $tmp917 = $tmp915.value;
bool $tmp918 = $tmp916 == $tmp917;
frost$core$Bit $tmp919 = (frost$core$Bit) {$tmp918};
bool $tmp920 = $tmp919.value;
if ($tmp920) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:174
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s921));
return &$s922;
block102:;
frost$core$Int $tmp923 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:175:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp924 = $tmp650.value;
int64_t $tmp925 = $tmp923.value;
bool $tmp926 = $tmp924 == $tmp925;
frost$core$Bit $tmp927 = (frost$core$Bit) {$tmp926};
bool $tmp928 = $tmp927.value;
if ($tmp928) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:175
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s929));
return &$s930;
block105:;
frost$core$Int $tmp931 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:176:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp932 = $tmp650.value;
int64_t $tmp933 = $tmp931.value;
bool $tmp934 = $tmp932 == $tmp933;
frost$core$Bit $tmp935 = (frost$core$Bit) {$tmp934};
bool $tmp936 = $tmp935.value;
if ($tmp936) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:176
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s937));
return &$s938;
block108:;
frost$core$Int $tmp939 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:177:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp940 = $tmp650.value;
int64_t $tmp941 = $tmp939.value;
bool $tmp942 = $tmp940 == $tmp941;
frost$core$Bit $tmp943 = (frost$core$Bit) {$tmp942};
bool $tmp944 = $tmp943.value;
if ($tmp944) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:177
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s945));
return &$s946;
block111:;
frost$core$Int $tmp947 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:178:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp948 = $tmp650.value;
int64_t $tmp949 = $tmp947.value;
bool $tmp950 = $tmp948 == $tmp949;
frost$core$Bit $tmp951 = (frost$core$Bit) {$tmp950};
bool $tmp952 = $tmp951.value;
if ($tmp952) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:178
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s953));
return &$s954;
block114:;
frost$core$Int $tmp955 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:179:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp956 = $tmp650.value;
int64_t $tmp957 = $tmp955.value;
bool $tmp958 = $tmp956 == $tmp957;
frost$core$Bit $tmp959 = (frost$core$Bit) {$tmp958};
bool $tmp960 = $tmp959.value;
if ($tmp960) goto block116; else goto block1;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:179
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s961));
return &$s962;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:181
frost$core$Int $tmp963 = (frost$core$Int) {181u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s964, $tmp963);
abort(); // unreachable

}
void org$frostlang$frostc$expression$Binary$Operator$cleanup(org$frostlang$frostc$expression$Binary$Operator param0) {

return;

}
org$frostlang$frostc$expression$Binary$Operator org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int(frost$core$Int param0) {

org$frostlang$frostc$expression$Binary$Operator local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int* $tmp965 = &(&local0)->$rawValue;
*$tmp965 = param0;
org$frostlang$frostc$expression$Binary$Operator $tmp966 = *(&local0);
return $tmp966;

}
frost$core$Bit org$frostlang$frostc$expression$Binary$Operator$$EQ$org$frostlang$frostc$expression$Binary$Operator$R$frost$core$Bit(org$frostlang$frostc$expression$Binary$Operator param0, org$frostlang$frostc$expression$Binary$Operator param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp967 = param0.$rawValue;
frost$core$Int $tmp968 = param1.$rawValue;
int64_t $tmp969 = $tmp967.value;
int64_t $tmp970 = $tmp968.value;
bool $tmp971 = $tmp969 != $tmp970;
frost$core$Bit $tmp972 = (frost$core$Bit) {$tmp971};
bool $tmp973 = $tmp972.value;
if ($tmp973) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Bit $tmp974 = (frost$core$Bit) {false};
return $tmp974;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Bit $tmp975 = (frost$core$Bit) {true};
return $tmp975;

}
frost$core$Int org$frostlang$frostc$expression$Binary$Operator$get_hash$R$frost$core$Int(org$frostlang$frostc$expression$Binary$Operator param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp976 = param0.$rawValue;
frost$core$Int $tmp977 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp978 = $tmp976.value;
int64_t $tmp979 = $tmp977.value;
bool $tmp980 = $tmp978 == $tmp979;
frost$core$Bit $tmp981 = (frost$core$Bit) {$tmp980};
bool $tmp982 = $tmp981.value;
if ($tmp982) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp983 = (frost$core$Int) {12139274656235416653u};
return $tmp983;
block3:;
frost$core$Int $tmp984 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp985 = $tmp976.value;
int64_t $tmp986 = $tmp984.value;
bool $tmp987 = $tmp985 == $tmp986;
frost$core$Bit $tmp988 = (frost$core$Bit) {$tmp987};
bool $tmp989 = $tmp988.value;
if ($tmp989) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp990 = (frost$core$Int) {5831805238761281690u};
return $tmp990;
block6:;
frost$core$Int $tmp991 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp992 = $tmp976.value;
int64_t $tmp993 = $tmp991.value;
bool $tmp994 = $tmp992 == $tmp993;
frost$core$Bit $tmp995 = (frost$core$Bit) {$tmp994};
bool $tmp996 = $tmp995.value;
if ($tmp996) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp997 = (frost$core$Int) {17971079894996698343u};
return $tmp997;
block9:;
frost$core$Int $tmp998 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp999 = $tmp976.value;
int64_t $tmp1000 = $tmp998.value;
bool $tmp1001 = $tmp999 == $tmp1000;
frost$core$Bit $tmp1002 = (frost$core$Bit) {$tmp1001};
bool $tmp1003 = $tmp1002.value;
if ($tmp1003) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1004 = (frost$core$Int) {11663610477522563380u};
return $tmp1004;
block12:;
frost$core$Int $tmp1005 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1006 = $tmp976.value;
int64_t $tmp1007 = $tmp1005.value;
bool $tmp1008 = $tmp1006 == $tmp1007;
frost$core$Bit $tmp1009 = (frost$core$Bit) {$tmp1008};
bool $tmp1010 = $tmp1009.value;
if ($tmp1010) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1011 = (frost$core$Int) {5356141060048428417u};
return $tmp1011;
block15:;
frost$core$Int $tmp1012 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1013 = $tmp976.value;
int64_t $tmp1014 = $tmp1012.value;
bool $tmp1015 = $tmp1013 == $tmp1014;
frost$core$Bit $tmp1016 = (frost$core$Bit) {$tmp1015};
bool $tmp1017 = $tmp1016.value;
if ($tmp1017) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1018 = (frost$core$Int) {17495415716283845070u};
return $tmp1018;
block18:;
frost$core$Int $tmp1019 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1020 = $tmp976.value;
int64_t $tmp1021 = $tmp1019.value;
bool $tmp1022 = $tmp1020 == $tmp1021;
frost$core$Bit $tmp1023 = (frost$core$Bit) {$tmp1022};
bool $tmp1024 = $tmp1023.value;
if ($tmp1024) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1025 = (frost$core$Int) {11187946298809710107u};
return $tmp1025;
block21:;
frost$core$Int $tmp1026 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1027 = $tmp976.value;
int64_t $tmp1028 = $tmp1026.value;
bool $tmp1029 = $tmp1027 == $tmp1028;
frost$core$Bit $tmp1030 = (frost$core$Bit) {$tmp1029};
bool $tmp1031 = $tmp1030.value;
if ($tmp1031) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1032 = (frost$core$Int) {4880476881335575144u};
return $tmp1032;
block24:;
frost$core$Int $tmp1033 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1034 = $tmp976.value;
int64_t $tmp1035 = $tmp1033.value;
bool $tmp1036 = $tmp1034 == $tmp1035;
frost$core$Bit $tmp1037 = (frost$core$Bit) {$tmp1036};
bool $tmp1038 = $tmp1037.value;
if ($tmp1038) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1039 = (frost$core$Int) {17019751537570991797u};
return $tmp1039;
block27:;
frost$core$Int $tmp1040 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1041 = $tmp976.value;
int64_t $tmp1042 = $tmp1040.value;
bool $tmp1043 = $tmp1041 == $tmp1042;
frost$core$Bit $tmp1044 = (frost$core$Bit) {$tmp1043};
bool $tmp1045 = $tmp1044.value;
if ($tmp1045) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1046 = (frost$core$Int) {10712282120096856834u};
return $tmp1046;
block30:;
frost$core$Int $tmp1047 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1048 = $tmp976.value;
int64_t $tmp1049 = $tmp1047.value;
bool $tmp1050 = $tmp1048 == $tmp1049;
frost$core$Bit $tmp1051 = (frost$core$Bit) {$tmp1050};
bool $tmp1052 = $tmp1051.value;
if ($tmp1052) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1053 = (frost$core$Int) {4404812702622721871u};
return $tmp1053;
block33:;
frost$core$Int $tmp1054 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1055 = $tmp976.value;
int64_t $tmp1056 = $tmp1054.value;
bool $tmp1057 = $tmp1055 == $tmp1056;
frost$core$Bit $tmp1058 = (frost$core$Bit) {$tmp1057};
bool $tmp1059 = $tmp1058.value;
if ($tmp1059) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1060 = (frost$core$Int) {16544087358858138524u};
return $tmp1060;
block36:;
frost$core$Int $tmp1061 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1062 = $tmp976.value;
int64_t $tmp1063 = $tmp1061.value;
bool $tmp1064 = $tmp1062 == $tmp1063;
frost$core$Bit $tmp1065 = (frost$core$Bit) {$tmp1064};
bool $tmp1066 = $tmp1065.value;
if ($tmp1066) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1067 = (frost$core$Int) {10236617941384003561u};
return $tmp1067;
block39:;
frost$core$Int $tmp1068 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1069 = $tmp976.value;
int64_t $tmp1070 = $tmp1068.value;
bool $tmp1071 = $tmp1069 == $tmp1070;
frost$core$Bit $tmp1072 = (frost$core$Bit) {$tmp1071};
bool $tmp1073 = $tmp1072.value;
if ($tmp1073) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1074 = (frost$core$Int) {3929148523909868598u};
return $tmp1074;
block42:;
frost$core$Int $tmp1075 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1076 = $tmp976.value;
int64_t $tmp1077 = $tmp1075.value;
bool $tmp1078 = $tmp1076 == $tmp1077;
frost$core$Bit $tmp1079 = (frost$core$Bit) {$tmp1078};
bool $tmp1080 = $tmp1079.value;
if ($tmp1080) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1081 = (frost$core$Int) {16068423180145285251u};
return $tmp1081;
block45:;
frost$core$Int $tmp1082 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1083 = $tmp976.value;
int64_t $tmp1084 = $tmp1082.value;
bool $tmp1085 = $tmp1083 == $tmp1084;
frost$core$Bit $tmp1086 = (frost$core$Bit) {$tmp1085};
bool $tmp1087 = $tmp1086.value;
if ($tmp1087) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1088 = (frost$core$Int) {9760953762671150288u};
return $tmp1088;
block48:;
frost$core$Int $tmp1089 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1090 = $tmp976.value;
int64_t $tmp1091 = $tmp1089.value;
bool $tmp1092 = $tmp1090 == $tmp1091;
frost$core$Bit $tmp1093 = (frost$core$Bit) {$tmp1092};
bool $tmp1094 = $tmp1093.value;
if ($tmp1094) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1095 = (frost$core$Int) {3453484345197015325u};
return $tmp1095;
block51:;
frost$core$Int $tmp1096 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1097 = $tmp976.value;
int64_t $tmp1098 = $tmp1096.value;
bool $tmp1099 = $tmp1097 == $tmp1098;
frost$core$Bit $tmp1100 = (frost$core$Bit) {$tmp1099};
bool $tmp1101 = $tmp1100.value;
if ($tmp1101) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1102 = (frost$core$Int) {15592759001432431978u};
return $tmp1102;
block54:;
frost$core$Int $tmp1103 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1104 = $tmp976.value;
int64_t $tmp1105 = $tmp1103.value;
bool $tmp1106 = $tmp1104 == $tmp1105;
frost$core$Bit $tmp1107 = (frost$core$Bit) {$tmp1106};
bool $tmp1108 = $tmp1107.value;
if ($tmp1108) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1109 = (frost$core$Int) {9285289583958297015u};
return $tmp1109;
block57:;
frost$core$Int $tmp1110 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1111 = $tmp976.value;
int64_t $tmp1112 = $tmp1110.value;
bool $tmp1113 = $tmp1111 == $tmp1112;
frost$core$Bit $tmp1114 = (frost$core$Bit) {$tmp1113};
bool $tmp1115 = $tmp1114.value;
if ($tmp1115) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1116 = (frost$core$Int) {2977820166484162052u};
return $tmp1116;
block60:;
frost$core$Int $tmp1117 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1118 = $tmp976.value;
int64_t $tmp1119 = $tmp1117.value;
bool $tmp1120 = $tmp1118 == $tmp1119;
frost$core$Bit $tmp1121 = (frost$core$Bit) {$tmp1120};
bool $tmp1122 = $tmp1121.value;
if ($tmp1122) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1123 = (frost$core$Int) {15117094822719578705u};
return $tmp1123;
block63:;
frost$core$Int $tmp1124 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1125 = $tmp976.value;
int64_t $tmp1126 = $tmp1124.value;
bool $tmp1127 = $tmp1125 == $tmp1126;
frost$core$Bit $tmp1128 = (frost$core$Bit) {$tmp1127};
bool $tmp1129 = $tmp1128.value;
if ($tmp1129) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1130 = (frost$core$Int) {8809625405245443742u};
return $tmp1130;
block66:;
frost$core$Int $tmp1131 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1132 = $tmp976.value;
int64_t $tmp1133 = $tmp1131.value;
bool $tmp1134 = $tmp1132 == $tmp1133;
frost$core$Bit $tmp1135 = (frost$core$Bit) {$tmp1134};
bool $tmp1136 = $tmp1135.value;
if ($tmp1136) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1137 = (frost$core$Int) {2502155987771308779u};
return $tmp1137;
block69:;
frost$core$Int $tmp1138 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1139 = $tmp976.value;
int64_t $tmp1140 = $tmp1138.value;
bool $tmp1141 = $tmp1139 == $tmp1140;
frost$core$Bit $tmp1142 = (frost$core$Bit) {$tmp1141};
bool $tmp1143 = $tmp1142.value;
if ($tmp1143) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1144 = (frost$core$Int) {14641430644006725432u};
return $tmp1144;
block72:;
frost$core$Int $tmp1145 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1146 = $tmp976.value;
int64_t $tmp1147 = $tmp1145.value;
bool $tmp1148 = $tmp1146 == $tmp1147;
frost$core$Bit $tmp1149 = (frost$core$Bit) {$tmp1148};
bool $tmp1150 = $tmp1149.value;
if ($tmp1150) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1151 = (frost$core$Int) {8333961226532590469u};
return $tmp1151;
block75:;
frost$core$Int $tmp1152 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1153 = $tmp976.value;
int64_t $tmp1154 = $tmp1152.value;
bool $tmp1155 = $tmp1153 == $tmp1154;
frost$core$Bit $tmp1156 = (frost$core$Bit) {$tmp1155};
bool $tmp1157 = $tmp1156.value;
if ($tmp1157) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1158 = (frost$core$Int) {2026491809058455506u};
return $tmp1158;
block78:;
frost$core$Int $tmp1159 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1160 = $tmp976.value;
int64_t $tmp1161 = $tmp1159.value;
bool $tmp1162 = $tmp1160 == $tmp1161;
frost$core$Bit $tmp1163 = (frost$core$Bit) {$tmp1162};
bool $tmp1164 = $tmp1163.value;
if ($tmp1164) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1165 = (frost$core$Int) {14165766465293872159u};
return $tmp1165;
block81:;
frost$core$Int $tmp1166 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1167 = $tmp976.value;
int64_t $tmp1168 = $tmp1166.value;
bool $tmp1169 = $tmp1167 == $tmp1168;
frost$core$Bit $tmp1170 = (frost$core$Bit) {$tmp1169};
bool $tmp1171 = $tmp1170.value;
if ($tmp1171) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1172 = (frost$core$Int) {7858297047819737196u};
return $tmp1172;
block84:;
frost$core$Int $tmp1173 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1174 = $tmp976.value;
int64_t $tmp1175 = $tmp1173.value;
bool $tmp1176 = $tmp1174 == $tmp1175;
frost$core$Bit $tmp1177 = (frost$core$Bit) {$tmp1176};
bool $tmp1178 = $tmp1177.value;
if ($tmp1178) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1179 = (frost$core$Int) {1550827630345602233u};
return $tmp1179;
block87:;
frost$core$Int $tmp1180 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1181 = $tmp976.value;
int64_t $tmp1182 = $tmp1180.value;
bool $tmp1183 = $tmp1181 == $tmp1182;
frost$core$Bit $tmp1184 = (frost$core$Bit) {$tmp1183};
bool $tmp1185 = $tmp1184.value;
if ($tmp1185) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1186 = (frost$core$Int) {13690102286581018886u};
return $tmp1186;
block90:;
frost$core$Int $tmp1187 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1188 = $tmp976.value;
int64_t $tmp1189 = $tmp1187.value;
bool $tmp1190 = $tmp1188 == $tmp1189;
frost$core$Bit $tmp1191 = (frost$core$Bit) {$tmp1190};
bool $tmp1192 = $tmp1191.value;
if ($tmp1192) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1193 = (frost$core$Int) {7382632869106883923u};
return $tmp1193;
block93:;
frost$core$Int $tmp1194 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1195 = $tmp976.value;
int64_t $tmp1196 = $tmp1194.value;
bool $tmp1197 = $tmp1195 == $tmp1196;
frost$core$Bit $tmp1198 = (frost$core$Bit) {$tmp1197};
bool $tmp1199 = $tmp1198.value;
if ($tmp1199) goto block95; else goto block96;
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1200 = (frost$core$Int) {1075163451632748960u};
return $tmp1200;
block96:;
frost$core$Int $tmp1201 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1202 = $tmp976.value;
int64_t $tmp1203 = $tmp1201.value;
bool $tmp1204 = $tmp1202 == $tmp1203;
frost$core$Bit $tmp1205 = (frost$core$Bit) {$tmp1204};
bool $tmp1206 = $tmp1205.value;
if ($tmp1206) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1207 = (frost$core$Int) {13214438107868165613u};
return $tmp1207;
block99:;
frost$core$Int $tmp1208 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1209 = $tmp976.value;
int64_t $tmp1210 = $tmp1208.value;
bool $tmp1211 = $tmp1209 == $tmp1210;
frost$core$Bit $tmp1212 = (frost$core$Bit) {$tmp1211};
bool $tmp1213 = $tmp1212.value;
if ($tmp1213) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1214 = (frost$core$Int) {6906968690394030650u};
return $tmp1214;
block102:;
frost$core$Int $tmp1215 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1216 = $tmp976.value;
int64_t $tmp1217 = $tmp1215.value;
bool $tmp1218 = $tmp1216 == $tmp1217;
frost$core$Bit $tmp1219 = (frost$core$Bit) {$tmp1218};
bool $tmp1220 = $tmp1219.value;
if ($tmp1220) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1221 = (frost$core$Int) {599499272919895687u};
return $tmp1221;
block105:;
frost$core$Int $tmp1222 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1223 = $tmp976.value;
int64_t $tmp1224 = $tmp1222.value;
bool $tmp1225 = $tmp1223 == $tmp1224;
frost$core$Bit $tmp1226 = (frost$core$Bit) {$tmp1225};
bool $tmp1227 = $tmp1226.value;
if ($tmp1227) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1228 = (frost$core$Int) {12738773929155312340u};
return $tmp1228;
block108:;
frost$core$Int $tmp1229 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1230 = $tmp976.value;
int64_t $tmp1231 = $tmp1229.value;
bool $tmp1232 = $tmp1230 == $tmp1231;
frost$core$Bit $tmp1233 = (frost$core$Bit) {$tmp1232};
bool $tmp1234 = $tmp1233.value;
if ($tmp1234) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1235 = (frost$core$Int) {6431304511681177377u};
return $tmp1235;
block111:;
frost$core$Int $tmp1236 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1237 = $tmp976.value;
int64_t $tmp1238 = $tmp1236.value;
bool $tmp1239 = $tmp1237 == $tmp1238;
frost$core$Bit $tmp1240 = (frost$core$Bit) {$tmp1239};
bool $tmp1241 = $tmp1240.value;
if ($tmp1241) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1242 = (frost$core$Int) {123835094207042414u};
return $tmp1242;
block114:;
frost$core$Int $tmp1243 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Binary.frost:17:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1244 = $tmp976.value;
int64_t $tmp1245 = $tmp1243.value;
bool $tmp1246 = $tmp1244 == $tmp1245;
frost$core$Bit $tmp1247 = (frost$core$Bit) {$tmp1246};
bool $tmp1248 = $tmp1247.value;
if ($tmp1248) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1249 = (frost$core$Int) {12263109750442459067u};
return $tmp1249;
block117:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Binary.frost:17
frost$core$Int $tmp1250 = (frost$core$Int) {17u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1251, $tmp1250);
abort(); // unreachable
block1:;
goto block119;
block119:;

}

