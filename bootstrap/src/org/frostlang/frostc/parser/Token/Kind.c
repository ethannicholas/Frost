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

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
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
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 38, -5226343182384548052, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 38, -5226343182384548052, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x6f\x6b\x65\x6e\x2e\x66\x72\x6f\x73\x74", 11, -2945524549076434626, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x6f\x6b\x65\x6e\x2e\x66\x72\x6f\x73\x74", 11, -2945524549076434626, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x45\x4f\x46", 3, -2780652702254013407, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x45\x4f\x46", 3, -2780652702254013407, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x48\x49\x46\x54\x52\x49\x47\x48\x54", 10, -854006556755980733, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x48\x49\x46\x54\x52\x49\x47\x48\x54", 10, -854006556755980733, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x45\x47\x45\x58", 5, -1832243356126634376, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x45\x47\x45\x58", 5, -1832243356126634376, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x44\x45\x43\x49\x4d\x41\x4c", 7, -4421263928146067476, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x44\x45\x43\x49\x4d\x41\x4c", 7, -4421263928146067476, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x49\x4e\x41\x52\x59", 6, 3180398050091593148, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x49\x4e\x41\x52\x59", 6, 3180398050091593148, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x48\x45\x58", 3, 5314357622289828202, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x48\x45\x58", 3, 5314357622289828202, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x45\x41\x4c", 4, -8527112705117131683, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x45\x41\x4c", 4, -8527112705117131683, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x49\x4e\x47\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, 8524030245501661566, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x49\x4e\x47\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, 8524030245501661566, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x44\x4f\x55\x42\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, 5858367662667776935, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x44\x4f\x55\x42\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, 5858367662667776935, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x49\x4e\x45\x5f\x43\x4f\x4d\x4d\x45\x4e\x54", 12, -4985822287803552931, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x49\x4e\x45\x5f\x43\x4f\x4d\x4d\x45\x4e\x54", 12, -4985822287803552931, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x4c\x4f\x43\x4b\x5f\x43\x4f\x4d\x4d\x45\x4e\x54\x5f\x53\x54\x41\x52\x54", 19, -1035988180762846889, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x4c\x4f\x43\x4b\x5f\x43\x4f\x4d\x4d\x45\x4e\x54\x5f\x53\x54\x41\x52\x54", 19, -1035988180762846889, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x4c\x4f\x43\x4b\x5f\x43\x4f\x4d\x4d\x45\x4e\x54\x5f\x45\x4e\x44", 17, -3169533535160638894, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x4c\x4f\x43\x4b\x5f\x43\x4f\x4d\x4d\x45\x4e\x54\x5f\x45\x4e\x44", 17, -3169533535160638894, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x44\x4f\x43\x5f\x43\x4f\x4d\x4d\x45\x4e\x54", 11, -854743268890280045, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x44\x4f\x43\x5f\x43\x4f\x4d\x4d\x45\x4e\x54", 11, -854743268890280045, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x48\x49\x54\x45\x53\x50\x41\x43\x45", 10, -3276662447725882720, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x48\x49\x54\x45\x53\x50\x41\x43\x45", 10, -3276662447725882720, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x4e\x4e\x4f\x54\x41\x54\x49\x4f\x4e", 10, -6766455421495095064, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x4e\x4e\x4f\x54\x41\x54\x49\x4f\x4e", 10, -6766455421495095064, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x50\x41\x43\x4b\x41\x47\x45", 7, 4214258907844905339, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x50\x41\x43\x4b\x41\x47\x45", 7, 4214258907844905339, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x55\x53\x45\x53", 4, -7962572020183094811, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x55\x53\x45\x53", 4, -7962572020183094811, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x53", 2, 650898822127487629, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x53", 2, 650898822127487629, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x4c\x41\x53\x53", 5, 8927326264370171455, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x4c\x41\x53\x53", 5, 8927326264370171455, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e\x54\x45\x52\x46\x41\x43\x45", 9, 6497765481944569648, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e\x54\x45\x52\x46\x41\x43\x45", 9, 6497765481944569648, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x48\x4f\x49\x43\x45", 6, 422481043336243254, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x48\x4f\x49\x43\x45", 6, 422481043336243254, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x55\x4e\x43\x54\x49\x4f\x4e", 8, 5163167664221876233, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x55\x4e\x43\x54\x49\x4f\x4e", 8, 5163167664221876233, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x45\x54\x48\x4f\x44", 6, 7192733565866671856, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x45\x54\x48\x4f\x44", 6, 7192733565866671856, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e\x49\x54", 4, 775939446952026579, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e\x49\x54", 4, 775939446952026579, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x56\x41\x52", 3, 8940586553584031198, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x56\x41\x52", 3, 8940586553584031198, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x44\x45\x46", 3, -2290544294605466196, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x44\x45\x46", 3, -2290544294605466196, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x50\x52\x4f\x50\x45\x52\x54\x59", 8, 6193835437963882760, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x50\x52\x4f\x50\x45\x52\x54\x59", 8, 6193835437963882760, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x4f\x4e\x53\x54\x41\x4e\x54", 8, 7784245047744762789, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x4f\x4e\x53\x54\x41\x4e\x54", 8, 7784245047744762789, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x45\x54\x55\x52\x4e", 6, 3682372857926802591, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x45\x54\x55\x52\x4e", 6, 3682372857926802591, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x52\x45\x41\x4b", 5, 1390767274722343896, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x52\x45\x41\x4b", 5, 1390767274722343896, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x4f\x4e\x54\x49\x4e\x55\x45", 8, -1218937278262061340, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x4f\x4e\x54\x49\x4e\x55\x45", 8, -1218937278262061340, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x44\x4f", 2, 648018101662142484, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x44\x4f", 2, 648018101662142484, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x48\x49\x4c\x45", 5, -6746519810156181554, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x48\x49\x4c\x45", 5, -6746519810156181554, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x4f\x52", 3, -925357672022179216, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x4f\x52", 3, -925357672022179216, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x59", 2, 653913683011474516, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x59", 2, 653913683011474516, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e", 2, 658677866895566654, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e", 2, 658677866895566654, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x4f\x4f\x50", 4, 7310791030102272107, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x4f\x4f\x50", 4, 7310791030102272107, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x46", 2, 658669070802540966, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x46", 2, 658669070802540966, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x45\x4c\x53\x45", 4, -4659697924760971984, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x45\x4c\x53\x45", 4, -4659697924760971984, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x41\x54\x43\x48", 5, -7462029077894567594, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x41\x54\x43\x48", 5, -7462029077894567594, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x48\x45\x4e", 4, -2585065074016245767, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x48\x45\x4e", 4, -2585065074016245767, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4f\x54\x48\x45\x52\x57\x49\x53\x45", 9, 4281552231092500061, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4f\x54\x48\x45\x52\x57\x49\x53\x45", 9, 4281552231092500061, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x52\x55\x45", 4, 8092504513751138981, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x52\x55\x45", 4, 8092504513751138981, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x41\x4c\x53\x45", 5, 710666245702197400, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x41\x4c\x53\x45", 5, 710666245702197400, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4e\x55\x4c\x4c", 4, 8049205518224136996, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4e\x55\x4c\x4c", 4, 8049205518224136996, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x53\x53\x45\x52\x54", 6, -2770764151085366373, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x53\x53\x45\x52\x54", 6, -2770764151085366373, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x55\x4e\x52\x45\x41\x43\x48\x41\x42\x4c\x45", 11, -1266078107571979791, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x55\x4e\x52\x45\x41\x43\x48\x41\x42\x4c\x45", 11, -1266078107571979791, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x52\x59", 3, 7829227687881249998, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x52\x59", 3, 7829227687881249998, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x41\x49\x4c", 4, 3215402482899151853, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x41\x49\x4c", 4, 3215402482899151853, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x45\x4c\x46", 4, 4758868999504809847, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x45\x4c\x46", 4, 4758868999504809847, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x55\x50\x45\x52", 5, 5795199294677836756, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x55\x50\x45\x52", 5, 5795199294677836756, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x41\x5a\x59", 4, -7529778104896043217, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x41\x5a\x59", 4, -7529778104896043217, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x4f\x44\x55\x4c\x45", 6, 72160643508752349, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x4f\x44\x55\x4c\x45", 6, 72160643508752349, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x50\x45\x43\x49\x41\x4c\x49\x5a\x41\x54\x49\x4f\x4e", 14, -3997141659759939032, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x50\x45\x43\x49\x41\x4c\x49\x5a\x41\x54\x49\x4f\x4e", 14, -3997141659759939032, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x44\x45\x4e\x54\x49\x46\x49\x45\x52", 10, 6705406146079849566, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x44\x45\x4e\x54\x49\x46\x49\x45\x52", 10, 6705406146079849566, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4e\x4f\x54", 3, 3960658697195819050, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4e\x4f\x54", 3, 3960658697195819050, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x49\x54\x57\x49\x53\x45\x4e\x4f\x54", 10, 7590891947359604737, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x49\x54\x57\x49\x53\x45\x4e\x4f\x54", 10, 7590891947359604737, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x44\x44", 3, -424742331256529164, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x44\x44", 3, -424742331256529164, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x55\x42", 3, -7490157870346156267, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x55\x42", 3, -7490157870346156267, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x55\x4c", 3, 2187805048830972289, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x55\x4c", 3, 2187805048830972289, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x44\x49\x56", 3, -2286568460558612120, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x44\x49\x56", 3, -2286568460558612120, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e\x54\x44\x49\x56", 6, 236947128255071689, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e\x54\x44\x49\x56", 6, 236947128255071689, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x45\x4d", 3, -6890851465363405241, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x45\x4d", 3, -6890851465363405241, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x50\x4f\x57", 3, -8271037625575719083, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x50\x4f\x57", 3, -8271037625575719083, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x45\x51", 2, 647211060127224835, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x45\x51", 2, 647211060127224835, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4e\x45\x51", 3, 3951089647497390967, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4e\x45\x51", 3, 3951089647497390967, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x44\x45\x4e\x54\x49\x54\x59", 8, -5582706505953877701, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x44\x45\x4e\x54\x49\x54\x59", 8, -5582706505953877701, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4e\x49\x44\x45\x4e\x54\x49\x54\x59", 9, 6439203883259295967, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4e\x49\x44\x45\x4e\x54\x49\x54\x59", 9, 6439203883259295967, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x54", 2, 655682797220887565, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x54", 2, 655682797220887565, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x47\x54", 2, 649118712801792470, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x47\x54", 2, 649118712801792470, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x54\x45\x51", 4, 5720195730142804299, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x54\x45\x51", 4, 5720195730142804299, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x47\x54\x45\x51", 4, -194475579662543288, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x47\x54\x45\x51", 4, -194475579662543288, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x4e\x44", 3, -430490578047680922, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x4e\x44", 3, -430490578047680922, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x49\x54\x57\x49\x53\x45\x41\x4e\x44", 10, -508925442021829239, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x49\x54\x57\x49\x53\x45\x41\x4e\x44", 10, -508925442021829239, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4f\x52", 2, 656738328383780900, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4f\x52", 2, 656738328383780900, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x49\x54\x57\x49\x53\x45\x4f\x52", 9, 4106761120429910253, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x49\x54\x57\x49\x53\x45\x4f\x52", 9, 4106761120429910253, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x58\x4f\x52", 3, -3262591736092274978, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x58\x4f\x52", 3, -3262591736092274978, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x49\x54\x57\x49\x53\x45\x58\x4f\x52", 10, -6137086871326903227, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x49\x54\x57\x49\x53\x45\x58\x4f\x52", 10, -6137086871326903227, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x48\x49\x46\x54\x4c\x45\x46\x54", 9, -2576167377767570706, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x48\x49\x46\x54\x4c\x45\x46\x54", 9, -2576167377767570706, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x53\x53\x49\x47\x4e\x4d\x45\x4e\x54", 10, -4802925920175815696, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x53\x53\x49\x47\x4e\x4d\x45\x4e\x54", 10, -4802925920175815696, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x44\x44\x45\x51", 5, 8976745075867355670, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x44\x44\x45\x51", 5, 8976745075867355670, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x55\x42\x45\x51", 5, -1294301046623021677, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x55\x42\x45\x51", 5, -1294301046623021677, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x55\x4c\x45\x51", 5, -6678819885994840569, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x55\x4c\x45\x51", 5, -6678819885994840569, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x44\x49\x56\x45\x51", 5, -4675304909104048750, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x44\x49\x56\x45\x51", 5, -4675304909104048750, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x45\x4d\x45\x51", 5, 1790334097051036789, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x45\x4d\x45\x51", 5, 1790334097051036789, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e\x54\x44\x49\x56\x45\x51", 8, 525286096538892175, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e\x54\x44\x49\x56\x45\x51", 8, 525286096538892175, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x50\x4f\x57\x45\x51", 5, 7905706922760248531, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x50\x4f\x57\x45\x51", 5, 7905706922760248531, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4f\x52\x45\x51", 4, -362280561266835226, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4f\x52\x45\x51", 4, -362280561266835226, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x49\x54\x57\x49\x53\x45\x4f\x52\x45\x51", 11, 8723670896618697899, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x49\x54\x57\x49\x53\x45\x4f\x52\x45\x51", 11, 8723670896618697899, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x4e\x44\x45\x51", 5, 8604071991207326456, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x4e\x44\x45\x51", 5, 8604071991207326456, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x49\x54\x57\x49\x53\x45\x41\x4e\x44\x45\x51", 12, -4110952405141345457, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x49\x54\x57\x49\x53\x45\x41\x4e\x44\x45\x51", 12, -4110952405141345457, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x58\x4f\x52\x45\x51", 5, 4441309431091541136, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x58\x4f\x52\x45\x51", 5, 4441309431091541136, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x49\x54\x57\x49\x53\x45\x58\x4f\x52\x45\x51", 12, -4045050825354945117, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x49\x54\x57\x49\x53\x45\x58\x4f\x52\x45\x51", 12, -4045050825354945117, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x48\x49\x46\x54\x4c\x45\x46\x54\x45\x51", 11, 8065439914669260352, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x48\x49\x46\x54\x4c\x45\x46\x54\x45\x51", 11, 8065439914669260352, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x48\x49\x46\x54\x52\x49\x47\x48\x54\x45\x51", 12, 5231704650367263801, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x48\x49\x46\x54\x52\x49\x47\x48\x54\x45\x51", 12, 5231704650367263801, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x41\x53\x54", 4, -3929828708733151922, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x41\x53\x54", 4, -3929828708733151922, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x59\x49\x45\x4c\x44\x53", 6, 5021467569829040391, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x59\x49\x45\x4c\x44\x53", 6, 5021467569829040391, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x59\x49\x45\x4c\x44\x53\x5f\x4d\x45\x54\x48\x4f\x44", 13, 2812181468845568921, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x59\x49\x45\x4c\x44\x53\x5f\x4d\x45\x54\x48\x4f\x44", 13, 2812181468845568921, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x59\x49\x45\x4c\x44\x53\x5f\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 16, -531539132585377116, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x59\x49\x45\x4c\x44\x53\x5f\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 16, -531539132585377116, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x59\x49\x45\x4c\x44\x53\x5f\x4d\x45\x54\x48\x4f\x44\x5f\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 23, 1977457359173694958, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x59\x49\x45\x4c\x44\x53\x5f\x4d\x45\x54\x48\x4f\x44\x5f\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 23, 1977457359173694958, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x51\x55\x45\x53\x54\x49\x4f\x4e", 8, -1653254887467171387, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x51\x55\x45\x53\x54\x49\x4f\x4e", 8, -1653254887467171387, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x4f\x4c\x4f\x4e", 5, -609265884448102340, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x4f\x4c\x4f\x4e", 5, -609265884448102340, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x45\x4c\x4c\x49\x50\x53\x49\x53", 8, 3616480144494687938, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x45\x4c\x4c\x49\x50\x53\x49\x53", 8, 3616480144494687938, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x44\x4f\x54\x44\x4f\x54", 6, 5185479590340089303, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x44\x4f\x54\x44\x4f\x54", 6, 5185479590340089303, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x44\x4f\x54", 3, -2284688295674749760, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x44\x4f\x54", 3, -2284688295674749760, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x42\x52\x41\x43\x45", 6, 718761851555915894, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x42\x52\x41\x43\x45", 6, 718761851555915894, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x42\x52\x41\x43\x45", 6, 2789542229241279848, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x42\x52\x41\x43\x45", 6, 2789542229241279848, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, -5015735881644584683, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, -5015735881644584683, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 8505961967228289923, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 8505961967228289923, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x50\x41\x52\x45\x4e", 6, 3876691553076048869, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x50\x41\x52\x45\x4e", 6, 3876691553076048869, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x50\x41\x52\x45\x4e", 6, -3536911959274103509, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x52\x50\x41\x52\x45\x4e", 6, -3536911959274103509, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x4f\x4d\x4d\x41", 5, -1378825067955875400, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x4f\x4d\x4d\x41", 5, -1378825067955875400, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x41\x43\x4b\x53\x4c\x41\x53\x48", 9, -3293626981209672713, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x41\x43\x4b\x53\x4c\x41\x53\x48", 9, -3293626981209672713, NULL };
static frost$core$String $s231 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e\x56\x41\x4c\x49\x44", 7, 4384553811495809008, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x4e\x56\x41\x4c\x49\x44", 7, 4384553811495809008, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x6f\x6b\x65\x6e\x2e\x66\x72\x6f\x73\x74", 11, -2945524549076434626, NULL };

void org$frostlang$frostc$parser$Token$Kind$cleanup(org$frostlang$frostc$parser$Token$Kind param0) {

return;

}
org$frostlang$frostc$parser$Token$Kind org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int(frost$core$Int param0) {

org$frostlang$frostc$parser$Token$Kind local0;
frost$core$Int* _1;
org$frostlang$frostc$parser$Token$Kind _3;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1 = &(&local0)->$rawValue;
*_1 = param0;
_3 = *(&local0);
return _3;

}
frost$core$Bit org$frostlang$frostc$parser$Token$Kind$$EQ$org$frostlang$frostc$parser$Token$Kind$R$frost$core$Bit(org$frostlang$frostc$parser$Token$Kind param0, org$frostlang$frostc$parser$Token$Kind param1) {

frost$core$Int _1;
frost$core$Int _2;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _10;
frost$core$Int _13;
frost$core$Int _14;
int64_t _17;
int64_t _18;
bool _19;
frost$core$Bit _20;
bool _22;
frost$core$Bit _25;
frost$core$Bit _28;
frost$core$Int _31;
int64_t _34;
int64_t _35;
bool _36;
frost$core$Bit _37;
bool _39;
frost$core$Int _42;
frost$core$Int _43;
int64_t _46;
int64_t _47;
bool _48;
frost$core$Bit _49;
bool _51;
frost$core$Bit _54;
frost$core$Bit _57;
frost$core$Int _60;
int64_t _63;
int64_t _64;
bool _65;
frost$core$Bit _66;
bool _68;
frost$core$Int _71;
frost$core$Int _72;
int64_t _75;
int64_t _76;
bool _77;
frost$core$Bit _78;
bool _80;
frost$core$Bit _83;
frost$core$Bit _86;
frost$core$Int _89;
int64_t _92;
int64_t _93;
bool _94;
frost$core$Bit _95;
bool _97;
frost$core$Int _100;
frost$core$Int _101;
int64_t _104;
int64_t _105;
bool _106;
frost$core$Bit _107;
bool _109;
frost$core$Bit _112;
frost$core$Bit _115;
frost$core$Int _118;
int64_t _121;
int64_t _122;
bool _123;
frost$core$Bit _124;
bool _126;
frost$core$Int _129;
frost$core$Int _130;
int64_t _133;
int64_t _134;
bool _135;
frost$core$Bit _136;
bool _138;
frost$core$Bit _141;
frost$core$Bit _144;
frost$core$Int _147;
int64_t _150;
int64_t _151;
bool _152;
frost$core$Bit _153;
bool _155;
frost$core$Int _158;
frost$core$Int _159;
int64_t _162;
int64_t _163;
bool _164;
frost$core$Bit _165;
bool _167;
frost$core$Bit _170;
frost$core$Bit _173;
frost$core$Int _176;
int64_t _179;
int64_t _180;
bool _181;
frost$core$Bit _182;
bool _184;
frost$core$Int _187;
frost$core$Int _188;
int64_t _191;
int64_t _192;
bool _193;
frost$core$Bit _194;
bool _196;
frost$core$Bit _199;
frost$core$Bit _202;
frost$core$Int _205;
int64_t _208;
int64_t _209;
bool _210;
frost$core$Bit _211;
bool _213;
frost$core$Int _216;
frost$core$Int _217;
int64_t _220;
int64_t _221;
bool _222;
frost$core$Bit _223;
bool _225;
frost$core$Bit _228;
frost$core$Bit _231;
frost$core$Int _234;
int64_t _237;
int64_t _238;
bool _239;
frost$core$Bit _240;
bool _242;
frost$core$Int _245;
frost$core$Int _246;
int64_t _249;
int64_t _250;
bool _251;
frost$core$Bit _252;
bool _254;
frost$core$Bit _257;
frost$core$Bit _260;
frost$core$Int _263;
int64_t _266;
int64_t _267;
bool _268;
frost$core$Bit _269;
bool _271;
frost$core$Int _274;
frost$core$Int _275;
int64_t _278;
int64_t _279;
bool _280;
frost$core$Bit _281;
bool _283;
frost$core$Bit _286;
frost$core$Bit _289;
frost$core$Int _292;
int64_t _295;
int64_t _296;
bool _297;
frost$core$Bit _298;
bool _300;
frost$core$Int _303;
frost$core$Int _304;
int64_t _307;
int64_t _308;
bool _309;
frost$core$Bit _310;
bool _312;
frost$core$Bit _315;
frost$core$Bit _318;
frost$core$Int _321;
int64_t _324;
int64_t _325;
bool _326;
frost$core$Bit _327;
bool _329;
frost$core$Int _332;
frost$core$Int _333;
int64_t _336;
int64_t _337;
bool _338;
frost$core$Bit _339;
bool _341;
frost$core$Bit _344;
frost$core$Bit _347;
frost$core$Int _350;
int64_t _353;
int64_t _354;
bool _355;
frost$core$Bit _356;
bool _358;
frost$core$Int _361;
frost$core$Int _362;
int64_t _365;
int64_t _366;
bool _367;
frost$core$Bit _368;
bool _370;
frost$core$Bit _373;
frost$core$Bit _376;
frost$core$Int _379;
int64_t _382;
int64_t _383;
bool _384;
frost$core$Bit _385;
bool _387;
frost$core$Int _390;
frost$core$Int _391;
int64_t _394;
int64_t _395;
bool _396;
frost$core$Bit _397;
bool _399;
frost$core$Bit _402;
frost$core$Bit _405;
frost$core$Int _408;
int64_t _411;
int64_t _412;
bool _413;
frost$core$Bit _414;
bool _416;
frost$core$Int _419;
frost$core$Int _420;
int64_t _423;
int64_t _424;
bool _425;
frost$core$Bit _426;
bool _428;
frost$core$Bit _431;
frost$core$Bit _434;
frost$core$Int _437;
int64_t _440;
int64_t _441;
bool _442;
frost$core$Bit _443;
bool _445;
frost$core$Int _448;
frost$core$Int _449;
int64_t _452;
int64_t _453;
bool _454;
frost$core$Bit _455;
bool _457;
frost$core$Bit _460;
frost$core$Bit _463;
frost$core$Int _466;
int64_t _469;
int64_t _470;
bool _471;
frost$core$Bit _472;
bool _474;
frost$core$Int _477;
frost$core$Int _478;
int64_t _481;
int64_t _482;
bool _483;
frost$core$Bit _484;
bool _486;
frost$core$Bit _489;
frost$core$Bit _492;
frost$core$Int _495;
int64_t _498;
int64_t _499;
bool _500;
frost$core$Bit _501;
bool _503;
frost$core$Int _506;
frost$core$Int _507;
int64_t _510;
int64_t _511;
bool _512;
frost$core$Bit _513;
bool _515;
frost$core$Bit _518;
frost$core$Bit _521;
frost$core$Int _524;
int64_t _527;
int64_t _528;
bool _529;
frost$core$Bit _530;
bool _532;
frost$core$Int _535;
frost$core$Int _536;
int64_t _539;
int64_t _540;
bool _541;
frost$core$Bit _542;
bool _544;
frost$core$Bit _547;
frost$core$Bit _550;
frost$core$Int _553;
int64_t _556;
int64_t _557;
bool _558;
frost$core$Bit _559;
bool _561;
frost$core$Int _564;
frost$core$Int _565;
int64_t _568;
int64_t _569;
bool _570;
frost$core$Bit _571;
bool _573;
frost$core$Bit _576;
frost$core$Bit _579;
frost$core$Int _582;
int64_t _585;
int64_t _586;
bool _587;
frost$core$Bit _588;
bool _590;
frost$core$Int _593;
frost$core$Int _594;
int64_t _597;
int64_t _598;
bool _599;
frost$core$Bit _600;
bool _602;
frost$core$Bit _605;
frost$core$Bit _608;
frost$core$Int _611;
int64_t _614;
int64_t _615;
bool _616;
frost$core$Bit _617;
bool _619;
frost$core$Int _622;
frost$core$Int _623;
int64_t _626;
int64_t _627;
bool _628;
frost$core$Bit _629;
bool _631;
frost$core$Bit _634;
frost$core$Bit _637;
frost$core$Int _640;
int64_t _643;
int64_t _644;
bool _645;
frost$core$Bit _646;
bool _648;
frost$core$Int _651;
frost$core$Int _652;
int64_t _655;
int64_t _656;
bool _657;
frost$core$Bit _658;
bool _660;
frost$core$Bit _663;
frost$core$Bit _666;
frost$core$Int _669;
int64_t _672;
int64_t _673;
bool _674;
frost$core$Bit _675;
bool _677;
frost$core$Int _680;
frost$core$Int _681;
int64_t _684;
int64_t _685;
bool _686;
frost$core$Bit _687;
bool _689;
frost$core$Bit _692;
frost$core$Bit _695;
frost$core$Int _698;
int64_t _701;
int64_t _702;
bool _703;
frost$core$Bit _704;
bool _706;
frost$core$Int _709;
frost$core$Int _710;
int64_t _713;
int64_t _714;
bool _715;
frost$core$Bit _716;
bool _718;
frost$core$Bit _721;
frost$core$Bit _724;
frost$core$Int _727;
int64_t _730;
int64_t _731;
bool _732;
frost$core$Bit _733;
bool _735;
frost$core$Int _738;
frost$core$Int _739;
int64_t _742;
int64_t _743;
bool _744;
frost$core$Bit _745;
bool _747;
frost$core$Bit _750;
frost$core$Bit _753;
frost$core$Int _756;
int64_t _759;
int64_t _760;
bool _761;
frost$core$Bit _762;
bool _764;
frost$core$Int _767;
frost$core$Int _768;
int64_t _771;
int64_t _772;
bool _773;
frost$core$Bit _774;
bool _776;
frost$core$Bit _779;
frost$core$Bit _782;
frost$core$Int _785;
int64_t _788;
int64_t _789;
bool _790;
frost$core$Bit _791;
bool _793;
frost$core$Int _796;
frost$core$Int _797;
int64_t _800;
int64_t _801;
bool _802;
frost$core$Bit _803;
bool _805;
frost$core$Bit _808;
frost$core$Bit _811;
frost$core$Int _814;
int64_t _817;
int64_t _818;
bool _819;
frost$core$Bit _820;
bool _822;
frost$core$Int _825;
frost$core$Int _826;
int64_t _829;
int64_t _830;
bool _831;
frost$core$Bit _832;
bool _834;
frost$core$Bit _837;
frost$core$Bit _840;
frost$core$Int _843;
int64_t _846;
int64_t _847;
bool _848;
frost$core$Bit _849;
bool _851;
frost$core$Int _854;
frost$core$Int _855;
int64_t _858;
int64_t _859;
bool _860;
frost$core$Bit _861;
bool _863;
frost$core$Bit _866;
frost$core$Bit _869;
frost$core$Int _872;
int64_t _875;
int64_t _876;
bool _877;
frost$core$Bit _878;
bool _880;
frost$core$Int _883;
frost$core$Int _884;
int64_t _887;
int64_t _888;
bool _889;
frost$core$Bit _890;
bool _892;
frost$core$Bit _895;
frost$core$Bit _898;
frost$core$Int _901;
int64_t _904;
int64_t _905;
bool _906;
frost$core$Bit _907;
bool _909;
frost$core$Int _912;
frost$core$Int _913;
int64_t _916;
int64_t _917;
bool _918;
frost$core$Bit _919;
bool _921;
frost$core$Bit _924;
frost$core$Bit _927;
frost$core$Int _930;
int64_t _933;
int64_t _934;
bool _935;
frost$core$Bit _936;
bool _938;
frost$core$Int _941;
frost$core$Int _942;
int64_t _945;
int64_t _946;
bool _947;
frost$core$Bit _948;
bool _950;
frost$core$Bit _953;
frost$core$Bit _956;
frost$core$Int _959;
int64_t _962;
int64_t _963;
bool _964;
frost$core$Bit _965;
bool _967;
frost$core$Int _970;
frost$core$Int _971;
int64_t _974;
int64_t _975;
bool _976;
frost$core$Bit _977;
bool _979;
frost$core$Bit _982;
frost$core$Bit _985;
frost$core$Int _988;
int64_t _991;
int64_t _992;
bool _993;
frost$core$Bit _994;
bool _996;
frost$core$Int _999;
frost$core$Int _1000;
int64_t _1003;
int64_t _1004;
bool _1005;
frost$core$Bit _1006;
bool _1008;
frost$core$Bit _1011;
frost$core$Bit _1014;
frost$core$Int _1017;
int64_t _1020;
int64_t _1021;
bool _1022;
frost$core$Bit _1023;
bool _1025;
frost$core$Int _1028;
frost$core$Int _1029;
int64_t _1032;
int64_t _1033;
bool _1034;
frost$core$Bit _1035;
bool _1037;
frost$core$Bit _1040;
frost$core$Bit _1043;
frost$core$Int _1046;
int64_t _1049;
int64_t _1050;
bool _1051;
frost$core$Bit _1052;
bool _1054;
frost$core$Int _1057;
frost$core$Int _1058;
int64_t _1061;
int64_t _1062;
bool _1063;
frost$core$Bit _1064;
bool _1066;
frost$core$Bit _1069;
frost$core$Bit _1072;
frost$core$Int _1075;
int64_t _1078;
int64_t _1079;
bool _1080;
frost$core$Bit _1081;
bool _1083;
frost$core$Int _1086;
frost$core$Int _1087;
int64_t _1090;
int64_t _1091;
bool _1092;
frost$core$Bit _1093;
bool _1095;
frost$core$Bit _1098;
frost$core$Bit _1101;
frost$core$Int _1104;
int64_t _1107;
int64_t _1108;
bool _1109;
frost$core$Bit _1110;
bool _1112;
frost$core$Int _1115;
frost$core$Int _1116;
int64_t _1119;
int64_t _1120;
bool _1121;
frost$core$Bit _1122;
bool _1124;
frost$core$Bit _1127;
frost$core$Bit _1130;
frost$core$Int _1133;
int64_t _1136;
int64_t _1137;
bool _1138;
frost$core$Bit _1139;
bool _1141;
frost$core$Int _1144;
frost$core$Int _1145;
int64_t _1148;
int64_t _1149;
bool _1150;
frost$core$Bit _1151;
bool _1153;
frost$core$Bit _1156;
frost$core$Bit _1159;
frost$core$Int _1162;
int64_t _1165;
int64_t _1166;
bool _1167;
frost$core$Bit _1168;
bool _1170;
frost$core$Int _1173;
frost$core$Int _1174;
int64_t _1177;
int64_t _1178;
bool _1179;
frost$core$Bit _1180;
bool _1182;
frost$core$Bit _1185;
frost$core$Bit _1188;
frost$core$Int _1191;
int64_t _1194;
int64_t _1195;
bool _1196;
frost$core$Bit _1197;
bool _1199;
frost$core$Int _1202;
frost$core$Int _1203;
int64_t _1206;
int64_t _1207;
bool _1208;
frost$core$Bit _1209;
bool _1211;
frost$core$Bit _1214;
frost$core$Bit _1217;
frost$core$Int _1220;
int64_t _1223;
int64_t _1224;
bool _1225;
frost$core$Bit _1226;
bool _1228;
frost$core$Int _1231;
frost$core$Int _1232;
int64_t _1235;
int64_t _1236;
bool _1237;
frost$core$Bit _1238;
bool _1240;
frost$core$Bit _1243;
frost$core$Bit _1246;
frost$core$Int _1249;
int64_t _1252;
int64_t _1253;
bool _1254;
frost$core$Bit _1255;
bool _1257;
frost$core$Int _1260;
frost$core$Int _1261;
int64_t _1264;
int64_t _1265;
bool _1266;
frost$core$Bit _1267;
bool _1269;
frost$core$Bit _1272;
frost$core$Bit _1275;
frost$core$Int _1278;
int64_t _1281;
int64_t _1282;
bool _1283;
frost$core$Bit _1284;
bool _1286;
frost$core$Int _1289;
frost$core$Int _1290;
int64_t _1293;
int64_t _1294;
bool _1295;
frost$core$Bit _1296;
bool _1298;
frost$core$Bit _1301;
frost$core$Bit _1304;
frost$core$Int _1307;
int64_t _1310;
int64_t _1311;
bool _1312;
frost$core$Bit _1313;
bool _1315;
frost$core$Int _1318;
frost$core$Int _1319;
int64_t _1322;
int64_t _1323;
bool _1324;
frost$core$Bit _1325;
bool _1327;
frost$core$Bit _1330;
frost$core$Bit _1333;
frost$core$Int _1336;
int64_t _1339;
int64_t _1340;
bool _1341;
frost$core$Bit _1342;
bool _1344;
frost$core$Int _1347;
frost$core$Int _1348;
int64_t _1351;
int64_t _1352;
bool _1353;
frost$core$Bit _1354;
bool _1356;
frost$core$Bit _1359;
frost$core$Bit _1362;
frost$core$Int _1365;
int64_t _1368;
int64_t _1369;
bool _1370;
frost$core$Bit _1371;
bool _1373;
frost$core$Int _1376;
frost$core$Int _1377;
int64_t _1380;
int64_t _1381;
bool _1382;
frost$core$Bit _1383;
bool _1385;
frost$core$Bit _1388;
frost$core$Bit _1391;
frost$core$Int _1394;
int64_t _1397;
int64_t _1398;
bool _1399;
frost$core$Bit _1400;
bool _1402;
frost$core$Int _1405;
frost$core$Int _1406;
int64_t _1409;
int64_t _1410;
bool _1411;
frost$core$Bit _1412;
bool _1414;
frost$core$Bit _1417;
frost$core$Bit _1420;
frost$core$Int _1423;
int64_t _1426;
int64_t _1427;
bool _1428;
frost$core$Bit _1429;
bool _1431;
frost$core$Int _1434;
frost$core$Int _1435;
int64_t _1438;
int64_t _1439;
bool _1440;
frost$core$Bit _1441;
bool _1443;
frost$core$Bit _1446;
frost$core$Bit _1449;
frost$core$Int _1452;
int64_t _1455;
int64_t _1456;
bool _1457;
frost$core$Bit _1458;
bool _1460;
frost$core$Int _1463;
frost$core$Int _1464;
int64_t _1467;
int64_t _1468;
bool _1469;
frost$core$Bit _1470;
bool _1472;
frost$core$Bit _1475;
frost$core$Bit _1478;
frost$core$Int _1481;
int64_t _1484;
int64_t _1485;
bool _1486;
frost$core$Bit _1487;
bool _1489;
frost$core$Int _1492;
frost$core$Int _1493;
int64_t _1496;
int64_t _1497;
bool _1498;
frost$core$Bit _1499;
bool _1501;
frost$core$Bit _1504;
frost$core$Bit _1507;
frost$core$Int _1510;
int64_t _1513;
int64_t _1514;
bool _1515;
frost$core$Bit _1516;
bool _1518;
frost$core$Int _1521;
frost$core$Int _1522;
int64_t _1525;
int64_t _1526;
bool _1527;
frost$core$Bit _1528;
bool _1530;
frost$core$Bit _1533;
frost$core$Bit _1536;
frost$core$Int _1539;
int64_t _1542;
int64_t _1543;
bool _1544;
frost$core$Bit _1545;
bool _1547;
frost$core$Int _1550;
frost$core$Int _1551;
int64_t _1554;
int64_t _1555;
bool _1556;
frost$core$Bit _1557;
bool _1559;
frost$core$Bit _1562;
frost$core$Bit _1565;
frost$core$Int _1568;
int64_t _1571;
int64_t _1572;
bool _1573;
frost$core$Bit _1574;
bool _1576;
frost$core$Int _1579;
frost$core$Int _1580;
int64_t _1583;
int64_t _1584;
bool _1585;
frost$core$Bit _1586;
bool _1588;
frost$core$Bit _1591;
frost$core$Bit _1594;
frost$core$Int _1597;
int64_t _1600;
int64_t _1601;
bool _1602;
frost$core$Bit _1603;
bool _1605;
frost$core$Int _1608;
frost$core$Int _1609;
int64_t _1612;
int64_t _1613;
bool _1614;
frost$core$Bit _1615;
bool _1617;
frost$core$Bit _1620;
frost$core$Bit _1623;
frost$core$Int _1626;
int64_t _1629;
int64_t _1630;
bool _1631;
frost$core$Bit _1632;
bool _1634;
frost$core$Int _1637;
frost$core$Int _1638;
int64_t _1641;
int64_t _1642;
bool _1643;
frost$core$Bit _1644;
bool _1646;
frost$core$Bit _1649;
frost$core$Bit _1652;
frost$core$Int _1655;
int64_t _1658;
int64_t _1659;
bool _1660;
frost$core$Bit _1661;
bool _1663;
frost$core$Int _1666;
frost$core$Int _1667;
int64_t _1670;
int64_t _1671;
bool _1672;
frost$core$Bit _1673;
bool _1675;
frost$core$Bit _1678;
frost$core$Bit _1681;
frost$core$Int _1684;
int64_t _1687;
int64_t _1688;
bool _1689;
frost$core$Bit _1690;
bool _1692;
frost$core$Int _1695;
frost$core$Int _1696;
int64_t _1699;
int64_t _1700;
bool _1701;
frost$core$Bit _1702;
bool _1704;
frost$core$Bit _1707;
frost$core$Bit _1710;
frost$core$Int _1713;
int64_t _1716;
int64_t _1717;
bool _1718;
frost$core$Bit _1719;
bool _1721;
frost$core$Int _1724;
frost$core$Int _1725;
int64_t _1728;
int64_t _1729;
bool _1730;
frost$core$Bit _1731;
bool _1733;
frost$core$Bit _1736;
frost$core$Bit _1739;
frost$core$Int _1742;
int64_t _1745;
int64_t _1746;
bool _1747;
frost$core$Bit _1748;
bool _1750;
frost$core$Int _1753;
frost$core$Int _1754;
int64_t _1757;
int64_t _1758;
bool _1759;
frost$core$Bit _1760;
bool _1762;
frost$core$Bit _1765;
frost$core$Bit _1768;
frost$core$Int _1771;
int64_t _1774;
int64_t _1775;
bool _1776;
frost$core$Bit _1777;
bool _1779;
frost$core$Int _1782;
frost$core$Int _1783;
int64_t _1786;
int64_t _1787;
bool _1788;
frost$core$Bit _1789;
bool _1791;
frost$core$Bit _1794;
frost$core$Bit _1797;
frost$core$Int _1800;
int64_t _1803;
int64_t _1804;
bool _1805;
frost$core$Bit _1806;
bool _1808;
frost$core$Int _1811;
frost$core$Int _1812;
int64_t _1815;
int64_t _1816;
bool _1817;
frost$core$Bit _1818;
bool _1820;
frost$core$Bit _1823;
frost$core$Bit _1826;
frost$core$Int _1829;
int64_t _1832;
int64_t _1833;
bool _1834;
frost$core$Bit _1835;
bool _1837;
frost$core$Int _1840;
frost$core$Int _1841;
int64_t _1844;
int64_t _1845;
bool _1846;
frost$core$Bit _1847;
bool _1849;
frost$core$Bit _1852;
frost$core$Bit _1855;
frost$core$Int _1858;
int64_t _1861;
int64_t _1862;
bool _1863;
frost$core$Bit _1864;
bool _1866;
frost$core$Int _1869;
frost$core$Int _1870;
int64_t _1873;
int64_t _1874;
bool _1875;
frost$core$Bit _1876;
bool _1878;
frost$core$Bit _1881;
frost$core$Bit _1884;
frost$core$Int _1887;
int64_t _1890;
int64_t _1891;
bool _1892;
frost$core$Bit _1893;
bool _1895;
frost$core$Int _1898;
frost$core$Int _1899;
int64_t _1902;
int64_t _1903;
bool _1904;
frost$core$Bit _1905;
bool _1907;
frost$core$Bit _1910;
frost$core$Bit _1913;
frost$core$Int _1916;
int64_t _1919;
int64_t _1920;
bool _1921;
frost$core$Bit _1922;
bool _1924;
frost$core$Int _1927;
frost$core$Int _1928;
int64_t _1931;
int64_t _1932;
bool _1933;
frost$core$Bit _1934;
bool _1936;
frost$core$Bit _1939;
frost$core$Bit _1942;
frost$core$Int _1945;
int64_t _1948;
int64_t _1949;
bool _1950;
frost$core$Bit _1951;
bool _1953;
frost$core$Int _1956;
frost$core$Int _1957;
int64_t _1960;
int64_t _1961;
bool _1962;
frost$core$Bit _1963;
bool _1965;
frost$core$Bit _1968;
frost$core$Bit _1971;
frost$core$Int _1974;
int64_t _1977;
int64_t _1978;
bool _1979;
frost$core$Bit _1980;
bool _1982;
frost$core$Int _1985;
frost$core$Int _1986;
int64_t _1989;
int64_t _1990;
bool _1991;
frost$core$Bit _1992;
bool _1994;
frost$core$Bit _1997;
frost$core$Bit _2000;
frost$core$Int _2003;
int64_t _2006;
int64_t _2007;
bool _2008;
frost$core$Bit _2009;
bool _2011;
frost$core$Int _2014;
frost$core$Int _2015;
int64_t _2018;
int64_t _2019;
bool _2020;
frost$core$Bit _2021;
bool _2023;
frost$core$Bit _2026;
frost$core$Bit _2029;
frost$core$Int _2032;
int64_t _2035;
int64_t _2036;
bool _2037;
frost$core$Bit _2038;
bool _2040;
frost$core$Int _2043;
frost$core$Int _2044;
int64_t _2047;
int64_t _2048;
bool _2049;
frost$core$Bit _2050;
bool _2052;
frost$core$Bit _2055;
frost$core$Bit _2058;
frost$core$Int _2061;
int64_t _2064;
int64_t _2065;
bool _2066;
frost$core$Bit _2067;
bool _2069;
frost$core$Int _2072;
frost$core$Int _2073;
int64_t _2076;
int64_t _2077;
bool _2078;
frost$core$Bit _2079;
bool _2081;
frost$core$Bit _2084;
frost$core$Bit _2087;
frost$core$Int _2090;
int64_t _2093;
int64_t _2094;
bool _2095;
frost$core$Bit _2096;
bool _2098;
frost$core$Int _2101;
frost$core$Int _2102;
int64_t _2105;
int64_t _2106;
bool _2107;
frost$core$Bit _2108;
bool _2110;
frost$core$Bit _2113;
frost$core$Bit _2116;
frost$core$Int _2119;
int64_t _2122;
int64_t _2123;
bool _2124;
frost$core$Bit _2125;
bool _2127;
frost$core$Int _2130;
frost$core$Int _2131;
int64_t _2134;
int64_t _2135;
bool _2136;
frost$core$Bit _2137;
bool _2139;
frost$core$Bit _2142;
frost$core$Bit _2145;
frost$core$Int _2148;
int64_t _2151;
int64_t _2152;
bool _2153;
frost$core$Bit _2154;
bool _2156;
frost$core$Int _2159;
frost$core$Int _2160;
int64_t _2163;
int64_t _2164;
bool _2165;
frost$core$Bit _2166;
bool _2168;
frost$core$Bit _2171;
frost$core$Bit _2174;
frost$core$Int _2177;
int64_t _2180;
int64_t _2181;
bool _2182;
frost$core$Bit _2183;
bool _2185;
frost$core$Int _2188;
frost$core$Int _2189;
int64_t _2192;
int64_t _2193;
bool _2194;
frost$core$Bit _2195;
bool _2197;
frost$core$Bit _2200;
frost$core$Bit _2203;
frost$core$Int _2206;
int64_t _2209;
int64_t _2210;
bool _2211;
frost$core$Bit _2212;
bool _2214;
frost$core$Int _2217;
frost$core$Int _2218;
int64_t _2221;
int64_t _2222;
bool _2223;
frost$core$Bit _2224;
bool _2226;
frost$core$Bit _2229;
frost$core$Bit _2232;
frost$core$Int _2235;
int64_t _2238;
int64_t _2239;
bool _2240;
frost$core$Bit _2241;
bool _2243;
frost$core$Int _2246;
frost$core$Int _2247;
int64_t _2250;
int64_t _2251;
bool _2252;
frost$core$Bit _2253;
bool _2255;
frost$core$Bit _2258;
frost$core$Bit _2261;
frost$core$Int _2264;
int64_t _2267;
int64_t _2268;
bool _2269;
frost$core$Bit _2270;
bool _2272;
frost$core$Int _2275;
frost$core$Int _2276;
int64_t _2279;
int64_t _2280;
bool _2281;
frost$core$Bit _2282;
bool _2284;
frost$core$Bit _2287;
frost$core$Bit _2290;
frost$core$Int _2293;
int64_t _2296;
int64_t _2297;
bool _2298;
frost$core$Bit _2299;
bool _2301;
frost$core$Int _2304;
frost$core$Int _2305;
int64_t _2308;
int64_t _2309;
bool _2310;
frost$core$Bit _2311;
bool _2313;
frost$core$Bit _2316;
frost$core$Bit _2319;
frost$core$Int _2322;
int64_t _2325;
int64_t _2326;
bool _2327;
frost$core$Bit _2328;
bool _2330;
frost$core$Int _2333;
frost$core$Int _2334;
int64_t _2337;
int64_t _2338;
bool _2339;
frost$core$Bit _2340;
bool _2342;
frost$core$Bit _2345;
frost$core$Bit _2348;
frost$core$Int _2351;
int64_t _2354;
int64_t _2355;
bool _2356;
frost$core$Bit _2357;
bool _2359;
frost$core$Int _2362;
frost$core$Int _2363;
int64_t _2366;
int64_t _2367;
bool _2368;
frost$core$Bit _2369;
bool _2371;
frost$core$Bit _2374;
frost$core$Bit _2377;
frost$core$Int _2380;
int64_t _2383;
int64_t _2384;
bool _2385;
frost$core$Bit _2386;
bool _2388;
frost$core$Int _2391;
frost$core$Int _2392;
int64_t _2395;
int64_t _2396;
bool _2397;
frost$core$Bit _2398;
bool _2400;
frost$core$Bit _2403;
frost$core$Bit _2406;
frost$core$Int _2409;
int64_t _2412;
int64_t _2413;
bool _2414;
frost$core$Bit _2415;
bool _2417;
frost$core$Int _2420;
frost$core$Int _2421;
int64_t _2424;
int64_t _2425;
bool _2426;
frost$core$Bit _2427;
bool _2429;
frost$core$Bit _2432;
frost$core$Bit _2435;
frost$core$Int _2438;
int64_t _2441;
int64_t _2442;
bool _2443;
frost$core$Bit _2444;
bool _2446;
frost$core$Int _2449;
frost$core$Int _2450;
int64_t _2453;
int64_t _2454;
bool _2455;
frost$core$Bit _2456;
bool _2458;
frost$core$Bit _2461;
frost$core$Bit _2464;
frost$core$Int _2467;
int64_t _2470;
int64_t _2471;
bool _2472;
frost$core$Bit _2473;
bool _2475;
frost$core$Int _2478;
frost$core$Int _2479;
int64_t _2482;
int64_t _2483;
bool _2484;
frost$core$Bit _2485;
bool _2487;
frost$core$Bit _2490;
frost$core$Bit _2493;
frost$core$Int _2496;
int64_t _2499;
int64_t _2500;
bool _2501;
frost$core$Bit _2502;
bool _2504;
frost$core$Int _2507;
frost$core$Int _2508;
int64_t _2511;
int64_t _2512;
bool _2513;
frost$core$Bit _2514;
bool _2516;
frost$core$Bit _2519;
frost$core$Bit _2522;
frost$core$Int _2525;
int64_t _2528;
int64_t _2529;
bool _2530;
frost$core$Bit _2531;
bool _2533;
frost$core$Int _2536;
frost$core$Int _2537;
int64_t _2540;
int64_t _2541;
bool _2542;
frost$core$Bit _2543;
bool _2545;
frost$core$Bit _2548;
frost$core$Bit _2551;
frost$core$Int _2554;
int64_t _2557;
int64_t _2558;
bool _2559;
frost$core$Bit _2560;
bool _2562;
frost$core$Int _2565;
frost$core$Int _2566;
int64_t _2569;
int64_t _2570;
bool _2571;
frost$core$Bit _2572;
bool _2574;
frost$core$Bit _2577;
frost$core$Bit _2580;
frost$core$Int _2583;
int64_t _2586;
int64_t _2587;
bool _2588;
frost$core$Bit _2589;
bool _2591;
frost$core$Int _2594;
frost$core$Int _2595;
int64_t _2598;
int64_t _2599;
bool _2600;
frost$core$Bit _2601;
bool _2603;
frost$core$Bit _2606;
frost$core$Bit _2609;
frost$core$Int _2612;
int64_t _2615;
int64_t _2616;
bool _2617;
frost$core$Bit _2618;
bool _2620;
frost$core$Int _2623;
frost$core$Int _2624;
int64_t _2627;
int64_t _2628;
bool _2629;
frost$core$Bit _2630;
bool _2632;
frost$core$Bit _2635;
frost$core$Bit _2638;
frost$core$Int _2641;
int64_t _2644;
int64_t _2645;
bool _2646;
frost$core$Bit _2647;
bool _2649;
frost$core$Int _2652;
frost$core$Int _2653;
int64_t _2656;
int64_t _2657;
bool _2658;
frost$core$Bit _2659;
bool _2661;
frost$core$Bit _2664;
frost$core$Bit _2667;
frost$core$Int _2670;
int64_t _2673;
int64_t _2674;
bool _2675;
frost$core$Bit _2676;
bool _2678;
frost$core$Int _2681;
frost$core$Int _2682;
int64_t _2685;
int64_t _2686;
bool _2687;
frost$core$Bit _2688;
bool _2690;
frost$core$Bit _2693;
frost$core$Bit _2696;
frost$core$Int _2699;
int64_t _2702;
int64_t _2703;
bool _2704;
frost$core$Bit _2705;
bool _2707;
frost$core$Int _2710;
frost$core$Int _2711;
int64_t _2714;
int64_t _2715;
bool _2716;
frost$core$Bit _2717;
bool _2719;
frost$core$Bit _2722;
frost$core$Bit _2725;
frost$core$Int _2728;
int64_t _2731;
int64_t _2732;
bool _2733;
frost$core$Bit _2734;
bool _2736;
frost$core$Int _2739;
frost$core$Int _2740;
int64_t _2743;
int64_t _2744;
bool _2745;
frost$core$Bit _2746;
bool _2748;
frost$core$Bit _2751;
frost$core$Bit _2754;
frost$core$Int _2757;
int64_t _2760;
int64_t _2761;
bool _2762;
frost$core$Bit _2763;
bool _2765;
frost$core$Int _2768;
frost$core$Int _2769;
int64_t _2772;
int64_t _2773;
bool _2774;
frost$core$Bit _2775;
bool _2777;
frost$core$Bit _2780;
frost$core$Bit _2783;
frost$core$Int _2786;
int64_t _2789;
int64_t _2790;
bool _2791;
frost$core$Bit _2792;
bool _2794;
frost$core$Int _2797;
frost$core$Int _2798;
int64_t _2801;
int64_t _2802;
bool _2803;
frost$core$Bit _2804;
bool _2806;
frost$core$Bit _2809;
frost$core$Bit _2812;
frost$core$Int _2815;
int64_t _2818;
int64_t _2819;
bool _2820;
frost$core$Bit _2821;
bool _2823;
frost$core$Int _2826;
frost$core$Int _2827;
int64_t _2830;
int64_t _2831;
bool _2832;
frost$core$Bit _2833;
bool _2835;
frost$core$Bit _2838;
frost$core$Bit _2841;
frost$core$Int _2844;
int64_t _2847;
int64_t _2848;
bool _2849;
frost$core$Bit _2850;
bool _2852;
frost$core$Int _2855;
frost$core$Int _2856;
int64_t _2859;
int64_t _2860;
bool _2861;
frost$core$Bit _2862;
bool _2864;
frost$core$Bit _2867;
frost$core$Bit _2870;
frost$core$Int _2873;
int64_t _2876;
int64_t _2877;
bool _2878;
frost$core$Bit _2879;
bool _2881;
frost$core$Int _2884;
frost$core$Int _2885;
int64_t _2888;
int64_t _2889;
bool _2890;
frost$core$Bit _2891;
bool _2893;
frost$core$Bit _2896;
frost$core$Bit _2899;
frost$core$Int _2902;
int64_t _2905;
int64_t _2906;
bool _2907;
frost$core$Bit _2908;
bool _2910;
frost$core$Int _2913;
frost$core$Int _2914;
int64_t _2917;
int64_t _2918;
bool _2919;
frost$core$Bit _2920;
bool _2922;
frost$core$Bit _2925;
frost$core$Bit _2928;
frost$core$Int _2931;
int64_t _2934;
int64_t _2935;
bool _2936;
frost$core$Bit _2937;
bool _2939;
frost$core$Int _2942;
frost$core$Int _2943;
int64_t _2946;
int64_t _2947;
bool _2948;
frost$core$Bit _2949;
bool _2951;
frost$core$Bit _2954;
frost$core$Bit _2957;
frost$core$Int _2960;
int64_t _2963;
int64_t _2964;
bool _2965;
frost$core$Bit _2966;
bool _2968;
frost$core$Int _2971;
frost$core$Int _2972;
int64_t _2975;
int64_t _2976;
bool _2977;
frost$core$Bit _2978;
bool _2980;
frost$core$Bit _2983;
frost$core$Bit _2986;
frost$core$Int _2989;
int64_t _2992;
int64_t _2993;
bool _2994;
frost$core$Bit _2995;
bool _2997;
frost$core$Int _3000;
frost$core$Int _3001;
int64_t _3004;
int64_t _3005;
bool _3006;
frost$core$Bit _3007;
bool _3009;
frost$core$Bit _3012;
frost$core$Bit _3015;
frost$core$Int _3018;
int64_t _3021;
int64_t _3022;
bool _3023;
frost$core$Bit _3024;
bool _3026;
frost$core$Int _3029;
frost$core$Int _3030;
int64_t _3033;
int64_t _3034;
bool _3035;
frost$core$Bit _3036;
bool _3038;
frost$core$Bit _3041;
frost$core$Bit _3044;
frost$core$Int _3047;
int64_t _3050;
int64_t _3051;
bool _3052;
frost$core$Bit _3053;
bool _3055;
frost$core$Int _3058;
frost$core$Int _3059;
int64_t _3062;
int64_t _3063;
bool _3064;
frost$core$Bit _3065;
bool _3067;
frost$core$Bit _3070;
frost$core$Bit _3073;
frost$core$Int _3076;
int64_t _3079;
int64_t _3080;
bool _3081;
frost$core$Bit _3082;
bool _3084;
frost$core$Int _3087;
frost$core$Int _3088;
int64_t _3091;
int64_t _3092;
bool _3093;
frost$core$Bit _3094;
bool _3096;
frost$core$Bit _3099;
frost$core$Bit _3102;
frost$core$Int _3105;
int64_t _3108;
int64_t _3109;
bool _3110;
frost$core$Bit _3111;
bool _3113;
frost$core$Int _3116;
frost$core$Int _3117;
int64_t _3120;
int64_t _3121;
bool _3122;
frost$core$Bit _3123;
bool _3125;
frost$core$Bit _3128;
frost$core$Bit _3131;
frost$core$Int _3134;
int64_t _3137;
int64_t _3138;
bool _3139;
frost$core$Bit _3140;
bool _3142;
frost$core$Int _3145;
frost$core$Int _3146;
int64_t _3149;
int64_t _3150;
bool _3151;
frost$core$Bit _3152;
bool _3154;
frost$core$Bit _3157;
frost$core$Bit _3160;
frost$core$Int _3163;
int64_t _3166;
int64_t _3167;
bool _3168;
frost$core$Bit _3169;
bool _3171;
frost$core$Int _3174;
frost$core$Int _3175;
int64_t _3178;
int64_t _3179;
bool _3180;
frost$core$Bit _3181;
bool _3183;
frost$core$Bit _3186;
frost$core$Bit _3189;
frost$core$Int _3192;
int64_t _3195;
int64_t _3196;
bool _3197;
frost$core$Bit _3198;
bool _3200;
frost$core$Int _3203;
frost$core$Int _3204;
int64_t _3207;
int64_t _3208;
bool _3209;
frost$core$Bit _3210;
bool _3212;
frost$core$Bit _3215;
frost$core$Bit _3218;
frost$core$Int _3221;
int64_t _3224;
int64_t _3225;
bool _3226;
frost$core$Bit _3227;
bool _3229;
frost$core$Int _3232;
frost$core$Int _3233;
int64_t _3236;
int64_t _3237;
bool _3238;
frost$core$Bit _3239;
bool _3241;
frost$core$Bit _3244;
frost$core$Bit _3247;
frost$core$Int _3250;
int64_t _3253;
int64_t _3254;
bool _3255;
frost$core$Bit _3256;
bool _3258;
frost$core$Int _3261;
frost$core$Int _3262;
int64_t _3265;
int64_t _3266;
bool _3267;
frost$core$Bit _3268;
bool _3270;
frost$core$Bit _3273;
frost$core$Bit _3276;
frost$core$Int _3279;
int64_t _3282;
int64_t _3283;
bool _3284;
frost$core$Bit _3285;
bool _3287;
frost$core$Int _3290;
frost$core$Int _3291;
int64_t _3294;
int64_t _3295;
bool _3296;
frost$core$Bit _3297;
bool _3299;
frost$core$Bit _3302;
frost$core$Bit _3305;
frost$core$Int _3309;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1 = param0.$rawValue;
_2 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_13 = param1.$rawValue;
_14 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_17 = _13.value;
_18 = _14.value;
_19 = _17 == _18;
_20 = (frost$core$Bit) {_19};
_22 = _20.value;
if (_22) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_25 = (frost$core$Bit) {true};
return _25;
block7:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_28 = (frost$core$Bit) {false};
return _28;
block5:;
goto block1;
block3:;
_31 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_34 = _1.value;
_35 = _31.value;
_36 = _34 == _35;
_37 = (frost$core$Bit) {_36};
_39 = _37.value;
if (_39) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_42 = param1.$rawValue;
_43 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_46 = _42.value;
_47 = _43.value;
_48 = _46 == _47;
_49 = (frost$core$Bit) {_48};
_51 = _49.value;
if (_51) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_54 = (frost$core$Bit) {true};
return _54;
block14:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_57 = (frost$core$Bit) {false};
return _57;
block12:;
goto block1;
block10:;
_60 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_63 = _1.value;
_64 = _60.value;
_65 = _63 == _64;
_66 = (frost$core$Bit) {_65};
_68 = _66.value;
if (_68) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_71 = param1.$rawValue;
_72 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_75 = _71.value;
_76 = _72.value;
_77 = _75 == _76;
_78 = (frost$core$Bit) {_77};
_80 = _78.value;
if (_80) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_83 = (frost$core$Bit) {true};
return _83;
block21:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_86 = (frost$core$Bit) {false};
return _86;
block19:;
goto block1;
block17:;
_89 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_92 = _1.value;
_93 = _89.value;
_94 = _92 == _93;
_95 = (frost$core$Bit) {_94};
_97 = _95.value;
if (_97) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_100 = param1.$rawValue;
_101 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_104 = _100.value;
_105 = _101.value;
_106 = _104 == _105;
_107 = (frost$core$Bit) {_106};
_109 = _107.value;
if (_109) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_112 = (frost$core$Bit) {true};
return _112;
block28:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_115 = (frost$core$Bit) {false};
return _115;
block26:;
goto block1;
block24:;
_118 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_121 = _1.value;
_122 = _118.value;
_123 = _121 == _122;
_124 = (frost$core$Bit) {_123};
_126 = _124.value;
if (_126) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_129 = param1.$rawValue;
_130 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_133 = _129.value;
_134 = _130.value;
_135 = _133 == _134;
_136 = (frost$core$Bit) {_135};
_138 = _136.value;
if (_138) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_141 = (frost$core$Bit) {true};
return _141;
block35:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_144 = (frost$core$Bit) {false};
return _144;
block33:;
goto block1;
block31:;
_147 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_150 = _1.value;
_151 = _147.value;
_152 = _150 == _151;
_153 = (frost$core$Bit) {_152};
_155 = _153.value;
if (_155) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_158 = param1.$rawValue;
_159 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_162 = _158.value;
_163 = _159.value;
_164 = _162 == _163;
_165 = (frost$core$Bit) {_164};
_167 = _165.value;
if (_167) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_170 = (frost$core$Bit) {true};
return _170;
block42:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_173 = (frost$core$Bit) {false};
return _173;
block40:;
goto block1;
block38:;
_176 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_179 = _1.value;
_180 = _176.value;
_181 = _179 == _180;
_182 = (frost$core$Bit) {_181};
_184 = _182.value;
if (_184) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_187 = param1.$rawValue;
_188 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_191 = _187.value;
_192 = _188.value;
_193 = _191 == _192;
_194 = (frost$core$Bit) {_193};
_196 = _194.value;
if (_196) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_199 = (frost$core$Bit) {true};
return _199;
block49:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_202 = (frost$core$Bit) {false};
return _202;
block47:;
goto block1;
block45:;
_205 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_208 = _1.value;
_209 = _205.value;
_210 = _208 == _209;
_211 = (frost$core$Bit) {_210};
_213 = _211.value;
if (_213) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_216 = param1.$rawValue;
_217 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_220 = _216.value;
_221 = _217.value;
_222 = _220 == _221;
_223 = (frost$core$Bit) {_222};
_225 = _223.value;
if (_225) goto block55; else goto block56;
block55:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_228 = (frost$core$Bit) {true};
return _228;
block56:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_231 = (frost$core$Bit) {false};
return _231;
block54:;
goto block1;
block52:;
_234 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_237 = _1.value;
_238 = _234.value;
_239 = _237 == _238;
_240 = (frost$core$Bit) {_239};
_242 = _240.value;
if (_242) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_245 = param1.$rawValue;
_246 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_249 = _245.value;
_250 = _246.value;
_251 = _249 == _250;
_252 = (frost$core$Bit) {_251};
_254 = _252.value;
if (_254) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_257 = (frost$core$Bit) {true};
return _257;
block63:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_260 = (frost$core$Bit) {false};
return _260;
block61:;
goto block1;
block59:;
_263 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_266 = _1.value;
_267 = _263.value;
_268 = _266 == _267;
_269 = (frost$core$Bit) {_268};
_271 = _269.value;
if (_271) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_274 = param1.$rawValue;
_275 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_278 = _274.value;
_279 = _275.value;
_280 = _278 == _279;
_281 = (frost$core$Bit) {_280};
_283 = _281.value;
if (_283) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_286 = (frost$core$Bit) {true};
return _286;
block70:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_289 = (frost$core$Bit) {false};
return _289;
block68:;
goto block1;
block66:;
_292 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_295 = _1.value;
_296 = _292.value;
_297 = _295 == _296;
_298 = (frost$core$Bit) {_297};
_300 = _298.value;
if (_300) goto block72; else goto block73;
block72:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_303 = param1.$rawValue;
_304 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_307 = _303.value;
_308 = _304.value;
_309 = _307 == _308;
_310 = (frost$core$Bit) {_309};
_312 = _310.value;
if (_312) goto block76; else goto block77;
block76:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_315 = (frost$core$Bit) {true};
return _315;
block77:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_318 = (frost$core$Bit) {false};
return _318;
block75:;
goto block1;
block73:;
_321 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_324 = _1.value;
_325 = _321.value;
_326 = _324 == _325;
_327 = (frost$core$Bit) {_326};
_329 = _327.value;
if (_329) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_332 = param1.$rawValue;
_333 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_336 = _332.value;
_337 = _333.value;
_338 = _336 == _337;
_339 = (frost$core$Bit) {_338};
_341 = _339.value;
if (_341) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_344 = (frost$core$Bit) {true};
return _344;
block84:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_347 = (frost$core$Bit) {false};
return _347;
block82:;
goto block1;
block80:;
_350 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_353 = _1.value;
_354 = _350.value;
_355 = _353 == _354;
_356 = (frost$core$Bit) {_355};
_358 = _356.value;
if (_358) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_361 = param1.$rawValue;
_362 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_365 = _361.value;
_366 = _362.value;
_367 = _365 == _366;
_368 = (frost$core$Bit) {_367};
_370 = _368.value;
if (_370) goto block90; else goto block91;
block90:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_373 = (frost$core$Bit) {true};
return _373;
block91:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_376 = (frost$core$Bit) {false};
return _376;
block89:;
goto block1;
block87:;
_379 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_382 = _1.value;
_383 = _379.value;
_384 = _382 == _383;
_385 = (frost$core$Bit) {_384};
_387 = _385.value;
if (_387) goto block93; else goto block94;
block93:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_390 = param1.$rawValue;
_391 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_394 = _390.value;
_395 = _391.value;
_396 = _394 == _395;
_397 = (frost$core$Bit) {_396};
_399 = _397.value;
if (_399) goto block97; else goto block98;
block97:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_402 = (frost$core$Bit) {true};
return _402;
block98:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_405 = (frost$core$Bit) {false};
return _405;
block96:;
goto block1;
block94:;
_408 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_411 = _1.value;
_412 = _408.value;
_413 = _411 == _412;
_414 = (frost$core$Bit) {_413};
_416 = _414.value;
if (_416) goto block100; else goto block101;
block100:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_419 = param1.$rawValue;
_420 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_423 = _419.value;
_424 = _420.value;
_425 = _423 == _424;
_426 = (frost$core$Bit) {_425};
_428 = _426.value;
if (_428) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_431 = (frost$core$Bit) {true};
return _431;
block105:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_434 = (frost$core$Bit) {false};
return _434;
block103:;
goto block1;
block101:;
_437 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_440 = _1.value;
_441 = _437.value;
_442 = _440 == _441;
_443 = (frost$core$Bit) {_442};
_445 = _443.value;
if (_445) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_448 = param1.$rawValue;
_449 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_452 = _448.value;
_453 = _449.value;
_454 = _452 == _453;
_455 = (frost$core$Bit) {_454};
_457 = _455.value;
if (_457) goto block111; else goto block112;
block111:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_460 = (frost$core$Bit) {true};
return _460;
block112:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_463 = (frost$core$Bit) {false};
return _463;
block110:;
goto block1;
block108:;
_466 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_469 = _1.value;
_470 = _466.value;
_471 = _469 == _470;
_472 = (frost$core$Bit) {_471};
_474 = _472.value;
if (_474) goto block114; else goto block115;
block114:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_477 = param1.$rawValue;
_478 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_481 = _477.value;
_482 = _478.value;
_483 = _481 == _482;
_484 = (frost$core$Bit) {_483};
_486 = _484.value;
if (_486) goto block118; else goto block119;
block118:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_489 = (frost$core$Bit) {true};
return _489;
block119:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_492 = (frost$core$Bit) {false};
return _492;
block117:;
goto block1;
block115:;
_495 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_498 = _1.value;
_499 = _495.value;
_500 = _498 == _499;
_501 = (frost$core$Bit) {_500};
_503 = _501.value;
if (_503) goto block121; else goto block122;
block121:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_506 = param1.$rawValue;
_507 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_510 = _506.value;
_511 = _507.value;
_512 = _510 == _511;
_513 = (frost$core$Bit) {_512};
_515 = _513.value;
if (_515) goto block125; else goto block126;
block125:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_518 = (frost$core$Bit) {true};
return _518;
block126:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_521 = (frost$core$Bit) {false};
return _521;
block124:;
goto block1;
block122:;
_524 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_527 = _1.value;
_528 = _524.value;
_529 = _527 == _528;
_530 = (frost$core$Bit) {_529};
_532 = _530.value;
if (_532) goto block128; else goto block129;
block128:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_535 = param1.$rawValue;
_536 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_539 = _535.value;
_540 = _536.value;
_541 = _539 == _540;
_542 = (frost$core$Bit) {_541};
_544 = _542.value;
if (_544) goto block132; else goto block133;
block132:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_547 = (frost$core$Bit) {true};
return _547;
block133:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_550 = (frost$core$Bit) {false};
return _550;
block131:;
goto block1;
block129:;
_553 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_556 = _1.value;
_557 = _553.value;
_558 = _556 == _557;
_559 = (frost$core$Bit) {_558};
_561 = _559.value;
if (_561) goto block135; else goto block136;
block135:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_564 = param1.$rawValue;
_565 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_568 = _564.value;
_569 = _565.value;
_570 = _568 == _569;
_571 = (frost$core$Bit) {_570};
_573 = _571.value;
if (_573) goto block139; else goto block140;
block139:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_576 = (frost$core$Bit) {true};
return _576;
block140:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_579 = (frost$core$Bit) {false};
return _579;
block138:;
goto block1;
block136:;
_582 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_585 = _1.value;
_586 = _582.value;
_587 = _585 == _586;
_588 = (frost$core$Bit) {_587};
_590 = _588.value;
if (_590) goto block142; else goto block143;
block142:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_593 = param1.$rawValue;
_594 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_597 = _593.value;
_598 = _594.value;
_599 = _597 == _598;
_600 = (frost$core$Bit) {_599};
_602 = _600.value;
if (_602) goto block146; else goto block147;
block146:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_605 = (frost$core$Bit) {true};
return _605;
block147:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_608 = (frost$core$Bit) {false};
return _608;
block145:;
goto block1;
block143:;
_611 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_614 = _1.value;
_615 = _611.value;
_616 = _614 == _615;
_617 = (frost$core$Bit) {_616};
_619 = _617.value;
if (_619) goto block149; else goto block150;
block149:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_622 = param1.$rawValue;
_623 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_626 = _622.value;
_627 = _623.value;
_628 = _626 == _627;
_629 = (frost$core$Bit) {_628};
_631 = _629.value;
if (_631) goto block153; else goto block154;
block153:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_634 = (frost$core$Bit) {true};
return _634;
block154:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_637 = (frost$core$Bit) {false};
return _637;
block152:;
goto block1;
block150:;
_640 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_643 = _1.value;
_644 = _640.value;
_645 = _643 == _644;
_646 = (frost$core$Bit) {_645};
_648 = _646.value;
if (_648) goto block156; else goto block157;
block156:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_651 = param1.$rawValue;
_652 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_655 = _651.value;
_656 = _652.value;
_657 = _655 == _656;
_658 = (frost$core$Bit) {_657};
_660 = _658.value;
if (_660) goto block160; else goto block161;
block160:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_663 = (frost$core$Bit) {true};
return _663;
block161:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_666 = (frost$core$Bit) {false};
return _666;
block159:;
goto block1;
block157:;
_669 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_672 = _1.value;
_673 = _669.value;
_674 = _672 == _673;
_675 = (frost$core$Bit) {_674};
_677 = _675.value;
if (_677) goto block163; else goto block164;
block163:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_680 = param1.$rawValue;
_681 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_684 = _680.value;
_685 = _681.value;
_686 = _684 == _685;
_687 = (frost$core$Bit) {_686};
_689 = _687.value;
if (_689) goto block167; else goto block168;
block167:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_692 = (frost$core$Bit) {true};
return _692;
block168:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_695 = (frost$core$Bit) {false};
return _695;
block166:;
goto block1;
block164:;
_698 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_701 = _1.value;
_702 = _698.value;
_703 = _701 == _702;
_704 = (frost$core$Bit) {_703};
_706 = _704.value;
if (_706) goto block170; else goto block171;
block170:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_709 = param1.$rawValue;
_710 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_713 = _709.value;
_714 = _710.value;
_715 = _713 == _714;
_716 = (frost$core$Bit) {_715};
_718 = _716.value;
if (_718) goto block174; else goto block175;
block174:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_721 = (frost$core$Bit) {true};
return _721;
block175:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_724 = (frost$core$Bit) {false};
return _724;
block173:;
goto block1;
block171:;
_727 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_730 = _1.value;
_731 = _727.value;
_732 = _730 == _731;
_733 = (frost$core$Bit) {_732};
_735 = _733.value;
if (_735) goto block177; else goto block178;
block177:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_738 = param1.$rawValue;
_739 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_742 = _738.value;
_743 = _739.value;
_744 = _742 == _743;
_745 = (frost$core$Bit) {_744};
_747 = _745.value;
if (_747) goto block181; else goto block182;
block181:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_750 = (frost$core$Bit) {true};
return _750;
block182:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_753 = (frost$core$Bit) {false};
return _753;
block180:;
goto block1;
block178:;
_756 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_759 = _1.value;
_760 = _756.value;
_761 = _759 == _760;
_762 = (frost$core$Bit) {_761};
_764 = _762.value;
if (_764) goto block184; else goto block185;
block184:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_767 = param1.$rawValue;
_768 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_771 = _767.value;
_772 = _768.value;
_773 = _771 == _772;
_774 = (frost$core$Bit) {_773};
_776 = _774.value;
if (_776) goto block188; else goto block189;
block188:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_779 = (frost$core$Bit) {true};
return _779;
block189:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_782 = (frost$core$Bit) {false};
return _782;
block187:;
goto block1;
block185:;
_785 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_788 = _1.value;
_789 = _785.value;
_790 = _788 == _789;
_791 = (frost$core$Bit) {_790};
_793 = _791.value;
if (_793) goto block191; else goto block192;
block191:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_796 = param1.$rawValue;
_797 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_800 = _796.value;
_801 = _797.value;
_802 = _800 == _801;
_803 = (frost$core$Bit) {_802};
_805 = _803.value;
if (_805) goto block195; else goto block196;
block195:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_808 = (frost$core$Bit) {true};
return _808;
block196:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_811 = (frost$core$Bit) {false};
return _811;
block194:;
goto block1;
block192:;
_814 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_817 = _1.value;
_818 = _814.value;
_819 = _817 == _818;
_820 = (frost$core$Bit) {_819};
_822 = _820.value;
if (_822) goto block198; else goto block199;
block198:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_825 = param1.$rawValue;
_826 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_829 = _825.value;
_830 = _826.value;
_831 = _829 == _830;
_832 = (frost$core$Bit) {_831};
_834 = _832.value;
if (_834) goto block202; else goto block203;
block202:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_837 = (frost$core$Bit) {true};
return _837;
block203:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_840 = (frost$core$Bit) {false};
return _840;
block201:;
goto block1;
block199:;
_843 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_846 = _1.value;
_847 = _843.value;
_848 = _846 == _847;
_849 = (frost$core$Bit) {_848};
_851 = _849.value;
if (_851) goto block205; else goto block206;
block205:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_854 = param1.$rawValue;
_855 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_858 = _854.value;
_859 = _855.value;
_860 = _858 == _859;
_861 = (frost$core$Bit) {_860};
_863 = _861.value;
if (_863) goto block209; else goto block210;
block209:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_866 = (frost$core$Bit) {true};
return _866;
block210:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_869 = (frost$core$Bit) {false};
return _869;
block208:;
goto block1;
block206:;
_872 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_875 = _1.value;
_876 = _872.value;
_877 = _875 == _876;
_878 = (frost$core$Bit) {_877};
_880 = _878.value;
if (_880) goto block212; else goto block213;
block212:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_883 = param1.$rawValue;
_884 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_887 = _883.value;
_888 = _884.value;
_889 = _887 == _888;
_890 = (frost$core$Bit) {_889};
_892 = _890.value;
if (_892) goto block216; else goto block217;
block216:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_895 = (frost$core$Bit) {true};
return _895;
block217:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_898 = (frost$core$Bit) {false};
return _898;
block215:;
goto block1;
block213:;
_901 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_904 = _1.value;
_905 = _901.value;
_906 = _904 == _905;
_907 = (frost$core$Bit) {_906};
_909 = _907.value;
if (_909) goto block219; else goto block220;
block219:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_912 = param1.$rawValue;
_913 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_916 = _912.value;
_917 = _913.value;
_918 = _916 == _917;
_919 = (frost$core$Bit) {_918};
_921 = _919.value;
if (_921) goto block223; else goto block224;
block223:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_924 = (frost$core$Bit) {true};
return _924;
block224:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_927 = (frost$core$Bit) {false};
return _927;
block222:;
goto block1;
block220:;
_930 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_933 = _1.value;
_934 = _930.value;
_935 = _933 == _934;
_936 = (frost$core$Bit) {_935};
_938 = _936.value;
if (_938) goto block226; else goto block227;
block226:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_941 = param1.$rawValue;
_942 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_945 = _941.value;
_946 = _942.value;
_947 = _945 == _946;
_948 = (frost$core$Bit) {_947};
_950 = _948.value;
if (_950) goto block230; else goto block231;
block230:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_953 = (frost$core$Bit) {true};
return _953;
block231:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_956 = (frost$core$Bit) {false};
return _956;
block229:;
goto block1;
block227:;
_959 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_962 = _1.value;
_963 = _959.value;
_964 = _962 == _963;
_965 = (frost$core$Bit) {_964};
_967 = _965.value;
if (_967) goto block233; else goto block234;
block233:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_970 = param1.$rawValue;
_971 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_974 = _970.value;
_975 = _971.value;
_976 = _974 == _975;
_977 = (frost$core$Bit) {_976};
_979 = _977.value;
if (_979) goto block237; else goto block238;
block237:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_982 = (frost$core$Bit) {true};
return _982;
block238:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_985 = (frost$core$Bit) {false};
return _985;
block236:;
goto block1;
block234:;
_988 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_991 = _1.value;
_992 = _988.value;
_993 = _991 == _992;
_994 = (frost$core$Bit) {_993};
_996 = _994.value;
if (_996) goto block240; else goto block241;
block240:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_999 = param1.$rawValue;
_1000 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1003 = _999.value;
_1004 = _1000.value;
_1005 = _1003 == _1004;
_1006 = (frost$core$Bit) {_1005};
_1008 = _1006.value;
if (_1008) goto block244; else goto block245;
block244:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1011 = (frost$core$Bit) {true};
return _1011;
block245:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1014 = (frost$core$Bit) {false};
return _1014;
block243:;
goto block1;
block241:;
_1017 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1020 = _1.value;
_1021 = _1017.value;
_1022 = _1020 == _1021;
_1023 = (frost$core$Bit) {_1022};
_1025 = _1023.value;
if (_1025) goto block247; else goto block248;
block247:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1028 = param1.$rawValue;
_1029 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1032 = _1028.value;
_1033 = _1029.value;
_1034 = _1032 == _1033;
_1035 = (frost$core$Bit) {_1034};
_1037 = _1035.value;
if (_1037) goto block251; else goto block252;
block251:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1040 = (frost$core$Bit) {true};
return _1040;
block252:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1043 = (frost$core$Bit) {false};
return _1043;
block250:;
goto block1;
block248:;
_1046 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1049 = _1.value;
_1050 = _1046.value;
_1051 = _1049 == _1050;
_1052 = (frost$core$Bit) {_1051};
_1054 = _1052.value;
if (_1054) goto block254; else goto block255;
block254:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1057 = param1.$rawValue;
_1058 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1061 = _1057.value;
_1062 = _1058.value;
_1063 = _1061 == _1062;
_1064 = (frost$core$Bit) {_1063};
_1066 = _1064.value;
if (_1066) goto block258; else goto block259;
block258:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1069 = (frost$core$Bit) {true};
return _1069;
block259:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1072 = (frost$core$Bit) {false};
return _1072;
block257:;
goto block1;
block255:;
_1075 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1078 = _1.value;
_1079 = _1075.value;
_1080 = _1078 == _1079;
_1081 = (frost$core$Bit) {_1080};
_1083 = _1081.value;
if (_1083) goto block261; else goto block262;
block261:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1086 = param1.$rawValue;
_1087 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1090 = _1086.value;
_1091 = _1087.value;
_1092 = _1090 == _1091;
_1093 = (frost$core$Bit) {_1092};
_1095 = _1093.value;
if (_1095) goto block265; else goto block266;
block265:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1098 = (frost$core$Bit) {true};
return _1098;
block266:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1101 = (frost$core$Bit) {false};
return _1101;
block264:;
goto block1;
block262:;
_1104 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1107 = _1.value;
_1108 = _1104.value;
_1109 = _1107 == _1108;
_1110 = (frost$core$Bit) {_1109};
_1112 = _1110.value;
if (_1112) goto block268; else goto block269;
block268:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1115 = param1.$rawValue;
_1116 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1119 = _1115.value;
_1120 = _1116.value;
_1121 = _1119 == _1120;
_1122 = (frost$core$Bit) {_1121};
_1124 = _1122.value;
if (_1124) goto block272; else goto block273;
block272:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1127 = (frost$core$Bit) {true};
return _1127;
block273:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1130 = (frost$core$Bit) {false};
return _1130;
block271:;
goto block1;
block269:;
_1133 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1136 = _1.value;
_1137 = _1133.value;
_1138 = _1136 == _1137;
_1139 = (frost$core$Bit) {_1138};
_1141 = _1139.value;
if (_1141) goto block275; else goto block276;
block275:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1144 = param1.$rawValue;
_1145 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1148 = _1144.value;
_1149 = _1145.value;
_1150 = _1148 == _1149;
_1151 = (frost$core$Bit) {_1150};
_1153 = _1151.value;
if (_1153) goto block279; else goto block280;
block279:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1156 = (frost$core$Bit) {true};
return _1156;
block280:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1159 = (frost$core$Bit) {false};
return _1159;
block278:;
goto block1;
block276:;
_1162 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1165 = _1.value;
_1166 = _1162.value;
_1167 = _1165 == _1166;
_1168 = (frost$core$Bit) {_1167};
_1170 = _1168.value;
if (_1170) goto block282; else goto block283;
block282:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1173 = param1.$rawValue;
_1174 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1177 = _1173.value;
_1178 = _1174.value;
_1179 = _1177 == _1178;
_1180 = (frost$core$Bit) {_1179};
_1182 = _1180.value;
if (_1182) goto block286; else goto block287;
block286:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1185 = (frost$core$Bit) {true};
return _1185;
block287:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1188 = (frost$core$Bit) {false};
return _1188;
block285:;
goto block1;
block283:;
_1191 = (frost$core$Int) {41u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1194 = _1.value;
_1195 = _1191.value;
_1196 = _1194 == _1195;
_1197 = (frost$core$Bit) {_1196};
_1199 = _1197.value;
if (_1199) goto block289; else goto block290;
block289:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1202 = param1.$rawValue;
_1203 = (frost$core$Int) {41u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1206 = _1202.value;
_1207 = _1203.value;
_1208 = _1206 == _1207;
_1209 = (frost$core$Bit) {_1208};
_1211 = _1209.value;
if (_1211) goto block293; else goto block294;
block293:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1214 = (frost$core$Bit) {true};
return _1214;
block294:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1217 = (frost$core$Bit) {false};
return _1217;
block292:;
goto block1;
block290:;
_1220 = (frost$core$Int) {42u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1223 = _1.value;
_1224 = _1220.value;
_1225 = _1223 == _1224;
_1226 = (frost$core$Bit) {_1225};
_1228 = _1226.value;
if (_1228) goto block296; else goto block297;
block296:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1231 = param1.$rawValue;
_1232 = (frost$core$Int) {42u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1235 = _1231.value;
_1236 = _1232.value;
_1237 = _1235 == _1236;
_1238 = (frost$core$Bit) {_1237};
_1240 = _1238.value;
if (_1240) goto block300; else goto block301;
block300:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1243 = (frost$core$Bit) {true};
return _1243;
block301:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1246 = (frost$core$Bit) {false};
return _1246;
block299:;
goto block1;
block297:;
_1249 = (frost$core$Int) {43u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1252 = _1.value;
_1253 = _1249.value;
_1254 = _1252 == _1253;
_1255 = (frost$core$Bit) {_1254};
_1257 = _1255.value;
if (_1257) goto block303; else goto block304;
block303:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1260 = param1.$rawValue;
_1261 = (frost$core$Int) {43u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1264 = _1260.value;
_1265 = _1261.value;
_1266 = _1264 == _1265;
_1267 = (frost$core$Bit) {_1266};
_1269 = _1267.value;
if (_1269) goto block307; else goto block308;
block307:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1272 = (frost$core$Bit) {true};
return _1272;
block308:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1275 = (frost$core$Bit) {false};
return _1275;
block306:;
goto block1;
block304:;
_1278 = (frost$core$Int) {44u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1281 = _1.value;
_1282 = _1278.value;
_1283 = _1281 == _1282;
_1284 = (frost$core$Bit) {_1283};
_1286 = _1284.value;
if (_1286) goto block310; else goto block311;
block310:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1289 = param1.$rawValue;
_1290 = (frost$core$Int) {44u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1293 = _1289.value;
_1294 = _1290.value;
_1295 = _1293 == _1294;
_1296 = (frost$core$Bit) {_1295};
_1298 = _1296.value;
if (_1298) goto block314; else goto block315;
block314:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1301 = (frost$core$Bit) {true};
return _1301;
block315:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1304 = (frost$core$Bit) {false};
return _1304;
block313:;
goto block1;
block311:;
_1307 = (frost$core$Int) {45u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1310 = _1.value;
_1311 = _1307.value;
_1312 = _1310 == _1311;
_1313 = (frost$core$Bit) {_1312};
_1315 = _1313.value;
if (_1315) goto block317; else goto block318;
block317:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1318 = param1.$rawValue;
_1319 = (frost$core$Int) {45u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1322 = _1318.value;
_1323 = _1319.value;
_1324 = _1322 == _1323;
_1325 = (frost$core$Bit) {_1324};
_1327 = _1325.value;
if (_1327) goto block321; else goto block322;
block321:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1330 = (frost$core$Bit) {true};
return _1330;
block322:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1333 = (frost$core$Bit) {false};
return _1333;
block320:;
goto block1;
block318:;
_1336 = (frost$core$Int) {46u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1339 = _1.value;
_1340 = _1336.value;
_1341 = _1339 == _1340;
_1342 = (frost$core$Bit) {_1341};
_1344 = _1342.value;
if (_1344) goto block324; else goto block325;
block324:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1347 = param1.$rawValue;
_1348 = (frost$core$Int) {46u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1351 = _1347.value;
_1352 = _1348.value;
_1353 = _1351 == _1352;
_1354 = (frost$core$Bit) {_1353};
_1356 = _1354.value;
if (_1356) goto block328; else goto block329;
block328:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1359 = (frost$core$Bit) {true};
return _1359;
block329:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1362 = (frost$core$Bit) {false};
return _1362;
block327:;
goto block1;
block325:;
_1365 = (frost$core$Int) {47u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1368 = _1.value;
_1369 = _1365.value;
_1370 = _1368 == _1369;
_1371 = (frost$core$Bit) {_1370};
_1373 = _1371.value;
if (_1373) goto block331; else goto block332;
block331:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1376 = param1.$rawValue;
_1377 = (frost$core$Int) {47u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1380 = _1376.value;
_1381 = _1377.value;
_1382 = _1380 == _1381;
_1383 = (frost$core$Bit) {_1382};
_1385 = _1383.value;
if (_1385) goto block335; else goto block336;
block335:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1388 = (frost$core$Bit) {true};
return _1388;
block336:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1391 = (frost$core$Bit) {false};
return _1391;
block334:;
goto block1;
block332:;
_1394 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1397 = _1.value;
_1398 = _1394.value;
_1399 = _1397 == _1398;
_1400 = (frost$core$Bit) {_1399};
_1402 = _1400.value;
if (_1402) goto block338; else goto block339;
block338:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1405 = param1.$rawValue;
_1406 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1409 = _1405.value;
_1410 = _1406.value;
_1411 = _1409 == _1410;
_1412 = (frost$core$Bit) {_1411};
_1414 = _1412.value;
if (_1414) goto block342; else goto block343;
block342:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1417 = (frost$core$Bit) {true};
return _1417;
block343:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1420 = (frost$core$Bit) {false};
return _1420;
block341:;
goto block1;
block339:;
_1423 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1426 = _1.value;
_1427 = _1423.value;
_1428 = _1426 == _1427;
_1429 = (frost$core$Bit) {_1428};
_1431 = _1429.value;
if (_1431) goto block345; else goto block346;
block345:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1434 = param1.$rawValue;
_1435 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1438 = _1434.value;
_1439 = _1435.value;
_1440 = _1438 == _1439;
_1441 = (frost$core$Bit) {_1440};
_1443 = _1441.value;
if (_1443) goto block349; else goto block350;
block349:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1446 = (frost$core$Bit) {true};
return _1446;
block350:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1449 = (frost$core$Bit) {false};
return _1449;
block348:;
goto block1;
block346:;
_1452 = (frost$core$Int) {50u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1455 = _1.value;
_1456 = _1452.value;
_1457 = _1455 == _1456;
_1458 = (frost$core$Bit) {_1457};
_1460 = _1458.value;
if (_1460) goto block352; else goto block353;
block352:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1463 = param1.$rawValue;
_1464 = (frost$core$Int) {50u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1467 = _1463.value;
_1468 = _1464.value;
_1469 = _1467 == _1468;
_1470 = (frost$core$Bit) {_1469};
_1472 = _1470.value;
if (_1472) goto block356; else goto block357;
block356:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1475 = (frost$core$Bit) {true};
return _1475;
block357:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1478 = (frost$core$Bit) {false};
return _1478;
block355:;
goto block1;
block353:;
_1481 = (frost$core$Int) {51u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1484 = _1.value;
_1485 = _1481.value;
_1486 = _1484 == _1485;
_1487 = (frost$core$Bit) {_1486};
_1489 = _1487.value;
if (_1489) goto block359; else goto block360;
block359:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1492 = param1.$rawValue;
_1493 = (frost$core$Int) {51u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1496 = _1492.value;
_1497 = _1493.value;
_1498 = _1496 == _1497;
_1499 = (frost$core$Bit) {_1498};
_1501 = _1499.value;
if (_1501) goto block363; else goto block364;
block363:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1504 = (frost$core$Bit) {true};
return _1504;
block364:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1507 = (frost$core$Bit) {false};
return _1507;
block362:;
goto block1;
block360:;
_1510 = (frost$core$Int) {52u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1513 = _1.value;
_1514 = _1510.value;
_1515 = _1513 == _1514;
_1516 = (frost$core$Bit) {_1515};
_1518 = _1516.value;
if (_1518) goto block366; else goto block367;
block366:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1521 = param1.$rawValue;
_1522 = (frost$core$Int) {52u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1525 = _1521.value;
_1526 = _1522.value;
_1527 = _1525 == _1526;
_1528 = (frost$core$Bit) {_1527};
_1530 = _1528.value;
if (_1530) goto block370; else goto block371;
block370:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1533 = (frost$core$Bit) {true};
return _1533;
block371:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1536 = (frost$core$Bit) {false};
return _1536;
block369:;
goto block1;
block367:;
_1539 = (frost$core$Int) {53u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1542 = _1.value;
_1543 = _1539.value;
_1544 = _1542 == _1543;
_1545 = (frost$core$Bit) {_1544};
_1547 = _1545.value;
if (_1547) goto block373; else goto block374;
block373:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1550 = param1.$rawValue;
_1551 = (frost$core$Int) {53u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1554 = _1550.value;
_1555 = _1551.value;
_1556 = _1554 == _1555;
_1557 = (frost$core$Bit) {_1556};
_1559 = _1557.value;
if (_1559) goto block377; else goto block378;
block377:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1562 = (frost$core$Bit) {true};
return _1562;
block378:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1565 = (frost$core$Bit) {false};
return _1565;
block376:;
goto block1;
block374:;
_1568 = (frost$core$Int) {54u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1571 = _1.value;
_1572 = _1568.value;
_1573 = _1571 == _1572;
_1574 = (frost$core$Bit) {_1573};
_1576 = _1574.value;
if (_1576) goto block380; else goto block381;
block380:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1579 = param1.$rawValue;
_1580 = (frost$core$Int) {54u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1583 = _1579.value;
_1584 = _1580.value;
_1585 = _1583 == _1584;
_1586 = (frost$core$Bit) {_1585};
_1588 = _1586.value;
if (_1588) goto block384; else goto block385;
block384:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1591 = (frost$core$Bit) {true};
return _1591;
block385:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1594 = (frost$core$Bit) {false};
return _1594;
block383:;
goto block1;
block381:;
_1597 = (frost$core$Int) {55u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1600 = _1.value;
_1601 = _1597.value;
_1602 = _1600 == _1601;
_1603 = (frost$core$Bit) {_1602};
_1605 = _1603.value;
if (_1605) goto block387; else goto block388;
block387:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1608 = param1.$rawValue;
_1609 = (frost$core$Int) {55u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1612 = _1608.value;
_1613 = _1609.value;
_1614 = _1612 == _1613;
_1615 = (frost$core$Bit) {_1614};
_1617 = _1615.value;
if (_1617) goto block391; else goto block392;
block391:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1620 = (frost$core$Bit) {true};
return _1620;
block392:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1623 = (frost$core$Bit) {false};
return _1623;
block390:;
goto block1;
block388:;
_1626 = (frost$core$Int) {56u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1629 = _1.value;
_1630 = _1626.value;
_1631 = _1629 == _1630;
_1632 = (frost$core$Bit) {_1631};
_1634 = _1632.value;
if (_1634) goto block394; else goto block395;
block394:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1637 = param1.$rawValue;
_1638 = (frost$core$Int) {56u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1641 = _1637.value;
_1642 = _1638.value;
_1643 = _1641 == _1642;
_1644 = (frost$core$Bit) {_1643};
_1646 = _1644.value;
if (_1646) goto block398; else goto block399;
block398:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1649 = (frost$core$Bit) {true};
return _1649;
block399:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1652 = (frost$core$Bit) {false};
return _1652;
block397:;
goto block1;
block395:;
_1655 = (frost$core$Int) {57u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1658 = _1.value;
_1659 = _1655.value;
_1660 = _1658 == _1659;
_1661 = (frost$core$Bit) {_1660};
_1663 = _1661.value;
if (_1663) goto block401; else goto block402;
block401:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1666 = param1.$rawValue;
_1667 = (frost$core$Int) {57u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1670 = _1666.value;
_1671 = _1667.value;
_1672 = _1670 == _1671;
_1673 = (frost$core$Bit) {_1672};
_1675 = _1673.value;
if (_1675) goto block405; else goto block406;
block405:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1678 = (frost$core$Bit) {true};
return _1678;
block406:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1681 = (frost$core$Bit) {false};
return _1681;
block404:;
goto block1;
block402:;
_1684 = (frost$core$Int) {58u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1687 = _1.value;
_1688 = _1684.value;
_1689 = _1687 == _1688;
_1690 = (frost$core$Bit) {_1689};
_1692 = _1690.value;
if (_1692) goto block408; else goto block409;
block408:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1695 = param1.$rawValue;
_1696 = (frost$core$Int) {58u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1699 = _1695.value;
_1700 = _1696.value;
_1701 = _1699 == _1700;
_1702 = (frost$core$Bit) {_1701};
_1704 = _1702.value;
if (_1704) goto block412; else goto block413;
block412:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1707 = (frost$core$Bit) {true};
return _1707;
block413:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1710 = (frost$core$Bit) {false};
return _1710;
block411:;
goto block1;
block409:;
_1713 = (frost$core$Int) {59u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1716 = _1.value;
_1717 = _1713.value;
_1718 = _1716 == _1717;
_1719 = (frost$core$Bit) {_1718};
_1721 = _1719.value;
if (_1721) goto block415; else goto block416;
block415:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1724 = param1.$rawValue;
_1725 = (frost$core$Int) {59u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1728 = _1724.value;
_1729 = _1725.value;
_1730 = _1728 == _1729;
_1731 = (frost$core$Bit) {_1730};
_1733 = _1731.value;
if (_1733) goto block419; else goto block420;
block419:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1736 = (frost$core$Bit) {true};
return _1736;
block420:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1739 = (frost$core$Bit) {false};
return _1739;
block418:;
goto block1;
block416:;
_1742 = (frost$core$Int) {60u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1745 = _1.value;
_1746 = _1742.value;
_1747 = _1745 == _1746;
_1748 = (frost$core$Bit) {_1747};
_1750 = _1748.value;
if (_1750) goto block422; else goto block423;
block422:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1753 = param1.$rawValue;
_1754 = (frost$core$Int) {60u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1757 = _1753.value;
_1758 = _1754.value;
_1759 = _1757 == _1758;
_1760 = (frost$core$Bit) {_1759};
_1762 = _1760.value;
if (_1762) goto block426; else goto block427;
block426:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1765 = (frost$core$Bit) {true};
return _1765;
block427:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1768 = (frost$core$Bit) {false};
return _1768;
block425:;
goto block1;
block423:;
_1771 = (frost$core$Int) {61u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1774 = _1.value;
_1775 = _1771.value;
_1776 = _1774 == _1775;
_1777 = (frost$core$Bit) {_1776};
_1779 = _1777.value;
if (_1779) goto block429; else goto block430;
block429:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1782 = param1.$rawValue;
_1783 = (frost$core$Int) {61u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1786 = _1782.value;
_1787 = _1783.value;
_1788 = _1786 == _1787;
_1789 = (frost$core$Bit) {_1788};
_1791 = _1789.value;
if (_1791) goto block433; else goto block434;
block433:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1794 = (frost$core$Bit) {true};
return _1794;
block434:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1797 = (frost$core$Bit) {false};
return _1797;
block432:;
goto block1;
block430:;
_1800 = (frost$core$Int) {62u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1803 = _1.value;
_1804 = _1800.value;
_1805 = _1803 == _1804;
_1806 = (frost$core$Bit) {_1805};
_1808 = _1806.value;
if (_1808) goto block436; else goto block437;
block436:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1811 = param1.$rawValue;
_1812 = (frost$core$Int) {62u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1815 = _1811.value;
_1816 = _1812.value;
_1817 = _1815 == _1816;
_1818 = (frost$core$Bit) {_1817};
_1820 = _1818.value;
if (_1820) goto block440; else goto block441;
block440:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1823 = (frost$core$Bit) {true};
return _1823;
block441:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1826 = (frost$core$Bit) {false};
return _1826;
block439:;
goto block1;
block437:;
_1829 = (frost$core$Int) {63u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1832 = _1.value;
_1833 = _1829.value;
_1834 = _1832 == _1833;
_1835 = (frost$core$Bit) {_1834};
_1837 = _1835.value;
if (_1837) goto block443; else goto block444;
block443:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1840 = param1.$rawValue;
_1841 = (frost$core$Int) {63u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1844 = _1840.value;
_1845 = _1841.value;
_1846 = _1844 == _1845;
_1847 = (frost$core$Bit) {_1846};
_1849 = _1847.value;
if (_1849) goto block447; else goto block448;
block447:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1852 = (frost$core$Bit) {true};
return _1852;
block448:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1855 = (frost$core$Bit) {false};
return _1855;
block446:;
goto block1;
block444:;
_1858 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1861 = _1.value;
_1862 = _1858.value;
_1863 = _1861 == _1862;
_1864 = (frost$core$Bit) {_1863};
_1866 = _1864.value;
if (_1866) goto block450; else goto block451;
block450:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1869 = param1.$rawValue;
_1870 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1873 = _1869.value;
_1874 = _1870.value;
_1875 = _1873 == _1874;
_1876 = (frost$core$Bit) {_1875};
_1878 = _1876.value;
if (_1878) goto block454; else goto block455;
block454:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1881 = (frost$core$Bit) {true};
return _1881;
block455:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1884 = (frost$core$Bit) {false};
return _1884;
block453:;
goto block1;
block451:;
_1887 = (frost$core$Int) {65u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1890 = _1.value;
_1891 = _1887.value;
_1892 = _1890 == _1891;
_1893 = (frost$core$Bit) {_1892};
_1895 = _1893.value;
if (_1895) goto block457; else goto block458;
block457:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1898 = param1.$rawValue;
_1899 = (frost$core$Int) {65u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1902 = _1898.value;
_1903 = _1899.value;
_1904 = _1902 == _1903;
_1905 = (frost$core$Bit) {_1904};
_1907 = _1905.value;
if (_1907) goto block461; else goto block462;
block461:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1910 = (frost$core$Bit) {true};
return _1910;
block462:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1913 = (frost$core$Bit) {false};
return _1913;
block460:;
goto block1;
block458:;
_1916 = (frost$core$Int) {66u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1919 = _1.value;
_1920 = _1916.value;
_1921 = _1919 == _1920;
_1922 = (frost$core$Bit) {_1921};
_1924 = _1922.value;
if (_1924) goto block464; else goto block465;
block464:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1927 = param1.$rawValue;
_1928 = (frost$core$Int) {66u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1931 = _1927.value;
_1932 = _1928.value;
_1933 = _1931 == _1932;
_1934 = (frost$core$Bit) {_1933};
_1936 = _1934.value;
if (_1936) goto block468; else goto block469;
block468:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1939 = (frost$core$Bit) {true};
return _1939;
block469:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1942 = (frost$core$Bit) {false};
return _1942;
block467:;
goto block1;
block465:;
_1945 = (frost$core$Int) {67u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1948 = _1.value;
_1949 = _1945.value;
_1950 = _1948 == _1949;
_1951 = (frost$core$Bit) {_1950};
_1953 = _1951.value;
if (_1953) goto block471; else goto block472;
block471:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1956 = param1.$rawValue;
_1957 = (frost$core$Int) {67u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1960 = _1956.value;
_1961 = _1957.value;
_1962 = _1960 == _1961;
_1963 = (frost$core$Bit) {_1962};
_1965 = _1963.value;
if (_1965) goto block475; else goto block476;
block475:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1968 = (frost$core$Bit) {true};
return _1968;
block476:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1971 = (frost$core$Bit) {false};
return _1971;
block474:;
goto block1;
block472:;
_1974 = (frost$core$Int) {68u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1977 = _1.value;
_1978 = _1974.value;
_1979 = _1977 == _1978;
_1980 = (frost$core$Bit) {_1979};
_1982 = _1980.value;
if (_1982) goto block478; else goto block479;
block478:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1985 = param1.$rawValue;
_1986 = (frost$core$Int) {68u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1989 = _1985.value;
_1990 = _1986.value;
_1991 = _1989 == _1990;
_1992 = (frost$core$Bit) {_1991};
_1994 = _1992.value;
if (_1994) goto block482; else goto block483;
block482:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1997 = (frost$core$Bit) {true};
return _1997;
block483:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2000 = (frost$core$Bit) {false};
return _2000;
block481:;
goto block1;
block479:;
_2003 = (frost$core$Int) {69u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2006 = _1.value;
_2007 = _2003.value;
_2008 = _2006 == _2007;
_2009 = (frost$core$Bit) {_2008};
_2011 = _2009.value;
if (_2011) goto block485; else goto block486;
block485:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2014 = param1.$rawValue;
_2015 = (frost$core$Int) {69u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2018 = _2014.value;
_2019 = _2015.value;
_2020 = _2018 == _2019;
_2021 = (frost$core$Bit) {_2020};
_2023 = _2021.value;
if (_2023) goto block489; else goto block490;
block489:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2026 = (frost$core$Bit) {true};
return _2026;
block490:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2029 = (frost$core$Bit) {false};
return _2029;
block488:;
goto block1;
block486:;
_2032 = (frost$core$Int) {70u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2035 = _1.value;
_2036 = _2032.value;
_2037 = _2035 == _2036;
_2038 = (frost$core$Bit) {_2037};
_2040 = _2038.value;
if (_2040) goto block492; else goto block493;
block492:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2043 = param1.$rawValue;
_2044 = (frost$core$Int) {70u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2047 = _2043.value;
_2048 = _2044.value;
_2049 = _2047 == _2048;
_2050 = (frost$core$Bit) {_2049};
_2052 = _2050.value;
if (_2052) goto block496; else goto block497;
block496:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2055 = (frost$core$Bit) {true};
return _2055;
block497:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2058 = (frost$core$Bit) {false};
return _2058;
block495:;
goto block1;
block493:;
_2061 = (frost$core$Int) {71u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2064 = _1.value;
_2065 = _2061.value;
_2066 = _2064 == _2065;
_2067 = (frost$core$Bit) {_2066};
_2069 = _2067.value;
if (_2069) goto block499; else goto block500;
block499:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2072 = param1.$rawValue;
_2073 = (frost$core$Int) {71u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2076 = _2072.value;
_2077 = _2073.value;
_2078 = _2076 == _2077;
_2079 = (frost$core$Bit) {_2078};
_2081 = _2079.value;
if (_2081) goto block503; else goto block504;
block503:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2084 = (frost$core$Bit) {true};
return _2084;
block504:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2087 = (frost$core$Bit) {false};
return _2087;
block502:;
goto block1;
block500:;
_2090 = (frost$core$Int) {72u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2093 = _1.value;
_2094 = _2090.value;
_2095 = _2093 == _2094;
_2096 = (frost$core$Bit) {_2095};
_2098 = _2096.value;
if (_2098) goto block506; else goto block507;
block506:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2101 = param1.$rawValue;
_2102 = (frost$core$Int) {72u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2105 = _2101.value;
_2106 = _2102.value;
_2107 = _2105 == _2106;
_2108 = (frost$core$Bit) {_2107};
_2110 = _2108.value;
if (_2110) goto block510; else goto block511;
block510:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2113 = (frost$core$Bit) {true};
return _2113;
block511:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2116 = (frost$core$Bit) {false};
return _2116;
block509:;
goto block1;
block507:;
_2119 = (frost$core$Int) {73u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2122 = _1.value;
_2123 = _2119.value;
_2124 = _2122 == _2123;
_2125 = (frost$core$Bit) {_2124};
_2127 = _2125.value;
if (_2127) goto block513; else goto block514;
block513:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2130 = param1.$rawValue;
_2131 = (frost$core$Int) {73u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2134 = _2130.value;
_2135 = _2131.value;
_2136 = _2134 == _2135;
_2137 = (frost$core$Bit) {_2136};
_2139 = _2137.value;
if (_2139) goto block517; else goto block518;
block517:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2142 = (frost$core$Bit) {true};
return _2142;
block518:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2145 = (frost$core$Bit) {false};
return _2145;
block516:;
goto block1;
block514:;
_2148 = (frost$core$Int) {74u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2151 = _1.value;
_2152 = _2148.value;
_2153 = _2151 == _2152;
_2154 = (frost$core$Bit) {_2153};
_2156 = _2154.value;
if (_2156) goto block520; else goto block521;
block520:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2159 = param1.$rawValue;
_2160 = (frost$core$Int) {74u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2163 = _2159.value;
_2164 = _2160.value;
_2165 = _2163 == _2164;
_2166 = (frost$core$Bit) {_2165};
_2168 = _2166.value;
if (_2168) goto block524; else goto block525;
block524:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2171 = (frost$core$Bit) {true};
return _2171;
block525:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2174 = (frost$core$Bit) {false};
return _2174;
block523:;
goto block1;
block521:;
_2177 = (frost$core$Int) {75u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2180 = _1.value;
_2181 = _2177.value;
_2182 = _2180 == _2181;
_2183 = (frost$core$Bit) {_2182};
_2185 = _2183.value;
if (_2185) goto block527; else goto block528;
block527:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2188 = param1.$rawValue;
_2189 = (frost$core$Int) {75u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2192 = _2188.value;
_2193 = _2189.value;
_2194 = _2192 == _2193;
_2195 = (frost$core$Bit) {_2194};
_2197 = _2195.value;
if (_2197) goto block531; else goto block532;
block531:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2200 = (frost$core$Bit) {true};
return _2200;
block532:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2203 = (frost$core$Bit) {false};
return _2203;
block530:;
goto block1;
block528:;
_2206 = (frost$core$Int) {76u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2209 = _1.value;
_2210 = _2206.value;
_2211 = _2209 == _2210;
_2212 = (frost$core$Bit) {_2211};
_2214 = _2212.value;
if (_2214) goto block534; else goto block535;
block534:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2217 = param1.$rawValue;
_2218 = (frost$core$Int) {76u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2221 = _2217.value;
_2222 = _2218.value;
_2223 = _2221 == _2222;
_2224 = (frost$core$Bit) {_2223};
_2226 = _2224.value;
if (_2226) goto block538; else goto block539;
block538:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2229 = (frost$core$Bit) {true};
return _2229;
block539:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2232 = (frost$core$Bit) {false};
return _2232;
block537:;
goto block1;
block535:;
_2235 = (frost$core$Int) {77u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2238 = _1.value;
_2239 = _2235.value;
_2240 = _2238 == _2239;
_2241 = (frost$core$Bit) {_2240};
_2243 = _2241.value;
if (_2243) goto block541; else goto block542;
block541:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2246 = param1.$rawValue;
_2247 = (frost$core$Int) {77u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2250 = _2246.value;
_2251 = _2247.value;
_2252 = _2250 == _2251;
_2253 = (frost$core$Bit) {_2252};
_2255 = _2253.value;
if (_2255) goto block545; else goto block546;
block545:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2258 = (frost$core$Bit) {true};
return _2258;
block546:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2261 = (frost$core$Bit) {false};
return _2261;
block544:;
goto block1;
block542:;
_2264 = (frost$core$Int) {78u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2267 = _1.value;
_2268 = _2264.value;
_2269 = _2267 == _2268;
_2270 = (frost$core$Bit) {_2269};
_2272 = _2270.value;
if (_2272) goto block548; else goto block549;
block548:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2275 = param1.$rawValue;
_2276 = (frost$core$Int) {78u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2279 = _2275.value;
_2280 = _2276.value;
_2281 = _2279 == _2280;
_2282 = (frost$core$Bit) {_2281};
_2284 = _2282.value;
if (_2284) goto block552; else goto block553;
block552:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2287 = (frost$core$Bit) {true};
return _2287;
block553:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2290 = (frost$core$Bit) {false};
return _2290;
block551:;
goto block1;
block549:;
_2293 = (frost$core$Int) {79u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2296 = _1.value;
_2297 = _2293.value;
_2298 = _2296 == _2297;
_2299 = (frost$core$Bit) {_2298};
_2301 = _2299.value;
if (_2301) goto block555; else goto block556;
block555:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2304 = param1.$rawValue;
_2305 = (frost$core$Int) {79u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2308 = _2304.value;
_2309 = _2305.value;
_2310 = _2308 == _2309;
_2311 = (frost$core$Bit) {_2310};
_2313 = _2311.value;
if (_2313) goto block559; else goto block560;
block559:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2316 = (frost$core$Bit) {true};
return _2316;
block560:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2319 = (frost$core$Bit) {false};
return _2319;
block558:;
goto block1;
block556:;
_2322 = (frost$core$Int) {80u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2325 = _1.value;
_2326 = _2322.value;
_2327 = _2325 == _2326;
_2328 = (frost$core$Bit) {_2327};
_2330 = _2328.value;
if (_2330) goto block562; else goto block563;
block562:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2333 = param1.$rawValue;
_2334 = (frost$core$Int) {80u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2337 = _2333.value;
_2338 = _2334.value;
_2339 = _2337 == _2338;
_2340 = (frost$core$Bit) {_2339};
_2342 = _2340.value;
if (_2342) goto block566; else goto block567;
block566:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2345 = (frost$core$Bit) {true};
return _2345;
block567:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2348 = (frost$core$Bit) {false};
return _2348;
block565:;
goto block1;
block563:;
_2351 = (frost$core$Int) {81u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2354 = _1.value;
_2355 = _2351.value;
_2356 = _2354 == _2355;
_2357 = (frost$core$Bit) {_2356};
_2359 = _2357.value;
if (_2359) goto block569; else goto block570;
block569:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2362 = param1.$rawValue;
_2363 = (frost$core$Int) {81u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2366 = _2362.value;
_2367 = _2363.value;
_2368 = _2366 == _2367;
_2369 = (frost$core$Bit) {_2368};
_2371 = _2369.value;
if (_2371) goto block573; else goto block574;
block573:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2374 = (frost$core$Bit) {true};
return _2374;
block574:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2377 = (frost$core$Bit) {false};
return _2377;
block572:;
goto block1;
block570:;
_2380 = (frost$core$Int) {82u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2383 = _1.value;
_2384 = _2380.value;
_2385 = _2383 == _2384;
_2386 = (frost$core$Bit) {_2385};
_2388 = _2386.value;
if (_2388) goto block576; else goto block577;
block576:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2391 = param1.$rawValue;
_2392 = (frost$core$Int) {82u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2395 = _2391.value;
_2396 = _2392.value;
_2397 = _2395 == _2396;
_2398 = (frost$core$Bit) {_2397};
_2400 = _2398.value;
if (_2400) goto block580; else goto block581;
block580:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2403 = (frost$core$Bit) {true};
return _2403;
block581:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2406 = (frost$core$Bit) {false};
return _2406;
block579:;
goto block1;
block577:;
_2409 = (frost$core$Int) {83u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2412 = _1.value;
_2413 = _2409.value;
_2414 = _2412 == _2413;
_2415 = (frost$core$Bit) {_2414};
_2417 = _2415.value;
if (_2417) goto block583; else goto block584;
block583:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2420 = param1.$rawValue;
_2421 = (frost$core$Int) {83u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2424 = _2420.value;
_2425 = _2421.value;
_2426 = _2424 == _2425;
_2427 = (frost$core$Bit) {_2426};
_2429 = _2427.value;
if (_2429) goto block587; else goto block588;
block587:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2432 = (frost$core$Bit) {true};
return _2432;
block588:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2435 = (frost$core$Bit) {false};
return _2435;
block586:;
goto block1;
block584:;
_2438 = (frost$core$Int) {84u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2441 = _1.value;
_2442 = _2438.value;
_2443 = _2441 == _2442;
_2444 = (frost$core$Bit) {_2443};
_2446 = _2444.value;
if (_2446) goto block590; else goto block591;
block590:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2449 = param1.$rawValue;
_2450 = (frost$core$Int) {84u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2453 = _2449.value;
_2454 = _2450.value;
_2455 = _2453 == _2454;
_2456 = (frost$core$Bit) {_2455};
_2458 = _2456.value;
if (_2458) goto block594; else goto block595;
block594:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2461 = (frost$core$Bit) {true};
return _2461;
block595:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2464 = (frost$core$Bit) {false};
return _2464;
block593:;
goto block1;
block591:;
_2467 = (frost$core$Int) {85u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2470 = _1.value;
_2471 = _2467.value;
_2472 = _2470 == _2471;
_2473 = (frost$core$Bit) {_2472};
_2475 = _2473.value;
if (_2475) goto block597; else goto block598;
block597:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2478 = param1.$rawValue;
_2479 = (frost$core$Int) {85u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2482 = _2478.value;
_2483 = _2479.value;
_2484 = _2482 == _2483;
_2485 = (frost$core$Bit) {_2484};
_2487 = _2485.value;
if (_2487) goto block601; else goto block602;
block601:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2490 = (frost$core$Bit) {true};
return _2490;
block602:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2493 = (frost$core$Bit) {false};
return _2493;
block600:;
goto block1;
block598:;
_2496 = (frost$core$Int) {86u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2499 = _1.value;
_2500 = _2496.value;
_2501 = _2499 == _2500;
_2502 = (frost$core$Bit) {_2501};
_2504 = _2502.value;
if (_2504) goto block604; else goto block605;
block604:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2507 = param1.$rawValue;
_2508 = (frost$core$Int) {86u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2511 = _2507.value;
_2512 = _2508.value;
_2513 = _2511 == _2512;
_2514 = (frost$core$Bit) {_2513};
_2516 = _2514.value;
if (_2516) goto block608; else goto block609;
block608:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2519 = (frost$core$Bit) {true};
return _2519;
block609:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2522 = (frost$core$Bit) {false};
return _2522;
block607:;
goto block1;
block605:;
_2525 = (frost$core$Int) {87u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2528 = _1.value;
_2529 = _2525.value;
_2530 = _2528 == _2529;
_2531 = (frost$core$Bit) {_2530};
_2533 = _2531.value;
if (_2533) goto block611; else goto block612;
block611:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2536 = param1.$rawValue;
_2537 = (frost$core$Int) {87u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2540 = _2536.value;
_2541 = _2537.value;
_2542 = _2540 == _2541;
_2543 = (frost$core$Bit) {_2542};
_2545 = _2543.value;
if (_2545) goto block615; else goto block616;
block615:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2548 = (frost$core$Bit) {true};
return _2548;
block616:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2551 = (frost$core$Bit) {false};
return _2551;
block614:;
goto block1;
block612:;
_2554 = (frost$core$Int) {88u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2557 = _1.value;
_2558 = _2554.value;
_2559 = _2557 == _2558;
_2560 = (frost$core$Bit) {_2559};
_2562 = _2560.value;
if (_2562) goto block618; else goto block619;
block618:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2565 = param1.$rawValue;
_2566 = (frost$core$Int) {88u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2569 = _2565.value;
_2570 = _2566.value;
_2571 = _2569 == _2570;
_2572 = (frost$core$Bit) {_2571};
_2574 = _2572.value;
if (_2574) goto block622; else goto block623;
block622:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2577 = (frost$core$Bit) {true};
return _2577;
block623:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2580 = (frost$core$Bit) {false};
return _2580;
block621:;
goto block1;
block619:;
_2583 = (frost$core$Int) {89u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2586 = _1.value;
_2587 = _2583.value;
_2588 = _2586 == _2587;
_2589 = (frost$core$Bit) {_2588};
_2591 = _2589.value;
if (_2591) goto block625; else goto block626;
block625:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2594 = param1.$rawValue;
_2595 = (frost$core$Int) {89u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2598 = _2594.value;
_2599 = _2595.value;
_2600 = _2598 == _2599;
_2601 = (frost$core$Bit) {_2600};
_2603 = _2601.value;
if (_2603) goto block629; else goto block630;
block629:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2606 = (frost$core$Bit) {true};
return _2606;
block630:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2609 = (frost$core$Bit) {false};
return _2609;
block628:;
goto block1;
block626:;
_2612 = (frost$core$Int) {90u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2615 = _1.value;
_2616 = _2612.value;
_2617 = _2615 == _2616;
_2618 = (frost$core$Bit) {_2617};
_2620 = _2618.value;
if (_2620) goto block632; else goto block633;
block632:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2623 = param1.$rawValue;
_2624 = (frost$core$Int) {90u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2627 = _2623.value;
_2628 = _2624.value;
_2629 = _2627 == _2628;
_2630 = (frost$core$Bit) {_2629};
_2632 = _2630.value;
if (_2632) goto block636; else goto block637;
block636:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2635 = (frost$core$Bit) {true};
return _2635;
block637:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2638 = (frost$core$Bit) {false};
return _2638;
block635:;
goto block1;
block633:;
_2641 = (frost$core$Int) {91u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2644 = _1.value;
_2645 = _2641.value;
_2646 = _2644 == _2645;
_2647 = (frost$core$Bit) {_2646};
_2649 = _2647.value;
if (_2649) goto block639; else goto block640;
block639:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2652 = param1.$rawValue;
_2653 = (frost$core$Int) {91u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2656 = _2652.value;
_2657 = _2653.value;
_2658 = _2656 == _2657;
_2659 = (frost$core$Bit) {_2658};
_2661 = _2659.value;
if (_2661) goto block643; else goto block644;
block643:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2664 = (frost$core$Bit) {true};
return _2664;
block644:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2667 = (frost$core$Bit) {false};
return _2667;
block642:;
goto block1;
block640:;
_2670 = (frost$core$Int) {92u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2673 = _1.value;
_2674 = _2670.value;
_2675 = _2673 == _2674;
_2676 = (frost$core$Bit) {_2675};
_2678 = _2676.value;
if (_2678) goto block646; else goto block647;
block646:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2681 = param1.$rawValue;
_2682 = (frost$core$Int) {92u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2685 = _2681.value;
_2686 = _2682.value;
_2687 = _2685 == _2686;
_2688 = (frost$core$Bit) {_2687};
_2690 = _2688.value;
if (_2690) goto block650; else goto block651;
block650:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2693 = (frost$core$Bit) {true};
return _2693;
block651:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2696 = (frost$core$Bit) {false};
return _2696;
block649:;
goto block1;
block647:;
_2699 = (frost$core$Int) {93u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2702 = _1.value;
_2703 = _2699.value;
_2704 = _2702 == _2703;
_2705 = (frost$core$Bit) {_2704};
_2707 = _2705.value;
if (_2707) goto block653; else goto block654;
block653:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2710 = param1.$rawValue;
_2711 = (frost$core$Int) {93u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2714 = _2710.value;
_2715 = _2711.value;
_2716 = _2714 == _2715;
_2717 = (frost$core$Bit) {_2716};
_2719 = _2717.value;
if (_2719) goto block657; else goto block658;
block657:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2722 = (frost$core$Bit) {true};
return _2722;
block658:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2725 = (frost$core$Bit) {false};
return _2725;
block656:;
goto block1;
block654:;
_2728 = (frost$core$Int) {94u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2731 = _1.value;
_2732 = _2728.value;
_2733 = _2731 == _2732;
_2734 = (frost$core$Bit) {_2733};
_2736 = _2734.value;
if (_2736) goto block660; else goto block661;
block660:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2739 = param1.$rawValue;
_2740 = (frost$core$Int) {94u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2743 = _2739.value;
_2744 = _2740.value;
_2745 = _2743 == _2744;
_2746 = (frost$core$Bit) {_2745};
_2748 = _2746.value;
if (_2748) goto block664; else goto block665;
block664:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2751 = (frost$core$Bit) {true};
return _2751;
block665:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2754 = (frost$core$Bit) {false};
return _2754;
block663:;
goto block1;
block661:;
_2757 = (frost$core$Int) {95u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2760 = _1.value;
_2761 = _2757.value;
_2762 = _2760 == _2761;
_2763 = (frost$core$Bit) {_2762};
_2765 = _2763.value;
if (_2765) goto block667; else goto block668;
block667:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2768 = param1.$rawValue;
_2769 = (frost$core$Int) {95u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2772 = _2768.value;
_2773 = _2769.value;
_2774 = _2772 == _2773;
_2775 = (frost$core$Bit) {_2774};
_2777 = _2775.value;
if (_2777) goto block671; else goto block672;
block671:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2780 = (frost$core$Bit) {true};
return _2780;
block672:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2783 = (frost$core$Bit) {false};
return _2783;
block670:;
goto block1;
block668:;
_2786 = (frost$core$Int) {96u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2789 = _1.value;
_2790 = _2786.value;
_2791 = _2789 == _2790;
_2792 = (frost$core$Bit) {_2791};
_2794 = _2792.value;
if (_2794) goto block674; else goto block675;
block674:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2797 = param1.$rawValue;
_2798 = (frost$core$Int) {96u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2801 = _2797.value;
_2802 = _2798.value;
_2803 = _2801 == _2802;
_2804 = (frost$core$Bit) {_2803};
_2806 = _2804.value;
if (_2806) goto block678; else goto block679;
block678:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2809 = (frost$core$Bit) {true};
return _2809;
block679:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2812 = (frost$core$Bit) {false};
return _2812;
block677:;
goto block1;
block675:;
_2815 = (frost$core$Int) {97u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2818 = _1.value;
_2819 = _2815.value;
_2820 = _2818 == _2819;
_2821 = (frost$core$Bit) {_2820};
_2823 = _2821.value;
if (_2823) goto block681; else goto block682;
block681:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2826 = param1.$rawValue;
_2827 = (frost$core$Int) {97u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2830 = _2826.value;
_2831 = _2827.value;
_2832 = _2830 == _2831;
_2833 = (frost$core$Bit) {_2832};
_2835 = _2833.value;
if (_2835) goto block685; else goto block686;
block685:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2838 = (frost$core$Bit) {true};
return _2838;
block686:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2841 = (frost$core$Bit) {false};
return _2841;
block684:;
goto block1;
block682:;
_2844 = (frost$core$Int) {98u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2847 = _1.value;
_2848 = _2844.value;
_2849 = _2847 == _2848;
_2850 = (frost$core$Bit) {_2849};
_2852 = _2850.value;
if (_2852) goto block688; else goto block689;
block688:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2855 = param1.$rawValue;
_2856 = (frost$core$Int) {98u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2859 = _2855.value;
_2860 = _2856.value;
_2861 = _2859 == _2860;
_2862 = (frost$core$Bit) {_2861};
_2864 = _2862.value;
if (_2864) goto block692; else goto block693;
block692:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2867 = (frost$core$Bit) {true};
return _2867;
block693:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2870 = (frost$core$Bit) {false};
return _2870;
block691:;
goto block1;
block689:;
_2873 = (frost$core$Int) {99u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2876 = _1.value;
_2877 = _2873.value;
_2878 = _2876 == _2877;
_2879 = (frost$core$Bit) {_2878};
_2881 = _2879.value;
if (_2881) goto block695; else goto block696;
block695:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2884 = param1.$rawValue;
_2885 = (frost$core$Int) {99u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2888 = _2884.value;
_2889 = _2885.value;
_2890 = _2888 == _2889;
_2891 = (frost$core$Bit) {_2890};
_2893 = _2891.value;
if (_2893) goto block699; else goto block700;
block699:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2896 = (frost$core$Bit) {true};
return _2896;
block700:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2899 = (frost$core$Bit) {false};
return _2899;
block698:;
goto block1;
block696:;
_2902 = (frost$core$Int) {100u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2905 = _1.value;
_2906 = _2902.value;
_2907 = _2905 == _2906;
_2908 = (frost$core$Bit) {_2907};
_2910 = _2908.value;
if (_2910) goto block702; else goto block703;
block702:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2913 = param1.$rawValue;
_2914 = (frost$core$Int) {100u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2917 = _2913.value;
_2918 = _2914.value;
_2919 = _2917 == _2918;
_2920 = (frost$core$Bit) {_2919};
_2922 = _2920.value;
if (_2922) goto block706; else goto block707;
block706:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2925 = (frost$core$Bit) {true};
return _2925;
block707:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2928 = (frost$core$Bit) {false};
return _2928;
block705:;
goto block1;
block703:;
_2931 = (frost$core$Int) {101u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2934 = _1.value;
_2935 = _2931.value;
_2936 = _2934 == _2935;
_2937 = (frost$core$Bit) {_2936};
_2939 = _2937.value;
if (_2939) goto block709; else goto block710;
block709:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2942 = param1.$rawValue;
_2943 = (frost$core$Int) {101u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2946 = _2942.value;
_2947 = _2943.value;
_2948 = _2946 == _2947;
_2949 = (frost$core$Bit) {_2948};
_2951 = _2949.value;
if (_2951) goto block713; else goto block714;
block713:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2954 = (frost$core$Bit) {true};
return _2954;
block714:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2957 = (frost$core$Bit) {false};
return _2957;
block712:;
goto block1;
block710:;
_2960 = (frost$core$Int) {102u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2963 = _1.value;
_2964 = _2960.value;
_2965 = _2963 == _2964;
_2966 = (frost$core$Bit) {_2965};
_2968 = _2966.value;
if (_2968) goto block716; else goto block717;
block716:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2971 = param1.$rawValue;
_2972 = (frost$core$Int) {102u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2975 = _2971.value;
_2976 = _2972.value;
_2977 = _2975 == _2976;
_2978 = (frost$core$Bit) {_2977};
_2980 = _2978.value;
if (_2980) goto block720; else goto block721;
block720:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2983 = (frost$core$Bit) {true};
return _2983;
block721:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_2986 = (frost$core$Bit) {false};
return _2986;
block719:;
goto block1;
block717:;
_2989 = (frost$core$Int) {103u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2992 = _1.value;
_2993 = _2989.value;
_2994 = _2992 == _2993;
_2995 = (frost$core$Bit) {_2994};
_2997 = _2995.value;
if (_2997) goto block723; else goto block724;
block723:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3000 = param1.$rawValue;
_3001 = (frost$core$Int) {103u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3004 = _3000.value;
_3005 = _3001.value;
_3006 = _3004 == _3005;
_3007 = (frost$core$Bit) {_3006};
_3009 = _3007.value;
if (_3009) goto block727; else goto block728;
block727:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3012 = (frost$core$Bit) {true};
return _3012;
block728:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3015 = (frost$core$Bit) {false};
return _3015;
block726:;
goto block1;
block724:;
_3018 = (frost$core$Int) {104u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3021 = _1.value;
_3022 = _3018.value;
_3023 = _3021 == _3022;
_3024 = (frost$core$Bit) {_3023};
_3026 = _3024.value;
if (_3026) goto block730; else goto block731;
block730:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3029 = param1.$rawValue;
_3030 = (frost$core$Int) {104u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3033 = _3029.value;
_3034 = _3030.value;
_3035 = _3033 == _3034;
_3036 = (frost$core$Bit) {_3035};
_3038 = _3036.value;
if (_3038) goto block734; else goto block735;
block734:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3041 = (frost$core$Bit) {true};
return _3041;
block735:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3044 = (frost$core$Bit) {false};
return _3044;
block733:;
goto block1;
block731:;
_3047 = (frost$core$Int) {105u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3050 = _1.value;
_3051 = _3047.value;
_3052 = _3050 == _3051;
_3053 = (frost$core$Bit) {_3052};
_3055 = _3053.value;
if (_3055) goto block737; else goto block738;
block737:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3058 = param1.$rawValue;
_3059 = (frost$core$Int) {105u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3062 = _3058.value;
_3063 = _3059.value;
_3064 = _3062 == _3063;
_3065 = (frost$core$Bit) {_3064};
_3067 = _3065.value;
if (_3067) goto block741; else goto block742;
block741:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3070 = (frost$core$Bit) {true};
return _3070;
block742:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3073 = (frost$core$Bit) {false};
return _3073;
block740:;
goto block1;
block738:;
_3076 = (frost$core$Int) {106u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3079 = _1.value;
_3080 = _3076.value;
_3081 = _3079 == _3080;
_3082 = (frost$core$Bit) {_3081};
_3084 = _3082.value;
if (_3084) goto block744; else goto block745;
block744:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3087 = param1.$rawValue;
_3088 = (frost$core$Int) {106u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3091 = _3087.value;
_3092 = _3088.value;
_3093 = _3091 == _3092;
_3094 = (frost$core$Bit) {_3093};
_3096 = _3094.value;
if (_3096) goto block748; else goto block749;
block748:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3099 = (frost$core$Bit) {true};
return _3099;
block749:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3102 = (frost$core$Bit) {false};
return _3102;
block747:;
goto block1;
block745:;
_3105 = (frost$core$Int) {107u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3108 = _1.value;
_3109 = _3105.value;
_3110 = _3108 == _3109;
_3111 = (frost$core$Bit) {_3110};
_3113 = _3111.value;
if (_3113) goto block751; else goto block752;
block751:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3116 = param1.$rawValue;
_3117 = (frost$core$Int) {107u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3120 = _3116.value;
_3121 = _3117.value;
_3122 = _3120 == _3121;
_3123 = (frost$core$Bit) {_3122};
_3125 = _3123.value;
if (_3125) goto block755; else goto block756;
block755:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3128 = (frost$core$Bit) {true};
return _3128;
block756:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3131 = (frost$core$Bit) {false};
return _3131;
block754:;
goto block1;
block752:;
_3134 = (frost$core$Int) {108u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3137 = _1.value;
_3138 = _3134.value;
_3139 = _3137 == _3138;
_3140 = (frost$core$Bit) {_3139};
_3142 = _3140.value;
if (_3142) goto block758; else goto block759;
block758:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3145 = param1.$rawValue;
_3146 = (frost$core$Int) {108u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3149 = _3145.value;
_3150 = _3146.value;
_3151 = _3149 == _3150;
_3152 = (frost$core$Bit) {_3151};
_3154 = _3152.value;
if (_3154) goto block762; else goto block763;
block762:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3157 = (frost$core$Bit) {true};
return _3157;
block763:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3160 = (frost$core$Bit) {false};
return _3160;
block761:;
goto block1;
block759:;
_3163 = (frost$core$Int) {109u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3166 = _1.value;
_3167 = _3163.value;
_3168 = _3166 == _3167;
_3169 = (frost$core$Bit) {_3168};
_3171 = _3169.value;
if (_3171) goto block765; else goto block766;
block765:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3174 = param1.$rawValue;
_3175 = (frost$core$Int) {109u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3178 = _3174.value;
_3179 = _3175.value;
_3180 = _3178 == _3179;
_3181 = (frost$core$Bit) {_3180};
_3183 = _3181.value;
if (_3183) goto block769; else goto block770;
block769:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3186 = (frost$core$Bit) {true};
return _3186;
block770:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3189 = (frost$core$Bit) {false};
return _3189;
block768:;
goto block1;
block766:;
_3192 = (frost$core$Int) {110u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3195 = _1.value;
_3196 = _3192.value;
_3197 = _3195 == _3196;
_3198 = (frost$core$Bit) {_3197};
_3200 = _3198.value;
if (_3200) goto block772; else goto block773;
block772:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3203 = param1.$rawValue;
_3204 = (frost$core$Int) {110u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3207 = _3203.value;
_3208 = _3204.value;
_3209 = _3207 == _3208;
_3210 = (frost$core$Bit) {_3209};
_3212 = _3210.value;
if (_3212) goto block776; else goto block777;
block776:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3215 = (frost$core$Bit) {true};
return _3215;
block777:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3218 = (frost$core$Bit) {false};
return _3218;
block775:;
goto block1;
block773:;
_3221 = (frost$core$Int) {111u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3224 = _1.value;
_3225 = _3221.value;
_3226 = _3224 == _3225;
_3227 = (frost$core$Bit) {_3226};
_3229 = _3227.value;
if (_3229) goto block779; else goto block780;
block779:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3232 = param1.$rawValue;
_3233 = (frost$core$Int) {111u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3236 = _3232.value;
_3237 = _3233.value;
_3238 = _3236 == _3237;
_3239 = (frost$core$Bit) {_3238};
_3241 = _3239.value;
if (_3241) goto block783; else goto block784;
block783:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3244 = (frost$core$Bit) {true};
return _3244;
block784:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3247 = (frost$core$Bit) {false};
return _3247;
block782:;
goto block1;
block780:;
_3250 = (frost$core$Int) {112u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3253 = _1.value;
_3254 = _3250.value;
_3255 = _3253 == _3254;
_3256 = (frost$core$Bit) {_3255};
_3258 = _3256.value;
if (_3258) goto block786; else goto block787;
block786:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3261 = param1.$rawValue;
_3262 = (frost$core$Int) {112u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3265 = _3261.value;
_3266 = _3262.value;
_3267 = _3265 == _3266;
_3268 = (frost$core$Bit) {_3267};
_3270 = _3268.value;
if (_3270) goto block790; else goto block791;
block790:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3273 = (frost$core$Bit) {true};
return _3273;
block791:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3276 = (frost$core$Bit) {false};
return _3276;
block789:;
goto block1;
block787:;
_3279 = (frost$core$Int) {113u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3282 = _1.value;
_3283 = _3279.value;
_3284 = _3282 == _3283;
_3285 = (frost$core$Bit) {_3284};
_3287 = _3285.value;
if (_3287) goto block793; else goto block794;
block793:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3290 = param1.$rawValue;
_3291 = (frost$core$Int) {113u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_3294 = _3290.value;
_3295 = _3291.value;
_3296 = _3294 == _3295;
_3297 = (frost$core$Bit) {_3296};
_3299 = _3297.value;
if (_3299) goto block797; else goto block798;
block797:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3302 = (frost$core$Bit) {true};
return _3302;
block798:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3305 = (frost$core$Bit) {false};
return _3305;
block796:;
goto block1;
block794:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_3309 = (frost$core$Int) {10u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3, _3309);
abort(); // unreachable
block1:;
goto block800;
block800:;

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
frost$core$Int _1471;
int64_t _1474;
int64_t _1475;
bool _1476;
frost$core$Bit _1477;
bool _1479;
frost$core$Int _1482;
frost$core$Int _1485;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1 = param0.$rawValue;
_2 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_13 = (frost$core$Int) {13220400891325003564u};
return _13;
block3:;
_15 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_18 = _1.value;
_19 = _15.value;
_20 = _18 == _19;
_21 = (frost$core$Bit) {_20};
_23 = _21.value;
if (_23) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_26 = (frost$core$Int) {7994057708940455512u};
return _26;
block6:;
_28 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_31 = _1.value;
_32 = _28.value;
_33 = _31 == _32;
_34 = (frost$core$Bit) {_33};
_36 = _34.value;
if (_36) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_39 = (frost$core$Int) {2767714526555907460u};
return _39;
block9:;
_41 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_44 = _1.value;
_45 = _41.value;
_46 = _44 == _45;
_47 = (frost$core$Bit) {_46};
_49 = _47.value;
if (_49) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_52 = (frost$core$Int) {15988115417880911024u};
return _52;
block12:;
_54 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_57 = _1.value;
_58 = _54.value;
_59 = _57 == _58;
_60 = (frost$core$Bit) {_59};
_62 = _60.value;
if (_62) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_65 = (frost$core$Int) {10761772235496362972u};
return _65;
block15:;
_67 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_70 = _1.value;
_71 = _67.value;
_72 = _70 == _71;
_73 = (frost$core$Bit) {_72};
_75 = _73.value;
if (_75) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_78 = (frost$core$Int) {5535429053111814920u};
return _78;
block18:;
_80 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_83 = _1.value;
_84 = _80.value;
_85 = _83 == _84;
_86 = (frost$core$Bit) {_85};
_88 = _86.value;
if (_88) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_91 = (frost$core$Int) {309085870727266868u};
return _91;
block21:;
_93 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_96 = _1.value;
_97 = _93.value;
_98 = _96 == _97;
_99 = (frost$core$Bit) {_98};
_101 = _99.value;
if (_101) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_104 = (frost$core$Int) {13529486762052270432u};
return _104;
block24:;
_106 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_109 = _1.value;
_110 = _106.value;
_111 = _109 == _110;
_112 = (frost$core$Bit) {_111};
_114 = _112.value;
if (_114) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_117 = (frost$core$Int) {8303143579667722380u};
return _117;
block27:;
_119 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_122 = _1.value;
_123 = _119.value;
_124 = _122 == _123;
_125 = (frost$core$Bit) {_124};
_127 = _125.value;
if (_127) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_130 = (frost$core$Int) {3076800397283174328u};
return _130;
block30:;
_132 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_135 = _1.value;
_136 = _132.value;
_137 = _135 == _136;
_138 = (frost$core$Bit) {_137};
_140 = _138.value;
if (_140) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_143 = (frost$core$Int) {16297201288608177892u};
return _143;
block33:;
_145 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_148 = _1.value;
_149 = _145.value;
_150 = _148 == _149;
_151 = (frost$core$Bit) {_150};
_153 = _151.value;
if (_153) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_156 = (frost$core$Int) {11070858106223629840u};
return _156;
block36:;
_158 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_161 = _1.value;
_162 = _158.value;
_163 = _161 == _162;
_164 = (frost$core$Bit) {_163};
_166 = _164.value;
if (_166) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_169 = (frost$core$Int) {5844514923839081788u};
return _169;
block39:;
_171 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_174 = _1.value;
_175 = _171.value;
_176 = _174 == _175;
_177 = (frost$core$Bit) {_176};
_179 = _177.value;
if (_179) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_182 = (frost$core$Int) {618171741454533736u};
return _182;
block42:;
_184 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_187 = _1.value;
_188 = _184.value;
_189 = _187 == _188;
_190 = (frost$core$Bit) {_189};
_192 = _190.value;
if (_192) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_195 = (frost$core$Int) {13838572632779537300u};
return _195;
block45:;
_197 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_200 = _1.value;
_201 = _197.value;
_202 = _200 == _201;
_203 = (frost$core$Bit) {_202};
_205 = _203.value;
if (_205) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_208 = (frost$core$Int) {8612229450394989248u};
return _208;
block48:;
_210 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_213 = _1.value;
_214 = _210.value;
_215 = _213 == _214;
_216 = (frost$core$Bit) {_215};
_218 = _216.value;
if (_218) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_221 = (frost$core$Int) {3385886268010441196u};
return _221;
block51:;
_223 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_226 = _1.value;
_227 = _223.value;
_228 = _226 == _227;
_229 = (frost$core$Bit) {_228};
_231 = _229.value;
if (_231) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_234 = (frost$core$Int) {16606287159335444760u};
return _234;
block54:;
_236 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_239 = _1.value;
_240 = _236.value;
_241 = _239 == _240;
_242 = (frost$core$Bit) {_241};
_244 = _242.value;
if (_244) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_247 = (frost$core$Int) {11379943976950896708u};
return _247;
block57:;
_249 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_252 = _1.value;
_253 = _249.value;
_254 = _252 == _253;
_255 = (frost$core$Bit) {_254};
_257 = _255.value;
if (_257) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_260 = (frost$core$Int) {6153600794566348656u};
return _260;
block60:;
_262 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_265 = _1.value;
_266 = _262.value;
_267 = _265 == _266;
_268 = (frost$core$Bit) {_267};
_270 = _268.value;
if (_270) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_273 = (frost$core$Int) {927257612181800604u};
return _273;
block63:;
_275 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_278 = _1.value;
_279 = _275.value;
_280 = _278 == _279;
_281 = (frost$core$Bit) {_280};
_283 = _281.value;
if (_283) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_286 = (frost$core$Int) {14147658503506804168u};
return _286;
block66:;
_288 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_291 = _1.value;
_292 = _288.value;
_293 = _291 == _292;
_294 = (frost$core$Bit) {_293};
_296 = _294.value;
if (_296) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_299 = (frost$core$Int) {8921315321122256116u};
return _299;
block69:;
_301 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_304 = _1.value;
_305 = _301.value;
_306 = _304 == _305;
_307 = (frost$core$Bit) {_306};
_309 = _307.value;
if (_309) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_312 = (frost$core$Int) {3694972138737708064u};
return _312;
block72:;
_314 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_317 = _1.value;
_318 = _314.value;
_319 = _317 == _318;
_320 = (frost$core$Bit) {_319};
_322 = _320.value;
if (_322) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_325 = (frost$core$Int) {16915373030062711628u};
return _325;
block75:;
_327 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_330 = _1.value;
_331 = _327.value;
_332 = _330 == _331;
_333 = (frost$core$Bit) {_332};
_335 = _333.value;
if (_335) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_338 = (frost$core$Int) {11689029847678163576u};
return _338;
block78:;
_340 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_343 = _1.value;
_344 = _340.value;
_345 = _343 == _344;
_346 = (frost$core$Bit) {_345};
_348 = _346.value;
if (_348) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_351 = (frost$core$Int) {6462686665293615524u};
return _351;
block81:;
_353 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_356 = _1.value;
_357 = _353.value;
_358 = _356 == _357;
_359 = (frost$core$Bit) {_358};
_361 = _359.value;
if (_361) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_364 = (frost$core$Int) {1236343482909067472u};
return _364;
block84:;
_366 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_369 = _1.value;
_370 = _366.value;
_371 = _369 == _370;
_372 = (frost$core$Bit) {_371};
_374 = _372.value;
if (_374) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_377 = (frost$core$Int) {14456744374234071036u};
return _377;
block87:;
_379 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_382 = _1.value;
_383 = _379.value;
_384 = _382 == _383;
_385 = (frost$core$Bit) {_384};
_387 = _385.value;
if (_387) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_390 = (frost$core$Int) {9230401191849522984u};
return _390;
block90:;
_392 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_395 = _1.value;
_396 = _392.value;
_397 = _395 == _396;
_398 = (frost$core$Bit) {_397};
_400 = _398.value;
if (_400) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_403 = (frost$core$Int) {4004058009464974932u};
return _403;
block93:;
_405 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_408 = _1.value;
_409 = _405.value;
_410 = _408 == _409;
_411 = (frost$core$Bit) {_410};
_413 = _411.value;
if (_413) goto block95; else goto block96;
block95:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_416 = (frost$core$Int) {17224458900789978496u};
return _416;
block96:;
_418 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_421 = _1.value;
_422 = _418.value;
_423 = _421 == _422;
_424 = (frost$core$Bit) {_423};
_426 = _424.value;
if (_426) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_429 = (frost$core$Int) {11998115718405430444u};
return _429;
block99:;
_431 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_434 = _1.value;
_435 = _431.value;
_436 = _434 == _435;
_437 = (frost$core$Bit) {_436};
_439 = _437.value;
if (_439) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_442 = (frost$core$Int) {6771772536020882392u};
return _442;
block102:;
_444 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_447 = _1.value;
_448 = _444.value;
_449 = _447 == _448;
_450 = (frost$core$Bit) {_449};
_452 = _450.value;
if (_452) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_455 = (frost$core$Int) {1545429353636334340u};
return _455;
block105:;
_457 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_460 = _1.value;
_461 = _457.value;
_462 = _460 == _461;
_463 = (frost$core$Bit) {_462};
_465 = _463.value;
if (_465) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_468 = (frost$core$Int) {14765830244961337904u};
return _468;
block108:;
_470 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_473 = _1.value;
_474 = _470.value;
_475 = _473 == _474;
_476 = (frost$core$Bit) {_475};
_478 = _476.value;
if (_478) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_481 = (frost$core$Int) {9539487062576789852u};
return _481;
block111:;
_483 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_486 = _1.value;
_487 = _483.value;
_488 = _486 == _487;
_489 = (frost$core$Bit) {_488};
_491 = _489.value;
if (_491) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_494 = (frost$core$Int) {4313143880192241800u};
return _494;
block114:;
_496 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_499 = _1.value;
_500 = _496.value;
_501 = _499 == _500;
_502 = (frost$core$Bit) {_501};
_504 = _502.value;
if (_504) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_507 = (frost$core$Int) {17533544771517245364u};
return _507;
block117:;
_509 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_512 = _1.value;
_513 = _509.value;
_514 = _512 == _513;
_515 = (frost$core$Bit) {_514};
_517 = _515.value;
if (_517) goto block119; else goto block120;
block119:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_520 = (frost$core$Int) {12307201589132697312u};
return _520;
block120:;
_522 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_525 = _1.value;
_526 = _522.value;
_527 = _525 == _526;
_528 = (frost$core$Bit) {_527};
_530 = _528.value;
if (_530) goto block122; else goto block123;
block122:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_533 = (frost$core$Int) {7080858406748149260u};
return _533;
block123:;
_535 = (frost$core$Int) {41u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_538 = _1.value;
_539 = _535.value;
_540 = _538 == _539;
_541 = (frost$core$Bit) {_540};
_543 = _541.value;
if (_543) goto block125; else goto block126;
block125:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_546 = (frost$core$Int) {1854515224363601208u};
return _546;
block126:;
_548 = (frost$core$Int) {42u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_551 = _1.value;
_552 = _548.value;
_553 = _551 == _552;
_554 = (frost$core$Bit) {_553};
_556 = _554.value;
if (_556) goto block128; else goto block129;
block128:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_559 = (frost$core$Int) {15074916115688604772u};
return _559;
block129:;
_561 = (frost$core$Int) {43u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_564 = _1.value;
_565 = _561.value;
_566 = _564 == _565;
_567 = (frost$core$Bit) {_566};
_569 = _567.value;
if (_569) goto block131; else goto block132;
block131:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_572 = (frost$core$Int) {9848572933304056720u};
return _572;
block132:;
_574 = (frost$core$Int) {44u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_577 = _1.value;
_578 = _574.value;
_579 = _577 == _578;
_580 = (frost$core$Bit) {_579};
_582 = _580.value;
if (_582) goto block134; else goto block135;
block134:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_585 = (frost$core$Int) {4622229750919508668u};
return _585;
block135:;
_587 = (frost$core$Int) {45u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_590 = _1.value;
_591 = _587.value;
_592 = _590 == _591;
_593 = (frost$core$Bit) {_592};
_595 = _593.value;
if (_595) goto block137; else goto block138;
block137:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_598 = (frost$core$Int) {17842630642244512232u};
return _598;
block138:;
_600 = (frost$core$Int) {46u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_603 = _1.value;
_604 = _600.value;
_605 = _603 == _604;
_606 = (frost$core$Bit) {_605};
_608 = _606.value;
if (_608) goto block140; else goto block141;
block140:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_611 = (frost$core$Int) {12616287459859964180u};
return _611;
block141:;
_613 = (frost$core$Int) {47u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_616 = _1.value;
_617 = _613.value;
_618 = _616 == _617;
_619 = (frost$core$Bit) {_618};
_621 = _619.value;
if (_621) goto block143; else goto block144;
block143:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_624 = (frost$core$Int) {7389944277475416128u};
return _624;
block144:;
_626 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_629 = _1.value;
_630 = _626.value;
_631 = _629 == _630;
_632 = (frost$core$Bit) {_631};
_634 = _632.value;
if (_634) goto block146; else goto block147;
block146:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_637 = (frost$core$Int) {2163601095090868076u};
return _637;
block147:;
_639 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_642 = _1.value;
_643 = _639.value;
_644 = _642 == _643;
_645 = (frost$core$Bit) {_644};
_647 = _645.value;
if (_647) goto block149; else goto block150;
block149:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_650 = (frost$core$Int) {15384001986415871640u};
return _650;
block150:;
_652 = (frost$core$Int) {50u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_655 = _1.value;
_656 = _652.value;
_657 = _655 == _656;
_658 = (frost$core$Bit) {_657};
_660 = _658.value;
if (_660) goto block152; else goto block153;
block152:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_663 = (frost$core$Int) {10157658804031323588u};
return _663;
block153:;
_665 = (frost$core$Int) {51u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_668 = _1.value;
_669 = _665.value;
_670 = _668 == _669;
_671 = (frost$core$Bit) {_670};
_673 = _671.value;
if (_673) goto block155; else goto block156;
block155:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_676 = (frost$core$Int) {4931315621646775536u};
return _676;
block156:;
_678 = (frost$core$Int) {52u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_681 = _1.value;
_682 = _678.value;
_683 = _681 == _682;
_684 = (frost$core$Bit) {_683};
_686 = _684.value;
if (_686) goto block158; else goto block159;
block158:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_689 = (frost$core$Int) {18151716512971779100u};
return _689;
block159:;
_691 = (frost$core$Int) {53u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_694 = _1.value;
_695 = _691.value;
_696 = _694 == _695;
_697 = (frost$core$Bit) {_696};
_699 = _697.value;
if (_699) goto block161; else goto block162;
block161:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_702 = (frost$core$Int) {12925373330587231048u};
return _702;
block162:;
_704 = (frost$core$Int) {54u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_707 = _1.value;
_708 = _704.value;
_709 = _707 == _708;
_710 = (frost$core$Bit) {_709};
_712 = _710.value;
if (_712) goto block164; else goto block165;
block164:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_715 = (frost$core$Int) {7699030148202682996u};
return _715;
block165:;
_717 = (frost$core$Int) {55u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_720 = _1.value;
_721 = _717.value;
_722 = _720 == _721;
_723 = (frost$core$Bit) {_722};
_725 = _723.value;
if (_725) goto block167; else goto block168;
block167:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_728 = (frost$core$Int) {2472686965818134944u};
return _728;
block168:;
_730 = (frost$core$Int) {56u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_733 = _1.value;
_734 = _730.value;
_735 = _733 == _734;
_736 = (frost$core$Bit) {_735};
_738 = _736.value;
if (_738) goto block170; else goto block171;
block170:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_741 = (frost$core$Int) {15693087857143138508u};
return _741;
block171:;
_743 = (frost$core$Int) {57u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_746 = _1.value;
_747 = _743.value;
_748 = _746 == _747;
_749 = (frost$core$Bit) {_748};
_751 = _749.value;
if (_751) goto block173; else goto block174;
block173:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_754 = (frost$core$Int) {10466744674758590456u};
return _754;
block174:;
_756 = (frost$core$Int) {58u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_759 = _1.value;
_760 = _756.value;
_761 = _759 == _760;
_762 = (frost$core$Bit) {_761};
_764 = _762.value;
if (_764) goto block176; else goto block177;
block176:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_767 = (frost$core$Int) {5240401492374042404u};
return _767;
block177:;
_769 = (frost$core$Int) {59u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_772 = _1.value;
_773 = _769.value;
_774 = _772 == _773;
_775 = (frost$core$Bit) {_774};
_777 = _775.value;
if (_777) goto block179; else goto block180;
block179:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_780 = (frost$core$Int) {14058309989494352u};
return _780;
block180:;
_782 = (frost$core$Int) {60u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_785 = _1.value;
_786 = _782.value;
_787 = _785 == _786;
_788 = (frost$core$Bit) {_787};
_790 = _788.value;
if (_790) goto block182; else goto block183;
block182:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_793 = (frost$core$Int) {13234459201314497916u};
return _793;
block183:;
_795 = (frost$core$Int) {61u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_798 = _1.value;
_799 = _795.value;
_800 = _798 == _799;
_801 = (frost$core$Bit) {_800};
_803 = _801.value;
if (_803) goto block185; else goto block186;
block185:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_806 = (frost$core$Int) {8008116018929949864u};
return _806;
block186:;
_808 = (frost$core$Int) {62u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_811 = _1.value;
_812 = _808.value;
_813 = _811 == _812;
_814 = (frost$core$Bit) {_813};
_816 = _814.value;
if (_816) goto block188; else goto block189;
block188:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_819 = (frost$core$Int) {2781772836545401812u};
return _819;
block189:;
_821 = (frost$core$Int) {63u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_824 = _1.value;
_825 = _821.value;
_826 = _824 == _825;
_827 = (frost$core$Bit) {_826};
_829 = _827.value;
if (_829) goto block191; else goto block192;
block191:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_832 = (frost$core$Int) {16002173727870405376u};
return _832;
block192:;
_834 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_837 = _1.value;
_838 = _834.value;
_839 = _837 == _838;
_840 = (frost$core$Bit) {_839};
_842 = _840.value;
if (_842) goto block194; else goto block195;
block194:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_845 = (frost$core$Int) {10775830545485857324u};
return _845;
block195:;
_847 = (frost$core$Int) {65u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_850 = _1.value;
_851 = _847.value;
_852 = _850 == _851;
_853 = (frost$core$Bit) {_852};
_855 = _853.value;
if (_855) goto block197; else goto block198;
block197:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_858 = (frost$core$Int) {5549487363101309272u};
return _858;
block198:;
_860 = (frost$core$Int) {66u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_863 = _1.value;
_864 = _860.value;
_865 = _863 == _864;
_866 = (frost$core$Bit) {_865};
_868 = _866.value;
if (_868) goto block200; else goto block201;
block200:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_871 = (frost$core$Int) {323144180716761220u};
return _871;
block201:;
_873 = (frost$core$Int) {67u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_876 = _1.value;
_877 = _873.value;
_878 = _876 == _877;
_879 = (frost$core$Bit) {_878};
_881 = _879.value;
if (_881) goto block203; else goto block204;
block203:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_884 = (frost$core$Int) {13543545072041764784u};
return _884;
block204:;
_886 = (frost$core$Int) {68u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_889 = _1.value;
_890 = _886.value;
_891 = _889 == _890;
_892 = (frost$core$Bit) {_891};
_894 = _892.value;
if (_894) goto block206; else goto block207;
block206:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_897 = (frost$core$Int) {8317201889657216732u};
return _897;
block207:;
_899 = (frost$core$Int) {69u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_902 = _1.value;
_903 = _899.value;
_904 = _902 == _903;
_905 = (frost$core$Bit) {_904};
_907 = _905.value;
if (_907) goto block209; else goto block210;
block209:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_910 = (frost$core$Int) {3090858707272668680u};
return _910;
block210:;
_912 = (frost$core$Int) {70u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_915 = _1.value;
_916 = _912.value;
_917 = _915 == _916;
_918 = (frost$core$Bit) {_917};
_920 = _918.value;
if (_920) goto block212; else goto block213;
block212:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_923 = (frost$core$Int) {16311259598597672244u};
return _923;
block213:;
_925 = (frost$core$Int) {71u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_928 = _1.value;
_929 = _925.value;
_930 = _928 == _929;
_931 = (frost$core$Bit) {_930};
_933 = _931.value;
if (_933) goto block215; else goto block216;
block215:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_936 = (frost$core$Int) {11084916416213124192u};
return _936;
block216:;
_938 = (frost$core$Int) {72u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_941 = _1.value;
_942 = _938.value;
_943 = _941 == _942;
_944 = (frost$core$Bit) {_943};
_946 = _944.value;
if (_946) goto block218; else goto block219;
block218:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_949 = (frost$core$Int) {5858573233828576140u};
return _949;
block219:;
_951 = (frost$core$Int) {73u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_954 = _1.value;
_955 = _951.value;
_956 = _954 == _955;
_957 = (frost$core$Bit) {_956};
_959 = _957.value;
if (_959) goto block221; else goto block222;
block221:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_962 = (frost$core$Int) {632230051444028088u};
return _962;
block222:;
_964 = (frost$core$Int) {74u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_967 = _1.value;
_968 = _964.value;
_969 = _967 == _968;
_970 = (frost$core$Bit) {_969};
_972 = _970.value;
if (_972) goto block224; else goto block225;
block224:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_975 = (frost$core$Int) {13852630942769031652u};
return _975;
block225:;
_977 = (frost$core$Int) {75u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_980 = _1.value;
_981 = _977.value;
_982 = _980 == _981;
_983 = (frost$core$Bit) {_982};
_985 = _983.value;
if (_985) goto block227; else goto block228;
block227:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_988 = (frost$core$Int) {8626287760384483600u};
return _988;
block228:;
_990 = (frost$core$Int) {76u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_993 = _1.value;
_994 = _990.value;
_995 = _993 == _994;
_996 = (frost$core$Bit) {_995};
_998 = _996.value;
if (_998) goto block230; else goto block231;
block230:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1001 = (frost$core$Int) {3399944577999935548u};
return _1001;
block231:;
_1003 = (frost$core$Int) {77u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1006 = _1.value;
_1007 = _1003.value;
_1008 = _1006 == _1007;
_1009 = (frost$core$Bit) {_1008};
_1011 = _1009.value;
if (_1011) goto block233; else goto block234;
block233:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1014 = (frost$core$Int) {16620345469324939112u};
return _1014;
block234:;
_1016 = (frost$core$Int) {78u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1019 = _1.value;
_1020 = _1016.value;
_1021 = _1019 == _1020;
_1022 = (frost$core$Bit) {_1021};
_1024 = _1022.value;
if (_1024) goto block236; else goto block237;
block236:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1027 = (frost$core$Int) {11394002286940391060u};
return _1027;
block237:;
_1029 = (frost$core$Int) {79u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1032 = _1.value;
_1033 = _1029.value;
_1034 = _1032 == _1033;
_1035 = (frost$core$Bit) {_1034};
_1037 = _1035.value;
if (_1037) goto block239; else goto block240;
block239:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1040 = (frost$core$Int) {6167659104555843008u};
return _1040;
block240:;
_1042 = (frost$core$Int) {80u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1045 = _1.value;
_1046 = _1042.value;
_1047 = _1045 == _1046;
_1048 = (frost$core$Bit) {_1047};
_1050 = _1048.value;
if (_1050) goto block242; else goto block243;
block242:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1053 = (frost$core$Int) {941315922171294956u};
return _1053;
block243:;
_1055 = (frost$core$Int) {81u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1058 = _1.value;
_1059 = _1055.value;
_1060 = _1058 == _1059;
_1061 = (frost$core$Bit) {_1060};
_1063 = _1061.value;
if (_1063) goto block245; else goto block246;
block245:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1066 = (frost$core$Int) {14161716813496298520u};
return _1066;
block246:;
_1068 = (frost$core$Int) {82u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1071 = _1.value;
_1072 = _1068.value;
_1073 = _1071 == _1072;
_1074 = (frost$core$Bit) {_1073};
_1076 = _1074.value;
if (_1076) goto block248; else goto block249;
block248:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1079 = (frost$core$Int) {8935373631111750468u};
return _1079;
block249:;
_1081 = (frost$core$Int) {83u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1084 = _1.value;
_1085 = _1081.value;
_1086 = _1084 == _1085;
_1087 = (frost$core$Bit) {_1086};
_1089 = _1087.value;
if (_1089) goto block251; else goto block252;
block251:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1092 = (frost$core$Int) {3709030448727202416u};
return _1092;
block252:;
_1094 = (frost$core$Int) {84u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1097 = _1.value;
_1098 = _1094.value;
_1099 = _1097 == _1098;
_1100 = (frost$core$Bit) {_1099};
_1102 = _1100.value;
if (_1102) goto block254; else goto block255;
block254:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1105 = (frost$core$Int) {16929431340052205980u};
return _1105;
block255:;
_1107 = (frost$core$Int) {85u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1110 = _1.value;
_1111 = _1107.value;
_1112 = _1110 == _1111;
_1113 = (frost$core$Bit) {_1112};
_1115 = _1113.value;
if (_1115) goto block257; else goto block258;
block257:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1118 = (frost$core$Int) {11703088157667657928u};
return _1118;
block258:;
_1120 = (frost$core$Int) {86u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1123 = _1.value;
_1124 = _1120.value;
_1125 = _1123 == _1124;
_1126 = (frost$core$Bit) {_1125};
_1128 = _1126.value;
if (_1128) goto block260; else goto block261;
block260:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1131 = (frost$core$Int) {6476744975283109876u};
return _1131;
block261:;
_1133 = (frost$core$Int) {87u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1136 = _1.value;
_1137 = _1133.value;
_1138 = _1136 == _1137;
_1139 = (frost$core$Bit) {_1138};
_1141 = _1139.value;
if (_1141) goto block263; else goto block264;
block263:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1144 = (frost$core$Int) {1250401792898561824u};
return _1144;
block264:;
_1146 = (frost$core$Int) {88u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1149 = _1.value;
_1150 = _1146.value;
_1151 = _1149 == _1150;
_1152 = (frost$core$Bit) {_1151};
_1154 = _1152.value;
if (_1154) goto block266; else goto block267;
block266:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1157 = (frost$core$Int) {14470802684223565388u};
return _1157;
block267:;
_1159 = (frost$core$Int) {89u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1162 = _1.value;
_1163 = _1159.value;
_1164 = _1162 == _1163;
_1165 = (frost$core$Bit) {_1164};
_1167 = _1165.value;
if (_1167) goto block269; else goto block270;
block269:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1170 = (frost$core$Int) {9244459501839017336u};
return _1170;
block270:;
_1172 = (frost$core$Int) {90u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1175 = _1.value;
_1176 = _1172.value;
_1177 = _1175 == _1176;
_1178 = (frost$core$Bit) {_1177};
_1180 = _1178.value;
if (_1180) goto block272; else goto block273;
block272:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1183 = (frost$core$Int) {4018116319454469284u};
return _1183;
block273:;
_1185 = (frost$core$Int) {91u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1188 = _1.value;
_1189 = _1185.value;
_1190 = _1188 == _1189;
_1191 = (frost$core$Bit) {_1190};
_1193 = _1191.value;
if (_1193) goto block275; else goto block276;
block275:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1196 = (frost$core$Int) {17238517210779472848u};
return _1196;
block276:;
_1198 = (frost$core$Int) {92u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1201 = _1.value;
_1202 = _1198.value;
_1203 = _1201 == _1202;
_1204 = (frost$core$Bit) {_1203};
_1206 = _1204.value;
if (_1206) goto block278; else goto block279;
block278:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1209 = (frost$core$Int) {12012174028394924796u};
return _1209;
block279:;
_1211 = (frost$core$Int) {93u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1214 = _1.value;
_1215 = _1211.value;
_1216 = _1214 == _1215;
_1217 = (frost$core$Bit) {_1216};
_1219 = _1217.value;
if (_1219) goto block281; else goto block282;
block281:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1222 = (frost$core$Int) {6785830846010376744u};
return _1222;
block282:;
_1224 = (frost$core$Int) {94u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1227 = _1.value;
_1228 = _1224.value;
_1229 = _1227 == _1228;
_1230 = (frost$core$Bit) {_1229};
_1232 = _1230.value;
if (_1232) goto block284; else goto block285;
block284:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1235 = (frost$core$Int) {1559487663625828692u};
return _1235;
block285:;
_1237 = (frost$core$Int) {95u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1240 = _1.value;
_1241 = _1237.value;
_1242 = _1240 == _1241;
_1243 = (frost$core$Bit) {_1242};
_1245 = _1243.value;
if (_1245) goto block287; else goto block288;
block287:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1248 = (frost$core$Int) {14779888554950832256u};
return _1248;
block288:;
_1250 = (frost$core$Int) {96u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1253 = _1.value;
_1254 = _1250.value;
_1255 = _1253 == _1254;
_1256 = (frost$core$Bit) {_1255};
_1258 = _1256.value;
if (_1258) goto block290; else goto block291;
block290:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1261 = (frost$core$Int) {9553545372566284204u};
return _1261;
block291:;
_1263 = (frost$core$Int) {97u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1266 = _1.value;
_1267 = _1263.value;
_1268 = _1266 == _1267;
_1269 = (frost$core$Bit) {_1268};
_1271 = _1269.value;
if (_1271) goto block293; else goto block294;
block293:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1274 = (frost$core$Int) {4327202190181736152u};
return _1274;
block294:;
_1276 = (frost$core$Int) {98u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1279 = _1.value;
_1280 = _1276.value;
_1281 = _1279 == _1280;
_1282 = (frost$core$Bit) {_1281};
_1284 = _1282.value;
if (_1284) goto block296; else goto block297;
block296:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1287 = (frost$core$Int) {17547603081506739716u};
return _1287;
block297:;
_1289 = (frost$core$Int) {99u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1292 = _1.value;
_1293 = _1289.value;
_1294 = _1292 == _1293;
_1295 = (frost$core$Bit) {_1294};
_1297 = _1295.value;
if (_1297) goto block299; else goto block300;
block299:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1300 = (frost$core$Int) {12321259899122191664u};
return _1300;
block300:;
_1302 = (frost$core$Int) {100u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1305 = _1.value;
_1306 = _1302.value;
_1307 = _1305 == _1306;
_1308 = (frost$core$Bit) {_1307};
_1310 = _1308.value;
if (_1310) goto block302; else goto block303;
block302:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1313 = (frost$core$Int) {7094916716737643612u};
return _1313;
block303:;
_1315 = (frost$core$Int) {101u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1318 = _1.value;
_1319 = _1315.value;
_1320 = _1318 == _1319;
_1321 = (frost$core$Bit) {_1320};
_1323 = _1321.value;
if (_1323) goto block305; else goto block306;
block305:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1326 = (frost$core$Int) {1868573534353095560u};
return _1326;
block306:;
_1328 = (frost$core$Int) {102u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1331 = _1.value;
_1332 = _1328.value;
_1333 = _1331 == _1332;
_1334 = (frost$core$Bit) {_1333};
_1336 = _1334.value;
if (_1336) goto block308; else goto block309;
block308:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1339 = (frost$core$Int) {15088974425678099124u};
return _1339;
block309:;
_1341 = (frost$core$Int) {103u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1344 = _1.value;
_1345 = _1341.value;
_1346 = _1344 == _1345;
_1347 = (frost$core$Bit) {_1346};
_1349 = _1347.value;
if (_1349) goto block311; else goto block312;
block311:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1352 = (frost$core$Int) {9862631243293551072u};
return _1352;
block312:;
_1354 = (frost$core$Int) {104u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1357 = _1.value;
_1358 = _1354.value;
_1359 = _1357 == _1358;
_1360 = (frost$core$Bit) {_1359};
_1362 = _1360.value;
if (_1362) goto block314; else goto block315;
block314:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1365 = (frost$core$Int) {4636288060909003020u};
return _1365;
block315:;
_1367 = (frost$core$Int) {105u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1370 = _1.value;
_1371 = _1367.value;
_1372 = _1370 == _1371;
_1373 = (frost$core$Bit) {_1372};
_1375 = _1373.value;
if (_1375) goto block317; else goto block318;
block317:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1378 = (frost$core$Int) {17856688952234006584u};
return _1378;
block318:;
_1380 = (frost$core$Int) {106u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1383 = _1.value;
_1384 = _1380.value;
_1385 = _1383 == _1384;
_1386 = (frost$core$Bit) {_1385};
_1388 = _1386.value;
if (_1388) goto block320; else goto block321;
block320:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1391 = (frost$core$Int) {12630345769849458532u};
return _1391;
block321:;
_1393 = (frost$core$Int) {107u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1396 = _1.value;
_1397 = _1393.value;
_1398 = _1396 == _1397;
_1399 = (frost$core$Bit) {_1398};
_1401 = _1399.value;
if (_1401) goto block323; else goto block324;
block323:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1404 = (frost$core$Int) {7404002587464910480u};
return _1404;
block324:;
_1406 = (frost$core$Int) {108u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1409 = _1.value;
_1410 = _1406.value;
_1411 = _1409 == _1410;
_1412 = (frost$core$Bit) {_1411};
_1414 = _1412.value;
if (_1414) goto block326; else goto block327;
block326:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1417 = (frost$core$Int) {2177659405080362428u};
return _1417;
block327:;
_1419 = (frost$core$Int) {109u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1422 = _1.value;
_1423 = _1419.value;
_1424 = _1422 == _1423;
_1425 = (frost$core$Bit) {_1424};
_1427 = _1425.value;
if (_1427) goto block329; else goto block330;
block329:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1430 = (frost$core$Int) {15398060296405365992u};
return _1430;
block330:;
_1432 = (frost$core$Int) {110u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1435 = _1.value;
_1436 = _1432.value;
_1437 = _1435 == _1436;
_1438 = (frost$core$Bit) {_1437};
_1440 = _1438.value;
if (_1440) goto block332; else goto block333;
block332:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1443 = (frost$core$Int) {10171717114020817940u};
return _1443;
block333:;
_1445 = (frost$core$Int) {111u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1448 = _1.value;
_1449 = _1445.value;
_1450 = _1448 == _1449;
_1451 = (frost$core$Bit) {_1450};
_1453 = _1451.value;
if (_1453) goto block335; else goto block336;
block335:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1456 = (frost$core$Int) {4945373931636269888u};
return _1456;
block336:;
_1458 = (frost$core$Int) {112u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1461 = _1.value;
_1462 = _1458.value;
_1463 = _1461 == _1462;
_1464 = (frost$core$Bit) {_1463};
_1466 = _1464.value;
if (_1466) goto block338; else goto block339;
block338:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1469 = (frost$core$Int) {18165774822961273452u};
return _1469;
block339:;
_1471 = (frost$core$Int) {113u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1474 = _1.value;
_1475 = _1471.value;
_1476 = _1474 == _1475;
_1477 = (frost$core$Bit) {_1476};
_1479 = _1477.value;
if (_1479) goto block341; else goto block342;
block341:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1482 = (frost$core$Int) {12939431640576725400u};
return _1482;
block342:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1485 = (frost$core$Int) {10u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4, _1485);
abort(); // unreachable
block1:;
goto block344;
block344:;

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
frost$core$Int _1584;
int64_t _1587;
int64_t _1588;
bool _1589;
frost$core$Bit _1590;
bool _1592;
frost$core$Object* _1595;
frost$core$Int _1599;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1 = param0.$rawValue;
_2 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_13 = ((frost$core$Object*) &$s5);
frost$core$Frost$ref$frost$core$Object$Q(_13);
return &$s6;
block3:;
_16 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_19 = _1.value;
_20 = _16.value;
_21 = _19 == _20;
_22 = (frost$core$Bit) {_21};
_24 = _22.value;
if (_24) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_27 = ((frost$core$Object*) &$s7);
frost$core$Frost$ref$frost$core$Object$Q(_27);
return &$s8;
block6:;
_30 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_33 = _1.value;
_34 = _30.value;
_35 = _33 == _34;
_36 = (frost$core$Bit) {_35};
_38 = _36.value;
if (_38) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_41 = ((frost$core$Object*) &$s9);
frost$core$Frost$ref$frost$core$Object$Q(_41);
return &$s10;
block9:;
_44 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_47 = _1.value;
_48 = _44.value;
_49 = _47 == _48;
_50 = (frost$core$Bit) {_49};
_52 = _50.value;
if (_52) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_55 = ((frost$core$Object*) &$s11);
frost$core$Frost$ref$frost$core$Object$Q(_55);
return &$s12;
block12:;
_58 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_61 = _1.value;
_62 = _58.value;
_63 = _61 == _62;
_64 = (frost$core$Bit) {_63};
_66 = _64.value;
if (_66) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_69 = ((frost$core$Object*) &$s13);
frost$core$Frost$ref$frost$core$Object$Q(_69);
return &$s14;
block15:;
_72 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_75 = _1.value;
_76 = _72.value;
_77 = _75 == _76;
_78 = (frost$core$Bit) {_77};
_80 = _78.value;
if (_80) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_83 = ((frost$core$Object*) &$s15);
frost$core$Frost$ref$frost$core$Object$Q(_83);
return &$s16;
block18:;
_86 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_89 = _1.value;
_90 = _86.value;
_91 = _89 == _90;
_92 = (frost$core$Bit) {_91};
_94 = _92.value;
if (_94) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_97 = ((frost$core$Object*) &$s17);
frost$core$Frost$ref$frost$core$Object$Q(_97);
return &$s18;
block21:;
_100 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_103 = _1.value;
_104 = _100.value;
_105 = _103 == _104;
_106 = (frost$core$Bit) {_105};
_108 = _106.value;
if (_108) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_111 = ((frost$core$Object*) &$s19);
frost$core$Frost$ref$frost$core$Object$Q(_111);
return &$s20;
block24:;
_114 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_117 = _1.value;
_118 = _114.value;
_119 = _117 == _118;
_120 = (frost$core$Bit) {_119};
_122 = _120.value;
if (_122) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_125 = ((frost$core$Object*) &$s21);
frost$core$Frost$ref$frost$core$Object$Q(_125);
return &$s22;
block27:;
_128 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_131 = _1.value;
_132 = _128.value;
_133 = _131 == _132;
_134 = (frost$core$Bit) {_133};
_136 = _134.value;
if (_136) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_139 = ((frost$core$Object*) &$s23);
frost$core$Frost$ref$frost$core$Object$Q(_139);
return &$s24;
block30:;
_142 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_145 = _1.value;
_146 = _142.value;
_147 = _145 == _146;
_148 = (frost$core$Bit) {_147};
_150 = _148.value;
if (_150) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_153 = ((frost$core$Object*) &$s25);
frost$core$Frost$ref$frost$core$Object$Q(_153);
return &$s26;
block33:;
_156 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_159 = _1.value;
_160 = _156.value;
_161 = _159 == _160;
_162 = (frost$core$Bit) {_161};
_164 = _162.value;
if (_164) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_167 = ((frost$core$Object*) &$s27);
frost$core$Frost$ref$frost$core$Object$Q(_167);
return &$s28;
block36:;
_170 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_173 = _1.value;
_174 = _170.value;
_175 = _173 == _174;
_176 = (frost$core$Bit) {_175};
_178 = _176.value;
if (_178) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_181 = ((frost$core$Object*) &$s29);
frost$core$Frost$ref$frost$core$Object$Q(_181);
return &$s30;
block39:;
_184 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_187 = _1.value;
_188 = _184.value;
_189 = _187 == _188;
_190 = (frost$core$Bit) {_189};
_192 = _190.value;
if (_192) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_195 = ((frost$core$Object*) &$s31);
frost$core$Frost$ref$frost$core$Object$Q(_195);
return &$s32;
block42:;
_198 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_201 = _1.value;
_202 = _198.value;
_203 = _201 == _202;
_204 = (frost$core$Bit) {_203};
_206 = _204.value;
if (_206) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_209 = ((frost$core$Object*) &$s33);
frost$core$Frost$ref$frost$core$Object$Q(_209);
return &$s34;
block45:;
_212 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_215 = _1.value;
_216 = _212.value;
_217 = _215 == _216;
_218 = (frost$core$Bit) {_217};
_220 = _218.value;
if (_220) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_223 = ((frost$core$Object*) &$s35);
frost$core$Frost$ref$frost$core$Object$Q(_223);
return &$s36;
block48:;
_226 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_229 = _1.value;
_230 = _226.value;
_231 = _229 == _230;
_232 = (frost$core$Bit) {_231};
_234 = _232.value;
if (_234) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_237 = ((frost$core$Object*) &$s37);
frost$core$Frost$ref$frost$core$Object$Q(_237);
return &$s38;
block51:;
_240 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_243 = _1.value;
_244 = _240.value;
_245 = _243 == _244;
_246 = (frost$core$Bit) {_245};
_248 = _246.value;
if (_248) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_251 = ((frost$core$Object*) &$s39);
frost$core$Frost$ref$frost$core$Object$Q(_251);
return &$s40;
block54:;
_254 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_257 = _1.value;
_258 = _254.value;
_259 = _257 == _258;
_260 = (frost$core$Bit) {_259};
_262 = _260.value;
if (_262) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_265 = ((frost$core$Object*) &$s41);
frost$core$Frost$ref$frost$core$Object$Q(_265);
return &$s42;
block57:;
_268 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_271 = _1.value;
_272 = _268.value;
_273 = _271 == _272;
_274 = (frost$core$Bit) {_273};
_276 = _274.value;
if (_276) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_279 = ((frost$core$Object*) &$s43);
frost$core$Frost$ref$frost$core$Object$Q(_279);
return &$s44;
block60:;
_282 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_285 = _1.value;
_286 = _282.value;
_287 = _285 == _286;
_288 = (frost$core$Bit) {_287};
_290 = _288.value;
if (_290) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_293 = ((frost$core$Object*) &$s45);
frost$core$Frost$ref$frost$core$Object$Q(_293);
return &$s46;
block63:;
_296 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_299 = _1.value;
_300 = _296.value;
_301 = _299 == _300;
_302 = (frost$core$Bit) {_301};
_304 = _302.value;
if (_304) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_307 = ((frost$core$Object*) &$s47);
frost$core$Frost$ref$frost$core$Object$Q(_307);
return &$s48;
block66:;
_310 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_313 = _1.value;
_314 = _310.value;
_315 = _313 == _314;
_316 = (frost$core$Bit) {_315};
_318 = _316.value;
if (_318) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_321 = ((frost$core$Object*) &$s49);
frost$core$Frost$ref$frost$core$Object$Q(_321);
return &$s50;
block69:;
_324 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_327 = _1.value;
_328 = _324.value;
_329 = _327 == _328;
_330 = (frost$core$Bit) {_329};
_332 = _330.value;
if (_332) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_335 = ((frost$core$Object*) &$s51);
frost$core$Frost$ref$frost$core$Object$Q(_335);
return &$s52;
block72:;
_338 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_341 = _1.value;
_342 = _338.value;
_343 = _341 == _342;
_344 = (frost$core$Bit) {_343};
_346 = _344.value;
if (_346) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_349 = ((frost$core$Object*) &$s53);
frost$core$Frost$ref$frost$core$Object$Q(_349);
return &$s54;
block75:;
_352 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_355 = _1.value;
_356 = _352.value;
_357 = _355 == _356;
_358 = (frost$core$Bit) {_357};
_360 = _358.value;
if (_360) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_363 = ((frost$core$Object*) &$s55);
frost$core$Frost$ref$frost$core$Object$Q(_363);
return &$s56;
block78:;
_366 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_369 = _1.value;
_370 = _366.value;
_371 = _369 == _370;
_372 = (frost$core$Bit) {_371};
_374 = _372.value;
if (_374) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_377 = ((frost$core$Object*) &$s57);
frost$core$Frost$ref$frost$core$Object$Q(_377);
return &$s58;
block81:;
_380 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_383 = _1.value;
_384 = _380.value;
_385 = _383 == _384;
_386 = (frost$core$Bit) {_385};
_388 = _386.value;
if (_388) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_391 = ((frost$core$Object*) &$s59);
frost$core$Frost$ref$frost$core$Object$Q(_391);
return &$s60;
block84:;
_394 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_397 = _1.value;
_398 = _394.value;
_399 = _397 == _398;
_400 = (frost$core$Bit) {_399};
_402 = _400.value;
if (_402) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_405 = ((frost$core$Object*) &$s61);
frost$core$Frost$ref$frost$core$Object$Q(_405);
return &$s62;
block87:;
_408 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_411 = _1.value;
_412 = _408.value;
_413 = _411 == _412;
_414 = (frost$core$Bit) {_413};
_416 = _414.value;
if (_416) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_419 = ((frost$core$Object*) &$s63);
frost$core$Frost$ref$frost$core$Object$Q(_419);
return &$s64;
block90:;
_422 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_425 = _1.value;
_426 = _422.value;
_427 = _425 == _426;
_428 = (frost$core$Bit) {_427};
_430 = _428.value;
if (_430) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_433 = ((frost$core$Object*) &$s65);
frost$core$Frost$ref$frost$core$Object$Q(_433);
return &$s66;
block93:;
_436 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_439 = _1.value;
_440 = _436.value;
_441 = _439 == _440;
_442 = (frost$core$Bit) {_441};
_444 = _442.value;
if (_444) goto block95; else goto block96;
block95:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_447 = ((frost$core$Object*) &$s67);
frost$core$Frost$ref$frost$core$Object$Q(_447);
return &$s68;
block96:;
_450 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_453 = _1.value;
_454 = _450.value;
_455 = _453 == _454;
_456 = (frost$core$Bit) {_455};
_458 = _456.value;
if (_458) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_461 = ((frost$core$Object*) &$s69);
frost$core$Frost$ref$frost$core$Object$Q(_461);
return &$s70;
block99:;
_464 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_467 = _1.value;
_468 = _464.value;
_469 = _467 == _468;
_470 = (frost$core$Bit) {_469};
_472 = _470.value;
if (_472) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_475 = ((frost$core$Object*) &$s71);
frost$core$Frost$ref$frost$core$Object$Q(_475);
return &$s72;
block102:;
_478 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_481 = _1.value;
_482 = _478.value;
_483 = _481 == _482;
_484 = (frost$core$Bit) {_483};
_486 = _484.value;
if (_486) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_489 = ((frost$core$Object*) &$s73);
frost$core$Frost$ref$frost$core$Object$Q(_489);
return &$s74;
block105:;
_492 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_495 = _1.value;
_496 = _492.value;
_497 = _495 == _496;
_498 = (frost$core$Bit) {_497};
_500 = _498.value;
if (_500) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_503 = ((frost$core$Object*) &$s75);
frost$core$Frost$ref$frost$core$Object$Q(_503);
return &$s76;
block108:;
_506 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_509 = _1.value;
_510 = _506.value;
_511 = _509 == _510;
_512 = (frost$core$Bit) {_511};
_514 = _512.value;
if (_514) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_517 = ((frost$core$Object*) &$s77);
frost$core$Frost$ref$frost$core$Object$Q(_517);
return &$s78;
block111:;
_520 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_523 = _1.value;
_524 = _520.value;
_525 = _523 == _524;
_526 = (frost$core$Bit) {_525};
_528 = _526.value;
if (_528) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_531 = ((frost$core$Object*) &$s79);
frost$core$Frost$ref$frost$core$Object$Q(_531);
return &$s80;
block114:;
_534 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_537 = _1.value;
_538 = _534.value;
_539 = _537 == _538;
_540 = (frost$core$Bit) {_539};
_542 = _540.value;
if (_542) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_545 = ((frost$core$Object*) &$s81);
frost$core$Frost$ref$frost$core$Object$Q(_545);
return &$s82;
block117:;
_548 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_551 = _1.value;
_552 = _548.value;
_553 = _551 == _552;
_554 = (frost$core$Bit) {_553};
_556 = _554.value;
if (_556) goto block119; else goto block120;
block119:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_559 = ((frost$core$Object*) &$s83);
frost$core$Frost$ref$frost$core$Object$Q(_559);
return &$s84;
block120:;
_562 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_565 = _1.value;
_566 = _562.value;
_567 = _565 == _566;
_568 = (frost$core$Bit) {_567};
_570 = _568.value;
if (_570) goto block122; else goto block123;
block122:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_573 = ((frost$core$Object*) &$s85);
frost$core$Frost$ref$frost$core$Object$Q(_573);
return &$s86;
block123:;
_576 = (frost$core$Int) {41u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_579 = _1.value;
_580 = _576.value;
_581 = _579 == _580;
_582 = (frost$core$Bit) {_581};
_584 = _582.value;
if (_584) goto block125; else goto block126;
block125:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_587 = ((frost$core$Object*) &$s87);
frost$core$Frost$ref$frost$core$Object$Q(_587);
return &$s88;
block126:;
_590 = (frost$core$Int) {42u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_593 = _1.value;
_594 = _590.value;
_595 = _593 == _594;
_596 = (frost$core$Bit) {_595};
_598 = _596.value;
if (_598) goto block128; else goto block129;
block128:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_601 = ((frost$core$Object*) &$s89);
frost$core$Frost$ref$frost$core$Object$Q(_601);
return &$s90;
block129:;
_604 = (frost$core$Int) {43u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_607 = _1.value;
_608 = _604.value;
_609 = _607 == _608;
_610 = (frost$core$Bit) {_609};
_612 = _610.value;
if (_612) goto block131; else goto block132;
block131:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_615 = ((frost$core$Object*) &$s91);
frost$core$Frost$ref$frost$core$Object$Q(_615);
return &$s92;
block132:;
_618 = (frost$core$Int) {44u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_621 = _1.value;
_622 = _618.value;
_623 = _621 == _622;
_624 = (frost$core$Bit) {_623};
_626 = _624.value;
if (_626) goto block134; else goto block135;
block134:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_629 = ((frost$core$Object*) &$s93);
frost$core$Frost$ref$frost$core$Object$Q(_629);
return &$s94;
block135:;
_632 = (frost$core$Int) {45u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_635 = _1.value;
_636 = _632.value;
_637 = _635 == _636;
_638 = (frost$core$Bit) {_637};
_640 = _638.value;
if (_640) goto block137; else goto block138;
block137:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_643 = ((frost$core$Object*) &$s95);
frost$core$Frost$ref$frost$core$Object$Q(_643);
return &$s96;
block138:;
_646 = (frost$core$Int) {46u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_649 = _1.value;
_650 = _646.value;
_651 = _649 == _650;
_652 = (frost$core$Bit) {_651};
_654 = _652.value;
if (_654) goto block140; else goto block141;
block140:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_657 = ((frost$core$Object*) &$s97);
frost$core$Frost$ref$frost$core$Object$Q(_657);
return &$s98;
block141:;
_660 = (frost$core$Int) {47u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_663 = _1.value;
_664 = _660.value;
_665 = _663 == _664;
_666 = (frost$core$Bit) {_665};
_668 = _666.value;
if (_668) goto block143; else goto block144;
block143:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_671 = ((frost$core$Object*) &$s99);
frost$core$Frost$ref$frost$core$Object$Q(_671);
return &$s100;
block144:;
_674 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_677 = _1.value;
_678 = _674.value;
_679 = _677 == _678;
_680 = (frost$core$Bit) {_679};
_682 = _680.value;
if (_682) goto block146; else goto block147;
block146:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_685 = ((frost$core$Object*) &$s101);
frost$core$Frost$ref$frost$core$Object$Q(_685);
return &$s102;
block147:;
_688 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_691 = _1.value;
_692 = _688.value;
_693 = _691 == _692;
_694 = (frost$core$Bit) {_693};
_696 = _694.value;
if (_696) goto block149; else goto block150;
block149:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_699 = ((frost$core$Object*) &$s103);
frost$core$Frost$ref$frost$core$Object$Q(_699);
return &$s104;
block150:;
_702 = (frost$core$Int) {50u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_705 = _1.value;
_706 = _702.value;
_707 = _705 == _706;
_708 = (frost$core$Bit) {_707};
_710 = _708.value;
if (_710) goto block152; else goto block153;
block152:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_713 = ((frost$core$Object*) &$s105);
frost$core$Frost$ref$frost$core$Object$Q(_713);
return &$s106;
block153:;
_716 = (frost$core$Int) {51u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_719 = _1.value;
_720 = _716.value;
_721 = _719 == _720;
_722 = (frost$core$Bit) {_721};
_724 = _722.value;
if (_724) goto block155; else goto block156;
block155:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_727 = ((frost$core$Object*) &$s107);
frost$core$Frost$ref$frost$core$Object$Q(_727);
return &$s108;
block156:;
_730 = (frost$core$Int) {52u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_733 = _1.value;
_734 = _730.value;
_735 = _733 == _734;
_736 = (frost$core$Bit) {_735};
_738 = _736.value;
if (_738) goto block158; else goto block159;
block158:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_741 = ((frost$core$Object*) &$s109);
frost$core$Frost$ref$frost$core$Object$Q(_741);
return &$s110;
block159:;
_744 = (frost$core$Int) {53u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_747 = _1.value;
_748 = _744.value;
_749 = _747 == _748;
_750 = (frost$core$Bit) {_749};
_752 = _750.value;
if (_752) goto block161; else goto block162;
block161:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_755 = ((frost$core$Object*) &$s111);
frost$core$Frost$ref$frost$core$Object$Q(_755);
return &$s112;
block162:;
_758 = (frost$core$Int) {54u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_761 = _1.value;
_762 = _758.value;
_763 = _761 == _762;
_764 = (frost$core$Bit) {_763};
_766 = _764.value;
if (_766) goto block164; else goto block165;
block164:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_769 = ((frost$core$Object*) &$s113);
frost$core$Frost$ref$frost$core$Object$Q(_769);
return &$s114;
block165:;
_772 = (frost$core$Int) {55u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_775 = _1.value;
_776 = _772.value;
_777 = _775 == _776;
_778 = (frost$core$Bit) {_777};
_780 = _778.value;
if (_780) goto block167; else goto block168;
block167:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_783 = ((frost$core$Object*) &$s115);
frost$core$Frost$ref$frost$core$Object$Q(_783);
return &$s116;
block168:;
_786 = (frost$core$Int) {56u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_789 = _1.value;
_790 = _786.value;
_791 = _789 == _790;
_792 = (frost$core$Bit) {_791};
_794 = _792.value;
if (_794) goto block170; else goto block171;
block170:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_797 = ((frost$core$Object*) &$s117);
frost$core$Frost$ref$frost$core$Object$Q(_797);
return &$s118;
block171:;
_800 = (frost$core$Int) {57u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_803 = _1.value;
_804 = _800.value;
_805 = _803 == _804;
_806 = (frost$core$Bit) {_805};
_808 = _806.value;
if (_808) goto block173; else goto block174;
block173:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_811 = ((frost$core$Object*) &$s119);
frost$core$Frost$ref$frost$core$Object$Q(_811);
return &$s120;
block174:;
_814 = (frost$core$Int) {58u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_817 = _1.value;
_818 = _814.value;
_819 = _817 == _818;
_820 = (frost$core$Bit) {_819};
_822 = _820.value;
if (_822) goto block176; else goto block177;
block176:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_825 = ((frost$core$Object*) &$s121);
frost$core$Frost$ref$frost$core$Object$Q(_825);
return &$s122;
block177:;
_828 = (frost$core$Int) {59u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_831 = _1.value;
_832 = _828.value;
_833 = _831 == _832;
_834 = (frost$core$Bit) {_833};
_836 = _834.value;
if (_836) goto block179; else goto block180;
block179:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_839 = ((frost$core$Object*) &$s123);
frost$core$Frost$ref$frost$core$Object$Q(_839);
return &$s124;
block180:;
_842 = (frost$core$Int) {60u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_845 = _1.value;
_846 = _842.value;
_847 = _845 == _846;
_848 = (frost$core$Bit) {_847};
_850 = _848.value;
if (_850) goto block182; else goto block183;
block182:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_853 = ((frost$core$Object*) &$s125);
frost$core$Frost$ref$frost$core$Object$Q(_853);
return &$s126;
block183:;
_856 = (frost$core$Int) {61u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_859 = _1.value;
_860 = _856.value;
_861 = _859 == _860;
_862 = (frost$core$Bit) {_861};
_864 = _862.value;
if (_864) goto block185; else goto block186;
block185:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_867 = ((frost$core$Object*) &$s127);
frost$core$Frost$ref$frost$core$Object$Q(_867);
return &$s128;
block186:;
_870 = (frost$core$Int) {62u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_873 = _1.value;
_874 = _870.value;
_875 = _873 == _874;
_876 = (frost$core$Bit) {_875};
_878 = _876.value;
if (_878) goto block188; else goto block189;
block188:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_881 = ((frost$core$Object*) &$s129);
frost$core$Frost$ref$frost$core$Object$Q(_881);
return &$s130;
block189:;
_884 = (frost$core$Int) {63u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_887 = _1.value;
_888 = _884.value;
_889 = _887 == _888;
_890 = (frost$core$Bit) {_889};
_892 = _890.value;
if (_892) goto block191; else goto block192;
block191:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_895 = ((frost$core$Object*) &$s131);
frost$core$Frost$ref$frost$core$Object$Q(_895);
return &$s132;
block192:;
_898 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_901 = _1.value;
_902 = _898.value;
_903 = _901 == _902;
_904 = (frost$core$Bit) {_903};
_906 = _904.value;
if (_906) goto block194; else goto block195;
block194:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_909 = ((frost$core$Object*) &$s133);
frost$core$Frost$ref$frost$core$Object$Q(_909);
return &$s134;
block195:;
_912 = (frost$core$Int) {65u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_915 = _1.value;
_916 = _912.value;
_917 = _915 == _916;
_918 = (frost$core$Bit) {_917};
_920 = _918.value;
if (_920) goto block197; else goto block198;
block197:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_923 = ((frost$core$Object*) &$s135);
frost$core$Frost$ref$frost$core$Object$Q(_923);
return &$s136;
block198:;
_926 = (frost$core$Int) {66u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_929 = _1.value;
_930 = _926.value;
_931 = _929 == _930;
_932 = (frost$core$Bit) {_931};
_934 = _932.value;
if (_934) goto block200; else goto block201;
block200:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_937 = ((frost$core$Object*) &$s137);
frost$core$Frost$ref$frost$core$Object$Q(_937);
return &$s138;
block201:;
_940 = (frost$core$Int) {67u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_943 = _1.value;
_944 = _940.value;
_945 = _943 == _944;
_946 = (frost$core$Bit) {_945};
_948 = _946.value;
if (_948) goto block203; else goto block204;
block203:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_951 = ((frost$core$Object*) &$s139);
frost$core$Frost$ref$frost$core$Object$Q(_951);
return &$s140;
block204:;
_954 = (frost$core$Int) {68u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_957 = _1.value;
_958 = _954.value;
_959 = _957 == _958;
_960 = (frost$core$Bit) {_959};
_962 = _960.value;
if (_962) goto block206; else goto block207;
block206:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_965 = ((frost$core$Object*) &$s141);
frost$core$Frost$ref$frost$core$Object$Q(_965);
return &$s142;
block207:;
_968 = (frost$core$Int) {69u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_971 = _1.value;
_972 = _968.value;
_973 = _971 == _972;
_974 = (frost$core$Bit) {_973};
_976 = _974.value;
if (_976) goto block209; else goto block210;
block209:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_979 = ((frost$core$Object*) &$s143);
frost$core$Frost$ref$frost$core$Object$Q(_979);
return &$s144;
block210:;
_982 = (frost$core$Int) {70u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_985 = _1.value;
_986 = _982.value;
_987 = _985 == _986;
_988 = (frost$core$Bit) {_987};
_990 = _988.value;
if (_990) goto block212; else goto block213;
block212:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_993 = ((frost$core$Object*) &$s145);
frost$core$Frost$ref$frost$core$Object$Q(_993);
return &$s146;
block213:;
_996 = (frost$core$Int) {71u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_999 = _1.value;
_1000 = _996.value;
_1001 = _999 == _1000;
_1002 = (frost$core$Bit) {_1001};
_1004 = _1002.value;
if (_1004) goto block215; else goto block216;
block215:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1007 = ((frost$core$Object*) &$s147);
frost$core$Frost$ref$frost$core$Object$Q(_1007);
return &$s148;
block216:;
_1010 = (frost$core$Int) {72u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1013 = _1.value;
_1014 = _1010.value;
_1015 = _1013 == _1014;
_1016 = (frost$core$Bit) {_1015};
_1018 = _1016.value;
if (_1018) goto block218; else goto block219;
block218:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1021 = ((frost$core$Object*) &$s149);
frost$core$Frost$ref$frost$core$Object$Q(_1021);
return &$s150;
block219:;
_1024 = (frost$core$Int) {73u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1027 = _1.value;
_1028 = _1024.value;
_1029 = _1027 == _1028;
_1030 = (frost$core$Bit) {_1029};
_1032 = _1030.value;
if (_1032) goto block221; else goto block222;
block221:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1035 = ((frost$core$Object*) &$s151);
frost$core$Frost$ref$frost$core$Object$Q(_1035);
return &$s152;
block222:;
_1038 = (frost$core$Int) {74u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1041 = _1.value;
_1042 = _1038.value;
_1043 = _1041 == _1042;
_1044 = (frost$core$Bit) {_1043};
_1046 = _1044.value;
if (_1046) goto block224; else goto block225;
block224:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1049 = ((frost$core$Object*) &$s153);
frost$core$Frost$ref$frost$core$Object$Q(_1049);
return &$s154;
block225:;
_1052 = (frost$core$Int) {75u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1055 = _1.value;
_1056 = _1052.value;
_1057 = _1055 == _1056;
_1058 = (frost$core$Bit) {_1057};
_1060 = _1058.value;
if (_1060) goto block227; else goto block228;
block227:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1063 = ((frost$core$Object*) &$s155);
frost$core$Frost$ref$frost$core$Object$Q(_1063);
return &$s156;
block228:;
_1066 = (frost$core$Int) {76u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1069 = _1.value;
_1070 = _1066.value;
_1071 = _1069 == _1070;
_1072 = (frost$core$Bit) {_1071};
_1074 = _1072.value;
if (_1074) goto block230; else goto block231;
block230:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1077 = ((frost$core$Object*) &$s157);
frost$core$Frost$ref$frost$core$Object$Q(_1077);
return &$s158;
block231:;
_1080 = (frost$core$Int) {77u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1083 = _1.value;
_1084 = _1080.value;
_1085 = _1083 == _1084;
_1086 = (frost$core$Bit) {_1085};
_1088 = _1086.value;
if (_1088) goto block233; else goto block234;
block233:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1091 = ((frost$core$Object*) &$s159);
frost$core$Frost$ref$frost$core$Object$Q(_1091);
return &$s160;
block234:;
_1094 = (frost$core$Int) {78u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1097 = _1.value;
_1098 = _1094.value;
_1099 = _1097 == _1098;
_1100 = (frost$core$Bit) {_1099};
_1102 = _1100.value;
if (_1102) goto block236; else goto block237;
block236:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1105 = ((frost$core$Object*) &$s161);
frost$core$Frost$ref$frost$core$Object$Q(_1105);
return &$s162;
block237:;
_1108 = (frost$core$Int) {79u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1111 = _1.value;
_1112 = _1108.value;
_1113 = _1111 == _1112;
_1114 = (frost$core$Bit) {_1113};
_1116 = _1114.value;
if (_1116) goto block239; else goto block240;
block239:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1119 = ((frost$core$Object*) &$s163);
frost$core$Frost$ref$frost$core$Object$Q(_1119);
return &$s164;
block240:;
_1122 = (frost$core$Int) {80u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1125 = _1.value;
_1126 = _1122.value;
_1127 = _1125 == _1126;
_1128 = (frost$core$Bit) {_1127};
_1130 = _1128.value;
if (_1130) goto block242; else goto block243;
block242:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1133 = ((frost$core$Object*) &$s165);
frost$core$Frost$ref$frost$core$Object$Q(_1133);
return &$s166;
block243:;
_1136 = (frost$core$Int) {81u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1139 = _1.value;
_1140 = _1136.value;
_1141 = _1139 == _1140;
_1142 = (frost$core$Bit) {_1141};
_1144 = _1142.value;
if (_1144) goto block245; else goto block246;
block245:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1147 = ((frost$core$Object*) &$s167);
frost$core$Frost$ref$frost$core$Object$Q(_1147);
return &$s168;
block246:;
_1150 = (frost$core$Int) {82u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1153 = _1.value;
_1154 = _1150.value;
_1155 = _1153 == _1154;
_1156 = (frost$core$Bit) {_1155};
_1158 = _1156.value;
if (_1158) goto block248; else goto block249;
block248:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1161 = ((frost$core$Object*) &$s169);
frost$core$Frost$ref$frost$core$Object$Q(_1161);
return &$s170;
block249:;
_1164 = (frost$core$Int) {83u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1167 = _1.value;
_1168 = _1164.value;
_1169 = _1167 == _1168;
_1170 = (frost$core$Bit) {_1169};
_1172 = _1170.value;
if (_1172) goto block251; else goto block252;
block251:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1175 = ((frost$core$Object*) &$s171);
frost$core$Frost$ref$frost$core$Object$Q(_1175);
return &$s172;
block252:;
_1178 = (frost$core$Int) {84u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1181 = _1.value;
_1182 = _1178.value;
_1183 = _1181 == _1182;
_1184 = (frost$core$Bit) {_1183};
_1186 = _1184.value;
if (_1186) goto block254; else goto block255;
block254:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1189 = ((frost$core$Object*) &$s173);
frost$core$Frost$ref$frost$core$Object$Q(_1189);
return &$s174;
block255:;
_1192 = (frost$core$Int) {85u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1195 = _1.value;
_1196 = _1192.value;
_1197 = _1195 == _1196;
_1198 = (frost$core$Bit) {_1197};
_1200 = _1198.value;
if (_1200) goto block257; else goto block258;
block257:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1203 = ((frost$core$Object*) &$s175);
frost$core$Frost$ref$frost$core$Object$Q(_1203);
return &$s176;
block258:;
_1206 = (frost$core$Int) {86u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1209 = _1.value;
_1210 = _1206.value;
_1211 = _1209 == _1210;
_1212 = (frost$core$Bit) {_1211};
_1214 = _1212.value;
if (_1214) goto block260; else goto block261;
block260:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1217 = ((frost$core$Object*) &$s177);
frost$core$Frost$ref$frost$core$Object$Q(_1217);
return &$s178;
block261:;
_1220 = (frost$core$Int) {87u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1223 = _1.value;
_1224 = _1220.value;
_1225 = _1223 == _1224;
_1226 = (frost$core$Bit) {_1225};
_1228 = _1226.value;
if (_1228) goto block263; else goto block264;
block263:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1231 = ((frost$core$Object*) &$s179);
frost$core$Frost$ref$frost$core$Object$Q(_1231);
return &$s180;
block264:;
_1234 = (frost$core$Int) {88u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1237 = _1.value;
_1238 = _1234.value;
_1239 = _1237 == _1238;
_1240 = (frost$core$Bit) {_1239};
_1242 = _1240.value;
if (_1242) goto block266; else goto block267;
block266:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1245 = ((frost$core$Object*) &$s181);
frost$core$Frost$ref$frost$core$Object$Q(_1245);
return &$s182;
block267:;
_1248 = (frost$core$Int) {89u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1251 = _1.value;
_1252 = _1248.value;
_1253 = _1251 == _1252;
_1254 = (frost$core$Bit) {_1253};
_1256 = _1254.value;
if (_1256) goto block269; else goto block270;
block269:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1259 = ((frost$core$Object*) &$s183);
frost$core$Frost$ref$frost$core$Object$Q(_1259);
return &$s184;
block270:;
_1262 = (frost$core$Int) {90u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1265 = _1.value;
_1266 = _1262.value;
_1267 = _1265 == _1266;
_1268 = (frost$core$Bit) {_1267};
_1270 = _1268.value;
if (_1270) goto block272; else goto block273;
block272:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1273 = ((frost$core$Object*) &$s185);
frost$core$Frost$ref$frost$core$Object$Q(_1273);
return &$s186;
block273:;
_1276 = (frost$core$Int) {91u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1279 = _1.value;
_1280 = _1276.value;
_1281 = _1279 == _1280;
_1282 = (frost$core$Bit) {_1281};
_1284 = _1282.value;
if (_1284) goto block275; else goto block276;
block275:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1287 = ((frost$core$Object*) &$s187);
frost$core$Frost$ref$frost$core$Object$Q(_1287);
return &$s188;
block276:;
_1290 = (frost$core$Int) {92u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1293 = _1.value;
_1294 = _1290.value;
_1295 = _1293 == _1294;
_1296 = (frost$core$Bit) {_1295};
_1298 = _1296.value;
if (_1298) goto block278; else goto block279;
block278:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1301 = ((frost$core$Object*) &$s189);
frost$core$Frost$ref$frost$core$Object$Q(_1301);
return &$s190;
block279:;
_1304 = (frost$core$Int) {93u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1307 = _1.value;
_1308 = _1304.value;
_1309 = _1307 == _1308;
_1310 = (frost$core$Bit) {_1309};
_1312 = _1310.value;
if (_1312) goto block281; else goto block282;
block281:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1315 = ((frost$core$Object*) &$s191);
frost$core$Frost$ref$frost$core$Object$Q(_1315);
return &$s192;
block282:;
_1318 = (frost$core$Int) {94u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1321 = _1.value;
_1322 = _1318.value;
_1323 = _1321 == _1322;
_1324 = (frost$core$Bit) {_1323};
_1326 = _1324.value;
if (_1326) goto block284; else goto block285;
block284:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1329 = ((frost$core$Object*) &$s193);
frost$core$Frost$ref$frost$core$Object$Q(_1329);
return &$s194;
block285:;
_1332 = (frost$core$Int) {95u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1335 = _1.value;
_1336 = _1332.value;
_1337 = _1335 == _1336;
_1338 = (frost$core$Bit) {_1337};
_1340 = _1338.value;
if (_1340) goto block287; else goto block288;
block287:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1343 = ((frost$core$Object*) &$s195);
frost$core$Frost$ref$frost$core$Object$Q(_1343);
return &$s196;
block288:;
_1346 = (frost$core$Int) {96u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1349 = _1.value;
_1350 = _1346.value;
_1351 = _1349 == _1350;
_1352 = (frost$core$Bit) {_1351};
_1354 = _1352.value;
if (_1354) goto block290; else goto block291;
block290:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1357 = ((frost$core$Object*) &$s197);
frost$core$Frost$ref$frost$core$Object$Q(_1357);
return &$s198;
block291:;
_1360 = (frost$core$Int) {97u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1363 = _1.value;
_1364 = _1360.value;
_1365 = _1363 == _1364;
_1366 = (frost$core$Bit) {_1365};
_1368 = _1366.value;
if (_1368) goto block293; else goto block294;
block293:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1371 = ((frost$core$Object*) &$s199);
frost$core$Frost$ref$frost$core$Object$Q(_1371);
return &$s200;
block294:;
_1374 = (frost$core$Int) {98u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1377 = _1.value;
_1378 = _1374.value;
_1379 = _1377 == _1378;
_1380 = (frost$core$Bit) {_1379};
_1382 = _1380.value;
if (_1382) goto block296; else goto block297;
block296:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1385 = ((frost$core$Object*) &$s201);
frost$core$Frost$ref$frost$core$Object$Q(_1385);
return &$s202;
block297:;
_1388 = (frost$core$Int) {99u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1391 = _1.value;
_1392 = _1388.value;
_1393 = _1391 == _1392;
_1394 = (frost$core$Bit) {_1393};
_1396 = _1394.value;
if (_1396) goto block299; else goto block300;
block299:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1399 = ((frost$core$Object*) &$s203);
frost$core$Frost$ref$frost$core$Object$Q(_1399);
return &$s204;
block300:;
_1402 = (frost$core$Int) {100u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1405 = _1.value;
_1406 = _1402.value;
_1407 = _1405 == _1406;
_1408 = (frost$core$Bit) {_1407};
_1410 = _1408.value;
if (_1410) goto block302; else goto block303;
block302:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1413 = ((frost$core$Object*) &$s205);
frost$core$Frost$ref$frost$core$Object$Q(_1413);
return &$s206;
block303:;
_1416 = (frost$core$Int) {101u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1419 = _1.value;
_1420 = _1416.value;
_1421 = _1419 == _1420;
_1422 = (frost$core$Bit) {_1421};
_1424 = _1422.value;
if (_1424) goto block305; else goto block306;
block305:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1427 = ((frost$core$Object*) &$s207);
frost$core$Frost$ref$frost$core$Object$Q(_1427);
return &$s208;
block306:;
_1430 = (frost$core$Int) {102u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1433 = _1.value;
_1434 = _1430.value;
_1435 = _1433 == _1434;
_1436 = (frost$core$Bit) {_1435};
_1438 = _1436.value;
if (_1438) goto block308; else goto block309;
block308:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1441 = ((frost$core$Object*) &$s209);
frost$core$Frost$ref$frost$core$Object$Q(_1441);
return &$s210;
block309:;
_1444 = (frost$core$Int) {103u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1447 = _1.value;
_1448 = _1444.value;
_1449 = _1447 == _1448;
_1450 = (frost$core$Bit) {_1449};
_1452 = _1450.value;
if (_1452) goto block311; else goto block312;
block311:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1455 = ((frost$core$Object*) &$s211);
frost$core$Frost$ref$frost$core$Object$Q(_1455);
return &$s212;
block312:;
_1458 = (frost$core$Int) {104u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1461 = _1.value;
_1462 = _1458.value;
_1463 = _1461 == _1462;
_1464 = (frost$core$Bit) {_1463};
_1466 = _1464.value;
if (_1466) goto block314; else goto block315;
block314:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1469 = ((frost$core$Object*) &$s213);
frost$core$Frost$ref$frost$core$Object$Q(_1469);
return &$s214;
block315:;
_1472 = (frost$core$Int) {105u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1475 = _1.value;
_1476 = _1472.value;
_1477 = _1475 == _1476;
_1478 = (frost$core$Bit) {_1477};
_1480 = _1478.value;
if (_1480) goto block317; else goto block318;
block317:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1483 = ((frost$core$Object*) &$s215);
frost$core$Frost$ref$frost$core$Object$Q(_1483);
return &$s216;
block318:;
_1486 = (frost$core$Int) {106u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1489 = _1.value;
_1490 = _1486.value;
_1491 = _1489 == _1490;
_1492 = (frost$core$Bit) {_1491};
_1494 = _1492.value;
if (_1494) goto block320; else goto block321;
block320:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1497 = ((frost$core$Object*) &$s217);
frost$core$Frost$ref$frost$core$Object$Q(_1497);
return &$s218;
block321:;
_1500 = (frost$core$Int) {107u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1503 = _1.value;
_1504 = _1500.value;
_1505 = _1503 == _1504;
_1506 = (frost$core$Bit) {_1505};
_1508 = _1506.value;
if (_1508) goto block323; else goto block324;
block323:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1511 = ((frost$core$Object*) &$s219);
frost$core$Frost$ref$frost$core$Object$Q(_1511);
return &$s220;
block324:;
_1514 = (frost$core$Int) {108u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1517 = _1.value;
_1518 = _1514.value;
_1519 = _1517 == _1518;
_1520 = (frost$core$Bit) {_1519};
_1522 = _1520.value;
if (_1522) goto block326; else goto block327;
block326:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1525 = ((frost$core$Object*) &$s221);
frost$core$Frost$ref$frost$core$Object$Q(_1525);
return &$s222;
block327:;
_1528 = (frost$core$Int) {109u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1531 = _1.value;
_1532 = _1528.value;
_1533 = _1531 == _1532;
_1534 = (frost$core$Bit) {_1533};
_1536 = _1534.value;
if (_1536) goto block329; else goto block330;
block329:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1539 = ((frost$core$Object*) &$s223);
frost$core$Frost$ref$frost$core$Object$Q(_1539);
return &$s224;
block330:;
_1542 = (frost$core$Int) {110u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1545 = _1.value;
_1546 = _1542.value;
_1547 = _1545 == _1546;
_1548 = (frost$core$Bit) {_1547};
_1550 = _1548.value;
if (_1550) goto block332; else goto block333;
block332:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1553 = ((frost$core$Object*) &$s225);
frost$core$Frost$ref$frost$core$Object$Q(_1553);
return &$s226;
block333:;
_1556 = (frost$core$Int) {111u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1559 = _1.value;
_1560 = _1556.value;
_1561 = _1559 == _1560;
_1562 = (frost$core$Bit) {_1561};
_1564 = _1562.value;
if (_1564) goto block335; else goto block336;
block335:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1567 = ((frost$core$Object*) &$s227);
frost$core$Frost$ref$frost$core$Object$Q(_1567);
return &$s228;
block336:;
_1570 = (frost$core$Int) {112u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1573 = _1.value;
_1574 = _1570.value;
_1575 = _1573 == _1574;
_1576 = (frost$core$Bit) {_1575};
_1578 = _1576.value;
if (_1578) goto block338; else goto block339;
block338:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1581 = ((frost$core$Object*) &$s229);
frost$core$Frost$ref$frost$core$Object$Q(_1581);
return &$s230;
block339:;
_1584 = (frost$core$Int) {113u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:10:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1587 = _1.value;
_1588 = _1584.value;
_1589 = _1587 == _1588;
_1590 = (frost$core$Bit) {_1589};
_1592 = _1590.value;
if (_1592) goto block341; else goto block342;
block341:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1595 = ((frost$core$Object*) &$s231);
frost$core$Frost$ref$frost$core$Object$Q(_1595);
return &$s232;
block342:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:10
_1599 = (frost$core$Int) {10u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s233, _1599);
abort(); // unreachable
block1:;
goto block344;
block344:;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




