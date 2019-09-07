#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Int org$frostlang$frostc$parser$Token$Kind$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = org$frostlang$frostc$parser$Token$Kind$get_hash$R$frost$core$Int(((org$frostlang$frostc$parser$Token$Kind$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit org$frostlang$frostc$parser$Token$Kind$$EQ$org$frostlang$frostc$parser$Token$Kind$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$parser$Token$Kind$$EQ$org$frostlang$frostc$parser$Token$Kind$R$frost$core$Bit(((org$frostlang$frostc$parser$Token$Kind$wrapper*) p0)->value, ((org$frostlang$frostc$parser$Token$Kind$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$parser$Token$Kind$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$frostc$parser$Token$Kind$get_asString$R$frost$core$String(((org$frostlang$frostc$parser$Token$Kind$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$parser$Token$Kind$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$parser$Token$Kind$cleanup(((org$frostlang$frostc$parser$Token$Kind$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$parser$Token$Kind$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { org$frostlang$frostc$parser$Token$Kind$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$parser$Token$Kind$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$parser$Token$Kind$_frost$collections$HashKey, { org$frostlang$frostc$parser$Token$Kind$$EQ$org$frostlang$frostc$parser$Token$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$parser$Token$Kind$class_type org$frostlang$frostc$parser$Token$Kind$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$parser$Token$Kind$_frost$core$Equatable, { org$frostlang$frostc$parser$Token$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$parser$Token$Kind$cleanup$shim, org$frostlang$frostc$parser$Token$Kind$$EQ$org$frostlang$frostc$parser$Token$Kind$R$frost$core$Bit$shim, org$frostlang$frostc$parser$Token$Kind$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$frostc$parser$Token$Kind$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { org$frostlang$frostc$parser$Token$Kind$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$parser$Token$Kind$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$parser$Token$Kind$wrapper_frost$collections$HashKey, { org$frostlang$frostc$parser$Token$Kind$$EQ$org$frostlang$frostc$parser$Token$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$parser$Token$Kind$wrapperclass_type org$frostlang$frostc$parser$Token$Kind$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$parser$Token$Kind$wrapper_frost$core$Equatable, { org$frostlang$frostc$parser$Token$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 38, -5226343182384548052, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 38, -5226343182384548052, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x6f\x6b\x65\x6e\x2e\x66\x72\x6f\x73\x74", 11, -2945524549076434626, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4f\x46", 3, -2780652702254013407, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4f\x46", 3, -2780652702254013407, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x52\x49\x47\x48\x54", 10, -854006556755980733, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x52\x49\x47\x48\x54", 10, -854006556755980733, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x47\x45\x58", 5, -1832243356126634376, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x47\x45\x58", 5, -1832243356126634376, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x45\x43\x49\x4d\x41\x4c", 7, -4421263928146067476, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x45\x43\x49\x4d\x41\x4c", 7, -4421263928146067476, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x4e\x41\x52\x59", 6, 3180398050091593148, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x4e\x41\x52\x59", 6, 3180398050091593148, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x45\x58", 3, 5314357622289828202, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x45\x58", 3, 5314357622289828202, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x41\x4c", 4, -8527112705117131683, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x41\x4c", 4, -8527112705117131683, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x49\x4e\x47\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, 8524030245501661566, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x49\x4e\x47\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, 8524030245501661566, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x55\x42\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, 5858367662667776935, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x55\x42\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, 5858367662667776935, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x49\x4e\x45\x5f\x43\x4f\x4d\x4d\x45\x4e\x54", 12, -4985822287803552931, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x49\x4e\x45\x5f\x43\x4f\x4d\x4d\x45\x4e\x54", 12, -4985822287803552931, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x4c\x4f\x43\x4b\x5f\x43\x4f\x4d\x4d\x45\x4e\x54\x5f\x53\x54\x41\x52\x54", 19, -1035988180762846889, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x4c\x4f\x43\x4b\x5f\x43\x4f\x4d\x4d\x45\x4e\x54\x5f\x53\x54\x41\x52\x54", 19, -1035988180762846889, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x4c\x4f\x43\x4b\x5f\x43\x4f\x4d\x4d\x45\x4e\x54\x5f\x45\x4e\x44", 17, -3169533535160638894, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x4c\x4f\x43\x4b\x5f\x43\x4f\x4d\x4d\x45\x4e\x54\x5f\x45\x4e\x44", 17, -3169533535160638894, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x43\x5f\x43\x4f\x4d\x4d\x45\x4e\x54", 11, -854743268890280045, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x43\x5f\x43\x4f\x4d\x4d\x45\x4e\x54", 11, -854743268890280045, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x49\x54\x45\x53\x50\x41\x43\x45", 10, -3276662447725882720, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x49\x54\x45\x53\x50\x41\x43\x45", 10, -3276662447725882720, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x4e\x4f\x54\x41\x54\x49\x4f\x4e", 10, -6766455421495095064, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x4e\x4f\x54\x41\x54\x49\x4f\x4e", 10, -6766455421495095064, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x41\x43\x4b\x41\x47\x45", 7, 4214258907844905339, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x41\x43\x4b\x41\x47\x45", 7, 4214258907844905339, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x53\x45\x53", 4, -7962572020183094811, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x53\x45\x53", 4, -7962572020183094811, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53", 2, 650898822127487629, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53", 2, 650898822127487629, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4c\x41\x53\x53", 5, 8927326264370171455, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4c\x41\x53\x53", 5, 8927326264370171455, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x45\x52\x46\x41\x43\x45", 9, 6497765481944569648, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x45\x52\x46\x41\x43\x45", 9, 6497765481944569648, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x48\x4f\x49\x43\x45", 6, 422481043336243254, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x48\x4f\x49\x43\x45", 6, 422481043336243254, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x55\x4e\x43\x54\x49\x4f\x4e", 8, 5163167664221876233, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x55\x4e\x43\x54\x49\x4f\x4e", 8, 5163167664221876233, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44", 6, 7192733565866671856, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44", 6, 7192733565866671856, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x49\x54", 4, 775939446952026579, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x49\x54", 4, 775939446952026579, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x52", 3, 8940586553584031198, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x52", 3, 8940586553584031198, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x45\x46", 3, -2290544294605466196, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x45\x46", 3, -2290544294605466196, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x52\x4f\x50\x45\x52\x54\x59", 8, 6193835437963882760, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x52\x4f\x50\x45\x52\x54\x59", 8, 6193835437963882760, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x53\x54\x41\x4e\x54", 8, 7784245047744762789, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x53\x54\x41\x4e\x54", 8, 7784245047744762789, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x54\x55\x52\x4e", 6, 3682372857926802591, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x54\x55\x52\x4e", 6, 3682372857926802591, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x52\x45\x41\x4b", 5, 1390767274722343896, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x52\x45\x41\x4b", 5, 1390767274722343896, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x54\x49\x4e\x55\x45", 8, -1218937278262061340, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x54\x49\x4e\x55\x45", 8, -1218937278262061340, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f", 2, 648018101662142484, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f", 2, 648018101662142484, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x49\x4c\x45", 5, -6746519810156181554, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x49\x4c\x45", 5, -6746519810156181554, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x4f\x52", 3, -925357672022179216, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x4f\x52", 3, -925357672022179216, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x59", 2, 653913683011474516, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x59", 2, 653913683011474516, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e", 2, 658677866895566654, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e", 2, 658677866895566654, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4f\x4f\x50", 4, 7310791030102272107, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4f\x4f\x50", 4, 7310791030102272107, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x46", 2, 658669070802540966, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x46", 2, 658669070802540966, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4c\x53\x45", 4, -4659697924760971984, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4c\x53\x45", 4, -4659697924760971984, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x41\x54\x43\x48", 5, -7462029077894567594, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x41\x54\x43\x48", 5, -7462029077894567594, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x45\x4e", 4, -2585065074016245767, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x45\x4e", 4, -2585065074016245767, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x54\x48\x45\x52\x57\x49\x53\x45", 9, 4281552231092500061, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x54\x48\x45\x52\x57\x49\x53\x45", 9, 4281552231092500061, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x55\x45", 4, 8092504513751138981, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x55\x45", 4, 8092504513751138981, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x41\x4c\x53\x45", 5, 710666245702197400, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x41\x4c\x53\x45", 5, 710666245702197400, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 8049205518224136996, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 8049205518224136996, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x53\x45\x52\x54", 6, -2770764151085366373, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x53\x45\x52\x54", 6, -2770764151085366373, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x4e\x52\x45\x41\x43\x48\x41\x42\x4c\x45", 11, -1266078107571979791, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x4e\x52\x45\x41\x43\x48\x41\x42\x4c\x45", 11, -1266078107571979791, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x59", 3, 7829227687881249998, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x59", 3, 7829227687881249998, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x41\x49\x4c", 4, 3215402482899151853, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x41\x49\x4c", 4, 3215402482899151853, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x45\x4c\x46", 4, 4758868999504809847, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x45\x4c\x46", 4, 4758868999504809847, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x50\x45\x52", 5, 5795199294677836756, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x50\x45\x52", 5, 5795199294677836756, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x41\x5a\x59", 4, -7529778104896043217, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x41\x5a\x59", 4, -7529778104896043217, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x4f\x44\x55\x4c\x45", 6, 72160643508752349, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x4f\x44\x55\x4c\x45", 6, 72160643508752349, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x46\x49\x45\x52", 10, 6705406146079849566, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x46\x49\x45\x52", 10, 6705406146079849566, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x4f\x54", 3, 3960658697195819050, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x4f\x54", 3, 3960658697195819050, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4e\x4f\x54", 10, 7590891947359604737, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4e\x4f\x54", 10, 7590891947359604737, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x44\x44", 3, -424742331256529164, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x44\x44", 3, -424742331256529164, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x42", 3, -7490157870346156267, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x42", 3, -7490157870346156267, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x55\x4c", 3, 2187805048830972289, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x55\x4c", 3, 2187805048830972289, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x49\x56", 3, -2286568460558612120, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x49\x56", 3, -2286568460558612120, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x44\x49\x56", 6, 236947128255071689, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x44\x49\x56", 6, 236947128255071689, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x4d", 3, -6890851465363405241, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x4d", 3, -6890851465363405241, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x4f\x57", 3, -8271037625575719083, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x4f\x57", 3, -8271037625575719083, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x51", 2, 647211060127224835, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x51", 2, 647211060127224835, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x45\x51", 3, 3951089647497390967, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x45\x51", 3, 3951089647497390967, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x54\x59", 8, -5582706505953877701, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x54\x59", 8, -5582706505953877701, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x49\x44\x45\x4e\x54\x49\x54\x59", 9, 6439203883259295967, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x49\x44\x45\x4e\x54\x49\x54\x59", 9, 6439203883259295967, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x54", 2, 655682797220887565, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x54", 2, 655682797220887565, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x54", 2, 649118712801792470, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x54", 2, 649118712801792470, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x54\x45\x51", 4, 5720195730142804299, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x54\x45\x51", 4, 5720195730142804299, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x54\x45\x51", 4, -194475579662543288, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x54\x45\x51", 4, -194475579662543288, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x44", 3, -430490578047680922, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x44", 3, -430490578047680922, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x41\x4e\x44", 10, -508925442021829239, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x41\x4e\x44", 10, -508925442021829239, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x52", 2, 656738328383780900, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x52", 2, 656738328383780900, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4f\x52", 9, 4106761120429910253, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4f\x52", 9, 4106761120429910253, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x58\x4f\x52", 3, -3262591736092274978, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x58\x4f\x52", 3, -3262591736092274978, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x58\x4f\x52", 10, -6137086871326903227, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x58\x4f\x52", 10, -6137086871326903227, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x4c\x45\x46\x54", 9, -2576167377767570706, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x4c\x45\x46\x54", 9, -2576167377767570706, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x53\x49\x47\x4e\x4d\x45\x4e\x54", 10, -4802925920175815696, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x53\x49\x47\x4e\x4d\x45\x4e\x54", 10, -4802925920175815696, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x44\x44\x45\x51", 5, 8976745075867355670, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x44\x44\x45\x51", 5, 8976745075867355670, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x42\x45\x51", 5, -1294301046623021677, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x42\x45\x51", 5, -1294301046623021677, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x55\x4c\x45\x51", 5, -6678819885994840569, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x55\x4c\x45\x51", 5, -6678819885994840569, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x49\x56\x45\x51", 5, -4675304909104048750, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x49\x56\x45\x51", 5, -4675304909104048750, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x4d\x45\x51", 5, 1790334097051036789, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x4d\x45\x51", 5, 1790334097051036789, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x44\x49\x56\x45\x51", 8, 525286096538892175, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x44\x49\x56\x45\x51", 8, 525286096538892175, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x4f\x57\x45\x51", 5, 7905706922760248531, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x4f\x57\x45\x51", 5, 7905706922760248531, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x52\x45\x51", 4, -362280561266835226, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x52\x45\x51", 4, -362280561266835226, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4f\x52\x45\x51", 11, 8723670896618697899, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4f\x52\x45\x51", 11, 8723670896618697899, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x44\x45\x51", 5, 8604071991207326456, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x44\x45\x51", 5, 8604071991207326456, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x41\x4e\x44\x45\x51", 12, -4110952405141345457, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x41\x4e\x44\x45\x51", 12, -4110952405141345457, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x58\x4f\x52\x45\x51", 5, 4441309431091541136, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x58\x4f\x52\x45\x51", 5, 4441309431091541136, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x58\x4f\x52\x45\x51", 12, -4045050825354945117, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x58\x4f\x52\x45\x51", 12, -4045050825354945117, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x4c\x45\x46\x54\x45\x51", 11, 8065439914669260352, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x4c\x45\x46\x54\x45\x51", 11, 8065439914669260352, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x52\x49\x47\x48\x54\x45\x51", 12, 5231704650367263801, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x52\x49\x47\x48\x54\x45\x51", 12, 5231704650367263801, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x41\x53\x54", 4, -3929828708733151922, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x41\x53\x54", 4, -3929828708733151922, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53", 6, 5021467569829040391, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53", 6, 5021467569829040391, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x4d\x45\x54\x48\x4f\x44", 13, 2812181468845568921, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x4d\x45\x54\x48\x4f\x44", 13, 2812181468845568921, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 16, -531539132585377116, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 16, -531539132585377116, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x4d\x45\x54\x48\x4f\x44\x5f\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 23, 1977457359173694958, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x4d\x45\x54\x48\x4f\x44\x5f\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 23, 1977457359173694958, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x51\x55\x45\x53\x54\x49\x4f\x4e", 8, -1653254887467171387, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x51\x55\x45\x53\x54\x49\x4f\x4e", 8, -1653254887467171387, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4c\x4f\x4e", 5, -609265884448102340, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4c\x4f\x4e", 5, -609265884448102340, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4c\x4c\x49\x50\x53\x49\x53", 8, 3616480144494687938, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4c\x4c\x49\x50\x53\x49\x53", 8, 3616480144494687938, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x54\x44\x4f\x54", 6, 5185479590340089303, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x54\x44\x4f\x54", 6, 5185479590340089303, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x54", 3, -2284688295674749760, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x54", 3, -2284688295674749760, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x45", 6, 718761851555915894, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x45", 6, 718761851555915894, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x45", 6, 2789542229241279848, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x45", 6, 2789542229241279848, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, -5015735881644584683, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, -5015735881644584683, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 8505961967228289923, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 8505961967228289923, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x50\x41\x52\x45\x4e", 6, 3876691553076048869, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x50\x41\x52\x45\x4e", 6, 3876691553076048869, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x50\x41\x52\x45\x4e", 6, -3536911959274103509, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x50\x41\x52\x45\x4e", 6, -3536911959274103509, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4d\x4d\x41", 5, -1378825067955875400, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4d\x4d\x41", 5, -1378825067955875400, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x41\x43\x4b\x53\x4c\x41\x53\x48", 9, -3293626981209672713, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x41\x43\x4b\x53\x4c\x41\x53\x48", 9, -3293626981209672713, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x56\x41\x4c\x49\x44", 7, 4384553811495809008, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x56\x41\x4c\x49\x44", 7, 4384553811495809008, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x6f\x6b\x65\x6e\x2e\x66\x72\x6f\x73\x74", 11, -2945524549076434626, NULL };

void org$frostlang$frostc$parser$Token$Kind$cleanup(org$frostlang$frostc$parser$Token$Kind param0) {

return;

}
org$frostlang$frostc$parser$Token$Kind org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int(frost$core$Int param0) {

org$frostlang$frostc$parser$Token$Kind local0;
frost$core$Int* _1;
org$frostlang$frostc$parser$Token$Kind _3;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1 = &(&local0)->$rawValue;
*_1 = param0;
_3 = *(&local0);
return _3;

}
frost$core$Bit org$frostlang$frostc$parser$Token$Kind$$EQ$org$frostlang$frostc$parser$Token$Kind$R$frost$core$Bit(org$frostlang$frostc$parser$Token$Kind param0, org$frostlang$frostc$parser$Token$Kind param1) {

frost$core$Int _1;
frost$core$Int _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
frost$core$Bit _10;
frost$core$Bit _13;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1 = param0.$rawValue;
_2 = param1.$rawValue;
_3 = _1.value;
_4 = _2.value;
_5 = _3 != _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_10 = (frost$core$Bit) {false};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_13 = (frost$core$Bit) {true};
return _13;

}
frost$core$Int org$frostlang$frostc$parser$Token$Kind$get_hash$R$frost$core$Int(org$frostlang$frostc$parser$Token$Kind param0) {

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
frost$core$Int _522;
int64_t _525;
int64_t _526;
bool _527;
frost$core$Bit _528;
bool _530;
frost$core$Int _533;
frost$core$Int _535;
int64_t _538;
int64_t _539;
bool _540;
frost$core$Bit _541;
bool _543;
frost$core$Int _546;
frost$core$Int _548;
int64_t _551;
int64_t _552;
bool _553;
frost$core$Bit _554;
bool _556;
frost$core$Int _559;
frost$core$Int _561;
int64_t _564;
int64_t _565;
bool _566;
frost$core$Bit _567;
bool _569;
frost$core$Int _572;
frost$core$Int _574;
int64_t _577;
int64_t _578;
bool _579;
frost$core$Bit _580;
bool _582;
frost$core$Int _585;
frost$core$Int _587;
int64_t _590;
int64_t _591;
bool _592;
frost$core$Bit _593;
bool _595;
frost$core$Int _598;
frost$core$Int _600;
int64_t _603;
int64_t _604;
bool _605;
frost$core$Bit _606;
bool _608;
frost$core$Int _611;
frost$core$Int _613;
int64_t _616;
int64_t _617;
bool _618;
frost$core$Bit _619;
bool _621;
frost$core$Int _624;
frost$core$Int _626;
int64_t _629;
int64_t _630;
bool _631;
frost$core$Bit _632;
bool _634;
frost$core$Int _637;
frost$core$Int _639;
int64_t _642;
int64_t _643;
bool _644;
frost$core$Bit _645;
bool _647;
frost$core$Int _650;
frost$core$Int _652;
int64_t _655;
int64_t _656;
bool _657;
frost$core$Bit _658;
bool _660;
frost$core$Int _663;
frost$core$Int _665;
int64_t _668;
int64_t _669;
bool _670;
frost$core$Bit _671;
bool _673;
frost$core$Int _676;
frost$core$Int _678;
int64_t _681;
int64_t _682;
bool _683;
frost$core$Bit _684;
bool _686;
frost$core$Int _689;
frost$core$Int _691;
int64_t _694;
int64_t _695;
bool _696;
frost$core$Bit _697;
bool _699;
frost$core$Int _702;
frost$core$Int _704;
int64_t _707;
int64_t _708;
bool _709;
frost$core$Bit _710;
bool _712;
frost$core$Int _715;
frost$core$Int _717;
int64_t _720;
int64_t _721;
bool _722;
frost$core$Bit _723;
bool _725;
frost$core$Int _728;
frost$core$Int _730;
int64_t _733;
int64_t _734;
bool _735;
frost$core$Bit _736;
bool _738;
frost$core$Int _741;
frost$core$Int _743;
int64_t _746;
int64_t _747;
bool _748;
frost$core$Bit _749;
bool _751;
frost$core$Int _754;
frost$core$Int _756;
int64_t _759;
int64_t _760;
bool _761;
frost$core$Bit _762;
bool _764;
frost$core$Int _767;
frost$core$Int _769;
int64_t _772;
int64_t _773;
bool _774;
frost$core$Bit _775;
bool _777;
frost$core$Int _780;
frost$core$Int _782;
int64_t _785;
int64_t _786;
bool _787;
frost$core$Bit _788;
bool _790;
frost$core$Int _793;
frost$core$Int _795;
int64_t _798;
int64_t _799;
bool _800;
frost$core$Bit _801;
bool _803;
frost$core$Int _806;
frost$core$Int _808;
int64_t _811;
int64_t _812;
bool _813;
frost$core$Bit _814;
bool _816;
frost$core$Int _819;
frost$core$Int _821;
int64_t _824;
int64_t _825;
bool _826;
frost$core$Bit _827;
bool _829;
frost$core$Int _832;
frost$core$Int _834;
int64_t _837;
int64_t _838;
bool _839;
frost$core$Bit _840;
bool _842;
frost$core$Int _845;
frost$core$Int _847;
int64_t _850;
int64_t _851;
bool _852;
frost$core$Bit _853;
bool _855;
frost$core$Int _858;
frost$core$Int _860;
int64_t _863;
int64_t _864;
bool _865;
frost$core$Bit _866;
bool _868;
frost$core$Int _871;
frost$core$Int _873;
int64_t _876;
int64_t _877;
bool _878;
frost$core$Bit _879;
bool _881;
frost$core$Int _884;
frost$core$Int _886;
int64_t _889;
int64_t _890;
bool _891;
frost$core$Bit _892;
bool _894;
frost$core$Int _897;
frost$core$Int _899;
int64_t _902;
int64_t _903;
bool _904;
frost$core$Bit _905;
bool _907;
frost$core$Int _910;
frost$core$Int _912;
int64_t _915;
int64_t _916;
bool _917;
frost$core$Bit _918;
bool _920;
frost$core$Int _923;
frost$core$Int _925;
int64_t _928;
int64_t _929;
bool _930;
frost$core$Bit _931;
bool _933;
frost$core$Int _936;
frost$core$Int _938;
int64_t _941;
int64_t _942;
bool _943;
frost$core$Bit _944;
bool _946;
frost$core$Int _949;
frost$core$Int _951;
int64_t _954;
int64_t _955;
bool _956;
frost$core$Bit _957;
bool _959;
frost$core$Int _962;
frost$core$Int _964;
int64_t _967;
int64_t _968;
bool _969;
frost$core$Bit _970;
bool _972;
frost$core$Int _975;
frost$core$Int _977;
int64_t _980;
int64_t _981;
bool _982;
frost$core$Bit _983;
bool _985;
frost$core$Int _988;
frost$core$Int _990;
int64_t _993;
int64_t _994;
bool _995;
frost$core$Bit _996;
bool _998;
frost$core$Int _1001;
frost$core$Int _1003;
int64_t _1006;
int64_t _1007;
bool _1008;
frost$core$Bit _1009;
bool _1011;
frost$core$Int _1014;
frost$core$Int _1016;
int64_t _1019;
int64_t _1020;
bool _1021;
frost$core$Bit _1022;
bool _1024;
frost$core$Int _1027;
frost$core$Int _1029;
int64_t _1032;
int64_t _1033;
bool _1034;
frost$core$Bit _1035;
bool _1037;
frost$core$Int _1040;
frost$core$Int _1042;
int64_t _1045;
int64_t _1046;
bool _1047;
frost$core$Bit _1048;
bool _1050;
frost$core$Int _1053;
frost$core$Int _1055;
int64_t _1058;
int64_t _1059;
bool _1060;
frost$core$Bit _1061;
bool _1063;
frost$core$Int _1066;
frost$core$Int _1068;
int64_t _1071;
int64_t _1072;
bool _1073;
frost$core$Bit _1074;
bool _1076;
frost$core$Int _1079;
frost$core$Int _1081;
int64_t _1084;
int64_t _1085;
bool _1086;
frost$core$Bit _1087;
bool _1089;
frost$core$Int _1092;
frost$core$Int _1094;
int64_t _1097;
int64_t _1098;
bool _1099;
frost$core$Bit _1100;
bool _1102;
frost$core$Int _1105;
frost$core$Int _1107;
int64_t _1110;
int64_t _1111;
bool _1112;
frost$core$Bit _1113;
bool _1115;
frost$core$Int _1118;
frost$core$Int _1120;
int64_t _1123;
int64_t _1124;
bool _1125;
frost$core$Bit _1126;
bool _1128;
frost$core$Int _1131;
frost$core$Int _1133;
int64_t _1136;
int64_t _1137;
bool _1138;
frost$core$Bit _1139;
bool _1141;
frost$core$Int _1144;
frost$core$Int _1146;
int64_t _1149;
int64_t _1150;
bool _1151;
frost$core$Bit _1152;
bool _1154;
frost$core$Int _1157;
frost$core$Int _1159;
int64_t _1162;
int64_t _1163;
bool _1164;
frost$core$Bit _1165;
bool _1167;
frost$core$Int _1170;
frost$core$Int _1172;
int64_t _1175;
int64_t _1176;
bool _1177;
frost$core$Bit _1178;
bool _1180;
frost$core$Int _1183;
frost$core$Int _1185;
int64_t _1188;
int64_t _1189;
bool _1190;
frost$core$Bit _1191;
bool _1193;
frost$core$Int _1196;
frost$core$Int _1198;
int64_t _1201;
int64_t _1202;
bool _1203;
frost$core$Bit _1204;
bool _1206;
frost$core$Int _1209;
frost$core$Int _1211;
int64_t _1214;
int64_t _1215;
bool _1216;
frost$core$Bit _1217;
bool _1219;
frost$core$Int _1222;
frost$core$Int _1224;
int64_t _1227;
int64_t _1228;
bool _1229;
frost$core$Bit _1230;
bool _1232;
frost$core$Int _1235;
frost$core$Int _1237;
int64_t _1240;
int64_t _1241;
bool _1242;
frost$core$Bit _1243;
bool _1245;
frost$core$Int _1248;
frost$core$Int _1250;
int64_t _1253;
int64_t _1254;
bool _1255;
frost$core$Bit _1256;
bool _1258;
frost$core$Int _1261;
frost$core$Int _1263;
int64_t _1266;
int64_t _1267;
bool _1268;
frost$core$Bit _1269;
bool _1271;
frost$core$Int _1274;
frost$core$Int _1276;
int64_t _1279;
int64_t _1280;
bool _1281;
frost$core$Bit _1282;
bool _1284;
frost$core$Int _1287;
frost$core$Int _1289;
int64_t _1292;
int64_t _1293;
bool _1294;
frost$core$Bit _1295;
bool _1297;
frost$core$Int _1300;
frost$core$Int _1302;
int64_t _1305;
int64_t _1306;
bool _1307;
frost$core$Bit _1308;
bool _1310;
frost$core$Int _1313;
frost$core$Int _1315;
int64_t _1318;
int64_t _1319;
bool _1320;
frost$core$Bit _1321;
bool _1323;
frost$core$Int _1326;
frost$core$Int _1328;
int64_t _1331;
int64_t _1332;
bool _1333;
frost$core$Bit _1334;
bool _1336;
frost$core$Int _1339;
frost$core$Int _1341;
int64_t _1344;
int64_t _1345;
bool _1346;
frost$core$Bit _1347;
bool _1349;
frost$core$Int _1352;
frost$core$Int _1354;
int64_t _1357;
int64_t _1358;
bool _1359;
frost$core$Bit _1360;
bool _1362;
frost$core$Int _1365;
frost$core$Int _1367;
int64_t _1370;
int64_t _1371;
bool _1372;
frost$core$Bit _1373;
bool _1375;
frost$core$Int _1378;
frost$core$Int _1380;
int64_t _1383;
int64_t _1384;
bool _1385;
frost$core$Bit _1386;
bool _1388;
frost$core$Int _1391;
frost$core$Int _1393;
int64_t _1396;
int64_t _1397;
bool _1398;
frost$core$Bit _1399;
bool _1401;
frost$core$Int _1404;
frost$core$Int _1406;
int64_t _1409;
int64_t _1410;
bool _1411;
frost$core$Bit _1412;
bool _1414;
frost$core$Int _1417;
frost$core$Int _1419;
int64_t _1422;
int64_t _1423;
bool _1424;
frost$core$Bit _1425;
bool _1427;
frost$core$Int _1430;
frost$core$Int _1432;
int64_t _1435;
int64_t _1436;
bool _1437;
frost$core$Bit _1438;
bool _1440;
frost$core$Int _1443;
frost$core$Int _1445;
int64_t _1448;
int64_t _1449;
bool _1450;
frost$core$Bit _1451;
bool _1453;
frost$core$Int _1456;
frost$core$Int _1458;
int64_t _1461;
int64_t _1462;
bool _1463;
frost$core$Bit _1464;
bool _1466;
frost$core$Int _1469;
frost$core$Int _1472;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1 = param0.$rawValue;
_2 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_13 = (frost$core$Int) {13220400891325003564u};
return _13;
block3:;
_15 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_18 = _1.value;
_19 = _15.value;
_20 = _18 == _19;
_21 = (frost$core$Bit) {_20};
_23 = _21.value;
if (_23) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_26 = (frost$core$Int) {7994057708940455512u};
return _26;
block6:;
_28 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_31 = _1.value;
_32 = _28.value;
_33 = _31 == _32;
_34 = (frost$core$Bit) {_33};
_36 = _34.value;
if (_36) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_39 = (frost$core$Int) {2767714526555907460u};
return _39;
block9:;
_41 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_44 = _1.value;
_45 = _41.value;
_46 = _44 == _45;
_47 = (frost$core$Bit) {_46};
_49 = _47.value;
if (_49) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_52 = (frost$core$Int) {15988115417880911024u};
return _52;
block12:;
_54 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_57 = _1.value;
_58 = _54.value;
_59 = _57 == _58;
_60 = (frost$core$Bit) {_59};
_62 = _60.value;
if (_62) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_65 = (frost$core$Int) {10761772235496362972u};
return _65;
block15:;
_67 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_70 = _1.value;
_71 = _67.value;
_72 = _70 == _71;
_73 = (frost$core$Bit) {_72};
_75 = _73.value;
if (_75) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_78 = (frost$core$Int) {5535429053111814920u};
return _78;
block18:;
_80 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_83 = _1.value;
_84 = _80.value;
_85 = _83 == _84;
_86 = (frost$core$Bit) {_85};
_88 = _86.value;
if (_88) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_91 = (frost$core$Int) {309085870727266868u};
return _91;
block21:;
_93 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_96 = _1.value;
_97 = _93.value;
_98 = _96 == _97;
_99 = (frost$core$Bit) {_98};
_101 = _99.value;
if (_101) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_104 = (frost$core$Int) {13529486762052270432u};
return _104;
block24:;
_106 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_109 = _1.value;
_110 = _106.value;
_111 = _109 == _110;
_112 = (frost$core$Bit) {_111};
_114 = _112.value;
if (_114) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_117 = (frost$core$Int) {8303143579667722380u};
return _117;
block27:;
_119 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_122 = _1.value;
_123 = _119.value;
_124 = _122 == _123;
_125 = (frost$core$Bit) {_124};
_127 = _125.value;
if (_127) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_130 = (frost$core$Int) {3076800397283174328u};
return _130;
block30:;
_132 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_135 = _1.value;
_136 = _132.value;
_137 = _135 == _136;
_138 = (frost$core$Bit) {_137};
_140 = _138.value;
if (_140) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_143 = (frost$core$Int) {16297201288608177892u};
return _143;
block33:;
_145 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_148 = _1.value;
_149 = _145.value;
_150 = _148 == _149;
_151 = (frost$core$Bit) {_150};
_153 = _151.value;
if (_153) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_156 = (frost$core$Int) {11070858106223629840u};
return _156;
block36:;
_158 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_161 = _1.value;
_162 = _158.value;
_163 = _161 == _162;
_164 = (frost$core$Bit) {_163};
_166 = _164.value;
if (_166) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_169 = (frost$core$Int) {5844514923839081788u};
return _169;
block39:;
_171 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_174 = _1.value;
_175 = _171.value;
_176 = _174 == _175;
_177 = (frost$core$Bit) {_176};
_179 = _177.value;
if (_179) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_182 = (frost$core$Int) {618171741454533736u};
return _182;
block42:;
_184 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_187 = _1.value;
_188 = _184.value;
_189 = _187 == _188;
_190 = (frost$core$Bit) {_189};
_192 = _190.value;
if (_192) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_195 = (frost$core$Int) {13838572632779537300u};
return _195;
block45:;
_197 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_200 = _1.value;
_201 = _197.value;
_202 = _200 == _201;
_203 = (frost$core$Bit) {_202};
_205 = _203.value;
if (_205) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_208 = (frost$core$Int) {8612229450394989248u};
return _208;
block48:;
_210 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_213 = _1.value;
_214 = _210.value;
_215 = _213 == _214;
_216 = (frost$core$Bit) {_215};
_218 = _216.value;
if (_218) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_221 = (frost$core$Int) {3385886268010441196u};
return _221;
block51:;
_223 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_226 = _1.value;
_227 = _223.value;
_228 = _226 == _227;
_229 = (frost$core$Bit) {_228};
_231 = _229.value;
if (_231) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_234 = (frost$core$Int) {16606287159335444760u};
return _234;
block54:;
_236 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_239 = _1.value;
_240 = _236.value;
_241 = _239 == _240;
_242 = (frost$core$Bit) {_241};
_244 = _242.value;
if (_244) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_247 = (frost$core$Int) {11379943976950896708u};
return _247;
block57:;
_249 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_252 = _1.value;
_253 = _249.value;
_254 = _252 == _253;
_255 = (frost$core$Bit) {_254};
_257 = _255.value;
if (_257) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_260 = (frost$core$Int) {6153600794566348656u};
return _260;
block60:;
_262 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_265 = _1.value;
_266 = _262.value;
_267 = _265 == _266;
_268 = (frost$core$Bit) {_267};
_270 = _268.value;
if (_270) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_273 = (frost$core$Int) {927257612181800604u};
return _273;
block63:;
_275 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_278 = _1.value;
_279 = _275.value;
_280 = _278 == _279;
_281 = (frost$core$Bit) {_280};
_283 = _281.value;
if (_283) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_286 = (frost$core$Int) {14147658503506804168u};
return _286;
block66:;
_288 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_291 = _1.value;
_292 = _288.value;
_293 = _291 == _292;
_294 = (frost$core$Bit) {_293};
_296 = _294.value;
if (_296) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_299 = (frost$core$Int) {8921315321122256116u};
return _299;
block69:;
_301 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_304 = _1.value;
_305 = _301.value;
_306 = _304 == _305;
_307 = (frost$core$Bit) {_306};
_309 = _307.value;
if (_309) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_312 = (frost$core$Int) {3694972138737708064u};
return _312;
block72:;
_314 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_317 = _1.value;
_318 = _314.value;
_319 = _317 == _318;
_320 = (frost$core$Bit) {_319};
_322 = _320.value;
if (_322) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_325 = (frost$core$Int) {16915373030062711628u};
return _325;
block75:;
_327 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_330 = _1.value;
_331 = _327.value;
_332 = _330 == _331;
_333 = (frost$core$Bit) {_332};
_335 = _333.value;
if (_335) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_338 = (frost$core$Int) {11689029847678163576u};
return _338;
block78:;
_340 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_343 = _1.value;
_344 = _340.value;
_345 = _343 == _344;
_346 = (frost$core$Bit) {_345};
_348 = _346.value;
if (_348) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_351 = (frost$core$Int) {6462686665293615524u};
return _351;
block81:;
_353 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_356 = _1.value;
_357 = _353.value;
_358 = _356 == _357;
_359 = (frost$core$Bit) {_358};
_361 = _359.value;
if (_361) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_364 = (frost$core$Int) {1236343482909067472u};
return _364;
block84:;
_366 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_369 = _1.value;
_370 = _366.value;
_371 = _369 == _370;
_372 = (frost$core$Bit) {_371};
_374 = _372.value;
if (_374) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_377 = (frost$core$Int) {14456744374234071036u};
return _377;
block87:;
_379 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_382 = _1.value;
_383 = _379.value;
_384 = _382 == _383;
_385 = (frost$core$Bit) {_384};
_387 = _385.value;
if (_387) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_390 = (frost$core$Int) {9230401191849522984u};
return _390;
block90:;
_392 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_395 = _1.value;
_396 = _392.value;
_397 = _395 == _396;
_398 = (frost$core$Bit) {_397};
_400 = _398.value;
if (_400) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_403 = (frost$core$Int) {4004058009464974932u};
return _403;
block93:;
_405 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_408 = _1.value;
_409 = _405.value;
_410 = _408 == _409;
_411 = (frost$core$Bit) {_410};
_413 = _411.value;
if (_413) goto block95; else goto block96;
block95:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_416 = (frost$core$Int) {17224458900789978496u};
return _416;
block96:;
_418 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_421 = _1.value;
_422 = _418.value;
_423 = _421 == _422;
_424 = (frost$core$Bit) {_423};
_426 = _424.value;
if (_426) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_429 = (frost$core$Int) {11998115718405430444u};
return _429;
block99:;
_431 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_434 = _1.value;
_435 = _431.value;
_436 = _434 == _435;
_437 = (frost$core$Bit) {_436};
_439 = _437.value;
if (_439) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_442 = (frost$core$Int) {6771772536020882392u};
return _442;
block102:;
_444 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_447 = _1.value;
_448 = _444.value;
_449 = _447 == _448;
_450 = (frost$core$Bit) {_449};
_452 = _450.value;
if (_452) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_455 = (frost$core$Int) {1545429353636334340u};
return _455;
block105:;
_457 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_460 = _1.value;
_461 = _457.value;
_462 = _460 == _461;
_463 = (frost$core$Bit) {_462};
_465 = _463.value;
if (_465) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_468 = (frost$core$Int) {14765830244961337904u};
return _468;
block108:;
_470 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_473 = _1.value;
_474 = _470.value;
_475 = _473 == _474;
_476 = (frost$core$Bit) {_475};
_478 = _476.value;
if (_478) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_481 = (frost$core$Int) {9539487062576789852u};
return _481;
block111:;
_483 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_486 = _1.value;
_487 = _483.value;
_488 = _486 == _487;
_489 = (frost$core$Bit) {_488};
_491 = _489.value;
if (_491) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_494 = (frost$core$Int) {4313143880192241800u};
return _494;
block114:;
_496 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_499 = _1.value;
_500 = _496.value;
_501 = _499 == _500;
_502 = (frost$core$Bit) {_501};
_504 = _502.value;
if (_504) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_507 = (frost$core$Int) {17533544771517245364u};
return _507;
block117:;
_509 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_512 = _1.value;
_513 = _509.value;
_514 = _512 == _513;
_515 = (frost$core$Bit) {_514};
_517 = _515.value;
if (_517) goto block119; else goto block120;
block119:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_520 = (frost$core$Int) {12307201589132697312u};
return _520;
block120:;
_522 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_525 = _1.value;
_526 = _522.value;
_527 = _525 == _526;
_528 = (frost$core$Bit) {_527};
_530 = _528.value;
if (_530) goto block122; else goto block123;
block122:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_533 = (frost$core$Int) {7080858406748149260u};
return _533;
block123:;
_535 = (frost$core$Int) {41u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_538 = _1.value;
_539 = _535.value;
_540 = _538 == _539;
_541 = (frost$core$Bit) {_540};
_543 = _541.value;
if (_543) goto block125; else goto block126;
block125:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_546 = (frost$core$Int) {1854515224363601208u};
return _546;
block126:;
_548 = (frost$core$Int) {42u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_551 = _1.value;
_552 = _548.value;
_553 = _551 == _552;
_554 = (frost$core$Bit) {_553};
_556 = _554.value;
if (_556) goto block128; else goto block129;
block128:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_559 = (frost$core$Int) {15074916115688604772u};
return _559;
block129:;
_561 = (frost$core$Int) {43u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_564 = _1.value;
_565 = _561.value;
_566 = _564 == _565;
_567 = (frost$core$Bit) {_566};
_569 = _567.value;
if (_569) goto block131; else goto block132;
block131:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_572 = (frost$core$Int) {9848572933304056720u};
return _572;
block132:;
_574 = (frost$core$Int) {44u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_577 = _1.value;
_578 = _574.value;
_579 = _577 == _578;
_580 = (frost$core$Bit) {_579};
_582 = _580.value;
if (_582) goto block134; else goto block135;
block134:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_585 = (frost$core$Int) {4622229750919508668u};
return _585;
block135:;
_587 = (frost$core$Int) {45u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_590 = _1.value;
_591 = _587.value;
_592 = _590 == _591;
_593 = (frost$core$Bit) {_592};
_595 = _593.value;
if (_595) goto block137; else goto block138;
block137:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_598 = (frost$core$Int) {17842630642244512232u};
return _598;
block138:;
_600 = (frost$core$Int) {46u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_603 = _1.value;
_604 = _600.value;
_605 = _603 == _604;
_606 = (frost$core$Bit) {_605};
_608 = _606.value;
if (_608) goto block140; else goto block141;
block140:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_611 = (frost$core$Int) {12616287459859964180u};
return _611;
block141:;
_613 = (frost$core$Int) {47u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_616 = _1.value;
_617 = _613.value;
_618 = _616 == _617;
_619 = (frost$core$Bit) {_618};
_621 = _619.value;
if (_621) goto block143; else goto block144;
block143:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_624 = (frost$core$Int) {7389944277475416128u};
return _624;
block144:;
_626 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_629 = _1.value;
_630 = _626.value;
_631 = _629 == _630;
_632 = (frost$core$Bit) {_631};
_634 = _632.value;
if (_634) goto block146; else goto block147;
block146:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_637 = (frost$core$Int) {2163601095090868076u};
return _637;
block147:;
_639 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_642 = _1.value;
_643 = _639.value;
_644 = _642 == _643;
_645 = (frost$core$Bit) {_644};
_647 = _645.value;
if (_647) goto block149; else goto block150;
block149:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_650 = (frost$core$Int) {15384001986415871640u};
return _650;
block150:;
_652 = (frost$core$Int) {50u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_655 = _1.value;
_656 = _652.value;
_657 = _655 == _656;
_658 = (frost$core$Bit) {_657};
_660 = _658.value;
if (_660) goto block152; else goto block153;
block152:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_663 = (frost$core$Int) {10157658804031323588u};
return _663;
block153:;
_665 = (frost$core$Int) {51u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_668 = _1.value;
_669 = _665.value;
_670 = _668 == _669;
_671 = (frost$core$Bit) {_670};
_673 = _671.value;
if (_673) goto block155; else goto block156;
block155:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_676 = (frost$core$Int) {4931315621646775536u};
return _676;
block156:;
_678 = (frost$core$Int) {52u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_681 = _1.value;
_682 = _678.value;
_683 = _681 == _682;
_684 = (frost$core$Bit) {_683};
_686 = _684.value;
if (_686) goto block158; else goto block159;
block158:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_689 = (frost$core$Int) {18151716512971779100u};
return _689;
block159:;
_691 = (frost$core$Int) {53u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_694 = _1.value;
_695 = _691.value;
_696 = _694 == _695;
_697 = (frost$core$Bit) {_696};
_699 = _697.value;
if (_699) goto block161; else goto block162;
block161:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_702 = (frost$core$Int) {12925373330587231048u};
return _702;
block162:;
_704 = (frost$core$Int) {54u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_707 = _1.value;
_708 = _704.value;
_709 = _707 == _708;
_710 = (frost$core$Bit) {_709};
_712 = _710.value;
if (_712) goto block164; else goto block165;
block164:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_715 = (frost$core$Int) {7699030148202682996u};
return _715;
block165:;
_717 = (frost$core$Int) {55u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_720 = _1.value;
_721 = _717.value;
_722 = _720 == _721;
_723 = (frost$core$Bit) {_722};
_725 = _723.value;
if (_725) goto block167; else goto block168;
block167:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_728 = (frost$core$Int) {2472686965818134944u};
return _728;
block168:;
_730 = (frost$core$Int) {56u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_733 = _1.value;
_734 = _730.value;
_735 = _733 == _734;
_736 = (frost$core$Bit) {_735};
_738 = _736.value;
if (_738) goto block170; else goto block171;
block170:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_741 = (frost$core$Int) {15693087857143138508u};
return _741;
block171:;
_743 = (frost$core$Int) {57u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_746 = _1.value;
_747 = _743.value;
_748 = _746 == _747;
_749 = (frost$core$Bit) {_748};
_751 = _749.value;
if (_751) goto block173; else goto block174;
block173:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_754 = (frost$core$Int) {10466744674758590456u};
return _754;
block174:;
_756 = (frost$core$Int) {58u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_759 = _1.value;
_760 = _756.value;
_761 = _759 == _760;
_762 = (frost$core$Bit) {_761};
_764 = _762.value;
if (_764) goto block176; else goto block177;
block176:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_767 = (frost$core$Int) {5240401492374042404u};
return _767;
block177:;
_769 = (frost$core$Int) {59u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_772 = _1.value;
_773 = _769.value;
_774 = _772 == _773;
_775 = (frost$core$Bit) {_774};
_777 = _775.value;
if (_777) goto block179; else goto block180;
block179:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_780 = (frost$core$Int) {14058309989494352u};
return _780;
block180:;
_782 = (frost$core$Int) {60u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_785 = _1.value;
_786 = _782.value;
_787 = _785 == _786;
_788 = (frost$core$Bit) {_787};
_790 = _788.value;
if (_790) goto block182; else goto block183;
block182:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_793 = (frost$core$Int) {13234459201314497916u};
return _793;
block183:;
_795 = (frost$core$Int) {61u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_798 = _1.value;
_799 = _795.value;
_800 = _798 == _799;
_801 = (frost$core$Bit) {_800};
_803 = _801.value;
if (_803) goto block185; else goto block186;
block185:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_806 = (frost$core$Int) {8008116018929949864u};
return _806;
block186:;
_808 = (frost$core$Int) {62u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_811 = _1.value;
_812 = _808.value;
_813 = _811 == _812;
_814 = (frost$core$Bit) {_813};
_816 = _814.value;
if (_816) goto block188; else goto block189;
block188:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_819 = (frost$core$Int) {2781772836545401812u};
return _819;
block189:;
_821 = (frost$core$Int) {63u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_824 = _1.value;
_825 = _821.value;
_826 = _824 == _825;
_827 = (frost$core$Bit) {_826};
_829 = _827.value;
if (_829) goto block191; else goto block192;
block191:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_832 = (frost$core$Int) {16002173727870405376u};
return _832;
block192:;
_834 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_837 = _1.value;
_838 = _834.value;
_839 = _837 == _838;
_840 = (frost$core$Bit) {_839};
_842 = _840.value;
if (_842) goto block194; else goto block195;
block194:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_845 = (frost$core$Int) {10775830545485857324u};
return _845;
block195:;
_847 = (frost$core$Int) {65u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_850 = _1.value;
_851 = _847.value;
_852 = _850 == _851;
_853 = (frost$core$Bit) {_852};
_855 = _853.value;
if (_855) goto block197; else goto block198;
block197:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_858 = (frost$core$Int) {5549487363101309272u};
return _858;
block198:;
_860 = (frost$core$Int) {66u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_863 = _1.value;
_864 = _860.value;
_865 = _863 == _864;
_866 = (frost$core$Bit) {_865};
_868 = _866.value;
if (_868) goto block200; else goto block201;
block200:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_871 = (frost$core$Int) {323144180716761220u};
return _871;
block201:;
_873 = (frost$core$Int) {67u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_876 = _1.value;
_877 = _873.value;
_878 = _876 == _877;
_879 = (frost$core$Bit) {_878};
_881 = _879.value;
if (_881) goto block203; else goto block204;
block203:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_884 = (frost$core$Int) {13543545072041764784u};
return _884;
block204:;
_886 = (frost$core$Int) {68u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_889 = _1.value;
_890 = _886.value;
_891 = _889 == _890;
_892 = (frost$core$Bit) {_891};
_894 = _892.value;
if (_894) goto block206; else goto block207;
block206:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_897 = (frost$core$Int) {8317201889657216732u};
return _897;
block207:;
_899 = (frost$core$Int) {69u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_902 = _1.value;
_903 = _899.value;
_904 = _902 == _903;
_905 = (frost$core$Bit) {_904};
_907 = _905.value;
if (_907) goto block209; else goto block210;
block209:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_910 = (frost$core$Int) {3090858707272668680u};
return _910;
block210:;
_912 = (frost$core$Int) {70u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_915 = _1.value;
_916 = _912.value;
_917 = _915 == _916;
_918 = (frost$core$Bit) {_917};
_920 = _918.value;
if (_920) goto block212; else goto block213;
block212:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_923 = (frost$core$Int) {16311259598597672244u};
return _923;
block213:;
_925 = (frost$core$Int) {71u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_928 = _1.value;
_929 = _925.value;
_930 = _928 == _929;
_931 = (frost$core$Bit) {_930};
_933 = _931.value;
if (_933) goto block215; else goto block216;
block215:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_936 = (frost$core$Int) {11084916416213124192u};
return _936;
block216:;
_938 = (frost$core$Int) {72u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_941 = _1.value;
_942 = _938.value;
_943 = _941 == _942;
_944 = (frost$core$Bit) {_943};
_946 = _944.value;
if (_946) goto block218; else goto block219;
block218:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_949 = (frost$core$Int) {5858573233828576140u};
return _949;
block219:;
_951 = (frost$core$Int) {73u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_954 = _1.value;
_955 = _951.value;
_956 = _954 == _955;
_957 = (frost$core$Bit) {_956};
_959 = _957.value;
if (_959) goto block221; else goto block222;
block221:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_962 = (frost$core$Int) {632230051444028088u};
return _962;
block222:;
_964 = (frost$core$Int) {74u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_967 = _1.value;
_968 = _964.value;
_969 = _967 == _968;
_970 = (frost$core$Bit) {_969};
_972 = _970.value;
if (_972) goto block224; else goto block225;
block224:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_975 = (frost$core$Int) {13852630942769031652u};
return _975;
block225:;
_977 = (frost$core$Int) {75u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_980 = _1.value;
_981 = _977.value;
_982 = _980 == _981;
_983 = (frost$core$Bit) {_982};
_985 = _983.value;
if (_985) goto block227; else goto block228;
block227:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_988 = (frost$core$Int) {8626287760384483600u};
return _988;
block228:;
_990 = (frost$core$Int) {76u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_993 = _1.value;
_994 = _990.value;
_995 = _993 == _994;
_996 = (frost$core$Bit) {_995};
_998 = _996.value;
if (_998) goto block230; else goto block231;
block230:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1001 = (frost$core$Int) {3399944577999935548u};
return _1001;
block231:;
_1003 = (frost$core$Int) {77u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1006 = _1.value;
_1007 = _1003.value;
_1008 = _1006 == _1007;
_1009 = (frost$core$Bit) {_1008};
_1011 = _1009.value;
if (_1011) goto block233; else goto block234;
block233:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1014 = (frost$core$Int) {16620345469324939112u};
return _1014;
block234:;
_1016 = (frost$core$Int) {78u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1019 = _1.value;
_1020 = _1016.value;
_1021 = _1019 == _1020;
_1022 = (frost$core$Bit) {_1021};
_1024 = _1022.value;
if (_1024) goto block236; else goto block237;
block236:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1027 = (frost$core$Int) {11394002286940391060u};
return _1027;
block237:;
_1029 = (frost$core$Int) {79u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1032 = _1.value;
_1033 = _1029.value;
_1034 = _1032 == _1033;
_1035 = (frost$core$Bit) {_1034};
_1037 = _1035.value;
if (_1037) goto block239; else goto block240;
block239:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1040 = (frost$core$Int) {6167659104555843008u};
return _1040;
block240:;
_1042 = (frost$core$Int) {80u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1045 = _1.value;
_1046 = _1042.value;
_1047 = _1045 == _1046;
_1048 = (frost$core$Bit) {_1047};
_1050 = _1048.value;
if (_1050) goto block242; else goto block243;
block242:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1053 = (frost$core$Int) {941315922171294956u};
return _1053;
block243:;
_1055 = (frost$core$Int) {81u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1058 = _1.value;
_1059 = _1055.value;
_1060 = _1058 == _1059;
_1061 = (frost$core$Bit) {_1060};
_1063 = _1061.value;
if (_1063) goto block245; else goto block246;
block245:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1066 = (frost$core$Int) {14161716813496298520u};
return _1066;
block246:;
_1068 = (frost$core$Int) {82u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1071 = _1.value;
_1072 = _1068.value;
_1073 = _1071 == _1072;
_1074 = (frost$core$Bit) {_1073};
_1076 = _1074.value;
if (_1076) goto block248; else goto block249;
block248:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1079 = (frost$core$Int) {8935373631111750468u};
return _1079;
block249:;
_1081 = (frost$core$Int) {83u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1084 = _1.value;
_1085 = _1081.value;
_1086 = _1084 == _1085;
_1087 = (frost$core$Bit) {_1086};
_1089 = _1087.value;
if (_1089) goto block251; else goto block252;
block251:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1092 = (frost$core$Int) {3709030448727202416u};
return _1092;
block252:;
_1094 = (frost$core$Int) {84u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1097 = _1.value;
_1098 = _1094.value;
_1099 = _1097 == _1098;
_1100 = (frost$core$Bit) {_1099};
_1102 = _1100.value;
if (_1102) goto block254; else goto block255;
block254:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1105 = (frost$core$Int) {16929431340052205980u};
return _1105;
block255:;
_1107 = (frost$core$Int) {85u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1110 = _1.value;
_1111 = _1107.value;
_1112 = _1110 == _1111;
_1113 = (frost$core$Bit) {_1112};
_1115 = _1113.value;
if (_1115) goto block257; else goto block258;
block257:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1118 = (frost$core$Int) {11703088157667657928u};
return _1118;
block258:;
_1120 = (frost$core$Int) {86u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1123 = _1.value;
_1124 = _1120.value;
_1125 = _1123 == _1124;
_1126 = (frost$core$Bit) {_1125};
_1128 = _1126.value;
if (_1128) goto block260; else goto block261;
block260:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1131 = (frost$core$Int) {6476744975283109876u};
return _1131;
block261:;
_1133 = (frost$core$Int) {87u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1136 = _1.value;
_1137 = _1133.value;
_1138 = _1136 == _1137;
_1139 = (frost$core$Bit) {_1138};
_1141 = _1139.value;
if (_1141) goto block263; else goto block264;
block263:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1144 = (frost$core$Int) {1250401792898561824u};
return _1144;
block264:;
_1146 = (frost$core$Int) {88u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1149 = _1.value;
_1150 = _1146.value;
_1151 = _1149 == _1150;
_1152 = (frost$core$Bit) {_1151};
_1154 = _1152.value;
if (_1154) goto block266; else goto block267;
block266:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1157 = (frost$core$Int) {14470802684223565388u};
return _1157;
block267:;
_1159 = (frost$core$Int) {89u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1162 = _1.value;
_1163 = _1159.value;
_1164 = _1162 == _1163;
_1165 = (frost$core$Bit) {_1164};
_1167 = _1165.value;
if (_1167) goto block269; else goto block270;
block269:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1170 = (frost$core$Int) {9244459501839017336u};
return _1170;
block270:;
_1172 = (frost$core$Int) {90u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1175 = _1.value;
_1176 = _1172.value;
_1177 = _1175 == _1176;
_1178 = (frost$core$Bit) {_1177};
_1180 = _1178.value;
if (_1180) goto block272; else goto block273;
block272:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1183 = (frost$core$Int) {4018116319454469284u};
return _1183;
block273:;
_1185 = (frost$core$Int) {91u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1188 = _1.value;
_1189 = _1185.value;
_1190 = _1188 == _1189;
_1191 = (frost$core$Bit) {_1190};
_1193 = _1191.value;
if (_1193) goto block275; else goto block276;
block275:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1196 = (frost$core$Int) {17238517210779472848u};
return _1196;
block276:;
_1198 = (frost$core$Int) {92u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1201 = _1.value;
_1202 = _1198.value;
_1203 = _1201 == _1202;
_1204 = (frost$core$Bit) {_1203};
_1206 = _1204.value;
if (_1206) goto block278; else goto block279;
block278:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1209 = (frost$core$Int) {12012174028394924796u};
return _1209;
block279:;
_1211 = (frost$core$Int) {93u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1214 = _1.value;
_1215 = _1211.value;
_1216 = _1214 == _1215;
_1217 = (frost$core$Bit) {_1216};
_1219 = _1217.value;
if (_1219) goto block281; else goto block282;
block281:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1222 = (frost$core$Int) {6785830846010376744u};
return _1222;
block282:;
_1224 = (frost$core$Int) {94u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1227 = _1.value;
_1228 = _1224.value;
_1229 = _1227 == _1228;
_1230 = (frost$core$Bit) {_1229};
_1232 = _1230.value;
if (_1232) goto block284; else goto block285;
block284:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1235 = (frost$core$Int) {1559487663625828692u};
return _1235;
block285:;
_1237 = (frost$core$Int) {95u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1240 = _1.value;
_1241 = _1237.value;
_1242 = _1240 == _1241;
_1243 = (frost$core$Bit) {_1242};
_1245 = _1243.value;
if (_1245) goto block287; else goto block288;
block287:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1248 = (frost$core$Int) {14779888554950832256u};
return _1248;
block288:;
_1250 = (frost$core$Int) {96u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1253 = _1.value;
_1254 = _1250.value;
_1255 = _1253 == _1254;
_1256 = (frost$core$Bit) {_1255};
_1258 = _1256.value;
if (_1258) goto block290; else goto block291;
block290:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1261 = (frost$core$Int) {9553545372566284204u};
return _1261;
block291:;
_1263 = (frost$core$Int) {97u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1266 = _1.value;
_1267 = _1263.value;
_1268 = _1266 == _1267;
_1269 = (frost$core$Bit) {_1268};
_1271 = _1269.value;
if (_1271) goto block293; else goto block294;
block293:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1274 = (frost$core$Int) {4327202190181736152u};
return _1274;
block294:;
_1276 = (frost$core$Int) {98u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1279 = _1.value;
_1280 = _1276.value;
_1281 = _1279 == _1280;
_1282 = (frost$core$Bit) {_1281};
_1284 = _1282.value;
if (_1284) goto block296; else goto block297;
block296:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1287 = (frost$core$Int) {17547603081506739716u};
return _1287;
block297:;
_1289 = (frost$core$Int) {99u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1292 = _1.value;
_1293 = _1289.value;
_1294 = _1292 == _1293;
_1295 = (frost$core$Bit) {_1294};
_1297 = _1295.value;
if (_1297) goto block299; else goto block300;
block299:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1300 = (frost$core$Int) {12321259899122191664u};
return _1300;
block300:;
_1302 = (frost$core$Int) {100u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1305 = _1.value;
_1306 = _1302.value;
_1307 = _1305 == _1306;
_1308 = (frost$core$Bit) {_1307};
_1310 = _1308.value;
if (_1310) goto block302; else goto block303;
block302:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1313 = (frost$core$Int) {7094916716737643612u};
return _1313;
block303:;
_1315 = (frost$core$Int) {101u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1318 = _1.value;
_1319 = _1315.value;
_1320 = _1318 == _1319;
_1321 = (frost$core$Bit) {_1320};
_1323 = _1321.value;
if (_1323) goto block305; else goto block306;
block305:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1326 = (frost$core$Int) {1868573534353095560u};
return _1326;
block306:;
_1328 = (frost$core$Int) {102u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1331 = _1.value;
_1332 = _1328.value;
_1333 = _1331 == _1332;
_1334 = (frost$core$Bit) {_1333};
_1336 = _1334.value;
if (_1336) goto block308; else goto block309;
block308:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1339 = (frost$core$Int) {15088974425678099124u};
return _1339;
block309:;
_1341 = (frost$core$Int) {103u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1344 = _1.value;
_1345 = _1341.value;
_1346 = _1344 == _1345;
_1347 = (frost$core$Bit) {_1346};
_1349 = _1347.value;
if (_1349) goto block311; else goto block312;
block311:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1352 = (frost$core$Int) {9862631243293551072u};
return _1352;
block312:;
_1354 = (frost$core$Int) {104u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1357 = _1.value;
_1358 = _1354.value;
_1359 = _1357 == _1358;
_1360 = (frost$core$Bit) {_1359};
_1362 = _1360.value;
if (_1362) goto block314; else goto block315;
block314:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1365 = (frost$core$Int) {4636288060909003020u};
return _1365;
block315:;
_1367 = (frost$core$Int) {105u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1370 = _1.value;
_1371 = _1367.value;
_1372 = _1370 == _1371;
_1373 = (frost$core$Bit) {_1372};
_1375 = _1373.value;
if (_1375) goto block317; else goto block318;
block317:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1378 = (frost$core$Int) {17856688952234006584u};
return _1378;
block318:;
_1380 = (frost$core$Int) {106u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1383 = _1.value;
_1384 = _1380.value;
_1385 = _1383 == _1384;
_1386 = (frost$core$Bit) {_1385};
_1388 = _1386.value;
if (_1388) goto block320; else goto block321;
block320:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1391 = (frost$core$Int) {12630345769849458532u};
return _1391;
block321:;
_1393 = (frost$core$Int) {107u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1396 = _1.value;
_1397 = _1393.value;
_1398 = _1396 == _1397;
_1399 = (frost$core$Bit) {_1398};
_1401 = _1399.value;
if (_1401) goto block323; else goto block324;
block323:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1404 = (frost$core$Int) {7404002587464910480u};
return _1404;
block324:;
_1406 = (frost$core$Int) {108u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1409 = _1.value;
_1410 = _1406.value;
_1411 = _1409 == _1410;
_1412 = (frost$core$Bit) {_1411};
_1414 = _1412.value;
if (_1414) goto block326; else goto block327;
block326:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1417 = (frost$core$Int) {2177659405080362428u};
return _1417;
block327:;
_1419 = (frost$core$Int) {109u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1422 = _1.value;
_1423 = _1419.value;
_1424 = _1422 == _1423;
_1425 = (frost$core$Bit) {_1424};
_1427 = _1425.value;
if (_1427) goto block329; else goto block330;
block329:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1430 = (frost$core$Int) {15398060296405365992u};
return _1430;
block330:;
_1432 = (frost$core$Int) {110u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1435 = _1.value;
_1436 = _1432.value;
_1437 = _1435 == _1436;
_1438 = (frost$core$Bit) {_1437};
_1440 = _1438.value;
if (_1440) goto block332; else goto block333;
block332:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1443 = (frost$core$Int) {10171717114020817940u};
return _1443;
block333:;
_1445 = (frost$core$Int) {111u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1448 = _1.value;
_1449 = _1445.value;
_1450 = _1448 == _1449;
_1451 = (frost$core$Bit) {_1450};
_1453 = _1451.value;
if (_1453) goto block335; else goto block336;
block335:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1456 = (frost$core$Int) {4945373931636269888u};
return _1456;
block336:;
_1458 = (frost$core$Int) {112u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1461 = _1.value;
_1462 = _1458.value;
_1463 = _1461 == _1462;
_1464 = (frost$core$Bit) {_1463};
_1466 = _1464.value;
if (_1466) goto block338; else goto block339;
block338:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1469 = (frost$core$Int) {18165774822961273452u};
return _1469;
block339:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1472 = (frost$core$Int) {11u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3, _1472);
abort(); // unreachable
block1:;
goto block341;
block341:;

}
frost$core$String* org$frostlang$frostc$parser$Token$Kind$get_asString$R$frost$core$String(org$frostlang$frostc$parser$Token$Kind param0) {

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
frost$core$Int _562;
int64_t _565;
int64_t _566;
bool _567;
frost$core$Bit _568;
bool _570;
frost$core$Object* _573;
frost$core$Int _576;
int64_t _579;
int64_t _580;
bool _581;
frost$core$Bit _582;
bool _584;
frost$core$Object* _587;
frost$core$Int _590;
int64_t _593;
int64_t _594;
bool _595;
frost$core$Bit _596;
bool _598;
frost$core$Object* _601;
frost$core$Int _604;
int64_t _607;
int64_t _608;
bool _609;
frost$core$Bit _610;
bool _612;
frost$core$Object* _615;
frost$core$Int _618;
int64_t _621;
int64_t _622;
bool _623;
frost$core$Bit _624;
bool _626;
frost$core$Object* _629;
frost$core$Int _632;
int64_t _635;
int64_t _636;
bool _637;
frost$core$Bit _638;
bool _640;
frost$core$Object* _643;
frost$core$Int _646;
int64_t _649;
int64_t _650;
bool _651;
frost$core$Bit _652;
bool _654;
frost$core$Object* _657;
frost$core$Int _660;
int64_t _663;
int64_t _664;
bool _665;
frost$core$Bit _666;
bool _668;
frost$core$Object* _671;
frost$core$Int _674;
int64_t _677;
int64_t _678;
bool _679;
frost$core$Bit _680;
bool _682;
frost$core$Object* _685;
frost$core$Int _688;
int64_t _691;
int64_t _692;
bool _693;
frost$core$Bit _694;
bool _696;
frost$core$Object* _699;
frost$core$Int _702;
int64_t _705;
int64_t _706;
bool _707;
frost$core$Bit _708;
bool _710;
frost$core$Object* _713;
frost$core$Int _716;
int64_t _719;
int64_t _720;
bool _721;
frost$core$Bit _722;
bool _724;
frost$core$Object* _727;
frost$core$Int _730;
int64_t _733;
int64_t _734;
bool _735;
frost$core$Bit _736;
bool _738;
frost$core$Object* _741;
frost$core$Int _744;
int64_t _747;
int64_t _748;
bool _749;
frost$core$Bit _750;
bool _752;
frost$core$Object* _755;
frost$core$Int _758;
int64_t _761;
int64_t _762;
bool _763;
frost$core$Bit _764;
bool _766;
frost$core$Object* _769;
frost$core$Int _772;
int64_t _775;
int64_t _776;
bool _777;
frost$core$Bit _778;
bool _780;
frost$core$Object* _783;
frost$core$Int _786;
int64_t _789;
int64_t _790;
bool _791;
frost$core$Bit _792;
bool _794;
frost$core$Object* _797;
frost$core$Int _800;
int64_t _803;
int64_t _804;
bool _805;
frost$core$Bit _806;
bool _808;
frost$core$Object* _811;
frost$core$Int _814;
int64_t _817;
int64_t _818;
bool _819;
frost$core$Bit _820;
bool _822;
frost$core$Object* _825;
frost$core$Int _828;
int64_t _831;
int64_t _832;
bool _833;
frost$core$Bit _834;
bool _836;
frost$core$Object* _839;
frost$core$Int _842;
int64_t _845;
int64_t _846;
bool _847;
frost$core$Bit _848;
bool _850;
frost$core$Object* _853;
frost$core$Int _856;
int64_t _859;
int64_t _860;
bool _861;
frost$core$Bit _862;
bool _864;
frost$core$Object* _867;
frost$core$Int _870;
int64_t _873;
int64_t _874;
bool _875;
frost$core$Bit _876;
bool _878;
frost$core$Object* _881;
frost$core$Int _884;
int64_t _887;
int64_t _888;
bool _889;
frost$core$Bit _890;
bool _892;
frost$core$Object* _895;
frost$core$Int _898;
int64_t _901;
int64_t _902;
bool _903;
frost$core$Bit _904;
bool _906;
frost$core$Object* _909;
frost$core$Int _912;
int64_t _915;
int64_t _916;
bool _917;
frost$core$Bit _918;
bool _920;
frost$core$Object* _923;
frost$core$Int _926;
int64_t _929;
int64_t _930;
bool _931;
frost$core$Bit _932;
bool _934;
frost$core$Object* _937;
frost$core$Int _940;
int64_t _943;
int64_t _944;
bool _945;
frost$core$Bit _946;
bool _948;
frost$core$Object* _951;
frost$core$Int _954;
int64_t _957;
int64_t _958;
bool _959;
frost$core$Bit _960;
bool _962;
frost$core$Object* _965;
frost$core$Int _968;
int64_t _971;
int64_t _972;
bool _973;
frost$core$Bit _974;
bool _976;
frost$core$Object* _979;
frost$core$Int _982;
int64_t _985;
int64_t _986;
bool _987;
frost$core$Bit _988;
bool _990;
frost$core$Object* _993;
frost$core$Int _996;
int64_t _999;
int64_t _1000;
bool _1001;
frost$core$Bit _1002;
bool _1004;
frost$core$Object* _1007;
frost$core$Int _1010;
int64_t _1013;
int64_t _1014;
bool _1015;
frost$core$Bit _1016;
bool _1018;
frost$core$Object* _1021;
frost$core$Int _1024;
int64_t _1027;
int64_t _1028;
bool _1029;
frost$core$Bit _1030;
bool _1032;
frost$core$Object* _1035;
frost$core$Int _1038;
int64_t _1041;
int64_t _1042;
bool _1043;
frost$core$Bit _1044;
bool _1046;
frost$core$Object* _1049;
frost$core$Int _1052;
int64_t _1055;
int64_t _1056;
bool _1057;
frost$core$Bit _1058;
bool _1060;
frost$core$Object* _1063;
frost$core$Int _1066;
int64_t _1069;
int64_t _1070;
bool _1071;
frost$core$Bit _1072;
bool _1074;
frost$core$Object* _1077;
frost$core$Int _1080;
int64_t _1083;
int64_t _1084;
bool _1085;
frost$core$Bit _1086;
bool _1088;
frost$core$Object* _1091;
frost$core$Int _1094;
int64_t _1097;
int64_t _1098;
bool _1099;
frost$core$Bit _1100;
bool _1102;
frost$core$Object* _1105;
frost$core$Int _1108;
int64_t _1111;
int64_t _1112;
bool _1113;
frost$core$Bit _1114;
bool _1116;
frost$core$Object* _1119;
frost$core$Int _1122;
int64_t _1125;
int64_t _1126;
bool _1127;
frost$core$Bit _1128;
bool _1130;
frost$core$Object* _1133;
frost$core$Int _1136;
int64_t _1139;
int64_t _1140;
bool _1141;
frost$core$Bit _1142;
bool _1144;
frost$core$Object* _1147;
frost$core$Int _1150;
int64_t _1153;
int64_t _1154;
bool _1155;
frost$core$Bit _1156;
bool _1158;
frost$core$Object* _1161;
frost$core$Int _1164;
int64_t _1167;
int64_t _1168;
bool _1169;
frost$core$Bit _1170;
bool _1172;
frost$core$Object* _1175;
frost$core$Int _1178;
int64_t _1181;
int64_t _1182;
bool _1183;
frost$core$Bit _1184;
bool _1186;
frost$core$Object* _1189;
frost$core$Int _1192;
int64_t _1195;
int64_t _1196;
bool _1197;
frost$core$Bit _1198;
bool _1200;
frost$core$Object* _1203;
frost$core$Int _1206;
int64_t _1209;
int64_t _1210;
bool _1211;
frost$core$Bit _1212;
bool _1214;
frost$core$Object* _1217;
frost$core$Int _1220;
int64_t _1223;
int64_t _1224;
bool _1225;
frost$core$Bit _1226;
bool _1228;
frost$core$Object* _1231;
frost$core$Int _1234;
int64_t _1237;
int64_t _1238;
bool _1239;
frost$core$Bit _1240;
bool _1242;
frost$core$Object* _1245;
frost$core$Int _1248;
int64_t _1251;
int64_t _1252;
bool _1253;
frost$core$Bit _1254;
bool _1256;
frost$core$Object* _1259;
frost$core$Int _1262;
int64_t _1265;
int64_t _1266;
bool _1267;
frost$core$Bit _1268;
bool _1270;
frost$core$Object* _1273;
frost$core$Int _1276;
int64_t _1279;
int64_t _1280;
bool _1281;
frost$core$Bit _1282;
bool _1284;
frost$core$Object* _1287;
frost$core$Int _1290;
int64_t _1293;
int64_t _1294;
bool _1295;
frost$core$Bit _1296;
bool _1298;
frost$core$Object* _1301;
frost$core$Int _1304;
int64_t _1307;
int64_t _1308;
bool _1309;
frost$core$Bit _1310;
bool _1312;
frost$core$Object* _1315;
frost$core$Int _1318;
int64_t _1321;
int64_t _1322;
bool _1323;
frost$core$Bit _1324;
bool _1326;
frost$core$Object* _1329;
frost$core$Int _1332;
int64_t _1335;
int64_t _1336;
bool _1337;
frost$core$Bit _1338;
bool _1340;
frost$core$Object* _1343;
frost$core$Int _1346;
int64_t _1349;
int64_t _1350;
bool _1351;
frost$core$Bit _1352;
bool _1354;
frost$core$Object* _1357;
frost$core$Int _1360;
int64_t _1363;
int64_t _1364;
bool _1365;
frost$core$Bit _1366;
bool _1368;
frost$core$Object* _1371;
frost$core$Int _1374;
int64_t _1377;
int64_t _1378;
bool _1379;
frost$core$Bit _1380;
bool _1382;
frost$core$Object* _1385;
frost$core$Int _1388;
int64_t _1391;
int64_t _1392;
bool _1393;
frost$core$Bit _1394;
bool _1396;
frost$core$Object* _1399;
frost$core$Int _1402;
int64_t _1405;
int64_t _1406;
bool _1407;
frost$core$Bit _1408;
bool _1410;
frost$core$Object* _1413;
frost$core$Int _1416;
int64_t _1419;
int64_t _1420;
bool _1421;
frost$core$Bit _1422;
bool _1424;
frost$core$Object* _1427;
frost$core$Int _1430;
int64_t _1433;
int64_t _1434;
bool _1435;
frost$core$Bit _1436;
bool _1438;
frost$core$Object* _1441;
frost$core$Int _1444;
int64_t _1447;
int64_t _1448;
bool _1449;
frost$core$Bit _1450;
bool _1452;
frost$core$Object* _1455;
frost$core$Int _1458;
int64_t _1461;
int64_t _1462;
bool _1463;
frost$core$Bit _1464;
bool _1466;
frost$core$Object* _1469;
frost$core$Int _1472;
int64_t _1475;
int64_t _1476;
bool _1477;
frost$core$Bit _1478;
bool _1480;
frost$core$Object* _1483;
frost$core$Int _1486;
int64_t _1489;
int64_t _1490;
bool _1491;
frost$core$Bit _1492;
bool _1494;
frost$core$Object* _1497;
frost$core$Int _1500;
int64_t _1503;
int64_t _1504;
bool _1505;
frost$core$Bit _1506;
bool _1508;
frost$core$Object* _1511;
frost$core$Int _1514;
int64_t _1517;
int64_t _1518;
bool _1519;
frost$core$Bit _1520;
bool _1522;
frost$core$Object* _1525;
frost$core$Int _1528;
int64_t _1531;
int64_t _1532;
bool _1533;
frost$core$Bit _1534;
bool _1536;
frost$core$Object* _1539;
frost$core$Int _1542;
int64_t _1545;
int64_t _1546;
bool _1547;
frost$core$Bit _1548;
bool _1550;
frost$core$Object* _1553;
frost$core$Int _1556;
int64_t _1559;
int64_t _1560;
bool _1561;
frost$core$Bit _1562;
bool _1564;
frost$core$Object* _1567;
frost$core$Int _1570;
int64_t _1573;
int64_t _1574;
bool _1575;
frost$core$Bit _1576;
bool _1578;
frost$core$Object* _1581;
frost$core$Int _1585;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1 = param0.$rawValue;
_2 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_13 = ((frost$core$Object*) &$s4);
frost$core$Frost$ref$frost$core$Object$Q(_13);
return &$s5;
block3:;
_16 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_19 = _1.value;
_20 = _16.value;
_21 = _19 == _20;
_22 = (frost$core$Bit) {_21};
_24 = _22.value;
if (_24) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_27 = ((frost$core$Object*) &$s6);
frost$core$Frost$ref$frost$core$Object$Q(_27);
return &$s7;
block6:;
_30 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_33 = _1.value;
_34 = _30.value;
_35 = _33 == _34;
_36 = (frost$core$Bit) {_35};
_38 = _36.value;
if (_38) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_41 = ((frost$core$Object*) &$s8);
frost$core$Frost$ref$frost$core$Object$Q(_41);
return &$s9;
block9:;
_44 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_47 = _1.value;
_48 = _44.value;
_49 = _47 == _48;
_50 = (frost$core$Bit) {_49};
_52 = _50.value;
if (_52) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_55 = ((frost$core$Object*) &$s10);
frost$core$Frost$ref$frost$core$Object$Q(_55);
return &$s11;
block12:;
_58 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_61 = _1.value;
_62 = _58.value;
_63 = _61 == _62;
_64 = (frost$core$Bit) {_63};
_66 = _64.value;
if (_66) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_69 = ((frost$core$Object*) &$s12);
frost$core$Frost$ref$frost$core$Object$Q(_69);
return &$s13;
block15:;
_72 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_75 = _1.value;
_76 = _72.value;
_77 = _75 == _76;
_78 = (frost$core$Bit) {_77};
_80 = _78.value;
if (_80) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_83 = ((frost$core$Object*) &$s14);
frost$core$Frost$ref$frost$core$Object$Q(_83);
return &$s15;
block18:;
_86 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_89 = _1.value;
_90 = _86.value;
_91 = _89 == _90;
_92 = (frost$core$Bit) {_91};
_94 = _92.value;
if (_94) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_97 = ((frost$core$Object*) &$s16);
frost$core$Frost$ref$frost$core$Object$Q(_97);
return &$s17;
block21:;
_100 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_103 = _1.value;
_104 = _100.value;
_105 = _103 == _104;
_106 = (frost$core$Bit) {_105};
_108 = _106.value;
if (_108) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_111 = ((frost$core$Object*) &$s18);
frost$core$Frost$ref$frost$core$Object$Q(_111);
return &$s19;
block24:;
_114 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_117 = _1.value;
_118 = _114.value;
_119 = _117 == _118;
_120 = (frost$core$Bit) {_119};
_122 = _120.value;
if (_122) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_125 = ((frost$core$Object*) &$s20);
frost$core$Frost$ref$frost$core$Object$Q(_125);
return &$s21;
block27:;
_128 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_131 = _1.value;
_132 = _128.value;
_133 = _131 == _132;
_134 = (frost$core$Bit) {_133};
_136 = _134.value;
if (_136) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_139 = ((frost$core$Object*) &$s22);
frost$core$Frost$ref$frost$core$Object$Q(_139);
return &$s23;
block30:;
_142 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_145 = _1.value;
_146 = _142.value;
_147 = _145 == _146;
_148 = (frost$core$Bit) {_147};
_150 = _148.value;
if (_150) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_153 = ((frost$core$Object*) &$s24);
frost$core$Frost$ref$frost$core$Object$Q(_153);
return &$s25;
block33:;
_156 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_159 = _1.value;
_160 = _156.value;
_161 = _159 == _160;
_162 = (frost$core$Bit) {_161};
_164 = _162.value;
if (_164) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_167 = ((frost$core$Object*) &$s26);
frost$core$Frost$ref$frost$core$Object$Q(_167);
return &$s27;
block36:;
_170 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_173 = _1.value;
_174 = _170.value;
_175 = _173 == _174;
_176 = (frost$core$Bit) {_175};
_178 = _176.value;
if (_178) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_181 = ((frost$core$Object*) &$s28);
frost$core$Frost$ref$frost$core$Object$Q(_181);
return &$s29;
block39:;
_184 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_187 = _1.value;
_188 = _184.value;
_189 = _187 == _188;
_190 = (frost$core$Bit) {_189};
_192 = _190.value;
if (_192) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_195 = ((frost$core$Object*) &$s30);
frost$core$Frost$ref$frost$core$Object$Q(_195);
return &$s31;
block42:;
_198 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_201 = _1.value;
_202 = _198.value;
_203 = _201 == _202;
_204 = (frost$core$Bit) {_203};
_206 = _204.value;
if (_206) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_209 = ((frost$core$Object*) &$s32);
frost$core$Frost$ref$frost$core$Object$Q(_209);
return &$s33;
block45:;
_212 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_215 = _1.value;
_216 = _212.value;
_217 = _215 == _216;
_218 = (frost$core$Bit) {_217};
_220 = _218.value;
if (_220) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_223 = ((frost$core$Object*) &$s34);
frost$core$Frost$ref$frost$core$Object$Q(_223);
return &$s35;
block48:;
_226 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_229 = _1.value;
_230 = _226.value;
_231 = _229 == _230;
_232 = (frost$core$Bit) {_231};
_234 = _232.value;
if (_234) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_237 = ((frost$core$Object*) &$s36);
frost$core$Frost$ref$frost$core$Object$Q(_237);
return &$s37;
block51:;
_240 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_243 = _1.value;
_244 = _240.value;
_245 = _243 == _244;
_246 = (frost$core$Bit) {_245};
_248 = _246.value;
if (_248) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_251 = ((frost$core$Object*) &$s38);
frost$core$Frost$ref$frost$core$Object$Q(_251);
return &$s39;
block54:;
_254 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_257 = _1.value;
_258 = _254.value;
_259 = _257 == _258;
_260 = (frost$core$Bit) {_259};
_262 = _260.value;
if (_262) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_265 = ((frost$core$Object*) &$s40);
frost$core$Frost$ref$frost$core$Object$Q(_265);
return &$s41;
block57:;
_268 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_271 = _1.value;
_272 = _268.value;
_273 = _271 == _272;
_274 = (frost$core$Bit) {_273};
_276 = _274.value;
if (_276) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_279 = ((frost$core$Object*) &$s42);
frost$core$Frost$ref$frost$core$Object$Q(_279);
return &$s43;
block60:;
_282 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_285 = _1.value;
_286 = _282.value;
_287 = _285 == _286;
_288 = (frost$core$Bit) {_287};
_290 = _288.value;
if (_290) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_293 = ((frost$core$Object*) &$s44);
frost$core$Frost$ref$frost$core$Object$Q(_293);
return &$s45;
block63:;
_296 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_299 = _1.value;
_300 = _296.value;
_301 = _299 == _300;
_302 = (frost$core$Bit) {_301};
_304 = _302.value;
if (_304) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_307 = ((frost$core$Object*) &$s46);
frost$core$Frost$ref$frost$core$Object$Q(_307);
return &$s47;
block66:;
_310 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_313 = _1.value;
_314 = _310.value;
_315 = _313 == _314;
_316 = (frost$core$Bit) {_315};
_318 = _316.value;
if (_318) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_321 = ((frost$core$Object*) &$s48);
frost$core$Frost$ref$frost$core$Object$Q(_321);
return &$s49;
block69:;
_324 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_327 = _1.value;
_328 = _324.value;
_329 = _327 == _328;
_330 = (frost$core$Bit) {_329};
_332 = _330.value;
if (_332) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_335 = ((frost$core$Object*) &$s50);
frost$core$Frost$ref$frost$core$Object$Q(_335);
return &$s51;
block72:;
_338 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_341 = _1.value;
_342 = _338.value;
_343 = _341 == _342;
_344 = (frost$core$Bit) {_343};
_346 = _344.value;
if (_346) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_349 = ((frost$core$Object*) &$s52);
frost$core$Frost$ref$frost$core$Object$Q(_349);
return &$s53;
block75:;
_352 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_355 = _1.value;
_356 = _352.value;
_357 = _355 == _356;
_358 = (frost$core$Bit) {_357};
_360 = _358.value;
if (_360) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_363 = ((frost$core$Object*) &$s54);
frost$core$Frost$ref$frost$core$Object$Q(_363);
return &$s55;
block78:;
_366 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_369 = _1.value;
_370 = _366.value;
_371 = _369 == _370;
_372 = (frost$core$Bit) {_371};
_374 = _372.value;
if (_374) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_377 = ((frost$core$Object*) &$s56);
frost$core$Frost$ref$frost$core$Object$Q(_377);
return &$s57;
block81:;
_380 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_383 = _1.value;
_384 = _380.value;
_385 = _383 == _384;
_386 = (frost$core$Bit) {_385};
_388 = _386.value;
if (_388) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_391 = ((frost$core$Object*) &$s58);
frost$core$Frost$ref$frost$core$Object$Q(_391);
return &$s59;
block84:;
_394 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_397 = _1.value;
_398 = _394.value;
_399 = _397 == _398;
_400 = (frost$core$Bit) {_399};
_402 = _400.value;
if (_402) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_405 = ((frost$core$Object*) &$s60);
frost$core$Frost$ref$frost$core$Object$Q(_405);
return &$s61;
block87:;
_408 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_411 = _1.value;
_412 = _408.value;
_413 = _411 == _412;
_414 = (frost$core$Bit) {_413};
_416 = _414.value;
if (_416) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_419 = ((frost$core$Object*) &$s62);
frost$core$Frost$ref$frost$core$Object$Q(_419);
return &$s63;
block90:;
_422 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_425 = _1.value;
_426 = _422.value;
_427 = _425 == _426;
_428 = (frost$core$Bit) {_427};
_430 = _428.value;
if (_430) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_433 = ((frost$core$Object*) &$s64);
frost$core$Frost$ref$frost$core$Object$Q(_433);
return &$s65;
block93:;
_436 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_439 = _1.value;
_440 = _436.value;
_441 = _439 == _440;
_442 = (frost$core$Bit) {_441};
_444 = _442.value;
if (_444) goto block95; else goto block96;
block95:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_447 = ((frost$core$Object*) &$s66);
frost$core$Frost$ref$frost$core$Object$Q(_447);
return &$s67;
block96:;
_450 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_453 = _1.value;
_454 = _450.value;
_455 = _453 == _454;
_456 = (frost$core$Bit) {_455};
_458 = _456.value;
if (_458) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_461 = ((frost$core$Object*) &$s68);
frost$core$Frost$ref$frost$core$Object$Q(_461);
return &$s69;
block99:;
_464 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_467 = _1.value;
_468 = _464.value;
_469 = _467 == _468;
_470 = (frost$core$Bit) {_469};
_472 = _470.value;
if (_472) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_475 = ((frost$core$Object*) &$s70);
frost$core$Frost$ref$frost$core$Object$Q(_475);
return &$s71;
block102:;
_478 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_481 = _1.value;
_482 = _478.value;
_483 = _481 == _482;
_484 = (frost$core$Bit) {_483};
_486 = _484.value;
if (_486) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_489 = ((frost$core$Object*) &$s72);
frost$core$Frost$ref$frost$core$Object$Q(_489);
return &$s73;
block105:;
_492 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_495 = _1.value;
_496 = _492.value;
_497 = _495 == _496;
_498 = (frost$core$Bit) {_497};
_500 = _498.value;
if (_500) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_503 = ((frost$core$Object*) &$s74);
frost$core$Frost$ref$frost$core$Object$Q(_503);
return &$s75;
block108:;
_506 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_509 = _1.value;
_510 = _506.value;
_511 = _509 == _510;
_512 = (frost$core$Bit) {_511};
_514 = _512.value;
if (_514) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_517 = ((frost$core$Object*) &$s76);
frost$core$Frost$ref$frost$core$Object$Q(_517);
return &$s77;
block111:;
_520 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_523 = _1.value;
_524 = _520.value;
_525 = _523 == _524;
_526 = (frost$core$Bit) {_525};
_528 = _526.value;
if (_528) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_531 = ((frost$core$Object*) &$s78);
frost$core$Frost$ref$frost$core$Object$Q(_531);
return &$s79;
block114:;
_534 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_537 = _1.value;
_538 = _534.value;
_539 = _537 == _538;
_540 = (frost$core$Bit) {_539};
_542 = _540.value;
if (_542) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_545 = ((frost$core$Object*) &$s80);
frost$core$Frost$ref$frost$core$Object$Q(_545);
return &$s81;
block117:;
_548 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_551 = _1.value;
_552 = _548.value;
_553 = _551 == _552;
_554 = (frost$core$Bit) {_553};
_556 = _554.value;
if (_556) goto block119; else goto block120;
block119:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_559 = ((frost$core$Object*) &$s82);
frost$core$Frost$ref$frost$core$Object$Q(_559);
return &$s83;
block120:;
_562 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_565 = _1.value;
_566 = _562.value;
_567 = _565 == _566;
_568 = (frost$core$Bit) {_567};
_570 = _568.value;
if (_570) goto block122; else goto block123;
block122:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_573 = ((frost$core$Object*) &$s84);
frost$core$Frost$ref$frost$core$Object$Q(_573);
return &$s85;
block123:;
_576 = (frost$core$Int) {41u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_579 = _1.value;
_580 = _576.value;
_581 = _579 == _580;
_582 = (frost$core$Bit) {_581};
_584 = _582.value;
if (_584) goto block125; else goto block126;
block125:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_587 = ((frost$core$Object*) &$s86);
frost$core$Frost$ref$frost$core$Object$Q(_587);
return &$s87;
block126:;
_590 = (frost$core$Int) {42u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_593 = _1.value;
_594 = _590.value;
_595 = _593 == _594;
_596 = (frost$core$Bit) {_595};
_598 = _596.value;
if (_598) goto block128; else goto block129;
block128:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_601 = ((frost$core$Object*) &$s88);
frost$core$Frost$ref$frost$core$Object$Q(_601);
return &$s89;
block129:;
_604 = (frost$core$Int) {43u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_607 = _1.value;
_608 = _604.value;
_609 = _607 == _608;
_610 = (frost$core$Bit) {_609};
_612 = _610.value;
if (_612) goto block131; else goto block132;
block131:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_615 = ((frost$core$Object*) &$s90);
frost$core$Frost$ref$frost$core$Object$Q(_615);
return &$s91;
block132:;
_618 = (frost$core$Int) {44u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_621 = _1.value;
_622 = _618.value;
_623 = _621 == _622;
_624 = (frost$core$Bit) {_623};
_626 = _624.value;
if (_626) goto block134; else goto block135;
block134:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_629 = ((frost$core$Object*) &$s92);
frost$core$Frost$ref$frost$core$Object$Q(_629);
return &$s93;
block135:;
_632 = (frost$core$Int) {45u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_635 = _1.value;
_636 = _632.value;
_637 = _635 == _636;
_638 = (frost$core$Bit) {_637};
_640 = _638.value;
if (_640) goto block137; else goto block138;
block137:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_643 = ((frost$core$Object*) &$s94);
frost$core$Frost$ref$frost$core$Object$Q(_643);
return &$s95;
block138:;
_646 = (frost$core$Int) {46u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_649 = _1.value;
_650 = _646.value;
_651 = _649 == _650;
_652 = (frost$core$Bit) {_651};
_654 = _652.value;
if (_654) goto block140; else goto block141;
block140:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_657 = ((frost$core$Object*) &$s96);
frost$core$Frost$ref$frost$core$Object$Q(_657);
return &$s97;
block141:;
_660 = (frost$core$Int) {47u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_663 = _1.value;
_664 = _660.value;
_665 = _663 == _664;
_666 = (frost$core$Bit) {_665};
_668 = _666.value;
if (_668) goto block143; else goto block144;
block143:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_671 = ((frost$core$Object*) &$s98);
frost$core$Frost$ref$frost$core$Object$Q(_671);
return &$s99;
block144:;
_674 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_677 = _1.value;
_678 = _674.value;
_679 = _677 == _678;
_680 = (frost$core$Bit) {_679};
_682 = _680.value;
if (_682) goto block146; else goto block147;
block146:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_685 = ((frost$core$Object*) &$s100);
frost$core$Frost$ref$frost$core$Object$Q(_685);
return &$s101;
block147:;
_688 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_691 = _1.value;
_692 = _688.value;
_693 = _691 == _692;
_694 = (frost$core$Bit) {_693};
_696 = _694.value;
if (_696) goto block149; else goto block150;
block149:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_699 = ((frost$core$Object*) &$s102);
frost$core$Frost$ref$frost$core$Object$Q(_699);
return &$s103;
block150:;
_702 = (frost$core$Int) {50u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_705 = _1.value;
_706 = _702.value;
_707 = _705 == _706;
_708 = (frost$core$Bit) {_707};
_710 = _708.value;
if (_710) goto block152; else goto block153;
block152:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_713 = ((frost$core$Object*) &$s104);
frost$core$Frost$ref$frost$core$Object$Q(_713);
return &$s105;
block153:;
_716 = (frost$core$Int) {51u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_719 = _1.value;
_720 = _716.value;
_721 = _719 == _720;
_722 = (frost$core$Bit) {_721};
_724 = _722.value;
if (_724) goto block155; else goto block156;
block155:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_727 = ((frost$core$Object*) &$s106);
frost$core$Frost$ref$frost$core$Object$Q(_727);
return &$s107;
block156:;
_730 = (frost$core$Int) {52u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_733 = _1.value;
_734 = _730.value;
_735 = _733 == _734;
_736 = (frost$core$Bit) {_735};
_738 = _736.value;
if (_738) goto block158; else goto block159;
block158:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_741 = ((frost$core$Object*) &$s108);
frost$core$Frost$ref$frost$core$Object$Q(_741);
return &$s109;
block159:;
_744 = (frost$core$Int) {53u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_747 = _1.value;
_748 = _744.value;
_749 = _747 == _748;
_750 = (frost$core$Bit) {_749};
_752 = _750.value;
if (_752) goto block161; else goto block162;
block161:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_755 = ((frost$core$Object*) &$s110);
frost$core$Frost$ref$frost$core$Object$Q(_755);
return &$s111;
block162:;
_758 = (frost$core$Int) {54u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_761 = _1.value;
_762 = _758.value;
_763 = _761 == _762;
_764 = (frost$core$Bit) {_763};
_766 = _764.value;
if (_766) goto block164; else goto block165;
block164:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_769 = ((frost$core$Object*) &$s112);
frost$core$Frost$ref$frost$core$Object$Q(_769);
return &$s113;
block165:;
_772 = (frost$core$Int) {55u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_775 = _1.value;
_776 = _772.value;
_777 = _775 == _776;
_778 = (frost$core$Bit) {_777};
_780 = _778.value;
if (_780) goto block167; else goto block168;
block167:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_783 = ((frost$core$Object*) &$s114);
frost$core$Frost$ref$frost$core$Object$Q(_783);
return &$s115;
block168:;
_786 = (frost$core$Int) {56u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_789 = _1.value;
_790 = _786.value;
_791 = _789 == _790;
_792 = (frost$core$Bit) {_791};
_794 = _792.value;
if (_794) goto block170; else goto block171;
block170:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_797 = ((frost$core$Object*) &$s116);
frost$core$Frost$ref$frost$core$Object$Q(_797);
return &$s117;
block171:;
_800 = (frost$core$Int) {57u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_803 = _1.value;
_804 = _800.value;
_805 = _803 == _804;
_806 = (frost$core$Bit) {_805};
_808 = _806.value;
if (_808) goto block173; else goto block174;
block173:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_811 = ((frost$core$Object*) &$s118);
frost$core$Frost$ref$frost$core$Object$Q(_811);
return &$s119;
block174:;
_814 = (frost$core$Int) {58u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_817 = _1.value;
_818 = _814.value;
_819 = _817 == _818;
_820 = (frost$core$Bit) {_819};
_822 = _820.value;
if (_822) goto block176; else goto block177;
block176:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_825 = ((frost$core$Object*) &$s120);
frost$core$Frost$ref$frost$core$Object$Q(_825);
return &$s121;
block177:;
_828 = (frost$core$Int) {59u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_831 = _1.value;
_832 = _828.value;
_833 = _831 == _832;
_834 = (frost$core$Bit) {_833};
_836 = _834.value;
if (_836) goto block179; else goto block180;
block179:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_839 = ((frost$core$Object*) &$s122);
frost$core$Frost$ref$frost$core$Object$Q(_839);
return &$s123;
block180:;
_842 = (frost$core$Int) {60u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_845 = _1.value;
_846 = _842.value;
_847 = _845 == _846;
_848 = (frost$core$Bit) {_847};
_850 = _848.value;
if (_850) goto block182; else goto block183;
block182:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_853 = ((frost$core$Object*) &$s124);
frost$core$Frost$ref$frost$core$Object$Q(_853);
return &$s125;
block183:;
_856 = (frost$core$Int) {61u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_859 = _1.value;
_860 = _856.value;
_861 = _859 == _860;
_862 = (frost$core$Bit) {_861};
_864 = _862.value;
if (_864) goto block185; else goto block186;
block185:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_867 = ((frost$core$Object*) &$s126);
frost$core$Frost$ref$frost$core$Object$Q(_867);
return &$s127;
block186:;
_870 = (frost$core$Int) {62u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_873 = _1.value;
_874 = _870.value;
_875 = _873 == _874;
_876 = (frost$core$Bit) {_875};
_878 = _876.value;
if (_878) goto block188; else goto block189;
block188:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_881 = ((frost$core$Object*) &$s128);
frost$core$Frost$ref$frost$core$Object$Q(_881);
return &$s129;
block189:;
_884 = (frost$core$Int) {63u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_887 = _1.value;
_888 = _884.value;
_889 = _887 == _888;
_890 = (frost$core$Bit) {_889};
_892 = _890.value;
if (_892) goto block191; else goto block192;
block191:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_895 = ((frost$core$Object*) &$s130);
frost$core$Frost$ref$frost$core$Object$Q(_895);
return &$s131;
block192:;
_898 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_901 = _1.value;
_902 = _898.value;
_903 = _901 == _902;
_904 = (frost$core$Bit) {_903};
_906 = _904.value;
if (_906) goto block194; else goto block195;
block194:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_909 = ((frost$core$Object*) &$s132);
frost$core$Frost$ref$frost$core$Object$Q(_909);
return &$s133;
block195:;
_912 = (frost$core$Int) {65u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_915 = _1.value;
_916 = _912.value;
_917 = _915 == _916;
_918 = (frost$core$Bit) {_917};
_920 = _918.value;
if (_920) goto block197; else goto block198;
block197:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_923 = ((frost$core$Object*) &$s134);
frost$core$Frost$ref$frost$core$Object$Q(_923);
return &$s135;
block198:;
_926 = (frost$core$Int) {66u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_929 = _1.value;
_930 = _926.value;
_931 = _929 == _930;
_932 = (frost$core$Bit) {_931};
_934 = _932.value;
if (_934) goto block200; else goto block201;
block200:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_937 = ((frost$core$Object*) &$s136);
frost$core$Frost$ref$frost$core$Object$Q(_937);
return &$s137;
block201:;
_940 = (frost$core$Int) {67u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_943 = _1.value;
_944 = _940.value;
_945 = _943 == _944;
_946 = (frost$core$Bit) {_945};
_948 = _946.value;
if (_948) goto block203; else goto block204;
block203:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_951 = ((frost$core$Object*) &$s138);
frost$core$Frost$ref$frost$core$Object$Q(_951);
return &$s139;
block204:;
_954 = (frost$core$Int) {68u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_957 = _1.value;
_958 = _954.value;
_959 = _957 == _958;
_960 = (frost$core$Bit) {_959};
_962 = _960.value;
if (_962) goto block206; else goto block207;
block206:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_965 = ((frost$core$Object*) &$s140);
frost$core$Frost$ref$frost$core$Object$Q(_965);
return &$s141;
block207:;
_968 = (frost$core$Int) {69u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_971 = _1.value;
_972 = _968.value;
_973 = _971 == _972;
_974 = (frost$core$Bit) {_973};
_976 = _974.value;
if (_976) goto block209; else goto block210;
block209:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_979 = ((frost$core$Object*) &$s142);
frost$core$Frost$ref$frost$core$Object$Q(_979);
return &$s143;
block210:;
_982 = (frost$core$Int) {70u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_985 = _1.value;
_986 = _982.value;
_987 = _985 == _986;
_988 = (frost$core$Bit) {_987};
_990 = _988.value;
if (_990) goto block212; else goto block213;
block212:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_993 = ((frost$core$Object*) &$s144);
frost$core$Frost$ref$frost$core$Object$Q(_993);
return &$s145;
block213:;
_996 = (frost$core$Int) {71u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_999 = _1.value;
_1000 = _996.value;
_1001 = _999 == _1000;
_1002 = (frost$core$Bit) {_1001};
_1004 = _1002.value;
if (_1004) goto block215; else goto block216;
block215:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1007 = ((frost$core$Object*) &$s146);
frost$core$Frost$ref$frost$core$Object$Q(_1007);
return &$s147;
block216:;
_1010 = (frost$core$Int) {72u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1013 = _1.value;
_1014 = _1010.value;
_1015 = _1013 == _1014;
_1016 = (frost$core$Bit) {_1015};
_1018 = _1016.value;
if (_1018) goto block218; else goto block219;
block218:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1021 = ((frost$core$Object*) &$s148);
frost$core$Frost$ref$frost$core$Object$Q(_1021);
return &$s149;
block219:;
_1024 = (frost$core$Int) {73u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1027 = _1.value;
_1028 = _1024.value;
_1029 = _1027 == _1028;
_1030 = (frost$core$Bit) {_1029};
_1032 = _1030.value;
if (_1032) goto block221; else goto block222;
block221:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1035 = ((frost$core$Object*) &$s150);
frost$core$Frost$ref$frost$core$Object$Q(_1035);
return &$s151;
block222:;
_1038 = (frost$core$Int) {74u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1041 = _1.value;
_1042 = _1038.value;
_1043 = _1041 == _1042;
_1044 = (frost$core$Bit) {_1043};
_1046 = _1044.value;
if (_1046) goto block224; else goto block225;
block224:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1049 = ((frost$core$Object*) &$s152);
frost$core$Frost$ref$frost$core$Object$Q(_1049);
return &$s153;
block225:;
_1052 = (frost$core$Int) {75u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1055 = _1.value;
_1056 = _1052.value;
_1057 = _1055 == _1056;
_1058 = (frost$core$Bit) {_1057};
_1060 = _1058.value;
if (_1060) goto block227; else goto block228;
block227:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1063 = ((frost$core$Object*) &$s154);
frost$core$Frost$ref$frost$core$Object$Q(_1063);
return &$s155;
block228:;
_1066 = (frost$core$Int) {76u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1069 = _1.value;
_1070 = _1066.value;
_1071 = _1069 == _1070;
_1072 = (frost$core$Bit) {_1071};
_1074 = _1072.value;
if (_1074) goto block230; else goto block231;
block230:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1077 = ((frost$core$Object*) &$s156);
frost$core$Frost$ref$frost$core$Object$Q(_1077);
return &$s157;
block231:;
_1080 = (frost$core$Int) {77u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1083 = _1.value;
_1084 = _1080.value;
_1085 = _1083 == _1084;
_1086 = (frost$core$Bit) {_1085};
_1088 = _1086.value;
if (_1088) goto block233; else goto block234;
block233:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1091 = ((frost$core$Object*) &$s158);
frost$core$Frost$ref$frost$core$Object$Q(_1091);
return &$s159;
block234:;
_1094 = (frost$core$Int) {78u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1097 = _1.value;
_1098 = _1094.value;
_1099 = _1097 == _1098;
_1100 = (frost$core$Bit) {_1099};
_1102 = _1100.value;
if (_1102) goto block236; else goto block237;
block236:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1105 = ((frost$core$Object*) &$s160);
frost$core$Frost$ref$frost$core$Object$Q(_1105);
return &$s161;
block237:;
_1108 = (frost$core$Int) {79u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1111 = _1.value;
_1112 = _1108.value;
_1113 = _1111 == _1112;
_1114 = (frost$core$Bit) {_1113};
_1116 = _1114.value;
if (_1116) goto block239; else goto block240;
block239:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1119 = ((frost$core$Object*) &$s162);
frost$core$Frost$ref$frost$core$Object$Q(_1119);
return &$s163;
block240:;
_1122 = (frost$core$Int) {80u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1125 = _1.value;
_1126 = _1122.value;
_1127 = _1125 == _1126;
_1128 = (frost$core$Bit) {_1127};
_1130 = _1128.value;
if (_1130) goto block242; else goto block243;
block242:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1133 = ((frost$core$Object*) &$s164);
frost$core$Frost$ref$frost$core$Object$Q(_1133);
return &$s165;
block243:;
_1136 = (frost$core$Int) {81u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1139 = _1.value;
_1140 = _1136.value;
_1141 = _1139 == _1140;
_1142 = (frost$core$Bit) {_1141};
_1144 = _1142.value;
if (_1144) goto block245; else goto block246;
block245:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1147 = ((frost$core$Object*) &$s166);
frost$core$Frost$ref$frost$core$Object$Q(_1147);
return &$s167;
block246:;
_1150 = (frost$core$Int) {82u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1153 = _1.value;
_1154 = _1150.value;
_1155 = _1153 == _1154;
_1156 = (frost$core$Bit) {_1155};
_1158 = _1156.value;
if (_1158) goto block248; else goto block249;
block248:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1161 = ((frost$core$Object*) &$s168);
frost$core$Frost$ref$frost$core$Object$Q(_1161);
return &$s169;
block249:;
_1164 = (frost$core$Int) {83u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1167 = _1.value;
_1168 = _1164.value;
_1169 = _1167 == _1168;
_1170 = (frost$core$Bit) {_1169};
_1172 = _1170.value;
if (_1172) goto block251; else goto block252;
block251:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1175 = ((frost$core$Object*) &$s170);
frost$core$Frost$ref$frost$core$Object$Q(_1175);
return &$s171;
block252:;
_1178 = (frost$core$Int) {84u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1181 = _1.value;
_1182 = _1178.value;
_1183 = _1181 == _1182;
_1184 = (frost$core$Bit) {_1183};
_1186 = _1184.value;
if (_1186) goto block254; else goto block255;
block254:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1189 = ((frost$core$Object*) &$s172);
frost$core$Frost$ref$frost$core$Object$Q(_1189);
return &$s173;
block255:;
_1192 = (frost$core$Int) {85u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1195 = _1.value;
_1196 = _1192.value;
_1197 = _1195 == _1196;
_1198 = (frost$core$Bit) {_1197};
_1200 = _1198.value;
if (_1200) goto block257; else goto block258;
block257:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1203 = ((frost$core$Object*) &$s174);
frost$core$Frost$ref$frost$core$Object$Q(_1203);
return &$s175;
block258:;
_1206 = (frost$core$Int) {86u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1209 = _1.value;
_1210 = _1206.value;
_1211 = _1209 == _1210;
_1212 = (frost$core$Bit) {_1211};
_1214 = _1212.value;
if (_1214) goto block260; else goto block261;
block260:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1217 = ((frost$core$Object*) &$s176);
frost$core$Frost$ref$frost$core$Object$Q(_1217);
return &$s177;
block261:;
_1220 = (frost$core$Int) {87u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1223 = _1.value;
_1224 = _1220.value;
_1225 = _1223 == _1224;
_1226 = (frost$core$Bit) {_1225};
_1228 = _1226.value;
if (_1228) goto block263; else goto block264;
block263:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1231 = ((frost$core$Object*) &$s178);
frost$core$Frost$ref$frost$core$Object$Q(_1231);
return &$s179;
block264:;
_1234 = (frost$core$Int) {88u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1237 = _1.value;
_1238 = _1234.value;
_1239 = _1237 == _1238;
_1240 = (frost$core$Bit) {_1239};
_1242 = _1240.value;
if (_1242) goto block266; else goto block267;
block266:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1245 = ((frost$core$Object*) &$s180);
frost$core$Frost$ref$frost$core$Object$Q(_1245);
return &$s181;
block267:;
_1248 = (frost$core$Int) {89u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1251 = _1.value;
_1252 = _1248.value;
_1253 = _1251 == _1252;
_1254 = (frost$core$Bit) {_1253};
_1256 = _1254.value;
if (_1256) goto block269; else goto block270;
block269:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1259 = ((frost$core$Object*) &$s182);
frost$core$Frost$ref$frost$core$Object$Q(_1259);
return &$s183;
block270:;
_1262 = (frost$core$Int) {90u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1265 = _1.value;
_1266 = _1262.value;
_1267 = _1265 == _1266;
_1268 = (frost$core$Bit) {_1267};
_1270 = _1268.value;
if (_1270) goto block272; else goto block273;
block272:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1273 = ((frost$core$Object*) &$s184);
frost$core$Frost$ref$frost$core$Object$Q(_1273);
return &$s185;
block273:;
_1276 = (frost$core$Int) {91u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1279 = _1.value;
_1280 = _1276.value;
_1281 = _1279 == _1280;
_1282 = (frost$core$Bit) {_1281};
_1284 = _1282.value;
if (_1284) goto block275; else goto block276;
block275:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1287 = ((frost$core$Object*) &$s186);
frost$core$Frost$ref$frost$core$Object$Q(_1287);
return &$s187;
block276:;
_1290 = (frost$core$Int) {92u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1293 = _1.value;
_1294 = _1290.value;
_1295 = _1293 == _1294;
_1296 = (frost$core$Bit) {_1295};
_1298 = _1296.value;
if (_1298) goto block278; else goto block279;
block278:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1301 = ((frost$core$Object*) &$s188);
frost$core$Frost$ref$frost$core$Object$Q(_1301);
return &$s189;
block279:;
_1304 = (frost$core$Int) {93u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1307 = _1.value;
_1308 = _1304.value;
_1309 = _1307 == _1308;
_1310 = (frost$core$Bit) {_1309};
_1312 = _1310.value;
if (_1312) goto block281; else goto block282;
block281:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1315 = ((frost$core$Object*) &$s190);
frost$core$Frost$ref$frost$core$Object$Q(_1315);
return &$s191;
block282:;
_1318 = (frost$core$Int) {94u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1321 = _1.value;
_1322 = _1318.value;
_1323 = _1321 == _1322;
_1324 = (frost$core$Bit) {_1323};
_1326 = _1324.value;
if (_1326) goto block284; else goto block285;
block284:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1329 = ((frost$core$Object*) &$s192);
frost$core$Frost$ref$frost$core$Object$Q(_1329);
return &$s193;
block285:;
_1332 = (frost$core$Int) {95u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1335 = _1.value;
_1336 = _1332.value;
_1337 = _1335 == _1336;
_1338 = (frost$core$Bit) {_1337};
_1340 = _1338.value;
if (_1340) goto block287; else goto block288;
block287:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1343 = ((frost$core$Object*) &$s194);
frost$core$Frost$ref$frost$core$Object$Q(_1343);
return &$s195;
block288:;
_1346 = (frost$core$Int) {96u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1349 = _1.value;
_1350 = _1346.value;
_1351 = _1349 == _1350;
_1352 = (frost$core$Bit) {_1351};
_1354 = _1352.value;
if (_1354) goto block290; else goto block291;
block290:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1357 = ((frost$core$Object*) &$s196);
frost$core$Frost$ref$frost$core$Object$Q(_1357);
return &$s197;
block291:;
_1360 = (frost$core$Int) {97u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1363 = _1.value;
_1364 = _1360.value;
_1365 = _1363 == _1364;
_1366 = (frost$core$Bit) {_1365};
_1368 = _1366.value;
if (_1368) goto block293; else goto block294;
block293:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1371 = ((frost$core$Object*) &$s198);
frost$core$Frost$ref$frost$core$Object$Q(_1371);
return &$s199;
block294:;
_1374 = (frost$core$Int) {98u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1377 = _1.value;
_1378 = _1374.value;
_1379 = _1377 == _1378;
_1380 = (frost$core$Bit) {_1379};
_1382 = _1380.value;
if (_1382) goto block296; else goto block297;
block296:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1385 = ((frost$core$Object*) &$s200);
frost$core$Frost$ref$frost$core$Object$Q(_1385);
return &$s201;
block297:;
_1388 = (frost$core$Int) {99u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1391 = _1.value;
_1392 = _1388.value;
_1393 = _1391 == _1392;
_1394 = (frost$core$Bit) {_1393};
_1396 = _1394.value;
if (_1396) goto block299; else goto block300;
block299:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1399 = ((frost$core$Object*) &$s202);
frost$core$Frost$ref$frost$core$Object$Q(_1399);
return &$s203;
block300:;
_1402 = (frost$core$Int) {100u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1405 = _1.value;
_1406 = _1402.value;
_1407 = _1405 == _1406;
_1408 = (frost$core$Bit) {_1407};
_1410 = _1408.value;
if (_1410) goto block302; else goto block303;
block302:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1413 = ((frost$core$Object*) &$s204);
frost$core$Frost$ref$frost$core$Object$Q(_1413);
return &$s205;
block303:;
_1416 = (frost$core$Int) {101u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1419 = _1.value;
_1420 = _1416.value;
_1421 = _1419 == _1420;
_1422 = (frost$core$Bit) {_1421};
_1424 = _1422.value;
if (_1424) goto block305; else goto block306;
block305:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1427 = ((frost$core$Object*) &$s206);
frost$core$Frost$ref$frost$core$Object$Q(_1427);
return &$s207;
block306:;
_1430 = (frost$core$Int) {102u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1433 = _1.value;
_1434 = _1430.value;
_1435 = _1433 == _1434;
_1436 = (frost$core$Bit) {_1435};
_1438 = _1436.value;
if (_1438) goto block308; else goto block309;
block308:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1441 = ((frost$core$Object*) &$s208);
frost$core$Frost$ref$frost$core$Object$Q(_1441);
return &$s209;
block309:;
_1444 = (frost$core$Int) {103u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1447 = _1.value;
_1448 = _1444.value;
_1449 = _1447 == _1448;
_1450 = (frost$core$Bit) {_1449};
_1452 = _1450.value;
if (_1452) goto block311; else goto block312;
block311:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1455 = ((frost$core$Object*) &$s210);
frost$core$Frost$ref$frost$core$Object$Q(_1455);
return &$s211;
block312:;
_1458 = (frost$core$Int) {104u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1461 = _1.value;
_1462 = _1458.value;
_1463 = _1461 == _1462;
_1464 = (frost$core$Bit) {_1463};
_1466 = _1464.value;
if (_1466) goto block314; else goto block315;
block314:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1469 = ((frost$core$Object*) &$s212);
frost$core$Frost$ref$frost$core$Object$Q(_1469);
return &$s213;
block315:;
_1472 = (frost$core$Int) {105u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1475 = _1.value;
_1476 = _1472.value;
_1477 = _1475 == _1476;
_1478 = (frost$core$Bit) {_1477};
_1480 = _1478.value;
if (_1480) goto block317; else goto block318;
block317:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1483 = ((frost$core$Object*) &$s214);
frost$core$Frost$ref$frost$core$Object$Q(_1483);
return &$s215;
block318:;
_1486 = (frost$core$Int) {106u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1489 = _1.value;
_1490 = _1486.value;
_1491 = _1489 == _1490;
_1492 = (frost$core$Bit) {_1491};
_1494 = _1492.value;
if (_1494) goto block320; else goto block321;
block320:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1497 = ((frost$core$Object*) &$s216);
frost$core$Frost$ref$frost$core$Object$Q(_1497);
return &$s217;
block321:;
_1500 = (frost$core$Int) {107u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1503 = _1.value;
_1504 = _1500.value;
_1505 = _1503 == _1504;
_1506 = (frost$core$Bit) {_1505};
_1508 = _1506.value;
if (_1508) goto block323; else goto block324;
block323:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1511 = ((frost$core$Object*) &$s218);
frost$core$Frost$ref$frost$core$Object$Q(_1511);
return &$s219;
block324:;
_1514 = (frost$core$Int) {108u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1517 = _1.value;
_1518 = _1514.value;
_1519 = _1517 == _1518;
_1520 = (frost$core$Bit) {_1519};
_1522 = _1520.value;
if (_1522) goto block326; else goto block327;
block326:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1525 = ((frost$core$Object*) &$s220);
frost$core$Frost$ref$frost$core$Object$Q(_1525);
return &$s221;
block327:;
_1528 = (frost$core$Int) {109u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1531 = _1.value;
_1532 = _1528.value;
_1533 = _1531 == _1532;
_1534 = (frost$core$Bit) {_1533};
_1536 = _1534.value;
if (_1536) goto block329; else goto block330;
block329:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1539 = ((frost$core$Object*) &$s222);
frost$core$Frost$ref$frost$core$Object$Q(_1539);
return &$s223;
block330:;
_1542 = (frost$core$Int) {110u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1545 = _1.value;
_1546 = _1542.value;
_1547 = _1545 == _1546;
_1548 = (frost$core$Bit) {_1547};
_1550 = _1548.value;
if (_1550) goto block332; else goto block333;
block332:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1553 = ((frost$core$Object*) &$s224);
frost$core$Frost$ref$frost$core$Object$Q(_1553);
return &$s225;
block333:;
_1556 = (frost$core$Int) {111u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1559 = _1.value;
_1560 = _1556.value;
_1561 = _1559 == _1560;
_1562 = (frost$core$Bit) {_1561};
_1564 = _1562.value;
if (_1564) goto block335; else goto block336;
block335:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1567 = ((frost$core$Object*) &$s226);
frost$core$Frost$ref$frost$core$Object$Q(_1567);
return &$s227;
block336:;
_1570 = (frost$core$Int) {112u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1573 = _1.value;
_1574 = _1570.value;
_1575 = _1573 == _1574;
_1576 = (frost$core$Bit) {_1575};
_1578 = _1576.value;
if (_1578) goto block338; else goto block339;
block338:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1581 = ((frost$core$Object*) &$s228);
frost$core$Frost$ref$frost$core$Object$Q(_1581);
return &$s229;
block339:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
_1585 = (frost$core$Int) {11u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s230, _1585);
abort(); // unreachable
block1:;
goto block341;
block341:;

}






